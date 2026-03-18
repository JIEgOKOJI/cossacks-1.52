#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002e67c[] = "G4";
char DAT_1002e680[] = "G3";
char DAT_1002e684[] = "G2";
char DAT_1002e688[] = "G1";
char DAT_1002e68c[] = "Z11";
char DAT_1002e690[] = "Z10";
char DAT_1002e694[] = "Z9";
char DAT_1002e698[] = "Z8";
char DAT_1002e69c[] = "Z7";
char DAT_1002e6a0[] = "Z6";
char DAT_1002e6a4[] = "Z2";
char DAT_1002e6a8[] = "Z1";
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
long long DAT_10033558 = 0;
long long DAT_10033560 = 0;
long long DAT_10033568 = 0;
long long DAT_10033570 = 0;
long long DAT_10033578 = 0;
long long DAT_10033580 = 0;
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
long long DAT_100335d8 = 0;
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
long long DAT_10033640 = 0;
long long DAT_10033648 = 0;
long long DAT_10033650 = 0;
long long DAT_10033658 = 0;
long long DAT_10033660 = 0;
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
long long DAT_100336f8 = 0;
long long DAT_10033700 = 0;
long long DAT_10033708 = 0;
long long DAT_10033710 = 0;
long long DAT_10033718 = 0;
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
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10033550,DAT_1002e6a8);
  RegisterZone(&DAT_10033558,DAT_1002e6a4);
  RegisterZone(&DAT_10033560,DAT_1002e6a0);
  RegisterZone(&DAT_10033568,DAT_1002e69c);
  RegisterZone(&DAT_10033570,DAT_1002e698);
  RegisterZone(&DAT_10033578,DAT_1002e694);
  RegisterZone(&DAT_10033580,DAT_1002e690);
  RegisterZone(&DAT_10033588,DAT_1002e68c);
  RegisterUnits(&DAT_10033530,DAT_1002e688);
  RegisterUnits(&DAT_10033538,DAT_1002e684);
  RegisterUnits(&DAT_10033540,DAT_1002e680);
  RegisterUnits(&DAT_10033548,DAT_1002e67c);
  RegisterUnitType(&DAT_10033430,"Russki_Center(RU)");
  RegisterUnitType(&DAT_10033448,"ruskaia_izba(RU)");
  RegisterUnitType(&DAT_10033468,"Melnica_rus(RU)");
  RegisterUnitType(&DAT_10033480,"Sclad3(RU)");
  RegisterUnitType(&DAT_10033490,"shahta(RU)");
  RegisterUnitType(&DAT_100334a0,"Kuznica(RU)");
  RegisterUnitType(&DAT_100334b0,"konushnia(RU)");
  RegisterUnitType(&DAT_100334c0,"Cerkov_RU(RU)");
  RegisterUnitType(&DAT_100334d0,"akademia_RU(RU)");
  RegisterUnitType(&DAT_100333e0,"Dip_korpus_RU(RU)");
  RegisterUnitType(&DAT_100333e8,"Rus_Strel_Dom(RU)");
  RegisterUnitType(&DAT_100333f0,"Kazarma(RU)");
  RegisterUnitType(&DAT_100333f8,"artileri_depo(RU)");
  RegisterUnitType(&DAT_10033408,"Rinok(RU)");
  RegisterUnitType(&DAT_10033418,"PorR(RU)");
  RegisterUnitType(&DAT_10033428,"Pik_rus(RU)");
  RegisterUnitType(&DAT_10033440,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_10033460,"WALL_KR(RU)");
  RegisterUnitType(&DAT_10033478,"Bashnia_2(RU)");
  RegisterUnitType(&DAT_10033400,"Tiagoli_koval_rus(RU)");
  RegisterUnitType(&DAT_10033410,"Strelec(RU)");
  RegisterUnitType(&DAT_10033420,"Pehota_turki_DIP(RU)");
  RegisterUnitType(&DAT_10033438,"Tiagoli_kozak(RU)");
  RegisterUnitType(&DAT_10033458,"Kozak_loshad_DIP(RU)");
  RegisterUnitType(&DAT_10033470,"Russki_Komandir(RU)");
  RegisterUnitType(&DAT_10033488,"Barabanshik_1(RU)");
  RegisterUnitType(&DAT_10033498,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_100334a8,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_100334b8,"Tatarin(TU)");
  RegisterUnitType(&DAT_10033450,"Pushka_mnogostvolka(RU)");
  RegisterFormation(&DAT_10033510,"#SQUARE72");
  RegisterFormation(&DAT_10033520,"#LINE40PUS");
  RegisterFormation(&DAT_10033528,"#LINE15PUS");
  RegisterUpgrade(&DAT_100335f0,"Strelec(RU)ATTACK");
  RegisterUpgrade(&DAT_10033610,"Strelec(RU)SHIELD");
  RegisterUpgrade(&DAT_10033630,"Pik_rus(RU)ATTACK");
  RegisterUpgrade(&DAT_10033648,"Pik_rus(RU)SHIELD");
  RegisterUpgrade(&DAT_10033660,"Tiagoli_koval_rus(RU)ATTACK");
  RegisterUpgrade(&DAT_10033680,"Tiagoli_koval_rus(RU)SHIELD");
  RegisterUpgrade(&DAT_100336a0,"Tiagoli_kozak(RU)ATTACK");
  RegisterUpgrade(&DAT_100336b8,"Tiagoli_kozak(RU)SHIELD");
  RegisterUpgrade(&DAT_100336d0,"KUZ01RU");
  RegisterUpgrade(&DAT_10033590,"KUZ02RU");
  RegisterUpgrade(&DAT_10033598,"KUZ03RU");
  RegisterUpgrade(&DAT_100335a0,"KUZ05RU");
  RegisterUpgrade(&DAT_100335a8,"KUZ06RU");
  RegisterUpgrade(&DAT_100335b8,"MAINRU");
  RegisterUpgrade(&DAT_100335c8,"Barabanshik_1(RU)SHIELD");
  RegisterUpgrade(&DAT_100335d8,"Russki_Komandir(RU)ATTACK");
  RegisterUpgrade(&DAT_100335e8,"Russki_Komandir(RU)SHIELD");
  RegisterUpgrade(&DAT_10033608,"AKA01RU");
  RegisterUpgrade(&DAT_10033628,"AKA02RU");
  RegisterUpgrade(&DAT_100335b0,"AKA03RU");
  RegisterUpgrade(&DAT_100335c0,"AKA04RU");
  RegisterUpgrade(&DAT_100335d0,"AKA05RU");
  RegisterUpgrade(&DAT_100335e0,"AKA06RU");
  RegisterUpgrade(&DAT_10033600,"AKA07RU");
  RegisterUpgrade(&DAT_10033620,"AKA08RU");
  RegisterUpgrade(&DAT_10033640,"AKA09RU");
  RegisterUpgrade(&DAT_10033658,"AKA10RU");
  RegisterUpgrade(&DAT_10033678,"AKA11RU");
  RegisterUpgrade(&DAT_10033698,"AKA12RU");
  RegisterUpgrade(&DAT_100335f8,"AKA13RU");
  RegisterUpgrade(&DAT_10033618,"AKA14RU");
  RegisterUpgrade(&DAT_10033638,"AKA15RU");
  RegisterUpgrade(&DAT_10033650,"AKA16RU");
  RegisterUpgrade(&DAT_10033670,"AKA17RU");
  RegisterUpgrade(&DAT_10033690,"AKA18RU");
  RegisterUpgrade(&DAT_100336b0,"AKA19RU");
  RegisterUpgrade(&DAT_100336c8,"AKA20RU");
  RegisterUpgrade(&DAT_100336e8,"AKA21RU");
  RegisterUpgrade(&DAT_10033700,"AKA22RU");
  RegisterUpgrade(&DAT_10033668,"AKA23RU");
  RegisterUpgrade(&DAT_10033688,"AKA24RU");
  RegisterUpgrade(&DAT_100336a8,"AKA25RU");
  RegisterUpgrade(&DAT_100336c0,"AKA26RU");
  RegisterUpgrade(&DAT_100336e0,"AKA27RU");
  RegisterUpgrade(&DAT_100336f8,"AKA28RU");
  RegisterUpgrade(&DAT_10033710,"AKA29RU");
  RegisterUpgrade(&DAT_10033720,"AKA30RU");
  RegisterUpgrade(&DAT_10033738,"AKA31RU");
  RegisterUpgrade(&DAT_10033750,"AKA32RU");
  RegisterUpgrade(&DAT_100336d8,"AKA33RU");
  RegisterUpgrade(&DAT_100336f0,"AKA34RU");
  RegisterUpgrade(&DAT_10033708,"AKA35RU");
  RegisterUpgrade(&DAT_10033718,"AKA36RU");
  RegisterUpgrade(&DAT_10033730,"Melnica_rus(RU)GETRES");
  RegisterUpgrade(&DAT_10033748,"PRS(RU)INSIDE");
  RegisterUpgrade(&DAT_10033760,"HEALINGVIC(RU)");
  RegisterUpgrade(&DAT_10033768,"NEWKUTT(RU)");
  RegisterUpgrade(&DAT_10033770,"NEWKECH(RU)");
  RegisterUpgrade(&DAT_10033778,"NEWFREG(RU)");
  RegisterUpgrade(&DAT_10033728,"NEWVICT(RU)");
  RegisterUpgrade(&DAT_10033740,"Pik_rus(RU)ATTACK5");
  RegisterUpgrade(&DAT_10033758,"Pik_rus(RU)SHIELD5");
  RegisterDynGroup(&DAT_100334c8);
  RegisterDynGroup(&DAT_100334d8);
  RegisterDynGroup(&DAT_100334e0);
  RegisterDynGroup(&DAT_100334e8);
  RegisterDynGroup(&DAT_100334f0);
  RegisterDynGroup(&DAT_100334f8);
  RegisterDynGroup(&DAT_10033500);
  RegisterDynGroup(&DAT_10033508);
  RegisterDynGroup(&DAT_10033518);
  RegisterVar(&DAT_100334c8,8);
  RegisterVar(&DAT_100334d8,8);
  RegisterVar(&DAT_100334e0,8);
  RegisterVar(&DAT_100334e8,8);
  RegisterVar(&DAT_100334f0,8);
  RegisterVar(&DAT_100334f8,8);
  RegisterVar(&DAT_10033500,8);
  RegisterVar(&DAT_10033508,8);
  RegisterVar(&DAT_10033518,8);
  ChangeFriends(0,0x11);
  ChangeFriends(1,2);
  ChangeFriends(4,0x11);
  ChangeFriends(5,0x20);
  uStack_8 = 0x10001e71;
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
    DisableUpgrade(0,&DAT_10033660);
    DisableUpgrade(0,&DAT_10033680);
    DisableUpgrade(0,&DAT_100336a0);
    DisableUpgrade(0,&DAT_100336b8);
    DisableUpgrade(0,&DAT_10033590);
    DisableUpgrade(0,&DAT_10033598);
    DisableUpgrade(0,&DAT_100335a0);
    DisableUpgrade(0,&DAT_100335a8);
    DisableUpgrade(0,&DAT_100335b8);
    DisableUpgrade(0,&DAT_100335d0);
    DisableUpgrade(0,&DAT_100335e0);
    DisableUpgrade(0,&DAT_10033600);
    DisableUpgrade(0,&DAT_10033640);
    DisableUpgrade(0,&DAT_10033658);
    DisableUpgrade(0,&DAT_10033678);
    DisableUpgrade(0,&DAT_10033698);
    DisableUpgrade(0,&DAT_100335f8);
    DisableUpgrade(0,&DAT_10033618);
    DisableUpgrade(0,&DAT_10033638);
    DisableUpgrade(0,&DAT_10033650);
    DisableUpgrade(0,&DAT_10033670);
    DisableUpgrade(0,&DAT_10033690);
    DisableUpgrade(0,&DAT_100336b0);
    DisableUpgrade(0,&DAT_100336c8);
    DisableUpgrade(0,&DAT_100336e8);
    DisableUpgrade(0,&DAT_100336a8);
    DisableUpgrade(0,&DAT_100336c0);
    DisableUpgrade(0,&DAT_100336e0);
    DisableUpgrade(0,&DAT_100336f8);
    DisableUpgrade(0,&DAT_10033710);
    DisableUpgrade(0,&DAT_10033720);
    DisableUpgrade(0,&DAT_10033738);
    DisableUpgrade(0,&DAT_10033750);
    DisableUpgrade(0,&DAT_100336d8);
    DisableUpgrade(0,&DAT_100336f0);
    DisableUpgrade(0,&DAT_10033708);
    DisableUpgrade(0,&DAT_10033718);
    DisableUpgrade(0,&DAT_10033748);
    DisableUpgrade(0,&DAT_10033760);
    DisableUpgrade(0,&DAT_10033768);
    DisableUpgrade(0,&DAT_10033770);
    DisableUpgrade(0,&DAT_10033778);
    DisableUpgrade(0,&DAT_10033728);
    EnableUnit(0,&DAT_10033430,0);
    EnableUnit(0,&DAT_10033448,0);
    EnableUnit(0,&DAT_10033468,0);
    EnableUnit(0,&DAT_10033480,0);
    EnableUnit(0,&DAT_10033490,0);
    EnableUnit(0,&DAT_100334a0,0);
    EnableUnit(0,&DAT_100334b0,0);
    EnableUnit(0,&DAT_100334c0,0);
    EnableUnit(0,&DAT_100334d0,0);
    EnableUnit(0,&DAT_100333e0,0);
    EnableUnit(0,&DAT_100333e8,0);
    EnableUnit(0,&DAT_100333f0,0);
    EnableUnit(0,&DAT_100333f8,0);
    EnableUnit(0,&DAT_10033408,0);
    EnableUnit(0,&DAT_10033418,0);
    EnableUnit(0,&DAT_10033440,0);
    EnableUnit(0,&DAT_10033460,0);
    EnableUnit(0,&DAT_10033478,0);
    SetResource(0,3,0x1c3e);
    SetResource(0,1,0xd5c);
    SetResource(0,4,0xcb2);
    SetResource(0,2,0x22c4);
    SetResource(0,0,0x2bde);
    SetResource(0,5,0x109a);
    SetResource(4,3,0x18786);
    SetResource(4,1,0x18844);
    SetResource(4,4,0xf4ef2);
    SetResource(4,2,0x1a964);
    SetResource(4,0,0x18786);
    SetResource(4,5,0x1879a);
    SetResource(5,3,100000);
    SetResource(5,1,100000);
    SetResource(5,4,100000);
    SetResource(5,2,100000);
    SetResource(5,0,0x18786);
    SetResource(5,5,0x1879a);
    TakeWood(&DAT_10033530);
    TakeFood(&DAT_10033540);
    TakeStone(&DAT_10033538);
    RunTimer(1,400);
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
    SetTrigg(0x1c,0);
    SetTrigg(0x1d,0);
    SetTrigg(0x1e,0);
    SetTrigg(0x1f,0);
    SetTrigg(0x20,0);
    SetTrigg(0x21,0);
    SetTrigg(0x22,0);
    SetTrigg(0x23,0);
    SetTrigg(0x24,0);
    SetTrigg(0x25,0);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x48);
    DisableMission(0x49);
    DisableMission(0x47);
    DisableMission(0x4a);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      ShowPage("#PAGE1");
      ShowPage("#PAGE21");
      ShowPage("#PAGE22");
      SetTrigg(3,0);
      SetTrigg(4,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100334c8,0);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100334c8,&DAT_100333e8,0);
    if (0 < iVar2) {
      SetTrigg(3,0);
      SetTrigg(4,0);
      ShowPage("#PAGE2");
      ShowPage("#PAGE23");
      EnableUpgrade(0,&DAT_10033660);
      EnableUpgrade(0,&DAT_10033680);
      EnableUpgrade(0,&DAT_100336a0);
      EnableUpgrade(0,&DAT_100336b8);
      DisableMission(0x41);
      EnableMission(0x4a);
      SetTrigg(0x1a,0);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_10033740,0);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = IsUpgradeDone(&DAT_10033758,0);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x1a,0);
        ShowPage("#PAGE24");
        DisableMission(0x4a);
        EnableMission(0x4b);
        RunTimer(0xb,200);
        SetTrigg(0x1b,0);
      }
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xb);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_100334c8,0);
      ClearSelection(0);
      CreateObject0(&DAT_10033508,&DAT_10033510,&DAT_10033428,5,&DAT_10033560,0);
      SelectUnits1(5,&DAT_10033508,0);
      SelSendAndKill(5,&DAT_10033550,0,0);
      ClearSelection(5);
      SelectUnits1(0,&DAT_100334c8,0);
      SetTrigg(0x1b,0);
      SetTrigg(0x1c,0);
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10033508);
    if (iVar2 == 0) {
      SetTrigg(0x1c,0);
      ShowPage("#PAGE25");
      ShowPage("#PAGE26");
      DisableMission(0x4b);
      EnableMission(0x42);
      SetTrigg(5,0);
      SetTrigg(6,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100334c8,0);
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100334c8,&DAT_100334b0,0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      SetTrigg(6,0);
      ShowPage("#PAGE3");
      DisableMission(0x42);
      SetTrigg(0x1d,0);
      RunTimer(0xc,200);
    }
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1d,0);
      RunTimer(0xd,400);
      ShowPage("#PAGE27");
      EnableMission(0x44);
      EnableUpgrade(0,&DAT_10033598);
      EnableUpgrade(0,&DAT_100335a0);
      SetTrigg(0x1e,0);
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xd);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1e,0);
      ShowPage("#PAGE28");
      EnableMission(0x43);
      SetTrigg(7,0);
      RunTimer(2,1000);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE4");
      DisableMission(0x44);
      EnableMission(0x4c);
      AddResource(0,1,6000);
      EnableUpgrade(0,&DAT_100335a8);
      EnableUpgrade(0,&DAT_100336f0);
      SetTrigg(0x1f,0);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_100335a8,0);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = IsUpgradeDone(&DAT_100336f0,0);
      if ((uVar1 & 0xff) == 0) goto LAB_10003897;
    }
    SetTrigg(0x1f,0);
    DisableMission(0x43);
    DisableMission(0x4c);
    EnableMission(0x4e);
    ShowPage("#PAGE29");
    ShowPage("#PAGE30");
    SetTrigg(8,0);
    SetTrigg(0x20,0);
  }
