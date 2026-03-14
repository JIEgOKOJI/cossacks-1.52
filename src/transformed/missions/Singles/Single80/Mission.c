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
int DAT_100314d8 = 0;
long long DAT_100314e0 = 0;
long long DAT_100314e8 = 0;
long long DAT_100314f0 = 0;
long long DAT_100314f8 = 0;
long long DAT_10031500 = 0;
long long DAT_10031508 = 0;
long long DAT_10031510 = 0;
long long DAT_10031518 = 0;
long long DAT_10031520 = 0;
int DAT_10031528 = 0;
long long DAT_1003152c = 0;
long long DAT_10031530 = 0;
long long DAT_10031538 = 0;
long long DAT_10031540 = 0;
long long DAT_10031548 = 0;
long long DAT_10031550 = 0;
int DAT_10031558 = 0;
long long DAT_10031560 = 0;
long long DAT_10031568 = 0;
int DAT_10031570 = 0;
long long DAT_10031578 = 0;
long long DAT_10031580 = 0;
long long DAT_10031588 = 0;
long long DAT_10031590 = 0;
int DAT_10031598 = 0;
long long DAT_100315a0 = 0;
long long DAT_100315a8 = 0;
long long DAT_100315b0 = 0;
int DAT_100315b8 = 0;
long long DAT_100315c0 = 0;
long long DAT_100315c8 = 0;
long long DAT_100315d0 = 0;
long long DAT_100315d8 = 0;
long long DAT_100315e0 = 0;
long long DAT_100315e8 = 0;
long long DAT_100315f0 = 0;
long long DAT_100315f8 = 0;
int DAT_10031600 = 0;
long long DAT_10031608 = 0;
long long DAT_10031610 = 0;
long long DAT_10031618 = 0;
long long DAT_10031620 = 0;
int DAT_10031498_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10004540() { return 0; }
int FUN_10004a70() { return 0; }


/* Forward declarations */
void FUN_100044f0(DWORD param_1);


void __cdecl FUN_100044f0(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004a70();
  pDVar1[5] = param_1;
  return;
}





