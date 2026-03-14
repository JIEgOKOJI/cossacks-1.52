#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002b034[] = "Z9";
char DAT_1002b038[] = "Z8";
char DAT_1002b03c[] = "Z7";
char DAT_1002b040[] = "Z6";
char DAT_1002b044[] = "Z5";
char DAT_1002b048[] = "Z4";
char DAT_1002b04c[] = "Z3";
char DAT_1002b050[] = "Z2";
char DAT_1002b054[] = "Z1";
char DAT_1002b058[] = "G15";
char DAT_1002b05c[] = "G14";
char DAT_1002b060[] = "G13D";
char DAT_1002b068[] = "G13C";
char DAT_1002b070[] = "G13B";
char DAT_1002b078[] = "G13A";
char DAT_1002b080[] = "G13";
char DAT_1002b084[] = "G12";
char DAT_1002b088[] = "G11";
char DAT_1002b08c[] = "G10";
char DAT_1002b090[] = "G9";
char DAT_1002b094[] = "G8";
char DAT_1002b098[] = "G7A";
char DAT_1002b09c[] = "G7";
char DAT_1002b0a0[] = "G6A";
char DAT_1002b0a4[] = "G6";
char DAT_1002b0a8[] = "G5A";
char DAT_1002b0ac[] = "G5";
char DAT_1002b0b0[] = "G4A";
char DAT_1002b0b4[] = "G4";
char DAT_1002b0b8[] = "G3C";
char DAT_1002b0bc[] = "G3B";
char DAT_1002b0c0[] = "G3A";
char DAT_1002b0c4[] = "G3";
char DAT_1002b0c8[] = "G2C";
char DAT_1002b0cc[] = "G2B";
char DAT_1002b0d0[] = "G2A";
char DAT_1002b0d4[] = "G2";
char DAT_1002b0d8[] = "G1";
long long DAT_100303e0 = 0;
long long DAT_100303e8 = 0;
long long DAT_100303f0 = 0;
long long DAT_100303f8 = 0;
long long DAT_10030400 = 0;
long long DAT_10030408 = 0;
long long DAT_10030410 = 0;
long long DAT_10030418 = 0;
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
long long DAT_100304c8 = 0;
long long DAT_100304d0 = 0;
long long DAT_100304d8 = 0;
long long DAT_100304e0 = 0;
long long DAT_100304e8 = 0;
long long DAT_100304f0 = 0;
long long DAT_100304f8 = 0;
long long DAT_10030500 = 0;
long long DAT_10030508 = 0;
long long DAT_10030510 = 0;
long long DAT_10030518 = 0;
long long DAT_10030520 = 0;
long long DAT_10030528 = 0;
long long DAT_10030530 = 0;
long long DAT_10030538 = 0;

/* Forward declarations */
void FUN_10003740(int param_1);


