#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002f030[] = "SUXX";
long long DAT_100353e0 = 0;
long long DAT_100353e8 = 0;
long long DAT_100353f0 = 0;
long long DAT_100353f8 = 0;
long long DAT_10035400 = 0;
long long DAT_10035408 = 0;
long long DAT_10035410 = 0;
long long DAT_10035418 = 0;
long long DAT_10035420 = 0;
long long DAT_10035428 = 0;
long long DAT_10035430 = 0;
long long DAT_10035438 = 0;
long long DAT_10035440 = 0;
long long DAT_10035448 = 0;
long long DAT_10035450 = 0;
long long DAT_10035458 = 0;
long long DAT_10035460 = 0;
long long DAT_10035468 = 0;
long long DAT_10035470 = 0;
long long DAT_10035478 = 0;
long long DAT_10035480 = 0;
long long DAT_10035488 = 0;
long long DAT_10035490 = 0;
long long DAT_10035498 = 0;
long long DAT_100354a0 = 0;
long long DAT_100354a8 = 0;
long long DAT_100354b0 = 0;
long long DAT_100354b8 = 0;
long long DAT_100354c0 = 0;
long long DAT_100354c8 = 0;
long long DAT_100354d0 = 0;
long long DAT_100354d8 = 0;
long long DAT_100354e0 = 0;
long long DAT_100354e8 = 0;
long long DAT_100354f0 = 0;
long long DAT_100354f8 = 0;
long long DAT_10035500 = 0;
long long DAT_10035508 = 0;
long long DAT_10035510 = 0;
long long DAT_10035518 = 0;
long long DAT_10035520 = 0;
long long DAT_10035528 = 0;
long long DAT_10035530 = 0;
long long DAT_10035538 = 0;
long long DAT_10035540 = 0;
long long DAT_10035548 = 0;
long long DAT_10035550 = 0;
long long DAT_10035558 = 0;
long long DAT_10035560 = 0;
long long DAT_10035568 = 0;
long long DAT_10035570 = 0;
long long DAT_10035578 = 0;
long long DAT_10035580 = 0;
long long DAT_10035588 = 0;
long long DAT_10035590 = 0;
int DAT_10035598 = 0;
long long DAT_100355a0 = 0;
long long DAT_100355a8 = 0;
long long DAT_100355b0 = 0;
long long DAT_100355b8 = 0;
long long DAT_100355c0 = 0;
long long DAT_100355c8 = 0;
long long DAT_100355d0 = 0;
long long DAT_100355d8 = 0;
long long DAT_100355e0 = 0;
long long DAT_100355e8 = 0;
long long DAT_100355f0 = 0;
long long DAT_100355f8 = 0;
long long DAT_10035600 = 0;
int DAT_10035608 = 0;
long long DAT_10035610 = 0;
long long DAT_10035618 = 0;
long long DAT_10035620 = 0;
long long DAT_10035628 = 0;
long long DAT_10035630 = 0;
int DAT_10035638 = 0;
long long DAT_10035640 = 0;
long long DAT_10035648 = 0;
long long DAT_10035650 = 0;
long long DAT_10035658 = 0;
long long DAT_10035660 = 0;
long long DAT_10035668 = 0;
long long DAT_10035670 = 0;
long long DAT_10035678 = 0;
long long DAT_10035680 = 0;
long long DAT_10035688 = 0;
long long DAT_10035690 = 0;
long long DAT_10035698 = 0;
long long DAT_100356a0 = 0;
long long DAT_100356a8 = 0;
int DAT_100356b0 = 0;
long long DAT_100356b8 = 0;
int DAT_100356c0 = 0;
long long DAT_100356c8 = 0;
long long DAT_100356d0 = 0;
int DAT_100356d8 = 0;
long long DAT_100356e0 = 0;
long long DAT_100356e8 = 0;
long long DAT_100356f0 = 0;
long long DAT_100356f8 = 0;
long long DAT_10035700 = 0;
long long DAT_10035708 = 0;
long long DAT_10035710 = 0;
long long DAT_10035718 = 0;
long long DAT_10035720 = 0;
long long DAT_10035728 = 0;
long long DAT_10035730 = 0;
long long DAT_10035738 = 0;
long long DAT_10035740 = 0;
long long DAT_10035748 = 0;
long long DAT_10035750 = 0;
long long DAT_10035758 = 0;
long long DAT_10035760 = 0;
long long DAT_10035768 = 0;
long long DAT_10035770 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10035548,"Gholop1");
  RegisterUnits(&DAT_10035540,"Gholop2");
  RegisterUnits(&DAT_10035538,"Gholop3");
  RegisterUnits(&DAT_10035530,"Gholop4");
  RegisterUnits(&DAT_10035528,"Gholop5");
  RegisterUnits(&DAT_10035568,"Gholop6");
  RegisterUnits(&DAT_10035560,"Gholop7");
  RegisterUnits(&DAT_10035558,"Gholop8");
  RegisterUnits(&DAT_10035550,"Gholop9");
  RegisterUnits(&DAT_100354f8,"Gholop10");
  RegisterUnits(&DAT_100354e0,"Gholop11");
  RegisterUnits(&DAT_100354d8,"Gholop12");
  RegisterUnits(&DAT_100354e8,"Gholop13");
  RegisterUnits(&DAT_100354c8,"Gholop15");
  RegisterUnits(&DAT_10035770,"Gport1");
  RegisterUnits(&DAT_100353e8,"Gport2");
  RegisterUnits(&DAT_100353e0,"Gport3");
  RegisterUnits(&DAT_100353f8,"Gport4");
  RegisterUnits(&DAT_100353f0,"Gport5");
  RegisterUnits(&DAT_10035400,"Gport6");
  RegisterUnits(&DAT_10035680,"Gmush1");
  RegisterUnits(&DAT_10035678,"Gmush2");
  RegisterUnits(&DAT_10035740,"Gcentr");
  RegisterUnits(&DAT_10035728,"Goxrana1");
  RegisterUnits(&DAT_10035730,"Goxrana2");
  RegisterUnits(&DAT_100354d0,"Gpatrol1");
  RegisterUnits(&DAT_100354b8,"Gpatrol2");
  RegisterUnits(&DAT_100354b0,"Gpatrol3");
  RegisterUnits(&DAT_100354c0,"Gpatrol4");
  RegisterUnits(&DAT_10035498,"Gobj1");
  RegisterUnits(&DAT_100354a0,"Gobj2");
  RegisterUnits(&DAT_100354a8,"Gobj3");
  RegisterUnits(&DAT_10035750,"Ggates1");
  RegisterUnits(&DAT_10035748,"Ggates2");
  RegisterUnits(&DAT_10035758,"Ggates3");
  RegisterUnits(&DAT_10035520,"Goboz");
  RegisterUnits(&DAT_10035578,"Gbash1");
  RegisterUnits(&DAT_10035570,"Gbash2");
  RegisterUnits(&DAT_10035580,"Gbash3");
  RegisterUnits(&DAT_100356c8,"Gdrag1");
  RegisterUnits(&DAT_100356d0,"Gdrag2");
  RegisterUnits(&DAT_10035688,"Gcir1");
  RegisterUnits(&DAT_10035690,"Gcir2");
  RegisterUnits(&DAT_10035488,"Gkon1");
  RegisterUnits(&DAT_10035490,"Gkon2");
  RegisterUnits(&DAT_10035760,"Gkaz1");
  RegisterUnits(&DAT_10035768,"Gkaz2");
  RegisterZone(&DAT_10035650,"Ztalk1");
  RegisterZone(&DAT_10035658,"Ztalk2");
  RegisterZone(&DAT_100356f0,"Zattack1");
  RegisterZone(&DAT_100356f8,"Zattack2");
  RegisterZone(&DAT_100356e0,"Zattack3");
  RegisterZone(&DAT_100356e8,"Zattack4");
  RegisterZone(&DAT_10035700,"Zattack5");
  RegisterZone(&DAT_10035708,"Zattack6");
  RegisterZone(&DAT_10035640,"Zpatrol1");
  RegisterZone(&DAT_10035648,"Zpatrol2");
  RegisterZone(&DAT_10035698,"Zsvet1");
  RegisterZone(&DAT_100356a0,"Zsvet2");
  RegisterZone(&DAT_100356a8,"Zsvet3");
  RegisterZone(&DAT_10035448,"Zotxod1");
  RegisterZone(&DAT_10035450,"Zotxod2");
  RegisterUnitType(&DAT_100354f0,"KUTTER(SA)");
  RegisterUnitType(&DAT_10035478,"KECH(SA)");
  RegisterUnitType(&DAT_100355e8,"GRUZ(UN)");
  RegisterUnitType(&DAT_10035438,"Grenader_Sacson(SA)");
  RegisterUnitType(&DAT_100356b8,"Mushketer_sakson(SA)");
  RegisterUnitType(&DAT_10035480,"Kirasir(SA)");
  RegisterUnitType(&DAT_10035738,"Dragun_18(SA)");
  RegisterUnitType(&DAT_10035508,"WALL_EV(au)");
  RegisterUnitType(&DAT_10035668,"WALL_UKR(au)");
  RegisterUnitType(&DAT_10035510,"WALL_EV(PL)");
  RegisterUnitType(&DAT_10035670,"WALL_UKR(PL)");
  RegisterUnitType(&DAT_10035518,"WALL_EV(SA)");
  RegisterUnitType(&DAT_10035660,"WALL_UKR(SA)");
  RegisterUnitType(&DAT_100355f0,"PorE(au)");
  RegisterUnitType(&DAT_100355f8,"PorE(PL)");
  RegisterUnitType(&DAT_10035600,"PorE(SA)");
  RegisterVar(&DAT_10035460,8);
  RegisterVar(&DAT_10035458,8);
  RegisterVar(&DAT_10035470,8);
  RegisterVar(&DAT_10035468,8);
  RegisterVar(&DAT_10035420,8);
  RegisterVar(&DAT_10035418,8);
  RegisterVar(&DAT_10035430,8);
  RegisterVar(&DAT_10035428,8);
  RegisterVar(&DAT_10035440,8);
  RegisterVar(&DAT_10035590,8);
  RegisterVar(&DAT_10035588,8);
  RegisterVar(&DAT_100355c8,8);
  RegisterVar(&DAT_100355c0,8);
  RegisterVar(&DAT_100355e0,8);
  RegisterVar(&DAT_100355d0,8);
  RegisterVar(&DAT_100355a8,8);
  RegisterVar(&DAT_100355a0,8);
  RegisterVar(&DAT_100355b8,8);
  RegisterVar(&DAT_100355b0,8);
  RegisterVar(&DAT_100355d8,8);
  RegisterVar(&DAT_10035598,4);
  RegisterVar(&DAT_10035608,4);
  RegisterVar(&DAT_10035638,4);
  RegisterVar(&DAT_100356b0,4);
  RegisterVar(&DAT_100356c0,4);
  RegisterVar(&DAT_100356d8,4);
  RegisterFormation(&DAT_10035720,"#LINE5");
  RegisterFormation(&DAT_10035618,"#LINE20PUS");
  RegisterFormation(&DAT_10035628,"#LINE30PUS");
  RegisterFormation(&DAT_10035630,"#LINE40PUS");
  RegisterFormation(&DAT_10035620,"#LINE15PUS");
  RegisterFormation(&DAT_10035610,"#LINE10PUS");
  RegisterFormation(&DAT_10035718,"#LINE3");
  RegisterFormation(&DAT_10035408,"#SHIPS3");
  RegisterFormation(&DAT_10035410,"#SHIPS5");
  RegisterFormation(&DAT_10035500,"#ALONE");
  RegisterDynGroup(&DAT_10035460);
  RegisterDynGroup(&DAT_10035458);
  RegisterDynGroup(&DAT_10035470);
  RegisterDynGroup(&DAT_10035468);
  RegisterDynGroup(&DAT_10035420);
  RegisterDynGroup(&DAT_10035418);
  RegisterDynGroup(&DAT_10035430);
  RegisterDynGroup(&DAT_10035428);
  RegisterDynGroup(&DAT_10035440);
  RegisterDynGroup(&DAT_10035590);
  RegisterDynGroup(&DAT_10035588);
  RegisterDynGroup(&DAT_100355c8);
  RegisterDynGroup(&DAT_100355c0);
  RegisterDynGroup(&DAT_100355e0);
  RegisterDynGroup(&DAT_100355d0);
  RegisterDynGroup(&DAT_100355a8);
  RegisterDynGroup(&DAT_100355a0);
  RegisterDynGroup(&DAT_100355b8);
  RegisterDynGroup(&DAT_100355b0);
  RegisterDynGroup(&DAT_100355d8);
  RegisterDynGroup(&DAT_10035710);
  SetPlayerName(1,"FRANCE");
  SetPlayerName(2,DAT_1002f030);
  SetPlayerName(3,"POLAND");
  SetPlayerName(4,"BAVARIA");
  ChangeFriends(0,3);
  ChangeFriends(1,3);
  ChangeFriends(2,0x1c);
  ChangeFriends(3,0x1c);
  ChangeFriends(4,0x1c);
  EnableUnit(0,&DAT_10035508,0);
  EnableUnit(0,&DAT_10035668,0);
  EnableUnit(0,&DAT_10035510,0);
  EnableUnit(0,&DAT_10035670,0);
  EnableUnit(0,&DAT_10035518,0);
  EnableUnit(0,&DAT_10035660,0);
  EnableUnit(0,&DAT_100355f0,0);
  EnableUnit(0,&DAT_100355f8,0);
  uStack_8 = 0x1000200c;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_24;
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
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
    TakeFood(&DAT_10035548);
    TakeFood(&DAT_10035560);
    TakeStone(&DAT_10035530);
    TakeStone(&DAT_10035558);
    TakeStone(&DAT_10035550);
    TakeStone(&DAT_100354f8);
    TakeStone(&DAT_100354e0);
    TakeWood(&DAT_10035540);
    TakeWood(&DAT_10035538);
    TakeWood(&DAT_100354d8);
    TakeWood(&DAT_100354e8);
    SelectUnits(&DAT_10035750,0);
    SelectUnits(&DAT_10035748,1);
    SelectUnits(&DAT_10035758,1);
    SelOpenGates(2);
    SelectUnits(&DAT_10035728,0);
    SelectUnits(&DAT_10035730,1);
    SetStandGround(2,1);
    SelectUnits(&DAT_100354d0,0);
    SelectUnits(&DAT_100354b0,1);
    Patrol(2,&DAT_10035640,0);
    ClearSelection(2);
    SelectUnits(&DAT_100354b8,0);
    SelectUnits(&DAT_100354c0,1);
    Patrol(2,&DAT_10035648,0xc3);
    ClearSelection(2);
    local_20 = GetDiff(0);
    switch(local_20) {
    case 0:
      SetResource(0,3,20000);
      SetResource(0,0,20000);
      SetResource(0,2,20000);
      SetResource(0,1,20000);
      SetResource(0,5,20000);
      SetResource(0,4,20000);
      SelectUnits(&DAT_10035578,0);
      SelectUnits(&DAT_10035728,1);
      SelectUnits(&DAT_10035730,1);
      SelectUnits(&DAT_100354d0,1);
      SelectUnits(&DAT_100354b0,1);
      SelectUnits(&DAT_100354b8,1);
      SelectUnits(&DAT_100354c0,1);
      SelectUnits(&DAT_10035688,1);
      SelectUnits(&DAT_10035680,1);
      SelectUnits(&DAT_100356c8,1);
      SelectUnits(&DAT_10035690,1);
      SelectUnits(&DAT_10035678,1);
      SelectUnits(&DAT_100356d0,1);
      SelErase(2);
      SelectUnits(&DAT_10035570,0);
      SelErase(3);
      DAT_10035598 = 1;
      DAT_10035608 = 1;
      DAT_10035638 = 1;
      DAT_100356b0 = 1;
      DAT_100356c0 = 1;
      DAT_100356d8 = 1;
      break;
    case 1:
      SetResource(0,3,15000);
      SetResource(0,0,15000);
      SetResource(0,2,15000);
      SetResource(0,1,15000);
      SetResource(0,5,15000);
      SetResource(0,4,15000);
      SelectUnits(&DAT_10035728,0);
      SelectUnits(&DAT_10035730,1);
      SelectUnits(&DAT_100354d0,1);
      SelectUnits(&DAT_100354b0,1);
      SelectUnits(&DAT_100354b8,1);
      SelectUnits(&DAT_100354c0,1);
      SelectUnits(&DAT_10035688,1);
      SelectUnits(&DAT_100356c8,1);
      SelectUnits(&DAT_10035690,1);
      SelectUnits(&DAT_100356d0,1);
      SelErase(2);
      DAT_10035598 = 3;
      DAT_10035608 = 3;
      DAT_10035638 = 2;
      DAT_100356b0 = 4;
      DAT_100356c0 = 1;
      DAT_100356d8 = 2;
      break;
    case 2:
      SetResource(0,3,12000);
      SetResource(0,0,12000);
      SetResource(0,2,12000);
      SetResource(0,1,12000);
      SetResource(0,5,12000);
      SetResource(0,4,12000);
      SelectUnits(&DAT_10035730,0);
      SelectUnits(&DAT_100354d0,1);
      SelectUnits(&DAT_100354b8,1);
      SelectUnits(&DAT_100356c8,1);
      SelectUnits(&DAT_100356d0,1);
      SelErase(2);
      DAT_10035598 = 4;
      DAT_10035608 = 4;
      DAT_10035638 = 3;
      DAT_100356b0 = 5;
      DAT_100356c0 = 2;
      DAT_100356d8 = 1;
      break;
    case 3:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      InitialUpgrade("Gobj1","KUZ02SA");
      InitialUpgrade("Gobj1","AKA09SA");
      InitialUpgrade("Gobj1","AKA11SA");
      DAT_10035598 = 5;
      DAT_10035608 = 5;
      DAT_10035638 = 4;
      DAT_100356b0 = 7;
      DAT_100356c0 = 2;
      DAT_100356d8 = 2;
    }
    RunTimer(1,300);
    RunTimer(2,2000);
    RunTimer(0x1b,4000);
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
    iVar3 = GetDiff(0);
    RunTimer(0x14,(5 - iVar3) * 21000);
    iVar3 = GetDiff(0);
    RunTimer(0x15,(5 - iVar3) * 24000);
    iVar3 = GetDiff(0);
    RunTimer(0x16,(5 - iVar3) * 27000);
    InitialUpgrade("Gobj1","Melnica(SA)GETRES");
    InitialUpgrade("Gobj1","MAINSA");
    InitialUpgrade("Gobj1","Melnica(SA)GETRES2");
    InitialUpgrade("Gobj1","KUZ01SA");
    InitialUpgrade("Gobj1","KUZ03SA");
    InitialUpgrade("Gobj1","KUZ05SA");
    InitialUpgrade("Gobj1","KUZ06SA");
    InitialUpgrade("Gobj1","AKA01SA");
    InitialUpgrade("Gobj1","AKA02SA");
    InitialUpgrade("Gobj1","AKA03SA");
    InitialUpgrade("Gobj1","AKA04SA");
    InitialUpgrade("Gobj1","AKA05SA");
    InitialUpgrade("Gobj1","AKA06SA");
    InitialUpgrade("Gobj1","AKA07SA");
    InitialUpgrade("Gobj1","AKA08SA");
    InitialUpgrade("Gobj1","AKA24SA");
    InitialUpgrade("Gobj1","AKA29SA");
    InitialUpgrade("Gobj1","AKA30SA");
    InitialUpgrade("Gobj1","AKA32SA");
    InitialUpgrade("Gobj1","AKA34SA");
    InitialUpgrade("Gobj1","AKA35SA");
    InitialUpgrade("Gobj1","NEWKUTT(SA)");
    InitialUpgrade("Gobj1","NEWKECH(SA)");
    InitialUpgrade("Gobj3","Melnica(fr)GETRES");
    InitialUpgrade("Gobj3","MAINFR");
    InitialUpgrade("Gobj3","Melnica(fr)GETRES2");
    InitialUpgrade("Gobj3","KUZ01FR");
    InitialUpgrade("Gobj3","KUZ02FR");
    InitialUpgrade("Gobj3","KUZ03FR");
    InitialUpgrade("Gobj3","KUZ04FR");
    InitialUpgrade("Gobj3","KUZ05FR");
    InitialUpgrade("Gobj3","KUZ06FR");
    InitialUpgrade("Gobj3","AKA01FR");
    InitialUpgrade("Gobj3","AKA02FR");
    InitialUpgrade("Gobj3","AKA03FR");
    InitialUpgrade("Gobj3","AKA04FR");
    InitialUpgrade("Gobj3","AKA05FR");
    InitialUpgrade("Gobj3","AKA06FR");
    InitialUpgrade("Gobj3","AKA07FR");
    InitialUpgrade("Gobj3","AKA08FR");
    InitialUpgrade("Gobj3","AKA09FR");
    InitialUpgrade("Gobj3","AKA10FR");
    InitialUpgrade("Gobj3","AKA11FR");
    InitialUpgrade("Gobj3","AKA16FR");
    InitialUpgrade("Gobj3","AKA17FR");
    InitialUpgrade("Gobj3","AKA18FR");
    InitialUpgrade("Gobj3","AKA19FR");
    InitialUpgrade("Gobj3","AKA20FR");
    InitialUpgrade("Gobj3","AKA24FR");
    InitialUpgrade("Gobj3","AKA27FR");
    InitialUpgrade("Gobj3","AKA28FR");
    InitialUpgrade("Gobj3","AKA29FR");
    InitialUpgrade("Gobj3","AKA30FR");
    InitialUpgrade("Gobj3","AKA31FR");
    InitialUpgrade("Gobj3","AKA32FR");
    InitialUpgrade("Gobj3","AKA33FR");
    InitialUpgrade("Gobj3","AKA34FR");
    InitialUpgrade("Gobj3","AKA35FR");
    InitialUpgrade("Gobj3","NEWKUTT(fr)");
    InitialUpgrade("Gholop5","Melnica(PL)GETRES");
    InitialUpgrade("Gholop5","MAINPL");
    InitialUpgrade("Gholop5","Melnica(PL)GETRES2");
    InitialUpgrade("Gholop5","KUZ01PL");
    InitialUpgrade("Gholop5","AKA01PL");
    InitialUpgrade("Gholop5","AKA02PL");
    InitialUpgrade("Gholop5","AKA03PL");
    InitialUpgrade("Gholop5","AKA04PL");
    InitialUpgrade("Gholop5","AKA10PL");
    InitialUpgrade("Gholop6","Melnica(BA)GETRES");
    InitialUpgrade("Gholop6","MAINBA");
    InitialUpgrade("Gholop6","Melnica(BA)GETRES2");
    InitialUpgrade("Gholop6","KUZ01BA");
    InitialUpgrade("Gholop6","AKA01BA");
    InitialUpgrade("Gholop6","AKA02BA");
    InitialUpgrade("Gholop6","AKA03BA");
    InitialUpgrade("Gholop6","AKA04BA");
    InitialUpgrade("Gholop6","AKA10BA");
    InitialUpgrade("Gobj2","Melnica(au)GETRES");
    InitialUpgrade("Gobj2","MAINAU");
    InitialUpgrade("Gobj2","Melnica(au)GETRES2");
    InitialUpgrade("Gobj2","KUZ01AU");
    InitialUpgrade("Gobj2","AKA01AU");
    InitialUpgrade("Gobj2","AKA02AU");
    InitialUpgrade("Gobj2","AKA03AU");
    InitialUpgrade("Gobj2","AKA04AU");
    InitialUpgrade("Gobj2","AKA05AU");
    InitialUpgrade("Gobj2","AKA07AU");
    InitialUpgrade("Gobj2","AKA10AU");
    InitialUpgrade("Gobj2","AKA16AU");
    InitialUpgrade("Gobj2","AKA17AU");
    InitialUpgrade("Gobj2","AKA20AU");
    InitialUpgrade("Gobj2","AKA27AU");
    InitialUpgrade("Gobj2","AKA28AU");
    InitialUpgrade("Gobj2","AKA30AU");
    InitialUpgrade("Gobj2","NEWKUTT(au)");
    SetResource(3,3,10000);
    SetResource(3,0,10000);
    SetResource(3,2,10000);
    SetResource(3,1,10000);
    SetResource(3,5,10000);
    SetResource(3,4,10000);
    uVar2 = GetDiff(0);
    StartAI(3,"POLAND.0",0,1,2,uVar2);
    SetResource(4,3,50000);
    SetResource(4,0,50000);
    SetResource(4,2,50000);
    SetResource(4,1,50000);
    SetResource(4,5,50000);
    SetResource(4,4,50000);
    uVar2 = GetDiff(0);
    StartAI(4,"BAVARIA.0",2,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      local_24 = GetDiff(0);
      switch(local_24) {
      case 0:
        DAT_10035598 = DAT_10035598 + 1;
        DAT_10035608 = DAT_10035608 + 1;
        DAT_10035638 = DAT_10035638 + 1;
        DAT_100356b0 = DAT_100356b0 + 1;
        DAT_100356c0 = DAT_100356c0 + 1;
        DAT_100356d8 = DAT_100356d8 + 1;
        break;
      case 1:
        DAT_10035598 = DAT_10035598 + 2;
        DAT_10035608 = DAT_10035608 + 2;
        DAT_10035638 = DAT_10035638 + 2;
        DAT_100356b0 = DAT_100356b0 + 3;
        DAT_100356c0 = DAT_100356c0 + 1;
        DAT_100356d8 = DAT_100356d8 + 2;
        break;
      case 2:
        DAT_10035598 = DAT_10035598 + 3;
        DAT_10035608 = DAT_10035608 + 3;
        DAT_10035638 = DAT_10035638 + 3;
        DAT_100356b0 = DAT_100356b0 + 4;
        DAT_100356c0 = DAT_100356c0 + 2;
        DAT_100356d8 = DAT_100356d8 + 1;
        break;
      case 3:
        DAT_10035598 = DAT_10035598 + 4;
        DAT_10035608 = DAT_10035608 + 4;
        DAT_10035638 = DAT_10035638 + 4;
        DAT_100356b0 = DAT_100356b0 + 5;
        DAT_100356c0 = DAT_100356c0 + 3;
        DAT_100356d8 = DAT_100356d8 + 2;
      }
      iVar3 = GetDiff(0);
      RunTimer(0xd,(5 - iVar3) * 7000);
    }
  }
  uVar1 = TimerDoneFirst(0xe);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)ATTACK");
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)SHIELD");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)ATTACK");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)SHIELD");
    InitialUpgrade("Gobj1","Kirasir(SA)ATTACK");
    InitialUpgrade("Gobj1","Kirasir(SA)SHIELD");
    InitialUpgrade("Gobj1","Dragun_18(SA)ATTACK");
    InitialUpgrade("Gobj1","Dragun_18(SA)SHIELD");
  }
  uVar1 = TimerDoneFirst(0xf);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)ATTACK3");
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)SHIELD3");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)ATTACK3");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)SHIELD3");
    InitialUpgrade("Gobj1","Kirasir(SA)ATTACK3");
    InitialUpgrade("Gobj1","Kirasir(SA)SHIELD3");
    InitialUpgrade("Gobj1","Dragun_18(SA)ATTACK3");
    InitialUpgrade("Gobj1","Dragun_18(SA)SHIELD3");
  }
  uVar1 = TimerDoneFirst(0x10);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)ATTACK4");
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)SHIELD4");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)ATTACK4");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)SHIELD4");
    InitialUpgrade("Gobj1","Kirasir(SA)ATTACK4");
    InitialUpgrade("Gobj1","Kirasir(SA)SHIELD4");
    InitialUpgrade("Gobj1","Dragun_18(SA)ATTACK4");
    InitialUpgrade("Gobj1","Dragun_18(SA)SHIELD4");
  }
  uVar1 = TimerDoneFirst(0x11);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)ATTACK5");
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)SHIELD5");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)ATTACK5");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)SHIELD5");
    InitialUpgrade("Gobj1","Kirasir(SA)ATTACK5");
    InitialUpgrade("Gobj1","Kirasir(SA)SHIELD5");
    InitialUpgrade("Gobj1","Dragun_18(SA)ATTACK5");
    InitialUpgrade("Gobj1","Dragun_18(SA)SHIELD5");
  }
  uVar1 = TimerDoneFirst(0x12);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)ATTACK6");
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)SHIELD6");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)ATTACK6");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)SHIELD6");
    InitialUpgrade("Gobj1","Kirasir(SA)ATTACK6");
    InitialUpgrade("Gobj1","Kirasir(SA)SHIELD6");
    InitialUpgrade("Gobj1","Dragun_18(SA)ATTACK6");
    InitialUpgrade("Gobj1","Dragun_18(SA)SHIELD6");
  }
  uVar1 = TimerDoneFirst(0x13);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)ATTACK7");
    InitialUpgrade("Gobj1","Mushketer_sakson(SA)SHIELD7");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)ATTACK7");
    InitialUpgrade("Gobj1","Grenader_Sacson(SA)SHIELD7");
    InitialUpgrade("Gobj1","Kirasir(SA)ATTACK7");
    InitialUpgrade("Gobj1","Kirasir(SA)SHIELD7");
    InitialUpgrade("Gobj1","Dragun_18(SA)ATTACK7");
    InitialUpgrade("Gobj1","Dragun_18(SA)SHIELD7");
    InitialUpgrade("Gobj1","KUZ04SA");
    InitialUpgrade("Gobj1","AKA12SA");
    InitialUpgrade("Gobj1","AKA31SA");
  }
  uVar1 = TimerDoneFirst(0x14);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA13SA");
  }
  uVar1 = TimerDoneFirst(0x15);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA14SA");
    InitialUpgrade("Gobj1","AKA33SA");
  }
  uVar1 = TimerDoneFirst(0x16);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA15SA");
    InitialUpgrade("Gobj1","AKA36SA");
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0A");
      EnableMission(0x4d);
      EnableMission(0x4e);
      SetLightSpot(&DAT_10035650,8,1);
      SetLightSpot(&DAT_10035658,8,2);
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0B");
      EnableMission(0x44);
      SetLightSpot(&DAT_10035698,1,3);
      SetLightSpot(&DAT_100356a0,1,4);
    }
  }
  uVar1 = TimerDoneFirst(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x60,0);
        ShowPage("#PAGE0C");
        EnableMission(0x46);
        iVar3 = GetDiff(0);
        RunTimer(0xd,(5 - iVar3) * 7000);
        SetLightSpot(&DAT_100356a8,1,5);
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
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10035708,0);
    if (iVar3 < 10) {
      iVar3 = GetUnitsAmount0(&DAT_10035708,2);
      if (0x32 < iVar3) {
        SetTrigg(0x62,0);
        ShowPage("#PAGE1B");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xc);
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
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10035760);
    if (0 < iVar3) {
      uVar1 = Trigg(9);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(9,0);
        for (local_8 = 0; local_8 < DAT_10035598; local_8 = local_8 + 1) {
          ProduceUnitFast(&DAT_10035760,&DAT_10035438,&DAT_10035460,0);
        }
      }
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10035760);
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
            RunTimer(8,6000);
            SetTrigg(10,1);
            RemoveGroup(&DAT_10035460,&DAT_10035430);
            SelectUnits(&DAT_10035430,0);
            SelSendAndKill(2,&DAT_100356f0,0x96,0);
            ClearSelection(2);
            SetTrigg(9,1);
          }
        }
      }
      uVar1 = Trigg(0x60);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(4);
        if ((uVar1 & 0xff) == 0) {
          iVar3 = GetTotalAmount0(&DAT_10035430);
          if (iVar3 != 0) {
            uVar1 = TimerDoneFirst(8);
            if ((uVar1 & 0xff) == 0) goto LAB_10004dee;
          }
          FreeTimer(8);
          SetTrigg(4,1);
        }
      }
    }
  }
