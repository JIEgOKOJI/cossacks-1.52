#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002e26c[] = "Zep4";
char DAT_1002e274[] = "Zep3";
char DAT_1002e27c[] = "Zep2";
char DAT_1002e284[] = "Zep1";
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
long long DAT_10033548 = 0;
long long DAT_10033550 = 0;
long long DAT_10033558 = 0;
long long DAT_10033560 = 0;
long long DAT_10033568 = 0;
long long DAT_10033570 = 0;
long long DAT_10033578 = 0;
long long DAT_10033580 = 0;
long long DAT_10033588 = 0;
long long DAT_10033590 = 0;
long long DAT_10033598 = 0;
long long DAT_100335a0 = 0;
long long DAT_100335a8 = 0;
long long DAT_100335b0 = 0;
long long DAT_100335b8 = 0;
long long DAT_100335c0 = 0;
long long DAT_100335d8 = 0;
long long DAT_100335e0 = 0;
long long DAT_100335e8 = 0;
long long DAT_100335f0 = 0;
long long DAT_100335f8 = 0;
long long DAT_10033600 = 0;
long long DAT_10033608 = 0;
long long DAT_10033610 = 0;
long long DAT_10033618 = 0;
long long DAT_10033620 = 0;
long long DAT_10033628 = 0;
long long DAT_10033630 = 0;
long long DAT_10033638 = 0;
long long DAT_10033640 = 0;
long long DAT_10033648 = 0;
long long DAT_10033650 = 0;
long long DAT_10033658 = 0;
long long DAT_10033660 = 0;
long long DAT_10033668 = 0;
long long DAT_10033670 = 0;
long long DAT_10033678 = 0;
long long DAT_10033680 = 0;
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
long long DAT_10033720 = 0;
long long DAT_10033728 = 0;
long long DAT_10033730 = 0;
long long DAT_10033738 = 0;
long long DAT_10033740 = 0;
long long DAT_10033748 = 0;
long long DAT_10033750 = 0;
long long DAT_10033758 = 0;
long long DAT_10033760 = 0;
long long DAT_10033768 = 0;
long long DAT_10033770 = 0;
long long DAT_10033778 = 0;
long long DAT_10033780 = 0;

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10033480,"Ghetman");
  RegisterUnits(&DAT_100334e0,"Gband1");
  RegisterUnits(&DAT_100334d8,"Gband2");
  RegisterUnits(&DAT_100334f0,"Gband3");
  RegisterUnits(&DAT_100334e8,"Gband4");
  RegisterUnits(&DAT_10033528,"Gholop1");
  RegisterUnits(&DAT_10033520,"Gholop2");
  RegisterUnits(&DAT_10033518,"Gholop3");
  RegisterUnits(&DAT_10033510,"Gholop4");
  RegisterUnits(&DAT_10033508,"Gholop5");
  RegisterUnits(&DAT_10033778,"Gkep1");
  RegisterUnits(&DAT_10033780,"Gkep2");
  RegisterUnits(&DAT_10033650,"Gbos1");
  RegisterUnits(&DAT_10033658,"Gbos2");
  RegisterUnits(&DAT_10033660,"Gbos3");
  RegisterUnits(&DAT_10033670,"Gbos4");
  RegisterUnits(&DAT_10033708,"Gsouz1");
  RegisterUnits(&DAT_10033718,"Gsouz2");
  RegisterUnits(&DAT_10033620,"Gmush1");
  RegisterUnits(&DAT_100336f8,"Gmushav1");
  RegisterUnits(&DAT_10033700,"Gmushav2");
  RegisterUnits(&DAT_10033618,"Gmush2");
  RegisterUnits(&DAT_10033630,"Gmush3");
  RegisterUnits(&DAT_10033628,"Gmush4");
  RegisterUnits(&DAT_10033638,"Gmush5");
  RegisterUnits(&DAT_10033598,"Gpike1");
  RegisterUnits(&DAT_100335e0,"Gpikeav1");
  RegisterUnits(&DAT_100335d8,"Gpikeav2");
  RegisterUnits(&DAT_10033588,"Gpike2");
  RegisterUnits(&DAT_100335a8,"Gpike3");
  RegisterUnits(&DAT_100335a0,"Gpike4");
  RegisterUnits(&DAT_100335b8,"Gpike5");
  RegisterUnits(&DAT_10033550,"Gpush1");
  RegisterUnits(&DAT_10033560,"Gpush2");
  RegisterUnits(&DAT_10033558,"Gpush3");
  RegisterUnits(&DAT_100334a8,"Gobj1");
  RegisterUnits(&DAT_10033728,"Ggates1");
  RegisterUnits(&DAT_10033720,"Ggates2");
  RegisterUnits(&DAT_10033730,"Ggates3");
  RegisterUnits(&DAT_100334f8,"Goboz");
  RegisterUnits(&DAT_10033478,"Gkon1");
  RegisterUnits(&DAT_10033488,"Gkon2");
  RegisterUnits(&DAT_10033490,"Gkon3");
  RegisterUnits(&DAT_10033498,"Gkon4");
  RegisterZone(&DAT_10033698,"Zband1");
  RegisterZone(&DAT_100336a8,"Zband0");
  RegisterZone(&DAT_10033710,"Zband00");
  RegisterZone(&DAT_10033758,"Zband1a");
  RegisterZone(&DAT_10033760,"Zband1b");
  RegisterZone(&DAT_100336a0,"Zband2");
  RegisterZone(&DAT_10033768,"Zband2a");
  RegisterZone(&DAT_10033770,"Zband2b");
  RegisterZone(&DAT_100336b0,"Zband3");
  RegisterZone(&DAT_10033738,"Zband3a");
  RegisterZone(&DAT_10033740,"Zband3b");
  RegisterZone(&DAT_100336b8,"Zband4");
  RegisterZone(&DAT_10033748,"Zband4a");
  RegisterZone(&DAT_10033750,"Zband4b");
  RegisterZone(&DAT_100335e8,"Ztalk1");
  RegisterZone(&DAT_100335f0,"Ztalk2");
  RegisterZone(&DAT_100336c8,"Zgen1");
  RegisterZone(&DAT_100336d0,"Zgen2");
  RegisterZone(&DAT_100336d8,"Zgen3");
  RegisterZone(&DAT_100336c0,"Zattack1");
  RegisterZone(&DAT_10033500,"Zoboz");
  RegisterZone(&DAT_100333e0,DAT_1002e284);
  RegisterZone(&DAT_100333e8,DAT_1002e27c);
  RegisterZone(&DAT_100333f0,DAT_1002e274);
  RegisterZone(&DAT_100333f8,DAT_1002e26c);
  RegisterZone(&DAT_10033678,"Zep1a");
  RegisterZone(&DAT_10033680,"Zep2a");
  RegisterZone(&DAT_10033688,"Zep3a");
  RegisterZone(&DAT_10033690,"Zep4a");
  RegisterZone(&DAT_10033640,"Zsvet1");
  RegisterUnitType(&DAT_100334a0,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_10033578,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_10033568,"GRUZ(UN)");
  RegisterUnitType(&DAT_10033648,"Pikiner_evro(fr)");
  RegisterUnitType(&DAT_10033668,"Mushketer_ev(fr)");
  RegisterUnitType(&DAT_10033438,"Kreposnoi_pruss(au)");
  RegisterUnitType(&DAT_10033458,"Krestian_Sved(fr)");
  RegisterUnitType(&DAT_10033468,"Kreposnoi_pruss(BA)");
  RegisterUnitType(&DAT_10033440,"Kreposnoi_pruss(GE)");
  RegisterUnitType(&DAT_100334b8,"WALL_EV(au)");
  RegisterUnitType(&DAT_100335f8,"WALL_UKR(au)");
  RegisterUnitType(&DAT_100334c0,"WALL_EV(fr)");
  RegisterUnitType(&DAT_10033608,"WALL_UKR(fr)");
  RegisterUnitType(&DAT_100334c8,"WALL_EV(BA)");
  RegisterUnitType(&DAT_10033610,"WALL_UKR(BA)");
  RegisterUnitType(&DAT_100334d0,"WALL_EV(GE)");
  RegisterUnitType(&DAT_10033600,"WALL_UKR(GE)");
  RegisterUnitType(&DAT_10033530,"Center_France(fr)");
  RegisterUnitType(&DAT_10033538,"Europ(BA)");
  RegisterUnitType(&DAT_10033540,"Europ(GE)");
  RegisterVar(&DAT_10033450,8);
  RegisterVar(&DAT_10033448,8);
  RegisterVar(&DAT_10033470,8);
  RegisterVar(&DAT_10033460,8);
  RegisterVar(&DAT_10033418,8);
  RegisterVar(&DAT_10033410,8);
  RegisterVar(&DAT_10033428,8);
  RegisterVar(&DAT_10033420,8);
  RegisterVar(&DAT_10033430,8);
  RegisterVar(&DAT_10033548,8);
  RegisterFormation(&DAT_100336f0,"#LINE5");
  RegisterFormation(&DAT_10033580,"#LINE20PUS");
  RegisterFormation(&DAT_100335b0,"#LINE30PUS");
  RegisterFormation(&DAT_100335c0,"#LINE40PUS");
  RegisterFormation(&DAT_10033590,"#LINE15PUS");
  RegisterFormation(&DAT_10033570,"#LINE10PUS");
  RegisterFormation(&DAT_100336e8,"#LINE3");
  RegisterFormation(&DAT_10033400,"#SHIPS3");
  RegisterFormation(&DAT_10033408,"#SHIPS5");
  RegisterFormation(&DAT_100334b0,"#ALONE");
  RegisterDynGroup(&DAT_10033450);
  RegisterDynGroup(&DAT_10033448);
  RegisterDynGroup(&DAT_10033470);
  RegisterDynGroup(&DAT_10033460);
  RegisterDynGroup(&DAT_10033418);
  RegisterDynGroup(&DAT_10033410);
  RegisterDynGroup(&DAT_10033428);
  RegisterDynGroup(&DAT_10033420);
  RegisterDynGroup(&DAT_10033430);
  RegisterDynGroup(&DAT_10033548);
  RegisterDynGroup(&DAT_100336e0);
  SetPlayerName(1,"AUSTRIANS");
  SetPlayerName(2,"AUSTRIANS");
  SetPlayerName(3,"FRANCE");
  SetPlayerName(4,"BAVARIA");
  SetPlayerName(5,"BANDITS");
  SetPlayerName(6,"PRUSSIA");
  ChangeFriends(1,7);
  ChangeFriends(2,7);
  ChangeFriends(3,0x78);
  ChangeFriends(4,0x78);
  ChangeFriends(5,0x78);
  ChangeFriends(6,0x78);
  EnableUnit(0,&DAT_100334b8,0);
  EnableUnit(0,&DAT_100335f8,0);
  EnableUnit(0,&DAT_100334c0,0);
  EnableUnit(0,&DAT_10033608,0);
  EnableUnit(0,&DAT_100334c8,0);
  EnableUnit(0,&DAT_10033610,0);
  EnableUnit(0,&DAT_100334d0,0);
  EnableUnit(0,&DAT_10033600,0);
  EnableUnit(0,&DAT_10033458,0);
  EnableUnit(0,&DAT_10033468,0);
  EnableUnit(0,&DAT_10033440,0);
  EnableUnit(0,&DAT_10033530,0);
  EnableUnit(0,&DAT_10033538,0);
  EnableUnit(0,&DAT_10033540,0);
  uStack_8 = 0x10002040;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
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
    DisableMission(0x4f);
    TakeFood(&DAT_10033528);
    TakeFood(&DAT_10033520);
    TakeStone(&DAT_10033518);
    TakeWood(&DAT_10033510);
    SelectUnits(&DAT_10033778,0);
    SelectUnits(&DAT_10033708,1);
    SetStandGround(1,1);
    SelectUnits(&DAT_10033780,0);
    SelectUnits(&DAT_10033718,1);
    SetStandGround(2,1);
    SelectUnits(&DAT_10033728,0);
    SelectUnits(&DAT_10033720,1);
    SelectUnits(&DAT_10033730,1);
    SelOpenGates(3);
    ClearSelection(3);
    local_8 = GetDiff(0);
    switch(local_8) {
    case 0:
      SetResource(0,3,5000);
      SetResource(0,0,7000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,12000);
      SetResource(0,4,12000);
      SelectUnits(&DAT_10033650,0);
      SelectUnits(&DAT_10033658,1);
      SelectUnits(&DAT_10033660,1);
      SelectUnits(&DAT_10033670,1);
      SelErase(5);
      SelectUnits(&DAT_10033598,0);
      SelectUnits(&DAT_10033620,1);
      SelectUnits(&DAT_10033588,1);
      SelectUnits(&DAT_10033618,1);
      SelectUnits(&DAT_100335a8,1);
      SelectUnits(&DAT_10033630,1);
      SelectUnits(&DAT_100335a0,1);
      SelectUnits(&DAT_10033628,1);
      SelectUnits(&DAT_100335b8,1);
      SelectUnits(&DAT_10033638,1);
      SelectUnits(&DAT_10033550,1);
      SelectUnits(&DAT_10033560,1);
      SelectUnits(&DAT_10033558,1);
      SelErase(3);
      break;
    case 1:
      SetResource(0,3,5000);
      SetResource(0,0,6000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10033650,0);
      SelectUnits(&DAT_10033670,1);
      SelErase(5);
      SelectUnits(&DAT_10033620,0);
      SelectUnits(&DAT_10033618,1);
      SelectUnits(&DAT_10033630,1);
      SelectUnits(&DAT_10033628,1);
      SelectUnits(&DAT_10033638,1);
      SelectUnits(&DAT_10033550,1);
      SelectUnits(&DAT_10033560,1);
      SelectUnits(&DAT_10033558,1);
      SelErase(3);
      break;
    case 2:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,8000);
      SetResource(0,4,8000);
      SelectUnits(&DAT_10033658,0);
      SelErase(5);
      SelectUnits(&DAT_10033598,0);
      SelectUnits(&DAT_10033588,1);
      SelectUnits(&DAT_100335a8,1);
      SelectUnits(&DAT_100335a0,1);
      SelectUnits(&DAT_100335b8,1);
      SelectUnits(&DAT_10033550,1);
      SelectUnits(&DAT_10033560,1);
      SelectUnits(&DAT_10033558,1);
      SelErase(3);
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,4000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,7000);
      SetResource(0,4,7000);
    }
    RunTimer(6,300);
    RunTimer(7,15000);
    RunTimer(1,6000);
    InitialUpgrade("Gobj1","AKA04FR");
    InitialUpgrade("Gobj1","AKA11FR");
    InitialUpgrade("Gobj1","KUZ01FR");
    SetResource(4,3,5000);
    SetResource(4,0,5000);
    SetResource(4,2,5000);
    SetResource(4,1,5000);
    SetResource(4,5,5000);
    SetResource(4,4,5000);
    uVar2 = GetDiff(0);
    StartAI(4,"BAVARIA.0",1,1,2,uVar2);
    SetResource(6,3,5000);
    SetResource(6,0,5000);
    SetResource(6,2,5000);
    SetResource(6,1,5000);
    SetResource(6,5,5000);
    SetResource(6,4,5000);
    uVar2 = GetDiff(0);
    StartAI(6,"GERMAN.0",1,1,2,uVar2);
  }
  iVar4 = GetUnitsAmount1(&DAT_100333e0,&DAT_10033478);
  if (0 < iVar4) {
    SelectUnits(&DAT_10033478,0);
    SelSendTo(3,&DAT_100333e8,0x41,2);
    SelSendTo(3,&DAT_100333f0,0,2);
    SelSendTo(3,&DAT_100333f8,0xc3,2);
    SelSendTo(3,&DAT_100333e0,0x82,2);
    ClearSelection(3);
  }
  iVar4 = GetUnitsAmount1(&DAT_100333e8,&DAT_10033488);
  if (0 < iVar4) {
    SelectUnits(&DAT_10033488,0);
    SelSendTo(3,&DAT_100333f0,0,2);
    SelSendTo(3,&DAT_100333f8,0xc3,2);
    SelSendTo(3,&DAT_100333e0,0x82,2);
    SelSendTo(3,&DAT_100333e8,0x41,2);
    ClearSelection(3);
  }
  iVar4 = GetUnitsAmount1(&DAT_10033678,&DAT_10033490);
  if (0 < iVar4) {
    SelectUnits(&DAT_10033490,0);
    SelSendTo(3,&DAT_10033680,100,2);
    SelSendTo(3,&DAT_10033688,0x1e,2);
    SelSendTo(3,&DAT_10033690,0xe6,2);
    SelSendTo(3,&DAT_10033678,0xa0,2);
    ClearSelection(3);
  }
  iVar4 = GetUnitsAmount1(&DAT_10033680,&DAT_10033498);
  if (0 < iVar4) {
    SelectUnits(&DAT_10033498,0);
    SelSendTo(3,&DAT_10033688,0x1e,2);
    SelSendTo(3,&DAT_10033690,0xe6,2);
    SelSendTo(3,&DAT_10033678,0xa0,2);
    SelSendTo(3,&DAT_10033680,100,2);
    ClearSelection(3);
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0AA");
      EnableMission(0x44);
      SetLightSpot(&DAT_10033640,1,1);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100336a8,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_10033710,0);
      if (iVar4 < 1) {
        uVar1 = TimerDoneFirst(7);
        if ((uVar1 & 0xff) == 0) goto LAB_100034d2;
      }
    }
    SetTrigg(3,0);
    ShowPage("#PAGE2");
    EnableMission(0x46);
    EnableMission(0x4b);
  }
