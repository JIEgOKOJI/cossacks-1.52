#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_100343e0 = 0;
long long DAT_100343e8 = 0;
long long DAT_100343f0 = 0;
long long DAT_100343f8 = 0;
long long DAT_10034400 = 0;
long long DAT_10034408 = 0;
long long DAT_10034410 = 0;
long long DAT_10034418 = 0;
long long DAT_10034420 = 0;
long long DAT_10034428 = 0;
long long DAT_10034430 = 0;
long long DAT_10034438 = 0;
long long DAT_10034440 = 0;
long long DAT_10034448 = 0;
long long DAT_10034450 = 0;
long long DAT_10034458 = 0;
long long DAT_10034460 = 0;
long long DAT_10034468 = 0;
long long DAT_10034470 = 0;
long long DAT_10034478 = 0;
long long DAT_10034480 = 0;
long long DAT_10034488 = 0;
long long DAT_10034490 = 0;
long long DAT_10034498 = 0;
long long DAT_100344a0 = 0;
long long DAT_100344a8 = 0;
long long DAT_100344b0 = 0;
long long DAT_100344b8 = 0;
long long DAT_100344c0 = 0;
long long DAT_100344c8 = 0;
long long DAT_100344d0 = 0;
long long DAT_100344d8 = 0;
long long DAT_100344e0 = 0;
long long DAT_100344e8 = 0;
long long DAT_100344f0 = 0;
long long DAT_100344f8 = 0;
long long DAT_10034500 = 0;
long long DAT_10034508 = 0;
long long DAT_10034510 = 0;
long long DAT_10034518 = 0;
long long DAT_10034520 = 0;
long long DAT_10034528 = 0;
long long DAT_10034530 = 0;
long long DAT_10034538 = 0;
long long DAT_10034540 = 0;
long long DAT_10034548 = 0;
int DAT_10034550 = 0;
long long DAT_10034558 = 0;
long long DAT_10034560 = 0;
long long DAT_10034568 = 0;
long long DAT_10034570 = 0;
long long DAT_10034578 = 0;
long long DAT_10034580 = 0;
long long DAT_10034588 = 0;
long long DAT_10034590 = 0;
long long DAT_10034598 = 0;
long long DAT_100345a0 = 0;
long long DAT_100345a8 = 0;
long long DAT_100345b0 = 0;
int DAT_100345b8 = 0;
long long DAT_100345c0 = 0;
long long DAT_100345c8 = 0;
long long DAT_100345d0 = 0;
long long DAT_100345d8 = 0;
long long DAT_100345e0 = 0;
long long DAT_100345e8 = 0;
long long DAT_100345f0 = 0;
long long DAT_100345f8 = 0;
int DAT_10034600 = 0;
long long DAT_10034608 = 0;
long long DAT_10034610 = 0;
long long DAT_10034618 = 0;
long long DAT_10034620 = 0;
int DAT_10034628 = 0;
long long DAT_10034630 = 0;
long long DAT_10034638 = 0;
long long DAT_10034640 = 0;
long long DAT_10034648 = 0;
long long DAT_10034650 = 0;
long long DAT_10034658 = 0;
long long DAT_10034660 = 0;
long long DAT_10034668 = 0;
long long DAT_10034670 = 0;
int DAT_10034678 = 0;
long long DAT_10034680 = 0;
long long DAT_10034688 = 0;
int DAT_10034690 = 0;
long long DAT_10034698 = 0;
long long DAT_100346a0 = 0;
long long DAT_100346a8 = 0;
long long DAT_100346b0 = 0;
long long DAT_100346b8 = 0;
long long DAT_100346c0 = 0;
long long DAT_100346c8 = 0;
long long DAT_100346d0 = 0;
long long DAT_100346d8 = 0;
long long DAT_100346e0 = 0;
long long DAT_100346e8 = 0;
long long DAT_100346f0 = 0;
long long DAT_100346f8 = 0;
long long DAT_10034700 = 0;
long long DAT_10034708 = 0;
long long DAT_10034710 = 0;
long long DAT_10034718 = 0;
long long DAT_10034720 = 0;
long long DAT_10034728 = 0;
long long DAT_10034730 = 0;
long long DAT_10034738 = 0;
long long DAT_10034740 = 0;
long long DAT_10034748 = 0;
long long DAT_10034750 = 0;
long long DAT_10034758 = 0;
long long DAT_10034760 = 0;
long long DAT_10034768 = 0;
long long DAT_10034770 = 0;
long long DAT_10034778 = 0;
long long DAT_10034780 = 0;
long long DAT_10034788 = 0;
long long DAT_10034790 = 0;
long long DAT_10034798 = 0;
long long DAT_100347a0 = 0;

/* Stubs for missing internal functions */
int FUN_10007060() { return 0; }
int FUN_10007590() { return 0; }


/* Forward declarations */
void FUN_10007010(DWORD param_1);

void OnInit();
void ProcessScenary();


