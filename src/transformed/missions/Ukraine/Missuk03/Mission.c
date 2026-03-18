#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_100363e0 = 0;
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
long long DAT_10036620 = 0;
long long DAT_10036628 = 0;
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
long long DAT_100366d8 = 0;
long long DAT_100366e0 = 0;
long long DAT_100366e8 = 0;
long long DAT_100366f0 = 0;
long long DAT_100366f8 = 0;
long long DAT_10036700 = 0;
long long DAT_10036708 = 0;
long long DAT_10036710 = 0;
long long DAT_10036718 = 0;
long long DAT_10036720 = 0;
long long DAT_10036728 = 0;
long long DAT_10036730 = 0;
long long DAT_10036738 = 0;
long long DAT_10036740 = 0;
long long DAT_10036748 = 0;
long long DAT_10036750 = 0;
long long DAT_10036758 = 0;
long long DAT_10036760 = 0;
long long DAT_10036768 = 0;
long long DAT_10036770 = 0;
long long DAT_10036778 = 0;
long long DAT_10036780 = 0;
long long DAT_10036788 = 0;
long long DAT_10036790 = 0;
long long DAT_10036798 = 0;
long long DAT_100367a0 = 0;
long long DAT_100367a8 = 0;
long long DAT_100367b0 = 0;
long long DAT_100367b8 = 0;
long long DAT_100367c0 = 0;
long long DAT_100367c8 = 0;
long long DAT_100367d0 = 0;
long long DAT_100367d8 = 0;
long long DAT_100367e0 = 0;
long long DAT_100367e8 = 0;
long long DAT_100367f0 = 0;
long long DAT_100367f8 = 0;
long long DAT_10036800 = 0;
long long DAT_10036808 = 0;
long long DAT_10036810 = 0;
long long DAT_10036818 = 0;
long long DAT_10036820 = 0;
long long DAT_10036828 = 0;
long long DAT_10036830 = 0;
long long DAT_10036838 = 0;
long long DAT_10036840 = 0;
long long DAT_10036848 = 0;
long long DAT_10036850 = 0;
long long DAT_10036858 = 0;
long long DAT_10036860 = 0;
long long DAT_10036868 = 0;
long long DAT_10036870 = 0;
long long DAT_10036878 = 0;
long long DAT_10036880 = 0;
long long DAT_10036888 = 0;
long long DAT_10036890 = 0;
long long DAT_10036898 = 0;
long long DAT_100368a0 = 0;
long long DAT_100368a8 = 0;
long long DAT_100368b0 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_100363f8,"Group1");
  RegisterUnits(&DAT_10036408,"Group2");
  RegisterUnits(&DAT_10036400,"Group3");
  RegisterUnits(&DAT_10036418,"Group4");
  RegisterUnits(&DAT_10036410,"Group5");
  RegisterUnits(&DAT_10036428,"Group6");
  RegisterUnits(&DAT_10036420,"Group7");
  RegisterUnits(&DAT_10036438,"Group8");
  RegisterUnits(&DAT_10036430,"Group9");
  RegisterUnits(&DAT_100366e0,"Group10");
  RegisterUnits(&DAT_10036740,"Group11");
  RegisterUnits(&DAT_10036740,"Group11");
  RegisterUnits(&DAT_10036748,"Group12");
  RegisterUnits(&DAT_10036728,"Group13");
  RegisterUnits(&DAT_10036738,"Group14");
  RegisterUnits(&DAT_10036710,"Group15");
  RegisterUnits(&DAT_10036720,"Group16");
  RegisterUnits(&DAT_100366f0,"Group17");
  RegisterUnits(&DAT_10036700,"Group18");
  RegisterUnits(&DAT_100367b8,"Group19");
  RegisterUnits(&DAT_10036730,"Group20");
  RegisterUnits(&DAT_10036708,"Group21");
  RegisterUnits(&DAT_10036718,"Group22");
  RegisterUnits(&DAT_100366e8,"Group23");
  RegisterUnits(&DAT_10036780,"Group29");
  RegisterUnits(&DAT_100366f8,"Group30");
  RegisterUnits(&DAT_100367b0,"Group31");
  RegisterUnits(&DAT_100367c0,"Group32");
  RegisterUnits(&DAT_10036798,"Group33");
  RegisterUnits(&DAT_100367a8,"Group34");
  RegisterUnits(&DAT_10036778,"Group35");
  RegisterUnits(&DAT_10036790,"Group36");
  RegisterUnits(&DAT_10036758,"Group37");
  RegisterUnits(&DAT_10036768,"Group38");
  RegisterUnits(&DAT_10036848,"Group39");
  RegisterUnits(&DAT_100367a0,"Group40");
  RegisterUnits(&DAT_10036770,"Group41");
  RegisterUnits(&DAT_10036788,"Group42");
  RegisterUnits(&DAT_10036750,"Group43");
  RegisterUnits(&DAT_10036858,"Group46");
  RegisterUnits(&DAT_10036818,"Group47");
  RegisterUnits(&DAT_10036830,"Group48");
  RegisterUnits(&DAT_100367f8,"Group49");
  RegisterUnits(&DAT_10036838,"Group51");
  RegisterUnits(&DAT_10036850,"Group52");
  RegisterUnits(&DAT_10036810,"Group53");
  RegisterUnits(&DAT_10036828,"Group54");
  RegisterUnits(&DAT_100367f0,"Group55");
  RegisterUnits(&DAT_10036808,"Group56");
  RegisterUnits(&DAT_10036800,"Group62");
  RegisterUnits(&DAT_100367c8,"Group63");
  RegisterUnits(&DAT_100368b0,"Group66");
  RegisterUnits(&DAT_10036880,"Group67");
  RegisterUnits(&DAT_10036890,"Group68");
  RegisterUnits(&DAT_10036870,"Group69");
  RegisterUnits(&DAT_100367d8,"Group70");
  RegisterUnits(&DAT_10036898,"Group71");
  RegisterUnits(&DAT_100368a8,"Group72");
  RegisterUnits(&DAT_10036888,"Group74");
  RegisterUnits(&DAT_10036868,"Group75");
  RegisterUnits(&DAT_10036878,"Group76");
  RegisterUnits(&DAT_10036860,"Group77");
  RegisterZone(&DAT_10036640,"Zone1");
  RegisterZone(&DAT_10036648,"Zone2");
  RegisterZone(&DAT_10036650,"Zone3");
  RegisterZone(&DAT_10036658,"Zone4");
  RegisterZone(&DAT_10036660,"Zone5");
  RegisterZone(&DAT_10036668,"Zone6");
  RegisterZone(&DAT_10036670,"Zone7");
  RegisterZone(&DAT_10036678,"Zone8");
  RegisterZone(&DAT_10036680,"Zone9");
  RegisterZone(&DAT_10036448,"Zone10");
  RegisterZone(&DAT_10036440,"Zone11");
  RegisterZone(&DAT_10036458,"Zone12");
  RegisterZone(&DAT_10036450,"Zone13");
  RegisterZone(&DAT_10036478,"Zone14");
  RegisterZone(&DAT_10036468,"Zone15");
  RegisterZone(&DAT_10036498,"Zone16");
  RegisterZone(&DAT_10036488,"Zone17");
  RegisterZone(&DAT_100364c8,"Zone18");
  RegisterZone(&DAT_100364b0,"Zone19");
  RegisterZone(&DAT_10036470,"Zone20");
  RegisterZone(&DAT_10036460,"Zone21");
  RegisterZone(&DAT_10036490,"Zone22");
  RegisterZone(&DAT_10036480,"Zone23");
  RegisterZone(&DAT_100364c0,"Zone24");
  RegisterZone(&DAT_100364a8,"Zone25");
  RegisterZone(&DAT_100364e8,"Zone26");
  RegisterZone(&DAT_100364d0,"Zone27");
  RegisterZone(&DAT_10036518,"Zone28");
  RegisterZone(&DAT_10036500,"Zone29");
  RegisterZone(&DAT_100364b8,"Zone30");
  RegisterZone(&DAT_100364a0,"Zone31");
  RegisterZone(&DAT_100364e0,"Zone32");
  RegisterZone(&DAT_10036510,"Zone34");
  RegisterZone(&DAT_100364f8,"Zone35");
  RegisterZone(&DAT_10036540,"Zone36");
  RegisterZone(&DAT_10036530,"Zone37");
  RegisterZone(&DAT_10036570,"Zone38");
  RegisterZone(&DAT_10036558,"Zone39");
  RegisterZone(&DAT_10036508,"Zone40");
  RegisterZone(&DAT_100364f0,"Zone41");
  RegisterZone(&DAT_10036538,"Zone42");
  RegisterZone(&DAT_10036528,"Zone43");
  RegisterZone(&DAT_10036568,"Zone44");
  RegisterZone(&DAT_10036550,"Zone45");
  RegisterZone(&DAT_10036590,"Zone46");
  RegisterZone(&DAT_10036580,"Zone47");
  RegisterZone(&DAT_100365c0,"Zone48");
  RegisterZone(&DAT_100365a8,"Zone49");
  RegisterZone(&DAT_10036560,"Zone50");
  RegisterZone(&DAT_10036548,"Zone51");
  RegisterZone(&DAT_10036588,"Zone52");
  RegisterZone(&DAT_10036578,"Zone53");
  RegisterZone(&DAT_100365b8,"Zone54");
  RegisterZone(&DAT_100365a0,"Zone55");
  RegisterZone(&DAT_100365e0,"Zone56");
  RegisterZone(&DAT_100365d0,"Zone57");
  RegisterZone(&DAT_10036608,"Zone58");
  RegisterZone(&DAT_100365f8,"Zone59");
  RegisterZone(&DAT_100365b0,"Zone60");
  RegisterZone(&DAT_10036598,"Zone61");
  RegisterZone(&DAT_100365d8,"Zone62");
  RegisterZone(&DAT_100365c8,"Zone63");
  RegisterZone(&DAT_10036600,"Zone64");
  RegisterZone(&DAT_100365f0,"Zone65");
  RegisterZone(&DAT_10036628,"Zone66");
  RegisterZone(&DAT_10036618,"Zone67");
  RegisterZone(&DAT_10036638,"Zone68");
  RegisterZone(&DAT_10036630,"Zone69");
  RegisterZone(&DAT_100365e8,"Zone70");
  RegisterZone(&DAT_10036620,"Zone71");
  RegisterZone(&DAT_10036610,"Zone72");
  RegisterUnitType(&DAT_100366b8,"Kozacki_Strelec(UA)");
  RegisterUnitType(&DAT_100366c0,"Kozak_pikiner(UA)");
  RegisterUnitType(&DAT_100366c8,"Yahta(PL)");
  RegisterUnitType(&DAT_10036698,"Mushketer_polsha(PL)");
  RegisterUnitType(&DAT_100366a0,"Pushka(PL)");
  RegisterUnitType(&DAT_100366a8,"Mortira(PL)");
  RegisterUnitType(&DAT_100366b0,"Pushka(UA)");
  RegisterUnitType(&DAT_10036688,"Reitor_Polsha(PL)");
  RegisterUnitType(&DAT_10036690,"Kres_ukranian(UA)");
  RegisterVar(&DAT_100363e0,0xc);
  RegisterVar(&DAT_100363e8,0xc);
  RegisterVar(&DAT_100363f0,0xc);
  RegisterVar(&DAT_10036760,0xc);
  RegisterVar(&DAT_10036840,0xc);
  RegisterVar(&DAT_100367d0,0xc);
  RegisterVar(&DAT_100367e0,0xc);
  RegisterVar(&DAT_100368a0,0xc);
  RegisterVar(&DAT_10036820,0xc);
  RegisterVar(&DAT_100367e8,0xc);
  RegisterFormation(&DAT_100366d0,"#LINE36");
  RegisterFormation(&DAT_100366d8,"#LINE72");
  RegisterFormation(&DAT_100364d8,"#ODIN");
  RegisterFormation(&DAT_10036520,"#LINE5PUS");
  InitialUpgrade("Group66","AKA27UA");
  InitialUpgrade("Group66","AKA20UA");
  SetPlayerName(1,"POLAND");
  SetPlayerName(4,"Polands");
  SetPlayerName(5,"REBELS_U");
  SetPlayerName(6,"NEUTRALS");
  uStack_8 = 0x10002253;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_8;
uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(100,0);
    ChangeFriends(0,0x21);
    ChangeFriends(5,0x21);
    ChangeFriends(0,0x41);
    ChangeFriends(6,0x41);
    ChangeFriends(0,1);
    ChangeFriends(1,2);
    ChangeFriends(4,0x13);
    SetResource(0,3,50000);
    SetResource(0,1,5000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,0,5000000);
    SetResource(1,2,5000000);
    SetResource(1,5,5000000);
    SetResource(1,4,5000000);
    SetResource(7,3,5000000);
    SetResource(7,1,5000000);
    SetResource(7,0,5000000);
    SetResource(7,2,5000000);
    SetResource(7,5,5000000);
    SetResource(7,4,5000000);
    SelectUnits(&DAT_10036408,0);
    SelDie(0);
    SelectUnits(&DAT_10036740,0);
    SelectUnits(&DAT_10036748,1);
    SelChangeNation(0,5);
    RunTimer(0x1d,100);
    SelectUnits1(1,&DAT_10036860,0);
    SelChangeNation(1,4);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x49);
    DisableMission(0x50);
    DisableMission(0x4b);
    DisableMission(0x52);
    DisableMission(0x4c);
    DisableMission(0x53);
    DisableMission(0x4e);
    DisableMission(0x55);
    DisableMission(0x56);
    DisableMission(0x57);
    DisableMission(0x4f);
    DisableMission(0x5a);
    SelectUnits1(5,&DAT_10036848,0);
    SelChangeNation(5,6);
    EnableUnit(0,&DAT_10036690,0);
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x5f,0);
    SelectUnits1(5,&DAT_100367a8,0);
    SelectUnits1(5,&DAT_10036778,1);
    SelChangeNation(5,6);
    SelectUnits(&DAT_10036420,0);
    SelOpenGates(1);
    SelectUnits(&DAT_10036428,0);
    SelChangeNation(0,1);
    SelectUnits(&DAT_10036428,0);
    SelSendTo(1,&DAT_10036640,0x87,0);
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036648,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_10036640,1);
      if (iVar4 != 5) goto LAB_10002d80;
    }
    SetTrigg(99,0);
    SelectUnits(&DAT_10036420,0);
    SelCloseGates(1);
  }
