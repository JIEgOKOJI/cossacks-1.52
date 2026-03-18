#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1003010c[] = "fp2";
char DAT_10030110[] = "fp1";
char DAT_100301d4[] = "att3";
char DAT_100301dc[] = "att2";
char DAT_100301e4[] = "att1";
char DAT_100301ec[] = "out5";
char DAT_100301f4[] = "out4";
char DAT_100301fc[] = "out3";
char DAT_10030204[] = "out2";
char DAT_1003020c[] = "out1";
char DAT_1003025c[] = "bf2";
char DAT_10030260[] = "bf1";
char DAT_10030294[] = "tr4";
char DAT_10030298[] = "tr3";
char DAT_1003029c[] = "tr2";
char DAT_100302a0[] = "tr1";
char DAT_10030344[] = "#P6";
char DAT_10030348[] = "#P5";
char DAT_1003034c[] = "#P4A";
char DAT_10030354[] = "#P4";
char DAT_10030358[] = "#P3";
char DAT_1003035c[] = "#P2";
char DAT_10030360[] = "#P1";
char DAT_10030364[] = "#P0";
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
long long DAT_100356f8 = 0;
long long DAT_10035700 = 0;
long long DAT_10035708 = 0;
long long DAT_10035710 = 0;
long long DAT_10035718 = 0;
long long DAT_10035720 = 0;
long long DAT_10035728 = 0;
long long DAT_10035730 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_10035408,"wave1a");
  RegisterUnits(&DAT_10035420,"wave1b");
  RegisterUnits(&DAT_10035418,"wave1c");
  RegisterUnits(&DAT_10035430,"wave1d");
  RegisterUnits(&DAT_10035428,"wave2a");
  RegisterUnits(&DAT_10035440,"wave2b");
  RegisterUnits(&DAT_10035438,"wave2c");
  RegisterUnits(&DAT_10035450,"wave2d");
  RegisterUnits(&DAT_10035448,"wave2e");
  RegisterUnits(&DAT_100355d8,"wave2f");
  RegisterUnits(&DAT_10035640,"wave2g");
  RegisterUnits(&DAT_10035648,"wave2h");
  RegisterUnits(&DAT_10035628,"wave3a");
  RegisterUnits(&DAT_10035638,"wave3b");
  RegisterUnits(&DAT_10035610,"wave3c");
  RegisterUnits(&DAT_10035620,"wave3d");
  RegisterUnits(&DAT_100355e8,"wave3e");
  RegisterUnits(&DAT_10035600,"wave3f");
  RegisterUnits(&DAT_100356d8,"wave3g");
  RegisterUnits(&DAT_10035630,"wave3h");
  RegisterUnits(&DAT_10035608,DAT_100302a0);
  RegisterUnits(&DAT_10035618,DAT_1003029c);
  RegisterUnits(&DAT_100355e0,DAT_10030298);
  RegisterUnits(&DAT_100355f8,DAT_10030294);
  RegisterUnits(&DAT_100356d0,"wall1");
  RegisterUnits(&DAT_100356e8,"wall2");
  RegisterUnits(&DAT_100356a8,"wall3");
  RegisterUnits(&DAT_100356c0,"wave1a");
  RegisterUnits(&DAT_10035688,"wave1a");
  RegisterUnits(&DAT_100355f0,"wave1a");
  RegisterUnits(&DAT_100356c8,"wave1a");
  RegisterUnits(&DAT_100356e0,"wave1a");
  RegisterUnits(&DAT_100356a0,"wave1a");
  RegisterUnits(&DAT_100356b8,"wave1a");
  RegisterUnits(&DAT_10035680,"wave1a");
  RegisterUnits(&DAT_10035698,"wave1a");
  RegisterUnits(&DAT_10035658,"wave1a");
  RegisterUnits(&DAT_10035670,"wave1a");
  RegisterUnits(&DAT_10035718,"wave1a");
  RegisterUnits(&DAT_100356b0,"wave1a");
  RegisterUnits(&DAT_10035678,"wave1a");
  RegisterUnits(&DAT_10035690,"wave1a");
  RegisterUnits(&DAT_10035650,"wave1a");
  RegisterUnits(&DAT_10035668,"ketch1");
  RegisterUnits(&DAT_10035710,"ketch2");
  RegisterUnits(&DAT_10035728,"ketch3");
  RegisterUnits(&DAT_100356f8,DAT_10030260);
  RegisterUnits(&DAT_10035700,DAT_1003025c);
  RegisterUnits(&DAT_100356f0,"command");
  RegisterUnits(&DAT_10035660,"mainhall");
  RegisterUnits(&DAT_10035708,"gards");
  RegisterUnits(&DAT_10035720,"tower");
  RegisterZone(&DAT_10035570,"load1a");
  RegisterZone(&DAT_10035578,"load1b");
  RegisterZone(&DAT_10035580,"load1c");
  RegisterZone(&DAT_10035588,"load1d");
  RegisterZone(&DAT_10035590,DAT_1003020c);
  RegisterZone(&DAT_10035598,DAT_10030204);
  RegisterZone(&DAT_100355a0,DAT_100301fc);
  RegisterZone(&DAT_100355a8,DAT_100301f4);
  RegisterZone(&DAT_100355b0,DAT_100301ec);
  RegisterZone(&DAT_10035470,DAT_100301e4);
  RegisterZone(&DAT_10035468,DAT_100301dc);
  RegisterZone(&DAT_10035480,DAT_100301d4);
  RegisterZone(&DAT_10035478,"spawn1");
  RegisterZone(&DAT_100354a0,"spawn2");
  RegisterZone(&DAT_10035490,"spawn3");
  RegisterZone(&DAT_100354c0,"spawn4");
  RegisterZone(&DAT_100354b0,"load2a");
  RegisterZone(&DAT_100354f0,"load2b");
  RegisterZone(&DAT_100354d8,"load2c");
  RegisterZone(&DAT_10035498,"load2d");
  RegisterZone(&DAT_10035488,"load2e");
  RegisterZone(&DAT_100354b8,"load2f");
  RegisterZone(&DAT_100354a8,"load2g");
  RegisterZone(&DAT_100354e8,"load2h");
  RegisterZone(&DAT_100354d0,"load3a");
  RegisterZone(&DAT_10035510,"load3b");
  RegisterZone(&DAT_10035500,"load3c");
  RegisterZone(&DAT_10035540,"load3d");
  RegisterZone(&DAT_10035528,"load3e");
  RegisterZone(&DAT_100354e0,"load3f");
  RegisterZone(&DAT_100354c8,"load3g");
  RegisterZone(&DAT_10035508,"load3h");
  RegisterZone(&DAT_100354f8,"spawn5");
  RegisterZone(&DAT_10035538,"spawn6");
  RegisterZone(&DAT_10035520,"spawn7");
  RegisterZone(&DAT_10035558,"spawn8");
  RegisterZone(&DAT_10035548,DAT_10030110);
  RegisterZone(&DAT_10035568,DAT_1003010c);
  RegisterZone(&DAT_10035560,"arrive1");
  RegisterZone(&DAT_10035530,"arrive2");
  RegisterZone(&DAT_10035518,"arrive3");
  RegisterZone(&DAT_10035550,"reveal");
  SetPlayerName(1,"King\'s forces");
  RegisterFormation(&DAT_10035730,"#ALONE");
  RegisterFormation(&DAT_10035460,"#SQUARE196");
  RegisterUnitType(&DAT_100353e0,"PERES_KOR(en)");
  RegisterUnitType(&DAT_100355c8,"Victoria(fr)");
  RegisterUnitType(&DAT_10035458,"Korolrv_Mus(fr)");
  RegisterUnitType(&DAT_100355d0,"Pikiner_evro(en)");
  RegisterUnitType(&DAT_100355b8,"Krestian_Sved(en)");
  RegisterUpgrade(&DAT_100353f0,"AKA20EN");
  RegisterUpgrade(&DAT_100353f8,"AKA17EN");
  RegisterUpgrade(&DAT_10035400,"KUZ06EN");
  RegisterUpgrade(&DAT_100355c0,"AKA34EN");
  RegisterUpgrade(&DAT_100353e8,"AKA31EN");
  uStack_8 = 0x10001c66;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *puVar10;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SetResource(0,3,100000);
    SetResource(0,1,9000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,24000);
    SetResource(0,4,14000);
    EnableUnit(0,&DAT_100355b8,0);
    SetResource(1,3,0x4876e7ff);
    SetResource(1,5,0x4876e7ff);
    SetResource(1,4,0x4876e7ff);
    SetResource(1,1,0x4876e7ff);
    InitialUpgrade("wave1a","AKA20EN");
    InitialUpgrade("wave1a","AKA17EN");
    InitialUpgrade("wave1a","KUZ06EN");
    InitialUpgrade("wave1a","AKA34EN");
    InitialUpgrade("wave1a","AKA31EN");
    SelectUnits(&DAT_10035608,0);
    SelSendTo(1,&DAT_10035570,0,0);
    SelectUnits(&DAT_10035618,0);
    SelSendTo(1,&DAT_10035578,0,0);
    SelectUnits(&DAT_100355e0,0);
    SelSendTo(1,&DAT_10035580,0,0);
    SelectUnits(&DAT_100355f8,0);
    SelSendTo(1,&DAT_10035588,0,0);
    SelectUnits(&DAT_10035708,0);
    SetStandGround(1,1);
    ClearSelection(1);
    ShowPage(DAT_10030364);
    ShowPage(DAT_10030360);
    SetStartPoint(&DAT_10035480);
    RunTimer(0,0x100);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      SelectUnits(&DAT_10035408,0);
      SelectUnits(&DAT_10035608,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035420,0);
      SelectUnits(&DAT_10035618,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035418,0);
      SelectUnits(&DAT_100355e0,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035430,0);
      SelectUnits(&DAT_100355f8,1);
      SendUnitsToTransport(1);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(&DAT_10035608,0);
      iVar9 = GetNInside(1);
      iVar2 = GetTotalAmount0(&DAT_10035408);
      if (iVar9 == iVar2) {
        SetTrigg(3,0);
        SelSendTo(1,&DAT_10035590,0,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(&DAT_10035618,0);
      iVar9 = GetNInside(1);
      iVar2 = GetTotalAmount0(&DAT_10035420);
      if (iVar9 == iVar2) {
        SetTrigg(4,0);
        SelSendTo(1,&DAT_100355a8,0,0);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(&DAT_100355e0,0);
      iVar9 = GetNInside(1);
      iVar2 = GetTotalAmount0(&DAT_10035418);
      if (iVar9 == iVar2) {
        SetTrigg(5,0);
        SelSendTo(1,&DAT_100355a8,0,0);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(&DAT_100355f8,0);
      iVar9 = GetNInside(1);
      iVar2 = GetTotalAmount0(&DAT_10035430);
      if (iVar9 == iVar2) {
        SetTrigg(6,0);
        SelSendTo(1,&DAT_100355b0,0,0);
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_10035590,&DAT_10035608);
    if (0 < iVar9) {
      uVar1 = Trigg(0x25);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10035608,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          PushAllUnitsAway(1);
          RunTimer(1,0x400);
          SetTrigg(7,0);
        }
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(1);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetTotalAmount0(&DAT_10035608);
      if (iVar9 != 0) goto LAB_100028cc;
    }
    SetTrigg(0xc,0);
    SelectUnits(&DAT_10035408,0);
    SelSendAndKill(1,&DAT_10035470,0x40,0);
    RunTimer(1,300);
  }
LAB_100028cc:
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(1);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10035608,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_100355a8,&DAT_10035618);
    if (0 < iVar9) {
      uVar1 = Trigg(0x25);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10035618,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(8,0);
          PushAllUnitsAway(1);
          RunTimer(2,0x400);
        }
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetTotalAmount0(&DAT_10035618);
      if (iVar9 != 0) goto LAB_10002aec;
    }
    SetTrigg(0xd,0);
    SelectUnits(&DAT_10035420,0);
    SelSendAndKill(1,&DAT_10035468,0xc0,0);
    RunTimer(2,300);
  }
