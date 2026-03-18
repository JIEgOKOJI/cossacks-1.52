#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002d604[] = "G4";
char DAT_1002d608[] = "G3";
char DAT_1002d60c[] = "G2";
char DAT_1002d610[] = "G1";
char DAT_1002d614[] = "Z11";
char DAT_1002d618[] = "Z10";
char DAT_1002d61c[] = "Z9";
char DAT_1002d620[] = "Z8";
char DAT_1002d624[] = "Z7";
char DAT_1002d628[] = "Z6";
char DAT_1002d62c[] = "Z5";
char DAT_1002d630[] = "Z4";
char DAT_1002d634[] = "Z3";
char DAT_1002d638[] = "Z2";
char DAT_1002d63c[] = "Z1";
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
long long DAT_10032538 = 0;
long long DAT_10032540 = 0;
long long DAT_10032548 = 0;
long long DAT_10032550 = 0;
long long DAT_10032558 = 0;
long long DAT_10032560 = 0;
long long DAT_10032568 = 0;
long long DAT_10032570 = 0;
long long DAT_10032578 = 0;
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
long long DAT_100325d0 = 0;
long long DAT_100325d8 = 0;
long long DAT_100325e0 = 0;
long long DAT_100325e8 = 0;
long long DAT_100325f0 = 0;
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
long long DAT_10032720 = 0;
long long DAT_10032728 = 0;
long long DAT_10032730 = 0;
long long DAT_10032738 = 0;
long long DAT_10032740 = 0;
long long DAT_10032748 = 0;
long long DAT_10032750 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10032518,DAT_1002d63c);
  RegisterZone(&DAT_10032520,DAT_1002d638);
  RegisterZone(&DAT_10032528,DAT_1002d634);
  RegisterZone(&DAT_10032530,DAT_1002d630);
  RegisterZone(&DAT_10032538,DAT_1002d62c);
  RegisterZone(&DAT_10032540,DAT_1002d628);
  RegisterZone(&DAT_10032548,DAT_1002d624);
  RegisterZone(&DAT_10032550,DAT_1002d620);
  RegisterZone(&DAT_10032558,DAT_1002d61c);
  RegisterZone(&DAT_10032560,DAT_1002d618);
  RegisterZone(&DAT_10032568,DAT_1002d614);
  RegisterUnits(&DAT_100324f8,DAT_1002d610);
  RegisterUnits(&DAT_10032500,DAT_1002d60c);
  RegisterUnits(&DAT_10032508,DAT_1002d608);
  RegisterUnits(&DAT_10032510,DAT_1002d604);
  RegisterUnitType(&DAT_10032430,"Russki_Center(RU)");
  RegisterUnitType(&DAT_10032448,"ruskaia_izba(RU)");
  RegisterUnitType(&DAT_10032460,"Melnica_rus(RU)");
  RegisterUnitType(&DAT_10032478,"Sclad3(RU)");
  RegisterUnitType(&DAT_10032488,"shahta(RU)");
  RegisterUnitType(&DAT_10032498,"Kuznica(RU)");
  RegisterUnitType(&DAT_100324a0,"konushnia(RU)");
  RegisterUnitType(&DAT_100324a8,"Cerkov_RU(RU)");
  RegisterUnitType(&DAT_100324b8,"akademia_RU(RU)");
  RegisterUnitType(&DAT_100323e0,"Dip_korpus_RU(RU)");
  RegisterUnitType(&DAT_100323e8,"Rus_Strel_Dom(RU)");
  RegisterUnitType(&DAT_100323f0,"Kazarma(RU)");
  RegisterUnitType(&DAT_100323f8,"artileri_depo(RU)");
  RegisterUnitType(&DAT_10032408,"Rinok(RU)");
  RegisterUnitType(&DAT_10032418,"PorR(RU)");
  RegisterUnitType(&DAT_10032428,"Pik_rus(RU)");
  RegisterUnitType(&DAT_10032440,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_10032458,"WALL_KR(RU)");
  RegisterUnitType(&DAT_10032470,"Bashnia_2(RU)");
  RegisterUnitType(&DAT_10032400,"Tiagoli_koval_rus(RU)");
  RegisterUnitType(&DAT_10032410,"Strelec(RU)");
  RegisterUnitType(&DAT_10032420,"Pehota_turki_DIP(RU)");
  RegisterUnitType(&DAT_10032438,"Tiagoli_kozak(RU)");
  RegisterUnitType(&DAT_10032450,"Kozak_loshad_DIP(RU)");
  RegisterUnitType(&DAT_10032468,"Russki_Komandir(RU)");
  RegisterUnitType(&DAT_10032480,"Barabanshik_1(RU)");
  RegisterUnitType(&DAT_10032490,"Kreposnoi(RU)");
  RegisterFormation(&DAT_100324f0,"#LINEMORB20");
  RegisterUpgrade(&DAT_100325d0,"Strelec(RU)ATTACK");
  RegisterUpgrade(&DAT_100325f0,"Strelec(RU)SHIELD");
  RegisterUpgrade(&DAT_10032610,"Pik_rus(RU)ATTACK");
  RegisterUpgrade(&DAT_10032628,"Pik_rus(RU)SHIELD");
  RegisterUpgrade(&DAT_10032640,"Tiagoli_koval_rus(RU)ATTACK");
  RegisterUpgrade(&DAT_10032660,"Tiagoli_koval_rus(RU)SHIELD");
  RegisterUpgrade(&DAT_10032680,"Tiagoli_kozak(RU)ATTACK");
  RegisterUpgrade(&DAT_10032698,"Tiagoli_kozak(RU)SHIELD");
  RegisterUpgrade(&DAT_100326b0,"KUZ01RU");
  RegisterUpgrade(&DAT_10032570,"KUZ02RU");
  RegisterUpgrade(&DAT_10032578,"KUZ03RU");
  RegisterUpgrade(&DAT_10032580,"KUZ05RU");
  RegisterUpgrade(&DAT_10032588,"KUZ06RU");
  RegisterUpgrade(&DAT_10032598,"MAINRU");
  RegisterUpgrade(&DAT_100325a8,"Barabanshik_1(RU)SHIELD");
  RegisterUpgrade(&DAT_100325b8,"Russki_Komandir(RU)ATTACK");
  RegisterUpgrade(&DAT_100325c8,"Russki_Komandir(RU)SHIELD");
  RegisterUpgrade(&DAT_100325e8,"AKA01RU");
  RegisterUpgrade(&DAT_10032608,"AKA02RU");
  RegisterUpgrade(&DAT_10032590,"AKA03RU");
  RegisterUpgrade(&DAT_100325a0,"AKA04RU");
  RegisterUpgrade(&DAT_100325b0,"AKA05RU");
  RegisterUpgrade(&DAT_100325c0,"AKA06RU");
  RegisterUpgrade(&DAT_100325e0,"AKA07RU");
  RegisterUpgrade(&DAT_10032600,"AKA08RU");
  RegisterUpgrade(&DAT_10032620,"AKA09RU");
  RegisterUpgrade(&DAT_10032638,"AKA10RU");
  RegisterUpgrade(&DAT_10032658,"AKA11RU");
  RegisterUpgrade(&DAT_10032678,"AKA12RU");
  RegisterUpgrade(&DAT_100325d8,"AKA13RU");
  RegisterUpgrade(&DAT_100325f8,"AKA14RU");
  RegisterUpgrade(&DAT_10032618,"AKA15RU");
  RegisterUpgrade(&DAT_10032630,"AKA16RU");
  RegisterUpgrade(&DAT_10032650,"AKA17RU");
  RegisterUpgrade(&DAT_10032670,"AKA18RU");
  RegisterUpgrade(&DAT_10032690,"AKA19RU");
  RegisterUpgrade(&DAT_100326a8,"AKA20RU");
  RegisterUpgrade(&DAT_100326c8,"AKA21RU");
  RegisterUpgrade(&DAT_100326e0,"AKA22RU");
  RegisterUpgrade(&DAT_10032648,"AKA23RU");
  RegisterUpgrade(&DAT_10032668,"AKA24RU");
  RegisterUpgrade(&DAT_10032688,"AKA25RU");
  RegisterUpgrade(&DAT_100326a0,"AKA26RU");
  RegisterUpgrade(&DAT_100326c0,"AKA27RU");
  RegisterUpgrade(&DAT_100326d8,"AKA28RU");
  RegisterUpgrade(&DAT_100326f0,"AKA29RU");
  RegisterUpgrade(&DAT_10032700,"AKA30RU");
  RegisterUpgrade(&DAT_10032718,"AKA31RU");
  RegisterUpgrade(&DAT_10032730,"AKA32RU");
  RegisterUpgrade(&DAT_100326b8,"AKA33RU");
  RegisterUpgrade(&DAT_100326d0,"AKA34RU");
  RegisterUpgrade(&DAT_100326e8,"AKA35RU");
  RegisterUpgrade(&DAT_100326f8,"AKA36RU");
  RegisterUpgrade(&DAT_10032710,"Melnica_rus(RU)GETRES");
  RegisterUpgrade(&DAT_10032728,"PRS(RU)INSIDE");
  RegisterUpgrade(&DAT_10032738,"HEALINGVIC(RU)");
  RegisterUpgrade(&DAT_10032740,"NEWKUTT(RU)");
  RegisterUpgrade(&DAT_10032748,"NEWKECH(RU)");
  RegisterUpgrade(&DAT_10032750,"NEWFREG(RU)");
  RegisterUpgrade(&DAT_10032708,"NEWVICT(RU)");
  RegisterUpgrade(&DAT_10032720,"shahta(RU)INSIDE5");
  RegisterDynGroup(&DAT_100324b0);
  RegisterDynGroup(&DAT_100324c0);
  RegisterDynGroup(&DAT_100324c8);
  RegisterDynGroup(&DAT_100324d0);
  RegisterDynGroup(&DAT_100324d8);
  RegisterDynGroup(&DAT_100324e0);
  RegisterDynGroup(&DAT_100324e8);
  RegisterVar(&DAT_100324b0,8);
  RegisterVar(&DAT_100324c0,8);
  RegisterVar(&DAT_100324c8,8);
  RegisterVar(&DAT_100324d0,8);
  RegisterVar(&DAT_100324d8,8);
  RegisterVar(&DAT_100324e0,8);
  RegisterVar(&DAT_100324e8,8);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  ChangeFriends(5,0x20);
  uStack_8 = 0x10001da7;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    DisableUpgrade(0,&DAT_100325d0);
    DisableUpgrade(0,&DAT_100325f0);
    DisableUpgrade(0,&DAT_10032610);
    DisableUpgrade(0,&DAT_10032628);
    DisableUpgrade(0,&DAT_10032640);
    DisableUpgrade(0,&DAT_10032660);
    DisableUpgrade(0,&DAT_10032680);
    DisableUpgrade(0,&DAT_10032698);
    DisableUpgrade(0,&DAT_100326b0);
    DisableUpgrade(0,&DAT_10032570);
    DisableUpgrade(0,&DAT_10032578);
    DisableUpgrade(0,&DAT_10032580);
    DisableUpgrade(0,&DAT_10032588);
    DisableUpgrade(0,&DAT_10032598);
    DisableUpgrade(0,&DAT_100325a8);
    DisableUpgrade(0,&DAT_100325b8);
    DisableUpgrade(0,&DAT_100325c8);
    DisableUpgrade(0,&DAT_100325e8);
    DisableUpgrade(0,&DAT_10032608);
    DisableUpgrade(0,&DAT_10032590);
    DisableUpgrade(0,&DAT_100325a0);
    DisableUpgrade(0,&DAT_100325b0);
    DisableUpgrade(0,&DAT_100325c0);
    DisableUpgrade(0,&DAT_100325e0);
    DisableUpgrade(0,&DAT_10032600);
    DisableUpgrade(0,&DAT_10032620);
    DisableUpgrade(0,&DAT_10032638);
    DisableUpgrade(0,&DAT_10032658);
    DisableUpgrade(0,&DAT_10032678);
    DisableUpgrade(0,&DAT_100325d8);
    DisableUpgrade(0,&DAT_100325f8);
    DisableUpgrade(0,&DAT_10032618);
    DisableUpgrade(0,&DAT_10032630);
    DisableUpgrade(0,&DAT_10032650);
    DisableUpgrade(0,&DAT_10032670);
    DisableUpgrade(0,&DAT_10032690);
    DisableUpgrade(0,&DAT_100326a8);
    DisableUpgrade(0,&DAT_100326c8);
    DisableUpgrade(0,&DAT_100326e0);
    DisableUpgrade(0,&DAT_10032648);
    DisableUpgrade(0,&DAT_10032668);
    DisableUpgrade(0,&DAT_10032688);
    DisableUpgrade(0,&DAT_100326a0);
    DisableUpgrade(0,&DAT_100326c0);
    DisableUpgrade(0,&DAT_100326d8);
    DisableUpgrade(0,&DAT_100326f0);
    DisableUpgrade(0,&DAT_10032700);
    DisableUpgrade(0,&DAT_10032718);
    DisableUpgrade(0,&DAT_10032730);
    DisableUpgrade(0,&DAT_100326b8);
    DisableUpgrade(0,&DAT_100326d0);
    DisableUpgrade(0,&DAT_100326e8);
    DisableUpgrade(0,&DAT_100326f8);
    DisableUpgrade(0,&DAT_10032710);
    DisableUpgrade(0,&DAT_10032728);
    DisableUpgrade(0,&DAT_10032738);
    DisableUpgrade(0,&DAT_10032740);
    DisableUpgrade(0,&DAT_10032748);
    DisableUpgrade(0,&DAT_10032750);
    DisableUpgrade(0,&DAT_10032708);
    EnableUnit(0,&DAT_10032430,0);
    EnableUnit(0,&DAT_10032448,0);
    EnableUnit(0,&DAT_10032460,0);
    EnableUnit(0,&DAT_10032478,0);
    EnableUnit(0,&DAT_10032488,0);
    EnableUnit(0,&DAT_10032498,0);
    EnableUnit(0,&DAT_100324a0,0);
    EnableUnit(0,&DAT_100324a8,0);
    EnableUnit(0,&DAT_100324b8,0);
    EnableUnit(0,&DAT_100323e0,0);
    EnableUnit(0,&DAT_100323e8,0);
    EnableUnit(0,&DAT_100323f0,0);
    EnableUnit(0,&DAT_100323f8,0);
    EnableUnit(0,&DAT_10032408,0);
    EnableUnit(0,&DAT_10032418,0);
    EnableUnit(0,&DAT_10032440,0);
    EnableUnit(0,&DAT_10032458,0);
    EnableUnit(0,&DAT_10032470,0);
    SetResource(0,3,0x1a7c);
    SetResource(0,1,0x4b0);
    SetResource(0,4,0x546);
    SetResource(0,2,0x8fc);
    SetResource(0,0,0xabe);
    SetResource(0,5,0x622);
    TakeWood(&DAT_100324f8);
    TakeFood(&DAT_10032508);
    TakeStone(&DAT_10032500);
    RunTimer(1,200);
    SetTrigg(3,0);
    SetTrigg(4,0);
    SetTrigg(5,0);
    SetTrigg(6,0);
    SetTrigg(7,0);
    SetTrigg(8,0);
    SetTrigg(9,0);
    SetTrigg(10,0);
    SetTrigg(0xb,0);
    SetTrigg(0xc,0);
    SetTrigg(0xd,0);
    SetTrigg(0xe,0);
    SetTrigg(0xf,0);
    SetTrigg(0x10,0);
    SetTrigg(0x11,0);
    SetTrigg(0x12,0);
    SetTrigg(0x13,0);
    SetTrigg(0x14,0);
    SetTrigg(0x15,0);
    SetTrigg(0x16,0);
    SetTrigg(0x17,0);
    SetTrigg(0x5a,0);
    SetTrigg(0x5b,0);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x48);
    DisableMission(0x49);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
    DisableMission(0x50);
    DisableMission(0x51);
    DisableMission(0x52);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_100324b0,0);
      ClearSelection(0);
      SetTrigg(2,0);
      ShowPage("#PAGE1");
      SetStartPoint(&DAT_10032538);
      SelectUnits1(4,&DAT_10032510,0);
      SelSendTo(4,&DAT_10032548,200,0);
      ClearSelection(4);
      SelectUnits1(0,&DAT_100324b0,0);
      SetTrigg(3,0);
      SetTrigg(0x5a,0);
      RunTimer(2,900);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5a,0);
      SaveSelectedUnits(0,&DAT_100324b0,0);
      ClearSelection(0);
      SelectUnits1(4,&DAT_10032510,0);
      SelSendTo(4,&DAT_10032520,200,0);
      ClearSelection(4);
      SelectUnits1(0,&DAT_100324b0,0);
      SetTrigg(0x5b,0);
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10032520,4);
    if (0x1e < iVar2) {
      SetTrigg(0x5b,0);
      SelectUnits1(4,&DAT_10032510,0);
      SelErase(4);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(3,0);
      ShowPage("#PAGE2");
      SetTrigg(4,0);
      RunTimer(3,600);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(4,0);
      ShowPage("#PAGE3");
      ShowPage("#PAGE4");
      SetTrigg(5,0);
      RunTimer(4,1000);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      EnableMission(0x42);
      SetStartPoint(&DAT_10032528);
      EnableUnit(0,&DAT_10032418,1);
      SetTrigg(6,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10032418,0);
    if (0 < iVar2) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
      DisableMission(0x42);
      EnableMission(0x4b);
      EnableMission(0x43);
      EnableUnit(0,&DAT_10032418,0);
      EnableUnit(0,&DAT_100323f8,1);
      SetTrigg(7,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100323f8,0);
    if (0 < iVar2) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
      DisableMission(0x43);
      EnableMission(0x4c);
      EnableMission(0x44);
      EnableUnit(0,&DAT_100323f8,0);
      EnableUnit(0,&DAT_100323e0,1);
      SetTrigg(8,0);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100323e0,0);
    if (0 < iVar2) {
      SetTrigg(8,0);
      RunTimer(5,1000);
      DisableMission(0x44);
      EnableMission(0x4d);
      EnableMission(0x45);
      EnableUnit(0,&DAT_100323e0,0);
      SetTrigg(9,0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      SaveSelectedUnits(0,&DAT_100324b0,0);
      ClearSelection(0);
      CreateObject0(&DAT_100324c0,&DAT_100324f0,&DAT_10032420,5,&DAT_10032540,0);
      CreateObject0(&DAT_100324c8,&DAT_100324f0,&DAT_10032420,5,&DAT_10032548,0);
      CreateObject0(&DAT_100324d0,&DAT_100324f0,&DAT_10032420,5,&DAT_10032550,0);
      CreateObject0(&DAT_100324d8,&DAT_100324f0,&DAT_10032450,5,&DAT_10032558,0);
      CreateObject0(&DAT_100324e0,&DAT_100324f0,&DAT_10032450,5,&DAT_10032560,0);
      CreateObject0(&DAT_100324e8,&DAT_100324f0,&DAT_10032450,5,&DAT_10032568,0);
      SelectUnits1(5,&DAT_100324c0,0);
      SelectUnits1(5,&DAT_100324c8,1);
      SelectUnits1(5,&DAT_100324d0,1);
      SelectUnits1(5,&DAT_100324d8,1);
      SelectUnits1(5,&DAT_100324e0,1);
      SelectUnits1(5,&DAT_100324e8,1);
      SelSendAndKill(5,&DAT_10032518,0xb4,0);
      ClearSelection(5);
      SelectUnits1(1,&DAT_100324b0,0);
      SetTrigg(10,0);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100324c0);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount0(&DAT_100324c8);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount0(&DAT_100324d0);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount0(&DAT_100324d8);
          if (iVar2 == 0) {
            iVar2 = GetTotalAmount0(&DAT_100324e0);
            if (iVar2 == 0) {
              iVar2 = GetTotalAmount0(&DAT_100324e8);
              if (iVar2 == 0) {
                SetTrigg(10,0);
                ShowPage("#PAGE8");
                DisableMission(0x45);
                SetTrigg(0xb,0);
                RunTimer(6,600);
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE9");
      ShowPage("#PAGE10");
      EnableMission(0x46);
      SetTrigg(0xc,0);
      SetTrigg(0xd,0);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100324b0,0);
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100324b0,&DAT_10032460,0);
    if (0 < iVar2) {
      SetTrigg(0xd,0);
      SetTrigg(0xc,0);
      ShowPage("#PAGE11");
      EnableUpgrade(0,&DAT_10032710);
      EnableUpgrade(0,&DAT_100326b0);
      DisableMission(0x45);
      EnableMission(0x46);
      SetTrigg(0x15,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_10032710,0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x15,0);
      ShowPage("#PAGE17");
      SetTrigg(0xe,0);
      SetTrigg(0xf,0);
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100324b0,0);
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100324b0,&DAT_10032498,0);
    if (0 < iVar2) {
      SetTrigg(0xe,0);
      SetTrigg(0xf,0);
      ShowPage("#PAGE12");
      EnableUpgrade(0,&DAT_100325e8);
      EnableUpgrade(0,&DAT_10032608);
      EnableUpgrade(0,&DAT_10032590);
      EnableUpgrade(0,&DAT_100325a0);
      DisableMission(0x46);
      EnableMission(0x49);
      SetTrigg(0x16,0);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_100326b0,0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x16,0);
      ShowPage("#PAGE18");
      SetTrigg(0x10,0);
      SetTrigg(0x11,0);
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100324b0,0);
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100324b0,&DAT_100324b8,0);
    if (0 < iVar2) {
      SetTrigg(0x10,0);
      SetTrigg(0x11,0);
      DisableMission(0x49);
      ShowPage("#PAGE13");
      EnableMission(0x4e);
      AddResource(0,0,47000);
      AddResource(0,1,4000);
      SetTrigg(0x12,0);
      RunTimer(7,1000);
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = IsUpgradeDone(&DAT_100325e8,0);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = IsUpgradeDone(&DAT_10032608,0);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = IsUpgradeDone(&DAT_10032590,0);
          if ((uVar1 & 0xff) != 0) {
            uVar1 = IsUpgradeDone(&DAT_100325a0,0);
            if ((uVar1 & 0xff) != 0) {
              ClearSelection(0);
              SetTrigg(0x12,0);
              EnableMission(0x4f);
              EnableMission(0x50);
              DisableMission(0x4e);
              EnableUpgrade(0,&DAT_10032600);
              EnableUpgrade(0,&DAT_10032648);
              EnableUpgrade(0,&DAT_10032668);
              EnableUpgrade(0,&DAT_100326e0);
              ShowPage("#PAGE14");
              AddResource(0,1,0xdac);
              AddResource(0,3,9000);
              AddResource(0,4,3000);
              AddResource(0,5,12000);
              SetTrigg(0x13,0);
              RunTimer(8,1000);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = IsUpgradeDone(&DAT_10032600,0);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = IsUpgradeDone(&DAT_10032648,0);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = IsUpgradeDone(&DAT_10032668,0);
          if ((uVar1 & 0xff) != 0) {
            uVar1 = IsUpgradeDone(&DAT_100326e0,0);
            if ((uVar1 & 0xff) != 0) {
              SetTrigg(0x13,0);
              ShowPage("#PAGE15");
              ShowPage("#PAGE19");
              DisableMission(0x50);
              EnableMission(0x51);
              EnableMission(0x52);
              AddResource(0,1,82000);
              AddResource(0,3,0x28870);
              AddResource(0,4,16000);
              AddResource(0,0,20000);
              SetTrigg(0x17,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetMaxInside(0);
    if (0x1b < iVar2) {
      SetTrigg(0x17,0);
      SetTrigg(0x14,0);
      DisableMission(0x52);
      ShowPage("#PAGE20");
      RunTimer(9,2000);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x14,0);
      ShowPage("#PAGE16");
      ShowVictory();
    }
  }
  uVar1 = Trigg(0x52);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032400,0);
    if (9 < iVar2) {
      SetTrigg(0x52,0);
      SetTrigg(0x53,0);
      EnableUnit(0,&DAT_10032400,0);
    }
  }
  uVar1 = Trigg(0x53);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032400,0);
    if (iVar2 < 10) {
      SetTrigg(0x53,0);
      SetTrigg(0x52,0);
      EnableUnit(0,&DAT_10032400,1);
    }
  }
  uVar1 = Trigg(0x54);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032438,0);
    if (9 < iVar2) {
      SetTrigg(0x54,0);
      SetTrigg(0x55,0);
      EnableUnit(0,&DAT_10032438,0);
    }
  }
  uVar1 = Trigg(0x55);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032438,0);
    if (iVar2 < 10) {
      SetTrigg(0x55,0);
      SetTrigg(0x54,0);
      EnableUnit(0,&DAT_10032438,1);
    }
  }
  uVar1 = Trigg(0x56);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032428,0);
    if (0x59 < iVar2) {
      SetTrigg(0x56,0);
      SetTrigg(0x57,0);
      EnableUnit(0,&DAT_10032428,0);
    }
  }
  uVar1 = Trigg(0x57);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032428,0);
    if (iVar2 < 0x5a) {
      SetTrigg(0x57,0);
      SetTrigg(0x56,0);
      EnableUnit(0,&DAT_10032428,1);
    }
  }
  uVar1 = Trigg(0x58);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032410,0);
    if (0x13 < iVar2) {
      SetTrigg(0x58,0);
      SetTrigg(0x59,0);
      EnableUnit(0,&DAT_10032410,0);
    }
  }
  uVar1 = Trigg(0x59);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032410,0);
    if (iVar2 < 0x14) {
      SetTrigg(0x59,0);
      SetTrigg(0x58,0);
      EnableUnit(0,&DAT_10032410,1);
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032468,0);
    if (9 < iVar2) {
      SetTrigg(0x5d,0);
      SetTrigg(0x5e,0);
      EnableUnit(0,&DAT_10032468,0);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032468,0);
    if (iVar2 < 10) {
      SetTrigg(0x5e,0);
      SetTrigg(0x5d,0);
      EnableUnit(0,&DAT_10032468,1);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032480,0);
    if (9 < iVar2) {
      SetTrigg(0x5f,0);
      SetTrigg(0x60,0);
      EnableUnit(0,&DAT_10032480,0);
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032480,0);
    if (iVar2 < 10) {
      SetTrigg(0x60,0);
      SetTrigg(0x5f,0);
      EnableUnit(0,&DAT_10032480,1);
    }
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032490,0);
    if (0xa0 < iVar2) {
      SetTrigg(0x61,0);
      SetTrigg(0x62,0);
      EnableUnit(0,&DAT_10032490,0);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032490,0);
    if (iVar2 < 0xa0) {
      SetTrigg(0x62,0);
      SetTrigg(0x61,0);
      EnableUnit(0,&DAT_10032490,1);
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(99,0);
      ShowPage("#PAGE100");
    }
  }
  uStack_8 = 0x10004b92;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