LAB_10002d80:
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10036408);
    if (iVar4 < 7) {
      SetTrigg(0x62,0);
      ShowPage("#PAGE1");
      ShowPage("#PAGE2");
    }
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036650,0);
    if (0 < iVar4) {
      SetTrigg(0x61,0);
      SetTrigg(0xc9,0);
      uVar1 = AskQuestion("#PAGE4");
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x7b,0);
      }
      else {
        SetTrigg(0xcb,0);
        SetTrigg(0x7a,0);
        SetTrigg(0x7b,0);
        SetTrigg(0x7a,0);
      }
    }
  }
  uVar1 = Trigg(200);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x7a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xcb);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetResource(0,1);
        if (4999 < iVar4) {
          SetTrigg(200,0);
          SelectUnits(&DAT_10036438,0);
          SelChangeNation(6,0);
          AddResource(0,1,-5000);
          SetTrigg(0x61,0);
          SetTrigg(0xc9,0);
          SetTrigg(0xca,0);
          SetTrigg(0xcb,0);
        }
      }
    }
  }
  uVar1 = Trigg(0xc9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x7b);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0xc9,0);
      RunTimer(0xf,0x96);
      SetTrigg(0xca,0);
    }
  }
  uVar1 = Trigg(0xcb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x7a);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetResource(0,1);
      if (iVar4 < 5000) {
        SetTrigg(0xcb,0);
        RunTimer(0xf,0x96);
        SetTrigg(0xca,0);
      }
    }
  }
  uVar1 = Trigg(0xca);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0xf);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xca,0);
      SetTrigg(0x61,0);
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036658,0);
    if (0 < iVar4) {
      SetTrigg(0x60,0);
      SelectUnits(&DAT_10036410,0);
      SelChangeNation(6,0);
      DisableMission(0x4c);
      EnableMission(0x53);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036660,0);
    if (0 < iVar4) {
      GetTotalAmount0(&DAT_100367a0);
      if (iVar4 == 0) {
        SetTrigg(0x5e,0);
        ShowPage("#PAGE3");
        AddResource(0,1,5000);
      }
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036640,0);
    if (0 < iVar4) {
      SetTrigg(0x5d,0);
      SelectUnits(&DAT_100366e0,0);
      SelOpenGates(1);
      RunTimer(1,0x3c);
    }
  }
  uVar1 = Trigg(0x58);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5d);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(1);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x58,0);
        SelectUnits(&DAT_10036430,0);
        SelSendTo(1,&DAT_10036678,0xb4,0);
        RunTimer(2,300);
      }
    }
  }
  uVar1 = Trigg(0x57);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x57,0);
      SelectUnits(&DAT_10036430,0);
      SelSendTo(1,&DAT_10036668,0xa6,0);
      SelectUnits(&DAT_10036778,0);
      SelectUnits(&DAT_100367a8,0);
      SetStandGround(6,1);
    }
  }
  uVar1 = Trigg(0x56);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036678,0);
    if (0 < iVar4) {
      SetTrigg(0x56,0);
      SelectUnits(&DAT_10036430,0);
      SelSendTo(1,&DAT_10036680,0x5a,0);
      ClearSelection(1);
      SelectUnits(&DAT_10036740,0);
      SelChangeNation(5,1);
      RunTimer(3,0x7d);
    }
  }
  uVar1 = Trigg(0x55);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x55,0);
      SelectUnits(&DAT_10036740,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036670,0);
    if (0 < iVar4) {
      SetTrigg(0x5c,0);
      SelectUnits(&DAT_100366e0,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036670,0);
    if (0 < iVar4) {
      SetTrigg(0x5b,0);
      SelectUnits(&DAT_10036430,0);
      SelSendTo(1,&DAT_10036668,0,0);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10036420);
    if (iVar4 != 0) {
      GetTotalAmount0(&DAT_10036758);
      if (4 < iVar4) goto LAB_10003862;
    }
    CreateZoneNearUnit(&DAT_100363e0,&DAT_10036648,&DAT_100366b8,0,200);
    AttackEnemyInZone(&DAT_10036428,&DAT_10036648,0);
    AttackEnemyInZone(&DAT_10036768,&DAT_10036648,0);
  }
