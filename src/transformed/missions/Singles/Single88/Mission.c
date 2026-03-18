#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_100323e0 = 0;
long long DAT_100323e8 = 0;
long long DAT_100323f0 = 0;
long long DAT_100323f8 = 0;
long long DAT_10032400 = 0;
long long DAT_10032408 = 0;
long long DAT_10032410 = 0;
long long DAT_10032418 = 0;
long long DAT_10032420 = 0;
long long DAT_10032428 = 0;
long long DAT_10032430 = 0;
long long DAT_10032438 = 0;
long long DAT_10032440 = 0;
long long DAT_10032448 = 0;
long long DAT_10032450 = 0;
long long DAT_10032458 = 0;
long long DAT_10032460 = 0;
long long DAT_10032468 = 0;
long long DAT_10032470 = 0;
long long DAT_10032478 = 0;
long long DAT_10032480 = 0;
long long DAT_10032488 = 0;
long long DAT_10032490 = 0;
long long DAT_10032498 = 0;
long long DAT_100324a0 = 0;
long long DAT_100324a8 = 0;
long long DAT_100324b0 = 0;
long long DAT_100324b8 = 0;
long long DAT_100324c0 = 0;
long long DAT_100324c8 = 0;
int DAT_100324d0 = 0;
long long DAT_100324d8 = 0;
long long DAT_100324e0 = 0;
long long DAT_100324e8 = 0;
long long DAT_100324f0 = 0;
long long DAT_100324f8 = 0;
long long DAT_10032500 = 0;
long long DAT_10032508 = 0;
long long DAT_10032510 = 0;
long long DAT_10032518 = 0;
int DAT_10032520 = 0;
long long DAT_10032524 = 0;
long long DAT_10032528 = 0;
long long DAT_10032530 = 0;
long long DAT_10032538 = 0;
long long DAT_10032540 = 0;
long long DAT_10032548 = 0;
int DAT_10032550 = 0;
long long DAT_10032558 = 0;
long long DAT_10032560 = 0;
long long DAT_10032568 = 0;
long long DAT_10032570 = 0;
int DAT_10032578 = 0;
long long DAT_10032580 = 0;
long long DAT_10032588 = 0;
long long DAT_10032590 = 0;
long long DAT_10032598 = 0;
long long DAT_100325a0 = 0;
long long DAT_100325a8 = 0;
long long DAT_100325b0 = 0;
long long DAT_100325b8 = 0;
long long DAT_100325c0 = 0;
long long DAT_100325c8 = 0;
int DAT_100325d0 = 0;
long long DAT_100325d8 = 0;
long long DAT_100325e0 = 0;
long long DAT_100325e8 = 0;
int DAT_100325f0 = 0;
long long DAT_100325f8 = 0;
long long DAT_10032600 = 0;
long long DAT_10032608 = 0;
long long DAT_10032610 = 0;
long long DAT_10032618 = 0;
long long DAT_10032620 = 0;
long long DAT_10032628 = 0;
long long DAT_10032630 = 0;
long long DAT_10032638 = 0;
long long DAT_10032640 = 0;
long long DAT_10032648 = 0;
long long DAT_10032650 = 0;
long long DAT_10032658 = 0;
long long DAT_10032660 = 0;
long long DAT_10032668 = 0;
long long DAT_10032670 = 0;
long long DAT_10032678 = 0;
long long DAT_10032680 = 0;
long long DAT_10032688 = 0;
long long DAT_10032690 = 0;
long long DAT_10032698 = 0;
long long DAT_100326a0 = 0;
long long DAT_100326a8 = 0;
long long DAT_100326b0 = 0;
long long DAT_100326b8 = 0;
long long DAT_100326c0 = 0;
long long DAT_100326c8 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10032498,"Gband1");
  RegisterUnits(&DAT_10032490,"Gband2");
  RegisterUnits(&DAT_100324a8,"Gholop1");
  RegisterUnits(&DAT_10032580,"Gbos1");
  RegisterUnits(&DAT_10032588,"Gbos2");
  RegisterUnits(&DAT_10032590,"Gbos3");
  RegisterUnits(&DAT_100325a0,"Gbos4");
  RegisterUnits(&DAT_100325a8,"Gbos5");
  RegisterUnits(&DAT_100325b0,"Gbos6");
  RegisterUnits(&DAT_100325b8,"Gbos7");
  RegisterUnits(&DAT_100325c0,"Gbos8");
  RegisterUnits(&DAT_100325c8,"Gbos9");
  RegisterUnits(&DAT_100323e0,"Gbos10");
  RegisterUnits(&DAT_100324b8,"Gbash1");
  RegisterUnits(&DAT_10032468,"Gkon1");
  RegisterUnits(&DAT_10032470,"Gkon2");
  RegisterUnits(&DAT_100326b0,"Gkaz1");
  RegisterUnits(&DAT_100326b8,"Gkaz2");
  RegisterZone(&DAT_100325e8,"Zband0");
  RegisterZone(&DAT_10032680,"Zband00");
  RegisterZone(&DAT_100325d8,"Zband1");
  RegisterZone(&DAT_10032690,"Zband1a");
  RegisterZone(&DAT_10032698,"Zband1b");
  RegisterZone(&DAT_100325e0,"Zband2");
  RegisterZone(&DAT_100326a0,"Zband2a");
  RegisterZone(&DAT_100326a8,"Zband2b");
  RegisterZone(&DAT_10032558,"Ztalk1");
  RegisterZone(&DAT_10032560,"Ztalk2");
  RegisterZone(&DAT_10032608,"Zattack1");
  RegisterZone(&DAT_10032610,"Zattack2");
  RegisterZone(&DAT_100325f8,"Zattack3");
  RegisterZone(&DAT_10032600,"Zattack4");
  RegisterZone(&DAT_10032628,"Zattack5");
  RegisterZone(&DAT_10032630,"Zattack6");
  RegisterZone(&DAT_10032618,"Zattack7");
  RegisterZone(&DAT_10032620,"Zattack8");
  RegisterZone(&DAT_10032638,"Zattack9");
  RegisterZone(&DAT_100326c8,"Zattack10");
  RegisterZone(&DAT_100326c0,"Zattack11");
  RegisterZone(&DAT_10032430,"Zotxod1");
  RegisterZone(&DAT_10032438,"Zotxod2");
  RegisterUnitType(&DAT_10032418,"Rundashir_Avstria_DIP(TU)");
  RegisterUnitType(&DAT_10032598,"Pehota_turki_DIP(TU)");
  RegisterUnitType(&DAT_10032640,"Pushka_mnogostvolka(PL)");
  RegisterUnitType(&DAT_10032648,"Pushka_mnogostvolka(RU)");
  RegisterUnitType(&DAT_10032428,"Kres_ukranian(UA)");
  RegisterUnitType(&DAT_10032458,"Krestian_Turki(TU)");
  RegisterUnitType(&DAT_10032480,"WALL_EV(PL)");
  RegisterUnitType(&DAT_10032568,"WALL_UKR(UA)");
  RegisterUnitType(&DAT_10032488,"WALL_TU(TU)");
  RegisterUnitType(&DAT_10032570,"WALL_UKR(TU)");
  RegisterUnitType(&DAT_100324b0,"Center_Turki(TU)");
  RegisterUnitType(&DAT_10032670,"shahta(UA)");
  RegisterUnitType(&DAT_10032668,"shahta_FE(UA)");
  RegisterUnitType(&DAT_10032678,"shahta_UG(UA)");
  RegisterVar(&DAT_10032448,8);
  RegisterVar(&DAT_10032440,8);
  RegisterVar(&DAT_10032460,8);
  RegisterVar(&DAT_10032450,8);
  RegisterVar(&DAT_10032400,8);
  RegisterVar(&DAT_100323f8,8);
  RegisterVar(&DAT_10032410,8);
  RegisterVar(&DAT_10032408,8);
  RegisterVar(&DAT_10032420,8);
  RegisterVar(&DAT_100324c8,8);
  RegisterVar(&DAT_100324c0,8);
  RegisterVar(&DAT_10032500,8);
  RegisterVar(&DAT_100324f8,8);
  RegisterVar(&DAT_10032518,8);
  RegisterVar(&DAT_10032508,8);
  RegisterVar(&DAT_100324e0,8);
  RegisterVar(&DAT_100324d8,8);
  RegisterVar(&DAT_100324f0,8);
  RegisterVar(&DAT_100324e8,8);
  RegisterVar(&DAT_10032510,8);
  RegisterVar(&DAT_100324d0,4);
  RegisterVar(&DAT_10032520,4);
  RegisterVar(&DAT_10032550,4);
  RegisterVar(&DAT_10032578,4);
  RegisterVar(&DAT_100325d0,4);
  RegisterVar(&DAT_100325f0,4);
  RegisterVar(&DAT_10032524,4);
  RegisterVar(&DAT_10032688,4);
  RegisterVar(&DAT_100324a0,4);
  RegisterFormation(&DAT_10032660,"#LINE5");
  RegisterFormation(&DAT_10032530,"#LINE20PUS");
  RegisterFormation(&DAT_10032540,"#LINE30PUS");
  RegisterFormation(&DAT_10032548,"#LINE40PUS");
  RegisterFormation(&DAT_10032538,"#LINE15PUS");
  RegisterFormation(&DAT_10032528,"#LINE10PUS");
  RegisterFormation(&DAT_10032658,"#LINE3");
  RegisterFormation(&DAT_100323e8,"#SHIPS3");
  RegisterFormation(&DAT_100323f0,"#SHIPS5");
  RegisterFormation(&DAT_10032478,"#ALONE");
  RegisterDynGroup(&DAT_10032448);
  RegisterDynGroup(&DAT_10032440);
  RegisterDynGroup(&DAT_10032460);
  RegisterDynGroup(&DAT_10032450);
  RegisterDynGroup(&DAT_10032400);
  RegisterDynGroup(&DAT_100323f8);
  RegisterDynGroup(&DAT_10032410);
  RegisterDynGroup(&DAT_10032408);
  RegisterDynGroup(&DAT_10032420);
  RegisterDynGroup(&DAT_100324c8);
  RegisterDynGroup(&DAT_100324c0);
  RegisterDynGroup(&DAT_10032500);
  RegisterDynGroup(&DAT_100324f8);
  RegisterDynGroup(&DAT_10032518);
  RegisterDynGroup(&DAT_10032508);
  RegisterDynGroup(&DAT_100324e0);
  RegisterDynGroup(&DAT_100324d8);
  RegisterDynGroup(&DAT_100324f0);
  RegisterDynGroup(&DAT_100324e8);
  RegisterDynGroup(&DAT_10032510);
  RegisterDynGroup(&DAT_10032650);
  SetPlayerName(1,"TURKEY");
  SetPlayerName(4,"BANDITS");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(1,0x32);
  ChangeFriends(4,0x32);
  ChangeFriends(5,0x32);
  EnableUnit(0,&DAT_10032568,0);
  EnableUnit(0,&DAT_10032488,0);
  EnableUnit(0,&DAT_10032570,0);
  EnableUnit(0,&DAT_10032458,0);
  EnableUnit(0,&DAT_100324b0,0);
  uStack_8 = 0x10001d3d;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
    DisableMission(0x4e);
    SetDestPoint(&DAT_10032468,&DAT_10032430);
    SetDestPoint(&DAT_10032470,&DAT_10032438);
    SetDestPoint(&DAT_100326b0,&DAT_10032558);
    SetDestPoint(&DAT_100326b8,&DAT_10032560);
    local_18 = GetDiff(0);
    switch(local_18) {
    case 0:
      SetResource(0,3,20000);
      SetResource(0,0,20000);
      SetResource(0,2,20000);
      SetResource(0,1,20000);
      SetResource(0,5,20000);
      SetResource(0,4,20000);
      SelectUnits(&DAT_100324b8,0);
      SelectUnits(&DAT_10032580,1);
      SelectUnits(&DAT_10032588,1);
      SelectUnits(&DAT_10032590,1);
      SelectUnits(&DAT_100325b8,1);
      SelectUnits(&DAT_100325c0,1);
      SelectUnits(&DAT_100325c8,1);
      SelectUnits(&DAT_100323e0,1);
      SelErase(5);
      SelectUnits(&DAT_100325a0,0);
      SelectUnits(&DAT_100325a8,1);
      SelectUnits(&DAT_100325b0,1);
      SelErase(4);
      DAT_100324d0 = 0;
      DAT_10032520 = 0;
      DAT_10032550 = 3;
      DAT_10032578 = 3;
      DAT_100325d0 = 1;
      DAT_100325f0 = 1;
      break;
    case 1:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10032588,0);
      SelectUnits(&DAT_10032590,1);
      SelectUnits(&DAT_100325b8,1);
      SelectUnits(&DAT_100325c0,1);
      SelectUnits(&DAT_100325c8,1);
      SelectUnits(&DAT_100323e0,1);
      SelErase(5);
      SelectUnits(&DAT_100325a8,0);
      SelectUnits(&DAT_100325b0,1);
      SelErase(4);
      DAT_100324d0 = 1;
      DAT_10032520 = 1;
      DAT_10032550 = 7;
      DAT_10032578 = 8;
      DAT_100325d0 = 1;
      DAT_100325f0 = 1;
      break;
    case 2:
      SetResource(0,3,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      SetResource(0,1,6000);
      SetResource(0,5,6000);
      SetResource(0,4,6000);
      SelectUnits(&DAT_10032590,0);
      SelectUnits(&DAT_100325c0,1);
      SelectUnits(&DAT_100323e0,1);
      SelErase(5);
      SelectUnits(&DAT_100325b0,0);
      SelErase(4);
      DAT_100324d0 = 2;
      DAT_10032520 = 2;
      DAT_10032550 = 9;
      DAT_10032578 = 10;
      DAT_100325d0 = 2;
      DAT_100325f0 = 1;
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      DAT_100324d0 = 3;
      DAT_10032520 = 3;
      DAT_10032550 = 0xe;
      DAT_10032578 = 0xf;
      DAT_100325d0 = 2;
      DAT_100325f0 = 2;
    }
    ClearSelection(4);
    ClearSelection(5);
    InitialUpgrade("Gkon1","AKA19PL");
    InitialUpgrade("Gkon2","AKA19RU");
    RunTimer(1,300);
    RunTimer(2,0x11f8);
    RunTimer(3,0x23f0);
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 0x23f0);
    InitialUpgrade("Gholop1","Melnica_tu(TU)GETRES");
    InitialUpgrade("Gholop1","KUZ01TU");
    InitialUpgrade("Gholop1","AKA01TU");
    InitialUpgrade("Gholop1","AKA02TU");
    InitialUpgrade("Gholop1","AKA03TU");
    InitialUpgrade("Gholop1","AKA04TU");
    InitialUpgrade("Gholop1","AKA10TU");
    SetResource(1,3,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    uVar2 = GetDiff(0);
    StartAI(1,"TURKISH.0",1,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x60,0);
      ShowPage("#PAGE0A");
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0B");
      EnableMission(0x44);
      EnableMission(0x46);
    }
  }
  uVar1 = TimerDoneFirst(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0C");
      EnableMission(0x4b);
      EnableMission(0x4d);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10032608,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_10032610,0);
      if (iVar4 < 1) goto LAB_10002d93;
    }
    SetTrigg(0x5f,0);
    ShowPage("#PAGE0B");
    EnableMission(0x44);
    EnableMission(0x46);
  }