LAB_10004dee:
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10035768);
    if (0 < iVar3) {
      uVar1 = Trigg(0xb);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xb,0);
        for (local_c = 0; local_c < DAT_10035608; local_c = local_c + 1) {
          ProduceUnitFast(&DAT_10035768,&DAT_100356b8,&DAT_10035458,0);
        }
      }
      uVar1 = Trigg(1);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10035768);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(4,100);
          SetTrigg(1,0);
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
            SetTrigg(1,1);
            RemoveGroup(&DAT_10035458,&DAT_10035428);
            SelectUnits(&DAT_10035428,0);
            SelSendAndKill(2,&DAT_100356f8,0x82,0);
            ClearSelection(2);
            SetTrigg(0xb,1);
          }
        }
      }
      uVar1 = Trigg(0x60);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(7);
        if ((uVar1 & 0xff) == 0) {
          iVar3 = GetTotalAmount0(&DAT_10035428);
          if (iVar3 != 0) {
            uVar1 = TimerDoneFirst(9);
            if ((uVar1 & 0xff) == 0) goto LAB_100050e3;
          }
          FreeTimer(9);
          SetTrigg(7,1);
        }
      }
    }
  }
LAB_100050e3:
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10035488);
    if (0 < iVar3) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xd,0);
        for (local_10 = 0; local_10 < DAT_10035638; local_10 = local_10 + 1) {
          ProduceUnitFast(&DAT_10035488,&DAT_10035480,&DAT_10035470,0);
        }
      }
      uVar1 = Trigg(2);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10035488);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(5,100);
          SetTrigg(2,0);
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
            RunTimer(10,0x1194);
            SetTrigg(2,1);
            RemoveGroup(&DAT_10035470,&DAT_10035440);
            SelectUnits(&DAT_10035440,0);
            SelSendAndKill(2,&DAT_10035700,0x96,0);
            ClearSelection(2);
            SetTrigg(0xd,1);
          }
        }
      }
      uVar1 = Trigg(0x60);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(8);
        if ((uVar1 & 0xff) == 0) {
          iVar3 = GetTotalAmount0(&DAT_10035440);
          if (iVar3 != 0) {
            uVar1 = TimerDoneFirst(10);
            if ((uVar1 & 0xff) == 0) goto LAB_100053d8;
          }
          FreeTimer(10);
          SetTrigg(8,1);
        }
      }
    }
  }
