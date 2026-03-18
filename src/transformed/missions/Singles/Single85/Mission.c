#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_100363e0 = 0;
long long DAT_100363e8 = 0;
long long DAT_100363f0 = 0;
long long DAT_100363f8 = 0;
long long DAT_10036400 = 0;
long long DAT_10036408 = 0;
long long DAT_10036410 = 0;
long long DAT_10036418 = 0;
long long DAT_10036420 = 0;
long long DAT_10036428 = 0;
long long DAT_10036430 = 0;
long long DAT_10036438 = 0;
long long DAT_10036440 = 0;
long long DAT_10036448 = 0;
long long DAT_10036450 = 0;
long long DAT_10036458 = 0;
long long DAT_10036460 = 0;
long long DAT_10036468 = 0;
long long DAT_10036470 = 0;
long long DAT_10036478 = 0;
long long DAT_10036480 = 0;
long long DAT_10036488 = 0;
long long DAT_10036490 = 0;
long long DAT_10036498 = 0;
long long DAT_100364a0 = 0;
long long DAT_100364a8 = 0;
long long DAT_100364b0 = 0;
long long DAT_100364b8 = 0;
long long DAT_100364c0 = 0;
long long DAT_100364c8 = 0;
int DAT_100364d0 = 0;
long long DAT_100364d8 = 0;
long long DAT_100364e0 = 0;
long long DAT_100364e8 = 0;
long long DAT_100364f0 = 0;
long long DAT_100364f8 = 0;
long long DAT_10036500 = 0;
long long DAT_10036508 = 0;
long long DAT_10036510 = 0;
long long DAT_10036518 = 0;
long long DAT_10036520 = 0;
long long DAT_10036528 = 0;
long long DAT_10036530 = 0;
long long DAT_10036538 = 0;
long long DAT_10036540 = 0;
long long DAT_10036548 = 0;
long long DAT_10036550 = 0;
long long DAT_10036558 = 0;
long long DAT_10036560 = 0;
long long DAT_10036568 = 0;
long long DAT_10036570 = 0;
long long DAT_10036578 = 0;
long long DAT_10036580 = 0;
long long DAT_10036588 = 0;
long long DAT_10036590 = 0;
long long DAT_10036594 = 0;
long long DAT_10036598 = 0;
long long DAT_100365a0 = 0;
long long DAT_100365a8 = 0;
long long DAT_100365b0 = 0;
long long DAT_100365b8 = 0;
long long DAT_100365c0 = 0;
long long DAT_100365c8 = 0;
long long DAT_100365d0 = 0;
long long DAT_100365d8 = 0;
long long DAT_100365e0 = 0;
long long DAT_100365e8 = 0;
long long DAT_100365f0 = 0;
long long DAT_100365f8 = 0;
long long DAT_10036600 = 0;
long long DAT_10036608 = 0;
long long DAT_10036610 = 0;
long long DAT_10036618 = 0;
long long DAT_10036620 = 0;
long long DAT_10036628 = 0;
long long DAT_10036630 = 0;
long long DAT_10036638 = 0;
long long DAT_10036640 = 0;
long long DAT_10036648 = 0;
long long DAT_10036650 = 0;
long long DAT_10036658 = 0;
long long DAT_10036660 = 0;
long long DAT_10036668 = 0;
long long DAT_10036670 = 0;
long long DAT_10036678 = 0;
long long DAT_10036680 = 0;
long long DAT_10036688 = 0;
long long DAT_10036690 = 0;
long long DAT_10036698 = 0;
long long DAT_100366a0 = 0;
long long DAT_100366a8 = 0;
long long DAT_100366b0 = 0;
long long DAT_100366b8 = 0;
long long DAT_100366c0 = 0;
long long DAT_100366c8 = 0;
long long DAT_100366d0 = 0;
long long DAT_100366d8 = 0;
long long DAT_100366e0 = 0;
long long DAT_100366e8 = 0;
long long DAT_100366f0 = 0;
long long DAT_100366f8 = 0;
long long DAT_10036700 = 0;
long long DAT_10036708 = 0;
long long DAT_10036710 = 0;
long long DAT_10036718 = 0;
long long DAT_10036720 = 0;
long long DAT_10036728 = 0;
long long DAT_10036730 = 0;
long long DAT_10036738 = 0;
long long DAT_10036740 = 0;
long long DAT_10036748 = 0;
long long DAT_10036750 = 0;
long long DAT_10036758 = 0;
long long DAT_10036760 = 0;
long long DAT_10036768 = 0;
long long DAT_10036770 = 0;
long long DAT_10036778 = 0;
long long DAT_10036780 = 0;
long long DAT_10036788 = 0;
long long DAT_10036790 = 0;
long long DAT_10036798 = 0;
long long DAT_100367a0 = 0;
long long DAT_100367a8 = 0;
long long DAT_100367b0 = 0;
long long DAT_100367b8 = 0;
long long DAT_100367c0 = 0;
long long DAT_100367c8 = 0;
long long DAT_100367d0 = 0;
long long DAT_100367d8 = 0;
long long DAT_100367e0 = 0;
int DAT_10036528_ovl = 0;
int DAT_10036590_ovl = 0;
int DAT_100365e0_ovl = 0;
int DAT_10036638_ovl = 0;
int DAT_10036698_ovl = 0;
int DAT_100366d8_ovl = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int uStack_8;
RegisterUnits(&DAT_10036458,"Ghetman");
  RegisterUnits(&DAT_100364c0,"Gband1");
  RegisterUnits(&DAT_100364b8,"Gband2");
  RegisterUnits(&DAT_100364c8,"Gband3");
  RegisterUnits(&DAT_100364f0,"Gholop1");
  RegisterUnits(&DAT_100364e8,"Gholop2");
  RegisterUnits(&DAT_100364e0,"Gholop3");
  RegisterUnits(&DAT_10036648,"Gbos1");
  RegisterUnits(&DAT_10036650,"Gbos2");
  RegisterUnits(&DAT_10036658,"Gbos3");
  RegisterUnits(&DAT_10036668,"Gbos4");
  RegisterUnits(&DAT_10036670,"Gbos5");
  RegisterUnits(&DAT_10036678,"Gbos6");
  RegisterUnits(&DAT_10036680,"Gbos7");
  RegisterUnits(&DAT_10036688,"Gbos8");
  RegisterUnits(&DAT_10036690,"Gbos9");
  RegisterUnits(&DAT_10036610,"Gmush1");
  RegisterUnits(&DAT_10036608,"Gmush2");
  RegisterUnits(&DAT_10036618,"Gmush3");
  RegisterUnits(&DAT_100365c0,"Gpike1");
  RegisterUnits(&DAT_100365b0,"Gpike2");
  RegisterUnits(&DAT_100365c8,"Gpike3");
  RegisterUnits(&DAT_10036558,"Gpush1");
  RegisterUnits(&DAT_10036588,"Gpush2");
  RegisterUnits(&DAT_10036570,"Gpush3");
  RegisterUnits(&DAT_10036778,"Goxrana1");
  RegisterUnits(&DAT_10036788,"Goxrana2");
  RegisterUnits(&DAT_10036780,"Goxrana3");
  RegisterUnits(&DAT_10036468,"Gobj1");
  RegisterUnits(&DAT_10036470,"Gobj2");
  RegisterUnits(&DAT_10036478,"Gobj3");
  RegisterUnits(&DAT_10036480,"Gobj4");
  RegisterUnits(&DAT_10036508,"Gbash1");
  RegisterUnits(&DAT_100366c0,"Gdrag1");
  RegisterUnits(&DAT_100366d0,"Gdrag2");
  RegisterUnits(&DAT_100366c8,"Gdrag3");
  RegisterUnits(&DAT_10036620,"Gcir1");
  RegisterUnits(&DAT_10036628,"Gcir2");
  RegisterUnits(&DAT_10036630,"Gcir3");
  RegisterZone(&DAT_100366b0,"Zband0");
  RegisterZone(&DAT_10036790,"Zband00");
  RegisterZone(&DAT_100367e0,"Zband000");
  RegisterZone(&DAT_100366a0,"Zband1");
  RegisterZone(&DAT_100367b0,"Zband1a");
  RegisterZone(&DAT_100367b8,"Zband1b");
  RegisterZone(&DAT_100366a8,"Zband2");
  RegisterZone(&DAT_100367c0,"Zband2a");
  RegisterZone(&DAT_100367c8,"Zband2b");
  RegisterZone(&DAT_100366b8,"Zband3");
  RegisterZone(&DAT_100367a0,"Zband3a");
  RegisterZone(&DAT_100367a8,"Zband3b");
  RegisterZone(&DAT_10036730,"Zgen1");
  RegisterZone(&DAT_10036738,"Zgen2");
  RegisterZone(&DAT_10036740,"Zgen3");
  RegisterZone(&DAT_100366f8,"Zattack1");
  RegisterZone(&DAT_10036700,"Zattack2");
  RegisterZone(&DAT_100366e8,"Zattack3");
  RegisterZone(&DAT_100366f0,"Zattack4");
  RegisterZone(&DAT_10036718,"Zattack5");
  RegisterZone(&DAT_10036720,"Zattack6");
  RegisterZone(&DAT_10036708,"Zattack7");
  RegisterZone(&DAT_10036710,"Zattack8");
  RegisterZone(&DAT_10036728,"Zattack9");
  RegisterZone(&DAT_100367d8,"Zattack10");
  RegisterZone(&DAT_100367d0,"Zattack11");
  RegisterUnitType(&DAT_100364d8,"Kozak_loshad(UA)");
  RegisterUnitType(&DAT_100366e0,"Kozacki_Strelec(UA)");
  RegisterUnitType(&DAT_10036460,"Pehota_turki(TU)");
  RegisterUnitType(&DAT_100365a0,"Ianithar(TU)");
  RegisterUnitType(&DAT_10036640,"Pik_rus(RU)");
  RegisterUnitType(&DAT_10036660,"Strelec(RU)");
  RegisterUnitType(&DAT_10036418,"Kreposnoi_evro(PL)");
  RegisterUnitType(&DAT_10036440,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10036450,"Kres_ukranian(UA)");
  RegisterUnitType(&DAT_10036428,"Krestian_Turki(TU)");
  RegisterUnitType(&DAT_10036490,"WALL_EV(PL)");
  RegisterUnitType(&DAT_100365e8,"WALL_UKR(PL)");
  RegisterUnitType(&DAT_10036498,"WALL_KR(RU)");
  RegisterUnitType(&DAT_100365f8,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_100364a0,"WALL_EV(PL)");
  RegisterUnitType(&DAT_10036600,"WALL_UKR(UA)");
  RegisterUnitType(&DAT_100364a8,"WALL_TU(TU)");
  RegisterUnitType(&DAT_100365f0,"WALL_UKR(TU)");
  RegisterUnitType(&DAT_100364f8,"Russki_Center(RU)");
  RegisterUnitType(&DAT_10036500,"CenterUR(UA)");
  RegisterUnitType(&DAT_10036510,"Center_Turki(TU)");
  RegisterUnitType(&DAT_10036768,"shahta(PL)");
  RegisterUnitType(&DAT_10036760,"shahta_FE(PL)");
  RegisterUnitType(&DAT_10036770,"shahta_UG(PL)");
  RegisterUpgrade(&DAT_100364b0,"AKA25PL");
  RegisterVar(&DAT_10036430,8);
  RegisterVar(&DAT_10036420,8);
  RegisterVar(&DAT_10036448,8);
  RegisterVar(&DAT_10036438,8);
  RegisterVar(&DAT_100363f8,8);
  RegisterVar(&DAT_100363f0,8);
  RegisterVar(&DAT_10036408,8);
  RegisterVar(&DAT_10036400,8);
  RegisterVar(&DAT_10036410,8);
  RegisterVar(&DAT_10036520,8);
  RegisterVar(&DAT_10036518,8);
  RegisterVar(&DAT_10036560,8);
  RegisterVar(&DAT_10036550,8);
  RegisterVar(&DAT_10036580,8);
  RegisterVar(&DAT_10036568,8);
  RegisterVar(&DAT_10036538,8);
  RegisterVar(&DAT_10036530,8);
  RegisterVar(&DAT_10036548,8);
  RegisterVar(&DAT_10036540,8);
  RegisterVar(&DAT_10036578,8);
  RegisterVar(&DAT_10036528,4);
  RegisterVar(&DAT_10036590,4);
  RegisterVar(&DAT_100365e0,4);
  RegisterVar(&DAT_10036638,4);
  RegisterVar(&DAT_10036698,4);
  RegisterVar(&DAT_100366d8,4);
  RegisterVar(&DAT_10036594,4);
  RegisterVar(&DAT_10036798,4);
  RegisterVar(&DAT_100364d0,4);
  RegisterFormation(&DAT_10036758,"#LINE5");
  RegisterFormation(&DAT_100365a8,"#LINE20PUS");
  RegisterFormation(&DAT_100365d0,"#LINE30PUS");
  RegisterFormation(&DAT_100365d8,"#LINE40PUS");
  RegisterFormation(&DAT_100365b8,"#LINE15PUS");
  RegisterFormation(&DAT_10036598,"#LINE10PUS");
  RegisterFormation(&DAT_10036750,"#LINE3");
  RegisterFormation(&DAT_100363e0,"#SHIPS3");
  RegisterFormation(&DAT_100363e8,"#SHIPS5");
  RegisterFormation(&DAT_10036488,"#ALONE");
  RegisterDynGroup(&DAT_10036430);
  RegisterDynGroup(&DAT_10036420);
  RegisterDynGroup(&DAT_10036448);
  RegisterDynGroup(&DAT_10036438);
  RegisterDynGroup(&DAT_100363f8);
  RegisterDynGroup(&DAT_100363f0);
  RegisterDynGroup(&DAT_10036408);
  RegisterDynGroup(&DAT_10036400);
  RegisterDynGroup(&DAT_10036410);
  RegisterDynGroup(&DAT_10036520);
  RegisterDynGroup(&DAT_10036518);
  RegisterDynGroup(&DAT_10036560);
  RegisterDynGroup(&DAT_10036550);
  RegisterDynGroup(&DAT_10036580);
  RegisterDynGroup(&DAT_10036568);
  RegisterDynGroup(&DAT_10036538);
  RegisterDynGroup(&DAT_10036530);
  RegisterDynGroup(&DAT_10036548);
  RegisterDynGroup(&DAT_10036540);
  RegisterDynGroup(&DAT_10036578);
  RegisterDynGroup(&DAT_10036748);
  SetPlayerName(1,"RUSSIA");
  SetPlayerName(2,"UKRAINE");
  SetPlayerName(3,"TURKEY");
  SetPlayerName(4,"RUSSIA");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(1,0x3e);
  ChangeFriends(2,0x3e);
  ChangeFriends(3,0x3e);
  ChangeFriends(4,0x3e);
  ChangeFriends(5,0x3e);
  EnableUnit(0,&DAT_10036490,0);
  EnableUnit(0,&DAT_100365e8,0);
  EnableUnit(0,&DAT_10036498,0);
  EnableUnit(0,&DAT_100365f8,0);
  EnableUnit(0,&DAT_10036600,0);
  EnableUnit(0,&DAT_100364a8,0);
  EnableUnit(0,&DAT_100365f0,0);
  EnableUnit(0,&DAT_10036440,0);
  EnableUnit(0,&DAT_10036450,0);
  EnableUnit(0,&DAT_10036428,0);
  EnableUnit(0,&DAT_100364f8,0);
  EnableUnit(0,&DAT_10036500,0);
  EnableUnit(0,&DAT_10036510,0);
  DisableUpgrade(0,&DAT_100364b0);
  DVar1 = time(NULL);
  srand(DVar1);
  uStack_8 = 0x10002273;
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
    SelectUnits(&DAT_10036558,0);
    SelectUnits(&DAT_10036588,1);
    SelectUnits(&DAT_10036570,1);
    SelectUnits(&DAT_100365c0,1);
    SelectUnits(&DAT_100365b0,1);
    SelectUnits(&DAT_100365c8,1);
    SelectUnits(&DAT_10036620,1);
    SelectUnits(&DAT_10036628,1);
    SelectUnits(&DAT_10036630,1);
    SelectUnits(&DAT_100366c0,1);
    SelectUnits(&DAT_100366d0,1);
    SelectUnits(&DAT_100366c8,1);
    SelectUnits(&DAT_10036458,1);
    SetStandGround(4,1);
    ClearSelection(4);
    local_8 = GetDiff(0);
    switch(local_8) {
    case 0:
      SetResource(0,3,20000);
      SetResource(0,0,20000);
      SetResource(0,2,20000);
      SetResource(0,1,20000);
      SetResource(0,5,20000);
      SetResource(0,4,20000);
      SelectUnits(&DAT_10036508,0);
      SelectUnits(&DAT_10036648,1);
      SelectUnits(&DAT_10036650,1);
      SelectUnits(&DAT_10036658,1);
      SelectUnits(&DAT_10036668,1);
      SelectUnits(&DAT_10036670,1);
      SelectUnits(&DAT_10036678,1);
      SelectUnits(&DAT_10036680,1);
      SelectUnits(&DAT_10036688,1);
      SelectUnits(&DAT_10036690,1);
      SelErase(5);
      SelectUnits(&DAT_10036558,0);
      SelectUnits(&DAT_10036588,1);
      SelectUnits(&DAT_10036570,1);
      SelectUnits(&DAT_100365c0,1);
      SelectUnits(&DAT_100365b0,1);
      SelectUnits(&DAT_100365c8,1);
      SelectUnits(&DAT_10036610,1);
      SelectUnits(&DAT_10036608,1);
      SelectUnits(&DAT_10036618,1);
      SelectUnits(&DAT_10036620,1);
      SelectUnits(&DAT_10036628,1);
      SelectUnits(&DAT_10036630,1);
      SelectUnits(&DAT_100366c0,1);
      SelectUnits(&DAT_100366d0,1);
      SelectUnits(&DAT_100366c8,1);
      SelErase(4);
      DAT_10036528_ovl = 1;
      DAT_10036590_ovl = 1;
      DAT_100365e0_ovl = 1;
      DAT_10036638_ovl = 1;
      DAT_10036698_ovl = 1;
      DAT_100366d8_ovl = 1;
      break;
    case 1:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10036650,0);
      SelectUnits(&DAT_10036658,1);
      SelectUnits(&DAT_10036670,1);
      SelectUnits(&DAT_10036678,1);
      SelectUnits(&DAT_10036688,1);
      SelectUnits(&DAT_10036690,1);
      SelErase(5);
      SelectUnits(&DAT_10036610,0);
      SelectUnits(&DAT_10036608,1);
      SelectUnits(&DAT_10036618,1);
      SelectUnits(&DAT_10036620,1);
      SelectUnits(&DAT_10036628,1);
      SelectUnits(&DAT_10036630,1);
      SelectUnits(&DAT_100366c0,1);
      SelectUnits(&DAT_100366d0,1);
      SelectUnits(&DAT_100366c8,1);
      SelErase(4);
      DAT_10036528_ovl = 3;
      DAT_10036590_ovl = 3;
      DAT_100365e0_ovl = 1;
      DAT_10036638_ovl = 1;
      DAT_10036698_ovl = 1;
      DAT_100366d8_ovl = 1;
      break;
    case 2:
      SetResource(0,3,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      SetResource(0,1,6000);
      SetResource(0,5,6000);
      SetResource(0,4,6000);
      SelectUnits(&DAT_10036658,0);
      SelectUnits(&DAT_10036678,1);
      SelectUnits(&DAT_10036690,1);
      SelErase(5);
      SelectUnits(&DAT_10036620,0);
      SelectUnits(&DAT_10036628,1);
      SelectUnits(&DAT_10036630,1);
      SelectUnits(&DAT_100366c0,1);
      SelectUnits(&DAT_100366d0,1);
      SelectUnits(&DAT_100366c8,1);
      SelErase(4);
      DAT_10036528_ovl = 5;
      DAT_10036590_ovl = 5;
      DAT_100365e0_ovl = 5;
      DAT_10036638_ovl = 3;
      DAT_10036698_ovl = 2;
      DAT_100366d8_ovl = 1;
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      DAT_10036528_ovl = 8;
      DAT_10036590_ovl = 8;
      DAT_100365e0_ovl = 6;
      DAT_10036638_ovl = 4;
      DAT_10036698_ovl = 2;
      DAT_100366d8_ovl = 2;
    }
    ClearSelection(4);
    ClearSelection(5);
    InitialUpgrade("Ghetman","AKA18RU");
    RunTimer(1,300);
    RunTimer(2,0x1af4);
    RunTimer(3,23000);
    iVar4 = GetDiff(0);
    RunTimer(0x13,(6 - iVar4) * 0x11f8);
    iVar4 = GetDiff(0);
    RunTimer(0x14,(6 - iVar4) * 0x23f0);
    iVar4 = GetDiff(0);
    RunTimer(0x15,(6 - iVar4) * 0x35e8);
    iVar4 = GetDiff(0);
    RunTimer(0x16,(6 - iVar4) * 0x47e0);
    iVar4 = GetDiff(0);
    RunTimer(0x17,(6 - iVar4) * 23000);
    iVar4 = GetDiff(0);
    RunTimer(0x18,(6 - iVar4) * 0x6bd0);
    iVar4 = GetDiff(0);
    RunTimer(0x19,(6 - iVar4) * 0x7dc8);
    iVar4 = GetDiff(0);
    RunTimer(0x1a,(6 - iVar4) * 0x8fc0);
    iVar4 = GetDiff(0);
    RunTimer(0x1b,(6 - iVar4) * 0xa1b8);
    iVar4 = rand();
    DAT_100364d0 = iVar4 % 3 + 1;
    local_c = DAT_100364d0;
    if (DAT_100364d0 == 1) {
      SelectUnits(&DAT_10036588,0);
      SelectUnits(&DAT_10036570,1);
      SelectUnits(&DAT_100365b0,1);
      SelectUnits(&DAT_100365c8,1);
      SelectUnits(&DAT_10036608,1);
      SelectUnits(&DAT_10036618,1);
      SelectUnits(&DAT_10036628,1);
      SelectUnits(&DAT_10036630,1);
      SelectUnits(&DAT_100366d0,1);
      SelectUnits(&DAT_100366c8,1);
      SelectUnits(&DAT_10036470,1);
      SelectUnits(&DAT_10036478,1);
      SelectUnits(&DAT_10036788,1);
      SelectUnits(&DAT_10036780,1);
      SelErase(4);
      ClearSelection(4);
    }
    else if (DAT_100364d0 == 2) {
      SelectUnits(&DAT_10036558,0);
      SelectUnits(&DAT_10036570,1);
      SelectUnits(&DAT_100365c0,1);
      SelectUnits(&DAT_100365c8,1);
      SelectUnits(&DAT_10036610,1);
      SelectUnits(&DAT_10036618,1);
      SelectUnits(&DAT_10036620,1);
      SelectUnits(&DAT_10036630,1);
      SelectUnits(&DAT_100366c0,1);
      SelectUnits(&DAT_100366c8,1);
      SelectUnits(&DAT_10036468,1);
      SelectUnits(&DAT_10036478,1);
      SelectUnits(&DAT_10036778,1);
      SelectUnits(&DAT_10036780,1);
      SelErase(4);
      ClearSelection(4);
    }
    else if (DAT_100364d0 == 3) {
      SelectUnits(&DAT_10036558,0);
      SelectUnits(&DAT_10036588,1);
      SelectUnits(&DAT_100365c0,1);
      SelectUnits(&DAT_100365b0,1);
      SelectUnits(&DAT_10036610,1);
      SelectUnits(&DAT_10036608,1);
      SelectUnits(&DAT_10036620,1);
      SelectUnits(&DAT_10036628,1);
      SelectUnits(&DAT_100366c0,1);
      SelectUnits(&DAT_100366d0,1);
      SelectUnits(&DAT_10036468,1);
      SelectUnits(&DAT_10036470,1);
      SelectUnits(&DAT_10036778,1);
      SelectUnits(&DAT_10036788,1);
      SelErase(4);
      ClearSelection(4);
    }
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
    InitialUpgrade("Gholop3","Melnica_tu(TU)GETRES");
    InitialUpgrade("Gholop3","KUZ01TU");
    InitialUpgrade("Gholop3","AKA01TU");
    InitialUpgrade("Gholop3","AKA02TU");
    InitialUpgrade("Gholop3","AKA03TU");
    InitialUpgrade("Gholop3","AKA04TU");
    InitialUpgrade("Gholop3","AKA10TU");
    SetResource(1,3,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    uVar2 = GetDiff(0);
    StartAI(1,"RUSSIA.0",0,1,2,uVar2);
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    uVar2 = GetDiff(0);
    StartAI(2,"UKRAINE.0",0,1,2,uVar2);
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    uVar2 = GetDiff(0);
    StartAI(3,"TURKISH.0",0,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(0x13);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Ghetman","Pik_rus(RU)ATTACK");
    InitialUpgrade("Ghetman","Pik_rus(RU)SHIELD");
    InitialUpgrade("Ghetman","Ianithar(TU)ATTACK");
    InitialUpgrade("Ghetman","Ianithar(TU)SHIELD");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)ATTACK");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)SHIELD");
    InitialUpgrade("Ghetman","Kirasir(RU)ATTACK");
    InitialUpgrade("Ghetman","Kirasir(RU)SHIELD");
    InitialUpgrade("Ghetman","Dragun_18(RU)ATTACK");
    InitialUpgrade("Ghetman","Dragun_18(RU)SHIELD");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)ATTACK");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)SHIELD");
    InitialUpgrade("Ghetman","AKA16RU");
    InitialUpgrade("Ghetman","KUZ05UA");
    InitialUpgrade("Ghetman","AKA31UA");
    InitialUpgrade("Ghetman","KUZ05RU");
    InitialUpgrade("Ghetman","AKA31RU");
    InitialUpgrade("Ghetman","AKA31TU");
    InitialUpgrade("Gobj4","Pik_rus(RU)ATTACK");
    InitialUpgrade("Gobj4","Pik_rus(RU)SHIELD");
    InitialUpgrade("Gobj4","Pehota_turki(TU)ATTACK");
    InitialUpgrade("Gobj4","Pehota_turki(TU)SHIELD");
    InitialUpgrade("Gobj4","Ianithar(TU)ATTACK");
    InitialUpgrade("Gobj4","Ianithar(TU)SHIELD");
    InitialUpgrade("Gobj4","Strelec(RU)ATTACK");
    InitialUpgrade("Gobj4","Strelec(RU)SHIELD");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)ATTACK");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)SHIELD");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)ATTACK");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)SHIELD");
    InitialUpgrade("Gobj4","KUZ05UA");
    InitialUpgrade("Gobj4","AKA31UA");
    InitialUpgrade("Gobj4","KUZ05RU");
    InitialUpgrade("Gobj4","AKA31RU");
    InitialUpgrade("Gobj4","KUZ05TU");
    InitialUpgrade("Gobj4","AKA31TU");
  }
  uVar1 = TimerDoneFirst(0x14);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Ghetman","Pik_rus(RU)ATTACK3");
    InitialUpgrade("Ghetman","Pik_rus(RU)SHIELD3");
    InitialUpgrade("Ghetman","Ianithar(TU)ATTACK3");
    InitialUpgrade("Ghetman","Ianithar(TU)SHIELD3");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)ATTACK3");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)SHIELD3");
    InitialUpgrade("Ghetman","Kirasir(RU)ATTACK3");
    InitialUpgrade("Ghetman","Kirasir(RU)SHIELD3");
    InitialUpgrade("Ghetman","Dragun_18(RU)ATTACK3");
    InitialUpgrade("Ghetman","Dragun_18(RU)SHIELD3");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)ATTACK3");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)SHIELD3");
    InitialUpgrade("Ghetman","AKA17RU");
    InitialUpgrade("Ghetman","AKA33UA");
    InitialUpgrade("Ghetman","AKA33RU");
    InitialUpgrade("Ghetman","AKA33TU");
    InitialUpgrade("Gobj4","Pik_rus(RU)ATTACK3");
    InitialUpgrade("Gobj4","Pik_rus(RU)SHIELD3");
    InitialUpgrade("Gobj4","Pehota_turki(TU)ATTACK3");
    InitialUpgrade("Gobj4","Pehota_turki(TU)SHIELD3");
    InitialUpgrade("Gobj4","Ianithar(TU)ATTACK3");
    InitialUpgrade("Gobj4","Ianithar(TU)SHIELD3");
    InitialUpgrade("Gobj4","Strelec(RU)ATTACK3");
    InitialUpgrade("Gobj4","Strelec(RU)SHIELD3");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)ATTACK3");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)SHIELD3");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)ATTACK3");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)SHIELD3");
    InitialUpgrade("Gobj4","AKA33UA");
    InitialUpgrade("Gobj4","AKA33RU");
    InitialUpgrade("Gobj4","AKA33TU");
  }
  uVar1 = TimerDoneFirst(0x15);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Ghetman","Pik_rus(RU)ATTACK4");
    InitialUpgrade("Ghetman","Pik_rus(RU)SHIELD4");
    InitialUpgrade("Ghetman","Ianithar(TU)ATTACK4");
    InitialUpgrade("Ghetman","Ianithar(TU)SHIELD4");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)ATTACK4");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)SHIELD4");
    InitialUpgrade("Ghetman","Kirasir(RU)ATTACK4");
    InitialUpgrade("Ghetman","Kirasir(RU)SHIELD4");
    InitialUpgrade("Ghetman","Dragun_18(RU)ATTACK4");
    InitialUpgrade("Ghetman","Dragun_18(RU)SHIELD4");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)ATTACK4");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)SHIELD4");
    InitialUpgrade("Ghetman","AKA20RU");
    InitialUpgrade("Gobj4","Pik_rus(RU)ATTACK4");
    InitialUpgrade("Gobj4","Pik_rus(RU)SHIELD4");
    InitialUpgrade("Gobj4","Pehota_turki(TU)ATTACK4");
    InitialUpgrade("Gobj4","Pehota_turki(TU)SHIELD4");
    InitialUpgrade("Gobj4","Ianithar(TU)ATTACK4");
    InitialUpgrade("Gobj4","Ianithar(TU)SHIELD4");
    InitialUpgrade("Gobj4","Strelec(RU)ATTACK4");
    InitialUpgrade("Gobj4","Strelec(RU)SHIELD4");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)ATTACK4");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)SHIELD4");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)ATTACK4");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)SHIELD4");
  }
  uVar1 = TimerDoneFirst(0x16);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Ghetman","Pik_rus(RU)ATTACK5");
    InitialUpgrade("Ghetman","Pik_rus(RU)SHIELD5");
    InitialUpgrade("Ghetman","Ianithar(TU)SHIELD5");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)ATTACK5");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)SHIELD5");
    InitialUpgrade("Ghetman","Kirasir(RU)ATTACK5");
    InitialUpgrade("Ghetman","Kirasir(RU)SHIELD5");
    InitialUpgrade("Ghetman","Dragun_18(RU)ATTACK5");
    InitialUpgrade("Ghetman","Dragun_18(RU)SHIELD5");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)ATTACK5");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)SHIELD5");
    InitialUpgrade("Ghetman","AKA27RU");
    InitialUpgrade("Gobj4","Pik_rus(RU)ATTACK5");
    InitialUpgrade("Gobj4","Pik_rus(RU)SHIELD5");
    InitialUpgrade("Gobj4","Ianithar(TU)SHIELD5");
    InitialUpgrade("Gobj4","Strelec(RU)SHIELD5");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)ATTACK5");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)SHIELD5");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)ATTACK5");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)SHIELD5");
  }
  uVar1 = TimerDoneFirst(0x17);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Ghetman","Pik_rus(RU)ATTACK6");
    InitialUpgrade("Ghetman","Pik_rus(RU)SHIELD6");
    InitialUpgrade("Ghetman","Ianithar(TU)SHIELD6");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)ATTACK6");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)SHIELD6");
    InitialUpgrade("Ghetman","Kirasir(RU)ATTACK6");
    InitialUpgrade("Ghetman","Kirasir(RU)SHIELD6");
    InitialUpgrade("Ghetman","Dragun_18(RU)ATTACK6");
    InitialUpgrade("Ghetman","Dragun_18(RU)SHIELD6");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)ATTACK6");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)SHIELD6");
    InitialUpgrade("Gobj4","Pik_rus(RU)ATTACK6");
    InitialUpgrade("Gobj4","Pik_rus(RU)SHIELD6");
    InitialUpgrade("Gobj4","Ianithar(TU)SHIELD6");
    InitialUpgrade("Gobj4","Strelec(RU)SHIELD6");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)ATTACK6");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)SHIELD6");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)ATTACK6");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)SHIELD6");
  }
  uVar1 = TimerDoneFirst(0x18);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Ghetman","Ianithar(TU)SHIELD7");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)ATTACK7");
    InitialUpgrade("Ghetman","Kozacki_Strelec(UA)SHIELD7");
    InitialUpgrade("Ghetman","Kirasir(RU)ATTACK7");
    InitialUpgrade("Ghetman","Kirasir(RU)SHIELD7");
    InitialUpgrade("Ghetman","Dragun_18(RU)ATTACK7");
    InitialUpgrade("Ghetman","Dragun_18(RU)SHIELD7");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)ATTACK7");
    InitialUpgrade("Ghetman","Kozak_loshad(UA)SHIELD7");
    InitialUpgrade("Ghetman","AKA12UA");
    InitialUpgrade("Ghetman","AKA12RU");
    InitialUpgrade("Ghetman","AKA12TU");
    InitialUpgrade("Ghetman","KUZ06RU");
    InitialUpgrade("Gobj4","Ianithar(TU)SHIELD7");
    InitialUpgrade("Gobj4","Strelec(RU)SHIELD7");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)ATTACK7");
    InitialUpgrade("Gobj4","Kozacki_Strelec(UA)SHIELD7");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)ATTACK7");
    InitialUpgrade("Gobj4","Kozak_loshad(UA)SHIELD7");
    InitialUpgrade("Gobj4","AKA12UA");
    InitialUpgrade("Gobj4","AKA12RU");
    InitialUpgrade("Gobj4","AKA12TU");
    InitialUpgrade("Gobj4","KUZ06RU");
  }
  uVar1 = TimerDoneFirst(0x19);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Ghetman","AKA13UA");
    InitialUpgrade("Ghetman","AKA13RU");
    InitialUpgrade("Ghetman","AKA13TU");
    InitialUpgrade("Ghetman","AKA34RU");
    InitialUpgrade("Gobj4","AKA13UA");
    InitialUpgrade("Gobj4","AKA13RU");
    InitialUpgrade("Gobj4","AKA13TU");
    InitialUpgrade("Gobj4","AKA34RU");
  }
  uVar1 = TimerDoneFirst(0x1a);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Ghetman","AKA14UA");
    InitialUpgrade("Ghetman","AKA14RU");
    InitialUpgrade("Ghetman","AKA14TU");
    InitialUpgrade("Gobj4","AKA14UA");
    InitialUpgrade("Gobj4","AKA14RU");
    InitialUpgrade("Gobj4","AKA14TU");
  }
  uVar1 = TimerDoneFirst(0x1b);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Ghetman","AKA15UA");
    InitialUpgrade("Ghetman","AKA15RU");
    InitialUpgrade("Ghetman","AKA15TU");
    InitialUpgrade("Gobj4","AKA15UA");
    InitialUpgrade("Gobj4","AKA15RU");
    InitialUpgrade("Gobj4","AKA15TU");
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
    }
  }
  uVar1 = TimerDoneFirst(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0C");
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100366b0,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_10036790,0);
      if (iVar4 < 1) {
        iVar4 = GetUnitsAmount0(&DAT_100367e0,0);
        if (iVar4 < 1) goto LAB_100054df;
      }
    }
    SetTrigg(0x5f,0);
    ShowPage("#PAGE0B");
  }
