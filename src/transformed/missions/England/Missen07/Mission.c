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
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f468,"Zone1");
  RegisterZone(&DAT_1002f470,"Zone2");
  RegisterZone(&DAT_1002f478,"Zone3");
  RegisterZone(&DAT_1002f480,"Zone4");
  RegisterZone(&DAT_1002f488,"Zone5");
  RegisterZone(&DAT_1002f490,"Zone6");
  RegisterZone(&DAT_1002f498,"Zone7");
  RegisterZone(&DAT_1002f4a0,"Zone8");
  RegisterZone(&DAT_1002f4a8,"Zone9");
  RegisterZone(&DAT_1002f440,"Zone10");
  RegisterZone(&DAT_1002f438,"Zone11");
  RegisterZone(&DAT_1002f450,"Zone12");
  RegisterZone(&DAT_1002f448,"Zone13");
  RegisterUnits(&DAT_1002f3e8,"Group1");
  RegisterUnits(&DAT_1002f3f8,"Group2");
  RegisterUnits(&DAT_1002f3f0,"Group3");
  RegisterUnits(&DAT_1002f408,"Group4");
  RegisterUnits(&DAT_1002f400,"Group5");
  RegisterUnits(&DAT_1002f418,"Group6");
  RegisterUnits(&DAT_1002f410,"Group7");
  RegisterUnits(&DAT_1002f420,"Group9");
  RegisterUnits(&DAT_1002f4b8,"Group10");
  RegisterUnits(&DAT_1002f4d0,"Group11");
  RegisterUnits(&DAT_1002f4d8,"Group12");
  RegisterUnits(&DAT_1002f4c0,"Group13");
  RegisterUnits(&DAT_1002f4c8,"Group14");
  RegisterUnitType(&DAT_1002f458,"Fregat(sp)");
  RegisterUnitType(&DAT_1002f460,"Kreposnoi_portugal(sp)");
  RegisterUnitType(&DAT_1002f4b0,"Officer_evro(en)");
  RegisterFormation(&DAT_1002f3e0,"#LINEMORB9");
  RegisterVar(&DAT_1002f428,8);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(1,"SPAIN");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"ROBBERS");
  uStack_8 = 0x1000149d;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SetResource(0,3,10000000);
    SetResource(0,1,20000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,20000);
    SetResource(0,4,20000);
    SetResource(1,3,10000000);
    SetResource(1,1,10000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,10000000);
    SetResource(1,4,10000000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1A");
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f470,&DAT_1002f3e8);
    if (0 < iVar3) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      SelectUnits(&DAT_1002f3f8,0);
      SelectUnits(&DAT_1002f3f0,1);
      SelChangeNation(4,0);
      SetTrigg(3,0);
      uVar1 = AskQuestion("#PAGE2A");
      if ((uVar1 & 0xff) != 0) {
        AddResource(0,1,-10000);
        SelectUnits(&DAT_1002f418,0);
        SelChangeNation(4,0);
      }
      ShowPage("#PAGE2B");
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      CreateZoneNearUnit(&DAT_1002f430,&DAT_1002f478,&DAT_1002f4b0,0,500);
      iVar3 = GetUnitsAmount1(&DAT_1002f430,&DAT_1002f3f8);
      GetTotalAmount0(&DAT_1002f3f8);
      if (iVar3 < iVar2 / 2) {
        uVar1 = Trigg(3);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(3,0);
          RunTimer(1,500);
        }
      }
      else {
        uVar1 = Trigg(3);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(3,0);
          FreeTimer(1);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE3");
    SelectUnits(&DAT_1002f3f8,0);
    SetStandGround(0,0);
    AllowAttack(0,1);
    SelChangeNation(0,5);
    SetTrigg(0x11,0);
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_1002f478,&DAT_1002f420);
      if (0 < iVar3) {
        SelectUnits(&DAT_1002f3f8,0);
        SelAttackGroup(5,&DAT_1002f420);
      }
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_1002f478,&DAT_1002f420);
      if (iVar3 == 0) {
        SetTrigg(0x32,0);
        SelectUnits(&DAT_1002f3f8,0);
        SelSendAndKill(5,&DAT_1002f4a0,0,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f468,&DAT_1002f3e8);
    if ((0 < iVar3) && (GetTotalAmount0(&DAT_1002f400), 0 < iVar3)) {
      SetTrigg(4,0);
      ShowPage("#PAGE4");
      uVar1 = AskQuestion("#PAGE4A");
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetResource(0,1);
        if (iVar3 < 10000) {
          ShowPage("#PAGE4B");
        }
        else {
          AddResource(0,1,-10000);
          SelectUnits(&DAT_1002f400,0);
          SelOpenGates(1);
          SelectUnits(&DAT_1002f408,0);
          SelChangeNation(1,4);
          RunTimer(2,500);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f408,0);
    SelSendTo(4,&DAT_1002f498,0,0);
  }
  uVar1 = Trigg(5);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f410), iVar3 == 0)) {
    SetTrigg(5,0);
    ShowPage("#PAGE5");
    CreateObject0(&DAT_1002f428,&DAT_1002f3e0,&DAT_1002f458,1,&DAT_1002f480,0);
    SelectUnits(&DAT_1002f428,0);
    Patrol(1,&DAT_1002f488,0);
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetUnitsAmount1(&DAT_1002f490,&DAT_1002f3e8);
      if (iVar3 != 0) {
        SetTrigg(6,0);
        ShowPage("#PAGE6");
        ShowVictory();
      }
    }
  }
  uVar1 = Trigg(7);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f3e8), iVar3 == 0)) {
    SetTrigg(7,0);
    ShowPage("#PAGE7");
    LooseGame();
  }
  uVar1 = Trigg(8);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f4b8), 0 < iVar3)) {
    iVar3 = GetUnitsAmount0(&DAT_1002f4a8,0);
    if (0 < iVar3) {
      SetTrigg(8,0);
      ShowPage("#PAGE8");
    }
  }
  uVar1 = Trigg(8);
  if (((uVar1 & 0xff) == 0) && (GetTotalAmount0(&DAT_1002f4b8), 0 < iVar3)) {
    iVar3 = GetUnitsAmount0(&DAT_1002f4a8,0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1002f4b8,&DAT_1002f4a8,0);
    }
  }
  uVar1 = Trigg(9);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f4b8), iVar3 == 0)) {
    SetTrigg(9,0);
    ShowPage("#PAGE9");
    AddResource(0,3,20000);
    AddResource(0,4,2000);
    AddResource(0,1,500);
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f438,&DAT_1002f3f8);
    if (0 < iVar3) {
      SetTrigg(10,0);
      ShowPage("#PAGE10");
      AddResource(0,1,-500);
    }
  }
  uVar1 = Trigg(0xb);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f4d0), 0 < iVar3)) {
    iVar3 = GetUnitsAmount0(&DAT_1002f450,0);
    if (0 < iVar3) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE11");
    }
  }
  uVar1 = Trigg(0xb);
  if (((uVar1 & 0xff) == 0) && (GetTotalAmount0(&DAT_1002f4d0), 0 < iVar3)) {
    iVar3 = GetUnitsAmount0(&DAT_1002f450,0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1002f4d0,&DAT_1002f450,0);
    }
  }
  GetTotalAmount1(&DAT_1002f460,0);
  if (0 < iVar3) {
    ClearSelection(0);
    SelectUnitsType(&DAT_1002f460,0,0);
    SelDie(0);
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f448,&DAT_1002f3f0);
    if (iVar3 < 9) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(0xc);
  if (((uVar1 & 0xff) == 0) && (GetTotalAmount0(&DAT_1002f4d8), 0 < iVar3)) {
    SelectUnits(&DAT_1002f4d8,0);
    SelAttackGroup(5,&DAT_1002f4c8);
  }
  uVar1 = Trigg(0xc);
  if (((uVar1 & 0xff) == 0) && (GetTotalAmount0(&DAT_1002f4c0), 0 < iVar3)) {
    SelectUnits(&DAT_1002f4c0,0);
    SelAttackGroup(5,&DAT_1002f3f0);
  }
  uStack_8 = 0x100023d6;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
