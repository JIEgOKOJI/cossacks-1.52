#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_100301d8[] = "G32";
char DAT_100301dc[] = "G31";
char DAT_100301e0[] = "G30";
char DAT_100301e4[] = "G29";
char DAT_100301e8[] = "G28";
char DAT_100301ec[] = "G27";
char DAT_100301f0[] = "G26";
char DAT_100301f4[] = "G25";
char DAT_100301f8[] = "G24";
char DAT_100301fc[] = "G23";
char DAT_10030200[] = "G22";
char DAT_10030204[] = "G21";
char DAT_10030208[] = "G20";
char DAT_1003020c[] = "G19";
char DAT_10030210[] = "G18";
char DAT_10030214[] = "G17";
char DAT_10030218[] = "G16";
char DAT_1003021c[] = "G15";
char DAT_10030220[] = "G14";
char DAT_10030224[] = "G13";
char DAT_10030228[] = "G12";
char DAT_1003022c[] = "G11";
char DAT_10030230[] = "G10";
char DAT_10030234[] = "G9";
char DAT_10030238[] = "G8";
char DAT_1003023c[] = "G7";
char DAT_10030240[] = "G6";
char DAT_10030244[] = "G5";
char DAT_10030248[] = "G4";
char DAT_1003024c[] = "G3";
char DAT_10030250[] = "G2";
char DAT_10030254[] = "G1";
char DAT_10030258[] = "Z35";
char DAT_1003025c[] = "Z34";
char DAT_10030260[] = "Z33";
char DAT_10030264[] = "Z32";
char DAT_10030268[] = "Z21";
char DAT_1003026c[] = "Z20";
char DAT_10030270[] = "Z19";
char DAT_10030274[] = "Z18";
char DAT_10030278[] = "Z17";
char DAT_1003027c[] = "Z16";
char DAT_10030280[] = "Z15";
char DAT_10030284[] = "Z14";
char DAT_10030288[] = "Z13";
char DAT_1003028c[] = "Z12";
char DAT_10030290[] = "Z11";
char DAT_10030294[] = "Z10";
char DAT_10030298[] = "Z9";
char DAT_1003029c[] = "Z8";
char DAT_100302a0[] = "Z7";
char DAT_100302a4[] = "Z6";
char DAT_100302a8[] = "Z5";
char DAT_100302ac[] = "Z4";
char DAT_100302b0[] = "Z3";
char DAT_100302b4[] = "Z2";
char DAT_100302b8[] = "Z1";
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
long long DAT_10035468 = 0;
long long DAT_10035470 = 0;
long long DAT_10035478 = 0;
long long DAT_10035480 = 0;
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
long long DAT_10035598 = 0;
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
long long DAT_10035608 = 0;
long long DAT_10035610 = 0;
long long DAT_10035618 = 0;
long long DAT_10035620 = 0;
long long DAT_10035628 = 0;
long long DAT_10035630 = 0;
long long DAT_10035638 = 0;
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
long long DAT_100356b0 = 0;
long long DAT_100356b8 = 0;
long long DAT_100356c0 = 0;
long long DAT_100356c8 = 0;
long long DAT_100356d0 = 0;
long long DAT_100356d8 = 0;
long long DAT_100356e0 = 0;
long long DAT_100356e8 = 0;
long long DAT_100356f0 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_100355d0,DAT_100302b8);
  RegisterZone(&DAT_100355d8,DAT_100302b4);
  RegisterZone(&DAT_100355e0,DAT_100302b0);
  RegisterZone(&DAT_100355e8,DAT_100302ac);
  RegisterZone(&DAT_100355f0,DAT_100302a8);
  RegisterZone(&DAT_100355f8,DAT_100302a4);
  RegisterZone(&DAT_10035600,DAT_100302a0);
  RegisterZone(&DAT_10035608,DAT_1003029c);
  RegisterZone(&DAT_10035610,DAT_10030298);
  RegisterZone(&DAT_10035628,DAT_10030294);
  RegisterZone(&DAT_10035630,DAT_10030290);
  RegisterZone(&DAT_10035638,DAT_1003028c);
  RegisterZone(&DAT_10035640,DAT_10030288);
  RegisterZone(&DAT_10035650,DAT_10030284);
  RegisterZone(&DAT_10035660,DAT_10030280);
  RegisterZone(&DAT_10035668,DAT_1003027c);
  RegisterZone(&DAT_10035670,DAT_10030278);
  RegisterZone(&DAT_10035678,DAT_10030274);
  RegisterZone(&DAT_10035680,DAT_10030270);
  RegisterZone(&DAT_10035648,DAT_1003026c);
  RegisterZone(&DAT_10035658,DAT_10030268);
  RegisterZone(&DAT_10035688,DAT_10030264);
  RegisterZone(&DAT_10035690,DAT_10030260);
  RegisterZone(&DAT_10035698,DAT_1003025c);
  RegisterZone(&DAT_100356a0,DAT_10030258);
  RegisterDynGroup(&DAT_10035450);
  RegisterDynGroup(&DAT_100356e0);
  RegisterDynGroup(&DAT_100356e8);
  RegisterDynGroup(&DAT_100356f0);
  RegisterDynGroup(&DAT_10035618);
  RegisterDynGroup(&DAT_100356a8);
  RegisterDynGroup(&DAT_100356b0);
  RegisterDynGroup(&DAT_10035438);
  RegisterDynGroup(&DAT_100356b8);
  RegisterDynGroup(&DAT_10035468);
  RegisterDynGroup(&DAT_100356c0);
  RegisterDynGroup(&DAT_100356c8);
  RegisterDynGroup(&DAT_10035480);
  RegisterDynGroup(&DAT_10035490);
  RegisterDynGroup(&DAT_100356d0);
  RegisterDynGroup(&DAT_100356d8);
  RegisterDynGroup(&DAT_100354a8);
  RegisterDynGroup(&DAT_100354d0);
  RegisterVar(&DAT_10035450,8);
  RegisterVar(&DAT_100356e0,8);
  RegisterVar(&DAT_100356e8,8);
  RegisterVar(&DAT_100356f0,8);
  RegisterVar(&DAT_10035618,8);
  RegisterVar(&DAT_100356a8,8);
  RegisterVar(&DAT_100356b0,8);
  RegisterVar(&DAT_10035438,8);
  RegisterVar(&DAT_100356b8,8);
  RegisterVar(&DAT_10035468,8);
  RegisterVar(&DAT_100356c0,8);
  RegisterVar(&DAT_100356c8,8);
  RegisterVar(&DAT_10035480,8);
  RegisterVar(&DAT_10035490,8);
  RegisterVar(&DAT_100356d0,8);
  RegisterVar(&DAT_100356d8,8);
  RegisterVar(&DAT_100354a8,8);
  RegisterVar(&DAT_100354d0,8);
  RegisterUnits(&DAT_10035498,DAT_10030254);
  RegisterUnits(&DAT_100354a0,DAT_10030250);
  RegisterUnits(&DAT_100354b0,DAT_1003024c);
  RegisterUnits(&DAT_100354b8,DAT_10030248);
  RegisterUnits(&DAT_100354c0,DAT_10030244);
  RegisterUnits(&DAT_100354c8,DAT_10030240);
  RegisterUnits(&DAT_100354d8,DAT_1003023c);
  RegisterUnits(&DAT_100354e0,DAT_10030238);
  RegisterUnits(&DAT_100354e8,DAT_10030234);
  RegisterUnits(&DAT_10035518,DAT_10030230);
  RegisterUnits(&DAT_10035520,DAT_1003022c);
  RegisterUnits(&DAT_10035528,DAT_10030228);
  RegisterUnits(&DAT_10035530,DAT_10030224);
  RegisterUnits(&DAT_10035540,DAT_10030220);
  RegisterUnits(&DAT_10035550,DAT_1003021c);
  RegisterUnits(&DAT_10035560,DAT_10030218);
  RegisterUnits(&DAT_10035570,DAT_10030214);
  RegisterUnits(&DAT_10035588,DAT_10030210);
  RegisterUnits(&DAT_100355a0,DAT_1003020c);
  RegisterUnits(&DAT_10035538,DAT_10030208);
  RegisterUnits(&DAT_10035548,DAT_10030204);
  RegisterUnits(&DAT_10035558,DAT_10030200);
  RegisterUnits(&DAT_10035568,DAT_100301fc);
  RegisterUnits(&DAT_10035580,DAT_100301f8);
  RegisterUnits(&DAT_10035598,DAT_100301f4);
  RegisterUnits(&DAT_100355b0,DAT_100301f0);
  RegisterUnits(&DAT_100355b8,DAT_100301ec);
  RegisterUnits(&DAT_100355c0,DAT_100301e8);
  RegisterUnits(&DAT_100355c8,DAT_100301e4);
  RegisterUnits(&DAT_10035578,DAT_100301e0);
  RegisterUnits(&DAT_10035590,DAT_100301dc);
  RegisterUnits(&DAT_100355a8,DAT_100301d8);
  RegisterUnitType(&DAT_10035408,"Melnica(PL)");
  RegisterUnitType(&DAT_10035410,"Center_Poland(PL)");
  RegisterUnitType(&DAT_10035418,"Sclad2(PL)");
  RegisterUnitType(&DAT_10035420,"Kuznica(PL)");
  RegisterUnitType(&DAT_10035428,"Konushnia_Swesair(PL)");
  RegisterUnitType(&DAT_10035430,"akademia_E(PL)");
  RegisterUnitType(&DAT_10035440,"Dip_korpus(PL)");
  RegisterUnitType(&DAT_10035448,"Kazarma_evro(PL)");
  RegisterUnitType(&DAT_10035458,"Kazarma(PL)");
  RegisterUnitType(&DAT_100353e0,"artileri_depo(PL)");
  RegisterUnitType(&DAT_100353e8,"Rinok(PL)");
  RegisterUnitType(&DAT_100353f0,"Bashnia(PL)");
  RegisterUnitType(&DAT_100353f8,"Cercov_Poland(PL)");
  RegisterUnitType(&DAT_10035400,"PorE(PL)");
  RegisterUnitType(&DAT_10035508,"Kozacki_Strelec(UA)");
  RegisterUnitType(&DAT_10035510,"Kozak_loshad(UA)");
  RegisterUnitType(&DAT_100354f8,"Poland_pikiner(PL)");
  RegisterUnitType(&DAT_10035620,"Reitor_Polsha(PL)");
  RegisterUnitType(&DAT_10035500,"Mushketer_polsha(PL)");
  RegisterUnitType(&DAT_10035618,"Pushka_mnogostvolka(PL)");
  RegisterFormation(&DAT_100354f0,"#ALONE");
  SetPlayerName(1,"UKRAINE");
  SetPlayerName(2,"UKRAINE");
  SetPlayerName(3,"POLANDS");
  SetPlayerName(4,"POLANDS");
  SetPlayerName(5,"POLANDS");
  EnableUnit(0,&DAT_10035408,0);
  EnableUnit(0,&DAT_10035410,0);
  EnableUnit(0,&DAT_10035418,0);
  EnableUnit(0,&DAT_10035420,0);
  EnableUnit(0,&DAT_10035428,0);
  EnableUnit(0,&DAT_10035430,0);
  EnableUnit(0,&DAT_10035440,0);
  EnableUnit(0,&DAT_10035448,0);
  EnableUnit(0,&DAT_10035458,0);
  EnableUnit(0,&DAT_100353e0,0);
  EnableUnit(0,&DAT_100353e8,0);
  EnableUnit(0,&DAT_100353f0,0);
  EnableUnit(0,&DAT_100353f8,0);
  EnableUnit(0,&DAT_10035400,0);
  ChangeFriends(0,7);
  ChangeFriends(1,0xff);
  ChangeFriends(2,0xff);
  ChangeFriends(3,0x38);
  ChangeFriends(4,0x38);
  ChangeFriends(5,0x38);
  uStack_8 = 0x10001f1e;
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
    iVar2 = GetDiff(3);
    SetResource(0,3,(3 - iVar2) * 1000 + 5000);
    iVar2 = GetDiff(3);
    SetResource(0,1,(3 - iVar2) * 500 + 5000);
    iVar2 = GetDiff(3);
    SetResource(0,4,iVar2 * -300 + 5000);
    iVar2 = GetDiff(3);
    SetResource(0,2,(3 - iVar2) * 100 + 5000);
    iVar2 = GetDiff(3);
    SetResource(0,0,(3 - iVar2) * 100 + 5000);
    iVar2 = GetDiff(3);
    SetResource(0,5,iVar2 * -300 + 5000);
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,4,5000000);
    SetResource(1,2,5000000);
    SetResource(1,0,5000000);
    SetResource(1,5,5000000);
    SetResource(2,3,5000000);
    SetResource(2,1,5000000);
    SetResource(2,4,5000000);
    SetResource(2,2,5000000);
    SetResource(2,0,5000000);
    SetResource(2,5,5000000);
    iVar2 = GetDiff(3);
    SetResource(3,3,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(3,1,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(3,4,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(3,2,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(3,0,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(3,5,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(4,3,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(4,1,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(4,4,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(4,2,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(4,0,iVar2 * 1000 + 6000);
    iVar2 = GetDiff(3);
    SetResource(4,5,iVar2 * 1000 + 6000);
    SetResource(5,3,5000000);
    SetResource(5,1,5000000);
    SetResource(5,4,5000000);
    SetResource(5,2,5000000);
    SetResource(5,0,5000000);
    SetResource(5,5,5000000);
    InitialUpgrade(DAT_10030250,"AKA16PL");
    InitialUpgrade(DAT_10030250,"AKA17PL");
    InitialUpgrade(DAT_1003024c,"AKA04UA");
    InitialUpgrade(DAT_10030248,"AKA04UA");
    InitialUpgrade(DAT_1003024c,"KUZ03UA");
    InitialUpgrade(DAT_10030248,"KUZ03UA");
    InitialUpgrade(DAT_10030250,"AKA04PL");
    InitialUpgrade(DAT_10030250,"KUZ05PL");
    TakeFood(&DAT_100354b0);
    TakeFood(&DAT_100354b8);
    TakeFood(&DAT_100355c0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE21");
    ShowPage("#PAGE2");
    RunTimer(1,500);
    RunTimer(2,10);
    RunTimer(3,10);
    RunTimer(4,800);
    RunTimer(5,10);
    RunTimer(6,10);
    RunTimer(7,10000);
    RunTimer(8,1000);
    RunTimer(9,30000);
    RunTimer(10,100);
    RunTimer(0xd,100);
    SelectUnits1(1,&DAT_100355c8,0);
    SelOpenGates(1);
    SelectUnits1(2,&DAT_10035578,0);
    SelOpenGates(2);
    SelectUnits1(5,&DAT_10035498,0);
    SelOpenGates(5);
    SelectUnits1(5,&DAT_10035590,0);
    SelOpenGates(5);
    SelectUnits1(5,&DAT_100355a8,0);
    SelOpenGates(5);
    ClearSelection(5);
    SetTrigg(6,0);
    SetTrigg(8,0);
    SetTrigg(0xc,0);
    SetTrigg(0xe,0);
    SetTrigg(0x2d,0);
    SetTrigg(0x3a,0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(2,0);
    StartAI(3,"POLAND.0",0,0,2,-1);
    StartAI(4,"POLAND.0",0,0,2,-1);
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_10035450,0);
    SetTrigg(3,0);
    SelectUnits1(1,&DAT_100355a0,0);
    Patrol(1,&DAT_10035638,0x82);
    ClearSelection(1);
    SelectUnits1(1,&DAT_10035538,0);
    Patrol(1,&DAT_10035630,0x82);
    ClearSelection(1);
    SelectUnits1(2,&DAT_10035548,0);
    Patrol(2,&DAT_10035650,0);
    ClearSelection(2);
    SelectUnits1(2,&DAT_10035558,0);
    Patrol(2,&DAT_10035640,0);
    ClearSelection(2);
    SelectUnits1(5,&DAT_10035568,0);
    Patrol(5,&DAT_10035660,0x41);
    ClearSelection(5);
    SelectUnits1(5,&DAT_10035580,0);
    Patrol(5,&DAT_10035668,0x41);
    ClearSelection(5);
    SelectUnits1(5,&DAT_10035598,0);
    Patrol(5,&DAT_10035670,0x41);
    ClearSelection(5);
    SelectUnits1(5,&DAT_100355b0,0);
    Patrol(5,&DAT_10035678,0x41);
    ClearSelection(5);
    SelectUnits1(0,&DAT_10035450,0);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(1,&DAT_100354c0,0);
      SelSendTo(1,&DAT_100355f8,0x82,0);
      CreateZoneNearGroup(&DAT_100356e0,&DAT_100355f8,&DAT_100354c0,100);
      SelectUnits1(1,&DAT_100354c8,0);
      SelSendTo(1,&DAT_100356e0,0x82,0);
      ClearSelection(1);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100355f8,&DAT_100354c0);
    if (7 < iVar2) {
      SetTrigg(4,0);
      SetTrigg(5,0);
      RunTimer(2,500);
      SetTrigg(6,0);
      SetTrigg(7,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(1,&DAT_100354c0,0);
      SelSendTo(1,&DAT_100355e8,0,0);
      CreateZoneNearGroup(&DAT_100356e0,&DAT_100355e8,&DAT_100354c0,100);
      SelectUnits1(1,&DAT_100354c8,0);
      SelSendTo(1,&DAT_100356e0,0x82,0);
      ClearSelection(1);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100355e8,&DAT_100354c0);
    if (7 < iVar2) {
      SetTrigg(6,0);
      SetTrigg(7,0);
      RunTimer(3,500);
      SetTrigg(8,0);
      SetTrigg(9,0);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(1,&DAT_100354c0,0);
      SelSendTo(1,&DAT_100355f0,0x82,0);
      CreateZoneNearGroup(&DAT_100356e0,&DAT_100355f0,&DAT_100354c0,100);
      SelectUnits1(1,&DAT_100354c8,0);
      SelSendTo(1,&DAT_100356e0,0,0);
      ClearSelection(1);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100355f0,&DAT_100354c0);
    if (7 < iVar2) {
      SetTrigg(8,0);
      SetTrigg(9,0);
      RunTimer(1,500);
      SetTrigg(4,0);
      SetTrigg(5,0);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(10);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(100,0);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(2,&DAT_100354d8,0);
        SelSendTo(2,&DAT_100355f8,0,0);
        CreateZoneNearGroup(&DAT_100356e8,&DAT_100355f8,&DAT_100354d8,100);
        SelectUnits1(2,&DAT_100354e0,0);
        SelSendAndKill(2,&DAT_100356e8,0,0);
        ClearSelection(2);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100355f8,&DAT_100354d8);
    if (5 < iVar2) {
      SetTrigg(10,0);
      SetTrigg(0xb,0);
      RunTimer(5,800);
      SetTrigg(0xc,0);
      SetTrigg(0xd,0);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(10);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(100,0);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(2,&DAT_100354d8,0);
        SelSendTo(2,&DAT_100355f0,0x82,0);
        CreateZoneNearGroup(&DAT_100356e8,&DAT_100355f0,&DAT_100354d8,100);
        SelectUnits1(2,&DAT_100354e0,0);
        SelSendAndKill(2,&DAT_100356e8,0,0);
        ClearSelection(2);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100355f0,&DAT_100354d8);
    if (5 < iVar2) {
      SetTrigg(0xc,0);
      SetTrigg(0xd,0);
      RunTimer(6,800);
      SetTrigg(0xe,0);
      SetTrigg(0xf,0);
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(10);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(100,0);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(2,&DAT_100354d8,0);
        SelSendTo(2,&DAT_100355e8,0,0);
        CreateZoneNearGroup(&DAT_100356e8,&DAT_100355e8,&DAT_100354d8,100);
        SelectUnits1(2,&DAT_100354e0,0);
        SelSendAndKill(2,&DAT_100356e8,0x82,0);
        ClearSelection(2);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100355e8,&DAT_100354d8);
    if (0xc < iVar2) {
      SetTrigg(0xe,0);
      SetTrigg(0xf,0);
      RunTimer(4,800);
      SetTrigg(10,0);
      SetTrigg(0xb,0);
    }
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) == 0) {
    RunTimer(10,100);
    SetTrigg(100,0);
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x10,0);
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      CreateObject0(&DAT_10035470,&DAT_100354f0,&DAT_10035508,1,&DAT_100355d8,0x82);
      SelectUnits1(1,&DAT_10035470,0);
      SelSendTo(1,&DAT_10035628,0xaa,0);
      ClearSelection(1);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10035628,1);
    if (0 < iVar2) {
      SetTrigg(0x12,0);
      iVar2 = GetUnitsAmount1(&DAT_10035628,&DAT_10035518);
      if (iVar2 < 1) {
        ShowPage("#PAGE4");
      }
      else {
        SetStartPoint(&DAT_10035628);
        ShowPage("#PAGE3");
        SetLightSpot(&DAT_100355d8,1,1);
        SetTrigg(0x13,0);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(1,&DAT_10035470,0);
        SelSendTo(1,&DAT_100355d8,0x82,0);
        ClearSelection(1);
        SelectUnits1(0,&DAT_10035450,0);
        SetTrigg(0x3c,0);
      }
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10035628,&DAT_10035518);
      if (0 < iVar2) {
        SetTrigg(0x13,0);
        ShowPage("#PAGE3");
        SetLightSpot(&DAT_100355d8,1,1);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(1,&DAT_10035470,0);
        SelSendTo(1,&DAT_100355d8,0x82,0);
        ClearSelection(1);
        SetTrigg(0x3c,0);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100355d8,&DAT_10035518);
      if (0 < iVar2) {
        uVar1 = Trigg(0x3c);
        if ((uVar1 & 0xff) == 0) {
          SetStartPoint(&DAT_100355d8);
          ShowPage("#PAGE5");
          ShowPage("#PAGE6");
          ClearLightSpot(1);
          SaveSelectedUnits(0,&DAT_10035450,0);
          ClearSelection(0);
          SelectUnits1(1,&DAT_10035528,0);
          SelSendAndKill(1,&DAT_10035628,0xaa,0);
          ClearSelection(1);
          SelectUnits1(0,&DAT_10035450,0);
          SetTrigg(0x14,0);
          SetTrigg(0x15,0);
          RunTimer(0x15,3000);
        }
        else {
          SetStartPoint(&DAT_100355d8);
          ShowPage("#PAGE7");
          ShowPage("#PAGE8");
          SetTrigg(0x14,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100355d8,&DAT_10035518);
      if (iVar2 == 0) {
        SetTrigg(0x14,0);
        RunTimer(8,200);
      }
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x15);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x16,0);
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(1,&DAT_10035528,0);
      SelChangeNation(1,0);
      ClearSelection(0);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x11,0);
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      CreateObject0(&DAT_10035478,&DAT_100354f0,&DAT_10035510,2,&DAT_100355e0,0x82);
      SelectUnits1(2,&DAT_10035478,0);
      SelSendTo(2,&DAT_10035628,0xaa,0);
      ClearSelection(2);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10035628,2);
    if (0 < iVar2) {
      SetTrigg(0x17,0);
      iVar2 = GetUnitsAmount1(&DAT_10035628,&DAT_10035518);
      if (iVar2 < 1) {
        ShowPage("#PAGE10");
      }
      else {
        SetStartPoint(&DAT_10035628);
        ShowPage("#PAGE9");
        SetLightSpot(&DAT_100355e0,1,2);
        SetTrigg(0x18,0);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(2,&DAT_10035478,0);
        SelSendTo(2,&DAT_100355e0,0,0);
        SetTrigg(0x3d,0);
        ClearSelection(2);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10035628,&DAT_10035518);
      if (0 < iVar2) {
        SetTrigg(0x18,0);
        ShowPage("#PAGE9");
        SetLightSpot(&DAT_100355e0,1,2);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(2,&DAT_10035478,0);
        SelSendTo(2,&DAT_100355e0,0,0);
        SetTrigg(0x3d,0);
        ClearSelection(2);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100355e0,&DAT_10035518);
      if (0 < iVar2) {
        uVar1 = Trigg(0x3d);
        if ((uVar1 & 0xff) == 0) {
          SetStartPoint(&DAT_100355e0);
          ShowPage("#PAGE11");
          ShowPage("#PAGE12");
          ShowPage("#PAGE13");
          ClearLightSpot(2);
          SetLightSpot(&DAT_10035698,1,2);
          SetLightSpot(&DAT_100356a0,1,3);
          SaveSelectedUnits(0,&DAT_10035450,0);
          ClearSelection(0);
          SelectUnits1(2,&DAT_10035520,0);
          SelSendAndKill(2,&DAT_10035628,0xaa,0);
          ClearSelection(2);
          SelectUnits1(0,&DAT_10035450,0);
          SetTrigg(0x19,0);
          SetTrigg(0x1a,0);
          RunTimer(0x16,5000);
        }
        else {
          SetStartPoint(&DAT_100355e0);
          ShowPage("#PAGE14");
          ShowPage("#PAGE15");
          SetTrigg(0x19,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x19);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100355e0,&DAT_10035518);
      if (iVar2 == 0) {
        SetTrigg(0x19,0);
        RunTimer(8,2000);
      }
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x16);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1b,0);
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(2,&DAT_10035520,0);
      SelChangeNation(2,0);
      ClearLightSpot(2);
      ClearLightSpot(3);
      ClearSelection(0);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) == 0) {
LAB_10004c77:
    uVar1 = Trigg(0x1c);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_10035580);
      if (iVar2 < 0xb) goto LAB_10004d2a;
    }
    uVar1 = Trigg(0x1c);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_10035598);
      if (iVar2 < 0xb) goto LAB_10004d2a;
    }
    uVar1 = Trigg(0x1c);
    if ((uVar1 & 0xff) == 0) goto LAB_10004e6f;
    iVar2 = GetTotalAmount0(&DAT_100355b0);
    if (10 < iVar2) goto LAB_10004e6f;
  }
  else {
    iVar2 = GetTotalAmount0(&DAT_10035568);
    if (10 < iVar2) goto LAB_10004c77;
  }
