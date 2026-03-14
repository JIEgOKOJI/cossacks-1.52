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

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10031448,"Ghetman");
  RegisterUnits(&DAT_10031488,"Gband1");
  RegisterUnits(&DAT_10031480,"Gband2");
  RegisterUnits(&DAT_100315a0,"Gkep1");
  RegisterUnits(&DAT_10031518,"Gbos1");
  RegisterUnits(&DAT_10031520,"Gbos2");
  RegisterUnits(&DAT_10031528,"Gbos3");
  RegisterUnits(&DAT_10031530,"Gbos4");
  RegisterUnits(&DAT_10031538,"Gbos5");
  RegisterUnits(&DAT_10031510,"Gmush1");
  RegisterUnits(&DAT_100314d0,"Gpike1");
  RegisterUnits(&DAT_10031490,"Goxrana");
  RegisterZone(&DAT_10031540,"Zband1");
  RegisterZone(&DAT_10031580,"Zband1a");
  RegisterZone(&DAT_10031588,"Zband1b");
  RegisterZone(&DAT_10031548,"Zband2");
  RegisterZone(&DAT_10031590,"Zband2a");
  RegisterZone(&DAT_10031598,"Zband2b");
  RegisterZone(&DAT_100314e8,"Ztalk1");
  RegisterZone(&DAT_100314f0,"Ztalk2");
  RegisterZone(&DAT_10031558,"Zgen1");
  RegisterZone(&DAT_10031560,"Zgen2");
  RegisterZone(&DAT_10031550,"Zattack1");
  RegisterUnitType(&DAT_10031450,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_100314b8,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_10031458,"Kreposnoi_portugal(VE)");
  RegisterUnitType(&DAT_10031430,"Krestian_Sved(fr)");
  RegisterUnitType(&DAT_10031440,"Kreposnoi_pruss(DA)");
  RegisterUnitType(&DAT_10031468,"WALL_EV(VE)");
  RegisterUnitType(&DAT_100314f8,"WALL_UKR(VE)");
  RegisterUnitType(&DAT_10031470,"WALL_EV(fr)");
  RegisterUnitType(&DAT_10031500,"WALL_UKR(fr)");
  RegisterUnitType(&DAT_10031478,"WALL_EV(DA)");
  RegisterUnitType(&DAT_10031508,"WALL_UKR(DA)");
  RegisterUnitType(&DAT_10031498,"Center_France(fr)");
  RegisterUnitType(&DAT_100314a0,"Europ(DA)");
  RegisterVar(&DAT_10031420,8);
  RegisterVar(&DAT_10031418,8);
  RegisterVar(&DAT_10031438,8);
  RegisterVar(&DAT_10031428,8);
  RegisterVar(&DAT_100313f8,8);
  RegisterVar(&DAT_100313f0,8);
  RegisterVar(&DAT_10031408,8);
  RegisterVar(&DAT_10031400,8);
  RegisterVar(&DAT_10031410,8);
  RegisterVar(&DAT_100314a8,8);
  RegisterFormation(&DAT_10031578,"#LINE5");
  RegisterFormation(&DAT_100314c0,"#LINE20PUS");
  RegisterFormation(&DAT_100314d8,"#LINE30PUS");
  RegisterFormation(&DAT_100314e0,"#LINE40PUS");
  RegisterFormation(&DAT_100314c8,"#LINE15PUS");
  RegisterFormation(&DAT_100314b0,"#LINE10PUS");
  RegisterFormation(&DAT_10031570,"#LINE3");
  RegisterFormation(&DAT_100313e0,"#SHIPS3");
  RegisterFormation(&DAT_100313e8,"#SHIPS5");
  RegisterFormation(&DAT_10031460,"#ALONE");
  RegisterDynGroup(&DAT_10031420);
  RegisterDynGroup(&DAT_10031418);
  RegisterDynGroup(&DAT_10031438);
  RegisterDynGroup(&DAT_10031428);
  RegisterDynGroup(&DAT_100313f8);
  RegisterDynGroup(&DAT_100313f0);
  RegisterDynGroup(&DAT_10031408);
  RegisterDynGroup(&DAT_10031400);
  RegisterDynGroup(&DAT_10031410);
  RegisterDynGroup(&DAT_100314a8);
  RegisterDynGroup(&DAT_10031568);
  SetPlayerName(1,"VENECIA");
  SetPlayerName(2,"DUTCH");
  SetPlayerName(3,"FRANCE");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(1,3);
  ChangeFriends(2,0x2c);
  ChangeFriends(3,0x2c);
  ChangeFriends(5,0x2c);
  EnableUnit(0,&DAT_10031468,0);
  EnableUnit(0,&DAT_100314f8,0);
  EnableUnit(0,&DAT_10031470,0);
  EnableUnit(0,&DAT_10031500,0);
  EnableUnit(0,&DAT_10031478,0);
  EnableUnit(0,&DAT_10031508,0);
  EnableUnit(0,&DAT_10031430,0);
  EnableUnit(0,&DAT_10031440,0);
  EnableUnit(0,&DAT_10031498,0);
  EnableUnit(0,&DAT_100314a0,0);
  uStack_8 = 0x1000191e;
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
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
    SelectUnits(&DAT_100315a0,0);
    SelectUnits(&DAT_100314d0,1);
    SelectUnits(&DAT_10031510,1);
    SetStandGround(1,1);
    local_8 = GetDiff(0);
    switch(local_8) {
    case 0:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,12000);
      SetResource(0,4,12000);
      SelectUnits(&DAT_10031518,0);
      SelectUnits(&DAT_10031520,1);
      SelectUnits(&DAT_10031528,1);
      SelectUnits(&DAT_10031530,1);
      SelectUnits(&DAT_10031538,1);
      SelectUnits(&DAT_10031490,1);
      SelErase(5);
      break;
    case 1:
      SetResource(0,3,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      SetResource(0,1,7000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10031518,0);
      SelectUnits(&DAT_10031528,1);
      SelectUnits(&DAT_10031530,1);
      SelectUnits(&DAT_10031538,1);
      SelectUnits(&DAT_10031490,1);
      SelErase(5);
      break;
    case 2:
      SetResource(0,3,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      SetResource(0,1,6000);
      SetResource(0,5,8000);
      SetResource(0,4,8000);
      SelectUnits(&DAT_10031520,0);
      SelectUnits(&DAT_10031530,1);
      SelectUnits(&DAT_10031490,1);
      SelErase(5);
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,7000);
      SetResource(0,4,7000);
    }
    ClearSelection(5);
    RunTimer(6,300);
    RunTimer(1,4000);
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    uVar2 = GetDiff(0);
    StartAI(2,"DENMARK.0",1,1,2,uVar2);
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    uVar2 = GetDiff(0);
    StartAI(3,"FRANCE.0",1,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0AA");
      EnableMission(0x4b);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031540,&DAT_10031488);
    iVar3 = GetTotalAmount0(&DAT_10031488);
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      SelectUnits(&DAT_10031488,0);
      SelSendTo(5,&DAT_10031588,0x41,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031540,&DAT_10031488);
    iVar3 = GetTotalAmount0(&DAT_10031488);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10031488,0);
      Patrol(5,&DAT_10031580,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031488);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10031540,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 8000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 8000);
        DisableMission(0x4b);
        EnableMission(0x4c);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031548,&DAT_10031480);
    iVar3 = GetTotalAmount0(&DAT_10031480);
    if (iVar4 < iVar3) {
      SetTrigg(0x14,1);
      SelectUnits(&DAT_10031480,0);
      SelSendTo(5,&DAT_10031598,0,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10031548,&DAT_10031480);
    iVar3 = GetTotalAmount0(&DAT_10031480);
    if (iVar4 == iVar3) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_10031480,0);
      Patrol(5,&DAT_10031590,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031480);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10031548,0);
      if (0 < iVar4) {
        SetTrigg(0x15,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -15000 + 80000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -15000 + 80000);
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
      SetLightSpot(&DAT_100314e8,1,1);
      SelectUnits(&DAT_100314d0,0);
      SelectUnits(&DAT_10031510,1);
      SelChangeNation(1,0);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031448);
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
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_100315a0);
    if (iVar4 == 0) {
      SetTrigg(8,0);
      ShowPage("#PAGE11");
      LooseGame();
    }
  }
  uVar1 = Trigg(2);
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
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount0(&DAT_10031540,0);
      if (iVar4 == 0) {
        SetTrigg(10,0);
        RunTimer(2,3000);
        local_c = GetDiff(0);
        switch(local_c) {
        case 0:
          CreateObject0(&DAT_10031420,&DAT_10031578,&DAT_10031450,5,&DAT_10031558,0x82);
          CreateObject0(&DAT_10031418,&DAT_10031578,&DAT_100314b8,5,&DAT_10031558,0x82);
          break;
        case 1:
          CreateObject0(&DAT_10031420,&DAT_100314b0,&DAT_10031450,5,&DAT_10031558,0x82);
          CreateObject0(&DAT_10031418,&DAT_100314b0,&DAT_100314b8,5,&DAT_10031558,0x82);
          break;
        case 2:
          CreateObject0(&DAT_10031420,&DAT_100314c0,&DAT_10031450,5,&DAT_10031558,0x82);
          CreateObject0(&DAT_10031418,&DAT_100314c0,&DAT_100314b8,5,&DAT_10031558,0x82);
          break;
        case 3:
          CreateObject0(&DAT_10031420,&DAT_100314d8,&DAT_10031450,5,&DAT_10031558,0x82);
          CreateObject0(&DAT_10031418,&DAT_100314d8,&DAT_100314b8,5,&DAT_10031558,0x82);
        }
      }
    }
  }
  iVar4 = GetTotalAmount0(&DAT_10031420);
  if (iVar4 < 1) {
    iVar4 = GetTotalAmount0(&DAT_10031418);
    if (0 < iVar4) goto LAB_10002d64;
  }
  else {
LAB_10002d64:
    SelectUnits(&DAT_10031418,0);
    SelectUnits(&DAT_10031420,1);
    SelAttackGroup(5,&DAT_10031448);
    ClearSelection(5);
  }
  uVar1 = TimerIsEmpty(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031420);
    if (iVar4 == 0) {
      iVar4 = GetTotalAmount0(&DAT_10031418);
      if (iVar4 != 0) goto LAB_10002e16;
    }
    else {
LAB_10002e16:
      uVar1 = TimerDoneFirst(2);
      if ((uVar1 & 0xff) == 0) goto LAB_10002e4c;
    }
    RunTimer(3,400);
  }