LAB_100053d8:
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10035490);
    if (0 < iVar3) {
      uVar1 = Trigg(0xe);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xe,0);
        for (local_14 = 0; local_14 < DAT_100356b0; local_14 = local_14 + 1) {
          ProduceUnitFast(&DAT_10035490,&DAT_10035738,&DAT_10035468,0);
        }
      }
      uVar1 = Trigg(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10035490);
        if ((uVar1 & 0xff) != 0) {
          RunTimer(6,100);
          SetTrigg(3,0);
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
            RunTimer(0xb,0x1194);
            SetTrigg(3,1);
            RemoveGroup(&DAT_10035468,&DAT_10035590);
            SelectUnits(&DAT_10035590,0);
            SelSendAndKill(2,&DAT_100356e0,0xe6,0);
            ClearSelection(2);
            SetTrigg(0xe,1);
          }
        }
      }
      uVar1 = Trigg(0x60);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x12);
        if ((uVar1 & 0xff) == 0) {
          iVar3 = GetTotalAmount0(&DAT_10035590);
          if (iVar3 != 0) {
            uVar1 = TimerDoneFirst(0xb);
            if ((uVar1 & 0xff) == 0) goto LAB_100056cd;
          }
          FreeTimer(0xb);
          SetTrigg(0x12,1);
        }
      }
    }
  }
