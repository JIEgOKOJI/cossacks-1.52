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
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_100314c8,"Zone1");
  RegisterZone(&DAT_100314b0,"Zone2l");
  RegisterZone(&DAT_100314b8,"Zone2r");
  RegisterZone(&DAT_100314a0,"Zone2d");
  RegisterZone(&DAT_100314d0,"Zone3");
  RegisterZone(&DAT_100314d8,"Zone4");
  RegisterZone(&DAT_100314e0,"Zone5");
  RegisterZone(&DAT_100314f0,"Zone6");
  RegisterZone(&DAT_100314f8,"Zone7");
  RegisterZone(&DAT_10031500,"Zone8");
  RegisterZone(&DAT_10031508,"Zone9");
  RegisterZone(&DAT_10031460,"Zone10");
  RegisterZone(&DAT_10031458,"Zone11");
  RegisterZone(&DAT_10031470,"Zone12");
  RegisterZone(&DAT_10031468,"Zone13");
  RegisterZone(&DAT_10031480,"Zone14");
  RegisterZone(&DAT_10031478,"Zone15");
  RegisterZone(&DAT_10031490,"Zone16");
  RegisterZone(&DAT_10031488,"Zone17");
  RegisterUnits(&DAT_10031410,"Group1");
  RegisterUnits(&DAT_100315e8,"Group2l");
  RegisterUnits(&DAT_100315f0,"Group2r");
  RegisterUnits(&DAT_100315e0,"Group2d");
  RegisterUnits(&DAT_10031418,"Group3");
  RegisterUnits(&DAT_10031428,"Group4");
  RegisterUnits(&DAT_10031420,"Group5");
  RegisterUnits(&DAT_10031438,"Group6");
  RegisterUnits(&DAT_10031430,"Group7");
  RegisterUnits(&DAT_10031448,"Group8");
  RegisterUnits(&DAT_10031440,"Group9");
  RegisterUnits(&DAT_10031530,"Group10");
  RegisterUnits(&DAT_10031598,"Group11");
  RegisterUnits(&DAT_100315a0,"Group12");
  RegisterUnits(&DAT_10031580,"Group13");
  RegisterUnits(&DAT_10031590,"Group14");
  RegisterUnits(&DAT_10031568,"Group15");
  RegisterUnits(&DAT_10031578,"Group16");
  RegisterUnits(&DAT_10031400,"Group16a");
  RegisterUnits(&DAT_100313f8,"Group16b");
  RegisterUnits(&DAT_10031540,"Group17");
  RegisterUnits(&DAT_10031558,"Group18");
  RegisterUnits(&DAT_100315d0,"Group19");
  RegisterUnits(&DAT_10031588,"Group20");
  RegisterUnits(&DAT_10031550,"Group24");
  RegisterUnits(&DAT_100315c8,"Group25");
  RegisterUpgrade(&DAT_10031450,"KUZ03RU");
  RegisterUnitType(&DAT_100314a8,"Strelec(RU)");
  RegisterUnitType(&DAT_100314c0,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10031520,"GALERA(RU)");
  RegisterUnitType(&DAT_10031528,"Kozak_loshad(UA)");
  RegisterUnitType(&DAT_10031408,"Getman(UA)");
  RegisterUnitType(&DAT_100313f0,"Tatarin(TU)");
  RegisterFormation(&DAT_10031510,"#ALONE");
  RegisterFormation(&DAT_100314e8,"#SQUARE36");
  RegisterFormation(&DAT_100313e0,"#LINE72");
  RegisterFormation(&DAT_100313e8,"#LINE120");
  RegisterFormation(&DAT_10031518,"#SQUARE196");
  RegisterVar(&DAT_10031560,8);
  RegisterVar(&DAT_10031570,8);
  RegisterVar(&DAT_10031538,8);
  RegisterVar(&DAT_100315d8,8);
  RegisterVar(&DAT_100315b0,8);
  RegisterVar(&DAT_100315b8,8);
  RegisterVar(&DAT_100315a8,8);
  RegisterVar(&DAT_10031548,8);
  RegisterVar(&DAT_100315c0,8);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(1,"OSMAN");
  SetPlayerName(4,"ALLIES");
  uStack_8 = 0x10001840;
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
    SetTrigg(6,0);
    SetResource(0,3,10000);
    SetResource(0,1,2000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,5000);
    SetResource(0,4,3000);
    ShowPage("#PAGE1");
    SelectUnits(&DAT_100315e8,0);
    Patrol(4,&DAT_100314b0,0);
    SelectUnits(&DAT_100315f0,0);
    Patrol(4,&DAT_100314b8,0);
    SelectUnits(&DAT_100315e0,0);
    Patrol(4,&DAT_100314a0,0);
    SelectUnits(&DAT_10031568,0);
    Patrol(1,&DAT_100314f8,0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314c8,&DAT_10031410);
    if (0 < iVar3) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      ShowPage("#PAGE2A");
      ShowPage("#PAGE2B");
      SelectUnits(&DAT_10031418,0);
      SelOpenGates(4);
      SelectUnits(&DAT_10031428,0);
      SelChangeNation(4,0);
      RunTimer(1,10);
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Group13","KUZ03RU");
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314f0,&DAT_100315a0);
    if (0 < iVar3) {
      SetTrigg(3,0);
      ShowPage("#PAGE3");
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031430);
    if (iVar3 == 0) {
      GetTotalAmount0(&DAT_10031448);
      if (iVar3 == 0) {
        GetTotalAmount1(&DAT_100314c0,4);
        GetTotalAmount1(&DAT_100314c0,0);
        if (1 < iVar3 + iVar2) {
          SetTrigg(4,0);
          uVar1 = AskQuestion("#PAGE4");
          if ((uVar1 & 0xff) == 0) {
            ShowPage("#PAGE4B");
          }
          else {
            ShowPage("#PAGE4A");
            SetTrigg(6,0);
            ClearSelection(4);
            SelectUnits1(4,&DAT_10031440,0);
            SelectUnits1(4,&DAT_10031438,1);
            SelectUnits1(4,&DAT_100315a0,1);
            SelChangeNation(4,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031500,&DAT_10031410);
    if (0 < iVar3) {
      GetTotalAmount0(&DAT_10031540);
      if (0 < iVar3) {
        SetTrigg(5,0);
        ShowPage("#PAGE5");
        ShowPage("#PAGE5A");
        ShowPage("#PAGE5B");
        ShowPage("#PAGE5C");
        SelectUnits(&DAT_10031540,0);
        SelChangeNation(4,0);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314d8,&DAT_10031590);
    if (0 < iVar3) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10031468,1);
    if (iVar3 == 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
      AddResource(0,1,500);
      AddResource(0,5,4000);
      AddResource(0,4,4000);
      ClearSelection(0);
      SelectUnits(&DAT_100313f8,0);
      SelDie(0);
      ClearSelection(1);
      SelectUnits(&DAT_100313f8,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100314c8,&DAT_10031560);
      if (0 < iVar3) {
        SetTrigg(8,0);
        ShowPage("#PAGE8");
        SelectUnits(&DAT_10031560,0);
        SelChangeNation(4,0);
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031458,&DAT_10031410);
    if (0 < iVar3) {
      SetTrigg(9,0);
      ShowPage("#PAGE9");
      ShowPage("#PAGE9A");
      ShowPage("#PAGE9B");
      SelectUnits(&DAT_10031588,0);
      SelSendTo(4,&DAT_10031478,0x78,0);
      SelChangeNation(4,0);
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10031460,&DAT_10031410);
      if (0 < iVar3) {
        iVar3 = GetUnitsAmount1(&DAT_10031460,&DAT_10031538);
        if (0 < iVar3) {
          SetTrigg(10,0);
          ShowPage("#PAGE10");
          ShowPage("#PAGE10A");
          ShowPage("#PAGE10B");
          SelectUnits(&DAT_10031570,0);
          SelectUnits(&DAT_10031538,1);
          SelChangeNation(4,0);
        }
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xe);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0xb,0);
        ShowPage("#PAGE11");
        ShowVictory();
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031410);
    if (iVar3 == 0) {
      SetTrigg(0xc,0);
      iVar3 = GetResource(0,3);
      if (iVar3 == 0) {
        ShowPage("#PAGE12A");
      }
      else {
        ShowPage("#PAGE12");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_100315d0);
    if (iVar3 == 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE13");
      SelectUnits(&DAT_10031558,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031578);
    if (iVar3 == 0) {
      SetTrigg(0x32,0);
      SelectUnits(&DAT_10031400,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031400);
    if (iVar3 == 0) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE14");
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031480,&DAT_10031410);
    if (0 < iVar3) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE15");
      SelectUnits(&DAT_10031550,0);
      SelChangeNation(4,0);
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10031488,0);
    if (0 < iVar3) {
      SetTrigg(0x10,0);
      ShowPage("#PAGE16");
      AttackEnemyInZone(&DAT_100315c8,&DAT_10031488,0);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetResource(0,5);
    if (3 < iVar3) {
      iVar3 = GetResource(0,4);
      if (2 < iVar3) goto LAB_100028de;
    }
    SetTrigg(0x11,0);
    ShowPage("#PAGE17");
  }
LAB_100028de:
  iVar3 = GetResource(0,5);
  if (0xd < iVar3) {
    iVar3 = GetResource(0,4);
    if (10 < iVar3) {
      SetTrigg(0x11,0);
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (0x5dc < iVar3) {
      SetTrigg(0x1e,0);
      SelectUnits(&DAT_10031430,0);
      SelSendAndKill(1,&DAT_100314d0,0,2);
      SelSendAndKill(1,&DAT_100314d8,0,2);
      RunTimer(2,2000);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314d8,&DAT_10031430);
    if (0 < iVar3) {
      SetTrigg(0x1f,0);
      SelectUnits(&DAT_100315a0,0);
      SelSendTo(4,&DAT_100314f0,0xd3,0);
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10031448,0);
    SelSendAndKill(1,&DAT_100314d0,0,2);
    SelSendAndKill(1,&DAT_100314d8,0,2);
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031420);
    if (iVar3 == 0) {
      GetTotalAmount1(&DAT_100314c0,4);
      GetTotalAmount1(&DAT_100314c0,0);
      if (iVar3 + iVar2 < 2) {
        SetTrigg(0x21,0);
        ClearSelection(1);
        ClearSelection(4);
        ClearSelection(0);
        SelectUnits1(1,&DAT_10031440,0);
        SelDie(1);
        SelectUnits1(4,&DAT_10031440,0);
        SelDie(4);
        SelectUnits(&DAT_10031430,0);
        SelectUnits(&DAT_10031448,1);
        SelectUnits1(1,&DAT_10031438,1);
        SelSendAndKill(1,&DAT_100314d0,0,0);
      }
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (7000 < iVar3) {
      SetTrigg(0x22,0);
      SelectUnits(&DAT_10031530,0);
      SelSendAndKill(1,&DAT_100314f0,0,0);
      RunTimer(10,100);
    }
  }
  uVar1 = TimerDone(10);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314f0,&DAT_10031530);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_10031530,&DAT_100314e0,0);
      RunTimer(10,1000);
    }
  }
  uVar1 = TimerDone(10);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031530);
    if (0 < iVar3) {
      SelectUnits(&DAT_10031530,0);
      SelSendAndKill(1,&DAT_100314f0,0,0);
      RunTimer(10,100);
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (12000 < iVar3) {
      SetTrigg(0x23,0);
      SelectUnits(&DAT_10031598,0);
      SelSendAndKill(1,&DAT_100314f0,0,0);
      RunTimer(0xb,100);
    }
  }
  uVar1 = TimerDone(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314f0,&DAT_10031598);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_10031598,&DAT_100314e0,0);
      RunTimer(0xb,1000);
    }
  }
  uVar1 = TimerDone(0xb);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031598);
    if (0 < iVar3) {
      SelectUnits(&DAT_10031598,0);
      SelSendAndKill(1,&DAT_100314f0,0,0);
      RunTimer(0xb,100);
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (15000 < iVar3) {
      SetTrigg(0x24,0);
      SelectUnits(&DAT_10031590,0);
      SelSendAndKill(1,&DAT_100314d8,0,0);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (20000 < iVar3) {
      SetTrigg(0x28,0);
      CreateObject0(&DAT_10031560,&DAT_10031510,&DAT_10031528,4,&DAT_10031470,0x5a);
      CreateObject0(&DAT_10031570,&DAT_100314e8,&DAT_10031528,4,&DAT_10031508,0x5a);
      SelectUnits(&DAT_10031560,0);
      SelSendTo(4,&DAT_100314c8,0x5a,0);
      SelectUnits(&DAT_10031570,0);
      SelSendTo(4,&DAT_10031460,0x5a,0);
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (21000 < iVar3) {
      SetTrigg(0x29,0);
      CreateObject0(&DAT_10031538,&DAT_10031510,&DAT_10031408,4,&DAT_10031508,0x5a);
      SelectUnits(&DAT_10031538,0);
      SelSendTo(4,&DAT_10031460,0x5a,0);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (25000 < iVar3) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x2a,0);
        CreateObject0(&DAT_100315d8,&DAT_100314e8,&DAT_100313f0,1,&DAT_10031490,0);
        SelectUnits(&DAT_100315d8,0);
        SelSendAndKill(1,&DAT_100314f0,0,0);
      }
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (30000 < iVar3) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x2b,0);
        CreateObject0(&DAT_100315b0,&DAT_100313e0,&DAT_100313f0,1,&DAT_10031490,0);
        SelectUnits(&DAT_100315b0,0);
        SelSendAndKill(1,&DAT_100314f0,0,0);
      }
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (35000 < iVar3) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x2c,0);
        CreateObject0(&DAT_100315b8,&DAT_100313e8,&DAT_100313f0,1,&DAT_10031490,0);
        SelectUnits(&DAT_100315b8,0);
        SelSendAndKill(1,&DAT_100314f0,0,0);
      }
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (40000 < iVar3) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x2d,0);
        CreateObject0(&DAT_100315a8,&DAT_100313e8,&DAT_100313f0,1,&DAT_10031490,0);
        SelectUnits(&DAT_100315a8,0);
        SelSendAndKill(1,&DAT_100314d8,0,0);
      }
    }
  }
  uVar1 = Trigg(0x2e);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (50000 < iVar3) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x2e,0);
        CreateObject0(&DAT_10031548,&DAT_10031518,&DAT_100313f0,1,&DAT_10031490,0);
        SelectUnits(&DAT_10031548,0);
        SelSendAndKill(1,&DAT_100314f0,0,0);
      }
    }
  }
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (60000 < iVar3) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x2f,0);
        CreateObject0(&DAT_100315c0,&DAT_10031518,&DAT_100313f0,1,&DAT_10031490,0);
        SelectUnits(&DAT_100315c0,0);
        SelSendAndKill(1,&DAT_100314f0,0,0);
      }
    }
  }
  uStack_8 = 0x10003682;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