LAB_100034d2:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033698,&DAT_100334e0);
    iVar3 = GetTotalAmount0(&DAT_100334e0);
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      SelectUnits(&DAT_100334e0,0);
      SelSendTo(5,&DAT_10033760,0x41,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033698,&DAT_100334e0);
    iVar3 = GetTotalAmount0(&DAT_100334e0);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100334e0,0);
      Patrol(5,&DAT_10033758,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334e0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033698,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -10000 + 50000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -10000 + 50000);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100336a0,&DAT_100334d8);
    iVar3 = GetTotalAmount0(&DAT_100334d8);
    if (iVar4 < iVar3) {
      SetTrigg(0x14,1);
      SelectUnits(&DAT_100334d8,0);
      SelSendTo(5,&DAT_10033770,0x1e,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100336a0,&DAT_100334d8);
    iVar3 = GetTotalAmount0(&DAT_100334d8);
    if (iVar4 == iVar3) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_100334d8,0);
      Patrol(5,&DAT_10033768,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334d8);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100336a0,0);
      if (0 < iVar4) {
        SetTrigg(0x15,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -15000 + 70000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -15000 + 70000);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100336b0,&DAT_100334f0);
    iVar3 = GetTotalAmount0(&DAT_100334f0);
    if (iVar4 < iVar3) {
      SetTrigg(4,1);
      SelectUnits(&DAT_100334f0,0);
      SelSendTo(5,&DAT_10033740,0x41,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100336b0,&DAT_100334f0);
    iVar3 = GetTotalAmount0(&DAT_100334f0);
    if (iVar4 == iVar3) {
      SetTrigg(4,0);
      SelectUnits(&DAT_100334f0,0);
      Patrol(5,&DAT_10033738,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334f0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100336b0,0);
      if (0 < iVar4) {
        SetTrigg(5,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 6000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 6000);
        DisableMission(0x4b);
        EnableMission(0x4c);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100336b8,&DAT_100334e8);
    iVar3 = GetTotalAmount0(&DAT_100334e8);
    if (iVar4 < iVar3) {
      SetTrigg(6,1);
      SelectUnits(&DAT_100334e8,0);
      SelSendTo(5,&DAT_10033750,0x1e,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100336b8,&DAT_100334e8);
    iVar3 = GetTotalAmount0(&DAT_100334e8);
    if (iVar4 == iVar3) {
      SetTrigg(6,0);
      SelectUnits(&DAT_100334e8,0);
      Patrol(5,&DAT_10033748,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334e8);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100336b8,0);
      if (0 < iVar4) {
        SetTrigg(7,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 4000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 4000);
        DisableMission(0x46);
        EnableMission(0x47);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0A");
      EnableMission(0x4d);
      EnableMission(0x4e);
      SetLightSpot(&DAT_100335e8,1,2);
      SetLightSpot(&DAT_100335f0,1,3);
      SelectUnits(&DAT_100335e0,0);
      SelectUnits(&DAT_100336f8,1);
      SelChangeNation(1,0);
      SelectUnits(&DAT_100335d8,0);
      SelectUnits(&DAT_10033700,1);
      SelChangeNation(2,0);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033480);
    if (iVar4 == 0) {
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
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(2);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(8,0);
        ShowPage("#PAGE11A");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(1);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(9,0);
        ShowPage("#PAGE11");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xf);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0xc);
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
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount0(&DAT_100336c8,0);
      if (iVar4 == 0) {
        SetTrigg(10,0);
        RunTimer(2,5000);
        local_c = GetDiff(0);
        switch(local_c) {
        case 0:
          CreateObject0(&DAT_10033450,&DAT_100336f0,&DAT_10033648,3,&DAT_100336c8,0x41);
          CreateObject0(&DAT_10033448,&DAT_100336f0,&DAT_10033668,3,&DAT_100336c8,0x41);
          break;
        case 1:
          CreateObject0(&DAT_10033450,&DAT_10033570,&DAT_10033648,3,&DAT_100336c8,0x41);
          CreateObject0(&DAT_10033448,&DAT_10033570,&DAT_10033668,3,&DAT_100336c8,0x41);
          break;
        case 2:
          CreateObject0(&DAT_10033450,&DAT_10033590,&DAT_10033648,3,&DAT_100336c8,0x41);
          CreateObject0(&DAT_10033448,&DAT_10033590,&DAT_10033668,3,&DAT_100336c8,0x41);
          break;
        case 3:
          CreateObject0(&DAT_10033450,&DAT_10033580,&DAT_10033648,3,&DAT_100336c8,0x41);
          CreateObject0(&DAT_10033448,&DAT_10033580,&DAT_10033668,3,&DAT_100336c8,0x41);
        }
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetTotalAmount0(&DAT_10033450);
    if (iVar4 < 1) {
      iVar4 = GetTotalAmount0(&DAT_10033448);
      if (iVar4 < 1) goto LAB_100044bc;
    }
    SelectUnits(&DAT_10033448,0);
    SelectUnits(&DAT_10033450,1);
    SelAttackGroup(3,&DAT_10033508);
    ClearSelection(3);
  }
LAB_100044bc:
  uVar1 = TimerIsEmpty(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033450);
    if (iVar4 == 0) {
      iVar4 = GetTotalAmount0(&DAT_10033448);
      if (iVar4 != 0) goto LAB_1000450f;
    }
    else {
LAB_1000450f:
      uVar1 = TimerDoneFirst(2);
      if ((uVar1 & 0xff) == 0) goto LAB_10004545;
    }
    RunTimer(3,400);
  }
LAB_10004545:
  uVar1 = TimerDone(3);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(3);
    FreeTimer(2);
    SetTrigg(10,1);
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x18);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount0(&DAT_100336d0,0);
        if (iVar4 == 0) {
          SetTrigg(0x18,0);
          RunTimer(4,8000);
          local_10 = GetDiff(0);
          switch(local_10) {
          case 0:
            CreateObject0(&DAT_10033470,&DAT_100336e8,&DAT_10033648,3,&DAT_100336d0,0x82);
            CreateObject0(&DAT_10033460,&DAT_100336e8,&DAT_10033668,3,&DAT_100336d0,0x82);
            break;
          case 1:
            CreateObject0(&DAT_10033470,&DAT_100336f0,&DAT_10033648,3,&DAT_100336d0,0x82);
            CreateObject0(&DAT_10033460,&DAT_100336f0,&DAT_10033668,3,&DAT_100336d0,0x82);
            break;
          case 2:
            CreateObject0(&DAT_10033470,&DAT_10033570,&DAT_10033648,3,&DAT_100336d0,0x82);
            CreateObject0(&DAT_10033460,&DAT_10033570,&DAT_10033668,3,&DAT_100336d0,0x82);
            break;
          case 3:
            CreateObject0(&DAT_10033470,&DAT_10033590,&DAT_10033648,3,&DAT_100336d0,0x82);
            CreateObject0(&DAT_10033460,&DAT_10033590,&DAT_10033668,3,&DAT_100336d0,0x82);
          }
          SelectUnits(&DAT_10033470,0);
          SelectUnits(&DAT_10033460,1);
          SelSendAndKill(3,&DAT_100335e8,0,0);
          ClearSelection(3);
        }
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerIsEmpty(5);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10033470);
      if (iVar4 == 0) {
        iVar4 = GetTotalAmount0(&DAT_10033460);
        if (iVar4 != 0) goto LAB_100048c9;
      }
      else {
LAB_100048c9:
        uVar1 = TimerDoneFirst(4);
        if ((uVar1 & 0xff) == 0) goto LAB_100048ff;
      }
      RunTimer(5,400);
    }
  }
