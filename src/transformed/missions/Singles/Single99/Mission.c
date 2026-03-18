#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_100333e0 = 0;
long long DAT_100333e8 = 0;
long long DAT_100333f0 = 0;
long long DAT_100333f8 = 0;
long long DAT_10033400 = 0;
long long DAT_10033408 = 0;
long long DAT_10033410 = 0;
long long DAT_10033418 = 0;
long long DAT_10033420 = 0;
long long DAT_10033428 = 0;
long long DAT_10033430 = 0;
long long DAT_10033438 = 0;
long long DAT_10033440 = 0;
long long DAT_10033448 = 0;
long long DAT_10033450 = 0;
long long DAT_10033458 = 0;
long long DAT_10033460 = 0;
long long DAT_10033468 = 0;
long long DAT_10033470 = 0;
long long DAT_10033478 = 0;
long long DAT_10033480 = 0;
long long DAT_10033488 = 0;
long long DAT_10033490 = 0;
long long DAT_10033498 = 0;
long long DAT_100334a0 = 0;
long long DAT_100334a8 = 0;
long long DAT_100334b0 = 0;
long long DAT_100334b8 = 0;
long long DAT_100334c0 = 0;
long long DAT_100334c8 = 0;
long long DAT_100334d0 = 0;
long long DAT_100334d8 = 0;
long long DAT_100334e0 = 0;
long long DAT_100334e8 = 0;
long long DAT_100334f0 = 0;
long long DAT_100334f8 = 0;
long long DAT_10033500 = 0;
long long DAT_10033508 = 0;
long long DAT_10033510 = 0;
long long DAT_10033518 = 0;
long long DAT_10033520 = 0;
long long DAT_10033528 = 0;
long long DAT_10033530 = 0;
long long DAT_10033538 = 0;
long long DAT_10033540 = 0;
int DAT_10033548 = 0;
long long DAT_10033550 = 0;
long long DAT_10033558 = 0;
long long DAT_10033560 = 0;
long long DAT_10033568 = 0;
long long DAT_10033570 = 0;
long long DAT_10033578 = 0;
long long DAT_10033580 = 0;
long long DAT_10033588 = 0;
long long DAT_10033590 = 0;
int DAT_10033598 = 0;
long long DAT_100335a0 = 0;
long long DAT_100335a8 = 0;
long long DAT_100335b0 = 0;
long long DAT_100335b8 = 0;
long long DAT_100335c0 = 0;
long long DAT_100335c8 = 0;
long long DAT_100335d0 = 0;
int DAT_100335d8 = 0;
long long DAT_100335e0 = 0;
long long DAT_100335e8 = 0;
long long DAT_100335f0 = 0;
long long DAT_100335f8 = 0;
long long DAT_10033600 = 0;
long long DAT_10033608 = 0;
long long DAT_10033610 = 0;
long long DAT_10033618 = 0;
long long DAT_10033620 = 0;
int DAT_10033628 = 0;
long long DAT_10033630 = 0;
long long DAT_10033638 = 0;
long long DAT_10033640 = 0;
long long DAT_10033648 = 0;
long long DAT_10033650 = 0;
long long DAT_10033658 = 0;
int DAT_10033660 = 0;
long long DAT_10033668 = 0;
long long DAT_10033670 = 0;
long long DAT_10033678 = 0;
int DAT_10033680 = 0;
long long DAT_10033688 = 0;
long long DAT_10033690 = 0;
long long DAT_10033698 = 0;
long long DAT_100336a0 = 0;
long long DAT_100336a8 = 0;
long long DAT_100336b0 = 0;
long long DAT_100336b8 = 0;
long long DAT_100336c0 = 0;
long long DAT_100336c8 = 0;
long long DAT_100336d0 = 0;
long long DAT_100336d8 = 0;
long long DAT_100336e0 = 0;
long long DAT_100336e8 = 0;
long long DAT_100336f0 = 0;
long long DAT_100336f8 = 0;
long long DAT_10033700 = 0;
long long DAT_10033708 = 0;
long long DAT_10033710 = 0;
long long DAT_10033718 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10033490,"Ghetman");
  RegisterUnits(&DAT_100334d8,"Gband1");
  RegisterUnits(&DAT_100334d0,"Gband2");
  RegisterUnits(&DAT_100334e0,"Gband3");
  RegisterUnits(&DAT_10033510,"Gholop1");
  RegisterUnits(&DAT_10033508,"Gholop2");
  RegisterUnits(&DAT_10033500,"Gholop3");
  RegisterUnits(&DAT_100334f8,"Gholop4");
  RegisterUnits(&DAT_100334f0,"Gholop5");
  RegisterUnits(&DAT_10033630,"Gbos1");
  RegisterUnits(&DAT_10033638,"Gbos2");
  RegisterUnits(&DAT_10033640,"Gbos3");
  RegisterUnits(&DAT_10033648,"Gbos4");
  RegisterUnits(&DAT_10033650,"Gbos5");
  RegisterUnits(&DAT_10033658,"Gbos6");
  RegisterUnits(&DAT_100334a0,"Gobj1");
  RegisterUnits(&DAT_10033718,"Gport1");
  RegisterUnits(&DAT_100333e8,"Gport2");
  RegisterUnits(&DAT_100333e0,"Gport3");
  RegisterUnits(&DAT_100333f8,"Gport4");
  RegisterUnits(&DAT_100333f0,"Gport5");
  RegisterUnits(&DAT_10033530,"Gbash1");
  RegisterUnits(&DAT_10033528,"Gbash2");
  RegisterUnits(&DAT_10033488,"Gkon1");
  RegisterUnits(&DAT_10033498,"Gkon2");
  RegisterZone(&DAT_10033678,"Zband0");
  RegisterZone(&DAT_100336e8,"Zband00");
  RegisterZone(&DAT_10033668,"Zband1");
  RegisterZone(&DAT_100336f8,"Zband1a");
  RegisterZone(&DAT_10033700,"Zband1b");
  RegisterZone(&DAT_10033670,"Zband2");
  RegisterZone(&DAT_10033708,"Zband2a");
  RegisterZone(&DAT_10033710,"Zband2b");
  RegisterZone(&DAT_100336a8,"Zgen1");
  RegisterZone(&DAT_100336b0,"Zgen2");
  RegisterZone(&DAT_100336c0,"Zgen3");
  RegisterZone(&DAT_100336c8,"Zgen4");
  RegisterZone(&DAT_10033698,"Zattack1");
  RegisterZone(&DAT_100336a0,"Zattack2");
  RegisterZone(&DAT_10033688,"Zattack3");
  RegisterZone(&DAT_10033690,"Zattack4");
  RegisterZone(&DAT_100335e0,"Zpatrol1");
  RegisterZone(&DAT_100335e8,"Zpatrol2");
  RegisterZone(&DAT_10033608,"Zsvet1");
  RegisterZone(&DAT_10033610,"Zsvet2");
  RegisterZone(&DAT_10033618,"Zsvet3");
  RegisterZone(&DAT_10033620,"Zsvet4");
  RegisterZone(&DAT_10033448,"Zotxod1");
  RegisterZone(&DAT_10033450,"Zotxod2");
  RegisterUnitType(&DAT_10033410,"Fregat(en)");
  RegisterUnitType(&DAT_100335a0,"FregatNEW(en)");
  RegisterUnitType(&DAT_100334a8,"KUTTER(en)");
  RegisterUnitType(&DAT_100336b8,"Pushka_mnogostvolka(fr)");
  RegisterUnitType(&DAT_10033440,"Krestian_Turki(AL)");
  RegisterUnitType(&DAT_10033470,"Krestian_Sved(fr)");
  RegisterUnitType(&DAT_10033480,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_100334b8,"WALL_TU(AL)");
  RegisterUnitType(&DAT_100335f0,"WALL_UKR(AL)");
  RegisterUnitType(&DAT_100334c0,"WALL_EV(fr)");
  RegisterUnitType(&DAT_100335f8,"WALL_UKR(fr)");
  RegisterUnitType(&DAT_100334c8,"WALL_EV(en)");
  RegisterUnitType(&DAT_10033600,"WALL_UKR(en)");
  RegisterUnitType(&DAT_10033518,"Center_France(fr)");
  RegisterUnitType(&DAT_10033520,"Center_British(en)");
  RegisterVar(&DAT_10033460,8);
  RegisterVar(&DAT_10033458,8);
  RegisterVar(&DAT_10033478,8);
  RegisterVar(&DAT_10033468,8);
  RegisterVar(&DAT_10033420,8);
  RegisterVar(&DAT_10033418,8);
  RegisterVar(&DAT_10033430,8);
  RegisterVar(&DAT_10033428,8);
  RegisterVar(&DAT_10033438,8);
  RegisterVar(&DAT_10033540,8);
  RegisterVar(&DAT_10033538,8);
  RegisterVar(&DAT_10033578,8);
  RegisterVar(&DAT_10033570,8);
  RegisterVar(&DAT_10033590,8);
  RegisterVar(&DAT_10033580,8);
  RegisterVar(&DAT_10033558,8);
  RegisterVar(&DAT_10033550,8);
  RegisterVar(&DAT_10033568,8);
  RegisterVar(&DAT_10033560,8);
  RegisterVar(&DAT_10033588,8);
  RegisterVar(&DAT_10033548,4);
  RegisterVar(&DAT_10033598,4);
  RegisterVar(&DAT_100335d8,4);
  RegisterVar(&DAT_10033628,4);
  RegisterVar(&DAT_10033660,4);
  RegisterVar(&DAT_10033680,4);
  RegisterVar(&DAT_100335a8,4);
  RegisterVar(&DAT_100336f0,4);
  RegisterVar(&DAT_100334e8,4);
  RegisterFormation(&DAT_100336e0,"#LINE5");
  RegisterFormation(&DAT_100335b8,"#LINE20PUS");
  RegisterFormation(&DAT_100335c8,"#LINE30PUS");
  RegisterFormation(&DAT_100335d0,"#LINE40PUS");
  RegisterFormation(&DAT_100335c0,"#LINE15PUS");
  RegisterFormation(&DAT_100335b0,"#LINE10PUS");
  RegisterFormation(&DAT_100336d8,"#LINE3");
  RegisterFormation(&DAT_10033400,"#SHIPS3");
  RegisterFormation(&DAT_10033408,"#SHIPS5");
  RegisterFormation(&DAT_100334b0,"#ALONE");
  RegisterDynGroup(&DAT_10033460);
  RegisterDynGroup(&DAT_10033458);
  RegisterDynGroup(&DAT_10033478);
  RegisterDynGroup(&DAT_10033468);
  RegisterDynGroup(&DAT_10033420);
  RegisterDynGroup(&DAT_10033418);
  RegisterDynGroup(&DAT_10033430);
  RegisterDynGroup(&DAT_10033428);
  RegisterDynGroup(&DAT_10033438);
  RegisterDynGroup(&DAT_10033540);
  RegisterDynGroup(&DAT_10033538);
  RegisterDynGroup(&DAT_10033578);
  RegisterDynGroup(&DAT_10033570);
  RegisterDynGroup(&DAT_10033590);
  RegisterDynGroup(&DAT_10033580);
  RegisterDynGroup(&DAT_10033558);
  RegisterDynGroup(&DAT_10033550);
  RegisterDynGroup(&DAT_10033568);
  RegisterDynGroup(&DAT_10033560);
  RegisterDynGroup(&DAT_10033588);
  RegisterDynGroup(&DAT_100336d0);
  SetPlayerName(1,"FRANCE");
  SetPlayerName(2,"ENGLAND");
  SetPlayerName(3,"ENGLAND");
  SetPlayerName(4,"FRANCE");
  ChangeFriends(1,0x1e);
  ChangeFriends(2,0x1e);
  ChangeFriends(3,0x1e);
  ChangeFriends(4,0x1e);
  EnableUnit(0,&DAT_100334b8,0);
  EnableUnit(0,&DAT_100335f0,0);
  EnableUnit(0,&DAT_100334c0,0);
  EnableUnit(0,&DAT_100335f8,0);
  EnableUnit(0,&DAT_100334c8,0);
  EnableUnit(0,&DAT_10033600,0);
  EnableUnit(0,&DAT_10033470,0);
  EnableUnit(0,&DAT_10033480,0);
  EnableUnit(0,&DAT_10033518,0);
  EnableUnit(0,&DAT_10033520,0);
  uStack_8 = 0x10001f4f;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_20;
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
    TakeWood(&DAT_100334f8);
    TakeStone(&DAT_100334f0);
    TakeStone(&DAT_10033500);
    SelectUnits(&DAT_10033490,0);
    Patrol(3,&DAT_100335e0,0);
    SetDestPoint(&DAT_10033488,&DAT_10033448);
    SetDestPoint(&DAT_10033498,&DAT_10033450);
    SetDestPoint(&DAT_100333e8,&DAT_100336a8);
    SetDestPoint(&DAT_100333e0,&DAT_100336b0);
    SetDestPoint(&DAT_100333f8,&DAT_100336c0);
    SetDestPoint(&DAT_100333f0,&DAT_100336c8);
    ClearSelection(3);
    local_10 = GetDiff(0);
    switch(local_10) {
    case 0:
      SetResource(0,3,20000);
      SetResource(0,0,20000);
      SetResource(0,2,20000);
      SetResource(0,1,20000);
      SetResource(0,5,20000);
      SetResource(0,4,20000);
      SelectUnits(&DAT_10033530,0);
      SelectUnits(&DAT_10033630,1);
      SelectUnits(&DAT_10033638,1);
      SelectUnits(&DAT_10033640,1);
      SelectUnits(&DAT_10033648,1);
      SelErase(4);
      SelectUnits(&DAT_10033528,0);
      SelectUnits(&DAT_10033650,1);
      SelectUnits(&DAT_10033658,1);
      SelErase(3);
      DAT_10033548 = 0;
      DAT_10033598 = 0;
      DAT_100335d8 = 3;
      DAT_10033628 = 3;
      DAT_10033660 = 1;
      DAT_10033680 = 1;
      break;
    case 1:
      SetResource(0,3,15000);
      SetResource(0,0,15000);
      SetResource(0,2,15000);
      SetResource(0,1,15000);
      SetResource(0,5,15000);
      SetResource(0,4,15000);
      SelectUnits(&DAT_10033630,0);
      SelectUnits(&DAT_10033638,1);
      SelectUnits(&DAT_10033640,1);
      SelectUnits(&DAT_10033648,1);
      SelErase(4);
      SelectUnits(&DAT_10033650,0);
      SelectUnits(&DAT_10033658,1);
      SelErase(3);
      DAT_10033548 = 1;
      DAT_10033598 = 1;
      DAT_100335d8 = 7;
      DAT_10033628 = 8;
      DAT_10033660 = 1;
      DAT_10033680 = 1;
      break;
    case 2:
      SetResource(0,3,8000);
      SetResource(0,0,8000);
      SetResource(0,2,8000);
      SetResource(0,1,8000);
      SetResource(0,5,8000);
      SetResource(0,4,8000);
      SelectUnits(&DAT_10033638,0);
      SelectUnits(&DAT_10033648,1);
      SelErase(4);
      SelectUnits(&DAT_10033658,0);
      SelErase(3);
      DAT_10033548 = 2;
      DAT_10033598 = 2;
      DAT_100335d8 = 9;
      DAT_10033628 = 10;
      DAT_10033660 = 2;
      DAT_10033680 = 1;
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      DAT_10033548 = 3;
      DAT_10033598 = 3;
      DAT_100335d8 = 0xe;
      DAT_10033628 = 0xf;
      DAT_10033660 = 2;
      DAT_10033680 = 2;
    }
    ClearSelection(3);
    ClearSelection(4);
    InitialUpgrade("Gkon1","AKA19FR");
    InitialUpgrade("Gport1","AKA28EN");
    InitialUpgrade("Gport1","AKA30EN");
    InitialUpgrade("Gport1","AKA06EN");
    InitialUpgrade("Gport1","MAINEN");
    InitialUpgrade("Gport1","NEWFREG(en)");
    InitialUpgrade("Gport1","NEWKUTT(en)");
    RunTimer(1,300);
    RunTimer(2,0x11f8);
    RunTimer(3,0x23f0);
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 0x23f0);
    iVar4 = GetDiff(0);
    RunTimer(0x13,(6 - iVar4) * 0x11f8);
    iVar4 = GetDiff(0);
    RunTimer(0x14,(6 - iVar4) * 0x23f0);
    iVar4 = GetDiff(0);
    RunTimer(0x15,(6 - iVar4) * 0x35e8);
    iVar4 = GetDiff(0);
    RunTimer(0x16,(6 - iVar4) * 0x47e0);
    InitialUpgrade("Gholop1","Melnica(fr)GETRES");
    InitialUpgrade("Gholop1","MAINFR");
    InitialUpgrade("Gholop1","Melnica(fr)GETRES2");
    InitialUpgrade("Gholop1","KUZ01FR");
    InitialUpgrade("Gholop1","AKA01FR");
    InitialUpgrade("Gholop1","AKA02FR");
    InitialUpgrade("Gholop1","AKA03FR");
    InitialUpgrade("Gholop1","AKA04FR");
    InitialUpgrade("Gholop1","AKA10FR");
    InitialUpgrade("Gholop2","Melnica(en)GETRES");
    InitialUpgrade("Gholop2","MAINEN");
    InitialUpgrade("Gholop2","Melnica(en)GETRES2");
    InitialUpgrade("Gholop2","KUZ01EN");
    InitialUpgrade("Gholop2","AKA01EN");
    InitialUpgrade("Gholop2","AKA02EN");
    InitialUpgrade("Gholop2","AKA03EN");
    InitialUpgrade("Gholop2","AKA04EN");
    InitialUpgrade("Gholop2","AKA10EN");
    SetResource(1,3,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    uVar2 = GetDiff(0);
    StartAI(1,"FRANCE.0",1,1,2,uVar2);
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    uVar2 = GetDiff(0);
    StartAI(2,"ENGLAND.0",1,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(0x13);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA16EN");
  }
  uVar1 = TimerDoneFirst(0x14);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA17EN");
  }
  uVar1 = TimerDoneFirst(0x15);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA20EN");
  }
  uVar1 = TimerDoneFirst(0x16);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA27EN");
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
      iVar4 = GetDiff(0);
      if (iVar4 == 0) {
        SetLightSpot(&DAT_10033608,1,1);
        SetLightSpot(&DAT_10033610,1,2);
        SetLightSpot(&DAT_10033618,1,3);
        SetLightSpot(&DAT_10033620,1,4);
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10033678,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_100336e8,0);
      if (iVar4 < 1) goto LAB_1000348f;
    }
    SetTrigg(0x5f,0);
    ShowPage("#PAGE0B");
    EnableMission(0x44);
    EnableMission(0x46);
  }