void __cdecl FUN_10007010(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10007590();
  pDVar1[5] = param_1;
  return;
}





void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int uStack_8;
RegisterUnits(&DAT_100344a0,"Ghetman");
  RegisterUnits(&DAT_100344e0,"Gband1");
  RegisterUnits(&DAT_10034510,"Gholop1");
  RegisterUnits(&DAT_10034508,"Gholop2");
  RegisterUnits(&DAT_10034500,"Gholop3");
  RegisterUnits(&DAT_100344f8,"Gholop4");
  RegisterUnits(&DAT_100344f0,"Gholop5");
  RegisterUnits(&DAT_10034518,"Gholop6");
  RegisterUnits(&DAT_10034630,"Gbos1");
  RegisterUnits(&DAT_10034638,"Gbos2");
  RegisterUnits(&DAT_10034640,"Gbos3");
  RegisterUnits(&DAT_10034648,"Gbos4");
  RegisterUnits(&DAT_10034650,"Gbos5");
  RegisterUnits(&DAT_10034658,"Gbos6");
  RegisterUnits(&DAT_10034660,"Gbos7");
  RegisterUnits(&DAT_10034668,"Gbos8");
  RegisterUnits(&DAT_10034670,"Gbos9");
  RegisterUnits(&DAT_10034798,"Gport1");
  RegisterUnits(&DAT_100343e8,"Gport2");
  RegisterUnits(&DAT_100343e0,"Gport3");
  RegisterUnits(&DAT_100343f0,"Gport4");
  RegisterUnits(&DAT_100344b8,"Gobj1");
  RegisterUnits(&DAT_10034748,"Ggates1");
  RegisterUnits(&DAT_10034740,"Ggates2");
  RegisterUnits(&DAT_10034538,"Gbash1");
  RegisterUnits(&DAT_10034530,"Gbash2");
  RegisterUnits(&DAT_10034498,"Gkon1");
  RegisterUnits(&DAT_10034768,"Gkaz1");
  RegisterUnits(&DAT_10034770,"Gkaz2");
  RegisterZone(&DAT_10034688,"Zband0");
  RegisterZone(&DAT_10034738,"Zband00");
  RegisterZone(&DAT_10034680,"Zband1");
  RegisterZone(&DAT_10034758,"Zband1a");
  RegisterZone(&DAT_10034760,"Zband1b");
  RegisterZone(&DAT_10034608,"Ztalk1");
  RegisterZone(&DAT_100346e0,"Zgen1");
  RegisterZone(&DAT_100346e8,"Zgen2");
  RegisterZone(&DAT_100346f8,"Zgen3");
  RegisterZone(&DAT_100346a8,"Zattack1");
  RegisterZone(&DAT_100346b0,"Zattack2");
  RegisterZone(&DAT_10034698,"Zattack3");
  RegisterZone(&DAT_100346a0,"Zattack4");
  RegisterZone(&DAT_100346c8,"Zattack5");
  RegisterZone(&DAT_100346d0,"Zattack6");
  RegisterZone(&DAT_100346b8,"Zattack7");
  RegisterZone(&DAT_100346c0,"Zattack8");
  RegisterZone(&DAT_100346d8,"Zattack9");
  RegisterZone(&DAT_10034788,"Zattack10");
  RegisterZone(&DAT_10034780,"Zattack11");
  RegisterZone(&DAT_10034778,"Zattack12");
  RegisterZone(&DAT_10034790,"Zattack13");
  RegisterZone(&DAT_10034440,"Zotxod1");
  RegisterZone(&DAT_10034448,"Zotxod2");
  RegisterZone(&DAT_10034450,"Zotxod3");
  RegisterZone(&DAT_10034460,"Zotxod4");
  RegisterZone(&DAT_10034470,"Zotxod5");
  RegisterUnitType(&DAT_100344a8,"Pikiner_turki(TU)");
  RegisterUnitType(&DAT_100345d8,"Ianithar(TU)");
  RegisterUnitType(&DAT_100347a0,"YahtaTU(TU)");
  RegisterUnitType(&DAT_100344b0,"GALERA(TU)");
  RegisterUnitType(&DAT_10034408,"Shebeka(TU)");
  RegisterUnitType(&DAT_100345c0,"Linkor(TU)");
  RegisterUnitType(&DAT_100346f0,"Mortira(TU)");
  RegisterUnitType(&DAT_10034700,"Pushka(TU)");
  RegisterUnitType(&DAT_10034438,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10034480,"Krestian_Turki(TU)");
  RegisterUnitType(&DAT_10034490,"Krestian_Turki(AL)");
  RegisterUnitType(&DAT_100344c8,"WALL_KR(RU)");
  RegisterUnitType(&DAT_10034610,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_100344d0,"WALL_TU(TU)");
  RegisterUnitType(&DAT_10034618,"WALL_UKR(TU)");
  RegisterUnitType(&DAT_100344d8,"WALL_TU(AL)");
  RegisterUnitType(&DAT_10034620,"WALL_UKR(AL)");
  RegisterUnitType(&DAT_10034520,"Center_Turki(TU)");
  RegisterUnitType(&DAT_10034528,"Center_Algir(AL)");
  RegisterUnitType(&DAT_100345a0,"PorR(RU)");
  RegisterUnitType(&DAT_100345a8,"Port(TU)");
  RegisterUnitType(&DAT_100345b0,"Port(AL)");
  RegisterUnitType(&DAT_10034728,"shahta(RU)");
  RegisterUnitType(&DAT_10034720,"shahta_FE(RU)");
  RegisterUnitType(&DAT_10034730,"shahta_UG(RU)");
  RegisterVar(&DAT_10034468,8);
  RegisterVar(&DAT_10034458,8);
  RegisterVar(&DAT_10034488,8);
  RegisterVar(&DAT_10034478,8);
  RegisterVar(&DAT_10034418,8);
  RegisterVar(&DAT_10034410,8);
  RegisterVar(&DAT_10034428,8);
  RegisterVar(&DAT_10034420,8);
  RegisterVar(&DAT_10034430,8);
  RegisterVar(&DAT_10034548,8);
  RegisterVar(&DAT_10034540,8);
  RegisterVar(&DAT_10034580,8);
  RegisterVar(&DAT_10034578,8);
  RegisterVar(&DAT_10034598,8);
  RegisterVar(&DAT_10034588,8);
  RegisterVar(&DAT_10034560,8);
  RegisterVar(&DAT_10034558,8);
  RegisterVar(&DAT_10034570,8);
  RegisterVar(&DAT_10034568,8);
  RegisterVar(&DAT_10034590,8);
  RegisterVar(&DAT_10034550,4);
  RegisterVar(&DAT_100345b8,4);
  RegisterVar(&DAT_10034600,4);
  RegisterVar(&DAT_10034628,4);
  RegisterVar(&DAT_10034678,4);
  RegisterVar(&DAT_10034690,4);
  RegisterVar(&DAT_100345c8,4);
  RegisterVar(&DAT_10034750,4);
  RegisterVar(&DAT_100344e8,4);
  RegisterFormation(&DAT_10034718,"#LINE5");
  RegisterFormation(&DAT_100345e0,"#LINE20PUS");
  RegisterFormation(&DAT_100345f0,"#LINE30PUS");
  RegisterFormation(&DAT_100345f8,"#LINE40PUS");
  RegisterFormation(&DAT_100345e8,"#LINE15PUS");
  RegisterFormation(&DAT_100345d0,"#LINE10PUS");
  RegisterFormation(&DAT_10034710,"#LINE3");
  RegisterFormation(&DAT_100343f8,"#SHIPS3");
  RegisterFormation(&DAT_10034400,"#SHIPS5");
  RegisterFormation(&DAT_100344c0,"#ALONE");
  RegisterDynGroup(&DAT_10034468);
  RegisterDynGroup(&DAT_10034458);
  RegisterDynGroup(&DAT_10034488);
  RegisterDynGroup(&DAT_10034478);
  RegisterDynGroup(&DAT_10034418);
  RegisterDynGroup(&DAT_10034410);
  RegisterDynGroup(&DAT_10034428);
  RegisterDynGroup(&DAT_10034420);
  RegisterDynGroup(&DAT_10034430);
  RegisterDynGroup(&DAT_10034548);
  RegisterDynGroup(&DAT_10034540);
  RegisterDynGroup(&DAT_10034580);
  RegisterDynGroup(&DAT_10034578);
  RegisterDynGroup(&DAT_10034598);
  RegisterDynGroup(&DAT_10034588);
  RegisterDynGroup(&DAT_10034560);
  RegisterDynGroup(&DAT_10034558);
  RegisterDynGroup(&DAT_10034570);
  RegisterDynGroup(&DAT_10034568);
  RegisterDynGroup(&DAT_10034590);
  RegisterDynGroup(&DAT_10034708);
  SetPlayerName(1,"TURKEY");
  SetPlayerName(2,"ALJERIANS");
  SetPlayerName(4,"TURKEY");
  ChangeFriends(1,0x16);
  ChangeFriends(2,0x16);
  ChangeFriends(4,0x16);
  EnableUnit(0,&DAT_100344c8,0);
  EnableUnit(0,&DAT_10034610,0);
  EnableUnit(0,&DAT_100344d0,0);
  EnableUnit(0,&DAT_10034618,0);
  EnableUnit(0,&DAT_100344d8,0);
  EnableUnit(0,&DAT_10034620,0);
  EnableUnit(0,&DAT_10034480,0);
  EnableUnit(0,&DAT_10034490,0);
  EnableUnit(0,&DAT_10034520,0);
  EnableUnit(0,&DAT_10034528,0);
  EnableUnit(0,&DAT_100345a8,0);
  EnableUnit(0,&DAT_100345b0,0);
  DVar1 = FUN_10007060((int *)0x0);
  FUN_10007010(DVar1);
  uStack_8 = 0x100020e5;
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
    EnableUnit(0,&DAT_100345a0,0);
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    TakeWood(&DAT_10034500);
    TakeWood(&DAT_100344f8);
    TakeWood(&DAT_100344f0);
    SelectUnits(&DAT_100344a0,0);
    SetStandGround(4,1);
    SetDestPoint(&DAT_10034498,&DAT_10034440);
    SetDestPoint(&DAT_10034768,&DAT_10034448);
    SetDestPoint(&DAT_10034770,&DAT_10034448);
    SetDestPoint(&DAT_10034798,&DAT_10034450);
    SetDestPoint(&DAT_100343e8,&DAT_10034460);
    SetDestPoint(&DAT_100343e0,&DAT_10034470);
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      SelectUnits(&DAT_10034668,0);
      SelectUnits(&DAT_100344f0,1);
      SelErase(4);
    }
    else {
      SelectUnits(&DAT_10034660,0);
      SelectUnits(&DAT_100344f8,1);
      SelErase(4);
    }
    ClearSelection(4);
    local_10 = GetDiff(0);
    switch(local_10) {
    case 0:
      SetResource(0,3,20000);
      SetResource(0,0,20000);
      SetResource(0,2,20000);
      SetResource(0,1,20000);
      SetResource(0,5,20000);
      SetResource(0,4,20000);
      SelectUnits(&DAT_10034538,0);
      SelectUnits(&DAT_10034530,1);
      SelectUnits(&DAT_10034630,1);
      SelectUnits(&DAT_10034638,1);
      SelectUnits(&DAT_10034640,1);
      SelectUnits(&DAT_10034648,1);
      SelectUnits(&DAT_10034650,1);
      SelectUnits(&DAT_10034658,1);
      SelErase(4);
      DAT_10034550 = 1;
      DAT_100345b8 = 1;
      DAT_10034600 = 1;
      DAT_10034628 = 1;
      DAT_10034678 = 1;
      DAT_10034690 = 1;
      break;
    case 1:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10034630,0);
      SelectUnits(&DAT_10034638,1);
      SelectUnits(&DAT_10034650,1);
      SelectUnits(&DAT_10034658,1);
      SelErase(4);
      DAT_10034550 = 1;
      DAT_100345b8 = 1;
      DAT_10034600 = 4;
      DAT_10034628 = 6;
      DAT_10034678 = 1;
      DAT_10034690 = 1;
      break;
    case 2:
      SetResource(0,3,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      SetResource(0,1,7000);
      SetResource(0,5,7000);
      SetResource(0,4,7000);
      SelectUnits(&DAT_10034638,0);
      SelectUnits(&DAT_10034658,1);
      SelErase(4);
      DAT_10034550 = 2;
      DAT_100345b8 = 2;
      DAT_10034600 = 8;
      DAT_10034628 = 0xc;
      DAT_10034678 = 2;
      DAT_10034690 = 1;
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      DAT_10034550 = 3;
      DAT_100345b8 = 3;
      DAT_10034600 = 10;
      DAT_10034628 = 0xf;
      DAT_10034678 = 2;
      DAT_10034690 = 2;
    }
    ClearSelection(4);
    RunTimer(1,300);
    RunTimer(2,0x11f8);
    RunTimer(3,0x1af4);
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 0x23f0);
    InitialUpgrade("Gobj1","AKA06TU");
    InitialUpgrade("Gobj1","AKA28TU");
    InitialUpgrade("Gobj1","AKA29TU");
    InitialUpgrade("Gobj1","AKA30TU");
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
    InitialUpgrade("Gholop1","Melnica_tu(TU)GETRES");
    InitialUpgrade("Gholop1","KUZ01TU");
    InitialUpgrade("Gholop1","AKA01TU");
    InitialUpgrade("Gholop1","AKA02TU");
    InitialUpgrade("Gholop1","AKA03TU");
    InitialUpgrade("Gholop1","AKA04TU");
    InitialUpgrade("Gholop1","AKA10TU");
    InitialUpgrade("Gholop2","Melnica_tu(AL)GETRES");
    InitialUpgrade("Gholop2","KUZ01AL");
    InitialUpgrade("Gholop2","AKA01AL");
    InitialUpgrade("Gholop2","AKA02AL");
    InitialUpgrade("Gholop2","AKA03AL");
    InitialUpgrade("Gholop2","AKA04AL");
    InitialUpgrade("Gholop2","AKA10AL");
    SetResource(1,3,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    uVar2 = GetDiff(0);
    StartAI(1,"TURKISH.0",1,1,2,uVar2);
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    uVar2 = GetDiff(0);
    StartAI(2,"ALGIR.0",0,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(0x13);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA16TU");
    InitialUpgrade("Gobj1","Pikiner_turki(TU)ATTACK");
    InitialUpgrade("Gobj1","Pikiner_turki(TU)SHIELD");
    InitialUpgrade("Gobj1","Ianithar(TU)ATTACK");
    InitialUpgrade("Gobj1","Ianithar(TU)SHIELD");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)ATTACK");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)SHIELD");
    InitialUpgrade("Gobj1","AKA31TU");
  }
  uVar1 = TimerDoneFirst(0x14);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA17TU");
    InitialUpgrade("Gobj1","Pikiner_turki(TU)ATTACK3");
    InitialUpgrade("Gobj1","Pikiner_turki(TU)SHIELD3");
    InitialUpgrade("Gobj1","Ianithar(TU)ATTACK3");
    InitialUpgrade("Gobj1","Ianithar(TU)SHIELD3");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)ATTACK3");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)SHIELD3");
    InitialUpgrade("Gobj1","AKA33TU");
  }
  uVar1 = TimerDoneFirst(0x15);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA20TU");
    InitialUpgrade("Gobj1","Pikiner_turki(TU)ATTACK4");
    InitialUpgrade("Gobj1","Pikiner_turki(TU)SHIELD4");
    InitialUpgrade("Gobj1","Ianithar(TU)ATTACK4");
    InitialUpgrade("Gobj1","Ianithar(TU)SHIELD4");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)ATTACK4");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)SHIELD4");
  }
  uVar1 = TimerDoneFirst(0x16);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA27TU");
    InitialUpgrade("Gobj1","Pikiner_turki(TU)ATTACK5");
    InitialUpgrade("Gobj1","Pikiner_turki(TU)SHIELD5");
    InitialUpgrade("Gobj1","Ianithar(TU)SHIELD5");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)ATTACK5");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)SHIELD5");
  }
  uVar1 = TimerDoneFirst(0x17);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Pikiner_turki(TU)ATTACK6");
    InitialUpgrade("Gobj1","Pikiner_turki(TU)SHIELD6");
    InitialUpgrade("Gobj1","Ianithar(TU)SHIELD6");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)ATTACK6");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)SHIELD6");
  }
  uVar1 = TimerDoneFirst(0x18);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Ianithar(TU)SHIELD7");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)ATTACK7");
    InitialUpgrade("Gobj1","TUrkey_pikiner(TU)SHIELD7");
    InitialUpgrade("Gobj1","AKA12TU");
  }
  uVar1 = TimerDoneFirst(0x19);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA13TU");
  }
  uVar1 = TimerDoneFirst(0x1a);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA14TU");
  }
  uVar1 = TimerDoneFirst(0x1b);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA15TU");
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
    }
  }
  uVar1 = TimerDoneFirst(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0C");
      EnableMission(0x46);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10034688,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_10034738,0);
      if (iVar4 < 1) goto LAB_10003b3e;
    }
    SetTrigg(0x5e,0);
    ShowPage("#PAGE0C");
    EnableMission(0x46);
  }