LAB_10002aec:
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10035618,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_10035468,&DAT_10035420);
    if (5 < iVar9) {
      SetTrigg(0x10,0);
      SelectUnits(&DAT_10035420,0);
      SelAttackGroup(1,&DAT_100356a8);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_100355a8,&DAT_100355e0);
    if (0 < iVar9) {
      uVar1 = Trigg(0x25);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100355e0,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(9,0);
          PushAllUnitsAway(1);
          RunTimer(3,0x400);
        }
      }
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(3);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetTotalAmount0(&DAT_100355e0);
      if (iVar9 != 0) goto LAB_10002d92;
    }
    SetTrigg(0xe,0);
    SelectUnits(&DAT_10035418,0);
    SelSendAndKill(1,&DAT_10035468,0xc0,0);
    RunTimer(3,300);
  }
LAB_10002d92:
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100355e0,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_100355b0,&DAT_100355f8);
    if (0 < iVar9) {
      uVar1 = Trigg(0x25);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100355f8,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(10,0);
          PushAllUnitsAway(1);
          RunTimer(4,0x400);
        }
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetTotalAmount0(&DAT_100355f8);
      if (iVar9 != 0) goto LAB_10002fb2;
    }
    SetTrigg(0xf,0);
    SelectUnits(&DAT_10035430,0);
    SelSendAndKill(1,&DAT_10035468,0xc0,0);
    RunTimer(4,300);
  }
