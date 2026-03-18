#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002b0ac[] = "cav3";
char DAT_1002b0b4[] = "cav2";
char DAT_1002b0bc[] = "cav1";
char DAT_1002b0c4[] = "hus4";
char DAT_1002b0cc[] = "hus3";
char DAT_1002b0e4[] = "for4";
char DAT_1002b0ec[] = "for3";
char DAT_1002b0f4[] = "for2";
char DAT_1002b0fc[] = "for1";
char DAT_1002b104[] = "#P7";
char DAT_1002b108[] = "#P6";
char DAT_1002b10c[] = "#P4";
char DAT_1002b110[] = "#P3";
char DAT_1002b114[] = "#P5";
char DAT_1002b118[] = "#P2";
char DAT_1002b11c[] = "#P1";
long long DAT_100303e0 = 0;
long long DAT_100303e8 = 0;
long long DAT_100303f0 = 0;
long long DAT_100303f8 = 0;
long long DAT_10030400 = 0;
long long DAT_10030408 = 0;
long long DAT_10030410 = 0;
long long DAT_10030420 = 0;
long long DAT_10030428 = 0;
long long DAT_10030430 = 0;
long long DAT_10030438 = 0;
long long DAT_10030440 = 0;
long long DAT_10030448 = 0;
long long DAT_10030450 = 0;
long long DAT_10030458 = 0;
long long DAT_10030460 = 0;
long long DAT_10030468 = 0;
long long DAT_10030470 = 0;
long long DAT_10030478 = 0;
long long DAT_10030480 = 0;
long long DAT_10030488 = 0;
long long DAT_10030490 = 0;
long long DAT_10030498 = 0;
long long DAT_100304a0 = 0;
long long DAT_100304a8 = 0;
long long DAT_100304b0 = 0;
long long DAT_100304b8 = 0;
long long DAT_100304c0 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterDynGroup(&DAT_100303e8);
  RegisterUnits(&DAT_100303e0,DAT_1002b0fc);
  RegisterUnits(&DAT_100303f8,DAT_1002b0f4);
  RegisterUnits(&DAT_100303f0,DAT_1002b0ec);
  RegisterUnits(&DAT_10030408,DAT_1002b0e4);
  RegisterUnits(&DAT_10030400,"scout1");
  RegisterUnits(&DAT_10030410,"scout2");
  RegisterUnits(&DAT_10030428,DAT_1002b0cc);
  RegisterUnits(&DAT_10030420,DAT_1002b0c4);
  RegisterUnits(&DAT_100304a0,DAT_1002b0bc);
  RegisterUnits(&DAT_100304b8,DAT_1002b0b4);
  RegisterUnits(&DAT_100304c0,DAT_1002b0ac);
  RegisterUnits(&DAT_100304a8,"total");
  RegisterUnits(&DAT_100304b0,"playergrp");
  RegisterZone(&DAT_10030458,"way1a");
  RegisterZone(&DAT_10030460,"way1b");
  RegisterZone(&DAT_10030468,"way1c");
  RegisterZone(&DAT_10030470,"way1d");
  RegisterZone(&DAT_10030478,"way2a");
  RegisterZone(&DAT_10030480,"way2b");
  RegisterZone(&DAT_10030488,"way2c");
  RegisterZone(&DAT_10030490,"way2d");
  RegisterZone(&DAT_10030498,"alt1a");
  RegisterZone(&DAT_10030438,"alt1b");
  RegisterZone(&DAT_10030430,"alt1c");
  RegisterZone(&DAT_10030448,"ride1");
  RegisterZone(&DAT_10030440,"wayend");
  RegisterZone(&DAT_10030450,"alt1d");
  SetPlayerName(1,"Spaniards");
  uStack_8 = 0x100013d9;
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
    SetResource(0,3,0x4876e740);
    SetResource(0,1,0x4876e740);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,0x4876e740);
    SetResource(0,4,0x4876e740);
    SetResource(1,3,0x4876e740);
    SetResource(1,5,0x4876e740);
    SetResource(1,4,0x4876e740);
    SetResource(1,1,0x4876e740);
    ShowPage(DAT_1002b11c);
    ShowPage(DAT_1002b118);
    RunTimer(0,0x3a0);
    RunTimer(1,0xf00);
    RunTimer(2,0x3c0);
    RunTimer(5,0x385);
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    RunTimer(2,0x3c0);
    RunTimer(0,0x3a0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      SetTrigg(7,0);
      SelectUnits1(1,&DAT_100303e0,0);
      SelSendAndKill(1,&DAT_10030458,0xd3,0);
      SelectUnits1(1,&DAT_100303f8,0);
      SelSendAndKill(1,&DAT_10030460,0xd3,0);
      SelectUnits1(1,&DAT_100303f0,0);
      SelSendAndKill(1,&DAT_10030468,0xd3,0);
      SelectUnits1(1,&DAT_10030408,0);
      SelSendAndKill(1,&DAT_10030470,0xd3,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits1(1,&DAT_100303e0,0);
      SelSendAndKill(1,&DAT_10030458,0xd3,0);
      SelectUnits1(1,&DAT_100303f8,0);
      SelSendAndKill(1,&DAT_10030460,0xd3,0);
      SelectUnits1(1,&DAT_100303f0,0);
      SelSendAndKill(1,&DAT_10030468,0xd3,0);
      SelectUnits1(1,&DAT_10030408,0);
      SelSendAndKill(1,&DAT_10030470,0xd3,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030460,&DAT_100303f8);
    iVar2 = GetTotalAmount0(&DAT_100303f8);
    if (iVar3 == iVar2) {
      SetTrigg(7,0);
      SetTrigg(3,0);
      SetTrigg(4,0);
      SetTrigg(0x13,0);
      ShowPage(DAT_1002b114);
      SelectUnits1(1,&DAT_100303e0,0);
      SelSendAndKill(1,&DAT_10030478,0xd3,0);
      SelectUnits1(1,&DAT_100303f8,0);
      SelSendAndKill(1,&DAT_10030480,0xd3,0);
      SelectUnits1(1,&DAT_100303f0,0);
      SelSendAndKill(1,&DAT_10030488,0xd3,0);
      SelectUnits1(1,&DAT_10030408,0);
      SelSendAndKill(1,&DAT_10030490,0xd3,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits1(1,&DAT_100303e0,0);
      SelSendAndKill(1,&DAT_10030478,0xd3,0);
      SelectUnits1(1,&DAT_100303f8,0);
      SelSendAndKill(1,&DAT_10030480,0xd3,0);
      SelectUnits1(1,&DAT_100303f0,0);
      SelSendAndKill(1,&DAT_10030488,0xd3,0);
      SelectUnits1(1,&DAT_10030408,0);
      SelSendAndKill(1,&DAT_10030490,0xd3,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030478,&DAT_100303e0);
    if (iVar3 < 1) {
      iVar3 = GetUnitsAmount1(&DAT_10030480,&DAT_100303f8);
      if (iVar3 < 1) {
        iVar3 = GetUnitsAmount1(&DAT_10030488,&DAT_100303f0);
        if (iVar3 < 1) {
          iVar3 = GetUnitsAmount1(&DAT_10030490,&DAT_10030408);
          if (iVar3 < 1) goto LAB_10001e2a;
        }
      }
    }
    SetTrigg(4,0);
    SetTrigg(5,0);
    SetTrigg(6,0);
    SelectUnits1(1,&DAT_100303e0,0);
    SelSendAndKill(1,&DAT_10030440,0xd3,0);
    SelectUnits1(1,&DAT_100303f8,0);
    SelSendAndKill(1,&DAT_10030440,0xd3,0);
    SelectUnits1(1,&DAT_100303f0,0);
    SelSendAndKill(1,&DAT_10030440,0xd3,0);
    SelectUnits1(1,&DAT_10030408,0);
    SelSendAndKill(1,&DAT_10030440,0xd3,0);
  }
LAB_10001e2a:
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits1(1,&DAT_100303e0,0);
      SelSendAndKill(1,&DAT_10030440,0xd3,0);
      SelectUnits1(1,&DAT_100303f8,0);
      SelSendAndKill(1,&DAT_10030440,0xd3,0);
      SelectUnits1(1,&DAT_100303f0,0);
      SelSendAndKill(1,&DAT_10030440,0xd3,0);
      SelectUnits1(1,&DAT_10030408,0);
      SelSendAndKill(1,&DAT_10030440,0xd3,0);
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_100304a8);
    if (0x389 < iVar3) {
      iVar3 = GetResource(1,5);
      if (iVar3 == 0x4876e740) {
        iVar3 = GetTotalAmount0(&DAT_10030400);
        if (4 < iVar3) {
          iVar3 = GetTotalAmount0(&DAT_10030410);
          if (4 < iVar3) goto LAB_1000202f;
        }
      }
    }
    SetTrigg(0x13,0);
    SetTrigg(8,0);
    ShowPage(DAT_1002b110);
  }
LAB_1000202f:
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(10,0);
      SetTrigg(2,0);
      SetTrigg(7,0);
      SetTrigg(3,0);
      SetTrigg(4,0);
      SetTrigg(5,0);
      SetTrigg(6,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0xb,0);
      SelectUnits1(1,&DAT_100303e0,0);
      SelSendAndKill(1,&DAT_10030498,0xd3,0);
      SelectUnits1(1,&DAT_100303f8,0);
      SelSendAndKill(1,&DAT_10030438,0xd3,0);
      SelectUnits1(1,&DAT_100303f0,0);
      SelSendAndKill(1,&DAT_10030430,0xd3,0);
      SelectUnits1(1,&DAT_10030408,0);
      SelSendAndKill(1,&DAT_10030450,0xd3,0);
      RunTimer(3,0x3a0);
      RunTimer(4,0x3c0);
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) != 0) {
      RunTimer(3,0x3a0);
      RunTimer(4,0x3c0);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(0);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits1(1,&DAT_100303e0,0);
        SelSendAndKill(1,&DAT_10030498,0xd3,0);
        SelectUnits1(1,&DAT_100303f0,0);
        SelSendAndKill(1,&DAT_10030430,0xd3,0);
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDoneFirst(3);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits1(1,&DAT_100303f8,0);
        SelSendAndKill(1,&DAT_10030438,0xd3,0);
        SelectUnits1(1,&DAT_10030408,0);
        SelSendAndKill(1,&DAT_10030450,0xd3,0);
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030498,&DAT_100303e0);
    if (iVar3 < 1) {
      iVar3 = GetUnitsAmount1(&DAT_10030430,&DAT_100303f0);
      if (iVar3 < 1) goto LAB_100025b4;
    }
    SetTrigg(0xf,0);
    SetTrigg(0x10,0);
    SetTrigg(0xc,0);
    SelectUnits1(1,&DAT_100303e0,0);
    SelSendAndKill(1,&DAT_10030440,0xd3,0);
    SelectUnits1(1,&DAT_100303f0,0);
    SelSendAndKill(1,&DAT_10030440,0xd3,0);
  }
