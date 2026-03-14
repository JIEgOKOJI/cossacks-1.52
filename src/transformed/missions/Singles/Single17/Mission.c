#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002c250[] = "Gkep";
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

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10031440,"Ghetman");
  RegisterUnits(&DAT_10031460,"Gband1");
  RegisterUnits(&DAT_10031488,"Gholop1");
  RegisterUnits(&DAT_10031480,"Gholop2");
  RegisterUnits(&DAT_10031478,"Gholop3");
  RegisterUnits(&DAT_10031470,"Gholop4");
  RegisterUnits(&DAT_10031468,"Gholop5");
  RegisterUnits(&DAT_100315a0,DAT_1002c250);
  RegisterUnits(&DAT_10031580,"Gpresent1");
  RegisterUnits(&DAT_10031578,"Gpresent2");
  RegisterUnits(&DAT_10031588,"Gsouz1");
  RegisterUnits(&DAT_10031598,"Gsouz2");
  RegisterUnits(&DAT_10031590,"Gsouz3");
  RegisterUnits(&DAT_10031518,"Gbos1");
  RegisterUnits(&DAT_10031520,"Gbos2");
  RegisterUnits(&DAT_10031528,"Gbos3");
  RegisterUnits(&DAT_100315c8,"Gport1");
  RegisterUnits(&DAT_100313e0,"Gport2");
  RegisterUnits(&DAT_10031498,"Gbash1");
  RegisterUnits(&DAT_10031490,"Gbash2");
  RegisterUnits(&DAT_100314a8,"Gmush");
  RegisterUnits(&DAT_100314d8,"Gpike1");
  RegisterUnits(&DAT_100314c8,"Gpike2");
  RegisterUnits(&DAT_100315a8,"Gcentr");
  RegisterUnits(&DAT_10031538,"Gshahti");
  RegisterZone(&DAT_10031540,"Zband1");
  RegisterZone(&DAT_100314a0,"Zband");
  RegisterZone(&DAT_100315b0,"Zband1a");
  RegisterZone(&DAT_100315b8,"Zband1b");
  RegisterZone(&DAT_10031510,"Ztalk1");
  RegisterZone(&DAT_10031550,"Zgen1");
  RegisterZone(&DAT_10031558,"Zgen2");
  RegisterZone(&DAT_10031548,"Zostrov1");
  RegisterZone(&DAT_10031500,"Zattack");
  RegisterZone(&DAT_100314f0,"Zprip1");
  RegisterZone(&DAT_100314f8,"Zprip2");
  RegisterUnitType(&DAT_10031508,"Bashnia(DA)");
  RegisterUnitType(&DAT_10031530,"WALL_EV(DA)");
  RegisterUnitType(&DAT_100315c0,"WALL_UKR(DA)");
  RegisterUnitType(&DAT_100313f8,"shahta(DA)");
  RegisterUnitType(&DAT_10031448,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_100314b8,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_100315d0,"Yahta(fr)");
  RegisterUnitType(&DAT_10031450,"GALERA(fr)");
  RegisterVar(&DAT_10031428,8);
  RegisterVar(&DAT_10031420,8);
  RegisterVar(&DAT_10031438,8);
  RegisterVar(&DAT_10031430,8);
  RegisterVar(&DAT_10031408,8);
  RegisterVar(&DAT_10031400,8);
  RegisterVar(&DAT_10031418,8);
  RegisterVar(&DAT_10031410,8);
  RegisterFormation(&DAT_10031570,"#LINE5");
  RegisterFormation(&DAT_100314c0,"#LINE20PUS");
  RegisterFormation(&DAT_100314e0,"#LINE30PUS");
  RegisterFormation(&DAT_100314e8,"#LINE40PUS");
  RegisterFormation(&DAT_100314d0,"#LINE15PUS");
  RegisterFormation(&DAT_100314b0,"#LINE10PUS");
  RegisterFormation(&DAT_10031568,"#LINE3");
  RegisterFormation(&DAT_100313e8,"#SHIPS3");
  RegisterFormation(&DAT_100313f0,"#SHIPS5");
  RegisterFormation(&DAT_10031458,"#ALONE");
  RegisterDynGroup(&DAT_10031428);
  RegisterDynGroup(&DAT_10031420);
  RegisterDynGroup(&DAT_10031438);
  RegisterDynGroup(&DAT_10031430);
  RegisterDynGroup(&DAT_10031408);
  RegisterDynGroup(&DAT_10031400);
  RegisterDynGroup(&DAT_10031418);
  RegisterDynGroup(&DAT_10031410);
  RegisterDynGroup(&DAT_10031560);
  SetPlayerName(1,"ALLIES");
  SetPlayerName(2,"FRANCE");
  SetPlayerName(3,"SVEDES");
  SetPlayerName(4,"BAVARIA");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(1,3);
  ChangeFriends(2,0x3c);
  ChangeFriends(3,0x3c);
  ChangeFriends(4,0x3c);
  ChangeFriends(5,0x3c);
  EnableUnit(0,&DAT_100315c0,0);
  EnableUnit(0,&DAT_10031530,0);
  EnableUnit(0,&DAT_10031508,0);
  uStack_8 = 0x10001910;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_10;
  int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    TakeFood(&DAT_10031470);
    TakeFood(&DAT_10031478);
    TakeStone(&DAT_10031488);
    TakeWood(&DAT_10031480);
    TakeWood(&DAT_10031468);
    SelectUnits(&DAT_100315a0,0);
    SetStandGround(2,1);
    RunTimer(6,0x78);
    local_8 = GetDiff(0);
    switch(local_8) {
    case 0:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,20000);
      SetResource(0,4,15000);
      SelectUnits(&DAT_10031518,0);
      SelectUnits(&DAT_10031520,1);
      SelectUnits(&DAT_10031528,1);
      SelErase(5);
      SelectUnits(&DAT_100314a8,0);
      SelectUnits(&DAT_100314d8,1);
      SelectUnits(&DAT_100314c8,1);
      SelErase(2);
      break;
    case 1:
      SetResource(0,3,8000);
      SetResource(0,0,8000);
      SetResource(0,2,8000);
      SetResource(0,1,8000);
      SetResource(0,5,8000);
      SetResource(0,4,8000);
      SelectUnits(&DAT_10031518,0);
      SelectUnits(&DAT_10031528,1);
      SelErase(5);
      SelectUnits(&DAT_100314a8,0);
      SelErase(2);
      SelectUnits(&DAT_10031590,0);
      SelErase(1);
      break;
    case 2:
      SetResource(0,3,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      SetResource(0,1,6000);
      SetResource(0,5,6000);
      SetResource(0,4,6000);
      SelectUnits(&DAT_10031518,0);
      SelErase(5);
      SelectUnits(&DAT_100314d8,0);
      SelectUnits(&DAT_100314c8,1);
      SelErase(2);
      SelectUnits(&DAT_10031590,0);
      SelErase(1);
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      SelectUnits(&DAT_10031590,0);
      SelErase(1);
    }
    ClearSelection(5);
    ClearSelection(2);
    ClearSelection(1);
    RunTimer(1,10000);
    RunTimer(7,15000);
    InitialUpgrade("Gpresent2","AKA04FR");
    InitialUpgrade("Gpresent2","KUZ01FR");
    SetResource(4,3,5000);
    SetResource(4,0,5000);
    SetResource(4,2,5000);
    SetResource(4,1,5000);
    SetResource(4,5,5000);
    SetResource(4,4,5000);
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    uVar2 = GetDiff(0);
    StartAI(4,"BAVARIA.0",2,1,2,uVar2);
    uVar2 = GetDiff(0);
    StartAI(3,"SVEDEN.0",2,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0AA");
      RunTimer(8,300);
      EnableMission(0x44);
      SetLightSpot(&DAT_10031548,4,1);
      SelectUnits(&DAT_10031588,0);
      SelectUnits(&DAT_10031598,1);
      SelChangeNation(1,0);
    }
  }
  uVar1 = TimerDoneFirst(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetDiff(0);
    if (iVar4 == 0) {
      ShowPage("#PAGE0AB");
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100314a0,0);
    if (iVar4 < 1) {
      uVar1 = TimerDoneFirst(7);
      if ((uVar1 & 0xff) == 0) goto LAB_10002651;
    }
    SetTrigg(3,0);
    ShowPage("#PAGE2");
    EnableMission(0x46);
  }