LAB_1000348f:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033668,&DAT_100334d8);
    iVar3 = GetTotalAmount0(&DAT_100334d8);
    if (iVar4 < iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100334d8,0);
      SelSendTo(4,&DAT_10033700,100,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033668,&DAT_100334d8);
    iVar3 = GetTotalAmount0(&DAT_100334d8);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100334d8,0);
      Patrol(4,&DAT_100336f8,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334d8);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033668,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -2000 + 17000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -2000 + 17000);
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033670,&DAT_100334d0);
    iVar3 = GetTotalAmount0(&DAT_100334d0);
    if (iVar4 < iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_100334d0,0);
      SelSendTo(4,&DAT_10033710,0x96,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033670,&DAT_100334d0);
    iVar3 = GetTotalAmount0(&DAT_100334d0);
    if (iVar4 == iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_100334d0,0);
      Patrol(4,&DAT_10033708,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334d0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033670,0);
      if (0 < iVar4) {
        SetTrigg(4,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -2000 + 20000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -2000 + 20000);
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
      for (local_8 = 0; local_8 < DAT_10033548; local_8 = local_8 + 1) {
        ProduceUnitFast(&DAT_10033488,&DAT_100336b8,&DAT_10033460,1);
      }
    }
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10033488);
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
        RemoveGroup(&DAT_10033460,&DAT_10033478);
        SelectUnits(&DAT_10033478,0);
        SetStandGround(5,1);
        ClearSelection(5);
      }
    }
    AttackBuildingsInZone(&DAT_10033478,&DAT_10033698,0);
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount0(&DAT_10033478);
      if (iVar4 != 0) {
        uVar1 = TimerDoneFirst(8);
        if ((uVar1 & 0xff) == 0) goto LAB_10003bf5;
      }
      FreeTimer(8);
      SetTrigg(0xb,0);
    }
  }
