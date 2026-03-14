#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10031238[] = "G26";
char DAT_1003123c[] = "G25";
char DAT_10031240[] = "G24";
char DAT_10031244[] = "G23";
char DAT_10031248[] = "G22";
char DAT_1003124c[] = "G21";
char DAT_10031250[] = "G20";
char DAT_10031254[] = "G19";
char DAT_10031258[] = "G18";
char DAT_1003125c[] = "G17";
char DAT_10031260[] = "G16";
char DAT_10031264[] = "G15";
char DAT_10031268[] = "G14";
char DAT_1003126c[] = "G13";
char DAT_10031270[] = "G12";
char DAT_10031274[] = "G11";
char DAT_10031278[] = "G10";
char DAT_1003127c[] = "G9";
char DAT_10031280[] = "G8";
char DAT_10031284[] = "G5";
char DAT_10031288[] = "G4";
char DAT_1003128c[] = "G3";
char DAT_10031290[] = "G2";
char DAT_10031294[] = "G1";
char DAT_10031298[] = "Z26";
char DAT_1003129c[] = "Z25";
char DAT_100312a0[] = "Z24";
char DAT_100312a4[] = "Z23";
char DAT_100312a8[] = "Z22";
char DAT_100312ac[] = "Z21";
char DAT_100312b0[] = "Z20";
char DAT_100312b4[] = "Z19";
char DAT_100312b8[] = "Z18";
char DAT_100312bc[] = "Z17";
char DAT_100312c0[] = "Z16";
char DAT_100312c4[] = "Z15";
char DAT_100312c8[] = "Z14";
char DAT_100312cc[] = "Z13";
char DAT_100312d0[] = "Z12";
char DAT_100312d4[] = "Z11";
char DAT_100312d8[] = "Z10";
char DAT_100312dc[] = "Z9";
char DAT_100312e0[] = "Z8";
char DAT_100312e4[] = "Z7";
char DAT_100312e8[] = "Z6";
char DAT_100312ec[] = "Z5";
char DAT_100312f0[] = "Z4";
char DAT_100312f4[] = "Z3";
char DAT_100312f8[] = "Z2";
char DAT_100312fc[] = "Z1";
int DAT_100363e0 = 0;
int DAT_100363e4 = 0;
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
long long DAT_100364d0 = 0;
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
int DAT_10036620 = 0;
int DAT_10036624 = 0;
long long DAT_10036628 = 0;
int DAT_1003662c = 0;
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
int DAT_10036628_ovl = 0;

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterVar(&DAT_100363e4,4);
  RegisterVar(&DAT_100363e0,4);
  RegisterVar(&DAT_10036620,4);
  RegisterVar(&DAT_10036624,4);
  RegisterVar(&DAT_10036628,4);
  RegisterVar(&DAT_1003662c,4);
  RegisterVar(&DAT_100366c0,8);
  RegisterVar(&DAT_100366c8,8);
  RegisterVar(&DAT_100366d0,8);
  RegisterZone(&DAT_100365d0,DAT_100312fc);
  RegisterZone(&DAT_100365d8,DAT_100312f8);
  RegisterZone(&DAT_100365e0,DAT_100312f4);
  RegisterZone(&DAT_100365e8,DAT_100312f0);
  RegisterZone(&DAT_100365f0,DAT_100312ec);
  RegisterZone(&DAT_100365f8,DAT_100312e8);
  RegisterZone(&DAT_10036600,DAT_100312e4);
  RegisterZone(&DAT_10036608,DAT_100312e0);
  RegisterZone(&DAT_10036610,DAT_100312dc);
  RegisterZone(&DAT_10036630,DAT_100312d8);
  RegisterZone(&DAT_10036638,DAT_100312d4);
  RegisterZone(&DAT_10036640,DAT_100312d0);
  RegisterZone(&DAT_10036648,DAT_100312cc);
  RegisterZone(&DAT_10036658,DAT_100312c8);
  RegisterZone(&DAT_10036668,DAT_100312c4);
  RegisterZone(&DAT_10036678,DAT_100312c0);
  RegisterZone(&DAT_10036688,DAT_100312bc);
  RegisterZone(&DAT_10036698,DAT_100312b8);
  RegisterZone(&DAT_100366a8,DAT_100312b4);
  RegisterZone(&DAT_10036650,DAT_100312b0);
  RegisterZone(&DAT_10036660,DAT_100312ac);
  RegisterZone(&DAT_10036670,DAT_100312a8);
  RegisterZone(&DAT_10036680,DAT_100312a4);
  RegisterZone(&DAT_10036690,DAT_100312a0);
  RegisterZone(&DAT_100366a0,DAT_1003129c);
  RegisterZone(&DAT_100366b0,DAT_10031298);
  RegisterVar(&DAT_100364b0,8);
  RegisterVar(&DAT_100364c0,8);
  RegisterVar(&DAT_100364c8,8);
  RegisterVar(&DAT_100364d0,8);
  RegisterVar(&DAT_100364d8,8);
  RegisterVar(&DAT_10036530,8);
  RegisterVar(&DAT_10036538,8);
  RegisterVar(&DAT_10036540,8);
  RegisterVar(&DAT_100364e0,8);
  RegisterVar(&DAT_100364e8,8);
  RegisterVar(&DAT_100364f0,8);
  RegisterDynGroup(&DAT_100364b0);
  RegisterDynGroup(&DAT_100364c0);
  RegisterDynGroup(&DAT_100364c8);
  RegisterDynGroup(&DAT_100364d0);
  RegisterDynGroup(&DAT_100364d8);
  RegisterDynGroup(&DAT_10036530);
  RegisterDynGroup(&DAT_10036538);
  RegisterDynGroup(&DAT_10036540);
  RegisterDynGroup(&DAT_100364e0);
  RegisterDynGroup(&DAT_100364e8);
  RegisterDynGroup(&DAT_100364f0);
  RegisterUnits(&DAT_100364f8,DAT_10031294);
  RegisterUnits(&DAT_10036500,DAT_10031290);
  RegisterUnits(&DAT_10036508,DAT_1003128c);
  RegisterUnits(&DAT_10036510,DAT_10031288);
  RegisterUnits(&DAT_10036518,DAT_10031284);
  RegisterUnits(&DAT_10036520,DAT_10031280);
  RegisterUnits(&DAT_10036528,DAT_1003127c);
  RegisterUnits(&DAT_10036548,DAT_10031278);
  RegisterUnits(&DAT_10036550,DAT_10031274);
  RegisterUnits(&DAT_10036558,DAT_10031270);
  RegisterUnits(&DAT_10036560,DAT_1003126c);
  RegisterUnits(&DAT_10036570,DAT_10031268);
  RegisterUnits(&DAT_10036580,DAT_10031264);
  RegisterUnits(&DAT_10036590,DAT_10031260);
  RegisterUnits(&DAT_100365a0,DAT_1003125c);
  RegisterUnits(&DAT_100365b0,DAT_10031258);
  RegisterUnits(&DAT_100365c0,DAT_10031254);
  RegisterUnits(&DAT_10036568,DAT_10031250);
  RegisterUnits(&DAT_10036578,DAT_1003124c);
  RegisterUnits(&DAT_10036588,DAT_10031248);
  RegisterUnits(&DAT_10036598,DAT_10031244);
  RegisterUnits(&DAT_100365a8,DAT_10031240);
  RegisterUnits(&DAT_100365b8,DAT_1003123c);
  RegisterUnits(&DAT_100365c8,DAT_10031238);
  RegisterUnitType(&DAT_10036458,"Center_Turki(TU)");
  RegisterUnitType(&DAT_10036468,"Dom_Turki(TU)");
  RegisterUnitType(&DAT_10036478,"Rinok_Turki(TU)");
  RegisterUnitType(&DAT_10036488,"Kuznia_Turki(TU)");
  RegisterUnitType(&DAT_10036490,"Mechet_Turki(TU)");
  RegisterUnitType(&DAT_10036498,"Minaret(TU)");
  RegisterUnitType(&DAT_100364a0,"Diplomatic_Turki(TU)");
  RegisterUnitType(&DAT_100364a8,"Barack_Turki(TU)");
  RegisterUnitType(&DAT_100364b8,"Konushnia_Turki(TU)");
  RegisterUnitType(&DAT_10036408,"Art_Depo_Turki(TU)");
  RegisterUnitType(&DAT_10036410,"Melnica_tu(TU)");
  RegisterUnitType(&DAT_10036418,"shahta(TU)");
  RegisterUnitType(&DAT_10036420,"Port(TU)");
  RegisterUnitType(&DAT_10036430,"Dip_korpus_UA(UA)");
  RegisterUnitType(&DAT_10036440,"CenterUR(UA)");
  RegisterUnitType(&DAT_10036450,"Melnica_rus(UA)");
  RegisterUnitType(&DAT_10036460,"Mortira_b(UA)");
  RegisterUnitType(&DAT_10036470,"Mortira_b(TU)");
  RegisterUnitType(&DAT_10036480,"shahta(UA)");
  RegisterUnitType(&DAT_10036428,"akademia_UA(UA)");
  RegisterUnitType(&DAT_10036438,"Kozacki_Strelec(UA)");
  RegisterUnitType(&DAT_10036448,"CenterUR(UA)");
  RegisterUnitType(&DAT_10036400,"Kres_ukranian(UA)");
  RegisterUnitType(&DAT_10036618,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_100366b8,"Tatarin(TU)");
  RegisterFormation(&DAT_100363e8,"#LINE15PUS");
  RegisterFormation(&DAT_100363f0,"#LINEMORB20");
  RegisterFormation(&DAT_100363f8,"#LINE25PUS");
  SetPlayerName(1,"TURKEY");
  SetPlayerName(2,"TURKEY");
  SetPlayerName(3,"TURKEY");
  SetPlayerName(4,"TURKEY");
  SetPlayerName(5,"ROBBERS");
  uStack_8 = 0x10001cab;
  return;
}







