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
long long DAT_100324d0 = 0;
long long DAT_100324d8 = 0;
long long DAT_100324e0 = 0;
long long DAT_100324e8 = 0;
long long DAT_100324f0 = 0;
long long DAT_100324f8 = 0;
long long DAT_10032500 = 0;
long long DAT_10032508 = 0;
long long DAT_10032510 = 0;
long long DAT_10032518 = 0;
long long DAT_10032520 = 0;
long long DAT_10032528 = 0;
long long DAT_10032530 = 0;
int DAT_10032538 = 0;
long long DAT_10032540 = 0;
long long DAT_10032548 = 0;
long long DAT_10032550 = 0;
long long DAT_10032558 = 0;
long long DAT_10032560 = 0;
long long DAT_10032568 = 0;
long long DAT_10032570 = 0;
long long DAT_10032578 = 0;
long long DAT_10032580 = 0;
int DAT_10032588 = 0;
long long DAT_10032590 = 0;
long long DAT_10032598 = 0;
long long DAT_100325a0 = 0;
long long DAT_100325a8 = 0;
long long DAT_100325b0 = 0;
long long DAT_100325b8 = 0;
long long DAT_100325c0 = 0;
int DAT_100325c8 = 0;
long long DAT_100325d0 = 0;
long long DAT_100325d8 = 0;
long long DAT_100325e0 = 0;
long long DAT_100325e8 = 0;
long long DAT_100325f0 = 0;
long long DAT_100325f8 = 0;
long long DAT_10032600 = 0;
int DAT_10032608 = 0;
long long DAT_10032610 = 0;
long long DAT_10032618 = 0;
long long DAT_10032620 = 0;
long long DAT_10032628 = 0;
long long DAT_10032630 = 0;
long long DAT_10032638 = 0;
long long DAT_10032640 = 0;
long long DAT_10032648 = 0;
int DAT_10032650 = 0;
long long DAT_10032658 = 0;
long long DAT_10032660 = 0;
long long DAT_10032668 = 0;
int DAT_10032670 = 0;
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
long long DAT_100326d0 = 0;
long long DAT_100326d8 = 0;
long long DAT_100326e0 = 0;
long long DAT_100326e8 = 0;
long long DAT_100326f0 = 0;
long long DAT_100326f8 = 0;
long long DAT_10032700 = 0;
long long DAT_10032708 = 0;
long long DAT_10032710 = 0;
long long DAT_10032718 = 0;

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_100324b8,"Gband1");
  RegisterUnits(&DAT_100324b0,"Gband2");
  RegisterUnits(&DAT_100324c0,"Gband3");
  RegisterUnits(&DAT_100324f0,"Gholop1");
  RegisterUnits(&DAT_100324e8,"Gholop2");
  RegisterUnits(&DAT_100324e0,"Gholop3");
  RegisterUnits(&DAT_100324d8,"Gholop4");
  RegisterUnits(&DAT_100324d0,"Gholop5");
  RegisterUnits(&DAT_100324f8,"Gholop6");
  RegisterUnits(&DAT_10032610,"Gbos1");
  RegisterUnits(&DAT_10032618,"Gbos2");
  RegisterUnits(&DAT_10032620,"Gbos3");
  RegisterUnits(&DAT_10032628,"Gbos4");
  RegisterUnits(&DAT_10032630,"Gbos5");
  RegisterUnits(&DAT_10032638,"Gbos6");
  RegisterUnits(&DAT_10032640,"Gbos7");
  RegisterUnits(&DAT_10032648,"Gbos8");
  RegisterUnits(&DAT_10032718,"Gport1");
  RegisterUnits(&DAT_100323e8,"Gport2");
  RegisterUnits(&DAT_100323e0,"Gport3");
  RegisterUnits(&DAT_100323f0,"Gport4");
  RegisterUnits(&DAT_10032518,"Gbash1");
  RegisterUnits(&DAT_10032510,"Gbash2");
  RegisterUnits(&DAT_10032480,"Gkon2");
  RegisterZone(&DAT_10032668,"Zband0");
  RegisterZone(&DAT_100326e8,"Zband00");
  RegisterZone(&DAT_10032658,"Zband1");
  RegisterZone(&DAT_100326f8,"Zband1a");
  RegisterZone(&DAT_10032700,"Zband1b");
  RegisterZone(&DAT_10032660,"Zband2");
  RegisterZone(&DAT_10032708,"Zband2a");
  RegisterZone(&DAT_10032710,"Zband2b");
  RegisterZone(&DAT_10032698,"Zgen1");
  RegisterZone(&DAT_100326a0,"Zgen2");
  RegisterZone(&DAT_100326a8,"Zgen3");
  RegisterZone(&DAT_10032688,"Zattack1");
  RegisterZone(&DAT_10032690,"Zattack2");
  RegisterZone(&DAT_10032678,"Zattack3");
  RegisterZone(&DAT_10032680,"Zattack4");
  RegisterZone(&DAT_100325f0,"Zsvet1");
  RegisterZone(&DAT_100325f8,"Zsvet2");
  RegisterZone(&DAT_10032600,"Zsvet3");
  RegisterZone(&DAT_10032440,"Zotxod2");
  RegisterUnitType(&DAT_10032408,"Fregat(PL)");
  RegisterUnitType(&DAT_10032590,"FregatNEW(PL)");
  RegisterUnitType(&DAT_100326b0,"Pushka_mnogostvolka(RU)");
  RegisterUnitType(&DAT_10032438,"Krestian_Turki(TU)");
  RegisterUnitType(&DAT_10032468,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10032478,"Kres_ukranian(UA)");
  RegisterUnitType(&DAT_10032450,"Kreposnoi_evro(PL)");
  RegisterUnitType(&DAT_10032490,"WALL_TU(TU)");
  RegisterUnitType(&DAT_100325d0,"WALL_UKR(TU)");
  RegisterUnitType(&DAT_10032498,"WALL_KR(RU)");
  RegisterUnitType(&DAT_100325e0,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_100324a0,"WALL_EV(PL)");
  RegisterUnitType(&DAT_100325e8,"WALL_UKR(UA)");
  RegisterUnitType(&DAT_100324a8,"WALL_EV(PL)");
  RegisterUnitType(&DAT_100325d8,"WALL_UKR(PL)");
  RegisterUnitType(&DAT_10032500,"Russki_Center(RU)");
  RegisterUnitType(&DAT_10032508,"CenterUR(UA)");
  RegisterUnitType(&DAT_10032520,"Center_Poland(PL)");
  RegisterUnitType(&DAT_100326d8,"shahta(TU)");
  RegisterUnitType(&DAT_100326d0,"shahta_FE(TU)");
  RegisterUnitType(&DAT_100326e0,"shahta_UG(TU)");
  RegisterVar(&DAT_10032458,8);
  RegisterVar(&DAT_10032448,8);
  RegisterVar(&DAT_10032470,8);
  RegisterVar(&DAT_10032460,8);
  RegisterVar(&DAT_10032418,8);
  RegisterVar(&DAT_10032410,8);
  RegisterVar(&DAT_10032428,8);
  RegisterVar(&DAT_10032420,8);
  RegisterVar(&DAT_10032430,8);
  RegisterVar(&DAT_10032530,8);
  RegisterVar(&DAT_10032528,8);
  RegisterVar(&DAT_10032568,8);
  RegisterVar(&DAT_10032560,8);
  RegisterVar(&DAT_10032580,8);
  RegisterVar(&DAT_10032570,8);
  RegisterVar(&DAT_10032548,8);
  RegisterVar(&DAT_10032540,8);
  RegisterVar(&DAT_10032558,8);
  RegisterVar(&DAT_10032550,8);
  RegisterVar(&DAT_10032578,8);
  RegisterVar(&DAT_10032538,4);
  RegisterVar(&DAT_10032588,4);
  RegisterVar(&DAT_100325c8,4);
  RegisterVar(&DAT_10032608,4);
  RegisterVar(&DAT_10032650,4);
  RegisterVar(&DAT_10032670,4);
  RegisterVar(&DAT_10032598,4);
  RegisterVar(&DAT_100326f0,4);
  RegisterVar(&DAT_100324c8,4);
  RegisterFormation(&DAT_100326c8,"#LINE5");
  RegisterFormation(&DAT_100325a8,"#LINE20PUS");
  RegisterFormation(&DAT_100325b8,"#LINE30PUS");
  RegisterFormation(&DAT_100325c0,"#LINE40PUS");
  RegisterFormation(&DAT_100325b0,"#LINE15PUS");
  RegisterFormation(&DAT_100325a0,"#LINE10PUS");
  RegisterFormation(&DAT_100326c0,"#LINE3");
  RegisterFormation(&DAT_100323f8,"#SHIPS3");
  RegisterFormation(&DAT_10032400,"#SHIPS5");
  RegisterFormation(&DAT_10032488,"#ALONE");
  RegisterDynGroup(&DAT_10032458);
  RegisterDynGroup(&DAT_10032448);
  RegisterDynGroup(&DAT_10032470);
  RegisterDynGroup(&DAT_10032460);
  RegisterDynGroup(&DAT_10032418);
  RegisterDynGroup(&DAT_10032410);
  RegisterDynGroup(&DAT_10032428);
  RegisterDynGroup(&DAT_10032420);
  RegisterDynGroup(&DAT_10032430);
  RegisterDynGroup(&DAT_10032530);
  RegisterDynGroup(&DAT_10032528);
  RegisterDynGroup(&DAT_10032568);
  RegisterDynGroup(&DAT_10032560);
  RegisterDynGroup(&DAT_10032580);
  RegisterDynGroup(&DAT_10032570);
  RegisterDynGroup(&DAT_10032548);
  RegisterDynGroup(&DAT_10032540);
  RegisterDynGroup(&DAT_10032558);
  RegisterDynGroup(&DAT_10032550);
  RegisterDynGroup(&DAT_10032578);
  RegisterDynGroup(&DAT_100326b8);
  SetPlayerName(1,"RUSSIA");
  SetPlayerName(2,"UKRAINE");
  SetPlayerName(3,"POLAND");
  SetPlayerName(4,"POLAND");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(1,0x3e);
  ChangeFriends(2,0x3e);
  ChangeFriends(3,0x3e);
  ChangeFriends(4,0x3e);
  ChangeFriends(5,0x3e);
  EnableUnit(0,&DAT_10032490,0);
  EnableUnit(0,&DAT_100325d0,0);
  EnableUnit(0,&DAT_10032498,0);
  EnableUnit(0,&DAT_100325e0,0);
  EnableUnit(0,&DAT_100325e8,0);
  EnableUnit(0,&DAT_100324a8,0);
  EnableUnit(0,&DAT_100325d8,0);
  EnableUnit(0,&DAT_10032468,0);
  EnableUnit(0,&DAT_10032478,0);
  EnableUnit(0,&DAT_10032450,0);
  EnableUnit(0,&DAT_10032500,0);
  EnableUnit(0,&DAT_10032508,0);
  EnableUnit(0,&DAT_10032520,0);
  uStack_8 = 0x10001f6f;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
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
    TakeWood(&DAT_100324d8);
    TakeWood(&DAT_100324d0);
    TakeWood(&DAT_100324f8);
    SetDestPoint(&DAT_10032480,&DAT_10032440);
    local_c = GetDiff(0);
    switch(local_c) {
    case 0:
      SetResource(0,3,25000);
      SetResource(0,0,25000);
      SetResource(0,2,25000);
      SetResource(0,1,25000);
      SetResource(0,5,25000);
      SetResource(0,4,25000);
      SelectUnits(&DAT_10032518,0);
      SelectUnits(&DAT_10032610,1);
      SelectUnits(&DAT_10032618,1);
      SelectUnits(&DAT_10032620,1);
      SelectUnits(&DAT_10032628,1);
      SelectUnits(&DAT_10032630,1);
      SelErase(5);
      SelectUnits(&DAT_10032510,0);
      SelectUnits(&DAT_10032638,1);
      SelectUnits(&DAT_10032640,1);
      SelectUnits(&DAT_10032648,1);
      SelErase(4);
      DAT_10032538 = 1;
      DAT_10032588 = 0;
      DAT_100325c8 = 3;
      DAT_10032608 = 3;
      DAT_10032650 = 1;
      DAT_10032670 = 1;
      break;
    case 1:
      SetResource(0,3,15000);
      SetResource(0,0,15000);
      SetResource(0,2,15000);
      SetResource(0,1,15000);
      SetResource(0,5,15000);
      SetResource(0,4,15000);
      SelectUnits(&DAT_10032610,0);
      SelectUnits(&DAT_10032618,1);
      SelectUnits(&DAT_10032628,1);
      SelectUnits(&DAT_10032630,1);
      SelErase(5);
      SelectUnits(&DAT_10032640,0);
      SelectUnits(&DAT_10032648,1);
      SelErase(4);
      DAT_10032538 = 1;
      DAT_10032588 = 1;
      DAT_100325c8 = 7;
      DAT_10032608 = 8;
      DAT_10032650 = 1;
      DAT_10032670 = 1;
      break;
    case 2:
      SetResource(0,3,8000);
      SetResource(0,0,8000);
      SetResource(0,2,8000);
      SetResource(0,1,8000);
      SetResource(0,5,8000);
      SetResource(0,4,8000);
      SelectUnits(&DAT_10032618,0);
      SelectUnits(&DAT_10032630,1);
      SelErase(5);
      SelectUnits(&DAT_10032648,0);
      SelErase(4);
      DAT_10032538 = 2;
      DAT_10032588 = 2;
      DAT_100325c8 = 9;
      DAT_10032608 = 10;
      DAT_10032650 = 2;
      DAT_10032670 = 1;
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      DAT_10032538 = 3;
      DAT_10032588 = 3;
      DAT_100325c8 = 0xe;
      DAT_10032608 = 0xf;
      DAT_10032650 = 2;
      DAT_10032670 = 2;
    }
    ClearSelection(4);
    ClearSelection(5);
    InitialUpgrade("Gkon2","AKA19RU");
    InitialUpgrade("Gport1","AKA06PL");
    InitialUpgrade("Gport1","MAINPL");
    InitialUpgrade("Gport1","NEWFREG(PL)");
    RunTimer(1,300);
    RunTimer(2,0x1af4);
    RunTimer(3,0x23f0);
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 0x23f0);
    InitialUpgrade("Gholop1","Melnica_rus(RU)GETRES");
    InitialUpgrade("Gholop1","MAINRU");
    InitialUpgrade("Gholop1","Melnica_rus(RU)GETRES2");
    InitialUpgrade("Gholop1","KUZ01RU");
    InitialUpgrade("Gholop1","AKA01RU");
    InitialUpgrade("Gholop1","AKA02RU");
    InitialUpgrade("Gholop1","AKA03RU");
    InitialUpgrade("Gholop1","AKA04RU");
    InitialUpgrade("Gholop1","AKA10RU");
    InitialUpgrade("Gholop2","Melnica_rus(UA)GETRES");
    InitialUpgrade("Gholop2","Melnica_rus(UA)GETRES2");
    InitialUpgrade("Gholop2","KUZ01UA");
    InitialUpgrade("Gholop2","AKA01UA");
    InitialUpgrade("Gholop2","AKA02UA");
    InitialUpgrade("Gholop2","AKA03UA");
    InitialUpgrade("Gholop2","AKA04UA");
    InitialUpgrade("Gholop2","AKA10UA");
    InitialUpgrade("Gholop3","Melnica(PL)GETRES");
    InitialUpgrade("Gholop3","MAINPL");
    InitialUpgrade("Gholop3","Melnica(PL)GETRES2");
    InitialUpgrade("Gholop3","KUZ01PL");
    InitialUpgrade("Gholop3","AKA01PL");
    InitialUpgrade("Gholop3","AKA02PL");
    InitialUpgrade("Gholop3","AKA03PL");
    InitialUpgrade("Gholop3","AKA04PL");
    InitialUpgrade("Gholop3","AKA10PL");
    SetResource(1,3,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    uVar2 = GetDiff(0);
    StartAI(1,"RUSSIA.0",1,1,2,uVar2);
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    uVar2 = GetDiff(0);
    StartAI(2,"UKRAINE.0",1,1,2,uVar2);
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    uVar2 = GetDiff(0);
    StartAI(3,"POLAND.0",1,1,2,uVar2);
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
      EnableMission(0x46);
    }
  }
  uVar1 = TimerDoneFirst(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0C");
      EnableMission(0x44);
      EnableMission(0x4b);
      iVar4 = GetDiff(0);
      if (iVar4 == 0) {
        SetLightSpot(&DAT_100325f0,1,1);
        SetLightSpot(&DAT_100325f8,1,2);
        SetLightSpot(&DAT_10032600,1,3);
        ShowPage("#PAGE0C1");
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10032668,0);
    if (0 < iVar4) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0B");
      EnableMission(0x46);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100326e8,0);
    if (0 < iVar4) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0C");
      EnableMission(0x44);
      EnableMission(0x4b);
      iVar4 = GetDiff(0);
      if (iVar4 == 0) {
        SetLightSpot(&DAT_100325f0,1,1);
        SetLightSpot(&DAT_100325f8,1,2);
        SetLightSpot(&DAT_10032600,1,3);
        ShowPage("#PAGE0C1");
      }
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10032658,&DAT_100324b8);
    iVar3 = GetTotalAmount0(&DAT_100324b8);
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      SelectUnits(&DAT_100324b8,0);
      SelSendTo(5,&DAT_10032700,0x1e,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10032658,&DAT_100324b8);
    iVar3 = GetTotalAmount0(&DAT_100324b8);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100324b8,0);
      Patrol(5,&DAT_100326f8,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100324b8);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10032658,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -2000 + 10000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -2000 + 10000);
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10032660,&DAT_100324b0);
    iVar3 = GetTotalAmount0(&DAT_100324b0);
    if (iVar4 < iVar3) {
      SetTrigg(3,1);
      SelectUnits(&DAT_100324b0,0);
      SelSendTo(5,&DAT_10032710,0x96,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10032660,&DAT_100324b0);
    iVar3 = GetTotalAmount0(&DAT_100324b0);
    if (iVar4 == iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_100324b0,0);
      Patrol(5,&DAT_10032708,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100324b0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10032660,0);
      if (0 < iVar4) {
        SetTrigg(4,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -2000 + 15000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -2000 + 15000);
        DisableMission(0x46);
        EnableMission(0x47);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc,0);
      for (local_8 = 0; local_8 < DAT_10032588; local_8 = local_8 + 1) {
        ProduceUnitFast(&DAT_10032480,&DAT_100326b0,&DAT_10032448,1);
      }
    }
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10032480);
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
        SetTrigg(0xd,1);
        SetTrigg(0xc,1);
        FreeTimer(4);
        RunTimer(5,0x86c4);
        RemoveGroup(&DAT_10032448,&DAT_10032460);
        SelectUnits(&DAT_10032460,0);
        SetStandGround(5,1);
        ClearSelection(5);
      }
    }
    AttackBuildingsInZone(&DAT_10032460,&DAT_10032690,0);
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount0(&DAT_10032460);
      if (iVar4 != 0) {
        uVar1 = TimerDoneFirst(5);
        if ((uVar1 & 0xff) == 0) goto LAB_10003c6c;
      }
      FreeTimer(5);
      SetTrigg(0xe,1);
    }
  }