LAB_10002fb2:
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100355f8,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_10035468,&DAT_10035430);
    if (5 < iVar9) {
      SetTrigg(0xb,0);
      SelectUnits(&DAT_10035430,0);
      SelAttackGroup(1,&DAT_100356a8);
    }
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetTotalAmount0(&DAT_10035608);
    if (iVar9 == 0) {
      iVar9 = GetTotalAmount0(&DAT_10035618);
      if (iVar9 == 0) {
        iVar9 = GetTotalAmount0(&DAT_100355e0);
        if (iVar9 == 0) {
          iVar9 = GetTotalAmount0(&DAT_100355f8);
          if (iVar9 == 0) {
            RunTimer(5,0x20);
            SetTrigg(0x25,0);
            RunTimer(0x12,0x100);
            ShowPage(DAT_1003035c);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(5);
    if ((uVar1 & 0xff) != 0) {
      CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035478,0);
      SelectUnits(&DAT_10035410,0);
      SaveSelectedUnits(1,&DAT_100356e0,0);
      SelSendTo(1,&DAT_100354b0,0,0);
      CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035490,0);
      SelectUnits(&DAT_10035410,0);
      SaveSelectedUnits(1,&DAT_100356b8,0);
      SelSendTo(1,&DAT_10035498,0,0);
      CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_100354a0,0);
      SelectUnits(&DAT_10035410,0);
      SaveSelectedUnits(1,&DAT_100356c0,0);
      SelSendTo(1,&DAT_10035488,0,0);
      CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_100354c0,0);
      SelectUnits(&DAT_10035410,0);
      SaveSelectedUnits(1,&DAT_100355f0,0);
      SelSendTo(1,&DAT_100354a8,0,0);
      RunTimer(7,200);
      SelectUnits(&DAT_10035668,0);
      SelectUnits(&DAT_10035710,1);
      SelectUnits(&DAT_10035728,1);
      SelAttackGroup(1,&DAT_10035720);
      SetTrigg(0x11,0);
    }
  }
  uVar1 = TimerDoneFirst(7);
  if ((uVar1 & 0xff) != 0) {
    CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035478,0);
    SelectUnits(&DAT_10035410,0);
    SaveSelectedUnits(1,&DAT_100356a0,0);
    SelSendTo(1,&DAT_100354f0,0,0);
    CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035490,0);
    SelectUnits(&DAT_10035410,0);
    SaveSelectedUnits(1,&DAT_10035680,0);
    SelSendTo(1,&DAT_100354d8,0,0);
    CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_100354a0,0);
    SelectUnits(&DAT_10035410,0);
    SaveSelectedUnits(1,&DAT_10035688,0);
    SelSendTo(1,&DAT_100354b8,0,0);
    CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_100354c0,0);
    SelectUnits(&DAT_10035410,0);
    SaveSelectedUnits(1,&DAT_100356c8,0);
    SelSendTo(1,&DAT_100354e8,0,0);
    RunTimer(0x1f,0x41a);
  }
  uVar1 = TimerDoneFirst(0x1f);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x13,0);
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_100356e0,0);
      SelectUnits(&DAT_10035428,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_100356a0,0);
      SelectUnits(&DAT_10035440,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_100356b8,0);
      SelectUnits(&DAT_10035438,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035680,0);
      SelectUnits(&DAT_10035450,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_100356c0,0);
      SelectUnits(&DAT_10035448,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035688,0);
      SelectUnits(&DAT_100355d8,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_100355f0,0);
      SelectUnits(&DAT_10035640,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_100356c8,0);
      SelectUnits(&DAT_10035648,1);
      SendUnitsToTransport(1);
      RunTimer(8,0x26c);
    }
  }
  uVar1 = TimerDoneFirst(8);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_100356e0,0);
    SelSendTo(1,&DAT_10035590,0,0);
    SelectUnits(&DAT_100356a0,0);
    SelSendTo(1,&DAT_100355a0,0,0);
    SelectUnits(&DAT_100356b8,0);
    SelSendTo(1,&DAT_100355a0,0,0);
    SelectUnits(&DAT_10035680,0);
    SelSendTo(1,&DAT_100355a0,0,0);
    SelectUnits(&DAT_100356c0,0);
    SelSendTo(1,&DAT_100355a8,0,0);
    SelectUnits(&DAT_10035688,0);
    SelSendTo(1,&DAT_100355a8,0,0);
    SelectUnits(&DAT_100355f0,0);
    SelSendTo(1,&DAT_100355b0,0,0);
    SelectUnits(&DAT_100356c8,0);
    SelSendTo(1,&DAT_100355b0,0,0);
    RunTimer(9,800);
    SetTrigg(7,0);
  }
  uVar1 = TimerDoneFirst(9);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_100356a0,0);
    SelSendTo(1,&DAT_10035598,0,0);
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetUnitsAmount1(&DAT_10035590,&DAT_100356e0);
      if (0 < iVar9) {
        SelectUnits(&DAT_100356e0,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          PushAllUnitsAway(1);
          RunTimer(10,0x400);
          SetTrigg(0x15,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(10);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_100356e0);
        if (iVar9 != 0) goto LAB_10003d65;
      }
      SetTrigg(0x16,0);
      SelectUnits(&DAT_10035428,0);
      SelSendAndKill(1,&DAT_10035480,0x40,0);
      RunTimer(10,300);
    }
  }
