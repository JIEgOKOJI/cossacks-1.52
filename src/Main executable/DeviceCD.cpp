// ==============================================
// Эмулятор MCI на базе SDL2 Mixer
// MR.CODERMAN 2025
// ==============================================
#include "windows.h"
#pragma pack(1)
#include "DeviceCD.h"
#include "TMixer.h"
#include <stdio.h>
#include "ResFile.h"
#include "gFile.h"
#include <SDL.h>
#include <SDL_mixer.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Глобальный экземпляр проигрывателя
CDeviceCD CDPLAY;

// Конфигурация треков
int StartTrack = 2;
int NTracks = 19;
byte TracksMask[32] = { 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

// Буферы загруженных WAV
static Mix_Chunk* chunkTracks[32] = { nullptr };
static int currentChannel = -1;
static DWORD currentVolume = 5000;
static bool SDL_Mixer_Initialized = false;

// Переменные для плейлиста
static int PrevTrack1 = -1, PrevTrack2 = -1, PrevTrack3 = -1;
static int NextCommand = -1;

// Deferred playback — set by channelFinished callback, consumed by main thread
static volatile int _cd_pending_action = 0; // 0=none, 1=PlayRandomTrack, 2=PlayCDTrack(NextCommand-1000), 3=PlayCDTrack(NextCommand)
static volatile bool _cd_halt_in_progress = false; // suppress callback during explicit halt

// Предварительные объявления
static void channelFinished(int channel);
void PlayCDTrack(int Id);
void PlayRandomTrack();
extern HWND hwnd;
extern int CurrentNation, PlayMode;

/////////////////////////////////////////////////////////////////////////////
// Реализация CDeviceCD

CDeviceCD::CDeviceCD()
{
    // Инициализация SDL_mixer (один раз)
    if (!SDL_Mixer_Initialized) {
        if (Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 4096) < 0) {
            SDL_QuitSubSystem(SDL_INIT_AUDIO);
            SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
            SDL_InitSubSystem(SDL_INIT_AUDIO);
            Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 4096);
        }
        Mix_ChannelFinished(channelFinished);

        SDL_Mixer_Initialized = true;
    }

    // Загрузка конфигурации треков
    if (GFILE* f = Gopen("Tracks.cd", "r")) {
        Gscanf(f, "%d%d", &StartTrack, &NTracks);
        for (int i = 0; i < NTracks; ++i)
            Gscanf(f, "%d", TracksMask + i);
        Gclose(f);
    }

    Open();
}


CDeviceCD::~CDeviceCD()
{
    Close();
}

bool CDeviceCD::Open()
{
    int loadedCount = 0;
    FOpened = FALSE;
    for (int i = 0; i < NTracks; ++i) {
        int trackNum = StartTrack + i;
        char filename[260];
        sprintf(filename, "Tracks/Track_%d.wav", trackNum);

        // Если ранее уже загружен, освободить
        if (chunkTracks[i]) {
            Mix_FreeChunk(chunkTracks[i]);
            chunkTracks[i] = nullptr;
        }

        // Простой вызов загрузки WAV
        chunkTracks[i] = Mix_LoadWAV(filename);
        if (chunkTracks[i]) {
            loadedCount++;
        }
    }

    // Успешно, если хотя бы один трек загружен
    FOpened = (loadedCount > 0);
    fprintf(stderr, "[CD] Open: loadedCount=%d NTracks=%d StartTrack=%d FOpened=%d\n", loadedCount, NTracks, StartTrack, FOpened);
    return FOpened;
}

bool CDeviceCD::Close()
{
    if (!FOpened)
        return FALSE;

    // Остановка всех каналов и очистка
    _cd_halt_in_progress = true;
    Mix_HaltChannel(-1);
    _cd_halt_in_progress = false;
    _cd_pending_action = 0;
    for (int i = 0; i < NTracks; ++i) {
        if (chunkTracks[i]) {
            Mix_FreeChunk(chunkTracks[i]);
            chunkTracks[i] = nullptr;
        }
    }

    FOpened = FALSE;
    return TRUE;
}

bool CDeviceCD::Pause()
{
    if (FOpened && currentChannel != -1) {
        Mix_Pause(currentChannel);
        return TRUE;
    }
    return FALSE;
}