LAB_100048ff:
  uVar1 = TimerDone(5);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(5);
    FreeTimer(4);
    SetTrigg(0x18,1);
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount0(&DAT_100336d8,0);
        if (iVar4 == 0) {
          SetTrigg(0x19,0);
          RunTimer(8,8000);
          local_14 = GetDiff(0);
          switch(local_14) {
          case 0:
            CreateObject0(&DAT_10033418,&DAT_100336e8,&DAT_10033648,3,&DAT_100336d8,0);
            CreateObject0(&DAT_10033410,&DAT_100336e8,&DAT_10033668,3,&DAT_100336d8,0);
            break;
          case 1:
            CreateObject0(&DAT_10033418,&DAT_100336f0,&DAT_10033648,3,&DAT_100336d8,0);
            CreateObject0(&DAT_10033410,&DAT_100336f0,&DAT_10033668,3,&DAT_100336d8,0);
            break;
          case 2:
            CreateObject0(&DAT_10033418,&DAT_10033570,&DAT_10033648,3,&DAT_100336d8,0);
            CreateObject0(&DAT_10033410,&DAT_10033570,&DAT_10033668,3,&DAT_100336d8,0);
            break;
          case 3:
            CreateObject0(&DAT_10033418,&DAT_10033590,&DAT_10033648,3,&DAT_100336d8,0);
            CreateObject0(&DAT_10033410,&DAT_10033590,&DAT_10033668,3,&DAT_100336d8,0);
          }
          SelectUnits(&DAT_10033418,0);
          SelectUnits(&DAT_10033410,1);
          SelSendAndKill(3,&DAT_100335f0,0x82,0);
          ClearSelection(3);
        }
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) goto LAB_10004ca4;
  uVar1 = TimerIsEmpty(9);
  if ((uVar1 & 0xff) == 0) goto LAB_10004ca4;
  iVar4 = GetTotalAmount0(&DAT_10033418);
  if (iVar4 == 0) {
    iVar4 = GetTotalAmount0(&DAT_10033410);
    if (iVar4 != 0) goto LAB_10004c6e;
  }
  else {
LAB_10004c6e:
    uVar1 = TimerDoneFirst(8);
    if ((uVar1 & 0xff) == 0) goto LAB_10004ca4;
  }
  RunTimer(9,400);