LAB_10003d65:
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100356e0,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetUnitsAmount1(&DAT_10035598,&DAT_100356a0);
      if (0 < iVar9) {
        SelectUnits(&DAT_100356a0,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          PushAllUnitsAway(1);
          RunTimer(0xb,0x400);
          SetTrigg(0x17,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(0xb);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_100356a0);
        if (iVar9 != 0) goto LAB_10003fa3;
      }
      SetTrigg(0x18,0);
      SelectUnits(&DAT_10035440,0);
      SelSendAndKill(1,&DAT_10035480,0x40,0);
      RunTimer(0xb,300);
    }
  }
LAB_10003fa3:
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0xb);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100356a0,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetUnitsAmount1(&DAT_100355a0,&DAT_100356b8);
      if (0 < iVar9) {
        SelectUnits(&DAT_100356b8,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          PushAllUnitsAway(1);
          RunTimer(0xc,0x400);
          SetTrigg(0x19,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x19);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(0xc);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_100356b8);
        if (iVar9 != 0) goto LAB_100041e1;
      }
      SetTrigg(0x1a,0);
      SelectUnits(&DAT_10035438,0);
      SelSendAndKill(1,&DAT_10035480,0x40,0);
      RunTimer(0xc,300);
    }
  }
LAB_100041e1:
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0xc);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100356b8,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetUnitsAmount1(&DAT_100355a0,&DAT_10035680);
      if (0 < iVar9) {
        SelectUnits(&DAT_10035680,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          PushAllUnitsAway(1);
          RunTimer(0xd,0x400);
          SetTrigg(0x1b,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1b);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(0xd);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_10035680);
        if (iVar9 != 0) goto LAB_1000441f;
      }
      SetTrigg(0x1c,0);
      SelectUnits(&DAT_10035450,0);
      SelSendAndKill(1,&DAT_10035480,0x40,0);
      RunTimer(0xd,300);
    }
  }
