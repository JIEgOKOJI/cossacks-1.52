#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_100313e0 = 0;
long long DAT_100313e8 = 0;
long long DAT_100313f0 = 0;
long long DAT_100313f8 = 0;
long long DAT_10031400 = 0;
long long DAT_10031408 = 0;
long long DAT_10031410 = 0;
long long DAT_10031418 = 0;
long long DAT_10031420 = 0;
long long DAT_10031428 = 0;
long long DAT_10031430 = 0;
long long DAT_10031438 = 0;
long long DAT_10031440 = 0;
long long DAT_10031448 = 0;
long long DAT_10031450 = 0;
long long DAT_10031458 = 0;
long long DAT_10031460 = 0;
long long DAT_10031468 = 0;
long long DAT_10031470 = 0;
long long DAT_10031478 = 0;
long long DAT_10031480 = 0;
long long DAT_10031488 = 0;
long long DAT_10031490 = 0;
long long DAT_10031498 = 0;
long long DAT_100314a0 = 0;
long long DAT_100314a8 = 0;
long long DAT_100314b0 = 0;
long long DAT_100314b8 = 0;
long long DAT_100314c0 = 0;
long long DAT_100314c8 = 0;
long long DAT_100314d0 = 0;
long long DAT_100314d8 = 0;
long long DAT_100314e0 = 0;
long long DAT_100314e8 = 0;
long long DAT_100314f0 = 0;
long long DAT_100314f8 = 0;
long long DAT_10031500 = 0;
long long DAT_10031508 = 0;
long long DAT_10031510 = 0;
long long DAT_10031518 = 0;
long long DAT_10031520 = 0;
long long DAT_10031528 = 0;
long long DAT_10031530 = 0;
long long DAT_10031538 = 0;
long long DAT_10031540 = 0;
long long DAT_10031548 = 0;
long long DAT_10031550 = 0;
long long DAT_10031558 = 0;
long long DAT_10031560 = 0;
long long DAT_10031568 = 0;
long long DAT_10031570 = 0;
long long DAT_10031578 = 0;
long long DAT_10031580 = 0;
long long DAT_10031588 = 0;
long long DAT_10031590 = 0;
long long DAT_10031598 = 0;
long long DAT_100315a0 = 0;
long long DAT_100315a8 = 0;
long long DAT_100315b0 = 0;
long long DAT_100315b8 = 0;
long long DAT_100315c0 = 0;
long long DAT_100315c8 = 0;
long long DAT_100315d0 = 0;
long long DAT_100315d8 = 0;
long long DAT_100315e0 = 0;
long long DAT_100315e8 = 0;
long long DAT_100315f0 = 0;
long long DAT_100315f8 = 0;
long long DAT_10031600 = 0;
long long DAT_10031608 = 0;
long long DAT_10031610 = 0;
long long DAT_10031618 = 0;
long long DAT_10031620 = 0;
long long DAT_10031628 = 0;
long long DAT_10031630 = 0;
long long DAT_10031638 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_100314c0,"Zone1");
  RegisterZone(&DAT_100314c8,"Zone2");
  RegisterZone(&DAT_100314d0,"Zone3");
  RegisterZone(&DAT_100314d8,"Zone4");
  RegisterZone(&DAT_100314e0,"Zone5");
  RegisterZone(&DAT_100314f0,"Zone6");
  RegisterZone(&DAT_100314f8,"Zone7");
  RegisterZone(&DAT_10031500,"Zone8");
  RegisterZone(&DAT_10031508,"Zone9");
  RegisterZone(&DAT_10031468,"Zone10");
  RegisterZone(&DAT_10031460,"Zone11");
  RegisterZone(&DAT_10031478,"Zone12");
  RegisterZone(&DAT_10031470,"Zone13");
  RegisterZone(&DAT_10031488,"Zone14");
  RegisterZone(&DAT_10031480,"Zone15");
  RegisterZone(&DAT_10031498,"Zone16");
  RegisterZone(&DAT_10031490,"Zone17");
  RegisterZone(&DAT_100314a8,"Zone18");
  RegisterZone(&DAT_100314a0,"Zone19");
  RegisterUnits(&DAT_10031410,"Group1");
  RegisterUnits(&DAT_10031420,"Group2");
  RegisterUnits(&DAT_10031418,"Group3");
  RegisterUnits(&DAT_10031430,"Group4");
  RegisterUnits(&DAT_10031428,"Group5");
  RegisterUnits(&DAT_10031440,"Group6");
  RegisterUnits(&DAT_10031438,"Group7");
  RegisterUnits(&DAT_10031450,"Group8");
  RegisterUnits(&DAT_10031448,"Group9");
  RegisterUnits(&DAT_10031530,"Group10");
  RegisterUnits(&DAT_10031598,"Group11");
  RegisterUnits(&DAT_100315a0,"Group12");
  RegisterUnits(&DAT_10031580,"Group13");
  RegisterUnits(&DAT_10031590,"Group14");
  RegisterUnits(&DAT_10031568,"Group15");
  RegisterUnits(&DAT_10031578,"Group16");
  RegisterUnits(&DAT_10031540,"Group17");
  RegisterUnits(&DAT_10031558,"Group18");
  RegisterUpgrade(&DAT_10031458,"KUZ03RU");
  RegisterUnitType(&DAT_100314b0,"Strelec(RU)");
  RegisterUnitType(&DAT_100314b8,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10031520,"GALERA(RU)");
  RegisterUnitType(&DAT_10031528,"Kozak_loshad(UA)");
  RegisterUnitType(&DAT_10031400,"Tiagoli_kozak(RU)");
  RegisterUnitType(&DAT_10031408,"Getman(UA)");
  RegisterUnitType(&DAT_100313f0,"Tatarin(TU)");
  RegisterFormation(&DAT_10031510,"#ALONE");
  RegisterFormation(&DAT_100313f8,"#LINE3");
  RegisterFormation(&DAT_100314e8,"#SQUARE36");
  RegisterFormation(&DAT_100313e0,"#LINE72");
  RegisterFormation(&DAT_100313e8,"#LINE120");
  RegisterFormation(&DAT_10031518,"#SQUARE196");
  RegisterVar(&DAT_10031620,8);
  RegisterVar(&DAT_10031588,8);
  RegisterVar(&DAT_10031560,8);
  RegisterVar(&DAT_10031570,8);
  RegisterVar(&DAT_10031538,8);
  RegisterVar(&DAT_10031550,8);
  RegisterVar(&DAT_10031618,8);
  RegisterVar(&DAT_10031630,8);
  RegisterVar(&DAT_100315f0,8);
  RegisterVar(&DAT_10031608,8);
  RegisterVar(&DAT_100315d0,8);
  RegisterVar(&DAT_10031548,8);
  RegisterVar(&DAT_10031610,8);
  RegisterVar(&DAT_10031628,8);
  RegisterVar(&DAT_100315e8,8);
  RegisterVar(&DAT_10031600,8);
  RegisterVar(&DAT_100315c8,8);
  RegisterVar(&DAT_100315e0,8);
  RegisterVar(&DAT_100315b0,8);
  RegisterVar(&DAT_100315b8,8);
  RegisterVar(&DAT_10031638,8);
  RegisterVar(&DAT_100315f8,8);
  RegisterVar(&DAT_100315c0,8);
  RegisterVar(&DAT_100315d8,8);
  RegisterVar(&DAT_100315a8,8);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(1,"OSMAN");
  SetPlayerName(4,"ALLIES");
  uStack_8 = 0x10001918;
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
    InitialUpgrade("Group4","KUZ03RU");
    SetResource(0,3,10000);
    SetResource(0,1,10000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
    SetResource(1,3,1000000000);
    SetResource(1,1,1000000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,1000000000);
    SetResource(1,4,1000000000);
    ShowPage("#PAGE1");
    SelectUnits(&DAT_10031590,0);
    Patrol(1,&DAT_10031488,0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100314c8,0);
    if (0 < iVar2) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      AttackEnemyInZone(&DAT_10031428,&DAT_100314c8,0);
      RunTimer(2,100);
    }
  }
  uVar1 = TimerDone(2);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10031428), 0 < iVar2)) {
    iVar2 = GetUnitsAmount0(&DAT_100314c8,0);
    if (iVar2 != 0) {
      AttackEnemyInZone(&DAT_10031428,&DAT_100314c8,0);
      RunTimer(2,100);
    }
  }
  uVar1 = Trigg(3);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10031440), iVar2 == 0)) {
    SetTrigg(3,0);
    SelectUnits(&DAT_10031530,0);
    SelDie(1);
    ShowPage("#PAGE3");
    AddResource(0,1,10000);
  }
  uVar1 = Trigg(4);
  if ((((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10031598), iVar2 == 0)) &&
     (GetTotalAmount0(&DAT_100315a0), 0 < iVar2)) {
    iVar2 = GetUnitsAmount0(&DAT_10031460,0);
    if (0 < iVar2) {
      SetTrigg(4,0);
      ShowPage("#PAGE4");
      SelectUnits(&DAT_100315a0,0);
      SelChangeNation(1,0);
    }
  }
  uVar1 = Trigg(5);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10031580), 0 < iVar2)) {
    iVar2 = GetUnitsAmount0(&DAT_10031478,0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      SelectUnits(&DAT_10031580,0);
      SelChangeNation(4,0);
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100314a8,&DAT_100315d8);
      if (0 < iVar2) {
        SetTrigg(6,0);
        ShowPage("#PAGE6");
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(7);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100315d8), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_100314a8,&DAT_10031410);
      if (0 < iVar2) {
        uVar1 = Trigg(8);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(7,0);
          ShowPage("#PAGE7");
          SelectUnits(&DAT_100315d8,0);
          SelSendTo(4,&DAT_10031508,0x5a,0);
          SetLightSpot(&DAT_10031508,1,1);
        }
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x2c);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100315d8), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_10031508,&DAT_10031410);
      if (0 < iVar2) {
        uVar1 = Trigg(8);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x2c,0);
          SelectUnits(&DAT_100315d8,0);
          SelSendTo(4,&DAT_100314c8,0x5a,0);
          ClearLightSpot(1);
          SetLightSpot(&DAT_100314c8,1,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x2d);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100315d8), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_100314c8,&DAT_10031410);
      if (0 < iVar2) {
        uVar1 = Trigg(8);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x2d,0);
          SelectUnits(&DAT_100315d8,0);
          SelSendTo(4,&DAT_10031500,0xb4,0);
          ClearLightSpot(1);
          SetLightSpot(&DAT_10031500,1,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x2e);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100315d8), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_10031500,&DAT_10031410);
      if (0 < iVar2) {
        uVar1 = Trigg(8);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x2e,0);
          ShowPage("#PAGE7A");
          SelectUnits(&DAT_100315d8,0);
          SelSendTo(4,&DAT_10031468,0xb4,0);
          ClearLightSpot(1);
          SetLightSpot(&DAT_10031468,1,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x2e);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x2f);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100315d8), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_10031468,&DAT_10031410);
      if (0 < iVar2) {
        uVar1 = Trigg(8);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x2f,0);
          SelectUnits(&DAT_100315d8,0);
          SelSendTo(4,&DAT_100314f8,0,0);
          ClearLightSpot(1);
          SetLightSpot(&DAT_100314f8,1,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(8);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100315c0), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_100314f8,&DAT_10031410);
      if (0 < iVar2) {
        SetTrigg(8,0);
        ClearLightSpot(1);
        ShowPage("#PAGE8");
        ShowPage("#PAGE8A");
        ShowPage("#PAGE8B");
        SelectUnits(&DAT_100315f8,0);
        SelectUnits(&DAT_100315c0,1);
        SelectUnits(&DAT_100315d8,1);
        SelChangeNation(4,0);
      }
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100314a8,&DAT_100315a8);
      if (0 < iVar2) {
        SetTrigg(9,0);
        ShowPage("#PAGE9");
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(10);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100315a8), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_100314a8,&DAT_10031410);
      if (0 < iVar2) {
        SetTrigg(10,0);
        ShowPage("#PAGE10");
        SelectUnits(&DAT_100315a8,0);
        SelChangeNation(4,0);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10031568), iVar2 == 0)) {
    SetTrigg(0xb,0);
    ShowPage("#PAGE11");
    ShowVictory();
  }
  uVar1 = Trigg(0xc);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10031410), iVar2 == 0)) {
    SetTrigg(0xc,0);
    iVar2 = GetResource(0,3);
    if (iVar2 == 0) {
      ShowPage("#PAGE12A");
    }
    else {
      ShowPage("#PAGE12");
    }
    LooseGame();
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10031470,1);
    if (iVar2 == 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE13");
      SelectUnits(&DAT_10031448,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(0xe);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10031578), iVar2 == 0)) {
    SetTrigg(0xe,0);
    ClearSelection(0);
    SelectUnits(&DAT_10031540,0);
    SelDie(0);
    ClearSelection(1);
    SelectUnits(&DAT_10031540,0);
    SelDie(1);
    ShowPage("#PAGE14");
    AddResource(0,1,3000);
    RunTimer(10,2000);
  }
  uVar1 = TimerDoneFirst(10);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE14A");
    CreateObject0(&DAT_100315a8,&DAT_100313f8,&DAT_10031520,0,&DAT_10031498,0);
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x33);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100314a0,&DAT_10031410);
      if (0 < iVar2) {
        SetTrigg(0x33,0);
        uVar1 = Trigg(0x34);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = AskQuestion("#PAGE15D");
          if ((uVar1 & 0xff) == 0) {
            ShowPage("#PAGE15C");
          }
          else {
            iVar2 = GetResource(0,1);
            if (iVar2 < 100) {
              ShowPage("#PAGE15B");
            }
            else {
              ShowPage("#PAGE15A");
            }
            SetTrigg(0xf,0);
            SelectUnits(&DAT_10031558,0);
            AddResource(0,1,-100);
            SelChangeNation(4,0);
          }
        }
        else {
          SetTrigg(0x34,0);
          uVar1 = AskQuestion("#PAGE15");
          if ((uVar1 & 0xff) == 0) {
            ShowPage("#PAGE15C");
          }
          else {
            iVar2 = GetResource(0,1);
            if (iVar2 < 100) {
              ShowPage("#PAGE15B");
            }
            else {
              ShowPage("#PAGE15A");
            }
            SetTrigg(0xf,0);
            SelectUnits(&DAT_10031558,0);
            AddResource(0,1,-100);
            SelChangeNation(4,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x33);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100314a0,&DAT_10031410);
      if (iVar2 == 0) {
        SetTrigg(0x33,0);
      }
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetResource(0,5);
    if (3 < iVar2) {
      iVar2 = GetResource(0,4);
      if (2 < iVar2) goto LAB_10002f8d;
    }
    SetTrigg(0x11,0);
    ShowPage("#PAGE17");
  }
