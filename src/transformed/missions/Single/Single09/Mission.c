#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f428,"Zone1");
  RegisterZone(&DAT_1002f430,"Zone2");
  RegisterZone(&DAT_1002f438,"Zone3");
  RegisterZone(&DAT_1002f440,"Zone4");
  RegisterZone(&DAT_1002f448,"Zone5");
  RegisterZone(&DAT_1002f450,"Zone6");
  RegisterUnits(&DAT_1002f3e0,"Group1");
  RegisterUnits(&DAT_1002f3f0,"Group2");
  RegisterUnits(&DAT_1002f3e8,"Group3");
  RegisterUnits(&DAT_1002f400,"Group4");
  RegisterUnits(&DAT_1002f3f8,"Group5");
  RegisterUnits(&DAT_1002f410,"Group6");
  RegisterUnits(&DAT_1002f408,"Group7");
  RegisterUnits(&DAT_1002f420,"Group8");
  RegisterUnits(&DAT_1002f418,"Group9");
  RegisterUnits(&DAT_1002f488,"Group10");
  RegisterUnits(&DAT_1002f4f0,"Group11");
  RegisterUnits(&DAT_1002f4f8,"Group12");
  RegisterUnits(&DAT_1002f4d8,"Group13");
  RegisterUnits(&DAT_1002f4e8,"Group14");
  RegisterUnits(&DAT_1002f4c0,"Group15");
  RegisterUnits(&DAT_1002f4d0,"Group16");
  RegisterUnits(&DAT_1002f498,"Group17");
  RegisterUnits(&DAT_1002f4b0,"Group18");
  RegisterUnits(&DAT_1002f528,"Group19");
  RegisterUnits(&DAT_1002f4e0,"Group20");
  RegisterUnits(&DAT_1002f4b8,"Group21");
  RegisterUnits(&DAT_1002f4c8,"Group22");
  RegisterUnits(&DAT_1002f490,"Group23");
  RegisterUnits(&DAT_1002f4a8,"Group24");
  RegisterUnits(&DAT_1002f520,"Group25");
  RegisterUnits(&DAT_1002f530,"Group26");
  RegisterUnits(&DAT_1002f508,"Group27");
  RegisterUnits(&DAT_1002f510,"Group28");
  RegisterUnits(&DAT_1002f500,"Group29");
  RegisterUnits(&DAT_1002f4a0,"Group30");
  RegisterUnits(&DAT_1002f518,"Group31");
  RegisterUnitType(&DAT_1002f458,"Konushnia_PO(PO)");
  RegisterUnitType(&DAT_1002f460,"akademia_PO(PO)");
  RegisterUnitType(&DAT_1002f468,"artileri_depo_PO(PO)");
  RegisterUnitType(&DAT_1002f470,"Rinok(PO)");
  RegisterUnitType(&DAT_1002f478,"Mortira(fr)");
  RegisterUnitType(&DAT_1002f480,"Mortira(PO)");
  SetStandartVictory();
  SetPlayerName(1,"FRANCE");
  SetPlayerName(5,"CAP_BUIL");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(5,0x23);
  uStack_8 = 0x100015ec;
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
    SetResource(0,3,5000);
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,50000);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(1,3,50000);
    SetResource(1,1,20000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,5,10000);
    SetResource(1,4,10000);
    SetResource(5,3,1000000);
    SetResource(5,1,1000000);
    SetResource(5,0,1000000);
    SetResource(5,2,1000000);
    SetResource(5,5,1000000);
    SetResource(5,4,1000000);
    SelectUnits1(1,&DAT_1002f410,0);
    SelectUnits1(1,&DAT_1002f408,1);
    SelectUnits1(1,&DAT_1002f418,1);
    SelectUnits1(1,&DAT_1002f420,1);
    SelChangeNation(1,5);
    SelectUnits1(1,&DAT_1002f3f0,0);
    SelectUnits1(1,&DAT_1002f510,1);
    SelectUnits1(1,&DAT_1002f500,1);
    SelectUnits1(1,&DAT_1002f4e8,1);
    SelectUnits1(1,&DAT_1002f488,1);
    SelectUnits1(1,&DAT_1002f4f0,1);
    SelectUnits1(1,&DAT_1002f4f8,1);
    SelectUnits1(1,&DAT_1002f4d8,1);
    SelectUnits1(1,&DAT_1002f4b8,1);
    SelectUnits1(1,&DAT_1002f4c8,1);
    SelectUnits1(1,&DAT_1002f528,1);
    SelectUnits1(1,&DAT_1002f4b0,1);
    SelectUnits1(1,&DAT_1002f4d0,1);
    SelectUnits1(1,&DAT_1002f498,1);
    SelectUnits1(1,&DAT_1002f4e0,1);
    SelectUnits1(1,&DAT_1002f4c0,1);
    SelectUnits1(1,&DAT_1002f530,1);
    SelectUnits1(1,&DAT_1002f508,1);
    SelectUnits1(1,&DAT_1002f4a8,1);
    SelectUnits1(1,&DAT_1002f490,1);
    SelectUnits1(1,&DAT_1002f520,1);
    DoNotUseSelInAI(1);
    StartAI(1,"FRANCE.0",1,1,0,-1);
    RunTimer(1,100);
    RunTimer(3,800);
    EnableUnit(0,&DAT_1002f458,0);
    EnableUnit(0,&DAT_1002f460,0);
    EnableUnit(0,&DAT_1002f468,0);
    EnableUnit(0,&DAT_1002f470,0);
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(99,0);
      SelectUnits1(1,&DAT_1002f510,0);
      SelectUnits1(1,&DAT_1002f500,1);
      SelSendTo(1,&DAT_1002f438,0x2d,0);
    }
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f438,&DAT_1002f510);
    if (2 < iVar2) {
      AttackBuildingsInZone(&DAT_1002f510,&DAT_1002f450,0);
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x60,0);
      ShowPage("#PAGE1");
      ShowPage("#PAGE6");
      SelectUnits1(0,&DAT_1002f4a0,0);
      SelectUnits1(0,&DAT_1002f518,1);
      SelDie(0);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f478,0);
    if (0 < iVar2) {
      SetTrigg(0x5f,0);
      SelectUnitsType(&DAT_1002f478,0,0);
      SelDie(0);
      RunTimer(2,200);
      SetTrigg(0x5e,0);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      SetTrigg(0x5f,0);
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f430,1);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002f430,0);
      if (0 < iVar2) {
        SetTrigg(0x5d,0);
        ShowPage("#PAGE2");
        SelectUnits1(5,&DAT_1002f410,0);
        SelectUnits1(5,&DAT_1002f420,1);
        SelChangeNation(5,0);
      }
    }
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f440,1);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002f440,0);
      if (0 < iVar2) {
        SetTrigg(0x5c,0);
        ShowPage("#PAGE3");
        SelectUnits1(5,&DAT_1002f408,0);
        SelChangeNation(5,0);
      }
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f448,1);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002f448,0);
      if (0 < iVar2) {
        SetTrigg(0x5b,0);
        ShowPage("#PAGE4");
        SelectUnits1(5,&DAT_1002f418,0);
        SelChangeNation(5,0);
      }
    }
  }
  uVar1 = Trigg(0x59);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f428,&DAT_1002f3e0);
    if (iVar2 == 0) {
      SetTrigg(0x59,0);
      SelectUnits1(1,&DAT_1002f3f0,0);
      SelAttackGroup(1,&DAT_1002f3e0);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5d);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(1);
      if ((uVar1 & 0xff) != 0) {
        GetTotalAmount1(&DAT_1002f480,0);
        if (iVar2 == 0) {
          SetTrigg(0x5a,0);
          ShowPage("#PAGE5");
          LooseGame();
        }
      }
    }
  }
  uStack_8 = 0x10002377;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