LAB_1000441f:
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10035680,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetUnitsAmount1(&DAT_100355a8,&DAT_100356c0);
      if (0 < iVar9) {
        SelectUnits(&DAT_100356c0,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          PushAllUnitsAway(1);
          RunTimer(0xe,0x400);
          SetTrigg(0x1d,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1d);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(0xe);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_100356c0);
        if (iVar9 != 0) goto LAB_10004660;
      }
      SetTrigg(0x1e,0);
      SelectUnits(&DAT_10035448,0);
      SelSendAndKill(1,&DAT_10035480,0xc0,0);
      RunTimer(0xe,300);
    }
  }
LAB_10004660:
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0xe);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100356c0,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetUnitsAmount1(&DAT_100355a8,&DAT_10035688);
      if (0 < iVar9) {
        SelectUnits(&DAT_10035688,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          PushAllUnitsAway(1);
          RunTimer(0xf,0x400);
          SetTrigg(0x1f,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(0xf);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_10035688);
        if (iVar9 != 0) goto LAB_100048a1;
      }
      SetTrigg(0x20,0);
      SelectUnits(&DAT_100355d8,0);
      SelSendAndKill(1,&DAT_10035480,0xc0,0);
      RunTimer(0xf,300);
    }
  }
LAB_100048a1:
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0xf);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10035688,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetUnitsAmount1(&DAT_100355b0,&DAT_100355f0);
      if (0 < iVar9) {
        SelectUnits(&DAT_100355f0,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          PushAllUnitsAway(1);
          RunTimer(0x10,0x400);
          SetTrigg(0x21,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x21);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(0x10);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_100355f0);
        if (iVar9 != 0) goto LAB_10004ae2;
      }
      SetTrigg(0x22,0);
      SelectUnits(&DAT_10035640,0);
      SelSendAndKill(1,&DAT_10035480,0xc0,0);
      RunTimer(0x10,300);
    }
  }
LAB_10004ae2:
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0x10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100355f0,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetUnitsAmount1(&DAT_100355b0,&DAT_100356c8);
      if (0 < iVar9) {
        SelectUnits(&DAT_100356c8,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) != 0) {
          PushAllUnitsAway(1);
          RunTimer(0x11,0x400);
          SetTrigg(0x23,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x23);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(0x11);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_100356c8);
        if (iVar9 != 0) goto LAB_10004d23;
      }
      SetTrigg(0x24,0);
      SelectUnits(&DAT_10035648,0);
      SelSendAndKill(1,&DAT_10035480,0xc0,0);
      RunTimer(0x11,300);
    }
  }