LAB_10002d93:
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100325e8,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_10032680,0);
      if (iVar4 < 1) goto LAB_10002e43;
    }
    SetTrigg(0x5e,0);
    ShowPage("#PAGE0C");
    EnableMission(0x4b);
    EnableMission(0x4d);
  }
LAB_10002e43:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325d8,&DAT_10032498);
    iVar3 = GetTotalAmount0(&DAT_10032498);
    if (iVar4 < iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10032498,0);
      SelSendTo(5,&DAT_10032698,0,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325d8,&DAT_10032498);
    iVar3 = GetTotalAmount0(&DAT_10032498);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10032498,0);
      Patrol(5,&DAT_10032690,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032498);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100325d8,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -2000 + 20000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -2000 + 20000);
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325e0,&DAT_10032490);
    iVar3 = GetTotalAmount0(&DAT_10032490);
    if (iVar4 < iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_10032490,0);
      SelSendTo(5,&DAT_100326a8,0x96,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325e0,&DAT_10032490);
    iVar3 = GetTotalAmount0(&DAT_10032490);
    if (iVar4 == iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_10032490,0);
      Patrol(5,&DAT_100326a0,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032490);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100325e0,0);
      if (0 < iVar4) {
        SetTrigg(4,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -0x9c4 + 25000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -0x9c4 + 25000);
        DisableMission(0x46);
        EnableMission(0x47);
      }
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      for (local_8 = 0; local_8 < DAT_100324d0; local_8 = local_8 + 1) {
        ProduceUnitFast(&DAT_10032468,&DAT_10032640,&DAT_10032448,1);
      }
    }
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10032468);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(7,500);
        SetTrigg(10,0);
      }
    }
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(7);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xb,0);
        SetTrigg(10,0);
        SetTrigg(9,0);
        FreeTimer(7);
        RunTimer(8,0x86c4);
        RemoveGroup(&DAT_10032448,&DAT_10032460);
        SelectUnits(&DAT_10032460,0);
        SetStandGround(5,1);
        ClearSelection(5);
      }
    }
    AttackBuildingsInZone(&DAT_10032460,&DAT_10032608,0);
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount0(&DAT_10032460);
      if (iVar4 != 0) {
        uVar1 = TimerDoneFirst(8);
        if ((uVar1 & 0xff) == 0) goto LAB_100035a9;
      }
      FreeTimer(8);
      SetTrigg(0xb,0);
    }
  }
