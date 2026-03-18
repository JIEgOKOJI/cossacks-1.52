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
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10031460,"Global");
  RegisterZone(&DAT_10031528,"Zone1");
  RegisterZone(&DAT_10031530,"Zone2");
  RegisterZone(&DAT_10031538,"Zone3");
  RegisterZone(&DAT_100314f8,"Zone4a");
  RegisterZone(&DAT_10031500,"Zone4b");
  RegisterZone(&DAT_10031540,"Zone5");
  RegisterZone(&DAT_10031548,"Zone6");
  RegisterZone(&DAT_10031550,"Zone7");
  RegisterZone(&DAT_10031508,"Zone7a");
  RegisterZone(&DAT_10031558,"Zone8");
  RegisterZone(&DAT_10031510,"Zone8a");
  RegisterZone(&DAT_10031560,"Zone9");
  RegisterZone(&DAT_10031518,"Zone9a");
  RegisterZone(&DAT_10031480,"Zone10");
  RegisterZone(&DAT_10031478,"Zone11");
  RegisterZone(&DAT_10031490,"Zone12");
  RegisterZone(&DAT_10031488,"Zone13");
  RegisterZone(&DAT_100314b0,"Zone14");
  RegisterZone(&DAT_100314a0,"Zone15");
  RegisterZone(&DAT_100314d0,"Zone16");
  RegisterZone(&DAT_100314c0,"Zone17");
  RegisterZone(&DAT_100314f0,"Zone18");
  RegisterZone(&DAT_100314e0,"Zone19");
  RegisterZone(&DAT_100314a8,"Zone20");
  RegisterZone(&DAT_10031498,"Zone21");
  RegisterZone(&DAT_100314c8,"Zone22");
  RegisterZone(&DAT_100314b8,"Zone23");
  RegisterZone(&DAT_100314e8,"Zone24");
  RegisterZone(&DAT_100314d8,"Zone25");
  RegisterUnits(&DAT_10031418,"Group1");
  RegisterUnits(&DAT_10031420,"Group2");
  RegisterUnits(&DAT_100315d0,"Group2a");
  RegisterUnits(&DAT_100315d8,"Group2b");
  RegisterUnits(&DAT_100315e0,"Group3a");
  RegisterUnits(&DAT_100315e8,"Group3b");
  RegisterUnits(&DAT_10031430,"Group4");
  RegisterUnits(&DAT_10031428,"Group5");
  RegisterUnits(&DAT_10031440,"Group6");
  RegisterUnits(&DAT_10031438,"Group7");
  RegisterUnits(&DAT_10031450,"Group8");
  RegisterUnits(&DAT_10031448,"Group9");
  RegisterUnits(&DAT_10031580,"Group10");
  RegisterUnits(&DAT_100315b8,"Group11");
  RegisterUnits(&DAT_100315c0,"Group12");
  RegisterUnits(&DAT_100315a8,"Group13");
  RegisterUnits(&DAT_10031598,"Group15");
  RegisterUnits(&DAT_100315a0,"Group16");
  RegisterUnits(&DAT_10031588,"Group17");
  RegisterUnits(&DAT_10031590,"Group18");
  RegisterUnits(&DAT_100315c8,"Group19");
  RegisterUpgrade(&DAT_10031408,"MAINEN");
  RegisterVar(&DAT_100313e8,8);
  RegisterVar(&DAT_100313f0,8);
  RegisterVar(&DAT_100315b0,8);
  RegisterUnitType(&DAT_10031458,"Fregat(en)");
  RegisterUnitType(&DAT_10031470,"Center_British(en)");
  RegisterUnitType(&DAT_100313e0,"Melnica(en)");
  RegisterUnitType(&DAT_10031568,"PorE(en)");
  RegisterUnitType(&DAT_10031578,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_10031570,"Krestian_Sved(HO)");
  RegisterUnitType(&DAT_100313f8,"Rinok(en)");
  RegisterUnitType(&DAT_10031520,"PERES_KOR(en)");
  RegisterUpgrade(&DAT_10031468,"AKA06HO");
  RegisterUpgrade(&DAT_10031410,"AKA30HO");
  RegisterFormation(&DAT_10031400,"#ALONE");
  DisableUpgrade(0,&DAT_10031408);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(5,"PIRATES");
  uStack_8 = 0x10001852;
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
uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(100,0);
    SetResource(0,3,2000);
    SetResource(0,1,3000);
    SetResource(0,0,1000);
    SetResource(0,2,1000);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(5,3,9000000);
    SetResource(5,1,9000000);
    SetResource(5,0,9000000);
    SetResource(5,2,0);
    SetResource(5,5,9000000);
    SetResource(5,4,9000000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1A");
    SelectUnits(&DAT_10031430,0);
    SelSendAndKill(5,&DAT_10031490,0xb4,0);
    SelectUnits(&DAT_10031580,0);
    Patrol(5,&DAT_10031480,0);
    SelectUnits(&DAT_100315b8,0);
    Patrol(5,&DAT_10031478,0);
    SelectUnits(&DAT_10031438,0);
    SelSendTo(5,&DAT_10031548,0x2d,0);
    SelectUnits(&DAT_10031448,0);
    InitialUpgrade("Group9","AKA06HO");
    InitialUpgrade("Group9","AKA30HO");
    SelDie(5);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10031490,&DAT_10031430);
      GetTotalAmount0(&DAT_10031430);
      if (iVar3 == iVar2) {
        SetTrigg(1,0);
        SelectUnits(&DAT_10031430,0);
        Patrol(5,&DAT_10031488,0);
      }
    }
  }
  iVar3 = GetGlobalTime();
  if (60000 < iVar3) {
    uVar1 = Trigg(0x32);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x32,0);
      ShowPage("#PAGE3");
    }
  }
  iVar3 = GetGlobalTime();
  if (70000 < iVar3) {
    uVar1 = Trigg(0x33);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x33,0);
      SelectUnits(&DAT_10031418,0);
      SelSendTo(5,&DAT_10031538,0xa6,0);
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (500 < iVar3) {
      SetTrigg(0x34,0);
      SelectUnits(&DAT_10031438,0);
      SelectUnits(&DAT_10031450,1);
      SendUnitsToTransport(5);
    }
  }
  iVar3 = GetGlobalTime();
  if (90000 < iVar3) {
    uVar1 = Trigg(0x35);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x35,0);
      SelectUnits(&DAT_10031438,0);
      SelSendTo(5,&DAT_10031510,0xb4,0);
      SelectUnits(&DAT_10031440,0);
      SelSendTo(5,&DAT_10031558,0xb4,0);
    }
  }
  iVar3 = GetGlobalTime();
  if (110000 < iVar3) {
    uVar1 = Trigg(0x1f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1f,0);
      CreateObject0(&DAT_100315b0,&DAT_10031400,&DAT_10031520,4,&DAT_100314b0,0x5a);
      SetLightSpot(&DAT_100314b0,2,2);
      ShowPage("#PAGE12");
      SelectUnits(&DAT_100315b0,0);
      SelSendTo(4,&DAT_100314a0,0x5a,0);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x20);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100314b0,&DAT_100315b0);
      if (iVar3 == 0) {
        SetTrigg(0x20,0);
        ClearLightSpot(2);
      }
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) == 0) {
    GetTotalAmount0(&DAT_100315b0);
    if (iVar3 == 0) {
      uVar1 = Trigg(0xe);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0xd);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x1f);
          if ((uVar1 & 0xff) == 0) {
            SetTrigg(0xe,0);
            ShowPage("#PAGE14");
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314c0,&DAT_100315b0);
    if (iVar3 != 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xd,0);
        ShowPage("#PAGE13");
        AddResource(0,1,20000);
        AddResource(0,4,20000);
        AddResource(0,5,20000);
        SelectUnits(&DAT_100315b0,0);
        SelErase(4);
      }
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314a0,&DAT_100315b0);
    if (iVar3 == 1) {
      SelectUnits(&DAT_100315b0,0);
      SelSendTo(4,&DAT_100314d0,0,0);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314d0,&DAT_100315b0);
    if (iVar3 == 1) {
      SelectUnits(&DAT_100315b0,0);
      SelSendTo(4,&DAT_100314c0,0,0);
      SelectUnits(&DAT_100315c0,0);
      SelSendAndKill(5,&DAT_100314a8,0,0);
      SelectUnits(&DAT_100315a8,0);
      SelSendAndKill(5,&DAT_10031498,0,0);
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_100314a8,&DAT_100315c0);
  if (0 < iVar3) {
    SelectUnits(&DAT_100315c0,0);
    SelSendAndKill(5,&DAT_10031498,0,0);
  }
  iVar3 = GetGlobalTime();
  if (140000 < iVar3) {
    uVar1 = Trigg(0x28);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount1(&DAT_10031570,5);
      if (0 < iVar3) {
        SetTrigg(0x28,0);
        ShowPage("#PAGE15");
        StartAI(5,"HOLLAND.0",2,1,0,0);
      }
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10031510,&DAT_10031438);
  if (0 < iVar3) {
    uVar1 = Trigg(0x36);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x36,0);
      SelectUnits(&DAT_10031438,0);
      SelSendTo(5,&DAT_10031518,0xb4,0);
      SelectUnits(&DAT_10031440,0);
      SelSendTo(5,&DAT_10031560,0xb4,0);
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10031518,&DAT_10031438);
  if (0 < iVar3) {
    uVar1 = Trigg(0x37);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x37,0);
      SelectUnits(&DAT_10031438,0);
      SelSendTo(5,&DAT_10031550,0,0);
    }
  }
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x39);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10031438,0);
      uVar1 = CheckLeaveAbility(5);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x39,0);
        SelectUnits(&DAT_10031438,0);
        PushAllUnitsAway(5);
        RunTimer(2,0x1e);
      }
    }
  }
  uVar1 = TimerDone(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x38);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10031450,0);
      SelSendAndKill(5,&DAT_10031508,0xb4,0);
      SelectUnits(&DAT_10031438,0);
      iVar3 = GetNInside(5);
      if (iVar3 == 0) {
        SetTrigg(0x38,0);
        SelectUnits(&DAT_10031450,0);
        Patrol(5,&DAT_10031528,0);
      }
      else {
        RunTimer(2,0x1e);
      }
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031538,&DAT_10031418);
    if (iVar3 == 1) {
      SetTrigg(2,0);
      SetLightSpot(&DAT_10031538,2,1);
      uVar1 = AskQuestion("#PAGE2");
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(3,0);
        ShowPage("#PAGE2B");
        SelectUnits(&DAT_100315d0,0);
        SelSendAndKill(5,&DAT_100314f8,0xa6,0);
        SelectUnits(&DAT_100315e0,0);
        SelSendAndKill(5,&DAT_100314f8,0xa6,0);
        SelectUnits(&DAT_100315d8,0);
        SelSendAndKill(5,&DAT_10031500,0xa6,0);
        SelectUnits(&DAT_100315e8,0);
        SelSendAndKill(5,&DAT_10031500,0xa6,0);
        SelectUnits(&DAT_10031418,0);
        Patrol(5,&DAT_100314f8,0);
      }
      else {
        ShowPage("#PAGE2A");
        SetResource(0,1,0);
        iVar3 = GetResource(0,1);
        if (iVar3 < 800) {
          ShowPage("#PAGE2C");
          AddResource(0,4,0xfffffe0c);
          AddResource(0,5,0xfffffe0c);
          AddResource(0,3,0xfffffc18);
        }
        SelectUnits(&DAT_10031418,0);
        SelSendTo(5,&DAT_100314e0,0xa6,0);
      }
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031538,&DAT_10031418);
    if (iVar3 == 0) {
      uVar1 = Trigg(0x3a);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x3a,0);
        ClearLightSpot(1);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031418);
    if (iVar3 == 0) {
      SetTrigg(3,0);
      ShowPage("#PAGE8");
      SelectUnits(&DAT_100315d0,0);
      SelSendAndKill(5,&DAT_100314f8,0xa6,0);
      SelectUnits(&DAT_100315e0,0);
      SelSendAndKill(5,&DAT_100314f8,0xa6,0);
      SelectUnits(&DAT_100315d8,0);
      SelSendAndKill(5,&DAT_10031500,0xa6,0);
      SelectUnits(&DAT_100315e8,0);
      SelSendAndKill(5,&DAT_10031500,0xa6,0);
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100314f8,&DAT_100315e0);
    if (0 < iVar3) {
      SetTrigg(0x21,0);
      AttackBuildingsInZone(&DAT_100315e0,&DAT_10031530,0);
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031500,&DAT_100315e8);
    if (0 < iVar3) {
      SetTrigg(0x22,0);
      AttackBuildingsInZone(&DAT_100315e8,&DAT_10031528,0);
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetReadyAmount(&DAT_10031568,0);
    if (0 < iVar3) {
      SetTrigg(0x23,0);
      CreateZoneNearUnit(&DAT_100313e8,&DAT_100314e8,&DAT_10031568,0,800);
      SelectUnits(&DAT_10031590,0);
      SelSendTo(5,&DAT_100313e8,0,0);
      RunTimer(3,15000);
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100313e8,&DAT_10031590);
      if (0 < iVar3) {
        SetTrigg(0x16,0);
        ShowPage("#PAGE22");
        AddResource(0,3,0xffffec78);
        AddResource(0,1,0xfffffc18);
        AddResource(0,4,0xfffffe0c);
        SelectUnits(&DAT_10031590,0);
        SelSendTo(5,&DAT_100314e8,0,0);
      }
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_100314e8,&DAT_10031590);
  if (0 < iVar3) {
    SelectUnits(&DAT_10031590,0);
    SelErase(5);
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetReadyAmount(&DAT_10031568,0);
    if (0 < iVar3) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x24,0);
        CreateZoneNearUnit(&DAT_100313f0,&DAT_100314d8,&DAT_10031568,0,800);
        SelectUnits(&DAT_100315c8,0);
        SelSendTo(5,&DAT_100313f0,0,0);
      }
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x17);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100313f0,&DAT_100315c8);
      if (0 < iVar3) {
        SetTrigg(0x17,0);
        ShowPage("#PAGE23");
        AddResource(0,3,0xffffd8f0);
        AddResource(0,1,0xfffffa24);
        AddResource(0,4,0xfffffc18);
        AddResource(0,5,0xfffffc18);
        SelectUnits(&DAT_100315c8,0);
        SelSendTo(5,&DAT_100314d8,0,0);
      }
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_100314d8,&DAT_100315c8);
  if (0 < iVar3) {
    SelectUnits(&DAT_100315c8,0);
    SelErase(5);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_100315c0);
    if (iVar3 == 0) {
      GetTotalAmount0(&DAT_100315a8);
      if (iVar3 == 0) {
        SetTrigg(4,0);
        ShowPage("#PAGE4");
        AddResource(0,1,1000);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031430);
    if (iVar3 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      AddResource(0,1,500);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031428);
    if (iVar3 == 0) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetUnitsAmount0(&DAT_10031540,0);
      if (iVar3 != 0) {
        SetTrigg(7,0);
        ShowPage("#PAGE7");
        AddResource(0,1,8000);
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetReadyAmount(&DAT_100313f8,0);
    if (0 < iVar3) {
      SetTrigg(9,0);
      ShowPage("#PAGE9");
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031420);
    if (iVar3 == 0) {
      SetTrigg(10,0);
      ShowPage("#PAGE10");
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031440);
    if (iVar3 == 0) {
      GetTotalAmount0(&DAT_10031450);
      if (iVar3 == 0) {
        SetTrigg(0xb,0);
        ShowPage("#PAGE11");
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetResource(0,5);
    if (0x22 < iVar3) {
      iVar3 = GetResource(0,4);
      if (0x18 < iVar3) goto LAB_10003695;
    }
    SetTrigg(0x10,0);
    ShowPage("#PAGE16");
  }
LAB_10003695:
  iVar3 = GetResource(0,5);
  if (0x24 < iVar3) {
    iVar3 = GetResource(0,4);
    if (0x1a < iVar3) {
      SetTrigg(0x10,1);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetResource(0,1);
    if (iVar3 == 0) {
      SetTrigg(0x11,0);
      ShowPage("#PAGE17");
    }
  }
  iVar3 = GetResource(0,1);
  if (5 < iVar3) {
    SetTrigg(0x11,1);
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10031460,5);
    if (iVar3 == 0) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE18");
      ShowVictory();
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_10031578,0);
    if (iVar3 == 0) {
      iVar3 = GetReadyAmount(&DAT_10031470,0);
      if (iVar3 == 0) {
        SetTrigg(0x13,0);
        ShowPage("#PAGE19");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10031598);
    if (iVar3 == 0) {
      SetTrigg(0x14,0);
      ShowPage("#PAGE20");
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetUnitsAmount0(&DAT_100314f0,0);
      if (0 < iVar3) {
        SetTrigg(0x15,0);
        ShowPage("#PAGE21");
        AddResource(0,1,10000);
      }
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_100314c8,0);
  if (0 < iVar3) {
    AttackZoneByArtillery(&DAT_100315a0,&DAT_100314c8,0);
  }
  iVar3 = GetUnitsAmount0(&DAT_100314b8,0);
  if (0 < iVar3) {
    AttackZoneByArtillery(&DAT_10031588,&DAT_100314b8,0);
  }
  uStack_8 = 0x100039f6;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
