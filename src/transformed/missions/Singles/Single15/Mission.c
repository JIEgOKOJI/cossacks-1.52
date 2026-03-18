#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002e264[] = "Zat2";
char DAT_1002e26c[] = "Zat1";
char DAT_1002e338[] = "Ggal";
char DAT_1002e420[] = "Gkep";
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
long long DAT_100335c8 = 0;
long long DAT_100335d0 = 0;
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10033468,"Ghetman");
  RegisterUnits(&DAT_100334b8,"Gband1");
  RegisterUnits(&DAT_100334b0,"Gband2");
  RegisterUnits(&DAT_100334c0,"Gband3");
  RegisterUnits(&DAT_100334e0,"Gholop1");
  RegisterUnits(&DAT_100334d8,"Gholop2");
  RegisterUnits(&DAT_100334d0,"Gholop3");
  RegisterUnits(&DAT_100336c0,"Ggates1");
  RegisterUnits(&DAT_10033698,DAT_1002e420);
  RegisterUnits(&DAT_10033668,"Gpresent1");
  RegisterUnits(&DAT_10033660,"Gpresent2");
  RegisterUnits(&DAT_10033678,"Gpresent3");
  RegisterUnits(&DAT_10033670,"Gpresent4");
  RegisterUnits(&DAT_10033718,"Gcuter");
  RegisterUnits(&DAT_10033680,"Gsouz1");
  RegisterUnits(&DAT_10033688,"Gsouz2");
  RegisterUnits(&DAT_10033570,"Gbos1");
  RegisterUnits(&DAT_10033578,"Gbos2");
  RegisterUnits(&DAT_10033580,"Gbos3");
  RegisterUnits(&DAT_10033588,"Gbos4");
  RegisterUnits(&DAT_10033590,"Gbos5");
  RegisterUnits(&DAT_10033598,"Gbos6");
  RegisterUnits(&DAT_100335a0,"Gbos7");
  RegisterUnits(&DAT_100335a8,"Gbos8");
  RegisterUnits(&DAT_10033560,"Gport");
  RegisterUnits(&DAT_10033548,"Gzabor");
  RegisterUnits(&DAT_10033480,"Gobj1");
  RegisterUnits(&DAT_10033488,"Gobj2");
  RegisterUnits(&DAT_10033490,"Gobj3");
  RegisterUnits(&DAT_10033498,"Gobj4");
  RegisterUnits(&DAT_100334a0,"Gobj5");
  RegisterUnits(&DAT_10033500,"Gbash");
  RegisterUnits(&DAT_100334e8,"Gbash2");
  RegisterUnits(&DAT_10033478,"Gline");
  RegisterUnits(&DAT_100336a8,"Gfrig");
  RegisterUnits(&DAT_10033658,DAT_1002e338);
  RegisterUnits(&DAT_100335c0,"Gshahti");
  RegisterUnits(&DAT_100333f8,"Gepodrom1");
  RegisterUnits(&DAT_100333e8,"Gepodrom2");
  RegisterZone(&DAT_100335d0,"Zband1");
  RegisterZone(&DAT_100336e8,"Zband1a");
  RegisterZone(&DAT_100336f0,"Zband1b");
  RegisterZone(&DAT_100335d8,"Zband2");
  RegisterZone(&DAT_100336f8,"Zband2a");
  RegisterZone(&DAT_10033700,"Zband2b");
  RegisterZone(&DAT_100335e0,"Zband3");
  RegisterZone(&DAT_100336d8,"Zband3a");
  RegisterZone(&DAT_100336e0,"Zband3b");
  RegisterZone(&DAT_10033550,"Ztalk1");
  RegisterZone(&DAT_10033458,"Zgates1");
  RegisterZone(&DAT_10033618,"Zgen1");
  RegisterZone(&DAT_10033620,"Zgen2");
  RegisterZone(&DAT_10033628,"Zgen3");
  RegisterZone(&DAT_10033630,"Zgen4");
  RegisterZone(&DAT_10033610,"Zostrov");
  RegisterZone(&DAT_10033708,DAT_1002e26c);
  RegisterZone(&DAT_10033710,DAT_1002e264);
  RegisterZone(&DAT_10033558,"Zsvet1");
  RegisterZone(&DAT_100336a0,"Zepodrom1");
  RegisterZone(&DAT_100336d0,"Zepodrom2");
  RegisterZone(&DAT_100336c8,"Zepodrom3");
  RegisterZone(&DAT_100336b8,"Zepodrom4");
  RegisterUnitType(&DAT_10033608,"Kazarma_1_FR(fr)");
  RegisterUnitType(&DAT_10033720,"Konushnia_FR(fr)");
  RegisterUnitType(&DAT_10033510,"Bashnia(fr)");
  RegisterUnitType(&DAT_100335b0,"WALL_EV(fr)");
  RegisterUnitType(&DAT_100335b8,"WALL_UKR(fr)");
  RegisterUnitType(&DAT_100335f8,"shahta(fr)");
  RegisterUnitType(&DAT_10033600,"shahta_FE(fr)");
  RegisterUnitType(&DAT_100335c8,"shahta_UG(fr)");
  RegisterUnitType(&DAT_10033650,"Rinok(fr)");
  RegisterUnitType(&DAT_100334c8,"Dip_korpus_FR(fr)");
  RegisterUnitType(&DAT_10033450,"shahta(BA)");
  RegisterUnitType(&DAT_10033400,"shahta_FE(BA)");
  RegisterUnitType(&DAT_10033690,"shahta_UG(BA)");
  RegisterUnitType(&DAT_10033460,"Rinok(BA)");
  RegisterUnitType(&DAT_10033568,"WALL_EV(BA)");
  RegisterUnitType(&DAT_100336b0,"WALL_UKR(BA)");
  RegisterUnitType(&DAT_10033508,"Bashnia(BA)");
  RegisterUnitType(&DAT_10033470,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_10033520,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_100333f0,"Yahta(en)");
  RegisterUnitType(&DAT_100335e8,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_100335f0,"SUNDUK1O(UN)");
  RegisterVar(&DAT_10033438,8);
  RegisterVar(&DAT_10033430,8);
  RegisterVar(&DAT_10033448,8);
  RegisterVar(&DAT_10033440,8);
  RegisterVar(&DAT_10033410,8);
  RegisterVar(&DAT_10033408,8);
  RegisterVar(&DAT_10033420,8);
  RegisterVar(&DAT_10033418,8);
  RegisterVar(&DAT_10033428,8);
  RegisterVar(&DAT_100334f0,8);
  RegisterVar(&DAT_100334f8,8);
  RegisterFormation(&DAT_10033648,"#LINE5");
  RegisterFormation(&DAT_10033528,"#LINE20PUS");
  RegisterFormation(&DAT_10033538,"#LINE30PUS");
  RegisterFormation(&DAT_10033540,"#LINE40PUS");
  RegisterFormation(&DAT_10033530,"#LINE15PUS");
  RegisterFormation(&DAT_10033518,"#LINE10PUS");
  RegisterFormation(&DAT_10033640,"#LINE3");
  RegisterFormation(&DAT_100333e0,"#SHIPS3");
  RegisterFormation(&DAT_100334a8,"#ALONE");
  RegisterDynGroup(&DAT_10033438);
  RegisterDynGroup(&DAT_10033430);
  RegisterDynGroup(&DAT_10033448);
  RegisterDynGroup(&DAT_10033440);
  RegisterDynGroup(&DAT_10033410);
  RegisterDynGroup(&DAT_10033408);
  RegisterDynGroup(&DAT_10033420);
  RegisterDynGroup(&DAT_10033418);
  RegisterDynGroup(&DAT_10033428);
  RegisterDynGroup(&DAT_10033638);
  SetPlayerName(1,"ALLIES");
  SetPlayerName(2,"PIEMOUNT");
  SetPlayerName(3,"ENGLAND");
  SetPlayerName(4,"ENGLAND");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(0,3);
  ChangeFriends(1,3);
  ChangeFriends(2,0x3c);
  ChangeFriends(3,0x3c);
  ChangeFriends(4,0x3c);
  ChangeFriends(5,0x3c);
  EnableUnit(0,&DAT_10033720,0);
  EnableUnit(0,&DAT_10033608,0);
  EnableUnit(0,&DAT_100335b8,0);
  EnableUnit(0,&DAT_100335b0,0);
  EnableUnit(0,&DAT_10033510,0);
  EnableUnit(0,&DAT_100335f8,0);
  EnableUnit(0,&DAT_10033600,0);
  EnableUnit(0,&DAT_100335c8,0);
  EnableUnit(0,&DAT_10033650,0);
  EnableUnit(0,&DAT_100334c8,0);
  EnableUnit(0,&DAT_10033450,0);
  EnableUnit(0,&DAT_10033400,0);
  EnableUnit(0,&DAT_10033690,0);
  EnableUnit(0,&DAT_10033460,0);
  EnableUnit(0,&DAT_10033568,0);
  EnableUnit(0,&DAT_100336b0,0);
  EnableUnit(0,&DAT_10033508,0);
  uStack_8 = 0x10001f46;
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
    DisableMission(0x53);
    DisableMission(0x54);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4f);
    DisableMission(0x50);
    DisableMission(0x4d);
    DisableMission(0x4e);
    TakeFood(&DAT_100334e0);
    TakeStone(&DAT_100334d0);
    TakeWood(&DAT_100334d8);
    SelectUnits(&DAT_10033698,0);
    SetStandGround(1,1);
    RunTimer(10,300);
    local_8 = GetDiff(0);
    switch(local_8) {
    case 0:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10033570,0);
      SelectUnits(&DAT_10033578,1);
      SelectUnits(&DAT_10033580,1);
      SelectUnits(&DAT_10033588,1);
      SelectUnits(&DAT_10033590,1);
      SelectUnits(&DAT_10033598,1);
      SelectUnits(&DAT_100335a0,1);
      SelectUnits(&DAT_100335a8,1);
      SelErase(5);
      SelectUnits(&DAT_10033478,0);
      SelectUnits(&DAT_100336a8,1);
      SelectUnits(&DAT_10033658,1);
      SelErase(4);
      break;
    case 1:
      SetResource(0,3,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      SetResource(0,1,7000);
      SetResource(0,5,7000);
      SetResource(0,4,7000);
      SelectUnits(&DAT_10033570,0);
      SelectUnits(&DAT_10033580,1);
      SelectUnits(&DAT_10033590,1);
      SelectUnits(&DAT_10033598,1);
      SelErase(5);
      SelectUnits(&DAT_10033478,0);
      SelectUnits(&DAT_10033658,1);
      SelErase(4);
      break;
    case 2:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      SelectUnits(&DAT_10033578,0);
      SelectUnits(&DAT_10033590,1);
      SelErase(5);
      SelectUnits(&DAT_10033658,0);
      SelErase(4);
      break;
    case 3:
      SetResource(0,3,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      SetResource(0,1,4000);
      SetResource(0,5,4000);
      SetResource(0,4,4000);
    }
    RunTimer(1,5000);
    CreateObject0(&DAT_100334f0,&DAT_100334a8,&DAT_100335e8,5,&DAT_100335e0,0);
    InitialUpgrade("Gpresent1","AKA04FR");
    InitialUpgrade("Gpresent1","KUZ01FR");
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    uVar2 = GetDiff(0);
    StartAI(2,"PIEMONT.0",0,1,2,uVar2);
    uVar2 = GetDiff(0);
    StartAI(3,"ENGLAND.0",2,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x17,0);
      ShowPage("#PAGE0AA");
      EnableMission(0x44);
      EnableMission(0x46);
      SelectUnits(&DAT_10033680,0);
      SelectUnits(&DAT_10033688,1);
      SelChangeNation(1,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100335d0,&DAT_100334b8);
    iVar3 = GetTotalAmount0(&DAT_100334b8);
    if (iVar4 < iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100334b8,0);
      SelSendTo(5,&DAT_100336f0,0x41,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100335d0,&DAT_100334b8);
    iVar3 = GetTotalAmount0(&DAT_100334b8);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100334b8,0);
      Patrol(5,&DAT_100336e8,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334b8);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335d0,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -100 + 2000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -100 + 2000);
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100335d8,&DAT_100334b0);
    iVar3 = GetTotalAmount0(&DAT_100334b0);
    if (iVar4 < iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_100334b0,0);
      SelSendTo(5,&DAT_10033700,0,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100335d8,&DAT_100334b0);
    iVar3 = GetTotalAmount0(&DAT_100334b0);
    if (iVar4 == iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_100334b0,0);
      Patrol(5,&DAT_100336f8,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334b0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335d8,0);
      if (0 < iVar4) {
        SetTrigg(4,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE2",iVar4 * -200 + 3000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -200 + 3000);
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
      RunTimer(2,0xdac);
      local_c = GetDiff(0);
      switch(local_c) {
      case 0:
        CreateObject0(&DAT_10033438,&DAT_10033648,&DAT_10033470,5,&DAT_10033618,0x46);
        CreateObject0(&DAT_10033430,&DAT_100334a8,&DAT_10033520,5,&DAT_10033618,0x46);
        break;
      case 1:
        CreateObject0(&DAT_10033438,&DAT_10033648,&DAT_10033470,5,&DAT_10033618,0x46);
        CreateObject0(&DAT_10033430,&DAT_10033640,&DAT_10033520,5,&DAT_10033618,0x46);
        break;
      case 2:
        CreateObject0(&DAT_10033438,&DAT_10033518,&DAT_10033470,5,&DAT_10033618,0x46);
        CreateObject0(&DAT_10033430,&DAT_10033648,&DAT_10033520,5,&DAT_10033618,0x46);
        break;
      case 3:
        CreateObject0(&DAT_10033438,&DAT_10033530,&DAT_10033470,5,&DAT_10033618,0x46);
        CreateObject0(&DAT_10033430,&DAT_10033648,&DAT_10033520,5,&DAT_10033618,0x46);
      }
    }
  }
  SelectUnits(&DAT_10033438,0);
  SelectUnits(&DAT_10033430,1);
  SelAttackGroup(5,&DAT_10033480);
  ClearSelection(5);
  uVar1 = TimerIsEmpty(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033438);
    if (iVar4 == 0) {
      iVar4 = GetTotalAmount0(&DAT_10033430);
      if (iVar4 != 0) goto LAB_100034f0;
    }
    else {
LAB_100034f0:
      uVar1 = TimerDoneFirst(2);
      if ((uVar1 & 0xff) == 0) goto LAB_10003526;
    }
    RunTimer(3,700);
  }
