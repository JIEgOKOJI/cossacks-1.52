#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_10007670 = 0;
long long DAT_10007678 = 0;
long long DAT_10007680 = 0;
long long DAT_10007688 = 0;
long long DAT_10007690 = 0;
long long DAT_10007698 = 0;
long long DAT_100076a0 = 0;
long long DAT_100076a8 = 0;
long long DAT_100076b0 = 0;
long long DAT_100076b8 = 0;
long long DAT_100076c0 = 0;
long long DAT_100076c8 = 0;
long long DAT_100076d0 = 0;
long long DAT_100076d8 = 0;
long long DAT_100076e0 = 0;
long long DAT_100076e8 = 0;
long long DAT_100076f0 = 0;
long long DAT_100076f8 = 0;
long long DAT_10007700 = 0;
long long DAT_10007708 = 0;
long long DAT_10007710 = 0;
long long DAT_10007718 = 0;
long long DAT_10007720 = 0;
long long DAT_10007728 = 0;
long long DAT_10007730 = 0;
long long DAT_10007738 = 0;
long long DAT_10007740 = 0;
long long DAT_10007748 = 0;
long long DAT_10007750 = 0;
long long DAT_10007758 = 0;
long long DAT_10007760 = 0;
long long DAT_10007768 = 0;
long long DAT_10007770 = 0;
long long DAT_10007778 = 0;
long long DAT_10007780 = 0;
long long DAT_10007788 = 0;
long long DAT_10007790 = 0;
long long DAT_10007798 = 0;
long long DAT_100077a0 = 0;
long long DAT_100077a8 = 0;
long long DAT_100077b0 = 0;
long long DAT_100077b8 = 0;
long long DAT_100077c0 = 0;
long long DAT_100077c8 = 0;
long long DAT_100077d0 = 0;
long long DAT_100077d8 = 0;
long long DAT_100077e0 = 0;
long long DAT_100077e8 = 0;
long long DAT_100077f0 = 0;
long long DAT_100077f8 = 0;
long long DAT_10007800 = 0;
long long DAT_10007808 = 0;
long long DAT_10007810 = 0;
long long DAT_10007818 = 0;
long long DAT_10007820 = 0;
long long DAT_10007828 = 0;
long long DAT_10007830 = 0;
long long DAT_10007838 = 0;
long long DAT_10007840 = 0;
long long DAT_10007848 = 0;
long long DAT_10007850 = 0;
long long DAT_10007858 = 0;
long long DAT_10007860 = 0;

/* Forward declarations */
int FUN_10001000(void);

void OnInit();
void ProcessScenary();


int FUN_10001000(void)