LAB_10004d2a:
  SetTrigg(0x1c,0);
  ShowPage("#PAGE16");
  SaveSelectedUnits(0,&DAT_10035450,0);
  ClearSelection(0);
  SelectUnits1(5,&DAT_10035568,0);
  SelectUnits1(5,&DAT_10035580,1);
  SelSendAndKill(5,&DAT_10035688,0x3c,0);
  ClearSelection(5);
  SelectUnits1(5,&DAT_10035598,0);
  SelectUnits1(5,&DAT_100355b0,1);
  SelSendAndKill(5,&DAT_10035690,0x3c,0);
  ClearSelection(5);
  SelectUnits1(0,&DAT_10035450,0);
LAB_10004e6f:
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1c);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100355d0,&DAT_100356b0);
      if (iVar2 < 4) {
        uVar1 = Trigg(0x27);
        if ((uVar1 & 0xff) != 0) {
          SetDestPoint(&DAT_10035570,&DAT_100355d0);
          SetDestPoint(&DAT_10035588,&DAT_10035680);
          ProduceUnit(&DAT_10035570,&DAT_10035620,&DAT_100356b0);
          ProduceUnit(&DAT_10035588,&DAT_10035500,&DAT_100356b8);
        }
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100355d0,&DAT_100356b0);
      if (1 < iVar2) {
        SetTrigg(0x1e,0);
        SetTrigg(0x1f,0);
        iVar2 = GetDiff(3);
        RunTimer(0xb,iVar2 * -1000 + 6000);
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0xb);
      if ((uVar1 & 0xff) != 0) {
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(5,&DAT_100356b0,0);
        SelSendAndKill(5,&DAT_10035600,0x3c,0);
        RemoveGroup(&DAT_100356b0,&DAT_10035438);
        ClearSelection(5);
        SelectUnits1(0,&DAT_10035450,0);
        SetTrigg(0x20,0);
        SetTrigg(0x21,0);
        SetTrigg(0x1e,0);
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x20);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_10035600,&DAT_10035438);
      if (4 < iVar2) {
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(5,&DAT_10035498,0);
        SelOpenGates(5);
        SelectUnits1(5,&DAT_10035438,0);
        SelChangeNation(5,4);
        ClearSelection(4);
        SelectUnits1(0,&DAT_10035450,0);
        SetTrigg(0x20,0);
        SetTrigg(0x1f,0);
      }
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x27);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(5,&DAT_100356b8,0);
      SelSendAndKill(5,&DAT_10035608,0x3c,0);
      RemoveGroup(&DAT_100356b8,&DAT_10035468);
      ClearSelection(5);
      SelectUnits1(0,&DAT_10035450,0);
      SetTrigg(0x21,0);
      SetTrigg(0x22,0);
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x22);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_10035608,&DAT_10035468);
      if (5 < iVar2) {
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(5,&DAT_10035468,0);
        SelChangeNation(5,3);
        ClearSelection(3);
        SelectUnits1(0,&DAT_10035450,0);
        SetTrigg(0x22,0);
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x24);
      if ((uVar1 & 0xff) != 0) {
        ShowPage("#PAGE17");
        SetTrigg(0x23,0);
        SetTrigg(0x27,0);
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x23);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x29);
      if ((uVar1 & 0xff) != 0) {
        SetDestPoint(&DAT_10035570,&DAT_10035608);
        SetDestPoint(&DAT_10035588,&DAT_10035608);
        ProduceUnit(&DAT_10035570,&DAT_10035620,&DAT_100356b0);
        ProduceUnit(&DAT_10035588,&DAT_10035500,&DAT_100356b8);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnitsInZone(&DAT_10035608,5,0);
        SelChangeNation(5,3);
        ClearSelection(3);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x23);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x24,0);
        ShowPage("#PAGE17");
        SetTrigg(0x27,0);
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x24);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x29);
      if ((uVar1 & 0xff) != 0) {
        SetDestPoint(&DAT_10035570,&DAT_10035600);
        SetDestPoint(&DAT_10035588,&DAT_10035600);
        ProduceUnit(&DAT_10035570,&DAT_10035620,&DAT_100356b0);
        ProduceUnit(&DAT_10035588,&DAT_10035500,&DAT_100356b8);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnitsInZone(&DAT_10035600,5,0);
        SelChangeNation(5,4);
        ClearSelection(4);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x36);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = NationIsErased(4);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x25,0);
          ShowPage("#PAGE18");
          SetTrigg(0x27,0);
          SetTrigg(0x29,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x27);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x28,0);
      InitialUpgrade(DAT_10030250,"KUZ03PL");
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10035648,0);
    if (0 < iVar2) {
      SetTrigg(0x26,0);
      SetTrigg(0x27,0);
      SetTrigg(0x29,0);
      ShowPage("#PAGE19");
      SetTrigg(0x27,0);
      InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)ATTACK");
      InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)ATTACK3");
      InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)SHIELD");
      InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)SHIELD3");
      InitialUpgrade(DAT_10030250,"Mushketer_polsha(PL)ATTACK");
      InitialUpgrade(DAT_10030250,"Mushketer_polsha(PL)ATTACK3");
      InitialUpgrade(DAT_10030250,"Mushketer_polsha(PL)ATTACK4");
      InitialUpgrade(DAT_10030250,"AKA31PL");
      iVar2 = GetDiff(3);
      if (1 < iVar2) {
        InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)ATTACK4");
        InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)ATTACK5");
        InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)ATTACK6");
        InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)ATTACK7");
        InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)SHIELD4");
        InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)SHIELD5");
        InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)SHIELD6");
        InitialUpgrade(DAT_10030250,"Poland_pikiner(PL)SHIELD7");
        InitialUpgrade(DAT_10030250,"Mushketer_polsha(PL)SHIELD");
        InitialUpgrade(DAT_10030250,"Mushketer_polsha(PL)SHIELD3");
        InitialUpgrade(DAT_10030250,"Mushketer_polsha(PL)SHIELD4");
        InitialUpgrade(DAT_10030250,"Mushketer_polsha(PL)SHIELD5");
        InitialUpgrade(DAT_10030250,"Mushketer_polsha(PL)SHIELD6");
        InitialUpgrade(DAT_10030250,"Mushketer_polsha(PL)SHIELD7");
        InitialUpgrade(DAT_10030250,"AKA33PL");
        InitialUpgrade(DAT_10030250,"AKA15PL");
        InitialUpgrade(DAT_10030250,"AKA14PL");
        InitialUpgrade(DAT_10030250,"AKA13PL");
        InitialUpgrade(DAT_10030250,"AKA12PL");
        InitialUpgrade(DAT_10030250,"AKA34PL");
        InitialUpgrade(DAT_10030250,"KUZ06PL");
      }
      uVar1 = Trigg(0x1c);
      if ((uVar1 & 0xff) != 0) {
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(5,&DAT_10035568,0);
        SelectUnits1(5,&DAT_10035580,1);
        SelSendAndKill(5,&DAT_10035688,0x3c,0);
        ClearSelection(5);
        SelectUnits1(5,&DAT_10035598,0);
        SelectUnits1(5,&DAT_100355b0,1);
        SelSendAndKill(5,&DAT_10035690,0x3c,0);
        ClearSelection(5);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x29);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetDiff(3);
      if (1 < iVar2) {
        SetDestPoint(&DAT_10035570,&DAT_10035648);
        SetDestPoint(&DAT_10035588,&DAT_10035688);
        ProduceUnit(&DAT_10035570,&DAT_100354f8,&DAT_100356b0);
        ProduceUnitFast(&DAT_10035588,&DAT_10035500,&DAT_100356b8,3);
      }
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x29);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetDiff(3);
      if (iVar2 < 2) {
        SetDestPoint(&DAT_10035570,&DAT_10035648);
        SetDestPoint(&DAT_10035588,&DAT_10035688);
        ProduceUnit(&DAT_10035570,&DAT_100354f8,&DAT_100356b0);
        ProduceUnitFast(&DAT_10035588,&DAT_10035500,&DAT_100356b8,7);
      }
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100356b0);
    if (0x47 < iVar2) {
      uVar1 = Trigg(0x29);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x2b,0);
        SetTrigg(0x3a,0);
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(5,&DAT_100356b0,0);
        RemoveGroup(&DAT_100356b0,&DAT_10035438);
        SelectUnits1(5,&DAT_100356b8,0);
        RemoveGroup(&DAT_100356b8,&DAT_10035468);
        SelectUnits1(5,&DAT_10035468,0);
        SelSendAndKill(5,&DAT_10035658,0x3c,0);
        SelectUnits1(5,&DAT_10035438,0);
        SelSendAndKill(5,&DAT_10035658,0x3c,0);
        CreateObject0(&DAT_100356a8,&DAT_100354f0,&DAT_10035618,5,&DAT_10035648,0x3c);
        SelectUnits1(5,&DAT_100356a8,0);
        SelSendAndKill(5,&DAT_10035658,0x3c,0);
        ClearSelection(5);
        RunTimer(0xc,3000);
        SetTrigg(0x2d,0);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10035438);
    if (iVar2 < 0x33) {
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(5,&DAT_10035438,0);
      SelSendAndKill(5,&DAT_100355f8,0x3c,0);
      ClearSelection(5);
      SetTrigg(0x2d,0);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = TimerDone(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetTotalAmount0(&DAT_100356a8);
        if (0 < iVar2) {
          SaveSelectedUnits(0,&DAT_10035450,0);
          ClearSelection(0);
          SelectUnits1(5,&DAT_100356a8,0);
          CreateZoneNearGroup(&DAT_100356f0,&DAT_100355f8,&DAT_100356a8,100);
          SelSendAndKill(5,&DAT_100355f8,0x3c,0);
          SelectUnits1(5,&DAT_10035438,0);
          SelectUnits1(5,&DAT_10035468,1);
          SelSendAndKill(5,&DAT_100356f0,0x3c,0);
          ClearSelection(5);
          RunTimer(0xd,300);
          SelectUnits1(0,&DAT_10035450,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10035618,5);
      if (iVar2 == 0) {
        SaveSelectedUnits(0,&DAT_10035450,0);
        ClearSelection(0);
        SelectUnits1(5,&DAT_10035438,0);
        SelectUnits1(5,&DAT_10035468,1);
        SelSendAndKill(5,&DAT_100355f8,0x3c,0);
        ClearSelection(5);
        RunTimer(0xd,300);
        SelectUnits1(0,&DAT_10035450,0);
      }
    }
  }
  uVar1 = Trigg(0x3a);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10035468);
    if (iVar2 < 0xf) {
      SetTrigg(0x3a,0);
      SetTrigg(0x2b,0);
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x2e);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x15);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x47);
        if ((uVar1 & 0xff) != 0) {
          SetDestPoint(&DAT_10035530,&DAT_10035628);
          SetDestPoint(&DAT_10035540,&DAT_10035628);
          ProduceUnit(&DAT_10035530,&DAT_10035508,&DAT_100356c0);
          ProduceUnit(&DAT_10035540,&DAT_10035510,&DAT_100356c8);
        }
      }
    }
  }
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100356b0);
    if (5 < iVar2) {
      SetTrigg(0x2e,0);
      RunTimer(0xe,20000);
      RunTimer(0x10,500);
      SetTrigg(0x2f,0);
      SetTrigg(0x32,0);
      uVar1 = Trigg(0x29);
      if ((uVar1 & 0xff) == 0) {
        RunTimer(0xe,10000);
      }
    }
  }
  uVar1 = Trigg(0x38);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x38,0);
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(1,&DAT_100356c0,0);
      RemoveGroup(&DAT_100356c0,&DAT_10035480);
      SelectUnits1(1,&DAT_10035480,0);
      SelChangeNation(1,0);
      SelectUnits1(1,&DAT_100356c8,0);
      RemoveGroup(&DAT_100356c8,&DAT_10035490);
      SelectUnits1(1,&DAT_10035490,0);
      SelChangeNation(1,0);
      ClearSelection(1);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xe);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2e,0);
      SetTrigg(0x2f,0);
      SetTrigg(0x32,0);
      SetTrigg(0x38,0);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x1c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x33);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x47);
        if ((uVar1 & 0xff) != 0) {
          SetDestPoint(&DAT_10035550,&DAT_10035628);
          SetDestPoint(&DAT_10035560,&DAT_10035628);
          ProduceUnit(&DAT_10035550,&DAT_10035510,&DAT_100356d8);
          ProduceUnit(&DAT_10035560,&DAT_10035508,&DAT_100356d0);
        }
      }
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100356d0);
    if (9 < iVar2) {
      SetTrigg(0x33,0);
      SetTrigg(0x34,0);
      SetTrigg(0x35,0);
      RunTimer(0x11,500);
      RunTimer(0xf,20000);
      uVar1 = Trigg(0x29);
      if ((uVar1 & 0xff) == 0) {
        RunTimer(0xf,10000);
      }
    }
  }
  uVar1 = Trigg(0x39);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x11);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x39,0);
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(2,&DAT_100356d0,0);
      RemoveGroup(&DAT_100356d0,&DAT_100354a8);
      SelectUnits1(2,&DAT_100354a8,0);
      SelChangeNation(2,0);
      SelectUnits1(2,&DAT_100356d8,0);
      RemoveGroup(&DAT_100356d8,&DAT_100354d0);
      SelectUnits1(2,&DAT_100354d0,0);
      SelChangeNation(2,0);
      ClearSelection(2);
      SelectUnits1(0,&DAT_10035450,0);
    }
  }
  uVar1 = Trigg(0x35);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xf);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x35,0);
      SetTrigg(0x33,0);
      SetTrigg(0x34,0);
      SetTrigg(0x39,0);
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100354e8);
    if (iVar2 == 0) {
      ShowPage("#PAGE20");
      SaveSelectedUnits(0,&DAT_10035450,0);
      ClearSelection(0);
      SelectUnits1(5,&DAT_100355b8,0);
      SelDie(5);
      SetTrigg(0x36,0);
      SelectUnits1(0,&DAT_10035450,0);
      SetTrigg(0x47,0);
    }
  }
  iVar2 = GetUnitsByNation(&DAT_100354e8,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10035450,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_100354e8,0);
    SelDie(0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10035450,0);
  }
  uVar1 = Trigg(0x31);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10035518);
    if (iVar2 == 0) {
      SetTrigg(0x31,0);
      ShowPage("#PAGE49");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x37,0);
      ShowPage("#PAGE50");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x30);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(4);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = NationIsErased(5);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x30,0);
          ShowPage("#PAGE48");
          ShowVictory();
        }
      }
    }
  }
  uStack_8 = 0x100072fa;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