void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int uStack_8;
RegisterUnits(&DAT_10031490,"Gband1");
  RegisterUnits(&DAT_10031488,"Gband2");
  RegisterUnits(&DAT_100314a8,"Gholop1");
  RegisterUnits(&DAT_100314a0,"Gholop2");
  RegisterUnits(&DAT_10031578,"Gbos1");
  RegisterUnits(&DAT_10031580,"Gbos2");
  RegisterUnits(&DAT_10031588,"Gbos3");
  RegisterUnits(&DAT_10031590,"Gbos4");
  RegisterUnits(&DAT_100314c0,"Gbash1");
  RegisterUnits(&DAT_10031458,"Gkon1");
  RegisterUnits(&DAT_10031460,"Gkon2");
  RegisterZone(&DAT_100315b0,"Zband0");
  RegisterZone(&DAT_100315f8,"Zband00");
  RegisterZone(&DAT_100315a0,"Zband1");
  RegisterZone(&DAT_10031608,"Zband1a");
  RegisterZone(&DAT_10031610,"Zband1b");
  RegisterZone(&DAT_100315a8,"Zband2");
  RegisterZone(&DAT_10031618,"Zband2a");
  RegisterZone(&DAT_10031620,"Zband2b");
  RegisterZone(&DAT_100315c0,"Zattack1");
  RegisterZone(&DAT_100315c8,"Zattack2");
  RegisterZone(&DAT_10031418,"Zotxod1");
  RegisterZone(&DAT_10031420,"Zotxod2");
  RegisterUnitType(&DAT_100315d0,"Pushka(PL)");
  RegisterUnitType(&DAT_100315d8,"Pushka(RU)");
  RegisterUnitType(&DAT_10031440,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10031450,"Kreposnoi_evro(PL)");
  RegisterUnitType(&DAT_10031470,"WALL_KR(RU)");
  RegisterUnitType(&DAT_10031560,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_10031478,"WALL_EV(PL)");
  RegisterUnitType(&DAT_10031568,"WALL_UKR(PL)");
  RegisterUnitType(&DAT_100314b0,"Russki_Center(RU)");
  RegisterUnitType(&DAT_100314b8,"Center_Poland(PL)");
  RegisterUpgrade(&DAT_10031480,"AKA25UA");
  RegisterVar(&DAT_10031430,8);
  RegisterVar(&DAT_10031428,8);
  RegisterVar(&DAT_10031448,8);
  RegisterVar(&DAT_10031438,8);
  RegisterVar(&DAT_100313f8,8);
  RegisterVar(&DAT_100313f0,8);
  RegisterVar(&DAT_10031408,8);
  RegisterVar(&DAT_10031400,8);
  RegisterVar(&DAT_10031410,8);
  RegisterVar(&DAT_100314d0,8);
  RegisterVar(&DAT_100314c8,8);
  RegisterVar(&DAT_10031508,8);
  RegisterVar(&DAT_10031500,8);
  RegisterVar(&DAT_10031520,8);
  RegisterVar(&DAT_10031510,8);
  RegisterVar(&DAT_100314e8,8);
  RegisterVar(&DAT_100314e0,8);
  RegisterVar(&DAT_100314f8,8);
  RegisterVar(&DAT_100314f0,8);
  RegisterVar(&DAT_10031518,8);
  RegisterVar(&DAT_100314d8,4);
  RegisterVar(&DAT_10031528,4);
  RegisterVar(&DAT_10031558,4);
  RegisterVar(&DAT_10031570,4);
  RegisterVar(&DAT_10031598,4);
  RegisterVar(&DAT_100315b8,4);
  RegisterVar(&DAT_1003152c,4);
  RegisterVar(&DAT_10031600,4);
  RegisterVar(&DAT_10031498,4);
  RegisterFormation(&DAT_100315f0,"#LINE5");
  RegisterFormation(&DAT_10031538,"#LINE20PUS");
  RegisterFormation(&DAT_10031548,"#LINE30PUS");
  RegisterFormation(&DAT_10031550,"#LINE40PUS");
  RegisterFormation(&DAT_10031540,"#LINE15PUS");
  RegisterFormation(&DAT_10031530,"#LINE10PUS");
  RegisterFormation(&DAT_100315e8,"#LINE3");
  RegisterFormation(&DAT_100313e0,"#SHIPS3");
  RegisterFormation(&DAT_100313e8,"#SHIPS5");
  RegisterFormation(&DAT_10031468,"#ALONE");
  RegisterDynGroup(&DAT_10031430);
  RegisterDynGroup(&DAT_10031428);
  RegisterDynGroup(&DAT_10031448);
  RegisterDynGroup(&DAT_10031438);
  RegisterDynGroup(&DAT_100313f8);
  RegisterDynGroup(&DAT_100313f0);
  RegisterDynGroup(&DAT_10031408);
  RegisterDynGroup(&DAT_10031400);
  RegisterDynGroup(&DAT_10031410);
  RegisterDynGroup(&DAT_100314d0);
  RegisterDynGroup(&DAT_100314c8);
  RegisterDynGroup(&DAT_10031508);
  RegisterDynGroup(&DAT_10031500);
  RegisterDynGroup(&DAT_10031520);
  RegisterDynGroup(&DAT_10031510);
  RegisterDynGroup(&DAT_100314e8);
  RegisterDynGroup(&DAT_100314e0);
  RegisterDynGroup(&DAT_100314f8);
  RegisterDynGroup(&DAT_100314f0);
  RegisterDynGroup(&DAT_10031518);
  RegisterDynGroup(&DAT_100315e0);
  SetPlayerName(1,"RUSSIA");
  SetPlayerName(2,"POLAND");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(1,0x26);
  ChangeFriends(2,0x26);
  ChangeFriends(5,0x26);
  EnableUnit(0,&DAT_10031470,0);
  EnableUnit(0,&DAT_10031560,0);
  EnableUnit(0,&DAT_10031478,0);
  EnableUnit(0,&DAT_10031568,0);
  EnableUnit(0,&DAT_10031440,0);
  EnableUnit(0,&DAT_10031450,0);
  EnableUnit(0,&DAT_100314b0,0);
  EnableUnit(0,&DAT_100314b8,0);
  DVar1 = FUN_10004540((int *)0x0);
  FUN_100044f0(DVar1);
  uStack_8 = 0x10001b55;
  return;
}







