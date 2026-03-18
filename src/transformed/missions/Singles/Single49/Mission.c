#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_100323e0 = 0;
long long DAT_100323e8 = 0;
long long DAT_100323f0 = 0;
long long DAT_100323f8 = 0;
long long DAT_10032400 = 0;
long long DAT_10032408 = 0;
long long DAT_10032410 = 0;
long long DAT_10032418 = 0;
long long DAT_10032420 = 0;
long long DAT_10032428 = 0;
long long DAT_10032430 = 0;
long long DAT_10032438 = 0;
int DAT_10032440 = 0;
long long DAT_10032448 = 0;
long long DAT_10032450 = 0;
long long DAT_10032458 = 0;
long long DAT_10032460 = 0;
long long DAT_10032468 = 0;
long long DAT_10032470 = 0;
int DAT_10032478 = 0;
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
long long DAT_10032570 = 0;
long long DAT_10032578 = 0;
long long DAT_10032580 = 0;
long long DAT_10032588 = 0;
long long DAT_10032590 = 0;
long long DAT_10032598 = 0;
long long DAT_100325a0 = 0;
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
long long DAT_10032600 = 0;
long long DAT_10032608 = 0;
long long DAT_10032610 = 0;
long long DAT_10032618 = 0;
long long DAT_10032620 = 0;
long long DAT_10032628 = 0;
long long DAT_10032630 = 0;
long long DAT_10032638 = 0;
long long DAT_10032640 = 0;
long long DAT_10032648 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10032448,"Ghetman");
  RegisterUnits(&DAT_10032488,"Gband1");
  RegisterUnits(&DAT_10032480,"Gband2");
  RegisterUnits(&DAT_10032490,"Gband3");
  RegisterUnits(&DAT_100324c8,"Gholop1");
  RegisterUnits(&DAT_100324c0,"Gholop2");
  RegisterUnits(&DAT_100324b8,"Gholop3");
  RegisterUnits(&DAT_100324b0,"Gholop4");
  RegisterUnits(&DAT_100324a8,"Gholop5");
  RegisterUnits(&DAT_100324d0,"Gholop6");
  RegisterUnits(&DAT_10032460,"Gholopdan");
  RegisterUnits(&DAT_10032540,"Gholoppr");
  RegisterUnits(&DAT_10032560,"Gbos2");
  RegisterUnits(&DAT_10032568,"Gbos3");
  RegisterUnits(&DAT_10032578,"Gbos4");
  RegisterUnits(&DAT_10032550,"Gmush1");
  RegisterUnits(&DAT_10032520,"Gpike1");
  RegisterUnits(&DAT_100324d8,"Goxrana");
  RegisterUnits(&DAT_10032458,"Gobj1");
  RegisterUnits(&DAT_10032600,"Ggates1");
  RegisterUnits(&DAT_10032498,"Goboz");
  RegisterUnits(&DAT_10032558,"Gcir1");
  RegisterUnits(&DAT_100325b8,"Gdrag1");
  RegisterUnits(&DAT_100324e0,"Gbash1");
  RegisterUnits(&DAT_10032548,"Gzabor");
  RegisterUnits(&DAT_10032640,"Gkaz1");
  RegisterUnits(&DAT_10032648,"Gkaz2");
  RegisterZone(&DAT_100325a0,"Zband1");
  RegisterZone(&DAT_10032620,"Zband1a");
  RegisterZone(&DAT_10032628,"Zband1b");
  RegisterZone(&DAT_100325a8,"Zband2");
  RegisterZone(&DAT_10032630,"Zband2a");
  RegisterZone(&DAT_10032638,"Zband2b");
  RegisterZone(&DAT_100325b0,"Zband3");
  RegisterZone(&DAT_10032608,"Zband3a");
  RegisterZone(&DAT_10032610,"Zband3b");
  RegisterZone(&DAT_10032618,"Zband3c");
  RegisterZone(&DAT_100325d0,"Zgen1");
  RegisterZone(&DAT_100325d8,"Zgen2");
  RegisterZone(&DAT_100325c0,"Zattack1");
  RegisterZone(&DAT_100325c8,"Zattack2");
  RegisterZone(&DAT_100324a0,"Zoboz");
  RegisterUnitType(&DAT_10032450,"Rundashir_Avstria_DIP(BA)");
  RegisterUnitType(&DAT_10032508,"Grenader_DIP(BA)");
  RegisterUnitType(&DAT_100324f0,"GRUZ(UN)");
  RegisterUnitType(&DAT_10032410,"Grenader(BA)");
  RegisterUnitType(&DAT_10032570,"Mushketer_BA(BA)");
  RegisterUnitType(&DAT_100324f8,"Bashnia(fr)");
  RegisterUnitType(&DAT_10032580,"WALL_EV(fr)");
  RegisterUnitType(&DAT_10032588,"WALL_UKR(fr)");
  RegisterUnitType(&DAT_10032538,"Bashnia(GE)");
  RegisterUnitType(&DAT_10032590,"WALL_EV(GE)");
  RegisterUnitType(&DAT_10032598,"WALL_UKR(GE)");
  RegisterUnitType(&DAT_100325f8,"artileri_depo_FR(fr)");
  RegisterUnitType(&DAT_10032468,"Kreposnoi_pruss(BA)");
  RegisterVar(&DAT_10032428,8);
  RegisterVar(&DAT_10032420,8);
  RegisterVar(&DAT_10032438,8);
  RegisterVar(&DAT_10032430,8);
  RegisterVar(&DAT_100323f8,8);
  RegisterVar(&DAT_100323f0,8);
  RegisterVar(&DAT_10032408,8);
  RegisterVar(&DAT_10032400,8);
  RegisterVar(&DAT_10032418,8);
  RegisterVar(&DAT_100324e8,8);
  RegisterVar(&DAT_10032440,4);
  RegisterVar(&DAT_10032478,4);
  RegisterFormation(&DAT_100325f0,"#LINE5");
  RegisterFormation(&DAT_10032510,"#LINE20PUS");
  RegisterFormation(&DAT_10032528,"#LINE30PUS");
  RegisterFormation(&DAT_10032530,"#LINE40PUS");
  RegisterFormation(&DAT_10032518,"#LINE15PUS");
  RegisterFormation(&DAT_10032500,"#LINE10PUS");
  RegisterFormation(&DAT_100325e8,"#LINE3");
  RegisterFormation(&DAT_100323e0,"#SHIPS3");
  RegisterFormation(&DAT_100323e8,"#SHIPS5");
  RegisterFormation(&DAT_10032470,"#ALONE");
  RegisterDynGroup(&DAT_10032428);
  RegisterDynGroup(&DAT_10032420);
  RegisterDynGroup(&DAT_10032438);
  RegisterDynGroup(&DAT_10032430);
  RegisterDynGroup(&DAT_100323f8);
  RegisterDynGroup(&DAT_100323f0);
  RegisterDynGroup(&DAT_10032408);
  RegisterDynGroup(&DAT_10032400);
  RegisterDynGroup(&DAT_10032418);
  RegisterDynGroup(&DAT_100324e8);
  RegisterDynGroup(&DAT_100325e0);
  SetPlayerName(1,"PRUSSIA");
  SetPlayerName(2,"BAVARIA");
  SetPlayerName(3,"DUTCH");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(0,0x13);
  ChangeFriends(1,0x13);
  ChangeFriends(2,0x2c);
  ChangeFriends(3,0x2c);
  ChangeFriends(5,0x2c);
  EnableUnit(0,&DAT_10032588,0);
  EnableUnit(0,&DAT_10032580,0);
  EnableUnit(0,&DAT_100325f8,0);
  EnableUnit(0,&DAT_10032598,0);
  EnableUnit(0,&DAT_10032590,0);
  uStack_8 = 0x10001af3;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_18;
  int local_14;
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
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
    TakeFood(&DAT_100324c8);
    TakeFood(&DAT_100324c0);
    TakeStone(&DAT_100324b8);
    TakeStone(&DAT_100324d0);
    TakeWood(&DAT_100324b0);
    TakeWood(&DAT_100324a8);
    SelectUnits(&DAT_10032600,0);
    SelOpenGates(2);
    local_10 = GetDiff(0);
    switch(local_10) {
    case 0:
      SetResource(0,3,8000);
      SetResource(0,0,8000);
      SetResource(0,2,8000);
      SetResource(0,1,8000);
      SetResource(0,5,12000);
      SetResource(0,4,12000);
      SelectUnits(&DAT_10032560,0);
      SelectUnits(&DAT_10032568,1);
      SelectUnits(&DAT_10032578,1);
      SelectUnits(&DAT_100324d8,1);
      SelErase(5);
      SelectUnits(&DAT_10032550,0);
      SelectUnits(&DAT_10032558,1);
      SelectUnits(&DAT_100325b8,1);
      SelectUnits(&DAT_100324e0,1);
      SelErase(2);
      RunTimer(7,240000);
      DAT_10032440 = 1;
      DAT_10032478 = 1;
      break;
    case 1:
      SetResource(0,3,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      SetResource(0,1,7000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10032568,0);
      SelectUnits(&DAT_10032578,1);
      SelectUnits(&DAT_100324d8,1);
      SelErase(5);
      SelectUnits(&DAT_10032520,0);
      SelectUnits(&DAT_10032558,1);
      SelectUnits(&DAT_100325b8,1);
      SelectUnits(&DAT_100324e0,1);
      SelErase(2);
      RunTimer(7,150000);
      DAT_10032440 = 3;
      DAT_10032478 = 3;
      break;
    case 2:
      SetResource(0,3,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      SetResource(0,1,6000);
      SetResource(0,5,8000);
      SetResource(0,4,8000);
      SelectUnits(&DAT_10032578,0);
      SelectUnits(&DAT_100324d8,1);
      SelErase(5);
      SelectUnits(&DAT_100325b8,0);
      SelErase(2);
      RunTimer(7,100000);
      DAT_10032440 = 5;
      DAT_10032478 = 5;
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,7000);
      SetResource(0,4,7000);
      RunTimer(7,80000);
      DAT_10032440 = 10;
      DAT_10032478 = 10;
    }
    RunTimer(6,400);
    RunTimer(1,8000);
    iVar4 = GetDiff(0);
    RunTimer(0xb,(5 - iVar4) * 2000);
    iVar4 = GetDiff(0);
    RunTimer(0xc,(5 - iVar4) * 4000);
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 6000);
    iVar4 = GetDiff(0);
    RunTimer(0xe,(5 - iVar4) * 8000);
    iVar4 = GetDiff(0);
    RunTimer(0xf,(5 - iVar4) * 10000);
    iVar4 = GetDiff(0);
    RunTimer(0x10,(5 - iVar4) * 12000);
    InitialUpgrade("Gobj1","AKA01BA");
    InitialUpgrade("Gobj1","AKA02BA");
    InitialUpgrade("Gobj1","AKA03BA");
    InitialUpgrade("Gobj1","AKA04BA");
    InitialUpgrade("Gobj1","AKA05BA");
    InitialUpgrade("Gobj1","AKA07BA");
    InitialUpgrade("Gobj1","AKA08BA");
    InitialUpgrade("Gobj1","AKA24BA");
    InitialUpgrade("Gobj1","AKA31BA");
    InitialUpgrade("Gobj1","AKA32BA");
    InitialUpgrade("Gobj1","AKA33BA");
    InitialUpgrade("Gobj1","AKA11BA");
    InitialUpgrade("Gobj1","KUZ01BA");
    InitialUpgrade("Gobj1","KUZ03BA");
    InitialUpgrade("Gobj1","Melnica(BA)GETRES");
    InitialUpgrade("Gobj1","Melnica(BA)GETRES2");
    InitialUpgrade("Gobj1","MAINBA");
    InitialUpgrade("Ghetman","MAINFR");
    InitialUpgrade("Gholopdan","MAINDA");
    InitialUpgrade("Gholoppr","MAINGE");
    InitialUpgrade("Gobj1","KUZ04BA");
    ClearSelection(2);
    SelectUnits(&DAT_100324d0,0);
    DoNotUseSelInAI(1);
    ClearSelection(1);
    SetResource(1,3,7000);
    SetResource(1,0,7000);
    SetResource(1,2,7000);
    SetResource(1,1,7000);
    SetResource(1,5,7000);
    SetResource(1,4,7000);
    uVar2 = GetDiff(0);
    StartAI(1,"GERMAN.0",1,1,2,uVar2);
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    uVar2 = GetDiff(0);
    StartAI(3,"DENMARK.0",1,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(0xb);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_BA(BA)ATTACK");
    InitialUpgrade("Gobj1","Mushketer_BA(BA)SHIELD");
    InitialUpgrade("Gobj1","Grenader(BA)ATTACK");
    InitialUpgrade("Gobj1","Grenader(BA)SHIELD");
  }
  uVar1 = TimerDoneFirst(0xc);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_BA(BA)ATTACK3");
    InitialUpgrade("Gobj1","Mushketer_BA(BA)SHIELD3");
    InitialUpgrade("Gobj1","Grenader(BA)ATTACK3");
    InitialUpgrade("Gobj1","Grenader(BA)SHIELD3");
  }
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_BA(BA)ATTACK4");
    InitialUpgrade("Gobj1","Mushketer_BA(BA)SHIELD4");
    InitialUpgrade("Gobj1","Grenader(BA)ATTACK4");
    InitialUpgrade("Gobj1","Grenader(BA)SHIELD4");
  }
  uVar1 = TimerDoneFirst(0xe);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_BA(BA)ATTACK5");
    InitialUpgrade("Gobj1","Mushketer_BA(BA)SHIELD5");
    InitialUpgrade("Gobj1","Grenader(BA)ATTACK5");
    InitialUpgrade("Gobj1","Grenader(BA)SHIELD5");
  }
  uVar1 = TimerDoneFirst(0xf);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_BA(BA)ATTACK6");
    InitialUpgrade("Gobj1","Mushketer_BA(BA)SHIELD6");
    InitialUpgrade("Gobj1","Grenader(BA)ATTACK6");
    InitialUpgrade("Gobj1","Grenader(BA)SHIELD6");
  }
  uVar1 = TimerDoneFirst(0x10);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Mushketer_BA(BA)ATTACK7");
    InitialUpgrade("Gobj1","Mushketer_BA(BA)SHIELD7");
    InitialUpgrade("Gobj1","Grenader(BA)ATTACK7");
    InitialUpgrade("Gobj1","Grenader(BA)SHIELD7");
    InitialUpgrade("Gobj1","AKA12BA");
    InitialUpgrade("Gobj1","AKA13BA");
    InitialUpgrade("Gobj1","AKA14BA");
    InitialUpgrade("Gobj1","AKA15BA");
    InitialUpgrade("Gobj1","AKA35BA");
    InitialUpgrade("Gobj1","AKA36BA");
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0AA");
      EnableMission(0x44);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325a0,&DAT_10032488);
    iVar3 = GetTotalAmount0(&DAT_10032488);
    if (iVar4 < iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10032488,0);
      SelSendTo(5,&DAT_10032628,0x41,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325a0,&DAT_10032488);
    iVar3 = GetTotalAmount0(&DAT_10032488);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10032488,0);
      Patrol(5,&DAT_10032620,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032488);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100325a0,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -10000 + 70000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -10000 + 70000);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325a8,&DAT_10032480);
    iVar3 = GetTotalAmount0(&DAT_10032480);
    if (iVar4 < iVar3) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_10032480,0);
      SelSendTo(5,&DAT_10032638,0x1e,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325a8,&DAT_10032480);
    iVar3 = GetTotalAmount0(&DAT_10032480);
    if (iVar4 == iVar3) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_10032480,0);
      Patrol(5,&DAT_10032630,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032480);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100325a8,0);
      if (0 < iVar4) {
        SetTrigg(0x15,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -20000 + 100000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -20000 + 100000);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325b0,&DAT_10032490);
    iVar3 = GetTotalAmount0(&DAT_10032490);
    if (iVar4 < iVar3) {
      SetTrigg(4,0);
      SelectUnits(&DAT_10032490,0);
      SelSendTo(5,&DAT_10032610,0x41,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100325b0,&DAT_10032490);
    iVar3 = GetTotalAmount0(&DAT_10032490);
    if (iVar4 == iVar3) {
      SetTrigg(4,0);
      SelectUnits(&DAT_10032490,0);
      Patrol(5,&DAT_10032608,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032490);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100325b0,0);
      if (0 < iVar4) {
        SetTrigg(5,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 10000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 10000);
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10032490);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100325b0,1);
      if (0 < iVar4) {
        SetTrigg(5,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0B",iVar4 * -1000 + 10000);
        iVar4 = GetDiff(0);
        AddResource(1,1,iVar4 * -1000 + 10000);
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0A");
      EnableMission(0x4d);
      EnableMission(0x4e);
      SetLightSpot(&DAT_100324a0,1,1);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
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
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(8,0);
      ShowPage("#PAGE11");
      LooseGame();
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x61);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x61,0);
        ShowPage("#PAGE9");
        ShowVictory();
      }
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount0(&DAT_10032618,0);
        if (iVar4 == 0) {
          SetTrigg(10,0);
          RunTimer(2,3000);
          local_14 = GetDiff(0);
          switch(local_14) {
          case 0:
            CreateObject0(&DAT_10032428,&DAT_10032470,&DAT_10032450,5,&DAT_100325d8,0xc3);
            CreateObject0(&DAT_10032420,&DAT_10032470,&DAT_10032508,5,&DAT_100325d8,0xc3);
            break;
          case 1:
            CreateObject0(&DAT_10032428,&DAT_100325f0,&DAT_10032450,5,&DAT_100325d8,0xc3);
            CreateObject0(&DAT_10032420,&DAT_100325f0,&DAT_10032508,5,&DAT_100325d8,0xc3);
            break;
          case 2:
            CreateObject0(&DAT_10032428,&DAT_10032518,&DAT_10032450,5,&DAT_100325d8,0xc3);
            CreateObject0(&DAT_10032420,&DAT_10032500,&DAT_10032508,5,&DAT_100325d8,0xc3);
            break;
          case 3:
            CreateObject0(&DAT_10032428,&DAT_10032510,&DAT_10032450,5,&DAT_100325d8,0xc3);
            CreateObject0(&DAT_10032420,&DAT_10032518,&DAT_10032508,5,&DAT_100325d8,0xc3);
          }
          SelectUnits(&DAT_10032428,0);
          SelectUnits(&DAT_10032420,1);
          SelSendAndKill(5,&DAT_100325c0,0,0);
          ClearSelection(5);
        }
      }
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerIsEmpty(3);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_10032428);
      if (iVar4 == 0) {
        iVar4 = GetTotalAmount0(&DAT_10032420);
        if (iVar4 != 0) goto LAB_10003ce5;
      }
      else {
LAB_10003ce5:
        uVar1 = TimerDoneFirst(2);
        if ((uVar1 & 0xff) == 0) goto LAB_10003d1b;
      }
      RunTimer(3,400);
    }
  }