LAB_10002651:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031540,&DAT_10031460);
    iVar3 = GetTotalAmount0(&DAT_10031460);
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      SelectUnits(&DAT_10031460,0);
      SelSendTo(5,&DAT_100315b8,0x1e,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031540,&DAT_10031460);
    iVar3 = GetTotalAmount0(&DAT_10031460);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10031460,0);
      Patrol(5,&DAT_100315b0,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031460);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10031540,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 10000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 10000);
        DisableMission(0x46);
        EnableMission(0x47);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0A");
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031440);
    if (iVar4 == 0) {
      SetTrigg(0x62,0);
      iVar4 = GetResource(0,3);
      if (iVar4 < 1) {
        ShowPage("#PAGE1A");
      }
      else {
        ShowPage("#PAGE1");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x61);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0xc);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x61,0);
          ShowPage("#PAGE9");
          ShowVictory();
        }
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100315a0);
      if (iVar4 == 0) {
        iVar4 = GetUnitsAmount1(&DAT_10031510,&DAT_10031440);
        if (0 < iVar4) {
          SetTrigg(4,0);
          ShowPage("#PAGE3");
          ChangeFriends(2,5);
          SelectUnits(&DAT_10031578,0);
          SelectUnits(&DAT_10031580,1);
          SelChangeNation(2,0);
        }
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(5,0);
      SetTrigg(6,1);
      RunTimer(2,8000);
      local_c = GetDiff(0);
      switch(local_c) {
      case 0:
        CreateObject0(&DAT_10031420,&DAT_10031458,&DAT_10031450,2,&DAT_10031558,0x82);
        break;
      case 1:
        CreateObject0(&DAT_10031428,&DAT_10031458,&DAT_100315d0,2,&DAT_10031558,0x82);
        CreateObject0(&DAT_10031420,&DAT_10031458,&DAT_10031450,2,&DAT_10031558,0x82);
        break;
      case 2:
        CreateObject0(&DAT_10031428,&DAT_10031458,&DAT_100315d0,2,&DAT_10031558,0x82);
        CreateObject0(&DAT_10031420,&DAT_100313e8,&DAT_10031450,2,&DAT_10031558,0x82);
        break;
      case 3:
        CreateObject0(&DAT_10031428,&DAT_100313e8,&DAT_100315d0,2,&DAT_10031558,0x82);
        CreateObject0(&DAT_10031420,&DAT_100313e8,&DAT_10031450,2,&DAT_10031558,0x82);
      }
      SelectUnits(&DAT_10031420,0);
      SelectUnits(&DAT_10031428,1);
      SelSendTo(2,&DAT_100314f8,0xaa,0);
      ClearSelection(2);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount1(&DAT_100314f8,&DAT_10031420);
      if (0 < iVar4) {
        SetTrigg(6,0);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    ClearSelection(2);
    SelectUnits(&DAT_10031428,0);
    SelAttackGroup(2,&DAT_10031490);
    SelectUnits(&DAT_10031420,0);
    SelAttackGroup(2,&DAT_100315a8);
  }
  uVar1 = TimerIsEmpty(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031428);
    if (iVar4 == 0) {
      iVar4 = GetTotalAmount0(&DAT_10031420);
      if (iVar4 != 0) goto LAB_10002f38;
    }
    else {
LAB_10002f38:
      uVar1 = TimerDoneFirst(2);
      if ((uVar1 & 0xff) == 0) goto LAB_10002f6e;
    }
    RunTimer(3,500);
  }