void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
    SetDestPoint(&DAT_10031458,&DAT_10031418);
    SetDestPoint(&DAT_10031460,&DAT_10031420);
    local_10 = GetDiff(0);
    switch(local_10) {
    case 0:
      SetResource(0,3,15000);
      SetResource(0,0,15000);
      SetResource(0,2,15000);
      SetResource(0,1,18000);
      SetResource(0,5,15000);
      SetResource(0,4,15000);
      SelectUnits(&DAT_100314c0,0);
      SelectUnits(&DAT_10031578,1);
      SelectUnits(&DAT_10031580,1);
      SelectUnits(&DAT_10031588,1);
      SelectUnits(&DAT_10031590,1);
      SelErase(5);
      DAT_100314d8 = 1;
      DAT_10031528 = 1;
      DAT_10031558 = 1;
      DAT_10031570 = 1;
      DAT_10031598 = 1;
      DAT_100315b8 = 1;
      break;
    case 1:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,12000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10031578,0);
      SelectUnits(&DAT_10031580,1);
      SelectUnits(&DAT_10031588,1);
      SelectUnits(&DAT_10031590,1);
      SelErase(5);
      InitialUpgrade("Gkon1","AKA16PL");
      InitialUpgrade("Gkon2","AKA16RU");
      DAT_100314d8 = 3;
      DAT_10031528 = 3;
      DAT_10031558 = 1;
      DAT_10031570 = 1;
      DAT_10031598 = 1;
      DAT_100315b8 = 1;
      break;
    case 2:
      SetResource(0,3,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      SetResource(0,1,7000);
      SetResource(0,5,6000);
      SetResource(0,4,6000);
      SelectUnits(&DAT_10031578,0);
      SelectUnits(&DAT_10031588,1);
      SelErase(5);
      InitialUpgrade("Gkon1","AKA16PL");
      InitialUpgrade("Gkon1","AKA17PL");
      InitialUpgrade("Gkon2","AKA16RU");
      InitialUpgrade("Gkon2","AKA17RU");
      DAT_100314d8 = 5;
      DAT_10031528 = 5;
      DAT_10031558 = 5;
      DAT_10031570 = 3;
      DAT_10031598 = 2;
      DAT_100315b8 = 1;
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      InitialUpgrade("Gkon1","AKA16PL");
      InitialUpgrade("Gkon1","AKA17PL");
      InitialUpgrade("Gkon1","AKA20PL");
      InitialUpgrade("Gkon1","AKA27PL");
      InitialUpgrade("Gkon2","AKA16RU");
      InitialUpgrade("Gkon2","AKA17RU");
      InitialUpgrade("Gkon2","AKA20RU");
      InitialUpgrade("Gkon2","AKA27RU");
      DAT_100314d8 = 8;
      DAT_10031528 = 8;
      DAT_10031558 = 6;
      DAT_10031570 = 4;
      DAT_10031598 = 2;
      DAT_100315b8 = 2;
    }
    InitialUpgrade("Gkon1","AKA18PL");
    InitialUpgrade("Gkon2","AKA18RU");
    RunTimer(1,300);
    RunTimer(0xe,4000);
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 10000);
    DAT_10031498_ovl = rand();
    DAT_10031498_ovl = DAT_10031498_ovl & 0x80000001;
    if ((int)DAT_10031498_ovl < 0) {
      DAT_10031498_ovl = (DAT_10031498_ovl - 1 | 0xfffffffe) + 1;
    }
    DAT_10031498_ovl = DAT_10031498_ovl + 1;
    InitialUpgrade("Gholop1","Melnica_rus(RU)GETRES");
    InitialUpgrade("Gholop1","MAINRU");
    InitialUpgrade("Gholop1","Melnica_rus(RU)GETRES2");
    InitialUpgrade("Gholop1","KUZ01RU");
    InitialUpgrade("Gholop1","AKA01RU");
    InitialUpgrade("Gholop1","AKA02RU");
    InitialUpgrade("Gholop1","AKA03RU");
    InitialUpgrade("Gholop1","AKA04RU");
    InitialUpgrade("Gholop1","AKA10RU");
    InitialUpgrade("Gholop2","Melnica(PL)GETRES");
    InitialUpgrade("Gholop2","MAINPL");
    InitialUpgrade("Gholop2","Melnica(PL)GETRES2");
    InitialUpgrade("Gholop2","KUZ01PL");
    InitialUpgrade("Gholop2","AKA01PL");
    InitialUpgrade("Gholop2","AKA02PL");
    InitialUpgrade("Gholop2","AKA03PL");
    InitialUpgrade("Gholop2","AKA04PL");
    InitialUpgrade("Gholop2","AKA10PL");
    SetResource(1,3,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    uVar2 = GetDiff(0);
    StartAI(1,"RUSSIA.0",0,1,2,uVar2);
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    uVar2 = GetDiff(0);
    StartAI(2,"POLAND.0",0,1,2,uVar2);
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0xe);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100315b0,0);
      if (iVar4 < 1) {
        iVar4 = GetUnitsAmount0(&DAT_100315f8,0);
        if (iVar4 < 1) goto LAB_10002b06;
      }
    }
    SetTrigg(3,0);
    ShowPage("#PAGE0C");
  }