LAB_10003862:
  uVar1 = Trigg(0x59);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10036428);
    if (iVar4 == 0) {
      GetTotalAmount0(&DAT_10036768);
      if (iVar4 == 0) {
        SetTrigg(0x59,0);
        SetTrigg(0x5a,0);
      }
    }
  }
  uVar1 = Trigg(0x54);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036448,0);
    if (0 < iVar4) {
      SetTrigg(0x54,0);
      ShowPage("#PAGE5");
      ShowPage("#PAGE6");
      SelectUnits(&DAT_100367a8,0);
      SelSendTo(6,&DAT_10036468,0x87,0);
    }
  }
  uVar1 = Trigg(0x53);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = CheckLeaveAbility(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x53,0);
      SelectUnits(&DAT_100367a8,0);
      SelectUnits(&DAT_10036778,1);
      SendUnitsToTransport(6);
    }
  }
  uVar1 = Trigg(0x53);
  if ((uVar1 & 0xff) == 0) {
    SelectUnits(&DAT_100367a8,0);
    uVar1 = Trigg(0x4a);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_10036778);
      iVar2 = GetNInside(6);
      if (iVar4 == iVar2) {
        SetTrigg(0x4a,0);
        SelSendTo(6,&DAT_10036440,0x79,0);
        RunTimer(6,100);
      }
    }
  }
  uVar1 = Trigg(0x52);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x4a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(6);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100367a8,0);
        uVar1 = CheckLeaveAbility(6);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x52,0);
          SelectUnits(&DAT_100367a8,0);
          PushAllUnitsAway(6);
          RunTimer(5,300);
        }
      }
    }
  }
  uVar1 = Trigg(0x49);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x49,0);
      SelectUnits(&DAT_10036778,0);
      SelSendTo(6,&DAT_10036458,0,0);
    }
  }
  uVar1 = Trigg(0x50);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036450,0);
    if (0 < iVar4) {
      SetTrigg(0x50,0);
      uVar1 = AskQuestion("#PAGE8");
      if ((uVar1 & 0xff) == 0) {
        SelectUnits(&DAT_10036848,0);
        SelChangeNation(6,1);
        RunTimer(8,1);
      }
      else {
        SelectUnits(&DAT_10036848,0);
        SelChangeNation(6,1);
        SetResource(0,1,0);
        RunTimer(7,1);
      }
    }
  }
  uVar1 = Trigg(0x4e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount0(&DAT_10036450,0);
      if (0 < iVar4) {
        SetTrigg(0x4f,0);
        SelectUnits(&DAT_10036848,0);
        AttackEnemyInZone(&DAT_10036848,&DAT_10036450,0);
      }
    }
  }
  uVar1 = Trigg(0x4f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount0(&DAT_10036450,0);
      if (iVar4 == 0) {
        SetTrigg(0x4f,0);
        SelectUnits(&DAT_10036848,0);
        SelSendTo(1,&DAT_10036478,0x5a,0);
      }
    }
  }
  uVar1 = Trigg(0x4d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x4d,0);
      CreateZoneNearUnit(&DAT_100363e8,&DAT_10036450,&DAT_100366b8,0,0xfa);
      CreateZoneNearUnit(&DAT_100363f0,&DAT_10036450,&DAT_100366c0,0,0xfa);
    }
  }
  uVar1 = Trigg(0x4b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x4d);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x50);
        if ((uVar1 & 0xff) == 0) {
          AttackEnemyInZone(&DAT_10036848,&DAT_100363e8,0);
          AttackEnemyInZone(&DAT_10036848,&DAT_100363f0,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x4c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x50);
    if ((uVar1 & 0xff) == 0) {
      GetTotalAmount0(&DAT_10036848);
      if (iVar4 == 0) {
        SetTrigg(0x4c,0);
        SetTrigg(0x4f,0);
        SetTrigg(0x4e,0);
        SetTrigg(0x4b,0);
        ShowPage("#PAGE7");
        AddResource(0,1,5000);
      }
    }
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036498,0);
    if (0 < iVar4) {
      SetTrigg(0x48,0);
      SelectUnits(&DAT_100366f0,0);
      SelectUnits(&DAT_10036770,1);
      SelOpenGates(1);
      RunTimer(10,100);
    }
  }
  uVar1 = Trigg(0x38);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x48);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(10);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x38,0);
        SelectUnits(&DAT_10036430,0);
        SelSendTo(1,&DAT_10036630,0x5a,0);
        RunTimer(8,0x19);
      }
    }
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100364b0,0);
    if (0 < iVar4) {
      SetTrigg(0x47,0);
      SelectUnits(&DAT_100366f0,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036470,0);
    if (0 < iVar4) {
      SetTrigg(0x46,0);
      SelectUnits(&DAT_10036770,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x45);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x45,0);
      SelectUnits(&DAT_10036748,0);
      SelChangeNation(5,1);
      SelectUnits(&DAT_10036748,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(0x44);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x44,0);
    SelectUnits(&DAT_10036788,0);
    SelSendAndKill(1,&DAT_10036460,0,0);
    for (local_8 = 0; local_8 < 100; local_8 = local_8 + 1) {
      SelSendAndKill(1,&DAT_10036488,0x87,2);
      SelSendAndKill(1,&DAT_10036490,0xc4,2);
      SelSendAndKill(1,&DAT_10036460,0xc4,2);
    }
  }
  uVar1 = Trigg(0x43);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036480,0);
    if (0 < iVar4) {
      SetTrigg(0x43,0);
      ShowPage("#PAGE9");
      ShowPage("#PAGE10");
      SetLightSpot(&DAT_100364e8,1,1);
      SetLightSpot(&DAT_10036558,1,2);
      RunTimer(0x11,100);
      DisableMission(0x4a);
      EnableMission(0x50);
      EnableMission(0x4b);
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x43);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x11);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x20,0);
        CreateObject0(&DAT_10036760,&DAT_100366d0,&DAT_10036698,1,&DAT_10036488,0xc4);
        CreateObject0(&DAT_10036840,&DAT_100366d0,&DAT_10036698,1,&DAT_10036498,0);
        SetTrigg(0x3a,0);
        RunTimer(0x10,100);
      }
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1f,0);
      SelectUnits(&DAT_10036738,0);
      SelOpenGates(5);
      RunTimer(0x12,200);
    }
  }
  uVar1 = Trigg(0x40);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x43);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x12);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x40,0);
        SetTrigg(0x41,0);
        SelectUnits(&DAT_10036750,0);
        SelAttackGroup(1,&DAT_10036728);
        RunTimer(0x1b,200);
      }
    }
  }
  uVar1 = Trigg(0x65);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x40);
    if ((uVar1 & 0xff) == 0) {
      GetTotalAmount0(&DAT_10036728);
      if (iVar4 == 0) {
        SetTrigg(0x65,0);
        RunTimer(9,700);
      }
    }
  }
  uVar1 = Trigg(0x66);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x66,0);
      SetTrigg(0xf,0);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x66);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xf);
      SetTrigg(0xf,0);
      SelectUnits(&DAT_10036750,0);
      SelSendAndKill(1,&DAT_100364c0,0x5a,2);
      SelSendAndKill(1,&DAT_10036680,0x5a,2);
      SelSendAndKill(1,&DAT_10036480,0xb4,2);
      SelSendAndKill(1,&DAT_100364a8,0xb4,2);
    }
  }
  uVar1 = Trigg(0x3f);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10036750);
    if (iVar4 == 0) {
      SetTrigg(0x3f,0);
      SetTrigg(0x40,0);
    }
  }
  uVar1 = Trigg(0x3e);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100364a8,0);
    if (0 < iVar4) {
      uVar1 = Trigg(0x43);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x3e,0);
        SelectUnits(&DAT_10036858,0);
        SelOpenGates(5);
        SelectUnits(&DAT_10036858,0);
        SelectUnits(&DAT_10036818,1);
        SelectUnits(&DAT_10036830,1);
        SelChangeNation(5,0);
        SelectUnits(&DAT_100367f8,0);
        SetStandGround(1,1);
        SelectUnits(&DAT_100366f0,0);
        SelectUnits(&DAT_10036770,1);
        SelCloseGates(1);
        RunTimer(0xb,300);
      }
    }
  }
  uVar1 = Trigg(0x3d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xb);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x3d,0);
      SelectUnits(&DAT_10036898,0);
      SelAttackGroup(1,&DAT_10036818);
    }
  }
  uVar1 = Trigg(0x3c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3d);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x32);
      if ((uVar1 & 0xff) == 0) {
        GetTotalAmount0(&DAT_10036818);
        if (iVar4 == 0) {
          SetTrigg(0x3c,0);
          SelectUnits(&DAT_10036898,0);
          SelAttackGroup(1,&DAT_10036830);
        }
      }
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3d);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x1b);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x36,0);
        SelectUnits(&DAT_10036838,0);
        SelSendAndKill(5,&DAT_100364f8,0x5a,0);
        SetTrigg(0xe,0);
        RunTimer(0x18,200);
      }
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xe);
    SetTrigg(0xe,0);
    SelectUnits(&DAT_10036828,0);
    SelSendAndKill(5,&DAT_10036518,0x5a,0);
    SelSendAndKill(5,&DAT_10036500,0xb4,2);
    SelSendAndKill(5,&DAT_100364b8,0,2);
    SelSendAndKill(5,&DAT_100364a0,0,2);
    SelSendAndKill(5,&DAT_100364e0,0x5a,2);
    SelSendAndKill(5,&DAT_10036518,0x5a,2);
    RunTimer(0x19,200);
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3d);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x19);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x34,0);
        SelectUnits(&DAT_10036850,0);
        SelSendAndKill(5,&DAT_10036540,0x5a,0);
        SetTrigg(0xd,0);
        RunTimer(0x1a,200);
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    SetTrigg(0xd,0);
    SelectUnits(&DAT_10036810,0);
    SelSendAndKill(5,&DAT_10036540,0x5a,0);
    SelSendAndKill(5,&DAT_10036530,0xb4,2);
    SelSendAndKill(5,&DAT_10036500,0,2);
    SelSendAndKill(5,&DAT_100364b8,0,2);
    SelSendAndKill(5,&DAT_10036540,0x5a,2);
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10036558,0);
    if (0 < iVar4) {
      SetTrigg(0x32,0);
      ShowPage("#PAGE11");
      ShowPage("#PAGE29");
      ShowPage("#PAGE30");
      SetLightSpot(&DAT_10036658,1,3);
      SetLightSpot(&DAT_10036570,1,4);
      SelectUnits(&DAT_10036808,0);
      SelectUnits(&DAT_100367f0,1);
      SelChangeNation(5,0);
      SetResource(0,1,500000);
      SetResource(0,4,100000);
      SetResource(0,5,100000);
      DisableMission(0x4b);
      EnableMission(0x52);
      EnableMission(0x4c);
      EnableMission(0x44);
    }
  }
  uVar1 = Trigg(0x31);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x32);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10036658,0);
      if (0 < iVar4) {
        SetTrigg(0x31,0);
        ShowPage("#PAGE12");
        RunTimer(0xc,600);
        ClearLightSpot(1);
        ClearLightSpot(2);
        DisableMission(0x4c);
        EnableMission(0x53);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(0x30);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x32);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0xc);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x30,0);
        SelectUnits(&DAT_10036400,0);
        SelAttackGroup(1,&DAT_10036808);
        ClearLightSpot(3);
        ClearLightSpot(4);
        CreateObject0(&DAT_100367d0,&DAT_100366d8,&DAT_10036688,1,&DAT_10036508,0);
        CreateObject0(&DAT_100367e0,&DAT_100366d8,&DAT_10036688,1,&DAT_100364f0,0);
        CreateObject0(&DAT_100368a0,&DAT_100366d8,&DAT_10036688,1,&DAT_10036538,0);
        SelectUnits(&DAT_100367f8,0);
        SetStandGround(1,0);
        RunTimer(0x13,1000);
      }
    }
  }
  uVar1 = Trigg(0x7d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x13);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x7d,0);
      SelectUnits1(1,&DAT_100367d0,0);
      SelectUnits1(1,&DAT_100367e0,1);
      SelectUnits1(1,&DAT_100368a0,1);
      SelSendAndKill(1,&DAT_10036528,0,0);
      SelectUnits(&DAT_10036418,0);
      SelSendTo(1,&DAT_10036610,0,0);
    }
  }
  uVar1 = Trigg(0x7e);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10036610,&DAT_10036418);
    if (0 < iVar4) {
      SelectUnits(&DAT_10036418,0);
      SelAttackGroup(1,&DAT_10036808);
    }
  }
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x32);
    if ((uVar1 & 0xff) == 0) {
      GetTotalAmount0(&DAT_10036400);
      if (iVar4 == 0) {
        GetTotalAmount0(&DAT_10036418);
        if (iVar4 == 0) {
          SetTrigg(0x2f,0);
          ShowPage("#PAGE13");
          ShowPage("#PAGE14");
          SetLightSpot(&DAT_10036528,2,5);
          SetLightSpot(&DAT_10036620,2,8);
          RunTimer(0xd,50000);
          SelectUnits1(1,&DAT_10036898,0);
          SelSendTo(1,&DAT_100365e8,0,0);
        }
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x32);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount2(&DAT_10036620,&DAT_100366b0,0);
      if (0 < iVar4) {
        SetTrigg(0xc,0);
        ShowPage("#PAGE26");
        ShowPage("#PAGE27");
        SetLightSpot(&DAT_100364c8,2,6);
        DisableMission(0x44);
        EnableMission(0x4e);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x32);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100364c8,0);
      if (0 < iVar4) {
        iVar4 = GetUnitsAmount0(&DAT_100364c8,1);
        if (iVar4 == 0) {
          SetTrigg(0xb,0);
          ShowPage("#PAGE28");
        }
      }
    }
  }
  uVar1 = Trigg(0x2e);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100364c8,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount0(&DAT_10036548,0);
      if (iVar4 < 1) {
        uVar1 = TimerDone(0xd);
        if ((uVar1 & 0xff) == 0) goto LAB_10005b7e;
      }
    }
    SetTrigg(0x2e,0);
    SelectUnits(&DAT_100367d0,0);
    SelectUnits(&DAT_100367e0,1);
    SelectUnits(&DAT_100368a0,1);
    SelSendAndKill(1,&DAT_10036580,0,0);
    SelectUnits1(5,&DAT_10036888,0);
    SelChangeNation(5,0);
    DisableMission(0x4e);
    EnableMission(0x55);
    EnableMission(0x46);
    EnableMission(0x56);
  }