LAB_100056cd:
  iVar3 = GetTotalAmount0(&DAT_10035770);
  if (0 < iVar3) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x14,0);
      for (local_18 = 0; local_18 < DAT_100356c0; local_18 = local_18 + 1) {
        ProduceUnitFast(&DAT_10035770,&DAT_100354f0,&DAT_10035420,5);
      }
    }
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x15);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10035420,0);
        SelSendTo(2,&DAT_10035448,100,0);
        ClearSelection(2);
      }
    }
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10035770);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(0x17,100);
        SetTrigg(0x15,0);
      }
    }
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(0x17);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x16,0);
          FreeTimer(0x17);
          RunTimer(0x18,15000);
          SetTrigg(0x15,1);
          RemoveGroup(&DAT_10035420,&DAT_10035588);
          SelectUnits(&DAT_10035588,0);
          SelSendAndKill(2,&DAT_100356e8,100,0);
          ClearSelection(2);
          SetTrigg(0x14,1);
        }
      }
    }
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) == 0) {
        iVar3 = GetTotalAmount0(&DAT_10035580);
        if (0 < iVar3) {
          SelectUnits(&DAT_10035588,0);
          SelAttackGroup(2,&DAT_10035580);
          ClearSelection(2);
        }
      }
    }
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) == 0) {
        iVar3 = GetTotalAmount0(&DAT_10035588);
        if (iVar3 != 0) {
          uVar1 = TimerDoneFirst(0x18);
          if ((uVar1 & 0xff) == 0) goto LAB_10005abd;
        }
        FreeTimer(0x18);
        SetTrigg(0x16,1);
      }
    }
  }