LAB_10003897:
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100334c8,0);
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100334c8,&DAT_100334d0,0);
    if (0 < iVar2) {
      SetTrigg(8,0);
      SetTrigg(0x20,0);
      ShowPage("#PAGE5");
      DisableMission(0x4e);
      EnableMission(0x4f);
      EnableUpgrade(0,&DAT_10033738);
      EnableUpgrade(0,&DAT_100336d8);
      EnableUpgrade(0,&DAT_10033698);
      EnableUpgrade(0,&DAT_100335f8);
      EnableUpgrade(0,&DAT_10033618);
      EnableUpgrade(0,&DAT_10033638);
      AddResource(0,1,20000);
      AddResource(0,5,20000);
      SetTrigg(0x21,0);
      RunTimer(5,400);
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = IsUpgradeDone(&DAT_10033738,0);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = IsUpgradeDone(&DAT_100336d8,0);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = IsUpgradeDone(&DAT_10033698,0);
          if ((uVar1 & 0xff) != 0) {
            uVar1 = IsUpgradeDone(&DAT_100335f8,0);
            if ((uVar1 & 0xff) != 0) {
              SetTrigg(0x21,0);
              ShowPage("#PAGE31");
              DisableMission(0x4f);
              RunTimer(4,200);
              SetTrigg(9,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_100334c8,0);
      ClearSelection(0);
      SetTrigg(9,0);
      SetTrigg(10,0);
      ShowPage("#PAGE6");
      EnableMission(0x45);
      CreateObject0(&DAT_100334d8,&DAT_10033510,&DAT_10033420,5,&DAT_10033568,0);
      CreateObject0(&DAT_100334e0,&DAT_10033510,&DAT_10033420,5,&DAT_10033568,0);
      SelectUnits1(5,&DAT_100334d8,0);
      SelectUnits1(5,&DAT_100334e0,1);
      SelSendAndKill(5,&DAT_10033550,0,0);
      SetStartPoint(&DAT_10033570);
      ClearSelection(5);
      SelectUnits1(1,&DAT_100334c8,0);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100334d8);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount0(&DAT_100334e0);
      if (iVar2 == 0) {
        SetTrigg(10,0);
        ShowPage("#PAGE7");
        ShowPage("#PAGE8");
        EnableUpgrade(0,&DAT_100336b0);
        SetTrigg(0x22,0);
        SetTrigg(0x23,0);
      }
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100334c8,0);
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100334c8,&DAT_100334d0,0);
    if (0 < iVar2) {
      SetTrigg(0x22,0);
      SetTrigg(0x23,0);
      EnableMission(0x4d);
      ShowPage("#PAGE32");
      SetTrigg(0xb,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10033450,0);
    if (1 < iVar2) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE9");
      DisableMission(0x4d);
      EnableMission(0x46);
      SetTrigg(0x24,0);
      SetTrigg(0x25,0);
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100334c8,0);
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100334c8,&DAT_100333f8,0);
    if (0 < iVar2) {
      SetTrigg(0x24,0);
      SetTrigg(0x25,0);
      DisableMission(0x46);
      ShowPage("#PAGE33");
      ShowPage("#PAGE34");
      ShowPage("#PAGE35");
      RunTimer(6,500);
      SetTrigg(0xc,0);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_100334c8,0);
      ClearSelection(0);
      SetTrigg(0xc,0);
      ShowPage("#PAGE10");
      SetTrigg(0xd,0);
      EnableMission(0x48);
      SetStartPoint(&DAT_10033580);
      CreateObject0(&DAT_100334d8,&DAT_10033520,&DAT_10033428,5,&DAT_10033578,0);
      SelectUnits1(5,&DAT_100334d8,0);
      SelSendAndKill(5,&DAT_10033550,0,0);
      ClearSelection(5);
      SelectUnits1(0,&DAT_100334c8,0);
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100334d8);
    if (iVar2 == 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE11");
      DisableMission(0x48);
      EnableMission(0x49);
      SetTrigg(0x13,0);
      SetTrigg(0x14,0);
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100334c8,0);
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100334c8,&DAT_10033400,0);
    if (iVar2 < 1) {
      iVar2 = GetTotalAmount2(&DAT_100334c8,&DAT_10033438,0);
      if (iVar2 < 1) goto LAB_10004658;
    }
    SaveSelectedUnits(0,&DAT_100334c8,0);
    DisableMission(0x49);
    ClearSelection(0);
    SetTrigg(0x13,0);
    SetTrigg(0x14,0);
    ShowPage("#PAGE15");
    SetTrigg(0x15,0);
    SelectUnits1(4,&DAT_10033548,0);
    SelSendTo(4,&DAT_10033568,0,0);
    CreateObject0(&DAT_100334d8,&DAT_10033510,&DAT_10033410,4,&DAT_10033558,0);
    CreateObject0(&DAT_100334e0,&DAT_10033510,&DAT_10033410,4,&DAT_10033558,0);
    CreateObject0(&DAT_10033518,&DAT_10033510,&DAT_10033438,0,&DAT_10033568,0);
    SelectUnits1(0,&DAT_100334d8,0);
    SelSendTo(0,&DAT_10033550,0,0);
    ShowPage("#PAGE36");
    SelectUnits1(4,&DAT_100334d8,0);
    SelectUnits1(4,&DAT_100334e0,1);
    SelSendTo(4,&DAT_10033568,0,0);
    ClearSelection(4);
    SelectUnits1(0,&DAT_100334c8,0);
    SetTrigg(0x16,0);
    RunTimer(8,400);
  }