LAB_10005b7e:
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x30);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_10036580,&DAT_100367d0);
      if (0 < iVar4) {
        iVar4 = GetUnitsAmount1(&DAT_10036580,&DAT_100367e0);
        if (0 < iVar4) {
          SetTrigg(0x2d,0);
          CreateObject0(&DAT_10036820,&DAT_10036520,&DAT_100366a0,1,&DAT_10036580,0);
          CreateObject0(&DAT_100367e8,&DAT_10036520,&DAT_100366a0,1,&DAT_10036580,0);
          SelectUnits(&DAT_100367d0,0);
          SelectUnits(&DAT_10036820,1);
          SelectUnits(&DAT_100367e8,1);
          ShowPage("#PAGE15");
          SelSendAndKill(1,&DAT_100365c0,0,0);
          RunTimer(0x1e,300);
        }
      }
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2c,0);
      SelectUnits(&DAT_100367e0,0);
      SelSendAndKill(1,&DAT_100365c0,0,0);
      RunTimer(0xe,700);
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xe);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2b,0);
      SelectUnits(&DAT_100368a0,0);
      SelSendAndKill(1,&DAT_100365c0,0,0);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_100365c0,&DAT_10036820);
      if (iVar4 < 1) {
LAB_10005eb5:
        uVar1 = TimerDone(0xe);
        if ((uVar1 & 0xff) == 0) goto LAB_10006041;
      }
      else {
        iVar4 = GetUnitsAmount1(&DAT_100365c0,&DAT_100367e8);
        if (iVar4 < 1) goto LAB_10005eb5;
      }
      SetTrigg(0x2a,0);
      SelectUnits(&DAT_10036820,0);
      SelectUnits(&DAT_100367e8,1);
      SelectUnits(&DAT_10036760,1);
      SelectUnits(&DAT_10036840,1);
      SelSendAndKill(1,&DAT_10036590,0,0);
      SelectUnits(&DAT_100367d0,0);
      SelectUnits(&DAT_100367e0,1);
      SelectUnits(&DAT_100368a0,1);
      SelSendAndKill(1,&DAT_10036618,0x3c,0);
      SelSendAndKill(1,&DAT_10036638,0x3c,2);
      SelSendAndKill(1,&DAT_100364c8,0x3c,2);
      RunTimer(0x1c,4000);
      RunTimer(4,7000);
    }
  }