LAB_10002b06:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100315a0,&DAT_10031490);
    iVar3 = GetTotalAmount0(&DAT_10031490);
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      SelectUnits(&DAT_10031490,0);
      SelSendTo(5,&DAT_10031610,0xdc,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100315a0,&DAT_10031490);
    iVar3 = GetTotalAmount0(&DAT_10031490);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10031490,0);
      Patrol(5,&DAT_10031608,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031490);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100315a0,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -2000 + 20000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -2000 + 20000);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100315a8,&DAT_10031488);
    iVar3 = GetTotalAmount0(&DAT_10031488);
    if (iVar4 < iVar3) {
      SetTrigg(0x14,1);
      SelectUnits(&DAT_10031488,0);
      SelSendTo(5,&DAT_10031620,0xaa,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100315a8,&DAT_10031488);
    iVar3 = GetTotalAmount0(&DAT_10031488);
    if (iVar4 == iVar3) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_10031488,0);
      Patrol(5,&DAT_10031618,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10031488);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100315a8,0);
      if (0 < iVar4) {
        SetTrigg(0x15,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -3000 + 24000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -3000 + 24000);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      DAT_10031600 = 0x3c;
      ShowPageParam("#PAGE0A",0x3c);
      EnableMission(0x4d);
      EnableMission(0x4e);
      RunTimer(2,DAT_10031600 * 0x8fc);
      RunTimer(0x1c,0x2cec);
    }
  }
  uVar1 = TimerDoneFirst(0x1c);
  if ((uVar1 & 0xff) != 0) {
    DAT_10031600 = DAT_10031600 + -5;
    ShowPageParam("#PAGE0B",DAT_10031600);
    if (DAT_10031600 == 5) {
      FreeTimer(0x1c);
    }
    else {
      RunTimer(0x1c,0x2cec);
    }
  }
  uVar1 = IsUpgradeDone(&DAT_10031480,0);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x60,0);
      RunTimer(6,2000);
    }
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) != 0) {
      if (DAT_10031498_ovl == 1) {
        ShowPage("#PAGE2");
      }
      else {
        ShowPage("#PAGE3");
      }
      DisableMission(0x4e);
      EnableMission(0x4f);
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
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x62,0);
      ShowPage("#PAGE1B");
      LooseGame();
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      for (local_8 = 0; local_8 < DAT_100314d8; local_8 = local_8 + 1) {
        ProduceUnitFast(&DAT_10031458,&DAT_100315d0,&DAT_10031430,1);
      }
    }
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10031458);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(3,500);
        SetTrigg(10,0);
      }
    }
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(4,0);
        SetTrigg(10,1);
        SetTrigg(9,1);
        FreeTimer(3);
        RunTimer(8,25000);
        RemoveGroup(&DAT_10031430,&DAT_10031448);
        SelectUnits(&DAT_10031448,0);
        SetStandGround(5,1);
        ClearSelection(5);
      }
    }
    AttackBuildingsInZone(&DAT_10031448,&DAT_100315c0,0);
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount0(&DAT_10031448);
      if (iVar4 != 0) {
        uVar1 = TimerDoneFirst(8);
        if ((uVar1 & 0xff) == 0) goto LAB_100035ae;
      }
      FreeTimer(8);
      SetTrigg(4,1);
    }
  }
