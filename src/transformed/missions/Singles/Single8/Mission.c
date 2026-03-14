#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002c290[] = "Gkep";
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

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10031420,"Ghetman");
  RegisterUnits(&DAT_10031450,"Gband1");
  RegisterUnits(&DAT_10031448,"Gband2");
  RegisterUnits(&DAT_10031470,"Gholop1");
  RegisterUnits(&DAT_10031468,"Gholop2");
  RegisterUnits(&DAT_10031460,"Gholop3");
  RegisterUnits(&DAT_10031458,"Gholop4");
  RegisterUnits(&DAT_100315a0,"Ggates1");
  RegisterUnits(&DAT_10031598,DAT_1002c290);
  RegisterUnits(&DAT_100314c8,"Gpresent");
  RegisterUnits(&DAT_10031588,"Gsouz1");
  RegisterUnits(&DAT_10031590,"Gsouz2");
  RegisterUnits(&DAT_10031478,"Gmudr");
  RegisterUnits(&DAT_100314f0,"Gbos1");
  RegisterUnits(&DAT_100314f8,"Gbos2");
  RegisterUnits(&DAT_10031500,"Gbos3");
  RegisterUnits(&DAT_10031508,"Gbos4");
  RegisterUnits(&DAT_10031510,"Gbos5");
  RegisterUnits(&DAT_10031518,"Gbos6");
  RegisterUnits(&DAT_100313f8,"Gattackmudr");
  RegisterUnits(&DAT_100314e0,"Gport");
  RegisterUnits(&DAT_100314d0,"Gzabor");
  RegisterUnits(&DAT_10031430,"Gobj1");
  RegisterUnits(&DAT_10031438,"Gobj2");
  RegisterUnits(&DAT_10031480,"Gbash");
  RegisterZone(&DAT_10031550,"Zband1");
  RegisterZone(&DAT_100315a8,"Zband1a");
  RegisterZone(&DAT_100315b0,"Zband1b");
  RegisterZone(&DAT_10031558,"Zband2");
  RegisterZone(&DAT_100315b8,"Zband2a");
  RegisterZone(&DAT_100315c0,"Zband2b");
  RegisterZone(&DAT_100314d8,"Ztalk1");
  RegisterZone(&DAT_10031418,"Zgates1");
  RegisterZone(&DAT_10031490,"Zmudr");
  RegisterZone(&DAT_10031560,"Zgen1");
  RegisterZone(&DAT_10031568,"Zgen2");
  RegisterUnitType(&DAT_10031580,"Melnica(fr)");
  RegisterUnitType(&DAT_100315c8,"Konushnia_FR(fr)");
  RegisterUnitType(&DAT_10031538,"Europ(GE)");
  RegisterUnitType(&DAT_10031528,"Kuznica(GE)");
  RegisterUnitType(&DAT_10031540,"WALL_EV(GE)");
  RegisterUnitType(&DAT_10031520,"WALL_EV(fr)");
  RegisterUnitType(&DAT_10031548,"WALL_UKR(GE)");
  RegisterUnitType(&DAT_10031530,"WALL_UKR(fr)");
  RegisterUnitType(&DAT_100314c0,"Bashnia(GE)");
  RegisterUnitType(&DAT_100314e8,"Kazarma_evro(GE)");
  RegisterUnitType(&DAT_10031488,"PorE(GE)");
  RegisterUnitType(&DAT_100313e0,"Konushnia_Swesair(GE)");
  RegisterUnitType(&DAT_10031428,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_100314a0,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_100313f0,"Yahta(SV)");
  RegisterVar(&DAT_10031408,8);
  RegisterVar(&DAT_10031400,8);
  RegisterVar(&DAT_10031410,8);
  RegisterFormation(&DAT_100314b8,"#LINE30PUS");
  RegisterFormation(&DAT_100314a8,"#LINE20PUS");
  RegisterFormation(&DAT_100314b0,"#LINE15PUS");
  RegisterFormation(&DAT_10031498,"#LINE10PUS");
  RegisterFormation(&DAT_10031578,"#LINE3");
  RegisterFormation(&DAT_100313e8,"#SHIPS3");
  RegisterFormation(&DAT_10031440,"#ALONE");
  RegisterDynGroup(&DAT_10031408);
  RegisterDynGroup(&DAT_10031400);
  RegisterDynGroup(&DAT_10031410);
  RegisterDynGroup(&DAT_10031570);
  SetPlayerName(1,"ALLIES");
  SetPlayerName(3,"ENEMY");
  SetPlayerName(4,"ENEMY");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(1,3);
  ChangeFriends(3,0x38);
  ChangeFriends(4,0x38);
  ChangeFriends(5,0x38);
  EnableUnit(0,&DAT_10031580,0);
  EnableUnit(0,&DAT_100315c8,0);
  EnableUnit(0,&DAT_10031538,0);
  EnableUnit(0,&DAT_10031528,0);
  EnableUnit(0,&DAT_10031540,0);
  EnableUnit(0,&DAT_10031530,0);
  EnableUnit(0,&DAT_10031520,0);
  EnableUnit(0,&DAT_10031548,0);
  EnableUnit(0,&DAT_100314c0,0);
  EnableUnit(0,&DAT_100314e8,0);
  EnableUnit(0,&DAT_10031488,0);
  EnableUnit(0,&DAT_100313e0,0);
  uStack_8 = 0x10001954;
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
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x46);
    DisableMission(0x47);
    TakeFood(&DAT_10031460);
    TakeStone(&DAT_10031468);
    TakeWood(&DAT_10031470);
    SelectUnits(&DAT_10031598,0);
    SetStandGround(1,1);
    SelectUnits(&DAT_10031478,0);
    SetStandGround(1,1);
    RunTimer(6,300);
    local_8 = GetDiff(0);
    switch(local_8) {
    case 0:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      SelectUnits(&DAT_100314f0,0);
      SelectUnits(&DAT_100314f8,1);
      SelectUnits(&DAT_10031500,1);
      SelectUnits(&DAT_10031508,1);
      SelectUnits(&DAT_10031510,1);
      SelectUnits(&DAT_10031518,1);
      SelErase(5);
      break;
    case 1:
      SetResource(0,3,0x1194);
      SetResource(0,0,5000);
      SetResource(0,2,0x1194);
      SetResource(0,1,0x1194);
      SetResource(0,5,0x1194);
      SetResource(0,4,0x1194);
      SelectUnits(&DAT_100314f0,0);
      SelectUnits(&DAT_10031500,1);
      SelectUnits(&DAT_10031508,1);
      SelectUnits(&DAT_10031518,1);
      SelErase(5);
      break;
    case 2:
      SetResource(0,3,0xdac);
      SetResource(0,0,5000);
      SetResource(0,2,0xdac);
      SetResource(0,1,0xdac);
      SetResource(0,5,0xdac);
      SetResource(0,4,0xdac);
      SelectUnits(&DAT_100314f8,0);
      SelectUnits(&DAT_10031510,1);
      SelErase(5);
      break;
    case 3:
      SetResource(0,3,0x9c4);
      SetResource(0,0,5000);
      SetResource(0,2,0x9c4);
      SetResource(0,1,0x9c4);
      SetResource(0,5,0x9c4);
      SetResource(0,4,0x9c4);
    }
    RunTimer(1,5000);
    InitialUpgrade("Gpresent","AKA04GE");
    InitialUpgrade("Gpresent","KUZ01GE");
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    SetResource(4,3,5000);
    SetResource(4,0,5000);
    SetResource(4,2,5000);
    SetResource(4,1,5000);
    SetResource(4,5,5000);
    SetResource(4,4,5000);
    uVar2 = GetDiff(0);
    StartAI(3,"ENGLAND.0",0,1,2,uVar2);
    uVar2 = GetDiff(0);
    StartAI(4,"SVEDEN.0",0,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE0AA");
      EnableMission(0x44);
      SelectUnits(&DAT_10031588,0);
      SelectUnits(&DAT_10031590,1);
      SelChangeNation(1,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      RunTimer(5,4000);
      local_c = GetDiff(0);
      switch(local_c) {
      case 0:
        CreateObject0(&DAT_10031408,&DAT_10031498,&DAT_10031428,5,&DAT_10031560,0x82);
        CreateObject0(&DAT_10031400,&DAT_10031440,&DAT_100314a0,5,&DAT_10031560,0x82);
        break;
      case 1:
        CreateObject0(&DAT_10031408,&DAT_100314b0,&DAT_10031428,5,&DAT_10031560,0x82);
        CreateObject0(&DAT_10031400,&DAT_10031440,&DAT_100314a0,5,&DAT_10031560,0x82);
        break;
      case 2:
        CreateObject0(&DAT_10031408,&DAT_100314a8,&DAT_10031428,5,&DAT_10031560,0x82);
        CreateObject0(&DAT_10031400,&DAT_10031578,&DAT_100314a0,5,&DAT_10031560,0x82);
        break;
      case 3:
        CreateObject0(&DAT_10031408,&DAT_100314b8,&DAT_10031428,5,&DAT_10031560,0x82);
        CreateObject0(&DAT_10031400,&DAT_10031578,&DAT_100314a0,5,&DAT_10031560,0x82);
      }
    }
  }
  iVar4 = GetTotalAmount0(&DAT_100314d0);
  if (iVar4 == 0) {
    SelectUnits(&DAT_10031408,0);
    SelectUnits(&DAT_10031400,1);
    SelAttackGroup(5,&DAT_10031430);
  }
  else {
    SelectUnits(&DAT_10031408,0);
    SelectUnits(&DAT_10031400,1);
    SelAttackGroup(5,&DAT_100314d0);
  }
  uVar1 = TimerIsEmpty(3);
  if ((uVar1 & 0xff) == 0) goto LAB_10002799;
  iVar4 = GetTotalAmount0(&DAT_10031408);
  if (iVar4 == 0) {
    iVar4 = GetTotalAmount0(&DAT_10031400);
    if (iVar4 != 0) goto LAB_10002763;
  }
  else {
LAB_10002763:
    uVar1 = TimerDoneFirst(5);
    if ((uVar1 & 0xff) == 0) goto LAB_10002799;
  }
  RunTimer(3,500);