LAB_10003bf5:
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc,0);
      for (local_c = 0; local_c < DAT_10033598; local_c = local_c + 1) {
        ProduceUnitFast(&DAT_10033498,&DAT_100336b8,&DAT_10033458,1);
      }
    }
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10033498);
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
        RemoveGroup(&DAT_10033458,&DAT_10033468);
        SelectUnits(&DAT_10033468,0);
        SetStandGround(5,1);
        ClearSelection(5);
      }
    }
    AttackBuildingsInZone(&DAT_10033468,&DAT_100336a0,0);
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount0(&DAT_10033468);
      if (iVar4 != 0) {
        uVar1 = TimerDoneFirst(5);
        if ((uVar1 & 0xff) == 0) goto LAB_10003ea4;
      }
      FreeTimer(5);
      SetTrigg(0xe,0);
    }
  }
LAB_10003ea4:
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033718);
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
    local_14 = GetDiff(0);
    switch(local_14) {
    case 0:
      CreateObject0(&DAT_10033420,&DAT_100334b0,&DAT_10033410,3,&DAT_100336a8,0x1e);
      CreateObject0(&DAT_10033418,&DAT_100334b0,&DAT_100334a8,3,&DAT_100336b0,0x82);
      CreateObject0(&DAT_10033430,&DAT_100334b0,&DAT_10033410,3,&DAT_100336c0,0x46);
      CreateObject0(&DAT_10033428,&DAT_100334b0,&DAT_100334a8,3,&DAT_100336c8,0x82);
      break;
    case 1:
      CreateObject0(&DAT_10033420,&DAT_10033408,&DAT_10033410,3,&DAT_100336a8,0x1e);
      CreateObject0(&DAT_10033418,&DAT_10033400,&DAT_100334a8,3,&DAT_100336b0,0x82);
      CreateObject0(&DAT_10033430,&DAT_10033408,&DAT_10033410,3,&DAT_100336c0,0x46);
      CreateObject0(&DAT_10033428,&DAT_10033400,&DAT_100334a8,3,&DAT_100336c8,0x82);
      break;
    case 2:
      CreateObject0(&DAT_10033420,&DAT_10033400,&DAT_100335a0,3,&DAT_100336a8,0x1e);
      CreateObject0(&DAT_10033418,&DAT_10033408,&DAT_100334a8,3,&DAT_100336b0,0x82);
      CreateObject0(&DAT_10033430,&DAT_10033400,&DAT_100335a0,3,&DAT_100336c0,0x46);
      CreateObject0(&DAT_10033428,&DAT_10033408,&DAT_100334a8,3,&DAT_100336c8,0x82);
      break;
    case 3:
      CreateObject0(&DAT_10033420,&DAT_10033408,&DAT_100335a0,3,&DAT_100336a8,0x1e);
      CreateObject0(&DAT_10033418,&DAT_10033408,&DAT_100334a8,3,&DAT_100336b0,0x82);
      CreateObject0(&DAT_10033430,&DAT_10033408,&DAT_100335a0,3,&DAT_100336c0,0x46);
      CreateObject0(&DAT_10033428,&DAT_10033408,&DAT_100334a8,3,&DAT_100336c8,0x82);
    }
    SelectUnits(&DAT_10033420,0);
    SelSendAndKill(3,&DAT_10033688,0x41,0);
    SelectUnits(&DAT_10033430,0);
    SelSendAndKill(3,&DAT_10033690,0x41,0);
    SelectUnits(&DAT_10033418,0);
    Patrol(3,&DAT_100335e8,0x82);
    SelectUnits(&DAT_10033428,0);
    Patrol(3,&DAT_100336b0,0x82);
    ClearSelection(3);
  }
  local_18 = GetDiff(0);
  if (local_18 == 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333e8);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033420);
        if (iVar4 == 0) {
          SetTrigg(0x17,0);
          iVar4 = GetDiff(0);
          RunTimer(9,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x18);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333e0);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033418);
        if (iVar4 == 0) {
          SetTrigg(0x18,0);
          iVar4 = GetDiff(0);
          RunTimer(10,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x19);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333f8);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033430);
        if (iVar4 == 0) {
          SetTrigg(0x19,0);
          iVar4 = GetDiff(0);
          RunTimer(0xb,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x1a);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333f0);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033428);
        if (iVar4 == 0) {
          SetTrigg(0x1a,0);
          iVar4 = GetDiff(0);
          RunTimer(0xc,(5 - iVar4) * 600);
        }
      }
    }
  }
  else if (local_18 == 1) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333e8);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033420);
        if (iVar4 < 5) {
          SetTrigg(0x17,0);
          iVar4 = GetDiff(0);
          RunTimer(9,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x18);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333e0);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033418);
        if (iVar4 < 3) {
          SetTrigg(0x18,0);
          iVar4 = GetDiff(0);
          RunTimer(10,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x19);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333f8);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033430);
        if (iVar4 < 5) {
          SetTrigg(0x19,0);
          iVar4 = GetDiff(0);
          RunTimer(0xb,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x1a);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333f0);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033428);
        if (iVar4 < 3) {
          SetTrigg(0x1a,0);
          iVar4 = GetDiff(0);
          RunTimer(0xc,(5 - iVar4) * 600);
        }
      }
    }
  }
  else if (local_18 == 2) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333e8);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033420);
        if (iVar4 < 3) {
          SetTrigg(0x17,0);
          iVar4 = GetDiff(0);
          RunTimer(9,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x18);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333e0);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033418);
        if (iVar4 < 5) {
          SetTrigg(0x18,0);
          iVar4 = GetDiff(0);
          RunTimer(10,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x19);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333f8);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033430);
        if (iVar4 < 3) {
          SetTrigg(0x19,0);
          iVar4 = GetDiff(0);
          RunTimer(0xb,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x1a);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333f0);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033428);
        if (iVar4 < 5) {
          SetTrigg(0x1a,0);
          iVar4 = GetDiff(0);
          RunTimer(0xc,(5 - iVar4) * 600);
        }
      }
    }
  }
  else {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333e8);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033420);
        if (iVar4 < 5) {
          SetTrigg(0x17,0);
          iVar4 = GetDiff(0);
          RunTimer(9,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x18);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333e0);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033418);
        if (iVar4 < 5) {
          SetTrigg(0x18,0);
          iVar4 = GetDiff(0);
          RunTimer(10,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x19);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333f8);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033430);
        if (iVar4 < 5) {
          SetTrigg(0x19,0);
          iVar4 = GetDiff(0);
          RunTimer(0xb,(5 - iVar4) * 600);
        }
      }
    }
    uVar1 = Trigg(0x1a);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100333f0);
      if (0 < iVar4) {
        iVar4 = GetTotalAmount0(&DAT_10033428);
        if (iVar4 < 5) {
          SetTrigg(0x1a,0);
          iVar4 = GetDiff(0);
          RunTimer(0xc,(5 - iVar4) * 600);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(0xe);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x17,0);
    RemoveGroup(&DAT_10033438,&DAT_10033420);
    SelectUnits(&DAT_10033420,0);
    SelSendAndKill(3,&DAT_10033688,0x41,0);
    ClearSelection(3);
  }
  uVar1 = TimerDoneFirst(0xf);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x18,0);
    RemoveGroup(&DAT_10033540,&DAT_10033418);
    SelectUnits(&DAT_10033418,0);
    Patrol(3,&DAT_100335e8,0x82);
    ClearSelection(3);
  }
  uVar1 = TimerDoneFirst(0x10);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x19,0);
    RemoveGroup(&DAT_10033538,&DAT_10033430);
    SelectUnits(&DAT_10033430,0);
    SelSendAndKill(3,&DAT_10033690,0x41,0);
    ClearSelection(3);
  }
  uVar1 = TimerDoneFirst(0x11);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x1a,0);
    RemoveGroup(&DAT_10033578,&DAT_10033428);
    SelectUnits(&DAT_10033428,0);
    Patrol(3,&DAT_100336b0,0x82);
    ClearSelection(3);
  }
  local_1c = GetDiff(0);
  if (local_1c == 0) {
    uVar1 = TimerDoneFirst(9);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333e8,&DAT_10033410,&DAT_10033438,1);
      RunTimer(0xe,600);
    }
    uVar1 = TimerDoneFirst(10);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333e0,&DAT_100334a8,&DAT_10033540,1);
      RunTimer(0xf,600);
    }
    uVar1 = TimerDoneFirst(0xb);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333f8,&DAT_10033410,&DAT_10033538,1);
      RunTimer(0x10,600);
    }
    uVar1 = TimerDoneFirst(0xc);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333f0,&DAT_100334a8,&DAT_10033578,1);
      RunTimer(0x11,600);
    }
  }
  else if (local_1c == 1) {
    uVar1 = TimerDoneFirst(9);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333e8,&DAT_10033410,&DAT_10033438,1);
      RunTimer(0xe,600);
    }
    uVar1 = TimerDoneFirst(10);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333e0,&DAT_100334a8,&DAT_10033540,1);
      RunTimer(0xf,600);
    }
    uVar1 = TimerDoneFirst(0xb);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333f8,&DAT_10033410,&DAT_10033538,1);
      RunTimer(0x10,600);
    }
    uVar1 = TimerDoneFirst(0xc);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333f0,&DAT_100334a8,&DAT_10033578,1);
      RunTimer(0x11,600);
    }
  }
  else {
    uVar1 = TimerDoneFirst(9);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333e8,&DAT_100335a0,&DAT_10033438,1);
      RunTimer(0xe,600);
    }
    uVar1 = TimerDoneFirst(10);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333e0,&DAT_100334a8,&DAT_10033540,1);
      RunTimer(0xf,600);
    }
    uVar1 = TimerDoneFirst(0xb);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333f8,&DAT_100335a0,&DAT_10033538,1);
      RunTimer(0x10,600);
    }
    uVar1 = TimerDoneFirst(0xc);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100333f0,&DAT_100334a8,&DAT_10033578,1);
      RunTimer(0x11,600);
    }
  }
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(2);
      if ((uVar1 & 0xff) == 0) goto LAB_100056b2;
    }
    local_20 = GetDiff(0);
    switch(local_20) {
    case 0:
      DAT_100335d8 = DAT_100335d8 + 1;
      DAT_10033628 = DAT_10033628 + 1;
      DAT_10033660 = DAT_10033660 + 1;
      DAT_10033680 = DAT_10033680 + 1;
      break;
    case 1:
      DAT_10033548 = DAT_10033548 + 1;
      DAT_10033598 = DAT_10033598 + 1;
      DAT_100335d8 = DAT_100335d8 + 5;
      DAT_10033628 = DAT_10033628 + 5;
      DAT_10033660 = DAT_10033660 + 1;
      DAT_10033680 = DAT_10033680 + 2;
      break;
    case 2:
      DAT_10033548 = DAT_10033548 + 1;
      DAT_10033598 = DAT_10033598 + 1;
      DAT_100335d8 = DAT_100335d8 + 0xf;
      DAT_10033628 = DAT_10033628 + 0xf;
      DAT_10033660 = DAT_10033660 + 2;
      DAT_10033680 = DAT_10033680 + 1;
      break;
    case 3:
      DAT_10033548 = DAT_10033548 + 2;
      DAT_10033598 = DAT_10033598 + 2;
      DAT_100335d8 = DAT_100335d8 + 0x1e;
      DAT_10033628 = DAT_10033628 + 0x1e;
      DAT_10033660 = DAT_10033660 + 3;
      DAT_10033680 = DAT_10033680 + 2;
    }
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 0x23f0);
  }
LAB_100056b2:
  SaveSelectedUnits(0,&DAT_100336d0,0);
  ClearSelection(0);
  SelectUnitsType(&DAT_100336b8,0,0);
  SelectUnitsType(&DAT_10033470,0,1);
  SelectUnitsType(&DAT_10033480,0,1);
  SelectUnits1(0,&DAT_100334e0,1);
  SelDie(0);
  SelectUnits(&DAT_100336d0,0);
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
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0xf,0);
        ShowPage("#PAGE8");
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033490);
    if (iVar4 == 0) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE10");
      DisableMission(0x42);
      EnableMission(0x43);
    }
  }
  uVar1 = Trigg(0x12);
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