LAB_10003b3e:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10034680,&DAT_100344e0);
    iVar3 = GetTotalAmount0(&DAT_100344e0);
    if (iVar4 < iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100344e0,0);
      SelSendTo(4,&DAT_10034760,0,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10034680,&DAT_100344e0);
    iVar3 = GetTotalAmount0(&DAT_100344e0);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100344e0,0);
      Patrol(4,&DAT_10034758,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100344e0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10034680,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
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
      for (local_8 = 0; local_8 < DAT_10034550; local_8 = local_8 + 1) {
        ProduceUnitFast(&DAT_10034498,&DAT_100346f0,&DAT_10034468,1);
      }
    }
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10034498);
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
        RemoveGroup(&DAT_10034468,&DAT_10034488);
        SelectUnits(&DAT_10034488,0);
        SetStandGround(5,1);
        ClearSelection(5);
      }
    }
    AttackBuildingsInZone(&DAT_10034488,&DAT_100346a8,0);
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount0(&DAT_10034488);
      if (iVar4 != 0) {
        uVar1 = TimerDoneFirst(8);
        if ((uVar1 & 0xff) == 0) goto LAB_10004047;
      }
      FreeTimer(8);
      SetTrigg(0xb,0);
    }
  }
LAB_10004047:
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x14,0);
      for (local_c = 0; local_c < DAT_10034600; local_c = local_c + 1) {
        ProduceUnitFast(&DAT_10034768,&DAT_100344a8,&DAT_10034458,0);
      }
      for (local_c = 0; local_c < DAT_10034628; local_c = local_c + 1) {
        ProduceUnitFast(&DAT_10034770,&DAT_100345d8,&DAT_10034478,0);
      }
    }
    iVar4 = GetTotalAmount0(&DAT_10034768);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10034770);
      if (0 < iVar4) {
        uVar1 = Trigg(0x15);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = CheckProduction(&DAT_10034768);
          if ((uVar1 & 0xff) != 0) {
            uVar1 = CheckProduction(&DAT_10034770);
            if ((uVar1 & 0xff) != 0) {
              RunTimer(9,100);
              SetTrigg(0x15,0);
            }
          }
        }
      }
    }
    iVar4 = GetTotalAmount0(&DAT_10034768);
    if (iVar4 == 0) {
      uVar1 = Trigg(0x15);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10034770);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(9,100);
          SetTrigg(0x15,0);
        }
      }
    }
    iVar4 = GetTotalAmount0(&DAT_10034770);
    if (iVar4 == 0) {
      uVar1 = Trigg(0x15);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10034768);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(9,100);
          SetTrigg(0x15,0);
        }
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
          RunTimer(10,0x35e8);
          SetTrigg(0x14,0);
          SetTrigg(0x15,0);
          RemoveGroup(&DAT_10034458,&DAT_10034418);
          RemoveGroup(&DAT_10034478,&DAT_10034418);
          uVar1 = rand();
          if ((uVar1 & 1) == 0) {
            SelectUnits(&DAT_10034418,0);
            SelSendAndKill(4,&DAT_100346b8,0xdc,0);
            SelSendAndKill(4,&DAT_100346c0,0xdc,2);
            SelSendAndKill(4,&DAT_10034788,0xc3,2);
            SelSendAndKill(4,&DAT_10034780,0x5a,2);
          }
          else {
            SelectUnits(&DAT_10034418,0);
            SelSendAndKill(4,&DAT_100346d0,0xaa,0);
            SelSendAndKill(4,&DAT_100346d8,0x96,2);
            SelSendAndKill(4,&DAT_10034778,0xdc,2);
            SelSendAndKill(4,&DAT_10034790,0x1e,2);
          }
          ClearSelection(4);
        }
      }
    }
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_10034418);
        if (iVar4 != 0) {
          uVar1 = TimerDoneFirst(10);
          if ((uVar1 & 0xff) == 0) goto LAB_100045ed;
        }
        FreeTimer(10);
        SetTrigg(0x16,0);
      }
    }
  }