LAB_10003526:
  uVar1 = TimerDone(3);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(3);
    FreeTimer(2);
    SetTrigg(9,0);
  }
  SaveSelectedUnits(5,&DAT_10033638,0);
  ClearSelection(5);
  SelectUnits1(5,&DAT_10033480,0);
  SelDie(5);
  SelectUnits(&DAT_10033638,0);
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033480);
    if (iVar4 == 0) {
      SetTrigg(10,0);
      ShowPage("#PAGE10");
      LooseGame();
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      RunTimer(4,4000);
      local_10 = GetDiff(0);
      switch(local_10) {
      case 0:
        CreateObject0(&DAT_10033448,&DAT_10033648,&DAT_10033470,5,&DAT_10033620,0x82);
        CreateObject0(&DAT_10033440,&DAT_100334a8,&DAT_10033520,5,&DAT_10033620,0x82);
        break;
      case 1:
        CreateObject0(&DAT_10033448,&DAT_10033648,&DAT_10033470,5,&DAT_10033620,0x82);
        CreateObject0(&DAT_10033440,&DAT_10033640,&DAT_10033520,5,&DAT_10033620,0x82);
        break;
      case 2:
        CreateObject0(&DAT_10033448,&DAT_10033518,&DAT_10033470,5,&DAT_10033620,0x82);
        CreateObject0(&DAT_10033440,&DAT_10033648,&DAT_10033520,5,&DAT_10033620,0x82);
        break;
      case 3:
        CreateObject0(&DAT_10033448,&DAT_10033530,&DAT_10033470,5,&DAT_10033620,0x82);
        CreateObject0(&DAT_10033440,&DAT_10033648,&DAT_10033520,5,&DAT_10033620,0x82);
      }
    }
  }
  SelectUnits(&DAT_10033448,0);
  SelectUnits(&DAT_10033440,1);
  SelAttackGroup(5,&DAT_10033488);
  ClearSelection(5);
  uVar1 = TimerIsEmpty(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033448);
    if (iVar4 == 0) {
      iVar4 = GetTotalAmount0(&DAT_10033440);
      if (iVar4 != 0) goto LAB_1000392e;
    }
    else {
LAB_1000392e:
      uVar1 = TimerDoneFirst(4);
      if ((uVar1 & 0xff) == 0) goto LAB_10003964;
    }
    RunTimer(5,500);
  }