LAB_100035ae:
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      for (local_c = 0; local_c < DAT_10031528; local_c = local_c + 1) {
        ProduceUnitFast(&DAT_10031460,&DAT_100315d8,&DAT_10031428,1);
      }
    }
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_10031460);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(4,500);
        SetTrigg(0xc,0);
      }
    }
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(4);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(5,0);
        SetTrigg(0xc,1);
        SetTrigg(0xb,1);
        FreeTimer(4);
        RunTimer(5,25000);
        RemoveGroup(&DAT_10031428,&DAT_10031438);
        SelectUnits(&DAT_10031438,0);
        SetStandGround(5,1);
        ClearSelection(5);
      }
    }
    AttackBuildingsInZone(&DAT_10031438,&DAT_100315c8,0);
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount0(&DAT_10031438);
      if (iVar4 != 0) {
        uVar1 = TimerDoneFirst(5);
        if ((uVar1 & 0xff) == 0) goto LAB_1000385d;
      }
      FreeTimer(5);
      SetTrigg(5,1);
    }
  }
LAB_1000385d:
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x15);
      if ((uVar1 & 0xff) == 0) goto LAB_10003a81;
    }
    local_14 = GetDiff(0);
    switch(local_14) {
    case 0:
      DAT_100314d8 = DAT_100314d8 + 1;
      DAT_10031528 = DAT_10031528 + 1;
      DAT_10031558 = DAT_10031558 + 1;
      DAT_10031570 = DAT_10031570 + 1;
      DAT_10031598 = DAT_10031598 + 1;
      DAT_100315b8 = DAT_100315b8 + 1;
      break;
    case 1:
      DAT_100314d8 = DAT_100314d8 + 1;
      DAT_10031528 = DAT_10031528 + 1;
      DAT_10031558 = DAT_10031558 + 3;
      DAT_10031570 = DAT_10031570 + 2;
      DAT_10031598 = DAT_10031598 + 1;
      DAT_100315b8 = DAT_100315b8 + 2;
      break;
    case 2:
      DAT_100314d8 = DAT_100314d8 + 1;
      DAT_10031528 = DAT_10031528 + 1;
      DAT_10031558 = DAT_10031558 + 4;
      DAT_10031570 = DAT_10031570 + 4;
      DAT_10031598 = DAT_10031598 + 2;
      DAT_100315b8 = DAT_100315b8 + 1;
      break;
    case 3:
      DAT_100314d8 = DAT_100314d8 + 2;
      DAT_10031528 = DAT_10031528 + 2;
      DAT_10031558 = DAT_10031558 + 5;
      DAT_10031570 = DAT_10031570 + 5;
      DAT_10031598 = DAT_10031598 + 3;
      DAT_100315b8 = DAT_100315b8 + 2;
    }
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 10000);
  }
LAB_10003a81:
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x10,0);
      if (DAT_10031498_ovl == 1) {
        ShowPage("#PAGE8A");
      }
      else {
        ShowPage("#PAGE8AA");
      }
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x11,0);
      if (DAT_10031498_ovl == 2) {
        ShowPage("#PAGE8B");
      }
      else {
        ShowPage("#PAGE8BB");
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(DAT_10031498_ovl & 0xff);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE8");
      DisableMission(0x42);
      EnableMission(0x43);
      ShowVictory();
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