void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SetResource(0,3,50000);
    SetResource(0,1,0);
    SetResource(0,4,5000);
    SetResource(0,2,0);
    SetResource(0,0,0);
    SetResource(0,5,5000);
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,4,5000000);
    SetResource(1,2,5000000);
    SetResource(1,0,5000000);
    SetResource(1,5,5000000);
    SetResource(2,3,20000);
    SetResource(2,1,7000);
    SetResource(2,4,7000);
    SetResource(2,2,7000);
    SetResource(2,0,7000);
    SetResource(2,5,7000);
    SetResource(3,3,5000000);
    SetResource(3,1,5000000);
    SetResource(3,4,5000000);
    SetResource(3,2,5000000);
    SetResource(3,0,5000000);
    SetResource(3,5,5000000);
    SetResource(4,3,5000000);
    SetResource(4,1,5000000);
    SetResource(4,4,5000000);
    SetResource(4,2,5000000);
    SetResource(4,0,5000000);
    SetResource(4,5,5000000);
    SetResource(5,3,5000000);
    SetResource(5,1,5000000);
    SetResource(5,4,5000000);
    SetResource(5,2,5000000);
    SetResource(5,0,5000000);
    SetResource(5,5,5000000);
    InitialUpgrade(DAT_10031280,"AKA04TU");
    InitialUpgrade(DAT_10031284,"AKA04TU");
    InitialUpgrade(DAT_10031248,"AKA04UA");
    iVar3 = GetDiff(0);
    if (iVar3 < 2) {
      InitialUpgrade(DAT_10031284,"KUZ05TU");
      InitialUpgrade(DAT_10031258,"KUZ05TU");
      InitialUpgrade(DAT_10031248,"KUZ05TU");
    }
    iVar3 = GetDiff(0);
    if (iVar3 < 3) {
      InitialUpgrade(DAT_10031284,"KUZ05TU");
      InitialUpgrade(DAT_10031258,"KUZ05TU");
      InitialUpgrade(DAT_10031248,"KUZ05TU");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)ATTACK");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)ATTACK3");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)ATTACK");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)ATTACK3");
      InitialUpgrade(DAT_10031248,"TUrkey_pikiner(TU)ATTACK");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)SHIELD");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)SHIELD3");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)SHIELD");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)SHIELD3");
      InitialUpgrade(DAT_10031248,"TUrkey_pikiner(TU)SHIELD");
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      InitialUpgrade(DAT_10031284,"KUZ05TU");
      InitialUpgrade(DAT_10031258,"KUZ05TU");
      InitialUpgrade(DAT_10031248,"KUZ05TU");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)ATTACK");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)ATTACK3");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)ATTACK");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)ATTACK3");
      InitialUpgrade(DAT_10031248,"TUrkey_pikiner(TU)ATTACK");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)SHIELD");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)SHIELD3");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)SHIELD");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)SHIELD3");
      InitialUpgrade(DAT_10031248,"TUrkey_pikiner(TU)SHIELD");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)ATTACK4");
      InitialUpgrade(DAT_10031284,"TUrkey_pikiner(TU)SHIELD4");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)ATTACK4");
      InitialUpgrade(DAT_10031258,"TUrkey_pikiner(TU)SHIELD4");
      InitialUpgrade(DAT_10031248,"TUrkey_pikiner(TU)ATTACK3");
      InitialUpgrade(DAT_10031248,"TUrkey_pikiner(TU)SHIELD3");
    }
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    TakeFood(&DAT_10036580);
    TakeFood(&DAT_10036590);
    TakeFood(&DAT_10036598);
    SelectUnits1(3,&DAT_10036578,0);
    SelOpenGates(3);
    ClearSelection(3);
    RunTimer(0x13,500);
    RunTimer(0x14,500);
    RunTimer(0x15,500);
    RunTimer(0x18,10);
    RunTimer(0x1b,10);
    CreateZoneNearGroup(&DAT_100366c0,&DAT_100365e0,&DAT_10036508,700);
    CreateZoneNearGroup(&DAT_100366c8,&DAT_10036678,&DAT_100364f8,700);
    EnableUnit(0,&DAT_10036458,0);
    EnableUnit(0,&DAT_10036468,0);
    EnableUnit(0,&DAT_10036478,0);
    EnableUnit(0,&DAT_10036488,0);
    EnableUnit(0,&DAT_10036490,0);
    EnableUnit(0,&DAT_10036498,0);
    EnableUnit(0,&DAT_100364a0,0);
    EnableUnit(0,&DAT_100364a8,0);
    EnableUnit(0,&DAT_100364b8,0);
    EnableUnit(0,&DAT_10036408,0);
    EnableUnit(0,&DAT_10036410,0);
    EnableUnit(0,&DAT_10036418,0);
    EnableUnit(0,&DAT_10036420,0);
    EnableUnit(0,&DAT_10036430,0);
    EnableUnit(2,&DAT_10036420,0);
    EnableUnit(2,&DAT_100364a0,0);
    EnableUnit(0,&DAT_10036440,0);
    EnableUnit(0,&DAT_10036450,0);
    EnableUnit(0,&DAT_10036460,0);
    EnableUnit(2,&DAT_10036470,0);
    EnableUnit(0,&DAT_10036480,0);
    EnableUnit(0,&DAT_10036428,0);
    EnableUnit(0,&DAT_10036438,0);
    SetTrigg(2,0);
    SetTrigg(3,0);
    SetTrigg(5,0);
    SetTrigg(6,0);
    SetTrigg(7,0);
    SetTrigg(8,0);
    SetTrigg(9,0);
    SetTrigg(10,0);
    SetTrigg(0xc,0);
    SetTrigg(0xb,0);
    SetTrigg(0xd,0);
    SetTrigg(0x11,0);
    SetTrigg(0x15,0);
    SetTrigg(0x1e,0);
    SetTrigg(0x22,0);
    SetTrigg(0x43,0);
    DAT_100363e0 = 0;
    DAT_10036620 = 5000;
    DAT_10036624 = 5000;
    DAT_10036628_ovl = 5000;
    DAT_1003662c = 5000;
    ChangeFriends(0,0x3f);
    ChangeFriends(1,0x3f);
    ChangeFriends(2,0x3f);
    ChangeFriends(3,0x3f);
    ChangeFriends(4,0x3f);
    ChangeFriends(5,0x3f);
    EnableMission(0x41);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    SetLightSpot(&DAT_10036608,1,2);
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100366a8,&DAT_10036508);
      if (3 < iVar3) {
        SetTrigg(0xd,0);
        SetTrigg(0xe,0);
        RunTimer(1,1000);
        SetTrigg(2,1);
        SetTrigg(3,1);
      }
    }
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(1);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(9);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(1,&DAT_10036508,0);
          SelSendAndKill(1,&DAT_100365d8,0xd2,0);
          CreateZoneNearGroup(&DAT_100366c0,&DAT_100365d8,&DAT_10036508,700);
          SelectUnits1(1,&DAT_10036510,0);
          SelSendAndKill(1,&DAT_100366c0,0xd2,0);
          SetTrigg(4,1);
          ClearSelection(1);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100365d8,&DAT_10036508);
      if (1 < iVar3) {
        SetTrigg(2,0);
        SetTrigg(3,0);
        RunTimer(2,1000);
        SetTrigg(5,1);
        SetTrigg(6,1);
      }
    }
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(2);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(9);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(1,&DAT_10036508,0);
          SelSendAndKill(1,&DAT_100365e0,0,0);
          CreateZoneNearGroup(&DAT_100366c0,&DAT_100365e0,&DAT_10036508,700);
          SelectUnits1(1,&DAT_10036510,0);
          SelSendAndKill(1,&DAT_100366c0,0xd2,0);
          SetTrigg(4,1);
          ClearSelection(1);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100365e0,&DAT_10036508);
      if (1 < iVar3) {
        SetTrigg(5,0);
        SetTrigg(6,0);
        RunTimer(3,1000);
        SetTrigg(7,1);
        SetTrigg(8,1);
      }
    }
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(9);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(1,&DAT_10036508,0);
          SelSendAndKill(1,&DAT_100365e8,0,0);
          CreateZoneNearGroup(&DAT_100366c0,&DAT_100365e8,&DAT_10036508,700);
          SelectUnits1(1,&DAT_10036510,0);
          SelSendAndKill(1,&DAT_100366c0,0xfa,0);
          SetTrigg(4,1);
          ClearSelection(1);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100365e8,&DAT_10036508);
      if (7 < iVar3) {
        SetTrigg(7,0);
        SetTrigg(8,0);
        RunTimer(4,1000);
        SetTrigg(9,1);
        SetTrigg(10,1);
      }
    }
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(4);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(9);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(1,&DAT_10036508,0);
          SelSendAndKill(1,&DAT_100365e0,0x82,0);
          CreateZoneNearGroup(&DAT_100366c0,&DAT_100365e0,&DAT_10036508,700);
          SelectUnits1(1,&DAT_10036510,0);
          SelSendAndKill(1,&DAT_100366c0,0x78,0);
          SetTrigg(4,1);
          ClearSelection(1);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100365e0,&DAT_10036508);
      if (1 < iVar3) {
        SetTrigg(9,0);
        SetTrigg(10,0);
        RunTimer(5,1000);
        SetTrigg(0xb,1);
        SetTrigg(0xc,1);
      }
    }
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(5);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(9);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(1,&DAT_10036508,0);
          SelSendAndKill(1,&DAT_100365d8,0x5a,0);
          CreateZoneNearGroup(&DAT_100366c0,&DAT_100365d8,&DAT_10036508,700);
          SelectUnits1(1,&DAT_10036510,0);
          SelSendAndKill(1,&DAT_100366c0,0x50,0);
          SetTrigg(4,1);
          ClearSelection(1);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100365d8,&DAT_10036508);
      if (1 < iVar3) {
        SetTrigg(0xb,0);
        SetTrigg(0xc,0);
        RunTimer(6,1000);
        SetTrigg(0xd,1);
        SetTrigg(0xe,1);
      }
    }
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(6);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(9);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(1,&DAT_10036508,0);
          SelSendAndKill(1,&DAT_100366a8,100,0);
          CreateZoneNearGroup(&DAT_100366c0,&DAT_100366a8,&DAT_10036508,700);
          SelectUnits1(1,&DAT_10036510,0);
          SelSendAndKill(1,&DAT_100366c0,100,0);
          SetTrigg(4,1);
          ClearSelection(1);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      RunTimer(9,0x8c);
      SetTrigg(4,0);
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10036698,&DAT_100364f8);
      if (7 < iVar3) {
        SetTrigg(0xf,0);
        SetTrigg(0x16,0);
        RunTimer(7,3000);
        SetTrigg(0x10,1);
        SetTrigg(0x11,1);
      }
    }
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(7);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(10);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(3,&DAT_100364f8,0);
          SelSendAndKill(3,&DAT_10036678,100,0);
          CreateZoneNearGroup(&DAT_100366c8,&DAT_10036678,&DAT_100364f8,700);
          SelectUnits1(3,&DAT_10036500,0);
          SelSendAndKill(3,&DAT_100366c8,0x50,0);
          SetTrigg(0x17,1);
          ClearSelection(3);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(0x11);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10036678,&DAT_100364f8);
      if (7 < iVar3) {
        SetTrigg(0x10,0);
        SetTrigg(0x11,0);
        RunTimer(8,1000);
        SetTrigg(0x12,1);
        SetTrigg(0x13,1);
      }
    }
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(8);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(10);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(3,&DAT_100364f8,0);
          SelSendAndKill(3,&DAT_100365e8,0x82,0);
          CreateZoneNearGroup(&DAT_100366c8,&DAT_100365e8,&DAT_100364f8,700);
          SelectUnits1(3,&DAT_10036500,0);
          SelSendAndKill(3,&DAT_100366c8,0x6e,0);
          SetTrigg(0x17,1);
          ClearSelection(3);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100365e8,&DAT_100364f8);
      if (7 < iVar3) {
        SetTrigg(0x12,0);
        SetTrigg(0x13,0);
        RunTimer(0xb,1000);
        SetTrigg(0x14,1);
        SetTrigg(0x15,1);
      }
    }
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(0xb);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(10);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(3,&DAT_100364f8,0);
          SelSendAndKill(3,&DAT_10036678,0xf0,0);
          CreateZoneNearGroup(&DAT_100366c8,&DAT_10036678,&DAT_100364f8,700);
          SelectUnits1(3,&DAT_10036500,0);
          SelSendAndKill(3,&DAT_100366c8,0xfa,0);
          SetTrigg(0x17,1);
          ClearSelection(3);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10036678,&DAT_100364f8);
      if (7 < iVar3) {
        SetTrigg(0x14,0);
        SetTrigg(0x15,0);
        RunTimer(0xc,1000);
        SetTrigg(0x16,1);
        SetTrigg(0xf,1);
      }
    }
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(0xc);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(10);
        if ((uVar1 & 0xff) != 0) {
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(3,&DAT_100364f8,0);
          SelSendAndKill(3,&DAT_10036698,0xdc,0);
          CreateZoneNearGroup(&DAT_100366c8,&DAT_10036698,&DAT_100364f8,700);
          SelectUnits1(3,&DAT_10036500,0);
          SelSendAndKill(3,&DAT_100366c8,0xdc,0);
          SetTrigg(0x17,1);
          ClearSelection(3);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      RunTimer(10,0x8c);
      SetTrigg(0x17,0);
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x13);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount0(&DAT_100366c0,0);
      if (0 < iVar3) {
        uVar1 = AskQuestion("#PAGE3");
        if ((uVar1 & 0xff) == 0) {
          RunTimer(0x13,DAT_10036620);
          DAT_10036620 = DAT_10036620 + 3000;
        }
        else {
          SetTrigg(0x21,0);
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          ChangeFriends(0,0x41);
          ChangeFriends(1,0x82);
          SelectUnits1(1,&DAT_10036508,0);
          SelSendAndKill(1,&DAT_10036640,0xd2,0);
          SelectUnits1(1,&DAT_10036510,0);
          SelSendAndKill(1,&DAT_100366c0,0xd2,0);
          ClearSelection(1);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x21);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetUnitsAmount1(&DAT_100366a8,&DAT_100364f8);
      if (0 < iVar3) {
        SetTrigg(0x62,0);
        SetTrigg(0x23,0);
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x21);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetTotalAmount0(&DAT_10036508);
      if (iVar3 == 0) {
        SetTrigg(0x23,0);
        ShowPage("#PAGE13");
        AddResource(0,1,1000);
      }
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x14);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount0(&DAT_100366c8,0);
      if (0 < iVar3) {
        uVar1 = AskQuestion("#PAGE3");
        if ((uVar1 & 0xff) == 0) {
          RunTimer(0x14,DAT_10036624);
          DAT_10036624 = DAT_10036624 + 3000;
        }
        else {
          SetTrigg(0x22,0);
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          ChangeFriends(0,0x41);
          ChangeFriends(3,0x82);
          SelectUnits1(3,&DAT_100364f8,0);
          SelSendAndKill(3,&DAT_10036698,100,0);
          SelectUnits1(3,&DAT_10036500,0);
          SelSendAndKill(3,&DAT_100366c8,100,0);
          ClearSelection(3);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x22);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetUnitsAmount1(&DAT_10036698,&DAT_10036508);
      if (0 < iVar3) {
        SetTrigg(0x61,0);
        SetTrigg(0x24,0);
      }
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x22);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetTotalAmount0(&DAT_100364f8);
      if (iVar3 == 0) {
        SetTrigg(0x24,0);
        ShowPage("#PAGE14");
        AddResource(0,1,2000);
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x33);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100365f0,&DAT_100365c0);
      if (0 < iVar3) {
        SetTrigg(0x2a,0);
        SetTrigg(0x27,0);
        SetTrigg(0x33,0);
        ShowPage("#PAGE4");
        SetStartPoint(&DAT_100365f0);
        SaveSelectedUnits(0,&DAT_100364b0,0);
        ClearSelection(0);
        ChangeFriends(0,0x41);
        ChangeFriends(5,0x82);
        SelectUnits1(5,&DAT_10036548,0);
        SelSendAndKill(5,&DAT_100365f0,0xa0,0);
        ClearSelection(5);
        SelectUnits1(0,&DAT_100364b0,0);
      }
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x33);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100365f8,&DAT_100365c0);
      if (0 < iVar3) {
        SetTrigg(0x2a,0);
        SetTrigg(0x28,0);
        SetTrigg(0x33,0);
        ShowPage("#PAGE4");
        SetStartPoint(&DAT_100365f8);
        SaveSelectedUnits(0,&DAT_100364b0,0);
        ClearSelection(0);
        ChangeFriends(0,0x41);
        ChangeFriends(5,0x82);
        SelectUnits1(5,&DAT_10036548,0);
        SelSendAndKill(5,&DAT_100365f8,0xa0,0);
        ClearSelection(5);
        SelectUnits1(0,&DAT_100364b0,0);
      }
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x33);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10036600,&DAT_100365c0);
      if (0 < iVar3) {
        SetTrigg(0x2a,0);
        SetTrigg(0x29,0);
        SetTrigg(0x33,0);
        ShowPage("#PAGE4");
        SetStartPoint(&DAT_10036600);
        SaveSelectedUnits(0,&DAT_100364b0,0);
        ClearSelection(0);
        ChangeFriends(0,0x41);
        ChangeFriends(5,0x82);
        SelectUnits1(5,&DAT_10036548,0);
        SelSendAndKill(5,&DAT_10036600,0xa0,0);
        ClearSelection(5);
        SelectUnits1(0,&DAT_100364b0,0);
      }
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount0(&DAT_10036660,0);
      if (0 < iVar3) {
        SetTrigg(0x2b,0);
      }
    }
  }
  uVar1 = Trigg(0x2e);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10036528);
    if (iVar3 == 0) {
      SetTrigg(0x2e,0);
      ShowPage("#PAGE7");
      AddResource(0,4,1000);
      AddResource(0,5,1000);
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      SelectUnits1(5,&DAT_10036550,0);
      SelChangeNation(5,0);
      ClearSelection(0);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount0(&DAT_10036660,0);
      if (0 < iVar3) {
        SetTrigg(0x32,0);
        DAT_100363e0 = DAT_100363e0 + 1;
        ShowPage("#PAGE10");
      }
    }
  }
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10036660,0);
    if (0 < iVar3) {
      DAT_100363e0 = DAT_100363e0 + 1;
    }
  }
  uVar1 = Trigg(0x33);
  if (((uVar1 & 0xff) != 0) && (DAT_100363e0 == 0x1e)) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x33,0);
      ShowPage("#PAGE11");
      SetStartPoint(&DAT_10036660);
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      ChangeFriends(0,0x41);
      ChangeFriends(5,0x82);
      SelectUnits1(5,&DAT_10036548,0);
      SelSendAndKill(5,&DAT_10036660,0xa0,0);
      ClearSelection(5);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetNUnits(&DAT_100365c0);
      if (0 < iVar3) {
        iVar3 = GetTotalAmount0(&DAT_100365c0);
        iVar2 = GetDiff(0);
        DAT_100363e4 = iVar3 * 10000 + (3 - iVar2) * 5000;
        SetResource(0,3,DAT_100363e4);
      }
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10036608,&DAT_100365c0);
    if (0 < iVar3) {
      SetTrigg(0x2d,0);
      SetTrigg(0x50,1);
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      SelectUnits1(4,&DAT_10036588,0);
      ShowPage("#PAGE5");
      ShowPage("#PAGE28");
      SelChangeNation(4,0);
      ClearSelection(4);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetResource(0,0);
    if (699 < iVar3) {
      SetTrigg(0x2c,0);
      RunTimer(0x16,1000);
      ShowPage("#PAGE6");
    }
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x16);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x46,0);
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      SelectUnits1(0,&DAT_10036588,0);
      ShowPage("#PAGE9");
      DAT_100363e4 = GetResource(0,3);
      SelChangeNation(0,4);
      RunTimer(0x17,0x32);
      ShowPage("#PAGE21");
      iVar3 = GetTotalAmount0(&DAT_100365c0);
      AddResource(0,1,iVar3 * 100);
      SelectUnits1(0,&DAT_100365c0,0);
      SelChangeNation(0,4);
      SelectUnits1(4,&DAT_100365c0,0);
      SelSendTo(4,&DAT_10036608,0xb4,0);
      ClearLightSpot(2);
      ClearSelection(4);
      DisableMission(0x41);
      EnableMission(0x42);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x31);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x17);
    if ((uVar1 & 0xff) != 0) {
      SetResource(0,3,DAT_100363e4);
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x17);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2f,0);
      SetTrigg(0x34,0);
      SetTrigg(0x22,0);
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      SelectUnits1(4,&DAT_100365b8,0);
      SelErase(4);
      SetStartPoint(&DAT_10036670);
      ShowPage("#PAGE12");
      ChangeFriends(0,0x41);
      ChangeFriends(3,0x82);
      SelectUnits1(4,&DAT_100365a8,0);
      SelChangeNation(4,0);
      SelectUnits1(3,&DAT_100364f8,0);
      SelectUnits1(3,&DAT_10036500,1);
      SelSendAndKill(3,&DAT_10036698,0x5a,0);
      CreateObject0(&DAT_100364c0,&DAT_100363f0,&DAT_10036400,4,&DAT_100365d0,0x41);
      RunTimer(0x18,100);
      SelectUnits1(3,&DAT_10036578,0);
      SelCloseGates(3);
      EnableMission(0x43);
      ClearSelection(3);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x34);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x18);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x48,0);
        SetLightSpot(&DAT_100365d0,1,1);
        SetStartPoint(&DAT_100365d0);
        ShowPage("#PAGE22");
        RunTimer(0xd,100);
      }
    }
  }
  uVar1 = Trigg(0x52);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x48);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x52,0);
        ShowPage("#PAGE30");
      }
    }
  }
  uVar1 = Trigg(0x35);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10036570);
    if (iVar3 == 0) {
      SetTrigg(0x35,0);
      ShowPage("#PAGE17");
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      SelectUnits1(3,&DAT_10036578,0);
      SelOpenGates(3);
      SelectUnits1(4,&DAT_100364c0,0);
      SelChangeNation(4,0);
      DisableMission(0x43);
      EnableMission(0x44);
      EnableMission(0x45);
      ClearSelection(0);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount2(&DAT_10036670,&DAT_10036400,0);
    if (5 < iVar3) {
      SetResource(2,3,7000);
      SaveSelectedUnits(0,&DAT_100364b0,0);
      iVar3 = GetUnitsAmount0(&DAT_100366a0,0);
      if (iVar3 == 0) {
        SelectUnits1(2,&DAT_100364e8,1);
        SelErase(2);
        SelectUnits1(2,&DAT_100364f0,1);
        SelErase(2);
        SelectUnits1(2,&DAT_100365c8,1);
        SelErase(2);
      }
      ChangeFriends(0,0x41);
      ChangeFriends(2,0x82);
      StartAI(2,"TURKISH.0",0,0,2,0xffffffff);
      SetTrigg(0x36,0);
      SetTrigg(0x31,0);
      ShowPage("#PAGE18");
      ClearLightSpot(1);
      EnableUnit(0,&DAT_10036440,1);
      EnableUnit(0,&DAT_10036450,1);
      EnableUnit(0,&DAT_10036480,1);
      EnableUnit(0,&DAT_10036428,1);
      EnableUnit(0,&DAT_10036438,1);
      SetTrigg(0x50,0);
      uVar1 = Trigg(0x2e);
      if ((uVar1 & 0xff) == 0) {
        SelectUnits1(0,&DAT_10036550,0);
        SelChangeNation(0,5);
        SelectUnits1(5,&DAT_10036550,0);
        ShowPage("#PAGE29");
        SelSendAndKill(5,&DAT_10036608,0xb4,0);
        ClearSelection(5);
      }
      SelectUnits1(0,&DAT_100364b0,0);
      uVar1 = Trigg(0x3c);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x22);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x30);
          if ((uVar1 & 0xff) != 0) {
            ChangeFriends(0,0x41);
            ChangeFriends(3,0x3f);
            SetTrigg(0x22,1);
            SetTrigg(0x43,1);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x3e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x36);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x1f);
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetUnitsAmount0(&DAT_10036668,0);
        if (0 < iVar3) {
          uVar1 = AskQuestion("#PAGE16");
          if ((uVar1 & 0xff) == 0) {
            RunTimer(0x1f,DAT_1003662c);
            DAT_1003662c = DAT_1003662c + 3000;
          }
          else {
            SetTrigg(0x3e,0);
            SaveSelectedUnits(0,&DAT_100364b0,0);
            ClearSelection(0);
            ChangeFriends(0,0x41);
            ChangeFriends(4,0x82);
            SelectUnits1(4,&DAT_10036558,0);
            SelSendAndKill(4,&DAT_10036608,0xb4,0);
            SelectUnits1(4,&DAT_10036568,0);
            SelSendAndKill(4,&DAT_10036608,0xb4,0);
            RunTimer(0x19,1000);
            ClearSelection(4);
            SelectUnits1(0,&DAT_100364b0,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x3d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x19);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x3d,0);
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      SelectUnits1(4,&DAT_10036558,0);
      SelSendAndKill(4,&DAT_10036670,0xb4,0);
      ClearSelection(4);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10036640,0);
    if (iVar3 == 0) {
      SetTrigg(0x37,0);
      CreateObject0(&DAT_100364c8,&DAT_100363f0,&DAT_10036618,1,&DAT_10036638,0xdc);
    }
  }
  uVar1 = Trigg(0x38);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1b);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount0(&DAT_10036658,0);
      if (iVar3 == 0) {
        SetTrigg(0x38,0);
        CreateObject0(&DAT_100364d0,&DAT_100363e8,&DAT_10036618,3,&DAT_10036680,100);
        CreateObject0(&DAT_100364d8,&DAT_100363f8,&DAT_100366b8,3,&DAT_10036648,100);
        SetTrigg(0x3f,1);
        SetTrigg(0x44,1);
      }
    }
  }
  uVar1 = Trigg(0x41);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x41,0);
    CreateObject0(&DAT_100364e0,&DAT_100363f8,&DAT_10036618,2,&DAT_10036688,0xa0);
    CreateObject0(&DAT_100364e8,&DAT_100363f8,&DAT_10036618,2,&DAT_100366a0,0xa0);
    CreateObject0(&DAT_100364f0,&DAT_100363f8,&DAT_10036618,2,&DAT_100366b0,0xa0);
  }
  uVar1 = Trigg(0x30);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x34);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetUnitsAmount0(&DAT_10036610,0);
      if (iVar3 < 2) {
        iVar3 = GetUnitsAmount0(&DAT_10036690,0);
        if (iVar3 < 2) goto LAB_1000678a;
      }
      SetTrigg(0x30,0);
      ShowPage("#PAGE19");
    }
  }