LAB_10006041:
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_100364c8,&DAT_100367d0);
      if (0 < iVar4) {
        SetTrigg(6,0);
        SelectUnits(&DAT_100367d0,0);
        SelSendAndKill(1,&DAT_10036598,0,0);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_100364c8,&DAT_100368a0);
      if (0 < iVar4) {
        SetTrigg(5,0);
        SelectUnits(&DAT_100368a0,0);
        SelSendAndKill(1,&DAT_10036598,0,0);
        SetTrigg(0x66,0);
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_10036598,&DAT_100367e8);
      if (0 < iVar4) {
        AttackEnemyInZone(&DAT_100367d0,&DAT_100365a8,0);
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_10036598,&DAT_100367e8);
      if (0 < iVar4) {
        AttackEnemyInZone(&DAT_100368a0,&DAT_100365a8,0);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_10036590,&DAT_10036820);
      if (0 < iVar4) {
        iVar4 = GetUnitsAmount1(&DAT_10036590,&DAT_100367e8);
        if (0 < iVar4) {
          AttackEnemyInZone(&DAT_100367e0,&DAT_100365a8,0);
        }
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_10036590,&DAT_10036820);
      if (0 < iVar4) {
        iVar4 = GetUnitsAmount1(&DAT_10036590,&DAT_100367e8);
        if (0 < iVar4) {
          AttackZoneByArtillery(&DAT_100367e8,&DAT_100365a8,0);
          AttackZoneByArtillery(&DAT_10036820,&DAT_100365a8,0);
        }
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100365a8,0);
      if (iVar4 == 0) {
        SetTrigg(7,0);
        SetTrigg(10,0);
        SetTrigg(9,0);
        SetTrigg(8,0);
        SetTrigg(4,0);
        SetTrigg(0x66,0);
      }
    }
  }
  uVar1 = Trigg(0x66);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_10036598,&DAT_100367d0);
      if (iVar4 < 1) {
        iVar4 = GetUnitsAmount1(&DAT_10036590,&DAT_100368a0);
        if (iVar4 < 1) goto LAB_10006671;
      }
      uVar1 = Trigg(0x66);
      SetTrigg(0x66,0);
      SelectUnits1(1,&DAT_100367d0,0);
      SelectUnits1(1,&DAT_100368a0,1);
      SelectUnits1(1,&DAT_100367e0,1);
      SelSendAndKill(1,&DAT_10036600,0,0);
      SelSendAndKill(1,&DAT_100365f0,0,2);
      SelSendAndKill(1,&DAT_100364c8,0,2);
      SelSendAndKill(1,&DAT_10036628,0,2);
      SelSendAndKill(1,&DAT_10036598,0,2);
    }
  }