LAB_10004ca4:
  uVar1 = TimerDone(9);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(8);
    FreeTimer(9);
    SetTrigg(0x19,1);
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334a8);
    if (iVar4 == 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE7");
      DisableMission(0x44);
      EnableMission(0x45);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetResource(0,0);
      if (2000 < iVar4) {
        SetTrigg(0x10,0);
        ShowPage("#PAGE10");
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x11);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetResource(0,0);
      if (2000 < iVar4) {
        iVar4 = GetUnitsAmount1(&DAT_10033500,&DAT_100334f8);
        if (iVar4 == 2) {
          SetTrigg(0x11,0);
          ShowPage("#PAGE10A");
          AddResource(0,0,0xfffff830);
        }
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount1(&DAT_10033568,0);
    if (iVar4 == 1) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount1(&DAT_10033568,0);
    if (iVar4 == 0) {
      SetTrigg(0x16,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount1(&DAT_100335e8,&DAT_100334f8);
      if (0 < iVar4) {
        SetTrigg(0x13,0);
        uVar1 = Trigg(0x17);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x12,0);
          SetTrigg(0x16,0);
        }
        else {
          SetTrigg(0x12,0);
        }
        ShowPage("#PAGE13");
        SelectTypeOfUnitsInZone(&DAT_100335e8,&DAT_10033568,0,0);
        SelChangeNation(0,1);
        ClearSelection(1);
        SetResource(1,3,10000);
        SetResource(1,0,10000);
        SetResource(1,2,10000);
        SetResource(1,1,10000);
        SetResource(1,5,10000);
        SetResource(1,4,10000);
        uVar2 = GetDiff(0);
        StartAI(1,"AUSTRIA.0",1,1,1,uVar2);
      }
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount1(&DAT_100335f0,&DAT_100334f8);
      if (0 < iVar4) {
        SetTrigg(0x17,0);
        uVar1 = Trigg(0x13);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x12,0);
          SetTrigg(0x16,0);
        }
        else {
          SetTrigg(0x12,0);
        }
        ShowPage("#PAGE13");
        SelectTypeOfUnitsInZone(&DAT_100335f0,&DAT_10033568,0,0);
        SelChangeNation(0,2);
        ClearSelection(2);
        SetResource(2,3,10000);
        SetResource(2,0,10000);
        SetResource(2,2,10000);
        SetResource(2,1,10000);
        SetResource(2,5,10000);
        SetResource(2,4,10000);
        uVar2 = GetDiff(0);
        StartAI(2,"AUSTRIA.0",1,1,1,uVar2);
      }
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x1a);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x1a,0);
        DisableMission(0x4e);
        EnableMission(0x4f);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE8C");
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0xe);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0xf,0);
          ShowPage("#PAGE8");
          DisableMission(0x42);
          EnableMission(0x43);
        }
      }
    }
  }
  SaveSelectedUnits(0,&DAT_100336e0,0);
  ClearSelection(0);
  SelectUnitsType(&DAT_10033458,0,0);
  SelectUnitsType(&DAT_10033468,0,1);
  SelectUnitsType(&DAT_10033440,0,1);
  SelDie(0);
  SelectUnits(&DAT_100336e0,0);
  ClearSelection(3);
  SelectUnitsType(&DAT_10033438,3,0);
  SelDie(3);
  ClearSelection(3);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
