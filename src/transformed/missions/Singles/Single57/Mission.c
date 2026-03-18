#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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
long long DAT_10033548 = 0;
long long DAT_10033550 = 0;
int DAT_10033558 = 0;
long long DAT_10033560 = 0;
long long DAT_10033568 = 0;
long long DAT_10033570 = 0;
long long DAT_10033578 = 0;
long long DAT_10033580 = 0;
long long DAT_10033588 = 0;
long long DAT_10033590 = 0;
long long DAT_10033598 = 0;
long long DAT_100335a0 = 0;
int DAT_100335a8 = 0;
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
long long DAT_10033628 = 0;
long long DAT_10033630 = 0;
long long DAT_10033638 = 0;
int DAT_10033640 = 0;
long long DAT_10033648 = 0;
long long DAT_10033650 = 0;
long long DAT_10033658 = 0;
long long DAT_10033660 = 0;
int DAT_10033668 = 0;
long long DAT_10033670 = 0;
long long DAT_10033678 = 0;
long long DAT_10033680 = 0;
long long DAT_10033688 = 0;
long long DAT_10033690 = 0;
int DAT_10033698 = 0;
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
int DAT_10033718 = 0;
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
long long DAT_10033788 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_100334d0,"Gband1");
  RegisterUnits(&DAT_100334c8,"Gband2");
  RegisterUnits(&DAT_10033500,"Gholop1");
  RegisterUnits(&DAT_100334f8,"Gholop2");
  RegisterUnits(&DAT_100334f0,"Gholop3");
  RegisterUnits(&DAT_100334e8,"Gholop4");
  RegisterUnits(&DAT_100334e0,"Gholop5");
  RegisterUnits(&DAT_10033520,"Gholop6");
  RegisterUnits(&DAT_10033518,"Gholop7");
  RegisterUnits(&DAT_10033510,"Gholop8");
  RegisterUnits(&DAT_10033508,"Gholop9");
  RegisterUnits(&DAT_10033730,"Gcentr");
  RegisterUnits(&DAT_10033648,"Gbos1");
  RegisterUnits(&DAT_10033650,"Gbos2");
  RegisterUnits(&DAT_10033658,"Gbos3");
  RegisterUnits(&DAT_10033660,"Gbos4");
  RegisterUnits(&DAT_10033608,"Gmush1");
  RegisterUnits(&DAT_10033498,"Gobj1");
  RegisterUnits(&DAT_100334a0,"Gobj2");
  RegisterUnits(&DAT_10033740,"Ggates1");
  RegisterUnits(&DAT_10033738,"Ggates2");
  RegisterUnits(&DAT_10033750,"Ggates3");
  RegisterUnits(&DAT_10033748,"Ggates4");
  RegisterUnits(&DAT_10033540,"Gbash1");
  RegisterUnits(&DAT_10033538,"Gbash2");
  RegisterUnits(&DAT_10033688,"Gdrag1");
  RegisterUnits(&DAT_10033690,"Gdrag2");
  RegisterUnits(&DAT_10033610,"Gcir1");
  RegisterUnits(&DAT_10033618,"Gcir2");
  RegisterUnits(&DAT_10033620,"Gcir3");
  RegisterUnits(&DAT_10033628,"Gcir4");
  RegisterUnits(&DAT_10033478,"Gkon1");
  RegisterUnits(&DAT_10033480,"Gkon2");
  RegisterUnits(&DAT_10033488,"Gkon3");
  RegisterUnits(&DAT_10033490,"Gkon4");
  RegisterZone(&DAT_10033680,"Zband0");
  RegisterZone(&DAT_10033728,"Zband00");
  RegisterZone(&DAT_10033670,"Zband1");
  RegisterZone(&DAT_10033758,"Zband1a");
  RegisterZone(&DAT_10033760,"Zband1b");
  RegisterZone(&DAT_10033678,"Zband2");
  RegisterZone(&DAT_10033768,"Zband2a");
  RegisterZone(&DAT_10033770,"Zband2b");
  RegisterZone(&DAT_100336b0,"Zattack1");
  RegisterZone(&DAT_100336b8,"Zattack2");
  RegisterZone(&DAT_100336a0,"Zattack3");
  RegisterZone(&DAT_100336a8,"Zattack4");
  RegisterZone(&DAT_100336d0,"Zattack5");
  RegisterZone(&DAT_100336d8,"Zattack6");
  RegisterZone(&DAT_100336c0,"Zattack7");
  RegisterZone(&DAT_100336c8,"Zattack8");
  RegisterZone(&DAT_100336e0,"Zattack9");
  RegisterZone(&DAT_10033788,"Zattack10");
  RegisterZone(&DAT_10033780,"Zattack11");
  RegisterZone(&DAT_10033778,"Zattack12");
  RegisterZone(&DAT_100335e0,"Zpatrol1");
  RegisterZone(&DAT_100335e8,"Zpatrol2");
  RegisterZone(&DAT_10033630,"Zsvet1");
  RegisterZone(&DAT_10033638,"Zsvet2");
  RegisterZone(&DAT_10033418,"Zotxod1");
  RegisterZone(&DAT_10033420,"Zotxod2");
  RegisterZone(&DAT_10033428,"Zotxod3");
  RegisterZone(&DAT_10033440,"Zotxod4");
  RegisterUnitType(&DAT_10033470,"Kirasir(PO)");
  RegisterUnitType(&DAT_100334d8,"Gusar_evro(PO)");
  RegisterUnitType(&DAT_10033720,"Dragun_18(PO)");
  RegisterUnitType(&DAT_10033458,"Kreposnoi_portugal(PO)");
  RegisterUnitType(&DAT_10033468,"Kreposnoi_portugal(VE)");
  RegisterUnitType(&DAT_10033438,"Kreposnoi_portugal(PI)");
  RegisterUnitType(&DAT_100334b0,"WALL_EV(PO)");
  RegisterUnitType(&DAT_100335f8,"WALL_UKR(PO)");
  RegisterUnitType(&DAT_100334b8,"WALL_EV(VE)");
  RegisterUnitType(&DAT_10033600,"WALL_UKR(VE)");
  RegisterUnitType(&DAT_100334c0,"WALL_EV(PI)");
  RegisterUnitType(&DAT_100335f0,"WALL_UKR(PI)");
  RegisterUnitType(&DAT_10033528,"Center_Portugal(PO)");
  RegisterUnitType(&DAT_10033530,"Center_Venecia(VE)");
  RegisterUnitType(&DAT_10033708,"shahta(PI)");
  RegisterUnitType(&DAT_10033700,"shahta_FE(PI)");
  RegisterUnitType(&DAT_10033710,"shahta_UG(PI)");
  RegisterVar(&DAT_10033448,8);
  RegisterVar(&DAT_10033430,8);
  RegisterVar(&DAT_10033460,8);
  RegisterVar(&DAT_10033450,8);
  RegisterVar(&DAT_100333f8,8);
  RegisterVar(&DAT_100333f0,8);
  RegisterVar(&DAT_10033408,8);
  RegisterVar(&DAT_10033400,8);
  RegisterVar(&DAT_10033410,8);
  RegisterVar(&DAT_10033550,8);
  RegisterVar(&DAT_10033548,8);
  RegisterVar(&DAT_10033588,8);
  RegisterVar(&DAT_10033580,8);
  RegisterVar(&DAT_100335a0,8);
  RegisterVar(&DAT_10033590,8);
  RegisterVar(&DAT_10033568,8);
  RegisterVar(&DAT_10033560,8);
  RegisterVar(&DAT_10033578,8);
  RegisterVar(&DAT_10033570,8);
  RegisterVar(&DAT_10033598,8);
  RegisterVar(&DAT_10033558,4);
  RegisterVar(&DAT_100335a8,4);
  RegisterVar(&DAT_100335d8,4);
  RegisterVar(&DAT_10033640,4);
  RegisterVar(&DAT_10033668,4);
  RegisterVar(&DAT_10033698,4);
  RegisterVar(&DAT_10033718,4);
  RegisterFormation(&DAT_100336f8,"#LINE5");
  RegisterFormation(&DAT_100335b8,"#LINE20PUS");
  RegisterFormation(&DAT_100335c8,"#LINE30PUS");
  RegisterFormation(&DAT_100335d0,"#LINE40PUS");
  RegisterFormation(&DAT_100335c0,"#LINE15PUS");
  RegisterFormation(&DAT_100335b0,"#LINE10PUS");
  RegisterFormation(&DAT_100336f0,"#LINE3");
  RegisterFormation(&DAT_100333e0,"#SHIPS3");
  RegisterFormation(&DAT_100333e8,"#SHIPS5");
  RegisterFormation(&DAT_100334a8,"#ALONE");
  RegisterDynGroup(&DAT_10033448);
  RegisterDynGroup(&DAT_10033430);
  RegisterDynGroup(&DAT_10033460);
  RegisterDynGroup(&DAT_10033450);
  RegisterDynGroup(&DAT_100333f8);
  RegisterDynGroup(&DAT_100333f0);
  RegisterDynGroup(&DAT_10033408);
  RegisterDynGroup(&DAT_10033400);
  RegisterDynGroup(&DAT_10033410);
  RegisterDynGroup(&DAT_10033550);
  RegisterDynGroup(&DAT_10033548);
  RegisterDynGroup(&DAT_10033588);
  RegisterDynGroup(&DAT_10033580);
  RegisterDynGroup(&DAT_100335a0);
  RegisterDynGroup(&DAT_10033590);
  RegisterDynGroup(&DAT_10033568);
  RegisterDynGroup(&DAT_10033560);
  RegisterDynGroup(&DAT_10033578);
  RegisterDynGroup(&DAT_10033570);
  RegisterDynGroup(&DAT_10033598);
  RegisterDynGroup(&DAT_100336e8);
  SetPlayerName(1,"VENECIA");
  SetPlayerName(5,"ROBBERS");
  SetPlayerName(4,"PORTUGALIA");
  ChangeFriends(1,0x32);
  ChangeFriends(5,0x32);
  ChangeFriends(4,0x32);
  EnableUnit(0,&DAT_100334b0,0);
  EnableUnit(0,&DAT_100335f8,0);
  EnableUnit(0,&DAT_100334b8,0);
  EnableUnit(0,&DAT_10033600,0);
  EnableUnit(0,&DAT_100334c0,0);
  EnableUnit(0,&DAT_100335f0,0);
  EnableUnit(0,&DAT_10033458,0);
  EnableUnit(0,&DAT_10033468,0);
  EnableUnit(0,&DAT_10033528,0);
  EnableUnit(0,&DAT_10033530,0);
  uStack_8 = 0x1000204e;
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
    TakeFood(&DAT_10033500);
    TakeFood(&DAT_100334f8);
    TakeStone(&DAT_10033520);
    TakeStone(&DAT_10033518);
    TakeWood(&DAT_100334f0);
    TakeWood(&DAT_100334e8);
    TakeWood(&DAT_100334e0);
    SelectUnits(&DAT_10033740,0);
    SelectUnits(&DAT_10033738,1);
    SelectUnits(&DAT_10033750,1);
    SelectUnits(&DAT_10033748,1);
    SelOpenGates(4);
    SelectUnits(&DAT_10033620,0);
    Patrol(4,&DAT_100335e0,0);
    SelectUnits(&DAT_10033628,0);
    Patrol(4,&DAT_100335e8,0x82);
    local_18 = GetDiff(0);
    switch(local_18) {
    case 0:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10033540,0);
      SelectUnits(&DAT_10033538,1);
      SelectUnits(&DAT_10033610,1);
      SelectUnits(&DAT_10033618,1);
      SelectUnits(&DAT_10033620,1);
      SelectUnits(&DAT_10033628,1);
      SelectUnits(&DAT_10033608,1);
      SelectUnits(&DAT_10033688,1);
      SelectUnits(&DAT_10033690,1);
      SelErase(4);
      SelectUnits(&DAT_10033648,0);
      SelectUnits(&DAT_10033650,1);
      SelectUnits(&DAT_10033658,1);
      SelectUnits(&DAT_10033660,1);
      SelErase(5);
      DAT_10033718 = 0x50;
      DAT_10033558 = 1;
      DAT_100335a8 = 1;
      DAT_100335d8 = 1;
      DAT_10033640 = 1;
      DAT_10033668 = 1;
      DAT_10033698 = 1;
      break;
    case 1:
      SetResource(0,3,8000);
      SetResource(0,0,8000);
      SetResource(0,2,8000);
      SetResource(0,1,8000);
      SetResource(0,5,8000);
      SetResource(0,4,8000);
      SelectUnits(&DAT_10033610,0);
      SelectUnits(&DAT_10033618,1);
      SelectUnits(&DAT_10033620,1);
      SelectUnits(&DAT_10033628,1);
      SelectUnits(&DAT_10033608,1);
      SelectUnits(&DAT_10033688,1);
      SelectUnits(&DAT_10033690,1);
      SelErase(4);
      SelectUnits(&DAT_10033658,0);
      SelectUnits(&DAT_10033660,1);
      SelErase(5);
      DAT_10033718 = 0x3c;
      DAT_10033558 = 2;
      DAT_100335a8 = 2;
      DAT_100335d8 = 3;
      DAT_10033640 = 2;
      DAT_10033668 = 1;
      DAT_10033698 = 2;
      break;
    case 2:
      SetResource(0,3,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      SetResource(0,1,7000);
      SetResource(0,5,7000);
      SetResource(0,4,7000);
      SelectUnits(&DAT_10033610,0);
      SelectUnits(&DAT_10033618,1);
      SelectUnits(&DAT_10033688,1);
      SelectUnits(&DAT_10033690,1);
      SelErase(4);
      SelectUnits(&DAT_10033660,0);
      SelErase(5);
      DAT_10033718 = 0x2d;
      DAT_10033558 = 3;
      DAT_100335a8 = 2;
      DAT_100335d8 = 4;
      DAT_10033640 = 3;
      DAT_10033668 = 2;
      DAT_10033698 = 1;
      break;
    case 3:
      SetResource(0,3,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      SetResource(0,1,6000);
      SetResource(0,5,6000);
      SetResource(0,4,6000);
      InitialUpgrade("Gobj1","KUZ02PO");
      InitialUpgrade("Gobj1","AKA09PO");
      InitialUpgrade("Gobj1","AKA11PO");
      DAT_10033718 = 0x1e;
      DAT_10033558 = 4;
      DAT_100335a8 = 3;
      DAT_100335d8 = 5;
      DAT_10033640 = 4;
      DAT_10033668 = 2;
      DAT_10033698 = 2;
    }
    ClearSelection(4);
    RunTimer(1,300);
    RunTimer(0x1b,2000);
    iVar4 = GetDiff(0);
    RunTimer(0xe,(5 - iVar4) * 3000);
    iVar4 = GetDiff(0);
    RunTimer(0xf,(5 - iVar4) * 6000);
    iVar4 = GetDiff(0);
    RunTimer(0x10,(5 - iVar4) * 9000);
    iVar4 = GetDiff(0);
    RunTimer(0x11,(5 - iVar4) * 12000);
    iVar4 = GetDiff(0);
    RunTimer(0x12,(5 - iVar4) * 15000);
    iVar4 = GetDiff(0);
    RunTimer(0x13,(5 - iVar4) * 18000);
    iVar4 = GetDiff(0);
    RunTimer(0x14,(5 - iVar4) * 21000);
    iVar4 = GetDiff(0);
    RunTimer(0x15,(5 - iVar4) * 24000);
    iVar4 = GetDiff(0);
    RunTimer(0x16,(5 - iVar4) * 27000);
    InitialUpgrade("Gobj1","Melnica(PO)GETRES");
    InitialUpgrade("Gobj1","MAINPO");
    InitialUpgrade("Gobj1","Melnica(PO)GETRES2");
    InitialUpgrade("Gobj1","KUZ01PO");
    InitialUpgrade("Gobj1","KUZ03PO");
    InitialUpgrade("Gobj1","AKA01PO");
    InitialUpgrade("Gobj1","AKA02PO");
    InitialUpgrade("Gobj1","AKA03PO");
    InitialUpgrade("Gobj1","AKA04PO");
    InitialUpgrade("Gobj1","AKA08PO");
    InitialUpgrade("Gobj1","AKA24PO");
    InitialUpgrade("Gobj1","AKA32PO");
    InitialUpgrade("Gobj1","AKA35PO");
    InitialUpgrade("Gholop8","Melnica(PI)GETRES");
    InitialUpgrade("Gholop8","MAINPI");
    InitialUpgrade("Gholop8","Melnica(PI)GETRES2");
    InitialUpgrade("Gholop8","KUZ01PI");
    InitialUpgrade("Gholop8","AKA01PI");
    InitialUpgrade("Gholop8","AKA02PI");
    InitialUpgrade("Gholop8","AKA03PI");
    InitialUpgrade("Gholop8","AKA04PI");
    InitialUpgrade("Gholop8","AKA10PI");
    InitialUpgrade("Gholop9","Melnica(VE)GETRES");
    InitialUpgrade("Gholop9","MAINVE");
    InitialUpgrade("Gholop9","Melnica(VE)GETRES2");
    InitialUpgrade("Gholop9","KUZ01VE");
    InitialUpgrade("Gholop9","AKA01VE");
    InitialUpgrade("Gholop9","AKA02VE");
    InitialUpgrade("Gholop9","AKA03VE");
    InitialUpgrade("Gholop9","AKA04VE");
    InitialUpgrade("Gholop9","AKA10VE");
    SetResource(1,3,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    uVar2 = GetDiff(0);
    StartAI(1,"VENECIA.0",0,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      local_1c = GetDiff(0);
      switch(local_1c) {
      case 0:
        DAT_10033558 = DAT_10033558 + 1;
        DAT_100335a8 = DAT_100335a8 + 1;
        DAT_100335d8 = DAT_100335d8 + 1;
        DAT_10033640 = DAT_10033640 + 1;
        DAT_10033668 = DAT_10033668 + 1;
        DAT_10033698 = DAT_10033698 + 1;
        break;
      case 1:
        DAT_10033558 = DAT_10033558 + 2;
        DAT_100335a8 = DAT_100335a8 + 1;
        DAT_100335d8 = DAT_100335d8 + 2;
        DAT_10033640 = DAT_10033640 + 2;
        DAT_10033668 = DAT_10033668 + 1;
        DAT_10033698 = DAT_10033698 + 2;
        break;
      case 2:
        DAT_10033558 = DAT_10033558 + 3;
        DAT_100335a8 = DAT_100335a8 + 2;
        DAT_100335d8 = DAT_100335d8 + 3;
        DAT_10033640 = DAT_10033640 + 3;
        DAT_10033668 = DAT_10033668 + 2;
        DAT_10033698 = DAT_10033698 + 1;
        break;
      case 3:
        DAT_10033558 = DAT_10033558 + 4;
        DAT_100335a8 = DAT_100335a8 + 2;
        DAT_100335d8 = DAT_100335d8 + 4;
        DAT_10033640 = DAT_10033640 + 4;
        DAT_10033668 = DAT_10033668 + 3;
        DAT_10033698 = DAT_10033698 + 2;
      }
      iVar4 = GetDiff(0);
      RunTimer(0xd,(5 - iVar4) * 8000);
    }
  }
  uVar1 = TimerDoneFirst(0xe);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer(PO)ATTACK");
    InitialUpgrade("Gobj1","Mushketer(PO)SHIELD");
    InitialUpgrade("Gobj1","Grenader(PO)ATTACK");
    InitialUpgrade("Gobj1","Grenader(PO)SHIELD");
    InitialUpgrade("Gobj1","Gusar_evro(PO)ATTACK");
    InitialUpgrade("Gobj1","Gusar_evro(PO)SHIELD");
    InitialUpgrade("Gobj1","Kirasir(PO)ATTACK");
    InitialUpgrade("Gobj1","Kirasir(PO)SHIELD");
    InitialUpgrade("Gobj1","Dragun_18(PO)ATTACK");
    InitialUpgrade("Gobj1","Dragun_18(PO)SHIELD");
  }
  uVar1 = TimerDoneFirst(0xf);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer(PO)ATTACK3");
    InitialUpgrade("Gobj1","Mushketer(PO)SHIELD3");
    InitialUpgrade("Gobj1","Grenader(PO)ATTACK3");
    InitialUpgrade("Gobj1","Grenader(PO)SHIELD3");
    InitialUpgrade("Gobj1","Gusar_evro(PO)ATTACK3");
    InitialUpgrade("Gobj1","Gusar_evro(PO)SHIELD3");
    InitialUpgrade("Gobj1","Kirasir(PO)ATTACK3");
    InitialUpgrade("Gobj1","Kirasir(PO)SHIELD3");
    InitialUpgrade("Gobj1","Dragun_18(PO)ATTACK3");
    InitialUpgrade("Gobj1","Dragun_18(PO)SHIELD3");
  }
  uVar1 = TimerDoneFirst(0x10);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer(PO)ATTACK4");
    InitialUpgrade("Gobj1","Mushketer(PO)SHIELD4");
    InitialUpgrade("Gobj1","Grenader(PO)ATTACK4");
    InitialUpgrade("Gobj1","Grenader(PO)SHIELD4");
    InitialUpgrade("Gobj1","Gusar_evro(PO)ATTACK4");
    InitialUpgrade("Gobj1","Gusar_evro(PO)SHIELD4");
    InitialUpgrade("Gobj1","Kirasir(PO)ATTACK4");
    InitialUpgrade("Gobj1","Kirasir(PO)SHIELD4");
    InitialUpgrade("Gobj1","Dragun_18(PO)ATTACK4");
    InitialUpgrade("Gobj1","Dragun_18(PO)SHIELD4");
  }
  uVar1 = TimerDoneFirst(0x11);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer(PO)ATTACK5");
    InitialUpgrade("Gobj1","Mushketer(PO)SHIELD5");
    InitialUpgrade("Gobj1","Grenader(PO)ATTACK5");
    InitialUpgrade("Gobj1","Grenader(PO)SHIELD5");
    InitialUpgrade("Gobj1","Gusar_evro(PO)ATTACK5");
    InitialUpgrade("Gobj1","Gusar_evro(PO)SHIELD5");
    InitialUpgrade("Gobj1","Kirasir(PO)ATTACK5");
    InitialUpgrade("Gobj1","Kirasir(PO)SHIELD5");
    InitialUpgrade("Gobj1","Dragun_18(PO)ATTACK5");
    InitialUpgrade("Gobj1","Dragun_18(PO)SHIELD5");
  }
  uVar1 = TimerDoneFirst(0x12);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer(PO)ATTACK6");
    InitialUpgrade("Gobj1","Mushketer(PO)SHIELD6");
    InitialUpgrade("Gobj1","Grenader(PO)ATTACK6");
    InitialUpgrade("Gobj1","Grenader(PO)SHIELD6");
    InitialUpgrade("Gobj1","Gusar_evro(PO)ATTACK6");
    InitialUpgrade("Gobj1","Gusar_evro(PO)SHIELD6");
    InitialUpgrade("Gobj1","Kirasir(PO)ATTACK6");
    InitialUpgrade("Gobj1","Kirasir(PO)SHIELD6");
    InitialUpgrade("Gobj1","Dragun_18(PO)ATTACK6");
    InitialUpgrade("Gobj1","Dragun_18(PO)SHIELD6");
  }
  uVar1 = TimerDoneFirst(0x13);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer(PO)ATTACK7");
    InitialUpgrade("Gobj1","Mushketer(PO)SHIELD7");
    InitialUpgrade("Gobj1","Grenader(PO)ATTACK7");
    InitialUpgrade("Gobj1","Grenader(PO)SHIELD7");
    InitialUpgrade("Gobj1","Gusar_evro(PO)ATTACK7");
    InitialUpgrade("Gobj1","Gusar_evro(PO)SHIELD7");
    InitialUpgrade("Gobj1","Kirasir(PO)ATTACK7");
    InitialUpgrade("Gobj1","Kirasir(PO)SHIELD7");
    InitialUpgrade("Gobj1","Dragun_18(PO)ATTACK7");
    InitialUpgrade("Gobj1","Dragun_18(PO)SHIELD7");
    InitialUpgrade("Gobj1","KUZ04PO");
    InitialUpgrade("Gobj1","AKA12PO");
    InitialUpgrade("Gobj1","AKA31PO");
  }
  uVar1 = TimerDoneFirst(0x14);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA13PO");
    InitialUpgrade("Gobj1","KUZ06PO");
  }
  uVar1 = TimerDoneFirst(0x15);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA34PO");
    InitialUpgrade("Gobj1","AKA14PO");
    InitialUpgrade("Gobj1","AKA33PO");
  }
  uVar1 = TimerDoneFirst(0x16);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA15PO");
    InitialUpgrade("Gobj1","AKA36PO");
    InitialUpgrade("Gobj1","KUZ05PO");
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10033680,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_10033728,0);
      if (iVar4 < 1) goto LAB_10003fd6;
    }
    SetTrigg(3,0);
    ShowPage("#PAGE2");
  }
