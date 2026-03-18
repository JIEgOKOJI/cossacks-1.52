#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002f028[] = "SUXX";
char DAT_1002f1b8[] = "Zep4";
char DAT_1002f1c0[] = "Zep3";
char DAT_1002f1c8[] = "Zep2";
char DAT_1002f1d0[] = "Zep1";
char DAT_1002f2ec[] = "Gcut";
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
int DAT_100344c8 = 0;
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
long long DAT_10034550 = 0;
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
long long DAT_100345b8 = 0;
long long DAT_100345c0 = 0;
long long DAT_100345c8 = 0;
long long DAT_100345d0 = 0;
long long DAT_100345d8 = 0;
long long DAT_100345e0 = 0;
long long DAT_100345e8 = 0;
long long DAT_100345f0 = 0;
long long DAT_100345f8 = 0;
long long DAT_10034600 = 0;
long long DAT_10034608 = 0;
long long DAT_10034610 = 0;
long long DAT_10034618 = 0;
long long DAT_10034620 = 0;
long long DAT_10034628 = 0;
long long DAT_10034630 = 0;
long long DAT_10034638 = 0;
long long DAT_10034640 = 0;
long long DAT_10034648 = 0;
long long DAT_10034650 = 0;
long long DAT_10034658 = 0;
long long DAT_10034660 = 0;
long long DAT_10034668 = 0;
long long DAT_10034670 = 0;
long long DAT_10034678 = 0;
long long DAT_10034680 = 0;
long long DAT_10034688 = 0;
long long DAT_10034690 = 0;
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
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10034558,"Gband1");
  RegisterUnits(&DAT_10034588,"Gholop1");
  RegisterUnits(&DAT_10034580,"Gholop2");
  RegisterUnits(&DAT_10034578,"Gholop3");
  RegisterUnits(&DAT_10034570,"Gholop4");
  RegisterUnits(&DAT_10034568,"Gholop5");
  RegisterUnits(&DAT_100345a8,"Gholop6");
  RegisterUnits(&DAT_100345a0,"Gholop7");
  RegisterUnits(&DAT_10034598,"Gholop8");
  RegisterUnits(&DAT_10034590,"Gholop9");
  RegisterUnits(&DAT_10034548,"Gholop10");
  RegisterUnits(&DAT_10034528,"Gholop11");
  RegisterUnits(&DAT_10034520,"Gholop12");
  RegisterUnits(&DAT_10034538,"Gholop13");
  RegisterUnits(&DAT_10034530,"Gholop14");
  RegisterUnits(&DAT_10034518,"Gholop15");
  RegisterUnits(&DAT_10034510,"Gholop16");
  RegisterUnits(&DAT_10034690,"Gbos1");
  RegisterUnits(&DAT_10034698,"Gbos2");
  RegisterUnits(&DAT_100346a0,"Gbos3");
  RegisterUnits(&DAT_100346a8,"Gbos4");
  RegisterUnits(&DAT_10034798,"Gport1");
  RegisterUnits(&DAT_100343e8,"Gport2");
  RegisterUnits(&DAT_100343e0,"Gport3");
  RegisterUnits(&DAT_10034408,"Gport4");
  RegisterUnits(&DAT_100343f8,"Gport5");
  RegisterUnits(&DAT_10034428,"Gport6");
  RegisterUnits(&DAT_10034418,"Gport7");
  RegisterUnits(&DAT_10034430,"Gport8");
  RegisterUnits(&DAT_10034668,"Gmush1");
  RegisterUnits(&DAT_10034640,"Gpike1");
  RegisterUnits(&DAT_10034768,"Gcentr");
  RegisterUnits(&DAT_10034750,"Goxrana1");
  RegisterUnits(&DAT_10034758,"Goxrana2");
  RegisterUnits(&DAT_100344f8,"Gobj1");
  RegisterUnits(&DAT_10034500,"Gobj2");
  RegisterUnits(&DAT_10034508,"Gobj3");
  RegisterUnits(&DAT_10034770,"Gfrig");
  RegisterUnits(&DAT_10034740,DAT_1002f2ec);
  RegisterUnits(&DAT_100345b8,"Gbash1");
  RegisterUnits(&DAT_100345b0,"Gbash2");
  RegisterUnits(&DAT_100345c0,"Gbash3");
  RegisterUnits(&DAT_100346c0,"Gdrag1");
  RegisterUnits(&DAT_10034670,"Gcir1");
  RegisterUnits(&DAT_10034790,"Ggus1");
  RegisterUnits(&DAT_100344d0,"Gkon1");
  RegisterUnits(&DAT_100344d8,"Gkon2");
  RegisterUnits(&DAT_100344e0,"Gkon3");
  RegisterUnits(&DAT_100344e8,"Gkon4");
  RegisterZone(&DAT_100346b8,"Zband0");
  RegisterZone(&DAT_10034760,"Zband00");
  RegisterZone(&DAT_100346b0,"Zband1");
  RegisterZone(&DAT_10034780,"Zband1a");
  RegisterZone(&DAT_10034788,"Zband1b");
  RegisterZone(&DAT_10034658,"Ztalk1");
  RegisterZone(&DAT_10034660,"Ztalk2");
  RegisterZone(&DAT_10034708,"Zgen1");
  RegisterZone(&DAT_10034710,"Zgen2");
  RegisterZone(&DAT_10034718,"Zgen3");
  RegisterZone(&DAT_10034720,"Zgen4");
  RegisterZone(&DAT_100346d8,"Zattack1");
  RegisterZone(&DAT_100346e0,"Zattack2");
  RegisterZone(&DAT_100346c8,"Zattack3");
  RegisterZone(&DAT_100346d0,"Zattack4");
  RegisterZone(&DAT_100346f8,"Zattack5");
  RegisterZone(&DAT_10034700,"Zattack6");
  RegisterZone(&DAT_100346e8,"Zattack7");
  RegisterZone(&DAT_100346f0,"Zattack8");
  RegisterZone(&DAT_100343f0,DAT_1002f1d0);
  RegisterZone(&DAT_10034400,DAT_1002f1c8);
  RegisterZone(&DAT_10034410,DAT_1002f1c0);
  RegisterZone(&DAT_10034420,DAT_1002f1b8);
  RegisterZone(&DAT_10034678,"Zsvet1");
  RegisterZone(&DAT_10034680,"Zsvet2");
  RegisterZone(&DAT_10034688,"Zsvet3");
  RegisterZone(&DAT_10034478,"Zotxod1");
  RegisterZone(&DAT_10034480,"Zotxod2");
  RegisterZone(&DAT_10034488,"Zotxod3");
  RegisterZone(&DAT_10034498,"Zotxod4");
  RegisterUnitType(&DAT_100344f0,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_10034628,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_10034448,"FregatNEW(RU)");
  RegisterUnitType(&DAT_10034540,"KUTTER(GE)");
  RegisterUnitType(&DAT_100344b0,"Kreposnoi_pruss(GE)");
  RegisterUnitType(&DAT_100344c0,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10034748,"WALL_EV(PL)");
  RegisterUnitType(&DAT_10034560,"WALL_UKR(PL)");
  RegisterUpgrade(&DAT_10034778,"AKA25PL");
  RegisterVar(&DAT_100344a0,8);
  RegisterVar(&DAT_10034490,8);
  RegisterVar(&DAT_100344b8,8);
  RegisterVar(&DAT_100344a8,8);
  RegisterVar(&DAT_10034458,8);
  RegisterVar(&DAT_10034450,8);
  RegisterVar(&DAT_10034468,8);
  RegisterVar(&DAT_10034460,8);
  RegisterVar(&DAT_10034470,8);
  RegisterVar(&DAT_100345d0,8);
  RegisterVar(&DAT_100345c8,8);
  RegisterVar(&DAT_10034600,8);
  RegisterVar(&DAT_100345f8,8);
  RegisterVar(&DAT_10034618,8);
  RegisterVar(&DAT_10034608,8);
  RegisterVar(&DAT_100345e0,8);
  RegisterVar(&DAT_100345d8,8);
  RegisterVar(&DAT_100345f0,8);
  RegisterVar(&DAT_100345e8,8);
  RegisterVar(&DAT_10034610,8);
  RegisterVar(&DAT_100344c8,4);
  RegisterFormation(&DAT_10034738,"#LINE5");
  RegisterFormation(&DAT_10034630,"#LINE20PUS");
  RegisterFormation(&DAT_10034648,"#LINE30PUS");
  RegisterFormation(&DAT_10034650,"#LINE40PUS");
  RegisterFormation(&DAT_10034638,"#LINE15PUS");
  RegisterFormation(&DAT_10034620,"#LINE10PUS");
  RegisterFormation(&DAT_10034730,"#LINE3");
  RegisterFormation(&DAT_10034438,"#SHIPS3");
  RegisterFormation(&DAT_10034440,"#SHIPS5");
  RegisterFormation(&DAT_10034550,"#ALONE");
  RegisterDynGroup(&DAT_100344a0);
  RegisterDynGroup(&DAT_10034490);
  RegisterDynGroup(&DAT_100344b8);
  RegisterDynGroup(&DAT_100344a8);
  RegisterDynGroup(&DAT_10034458);
  RegisterDynGroup(&DAT_10034450);
  RegisterDynGroup(&DAT_10034468);
  RegisterDynGroup(&DAT_10034460);
  RegisterDynGroup(&DAT_10034470);
  RegisterDynGroup(&DAT_100345d0);
  RegisterDynGroup(&DAT_100345c8);
  RegisterDynGroup(&DAT_10034600);
  RegisterDynGroup(&DAT_100345f8);
  RegisterDynGroup(&DAT_10034618);
  RegisterDynGroup(&DAT_10034608);
  RegisterDynGroup(&DAT_100345e0);
  RegisterDynGroup(&DAT_100345d8);
  RegisterDynGroup(&DAT_100345f0);
  RegisterDynGroup(&DAT_100345e8);
  RegisterDynGroup(&DAT_10034610);
  RegisterDynGroup(&DAT_10034728);
  SetPlayerName(1,"RUSSIA");
  SetPlayerName(2,"PRUSSIA");
  SetPlayerName(3,"BAVARIA");
  SetPlayerName(4,DAT_1002f028);
  SetPlayerName(5,"BANDITS");
  ChangeFriends(0,3);
  ChangeFriends(1,3);
  ChangeFriends(2,0x3c);
  ChangeFriends(3,0x3c);
  ChangeFriends(4,0x3c);
  ChangeFriends(5,0x3c);
  EnableUnit(0,&DAT_10034748,0);
  EnableUnit(0,&DAT_10034560,0);
  DisableUpgrade(0,&DAT_10034778);
  uStack_8 = 0x1000204d;
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
    TakeFood(&DAT_10034588);
    TakeFood(&DAT_10034590);
    TakeStone(&DAT_10034578);
    TakeStone(&DAT_10034570);
    TakeStone(&DAT_10034598);
    TakeStone(&DAT_10034548);
    TakeStone(&DAT_10034520);
    TakeStone(&DAT_10034538);
    TakeStone(&DAT_10034530);
    TakeWood(&DAT_10034580);
    TakeWood(&DAT_10034568);
    TakeWood(&DAT_100345a8);
    TakeWood(&DAT_100345a0);
    TakeWood(&DAT_10034528);
    local_18 = GetDiff(0);
    switch(local_18) {
    case 0:
      SetResource(0,3,20000);
      SetResource(0,0,20000);
      SetResource(0,2,20000);
      SetResource(0,1,20000);
      SetResource(0,5,20000);
      SetResource(0,4,20000);
      SelectUnits(&DAT_10034690,0);
      SelectUnits(&DAT_10034698,1);
      SelectUnits(&DAT_100346a0,1);
      SelectUnits(&DAT_100346a8,1);
      SelErase(5);
      SelectUnits(&DAT_10034668,0);
      SelectUnits(&DAT_10034670,1);
      SelectUnits(&DAT_10034790,1);
      SelectUnits(&DAT_100346c0,1);
      SelectUnits(&DAT_10034770,1);
      SelectUnits(&DAT_100345b8,1);
      SelErase(2);
      DAT_100344c8 = 1;
      RunTimer(0xc,150000);
      RunTimer(0xd,240000);
      break;
    case 1:
      SetResource(0,3,15000);
      SetResource(0,0,15000);
      SetResource(0,2,15000);
      SetResource(0,1,15000);
      SetResource(0,5,15000);
      SetResource(0,4,15000);
      SelectUnits(&DAT_10034690,0);
      SelectUnits(&DAT_100346a0,1);
      SelectUnits(&DAT_100346a8,1);
      SelErase(5);
      SelectUnits(&DAT_10034640,0);
      SelectUnits(&DAT_10034670,1);
      SelectUnits(&DAT_10034790,1);
      SelectUnits(&DAT_100346c0,1);
      SelectUnits(&DAT_10034770,1);
      SelErase(2);
      DAT_100344c8 = 2;
      RunTimer(0xc,160000);
      RunTimer(0xd,180000);
      break;
    case 2:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_100346a8,0);
      SelErase(5);
      SelectUnits(&DAT_10034790,0);
      SelectUnits(&DAT_100346c0,1);
      SelectUnits(&DAT_10034740,1);
      SelErase(2);
      DAT_100344c8 = 3;
      RunTimer(0xc,130000);
      RunTimer(0xd,110000);
      break;
    case 3:
      SetResource(0,3,8000);
      SetResource(0,0,8000);
      SetResource(0,2,8000);
      SetResource(0,1,8000);
      SetResource(0,5,8000);
      SetResource(0,4,8000);
      DAT_100344c8 = 4;
      RunTimer(0xc,120000);
      RunTimer(0xd,90000);
    }
    RunTimer(6,500);
    RunTimer(7,3000);
    RunTimer(1,1000);
    iVar4 = GetDiff(0);
    RunTimer(0xe,(5 - iVar4) * 5000);
    InitialUpgrade("Gobj1","Melnica(PL)GETRES");
    InitialUpgrade("Gobj1","MAINPL");
    InitialUpgrade("Gobj1","Melnica(PL)GETRES2");
    InitialUpgrade("Gobj1","KUZ01PL");
    InitialUpgrade("Gobj1","AKA01PL");
    InitialUpgrade("Gobj1","AKA02PL");
    InitialUpgrade("Gobj1","AKA03PL");
    InitialUpgrade("Gobj1","AKA04PL");
    InitialUpgrade("Gobj1","AKA05PL");
    InitialUpgrade("Gobj1","AKA07PL");
    InitialUpgrade("Gobj1","AKA16PL");
    InitialUpgrade("Gobj1","AKA17PL");
    InitialUpgrade("Gobj1","AKA20PL");
    InitialUpgrade("Gobj1","AKA27PL");
    InitialUpgrade("Gobj1","AKA28PL");
    InitialUpgrade("Gobj1","AKA30PL");
    InitialUpgrade("Gobj1","NEWKUTT(PL)");
    InitialUpgrade("Gobj2","Melnica_rus(RU)GETRES");
    InitialUpgrade("Gobj2","MAINRU");
    InitialUpgrade("Gobj2","Melnica_rus(RU)GETRES2");
    InitialUpgrade("Gobj2","KUZ01RU");
    InitialUpgrade("Gobj2","KUZ02RU");
    InitialUpgrade("Gobj2","KUZ03RU");
    InitialUpgrade("Gobj2","KUZ04RU");
    InitialUpgrade("Gobj2","KUZ05RU");
    InitialUpgrade("Gobj2","KUZ06RU");
    InitialUpgrade("Gobj2","AKA01RU");
    InitialUpgrade("Gobj2","AKA02RU");
    InitialUpgrade("Gobj2","AKA03RU");
    InitialUpgrade("Gobj2","AKA04RU");
    InitialUpgrade("Gobj2","AKA05RU");
    InitialUpgrade("Gobj2","AKA06RU");
    InitialUpgrade("Gobj2","AKA07RU");
    InitialUpgrade("Gobj2","AKA08RU");
    InitialUpgrade("Gobj2","AKA09RU");
    InitialUpgrade("Gobj2","AKA10RU");
    InitialUpgrade("Gobj2","AKA11RU");
    InitialUpgrade("Gobj2","AKA16RU");
    InitialUpgrade("Gobj2","AKA17RU");
    InitialUpgrade("Gobj2","AKA18RU");
    InitialUpgrade("Gobj2","AKA20RU");
    InitialUpgrade("Gobj2","AKA24RU");
    InitialUpgrade("Gobj2","AKA27RU");
    InitialUpgrade("Gobj2","AKA28RU");
    InitialUpgrade("Gobj2","AKA29RU");
    InitialUpgrade("Gobj2","AKA30RU");
    InitialUpgrade("Gobj2","AKA31RU");
    InitialUpgrade("Gobj2","AKA32RU");
    InitialUpgrade("Gobj2","AKA33RU");
    InitialUpgrade("Gobj2","AKA34RU");
    InitialUpgrade("Gobj2","NEWKUTT(RU)");
    InitialUpgrade("Gobj2","NEWKECH(RU)");
    InitialUpgrade("Gobj2","PRS(RU)INSIDE");
    InitialUpgrade("Gobj2","NEWFREG(RU)");
    InitialUpgrade("Gobj3","Melnica(GE)GETRES");
    InitialUpgrade("Gobj3","MAINGE");
    InitialUpgrade("Gobj3","Melnica(GE)GETRES2");
    InitialUpgrade("Gobj3","KUZ01GE");
    InitialUpgrade("Gobj3","KUZ03GE");
    InitialUpgrade("Gobj3","KUZ04GE");
    InitialUpgrade("Gobj3","KUZ05GE");
    InitialUpgrade("Gobj3","KUZ06GE");
    InitialUpgrade("Gobj3","AKA01GE");
    InitialUpgrade("Gobj3","AKA02GE");
    InitialUpgrade("Gobj3","AKA03GE");
    InitialUpgrade("Gobj3","AKA04GE");
    InitialUpgrade("Gobj3","AKA05GE");
    InitialUpgrade("Gobj3","AKA06GE");
    InitialUpgrade("Gobj3","AKA07GE");
    InitialUpgrade("Gobj3","AKA08GE");
    InitialUpgrade("Gobj3","AKA10GE");
    InitialUpgrade("Gobj3","AKA16GE");
    InitialUpgrade("Gobj3","AKA17GE");
    InitialUpgrade("Gobj3","AKA18GE");
    InitialUpgrade("Gobj3","AKA24GE");
    InitialUpgrade("Gobj3","AKA29GE");
    InitialUpgrade("Gobj3","AKA30GE");
    InitialUpgrade("Gobj3","AKA31GE");
    InitialUpgrade("Gobj3","AKA32GE");
    InitialUpgrade("Gobj3","AKA33GE");
    InitialUpgrade("Gobj3","AKA34GE");
    InitialUpgrade("Gobj3","NEWKUTT(GE)");
    InitialUpgrade("Gobj3","NEWKECH(GE)");
    InitialUpgrade("Gobj3","PRS(GE)INSIDE");
    InitialUpgrade("Gobj3","NEWFREG(GE)");
    InitialUpgrade("Gholop15","Melnica(BA)GETRES");
    InitialUpgrade("Gholop15","MAINBA");
    InitialUpgrade("Gholop15","Melnica(BA)GETRES2");
    InitialUpgrade("Gholop15","AKA09BA");
    InitialUpgrade("Gholop15","AKA10BA");
    InitialUpgrade("Gholop15","AKA11BA");
    InitialUpgrade("Gholop15","KUZ02BA");
    InitialUpgrade("Gholop16","Melnica(SA)GETRES");
    InitialUpgrade("Gholop16","MAINSA");
    InitialUpgrade("Gholop16","Melnica(SA)GETRES2");
    InitialUpgrade("Gholop16","AKA09SA");
    InitialUpgrade("Gholop16","AKA10SA");
    InitialUpgrade("Gholop16","AKA11SA");
    InitialUpgrade("Gholop16","KUZ02SA");
    SetResource(3,3,100000);
    SetResource(3,0,50000);
    SetResource(3,2,50000);
    SetResource(3,1,50000);
    SetResource(3,5,50000);
    SetResource(3,4,50000);
    uVar2 = GetDiff(0);
    StartAI(3,"BAVARIA.0",2,1,2,uVar2);
    SetResource(4,3,100000);
    SetResource(4,0,50000);
    SetResource(4,2,50000);
    SetResource(4,1,50000);
    SetResource(4,5,50000);
    SetResource(4,4,50000);
    uVar2 = GetDiff(0);
    StartAI(4,"SAKSINIA.0",2,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      DAT_100344c8 = DAT_100344c8 + 1;
      iVar4 = GetDiff(0);
      RunTimer(0xe,(5 - iVar4) * 5000);
    }
  }
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetTotalAmount1(&DAT_100344b0,2);
        if (0x1e < iVar4) {
          SetTrigg(0x19,0);
          ShowPage("#PAGE10");
          SetResource(2,3,150000);
          SetResource(2,0,150000);
          SetResource(2,2,150000);
          SetResource(2,1,150000);
          SetResource(2,5,150000);
          SetResource(2,4,150000);
          uVar2 = GetDiff(0);
          StartAI(2,"GERMAN.0",2,1,2,uVar2);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x17);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetTotalAmount1(&DAT_100344c0,1);
        if (0x1e < iVar4) {
          SetTrigg(0x17,0);
          ShowPage("#PAGE10A");
          SetResource(1,3,150000);
          SetResource(1,0,150000);
          SetResource(1,2,150000);
          SetResource(1,1,150000);
          SetResource(1,5,150000);
          SetResource(1,4,150000);
          uVar2 = GetDiff(0);
          StartAI(1,"RUSSIA.0",2,1,2,uVar2);
        }
      }
    }
  }
  iVar4 = GetUnitsAmount1(&DAT_100343f0,&DAT_100344d0);
  if (0 < iVar4) {
    SelectUnits(&DAT_100344d0,0);
    SelSendTo(2,&DAT_10034400,0x14,2);
    SelSendTo(2,&DAT_10034410,0xd2,2);
    SelSendTo(2,&DAT_10034420,0x96,2);
    SelSendTo(2,&DAT_100343f0,0x5a,2);
    ClearSelection(2);
  }
  iVar4 = GetUnitsAmount1(&DAT_10034400,&DAT_100344d8);
  if (0 < iVar4) {
    SelectUnits(&DAT_100344d8,0);
    SelSendTo(2,&DAT_10034410,0xd2,2);
    SelSendTo(2,&DAT_10034420,0x96,2);
    SelSendTo(2,&DAT_100343f0,0x5a,2);
    SelSendTo(2,&DAT_10034400,0x14,2);
    ClearSelection(2);
  }
  iVar4 = GetUnitsAmount1(&DAT_10034410,&DAT_100344e0);
  if (0 < iVar4) {
    SelectUnits(&DAT_100344e0,0);
    SelSendTo(2,&DAT_10034420,0x96,2);
    SelSendTo(2,&DAT_100343f0,0x5a,2);
    SelSendTo(2,&DAT_10034400,0x14,2);
    SelSendTo(2,&DAT_10034410,0xd2,2);
    ClearSelection(2);
  }
  iVar4 = GetUnitsAmount1(&DAT_10034420,&DAT_100344e8);
  if (0 < iVar4) {
    SelectUnits(&DAT_100344e8,0);
    SelSendTo(2,&DAT_100343f0,0x5a,2);
    SelSendTo(2,&DAT_10034400,0x14,2);
    SelSendTo(2,&DAT_10034410,0xd2,2);
    SelSendTo(2,&DAT_10034420,0x96,2);
    ClearSelection(2);
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0AA");
      EnableMission(0x44);
      EnableMission(0x46);
      SetLightSpot(&DAT_10034678,1,1);
      SetLightSpot(&DAT_10034680,1,2);
      SetLightSpot(&DAT_10034688,1,3);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100346b8,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_10034760,0);
      if (iVar4 < 1) {
        uVar1 = TimerDoneFirst(7);
        if ((uVar1 & 0xff) == 0) goto LAB_1000429e;
      }
    }
    SetTrigg(3,0);
    ShowPage("#PAGE2");
    EnableMission(0x4b);
  }