LAB_100035a9:
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc,0);
      for (local_c = 0; local_c < DAT_10032520; local_c = local_c + 1) {
        ProduceUnitFast(&DAT_10032470,&DAT_10032648,&DAT_10032440,1);
      }
    }
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10032470);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(4,500);
        SetTrigg(0xd,0);
      }
    }
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(4);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xe,0);
        SetTrigg(0xd,0);
        SetTrigg(0xc,0);
        FreeTimer(4);
        RunTimer(5,0x86c4);
        RemoveGroup(&DAT_10032440,&DAT_10032450);
        SelectUnits(&DAT_10032450,0);
        SetStandGround(5,1);
        ClearSelection(5);
      }
    }
    AttackBuildingsInZone(&DAT_10032450,&DAT_10032610,0);
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount0(&DAT_10032450);
      if (iVar4 != 0) {
        uVar1 = TimerDoneFirst(5);
        if ((uVar1 & 0xff) == 0) goto LAB_10003858;
      }
      FreeTimer(5);
      SetTrigg(0xe,0);
    }
  }
LAB_10003858:
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100326b0);
    if (iVar4 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE2");
      DisableMission(0x4b);
      EnableMission(0x4c);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100326b8);
    if (iVar4 == 0) {
      SetTrigg(6,0);
      ShowPage("#PAGE3");
      DisableMission(0x4d);
      EnableMission(0x4e);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x14,0);
      for (local_10 = 0; local_10 < DAT_10032550; local_10 = local_10 + 1) {
        ProduceUnitFast(&DAT_100326b0,&DAT_10032418,&DAT_10032400,0);
      }
    }
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_100326b0);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(9,100);
        SetTrigg(0x15,0);
      }
    }
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(9);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x16,0);
          FreeTimer(9);
          RunTimer(10,0x2cec);
          SetTrigg(0x14,0);
          SetTrigg(0x15,0);
          RemoveGroup(&DAT_10032400,&DAT_100323f8);
          SelectUnits(&DAT_100323f8,0);
          SelSendAndKill(5,&DAT_100325f8,0x1e,0);
          SelSendAndKill(5,&DAT_10032600,0xf0,2);
          SelSendAndKill(5,&DAT_10032628,0x1e,2);
          SelSendAndKill(5,&DAT_10032630,0xdc,2);
          SelSendAndKill(5,&DAT_10032618,0x96,2);
          SelSendAndKill(5,&DAT_100326c8,0x1e,2);
          ClearSelection(5);
        }
      }
    }
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_100323f8);
        if (iVar4 != 0) {
          uVar1 = TimerDoneFirst(10);
          if ((uVar1 & 0xff) == 0) goto LAB_10003cdf;
        }
        FreeTimer(10);
        SetTrigg(0x16,0);
      }
    }
  }
