#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002b0f8[] = "Misc";
char DAT_1002b15c[] = "base";
char DAT_1002b17c[] = "pat3";
char DAT_1002b184[] = "pat2";
char DAT_1002b18c[] = "pat1";
char DAT_1002b270[] = "gate";
char DAT_1002b304[] = "hero";
char DAT_1002b30c[] = "fang";
char DAT_1002b314[] = "#P18";
char DAT_1002b31c[] = "#P17";
char DAT_1002b324[] = "#P16";
char DAT_1002b32c[] = "#P15";
char DAT_1002b334[] = "#P14";
char DAT_1002b33c[] = "#P13";
char DAT_1002b344[] = "#P12";
char DAT_1002b34c[] = "#P11";
char DAT_1002b354[] = "#P10";
char DAT_1002b35c[] = "#P9";
char DAT_1002b360[] = "#P8";
char DAT_1002b364[] = "#P7";
char DAT_1002b368[] = "#P6A";
char DAT_1002b370[] = "#P6";
char DAT_1002b374[] = "#P5";
char DAT_1002b378[] = "#P4";
char DAT_1002b37c[] = "#P3";
char DAT_1002b380[] = "#P2";
char DAT_1002b384[] = "#P1";
char DAT_1002b388[] = "#P0";
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
long long DAT_10030540 = 0;
long long DAT_10030548 = 0;
long long DAT_10030550 = 0;
long long DAT_10030558 = 0;
long long DAT_10030560 = 0;
long long DAT_10030568 = 0;
long long DAT_10030570 = 0;
long long DAT_10030578 = 0;
long long DAT_10030580 = 0;
long long DAT_10030588 = 0;
long long DAT_10030590 = 0;
long long DAT_10030598 = 0;
long long DAT_100305a0 = 0;
long long DAT_100305a8 = 0;
long long DAT_100305b0 = 0;
long long DAT_100305b8 = 0;
long long DAT_100305c0 = 0;
long long DAT_100305c8 = 0;
long long DAT_100305d0 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_10030400,DAT_1002b30c);
  RegisterUnits(&DAT_10030410,DAT_1002b304);
  RegisterUnits(&DAT_10030408,"peasant");
  RegisterUnits(&DAT_10030420,"northpirat");
  RegisterUnits(&DAT_10030418,"haubice");
  RegisterUnits(&DAT_10030428,"chestg2");
  RegisterUnits(&DAT_10030440,"chestg3");
  RegisterUnits(&DAT_10030438,"chest1");
  RegisterUnits(&DAT_10030518,"chest2");
  RegisterUnits(&DAT_10030580,"chest3");
  RegisterUnits(&DAT_10030588,"beachcav");
  RegisterUnits(&DAT_10030568,"beachsch");
  RegisterUnits(&DAT_10030578,"campguards");
  RegisterUnits(&DAT_10030550,"campbuild");
  RegisterUnits(&DAT_10030560,DAT_1002b270);
  RegisterUnits(&DAT_10030528,"pirateform");
  RegisterUnits(&DAT_10030540,"pirateofficer");
  RegisterUnits(&DAT_100305b8,"piratdip");
  RegisterUnits(&DAT_10030570,"battleship1");
  RegisterUnits(&DAT_10030548,"battleship2");
  RegisterUnits(&DAT_10030558,"battleship3");
  RegisterUnits(&DAT_10030520,"englishattack");
  RegisterUnits(&DAT_10030538,"ldead");
  RegisterUnits(&DAT_100305b0,"transeng");
  RegisterUnits(&DAT_100305c8,"pirateattack");
  RegisterUnits(&DAT_10030598,"transpirat");
  RegisterUnits(&DAT_100305a0,DAT_1002b270);
  RegisterUnits(&DAT_100303f0,DAT_1002b270);
  RegisterUnits(&DAT_10030590,"playerunits");
  RegisterUnits(&DAT_10030530,"pltrans");
  RegisterZone(&DAT_100304b0,"open1");
  RegisterZone(&DAT_100304b8,"open2");
  RegisterZone(&DAT_100304c0,"open3");
  RegisterZone(&DAT_100304c8,"gohere");
  RegisterZone(&DAT_100304d0,DAT_1002b18c);
  RegisterZone(&DAT_100304d8,DAT_1002b184);
  RegisterZone(&DAT_100304e0,DAT_1002b17c);
  RegisterZone(&DAT_100304e8,"landeng");
  RegisterZone(&DAT_100304f0,"landpirat");
  RegisterZone(&DAT_10030470,DAT_1002b15c);
  RegisterZone(&DAT_10030468,"arrival");
  RegisterZone(&DAT_10030488,"arrival2");
  RegisterZone(&DAT_10030478,"landed");
  RegisterZone(&DAT_10030498,"vicatk");
  RegisterZone(&DAT_10030490,"vicatk2");
  RegisterZone(&DAT_100304a8,"loadeng");
  RegisterZone(&DAT_100304a0,"loadpir");
  ChangeFriends(2,0xff);
  ChangeFriends(1,0x22);
  SetPlayerName(1,"King\'s Forces");
  SetPlayerName(2,DAT_1002b0f8);
  SetPlayerName(5,"Pirates");
  RegisterFormation(&DAT_10030450,"#ALONE");
  RegisterFormation(&DAT_10030458,"#SHIPS3");
  RegisterUnitType(&DAT_100303e0,"SUNDUK1O(UN)");
  RegisterUnitType(&DAT_10030500,"Victoria(en)");
  RegisterUnitType(&DAT_10030508,"Linkor(en)");
  RegisterUnitType(&DAT_100303e8,"Rinok(en)");
  RegisterUnitType(&DAT_10030510,"akademia_BR(en)");
  RegisterUnitType(&DAT_10030480,"Dip_korpus_BR(en)");
  RegisterUnitType(&DAT_100303f8,"PorE(en)");
  RegisterUnitType(&DAT_10030460,"Center_British(en)");
  RegisterUnitType(&DAT_100304f8,"shahta(en)");
  RegisterUnitType(&DAT_100305d0,"shahta_FE(en)");
  RegisterUnitType(&DAT_10030448,"shahta_UG(en)");
  uStack_8 = 0x100017bf;
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
    SetResource(0,3,30000);
    SetResource(0,1,1000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,500);
    SetResource(0,4,500);
    SetResource(1,3,0x4876e740);
    SetResource(1,5,0x4876e740);
    SetResource(1,4,0x4876e740);
    SetResource(1,1,0x4876e740);
    SetResource(5,3,0x4876e740);
    SetResource(5,5,0x4876e740);
    SetResource(5,4,0x4876e740);
    SetResource(5,1,0x4876e740);
    ShowPage(DAT_1002b388);
    ShowPage(DAT_1002b384);
    SetLightSpot(&DAT_100304c8,0,0);
    SetStartPoint(&DAT_100304c8);
    SelectUnits(&DAT_10030418,0);
    SelectUnits(&DAT_10030528,1);
    SetStandGround(5,1);
    SelectUnits(&DAT_10030570,0);
    Patrol(1,&DAT_100304d0,0);
    SelectUnits(&DAT_10030548,0);
    Patrol(1,&DAT_100304d8,0);
    SelectUnits(&DAT_10030558,0);
    Patrol(1,&DAT_100304e0,0);
    SelectUnits(&DAT_100305b0,0);
    SelSendTo(1,&DAT_100304a8,0x80,0);
    SelectUnits(&DAT_10030598,0);
    SelSendTo(5,&DAT_100304a0,0x9e,0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030478,&DAT_10030590);
    if (0 < iVar2) {
      SetTrigg(2,0);
      ShowPage(DAT_1002b380);
      ClearLightSpot(0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030470,0);
    if (0 < iVar2) {
      SetTrigg(2,0);
      SetTrigg(5,0);
      ClearLightSpot(0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030578);
    if (iVar2 < 0x32) {
      iVar2 = GetUnitsAmount0(&DAT_10030470,0);
      if (0 < iVar2) {
        SetTrigg(3,0);
        ShowPage(DAT_1002b37c);
        AttackEnemyInZone(&DAT_10030578,&DAT_10030470,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030578);
    if (iVar2 == 0) {
      SetTrigg(4,0);
      ShowPage(DAT_1002b378);
      AddResource(0,0,5000);
      AddResource(0,2,5000);
      AddResource(0,5,1000);
      AddResource(0,4,1000);
      AddResource(0,1,500);
      SelectUnits(&DAT_10030550,0);
      SelDie(5);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10030460,0);
    if (0 < iVar2) {
      SetTrigg(6,0);
      SetTrigg(0x16,0);
      ShowPage(DAT_1002b374);
      RunTimer(1,0x780);
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    ShowPage(DAT_1002b370);
    ShowPage(DAT_1002b368);
    RunTimer(2,48000);
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x11,0);
    ShowPage(DAT_1002b364);
    SetLightSpot(&DAT_10030488,2,2);
    SetStartPoint(&DAT_10030488);
    CreateObject0(&DAT_100305a8,&DAT_10030450,&DAT_10030500,1,&DAT_10030468,0);
    CreateObject0(&DAT_100305c0,&DAT_10030458,&DAT_10030508,1,&DAT_10030488,0x20);
    SelectUnits(&DAT_100305a8,0);
    SaveSelectedUnits(1,&DAT_100305a0,0);
    SelSendAndKill(1,&DAT_10030498,0x40,0);
    SelectUnits(&DAT_100305c0,0);
    SaveSelectedUnits(1,&DAT_100303f0,0);
    SelSendAndKill(1,&DAT_10030498,0x40,0);
    RunTimer(0x12,600);
  }
  uVar1 = TimerDoneFirst(0x12);
  if ((uVar1 & 0xff) != 0) {
    ClearLightSpot(2);
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030498,&DAT_100305a0);
    if (0 < iVar2) {
      SetTrigg(7,0);
      SelectUnits(&DAT_100305a0,0);
      SelectUnits(&DAT_100303f0,1);
      Patrol(1,&DAT_10030490,1);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10030480,0);
    if (0 < iVar2) {
      SetTrigg(8,0);
      SelectUnits(&DAT_100305c8,0);
      SelectUnits(&DAT_10030598,1);
      SendUnitsToTransport(5);
      RunTimer(3,0x17c);
    }
  }
  uVar1 = TimerDoneFirst(3);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10030598,0);
    SelSendTo(5,&DAT_100304f0,0,0);
    RunTimer(5,0x1f);
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100304f0,&DAT_10030598);
    if (0 < iVar2) {
      uVar1 = TimerDone(5);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10030598,0);
        uVar1 = CheckLeaveAbility(5);
        if ((uVar1 & 0xff) == 0) {
          RunTimer(5,0x1f);
        }
        else {
          SetTrigg(9,0);
          PushAllUnitsAway(5);
          RunTimer(4,0x4e2);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(4);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_100305c8,0);
    SelSendAndKill(5,&DAT_10030470,0,0);
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_100303f8,0);
    if (0 < iVar2) {
      SetTrigg(10,0);
      SelectUnits(&DAT_10030520,0);
      SelectUnits(&DAT_100305b0,1);
      SendUnitsToTransport(1);
      RunTimer(6,0x2f8);
    }
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_100305b0,0);
    SelSendTo(1,&DAT_100304e8,0xc0,0);
    RunTimer(7,0x1f);
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100304e8,&DAT_100305b0);
    if (0 < iVar2) {
      uVar1 = TimerDone(7);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100305b0,0);
        uVar1 = CheckLeaveAbility(1);
        if ((uVar1 & 0xff) == 0) {
          RunTimer(7,0x1f);
        }
        else {
          SetTrigg(0xb,0);
          PushAllUnitsAway(1);
          RunTimer(8,0x4e2);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(8);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10030520,0);
    SelSendAndKill(1,&DAT_10030470,0,0);
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100304b0,0);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_100304b0,5);
      if (iVar2 == 0) {
        SetTrigg(0xc,0);
        ShowPage(DAT_1002b360);
        AddResource(0,1,5000);
        SelectUnits(&DAT_10030438,0);
        SelErase(2);
        CreateObject0(&DAT_10030430,&DAT_10030450,&DAT_100303e0,2,&DAT_100304b0,0);
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100304b8,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_10030428);
      if (iVar2 == 0) {
        SetTrigg(0xd,0);
        ShowPage(DAT_1002b35c);
        AddResource(0,5,11000);
        SelectUnits(&DAT_10030518,0);
        SelErase(2);
        CreateObject0(&DAT_10030430,&DAT_10030450,&DAT_100303e0,2,&DAT_100304b8,0);
      }
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100304c0,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_10030440);
      if (iVar2 == 0) {
        SetTrigg(0xe,0);
        ShowPage(DAT_1002b354);
        AddResource(0,1,12000);
        SelectUnits(&DAT_10030580,0);
        SelErase(2);
        CreateObject0(&DAT_10030430,&DAT_10030450,&DAT_100303e0,2,&DAT_100304c0,0);
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10030460,0);
    if (0 < iVar2) {
      iVar2 = GetReadyAmount(&DAT_10030510,0);
      if (0 < iVar2) {
        iVar2 = GetReadyAmount(&DAT_10030480,0);
        if (0 < iVar2) {
          iVar2 = GetReadyAmount(&DAT_100303e8,0);
          if (0 < iVar2) {
            iVar2 = GetReadyAmount(&DAT_100303f8,0);
            if (0 < iVar2) {
              iVar2 = GetReadyAmount(&DAT_100304f8,0);
              if (0 < iVar2) {
                iVar2 = GetReadyAmount(&DAT_100305d0,0);
                if (0 < iVar2) {
                  iVar2 = GetReadyAmount(&DAT_10030448,0);
                  if (0 < iVar2) {
                    SetTrigg(0xf,0);
                    ShowPage(DAT_1002b34c);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x11);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetTotalAmount0(&DAT_100305a0);
      if (iVar2 == 0) {
        SetTrigg(0x10,0);
        RunTimer(10,0x5a);
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      ShowPage(DAT_1002b344);
      SetTrigg(0x12,0);
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetReadyAmount(&DAT_10030460,0);
      if (0 < iVar2) {
        iVar2 = GetReadyAmount(&DAT_10030510,0);
        if (0 < iVar2) {
          iVar2 = GetReadyAmount(&DAT_10030480,0);
          if (0 < iVar2) {
            iVar2 = GetReadyAmount(&DAT_100303e8,0);
            if (0 < iVar2) {
              iVar2 = GetReadyAmount(&DAT_100303f8,0);
              if (0 < iVar2) {
                iVar2 = GetReadyAmount(&DAT_100304f8,0);
                if (0 < iVar2) {
                  iVar2 = GetReadyAmount(&DAT_100305d0,0);
                  if (0 < iVar2) {
                    iVar2 = GetReadyAmount(&DAT_10030448,0);
                    if (0 < iVar2) {
                      SetTrigg(0x13,0);
                      ShowPage(DAT_1002b33c);
                      ShowVictory();
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
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030410);
    if (iVar2 == 0) {
      SetTrigg(0x14,0);
      ShowPage(DAT_1002b334);
      LooseGame();
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030400);
    if (iVar2 == 0) {
      SetTrigg(0x15,0);
      ShowPage(DAT_1002b32c);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030408);
    if (iVar2 == 0) {
      SetTrigg(0x16,0);
      ShowPage(DAT_1002b324);
      LooseGame();
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030420);
    if (iVar2 == 0) {
      SetTrigg(0x17,0);
      ShowPage(DAT_1002b31c);
      AddResource(0,1,3000);
      AddResource(0,4,3000);
      AddResource(0,5,5000);
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100305c8);
    if (iVar2 == 0) {
      SetTrigg(0x18,0);
      SelectUnits(&DAT_10030560,0);
      SelOpenGates(5);
      RunTimer(0x10,0x1f);
    }
  }
  uVar1 = TimerDoneFirst(0x10);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_100305b8,0);
    SelSendAndKill(5,&DAT_10030470,0xc0,0);
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100305b8);
    if (iVar2 == 0) {
      SetTrigg(0x19,0);
      SelectUnits(&DAT_10030560,0);
      SelCloseGates(5);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030540);
    if (iVar2 == 0) {
      SetTrigg(0x1a,0);
      ShowPage(DAT_1002b314);
      SelectUnits(&DAT_10030538,0);
      SelSendAndKill(5,&DAT_10030470,0x80,0);
    }
  }
  uStack_8 = 0x100032b6;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
