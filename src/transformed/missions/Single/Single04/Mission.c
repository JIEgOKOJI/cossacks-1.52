#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetStandartVictory();
  SetPlayerName(1,"TURKEY");
  SetPlayerName(2,"RUSSIA");
  ChangeFriends(1,6);
  ChangeFriends(2,6);
  ChangeFriends(0,0x11);
  uStack_8 = 0x10001138;
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
    SetResource(2,3,10000);
    SetResource(2,1,10000);
    SetResource(2,0,10000);
    SetResource(2,2,10000);
    SetResource(2,5,10000);
    SetResource(2,4,10000);
    StartAI(1,"TURKISH.0",0,1,1,0xffffffff);
    StartAI(2,"RUSSIA.0",0,1,1,0xffffffff);
  }
  uStack_8 = 0x100013f4;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