LAB_10006671:
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10036410);
    if (iVar4 == 0) {
      SetTrigg(0x29,0);
      ShowPage("#PAGE21");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10036808);
    if (iVar4 == 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x28,0);
        ShowPage("#PAGE22");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1c);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_100367d0);
      GetTotalAmount0(&DAT_100367e0);
      GetTotalAmount0(&DAT_100368a0);
      if (0x96 < iVar4 + iVar2 + iVar3) {
        SetTrigg(0x27,0);
        ShowPage("#PAGE23");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1d);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount1(&DAT_100366b8,0);
      if (iVar4 == 0) {
        GetTotalAmount1(&DAT_100366c0,0);
        if (iVar4 == 0) {
          GetTotalAmount1(&DAT_100366a0,0);
          if (iVar4 == 0) {
            GetTotalAmount1(&DAT_100366a8,0);
            if (iVar4 == 0) {
              SetTrigg(0x10,0);
              ShowPage("#PAGE24");
              LooseGame();
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount2(&DAT_10036470,&DAT_100366a0,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount2(&DAT_10036470,&DAT_100366a8,0);
      if (iVar4 < 1) goto LAB_100069a2;
    }
    SetTrigg(0x25,0);
    SetTrigg(0x24,0);
    SelectUnits(&DAT_10036800,0);
    SelSendAndKill(1,&DAT_10036470,0x5a,0);
  }
LAB_100069a2:
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x25);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount2(&DAT_10036470,&DAT_100366a0,0);
      if (iVar4 == 0) {
        iVar4 = GetUnitsAmount2(&DAT_10036470,&DAT_100366a8,0);
        if (iVar4 == 0) {
          SetTrigg(0x24,0);
          SetTrigg(0x25,0);
          SelectUnits(&DAT_10036800,0);
          SelSendTo(1,&DAT_10036548,0x5a,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount2(&DAT_10036560,&DAT_100366a0,0);
    if (iVar4 < 1) {
      iVar4 = GetUnitsAmount2(&DAT_10036560,&DAT_100366a8,0);
      if (iVar4 < 1) goto LAB_10006b58;
    }
    SetTrigg(0x22,0);
    SetTrigg(0x21,0);
    SelectUnits(&DAT_100367c8,0);
    SelSendAndKill(1,&DAT_10036560,0xa6,0);
  }
LAB_10006b58:
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x22);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount2(&DAT_10036560,&DAT_100366a0,0);
      if (iVar4 == 0) {
        iVar4 = GetUnitsAmount2(&DAT_10036560,&DAT_100366a8,0);
        if (iVar4 == 0) {
          SetTrigg(0x21,0);
          SetTrigg(0x22,0);
          SelectUnits(&DAT_100367c8,0);
          SelSendTo(1,&DAT_10036588,0x5a,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1c);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x27);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x30);
        if ((uVar1 & 0xff) == 0) {
          iVar4 = GetUnitsAmount0(&DAT_100365a8,0);
          if (iVar4 == 0) {
            iVar4 = GetUnitsAmount0(&DAT_100364c8,0);
            if (iVar4 != 0) goto LAB_10006d02;
          }
          else {
LAB_10006d02:
            uVar1 = TimerDone(4);
            if ((uVar1 & 0xff) == 0) goto LAB_10006ee6;
          }
          SetTrigg(0x1e,0);
          SetLightSpot(&DAT_100365c8,1,7);
          SelectUnits(&DAT_100367d0,0);
          SelectUnits(&DAT_100367e0,1);
          SelectUnits(&DAT_100368a0,1);
          SelectUnits(&DAT_10036820,1);
          SelectUnits(&DAT_100367e8,1);
          SelSendTo(1,&DAT_100365a0,0xc4,0);
          AttackEnemyInZone(&DAT_100367f8,&DAT_100365e0,0);
          SelectUnits(&DAT_100367c0,0);
          SelOpenGates(5);
          ShowPage("#PAGE16");
          SelectUnits(&DAT_10036868,0);
          SelChangeNation(5,0);
          DisableMission(0x46);
          DisableMission(0x56);
          EnableMission(0x57);
          EnableMission(0x4f);
          EnableMission(0x49);
        }
      }
    }
  }