LAB_10003fd6:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033670,&DAT_100334d0);
    iVar3 = GetTotalAmount0(&DAT_100334d0);
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      SelectUnits(&DAT_100334d0,0);
      SelSendTo(5,&DAT_10033760,0xc3,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033670,&DAT_100334d0);
    iVar3 = GetTotalAmount0(&DAT_100334d0);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100334d0,0);
      Patrol(5,&DAT_10033758,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334d0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033670,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 8000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 8000);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033678,&DAT_100334c8);
    iVar3 = GetTotalAmount0(&DAT_100334c8);
    if (iVar4 < iVar3) {
      SetTrigg(0x14,1);
      SelectUnits(&DAT_100334c8,0);
      SelSendTo(5,&DAT_10033770,0xc3,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10033678,&DAT_100334c8);
    iVar3 = GetTotalAmount0(&DAT_100334c8);
    if (iVar4 == iVar3) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_100334c8,0);
      Patrol(5,&DAT_10033768,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100334c8);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033678,0);
      if (0 < iVar4) {
        SetTrigg(0x15,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 10000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 10000);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPageParam("#PAGE0A",DAT_10033718);
      RunTimer(2,DAT_10033718 * 0x8fc);
      RunTimer(0x1c,0x2cec);
    }
  }
  uVar1 = TimerDoneFirst(0x1c);
  if ((uVar1 & 0xff) != 0) {
    DAT_10033718 = DAT_10033718 + -5;
    ShowPageParam("#PAGE0B",DAT_10033718);
    if (DAT_10033718 == 5) {
      FreeTimer(0x1c);
    }
    else {
      RunTimer(0x1c,0x2cec);
    }
  }
  uVar1 = TimerDoneFirst(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x60,0);
      ShowPage("#PAGE0C");
      iVar4 = GetDiff(0);
      RunTimer(0xd,(5 - iVar4) * 8000);
      iVar4 = GetDiff(0);
      if (iVar4 != 0) {
        iVar4 = GetDiff(0);
        if (iVar4 != 1) goto LAB_10004679;
      }
      SetLightSpot(&DAT_10033630,1,1);
      SetLightSpot(&DAT_10033638,1,2);
    }
  }