LAB_1000429e:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100346b0,&DAT_10034558);
    iVar3 = GetTotalAmount0(&DAT_10034558);
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      SelectUnits(&DAT_10034558,0);
      SelSendTo(5,&DAT_10034788,0,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100346b0,&DAT_10034558);
    iVar3 = GetTotalAmount0(&DAT_10034558);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10034558,0);
      Patrol(5,&DAT_10034780,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10034558);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100346b0,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -10000 + 50000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -10000 + 50000);
        DisableMission(0x4b);
        EnableMission(0x4c);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0A");
      SetLightSpot(&DAT_10034658,6,4);
      SetLightSpot(&DAT_10034660,6,5);
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
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(8,0);
      ShowPage("#PAGE11");
      LooseGame();
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(2);
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
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(9);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(9,0);
        for (local_8 = 0; local_8 < DAT_100344c8; local_8 = local_8 + 1) {
          ProduceUnitFast(&DAT_10034798,&DAT_10034540,&DAT_100344a0,0);
        }
      }
      iVar4 = GetTotalAmount0(&DAT_10034798);
      if (0 < iVar4) {
        uVar1 = Trigg(0x10);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = CheckProduction(&DAT_10034798);
          if ((uVar1 & 0xff) != 0) {
            RunTimer(2,100);
            SetTrigg(0x10,0);
          }
        }
      }
      uVar1 = TimerDoneFirst(2);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100344a0,0);
        SelSendTo(2,&DAT_10034478,0x41,0);
        RunTimer(0xf,900);
        ClearSelection(2);
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(4);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(0xf);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(4,0);
            FreeTimer(0xf);
            RunTimer(8,8000);
            SetTrigg(0x10,1);
            RemoveGroup(&DAT_100344a0,&DAT_10034458);
            SelectUnits(&DAT_10034458,0);
            SelSendAndKill(2,&DAT_100346d8,100,0);
            ClearSelection(2);
            SetTrigg(9,1);
          }
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(4);
        if ((uVar1 & 0xff) == 0) {
          iVar4 = GetTotalAmount0(&DAT_10034458);
          if (iVar4 != 0) {
            uVar1 = TimerDoneFirst(8);
            if ((uVar1 & 0xff) == 0) goto LAB_10004b20;
          }
          FreeTimer(8);
          SetTrigg(4,1);
        }
      }