LAB_10006ee6:
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x1c,0);
      SelectUnits(&DAT_10036880,0);
      SelSendTo(1,&DAT_100365d8,0,0);
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1c);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(&DAT_10036880,0);
      uVar1 = Trigg(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x1b,0);
          SetTrigg(3,0);
          SelectUnits(&DAT_100367d8,0);
          SelectUnits(&DAT_10036880,1);
          SendUnitsToTransport(1);
        }
      }
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x1a,0);
      SelectUnits(&DAT_10036890,0);
      SelSendTo(1,&DAT_100365c8,0,0);
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1a);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(&DAT_10036890,0);
      uVar1 = Trigg(2);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x19,0);
          SetTrigg(2,0);
          SelectUnits(&DAT_10036870,0);
          SelectUnits(&DAT_10036890,1);
          SendUnitsToTransport(1);
        }
      }
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x1a);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(&DAT_10036880,0);
      uVar1 = Trigg(0x18);
      if ((uVar1 & 0xff) != 0) {
        GetTotalAmount0(&DAT_100367d8);
        iVar2 = GetNInside(1);
        if (iVar4 == iVar2) {
          SetTrigg(0x18,0);
          RunTimer(0x18,400);
        }
      }
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x1a);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(&DAT_10036890,0);
      uVar1 = Trigg(0x17);
      if ((uVar1 & 0xff) != 0) {
        GetTotalAmount0(&DAT_10036870);
        iVar2 = GetNInside(1);
        if (iVar4 == iVar2) {
          SetTrigg(0x17,0);
          RunTimer(0x19,400);
        }
      }
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x18);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x17);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x16,0);
        SelectUnits(&DAT_10036880,0);
        SelSendTo(1,&DAT_10036608,0xc4,0);
        SelectUnits(&DAT_10036890,0);
        SelSendTo(1,&DAT_100365f8,0xc4,0);
      }
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x18);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10036880,0);
        uVar1 = Trigg(0x68);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = CheckLeaveAbility(1);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0x15,0);
            SetTrigg(0x68,0);
            SelectUnits(&DAT_10036880,0);
            PushAllUnitsAway(1);
            RunTimer(0x14,1000);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x19);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10036890,0);
        uVar1 = Trigg(0x67);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = CheckLeaveAbility(1);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0x14,0);
            SetTrigg(0x67,0);
            SelectUnits(&DAT_10036890,0);
            PushAllUnitsAway(1);
            RunTimer(0x15,1000);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x6b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x67);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x68);
      if ((uVar1 & 0xff) != 0) goto LAB_1000776c;
    }
    SetTrigg(0x6b,0);
    SetResource(0,1,0);
  }
LAB_1000776c:
  uVar1 = Trigg(0x6a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x14);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x6a,0);
      SelectUnits(&DAT_100367d8,0);
      SelSendAndKill(1,&DAT_100365b0,0,0);
      RunTimer(0x16,3000);
    }
  }
  uVar1 = Trigg(0x69);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x15);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x69,0);
      SelectUnits1(1,&DAT_10036870,0);
      SelSendAndKill(1,&DAT_100365b0,0,0);
      RunTimer(0x17,3000);
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x16);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x17);
      if ((uVar1 & 0xff) == 0) goto LAB_10007968;
    }
    iVar4 = GetUnitsAmount0(&DAT_100365b0,1);
    if (0 < iVar4) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE25");
      LooseGame();
    }
  }
LAB_10007968:
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10036880);
    if (iVar4 != 0) {
      GetTotalAmount0(&DAT_10036890);
      if (iVar4 != 0) goto LAB_100079e3;
    }
    SetTrigg(0x11,0);
    ShowPage("#PAGE20");
    ShowVictory();
  }
LAB_100079e3:
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
