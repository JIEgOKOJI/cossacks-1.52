#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1002e3e0 = 0;
long long DAT_1002e3e8 = 0;

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnitType(&DAT_1002e3e8,"Krestian_Sved(fr)");
  RegisterUnitType(&DAT_1002e3e0,"Kreposnoi_portugal(sp)");
  SetStandartVictory();
  SetPlayerName(1,"FRANCE");
  SetPlayerName(2,"SPAIN");
  ChangeFriends(1,6);
  ChangeFriends(2,6);
  uStack_8 = 0x1000115a;
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
    StartAI(1,"FRANCE.0",0,1,0,0xffffffff);
    StartAI(2,"SPAIN.0",0,1,0,0xffffffff);
    RunTimer(1,100);
  }
  uStack_8 = 0x1000143a;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