void __cdecl FUN_10003740(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount0(param_1);
  uStack_8 = 0x1000377b;
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_100303e0,DAT_1002b0d8);
  RegisterUnits(&DAT_100303e8,DAT_1002b0d4);
  RegisterUnits(&DAT_10030468,DAT_1002b0d0);
  RegisterUnits(&DAT_10030478,DAT_1002b0cc);
  RegisterUnits(&DAT_10030488,DAT_1002b0c8);
  RegisterUnits(&DAT_100303f0,DAT_1002b0c4);
  RegisterUnits(&DAT_100304a0,DAT_1002b0c0);
  RegisterUnits(&DAT_100304b0,DAT_1002b0bc);
  RegisterUnits(&DAT_100304c0,DAT_1002b0b8);
  RegisterUnits(&DAT_100303f8,DAT_1002b0b4);
  RegisterUnits(&DAT_100304d8,DAT_1002b0b0);
  RegisterUnits(&DAT_10030400,DAT_1002b0ac);
  RegisterUnits(&DAT_100304e0,DAT_1002b0a8);
  RegisterUnits(&DAT_10030408,DAT_1002b0a4);
  RegisterUnits(&DAT_100304e8,DAT_1002b0a0);
  RegisterUnits(&DAT_10030410,DAT_1002b09c);
  RegisterUnits(&DAT_100304f0,DAT_1002b098);
  RegisterUnits(&DAT_10030418,DAT_1002b094);
  RegisterUnits(&DAT_10030420,DAT_1002b090);
  RegisterUnits(&DAT_10030430,DAT_1002b08c);
  RegisterUnits(&DAT_10030438,DAT_1002b088);
  RegisterUnits(&DAT_10030440,DAT_1002b084);
  RegisterUnits(&DAT_10030448,DAT_1002b080);
  RegisterUnits(&DAT_10030500,DAT_1002b078);
  RegisterUnits(&DAT_10030508,DAT_1002b070);
  RegisterUnits(&DAT_10030510,DAT_1002b068);
  RegisterUnits(&DAT_10030518,DAT_1002b060);
  RegisterUnits(&DAT_10030450,DAT_1002b05c);
  RegisterUnits(&DAT_10030458,DAT_1002b058);
  RegisterZone(&DAT_10030460,DAT_1002b054);
  RegisterZone(&DAT_10030470,DAT_1002b050);
  RegisterZone(&DAT_10030480,DAT_1002b04c);
  RegisterZone(&DAT_10030490,DAT_1002b048);
  RegisterZone(&DAT_10030498,DAT_1002b044);
  RegisterZone(&DAT_100304a8,DAT_1002b040);
  RegisterZone(&DAT_100304b8,DAT_1002b03c);
  RegisterZone(&DAT_100304c8,DAT_1002b038);
  RegisterZone(&DAT_100304d0,DAT_1002b034);
  RegisterDynGroup(&DAT_10030428);
  RegisterVar(&DAT_10030520,8);
  RegisterVar(&DAT_10030528,8);
  RegisterVar(&DAT_10030530,8);
  RegisterVar(&DAT_10030538,8);
  RegisterUnitType(&DAT_100304f8,"Krestian_Turki(AL)");
  EnableUnit(0,&DAT_100304f8,0);
  uStack_8 = 0x1000158f;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    ShowPage("#PAGE0");
    SetResource(1,3,9000000);
    SetResource(1,1,9000000);
    SetResource(1,0,9000000);
    SetResource(1,2,9000000);
    SetResource(1,5,9000000);
    SetResource(1,4,9000000);
    iVar2 = GetDiff(0);
    SetResource(0,3,iVar2 * -5000 + 60000);
    iVar2 = GetDiff(0);
    SetResource(0,1,iVar2 * -5000 + 30000);
    iVar2 = GetDiff(0);
    SetResource(0,0,iVar2 * -5000 + 40000);
    SetResource(0,2,0);
    iVar2 = GetDiff(0);
    SetResource(0,5,iVar2 * -5000 + 40000);
    iVar2 = GetDiff(0);
    SetResource(0,4,iVar2 * -5000 + 40000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SelectUnits(&DAT_10030458,0);
      SelErase(1);
      SetResource(0,3,2000000);
      SetResource(0,1,200000);
      SetResource(0,0,200000);
      SetResource(0,2,0);
      SetResource(0,5,200000);
      SetResource(0,4,200000);
      InitialUpgrade(DAT_1002b0d8,"KUZ02AL");
      ShowPage("#OTST1");
    }
    CreateZoneNearGroup(&DAT_10030520,&DAT_100304d0,&DAT_100303e8,400);
    CreateZoneNearGroup(&DAT_10030528,&DAT_100304d0,&DAT_100303f0,400);
    CreateZoneNearGroup(&DAT_10030530,&DAT_100304d0,&DAT_10030408,400);
    CreateZoneNearGroup(&DAT_10030538,&DAT_100304d0,&DAT_10030410,400);
    RunTimer(1,100);
    SelectUnits(&DAT_10030448,0);
    SelSendAndKill(1,&DAT_10030498,0,0);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_100303e8);
    if (0 < iVar2) {
      SetTrigg(1,0);
      SelectUnits1(1,&DAT_100303e8,0);
      SelSendAndKill(1,&DAT_10030470,0,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030470,&DAT_100303e8);
    if (0 < iVar2) {
      SetTrigg(2,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_100303e8);
    if (iVar2 < 1) goto LAB_10001c59;
    FUN_10003740(&DAT_10030478);
    if (iVar2 < 1) goto LAB_10001c59;
    SelectUnits(&DAT_100303e8,0);
    SelAttackGroup(1,&DAT_10030478);
  }
  else {
LAB_10001c59:
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      FUN_10003740(&DAT_100303e8);
      if (0 < iVar2) {
        FUN_10003740(&DAT_10030488);
        if (0 < iVar2) {
          SelectUnits(&DAT_100303e8,0);
          SelAttackGroup(1,&DAT_10030488);
        }
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_100303e8);
    if (0 < iVar2) {
      FUN_10003740(&DAT_10030478);
      if (iVar2 == 0) {
        FUN_10003740(&DAT_10030488);
        if (iVar2 == 0) {
          SetTrigg(3,0);
          SelectUnits1(1,&DAT_100303e8,0);
          SelSendAndKill(1,&DAT_10030490,0,0);
        }
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030490,&DAT_100303e8);
      if (0 < iVar2) {
        SetTrigg(4,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_100303e8);
    if (0 < iVar2) {
      FUN_10003740(&DAT_100303f8);
      if (0 < iVar2) {
        SelectUnits(&DAT_100303e8,0);
        SelAttackGroup(1,&DAT_100303f8);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_100303f0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      SelectUnits1(1,&DAT_100303f0,0);
      SelSendAndKill(1,&DAT_10030480,0,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030480,&DAT_100303f0);
    if (0 < iVar2) {
      SetTrigg(6,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_100303f0);
    if (iVar2 < 1) goto LAB_10001f8f;
    FUN_10003740(&DAT_100304b0);
    if (iVar2 < 1) goto LAB_10001f8f;
    SelectUnits(&DAT_100303f0,0);
    SelAttackGroup(1,&DAT_100304b0);
  }
  else {
LAB_10001f8f:
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) == 0) {
      FUN_10003740(&DAT_100303f0);
      if (0 < iVar2) {
        FUN_10003740(&DAT_100304c0);
        if (0 < iVar2) {
          SelectUnits(&DAT_100303f0,0);
          SelAttackGroup(1,&DAT_100304c0);
        }
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_100303f0);
    if (0 < iVar2) {
      FUN_10003740(&DAT_100304b0);
      if (iVar2 == 0) {
        FUN_10003740(&DAT_100304c0);
        if (iVar2 == 0) {
          SetTrigg(7,0);
          SelectUnits1(1,&DAT_100303f0,0);
          SelSendAndKill(1,&DAT_10030490,0,0);
        }
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030490,&DAT_100303f0);
      if (0 < iVar2) {
        SetTrigg(8,0);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_100303f0);
    if (0 < iVar2) {
      FUN_10003740(&DAT_100303f8);
      if (0 < iVar2) {
        SelectUnits(&DAT_100303f0,0);
        SelAttackGroup(1,&DAT_100303f8);
      }
    }
  }
  uVar1 = TimerDone(1);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_100303e8);
    if (0 < iVar2) {
      CreateZoneNearGroup(&DAT_10030520,&DAT_100304d0,&DAT_100303e8,400);
      iVar2 = GetUnitsAmount1(&DAT_10030520,&DAT_10030468);
      if (iVar2 < 0x1e) {
        SelectUnits(&DAT_10030468,0);
        SelSendAndKill(1,&DAT_10030520,0,0);
      }
    }
    FUN_10003740(&DAT_100303f0);
    if (0 < iVar2) {
      CreateZoneNearGroup(&DAT_10030528,&DAT_100304d0,&DAT_100303f0,400);
      iVar2 = GetUnitsAmount1(&DAT_10030528,&DAT_100304a0);
      if (iVar2 < 0x1e) {
        SelectUnits(&DAT_100304a0,0);
        SelSendAndKill(1,&DAT_10030528,0,0);
      }
    }
    FUN_10003740(&DAT_10030408);
    if (0 < iVar2) {
      CreateZoneNearGroup(&DAT_10030530,&DAT_100304d0,&DAT_10030408,400);
      iVar2 = GetUnitsAmount1(&DAT_10030530,&DAT_100304e8);
      if (iVar2 < 0x1e) {
        SelectUnits(&DAT_100304e8,0);
        SelSendAndKill(1,&DAT_10030530,0,0);
      }
    }
    FUN_10003740(&DAT_10030410);
    if (0 < iVar2) {
      CreateZoneNearGroup(&DAT_10030538,&DAT_100304d0,&DAT_10030410,400);
      iVar2 = GetUnitsAmount1(&DAT_10030538,&DAT_100304f0);
      if (iVar2 < 0x1e) {
        SelectUnits(&DAT_100304f0,0);
        SelSendAndKill(1,&DAT_10030538,0,0);
      }
    }
    RunTimer(1,0x32);
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_100303f8);
    if (iVar2 == 0) {
      SetTrigg(9,0);
      SaveSelectedUnits(0,&DAT_10030428,0);
      ClearSelection(0);
      SelectUnits(&DAT_100304d8,0);
      SelDie(0);
      SelectUnits(&DAT_10030428,0);
      ShowPage("#PAGE1");
      SelectUnits(&DAT_10030440,0);
      SelSendAndKill(1,&DAT_10030460,0,0);
    }
  }
  FUN_10003740(&DAT_10030400);
  if (0 < iVar2) {
    FUN_10003740(&DAT_100304e0);
    if (0 < iVar2) {
      SelectUnits(&DAT_10030400,0);
      SelAttackGroup(1,&DAT_100304e0);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsByNation(&DAT_100303e8,1);
    if (iVar2 == 0) {
LAB_100025b4:
      SetTrigg(10,0);
      SelectUnits(&DAT_10030408,0);
      SelSendAndKill(1,&DAT_10030490,0,0);
    }
    else {
      FUN_10003740(&DAT_10030478);
      if (iVar2 == 0) {
        FUN_10003740(&DAT_10030488);
        if (iVar2 == 0) goto LAB_100025b4;
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030490,&DAT_10030408);
    if (0 < iVar2) {
      SetTrigg(0xb,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_100303f8);
    if (0 < iVar2) {
      iVar2 = GetUnitsByNation(&DAT_10030408,1);
      if (0 < iVar2) {
        SelectUnits(&DAT_10030408,0);
        SelAttackGroup(1,&DAT_100303f8);
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) == 0) goto LAB_1000277c;
  iVar2 = GetUnitsByNation(&DAT_100303f0,1);
  if (iVar2 != 0) {
    FUN_10003740(&DAT_100304b0);
    if (iVar2 != 0) goto LAB_1000277c;
    FUN_10003740(&DAT_100304c0);
    if (iVar2 != 0) goto LAB_1000277c;
  }
  SetTrigg(0xc,0);
  SelectUnits(&DAT_10030410,0);
  SelSendAndKill(1,&DAT_10030490,0,0);
LAB_1000277c:
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030490,&DAT_10030410);
    if (0 < iVar2) {
      SetTrigg(0xd,0);
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_100303f8);
    if (0 < iVar2) {
      iVar2 = GetUnitsByNation(&DAT_10030410,1);
      if (0 < iVar2) {
        SelectUnits(&DAT_10030410,0);
        SelAttackGroup(1,&DAT_100303f8);
      }
    }
  }
  iVar2 = GetUnitsByNation(&DAT_10030430,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10030430,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_10030438,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10030428,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10030438,0);
    SelDie(0);
    SelectUnits(&DAT_10030428,0);
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_100303e0);
    if (iVar2 == 0) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE2");
      LooseGame();
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsByNation(&DAT_10030438,1);
    if (iVar2 == 0) {
      FUN_10003740(&DAT_10030448);
      if (iVar2 == 0) {
        SetTrigg(0xf,0);
        FUN_10003740(&DAT_10030420);
        if (iVar2 == 0x7f) {
          ShowPage("#PAGE3");
          ShowVictory();
        }
        else {
          ShowPage("#PAGE4");
          SelectUnits(&DAT_10030440,0);
          SelSendAndKill(1,&DAT_10030460,0,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_10030440);
    if (iVar2 < 0x14) {
      SetTrigg(0x10,0);
      ShowPage("#PAGE5");
      ShowVictory();
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030498,&DAT_10030448);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_10030498,0);
      if (iVar2 == 0) {
        SetTrigg(0x11,0);
      }
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_10030500);
    if (0 < iVar2) {
      FUN_10003740(&DAT_10030448);
      if (0 < iVar2) {
        SelectUnits(&DAT_10030448,0);
        SelAttackGroup(1,&DAT_10030500);
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_10030500);
    if (iVar2 == 0) {
      SetTrigg(0x12,0);
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_10030450);
    if (0 < iVar2) {
      FUN_10003740(&DAT_10030448);
      if (0 < iVar2) {
        SelectUnits(&DAT_10030448,0);
        SelAttackGroup(1,&DAT_10030450);
      }
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_10030450);
    if (iVar2 == 0) {
      SetTrigg(0x13,0);
      SelectUnits(&DAT_10030448,0);
      SelSendAndKill(1,&DAT_100304a8,0,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100304a8,&DAT_10030448);
      if (0 < iVar2) {
        SetTrigg(0x14,0);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_10030508);
    if (0 < iVar2) {
      FUN_10003740(&DAT_10030448);
      if (0 < iVar2) {
        SelectUnits(&DAT_10030448,0);
        SelAttackGroup(1,&DAT_10030508);
      }
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_10030508);
    if (iVar2 == 0) {
      SetTrigg(0x15,0);
      SelectUnits(&DAT_10030448,0);
      SelSendAndKill(1,&DAT_100304b8,0,0);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100304b8,&DAT_10030448);
      if (0 < iVar2) {
        SetTrigg(0x16,0);
      }
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_10030510);
    if (0 < iVar2) {
      FUN_10003740(&DAT_10030448);
      if (0 < iVar2) {
        SelectUnits(&DAT_10030448,0);
        SelAttackGroup(1,&DAT_10030510);
      }
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003740(&DAT_10030510);
    if (iVar2 == 0) {
      SetTrigg(0x17,0);
      SelectUnits(&DAT_10030448,0);
      SelSendAndKill(1,&DAT_100304c8,0,0);
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100304c8,&DAT_10030448);
      if (0 < iVar2) {
        SetTrigg(0x18,0);
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) == 0) {
    FUN_10003740(&DAT_10030518);
    if (0 < iVar2) {
      FUN_10003740(&DAT_10030448);
      if (0 < iVar2) {
        SelectUnits(&DAT_10030448,0);
        SelAttackGroup(1,&DAT_10030518);
      }
    }
  }
  uStack_8 = 0x100030bd;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