LAB_100054df:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100366a0,&DAT_100364c0);
    iVar3 = GetTotalAmount0(&DAT_100364c0);
    if (iVar4 < iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100364c0,0);
      SelSendTo(5,&DAT_100367b8,0x82,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100366a0,&DAT_100364c0);
    iVar3 = GetTotalAmount0(&DAT_100364c0);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100364c0,0);
      Patrol(5,&DAT_100367b0,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100364c0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100366a0,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -2000 + 15000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -2000 + 15000);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100366a8,&DAT_100364b8);
    iVar3 = GetTotalAmount0(&DAT_100364b8);
    if (iVar4 < iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_100364b8,0);
      SelSendTo(5,&DAT_100367c8,0x82,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100366a8,&DAT_100364b8);
    iVar3 = GetTotalAmount0(&DAT_100364b8);
    if (iVar4 == iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_100364b8,0);
      Patrol(5,&DAT_100367c0,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100364b8);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100366a8,0);
      if (0 < iVar4) {
        SetTrigg(4,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -0x5dc + 12000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -0x5dc + 12000);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100366b8,&DAT_100364c8);
    iVar3 = GetTotalAmount0(&DAT_100364c8);
    if (iVar4 < iVar3) {
      SetTrigg(5,0);
      SelectUnits(&DAT_100364c8,0);
      SelSendTo(5,&DAT_100367a8,0xc3,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100366b8,&DAT_100364c8);
    iVar3 = GetTotalAmount0(&DAT_100364c8);
    if (iVar4 == iVar3) {
      SetTrigg(5,0);
      SelectUnits(&DAT_100364c8,0);
      Patrol(5,&DAT_100367a0,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100364c8);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100366b8,0);
      if (0 < iVar4) {
        SetTrigg(6,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -2000 + 14000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -2000 + 14000);
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount0(&DAT_100366a0,0);
        if (iVar4 == 0) {
          SetTrigg(10,0);
          RunTimer(4,8000);
          local_10 = GetDiff(0);
          switch(local_10) {
          case 0:
            CreateObject0(&DAT_10036430,&DAT_10036488,&DAT_10036460,5,&DAT_10036730,0x82);
            CreateObject0(&DAT_10036420,&DAT_10036488,&DAT_100365a0,5,&DAT_10036730,0x82);
            break;
          case 1:
            CreateObject0(&DAT_10036430,&DAT_10036488,&DAT_10036460,5,&DAT_10036730,0x82);
            CreateObject0(&DAT_10036420,&DAT_10036750,&DAT_100365a0,5,&DAT_10036730,0x82);
            break;
          case 2:
            CreateObject0(&DAT_10036430,&DAT_10036750,&DAT_10036460,5,&DAT_10036730,0x82);
            CreateObject0(&DAT_10036420,&DAT_10036758,&DAT_100365a0,5,&DAT_10036730,0x82);
            break;
          case 3:
            CreateObject0(&DAT_10036430,&DAT_10036758,&DAT_10036460,5,&DAT_10036730,0x82);
            CreateObject0(&DAT_10036420,&DAT_10036598,&DAT_100365a0,5,&DAT_10036730,0x82);
          }
          SelectUnits(&DAT_10036430,0);
          SelectUnits(&DAT_10036420,1);
          SelSendAndKill(5,&DAT_10036718,0xc3,0);
          SelSendAndKill(5,&DAT_10036720,0xc3,2);
          SelSendAndKill(5,&DAT_10036708,0x1e,2);
          ClearSelection(5);
        }
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerIsEmpty(5);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10036430);
      if (iVar4 == 0) {
        iVar4 = GetTotalAmount0(&DAT_10036420);
        if (iVar4 != 0) goto LAB_10005ee7;
      }
      else {
LAB_10005ee7:
        uVar1 = TimerDoneFirst(4);
        if ((uVar1 & 0xff) == 0) goto LAB_10005f1d;
      }
      RunTimer(5,400);
    }
  }
