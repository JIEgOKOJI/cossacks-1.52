#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_1002e3e0 = 0;
long long DAT_1002e3e8 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnitType(&DAT_1002e3e8,"Krestian_Sved(fr)");
  RegisterUnitType(&DAT_1002e3e0,"Kreposnoi_pruss(au)");
  ChangeFriends(0,0x11);
  SetPlayerName(1,"AUSTRIANS");
  uStack_8 = 0x1000111c;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SetResource(0,3,20000);
    SetResource(0,1,15000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,20000);
    SetResource(0,4,20000);
    SetResource(1,3,20000);
    SetResource(1,1,10000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    StartAI(1,"AUSTRIA.0",0,0,1,2);
    ShowPage("#PAGE1");
    RunTimer(1,100);
  }
  uVar1 = TimerDone(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount1(&DAT_1002e3e8,0);
      if (iVar2 == 0) {
        GetTotalAmount1(&DAT_1002e3e0,0);
        if (iVar2 == 0) {
          SetTrigg(2,0);
          ShowPage("#PAGE2");
          LooseGame();
        }
      }
    }
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount1(&DAT_1002e3e8,1);
      if (iVar2 == 0) {
        GetTotalAmount1(&DAT_1002e3e0,1);
        if (iVar2 == 0) {
          SetTrigg(3,0);
          ShowPage("#PAGE3");
          ShowVictory();
        }
      }
    }
  }
  uStack_8 = 0x10001457;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