LAB_10004679:
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
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x62,0);
      ShowPage("#PAGE1B");
      LooseGame();
    }
  }
  iVar4 = GetTotalAmount0(&DAT_10033478);
  if (0 < iVar4) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      for (local_8 = 0; local_8 < DAT_10033558; local_8 = local_8 + 1) {
        ProduceUnitFast(&DAT_10033478,&DAT_100334d8,&DAT_10033448,0);
      }
    }
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10033478);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(3,100);
        SetTrigg(10,0);
      }
    }
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(3);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(4,0);
          FreeTimer(3);
          RunTimer(8,4000);
          SetTrigg(10,1);
          SelectUnits(&DAT_10033448,0);
          SelSendAndKill(4,&DAT_10033418,0,0);
          SelSendAndKill(4,&DAT_100336b0,200,2);
          SelSendAndKill(4,&DAT_100336b8,0x1e,2);
          SelSendAndKill(4,&DAT_100336a0,0xdc,2);
          SelSendAndKill(4,&DAT_100336a8,200,2);
          SelSendAndKill(4,&DAT_10033778,0x82,2);
          RemoveGroup(&DAT_10033448,&DAT_10033408);
          ClearSelection(4);
          SetTrigg(9,1);
        }
      }
    }
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_10033408);
        if (iVar4 != 0) {
          uVar1 = TimerDoneFirst(8);
          if ((uVar1 & 0xff) == 0) goto LAB_10004b0a;
        }
        FreeTimer(8);
        SetTrigg(4,1);
      }
    }
  }
