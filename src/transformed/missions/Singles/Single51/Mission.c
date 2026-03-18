#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002e1ec[] = "Gvic";
char DAT_1002e1f4[] = "Gcut";
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
int DAT_10033530 = 0;
long long DAT_10033538 = 0;
long long DAT_10033540 = 0;
long long DAT_10033548 = 0;
long long DAT_10033550 = 0;
long long DAT_10033558 = 0;
long long DAT_10033560 = 0;
long long DAT_10033568 = 0;
long long DAT_10033570 = 0;
long long DAT_10033578 = 0;
int DAT_10033580 = 0;
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
int DAT_10033640 = 0;
long long DAT_10033648 = 0;
long long DAT_10033650 = 0;
long long DAT_10033658 = 0;
int DAT_10033660 = 0;
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_100334b8,"Gband1");
  RegisterUnits(&DAT_100334e8,"Gholop1");
  RegisterUnits(&DAT_100334e0,"Gholop2");
  RegisterUnits(&DAT_100334d8,"Gholop3");
  RegisterUnits(&DAT_100334d0,"Gholop4");
  RegisterUnits(&DAT_100334c8,"Gholop5");
  RegisterUnits(&DAT_10033508,"Gholop6");
  RegisterUnits(&DAT_10033500,"Gholop7");
  RegisterUnits(&DAT_100334f8,"Gholop8");
  RegisterUnits(&DAT_100334f0,"Gholop9");
  RegisterUnits(&DAT_100334a8,"Gholop10");
  RegisterUnits(&DAT_100335e8,"Gmush1");
  RegisterUnits(&DAT_100335e0,"Gmush2");
  RegisterUnits(&DAT_100335f8,"Gmush3");
  RegisterUnits(&DAT_100335f0,"Gmush4");
  RegisterUnits(&DAT_10033608,"Gmush5");
  RegisterUnits(&DAT_100335a8,"Gpike1");
  RegisterUnits(&DAT_10033598,"Gpike2");
  RegisterUnits(&DAT_100335b8,"Gpike3");
  RegisterUnits(&DAT_100335b0,"Gpike4");
  RegisterUnits(&DAT_100335c8,"Gpike5");
  RegisterUnits(&DAT_10033648,"Ggrin1");
  RegisterUnits(&DAT_100336b0,"Gcentr");
  RegisterUnits(&DAT_10033478,"Gobj1");
  RegisterUnits(&DAT_10033480,"Gobj2");
  RegisterUnits(&DAT_10033488,"Gobj3");
  RegisterUnits(&DAT_10033490,"Gobj4");
  RegisterUnits(&DAT_10033498,"Gobj5");
  RegisterUnits(&DAT_100334a0,"Gobj6");
  RegisterUnits(&DAT_100336c8,"Ggates1");
  RegisterUnits(&DAT_100336c0,"Ggates2");
  RegisterUnits(&DAT_100336d8,"Ggates3");
  RegisterUnits(&DAT_100336d0,"Ggates4");
  RegisterUnits(&DAT_100336b8,"Gfrig");
  RegisterUnits(&DAT_100336a0,DAT_1002e1f4);
  RegisterUnits(&DAT_100333f0,DAT_1002e1ec);
  RegisterUnits(&DAT_10033518,"Gbash1");
  RegisterUnits(&DAT_10033510,"Gbash2");
  RegisterUnits(&DAT_10033600,"Gcir1");
  RegisterUnits(&DAT_10033610,"Gcir2");
  RegisterUnits(&DAT_10033618,"Gcir3");
  RegisterUnits(&DAT_10033620,"Gcir4");
  RegisterUnits(&DAT_10033458,"Gkon1");
  RegisterUnits(&DAT_10033460,"Gkon2");
  RegisterUnits(&DAT_10033468,"Gkon3");
  RegisterUnits(&DAT_10033470,"Gkon4");
  RegisterUnits(&DAT_100336e0,"Gkaz1");
  RegisterUnits(&DAT_100336e8,"Gkaz2");
  RegisterZone(&DAT_10033658,"Zband0");
  RegisterZone(&DAT_10033650,"Zband1");
  RegisterZone(&DAT_10033678,"Zattack1");
  RegisterZone(&DAT_10033680,"Zattack2");
  RegisterZone(&DAT_10033670,"Zattack3");
  RegisterUnitType(&DAT_10033418,"Grenader(GE)");
  RegisterUnitType(&DAT_10033630,"Mushketer_PR(GE)");
  RegisterUnitType(&DAT_10033450,"Kirasir(GE)");
  RegisterUnitType(&DAT_100334c0,"Gusar_NEW(GE)");
  RegisterUnitType(&DAT_100336a8,"Dragun_18(GE)");
  RegisterUnitType(&DAT_10033440,"Kreposnoi_pruss(GE)");
  RegisterUnitType(&DAT_10033638,"WALL_EV(DA)");
  RegisterUnitType(&DAT_100336f0,"WALL_UKR(DA)");
  RegisterUpgrade(&DAT_10033668,"AKA19DA");
  RegisterVar(&DAT_10033430,8);
  RegisterVar(&DAT_10033428,8);
  RegisterVar(&DAT_10033448,8);
  RegisterVar(&DAT_10033438,8);
  RegisterVar(&DAT_10033400,8);
  RegisterVar(&DAT_100333f8,8);
  RegisterVar(&DAT_10033410,8);
  RegisterVar(&DAT_10033408,8);
  RegisterVar(&DAT_10033420,8);
  RegisterVar(&DAT_10033528,8);
  RegisterVar(&DAT_10033520,8);
  RegisterVar(&DAT_10033560,8);
  RegisterVar(&DAT_10033558,8);
  RegisterVar(&DAT_10033578,8);
  RegisterVar(&DAT_10033568,8);
  RegisterVar(&DAT_10033540,8);
  RegisterVar(&DAT_10033538,8);
  RegisterVar(&DAT_10033550,8);
  RegisterVar(&DAT_10033548,8);
  RegisterVar(&DAT_10033570,8);
  RegisterVar(&DAT_10033530,4);
  RegisterVar(&DAT_10033580,4);
  RegisterVar(&DAT_100335d8,4);
  RegisterVar(&DAT_10033628,4);
  RegisterVar(&DAT_10033640,4);
  RegisterVar(&DAT_10033660,4);
  RegisterFormation(&DAT_10033698,"#LINE5");
  RegisterFormation(&DAT_10033590,"#LINE20PUS");
  RegisterFormation(&DAT_100335c0,"#LINE30PUS");
  RegisterFormation(&DAT_100335d0,"#LINE40PUS");
  RegisterFormation(&DAT_100335a0,"#LINE15PUS");
  RegisterFormation(&DAT_10033588,"#LINE10PUS");
  RegisterFormation(&DAT_10033690,"#LINE3");
  RegisterFormation(&DAT_100333e0,"#SHIPS3");
  RegisterFormation(&DAT_100333e8,"#SHIPS5");
  RegisterFormation(&DAT_100334b0,"#ALONE");
  RegisterDynGroup(&DAT_10033430);
  RegisterDynGroup(&DAT_10033428);
  RegisterDynGroup(&DAT_10033448);
  RegisterDynGroup(&DAT_10033438);
  RegisterDynGroup(&DAT_10033400);
  RegisterDynGroup(&DAT_100333f8);
  RegisterDynGroup(&DAT_10033410);
  RegisterDynGroup(&DAT_10033408);
  RegisterDynGroup(&DAT_10033420);
  RegisterDynGroup(&DAT_10033528);
  RegisterDynGroup(&DAT_10033520);
  RegisterDynGroup(&DAT_10033560);
  RegisterDynGroup(&DAT_10033558);
  RegisterDynGroup(&DAT_10033578);
  RegisterDynGroup(&DAT_10033568);
  RegisterDynGroup(&DAT_10033540);
  RegisterDynGroup(&DAT_10033538);
  RegisterDynGroup(&DAT_10033550);
  RegisterDynGroup(&DAT_10033548);
  RegisterDynGroup(&DAT_10033570);
  RegisterDynGroup(&DAT_10033688);
  SetPlayerName(1,"AUSTRIANS");
  SetPlayerName(2,"PRUSSIA");
  SetPlayerName(5,"PIRATES");
  ChangeFriends(1,0x26);
  ChangeFriends(2,0x26);
  ChangeFriends(5,0x26);
  EnableUnit(0,&DAT_10033638,0);
  EnableUnit(0,&DAT_100336f0,0);
  DisableUpgrade(0,&DAT_10033668);
  uStack_8 = 0x10001d7e;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
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
    TakeFood(&DAT_100334e8);
    TakeFood(&DAT_100334e0);
    TakeFood(&DAT_100334d8);
    TakeFood(&DAT_100334d0);
    TakeStone(&DAT_100334c8);
    TakeStone(&DAT_10033508);
    TakeStone(&DAT_10033500);
    TakeWood(&DAT_100334f8);
    TakeWood(&DAT_100334f0);
    SelectUnits(&DAT_100336c8,0);
    SelectUnits(&DAT_100336c0,1);
    SelectUnits(&DAT_100336d8,1);
    SelectUnits(&DAT_100336d0,1);
    SelOpenGates(2);
    SelectUnits(&DAT_100333f0,0);
    SetStandGround(5,1);
    local_1c = GetDiff(0);
    switch(local_1c) {
    case 0:
      SetResource(0,3,30000);
      SetResource(0,0,30000);
      SetResource(0,2,30000);
      SetResource(0,1,30000);
      SetResource(0,5,30000);
      SetResource(0,4,30000);
      SelectUnits(&DAT_10033510,0);
      SelectUnits(&DAT_100336a0,1);
      SelectUnits(&DAT_100336b8,1);
      SelectUnits(&DAT_10033608,1);
      SelectUnits(&DAT_10033648,1);
      SelErase(5);
      SelectUnits(&DAT_100335e8,0);
      SelectUnits(&DAT_10033600,1);
      SelectUnits(&DAT_100335a8,1);
      SelectUnits(&DAT_10033518,1);
      SelErase(2);
      DAT_10033530 = 3;
      DAT_10033580 = 3;
      DAT_100335d8 = 2;
      DAT_10033628 = 2;
      DAT_10033640 = 2;
      DAT_10033660 = 3;
      break;
    case 1:
      SetResource(0,3,25000);
      SetResource(0,0,25000);
      SetResource(0,2,25000);
      SetResource(0,1,25000);
      SetResource(0,5,25000);
      SetResource(0,4,25000);
      SelectUnits(&DAT_100336b8,0);
      SelectUnits(&DAT_100335c8,1);
      SelectUnits(&DAT_10033648,1);
      SelErase(5);
      SelectUnits(&DAT_100335e8,0);
      SelectUnits(&DAT_10033600,1);
      SelErase(2);
      DAT_10033530 = 7;
      DAT_10033580 = 5;
      DAT_100335d8 = 4;
      DAT_10033628 = 5;
      DAT_10033640 = 5;
      DAT_10033660 = 7;
      break;
    case 2:
      SetResource(0,3,18000);
      SetResource(0,0,18000);
      SetResource(0,2,18000);
      SetResource(0,1,18000);
      SetResource(0,5,18000);
      SetResource(0,4,18000);
      SelectUnits(&DAT_100336a0,0);
      SelectUnits(&DAT_10033648,1);
      SelErase(5);
      SelectUnits(&DAT_10033600,0);
      SelErase(2);
      DAT_10033530 = 0xf;
      DAT_10033580 = 10;
      DAT_100335d8 = 8;
      DAT_10033628 = 10;
      DAT_10033640 = 10;
      DAT_10033660 = 0xf;
      break;
    case 3:
      SetResource(0,3,15000);
      SetResource(0,0,15000);
      SetResource(0,2,15000);
      SetResource(0,1,15000);
      SetResource(0,5,15000);
      SetResource(0,4,15000);
      InitialUpgrade("Gobj1","KUZ02GE");
      InitialUpgrade("Gobj1","AKA09GE");
      InitialUpgrade("Gobj1","AKA11GE");
      InitialUpgrade("Gbash2","KUZ02EN");
      InitialUpgrade("Gbash2","AKA09EN");
      InitialUpgrade("Gbash2","AKA11EN");
      DAT_10033530 = 0x14;
      DAT_10033580 = 0xf;
      DAT_100335d8 = 0xc;
      DAT_10033628 = 0xf;
      DAT_10033640 = 0xf;
      DAT_10033660 = 0x14;
    }
    RunTimer(1,1000);
    RunTimer(2,2000);
    iVar3 = GetDiff(0);
    RunTimer(0xd,(5 - iVar3) * 4000);
    iVar3 = GetDiff(0);
    RunTimer(0xe,(5 - iVar3) * 3000);
    iVar3 = GetDiff(0);
    RunTimer(0xf,(5 - iVar3) * 6000);
    iVar3 = GetDiff(0);
    RunTimer(0x10,(5 - iVar3) * 9000);
    iVar3 = GetDiff(0);
    RunTimer(0x11,(5 - iVar3) * 12000);
    iVar3 = GetDiff(0);
    RunTimer(0x12,(5 - iVar3) * 15000);
    iVar3 = GetDiff(0);
    RunTimer(0x13,(5 - iVar3) * 18000);
    InitialUpgrade("Gobj1","Melnica(GE)GETRES");
    InitialUpgrade("Gobj1","MAINGE");
    InitialUpgrade("Gobj1","Melnica(GE)GETRES2");
    InitialUpgrade("Gobj1","KUZ01GE");
    InitialUpgrade("Gobj1","KUZ03GE");
    InitialUpgrade("Gobj1","KUZ05GE");
    InitialUpgrade("Gobj1","KUZ06GE");
    InitialUpgrade("Gobj1","AKA01GE");
    InitialUpgrade("Gobj1","AKA02GE");
    InitialUpgrade("Gobj1","AKA03GE");
    InitialUpgrade("Gobj1","AKA04GE");
    InitialUpgrade("Gobj1","AKA08GE");
    InitialUpgrade("Gobj1","AKA24GE");
    InitialUpgrade("Gobj1","AKA35GE");
    InitialUpgrade("Gobj1","AKA34GE");
    InitialUpgrade("Gobj1","AKA32GE");
    InitialUpgrade("Gobj5","Melnica(DA)GETRES");
    InitialUpgrade("Gobj5","MAINDA");
    InitialUpgrade("Gobj5","Melnica(DA)GETRES2");
    InitialUpgrade("Gobj5","KUZ01DA");
    InitialUpgrade("Gobj5","AKA01DA");
    InitialUpgrade("Gobj5","AKA02DA");
    InitialUpgrade("Gobj5","AKA03DA");
    InitialUpgrade("Gobj5","AKA04DA");
    InitialUpgrade("Gobj5","AKA10DA");
    InitialUpgrade("Gholop10","Melnica(au)GETRES");
    InitialUpgrade("Gholop10","MAINAU");
    InitialUpgrade("Gholop10","Melnica(au)GETRES2");
    InitialUpgrade("Gholop10","AKA09AU");
    InitialUpgrade("Gholop10","AKA10AU");
    InitialUpgrade("Gholop10","AKA11AU");
    InitialUpgrade("Gholop10","KUZ02AU");
    InitialUpgrade("Gholop10","KUZ01AU");
    InitialUpgrade("Gholop10","AKA01AU");
    InitialUpgrade("Gholop10","AKA02AU");
    InitialUpgrade("Gholop10","AKA03AU");
    InitialUpgrade("Gholop10","AKA04AU");
    SetResource(1,3,50000);
    SetResource(1,0,50000);
    SetResource(1,2,50000);
    SetResource(1,1,50000);
    SetResource(1,5,50000);
    SetResource(1,4,50000);
    uVar2 = GetDiff(0);
    StartAI(1,"AUSTRIA.0",1,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      local_20 = GetDiff(0);
      switch(local_20) {
      case 0:
        DAT_10033530 = DAT_10033530 + 3;
        DAT_10033580 = DAT_10033580 + 3;
        DAT_100335d8 = DAT_100335d8 + 2;
        DAT_10033628 = DAT_10033628 + 2;
        DAT_10033640 = DAT_10033640 + 2;
        DAT_10033660 = DAT_10033660 + 3;
        break;
      case 1:
        DAT_10033530 = DAT_10033530 + 8;
        DAT_10033580 = DAT_10033580 + 7;
        DAT_100335d8 = DAT_100335d8 + 4;
        DAT_10033628 = DAT_10033628 + 5;
        DAT_10033640 = DAT_10033640 + 5;
        DAT_10033660 = DAT_10033660 + 8;
        break;
      case 2:
        DAT_10033530 = DAT_10033530 + 0xc;
        DAT_10033580 = DAT_10033580 + 10;
        DAT_100335d8 = DAT_100335d8 + 6;
        DAT_10033628 = DAT_10033628 + 8;
        DAT_10033640 = DAT_10033640 + 8;
        DAT_10033660 = DAT_10033660 + 10;
        break;
      case 3:
        DAT_10033530 = DAT_10033530 + 0xf;
        DAT_10033580 = DAT_10033580 + 0xc;
        DAT_100335d8 = DAT_100335d8 + 8;
        DAT_10033628 = DAT_10033628 + 10;
        DAT_10033640 = DAT_10033640 + 10;
        DAT_10033660 = DAT_10033660 + 0xf;
      }
      iVar3 = GetDiff(0);
      RunTimer(0xd,(5 - iVar3) * 4000);
    }
  }
  uVar1 = TimerDoneFirst(0xe);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj6","Mushketer_PR(GE)ATTACK");
    InitialUpgrade("Gobj6","Mushketer_PR(GE)SHIELD");
    InitialUpgrade("Gobj6","Grenader(GE)ATTACK");
    InitialUpgrade("Gobj6","Grenader(GE)SHIELD");
    InitialUpgrade("Gobj6","Kirasir(GE)ATTACK");
    InitialUpgrade("Gobj6","Kirasir(GE)SHIELD");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)ATTACK");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)SHIELD");
    InitialUpgrade("Gobj6","Dragun_18(GE)ATTACK");
    InitialUpgrade("Gobj6","Dragun_18(GE)SHIELD");
  }
  uVar1 = TimerDoneFirst(0xf);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj6","Mushketer_PR(GE)ATTACK3");
    InitialUpgrade("Gobj6","Mushketer_PR(GE)SHIELD3");
    InitialUpgrade("Gobj6","Grenader(GE)ATTACK3");
    InitialUpgrade("Gobj6","Grenader(GE)SHIELD3");
    InitialUpgrade("Gobj6","Kirasir(GE)ATTACK3");
    InitialUpgrade("Gobj6","Kirasir(GE)SHIELD3");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)ATTACK3");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)SHIELD3");
    InitialUpgrade("Gobj6","Dragun_18(GE)ATTACK3");
    InitialUpgrade("Gobj6","Dragun_18(GE)SHIELD3");
  }
  uVar1 = TimerDoneFirst(0x10);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj6","Mushketer_PR(GE)ATTACK4");
    InitialUpgrade("Gobj6","Mushketer_PR(GE)SHIELD4");
    InitialUpgrade("Gobj6","Grenader(GE)ATTACK4");
    InitialUpgrade("Gobj6","Grenader(GE)SHIELD4");
    InitialUpgrade("Gobj6","Kirasir(GE)ATTACK4");
    InitialUpgrade("Gobj6","Kirasir(GE)SHIELD4");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)ATTACK4");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)SHIELD4");
    InitialUpgrade("Gobj6","Dragun_18(GE)ATTACK4");
    InitialUpgrade("Gobj6","Dragun_18(GE)SHIELD4");
  }
  uVar1 = TimerDoneFirst(0x11);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj6","Mushketer_PR(GE)ATTACK5");
    InitialUpgrade("Gobj6","Mushketer_PR(GE)SHIELD5");
    InitialUpgrade("Gobj6","Grenader(GE)ATTACK5");
    InitialUpgrade("Gobj6","Grenader(GE)SHIELD5");
    InitialUpgrade("Gobj6","Kirasir(GE)ATTACK5");
    InitialUpgrade("Gobj6","Kirasir(GE)SHIELD5");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)ATTACK5");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)SHIELD5");
    InitialUpgrade("Gobj6","Dragun_18(GE)ATTACK5");
    InitialUpgrade("Gobj6","Dragun_18(GE)SHIELD5");
  }
  uVar1 = TimerDoneFirst(0x12);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj6","Mushketer_PR(GE)ATTACK6");
    InitialUpgrade("Gobj6","Mushketer_PR(GE)SHIELD6");
    InitialUpgrade("Gobj6","Grenader(GE)ATTACK6");
    InitialUpgrade("Gobj6","Grenader(GE)SHIELD6");
    InitialUpgrade("Gobj6","Kirasir(GE)ATTACK6");
    InitialUpgrade("Gobj6","Kirasir(GE)SHIELD6");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)ATTACK6");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)SHIELD6");
    InitialUpgrade("Gobj6","Dragun_18(GE)ATTACK6");
    InitialUpgrade("Gobj6","Dragun_18(GE)SHIELD6");
  }
  uVar1 = TimerDoneFirst(0x13);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj6","Mushketer_PR(GE)ATTACK7");
    InitialUpgrade("Gobj6","Mushketer_PR(GE)SHIELD7");
    InitialUpgrade("Gobj6","Grenader(GE)ATTACK7");
    InitialUpgrade("Gobj6","Grenader(GE)SHIELD7");
    InitialUpgrade("Gobj6","Kirasir(GE)ATTACK7");
    InitialUpgrade("Gobj6","Kirasir(GE)SHIELD7");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)ATTACK7");
    InitialUpgrade("Gobj6","Gusar_NEW(GE)SHIELD7");
    InitialUpgrade("Gobj6","Dragun_18(GE)ATTACK7");
    InitialUpgrade("Gobj6","Dragun_18(GE)SHIELD7");
    InitialUpgrade("Gobj6","KUZ04GE");
    InitialUpgrade("Gobj6","AKA12GE");
    InitialUpgrade("Gobj6","AKA13GE");
    InitialUpgrade("Gobj6","AKA14GE");
    InitialUpgrade("Gobj6","AKA15GE");
    InitialUpgrade("Gobj6","AKA31GE");
    InitialUpgrade("Gobj6","AKA33GE");
    InitialUpgrade("Gobj6","AKA36GE");
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0AA");
      EnableMission(0x44);
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0A");
      SetLightSpot(&DAT_10033658,1,1);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10033650,0);
    if (0 < iVar3) {
      iVar3 = GetTotalAmount0(&DAT_100334b8);
      if (0 < iVar3) {
        SetTrigg(0x14,0);
        ShowPage("#PAGE2");
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsByNation(&DAT_100334b8,0);
      if (0 < iVar3) {
        SetTrigg(0x15,0);
        iVar3 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar3 * -10000 + 70000);
        iVar3 = GetDiff(0);
        AddResource(0,1,iVar3 * -10000 + 70000);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetTotalAmount0(&DAT_100334b8);
        if (iVar3 == 0) {
          SetTrigg(0x16,0);
          ShowPage("#PAGE4");
        }
      }
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x62,0);
      iVar3 = GetResource(0,3);
      if (iVar3 < 1) {
        ShowPage("#PAGE1A");
      }
      else {
        ShowPage("#PAGE1");
      }
      LooseGame();
    }
  }
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
  iVar3 = GetTotalAmount0(&DAT_10033478);
  if (0 < iVar3) {
    iVar3 = GetTotalAmount0(&DAT_100336e0);
    if (0 < iVar3) {
      uVar1 = Trigg(9);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(9,0);
        for (local_8 = 0; local_8 < DAT_10033530; local_8 = local_8 + 1) {
          ProduceUnitFast(&DAT_100336e0,&DAT_10033418,&DAT_10033430,0);
        }
      }
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_100336e0);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(3,100);
          SetTrigg(10,0);
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(4);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(3);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(4,0);
            FreeTimer(3);
            RunTimer(8,6000);
            SetTrigg(10,0);
            RemoveGroup(&DAT_10033430,&DAT_10033410);
            SelectUnits(&DAT_10033410,0);
            SelSendAndKill(2,&DAT_10033678,0xaa,0);
            ClearSelection(2);
            SetTrigg(9,0);
          }
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(4);
        if ((uVar1 & 0xff) == 0) {
          iVar3 = GetTotalAmount0(&DAT_10033410);
          if (iVar3 != 0) {
            uVar1 = TimerDoneFirst(8);
            if ((uVar1 & 0xff) == 0) goto LAB_100041da;
          }
          FreeTimer(8);
          SetTrigg(4,0);
        }
      }
    }
  }