LAB_10003cdf:
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x17,0);
      for (local_14 = 0; local_14 < DAT_10032578; local_14 = local_14 + 1) {
        ProduceUnitFast(&DAT_100326b8,&DAT_10032598,&DAT_10032410,0);
      }
    }
    uVar1 = Trigg(0x18);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_100326b8);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(0xb,100);
        SetTrigg(0x18,0);
      }
    }
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(0xb);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x19,0);
          FreeTimer(0xb);
          RunTimer(0xc,0x2cec);
          SetTrigg(0x17,0);
          SetTrigg(0x18,0);
          RemoveGroup(&DAT_10032410,&DAT_10032408);
          SelectUnits(&DAT_10032408,0);
          SelSendAndKill(4,&DAT_10032620,0x82,0);
          SelSendAndKill(4,&DAT_10032638,0x82,2);
          SelSendAndKill(4,&DAT_100326c8,0x1e,2);
          SelSendAndKill(4,&DAT_100326c0,0x1e,2);
          SelSendAndKill(4,&DAT_10032630,0xc3,2);
          ClearSelection(4);
        }
      }
    }
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_10032408);
        if (iVar4 != 0) {
          uVar1 = TimerDoneFirst(0xc);
          if ((uVar1 & 0xff) == 0) goto LAB_1000402f;
        }
        FreeTimer(0xc);
        SetTrigg(0x19,0);
      }
    }
  }