LAB_10002e4c:
  uVar1 = TimerDone(3);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(3);
    FreeTimer(2);
    SetTrigg(10,1);
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x18);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount0(&DAT_10031540,0);
        if (iVar4 == 0) {
          SetTrigg(0x18,0);
          RunTimer(4,3000);
          local_10 = GetDiff(0);
          switch(local_10) {
          case 0:
            CreateObject0(&DAT_10031438,&DAT_10031578,&DAT_10031450,5,&DAT_10031560,0);
            CreateObject0(&DAT_10031428,&DAT_10031578,&DAT_100314b8,5,&DAT_10031560,0);
            break;
          case 1:
            CreateObject0(&DAT_10031438,&DAT_100314c8,&DAT_10031450,5,&DAT_10031560,0);
            CreateObject0(&DAT_10031428,&DAT_100314c8,&DAT_100314b8,5,&DAT_10031560,0);
            break;
          case 2:
            CreateObject0(&DAT_10031438,&DAT_100314c0,&DAT_10031450,5,&DAT_10031560,0);
            CreateObject0(&DAT_10031428,&DAT_100314c0,&DAT_100314b8,5,&DAT_10031560,0);
            break;
          case 3:
            CreateObject0(&DAT_10031438,&DAT_100314d8,&DAT_10031450,5,&DAT_10031560,0);
            CreateObject0(&DAT_10031428,&DAT_100314d8,&DAT_100314b8,5,&DAT_10031560,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetTotalAmount0(&DAT_10031438);
    if (iVar4 < 1) {
      iVar4 = GetTotalAmount0(&DAT_10031428);
      if (iVar4 < 1) goto LAB_10003197;
    }
    SelectUnits(&DAT_10031438,0);
    SelectUnits(&DAT_10031428,1);
    SelAttackGroup(5,&DAT_100315a0);
    ClearSelection(5);
  }
LAB_10003197:
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) goto LAB_10003241;
  uVar1 = TimerIsEmpty(5);
  if ((uVar1 & 0xff) == 0) goto LAB_10003241;
  iVar4 = GetTotalAmount0(&DAT_10031438);
  if (iVar4 == 0) {
    iVar4 = GetTotalAmount0(&DAT_10031428);
    if (iVar4 != 0) goto LAB_1000320b;
  }
  else {
LAB_1000320b:
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) == 0) goto LAB_10003241;
  }
  RunTimer(5,400);