LAB_10004658:
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x15,0);
      ShowPage("#PAGE16");
      SetTrigg(100,0);
      EnableUnit(0,&DAT_10033400,1);
      EnableUnit(0,&DAT_10033438,1);
      EnableUnit(0,&DAT_10033428,1);
      EnableUnit(0,&DAT_10033410,1);
      EnableUnit(0,&DAT_10033470,1);
      EnableUnit(0,&DAT_10033488,1);
      EnableUnit(0,&DAT_10033498,1);
      DisableMission(0x49);
      EnableUnit(0,&DAT_10033448,1);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10033568,&DAT_100334d8);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount1(&DAT_10033568,&DAT_100334e0);
      if (0 < iVar2) {
        SaveSelectedUnits(0,&DAT_100334c8,0);
        ClearSelection(0);
        SetTrigg(0x16,0);
        SelectUnits1(4,&DAT_10033548,0);
        SelSendAndKill(4,&DAT_10033550,0,0);
        SelectUnits1(4,&DAT_100334d8,0);
        SelectUnits1(4,&DAT_100334e0,1);
        SelSendAndKill(4,&DAT_10033550,0,0);
        ClearSelection(4);
        SelectUnits1(0,&DAT_100334c8,0);
        SetTrigg(0x17,0);
        RunTimer(10,200);
      }
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_100334c8,0);
      SetTrigg(0x17,0);
      ShowPage("#PAGE17");
      EnableMission(0x47);
      SelectUnits1(4,&DAT_10033548,0);
      SelectUnits1(4,&DAT_100334d8,1);
      SelectUnits1(4,&DAT_100334e0,1);
      SelChangeNation(4,0);
      ClearSelection(4);
      SelectUnits1(0,&DAT_100334c8,0);
      RunTimer(9,2000);
      SetTrigg(0x18,0);
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(9);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_100334c8,0);
      ClearSelection(0);
      SetTrigg(0x18,0);
      CreateObject0(&DAT_100334d8,&DAT_10033528,&DAT_100334a8,5,&DAT_10033560,0);
      CreateObject0(&DAT_100334e0,&DAT_10033520,&DAT_10033420,5,&DAT_10033560,0);
      CreateObject0(&DAT_100334e8,&DAT_10033528,&DAT_100334a8,5,&DAT_10033578,0);
      CreateObject0(&DAT_100334f0,&DAT_10033520,&DAT_10033420,5,&DAT_10033578,0);
      CreateObject0(&DAT_100334f8,&DAT_10033510,&DAT_100334b8,5,&DAT_10033588,0);
      CreateObject0(&DAT_10033500,&DAT_10033510,&DAT_100334b8,5,&DAT_10033588,0);
      SelectUnits1(5,&DAT_100334d8,0);
      SelSendAndKill(5,&DAT_10033550,0,0);
      SelectUnits1(5,&DAT_100334e0,0);
      SelSendAndKill(5,&DAT_10033550,0,0);
      SelectUnits1(5,&DAT_100334e8,0);
      SelSendAndKill(5,&DAT_10033550,0,0);
      SelectUnits1(5,&DAT_100334f0,0);
      SelSendAndKill(5,&DAT_10033550,0,0);
      SelectUnits1(5,&DAT_100334f8,0);
      SelSendAndKill(5,&DAT_10033550,0,0);
      SelectUnits1(5,&DAT_10033500,0);
      SelSendAndKill(5,&DAT_10033550,0,0);
      ClearSelection(5);
      SelectUnits1(0,&DAT_100334c8,0);
      SetTrigg(0x19,0);
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100334d8);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount0(&DAT_100334e0);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount0(&DAT_100334e8);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount0(&DAT_100334f0);
          if (iVar2 == 0) {
            iVar2 = GetTotalAmount0(&DAT_100334f8);
            if (iVar2 == 0) {
              iVar2 = GetTotalAmount0(&DAT_10033500);
              if (iVar2 == 0) {
                SetTrigg(0x19,0);
                ShowPage("#PAGE20");
                ShowVictory();
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x52);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033400,0);
      if (10 < iVar2) {
        SetTrigg(0x52,0);
        SetTrigg(0x53,0);
        EnableUnit(0,&DAT_10033400,0);
      }
    }
    uVar1 = Trigg(0x53);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033400,0);
      if (iVar2 < 0xb) {
        SetTrigg(0x53,0);
        SetTrigg(0x52,0);
        EnableUnit(0,&DAT_10033400,1);
      }
    }
    uVar1 = Trigg(0x54);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033438,0);
      if (9 < iVar2) {
        SetTrigg(0x54,0);
        SetTrigg(0x55,0);
        EnableUnit(0,&DAT_10033438,0);
      }
    }
    uVar1 = Trigg(0x55);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033438,0);
      if (iVar2 < 10) {
        SetTrigg(0x55,0);
        SetTrigg(0x54,0);
        EnableUnit(0,&DAT_10033438,1);
      }
    }
    uVar1 = Trigg(0x56);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033428,0);
      if (0x79 < iVar2) {
        SetTrigg(0x56,0);
        SetTrigg(0x57,0);
        EnableUnit(0,&DAT_10033428,0);
      }
    }
    uVar1 = Trigg(0x57);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033428,0);
      if (iVar2 < 0x7a) {
        SetTrigg(0x57,0);
        SetTrigg(0x56,0);
        EnableUnit(0,&DAT_10033428,1);
      }
    }
    uVar1 = Trigg(0x58);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033410,0);
      if (0x1d < iVar2) {
        SetTrigg(0x58,0);
        SetTrigg(0x59,0);
        EnableUnit(0,&DAT_10033410,0);
      }
    }
    uVar1 = Trigg(0x59);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033410,0);
      if (iVar2 < 0x1e) {
        SetTrigg(0x59,0);
        SetTrigg(0x58,0);
        EnableUnit(0,&DAT_10033410,1);
      }
    }
    uVar1 = Trigg(0x5d);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033470,0);
      if (5 < iVar2) {
        SetTrigg(0x5d,0);
        SetTrigg(0x5e,0);
        EnableUnit(0,&DAT_10033470,0);
      }
    }
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033470,0);
      if (iVar2 < 6) {
        SetTrigg(0x5e,0);
        SetTrigg(0x5d,0);
        EnableUnit(0,&DAT_10033470,1);
      }
    }
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033488,0);
      if (4 < iVar2) {
        SetTrigg(0x5f,0);
        SetTrigg(0x60,0);
        EnableUnit(0,&DAT_10033488,0);
      }
    }
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033488,0);
      if (iVar2 < 5) {
        SetTrigg(0x60,0);
        SetTrigg(0x5f,0);
        EnableUnit(0,&DAT_10033488,1);
      }
    }
    uVar1 = Trigg(0x61);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033498,0);
      if (0x78 < iVar2) {
        SetTrigg(0x61,0);
        SetTrigg(0x62,0);
        EnableUnit(0,&DAT_10033498,0);
      }
    }
    uVar1 = Trigg(0x62);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_10033498,0);
      if (iVar2 < 0x78) {
        SetTrigg(0x62,0);
        SetTrigg(0x61,0);
        EnableUnit(0,&DAT_10033498,1);
      }
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
  uStack_8 = 0x10005697;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