LAB_10002f6e:
  uVar1 = TimerDone(3);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(3);
    FreeTimer(2);
    SetTrigg(5,1);
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100315a8);
    if (iVar4 == 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE11");
      LooseGame();
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100313e0);
    if (iVar4 == 0) {
      SetTrigg(8,0);
      ShowPage("#PAGE7A");
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100315c8);
    if (iVar4 == 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE7B");
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xc,0);
        ShowPage("#PAGE7");
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      SetTrigg(10,1);
      RunTimer(4,8000);
      local_10 = GetDiff(0);
      switch(local_10) {
      case 0:
        CreateObject0(&DAT_10031438,&DAT_10031458,&DAT_100315d0,2,&DAT_10031550,0x82);
        CreateObject0(&DAT_10031430,&DAT_10031458,&DAT_10031450,2,&DAT_10031550,0x82);
        break;
      case 1:
        CreateObject0(&DAT_10031438,&DAT_10031458,&DAT_100315d0,2,&DAT_10031550,0x82);
        CreateObject0(&DAT_10031430,&DAT_10031458,&DAT_10031450,2,&DAT_10031550,0x82);
        break;
      case 2:
        CreateObject0(&DAT_10031438,&DAT_10031458,&DAT_100315d0,2,&DAT_10031550,0x82);
        CreateObject0(&DAT_10031430,&DAT_100313e8,&DAT_10031450,2,&DAT_10031550,0x82);
        break;
      case 3:
        CreateObject0(&DAT_10031438,&DAT_100313e8,&DAT_100315d0,2,&DAT_10031550,0x82);
        CreateObject0(&DAT_10031430,&DAT_100313e8,&DAT_10031450,2,&DAT_10031550,0x82);
      }
      SelectUnits(&DAT_10031438,0);
      SelectUnits(&DAT_10031430,1);
      SelSendTo(2,&DAT_100314f0,0x82,0);
      ClearSelection(2);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount1(&DAT_100314f0,&DAT_10031430);
      if (0 < iVar4) {
        SetTrigg(10,0);
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) == 0) {
    ClearSelection(2);
    SelectUnits(&DAT_10031438,0);
    SelAttackGroup(2,&DAT_10031498);
    iVar4 = GetTotalAmount0(&DAT_10031538);
    if (iVar4 != 0) {
      uVar1 = Trigg(8);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_10031430,0);
        SelAttackGroup(2,&DAT_10031538);
        goto LAB_100035b8;
      }
    }
    SelectUnits(&DAT_10031430,0);
    SelAttackGroup(2,&DAT_100315a8);
  }
LAB_100035b8:
  uVar1 = TimerIsEmpty(5);
  if ((uVar1 & 0xff) == 0) goto LAB_10003641;
  iVar4 = GetTotalAmount0(&DAT_10031438);
  if (iVar4 == 0) {
    iVar4 = GetTotalAmount0(&DAT_10031430);
    if (iVar4 != 0) goto LAB_1000360b;
  }
  else {
LAB_1000360b:
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) == 0) goto LAB_10003641;
  }
  RunTimer(5,1000);
LAB_10003641:
  uVar1 = TimerDone(5);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(5);
    FreeTimer(4);
    SetTrigg(9,1);
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xf);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xf,0);
        ShowPage("#PAGE8");
        DisableMission(0x42);
        EnableMission(0x43);
      }
    }
  }
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