LAB_10003964:
  uVar1 = TimerDone(5);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(4);
    FreeTimer(5);
    SetTrigg(0xb,0);
  }
  SaveSelectedUnits(5,&DAT_10033638,0);
  ClearSelection(5);
  SelectUnits1(5,&DAT_10033488,0);
  SelDie(5);
  SelectUnits(&DAT_10033638,0);
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033488);
    if (iVar4 == 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE11");
      LooseGame();
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0A");
      EnableMission(0x53);
      SetLightSpot(&DAT_10033550,1,1);
      SetLightSpot(&DAT_10033610,3,2);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033468);
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
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x13);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(7);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = Trigg(0xf);
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
  }
  iVar4 = GetUnitsAmount1(&DAT_100336a0,&DAT_100333f8);
  if (0 < iVar4) {
    SelectUnits(&DAT_100333f8,0);
    SelSendTo(1,&DAT_100336d0,0x19,2);
    SelSendTo(1,&DAT_100336c8,0xfa,2);
    SelSendTo(1,&DAT_100336b8,0xaa,2);
    SelSendTo(1,&DAT_100336a0,100,2);
  }
  iVar4 = GetUnitsAmount1(&DAT_100336d0,&DAT_100333e8);
  if (0 < iVar4) {
    SelectUnits(&DAT_100333e8,0);
    SelSendTo(1,&DAT_100336c8,0xfa,2);
    SelSendTo(1,&DAT_100336b8,0xaa,2);
    SelSendTo(1,&DAT_100336a0,100,2);
    SelSendTo(1,&DAT_100336d0,0x19,2);
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10033458,0);
    if (0 < iVar4) {
      SetTrigg(0x60,0);
      SelectUnits(&DAT_100336c0,0);
      SelOpenGates(1);
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount0(&DAT_10033458,0);
    if (iVar4 == 0) {
      SetTrigg(0x60,0);
      SelectUnits(&DAT_100336c0,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount1(&DAT_10033550,&DAT_10033468);
      if (0 < iVar4) {
        SetTrigg(5,0);
        ShowPage("#PAGE3");
        ShowPage("#PAGE4");
        DisableMission(0x53);
        EnableMission(0x54);
        EnableMission(0x4b);
        EnableMission(0x4f);
        SelectUnits(&DAT_10033668,0);
        SelectUnits(&DAT_10033660,1);
        SelectUnits(&DAT_100334d0,1);
        SelectUnits(&DAT_10033718,1);
        SelChangeNation(1,0);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xd,0);
        RunTimer(6,7000);
        local_14 = GetDiff(0);
        switch(local_14) {
        case 0:
          iVar4 = GetTotalAmount0(&DAT_10033548);
          if (iVar4 == 0) {
            CreateObject0(&DAT_10033410,&DAT_10033640,&DAT_10033470,5,&DAT_10033628,0x3c);
            SelectUnits(&DAT_10033410,0);
            SelSendAndKill(5,&DAT_10033710,0x3c,0);
          }
          else {
            CreateObject0(&DAT_10033410,&DAT_100334a8,&DAT_10033470,5,&DAT_10033628,0x3c);
            SelectUnits(&DAT_10033410,0);
            SelSendAndKill(5,&DAT_10033708,0x3c,0);
          }
          CreateObject0(&DAT_10033408,&DAT_10033648,&DAT_10033520,5,&DAT_10033628,0x3c);
          break;
        case 1:
          iVar4 = GetTotalAmount0(&DAT_10033548);
          if (iVar4 == 0) {
            CreateObject0(&DAT_10033410,&DAT_10033648,&DAT_10033470,5,&DAT_10033628,0x3c);
            SelectUnits(&DAT_10033410,0);
            SelSendAndKill(5,&DAT_10033710,0x3c,0);
          }
          else {
            CreateObject0(&DAT_10033410,&DAT_10033640,&DAT_10033470,5,&DAT_10033628,0x3c);
            SelectUnits(&DAT_10033410,0);
            SelSendAndKill(5,&DAT_10033708,0x3c,0);
          }
          CreateObject0(&DAT_10033408,&DAT_10033530,&DAT_10033520,5,&DAT_10033628,0x3c);
          break;
        case 2:
          iVar4 = GetTotalAmount0(&DAT_10033548);
          if (iVar4 == 0) {
            CreateObject0(&DAT_10033410,&DAT_10033518,&DAT_10033470,5,&DAT_10033628,0x3c);
            SelectUnits(&DAT_10033410,0);
            SelSendAndKill(5,&DAT_10033710,0x3c,0);
          }
          else {
            CreateObject0(&DAT_10033410,&DAT_10033648,&DAT_10033470,5,&DAT_10033628,0x3c);
            SelectUnits(&DAT_10033410,0);
            SelSendAndKill(5,&DAT_10033708,0x3c,0);
          }
          CreateObject0(&DAT_10033408,&DAT_10033538,&DAT_10033520,5,&DAT_10033628,0x3c);
          break;
        case 3:
          iVar4 = GetTotalAmount0(&DAT_10033548);
          if (iVar4 == 0) {
            CreateObject0(&DAT_10033410,&DAT_10033530,&DAT_10033470,5,&DAT_10033628,0x3c);
            SelectUnits(&DAT_10033410,0);
            SelSendAndKill(5,&DAT_10033710,0x3c,0);
          }
          else {
            CreateObject0(&DAT_10033410,&DAT_10033648,&DAT_10033470,5,&DAT_10033628,0x3c);
            SelectUnits(&DAT_10033410,0);
            SelSendAndKill(5,&DAT_10033708,0x3c,0);
          }
          CreateObject0(&DAT_10033408,&DAT_10033540,&DAT_10033520,5,&DAT_10033628,0x3c);
        }
        RemoveGroup(&DAT_10033408,&DAT_10033428);
      }
    }
  }
  iVar4 = GetTotalAmount0(&DAT_10033548);
  if (iVar4 < 1) {
    SelectUnits(&DAT_10033428,0);
    SelAttackGroup(5,&DAT_10033490);
  }
  else {
    SelectUnits(&DAT_10033428,0);
    SelAttackGroup(5,&DAT_10033548);
  }
  ClearSelection(5);
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerIsEmpty(7);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10033410);
      if (iVar4 == 0) {
        iVar4 = GetTotalAmount0(&DAT_10033428);
        if (iVar4 != 0) goto LAB_1000470a;
      }
      else {
LAB_1000470a:
        uVar1 = TimerDoneFirst(6);
        if ((uVar1 & 0xff) == 0) goto LAB_10004740;
      }
      RunTimer(7,700);
    }
  }