LAB_10002f8d:
  iVar2 = GetResource(0,5);
  if (0xd < iVar2) {
    iVar2 = GetResource(0,4);
    if (10 < iVar2) {
      SetTrigg(0x11,0);
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (2000 < iVar2) {
      SetTrigg(0x1e,0);
      SelectUnits(&DAT_10031420,0);
      SelSendAndKill(1,&DAT_100314c0,0,0);
      RunTimer(1,200);
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDone(1);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10031420), 0 < iVar2)) {
      AttackEnemyInZone(&DAT_10031420,&DAT_100314c0,0);
      RunTimer(1,100);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (0x5dc < iVar2) {
      SetTrigg(0x1f,0);
    }
  }
  uVar1 = Trigg(0x1f);
  if (((uVar1 & 0xff) == 0) && (GetTotalAmount0(&DAT_10031418), 0 < iVar2)) {
    SelectUnits(&DAT_10031418,0);
    SelAttackGroup(1,&DAT_10031450);
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (5000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x20,0);
        CreateObject0(&DAT_10031588,&DAT_100314e8,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_10031588,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314c0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (15000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x21,0);
        CreateObject0(&DAT_10031560,&DAT_100314e8,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_10031560,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314c0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (25000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x22,0);
        CreateObject0(&DAT_10031570,&DAT_100313e0,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_10031570,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314c0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (35000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x23,0);
        CreateObject0(&DAT_10031538,&DAT_100313e0,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_10031538,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314c0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (40000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x24,0);
        CreateObject0(&DAT_10031550,&DAT_100313e8,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_10031550,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314d0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x25);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100314d0,&DAT_10031550);
      if (0 < iVar2) {
        SetTrigg(0x25,0);
      }
    }
  }
  uVar1 = Trigg(0x25);
  if ((((uVar1 & 0xff) == 0) && (GetTotalAmount0(&DAT_10031550), 0 < iVar2)) &&
     (GetTotalAmount0(&DAT_10031450), 0 < iVar2)) {
    SelectUnits(&DAT_10031550,0);
    SelAttackGroup(1,&DAT_10031450);
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (50000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x26,0);
        CreateObject0(&DAT_10031618,&DAT_100313e8,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_10031618,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314c0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (60000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x27,0);
        CreateObject0(&DAT_10031630,&DAT_100313e8,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_10031630,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314c0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (65000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x28,0);
        CreateObject0(&DAT_100315f0,&DAT_10031518,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_100315f0,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314c0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (70000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x29,0);
        CreateObject0(&DAT_10031608,&DAT_10031518,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_10031608,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314c0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (75000 < iVar2) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x2a,0);
        CreateObject0(&DAT_100315d0,&DAT_10031518,&DAT_100313f0,1,&DAT_100314d8,0);
        SelectUnits(&DAT_100315d0,0);
        SelSendAndKill(1,&DAT_100314c8,0,0);
        SelSendAndKill(1,&DAT_100314c0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (30000 < iVar2) {
      SetTrigg(0x2b,0);
      CreateObject0(&DAT_100315d8,&DAT_10031510,&DAT_10031528,4,&DAT_100314e0,0);
      CreateObject0(&DAT_100315c0,&DAT_10031510,&DAT_10031408,4,&DAT_100314e0,0);
      CreateObject0(&DAT_100315f8,&DAT_100313e8,&DAT_10031528,4,&DAT_100314e0,0);
      SelectUnits(&DAT_100315f8,0);
      SelSendTo(4,&DAT_100314f0,0,0);
      SelectUnits(&DAT_100315c0,0);
      SetStandGround(4,1);
      SelSendTo(4,&DAT_100314f8,0,0);
      SelectUnits(&DAT_100315d8,0);
      SetStandGround(4,1);
      SelSendTo(4,&DAT_100314f8,0,0);
      SelSendTo(4,&DAT_10031468,0,2);
      SelSendTo(4,&DAT_10031500,0,2);
      SelSendTo(4,&DAT_100314c8,0,2);
      SelSendTo(4,&DAT_10031508,0,2);
      SelSendTo(4,&DAT_100314a8,0,2);
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (55000 < iVar2) {
      SetTrigg(0x32,0);
      CreateObject0(&DAT_100315a8,&DAT_10031510,&DAT_10031400,4,&DAT_10031490,0);
      SelectUnits(&DAT_100315a8,0);
      SelSendTo(4,&DAT_100314a8,0xb4,0);
    }
  }
  uStack_8 = 0x10003ebb;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