LAB_10005f1d:
  uVar1 = TimerDone(5);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(4);
    FreeTimer(5);
    SetTrigg(10,0);
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xb);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount0(&DAT_100366a8,0);
        if (iVar4 == 0) {
          SetTrigg(0xb,0);
          RunTimer(6,7000);
          local_14 = GetDiff(0);
          switch(local_14) {
          case 0:
            CreateObject0(&DAT_10036448,&DAT_10036488,&DAT_100366e0,5,&DAT_10036738,0x82);
            break;
          case 1:
            CreateObject0(&DAT_10036448,&DAT_10036750,&DAT_100366e0,5,&DAT_10036738,0x82);
            CreateObject0(&DAT_10036438,&DAT_10036488,&DAT_100364d8,5,&DAT_10036738,0x82);
            break;
          case 2:
            CreateObject0(&DAT_10036448,&DAT_10036758,&DAT_100366e0,5,&DAT_10036738,0x82);
            CreateObject0(&DAT_10036438,&DAT_10036750,&DAT_100364d8,5,&DAT_10036738,0x82);
            break;
          case 3:
            CreateObject0(&DAT_10036448,&DAT_10036598,&DAT_100366e0,5,&DAT_10036738,0x82);
            CreateObject0(&DAT_10036438,&DAT_10036758,&DAT_100364d8,5,&DAT_10036738,0x82);
          }
          SelectUnits(&DAT_10036448,0);
          SelectUnits(&DAT_10036438,1);
          SelSendAndKill(5,&DAT_10036710,0xaa,0);
          SelSendAndKill(5,&DAT_10036728,100,2);
          SelSendAndKill(5,&DAT_100366f0,0x1e,2);
          ClearSelection(5);
        }
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerIsEmpty(7);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10036448);
      if (iVar4 == 0) {
        iVar4 = GetTotalAmount0(&DAT_10036438);
        if (iVar4 != 0) goto LAB_100062b1;
      }
      else {
LAB_100062b1:
        uVar1 = TimerDoneFirst(6);
        if ((uVar1 & 0xff) == 0) goto LAB_100062e7;
      }
      RunTimer(7,400);
    }
  }