bool CDeviceCD::Resume()
{
    if (FOpened && currentChannel != -1) {
        Mix_Resume(currentChannel);
        return TRUE;
    }
    return FALSE;
}

bool CDeviceCD::Stop()
{
    if (FOpened && currentChannel != -1) {
        _cd_halt_in_progress = true;
        Mix_HaltChannel(currentChannel);
        _cd_halt_in_progress = false;
        _cd_pending_action = 0; // clear any action set by callback during halt
        currentChannel = -1;
        return TRUE;
    }
    return FALSE;
}

DWORD CDeviceCD::GetVolume()
{
    return currentVolume;
}

bool CDeviceCD::SetVolume(DWORD Volume)
{
    currentVolume = Volume;
    int sdlVol = (Volume * MIX_MAX_VOLUME) / 10000;
    Mix_Volume(-1, sdlVol);
    return TRUE;
}

bool CDeviceCD::Play(DWORD Track)
{
    if (!FOpened)
        return FALSE;

    if (Track < StartTrack || Track >= (DWORD)(StartTrack + NTracks))
        return FALSE;

    int idx = Track - StartTrack;
    if (!chunkTracks[idx])
        return FALSE;

    // Остановка предыдущего трека (suppress callback to avoid re-trigger)
    if (currentChannel != -1) {
        _cd_halt_in_progress = true;
        Mix_HaltChannel(currentChannel);
        _cd_halt_in_progress = false;
        _cd_pending_action = 0;
    }

    // Воспроизведение нового трека
    currentChannel = Mix_PlayChannel(-1, chunkTracks[idx], 0);
    return (currentChannel >= 0);
}

/////////////////////////////////////////////////////////////////////////////
// Callback при окончании канала

static void channelFinished(int channel)
{
    if (channel != currentChannel)
        return;

    // Suppress callback during explicit halt (Play/Stop from main thread)
    if (_cd_halt_in_progress)
        return;

    // IMPORTANT: This callback runs inside SDL_mixer's audio thread with the
    // audio lock held. Calling Mix_PlayChannel here would deadlock.
    // Instead, set a flag and let the main thread handle it.

    if (!PlayMode)
    {
        NextCommand = -1;
        return;
    }

    if (NextCommand == -1)
    {
        _cd_pending_action = 1; // request PlayRandomTrack on main thread
    }
    else if (NextCommand >= 1000)
    {
        _cd_pending_action = 2; // request PlayCDTrack(NextCommand - 1000)
    }
    else
    {
        _cd_pending_action = 3; // request PlayCDTrack(NextCommand)
    }
}

// Called from the main thread (e.g. ProcessMessages) to handle deferred track changes
void PollCDPlayback()
{
    int action = _cd_pending_action;
    if (!action) return;
    _cd_pending_action = 0;

    switch (action)
    {
    case 1:
        PlayRandomTrack();
        break;
    case 2:
        PlayCDTrack(NextCommand - 1000);
        NextCommand = -1;
        break;
    case 3:
        PlayCDTrack(NextCommand);
        NextCommand = -1;
        break;
    }
}


/////////////////////////////////////////////////////////////////////////////
// Глобальные функции

void PlayCDTrack(int Id)
{
    CDPLAY.Play(Id);
}

void PlayRandomTrack()
{
    if (PlayMode == 1 && CurrentNation != -1) {
        PlayCDTrack(TracksMask[CurrentNation]);
        return;
    }

    int Track;
    do {
        Track = (((GetTickCount() & 4095) * NTracks) >> 12) + StartTrack;
    } while (Track == PrevTrack1 || Track == PrevTrack2 || Track == PrevTrack3);

    PrevTrack3 = PrevTrack2;
    PrevTrack2 = PrevTrack1;
    PrevTrack1 = Track;

    PlayCDTrack(Track);
}

void StopPlayCD()
{
    CDPLAY.Stop();
    NextCommand = -1;
}

int GetCDVolume()
{
    return CDPLAY.GetVolume() / 10;
}

void SetCDVolume(int Vol)
{
    CDPLAY.SetVolume(Vol * 10);
}

// Legacy callback for MCINotify
LRESULT CD_MCINotify(UINT wFlags, LONG lDevId)
{
    return 0;
}