LAB_100041da:
  iVar3 = GetTotalAmount0(&DAT_10033480);
  if (0 < iVar3) {
    iVar3 = GetTotalAmount0(&DAT_100336e8);
    if (0 < iVar3) {
      uVar1 = Trigg(0xb);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xb,0);
        for (local_c = 0; local_c < DAT_10033580; local_c = local_c + 1) {
          ProduceUnitFast(&DAT_100336e8,&DAT_10033630,&DAT_10033428,0);
        }
      }
      uVar1 = Trigg(1);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_100336e8);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(4,100);
          SetTrigg(1,0);
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(7);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(4);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(7,0);
            FreeTimer(4);
            RunTimer(9,6000);
            SetTrigg(1,0);
            RemoveGroup(&DAT_10033428,&DAT_10033408);
            SelectUnits(&DAT_10033408,0);
            SelSendAndKill(2,&DAT_10033680,0x41,0);
            ClearSelection(2);
            SetTrigg(0xb,0);
          }
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(7);
        if ((uVar1 & 0xff) == 0) {
          iVar3 = GetTotalAmount0(&DAT_10033408);
          if (iVar3 != 0) {
            uVar1 = TimerDoneFirst(9);
            if ((uVar1 & 0xff) == 0) goto LAB_100044ca;
          }
          FreeTimer(9);
          SetTrigg(7,0);
        }
      }
    }
  }
