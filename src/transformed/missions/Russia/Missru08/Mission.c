#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_1002e3e8 = 0;
long long DAT_1002e3f0 = 0;
long long DAT_1002e3f8 = 0;
long long DAT_1002e400 = 0;
long long DAT_1002e408 = 0;
long long DAT_1002e410 = 0;
long long DAT_1002e418 = 0;
long long DAT_1002e420 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002e408,"Zone1");
  RegisterZone(&DAT_1002e410,"Zone2");
  RegisterUnits(&DAT_1002e3f0,"Group2");
  RegisterUnits(&DAT_1002e3e8,"Group3");
  RegisterUnitType(&DAT_1002e400,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_1002e3f8,"Krestian_Sved(SV)");
  RegisterUnitType(&DAT_1002e418,"Russki_Center(RU)");
  RegisterUnitType(&DAT_1002e420,"Center_Swesair(SV)");
  SetPlayerName(1,"SVEDES");
  SetPlayerName(2,"ROBBERS");
  uStack_8 = 0x100011d7;
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
    SetResource(0,3,5000);
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(1,3,5000);
    SetResource(1,1,10000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    InitialUpgrade("Group1","MAINSV");
    StartAI(1,"SVEDEN.0",2,0,1,3);
    ShowPage("#PAGE1");
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_1002e3f8,1);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount1(&DAT_1002e400,1);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount1(&DAT_1002e420,1);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount1(&DAT_1002e418,1);
          if (iVar2 == 0) {
            SetTrigg(2,0);
            ShowPage("#PAGE2");
            ShowVictory();
          }
        }
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_1002e3f8,0);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount1(&DAT_1002e400,0);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount1(&DAT_1002e420,0);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount1(&DAT_1002e418,0);
          if (iVar2 == 0) {
            SetTrigg(3,0);
            ShowPage("#PAGE3");
            LooseGame();
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (20000 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002e3f0);
      if (0 < iVar2) {
        SetTrigg(0x32,0);
        SelectUnits(&DAT_1002e3f0,0);
        SelSendAndKill(2,&DAT_1002e408,0,0);
      }
    }
  }
  iVar2 = GetUnitsAmount1(&DAT_1002e408,&DAT_1002e3f0);
  if (0 < iVar2) {
    iVar2 = GetUnitsAmount0(&DAT_1002e408,0);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002e3f0,&DAT_1002e408,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002e3e8);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_1002e410,0);
      if (0 < iVar2) {
        SetTrigg(4,0);
        ShowPage("#PAGE4");
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetTotalAmount0(&DAT_1002e3e8);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_1002e410,0);
      if (0 < iVar2) {
        AttackEnemyInZone(&DAT_1002e3e8,&DAT_1002e410,0);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (60000 < iVar2) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetGlobalTime();
      if (80000 < iVar2) {
        SetTrigg(6,0);
        ShowPage("#PAGE6");
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetResource(0,0);
      if (99999 < iVar2) {
        SetTrigg(7,0);
        AddResource(0,0,-100000);
        ShowPage("#PAGE7");
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetGlobalTime();
      if (81000 < iVar2) {
        SetTrigg(7,0);
        SetTrigg(3,0);
        ShowPage("#PAGE7A");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (100000 < iVar2) {
      SetTrigg(8,0);
      ShowPage("#PAGE8");
      AddResource(0,1,10000);
    }
  }
  uStack_8 = 0x100019e3;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