LAB_1000678a:
  uVar1 = Trigg(0x42);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3f);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x30);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x3f,0);
        SetTrigg(0x43,0);
        ShowPage("#PAGE19");
        SaveSelectedUnits(0,&DAT_100364b0,0);
        ClearSelection(0);
        SelectUnits1(3,&DAT_100364d0,0);
        SelSendAndKill(3,&DAT_10036630,0xb4,0);
        SelectUnits1(3,&DAT_100364d8,0);
        SelSendAndKill(3,&DAT_10036630,0xb4,0);
        RunTimer(0x1a,1000);
        SetTrigg(0x40,1);
        ClearSelection(3);
        SelectUnits1(0,&DAT_100364b0,0);
      }
    }
    uVar1 = Trigg(0x40);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(0x1a);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x40,0);
        SaveSelectedUnits(0,&DAT_100364b0,0);
        ClearSelection(0);
        SelectUnits1(3,&DAT_100364d0,0);
        SelSendAndKill(3,&DAT_10036670,0xb4,0);
        SelectUnits1(3,&DAT_100364d8,0);
        SelSendAndKill(3,&DAT_10036670,0xb4,0);
        RunTimer(0x1b,3000);
        SetTrigg(0x47,1);
        ClearSelection(3);
        SelectUnits1(0,&DAT_100364b0,0);
      }
    }
  }
  uVar1 = Trigg(0x43);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x44);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x36);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x22);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x44,0);
          SetTrigg(0x42,0);
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(3,&DAT_100364d0,0);
          SelSendAndKill(3,&DAT_100366c8,0xb4,0);
          SelectUnits1(3,&DAT_100364d8,0);
          SelSendAndKill(3,&DAT_100366c8,0xb4,0);
          RunTimer(0x1c,1000);
          SetTrigg(0x45,1);
          ClearSelection(3);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
    uVar1 = Trigg(0x45);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(0x1c);
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetUnitsAmount1(&DAT_100366c8,&DAT_100364d0);
        if (iVar3 < 1) {
          iVar3 = GetUnitsAmount1(&DAT_100366c8,&DAT_100364d8);
          if (iVar3 < 1) goto LAB_10006de0;
        }
        SetTrigg(0x45,0);
        SaveSelectedUnits(0,&DAT_100364b0,0);
        ClearSelection(0);
        SelectUnits1(3,&DAT_100364d0,0);
        SelSendAndKill(3,&DAT_10036670,0xb4,0);
        SelectUnits1(3,&DAT_100364d8,0);
        SelSendAndKill(3,&DAT_10036670,0xb4,0);
        RunTimer(0x1d,3000);
        SetTrigg(0x47,1);
        ClearSelection(3);
        SelectUnits1(0,&DAT_100364b0,0);
      }
    }
  }