LAB_100044ca:
  iVar3 = GetTotalAmount0(&DAT_10033488);
  if (0 < iVar3) {
    iVar3 = GetTotalAmount0(&DAT_10033458);
    if (0 < iVar3) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xd,0);
        for (local_10 = 0; local_10 < DAT_100335d8; local_10 = local_10 + 1) {
          ProduceUnitFast(&DAT_10033458,&DAT_100334c0,&DAT_10033448,0);
        }
      }
      uVar1 = Trigg(2);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10033458);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(5,100);
          SetTrigg(2,0);
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(8);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(5);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(8,0);
            FreeTimer(5);
            RunTimer(10,8000);
            SetTrigg(2,0);
            RemoveGroup(&DAT_10033448,&DAT_10033420);
            SelectUnits(&DAT_10033420,0);
            SelSendAndKill(2,&DAT_10033680,0x41,0);
            ClearSelection(2);
            SetTrigg(0xd,0);
          }
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(8);
        if ((uVar1 & 0xff) == 0) {
          iVar3 = GetTotalAmount0(&DAT_10033420);
          if (iVar3 != 0) {
            uVar1 = TimerDoneFirst(10);
            if ((uVar1 & 0xff) == 0) goto LAB_100047ba;
          }
          FreeTimer(10);
          SetTrigg(8,0);
        }
      }
    }
  }
