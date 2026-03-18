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
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_100314f8,"Zone1");
  RegisterZone(&DAT_10031500,"Zone2");
  RegisterZone(&DAT_10031508,"Zone3");
  RegisterZone(&DAT_100314d0,"Zone3a");
  RegisterZone(&DAT_10031510,"Zone4");
  RegisterZone(&DAT_10031518,"Zone5");
  RegisterZone(&DAT_10031520,"Zone6");
  RegisterZone(&DAT_10031528,"Zone7");
  RegisterZone(&DAT_10031530,"Zone8");
  RegisterZone(&DAT_10031538,"Zone9");
  RegisterZone(&DAT_10031440,"Zone10");
  RegisterZone(&DAT_10031438,"Zone11");
  RegisterZone(&DAT_10031450,"Zone12");
  RegisterZone(&DAT_10031448,"Zone13");
  RegisterZone(&DAT_10031470,"Zone14");
  RegisterZone(&DAT_10031460,"Zone15");
  RegisterZone(&DAT_10031490,"Zone16");
  RegisterZone(&DAT_10031480,"Zone17");
  RegisterZone(&DAT_100314b0,"Zone18");
  RegisterZone(&DAT_100314a0,"Zone19");
  RegisterZone(&DAT_10031468,"Zone20");
  RegisterZone(&DAT_10031458,"Zone21");
  RegisterZone(&DAT_10031488,"Zone22");
  RegisterZone(&DAT_10031478,"Zone23");
  RegisterZone(&DAT_100314a8,"Zone24");
  RegisterZone(&DAT_10031498,"Zone25");
  RegisterZone(&DAT_100315c8,"Zone25a");
  RegisterZone(&DAT_100314c0,"Zone26");
  RegisterZone(&DAT_100314b8,"Zone27");
  RegisterZone(&DAT_100314c8,"Zone28");
  RegisterUnits(&DAT_100313e8,"Group1");
  RegisterUnits(&DAT_100313f8,"Group2");
  RegisterUnits(&DAT_100313f0,"Group3");
  RegisterUnits(&DAT_10031408,"Group4");
  RegisterUnits(&DAT_10031400,"Group5");
  RegisterUnits(&DAT_10031418,"Group6");
  RegisterUnits(&DAT_10031410,"Group7");
  RegisterUnits(&DAT_10031428,"Group8");
  RegisterUnits(&DAT_10031420,"Group9");
  RegisterUnits(&DAT_10031548,"Group10");
  RegisterUnits(&DAT_100315a8,"Group11");
  RegisterUnits(&DAT_100315b0,"Group12");
  RegisterUnits(&DAT_10031590,"Group13");
  RegisterUnits(&DAT_100315a0,"Group14");
  RegisterUnits(&DAT_10031578,"Group15");
  RegisterUnits(&DAT_10031588,"Group16");
  RegisterUnits(&DAT_10031558,"Group17");
  RegisterUnits(&DAT_10031568,"Group18");
  RegisterUnits(&DAT_10031598,"Group20");
  RegisterUnits(&DAT_10031570,"Group21");
  RegisterUnits(&DAT_10031580,"Group22");
  RegisterUnits(&DAT_10031550,"Group23");
  RegisterUnits(&DAT_10031560,"Group24");
  RegisterUnits(&DAT_100315b8,"Group25");
  RegisterUnitType(&DAT_100314d8,"Strelec(RU)");
  RegisterUnitType(&DAT_100314f0,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10031540,"GALERA(RU)");
  RegisterFormation(&DAT_100313e0,"#SHIPSN5");
  RegisterVar(&DAT_100315c0,8);
  ChangeFriends(0,0x17);
  ChangeFriends(1,0x17);
  ChangeFriends(2,0x17);
  ChangeFriends(4,0x17);
  ChangeFriends(5,0x20);
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"REBELS");
  uStack_8 = 0x100017d6;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *puVar6;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SetResource(0,3,50000);
    SetResource(0,1,10000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,30000);
    SetResource(0,4,30000);
    ShowPage("#PAGE1");
    SelectUnits(&DAT_10031578,0);
    SelSendTo(5,&DAT_10031438,0xa6,0);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetGlobalTime();
    if (0x5dc < iVar5) {
      SetTrigg(0x1e,0);
      SelectUnits(&DAT_10031590,0);
      SelectUnits(&DAT_100315b0,1);
      SelectUnits(&DAT_10031578,1);
      SendUnitsToTransport(5);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetGlobalTime();
    if (12000 < iVar5) {
      SetTrigg(0x1f,0);
      SelectUnits(&DAT_10031578,0);
      SelSendTo(5,&DAT_10031480,0xa0,0);
      SelectUnits(&DAT_10031588,0);
      SelSendAndKill(5,&DAT_10031490,0x82,0);
      SelectUnits(&DAT_100315a0,0);
      SelSendAndKill(5,&DAT_10031450,0xa0,0);
    }
  }
  iVar5 = GetGlobalTime();
  if (13000 < iVar5) {
    uVar1 = Trigg(0x20);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10031578,0);
      uVar1 = CheckLeaveAbility(5);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x20,0);
        PushAllUnitsAway(5);
      }
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount1(&DAT_10031450,&DAT_100315a0);
    if (0 < iVar5) {
      SetTrigg(0x21,0);
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) == 0) {
        SelectUnits(&DAT_100315a0,0);
        SelSendTo(5,&DAT_10031468,0,0);
        SetTrigg(0x28,0);
      }
      else {
        SelectUnits(&DAT_10031410,0);
        SelSendTo(4,&DAT_10031450,0,0);
        SelChangeNation(4,5);
        RunTimer(4,100);
      }
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x28);
    if ((uVar1 & 0xff) == 0) {
      iVar5 = GetUnitsAmount1(&DAT_10031468,&DAT_100315a0);
      if (0 < iVar5) {
        uVar1 = TimerDone(0xb);
        if ((uVar1 & 0xff) != 0) {
          SelectUnits(&DAT_10031578,0);
          uVar1 = CheckLeaveAbility(5);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0x29,0);
            SelectUnits(&DAT_100315a0,0);
            SelectUnits(&DAT_10031578,1);
            SendUnitsToTransport(5);
            RunTimer(10,300);
          }
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(10);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10031578,0);
    SelSendTo(5,&DAT_10031480,0xa6,0);
    RunTimer(0xc,200);
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x29);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0xc);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10031578,0);
        uVar1 = CheckLeaveAbility(5);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x2a,0);
          SelectUnits(&DAT_10031578,0);
          PushAllUnitsAway(5);
        }
      }
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) == 0) {
    SelectUnits(&DAT_10031578,0);
    iVar5 = GetNInside(5);
    if (iVar5 != 0) {
      SelectUnits(&DAT_100315a0,0);
      SelSendAndKill(5,&DAT_100314a0,0,0);
    }
  }
  iVar5 = GetUnitsAmount1(&DAT_100314a0,&DAT_100315a0);
  if (0 < iVar5) {
    uVar1 = Trigg(0x2b);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2b,0);
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) == 0) {
    SelectUnits(&DAT_100315a0,0);
    SelAttackGroup(5,&DAT_100313e8);
  }
  uVar1 = TimerDone(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3c);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10031410,0);
      uVar1 = CheckLeaveAbility(5);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x3c,0);
        SelectUnits(&DAT_100315a0,1);
        SendUnitsToTransport(5);
        RunTimer(5,10);
      }
    }
  }
  uVar1 = TimerDone(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x22);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10031410,0);
      iVar5 = GetNInside(5);
      iVar2 = GetTotalAmount0(&DAT_100315a0);
      if (iVar5 == iVar2) {
        SetTrigg(0x22,0);
        SelectUnits(&DAT_10031410,0);
        SelSendTo(5,&DAT_10031448,0xb4,0);
        RunTimer(7,100);
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x22);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(7);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(10);
        if ((uVar1 & 0xff) != 0) {
          SelectUnits(&DAT_10031410,0);
          uVar1 = CheckLeaveAbility(5);
          if ((uVar1 & 0xff) != 0) {
            SelectUnits(&DAT_10031410,0);
            PushAllUnitsAway(5);
            SetTrigg(0x23,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x2b);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10031410,0);
        iVar5 = GetNInside(5);
        if (iVar5 == 0) {
          SetTrigg(0x23,0);
          SelectUnits(&DAT_100315a0,0);
          SelSendAndKill(5,&DAT_100314a0,0,0);
          SetTrigg(0x33,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x24);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10031578,0);
      iVar5 = GetNInside(5);
      if (iVar5 == 0) {
        SetTrigg(0x24,0);
        SelectUnits(&DAT_10031590,0);
        SelSendAndKill(5,&DAT_100314b0,0,0);
        uVar1 = Trigg(0x28);
        if ((uVar1 & 0xff) == 0) {
          SelectUnits(&DAT_10031578,0);
          SelSendTo(5,&DAT_10031468,0xb0,0);
          RunTimer(0xb,200);
        }
      }
    }
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount1(&DAT_100314b0,&DAT_10031590);
    if (10 < iVar5) {
      SetTrigg(0x25,0);
      SelectUnits(&DAT_10031590,0);
      Patrol(5,&DAT_10031530,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_100314f8,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031428);
      if (0 < iVar5) {
        SetTrigg(2,0);
        ShowPage("#PAGE2");
        SelectUnits(&DAT_10031428,0);
        SelSendAndKill(5,&DAT_100314f8,0xb4,0);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031500,0);
    if (0 < iVar5) {
      SetTrigg(3,0);
      SelectUnits(&DAT_10031548,0);
      SelSendTo(1,&DAT_10031500,0xa6,0);
      ShowPage("#PAGE3");
      SelectUnits(&DAT_10031558,0);
      SetStandGround(5,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031508,0);
    if (0 < iVar5) {
      SetTrigg(3,0);
      SelectUnits(&DAT_10031548,0);
      SelSendTo(1,&DAT_10031508,0x5a,0);
      ShowPage("#PAGE3");
      SelectUnits(&DAT_10031558,0);
      SetStandGround(5,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_100314d0,0);
    if (0 < iVar5) {
      SetTrigg(3,0);
      SelectUnits(&DAT_10031548,0);
      SelSendTo(1,&DAT_100314d0,0x5a,0);
      ShowPage("#PAGE3");
      SelectUnits(&DAT_10031558,0);
      SetStandGround(5,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) == 0) {
      iVar5 = GetTotalAmount0(&DAT_10031558);
      if (iVar5 == 0) {
        iVar5 = GetTotalAmount0(&DAT_10031548);
        if (0 < iVar5) {
          SetTrigg(4,0);
          ShowPage("#PAGE4");
          ShowPage("#PAGE4A");
          ShowPage("#PAGE4B");
          SelectUnits(&DAT_10031548,0);
          iVar5 = GetTotalAmount1(&DAT_100314f0,0);
          if (iVar5 < 1) {
            iVar5 = GetTotalAmount1(&DAT_100314f0,5);
            if (iVar5 < 1) {
              SelSendTo(1,&DAT_10031528,0x5a,2);
              SelSendTo(1,&DAT_10031530,0x5a,2);
            }
            else {
              SelSendTo(5,&DAT_10031528,0x5a,2);
              SelSendTo(5,&DAT_10031530,0x5a,2);
              SelChangeNation(5,1);
            }
          }
          else {
            SelSendTo(0,&DAT_10031528,0x5a,2);
            SelSendTo(0,&DAT_10031530,0x5a,2);
            SelChangeNation(0,1);
          }
        }
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031510,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031420);
      if (0 < iVar5) {
        SetTrigg(5,0);
        CreateZoneNearUnit(&DAT_100314e8,&DAT_10031510,&DAT_100314d8,0,0x1e);
        SelectUnits(&DAT_10031420,0);
        SelSendAndKill(5,&DAT_100314e8,0,0);
        ShowPage("#PAGE5");
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031518,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031418);
      if (0 < iVar5) {
        SetTrigg(6,0);
        ShowPage("#PAGE6");
        ShowPage("#PAGE6A");
        SelectUnits(&DAT_10031418,0);
        SelSendTo(4,&DAT_10031520,0,0);
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031520,0);
    if (10 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_100315a8);
      if (0 < iVar5) {
        SetTrigg(7,0);
        SelectUnits(&DAT_100315a8,0);
        SelChangeNation(2,5);
        ShowPage("#PAGE7");
        ShowPage("#PAGE7A");
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount1(&DAT_10031538,&DAT_100313e8);
    if (0 < iVar5) {
      SetTrigg(8,0);
      EnableMission(0x44);
      iVar5 = GetTotalAmount0(&DAT_10031408);
      if (iVar5 < 1) {
        ShowPage("#PAGE15A");
        ShowPage("#PAGE15B");
        ShowPage("#PAGE15C");
        ShowPage("#PAGE8C");
        SelectUnits(&DAT_100313f0,0);
        SetTrigg(0x32,0);
        SelChangeNation(4,0);
      }
      else {
        ShowPage("#PAGE8");
        SelectUnits(&DAT_10031568,0);
        SelChangeNation(4,5);
        SelAttackGroup(5,&DAT_10031408);
        RunTimer(1,10);
        ShowPage("#PAGE8A");
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10031408,0);
    SelDie(4);
    RunTimer(2,0x23);
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x32,0);
    ShowPage("#PAGE8D");
    ShowPage("#PAGE8B");
    ShowPage("#PAGE8C");
    SelectUnits(&DAT_100313f0,0);
    SelChangeNation(4,0);
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetGlobalTime();
    if (15000 < iVar5) {
      SetTrigg(9,0);
      uVar1 = Trigg(8);
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE9");
      }
      SelectUnits(&DAT_10031400,0);
      SelSendTo(4,&DAT_10031440,0,0);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031448,0);
    if (iVar5 != 0) {
      uVar1 = Trigg(0x21);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x33);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(10,0);
          ShowPage("#PAGE10A");
          ShowPage("#PAGE10B");
          SelectUnits(&DAT_10031410,0);
          SelChangeNation(5,0);
        }
      }
      else {
        SetTrigg(10,0);
        ShowPage("#PAGE10");
        SelectUnits(&DAT_10031410,0);
        SelSendTo(4,&DAT_10031448,0xb4,0);
        SelChangeNation(4,0);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_100315b0);
    iVar2 = GetTotalAmount0(&DAT_10031590);
    iVar3 = GetTotalAmount0(&DAT_100315a0);
    iVar4 = GetTotalAmount0(&DAT_10031588);
    if (iVar5 + iVar2 + iVar3 + iVar4 == 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE11");
      ShowVictory();
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_100313e8);
    if (iVar5 == 0) {
      SetTrigg(0xc,0);
      iVar5 = GetResource(0,3);
      if (iVar5 == 0) {
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
    uVar1 = Trigg(0x32);
    if ((uVar1 & 0xff) == 0) {
      iVar5 = GetUnitsAmount0(&DAT_10031470,0);
      if (0 < iVar5) {
        SetTrigg(0xd,0);
        DisableMission(0x44);
        EnableMission(0x45);
        ShowPage("#PAGE13");
        ShowPage("#PAGE13A");
        ShowPage("#PAGE13B");
        ShowPage("#PAGE13C");
        ShowPage("#PAGE13D");
        RunTimer(0xd,1000);
      }
    }
  }
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    CreateObject0(&DAT_100315c0,&DAT_100313e0,&DAT_10031540,0,&DAT_10031460,0x40);
    ShowPage("#PAGE14");
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_100314a0,0);
    if (0 < iVar5) {
      SetTrigg(0xf,0);
      DisableMission(0x42);
      EnableMission(0x43);
      SetTrigg(4,0);
      SetTrigg(6,0);
      iVar5 = GetTotalAmount0(&DAT_10031408);
      if (iVar5 < 1) {
        SetTrigg(8,0);
        ShowPage("#PAGE15A");
        ShowPage("#PAGE15B");
        ShowPage("#PAGE15C");
        ShowPage("#PAGE8C");
        EnableMission(0x44);
        SelectUnits(&DAT_100313f0,0);
        SetTrigg(0x32,0);
        SelChangeNation(4,0);
      }
      else {
        ShowPage("#PAGE15");
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031458,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031598);
      if (0 < iVar5) {
        SetTrigg(0x10,0);
        CreateZoneNearUnit(&DAT_10031430,&DAT_10031458,&DAT_100314d8,0,0x1e);
        SelectUnits(&DAT_10031598,0);
        SelSendAndKill(5,&DAT_10031430,0,0);
        ShowPage("#PAGE16");
      }
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031488,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031570);
      if (0 < iVar5) {
        SetTrigg(0x11,0);
        CreateZoneNearUnit(&DAT_100314e0,&DAT_10031488,&DAT_100314d8,0,0x1e);
        SelectUnits(&DAT_10031570,0);
        SelSendAndKill(5,&DAT_100314e0,0,0);
        ShowPage("#PAGE17");
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031478,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031580);
      if (0 < iVar5) {
        SetTrigg(0x12,0);
        ShowPage("#PAGE18");
        SelectUnits(&DAT_10031580,0);
        SelSendAndKill(5,&DAT_10031478,0xb4,0);
      }
    }
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_100314a8,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031550);
      if (0 < iVar5) {
        SetTrigg(0x46,0);
        ShowPage("#PAGE19");
        AttackEnemyInZone(&DAT_10031550,&DAT_100314a8,0);
      }
    }
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) == 0) {
    iVar5 = GetUnitsAmount0(&DAT_100314a8,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031550);
      if (0 < iVar5) {
        AttackEnemyInZone(&DAT_10031550,&DAT_100314a8,0);
      }
    }
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031498,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031560);
      if (0 < iVar5) {
        SetTrigg(0x47,0);
        ShowPage("#PAGE20");
        ShowPage("#PAGE20A");
        AttackEnemyInZone(&DAT_10031560,&DAT_10031498,0);
      }
    }
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) == 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031498,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_10031560);
      if (0 < iVar5) {
        AttackEnemyInZone(&DAT_10031560,&DAT_10031498,0);
      }
    }
  }
  uVar1 = Trigg(0x49);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10031560);
    if (iVar5 == 0) {
      iVar5 = GetUnitsAmount0(&DAT_100315c8,0);
      if (0 < iVar5) {
        SetTrigg(0x49,0);
        ShowPage("#PAGE22");
        AddResource(0,3,100);
        RunTimer(0xf,1000);
      }
    }
  }
  uVar1 = TimerDoneFirst(0xf);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE23");
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_100314b8,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_100315b8);
      if (0 < iVar5) {
        SetTrigg(0x48,0);
        ShowPage("#PAGE21");
        AttackEnemyInZone(&DAT_100315b8,&DAT_100314b8,0);
      }
    }
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) == 0) {
    iVar5 = GetUnitsAmount0(&DAT_100314b8,0);
    if (0 < iVar5) {
      iVar5 = GetTotalAmount0(&DAT_100315b8);
      if (0 < iVar5) {
        AttackEnemyInZone(&DAT_100315b8,&DAT_100314b8,0);
      }
    }
  }
  uVar1 = Trigg(0x4a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetUnitsAmount0(&DAT_100314c0,0);
      if (0 < iVar5) {
        SetTrigg(0x4a,0);
        ShowPage("#PAGE24");
        ShowPage("#PAGE24A");
      }
    }
  }
  uVar1 = Trigg(0x4b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x32);
      if ((uVar1 & 0xff) == 0) {
        iVar5 = GetUnitsAmount0(&DAT_100314c8,0);
        if (0 < iVar5) {
          SetTrigg(0x4b,0);
          ShowPage("#PAGE25");
          ShowPage("#PAGE25A");
        }
      }
    }
  }
  uStack_8 = 0x10004041;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