LAB_10003d1b:
  uVar1 = TimerDone(3);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(3);
    FreeTimer(2);
    SetTrigg(10,0);
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      for (local_8 = 0; local_8 < DAT_10032440; local_8 = local_8 + 1) {
        ProduceUnitFast(&DAT_10032640,&DAT_10032570,&DAT_100323f8,0);
      }
      for (local_c = 0; local_c < DAT_10032478; local_c = local_c + 1) {
        ProduceUnitFast(&DAT_10032648,&DAT_10032410,&DAT_100323f0,0);
      }
    }
  }
  iVar4 = GetTotalAmount0(&DAT_10032640);
  if (0 < iVar4) {
    iVar4 = GetTotalAmount0(&DAT_10032648);
    if (0 < iVar4) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = CheckProduction(&DAT_10032640);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = CheckProduction(&DAT_10032648);
          if ((uVar1 & 0xff) != 0) {
            RunTimer(10,100);
            SetTrigg(0xd,0);
          }
        }
      }
    }
  }
  iVar4 = GetTotalAmount0(&DAT_10032640);
  if (iVar4 == 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10032648);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(10,100);
        SetTrigg(0xd,0);
      }
    }
  }
  iVar4 = GetTotalAmount0(&DAT_10032648);
  if (iVar4 == 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10032640);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(10,100);
        SetTrigg(0xd,0);
      }
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x19);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(7);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(10);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(7,0);
          RunTimer(9,8000);
          FreeTimer(10);
          SetTrigg(0xd,0);
          RemoveGroup(&DAT_100323f8,&DAT_10032408);
          RemoveGroup(&DAT_100323f0,&DAT_10032400);
          SelectUnits(&DAT_10032408,0);
          SelectUnits(&DAT_10032400,1);
          SelSendAndKill(2,&DAT_100325c0,0x82,0);
          ClearSelection(2);
          local_18 = GetDiff(0);
          switch(local_18) {
          case 0:
            DAT_10032440 = DAT_10032440 + 1;
            DAT_10032478 = DAT_10032478 + 1;
            break;
          case 1:
            DAT_10032440 = DAT_10032440 + 2;
            DAT_10032478 = DAT_10032478 + 2;
            break;
          case 2:
            DAT_10032440 = DAT_10032440 + 5;
            DAT_10032478 = DAT_10032478 + 5;
            break;
          case 3:
            DAT_10032440 = DAT_10032440 + 10;
            DAT_10032478 = DAT_10032478 + 10;
          }
          SetTrigg(9,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) goto LAB_10004310;
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) goto LAB_10004310;
  iVar4 = GetTotalAmount0(&DAT_10032408);
  if (iVar4 == 0) {
    iVar4 = GetTotalAmount0(&DAT_10032400);
    if (iVar4 != 0) goto LAB_100042c9;
  }
  else {
LAB_100042c9:
    uVar1 = TimerDoneFirst(9);
    if ((uVar1 & 0xff) == 0) goto LAB_10004310;
  }
  FreeTimer(9);
  SetTrigg(7,0);
