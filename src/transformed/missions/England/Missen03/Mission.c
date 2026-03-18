#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

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
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10031468,"Zone1");
  RegisterZone(&DAT_10031470,"Zone2");
  RegisterZone(&DAT_10031478,"Zone3");
  RegisterZone(&DAT_10031480,"Zone4");
  RegisterZone(&DAT_10031488,"Zone5");
  RegisterZone(&DAT_10031490,"Zone6");
  RegisterZone(&DAT_10031498,"Zone7");
  RegisterZone(&DAT_100314a0,"Zone8");
  RegisterZone(&DAT_100314a8,"Zone9");
  RegisterZone(&DAT_10031440,"Zone10");
  RegisterZone(&DAT_10031438,"Zone11");
  RegisterZone(&DAT_10031450,"Zone12");
  RegisterZone(&DAT_10031448,"Zone13");
  RegisterUnits(&DAT_100313f0,"Group1");
  RegisterUnits(&DAT_10031400,"Group2");
  RegisterUnits(&DAT_100313f8,"Group3");
  RegisterUnits(&DAT_10031410,"Group4");
  RegisterUnits(&DAT_10031408,"Group5");
  RegisterUnits(&DAT_10031508,"Group19");
  RegisterVar(&DAT_10031420,8);
  RegisterVar(&DAT_10031418,8);
  RegisterVar(&DAT_10031430,8);
  RegisterVar(&DAT_10031428,8);
  RegisterVar(&DAT_100314c0,8);
  RegisterVar(&DAT_100314f8,8);
  RegisterVar(&DAT_10031500,8);
  RegisterVar(&DAT_100314e8,8);
  RegisterVar(&DAT_100314f0,8);
  RegisterVar(&DAT_100314d8,8);
  RegisterVar(&DAT_100314e0,8);
  RegisterVar(&DAT_100314c8,8);
  RegisterVar(&DAT_100314d0,8);
  RegisterUnitType(&DAT_10031460,"PERES_KOR(HO)");
  RegisterUnitType(&DAT_10031458,"Fregat(HO)");
  RegisterUnitType(&DAT_100314b8,"GALERA(HO)");
  RegisterUnitType(&DAT_10031510,"Linkor(HO)");
  RegisterFormation(&DAT_100313e0,"#ALONE");
  RegisterFormation(&DAT_100314b0,"#SHIPS3");
  RegisterFormation(&DAT_100313e8,"#SHIPS8");
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(1,"SPAIN");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"PIRATES");
  uStack_8 = 0x10001549;
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
    InitialUpgrade("Group5","AKA06EN");
    InitialUpgrade("Group5","AKA30EN");
    DisableMission(0x42);
    DisableMission(0x43);
    SetResource(0,3,200000);
    SetResource(0,1,10000);
    SetResource(0,0,200000);
    SetResource(0,2,10000);
    SetResource(0,5,25000);
    SetResource(0,4,25000);
    SetResource(5,3,9000000);
    SetResource(5,1,9000000);
    SetResource(5,0,9000000);
    SetResource(5,2,0);
    SetResource(5,5,9000000);
    SetResource(5,4,9000000);
    SetResource(1,3,9000000);
    SetResource(1,1,9000000);
    SetResource(1,0,9000000);
    SetResource(1,2,0);
    SetResource(1,5,9000000);
    SetResource(1,4,9000000);
    SetResource(4,3,9000000);
    SetResource(4,1,9000000);
    SetResource(4,0,9000000);
    SetResource(4,2,9000000);
    SetResource(4,5,9000000);
    SetResource(4,4,9000000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1A");
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (3000 < iVar3) {
      SetTrigg(0x32,0);
      SelectUnits(&DAT_100313f8,0);
      SelSendTo(5,&DAT_10031468,0,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031468,&DAT_100313f8);
    if (0 < iVar3) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      AddResource(0,1,-1000);
      AddResource(0,4,-300);
      AddResource(0,5,-200);
      SelectUnits(&DAT_100313f8,0);
      SelSendTo(5,&DAT_10031498,0,0);
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10031498,&DAT_100313f8);
  if (0 < iVar3) {
    SelectUnits(&DAT_100313f8,0);
    SelErase(5);
  }
  iVar3 = GetGlobalTime();
  if (9000 < iVar3) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1e,0);
      ShowPage("#PAGE3");
    }
  }
  iVar3 = GetGlobalTime();
  if (10000 < iVar3) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(3,0);
      CreateObject0(&DAT_10031420,&DAT_100313e0,&DAT_10031510,1,&DAT_10031470,0);
      SelectUnits(&DAT_10031420,0);
      SelSendAndKill(1,&DAT_10031478,0,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031478,&DAT_10031420);
    if (0 < iVar3) {
      SelectUnits(&DAT_10031420,0);
      SetTrigg(4,0);
      SelErase(1);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10031420);
      if (iVar3 == 0) {
        SetTrigg(4,0);
        ShowPage("#PAGE4");
        AddResource(0,1,15000);
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (22000 < iVar3) {
    uVar1 = Trigg(0x1f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1f,0);
      ShowPage("#PAGE5");
    }
  }
  iVar3 = GetGlobalTime();
  if (24000 < iVar3) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(5,0);
      CreateObject0(&DAT_10031418,&DAT_100313e0,&DAT_100314b8,1,&DAT_10031480,0);
      SelectUnits(&DAT_10031418,0);
      SelSendAndKill(1,&DAT_10031488,0,0);
      SelSendAndKill(1,&DAT_10031490,0,2);
      SelectUnits(&DAT_100313f0,0);
      SelectUnits(&DAT_10031400,1);
      SelSendAndKill(5,&DAT_10031488,0xb4,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031490,&DAT_10031418);
    if (0 < iVar3) {
      SetTrigg(6,0);
      SelectUnits(&DAT_10031418,0);
      SelErase(1);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10031418);
      if (iVar3 == 0) {
        SetTrigg(6,0);
        iVar3 = GetTotalAmount0(&DAT_100313f0);
        if (iVar3 == 0) {
          iVar3 = GetTotalAmount0(&DAT_10031400);
          if (iVar3 == 0) {
            ShowPage("#PAGE6");
            AddResource(0,1,10000);
            goto LAB_100020ed;
          }
        }
        ShowPage("#PAGE6A");
        SelectUnits(&DAT_10031418,0);
        SelectUnits(&DAT_10031420,1);
        SelSendTo(5,&DAT_10031480,0,0);
      }
    }
  }