LAB_10005abd:
  iVar3 = GetTotalAmount0(&DAT_100353e8);
  if (0 < iVar3) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x17,0);
      for (local_1c = 0; local_1c < DAT_100356d8; local_1c = local_1c + 1) {
        iVar3 = GetDiff(0);
        if (iVar3 == 0) {
LAB_10005b61:
          ProduceUnitFast(&DAT_100353e8,&DAT_100354f0,&DAT_10035418,5);
        }
        else {
          iVar3 = GetDiff(0);
          if (iVar3 == 1) goto LAB_10005b61;
          ProduceUnitFast(&DAT_100353e8,&DAT_10035478,&DAT_10035418,5);
        }
      }
    }
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x18);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10035418,0);
        SelSendTo(2,&DAT_10035450,100,0);
        ClearSelection(2);
      }
    }
    uVar1 = Trigg(0x18);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_100353e8);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(0x19,100);
        SetTrigg(0x18,0);
      }
    }
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(0x19);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x19,0);
          FreeTimer(0x19);
          RunTimer(0x1a,15000);
          SetTrigg(0x18,1);
          RemoveGroup(&DAT_10035418,&DAT_100355c8);
          SelectUnits(&DAT_100355c8,0);
          SelSendAndKill(2,&DAT_100356e8,100,0);
          ClearSelection(2);
          SetTrigg(0x17,1);
        }
      }
    }
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) == 0) {
        iVar3 = GetTotalAmount0(&DAT_10035400);
        if (0 < iVar3) {
          SelectUnits(&DAT_100355c8,0);
          SelAttackGroup(2,&DAT_10035400);
          ClearSelection(2);
        }
      }
    }
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) == 0) {
        iVar3 = GetTotalAmount0(&DAT_100355c8);
        if (iVar3 != 0) {
          uVar1 = TimerDoneFirst(0x1a);
          if ((uVar1 & 0xff) == 0) goto LAB_10005f0a;
        }
        FreeTimer(0x1a);
        SetTrigg(0x19,1);
      }
    }
  }