LAB_10004310:
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount1(&DAT_100324f0,0);
    if (iVar4 == 0) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount1(&DAT_100324a0,&DAT_10032498);
      if (0 < iVar4) {
        SetTrigg(0x13,0);
        SetTrigg(0x12,0);
        ShowPage("#PAGE13");
        DisableMission(0x4e);
        EnableMission(0x4f);
        SelectUnits(&DAT_10032498,0);
        SelChangeNation(0,1);
        ClearSelection(1);
        SelectUnits(&DAT_100324d0,0);
        SelChangeNation(1,0);
        iVar4 = GetDiff(0);
        RunTimer(8,iVar4 * -200 + 1000);
      }
    }
  }
  uVar1 = TimerDoneFirst(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100324d0);
    if (0 < iVar4) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x11,0);
        ShowPage("#PAGE13A");
        SelectUnits(&DAT_100324d0,0);
        SelChangeNation(0,1);
        TakeStone(&DAT_100324d0);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0xf,0);
        ShowPage("#PAGE8");
        DisableMission(0x42);
        EnableMission(0x43);
      }
    }
  }
  uVar1 = TimerDoneFirst(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetTotalAmount1(&DAT_10032468,2);
        if (0x1e < iVar4) {
          SetTrigg(0x19,0);
          ShowPage("#PAGE10");
          SelectUnits(&DAT_10032548,0);
          SelErase(2);
          ClearSelection(2);
          SetResource(2,3,150000);
          SetResource(2,0,150000);
          SetResource(2,2,150000);
          SetResource(2,1,150000);
          SetResource(2,5,150000);
          SetResource(2,4,150000);
          uVar2 = GetDiff(0);
          StartAI(2,"BAVARIA.0",1,1,2,uVar2);
        }
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
