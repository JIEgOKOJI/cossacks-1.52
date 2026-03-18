#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002d188[] = "Zot";
char DAT_1002d254[] = "Glin";
char DAT_1002d320[] = "Gkep";
long long DAT_100323e0 = 0;
long long DAT_100323e8 = 0;
long long DAT_100323f0 = 0;
long long DAT_100323f8 = 0;
long long DAT_10032400 = 0;
long long DAT_10032408 = 0;
long long DAT_10032410 = 0;
long long DAT_10032420 = 0;
long long DAT_10032428 = 0;
long long DAT_10032430 = 0;
long long DAT_10032438 = 0;
long long DAT_10032440 = 0;
long long DAT_10032448 = 0;
long long DAT_10032450 = 0;
long long DAT_10032458 = 0;
long long DAT_10032460 = 0;
long long DAT_10032468 = 0;
long long DAT_10032470 = 0;
long long DAT_10032478 = 0;
long long DAT_10032480 = 0;
long long DAT_10032488 = 0;
long long DAT_10032490 = 0;
long long DAT_10032498 = 0;
long long DAT_100324a0 = 0;
long long DAT_100324a8 = 0;
long long DAT_100324b0 = 0;
long long DAT_100324b8 = 0;
long long DAT_100324c0 = 0;
long long DAT_100324c8 = 0;
long long DAT_100324d0 = 0;
long long DAT_100324d8 = 0;
long long DAT_100324e0 = 0;
long long DAT_100324e8 = 0;
long long DAT_100324f0 = 0;
long long DAT_100324f8 = 0;
long long DAT_10032500 = 0;
long long DAT_10032508 = 0;
long long DAT_10032510 = 0;
long long DAT_10032518 = 0;
long long DAT_10032520 = 0;
long long DAT_10032528 = 0;
long long DAT_10032530 = 0;
long long DAT_10032538 = 0;
long long DAT_10032540 = 0;
long long DAT_10032548 = 0;
long long DAT_10032550 = 0;
long long DAT_10032558 = 0;
long long DAT_10032560 = 0;
long long DAT_10032568 = 0;
long long DAT_10032580 = 0;
long long DAT_10032588 = 0;
long long DAT_10032590 = 0;
long long DAT_10032598 = 0;
long long DAT_100325a8 = 0;
long long DAT_100325b0 = 0;
long long DAT_100325b8 = 0;
long long DAT_100325c0 = 0;
long long DAT_100325c8 = 0;
long long DAT_100325d0 = 0;
long long DAT_100325d8 = 0;
long long DAT_100325e0 = 0;
long long DAT_100325e8 = 0;
long long DAT_100325f0 = 0;
long long DAT_100325f8 = 0;
long long DAT_10032608 = 0;
long long DAT_10032610 = 0;
long long DAT_10032618 = 0;
long long DAT_10032620 = 0;
long long DAT_10032628 = 0;
long long DAT_10032630 = 0;
long long DAT_10032638 = 0;
long long DAT_10032640 = 0;
long long DAT_10032648 = 0;
long long DAT_10032650 = 0;
long long DAT_10032658 = 0;
long long DAT_10032660 = 0;
long long DAT_10032668 = 0;
long long DAT_10032670 = 0;
long long DAT_10032678 = 0;
long long DAT_10032680 = 0;
long long DAT_10032688 = 0;
long long DAT_10032690 = 0;
long long DAT_10032698 = 0;
long long DAT_100326a0 = 0;
long long DAT_100326a8 = 0;
long long DAT_100326b0 = 0;
long long DAT_100326c0 = 0;
long long DAT_100326c8 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10032478,"Ghetman");
  RegisterUnits(&DAT_100324c0,"Gband1");
  RegisterUnits(&DAT_10032508,"Gholop1");
  RegisterUnits(&DAT_10032500,"Gholop2");
  RegisterUnits(&DAT_100324f8,"Gholop3");
  RegisterUnits(&DAT_100324f0,"Gholop4");
  RegisterUnits(&DAT_100324e8,"Gholop5");
  RegisterUnits(&DAT_10032520,"Gholop6");
  RegisterUnits(&DAT_10032518,"Gholop7");
  RegisterUnits(&DAT_10032510,"Gholop8");
  RegisterUnits(&DAT_10032680,DAT_1002d320);
  RegisterUnits(&DAT_100326b0,"Gkep2");
  RegisterUnits(&DAT_10032678,"Gpresent1");
  RegisterUnits(&DAT_100325d8,"Gbos1");
  RegisterUnits(&DAT_100325e0,"Gbos2");
  RegisterUnits(&DAT_100325e8,"Gbos3");
  RegisterUnits(&DAT_100325f0,"Gbos4");
  RegisterUnits(&DAT_100325f8,"Gbos5");
  RegisterUnits(&DAT_100326c0,"Gport1");
  RegisterUnits(&DAT_100323f0,"Gport2");
  RegisterUnits(&DAT_100323e0,"Gport3");
  RegisterUnits(&DAT_10032668,"Goxrana1");
  RegisterUnits(&DAT_10032670,"Goxrana2");
  RegisterUnits(&DAT_100324b0,"Gpatrol1");
  RegisterUnits(&DAT_100324a0,"Gpatrol2");
  RegisterUnits(&DAT_10032498,"Gpatrol3");
  RegisterUnits(&DAT_100324a8,"Gpatrol4");
  RegisterUnits(&DAT_10032490,"Gobj1");
  RegisterUnits(&DAT_10032690,"Ggates1");
  RegisterUnits(&DAT_10032688,"Ggates2");
  RegisterUnits(&DAT_100324c8,"Goboz");
  RegisterUnits(&DAT_10032698,DAT_1002d254);
  RegisterZone(&DAT_10032608,"Zband1");
  RegisterZone(&DAT_10032530,"Zband");
  RegisterZone(&DAT_100326a0,"Zband1a");
  RegisterZone(&DAT_100326a8,"Zband1b");
  RegisterZone(&DAT_100325a8,"Ztalk1");
  RegisterZone(&DAT_100325b0,"Ztalk2");
  RegisterZone(&DAT_10032630,"Zgen1");
  RegisterZone(&DAT_10032638,"Zgen2");
  RegisterZone(&DAT_10032640,"Zgen3");
  RegisterZone(&DAT_10032648,"Zgen4");
  RegisterZone(&DAT_10032618,"Zostrov1");
  RegisterZone(&DAT_10032610,"Zostrov2");
  RegisterZone(&DAT_10032620,"Zattack1");
  RegisterZone(&DAT_10032628,"Zattack2");
  RegisterZone(&DAT_100324d8,"Zoboz1");
  RegisterZone(&DAT_100324e0,"Zoboz2");
  RegisterZone(&DAT_10032590,"Zpatrol1");
  RegisterZone(&DAT_10032598,"Zpatrol2");
  RegisterZone(&DAT_10032580,"Zpatrol3");
  RegisterZone(&DAT_10032588,"Zpatrol4");
  RegisterZone(&DAT_100323e8,DAT_1002d188);
  RegisterZone(&DAT_10032468,"Zgates1");
  RegisterZone(&DAT_10032470,"Zgates2");
  RegisterZone(&DAT_100325b8,"Zsvet1");
  RegisterZone(&DAT_100325c0,"Zsvet2");
  RegisterZone(&DAT_100325c8,"Zsvet3");
  RegisterZone(&DAT_100325d0,"Zsvet4");
  RegisterUnitType(&DAT_10032410,"Kazarma_1_HO(HO)");
  RegisterUnitType(&DAT_100324d0,"Konushnia_HO(HO)");
  RegisterUnitType(&DAT_10032480,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_10032548,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_100326c8,"Yahta(SV)");
  RegisterUnitType(&DAT_10032488,"GALERA(SV)");
  RegisterUnitType(&DAT_10032408,"Fregat(HO)");
  RegisterUnitType(&DAT_10032538,"Victoria(HO)");
  RegisterVar(&DAT_10032450,8);
  RegisterVar(&DAT_10032448,8);
  RegisterVar(&DAT_10032460,8);
  RegisterVar(&DAT_10032458,8);
  RegisterVar(&DAT_10032428,8);
  RegisterVar(&DAT_10032420,8);
  RegisterVar(&DAT_10032438,8);
  RegisterVar(&DAT_10032430,8);
  RegisterVar(&DAT_10032440,8);
  RegisterVar(&DAT_10032528,8);
  RegisterFormation(&DAT_10032660,"#LINE5");
  RegisterFormation(&DAT_10032550,"#LINE20PUS");
  RegisterFormation(&DAT_10032560,"#LINE30PUS");
  RegisterFormation(&DAT_10032568,"#LINE40PUS");
  RegisterFormation(&DAT_10032558,"#LINE15PUS");
  RegisterFormation(&DAT_10032540,"#LINE10PUS");
  RegisterFormation(&DAT_10032658,"#LINE3");
  RegisterFormation(&DAT_100323f8,"#SHIPS3");
  RegisterFormation(&DAT_10032400,"#SHIPS5");
  RegisterFormation(&DAT_100324b8,"#ALONE");
  RegisterDynGroup(&DAT_10032450);
  RegisterDynGroup(&DAT_10032448);
  RegisterDynGroup(&DAT_10032460);
  RegisterDynGroup(&DAT_10032458);
  RegisterDynGroup(&DAT_10032428);
  RegisterDynGroup(&DAT_10032420);
  RegisterDynGroup(&DAT_10032438);
  RegisterDynGroup(&DAT_10032430);
  RegisterDynGroup(&DAT_10032440);
  RegisterDynGroup(&DAT_10032528);
  RegisterDynGroup(&DAT_10032650);
  SetPlayerName(1,"ALLIES");
  SetPlayerName(2,"SVEDES");
  SetPlayerName(3,"SPAIN");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(0,3);
  ChangeFriends(1,3);
  ChangeFriends(2,0x2c);
  ChangeFriends(3,0x2c);
  ChangeFriends(5,0x2c);
  EnableUnit(0,&DAT_10032410,0);
  EnableUnit(0,&DAT_100324d0,0);
  uStack_8 = 0x10001bc0;
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
    DisableMission(0x4d);
    DisableMission(0x4b);
    DisableMission(0x4c);
    TakeFood(&DAT_10032508);
    TakeFood(&DAT_100324e8);
    TakeFood(&DAT_10032518);
    TakeStone(&DAT_100324f8);
    TakeStone(&DAT_100324f0);
    TakeStone(&DAT_10032520);
    TakeWood(&DAT_10032500);
    TakeWood(&DAT_10032510);
    SelectUnits(&DAT_10032680,0);
    SelectUnits(&DAT_100326b0,1);
    SetStandGround(1,1);
    SelectUnits(&DAT_10032668,0);
    SelectUnits(&DAT_10032670,1);
    SetStandGround(2,1);
    SelectUnits(&DAT_100324b0,0);
    Patrol(2,&DAT_10032580,0);
    SelectUnits(&DAT_100324a0,0);
    Patrol(2,&DAT_10032588,0x82);
    RunTimer(6,300);
    local_8 = GetDiff(0);
    switch(local_8) {
    case 0:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,20000);
      SetResource(0,4,20000);
      SelectUnits(&DAT_100325d8,0);
      SelectUnits(&DAT_100325e0,1);
      SelectUnits(&DAT_100325e8,1);
      SelectUnits(&DAT_100325f0,1);
      SelectUnits(&DAT_100325f8,1);
      SelErase(5);
      break;
    case 1:
      SetResource(0,3,8000);
      SetResource(0,0,8000);
      SetResource(0,2,8000);
      SetResource(0,1,8000);
      SetResource(0,5,15000);
      SetResource(0,4,15000);
      SelectUnits(&DAT_100325d8,0);
      SelectUnits(&DAT_100325e8,1);
      SelErase(5);
      break;
    case 2:
      SetResource(0,3,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      SetResource(0,1,6000);
      SetResource(0,5,12000);
      SetResource(0,4,12000);
      SelectUnits(&DAT_100325f0,0);
      SelErase(5);
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
    }
    RunTimer(1,2000);
    InitialUpgrade("Gobj1","AKA04HO");
    InitialUpgrade("Gobj1","KUZ01HO");
    InitialUpgrade("Ghetman","AKA16HO");
    InitialUpgrade("Ghetman","AKA17HO");
    InitialUpgrade("Ghetman","AKA20HO");
    InitialUpgrade("Ghetman","AKA27HO");
    InitialUpgrade("Ghetman","AKA28HO");
    InitialUpgrade("Gport1","AKA04SV");
    InitialUpgrade("Gport1","KUZ01SV");
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    uVar2 = GetDiff(0);
    StartAI(3,"SPAIN.0",2,1,2,uVar2);
    ClearSelection(2);
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0AA");
      EnableMission(0x44);
      SetLightSpot(&DAT_10032618,4,1);
      SetLightSpot(&DAT_10032610,2,2);
      SetLightSpot(&DAT_100325b0,1,3);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10032530,0);
    if (0 < iVar4) {
      SetTrigg(3,0);
      ShowPage("#PAGE2");
      EnableMission(0x46);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10032608,&DAT_100324c0);
    iVar3 = GetTotalAmount0(&DAT_100324c0);
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      SelectUnits(&DAT_100324c0,0);
      SelSendTo(5,&DAT_100326a8,0x1e,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10032608,&DAT_100324c0);
    iVar3 = GetTotalAmount0(&DAT_100324c0);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100324c0,0);
      Patrol(5,&DAT_100326a0,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100324c0);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10032608,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 5000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 5000);
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
      SetLightSpot(&DAT_100325a8,1,4);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032478);
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
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x61);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x61,0);
          ShowPage("#PAGE9");
          ShowVictory();
        }
      }
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10032470,0);
    if (0 < iVar4) {
      SetTrigg(0x60,0);
      SelectUnits(&DAT_10032688,0);
      SelOpenGates(1);
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount0(&DAT_10032470,0);
    if (iVar4 == 0) {
      SetTrigg(0x60,1);
      SelectUnits(&DAT_10032688,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount1(&DAT_100325b0,&DAT_10032478);
      if (0 < iVar4) {
        SetTrigg(4,0);
        ShowPage("#PAGE3");
        ShowPage("#PAGE4");
        CreateObject0(&DAT_10032428,&DAT_100323f8,&DAT_10032408,1,&DAT_10032640,200);
        SelectUnits(&DAT_10032428,0);
        SelChangeNation(1,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10032428);
      if (iVar4 < 3) {
        CreateObject0(&DAT_10032440,&DAT_100324b8,&DAT_10032408,1,&DAT_10032640,200);
        SelectUnits(&DAT_10032440,0);
        SelSendAndKill(1,&DAT_10032620,200,0);
        SelectUnits(&DAT_10032440,0);
        SelChangeNation(1,0);
        RemoveGroup(&DAT_10032440,&DAT_10032428);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(5,0);
      RunTimer(2,8000);
      local_c = GetDiff(0);
      switch(local_c) {
      case 0:
        CreateObject0(&DAT_10032450,&DAT_100324b8,&DAT_100326c8,2,&DAT_10032630,0x41);
        CreateObject0(&DAT_10032448,&DAT_100324b8,&DAT_10032488,2,&DAT_10032630,0x41);
        break;
      case 1:
        CreateObject0(&DAT_10032450,&DAT_100323f8,&DAT_100326c8,2,&DAT_10032630,0x41);
        CreateObject0(&DAT_10032448,&DAT_100324b8,&DAT_10032488,2,&DAT_10032630,0x41);
        break;
      case 2:
        CreateObject0(&DAT_10032450,&DAT_100323f8,&DAT_100326c8,2,&DAT_10032630,0x41);
        CreateObject0(&DAT_10032448,&DAT_100323f8,&DAT_10032488,2,&DAT_10032630,0x41);
        break;
      case 3:
        CreateObject0(&DAT_10032450,&DAT_10032400,&DAT_100326c8,2,&DAT_10032630,0x41);
        CreateObject0(&DAT_10032448,&DAT_100323f8,&DAT_10032488,2,&DAT_10032630,0x41);
      }
      SelectUnits(&DAT_10032448,0);
      SelectUnits(&DAT_10032450,1);
      SelSendAndKill(2,&DAT_10032620,0x41,0);
      ClearSelection(2);
    }
  }
  uVar1 = TimerIsEmpty(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032450);
    if (iVar4 == 0) {
      iVar4 = GetTotalAmount0(&DAT_10032448);
      if (iVar4 != 0) goto LAB_100032ef;
    }
    else {
LAB_100032ef:
      uVar1 = TimerDoneFirst(2);
      if ((uVar1 & 0xff) == 0) goto LAB_10003325;
    }
    RunTimer(3,600);
  }
LAB_10003325:
  uVar1 = TimerDone(3);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(3);
    FreeTimer(2);
    SetTrigg(5,1);
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100326c0);
    if (iVar4 == 0) {
      SetTrigg(8,0);
      ShowPage("#PAGE7A");
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10032468,0);
    if (0 < iVar4) {
      SetTrigg(0x5a,0);
      SelectUnits(&DAT_10032690,0);
      SelOpenGates(1);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount0(&DAT_10032468,0);
    if (iVar4 == 0) {
      SetTrigg(0x5a,1);
      SelectUnits(&DAT_10032690,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x12);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount1(&DAT_100325a8,&DAT_10032478);
        if (0 < iVar4) {
          SetTrigg(6,0);
          ShowPage("#PAGE5");
          ShowPage("#PAGE6");
          ShowPage("#PAGE6A");
          EnableMission(0x4d);
          EnableMission(0x4b);
          CreateObject0(&DAT_10032420,&DAT_100323f8,&DAT_10032408,1,&DAT_10032648,0xaa);
          SelectUnits(&DAT_10032420,0);
          SelectUnits(&DAT_10032678,1);
          SelectUnits(&DAT_10032508,1);
          SelChangeNation(1,0);
        }
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetResource(0,1);
      if (0x4ee8 < iVar4) {
        iVar4 = GetResource(0,0);
        if (50000 < iVar4) {
          iVar4 = GetResource(0,2);
          if (50000 < iVar4) {
            SetTrigg(0x10,0);
            ShowPage("#PAGE10");
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x11);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetResource(0,1);
      if (0x4ee8 < iVar4) {
        iVar4 = GetResource(0,0);
        if (50000 < iVar4) {
          iVar4 = GetResource(0,2);
          if (50000 < iVar4) {
            iVar4 = GetUnitsAmount1(&DAT_100324d8,&DAT_100324c8);
            if (iVar4 == 3) {
              SetTrigg(0x11,0);
              ShowPage("#PAGE10A");
              AddResource(0,1,0xffffb1e0);
              AddResource(0,0,0xffff3cb0);
              AddResource(0,2,0xffff3cb0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100324c8);
    if (iVar4 < 3) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x13);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount1(&DAT_100324e0,&DAT_100324c8);
        if (iVar4 == 3) {
          SetTrigg(0x13,0);
          ShowPage("#PAGE13");
          DisableMission(0x4b);
          EnableMission(0x4c);
          SelectUnits(&DAT_100324c8,0);
          SelChangeNation(0,1);
          SelectUnits(&DAT_100324c8,0);
          SelSendTo(1,&DAT_100323e8,0,0);
          RunTimer(7,1000);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5d);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5d,0);
      ShowPage("#PAGE14");
      CreateObject0(&DAT_10032438,&DAT_100323f8,&DAT_10032538,1,&DAT_10032640,200);
      CreateObject0(&DAT_10032430,&DAT_100323f8,&DAT_10032538,1,&DAT_10032648,0xaa);
      SetLightSpot(&DAT_10032590,10,5);
      SetLightSpot(&DAT_10032598,10,6);
      SetLightSpot(&DAT_100325b8,10,7);
      SetLightSpot(&DAT_100325c0,10,8);
      SetLightSpot(&DAT_100325c8,10,9);
      SetLightSpot(&DAT_100325d0,10,10);
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetTotalAmount0(&DAT_100326c0);
    if (0 < iVar4) {
      SelectUnits(&DAT_10032438,0);
      SelAttackGroup(1,&DAT_100326c0);
      ClearSelection(1);
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100326c0);
      if (iVar4 == 0) {
        SetTrigg(0x5c,0);
        SelectUnits(&DAT_10032438,0);
        SelSendAndKill(1,&DAT_10032590,0xc3,0);
        ClearSelection(1);
      }
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetTotalAmount0(&DAT_100323f0);
    if (0 < iVar4) {
      SelectUnits(&DAT_10032430,0);
      SelAttackGroup(1,&DAT_100323f0);
      ClearSelection(1);
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x5b);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100323f0);
      if (iVar4 == 0) {
        SetTrigg(0x5b,0);
        SelectUnits(&DAT_10032430,0);
        SelSendAndKill(1,&DAT_10032598,0xc3,0);
        ClearSelection(1);
      }
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x59);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10032698);
      if (iVar4 == 0) {
        SetTrigg(0x59,0);
        SelectUnits(&DAT_10032438,0);
        SelSendTo(1,&DAT_10032640,200,0);
        SelectUnits(&DAT_10032430,0);
        SelSendTo(1,&DAT_10032648,0xaa,0);
        ClearSelection(1);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10032420);
      if (iVar4 < 3) {
        CreateObject0(&DAT_10032528,&DAT_100324b8,&DAT_10032408,1,&DAT_10032648,0xaa);
        SelectUnits(&DAT_10032528,0);
        SelSendAndKill(1,&DAT_10032628,0xaa,0);
        SelectUnits(&DAT_10032528,0);
        SelChangeNation(1,0);
        RemoveGroup(&DAT_10032528,&DAT_10032420);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(7);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(7,0);
        RunTimer(4,8000);
        local_10 = GetDiff(0);
        switch(local_10) {
        case 0:
          CreateObject0(&DAT_10032460,&DAT_100324b8,&DAT_100326c8,2,&DAT_10032638,0x41);
          CreateObject0(&DAT_10032458,&DAT_100324b8,&DAT_10032488,2,&DAT_10032638,0x41);
          break;
        case 1:
          CreateObject0(&DAT_10032460,&DAT_100323f8,&DAT_100326c8,2,&DAT_10032638,0x41);
          CreateObject0(&DAT_10032458,&DAT_100324b8,&DAT_10032488,2,&DAT_10032638,0x41);
          break;
        case 2:
          CreateObject0(&DAT_10032460,&DAT_100323f8,&DAT_100326c8,2,&DAT_10032638,0x41);
          CreateObject0(&DAT_10032458,&DAT_100323f8,&DAT_10032488,2,&DAT_10032638,0x41);
          break;
        case 3:
          CreateObject0(&DAT_10032460,&DAT_100323f8,&DAT_100326c8,2,&DAT_10032638,0x41);
          CreateObject0(&DAT_10032458,&DAT_10032400,&DAT_10032488,2,&DAT_10032638,0x41);
        }
        SelectUnits(&DAT_10032460,0);
        SelSendAndKill(2,&DAT_10032628,0x41,0);
        ClearSelection(2);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10032458,0);
      SelAttackGroup(2,&DAT_10032490);
      ClearSelection(2);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) goto LAB_100043be;
  uVar1 = TimerIsEmpty(5);
  if ((uVar1 & 0xff) == 0) goto LAB_100043be;
  iVar4 = GetTotalAmount0(&DAT_10032460);
  if (iVar4 == 0) {
    iVar4 = GetTotalAmount0(&DAT_10032458);
    if (iVar4 != 0) goto LAB_10004388;
  }
  else {
LAB_10004388:
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) == 0) goto LAB_100043be;
  }
  RunTimer(5,800);
LAB_100043be:
  uVar1 = TimerDone(5);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(5);
    FreeTimer(4);
    SetTrigg(7,1);
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100323f0);
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
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032490);
    if (iVar4 == 0) {
      SetTrigg(9,0);
      ShowPage("#PAGE11");
      LooseGame();
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
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