LAB_100062e7:
  uVar1 = TimerDone(7);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(6);
    FreeTimer(7);
    SetTrigg(0xb,0);
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount0(&DAT_100366b8,0);
        if (iVar4 == 0) {
          SetTrigg(0xc,0);
          RunTimer(8,8000);
          local_18 = GetDiff(0);
          switch(local_18) {
          case 0:
            CreateObject0(&DAT_100363f8,&DAT_10036488,&DAT_10036640,5,&DAT_10036740,200);
            CreateObject0(&DAT_100363f0,&DAT_10036488,&DAT_10036660,5,&DAT_10036740,200);
            break;
          case 1:
            CreateObject0(&DAT_100363f8,&DAT_10036488,&DAT_10036640,5,&DAT_10036740,200);
            CreateObject0(&DAT_100363f0,&DAT_10036750,&DAT_10036660,5,&DAT_10036740,200);
            break;
          case 2:
            CreateObject0(&DAT_100363f8,&DAT_10036750,&DAT_10036640,5,&DAT_10036740,200);
            CreateObject0(&DAT_100363f0,&DAT_10036758,&DAT_10036660,5,&DAT_10036740,200);
            break;
          case 3:
            CreateObject0(&DAT_100363f8,&DAT_10036758,&DAT_10036640,5,&DAT_10036740,200);
            CreateObject0(&DAT_100363f0,&DAT_10036598,&DAT_10036660,5,&DAT_10036740,200);
          }
          SelectUnits(&DAT_100363f8,0);
          SelectUnits(&DAT_100363f0,1);
          SelSendAndKill(5,&DAT_100367d8,0x82,0);
          SelSendAndKill(5,&DAT_100367d0,0x82,2);
          SelSendAndKill(5,&DAT_10036708,0x1e,2);
          ClearSelection(5);
        }
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) goto LAB_100066e1;
  uVar1 = TimerIsEmpty(9);
  if ((uVar1 & 0xff) == 0) goto LAB_100066e1;
  iVar4 = GetTotalAmount0(&DAT_100363f8);
  if (iVar4 == 0) {
    iVar4 = GetTotalAmount0(&DAT_100363f0);
    if (iVar4 != 0) goto LAB_100066ab;
  }
  else {
LAB_100066ab:
    uVar1 = TimerDoneFirst(8);
    if ((uVar1 & 0xff) == 0) goto LAB_100066e1;
  }
  RunTimer(9,400);