LAB_10004d23:
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0x11);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100356c8,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x25);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x12);
      if ((uVar1 & 0xff) != 0) {
        iVar9 = GetTotalAmount0(&DAT_100356e0);
        if (iVar9 == 0) {
          iVar9 = GetTotalAmount0(&DAT_100356a0);
          if (iVar9 == 0) {
            iVar9 = GetTotalAmount0(&DAT_100356b8);
            if (iVar9 == 0) {
              iVar9 = GetTotalAmount0(&DAT_10035680);
              if (iVar9 == 0) {
                iVar9 = GetTotalAmount0(&DAT_100356c0);
                if (iVar9 == 0) {
                  iVar9 = GetTotalAmount0(&DAT_10035688);
                  if (iVar9 == 0) {
                    iVar9 = GetTotalAmount0(&DAT_100355f0);
                    if (iVar9 == 0) {
                      iVar9 = GetTotalAmount0(&DAT_100356c8);
                      if (iVar9 == 0) {
                        SetTrigg(0x26,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x26);
    if ((uVar1 & 0xff) == 0) {
      CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_100354f8,0);
      SelectUnits(&DAT_10035410,0);
      SaveSelectedUnits(1,&DAT_10035698,0);
      SelSendTo(1,&DAT_100354d0,0,0);
      CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035520,0);
      SelectUnits(&DAT_10035410,0);
      SaveSelectedUnits(1,&DAT_10035670,0);
      SelSendTo(1,&DAT_10035528,0,0);
      CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035538,0);
      SelectUnits(&DAT_10035410,0);
      SaveSelectedUnits(1,&DAT_100356b0,0);
      SelSendTo(1,&DAT_10035500,0,0);
      CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035558,0);
      SelectUnits(&DAT_10035410,0);
      SaveSelectedUnits(1,&DAT_10035690,0);
      SelSendTo(1,&DAT_100354c8,0,0);
      RunTimer(0x13,300);
      SetTrigg(0x27,0);
      ClearSelection(1);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x27);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x13);
      if ((uVar1 & 0xff) != 0) {
        CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_100354f8,0);
        SelectUnits(&DAT_10035410,0);
        SaveSelectedUnits(1,&DAT_10035658,0);
        SelSendTo(1,&DAT_10035510,0,0);
        CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035520,0);
        SelectUnits(&DAT_10035410,0);
        SaveSelectedUnits(1,&DAT_10035718,0);
        SelSendTo(1,&DAT_100354e0,0,0);
        CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035538,0);
        SelectUnits(&DAT_10035410,0);
        SaveSelectedUnits(1,&DAT_10035678,0);
        SelSendTo(1,&DAT_10035540,0,0);
        CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100353e0,1,&DAT_10035558,0);
        SelectUnits(&DAT_10035410,0);
        SaveSelectedUnits(1,&DAT_10035650,0);
        SelSendTo(1,&DAT_10035508,0,0);
        SetTrigg(0x28,0);
        RunTimer(0x14,0x2ce);
        ClearSelection(1);
      }
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x14);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x29,0);
      SelectUnits(&DAT_10035698,0);
      SelectUnits(&DAT_10035628,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035658,0);
      SelectUnits(&DAT_10035638,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035670,0);
      SelectUnits(&DAT_100355e8,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035718,0);
      SelectUnits(&DAT_10035600,1);
      SendUnitsToTransport(1);
      ClearSelection(1);
      SelectUnits(&DAT_100356b0,0);
      SelectUnits(&DAT_10035610,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035678,0);
      SelectUnits(&DAT_10035620,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035690,0);
      SelectUnits(&DAT_100356d8,1);
      SendUnitsToTransport(1);
      SelectUnits(&DAT_10035650,0);
      SelectUnits(&DAT_10035630,1);
      SendUnitsToTransport(1);
      RunTimer(0x15,0x212);
      ClearSelection(1);
      SelectUnits(&DAT_10035668,0);
      SelAttackGroup(1,&DAT_100356d0);
      SelectUnits(&DAT_10035710,0);
      SelAttackGroup(1,&DAT_100356e8);
      SelectUnits(&DAT_10035728,0);
      SelAttackGroup(1,&DAT_100356a8);
      ClearSelection(1);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x15);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10035698,0);
      SelSendTo(1,&DAT_10035590,0,0);
      SelectUnits(&DAT_10035658,0);
      SelSendTo(1,&DAT_10035590,0,0);
      SelectUnits(&DAT_10035670,0);
      SelSendTo(1,&DAT_100355a8,0,0);
      SelectUnits(&DAT_10035718,0);
      SelSendTo(1,&DAT_100355a8,0,0);
      SelectUnits(&DAT_100356b0,0);
      SelSendTo(1,&DAT_10035598,0,0);
      SelectUnits(&DAT_10035678,0);
      SelSendTo(1,&DAT_100355a0,0,0);
      SelectUnits(&DAT_10035690,0);
      SelSendTo(1,&DAT_100355b0,0,0);
      SelectUnits(&DAT_10035650,0);
      SelSendTo(1,&DAT_100355b0,0,0);
      SetTrigg(0x2a,0);
      ClearSelection(1);
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_10035590,&DAT_10035698);
    if (0 < iVar9) {
      SelectUnits(&DAT_10035698,0);
      uVar1 = CheckLeaveAbility(1);
      if ((uVar1 & 0xff) != 0) {
        PushAllUnitsAway(1);
        RunTimer(0x16,0x400);
        SetTrigg(0x2b,0);
      }
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2b);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x16);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_10035698);
        if (iVar9 != 0) goto LAB_10005b23;
      }
      SetTrigg(0x2c,0);
      SelectUnits(&DAT_10035628,0);
      SelSendAndKill(1,&DAT_10035480,0x40,0);
      RunTimer(0x1e,0x140);
    }
  }
