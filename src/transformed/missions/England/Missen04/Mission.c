#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
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

/* Stubs for missing internal functions */
int FUN_100290d0() { return 0; }

void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002e410,"Zone1");
  RegisterZone(&DAT_1002e418,"Zone2");
  RegisterZone(&DAT_1002e420,"Zone3");
  RegisterZone(&DAT_1002e428,"Zone4");
  RegisterZone(&DAT_1002e430,"Zone5");
  RegisterZone(&DAT_1002e438,"Zone6");
  RegisterZone(&DAT_1002e440,"Zone7");
  RegisterUnits(&DAT_1002e3e0,"Group1");
  RegisterUnits(&DAT_1002e3f0,"Group2");
  RegisterUnits(&DAT_1002e3e8,"Group3");
  RegisterUnits(&DAT_1002e400,"Group4");
  RegisterUnits(&DAT_1002e3f8,"Group5");
  RegisterUnits(&DAT_1002e408,"Group6");
  SetPlayerName(1,"SPAIN");
  SetPlayerName(5,"PIRATES");
  uStack_8 = 0x10001253;
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
    SetResource(0,3,200000);
    SetResource(0,1,50000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,50000);
    SetResource(0,4,50000);
    ShowPage(0x100290dc);
    ShowPage(FUN_100290d0);
    SelectUnits(&DAT_1002e3f0,0);
    SelSendAndKill(1,&DAT_1002e418,0xb4,0);
    SelectUnits(&DAT_1002e400,0);
    SelSendAndKill(5,&DAT_1002e410,0x5a,0);
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002e3f0);
    if (iVar2 < 2) {
      SetTrigg(0x1e,0);
      SelectUnits(&DAT_1002e3e8,0);
      SelSendAndKill(1,&DAT_1002e410,0,0);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002e410,&DAT_1002e400);
    if (0 < iVar2) {
      SelectUnits(&DAT_1002e400,0);
      SelAttackGroup(5,&DAT_1002e3f0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002e400);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002e3f0);
      if (iVar2 == 0) {
        SetTrigg(2,0);
        ShowPage("#PAGE2");
        SelectUnits(&DAT_1002e400,0);
        SelSendTo(5,&DAT_1002e440,0,0);
        SelSendTo(5,&DAT_1002e438,0,2);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002e400);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount0(&DAT_1002e3f0);
      if (iVar2 == 0) {
        SetTrigg(3,0);
        ShowPage("#PAGE3");
        SelectUnits(&DAT_1002e408,0);
        SelSendAndKill(5,&DAT_1002e430,0,0);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_1002e428,&DAT_1002e3e0);
      if (0 < iVar2) {
        iVar2 = GetTotalAmount0(&DAT_1002e408);
        if (iVar2 == 0) {
          SetTrigg(4,0);
          ShowPage("#PAGE4");
          ShowVictory();
        }
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002e3e0);
    if (iVar2 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      LooseGame();
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002e418,&DAT_1002e3f0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      ShowPage("#PAGE6");
      LooseGame();
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002e420,&DAT_1002e3e0);
    if (0 < iVar2) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002e438,&DAT_1002e400);
    if (0 < iVar2) {
      SetTrigg(8,0);
      ShowPage("#PAGE8");
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002e430,&DAT_1002e408);
    if (0 < iVar2) {
      SelectUnits(&DAT_1002e408,0);
      SelAttackGroup(5,&DAT_1002e3e0);
    }
  }
  uStack_8 = 0x10001991;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