LAB_10004b20:
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(10,0);
        for (local_c = 0; local_c < DAT_100344c8; local_c = local_c + 1) {
          ProduceUnitFast(&DAT_100343e8,&DAT_10034540,&DAT_10034490,0);
        }
      }
      iVar4 = GetTotalAmount0(&DAT_100343e8);
      if (0 < iVar4) {
        uVar1 = Trigg(0x11);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = CheckProduction(&DAT_100343e8);
          if ((uVar1 & 0xff) != 0) {
            RunTimer(3,100);
            SetTrigg(0x11,0);
          }
        }
      }
      uVar1 = TimerDoneFirst(3);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10034490,0);
        SelSendTo(2,&DAT_10034480,0x5a,0);
        RunTimer(0x10,300);
        ClearSelection(2);
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(5);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(0x10);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(5,0);
            RunTimer(9,6000);
            FreeTimer(0x10);
            SetTrigg(0x11,1);
            RemoveGroup(&DAT_10034490,&DAT_10034450);
            SelectUnits(&DAT_10034450,0);
            SelSendAndKill(2,&DAT_100346e0,0x41,0);
            ClearSelection(2);
            SetTrigg(10,1);
          }
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(5);
        if ((uVar1 & 0xff) == 0) {
          iVar4 = GetTotalAmount0(&DAT_10034450);
          if (iVar4 != 0) {
            uVar1 = TimerDoneFirst(9);
            if ((uVar1 & 0xff) == 0) goto LAB_10004e6d;
          }
          FreeTimer(9);
          SetTrigg(5,1);
        }
      }