LAB_10002799:
  uVar1 = TimerDone(3);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(3);
    FreeTimer(5);
    SetTrigg(9,1);
  }
  SaveSelectedUnits(5,&DAT_10031570,0);
  ClearSelection(5);
  SelectUnits1(5,&DAT_10031430,0);
  SelDie(5);
  SelectUnits(&DAT_10031570,0);
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031430);
    if (iVar4 < 4) {
      SetTrigg(10,0);
      ShowPage("#PAGE10");
      LooseGame();
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xb);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xb,0);
        local_10 = GetDiff(0);
        switch(local_10) {
        case 0:
          CreateObject0(&DAT_10031410,&DAT_10031440,&DAT_100313f0,5,&DAT_10031568,0x41);
          break;
        case 1:
          CreateObject0(&DAT_10031410,&DAT_10031440,&DAT_100313f0,5,&DAT_10031568,0x41);
          break;
        case 2:
          CreateObject0(&DAT_10031410,&DAT_100313e8,&DAT_100313f0,5,&DAT_10031568,0x41);
          break;
        case 3:
          CreateObject0(&DAT_10031410,&DAT_100313e8,&DAT_100313f0,5,&DAT_10031568,0x41);
        }
      }
    }
  }
  iVar4 = GetTotalAmount0(&DAT_10031480);
  if (iVar4 == 0) {
    SelectUnits(&DAT_10031410,0);
    SelAttackGroup(5,&DAT_10031438);
  }
  else {
    SelectUnits(&DAT_10031410,0);
    SelAttackGroup(5,&DAT_10031480);
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerIsEmpty(4);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10031410);
      if (iVar4 == 0) {
        RunTimer(4,500);
      }
    }
  }
  uVar1 = TimerDone(4);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(4);
    SetTrigg(0xb,1);
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031438);
    if (iVar4 < 2) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE11");
      LooseGame();
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xe);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xe,0);
        ShowPage("#PAGE0A");
        EnableMission(0x4b);
        SetLightSpot(&DAT_100314d8,1,1);
      }
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031420);
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
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x61);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(8);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x61,0);
          ShowPage("#PAGE9");
          ShowVictory();
        }
      }
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031550,&DAT_10031450);
    iVar3 = GetTotalAmount0(&DAT_10031450);
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      SelectUnits(&DAT_10031450,0);
      SelSendTo(5,&DAT_100315b0,0x41,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031550,&DAT_10031450);
    iVar3 = GetTotalAmount0(&DAT_10031450);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10031450,0);
      Patrol(5,&DAT_100315a8,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031450);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10031550,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -0x32 + 600);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -0x32 + 600);
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031558,&DAT_10031448);
    iVar3 = GetTotalAmount0(&DAT_10031448);
    if (iVar4 < iVar3) {
      SetTrigg(3,1);
      SelectUnits(&DAT_10031448,0);
      SelSendTo(5,&DAT_100315c0,0,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031558,&DAT_10031448);
    iVar3 = GetTotalAmount0(&DAT_10031448);
    if (iVar4 == iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_10031448,0);
      Patrol(5,&DAT_100315b8,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031448);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10031558,0);
      if (0 < iVar4) {
        SetTrigg(4,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE2",iVar4 * -100 + 1000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -100 + 1000);
      }
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10031418,0);
    if (0 < iVar4) {
      SetTrigg(0x60,0);
      SelectUnits(&DAT_100315a0,0);
      SelOpenGates(1);
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount0(&DAT_10031418,0);
    if (iVar4 == 0) {
      SetTrigg(0x60,1);
      SelectUnits(&DAT_100315a0,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100314d8,&DAT_10031420);
    if (0 < iVar4) {
      SetTrigg(5,0);
      ShowPage("#PAGE3");
      ShowPage("#PAGE4");
      DisableMission(0x4b);
      EnableMission(0x4c);
      EnableMission(0x46);
      SelectUnits(&DAT_100314c8,0);
      SelectUnits(&DAT_10031458,1);
      SelChangeNation(1,0);
      iVar4 = GetDiff(0);
      RunTimer(2,iVar4 * 1000 + 1000);
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE5");
    SelectUnits(&DAT_10031478,0);
    SelChangeNation(1,0);
  }
  uVar1 = TimerDone(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100313f8);
    if (0 < iVar4) {
      iVar4 = GetDiff(0);
      if (iVar4 == 3) {
        SelectUnits(&DAT_100313f8,0);
        SelAttackGroup(5,&DAT_10031478);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031490,&DAT_10031478);
    if (0 < iVar4) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
      EnableUnit(0,&DAT_10031580,1);
      EnableUnit(0,&DAT_100315c8,1);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100314e0);
      if (iVar4 == 0) {
        SetTrigg(7,0);
        ShowPage("#PAGE7");
        DisableMission(0x46);
        EnableMission(0x47);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(4);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(8,0);
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
