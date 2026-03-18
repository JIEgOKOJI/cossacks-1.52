#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002d55c[] = "G3";
char DAT_1002d560[] = "G2";
char DAT_1002d564[] = "G1";
char DAT_1002d568[] = "Z8";
char DAT_1002d56c[] = "Z7";
char DAT_1002d570[] = "Z6";
char DAT_1002d574[] = "Z5";
char DAT_1002d578[] = "Z4";
char DAT_1002d57c[] = "Z3";
char DAT_1002d580[] = "Z2";
char DAT_1002d584[] = "Z1";
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterFormation(&DAT_100324f0,"#LINEMORB10");
  RegisterFormation(&DAT_100324f8,"#LINE40PUS");
  RegisterFormation(&DAT_10032500,"#LINEMORB20");
  RegisterFormation(&DAT_10032508,"#LINEMORB5");
  RegisterZone(&DAT_10032528,DAT_1002d584);
  RegisterZone(&DAT_10032530,DAT_1002d580);
  RegisterZone(&DAT_10032538,DAT_1002d57c);
  RegisterZone(&DAT_10032540,DAT_1002d578);
  RegisterZone(&DAT_10032548,DAT_1002d574);
  RegisterZone(&DAT_10032550,DAT_1002d570);
  RegisterZone(&DAT_10032558,DAT_1002d56c);
  RegisterZone(&DAT_10032560,DAT_1002d568);
  RegisterUnits(&DAT_10032510,DAT_1002d564);
  RegisterUnits(&DAT_10032518,DAT_1002d560);
  RegisterUnits(&DAT_10032520,DAT_1002d55c);
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
  RegisterUpgrade(&DAT_100325c8,"Strelec(RU)ATTACK");
  RegisterUpgrade(&DAT_100325e8,"Strelec(RU)SHIELD");
  RegisterUpgrade(&DAT_10032608,"Pik_rus(RU)ATTACK");
  RegisterUpgrade(&DAT_10032620,"Pik_rus(RU)SHIELD");
  RegisterUpgrade(&DAT_10032638,"Tiagoli_koval_rus(RU)ATTACK");
  RegisterUpgrade(&DAT_10032658,"Tiagoli_koval_rus(RU)SHIELD");
  RegisterUpgrade(&DAT_10032678,"Tiagoli_kozak(RU)ATTACK");
  RegisterUpgrade(&DAT_10032690,"Tiagoli_kozak(RU)SHIELD");
  RegisterUpgrade(&DAT_100326a8,"KUZ01RU");
  RegisterUpgrade(&DAT_10032568,"KUZ02RU");
  RegisterUpgrade(&DAT_10032570,"KUZ03RU");
  RegisterUpgrade(&DAT_10032578,"KUZ05RU");
  RegisterUpgrade(&DAT_10032580,"KUZ06RU");
  RegisterUpgrade(&DAT_10032590,"MAINRU");
  RegisterUpgrade(&DAT_100325a0,"Barabanshik_1(RU)SHIELD");
  RegisterUpgrade(&DAT_100325b0,"Russki_Komandir(RU)ATTACK");
  RegisterUpgrade(&DAT_100325c0,"Russki_Komandir(RU)SHIELD");
  RegisterUpgrade(&DAT_100325e0,"AKA01RU");
  RegisterUpgrade(&DAT_10032600,"AKA02RU");
  RegisterUpgrade(&DAT_10032588,"AKA03RU");
  RegisterUpgrade(&DAT_10032598,"AKA04RU");
  RegisterUpgrade(&DAT_100325a8,"AKA05RU");
  RegisterUpgrade(&DAT_100325b8,"AKA06RU");
  RegisterUpgrade(&DAT_100325d8,"AKA07RU");
  RegisterUpgrade(&DAT_100325f8,"AKA08RU");
  RegisterUpgrade(&DAT_10032618,"AKA09RU");
  RegisterUpgrade(&DAT_10032630,"AKA10RU");
  RegisterUpgrade(&DAT_10032650,"AKA11RU");
  RegisterUpgrade(&DAT_10032670,"AKA12RU");
  RegisterUpgrade(&DAT_100325d0,"AKA13RU");
  RegisterUpgrade(&DAT_100325f0,"AKA14RU");
  RegisterUpgrade(&DAT_10032610,"AKA15RU");
  RegisterUpgrade(&DAT_10032628,"AKA16RU");
  RegisterUpgrade(&DAT_10032648,"AKA17RU");
  RegisterUpgrade(&DAT_10032668,"AKA18RU");
  RegisterUpgrade(&DAT_10032688,"AKA19RU");
  RegisterUpgrade(&DAT_100326a0,"AKA20RU");
  RegisterUpgrade(&DAT_100326c0,"AKA21RU");
  RegisterUpgrade(&DAT_100326d8,"AKA22RU");
  RegisterUpgrade(&DAT_10032640,"AKA23RU");
  RegisterUpgrade(&DAT_10032660,"AKA24RU");
  RegisterUpgrade(&DAT_10032680,"AKA25RU");
  RegisterUpgrade(&DAT_10032698,"AKA26RU");
  RegisterUpgrade(&DAT_100326b8,"AKA27RU");
  RegisterUpgrade(&DAT_100326d0,"AKA28RU");
  RegisterUpgrade(&DAT_100326e8,"AKA29RU");
  RegisterUpgrade(&DAT_100326f8,"AKA30RU");
  RegisterUpgrade(&DAT_10032700,"AKA31RU");
  RegisterUpgrade(&DAT_10032708,"AKA32RU");
  RegisterUpgrade(&DAT_100326b0,"AKA33RU");
  RegisterUpgrade(&DAT_100326c8,"AKA34RU");
  RegisterUpgrade(&DAT_100326e0,"AKA35RU");
  RegisterUpgrade(&DAT_100326f0,"AKA36RU");
  ChangeFriends(0,1);
  uStack_8 = 0x10001c7f;
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
    EnableUnit(0,&DAT_10032410,0);
    EnableUnit(0,&DAT_10032438,0);
    SetResource(0,3,2000);
    SetResource(0,1,100);
    SetResource(0,4,600);
    SetResource(0,2,100);
    SetResource(0,0,100);
    SetResource(0,5,300);
    InitialUpgrade(DAT_1002d564,"Melnica_rus(RU)GETRES");
    DisableUpgrade(0,&DAT_100325c8);
    DisableUpgrade(0,&DAT_100325e8);
    DisableUpgrade(0,&DAT_10032608);
    DisableUpgrade(0,&DAT_10032620);
    DisableUpgrade(0,&DAT_10032638);
    DisableUpgrade(0,&DAT_10032658);
    DisableUpgrade(0,&DAT_10032678);
    DisableUpgrade(0,&DAT_10032690);
    DisableUpgrade(0,&DAT_100326a8);
    DisableUpgrade(0,&DAT_10032568);
    DisableUpgrade(0,&DAT_10032570);
    DisableUpgrade(0,&DAT_10032578);
    DisableUpgrade(0,&DAT_10032580);
    DisableUpgrade(0,&DAT_10032590);
    DisableUpgrade(0,&DAT_100325a0);
    DisableUpgrade(0,&DAT_100325b0);
    DisableUpgrade(0,&DAT_100325c0);
    DisableUpgrade(0,&DAT_100325e0);
    DisableUpgrade(0,&DAT_10032600);
    DisableUpgrade(0,&DAT_10032588);
    DisableUpgrade(0,&DAT_10032598);
    DisableUpgrade(0,&DAT_100325a8);
    DisableUpgrade(0,&DAT_100325b8);
    DisableUpgrade(0,&DAT_100325d8);
    DisableUpgrade(0,&DAT_100325f8);
    DisableUpgrade(0,&DAT_10032618);
    DisableUpgrade(0,&DAT_10032630);
    DisableUpgrade(0,&DAT_10032650);
    DisableUpgrade(0,&DAT_10032670);
    DisableUpgrade(0,&DAT_100325d0);
    DisableUpgrade(0,&DAT_100325f0);
    DisableUpgrade(0,&DAT_10032610);
    DisableUpgrade(0,&DAT_10032628);
    DisableUpgrade(0,&DAT_10032648);
    DisableUpgrade(0,&DAT_10032668);
    DisableUpgrade(0,&DAT_10032688);
    DisableUpgrade(0,&DAT_100326a0);
    DisableUpgrade(0,&DAT_100326c0);
    DisableUpgrade(0,&DAT_100326d8);
    DisableUpgrade(0,&DAT_10032640);
    DisableUpgrade(0,&DAT_10032660);
    DisableUpgrade(0,&DAT_10032680);
    DisableUpgrade(0,&DAT_10032698);
    DisableUpgrade(0,&DAT_100326b8);
    DisableUpgrade(0,&DAT_100326d0);
    DisableUpgrade(0,&DAT_100326e8);
    DisableUpgrade(0,&DAT_100326f8);
    DisableUpgrade(0,&DAT_10032700);
    DisableUpgrade(0,&DAT_10032708);
    DisableUpgrade(0,&DAT_100326b0);
    DisableUpgrade(0,&DAT_100326c8);
    DisableUpgrade(0,&DAT_100326e0);
    DisableUpgrade(0,&DAT_100326f0);
    TakeWood(&DAT_10032510);
    TakeFood(&DAT_10032520);
    TakeStone(&DAT_10032518);
    RunTimer(1,0x96);
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
    SetTrigg(0x18,0);
    SetTrigg(0x19,0);
    SetTrigg(0x1a,0);
    SetTrigg(0x1b,0);
    DisableMission(0x41);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x48);
    DisableMission(0x49);
    DisableMission(0x47);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
    DisableMission(0x50);
    DisableMission(0x52);
    DisableMission(0x53);
    DisableMission(0x54);
    DisableMission(0x51);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      ClearSelection(0);
      SetTrigg(2,0);
      EnableUnit(0,&DAT_10032498,1);
      ShowPage("#PAGE1");
      SetTrigg(3,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10032498,0);
    if (0 < iVar2) {
      SetTrigg(3,0);
      EnableMission(0x41);
      DisableMission(0x4a);
      EnableMission(0x50);
      EnableUnit(0,&DAT_10032498,0);
      ShowPage("#PAGE2");
      EnableUnit(0,&DAT_100323e8,1);
      SetTrigg(4,0);
      RunTimer(2,200);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(4,0);
      ShowPage("#PAGE3");
      SetTrigg(5,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100323e8,0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      ShowPage("#PAGE4");
      EnableMission(0x4b);
      EnableMission(0x51);
      DisableMission(0x41);
      SetTrigg(6,0);
      SetTrigg(9,0);
      RunTimer(3,0x96);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(6,0);
      ShowPage("#PAGE5");
      SetTrigg(7,0);
      RunTimer(4,0x96);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE6");
      SetTrigg(10,0);
      SetTrigg(8,0);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032428,0);
    if (9 < iVar2) {
      SaveSelectedUnits(0,&DAT_100324b0,0);
      SetTrigg(8,0);
      ShowPage("#PAGE7");
      EnableMission(0x42);
      DisableMission(0x4b);
      CreateObject0(&DAT_100324c0,&DAT_100324f0,&DAT_10032420,5,&DAT_10032530,0x6e);
      SelectUnits1(5,&DAT_100324c0,0);
      SelSendAndKill(5,&DAT_10032528,0,0);
      ClearSelection(5);
      SetTrigg(0xc,0);
      SelectUnits1(0,&DAT_100324b0,0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100323e8,0);
    if (1 < iVar2) {
      SetTrigg(9,0);
      EnableUnit(0,&DAT_100323e8,0);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032428,0);
    if (99 < iVar2) {
      SetTrigg(10,0);
      SetTrigg(0xb,0);
      EnableUnit(0,&DAT_10032428,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032428,0);
    if (iVar2 < 100) {
      SetTrigg(10,0);
      SetTrigg(0xb,0);
      EnableUnit(0,&DAT_10032428,1);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100324c0);
    if (iVar2 == 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE8");
      ShowPage("#PAGE9");
      ShowPage("#PAGE23");
      DisableMission(0x42);
      EnableMission(0x4c);
      SetTrigg(0xd,0);
      RunTimer(5,2000);
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_100324b0,0);
      SetTrigg(0xd,0);
      ShowPage("#PAGE10");
      CreateObject0(&DAT_100324c0,&DAT_100324f0,&DAT_10032450,5,&DAT_10032538,0x6e);
      SelectUnits1(5,&DAT_100324c0,0);
      SelSendAndKill(5,&DAT_10032528,0,0);
      RunTimer(6,100);
      SetTrigg(0xe,0);
      ClearSelection(5);
      SelectUnits1(0,&DAT_100324b0,0);
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE15");
      ShowPage("#PAGE24");
      DisableMission(0x4c);
      EnableMission(0x4d);
      SetStartPoint(&DAT_10032540);
      SetTrigg(0xf,0);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100324c0);
    if (iVar2 == 0) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE11");
      EnableUnit(0,&DAT_100324b8,1);
      SetTrigg(0x10,0);
      RunTimer(6,200);
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x10,0);
      DisableMission(0x4d);
      EnableMission(0x43);
      ShowPage("#PAGE12");
      SetTrigg(0x11,0);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100324b8,0);
    if (0 < iVar2) {
      SetTrigg(0x11,0);
      EnableUnit(0,&DAT_100324b8,0);
      ShowPage("#PAGE13");
      DisableMission(0x43);
      EnableMission(0x52);
      EnableMission(0x44);
      SetTrigg(0x12,0);
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032468,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount1(&DAT_10032480,0);
      if (0 < iVar2) {
        SetTrigg(0x12,0);
        ClearSelection(0);
        DisableMission(0x44);
        EnableMission(0x49);
        ShowPage("#PAGE14");
        SetTrigg(0x13,0);
        SetTrigg(0x14,0);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100324b0,0);
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100324b0);
    if (iVar2 == 0x24) {
      SaveSelectedUnits(0,&DAT_100324b0,0);
      ClearSelection(0);
      SetTrigg(0x13,0);
      SetTrigg(0x14,0);
      ShowPage("#PAGE16");
      CreateObject0(&DAT_100324c0,&DAT_100324f8,&DAT_10032428,5,&DAT_10032548,0x6e);
      CreateObject0(&DAT_100324c8,&DAT_100324f0,&DAT_10032428,5,&DAT_10032548,0x6e);
      SelectUnits1(5,&DAT_100324c0,0);
      SelectUnits1(5,&DAT_100324c8,1);
      SelSendAndKill(5,&DAT_10032528,0,0);
      DisableMission(0x49);
      EnableMission(0x4e);
      ClearSelection(5);
      SelectUnits1(0,&DAT_100324b0,0);
      SetTrigg(0x15,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100324c0);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount0(&DAT_100324c8);
      if (iVar2 == 0) {
        SetTrigg(0x15,0);
        ShowPage("#PAGE17");
        RunTimer(7,400);
        SetTrigg(0x16,0);
      }
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x16,0);
      EnableUnit(0,&DAT_100324a8,1);
      EnableUnit(0,&DAT_100324a0,1);
      ShowPage("#PAGE18");
      DisableMission(0x4e);
      EnableMission(0x45);
      EnableMission(0x48);
      SetTrigg(0x17,0);
      SetTrigg(0x18,0);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100324a8,0);
    if (0 < iVar2) {
      SetTrigg(0x17,0);
      EnableUnit(0,&DAT_100324a8,0);
      DisableMission(0x45);
      EnableMission(0x53);
      EnableMission(0x46);
      ShowPage("#PAGE19");
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100324a0,0);
    if (0 < iVar2) {
      SetTrigg(0x18,0);
      ShowPage("#PAGE20");
      DisableMission(0x48);
      EnableMission(0x54);
      EnableMission(0x47);
      SetTrigg(0x1a,0);
      SetTrigg(0x19,0);
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100324a0,0);
    if (1 < iVar2) {
      SetTrigg(0x19,0);
      EnableUnit(0,&DAT_100324a0,0);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032400,0);
    if (2 < iVar2) {
      SaveSelectedUnits(0,&DAT_100324b0,0);
      ClearSelection(0);
      SetTrigg(0x1a,0);
      ShowPage("#PAGE21");
      DisableMission(0x46);
      DisableMission(0x47);
      EnableMission(0x4f);
      CreateObject0(&DAT_100324c0,&DAT_10032500,&DAT_10032428,5,&DAT_10032538,0x6e);
      CreateObject0(&DAT_100324c8,&DAT_10032500,&DAT_10032428,5,&DAT_10032560,0x6e);
      CreateObject0(&DAT_100324d0,&DAT_10032508,&DAT_10032438,5,&DAT_10032548,0x6e);
      CreateObject0(&DAT_100324d8,&DAT_100324f0,&DAT_10032450,5,&DAT_10032530,0x6e);
      CreateObject0(&DAT_100324e0,&DAT_100324f0,&DAT_10032450,5,&DAT_10032550,0x6e);
      CreateObject0(&DAT_100324e8,&DAT_100324f0,&DAT_10032450,5,&DAT_10032558,0x6e);
      SelectUnits1(5,&DAT_100324c0,0);
      SelectUnits1(5,&DAT_100324c8,1);
      SelectUnits1(5,&DAT_100324d0,1);
      SelectUnits1(5,&DAT_100324d8,1);
      SelectUnits1(5,&DAT_100324e0,1);
      SelectUnits1(5,&DAT_100324e8,1);
      SelSendAndKill(5,&DAT_10032528,0,0);
      SetTrigg(0x1b,0);
      ClearSelection(5);
      SelectUnits1(0,&DAT_100324b0,0);
    }
  }
  uVar1 = Trigg(0x1b);
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
              SetTrigg(0x1b,0);
              ShowPage("#PAGE22");
              ShowPage("#PAGE99");
              ShowVictory();
            }
          }
        }
      }
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
    if (0x3b < iVar2) {
      SetTrigg(0x61,0);
      SetTrigg(0x62,0);
      EnableUnit(0,&DAT_10032490,0);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10032490,0);
    if (iVar2 < 0x3c) {
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
  uStack_8 = 0x1000465b;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