{
  int uVar1;
  
  uVar1 = GetDiff(0);
  switch(uVar1) {
  case 0:
    return 15000;
  case 1:
    return 5000;
  case 2:
    return 0xdac;
  case 3:
    return 3000;
  default:
    return 100;
  }
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_10007680,"Gmill");
  RegisterUnits(&DAT_100076d0,"Grab1");
  RegisterUnits(&DAT_100076d8,"Grab2");
  RegisterUnits(&DAT_100076e0,"Grab3");
  RegisterUnits(&DAT_100076e8,"Grab4");
  RegisterUnits(&DAT_10007820,"Goboz1");
  RegisterUnits(&DAT_10007818,"Goboz2");
  RegisterUnits(&DAT_10007830,"Goboz3");
  RegisterUnits(&DAT_10007828,"Goboz4");
  RegisterUnits(&DAT_10007840,"Goboz5");
  RegisterUnits(&DAT_10007838,"Goboz6");
  RegisterZone(&DAT_10007858,"Zlag1");
  RegisterZone(&DAT_10007860,"Zlag2");
  RegisterZone(&DAT_10007758,"Zder1");
  RegisterZone(&DAT_10007760,"Zder2");
  RegisterZone(&DAT_10007768,"Zder3");
  RegisterZone(&DAT_10007770,"Zder4");
  RegisterZone(&DAT_10007778,"Zder5");
  RegisterZone(&DAT_10007780,"Zder6");
  RegisterZone(&DAT_100076f0,"Zr111");
  RegisterZone(&DAT_100076f8,"Zr112");
  RegisterZone(&DAT_10007700,"Zr113");
  RegisterZone(&DAT_10007708,"Zr114");
  RegisterZone(&DAT_10007718,"Zr115");
  RegisterZone(&DAT_10007728,"Zr116");
  RegisterZone(&DAT_10007738,"Zr117");
  RegisterZone(&DAT_10007710,"Zr121");
  RegisterZone(&DAT_10007720,"Zr122");
  RegisterZone(&DAT_10007730,"Zr123");
  RegisterZone(&DAT_10007740,"Zr124");
  RegisterZone(&DAT_10007750,"Zrinok");
  RegisterZone(&DAT_10007670,"ZFORT");
  RegisterFormation(&DAT_10007850,"#ALONE");
  RegisterFormation(&DAT_10007698,"#TRI3");
  RegisterUpgrade(&DAT_10007748,"AKA19SA");
  RegisterUnitType(&DAT_10007788,"Kreposnoi_pruss(SA)");
  RegisterUnitType(&DAT_10007790,"Kuznica(au)");
  RegisterUnitType(&DAT_10007798,"Dip_korpus(SA)");
  RegisterUnitType(&DAT_100077a0,"artileri_depo(SA)");
  RegisterUnitType(&DAT_100077a8,"Rinok(SA)");
  RegisterUnitType(&DAT_100077b0,"WALL_EV(SA)");
  RegisterUnitType(&DAT_100077b8,"Bashnia(SA)");
  RegisterUnitType(&DAT_100077c0,"Pushka_mnogostvolka(SA)");
  RegisterUnitType(&DAT_100077c8,"Center_Austria(au)");
  RegisterUnitType(&DAT_100077d0,"Art_Depo_Turki(TU)");
  RegisterUnitType(&DAT_100077d8,"Dip_korpus(au)");
  RegisterUnitType(&DAT_100077e0,"Center_Turki(TU)");
  RegisterUnitType(&DAT_100077e8,"Mechet_Turki(TU)");
  RegisterUnitType(&DAT_100077f0,"Diplomatic_Turki(TU)");
  RegisterUnitType(&DAT_100077f8,"Kuznia_Turki(TU)");
  RegisterUnitType(&DAT_10007800,"WALL_TU(TU)");
  RegisterUnitType(&DAT_10007808,"Bashnia_3(TU)");
  RegisterUnitType(&DAT_10007810,"Barack_Turki(TU)");
  RegisterUnitType(&DAT_10007848,"GRUZ(UN)");
  RegisterUnitType(&DAT_10007678,"Tatarin(TU)");
  SetPlayerName(1,"TURKEY");
  SetPlayerName(4,"AUSTRIANS");
  SetPlayerName(5,"TURKEY");
  InitialUpgrade("&Grab1","AKA04AU");
  InitialUpgrade("&Grab1","KUZ01AU");
  RegisterDynGroup(&DAT_100076a8);
  RegisterVar(&DAT_100076a8,8);
  RegisterDynGroup(&DAT_100076a0);
  RegisterVar(&DAT_100076a0,8);
  RegisterDynGroup(&DAT_100076b8);
  RegisterVar(&DAT_100076b8,8);
  RegisterDynGroup(&DAT_100076b0);
  RegisterVar(&DAT_100076b0,8);
  RegisterDynGroup(&DAT_100076c8);
  RegisterVar(&DAT_100076c8,8);
  RegisterDynGroup(&DAT_100076c0);
  RegisterVar(&DAT_100076c0,8);
  RegisterDynGroup(&DAT_10007690);
  RegisterVar(&DAT_10007690,8);
  RegisterDynGroup(&DAT_10007688);
  RegisterVar(&DAT_10007688,8);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  void *pcVar4;
  void *pcVar5;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SetLightSpot(&DAT_10007758,1,1);
    SetLightSpot(&DAT_10007760,1,2);
    SetLightSpot(&DAT_10007768,1,3);
    SetLightSpot(&DAT_10007770,1,4);
    SetLightSpot(&DAT_10007778,1,5);
    SetLightSpot(&DAT_10007780,1,6);
    RunTimer(1,1000);
    RunTimer(2,1000);
    RunTimer(3,1000);
    RunTimer(4,1000);
    RunTimer(5,1000);
    RunTimer(6,1000);
    uVar2 = FUN_10001000();
    RunTimer(7,uVar2);
    uVar2 = FUN_10001000();
    RunTimer(8,uVar2);
    RunTimer(9,1000);
    RunTimer(10,1000);
    RunTimer(0xb,1000);
    RunTimer(0xc,1000);
    RunTimer(0xd,1000);
    RunTimer(0xe,1000);
    RunTimer(0xf,1000);
    RunTimer(0x14,1000);
    ChangeFriends(4,0x11);
    ChangeFriends(0,0x11);
    ChangeFriends(1,0x22);
    ChangeFriends(5,0x22);
    TakeStone(&DAT_100076d8);
    TakeFood(&DAT_100076d0);
    TakeFood(&DAT_100076e0);
    TakeFood(&DAT_100076e8);
    SelChangeNation(1,4);
    SetResource(1,3,10000);
    SetResource(1,1,5000);
    SetResource(1,4,5000);
    SetResource(1,5,0x1194);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      SetResource(0,3,10000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      StartAI(1,"TURKISH.0",0,1,1,1);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 1) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,"TURKISH.0",0,1,1,2);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 2) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,"TURKISH.0",0,1,1,3);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      SetResource(0,3,5000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(1,"TURKISH.0",0,1,1,3);
    }
  }
  EnableUnit(0,&DAT_10007788,0);
  EnableUnit(0,&DAT_10007790,0);
  EnableUnit(0,&DAT_10007798,0);
  EnableUnit(0,&DAT_100077a0,0);
  EnableUnit(0,&DAT_100077a8,0);
  EnableUnit(0,&DAT_100077b0,0);
  EnableUnit(0,&DAT_100077b8,0);
  EnableUnit(0,&DAT_100077c0,0);
  EnableUnit(0,&DAT_100077c8,0);
  EnableUnit(0,&DAT_100077d0,0);
  EnableUnit(0,&DAT_100077d8,0);
  EnableUnit(0,&DAT_100077e0,0);
  EnableUnit(0,&DAT_100077e8,0);
  EnableUnit(0,&DAT_100077f0,0);
  EnableUnit(0,&DAT_100077f8,0);
  EnableUnit(0,&DAT_10007800,0);
  EnableUnit(0,&DAT_10007808,0);
  EnableUnit(0,&DAT_10007810,0);
  DisableUpgrade(0,&DAT_10007748);
  SelectUnits(&DAT_10007820,0);
  RemoveGroup(&DAT_10007820,&DAT_100076a8);
  SelectUnits(&DAT_10007818,0);
  RemoveGroup(&DAT_10007818,&DAT_100076a0);
  SelectUnits(&DAT_10007830,0);
  RemoveGroup(&DAT_10007830,&DAT_100076b8);
  SelectUnits(&DAT_10007828,0);
  RemoveGroup(&DAT_10007828,&DAT_100076b0);
  SelectUnits(&DAT_10007840,0);
  RemoveGroup(&DAT_10007840,&DAT_100076c8);
  SelectUnits(&DAT_10007838,0);
  RemoveGroup(&DAT_10007838,&DAT_100076c0);
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE4");
    ShowVictory();
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_100076f8,&DAT_100076a8), iVar3 != 0)) {
    RunTimer(1,500);
    SetTrigg(4,0);
  }
  cVar1 = TimerDone(1);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_100076f8,&DAT_100076a8), iVar3 != 0)) {
    SelectUnits(&DAT_100076a8,0);
    SelSendTo(4,&DAT_100076f0,0x80,0);
    SelSendTo(4,&DAT_10007750,0,2);
    SetTrigg(5,1);
    RunTimer(1,300);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076a8), iVar3 != 0)) {
    RunTimer(1,500);
    SetTrigg(5,0);
  }
  cVar1 = TimerDone(1);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076a8), iVar3 != 0)) {
    AddResource(0,1,2000);
    SelectUnits(&DAT_100076a8,0);
    SelSendTo(4,&DAT_100076f0,0xe0,0);
    SelSendTo(4,&DAT_100076f8,0x60,2);
    SetTrigg(4,1);
    RunTimer(1,300);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007708,&DAT_100076a0), iVar3 != 0)) {
    RunTimer(2,500);
    SetTrigg(6,0);
  }
  cVar1 = TimerDone(2);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007708,&DAT_100076a0), iVar3 != 0)) {
    SelectUnits(&DAT_100076a0,0);
    SelSendTo(4,&DAT_10007700,0xa0,0);
    SelSendTo(4,&DAT_100076f0,0x80,2);
    SelSendTo(4,&DAT_10007750,0,2);
    SetTrigg(7,1);
    RunTimer(2,300);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076a0), iVar3 != 0)) {
    RunTimer(2,500);
    SetTrigg(7,0);
  }
  cVar1 = TimerDone(2);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076a0), iVar3 != 0)) {
    AddResource(0,3,2000);
    AddResource(0,4,1000);
    SelectUnits(&DAT_100076a0,0);
    SelSendTo(4,&DAT_100076f0,0x20,0);
    SelSendTo(4,&DAT_10007700,0xe0,2);
    SelSendTo(4,&DAT_10007708,0x70,2);
    SetTrigg(6,1);
    RunTimer(2,300);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007708,&DAT_100076b8), iVar3 != 0)) {
    RunTimer(3,500);
    SetTrigg(8,0);
  }
  cVar1 = TimerDone(3);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007728,&DAT_100076b8), iVar3 != 0)) {
    SelectUnits(&DAT_100076b8,0);
    SelSendTo(4,&DAT_10007718,0xa0,0);
    SelSendTo(4,&DAT_10007700,0xa0,2);
    SelSendTo(4,&DAT_100076f0,0x80,2);
    SelSendTo(4,&DAT_10007750,0,2);
    SetTrigg(9,1);
    RunTimer(3,300);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076b8), iVar3 != 0)) {
    RunTimer(3,500);
    SetTrigg(9,0);
  }
  cVar1 = TimerDone(3);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076b8), iVar3 != 0)) {
    AddResource(0,5,2000);
    SelectUnits(&DAT_100076b8,0);
    SelSendTo(4,&DAT_100076f0,0x20,0);
    SelSendTo(4,&DAT_10007700,0x20,2);
    SelSendTo(4,&DAT_10007718,0xe0,2);
    SelSendTo(4,&DAT_10007728,0x60,2);
    SetTrigg(8,1);
    RunTimer(3,300);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007738,&DAT_100076b0), iVar3 != 0)) {
    RunTimer(4,500);
    SetTrigg(10,0);
  }
  cVar1 = TimerDone(4);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007738,&DAT_100076b0), iVar3 != 0)) {
    SelectUnits(&DAT_100076b0,0);
    SelSendTo(4,&DAT_10007718,0xa0,0);
    SelSendTo(4,&DAT_10007700,0xa0,2);
    SelSendTo(4,&DAT_100076f0,0x80,2);
    SelSendTo(4,&DAT_10007750,0,2);
    SetTrigg(0xb,1);
    RunTimer(4,300);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076b0), iVar3 != 0)) {
    RunTimer(4,500);
    SetTrigg(0xb,0);
  }
  cVar1 = TimerDone(4);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076b0), iVar3 != 0)) {
    AddResource(0,3,2000);
    AddResource(0,1,1000);
    SelectUnits(&DAT_100076b0,0);
    SelSendTo(4,&DAT_100076f0,0x20,0);
    SelSendTo(4,&DAT_10007700,0x20,2);
    SelSendTo(4,&DAT_10007718,0xe0,2);
    SelSendTo(4,&DAT_10007738,0xa0,2);
    SetTrigg(10,1);
    RunTimer(4,300);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007710,&DAT_100076c8), iVar3 != 0)) {
    RunTimer(5,500);
    SetTrigg(0xc,0);
  }
  cVar1 = TimerDone(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007710,&DAT_100076c8), iVar3 != 0)) {
    SelectUnits(&DAT_100076c8,0);
    SelSendTo(4,&DAT_10007750,0x20,0);
    SetTrigg(0xd,1);
    RunTimer(5,300);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076c8), iVar3 != 0)) {
    RunTimer(5,500);
    SetTrigg(0xd,0);
  }
  cVar1 = TimerDone(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076c8), iVar3 != 0)) {
    AddResource(0,4,2000);
    SelectUnits(&DAT_100076c8,0);
    SelSendTo(4,&DAT_10007710,0xa0,0);
    SetTrigg(0xc,1);
    RunTimer(5,300);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007740,&DAT_100076c0), iVar3 != 0)) {
    RunTimer(6,500);
    SetTrigg(0xe,0);
  }
  cVar1 = TimerDone(6);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007740,&DAT_100076c0), iVar3 != 0)) {
    SelectUnits(&DAT_100076c0,0);
    SelSendTo(4,&DAT_10007730,0xa0,0);
    SelSendTo(4,&DAT_10007720,0xc0,2);
    SelSendTo(4,&DAT_10007710,0xa0,2);
    SelSendTo(4,&DAT_10007750,0x20,2);
    SetTrigg(0xf,1);
    RunTimer(6,300);
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076c0), iVar3 != 0)) {
    RunTimer(6,500);
    SetTrigg(0xf,0);
  }
  cVar1 = TimerDone(6);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076c0), iVar3 != 0)) {
    AddResource(0,3,2000);
    AddResource(0,5,1000);
    SelectUnits(&DAT_100076c0,0);
    SelSendTo(4,&DAT_10007710,0x40,0);
    SelSendTo(4,&DAT_10007720,0x20,2);
    SelSendTo(4,&DAT_10007730,0,2);
    SelSendTo(4,&DAT_10007740,0x80,2);
    SetTrigg(0xe,1);
    RunTimer(6,300);
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    SetTrigg(0x10,0);
    CreateObject0(&DAT_10007690,&DAT_10007698,&DAT_10007678,5,&DAT_10007858,0);
    SelectUnits(&DAT_10007690,0);
    SelSendAndKill(5,&DAT_10007780,0xa0,0);
    SelSendAndKill(5,&DAT_10007760,0x80,2);
    SelSendAndKill(5,&DAT_10007778,0xa0,2);
    SelSendAndKill(5,&DAT_10007670,0xc0,2);
    uVar2 = FUN_10001000();
    RunTimer(7,uVar2);
    SetTrigg(0x10,1);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(8), cVar1 != '\0')) {
    SetTrigg(0x12,0);
    CreateObject0(&DAT_10007688,&DAT_10007698,&DAT_10007678,5,&DAT_10007860,0x80);
    SelectUnits(&DAT_10007688,0);
    SelSendAndKill(5,&DAT_10007770,0xa0,0);
    SelSendAndKill(5,&DAT_10007768,0x80,2);
    SelSendAndKill(5,&DAT_10007758,0x80,2);
    SelSendAndKill(5,&DAT_10007670,0x80,2);
    uVar2 = FUN_10001000();
    RunTimer(8,uVar2);
    SetTrigg(0x12,1);
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x14), cVar1 != '\0')) {
    SetTrigg(0x13,0);
    AddResource(1,5,5000);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') &&
     (iVar3 = GetUnitsAmount0(&DAT_10007858,5), pcVar4 = (void*)&ShowPage, iVar3 == 0)) {
    SetTrigg(0x14,0);
    ShowPage("#PAGE5");
    SetTrigg(0x10,0);
    SetTrigg(0x11,0);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007860,5), iVar3 == 0)) {
    SetTrigg(0x15,0);
    ShowPage("#PAGE6");
    SetTrigg(0x12,0);
    SetTrigg(0x11,0);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076a8), iVar3 == 0)) {
    ShowPage("#PAGE");
    RunTimer(9,5000);
    SetTrigg(0x16,0);
  }
  cVar1 = TimerDone(9);
  if ((cVar1 != '\0') &&
     (iVar3 = GetTotalAmount0(&DAT_100076a8), pcVar5 = (void*)&CreateObject0, iVar3 == 0)) {
    CreateObject0(&DAT_100076a8,&DAT_10007850,&DAT_10007848,4,&DAT_100076f8,0x60);
    RunTimer(9,1000);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076a0), iVar3 == 0)) {
    ShowPage("#PAGE");
    RunTimer(10,5000);
    SetTrigg(0x17,0);
  }
  cVar1 = TimerDone(10);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076a0), iVar3 == 0)) {
    CreateObject0(&DAT_100076a0,&DAT_10007850,&DAT_10007848,4,&DAT_10007708,0x80);
    RunTimer(10,100);
    SetTrigg(0x17,1);
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076b8), iVar3 == 0)) {
    ShowPage("#PAGE");
    RunTimer(0xb,50000);
    SetTrigg(0x18,0);
  }
  cVar1 = TimerDone(0xb);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076b8), iVar3 == 0)) {
    CreateObject0(&DAT_100076b8,&DAT_10007850,&DAT_10007848,4,&DAT_10007728,0x60);
    RunTimer(0xb,100);
    SetTrigg(0x18,1);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076b0), iVar3 == 0)) {
    ShowPage("#PAGE");
    RunTimer(0xc,5000);
    SetTrigg(0x19,0);
  }
  cVar1 = TimerDone(0xc);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076b0), iVar3 == 0)) {
    CreateObject0(&DAT_100076b0,&DAT_10007850,&DAT_10007848,4,&DAT_10007738,0xa0);
    RunTimer(0xc,100);
    SetTrigg(0x19,1);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076c8), iVar3 == 0)) {
    ShowPage("#PAGE ");
    RunTimer(0xd,5000);
    SetTrigg(0x1a,0);
  }
  cVar1 = TimerDone(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076c8), iVar3 == 0)) {
    CreateObject0(&DAT_100076c8,&DAT_10007850,&DAT_10007848,4,&DAT_10007710,0xa0);
    RunTimer(0xd,1000);
    SetTrigg(0x1a,1);
  }
  cVar1 = Trigg(0x1b);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076c0), iVar3 == 0)) {
    ShowPage("#PAGE ");
    RunTimer(0xe,5000);
    SetTrigg(0x1b,0);
  }
  cVar1 = TimerDone(0xe);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076c0), iVar3 == 0)) {
    CreateObject0(&DAT_100076c0,&DAT_10007850,&DAT_10007848,4,&DAT_10007740,0x80);
    RunTimer(0xe,100);
    SetTrigg(0x1b,1);
  }
  cVar1 = Trigg(0x1c);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007758,4), iVar3 == 0)) {
    SetTrigg(0x1c,0);
    ShowPage("#PAGE7");
    ClearLightSpot(1);
    SetTrigg(4,0);
    SetTrigg(5,0);
  }
  cVar1 = Trigg(0x1d);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007760,4), iVar3 == 0)) {
    SetTrigg(0x1d,0);
    ShowPage("#PAGE8");
    ClearLightSpot(2);
    SetTrigg(6,0);
    SetTrigg(7,0);
  }
  cVar1 = Trigg(0x1e);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007768,4), iVar3 == 0)) {
    SetTrigg(0x1e,0);
    ShowPage("#PAGE9");
    ClearLightSpot(3);
    SetTrigg(8,0);
    SetTrigg(9,0);
  }
  cVar1 = Trigg(0x1f);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007770,4), iVar3 == 0)) {
    SetTrigg(0x1f,0);
    ShowPage("#PAGE10");
    ClearLightSpot(4);
    SetTrigg(10,0);
    SetTrigg(0xb,0);
  }
  cVar1 = Trigg(0x20);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007778,4), iVar3 == 0)) {
    SetTrigg(0x20,0);
    ShowPage("#PAGE11");
    ClearLightSpot(5);
    SetTrigg(0xc,0);
    SetTrigg(0xd,0);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007780,4), iVar3 == 0)) {
    SetTrigg(0x21,0);
    ShowPage("#PAGE12");
    ClearLightSpot(6);
    SetTrigg(0xe,0);
    SetTrigg(0xf,0);
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