LAB_100066e1:
  uVar1 = TimerDone(9);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(8);
    FreeTimer(9);
    SetTrigg(0xc,0);
  }
  ClearSelection(5);
  SelectUnitsType(&DAT_10036768,5,0);
  SelectUnitsType(&DAT_10036760,5,1);
  SelectUnitsType(&DAT_10036770,5,1);
  SelectUnitsType(&DAT_10036418,5,1);
  SelDie(5);
  ClearSelection(5);
  iVar4 = GetUnitsAmount0(&DAT_100366f8,0);
  if ((0 < iVar4) && (DAT_100364d0 == 1)) {
    iVar4 = GetDiff(0);
    if (0 < iVar4) {
      AttackZoneByArtillery(&DAT_10036558,&DAT_100366f8,0);
    }
  }
  iVar4 = GetUnitsAmount0(&DAT_10036700,0);
  if ((0 < iVar4) && (DAT_100364d0 == 2)) {
    iVar4 = GetDiff(0);
    if (0 < iVar4) {
      AttackZoneByArtillery(&DAT_10036588,&DAT_10036700,0);
    }
  }
  iVar4 = GetUnitsAmount0(&DAT_100366e8,0);
  if ((0 < iVar4) && (DAT_100364d0 == 3)) {
    iVar4 = GetDiff(0);
    if (0 < iVar4) {
      AttackZoneByArtillery(&DAT_10036570,&DAT_100366e8,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100366f8,0);
    if ((0x32 < iVar4) && (DAT_100364d0 == 1)) {
      iVar4 = GetDiff(0);
      if (iVar4 == 3) {
        SetTrigg(7,0);
        SelectUnits(&DAT_10036620,0);
        SelectUnits(&DAT_100366c0,1);
        SelSendAndKill(4,&DAT_10036718,0xc3,0);
        SelSendAndKill(4,&DAT_10036720,0xc3,2);
        SelSendAndKill(4,&DAT_100366f0,0x1e,2);
        ClearSelection(4);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036700,0);
    if ((0x32 < iVar4) && (DAT_100364d0 == 2)) {
      iVar4 = GetDiff(0);
      if (iVar4 == 3) {
        SetTrigg(8,0);
        SelectUnits(&DAT_10036628,0);
        SelectUnits(&DAT_100366d0,1);
        SelSendAndKill(4,&DAT_10036710,0xaa,0);
        SelSendAndKill(4,&DAT_10036728,100,2);
        SelSendAndKill(4,&DAT_100366f0,0x1e,2);
        ClearSelection(4);
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100366e8,0);
    if ((0x32 < iVar4) && (DAT_100364d0 == 3)) {
      iVar4 = GetDiff(0);
      if (iVar4 == 3) {
        SetTrigg(9,0);
        SelectUnits(&DAT_10036630,0);
        SelectUnits(&DAT_100366c8,1);
        SelSendAndKill(4,&DAT_100367d8,0x82,0);
        SelSendAndKill(4,&DAT_100367d0,0x82,2);
        SelSendAndKill(4,&DAT_100366f0,0x1e,2);
        ClearSelection(4);
      }
    }
  }
  ClearSelection(4);
  SelectUnitsType(&DAT_10036768,4,0);
  SelectUnitsType(&DAT_10036760,4,1);
  SelectUnitsType(&DAT_10036770,4,1);
  SelectUnitsType(&DAT_10036418,4,1);
  SelDie(4);
  ClearSelection(4);
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
          ShowVictory();
        }
      }
    }
  }
  uVar1 = Trigg(0xf);
  if (((uVar1 & 0xff) != 0) && (iVar4 = GetTotalAmount0(&DAT_10036458), iVar4 == 0)) {
    SetTrigg(0xf,0);
    ShowPage("#PAGE10");
    DisableMission(0x42);
    EnableMission(0x43);
    ShowVictory();
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