LAB_100045ed:
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      local_14 = GetDiff(0);
      switch(local_14) {
      case 0:
        DAT_10034550 = DAT_10034550 + 1;
        DAT_100345b8 = DAT_100345b8 + 1;
        DAT_10034600 = DAT_10034600 + 1;
        DAT_10034628 = DAT_10034628 + 1;
        DAT_10034678 = DAT_10034678 + 1;
        DAT_10034690 = DAT_10034690 + 1;
        break;
      case 1:
        DAT_10034550 = DAT_10034550 + 1;
        DAT_100345b8 = DAT_100345b8 + 1;
        DAT_10034600 = DAT_10034600 + 3;
        DAT_10034628 = DAT_10034628 + 4;
        DAT_10034678 = DAT_10034678 + 1;
        DAT_10034690 = DAT_10034690 + 2;
        break;
      case 2:
        DAT_10034550 = DAT_10034550 + 1;
        DAT_100345b8 = DAT_100345b8 + 1;
        DAT_10034600 = DAT_10034600 + 8;
        DAT_10034628 = DAT_10034628 + 10;
        DAT_10034678 = DAT_10034678 + 2;
        DAT_10034690 = DAT_10034690 + 1;
        break;
      case 3:
        DAT_10034550 = DAT_10034550 + 2;
        DAT_100345b8 = DAT_100345b8 + 2;
        DAT_10034600 = DAT_10034600 + 0xc;
        DAT_10034628 = DAT_10034628 + 0xf;
        DAT_10034678 = DAT_10034678 + 3;
        DAT_10034690 = DAT_10034690 + 2;
      }
      iVar4 = GetDiff(0);
      RunTimer(0xd,(5 - iVar4) * 0x23f0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100343f0);
    if (iVar4 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE2");
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(6,0);
    local_18 = GetDiff(0);
    switch(local_18) {
    case 0:
      CreateObject0(&DAT_10034410,&DAT_100343f8,&DAT_100347a0,4,&DAT_100346b0,0x1e);
      CreateObject0(&DAT_10034428,&DAT_100343f8,&DAT_100347a0,4,&DAT_10034450,0);
      CreateObject0(&DAT_10034420,&DAT_100343f8,&DAT_100347a0,4,&DAT_10034460,0);
      CreateObject0(&DAT_10034430,&DAT_100343f8,&DAT_100347a0,4,&DAT_10034470,0);
      break;
    case 1:
      CreateObject0(&DAT_10034410,&DAT_100343f8,&DAT_100344b0,4,&DAT_100346b0,0x1e);
      CreateObject0(&DAT_10034428,&DAT_100343f8,&DAT_100344b0,4,&DAT_10034450,0);
      CreateObject0(&DAT_10034420,&DAT_100343f8,&DAT_100344b0,4,&DAT_10034460,0);
      CreateObject0(&DAT_10034430,&DAT_100343f8,&DAT_100344b0,4,&DAT_10034470,0);
      CreateObject0(&DAT_10034548,&DAT_100344c0,&DAT_100344b0,4,&DAT_100346c8,0);
      break;
    case 2:
      CreateObject0(&DAT_10034410,&DAT_100343f8,&DAT_10034408,4,&DAT_100346b0,0x1e);
      CreateObject0(&DAT_10034428,&DAT_100343f8,&DAT_10034408,4,&DAT_10034450,0);
      CreateObject0(&DAT_10034420,&DAT_100343f8,&DAT_10034408,4,&DAT_10034460,0);
      CreateObject0(&DAT_10034430,&DAT_100343f8,&DAT_10034408,4,&DAT_10034470,0);
      CreateObject0(&DAT_10034548,&DAT_100343f8,&DAT_100344b0,4,&DAT_100346c8,0);
      CreateObject0(&DAT_10034578,&DAT_100345d0,&DAT_10034700,4,&DAT_100346e0,0x1e);
      CreateObject0(&DAT_10034598,&DAT_100345d0,&DAT_10034700,4,&DAT_100346e8,0x1e);
      SelectUnits(&DAT_10034578,0);
      SelectUnits(&DAT_10034598,1);
      SetStandGround(4,1);
      break;
    case 3:
      CreateObject0(&DAT_10034410,&DAT_100343f8,&DAT_100345c0,4,&DAT_100346b0,0x1e);
      CreateObject0(&DAT_10034428,&DAT_100343f8,&DAT_100345c0,4,&DAT_10034450,0);
      CreateObject0(&DAT_10034420,&DAT_100343f8,&DAT_100345c0,4,&DAT_10034460,0);
      CreateObject0(&DAT_10034430,&DAT_100343f8,&DAT_100345c0,4,&DAT_10034470,0);
      CreateObject0(&DAT_10034548,&DAT_10034400,&DAT_100344b0,4,&DAT_100346c8,0);
      CreateObject0(&DAT_10034578,&DAT_100345e0,&DAT_10034700,4,&DAT_100346e0,0x1e);
      CreateObject0(&DAT_10034598,&DAT_100345e0,&DAT_10034700,4,&DAT_100346e8,0x1e);
      SelectUnits(&DAT_10034578,0);
      SelectUnits(&DAT_10034598,1);
      SetStandGround(4,1);
    }
    ClearSelection(4);
  }
  iVar4 = GetTotalAmount0(&DAT_10034578);
  if (iVar4 < 1) {
    iVar4 = GetTotalAmount0(&DAT_10034598);
    if (iVar4 < 1) goto LAB_10004da9;
  }
  AttackZoneByArtillery(&DAT_10034578,&DAT_10034698,0);
  AttackZoneByArtillery(&DAT_10034598,&DAT_100346a0,0);