LAB_10003c6c:
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032718);
    if (iVar4 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE2");
      DisableMission(0x4b);
      EnableMission(0x4c);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(6,0);
    local_10 = GetDiff(0);
    switch(local_10) {
    case 0:
      CreateObject0(&DAT_10032458,&DAT_10032488,&DAT_10032408,4,&DAT_10032698,100);
      CreateObject0(&DAT_10032470,&DAT_10032488,&DAT_10032408,4,&DAT_100326a0,0);
      CreateObject0(&DAT_10032418,&DAT_10032488,&DAT_10032408,4,&DAT_100326a8,0xe6);
      break;
    case 1:
      CreateObject0(&DAT_10032458,&DAT_100323f8,&DAT_10032408,4,&DAT_10032698,100);
      CreateObject0(&DAT_10032470,&DAT_100323f8,&DAT_10032408,4,&DAT_100326a0,0);
      CreateObject0(&DAT_10032418,&DAT_100323f8,&DAT_10032408,4,&DAT_100326a8,0xe6);
      break;
    case 2:
      CreateObject0(&DAT_10032458,&DAT_10032488,&DAT_10032590,4,&DAT_10032698,100);
      CreateObject0(&DAT_10032470,&DAT_10032488,&DAT_10032590,4,&DAT_100326a0,0);
      CreateObject0(&DAT_10032418,&DAT_10032488,&DAT_10032590,4,&DAT_100326a8,0xe6);
      break;
    case 3:
      CreateObject0(&DAT_10032458,&DAT_100323f8,&DAT_10032590,4,&DAT_10032698,100);
      CreateObject0(&DAT_10032470,&DAT_100323f8,&DAT_10032590,4,&DAT_100326a0,0);
      CreateObject0(&DAT_10032418,&DAT_100323f8,&DAT_10032590,4,&DAT_100326a8,0xe6);
    }
    SelectUnits(&DAT_10032458,0);
    SelSendAndKill(4,&DAT_10032688,100,0);
    SelectUnits(&DAT_10032418,0);
    SelSendAndKill(4,&DAT_10032678,0xe6,0);
    SelectUnits(&DAT_10032470,0);
    Patrol(4,&DAT_10032680,0);
    ClearSelection(4);
  }
  iVar4 = GetDiff(0);
  if (iVar4 != 1) {
    iVar4 = GetDiff(0);
    if (iVar4 != 3) {
      uVar1 = Trigg(0x17);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetTotalAmount0(&DAT_100323e8);
        if (0 < iVar4) {
          iVar4 = GetTotalAmount0(&DAT_10032458);
          if (iVar4 == 0) {
            SetTrigg(0x17,0);
            iVar4 = GetDiff(0);
            RunTimer(6,(5 - iVar4) * 600);
          }
        }
      }
      uVar1 = Trigg(0x18);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetTotalAmount0(&DAT_100323e0);
        if (0 < iVar4) {
          iVar4 = GetTotalAmount0(&DAT_10032470);
          if (iVar4 == 0) {
            SetTrigg(0x18,0);
            iVar4 = GetDiff(0);
            RunTimer(7,(5 - iVar4) * 600);
          }
        }
      }
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetTotalAmount0(&DAT_100323f0);
        if (0 < iVar4) {
          iVar4 = GetTotalAmount0(&DAT_10032418);
          if (iVar4 == 0) {
            SetTrigg(0x19,0);
            iVar4 = GetDiff(0);
            RunTimer(8,(5 - iVar4) * 600);
          }
        }
      }
      goto LAB_10004435;
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100323e8);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10032458);
      if (iVar4 < 3) {
        SetTrigg(0x17,0);
        iVar4 = GetDiff(0);
        RunTimer(6,(5 - iVar4) * 600);
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100323e0);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10032470);
      if (iVar4 < 3) {
        SetTrigg(0x18,0);
        iVar4 = GetDiff(0);
        RunTimer(7,(5 - iVar4) * 600);
      }
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100323f0);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10032418);
      if (iVar4 < 3) {
        SetTrigg(0x19,0);
        iVar4 = GetDiff(0);
        RunTimer(8,(5 - iVar4) * 600);
      }
    }
  }