LAB_1000402f:
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) == 0) goto LAB_10004250;
    }
    local_1c = GetDiff(0);
    switch(local_1c) {
    case 0:
      DAT_10032550 = DAT_10032550 + 1;
      DAT_10032578 = DAT_10032578 + 1;
      DAT_100325d0 = DAT_100325d0 + 1;
      DAT_100325f0 = DAT_100325f0 + 1;
      break;
    case 1:
      DAT_100324d0 = DAT_100324d0 + 1;
      DAT_10032520 = DAT_10032520 + 1;
      DAT_10032550 = DAT_10032550 + 5;
      DAT_10032578 = DAT_10032578 + 5;
      DAT_100325d0 = DAT_100325d0 + 1;
      DAT_100325f0 = DAT_100325f0 + 2;
      break;
    case 2:
      DAT_100324d0 = DAT_100324d0 + 1;
      DAT_10032520 = DAT_10032520 + 1;
      DAT_10032550 = DAT_10032550 + 0xf;
      DAT_10032578 = DAT_10032578 + 0xf;
      DAT_100325d0 = DAT_100325d0 + 2;
      DAT_100325f0 = DAT_100325f0 + 1;
      break;
    case 3:
      DAT_100324d0 = DAT_100324d0 + 2;
      DAT_10032520 = DAT_10032520 + 2;
      DAT_10032550 = DAT_10032550 + 0x1e;
      DAT_10032578 = DAT_10032578 + 0x1e;
      DAT_100325d0 = DAT_100325d0 + 3;
      DAT_100325f0 = DAT_100325f0 + 2;
    }
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 0x23f0);
  }
