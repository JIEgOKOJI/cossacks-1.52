#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002901c[] = "SWED";
long long DAT_1002e3e0 = 0;
long long DAT_1002e3e8 = 0;
long long DAT_1002e3f0 = 0;
long long DAT_1002e3f8 = 0;
long long DAT_1002e400 = 0;
long long DAT_1002e408 = 0;
long long DAT_1002e410 = 0;
long long DAT_1002e418 = 0;
long long DAT_1002e420 = 0;
long long DAT_1002e428 = 0;
long long DAT_1002e430 = 0;
long long DAT_1002e438 = 0;
long long DAT_1002e440 = 0;
long long DAT_1002e448 = 0;
long long DAT_1002e450 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_1002e3e0,"Group1");
  RegisterUnits(&DAT_1002e3f0,"Group2");
  RegisterUnits(&DAT_1002e3e8,"Group3");
  RegisterUnits(&DAT_1002e400,"Group4");
  RegisterUnits(&DAT_1002e3f8,"Group5");
  RegisterUnits(&DAT_1002e410,"Group6");
  RegisterUnits(&DAT_1002e408,"Group7");
  RegisterUnits(&DAT_1002e420,"Group8");
  RegisterUnits(&DAT_1002e418,"Group9");
  RegisterUnitType(&DAT_1002e428,"PorE(SA)");
  RegisterUnitType(&DAT_1002e430,"WALL_UKR(SA)");
  RegisterUnitType(&DAT_1002e438,"WALL_EV(SA)");
  RegisterUnitType(&DAT_1002e440,"PorE(SV)");
  RegisterUnitType(&DAT_1002e448,"WALL_UKR(SV)");
  RegisterUnitType(&DAT_1002e450,"WALL_EV(SV)");
  EnableUnit(0,&DAT_1002e428,0);
  EnableUnit(0,&DAT_1002e430,0);
  EnableUnit(0,&DAT_1002e438,0);
  EnableUnit(1,&DAT_1002e440,0);
  EnableUnit(1,&DAT_1002e448,0);
  EnableUnit(1,&DAT_1002e450,0);
  SetStandartVictory();
  SetPlayerName(1,DAT_1002901c);
  uStack_8 = 0x10001323;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(100,0);
    SetResource(0,3,10000);
    SetResource(0,1,10000);
    SetResource(0,0,10000);
    SetResource(0,2,10000);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
    SetResource(1,3,10000);
    SetResource(1,1,10000);
    SetResource(1,0,10000);
    SetResource(1,2,10000);
    SetResource(1,5,10000);
    SetResource(1,4,10000);
    SelectUnits1(1,&DAT_1002e408,0);
    SelectUnits1(1,&DAT_1002e420,1);
    SelectUnits1(1,&DAT_1002e418,1);
    DoNotUseSelInAI(1);
    StartAI(1,"SVEDEN.0",0,1,1,-1);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    RunTimer(1,500);
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits1(1,&DAT_1002e408,0);
    SelAttackGroup(1,&DAT_1002e3e8);
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002e3e8);
    if (iVar2 == 0) {
      SetTrigg(0x62,0);
      SetTrigg(99,0);
    }
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits1(1,&DAT_1002e420,0);
    SelAttackGroup(1,&DAT_1002e3e0);
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002e3e0);
    if (iVar2 == 0) {
      SetTrigg(0x60,0);
      SetTrigg(0x61,0);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits1(1,&DAT_1002e418,0);
    SelAttackGroup(1,&DAT_1002e3f8);
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002e3f8);
    if (iVar2 == 0) {
      SetTrigg(0x5e,0);
      SetTrigg(0x5f,0);
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5d,0);
      SelectUnits1(0,&DAT_1002e3f0,0);
      SelectUnits1(0,&DAT_1002e400,1);
      SelectUnits1(0,&DAT_1002e410,1);
      SelDie(0);
    }
  }
  uStack_8 = 0x100018f7;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