LAB_10005f0a:
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1b);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10035558);
      if (0x1e < iVar3) {
        iVar3 = GetUnitsAmount1(&DAT_10035650,&DAT_10035520);
        if (iVar3 != 3) {
          iVar3 = GetUnitsAmount1(&DAT_10035658,&DAT_10035520);
          if (iVar3 != 3) goto LAB_10006168;
        }
        SetTrigg(0x1b,0);
        SetTrigg(0x1c,0);
        ShowPage("#PAGE3");
        ShowPage("#PAGE4");
        DisableMission(0x4e);
        EnableMission(0x4f);
        SelectUnits(&DAT_10035520,0);
        SelChangeNation(0,1);
        SelectUnits(&DAT_100354c8,0);
        SelChangeNation(1,0);
        SetResource(1,3,100000);
        SetResource(1,0,100000);
        SetResource(1,2,100000);
        SetResource(1,1,100000);
        SetResource(1,5,100000);
        SetResource(1,4,100000);
        uVar2 = GetDiff(0);
        StartAI(1,"FRANCE.0",2,1,2,uVar2);
      }
    }
  }
LAB_10006168:
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount1(&DAT_100355e8,0);
    if (iVar3 < 3) {
      SetTrigg(0x1c,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10035770);
    if (iVar3 == 0) {
      iVar3 = GetTotalAmount0(&DAT_100353e8);
      if (iVar3 == 0) {
        SetTrigg(5,0);
        ShowPage("#PAGE6");
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10035740);
    if (iVar3 == 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE7");
      DisableMission(0x46);
      EnableMission(0x47);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsByNation(&DAT_10035740,0);
    if (0 < iVar3) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE7A");
      DisableMission(0x46);
      EnableMission(0x47);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1a,0);
      ShowPage("#PAGE11");
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(6,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x10,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x11,0);
      ShowPage("#PAGE8C");
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x10);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x11);
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