LAB_10003241:
  uVar1 = TimerDone(5);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(5);
    FreeTimer(4);
    SetTrigg(0x18,1);
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount2(&DAT_100314e8,&DAT_10031458,0);
      if (0x1d < iVar4) {
        SetTrigg(0x13,0);
        ShowPage("#PAGE13");
        DisableMission(0x4e);
        EnableMission(0x4f);
        SelectUnits(&DAT_100315a0,0);
        DoNotUseSelInAI(1);
        SelectTypeOfUnitsInZone(&DAT_100314f0,&DAT_10031458,0,0);
        SelChangeNation(0,1);
        ClearSelection(1);
        SetResource(1,3,10000);
        SetResource(1,0,10000);
        SetResource(1,2,10000);
        SetResource(1,1,10000);
        SetResource(1,5,10000);
        SetResource(1,4,10000);
        uVar2 = GetDiff(0);
        StartAI(1,"VENECIA.0",1,1,2,uVar2);
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
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0xf,0);
        ShowPage("#PAGE8");
        DisableMission(0x42);
        EnableMission(0x43);
      }
    }
  }
  SaveSelectedUnits(0,&DAT_10031568,0);
  ClearSelection(0);
  SelectUnitsType(&DAT_10031430,0,0);
  SelectUnitsType(&DAT_10031440,0,1);
  SelDie(0);
  SelectUnits(&DAT_10031568,0);
  ClearSelection(5);
  SelectUnitsType(&DAT_10031458,5,0);
  SelDie(5);
  ClearSelection(5);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