LAB_10004435:
  uVar1 = TimerDoneFirst(0xe);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x17,1);
    RemoveGroup(&DAT_10032410,&DAT_10032458);
    SelectUnits(&DAT_10032458,0);
    SelSendAndKill(4,&DAT_10032688,100,0);
    ClearSelection(4);
  }
  uVar1 = TimerDoneFirst(0xf);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x18,1);
    RemoveGroup(&DAT_10032428,&DAT_10032470);
    SelectUnits(&DAT_10032470,0);
    Patrol(4,&DAT_10032680,0);
    ClearSelection(4);
  }
  uVar1 = TimerDoneFirst(0x10);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x19,1);
    RemoveGroup(&DAT_10032420,&DAT_10032418);
    SelectUnits(&DAT_10032418,0);
    SelSendAndKill(4,&DAT_10032678,0xe6,0);
    ClearSelection(4);
  }
  local_14 = GetDiff(0);
  if (local_14 == 0) {
    uVar1 = TimerDoneFirst(6);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100323e8,&DAT_10032408,&DAT_10032410,1);
      RunTimer(0xe,300);
    }
    uVar1 = TimerDoneFirst(7);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100323e0,&DAT_10032408,&DAT_10032428,1);
      RunTimer(0xf,300);
    }
    uVar1 = TimerDoneFirst(8);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100323f0,&DAT_10032408,&DAT_10032420,1);
      RunTimer(0x10,300);
    }
  }
  else if (local_14 == 1) {
    uVar1 = TimerDoneFirst(6);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100323e8,&DAT_10032408,&DAT_10032410,1);
      RunTimer(0xe,300);
    }
    uVar1 = TimerDoneFirst(7);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100323e0,&DAT_10032408,&DAT_10032428,1);
      RunTimer(0xf,300);
    }
    uVar1 = TimerDoneFirst(8);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100323f0,&DAT_10032408,&DAT_10032420,1);
      RunTimer(0x10,300);
    }
  }
  else {
    uVar1 = TimerDoneFirst(6);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100323e8,&DAT_10032590,&DAT_10032410,1);
      RunTimer(0xe,300);
    }
    uVar1 = TimerDoneFirst(7);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100323e0,&DAT_10032590,&DAT_10032428,1);
      RunTimer(0xf,300);
    }
    uVar1 = TimerDoneFirst(8);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100323f0,&DAT_10032590,&DAT_10032420,1);
      RunTimer(0x10,300);
    }
  }
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      local_18 = GetDiff(0);
      switch(local_18) {
      case 0:
        DAT_10032538 = DAT_10032538 + 1;
        DAT_100325c8 = DAT_100325c8 + 1;
        DAT_10032608 = DAT_10032608 + 1;
        DAT_10032650 = DAT_10032650 + 1;
        DAT_10032670 = DAT_10032670 + 1;
        break;
      case 1:
        DAT_10032538 = DAT_10032538 + 1;
        DAT_10032588 = DAT_10032588 + 1;
        DAT_100325c8 = DAT_100325c8 + 5;
        DAT_10032608 = DAT_10032608 + 5;
        DAT_10032650 = DAT_10032650 + 1;
        DAT_10032670 = DAT_10032670 + 2;
        break;
      case 2:
        DAT_10032538 = DAT_10032538 + 1;
        DAT_10032588 = DAT_10032588 + 1;
        DAT_100325c8 = DAT_100325c8 + 0xf;
        DAT_10032608 = DAT_10032608 + 0xf;
        DAT_10032650 = DAT_10032650 + 2;
        DAT_10032670 = DAT_10032670 + 1;
        break;
      case 3:
        DAT_10032538 = DAT_10032538 + 2;
        DAT_10032588 = DAT_10032588 + 2;
        DAT_100325c8 = DAT_100325c8 + 0x1e;
        DAT_10032608 = DAT_10032608 + 0x1e;
        DAT_10032650 = DAT_10032650 + 3;
        DAT_10032670 = DAT_10032670 + 2;
      }
      iVar4 = GetDiff(0);
      RunTimer(0xd,(5 - iVar4) * 0x23f0);
    }
  }
  SaveSelectedUnits(0,&DAT_100326b8,0);
  ClearSelection(0);
  SelectUnitsType(&DAT_100326b0,0,0);
  SelectUnitsType(&DAT_10032468,0,1);
  SelectUnitsType(&DAT_10032478,0,1);
  SelectUnitsType(&DAT_10032450,0,1);
  SelectUnits1(0,&DAT_100324c0,1);
  SelDie(0);
  SelectUnits(&DAT_100326b8,0);
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x10,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x11,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE8C");
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x12);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0xf,0);
          ShowPage("#PAGE8");
          DisableMission(0x42);
          EnableMission(0x43);
        }
      }
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
