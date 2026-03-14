#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1002e3e0 = 0;
long long DAT_1002e3e8 = 0;
long long DAT_1002e3f0 = 0;

/* Forward declarations */
void FUN_10001cb0(int param_1);
void FUN_10001d00(int param_1,char param_2);


void __cdecl FUN_10001cb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount0(param_1);
  uStack_8 = 0x10001ceb;
  return;
}





void __cdecl FUN_10001d00(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount1(param_1,(int)param_2);
  uStack_8 = 0x10001d3f;
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002e3e8,"Zone1");
  RegisterUnits(&DAT_1002e3e0,"Group1");
  SetPlayerName(1,"PIEMOUNT");
  SetPlayerName(2,"TURKEY");
  SetPlayerName(3,"ALJERIANS");
  SetPlayerName(5,"MONKS");
  RegisterUnitType(&DAT_1002e3f0,"NotrDam(fr)");
  ChangeFriends(1,0xe);
  ChangeFriends(2,0xe);
  ChangeFriends(3,0xe);
  uStack_8 = 0x100011bf;
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
    SetResource(3,3,10000);
    SetResource(3,1,10000);
    SetResource(3,0,10000);
    SetResource(3,2,10000);
    SetResource(3,5,10000);
    SetResource(3,4,10000);
    SetResource(5,3,9999999);
    SetResource(5,1,9999999);
    SetResource(5,0,10000);
    SetResource(5,2,10000);
    SetResource(5,5,9999999);
    SetResource(5,4,9999999);
    StartAI(1,"PIEMONT.0",0,1,1,0xffffffff);
    StartAI(2,"TURKISH.0",0,1,1,0xffffffff);
    StartAI(3,"ALGIR.0",0,1,1,0xffffffff);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    FUN_10001d00(&DAT_1002e3f0,0);
    if (0 < iVar2) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      ShowVictory();
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    FUN_10001cb0(&DAT_1002e3e0);
    if (iVar2 == 0) {
      SetTrigg(3,0);
      ShowPage("#PAGE3");
      LooseGame();
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    FUN_10001d00(&DAT_1002e3f0,1);
    if (iVar2 < 1) {
      FUN_10001d00(&DAT_1002e3f0,2);
      if (iVar2 < 1) {
        FUN_10001d00(&DAT_1002e3f0,3);
        if (iVar2 < 1) goto LAB_10001754;
      }
    }
    SetTrigg(4,0);
    ShowPage("#PAGE4");
    LooseGame();
  }
LAB_10001754:
  iVar2 = GetUnitsAmount0(&DAT_1002e3e8,0);
  if (0 < iVar2) {
    iVar2 = GetUnitsAmount0(&DAT_1002e3e8,1);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002e3e8,2);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_1002e3e8,3);
        if (iVar2 == 0) {
          iVar2 = GetUnitsAmount0(&DAT_1002e3e8,5);
          if (iVar2 == 0) {
            SelectUnits1(5,&DAT_1002e3e0,0);
            SelChangeNation(5,0);
          }
        }
      }
    }
  }
  iVar2 = GetUnitsAmount0(&DAT_1002e3e8,1);
  if (0 < iVar2) {
    iVar2 = GetUnitsAmount0(&DAT_1002e3e8,0);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002e3e8,2);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_1002e3e8,3);
        if (iVar2 == 0) {
          iVar2 = GetUnitsAmount0(&DAT_1002e3e8,5);
          if (iVar2 == 0) {
            SelectUnits1(5,&DAT_1002e3e0,0);
            SelChangeNation(5,1);
          }
        }
      }
    }
  }
  iVar2 = GetUnitsAmount0(&DAT_1002e3e8,2);
  if (0 < iVar2) {
    iVar2 = GetUnitsAmount0(&DAT_1002e3e8,1);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002e3e8,0);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_1002e3e8,3);
        if (iVar2 == 0) {
          iVar2 = GetUnitsAmount0(&DAT_1002e3e8,5);
          if (iVar2 == 0) {
            SelectUnits1(5,&DAT_1002e3e0,0);
            SelChangeNation(5,2);
          }
        }
      }
    }
  }
  iVar2 = GetUnitsAmount0(&DAT_1002e3e8,3);
  if (0 < iVar2) {
    iVar2 = GetUnitsAmount0(&DAT_1002e3e8,1);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002e3e8,2);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_1002e3e8,0);
        if (iVar2 == 0) {
          iVar2 = GetUnitsAmount0(&DAT_1002e3e8,5);
          if (iVar2 == 0) {
            SelectUnits1(5,&DAT_1002e3e0,0);
            SelChangeNation(5,3);
          }
        }
      }
    }
  }
  uStack_8 = 0x10001a89;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