LAB_100025b4:
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(0);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits1(1,&DAT_100303e0,0);
      SelSendAndKill(1,&DAT_10030440,0xd3,0);
      SelectUnits1(1,&DAT_100303f0,0);
      SelSendAndKill(1,&DAT_10030440,0xd3,0);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030438,&DAT_100303f8);
    if (iVar3 < 1) {
      iVar3 = GetUnitsAmount1(&DAT_10030450,&DAT_10030408);
      if (iVar3 < 1) goto LAB_10002785;
    }
    SetTrigg(0x11,0);
    SetTrigg(0x12,0);
    SetTrigg(0xd,0);
    SelectUnits1(1,&DAT_100303f8,0);
    SelSendAndKill(1,&DAT_10030440,0xd3,0);
    SelectUnits1(1,&DAT_10030408,0);
    SelSendAndKill(1,&DAT_10030440,0xd3,0);
  }
LAB_10002785:
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDoneFirst(3);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits1(1,&DAT_100303f8,0);
      SelSendAndKill(1,&DAT_10030440,0xd3,0);
      SelectUnits1(1,&DAT_10030408,0);
      SelSendAndKill(1,&DAT_10030440,0xd3,0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_100304b0);
    if (iVar3 == 0) {
      ShowPage(DAT_1002b10c);
      LooseGame();
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x14,0);
      SelectUnits1(1,&DAT_10030400,0);
      SelSendAndKill(1,&DAT_10030498,0,0);
      SelectUnits1(1,&DAT_10030410,0);
      SelSendAndKill(1,&DAT_10030438,0xc0,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x15,0);
      SelectUnits1(1,&DAT_100304a0,0);
      SelectUnits1(1,&DAT_10030428,1);
      SelSendAndKill(1,&DAT_10030498,0xe0,0);
      SelectUnits1(1,&DAT_100304b8,0);
      SelectUnits1(1,&DAT_10030420,1);
      SelSendAndKill(1,&DAT_10030438,0xc0,0);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030498,&DAT_100304a0);
    iVar2 = GetTotalAmount0(&DAT_100304a0);
    if (iVar3 == iVar2) {
      SetTrigg(0x16,0);
      SelectUnits1(1,&DAT_100304a0,0);
      SelectUnits1(1,&DAT_10030428,1);
      SelSendAndKill(1,&DAT_10030440,0xe0,0);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030438,&DAT_100304b8);
    iVar2 = GetTotalAmount0(&DAT_100304b8);
    if (iVar3 == iVar2) {
      SetTrigg(0x17,0);
      SelectUnits1(1,&DAT_100304b8,0);
      SelectUnits1(1,&DAT_10030420,1);
      SelSendAndKill(1,&DAT_10030440,0xe0,0);
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_100304a8);
    if (iVar3 < 300) {
      SetTrigg(0x18,0);
      SelectUnits1(1,&DAT_100304c0,0);
      SelectUnits1(1,&DAT_10030400,1);
      SelectUnits1(1,&DAT_10030410,1);
      SelSendAndKill(1,&DAT_10030440,0xe0,0);
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_100304a8);
    if (iVar3 < 0x32) {
      SetTrigg(0x19,0);
      ShowPage(DAT_1002b108);
      ShowVictory();
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030440,&DAT_100304a8);
    if (0x31 < iVar3) {
      SetTrigg(0x1a,0);
      ShowPage(DAT_1002b104);
      LooseGame();
    }
  }
  uStack_8 = 0x10002db8;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
