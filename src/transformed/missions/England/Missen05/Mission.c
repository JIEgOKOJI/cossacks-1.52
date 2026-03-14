#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1002e3e0 = 0;
long long DAT_1002e3e8 = 0;
long long DAT_1002e3f0 = 0;

/* Forward declarations */
void FUN_100014f0(int param_1);


void __cdecl FUN_100014f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount0(param_1);
  uStack_8 = 0x1000152b;
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_1002e3e0,"Group1");
  RegisterUnits(&DAT_1002e3f0,"Group2");
  RegisterUnits(&DAT_1002e3e8,"Group3");
  SetPlayerName(1,"SPAIN");
  uStack_8 = 0x10001122;
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
    SetResource(0,3,10000000);
    SetResource(0,1,10000000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,10000000);
    SetResource(0,4,10000000);
    SetResource(1,3,10000000);
    SetResource(1,1,10000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,10000000);
    SetResource(1,4,10000000);
    ShowPage("#PAGE1");
    StartAI(1,"SPAIN.0",2,2,1,2);
    SetAIProperty(1,0x1001,0);
    ShowPage("#PAGE1A");
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    FUN_100014f0(&DAT_1002e3e8);
    if (iVar2 == 0) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      ShowVictory();
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    FUN_100014f0(&DAT_1002e3e0);
    if (iVar2 == 0) {
      FUN_100014f0(&DAT_1002e3f0);
      if (iVar2 == 0) {
        SetTrigg(3,0);
        ShowPage("#PAGE3");
        LooseGame();
      }
    }
  }
  uStack_8 = 0x10001433;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