LAB_10004e6d:
      uVar1 = Trigg(0x14);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x14,0);
        for (local_10 = 0; local_10 < DAT_100344c8; local_10 = local_10 + 1) {
          ProduceUnitFast(&DAT_100343e0,&DAT_10034540,&DAT_100344b8,0);
        }
      }
      iVar4 = GetTotalAmount0(&DAT_100343e0);
      if (0 < iVar4) {
        uVar1 = Trigg(0x12);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = CheckProduction(&DAT_100343e0);
          if ((uVar1 & 0xff) != 0) {
            RunTimer(4,100);
            SetTrigg(0x12,0);
          }
        }
      }
      uVar1 = TimerDoneFirst(4);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100344b8,0);
        SelSendTo(2,&DAT_10034498,0x5a,0);
        RunTimer(0x11,300);
        ClearSelection(2);
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(6);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(0x11);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(6,0);
            FreeTimer(0x11);
            RunTimer(10,6000);
            SetTrigg(0x12,1);
            RemoveGroup(&DAT_100344b8,&DAT_10034468);
            SelectUnits(&DAT_10034468,0);
            SelSendAndKill(2,&DAT_100346c8,0x82,0);
            ClearSelection(2);
            SetTrigg(0x14,1);
          }
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(6);
        if ((uVar1 & 0xff) == 0) {
          iVar4 = GetTotalAmount0(&DAT_10034468);
          if (iVar4 != 0) {
            uVar1 = TimerDoneFirst(10);
            if ((uVar1 & 0xff) == 0) goto LAB_100051bd;
          }
          FreeTimer(10);
          SetTrigg(6,1);
        }
      }