LAB_10004da9:
  iVar4 = GetTotalAmount1(&DAT_10034728,0);
  if (0 < iVar4) {
    iVar4 = GetTotalAmount0(&DAT_10034548);
    if (0 < iVar4) {
      SaveSelectedUnits(0,&DAT_10034708,0);
      ClearSelection(0);
      SelectUnitsType(&DAT_10034728,0,0);
      SaveSelectedUnits(0,&DAT_10034540,0);
      ClearSelection(0);
      SelectUnits(&DAT_10034548,0);
      SelAttackGroup(4,&DAT_10034540);
      ClearSelection(4);
      SelectUnits(&DAT_10034708,0);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10034798);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10034428);
      if (iVar4 < 3) {
        SetTrigg(0x17,0);
        iVar4 = GetDiff(0);
        RunTimer(4,(5 - iVar4) * 600);
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100343e8);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10034420);
      if (iVar4 < 3) {
        SetTrigg(0x18,0);
        iVar4 = GetDiff(0);
        RunTimer(5,(5 - iVar4) * 600);
      }
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100343e0);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10034430);
      if (iVar4 < 3) {
        SetTrigg(0x19,0);
        iVar4 = GetDiff(0);
        RunTimer(6,(5 - iVar4) * 600);
      }
    }
  }
  uVar1 = TimerDoneFirst(0xe);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x17,0);
  }
  uVar1 = TimerDoneFirst(0xf);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x18,0);
  }
  uVar1 = TimerDoneFirst(0x10);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x19,0);
  }
  local_1c = GetDiff(0);
  switch(local_1c) {
  case 0:
    iVar4 = GetTotalAmount0(&DAT_100343e8);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10034410);
      if (iVar4 < 3) {
        iVar4 = GetUnitsAmount0(&DAT_10034608,0);
        if (iVar4 == 0) {
          CreateObject0(&DAT_10034580,&DAT_100344c0,&DAT_100347a0,4,&DAT_100346f8,0x1e);
          RemoveGroup(&DAT_10034580,&DAT_10034410);
          SelectUnits(&DAT_10034410,0);
          SelSendAndKill(4,&DAT_100346b0,0x1e,0);
          ClearSelection(4);
        }
      }
    }
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_10034798,&DAT_100347a0,&DAT_10034428,1);
      RunTimer(0xe,300);
    }
    uVar1 = TimerDoneFirst(5);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100343e8,&DAT_100347a0,&DAT_10034420,1);
      RunTimer(0xf,300);
    }
    uVar1 = TimerDoneFirst(6);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100343e0,&DAT_100347a0,&DAT_10034430,1);
      RunTimer(0x10,300);
    }
    break;
  case 1:
    iVar4 = GetTotalAmount0(&DAT_100343e8);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10034410);
      if (iVar4 < 3) {
        iVar4 = GetUnitsAmount0(&DAT_10034608,0);
        if (iVar4 == 0) {
          CreateObject0(&DAT_10034580,&DAT_100344c0,&DAT_100344b0,4,&DAT_100346f8,0x1e);
          RemoveGroup(&DAT_10034580,&DAT_10034410);
          SelectUnits(&DAT_10034410,0);
          SelSendAndKill(4,&DAT_100346b0,0x1e,0);
          ClearSelection(4);
        }
      }
    }
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_10034798,&DAT_100344b0,&DAT_10034428,1);
      RunTimer(0xe,300);
    }
    uVar1 = TimerDoneFirst(5);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100343e8,&DAT_100344b0,&DAT_10034420,1);
      RunTimer(0xf,300);
    }
    uVar1 = TimerDoneFirst(6);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100343e0,&DAT_100344b0,&DAT_10034430,1);
      RunTimer(0x10,300);
    }
    break;
  case 2:
    iVar4 = GetTotalAmount0(&DAT_100343e8);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10034410);
      if (iVar4 < 3) {
        iVar4 = GetUnitsAmount0(&DAT_10034608,0);
        if (iVar4 == 0) {
          CreateObject0(&DAT_10034580,&DAT_100344c0,&DAT_10034408,4,&DAT_100346f8,0x1e);
          RemoveGroup(&DAT_10034580,&DAT_10034410);
          SelectUnits(&DAT_10034410,0);
          SelSendAndKill(4,&DAT_100346b0,0x1e,0);
          ClearSelection(4);
        }
      }
    }
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_10034798,&DAT_10034408,&DAT_10034428,1);
      RunTimer(0xe,300);
    }
    uVar1 = TimerDoneFirst(5);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100343e8,&DAT_10034408,&DAT_10034420,1);
      RunTimer(0xf,300);
    }
    uVar1 = TimerDoneFirst(6);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100343e0,&DAT_10034408,&DAT_10034430,1);
      RunTimer(0x10,300);
    }
    break;
  case 3:
    iVar4 = GetTotalAmount0(&DAT_100343e8);
    if (0 < iVar4) {
      iVar4 = GetTotalAmount0(&DAT_10034410);
      if (iVar4 < 3) {
        iVar4 = GetUnitsAmount0(&DAT_10034608,0);
        if (iVar4 == 0) {
          CreateObject0(&DAT_10034580,&DAT_100344c0,&DAT_100345c0,4,&DAT_100346f8,0x1e);
          RemoveGroup(&DAT_10034580,&DAT_10034410);
          SelectUnits(&DAT_10034410,0);
          SelSendAndKill(4,&DAT_100346b0,0x1e,0);
          ClearSelection(4);
        }
      }
    }
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_10034798,&DAT_100345c0,&DAT_10034428,1);
      RunTimer(0xe,300);
    }
    uVar1 = TimerDoneFirst(5);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100343e8,&DAT_100345c0,&DAT_10034420,1);
      RunTimer(0xf,300);
    }
    uVar1 = TimerDoneFirst(6);
    if ((uVar1 & 0xff) != 0) {
      ProduceUnitFast(&DAT_100343e0,&DAT_100345c0,&DAT_10034430,1);
      RunTimer(0x10,300);
    }
  }
  SaveSelectedUnits(0,&DAT_10034708,0);
  ClearSelection(0);
  SelectUnitsType(&DAT_100346f0,0,0);
  SelectUnitsType(&DAT_10034480,0,1);
  SelectUnitsType(&DAT_10034490,0,1);
  SelDie(0);
  SelectUnits(&DAT_10034708,0);
  ClearSelection(4);
  SelectUnitsType(&DAT_10034720,4,0);
  SelectUnitsType(&DAT_10034730,4,1);
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
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x12);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0xf,0);
          ShowPage("#PAGE8");
        }
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100344a0);
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
        uVar1 = Trigg(0x61);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x61,0);
          ShowPage("#PAGE9");
          ShowVictory();
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
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10034518);
    if (iVar4 == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x62,0);
        ShowPage("#PAGE11");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsByNation(&DAT_10034518,0);
    if (0 < iVar4) {
      SetTrigg(4,0);
      ShowPage("#PAGE12");
      EnableUnit(0,&DAT_100345a0,1);
      DisableMission(0x44);
      EnableMission(0x45);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10034670);
    if (iVar4 == 0) {
      SetTrigg(3,0);
      SelectUnits(&DAT_10034748,0);
      SelectUnits(&DAT_10034740,1);
      SelOpenGates(4);
      ClearSelection(4);
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