LAB_100020ed:
  iVar3 = GetUnitsAmount1(&DAT_10031480,&DAT_100313f0);
  iVar2 = GetTotalAmount0(&DAT_100313f0);
  if (iVar3 == iVar2) {
    iVar3 = GetTotalAmount0(&DAT_100313f0);
    if (0 < iVar3) {
      SelectUnits(&DAT_100313f0,0);
      SelErase(5);
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10031480,&DAT_10031400);
  iVar2 = GetTotalAmount0(&DAT_10031400);
  if (iVar3 == iVar2) {
    iVar3 = GetTotalAmount0(&DAT_10031400);
    if (0 < iVar3) {
      SelectUnits(&DAT_10031400,0);
      SelErase(5);
    }
  }
  iVar3 = GetGlobalTime();
  if (25000 < iVar3) {
    uVar1 = Trigg(0x33);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x33,0);
      CreateObject0(&DAT_10031430,&DAT_100313e0,&DAT_10031460,1,&DAT_10031470,0);
      SelectUnits(&DAT_10031430,0);
      SelSendAndKill(1,&DAT_10031478,0,0);
    }
  }
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031478,&DAT_10031430);
    if (0 < iVar3) {
      SelectUnits(&DAT_10031430,0);
      SetTrigg(7,0);
      SelErase(1);
    }
  }
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10031430);
      if (iVar3 == 0) {
        SetTrigg(7,0);
        ShowPage("#PAGE7");
        AddResource(0,1,3000);
        AddResource(0,5,5000);
        AddResource(0,4,5000);
        AddResource(0,0,50000);
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (40000 < iVar3) {
    uVar1 = Trigg(0x20);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x20,0);
      ShowPage("#PAGE8");
    }
  }
  iVar3 = GetGlobalTime();
  if (41000 < iVar3) {
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(8,0);
      CreateObject0(&DAT_10031428,&DAT_100314b0,&DAT_10031458,1,&DAT_10031490,0x80);
      SelectUnits(&DAT_10031428,0);
      SelSendAndKill(1,&DAT_10031488,0xb4,0);
      SelSendAndKill(1,&DAT_10031480,0xb4,2);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10031428);
      if (iVar3 == 0) {
        SetTrigg(9,0);
        ShowPage("#PAGE9");
        AddResource(0,1,3000);
        AddResource(0,5,15000);
        AddResource(0,4,15000);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031480,&DAT_10031428);
    iVar2 = GetTotalAmount0(&DAT_10031428);
    if (iVar3 == iVar2) {
      uVar1 = Trigg(9);
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetTotalAmount0(&DAT_10031428);
        if (0 < iVar3) {
          SelectUnits(&DAT_10031428,0);
          SetTrigg(9,0);
          SelErase(1);
        }
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (50000 < iVar3) {
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(10,0);
      ShowPage("#PAGE10");
      uVar1 = Trigg(0x46);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x47);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x46,0);
          SetTrigg(0x47,0);
          ShowPage("#PAGE24B");
          AddResource(0,1,7000);
          AddResource(0,5,8000);
          AddResource(0,4,5000);
        }
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (55000 < iVar3) {
    uVar1 = Trigg(0x34);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x34,0);
      CreateObject0(&DAT_100314c0,&DAT_100313e8,&DAT_10031458,1,&DAT_10031498,0xa6);
      SelectUnits(&DAT_100314c0,0);
      SelSendAndKill(1,&DAT_100314a0,0xa6,0);
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314a0,&DAT_100314c0);
    if (0 < iVar3) {
      uVar1 = Trigg(0x35);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100314c0,0);
        SetTrigg(0x35,0);
        AttackBuildingsInZone(&DAT_100314c0,&DAT_100314a8,0);
      }
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_100314c0);
      if (iVar3 == 0) {
        SetTrigg(0xb,0);
        ShowPage("#PAGE11");
        AddResource(0,1,5000);
        AddResource(0,5,1000);
        AddResource(0,4,1000);
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (70000 < iVar3) {
    uVar1 = Trigg(0x21);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x21,0);
      ShowPage("#PAGE12");
      EnableMission(0x42);
      EnableMission(0x43);
    }
  }
  iVar3 = GetGlobalTime();
  if (72000 < iVar3) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc,0);
      CreateObject0(&DAT_100314f8,&DAT_100314b0,&DAT_10031510,1,&DAT_10031478,0x80);
      SelectUnits(&DAT_100314f8,0);
      SelSendAndKill(1,&DAT_10031470,0xb4,0);
    }
  }
  iVar3 = GetGlobalTime();
  if (0x11e54 < iVar3) {
    uVar1 = Trigg(0x36);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x36,0);
      CreateObject0(&DAT_10031500,&DAT_100313e8,&DAT_10031460,1,&DAT_10031478,0x80);
      SelectUnits(&DAT_10031500,0);
      SelSendTo(1,&DAT_10031470,0xb4,0);
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10031470,&DAT_10031500);
      if (0 < iVar3) {
        ShowPage("#PAGE13");
        SetTrigg(0xd,0);
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10031500);
      if (iVar3 == 0) {
        SetTrigg(0xf,0);
        ShowPage("#PAGE15");
        ShowVictory();
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (15000 < iVar3) {
    uVar1 = Trigg(0x28);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x28,0);
      CreateObject0(&DAT_100314e8,&DAT_100313e0,&DAT_10031460,1,&DAT_10031440,0);
      SelectUnits(&DAT_100314e8,0);
      SelSendTo(1,&DAT_10031438,0,0);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031438,&DAT_100314e8);
    if (0 < iVar3) {
      SelectUnits(&DAT_100314e8,0);
      SetTrigg(0x12,0);
      SelErase(1);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_100314e8);
      if (iVar3 == 0) {
        SetTrigg(0x12,0);
        ShowPage("#PAGE18");
        AddResource(0,1,2000);
        AddResource(0,4,1000);
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (20000 < iVar3) {
    uVar1 = Trigg(0x29);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x29,0);
      CreateObject0(&DAT_100314f0,&DAT_100313e0,&DAT_10031460,1,&DAT_10031450,0);
      SelectUnits(&DAT_100314f0,0);
      SelSendTo(1,&DAT_10031498,0,0);
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031498,&DAT_100314f0);
    if (0 < iVar3) {
      SelectUnits(&DAT_100314f0,0);
      SetTrigg(0x13,0);
      SelErase(1);
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_100314f0);
      if (iVar3 == 0) {
        SetTrigg(0x13,0);
        ShowPage("#PAGE19");
        AddResource(0,1,3000);
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (30000 < iVar3) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2a,0);
      CreateObject0(&DAT_100314d8,&DAT_100313e0,&DAT_10031460,1,&DAT_10031478,0);
      SelectUnits(&DAT_100314d8,0);
      SelSendTo(1,&DAT_10031470,0,0);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031470,&DAT_100314d8);
    if (0 < iVar3) {
      SelectUnits(&DAT_100314d8,0);
      SetTrigg(0x14,0);
      SelErase(1);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_100314d8);
      if (iVar3 == 0) {
        SetTrigg(0x14,0);
        ShowPage("#PAGE20");
        AddResource(0,1,500);
        AddResource(0,4,2000);
        AddResource(0,5,3000);
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (40000 < iVar3) {
    uVar1 = Trigg(0x2b);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2b,0);
      CreateObject0(&DAT_100314e0,&DAT_100313e0,&DAT_10031460,1,&DAT_10031438,0);
      SelectUnits(&DAT_100314e0,0);
      SelSendTo(1,&DAT_10031440,0,0);
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031440,&DAT_100314e0);
    if (0 < iVar3) {
      SelectUnits(&DAT_100314e0,0);
      SetTrigg(0x15,0);
      SelErase(1);
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_100314e0);
      if (iVar3 == 0) {
        SetTrigg(0x15,0);
        ShowPage("#PAGE21");
        AddResource(0,0,20000);
        AddResource(0,1,200);
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (45000 < iVar3) {
    uVar1 = Trigg(0x2c);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2c,0);
      CreateObject0(&DAT_100314c8,&DAT_100313e0,&DAT_10031460,1,&DAT_10031498,0);
      SelectUnits(&DAT_100314c8,0);
      SelSendTo(1,&DAT_10031450,0,0);
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031450,&DAT_100314c8);
    if (0 < iVar3) {
      SelectUnits(&DAT_100314c8,0);
      SetTrigg(0x16,0);
      SelErase(1);
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_100314c8);
      if (iVar3 == 0) {
        SetTrigg(0x16,0);
        ShowPage("#PAGE22");
        AddResource(0,4,3000);
        AddResource(0,5,3000);
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (50000 < iVar3) {
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2d,0);
      CreateObject0(&DAT_100314d0,&DAT_100313e0,&DAT_10031460,1,&DAT_10031480,0);
      SelectUnits(&DAT_100314d0,0);
      SelSendTo(1,&DAT_10031488,0,0);
      SelSendTo(1,&DAT_10031490,0,2);
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031490,&DAT_100314d0);
    if (0 < iVar3) {
      SelectUnits(&DAT_100314d0,0);
      SetTrigg(0x17,0);
      SelErase(1);
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_100314d0);
      if (iVar3 == 0) {
        SetTrigg(0x17,0);
        ShowPage("#PAGE23");
        AddResource(0,1,4000);
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(&DAT_10031410);
    if (iVar3 < 3) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE14");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetResource(0,5);
    if (0x22 < iVar3) {
      iVar3 = GetResource(0,4);
      if (0x18 < iVar3) goto LAB_100039fc;
    }
    SetTrigg(0x10,0);
    ShowPage("#PAGE16");
    uVar1 = Trigg(0x46);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x47);
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE25");
        LooseGame();
      }
    }
    else {
      SetTrigg(0x46,0);
      ShowPage("#PAGE24");
      RunTimer(7,2000);
    }
  }
LAB_100039fc:
  iVar3 = GetResource(0,5);
  if (0x24 < iVar3) {
    iVar3 = GetResource(0,4);
    if (0x1a < iVar3) {
      SetTrigg(0x10,0);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetResource(0,1);
    if (iVar3 == 0) {
      SetTrigg(0x11,0);
      ShowPage("#PAGE17");
      uVar1 = Trigg(0x46);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x47);
        if ((uVar1 & 0xff) == 0) {
          ShowPage("#PAGE25");
          LooseGame();
        }
      }
      else {
        SetTrigg(0x46,0);
        ShowPage("#PAGE24");
        RunTimer(7,2000);
      }
    }
  }
  iVar3 = GetResource(0,1);
  if (5 < iVar3) {
    SetTrigg(0x11,0);
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x47,0);
      ShowPage("#PAGE24A");
      AddResource(0,1,7000);
      AddResource(0,5,8000);
      AddResource(0,4,5000);
    }
  }
  uStack_8 = 0x10003c56;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