LAB_100051bd:
      uVar1 = Trigg(0x15);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x15,0);
        for (local_14 = 0; local_14 < DAT_100344c8; local_14 = local_14 + 1) {
          ProduceUnitFast(&DAT_10034408,&DAT_10034540,&DAT_100344a8,0);
        }
      }
      iVar4 = GetTotalAmount0(&DAT_10034408);
      if (0 < iVar4) {
        uVar1 = Trigg(0x13);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = CheckProduction(&DAT_10034408);
          if ((uVar1 & 0xff) != 0) {
            RunTimer(5,100);
            SetTrigg(0x13,0);
          }
        }
      }
      uVar1 = TimerDoneFirst(5);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100344a8,0);
        SelSendTo(2,&DAT_10034488,0x96,0);
        RunTimer(0x12,1000);
        ClearSelection(2);
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x16);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(0x12);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0x16,0);
            FreeTimer(0x12);
            RunTimer(0xb,8000);
            SetTrigg(0x13,1);
            RemoveGroup(&DAT_100344a8,&DAT_10034460);
            SelectUnits(&DAT_10034460,0);
            SelSendAndKill(2,&DAT_100346d0,0x82,0);
            ClearSelection(2);
            SetTrigg(0x15,1);
          }
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x16);
        if ((uVar1 & 0xff) == 0) {
          iVar4 = GetTotalAmount0(&DAT_10034460);
          if (iVar4 != 0) {
            uVar1 = TimerDoneFirst(0xb);
            if ((uVar1 & 0xff) == 0) goto LAB_10005510;
          }
          FreeTimer(0xb);
          SetTrigg(0x16,1);
        }
      }
    }
  }