LAB_100047ba:
  iVar3 = GetTotalAmount0(&DAT_10033488);
  if (0 < iVar3) {
    iVar3 = GetTotalAmount0(&DAT_10033460);
    if (0 < iVar3) {
      uVar1 = Trigg(0xe);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xe,0);
        for (local_14 = 0; local_14 < DAT_10033628; local_14 = local_14 + 1) {
          ProduceUnitFast(&DAT_10033460,&DAT_10033450,&DAT_10033438,0);
        }
      }
      uVar1 = Trigg(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10033460);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(6,100);
          SetTrigg(3,0);
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x12);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(6);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0x12,0);
            FreeTimer(6);
            RunTimer(0xb,8000);
            SetTrigg(3,0);
            RemoveGroup(&DAT_10033438,&DAT_10033528);
            SelectUnits(&DAT_10033528,0);
            SelSendAndKill(2,&DAT_10033670,10,0);
            ClearSelection(2);
            SetTrigg(0xe,0);
          }
        }
      }
      uVar1 = Trigg(0x5e);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x12);
        if ((uVar1 & 0xff) == 0) {
          iVar3 = GetTotalAmount0(&DAT_10033528);
          if (iVar3 != 0) {
            uVar1 = TimerDoneFirst(0xb);
            if ((uVar1 & 0xff) == 0) goto LAB_10004aaa;
          }
          FreeTimer(0xb);
          SetTrigg(0x12,0);
        }
      }
    }
  }
