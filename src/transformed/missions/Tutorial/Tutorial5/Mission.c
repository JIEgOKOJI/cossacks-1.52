#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002f700[] = "G4";
char DAT_1002f704[] = "G3";
char DAT_1002f708[] = "G2";
char DAT_1002f70c[] = "G1";
char DAT_1002f710[] = "Z4";
char DAT_1002f714[] = "Z3";
char DAT_1002f718[] = "Z2";
char DAT_1002f71c[] = "Z1";
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
long long DAT_100344c8 = 0;
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

/* Forward declarations */
void FUN_10007070(int param_1,char param_2);


void __cdecl FUN_10007070(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount1(param_1,(int)param_2);
  uStack_8 = 0x100070af;
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10034558,DAT_1002f71c);
  RegisterZone(&DAT_10034560,DAT_1002f718);
  RegisterZone(&DAT_10034568,DAT_1002f714);
  RegisterZone(&DAT_10034570,DAT_1002f710);
  RegisterUnits(&DAT_10034538,DAT_1002f70c);
  RegisterUnits(&DAT_10034540,DAT_1002f708);
  RegisterUnits(&DAT_10034548,DAT_1002f704);
  RegisterUnits(&DAT_10034550,DAT_1002f700);
  RegisterUnitType(&DAT_10034430,"Russki_Center(RU)");
  RegisterUnitType(&DAT_10034448,"ruskaia_izba(RU)");
  RegisterUnitType(&DAT_10034468,"Melnica_rus(RU)");
  RegisterUnitType(&DAT_10034488,"Sclad3(RU)");
  RegisterUnitType(&DAT_100344a0,"shahta(RU)");
  RegisterUnitType(&DAT_100344b8,"Kuznica(RU)");
  RegisterUnitType(&DAT_100344d0,"konushnia(RU)");
  RegisterUnitType(&DAT_100344f0,"Cerkov_RU(RU)");
  RegisterUnitType(&DAT_10034508,"akademia_RU(RU)");
  RegisterUnitType(&DAT_100343e0,"Dip_korpus_RU(RU)");
  RegisterUnitType(&DAT_100343e8,"Rus_Strel_Dom(RU)");
  RegisterUnitType(&DAT_100343f0,"Kazarma(RU)");
  RegisterUnitType(&DAT_100343f8,"artileri_depo(RU)");
  RegisterUnitType(&DAT_10034408,"Rinok(RU)");
  RegisterUnitType(&DAT_10034418,"PorR(RU)");
  RegisterUnitType(&DAT_10034428,"Pik_rus(RU)");
  RegisterUnitType(&DAT_10034440,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_10034460,"WALL_KR(RU)");
  RegisterUnitType(&DAT_10034480,"Bashnia_2(RU)");
  RegisterUnitType(&DAT_10034400,"Tiagoli_koval_rus(RU)");
  RegisterUnitType(&DAT_10034410,"Strelec(RU)");
  RegisterUnitType(&DAT_10034420,"Pehota_turki_DIP(RU)");
  RegisterUnitType(&DAT_10034438,"Tiagoli_kozak(RU)");
  RegisterUnitType(&DAT_10034458,"Kozak_loshad_DIP(RU)");
  RegisterUnitType(&DAT_10034478,"Russki_Komandir(RU)");
  RegisterUnitType(&DAT_10034498,"Barabanshik_1(RU)");
  RegisterUnitType(&DAT_100344b0,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_100344c8,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_100344e8,"Tatarin(TU)");
  RegisterUnitType(&DAT_10034450,"Pushka(RU)");
  RegisterUnitType(&DAT_10034470,"Victoria(RU)");
  RegisterUnitType(&DAT_10034490,"Lodka(RU)");
  RegisterUnitType(&DAT_100344a8,"Fregat(RU)");
  RegisterUnitType(&DAT_100344c0,"Gusar_evro(RU)");
  RegisterUnitType(&DAT_100344e0,"Kirasir(RU)");
  RegisterUnitType(&DAT_10034500,"Dragun_18(RU)");
  RegisterUnitType(&DAT_10034518,"Pik_evro_rus(RU)");
  RegisterUnitType(&DAT_10034520,"Mushketer(RU)");
  RegisterUnitType(&DAT_10034528,"Grenader(RU)");
  RegisterUnitType(&DAT_100344d8,"FregatNEW(RU)");
  RegisterFormation(&DAT_10034530,"#ALONE");
  RegisterUpgrade(&DAT_100345d8,"Strelec(RU)ATTACK");
  RegisterUpgrade(&DAT_100345f8,"Strelec(RU)SHIELD");
  RegisterUpgrade(&DAT_10034618,"Pik_rus(RU)ATTACK");
  RegisterUpgrade(&DAT_10034630,"Pik_rus(RU)SHIELD");
  RegisterUpgrade(&DAT_10034648,"Tiagoli_koval_rus(RU)ATTACK");
  RegisterUpgrade(&DAT_10034668,"Tiagoli_koval_rus(RU)SHIELD");
  RegisterUpgrade(&DAT_10034688,"Tiagoli_kozak(RU)ATTACK");
  RegisterUpgrade(&DAT_100346a0,"Tiagoli_kozak(RU)SHIELD");
  RegisterUpgrade(&DAT_100346b8,"KUZ01RU");
  RegisterUpgrade(&DAT_10034578,"KUZ02RU");
  RegisterUpgrade(&DAT_10034580,"KUZ03RU");
  RegisterUpgrade(&DAT_10034588,"KUZ05RU");
  RegisterUpgrade(&DAT_10034590,"KUZ06RU");
  RegisterUpgrade(&DAT_100345a0,"MAINRU");
  RegisterUpgrade(&DAT_100345b0,"Barabanshik_1(RU)SHIELD");
  RegisterUpgrade(&DAT_100345c0,"Russki_Komandir(RU)ATTACK");
  RegisterUpgrade(&DAT_100345d0,"Russki_Komandir(RU)SHIELD");
  RegisterUpgrade(&DAT_100345f0,"AKA01RU");
  RegisterUpgrade(&DAT_10034610,"AKA02RU");
  RegisterUpgrade(&DAT_10034598,"AKA03RU");
  RegisterUpgrade(&DAT_100345a8,"AKA04RU");
  RegisterUpgrade(&DAT_100345b8,"AKA05RU");
  RegisterUpgrade(&DAT_100345c8,"AKA06RU");
  RegisterUpgrade(&DAT_100345e8,"AKA07RU");
  RegisterUpgrade(&DAT_10034608,"AKA08RU");
  RegisterUpgrade(&DAT_10034628,"AKA09RU");
  RegisterUpgrade(&DAT_10034640,"AKA10RU");
  RegisterUpgrade(&DAT_10034660,"AKA11RU");
  RegisterUpgrade(&DAT_10034680,"AKA12RU");
  RegisterUpgrade(&DAT_100345e0,"AKA13RU");
  RegisterUpgrade(&DAT_10034600,"AKA14RU");
  RegisterUpgrade(&DAT_10034620,"AKA15RU");
  RegisterUpgrade(&DAT_10034638,"AKA16RU");
  RegisterUpgrade(&DAT_10034658,"AKA17RU");
  RegisterUpgrade(&DAT_10034678,"AKA18RU");
  RegisterUpgrade(&DAT_10034698,"AKA19RU");
  RegisterUpgrade(&DAT_100346b0,"AKA20RU");
  RegisterUpgrade(&DAT_100346d0,"AKA21RU");
  RegisterUpgrade(&DAT_100346e8,"AKA22RU");
  RegisterUpgrade(&DAT_10034650,"AKA23RU");
  RegisterUpgrade(&DAT_10034670,"AKA24RU");
  RegisterUpgrade(&DAT_10034690,"AKA25RU");
  RegisterUpgrade(&DAT_100346a8,"AKA26RU");
  RegisterUpgrade(&DAT_100346c8,"AKA27RU");
  RegisterUpgrade(&DAT_100346e0,"AKA28RU");
  RegisterUpgrade(&DAT_100346f8,"AKA29RU");
  RegisterUpgrade(&DAT_10034708,"AKA30RU");
  RegisterUpgrade(&DAT_10034720,"AKA31RU");
  RegisterUpgrade(&DAT_10034738,"AKA32RU");
  RegisterUpgrade(&DAT_100346c0,"AKA33RU");
  RegisterUpgrade(&DAT_100346d8,"AKA34RU");
  RegisterUpgrade(&DAT_100346f0,"AKA35RU");
  RegisterUpgrade(&DAT_10034700,"AKA36RU");
  RegisterUpgrade(&DAT_10034718,"Melnica_rus(RU)GETRES");
  RegisterUpgrade(&DAT_10034730,"PRS(RU)INSIDE");
  RegisterUpgrade(&DAT_10034748,"HEALINGVIC(RU)");
  RegisterUpgrade(&DAT_10034758,"NEWKUTT(RU)");
  RegisterUpgrade(&DAT_10034760,"NEWKECH(RU)");
  RegisterUpgrade(&DAT_10034768,"NEWFREG(RU)");
  RegisterUpgrade(&DAT_10034710,"NEWVICT(RU)");
  RegisterUpgrade(&DAT_10034728,"KUZ04RU");
  RegisterUpgrade(&DAT_10034740,"Melnica_rus(RU)GETRES2");
  RegisterUpgrade(&DAT_10034750,"Grenader(RU)ATTACK7");
  RegisterDynGroup(&DAT_100344f8);
  RegisterDynGroup(&DAT_10034510);
  RegisterVar(&DAT_100344f8,8);
  RegisterVar(&DAT_10034510,8);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  ChangeFriends(5,0x20);
  uStack_8 = 0x10001d97;
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
    DisableUpgrade(0,&DAT_10034578);
    DisableUpgrade(0,&DAT_100345b8);
    DisableUpgrade(0,&DAT_100345c8);
    DisableUpgrade(0,&DAT_100345e8);
    DisableUpgrade(0,&DAT_10034628);
    DisableUpgrade(0,&DAT_10034640);
    DisableUpgrade(0,&DAT_10034660);
    DisableUpgrade(0,&DAT_10034638);
    DisableUpgrade(0,&DAT_10034658);
    DisableUpgrade(0,&DAT_10034678);
    DisableUpgrade(0,&DAT_100346b0);
    DisableUpgrade(0,&DAT_100346d0);
    DisableUpgrade(0,&DAT_10034690);
    DisableUpgrade(0,&DAT_100346a8);
    DisableUpgrade(0,&DAT_100346c8);
    DisableUpgrade(0,&DAT_100346e0);
    DisableUpgrade(0,&DAT_100346f8);
    DisableUpgrade(0,&DAT_10034738);
    DisableUpgrade(0,&DAT_100346f0);
    DisableUpgrade(0,&DAT_10034700);
    DisableUpgrade(0,&DAT_10034730);
    DisableUpgrade(0,&DAT_10034748);
    DisableUpgrade(0,&DAT_10034758);
    DisableUpgrade(0,&DAT_10034760);
    DisableUpgrade(0,&DAT_10034768);
    DisableUpgrade(0,&DAT_10034710);
    DisableUpgrade(0,&DAT_10034728);
    SetResource(0,3,0x3cc8);
    SetResource(0,1,0x184c);
    SetResource(0,4,0x109a);
    SetResource(0,2,0x49d4);
    SetResource(0,0,0x52ee);
    SetResource(0,5,0x203a);
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
    TakeWood(&DAT_10034538);
    TakeFood(&DAT_10034548);
    TakeStone(&DAT_10034540);
    InitialUpgrade(DAT_1002f70c,"Melnica_rus(RU)GETRES");
    InitialUpgrade(DAT_1002f70c,"AKA01RU");
    InitialUpgrade(DAT_1002f70c,"AKA04RU");
    InitialUpgrade(DAT_1002f70c,"KUZ01RU");
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
    SetTrigg(0x26,0);
    SetTrigg(0x27,0);
    SetTrigg(0x28,0);
    SetTrigg(0x29,0);
    SetTrigg(0x2a,0);
    SetTrigg(0x2b,0);
    SetTrigg(0x2c,0);
    SetTrigg(0x2d,0);
    SetTrigg(0x2e,0);
    SetTrigg(0x2f,0);
    SetTrigg(0x30,0);
    SetTrigg(0x31,0);
    SetTrigg(0x32,0);
    SetTrigg(0x33,0);
    SetTrigg(0x34,0);
    SetTrigg(0x35,0);
    SetTrigg(0x36,0);
    SetTrigg(0x37,0);
    SetTrigg(0x38,0);
    SetTrigg(0x39,0);
    SetTrigg(0x3a,0);
    SetTrigg(0x3b,0);
    SetTrigg(0x3c,0);
    SetTrigg(0x3d,0);
    SetTrigg(0x3e,0);
    SetTrigg(0x3f,0);
    SetTrigg(0x40,0);
    DisableMission(0x41);
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
    DisableMission(0x50);
    DisableMission(0x51);
    DisableMission(0x51);
    DisableMission(0x52);
    DisableMission(0x53);
    DisableMission(0x54);
    DisableMission(0x55);
    DisableMission(0x56);
    DisableMission(0x58);
    DisableMission(0x57);
    DisableMission(0x59);
    DisableMission(0x61);
    DisableMission(99);
    DisableMission(100);
    DisableMission(0x69);
    DisableMission(0x67);
    DisableMission(0x6a);
    DisableMission(0x6b);
    DisableMission(0x6c);
    DisableMission(0x6e);
    DisableMission(0x6f);
    DisableMission(0x71);
    DisableMission(0x72);
    DisableMission(0x74);
    DisableMission(0x75);
    DisableMission(0x6d);
    DisableMission(0x70);
    DisableMission(0x78);
    DisableMission(0x77);
    DisableMission(0x66);
    DisableMission(0x68);
    DisableMission(0x62);
    DisableMission(0x65);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      ShowPage("#PAGE1");
      ShowPage("#PAGE2");
      SetTrigg(0x25,1);
      RunTimer(0xb,200);
    }
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xb);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x25,0);
      ShowPage("#PAGE35");
      EnableMission(0x41);
      SetTrigg(0x26,1);
      RunTimer(0xc,1000);
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xc);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetReadyAmount(&DAT_10034460,0);
      if (10 < iVar2) {
        SetTrigg(0x26,0);
        ShowPage("#PAGE36");
        DisableMission(0x41);
        EnableMission(0x61);
        EnableMission(0x42);
        SetTrigg(3,1);
        SetTrigg(4,1);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_10034508,0);
    if (0 < iVar2) {
      SetTrigg(3,0);
      SetTrigg(4,0);
      DisableMission(0x42);
      EnableMission(0x43);
      EnableUpgrade(0,&DAT_10034660);
      ShowPage("#PAGE37");
      SetTrigg(0x27,1);
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_10034660,0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x27,0);
      ShowPage("#PAGE39");
      DisableMission(0x43);
      EnableMission(99);
      EnableMission(0x44);
      SetTrigg(0x28,1);
      SetTrigg(0x29,1);
      RunTimer(0xd,800);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xd);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x28,0);
      ShowPage("#PAGE38");
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10034480,0);
    if (1 < iVar2) {
      SetTrigg(0x29,0);
      ShowPage("#PAGE40");
      DisableMission(0x44);
      EnableMission(100);
      EnableMission(0x45);
      SetTrigg(5,1);
      SetTrigg(6,1);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_10034480,0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      SetTrigg(6,0);
      ShowPage("#PAGE41");
      DisableMission(0x45);
      SetTrigg(7,1);
      RunTimer(2,300);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE3");
      EnableMission(0x46);
      SetTrigg(0x2a,1);
      SetTrigg(0x2b,1);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_10034418,0);
    if (0 < iVar2) {
      SetTrigg(0x2a,0);
      SetTrigg(0x2b,0);
      DisableMission(0x46);
      ShowPage("#PAGE42");
      EnableMission(0x48);
      SetTrigg(0x2c,1);
      SetTrigg(0x2d,1);
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_10034508,0);
    if (0 < iVar2) {
      SetTrigg(0x2c,0);
      SetTrigg(0x2d,0);
      DisableMission(0x48);
      AddResource(0,0,15000);
      AddResource(0,2,60000);
      EnableUpgrade(0,&DAT_100345b8);
      EnableUpgrade(0,&DAT_100345c8);
      EnableUpgrade(0,&DAT_100345e8);
      EnableUpgrade(0,&DAT_100346e0);
      EnableUpgrade(0,&DAT_100346f8);
      EnableUpgrade(0,&DAT_10034708);
      ShowPage("#PAGE4");
      EnableMission(0x49);
      SetTrigg(0x2f,1);
    }
  }
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_100345e8,0);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = IsUpgradeDone(&DAT_10034708,0);
      if ((uVar1 & 0xff) != 0) {
        DisableMission(0x49);
        EnableMission(0x69);
        EnableMission(0x47);
        SetTrigg(0x2f,0);
        ShowPage("#PAGE5");
        AddResource(0,1,10000);
        SetTrigg(0x30,1);
      }
    }
  }
  uVar1 = Trigg(0x30);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_100345c8,0);
    if ((uVar1 & 0xff) != 0) {
      DisableMission(0x47);
      EnableMission(0x67);
      EnableMission(0x4a);
      SetTrigg(0x30,0);
      ShowPage("#PAGE43");
      SetTrigg(0x31,1);
    }
  }
  uVar1 = Trigg(0x31);
  if ((uVar1 & 0xff) != 0) {
    FUN_10007070(&DAT_10034490,0);
    if (3 < iVar2) {
      DisableMission(0x4a);
      EnableMission(0x6a);
      EnableMission(0x4b);
      SetTrigg(0x31,0);
      ShowPage("#PAGE44");
      SetTrigg(0x32,1);
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    FUN_10007070(&DAT_100344a8,0);
    if (0 < iVar2) {
      DisableMission(0x4b);
      EnableMission(0x6b);
      SetTrigg(0x32,0);
      ShowPage("#PAGE45");
      SetTrigg(8,1);
      RunTimer(3,100);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(8,0);
      AddResource(0,1,10000);
      AddResource(0,4,6000);
      AddResource(0,3,50000);
      ShowPage("#PAGE6");
      ShowPage("#PAGE7");
      EnableMission(0x4c);
      SetTrigg(9,1);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_100345a0,0);
    if ((uVar1 & 0xff) != 0) {
      DisableMission(0x4c);
      EnableMission(0x6c);
      SetTrigg(9,0);
      EnableMission(0x4d);
      ShowPage("#PAGE8");
      SetTrigg(10,1);
      SetTrigg(0xb,1);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_100344d0,0);
    if (0 < iVar2) {
      DisableMission(0x4d);
      SetTrigg(10,0);
      SetTrigg(0xb,0);
      ShowPage("#PAGE9");
      EnableMission(0x4e);
      SetTrigg(0x33,1);
      SetTrigg(0x34,1);
      SetTrigg(0x35,1);
      SetTrigg(0xc,1);
    }
  }
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_100344c0,0);
    if (0 < iVar2) {
      SetTrigg(0x33,0);
      ShowPage("#PAGE46");
      RunTimer(0xe,200);
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_100344e0,0);
    if (0 < iVar2) {
      SetTrigg(0x34,0);
      ShowPage("#PAGE47");
      RunTimer(0xe,200);
    }
  }
  uVar1 = Trigg(0x35);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10034500,0);
    if (0 < iVar2) {
      SetTrigg(0x35,0);
      ShowPage("#PAGE48");
      RunTimer(0xe,200);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x33);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x34);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x35);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = TimerDone(0xe);
          if ((uVar1 & 0xff) != 0) {
            DisableMission(0x4e);
            EnableMission(0x6e);
            EnableMission(0x4f);
            SetTrigg(0xc,0);
            ShowPage("#PAGE10");
            SetTrigg(0xd,1);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetResource(0,0);
    if (0x6a4 < iVar2) {
      iVar2 = GetResource(0,1);
      if (0x30d4 < iVar2) {
        iVar2 = GetResource(0,2);
        if (0xb86 < iVar2) {
          SetTrigg(0xd,0);
          ShowPage("#PAGE11");
          AddResource(0,1,8000);
          SetTrigg(0xe,1);
        }
      }
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_100343f0,0);
    if (0 < iVar2) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE12");
      EnableMission(0x50);
      SetTrigg(0xf,1);
      SetTrigg(0x10,1);
      SetTrigg(0x13,1);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_10034468,0);
    if (0 < iVar2) {
      DisableMission(0x50);
      EnableMission(0x51);
      SetTrigg(0xf,0);
      SetTrigg(0x10,0);
      AddResource(0,3,40000);
      ShowPage("#PAGE13");
      SetTrigg(0x36,1);
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_10034740,0);
    if ((uVar1 & 0xff) != 0) {
      DisableMission(0x51);
      EnableMission(0x71);
      DisableMission(0x61);
      EnableMission(0x48);
      SetTrigg(0x36,0);
      ShowPage("#PAGE49");
      SetTrigg(0x11,1);
      SetTrigg(0x12,1);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_10034508,0);
    if (0 < iVar2) {
      DisableMission(0x48);
      EnableMission(0x52);
      SetTrigg(0x11,0);
      SetTrigg(0x12,0);
      EnableUpgrade(0,&DAT_10034640);
      EnableUpgrade(0,&DAT_10034690);
      ShowPage("#PAGE14");
      SetTrigg(0x37,1);
    }
  }
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_10034690,0);
    if ((uVar1 & 0xff) != 0) {
      DisableMission(0x52);
      DisableMission(99);
      EnableMission(0x72);
      SetTrigg(0x37,0);
      ShowPage("#PAGE50");
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100343f0,0);
    if (0 < iVar2) {
      DisableMission(0x4f);
      DisableMission(100);
      EnableMission(0x6f);
      EnableMission(0x53);
      SetTrigg(0x13,0);
      ShowPage("#PAGE15");
      SetTrigg(0x14,1);
      SetTrigg(0x15,1);
      ClearSelection(0);
      EnableUpgrade(0,&DAT_10034730);
      EnableUpgrade(0,&DAT_10034758);
      EnableUpgrade(0,&DAT_10034760);
      EnableUpgrade(0,&DAT_10034768);
      EnableUpgrade(0,&DAT_10034710);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_100343f0,0);
    if (0 < iVar2) {
      DisableMission(0x53);
      EnableMission(0x54);
      SetTrigg(0x14,0);
      SetTrigg(0x15,0);
      ShowPage("#PAGE16");
      SetTrigg(0x38,1);
      SetTrigg(0x39,1);
      SetTrigg(0x3a,1);
      SetTrigg(0x3b,1);
    }
  }
  uVar1 = Trigg(0x38);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10034518,0);
    if (1 < iVar2) {
      SetTrigg(0x38,0);
      ShowPage("#PAGE17");
      RunTimer(0xf,200);
    }
  }
  uVar1 = Trigg(0x39);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10034520,0);
    if (1 < iVar2) {
      SetTrigg(0x39,0);
      ShowPage("#PAGE51");
      EnableUpgrade(0,&DAT_10034738);
      RunTimer(0xf,200);
    }
  }
  uVar1 = Trigg(0x3a);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10034528,0);
    if (1 < iVar2) {
      SetTrigg(0x3a,0);
      ShowPage("#PAGE52");
      RunTimer(0xf,200);
    }
  }
  uVar1 = Trigg(0x3b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x38);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x39);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x3a);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = TimerDone(0xf);
          if ((uVar1 & 0xff) != 0) {
            DisableMission(0x54);
            DisableMission(0x69);
            EnableMission(0x74);
            EnableMission(0x56);
            SetTrigg(0x3b,0);
            ShowPage("#PAGE53");
            SetTrigg(0x16,1);
            SetTrigg(0x17,1);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_100344b8,0);
    if (0 < iVar2) {
      DisableMission(0x56);
      DisableMission(0x67);
      EnableMission(0x55);
      SetTrigg(0x16,0);
      SetTrigg(0x17,0);
      EnableUpgrade(0,&DAT_10034728);
      ShowPage("#PAGE18");
      SetTrigg(0x3c,1);
    }
  }
  uVar1 = Trigg(0x3c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_10034728,0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x3c,0);
      DisableMission(0x55);
      EnableMission(0x75);
      DisableMission(0x6a);
      EnableMission(0x48);
      ShowPage("#PAGE54");
      SetTrigg(0x18,1);
      SetTrigg(0x19,1);
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_10034508,0);
    if (0 < iVar2) {
      DisableMission(0x48);
      SetTrigg(0x18,0);
      SetTrigg(0x19,0);
      AddResource(0,1,55000);
      EnableUpgrade(0,&DAT_100346f0);
      EnableUpgrade(0,&DAT_10034700);
      EnableMission(0x62);
      ShowPage("#PAGE19");
      SetTrigg(0x3d,1);
    }
  }
  uVar1 = Trigg(0x3d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_100346f0,0);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = IsUpgradeDone(&DAT_10034700,0);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x3d,0);
        SetTrigg(0x1a,1);
        ShowPage("#PAGE55");
        AddResource(0,1,35000);
        AddResource(0,3,210000);
        DisableMission(0x62);
        DisableMission(0x6b);
        EnableMission(0x6d);
        EnableMission(0x65);
        SetTrigg(0x3e,1);
      }
    }
  }
  uVar1 = Trigg(0x3e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_10034750,0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x3e,0);
      DisableMission(0x65);
      DisableMission(0x6c);
      EnableMission(0x70);
      EnableMission(0x58);
      ShowPage("#PAGE56");
      SetStartPoint(&DAT_10034570);
      SetTrigg(0x3f,1);
    }
  }
  uVar1 = Trigg(0x3f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10034550);
    if (iVar2 == 0) {
      DisableMission(0x58);
      DisableMission(0x6e);
      EnableMission(0x78);
      SetTrigg(0x3f,0);
      ShowPage("#PAGE57");
      SetTrigg(0x1a,1);
      RunTimer(4,500);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1a,0);
      ShowPage("#PAGE20");
      ShowPage("#PAGE21");
      EnableMission(0x57);
      EnableUpgrade(0,&DAT_10034628);
      EnableUpgrade(0,&DAT_10034660);
      EnableUpgrade(0,&DAT_10034578);
      SetTrigg(0x1b,1);
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_10034628,0);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = IsUpgradeDone(&DAT_10034578,0);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x1b,0);
        DisableMission(0x57);
        DisableMission(0x6f);
        EnableMission(0x77);
        ShowPage("#PAGE22");
        SetTrigg(0x1c,1);
        RunTimer(0x10,600);
      }
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1c,0);
      ShowPage("#PAGE23");
      ShowPage("#PAGE24");
      EnableMission(0x48);
      RunTimer(5,600);
      SetTrigg(0x1d,1);
      SetTrigg(0x40,1);
    }
  }
  uVar1 = Trigg(0x40);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_10034508,0);
    if (0 < iVar2) {
      DisableMission(0x48);
      SetTrigg(0x40,0);
      SetTrigg(0x1d,0);
      SetTrigg(0x1e,1);
      EnableUpgrade(0,&DAT_10034638);
      EnableUpgrade(0,&DAT_10034658);
      EnableUpgrade(0,&DAT_10034678);
      EnableUpgrade(0,&DAT_100346b0);
      EnableUpgrade(0,&DAT_100346c8);
      EnableMission(0x66);
      ShowPage("#PAGE25");
      ShowPage("#PAGE58");
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = IsUpgradeDone(&DAT_10034678,0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1e,0);
      ShowPage("#PAGE26");
      SetTrigg(0x1f,1);
      SetTrigg(0x20,1);
      DisableMission(0x66);
      DisableMission(0x71);
      EnableMission(0x68);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_100344f8,0);
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_100344f8,&DAT_10034450,0);
    if (1 < iVar2) {
      SaveSelectedUnits(0,&DAT_100344f8,0);
      ClearSelection(0);
      SetTrigg(0x1f,0);
      SetTrigg(0x20,0);
      ShowPage("#PAGE27");
      SetTrigg(0x21,1);
      RunTimer(7,1000);
      CreateObject0(&DAT_10034510,&DAT_10034530,&DAT_10034470,4,&DAT_10034560,0);
      SelectUnits1(4,&DAT_10034510,0);
      SelSendTo(4,&DAT_10034568,0xdc,0);
      ClearSelection(4);
      SelectUnits1(0,&DAT_100344f8,0);
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x21,0);
      ShowPage("#PAGE28");
      ShowPage("#PAGE29");
      SetTrigg(0x22,1);
      RunTimer(8,800);
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x22,0);
      ShowPage("#PAGE30");
      ShowPage("#PAGE31");
      EnableUpgrade(0,&DAT_10034748);
      EnableUpgrade(0,&DAT_100346d0);
      EnableUpgrade(0,&DAT_100346a8);
      RunTimer(6,500);
      SetTrigg(0x41,1);
    }
  }
  uVar1 = Trigg(0x41);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x41,0);
      ShowPage("#PAGE32");
      AddResource(0,0,65000);
      AddResource(0,3,65000);
      AddResource(0,2,65000);
      AddResource(0,1,65000);
      AddResource(0,4,65000);
      AddResource(0,5,65000);
      ShowPage("#PAGE59");
      EnableMission(0x59);
      RunTimer(9,0x5dc);
      SetTrigg(0x23,1);
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(9);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_100344d8,0);
      if (0 < iVar2) {
        SetTrigg(0x23,0);
        ShowPage("#PAGE33");
        ShowPage("#PAGE34");
        SetStartPoint(&DAT_10034568);
        DisableMission(0x59);
        RunTimer(10,200);
        SetTrigg(0x24,1);
      }
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x24,0);
      ShowVictory();
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(99,0);
      ShowPage("#PAGE100");
      LooseGame();
    }
  }
  uStack_8 = 0x10006078;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