LAB_10005510:
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10034768);
    if (iVar4 == 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE7");
      DisableMission(0x44);
      EnableMission(0x45);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsByNation(&DAT_10034768,0);
    if (0 < iVar4) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE7A");
      DisableMission(0x44);
      EnableMission(0x45);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10034798);
    if (iVar4 == 0) {
      iVar4 = GetTotalAmount0(&DAT_100343e8);
      if (iVar4 == 0) {
        iVar4 = GetTotalAmount0(&DAT_100343e0);
        if (iVar4 == 0) {
          iVar4 = GetTotalAmount0(&DAT_10034408);
          if (iVar4 == 0) {
            SetTrigg(7,0);
            ShowPage("#PAGE6");
            DisableMission(0x46);
            EnableMission(0x47);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x1a,0);
    CreateObject0(&DAT_10034470,&DAT_10034438,&DAT_10034448,1,&DAT_10034708,0x5a);
    CreateObject0(&DAT_100345d0,&DAT_10034438,&DAT_10034448,1,&DAT_10034710,0x5a);
    CreateObject0(&DAT_100345c8,&DAT_10034438,&DAT_10034448,1,&DAT_10034718,0x5a);
    CreateObject0(&DAT_10034600,&DAT_10034438,&DAT_10034448,1,&DAT_10034720,0x5a);
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100343f8);
    if (iVar4 == 0) {
      iVar4 = GetTotalAmount0(&DAT_10034428);
      if (iVar4 == 0) {
        iVar4 = GetTotalAmount0(&DAT_10034418);
        if (iVar4 == 0) {
          iVar4 = GetTotalAmount0(&DAT_10034430);
          if (iVar4 == 0) {
            SetTrigg(0x1b,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x1b);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x18);
        if ((uVar1 & 0xff) != 0) {
          iVar4 = GetUnitsAmount0(&DAT_10034658,0);
          if (iVar4 < 1) {
            iVar4 = GetUnitsAmount0(&DAT_10034660,0);
            if (iVar4 < 1) goto LAB_10005996;
          }
          SetTrigg(0x18,0);
          ShowPage("#PAGE3");
          ShowPage("#PAGE4");
        }
      }
    }
  }
LAB_10005996:
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x1b);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(7);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x1c);
          if ((uVar1 & 0xff) != 0) {
            GetTotalAmount0(&DAT_10034750);
            if (iVar4 == 0) {
              SetTrigg(0x1c,0);
              SelectUnits(&DAT_10034470,0);
              SelSendTo(1,&DAT_100346f8,0xe1,0);
              SelectUnits(&DAT_10034470,0);
              SetStandGround(1,1);
              ClearSelection(1);
            }
            else {
              SelectUnits(&DAT_10034470,0);
              SelAttackGroup(1,&DAT_10034750);
              ClearSelection(1);
            }
          }
          uVar1 = Trigg(0x1d);
          if ((uVar1 & 0xff) != 0) {
            GetTotalAmount0(&DAT_100345b0);
            if (iVar4 == 0) {
              SetTrigg(0x1d,0);
              SelectUnits(&DAT_100345d0,0);
              SelSendTo(1,&DAT_10034700,0xe1,0);
              SelectUnits(&DAT_100345d0,0);
              SetStandGround(1,1);
              ClearSelection(1);
            }
            else {
              SelectUnits(&DAT_100345d0,0);
              SelAttackGroup(1,&DAT_100345b0);
              ClearSelection(1);
            }
          }
          uVar1 = Trigg(0x1e);
          if ((uVar1 & 0xff) != 0) {
            GetTotalAmount0(&DAT_100345c0);
            if (iVar4 == 0) {
              SetTrigg(0x1e,0);
              SelectUnits(&DAT_100345c8,0);
              SelSendTo(1,&DAT_100346e8,0xe1,0);
              SelectUnits(&DAT_100345c8,0);
              SetStandGround(1,1);
              ClearSelection(1);
            }
            else {
              SelectUnits(&DAT_100345c8,0);
              SelAttackGroup(1,&DAT_100345c0);
              ClearSelection(1);
            }
          }
          uVar1 = Trigg(0x1f);
          if ((uVar1 & 0xff) != 0) {
            GetTotalAmount0(&DAT_10034758);
            if (iVar4 == 0) {
              SetTrigg(0x1f,0);
              SelectUnits(&DAT_10034600,0);
              SelSendTo(1,&DAT_100346f0,0xe1,0);
              SelectUnits(&DAT_10034600,0);
              SetStandGround(1,1);
              ClearSelection(1);
            }
            else {
              SelectUnits(&DAT_10034600,0);
              SelAttackGroup(1,&DAT_10034758);
              ClearSelection(1);
            }
          }
          iVar4 = GetTotalAmount0(&DAT_100343f8);
          if (0 < iVar4) {
            iVar4 = GetTotalAmount0(&DAT_10034470);
            if (iVar4 < 3) {
              CreateObject0(&DAT_100345f8,&DAT_10034550,&DAT_10034448,1,&DAT_10034708,0x5a);
              RemoveGroup(&DAT_100345f8,&DAT_10034470);
              SetTrigg(0x1c,1);
            }
          }
          iVar4 = GetTotalAmount0(&DAT_10034428);
          if (0 < iVar4) {
            iVar4 = GetTotalAmount0(&DAT_100345d0);
            if (iVar4 < 3) {
              CreateObject0(&DAT_100345f8,&DAT_10034550,&DAT_10034448,1,&DAT_10034710,0x5a);
              RemoveGroup(&DAT_100345f8,&DAT_100345d0);
              SetTrigg(0x1d,1);
            }
          }
          iVar4 = GetTotalAmount0(&DAT_10034418);
          if (0 < iVar4) {
            iVar4 = GetTotalAmount0(&DAT_100345c8);
            if (iVar4 < 3) {
              CreateObject0(&DAT_100345f8,&DAT_10034550,&DAT_10034448,1,&DAT_10034718,0x5a);
              RemoveGroup(&DAT_100345f8,&DAT_100345c8);
              SetTrigg(0x1e,1);
            }
          }
          iVar4 = GetTotalAmount0(&DAT_10034430);
          if (0 < iVar4) {
            iVar4 = GetTotalAmount0(&DAT_10034600);
            if (iVar4 < 3) {
              CreateObject0(&DAT_100345f8,&DAT_10034550,&DAT_10034448,1,&DAT_10034720,0x5a);
              RemoveGroup(&DAT_100345f8,&DAT_10034600);
              SetTrigg(0x1f,1);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(4);
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
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