LAB_10004250:
  ClearSelection(5);
  SelectUnitsType(&DAT_10032670,5,0);
  SelectUnitsType(&DAT_10032668,5,1);
  SelectUnitsType(&DAT_10032678,5,1);
  SelectUnitsType(&DAT_10032428,5,1);
  SelDie(5);
  ClearSelection(5);
  ClearSelection(4);
  SelectUnitsType(&DAT_10032670,4,0);
  SelectUnitsType(&DAT_10032668,4,1);
  SelectUnitsType(&DAT_10032678,4,1);
  SelectUnitsType(&DAT_10032428,4,1);
  SelDie(4);
  ClearSelection(4);
  SaveSelectedUnits(0,&DAT_10032650,0);
  ClearSelection(0);
  SelectUnitsType(&DAT_10032640,0,0);
  SelectUnitsType(&DAT_10032648,0,1);
  SelDie(0);
  SelectUnits(&DAT_10032650,0);
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE8");
      DisableMission(0x42);
      EnableMission(0x43);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(5);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(6);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = Trigg(0x61);
            if ((uVar1 & 0xff) != 0) {
              SetTrigg(0x61,0);
              ShowPage("#PAGE9");
              ShowVictory();
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x62,0);
      iVar4 = GetResource(0,3);
      if (iVar4 < 1) {
        ShowPage("#PAGE1A");
      }
      else {
        ShowPage("#PAGE1");
      }
      LooseGame();
    }
  }
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