LAB_10004740:
  uVar1 = TimerDone(7);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(7);
    FreeTimer(6);
    SetTrigg(0xd,0);
  }
  SaveSelectedUnits(5,&DAT_10033638,0);
  ClearSelection(5);
  SelectUnits1(5,&DAT_10033668,0);
  SelDie(5);
  SelectUnits(&DAT_10033638,0);
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033490);
    if (iVar4 == 0) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE10A");
      LooseGame();
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100335e0,&DAT_100334c0);
    iVar3 = GetTotalAmount0(&DAT_100334c0);
    if (iVar4 < iVar3) {
      SetTrigg(6,0);
      SelectUnits(&DAT_100334c0,0);
      SelSendTo(5,&DAT_100336e0,0,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100335e0,&DAT_100334c0);
    iVar3 = GetTotalAmount0(&DAT_100334c0);
    if (iVar4 == iVar3) {
      SetTrigg(6,0);
      SelectUnits(&DAT_100334c0,0);
      Patrol(5,&DAT_100336d8,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334c0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335e0,0);
      if (0 < iVar4) {
        SelectUnits(&DAT_100334f0,0);
        SelErase(5);
        CreateObject0(&DAT_100334f8,&DAT_100334a8,&DAT_100335f0,5,&DAT_100335e0,0);
        SetTrigg(7,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE10B",iVar4 * -500 + 5000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -500 + 5000);
        DisableMission(0x4b);
        EnableMission(0x4c);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) goto LAB_10004c97;
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) goto LAB_10004c97;
  iVar4 = GetUnitsAmount0(&DAT_10033610,0);
  if (iVar4 < 1) goto LAB_10004c97;
  SetTrigg(0xf,0);
  ShowPage("#PAGE6");
  EnableMission(0x4d);
  DisableMission(0x4f);
  EnableMission(0x50);
  iVar4 = GetDiff(0);
  if (iVar4 == 0) {
LAB_10004c34:
    SetLightSpot(&DAT_10033558,1,3);
  }
  else {
    iVar4 = GetDiff(0);
    if (iVar4 == 1) goto LAB_10004c34;
  }
  SelectUnits(&DAT_10033678,0);
  SelectUnits(&DAT_10033670,1);
  SelChangeNation(1,0);
LAB_10004c97:
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x13);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x10,0);
        local_18 = GetDiff(0);
        switch(local_18) {
        case 0:
          CreateObject0(&DAT_10033420,&DAT_100334a8,&DAT_100333f0,4,&DAT_10033630,0x19);
          break;
        case 1:
          CreateObject0(&DAT_10033420,&DAT_100334a8,&DAT_100333f0,4,&DAT_10033630,0x19);
          break;
        case 2:
          CreateObject0(&DAT_10033420,&DAT_100333e0,&DAT_100333f0,4,&DAT_10033630,0x19);
          break;
        case 3:
          CreateObject0(&DAT_10033420,&DAT_100333e0,&DAT_100333f0,4,&DAT_10033630,0x19);
        }
      }
    }
  }
  iVar4 = GetTotalAmount0(&DAT_10033500);
  if (iVar4 == 0) {
    SelectUnits(&DAT_10033420,0);
    SelAttackGroup(4,&DAT_10033498);
  }
  else {
    SelectUnits(&DAT_10033420,0);
    SelAttackGroup(4,&DAT_10033500);
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerIsEmpty(8);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10033420);
      if (iVar4 == 0) {
        RunTimer(8,500);
      }
    }
  }
  uVar1 = TimerDone(8);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(8);
    SetTrigg(0x10,0);
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x13);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x15,0);
        local_1c = GetDiff(0);
        if (local_1c == 1) {
          CreateObject0(&DAT_10033418,&DAT_100334a8,&DAT_100333f0,4,&DAT_10033630,0x19);
        }
        else if (local_1c == 2) {
          CreateObject0(&DAT_10033418,&DAT_100334a8,&DAT_100333f0,4,&DAT_10033630,0x19);
        }
        else if (local_1c == 3) {
          CreateObject0(&DAT_10033418,&DAT_100333e0,&DAT_100333f0,4,&DAT_10033630,0x19);
        }
      }
    }
  }
  iVar4 = GetTotalAmount0(&DAT_100334e8);
  if (iVar4 == 0) {
    SelectUnits(&DAT_10033418,0);
    SelAttackGroup(4,&DAT_100334a0);
  }
  else {
    SelectUnits(&DAT_10033418,0);
    SelAttackGroup(4,&DAT_100334e8);
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerIsEmpty(9);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10033418);
      if (iVar4 == 0) {
        RunTimer(9,500);
      }
    }
  }
  uVar1 = TimerDone(9);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(9);
    SetTrigg(0x15,0);
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100335c0);
    if (iVar4 < 0xc) {
      SetTrigg(0x11,0);
      ShowPage("#PAGE11A");
      LooseGame();
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x12);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetTotalAmount0(&DAT_10033718);
        if (iVar4 == 0) {
          SetTrigg(0x12,0);
          ShowPage("#PAGE11B");
        }
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10033560);
      if (iVar4 == 0) {
        SetTrigg(0x13,0);
        ShowPage("#PAGE7");
        DisableMission(0x4d);
        EnableMission(0x4e);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x14,0);
      ShowPage("#PAGE8");
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(3);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x16,0);
        ShowPage("#PAGE8A");
        DisableMission(0x42);
        EnableMission(0x43);
      }
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