LAB_10004b0a:
  iVar4 = GetTotalAmount0(&DAT_10033480);
  if (0 < iVar4) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      for (local_c = 0; local_c < DAT_100335a8; local_c = local_c + 1) {
        ProduceUnitFast(&DAT_10033480,&DAT_10033470,&DAT_10033430,0);
      }
    }
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10033480);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(4,100);
        SetTrigg(0xd,0);
      }
    }
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(7);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(4);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(7,0);
          FreeTimer(4);
          RunTimer(9,6000);
          SetTrigg(0xd,1);
          SelectUnits(&DAT_10033430,0);
          SelSendAndKill(4,&DAT_10033428,0xdc,0);
          SelSendAndKill(4,&DAT_100336d8,0xdc,2);
          SelSendAndKill(4,&DAT_100336c0,0xc3,2);
          RemoveGroup(&DAT_10033430,&DAT_10033400);
          ClearSelection(4);
          SetTrigg(0xb,1);
        }
      }
    }
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(7);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_10033400);
        if (iVar4 != 0) {
          uVar1 = TimerDoneFirst(9);
          if ((uVar1 & 0xff) == 0) goto LAB_10004e1e;
        }
        FreeTimer(9);
        SetTrigg(7,1);
      }
    }
  }
LAB_10004e1e:
  iVar4 = GetTotalAmount0(&DAT_10033488);
  if (0 < iVar4) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x10,0);
      for (local_10 = 0; local_10 < DAT_100335d8; local_10 = local_10 + 1) {
        ProduceUnitFast(&DAT_10033488,&DAT_10033720,&DAT_10033460,0);
      }
    }
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10033488);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(5,100);
        SetTrigg(5,0);
      }
    }
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(8);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(5);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(8,0);
          FreeTimer(5);
          RunTimer(10,6000);
          SetTrigg(5,1);
          SelectUnits(&DAT_10033460,0);
          SelSendAndKill(4,&DAT_10033440,0xaa,0);
          SelSendAndKill(4,&DAT_100336c0,0xc3,2);
          RemoveGroup(&DAT_10033460,&DAT_10033410);
          ClearSelection(4);
          SetTrigg(0x10,1);
        }
      }
    }
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(8);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_10033410);
        if (iVar4 != 0) {
          uVar1 = TimerDoneFirst(10);
          if ((uVar1 & 0xff) == 0) goto LAB_10005112;
        }
        FreeTimer(10);
        SetTrigg(8,1);
      }
    }
  }