LAB_10005b23:
  uVar1 = TimerDoneFirst(0x1e);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10035698,0);
    SelDie(1);
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_10035590,&DAT_10035658);
    if (0 < iVar9) {
      SelectUnits(&DAT_10035658,0);
      uVar1 = CheckLeaveAbility(1);
      if ((uVar1 & 0xff) != 0) {
        PushAllUnitsAway(1);
        RunTimer(0x17,0x400);
        SetTrigg(0x2d,0);
      }
    }
  }
  uVar1 = Trigg(0x2e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x17);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_10035658);
        if (iVar9 != 0) goto LAB_10005ced;
      }
      SetTrigg(0x2e,0);
      SelectUnits(&DAT_10035638,0);
      SelSendAndKill(1,&DAT_10035480,0x40,0);
    }
  }
LAB_10005ced:
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_100355a8,&DAT_10035670);
    if (0 < iVar9) {
      SelectUnits(&DAT_10035670,0);
      uVar1 = CheckLeaveAbility(1);
      if ((uVar1 & 0xff) != 0) {
        PushAllUnitsAway(1);
        RunTimer(0x18,0x400);
        SetTrigg(0x2f,0);
      }
    }
  }
  uVar1 = Trigg(0x30);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x18);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_10035670);
        if (iVar9 != 0) goto LAB_10005e6d;
      }
      SetTrigg(0x30,0);
      SelectUnits(&DAT_100355e8,0);
      SelSendAndKill(1,&DAT_10035480,0x40,0);
    }
  }
LAB_10005e6d:
  uVar1 = Trigg(0x31);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_100355a8,&DAT_10035718);
    if (0 < iVar9) {
      SelectUnits(&DAT_10035718,0);
      uVar1 = CheckLeaveAbility(1);
      if ((uVar1 & 0xff) != 0) {
        PushAllUnitsAway(1);
        RunTimer(0x19,0x400);
        SetTrigg(0x31,0);
      }
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x31);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x19);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_10035718);
        if (iVar9 != 0) goto LAB_10005fed;
      }
      SetTrigg(0x32,0);
      SelectUnits(&DAT_10035600,0);
      SelSendAndKill(1,&DAT_10035480,0x40,0);
    }
  }
LAB_10005fed:
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_10035598,&DAT_100356b0);
    if (0 < iVar9) {
      SelectUnits(&DAT_100356b0,0);
      uVar1 = CheckLeaveAbility(1);
      if ((uVar1 & 0xff) != 0) {
        PushAllUnitsAway(1);
        RunTimer(0x1a,0x400);
        SetTrigg(0x33,0);
      }
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x33);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x1a);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_100356b0);
        if (iVar9 != 0) goto LAB_10006170;
      }
      SetTrigg(0x34,0);
      SelectUnits(&DAT_10035610,0);
      SelSendAndKill(1,&DAT_10035480,0xc0,0);
    }
  }
LAB_10006170:
  uVar1 = Trigg(0x35);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_100355a0,&DAT_10035678);
    if (0 < iVar9) {
      SelectUnits(&DAT_10035678,0);
      uVar1 = CheckLeaveAbility(1);
      if ((uVar1 & 0xff) != 0) {
        PushAllUnitsAway(1);
        RunTimer(0x1b,0x400);
        SetTrigg(0x35,0);
      }
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x35);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x1b);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_10035678);
        if (iVar9 != 0) goto LAB_100062f3;
      }
      SetTrigg(0x36,0);
      SelectUnits(&DAT_10035620,0);
      SelSendAndKill(1,&DAT_10035480,0xc0,0);
    }
  }
LAB_100062f3:
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_100355b0,&DAT_10035690);
    if (0 < iVar9) {
      SelectUnits(&DAT_10035690,0);
      uVar1 = CheckLeaveAbility(1);
      if ((uVar1 & 0xff) != 0) {
        PushAllUnitsAway(1);
        RunTimer(0x1c,0x400);
        SetTrigg(0x37,0);
      }
    }
  }
  uVar1 = Trigg(0x38);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x37);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x1c);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_10035690);
        if (iVar9 != 0) goto LAB_10006476;
      }
      SetTrigg(0x38,0);
      SelectUnits(&DAT_100356d8,0);
      SelSendAndKill(1,&DAT_10035480,0xc0,0);
    }
  }
