#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002c150[] = "join";
char DAT_1002c170[] = "load";
char DAT_1002c184[] = "pat2";
char DAT_1002c18c[] = "pat1";
char DAT_1002c194[] = "xeb";
char DAT_1002c198[] = "warn";
char DAT_1002c224[] = "pair";
char DAT_1002c294[] = "gang";
char DAT_1002c2d4[] = "mill";
char DAT_1002c314[] = "fang";
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

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_10031400,DAT_1002c314);
  RegisterUnits(&DAT_10031410,"transport");
  RegisterUnits(&DAT_10031408,"peasants");
  RegisterUnits(&DAT_10031420,"flstart");
  RegisterUnits(&DAT_10031418,"attfirst");
  RegisterUnits(&DAT_10031430,"dockb");
  RegisterUnits(&DAT_10031428,DAT_1002c2d4);
  RegisterUnits(&DAT_10031440,"tresureman");
  RegisterUnits(&DAT_10031438,"tresureman2");
  RegisterUnits(&DAT_10031550,"pattack1");
  RegisterUnits(&DAT_100315b0,"pattack2");
  RegisterUnits(&DAT_100315b8,DAT_1002c294);
  RegisterUnits(&DAT_10031598,"pinbay");
  RegisterUnits(&DAT_100315a8,"joiner");
  RegisterUnits(&DAT_10031580,"pguard");
  RegisterUnits(&DAT_10031590,"hebeha");
  RegisterUnits(&DAT_10031560,"chest");
  RegisterUnits(&DAT_10031570,"batpatrol1");
  RegisterUnits(&DAT_100315e0,"batpatrol2");
  RegisterUnits(&DAT_100315a0,"footpirat");
  RegisterUnits(&DAT_10031578,"attfinal");
  RegisterUnits(&DAT_10031588,"venix");
  RegisterUnits(&DAT_10031558,DAT_1002c224);
  RegisterUnits(&DAT_100315d8,"leader");
  RegisterUnits(&DAT_100315e8,"eferry");
  RegisterUnits(&DAT_100315c8,"raiders");
  RegisterUnits(&DAT_100315c0,"dockg");
  RegisterZone(&DAT_100314e8,"portarea");
  RegisterZone(&DAT_100314f0,"gotchest");
  RegisterZone(&DAT_100314f8,"pirati");
  RegisterZone(&DAT_10031500,"meetv");
  RegisterZone(&DAT_10031508,"attgang");
  RegisterZone(&DAT_10031510,"attbay");
  RegisterZone(&DAT_10031518,"gotpair");
  RegisterZone(&DAT_10031520,"tresure");
  RegisterZone(&DAT_10031528,"deadtree");
  RegisterZone(&DAT_10031490,DAT_1002c198);
  RegisterZone(&DAT_10031488,DAT_1002c194);
  RegisterZone(&DAT_100314a0,DAT_1002c18c);
  RegisterZone(&DAT_10031498,DAT_1002c184);
  RegisterZone(&DAT_100314c0,"endzone");
  RegisterZone(&DAT_100314b0,DAT_1002c170);
  RegisterZone(&DAT_100314d0,"unload");
  RegisterZone(&DAT_100314c8,"atmill");
  RegisterZone(&DAT_100314e0,"greet");
  RegisterZone(&DAT_100314d8,DAT_1002c150);
  RegisterZone(&DAT_100314b8,"spawn");
  RegisterZone(&DAT_100314a8,"provoke");
  ChangeFriends(2,0xff);
  ChangeFriends(4,0xff);
  ChangeFriends(1,0x22);
  SetPlayerName(1,"Enemy");
  SetPlayerName(2,"Locals");
  SetPlayerName(4,"Allies");
  SetPlayerName(5,"Pirates");
  RegisterFormation(&DAT_10031480,"#ALONE");
  RegisterUnitType(&DAT_100313e0,"SUNDUK1O(UN)");
  RegisterUnitType(&DAT_10031538,"Victoria(en)");
  RegisterUpgrade(&DAT_100313f8,"AKA06EN");
  RegisterUpgrade(&DAT_10031540,"AKA30EN");
  RegisterUpgrade(&DAT_10031460,"KUZ01EN");
  RegisterUpgrade(&DAT_10031468,"Melnica(en)GETRES");
  RegisterUpgrade(&DAT_10031470,"AKA01EN");
  RegisterUpgrade(&DAT_100313f0,"AKA20EN");
  RegisterUnitType(&DAT_10031448,"Lodka(en)");
  RegisterUnitType(&DAT_10031450,"PERES_KOR(en)");
  RegisterUnitType(&DAT_10031458,"GALERA(en)");
  RegisterUnitType(&DAT_10031478,"Krestian_Sved(HO)");
  RegisterUnitType(&DAT_10031548,"Pikiner_evro(en)");
  RegisterUnitType(&DAT_10031530,"Mushketer_ev(en)");
  RegisterUnitType(&DAT_100313e8,"konushnia_BR(en)");
  uStack_8 = 0x10001861;
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
    SetResource(0,3,10000);
    SetResource(0,1,10000);
    SetResource(0,0,70000);
    SetResource(0,2,0);
    SetResource(0,5,16000);
    SetResource(0,4,12000);
    SetResource(1,3,0x4876df70);
    SetResource(1,5,0x4876df70);
    SetResource(1,4,0x4876df70);
    SetResource(1,1,0x4876df70);
    SetResource(5,3,0x4876df70);
    SetResource(5,5,0x4876df70);
    SetResource(5,4,0x4876df70);
    SetResource(5,1,0x4876df70);
    ShowPage("#PAGE1");
    ShowPage("#PAGE0");
    SelectUnits(&DAT_10031570,0);
    Patrol(1,&DAT_100314a0,0);
    SelectUnits(&DAT_100315e0,0);
    Patrol(1,&DAT_10031498,0);
    SelectUnits(&DAT_100315e8,0);
    SelSendTo(5,&DAT_100314b0,100,0);
    InitialUpgrade(DAT_1002c314,"AKA06EN");
    InitialUpgrade(DAT_1002c314,"AKA30EN");
    InitialUpgrade(DAT_1002c314,"KUZ01EN");
    InitialUpgrade(DAT_1002c314,"Melnica(en)GETRES");
    InitialUpgrade(DAT_1002c314,"AKA01EN");
    EnableUnit(0,&DAT_10031448,0);
    EnableUnit(0,&DAT_10031450,0);
    EnableUnit(0,&DAT_10031458,0);
    EnableUnit(0,&DAT_10031478,0);
    EnableUnit(0,&DAT_10031548,0);
    EnableUnit(0,&DAT_10031530,0);
    EnableUnit(0,&DAT_100313e8,0);
    SelectUnits(&DAT_10031418,0);
    SelAttackGroup(1,&DAT_10031420);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031400);
    if (iVar2 == 0) {
      SetTrigg(2,0);
      ShowPage("#PAGE1A");
      LooseGame();
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031410);
    if (iVar2 == 0) {
      SetTrigg(3,0);
      ShowPage("#PAGE1B");
      LooseGame();
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031408);
    if (iVar2 == 0) {
      SetTrigg(4,0);
      ShowPage("#PAGE1C");
      LooseGame();
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsByNation(&DAT_10031428,0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      ShowPage("#PAGE2");
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031440);
    if (iVar2 == 0) {
      SetTrigg(6,0);
      ShowPage("#PAGE3");
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10031520,0);
      if (0 < iVar2) {
        SetTrigg(7,0);
        ShowPage("#PAGE4");
        AddResource(0,1,1000);
        AddResource(0,4,10000);
        AddResource(0,5,10000);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(8,0);
      SelectUnits(&DAT_10031550,0);
      SelSendAndKill(5,&DAT_100314e8,0x40,0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031550);
    if (iVar2 == 0) {
      SetTrigg(9,0);
      ShowPage("#PAGE5");
      AddResource(0,1,1000);
      AddResource(0,4,4000);
      AddResource(0,5,8000);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetResource(0,3);
    if (40000 < iVar2) {
      SetTrigg(10,0);
      SelectUnits(&DAT_100315b0,0);
      SelSendAndKill(5,&DAT_100314e8,0x40,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100315b0);
    if (iVar2 == 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE6");
      AddResource(0,1,2000);
      AddResource(0,4,2000);
      AddResource(0,5,4000);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100314f0,0);
    if (0 < iVar2) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE7");
      AddResource(0,1,1000);
      AddResource(0,4,5000);
      AddResource(0,5,5000);
      SelectUnits(&DAT_10031560,0);
      SelErase(2);
      CreateObject0(&DAT_10031568,&DAT_10031480,&DAT_100313e0,2,&DAT_100314f0,0);
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10031500,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_10031588);
      if (0 < iVar2) {
        SetTrigg(0xd,0);
        ShowPage("#PAGE8");
        SelectUnits(&DAT_10031588,0);
        SelSendAndKill(5,&DAT_10031500,0,0);
      }
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031588);
    if (iVar2 == 0) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE9");
      AddResource(0,1,500);
      AddResource(0,4,4000);
      AddResource(0,5,5000);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10031510,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_10031598);
      if (0 < iVar2) {
        SetTrigg(0xf,0);
        ShowPage("#PAGE10");
        SelectUnits(&DAT_10031598,0);
        SelSendAndKill(5,&DAT_100314e8,0x20,0);
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031598);
    if (iVar2 == 0) {
      SetTrigg(0x10,0);
      ShowPage("#PAGE11");
      AddResource(0,1,500);
      AddResource(0,4,4000);
      AddResource(0,5,5000);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100314f8,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_100315a0);
      if (0 < iVar2) {
        SetTrigg(0x11,0);
        ShowPage("#PAGE12");
        AttackEnemyInZone(&DAT_100315a0,&DAT_100314f8,0);
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100315d8);
    if (iVar2 == 0) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE13");
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100315a0);
    if (iVar2 == 0) {
      SetTrigg(0x13,0);
      ShowPage("#PAGE14");
      AddResource(0,1,500);
      AddResource(0,4,2000);
      AddResource(0,5,4000);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_100315c8,0);
      SelectUnits(&DAT_100315e8,1);
      SendUnitsToTransport(5);
      RunTimer(0,400);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x15,0);
      SelectUnits(&DAT_100315e8,0);
      SelSendTo(5,&DAT_100314d0,0x2a,0);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100314d0,&DAT_100315e8);
    if (0 < iVar2) {
      SelectUnits(&DAT_100315e8,0);
      uVar1 = CheckLeaveAbility(5);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100315e8,0);
        PushAllUnitsAway(5);
        SetTrigg(0x16,0);
      }
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) == 0) {
      RunTimer(1,400);
      SetTrigg(0x17,0);
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_100315c8,0);
      SelSendAndKill(5,&DAT_100314c8,0x40,0);
      SetTrigg(0x18,0);
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10031518,0);
    if (0 < iVar2) {
      SetTrigg(0x19,0);
      ShowPage("#PAGE15");
      SelectUnits(&DAT_10031558,0);
      SelChangeNation(4,0);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10031490,0);
    if (0 < iVar2) {
      SetTrigg(0x1a,0);
      ShowPage("#PAGE16");
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031438);
    if (iVar2 == 0) {
      SetTrigg(0x1b,0);
      uVar1 = AskQuestion("#PAGE17");
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE17n");
        AddResource(0,1,1000);
      }
      else {
        ShowPage("#PAGE17y");
        SetTrigg(0x1c,0);
      }
    }
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1c);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10031528,0);
      if (0 < iVar2) {
        SetTrigg(0x1d,0);
        ShowPage("#PAGE18");
        AddResource(0,1,1000);
        AddResource(0,4,7000);
        AddResource(0,5,10000);
        InitialUpgrade(DAT_1002c314,"AKA20EN");
      }
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031580);
    if (iVar2 == 0) {
      SetTrigg(0x1e,0);
      ShowPage("#PAGE19");
      AddResource(0,1,100);
      AddResource(0,4,2000);
      AddResource(0,5,5000);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10031488,0);
      if (0 < iVar2) {
        SetTrigg(0x1f,0);
        ShowPage("#PAGE20");
        SelectUnits(&DAT_10031590,0);
        SelChangeNation(2,0);
      }
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100314e0,0);
    if (0 < iVar2) {
      SetTrigg(0x20,0);
      ShowPage("#PAGE21");
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100314d8,0);
    if (0 < iVar2) {
      SetTrigg(0x21,0);
      ShowPage("#PAGE22");
      ShowPage("#PAGE22B");
      SelectUnits(&DAT_100315a8,0);
      SelChangeNation(4,0);
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetResource(0,3);
    if (59999 < iVar2) {
      SetTrigg(0x22,0);
      ShowPage("#PAGE23");
      SetTrigg(4,0);
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x22);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100314e8,&DAT_10031410);
      if (iVar2 == 1) {
        SetTrigg(0x23,0);
        SelectUnits(&DAT_10031410,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10031410,0);
        SelSendTo(4,&DAT_100314e8,100,0);
        RunTimer(2,1000);
        ShowPage("#PAGE24");
      }
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x24,0);
      ShowPage("#PAGE25");
      SelectUnits(&DAT_10031410,0);
      SelChangeNation(4,0);
      SetLightSpot(&DAT_100314c0,2,1);
    }
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x24);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100314c0,&DAT_10031410);
      if (iVar2 == 1) {
        iVar2 = GetUnitsAmount1(&DAT_100314c0,&DAT_10031400);
        if (iVar2 == 1) {
          SetTrigg(0x25,0);
          ShowPage("#PAGE26");
          ShowVictory();
        }
      }
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x24);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100314a8,&DAT_10031410);
      if (iVar2 == 1) {
        SetTrigg(0x26,0);
        ShowPage("#PAGE27");
        CreateObject0(&DAT_100315d0,&DAT_10031480,&DAT_10031538,1,&DAT_100314b8,0x78);
        SelectUnits(&DAT_100315d0,0);
        SelSendAndKill(1,&DAT_100314c0,0x20,0);
        SetLightSpot(&DAT_100314b8,3,0);
        SetStartPoint(&DAT_100314b8);
        RunTimer(5,500);
      }
    }
  }
  uVar1 = TimerDoneFirst(5);
  if ((uVar1 & 0xff) != 0) {
    ClearLightSpot(0);
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100315c0);
    if (iVar2 < 2) {
      SetTrigg(0x27,0);
      ShowPage("#PAGE28");
      SelectUnits(&DAT_10031430,0);
      SelChangeNation(2,0);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10031508,0);
    if (0 < iVar2) {
      SetTrigg(0x28,0);
      ShowPage("#PAGE29");
      SelectUnits(&DAT_100315b8,0);
      SelSendAndKill(5,&DAT_10031508,0x20,0);
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100315b8);
    if (iVar2 == 0) {
      SetTrigg(0x29,0);
      ShowPage("#PAGE30");
      AddResource(0,1,0x32);
      AddResource(0,4,0x5dc);
      AddResource(0,5,0x1194);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10031570);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount0(&DAT_100315e0);
      if (iVar2 == 0) {
        SetTrigg(0x2a,0);
        SelectUnits(&DAT_10031578,0);
        SelSendAndKill(1,&DAT_100314a8,0x60,0);
      }
    }
  }
  uStack_8 = 0x100038fe;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