LAB_10005112:
  iVar4 = GetTotalAmount0(&DAT_10033490);
  if (0 < iVar4) {
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xe,0);
      for (local_14 = 0; local_14 < DAT_10033640; local_14 = local_14 + 1) {
        ProduceUnitFast(&DAT_10033490,&DAT_100334d8,&DAT_10033450,0);
      }
    }
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10033490);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(6,100);
        SetTrigg(6,0);
      }
    }
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x12);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(6);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x12,0);
          FreeTimer(6);
          RunTimer(0xb,4000);
          SetTrigg(6,1);
          SelectUnits(&DAT_10033450,0);
          SelSendAndKill(4,&DAT_10033420,100,0);
          SelSendAndKill(4,&DAT_100336c8,0x82,2);
          SelSendAndKill(4,&DAT_100336e0,0x46,2);
          SelSendAndKill(4,&DAT_10033788,0x82,2);
          SelSendAndKill(4,&DAT_10033780,0x96,2);
          SelSendAndKill(4,&DAT_100336d0,0,2);
          RemoveGroup(&DAT_10033450,&DAT_10033550);
          ClearSelection(4);
          SetTrigg(0xe,1);
        }
      }
    }
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x12);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_10033550);
        if (iVar4 != 0) {
          uVar1 = TimerDoneFirst(0xb);
          if ((uVar1 & 0xff) == 0) goto LAB_1000547d;
        }
        FreeTimer(0xb);
        SetTrigg(0x12,1);
      }
    }
  }
LAB_1000547d:
  ClearSelection(4);
  SelectUnitsType(&DAT_10033708,4,0);
  SelectUnitsType(&DAT_10033700,4,1);
  SelectUnitsType(&DAT_10033710,4,1);
  SelectUnitsType(&DAT_10033438,4,1);
  SelDie(4);
  ClearSelection(4);
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033730);
    if (iVar4 == 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE7");
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x11,0);
      ShowPage("#PAGE8A");
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
      ShowVictory();
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