LAB_10006476:
  uVar1 = Trigg(0x39);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetUnitsAmount1(&DAT_100355b0,&DAT_10035650);
    if (0 < iVar9) {
      SelectUnits(&DAT_10035650,0);
      uVar1 = CheckLeaveAbility(1);
      if ((uVar1 & 0xff) != 0) {
        PushAllUnitsAway(1);
        RunTimer(0x1d,0x400);
        SetTrigg(0x39,0);
      }
    }
  }
  uVar1 = Trigg(0x3a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x39);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x1d);
      if ((uVar1 & 0xff) == 0) {
        iVar9 = GetTotalAmount0(&DAT_10035650);
        if (iVar9 != 0) goto LAB_100065f9;
      }
      SetTrigg(0x3a,0);
      SelectUnits(&DAT_10035630,0);
      SelSendAndKill(1,&DAT_10035480,0xc0,0);
    }
  }
LAB_100065f9:
  uVar1 = Trigg(0x3b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x3b,0);
      SelectUnits(&DAT_100356f8,0);
      SelSendAndKill(1,&DAT_10035548,0x80,0);
      SelectUnits(&DAT_10035700,0);
      SelSendAndKill(1,&DAT_10035568,0xc0,0);
      RunTimer(0x1d,0x4b0);
    }
  }
  uVar1 = Trigg(0x3c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1d);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x3c,0);
      SelectUnits(&DAT_10035668,0);
      SelAttackGroup(1,&DAT_100356d0);
      SelectUnits(&DAT_10035710,0);
      SelAttackGroup(1,&DAT_100356e8);
      SelectUnits(&DAT_10035728,0);
      SelAttackGroup(1,&DAT_100356a8);
    }
  }
  uVar1 = Trigg(0x3d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x28);
    if ((uVar1 & 0xff) == 0) {
      iVar9 = GetTotalAmount0(&DAT_10035428);
      iVar2 = GetTotalAmount0(&DAT_10035440);
      iVar3 = GetTotalAmount0(&DAT_10035438);
      iVar4 = GetTotalAmount0(&DAT_10035450);
      iVar5 = GetTotalAmount0(&DAT_10035448);
      iVar6 = GetTotalAmount0(&DAT_100355d8);
      iVar7 = GetTotalAmount0(&DAT_10035640);
      iVar8 = GetTotalAmount0(&DAT_10035648);
      if (iVar9 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 < 0xb) {
        SetTrigg(0x3d,0);
        ShowPage(DAT_10030358);
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x3e);
    if ((uVar1 & 0xff) != 0) {
      iVar9 = GetTotalAmount0(&DAT_10035628);
      iVar2 = GetTotalAmount0(&DAT_10035638);
      iVar3 = GetTotalAmount0(&DAT_10035610);
      iVar4 = GetTotalAmount0(&DAT_10035620);
      iVar5 = GetTotalAmount0(&DAT_100355e8);
      iVar6 = GetTotalAmount0(&DAT_10035600);
      iVar7 = GetTotalAmount0(&DAT_100356d8);
      iVar8 = GetTotalAmount0(&DAT_10035630);
      if (iVar9 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 < 0x259) {
        SetTrigg(0x3e,0);
        ShowPage(DAT_10030354);
        ShowPage(DAT_1003034c);
        CreateObject0(&DAT_10035410,&DAT_10035460,&DAT_100355d0,0,&DAT_10035560,0);
        CreateObject0(&DAT_10035410,&DAT_10035460,&DAT_10035458,0,&DAT_10035530,0);
        CreateObject0(&DAT_10035410,&DAT_10035730,&DAT_100355c8,0,&DAT_10035518,0);
        AddResource(0,1,18000);
        AddResource(0,4,12000);
        AddResource(0,5,20000);
        SetStartPoint(&DAT_10035530);
        SelectUnits(&DAT_100356f8,0);
        SelectUnits(&DAT_10035700,1);
        SelSendAndKill(1,&DAT_10035558,0,0);
        SetLightSpot(&DAT_10035550,0,0);
      }
    }
  }
  uVar1 = Trigg(0x3f);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetTotalAmount0(&DAT_10035660);
    if (iVar9 != 0) {
      iVar9 = GetUnitsByNation(&DAT_10035660,1);
      if (iVar9 < 1) goto LAB_10006c41;
    }
    SetTrigg(0x3f,0);
    ShowPage(DAT_10030348);
    LooseGame();
  }
LAB_10006c41:
  uVar1 = Trigg(0x40);
  if ((uVar1 & 0xff) != 0) {
    iVar9 = GetTotalAmount0(&DAT_100356f0);
    if (iVar9 == 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x27);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x40,0);
          ShowPage(DAT_10030344);
          ShowVictory();
        }
      }
    }
  }
  uStack_8 = 0x10006d00;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
