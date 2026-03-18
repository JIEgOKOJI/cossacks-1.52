#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_1002f3e0 = 0;
long long DAT_1002f3e8 = 0;
long long DAT_1002f3f0 = 0;
long long DAT_1002f3f8 = 0;
long long DAT_1002f400 = 0;
long long DAT_1002f408 = 0;
long long DAT_1002f410 = 0;
long long DAT_1002f418 = 0;
long long DAT_1002f420 = 0;
long long DAT_1002f428 = 0;
long long DAT_1002f430 = 0;
long long DAT_1002f438 = 0;
long long DAT_1002f440 = 0;
long long DAT_1002f448 = 0;
long long DAT_1002f450 = 0;
long long DAT_1002f458 = 0;
long long DAT_1002f460 = 0;
long long DAT_1002f468 = 0;
long long DAT_1002f470 = 0;
long long DAT_1002f478 = 0;
long long DAT_1002f480 = 0;
long long DAT_1002f488 = 0;
long long DAT_1002f490 = 0;
long long DAT_1002f498 = 0;
long long DAT_1002f4a0 = 0;
long long DAT_1002f4a8 = 0;
long long DAT_1002f4b0 = 0;
long long DAT_1002f4b8 = 0;
long long DAT_1002f4c0 = 0;
long long DAT_1002f4c8 = 0;
long long DAT_1002f4d0 = 0;
long long DAT_1002f4d8 = 0;
long long DAT_1002f4e0 = 0;
long long DAT_1002f4e8 = 0;
long long DAT_1002f4f0 = 0;
long long DAT_1002f4f8 = 0;
long long DAT_1002f500 = 0;
long long DAT_1002f508 = 0;
long long DAT_1002f510 = 0;
long long DAT_1002f518 = 0;
long long DAT_1002f520 = 0;
long long DAT_1002f528 = 0;
long long DAT_1002f530 = 0;
long long DAT_1002f538 = 0;
long long DAT_1002f540 = 0;
long long DAT_1002f548 = 0;
long long DAT_1002f550 = 0;
long long DAT_1002f558 = 0;
long long DAT_1002f560 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f498,"Zone1");
  RegisterZone(&DAT_1002f4a0,"Zone2");
  RegisterZone(&DAT_1002f4a8,"Zone3");
  RegisterZone(&DAT_1002f4b0,"Zone4");
  RegisterZone(&DAT_1002f4b8,"Zone5");
  RegisterZone(&DAT_1002f4c8,"Zone6");
  RegisterZone(&DAT_1002f4d0,"Zone7");
  RegisterZone(&DAT_1002f490,"Zone7a");
  RegisterZone(&DAT_1002f4d8,"Zone9");
  RegisterZone(&DAT_1002f450,"Zone10");
  RegisterZone(&DAT_1002f448,"Zone11");
  RegisterZone(&DAT_1002f460,"Zone12");
  RegisterZone(&DAT_1002f458,"Zone13");
  RegisterZone(&DAT_1002f470,"Zone14");
  RegisterZone(&DAT_1002f468,"Zone15");
  RegisterZone(&DAT_1002f480,"Zone16");
  RegisterZone(&DAT_1002f478,"Zone17");
  RegisterZone(&DAT_1002f488,"Zone18");
  RegisterUnits(&DAT_1002f400,"Group1");
  RegisterUnits(&DAT_1002f410,"Group2");
  RegisterUnits(&DAT_1002f408,"Group3");
  RegisterUnits(&DAT_1002f420,"Group4");
  RegisterUnits(&DAT_1002f428,"Group7");
  RegisterUnits(&DAT_1002f558,"Group7a");
  RegisterUnits(&DAT_1002f560,"Group7b");
  RegisterUnits(&DAT_1002f440,"Group8");
  RegisterUnits(&DAT_1002f550,"Group8a");
  RegisterUnits(&DAT_1002f438,"Group9");
  RegisterUnits(&DAT_1002f4e8,"Group10");
  RegisterUnits(&DAT_1002f3e0,"Group10a");
  RegisterUnits(&DAT_1002f538,"Group11");
  RegisterUnits(&DAT_1002f3e8,"Group11a");
  RegisterUnits(&DAT_1002f540,"Group12");
  RegisterUnits(&DAT_1002f520,"Group13");
  RegisterUnits(&DAT_1002f530,"Group14");
  RegisterUnits(&DAT_1002f508,"Group15");
  RegisterUnits(&DAT_1002f518,"Group16");
  RegisterUnits(&DAT_1002f4f0,"Group17");
  RegisterUnits(&DAT_1002f4f8,"Group18");
  RegisterUnits(&DAT_1002f548,"Group19");
  RegisterUnits(&DAT_1002f3f0,"Group19a");
  RegisterUnits(&DAT_1002f528,"Group20");
  RegisterUnits(&DAT_1002f500,"Group21");
  RegisterUnits(&DAT_1002f510,"Group22");
  RegisterVar(&DAT_1002f418,8);
  RegisterVar(&DAT_1002f430,8);
  RegisterUnitType(&DAT_1002f4e0,"Kirasir(SV)");
  RegisterUnitType(&DAT_1002f3f8,"Dragun_18(SV)");
  RegisterFormation(&DAT_1002f4c0,"#SQUARE36");
  ChangeFriends(0,0x99);
  ChangeFriends(4,0x11);
  SetPlayerName(1,"SVEDES");
  SetPlayerName(3,"DWELLERS");
  SetPlayerName(4,"RUS_ARMY");
  uStack_8 = 0x10001685;
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
    SetResource(0,3,50000000);
    SetResource(0,1,50000000);
    SetResource(0,0,50000000);
    SetResource(0,2,50000000);
    SetResource(0,5,50000000);
    SetResource(0,4,50000000);
    SetResource(1,3,50000000);
    SetResource(1,1,50000000);
    SetResource(1,0,50000000);
    SetResource(1,2,50000000);
    SetResource(1,5,50000000);
    SetResource(1,4,50000000);
    SetResource(4,3,50000000);
    SetResource(4,1,50000000);
    SetResource(4,0,50000000);
    SetResource(4,2,50000000);
    SetResource(4,5,50000000);
    SetResource(4,4,50000000);
    ShowPage("#PAGE1");
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (3000 < iVar2) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      AttackEnemyInZone(&DAT_1002f410,&DAT_1002f498,1);
      AttackEnemyInZone(&DAT_1002f408,&DAT_1002f498,1);
      RunTimer(1,100);
    }
  }
  uVar1 = TimerDone(1);
  if ((uVar1 & 0xff) != 0) {
    AttackEnemyInZone(&DAT_1002f410,&DAT_1002f498,1);
    AttackEnemyInZone(&DAT_1002f408,&DAT_1002f498,1);
    RunTimer(1,100);
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f4a8,0);
    if (0 < iVar2) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
      SelectUnits(&DAT_1002f548,0);
      SelDie(3);
      SelectUnits(&DAT_1002f3f0,0);
      SelSendTo(3,&DAT_1002f4b0,0,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f4b8,&DAT_1002f528);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f500);
      if (0 < iVar2) {
        SetTrigg(7,0);
        ShowPage("#PAGE7");
        SelectUnits(&DAT_1002f500,0);
        SelSendAndKill(1,&DAT_1002f4b8,0,0);
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetTotalAmount0(&DAT_1002f500);
    if (0 < iVar2) {
      SelectUnits(&DAT_1002f500,0);
      SelAttackGroup(1,&DAT_1002f528);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f4c8,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f510);
      if (0 < iVar2) {
        SetTrigg(8,0);
        ShowPage("#PAGE8");
        AttackEnemyInZone(&DAT_1002f510,&DAT_1002f4c8,0);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f4c8,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f510);
      if (0 < iVar2) {
        AttackEnemyInZone(&DAT_1002f510,&DAT_1002f4c8,0);
      }
    }
  }
  iVar2 = GetUnitsByNation(&DAT_1002f3f0,0);
  if (0 < iVar2) {
    ClearSelection(0);
    SelectUnits1(0,&DAT_1002f3f0,0);
    SelDie(0);
  }
  iVar2 = GetUnitsByNation(&DAT_1002f510,0);
  if (0 < iVar2) {
    ClearSelection(0);
    SelectUnits1(0,&DAT_1002f510,0);
    SelDie(0);
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (20000 < iVar2) {
      SetTrigg(3,0);
      ShowPage("#PAGE3");
      CreateObject0(&DAT_1002f418,&DAT_1002f4c0,&DAT_1002f4e0,1,&DAT_1002f4a0,0xa6);
      CreateObject0(&DAT_1002f430,&DAT_1002f4c0,&DAT_1002f3f8,1,&DAT_1002f4a0,0xa6);
      RunTimer(2,100);
      AttackEnemyInZone(&DAT_1002f418,&DAT_1002f498,0);
      AttackEnemyInZone(&DAT_1002f430,&DAT_1002f498,4);
    }
  }
  uVar1 = TimerDone(2);
  if ((uVar1 & 0xff) != 0) {
    RunTimer(2,100);
    AttackEnemyInZone(&DAT_1002f418,&DAT_1002f498,0);
    AttackEnemyInZone(&DAT_1002f430,&DAT_1002f498,4);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002f420);
    if (iVar2 == 0) {
      uVar1 = Trigg(3);
      if ((uVar1 & 0xff) == 0) {
        iVar2 = GetTotalAmount0(&DAT_1002f418);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount0(&DAT_1002f430);
          if (iVar2 == 0) {
            SetTrigg(4,0);
            ShowPage("#PAGE4");
            ShowVictory();
          }
        }
      }
      else {
        SetTrigg(4,0);
        ShowPage("#PAGE4");
        ShowVictory();
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002f400);
    if (iVar2 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      LooseGame();
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetTotalAmount0(&DAT_1002f428);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f558);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_1002f560);
        if (iVar2 < 1) {
          AttackEnemyInZone(&DAT_1002f428,&DAT_1002f498,1);
        }
        else {
          AttackEnemyInZone(&DAT_1002f428,&DAT_1002f490,1);
        }
      }
      else {
        AttackEnemyInZone(&DAT_1002f428,&DAT_1002f4d0,1);
      }
    }
    iVar2 = GetTotalAmount0(&DAT_1002f440);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f550);
      if (0 < iVar2) {
        ClearSelection(4);
        SelectUnits1(4,&DAT_1002f440,0);
        SelAttackGroup(4,&DAT_1002f550);
      }
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f4d8,0);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f438,&DAT_1002f4d8,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f4d8,4);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f438,&DAT_1002f4d8,4);
    }
    iVar2 = GetTotalAmount0(&DAT_1002f4e8);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f3e0);
      if (0 < iVar2) {
        ClearSelection(4);
        SelectUnits1(4,&DAT_1002f4e8,0);
        SelAttackGroup(4,&DAT_1002f3e0);
      }
    }
    iVar2 = GetTotalAmount0(&DAT_1002f538);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f3e8);
      if (iVar2 < 1) {
        AttackEnemyInZone(&DAT_1002f538,&DAT_1002f498,1);
      }
      else {
        AttackEnemyInZone(&DAT_1002f538,&DAT_1002f448,1);
      }
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f460,0);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f540,&DAT_1002f460,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f460,4);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f540,&DAT_1002f460,4);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f458,0);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f520,&DAT_1002f458,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f458,4);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f520,&DAT_1002f458,4);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f470,0);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f530,&DAT_1002f470,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f470,4);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f530,&DAT_1002f470,4);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f468,0);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f508,&DAT_1002f468,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f470,4);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f508,&DAT_1002f468,4);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f480,0);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f518,&DAT_1002f480,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f480,4);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f518,&DAT_1002f480,4);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f478,0);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f4f0,&DAT_1002f478,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f478,4);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f4f0,&DAT_1002f478,4);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f488,0);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f4f8,&DAT_1002f488,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1002f488,4);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f4f8,&DAT_1002f488,4);
    }
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002f450,0);
      if (0 < iVar2) {
        SetTrigg(9,0);
        ShowPage("#PAGE9");
      }
    }
  }
  uStack_8 = 0x10002811;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