LAB_10004aaa:
  iVar3 = GetTotalAmount0(&DAT_10033490);
  if (0 < iVar3) {
    iVar3 = GetTotalAmount0(&DAT_10033468);
    if (iVar3 < 1) {
      iVar3 = GetTotalAmount0(&DAT_10033470);
      if (iVar3 < 1) goto LAB_10004f80;
    }
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x10,0);
      for (local_18 = 0; local_18 < DAT_10033640; local_18 = local_18 + 1) {
        ProduceUnitFast(&DAT_10033468,&DAT_10033450,&DAT_10033400,0);
      }
      for (local_18 = 0; local_18 < DAT_10033660; local_18 = local_18 + 1) {
        ProduceUnitFast(&DAT_10033470,&DAT_100336a8,&DAT_100333f8,0);
      }
    }
    iVar3 = GetTotalAmount0(&DAT_10033468);
    if (0 < iVar3) {
      iVar3 = GetTotalAmount0(&DAT_10033470);
      if (0 < iVar3) {
        uVar1 = Trigg(5);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = CheckProduction(&DAT_10033468);
          if ((uVar1 & 0xff) != 0) {
            uVar1 = CheckProduction(&DAT_10033470);
            if ((uVar1 & 0xff) != 0) {
              RunTimer(7,100);
              SetTrigg(5,0);
            }
          }
        }
      }
    }
    iVar3 = GetTotalAmount0(&DAT_10033468);
    if (iVar3 == 0) {
      uVar1 = Trigg(5);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10033470);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(7,100);
          SetTrigg(5,0);
        }
      }
    }
    iVar3 = GetTotalAmount0(&DAT_10033470);
    if (iVar3 == 0) {
      uVar1 = Trigg(5);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10033468);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(7,100);
          SetTrigg(5,0);
        }
      }
    }
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(7);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x11,0);
          FreeTimer(7);
          RunTimer(0xc,8000);
          SetTrigg(5,0);
          RemoveGroup(&DAT_10033400,&DAT_10033520);
          RemoveGroup(&DAT_100333f8,&DAT_10033520);
          SelectUnits(&DAT_10033520,0);
          SelSendAndKill(2,&DAT_10033678,0xaa,0);
          ClearSelection(2);
          SetTrigg(0x10,0);
        }
      }
    }
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) == 0) {
        iVar3 = GetTotalAmount0(&DAT_10033520);
        if (iVar3 != 0) {
          uVar1 = TimerDoneFirst(0xc);
          if ((uVar1 & 0xff) == 0) goto LAB_10004f80;
        }
        FreeTimer(0xc);
        SetTrigg(0x11,0);
      }
    }
  }
LAB_10004f80:
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_100336b0);
    if (iVar3 == 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE7");
      DisableMission(0x44);
      EnableMission(0x45);
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_100333f0);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_10033658,0);
      if (0 < iVar3) {
        SetTrigg(0x13,0);
        ShowPage("#PAGE3");
        ChangeFriends(5,0x21);
        SelectUnits(&DAT_100333f0,0);
        SelChangeNation(5,0);
        ChangeFriends(5,0x26);
      }
    }
  }
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
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