LAB_10006de0:
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1b);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(0x1d);
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetTotalAmount0(&DAT_100364d0);
        if (iVar3 != 0) {
          SetTrigg(0x1f,0);
          SetTrigg(0x38,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x49);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x4a);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x21);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x4a,0);
        SaveSelectedUnits(0,&DAT_100364b0,0);
        ClearSelection(0);
        SelectUnits1(1,&DAT_100364c8,0);
        SelSendAndKill(1,&DAT_100366c0,0xb4,0);
        RunTimer(0x1e,1000);
        SetTrigg(0x4b,1);
        ClearSelection(1);
        SelectUnits1(0,&DAT_100364b0,0);
      }
    }
    uVar1 = Trigg(0x4b);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(0x1e);
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetUnitsAmount1(&DAT_100366c0,&DAT_100364c8);
        if (0 < iVar3) {
          SetTrigg(0x4b,0);
          SaveSelectedUnits(0,&DAT_100364b0,0);
          ClearSelection(0);
          SelectUnits1(1,&DAT_100364c8,0);
          SelSendAndKill(1,&DAT_10036670,0xb4,0);
          SetTrigg(0x4c,1);
          ClearSelection(1);
          SelectUnits1(0,&DAT_100364b0,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x4c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1b);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(0x1d);
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetTotalAmount0(&DAT_100364d0);
        if (iVar3 != 0) {
          SetTrigg(0x1f,0);
          SetTrigg(0x37,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x4d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x4d,0);
      SetTrigg(0x21,0);
      SetTrigg(0x49,0);
      SetTrigg(0x37,0);
      ShowPage("#PAGE23");
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      SelectUnits1(1,&DAT_100365b0,0);
      SelDie(1);
      ClearSelection(2);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x4e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x4e,0);
      SetTrigg(0x22,0);
      SetTrigg(0x38,0);
      SetTrigg(0x42,0);
      SetTrigg(0x43,0);
      ShowPage("#PAGE24");
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      SelectUnits1(3,&DAT_100365a0,0);
      SelDie(3);
      ClearSelection(1);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x4f);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10036568);
    if (iVar3 == 0) {
      iVar3 = GetTotalAmount0(&DAT_10036558);
      if (iVar3 == 0) {
        SetTrigg(0x4f,0);
        SelectUnits1(4,&DAT_10036588,0);
        SelDie(4);
        ShowPage("#PAGE26");
        iVar3 = GetDiff(0);
        AddResource(0,3,iVar3 * -2000 + 20000);
        iVar3 = GetDiff(0);
        AddResource(0,0,iVar3 * -0x5dc + 150000);
        iVar3 = GetDiff(0);
        AddResource(0,2,iVar3 * -0x5dc + 10000);
        iVar3 = GetDiff(0);
        AddResource(0,1,iVar3 * -500 + 5000);
        iVar3 = GetDiff(0);
        AddResource(0,4,iVar3 * -1000 + 10000);
        iVar3 = GetDiff(0);
        AddResource(0,5,iVar3 * -1000 + 15000);
      }
    }
  }
  uVar1 = Trigg(0x50);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10036588);
    if (iVar3 == 0) {
      SetTrigg(0x50,0);
      ShowPage("#PAGE27");
      SetTrigg(0x3d,0);
      SetTrigg(0x3e,0);
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      ChangeFriends(0,0x41);
      ChangeFriends(4,0x82);
      SelectUnits1(4,&DAT_10036558,0);
      SelSendAndKill(4,&DAT_10036608,0xb4,0);
      SelectUnits1(4,&DAT_10036568,0);
      SelSendAndKill(4,&DAT_10036608,0xb4,0);
      RunTimer(0x20,1000);
      ClearSelection(4);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x51);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10036588);
    if (iVar3 == 0) {
      SetTrigg(0x51,0);
      SaveSelectedUnits(0,&DAT_100364b0,0);
      ClearSelection(0);
      SelectUnits1(4,&DAT_10036558,0);
      SelSendAndKill(4,&DAT_10036670,0xb4,0);
      ClearSelection(4);
      SelectUnits1(0,&DAT_100364b0,0);
    }
  }
  uVar1 = Trigg(0x53);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetReadyAmount(&DAT_10036448,0);
    if (0 < iVar3) {
      ShowPage("#PAGE31");
      SetTrigg(0x53,0);
      iVar3 = GetDiff(0);
      if (iVar3 < 2) {
        SetLightSpot(&DAT_100366a0,1,2);
      }
    }
  }
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_100365c0);
      if (iVar3 == 0) {
        SetTrigg(0x2f,0);
        ShowPage("#PAGE8");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(99,0);
      ShowPage("#PAGE25");
      LooseGame();
    }
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      ShowPage("#PAGE20");
      ShowVictory();
    }
  }
  uStack_8 = 0x10007af6;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
