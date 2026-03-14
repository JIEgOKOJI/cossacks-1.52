#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006094[] = "Z9";
char DAT_10006098[] = "Z8";
char DAT_1000609c[] = "Z7";
char DAT_100060a0[] = "Z6";
char DAT_100060a4[] = "Z5";
char DAT_100060a8[] = "Z4";
char DAT_100060ac[] = "Z3";
char DAT_100060b0[] = "Z2";
char DAT_100060b4[] = "Z1";
char DAT_100060b8[] = "G13";
char DAT_100060bc[] = "G11";
char DAT_100060c0[] = "G10";
char DAT_100060c4[] = "G9";
char DAT_100060c8[] = "G8";
char DAT_100060cc[] = "G7";
char DAT_100060d0[] = "G6";
char DAT_100060d4[] = "G5";
char DAT_100060d8[] = "G4";
char DAT_100060dc[] = "G3";
char DAT_100060e0[] = "G2";
char DAT_100060e4[] = "G1";
long long DAT_10006440 = 0;
long long DAT_10006448 = 0;
long long DAT_10006450 = 0;
long long DAT_10006458 = 0;
long long DAT_10006460 = 0;
long long DAT_10006468 = 0;
long long DAT_10006470 = 0;
long long DAT_10006478 = 0;
long long DAT_10006480 = 0;
long long DAT_10006488 = 0;
long long DAT_10006490 = 0;
long long DAT_10006498 = 0;
long long DAT_100064a0 = 0;
long long DAT_100064a8 = 0;
long long DAT_100064b0 = 0;
long long DAT_100064b8 = 0;
long long DAT_100064c0 = 0;
long long DAT_100064c8 = 0;
long long DAT_100064d0 = 0;
long long DAT_100064d8 = 0;
long long DAT_100064e0 = 0;
long long DAT_100064e8 = 0;
long long DAT_100064f0 = 0;
long long DAT_100064f8 = 0;
long long DAT_10006500 = 0;
long long DAT_10006508 = 0;
long long DAT_10006510 = 0;
long long DAT_10006518 = 0;
long long DAT_10006520 = 0;
long long DAT_10006528 = 0;
long long DAT_10006530 = 0;
long long DAT_10006538 = 0;
long long DAT_10006540 = 0;

void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006450,DAT_100060e4);
  RegisterUnits(&DAT_10006458,DAT_100060e0);
  RegisterUnits(&DAT_10006460,DAT_100060dc);
  RegisterUnits(&DAT_10006468,DAT_100060d8);
  RegisterUnits(&DAT_10006470,DAT_100060d4);
  RegisterUnits(&DAT_10006478,DAT_100060d0);
  RegisterUnits(&DAT_10006480,DAT_100060cc);
  RegisterUnits(&DAT_10006488,DAT_100060c8);
  RegisterUnits(&DAT_10006490,DAT_100060c4);
  RegisterUnits(&DAT_100064a0,DAT_100060c0);
  RegisterUnits(&DAT_100064a8,DAT_100060bc);
  RegisterUnits(&DAT_100064b8,DAT_100060b8);
  RegisterZone(&DAT_100064c0,DAT_100060b4);
  RegisterZone(&DAT_100064c8,DAT_100060b0);
  RegisterZone(&DAT_100064d0,DAT_100060ac);
  RegisterZone(&DAT_100064d8,DAT_100060a8);
  RegisterZone(&DAT_100064e0,DAT_100060a4);
  RegisterZone(&DAT_100064e8,DAT_100060a0);
  RegisterZone(&DAT_100064f0,DAT_1000609c);
  RegisterZone(&DAT_100064f8,DAT_10006098);
  RegisterZone(&DAT_10006500,DAT_10006094);
  RegisterVar(&DAT_10006528,8);
  RegisterVar(&DAT_10006530,8);
  RegisterVar(&DAT_10006538,8);
  RegisterVar(&DAT_100064b0,8);
  RegisterDynGroup(&DAT_10006498);
  RegisterUnitType(&DAT_10006508,"Gusar_evro(au)");
  RegisterUnitType(&DAT_10006440,"WALL_UKR(SA)");
  RegisterUnitType(&DAT_10006448,"WALL_EV(SA)");
  RegisterFormation(&DAT_10006518,"#LINE15PUS");
  RegisterFormation(&DAT_10006510,"#LINE20PUS");
  RegisterFormation(&DAT_10006520,"#SQUARE36");
  RegisterFormation(&DAT_10006540,"#SQUARE72");
  EnableUnit(0,&DAT_10006440,0);
  EnableUnit(0,&DAT_10006448,0);
  SetPlayerName(1,"PRUSSIA");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  void *pcVar6;
  void *pcVar7;
  void *pcVar8;
  int *puVar9;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    SetResource(0,3,20000);
    SetResource(0,1,5000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
    SetResource(1,3,1300000);
    SetResource(1,1,0x1312d0);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,15000000);
    SetResource(1,4,15000000);
    ShowPage("#PAGE0");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,500000);
      SetResource(0,1,100000);
      SetResource(0,5,100000);
      SetResource(0,4,100000);
      SelectUnits(&DAT_100064b8,0);
      SelDie(1);
      ShowPage("#OTST1");
    }
    TakeFood(&DAT_10006490);
    TakeWood(&DAT_100064a0);
    TakeStone(&DAT_100064a8);
    SelectUnits(&DAT_10006460,0);
    SelSendAndKill(1,&DAT_100064c0,0x40,0);
    SelectUnits(&DAT_10006488,0);
    SelSendAndKill(1,&DAT_100064e0,0x40,0);
    RunTimer(1,100);
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006478,1);
    iVar3 = GetUnitsByNation(&DAT_10006468,1);
    iVar4 = GetUnitsByNation(&DAT_10006450,1);
    if (iVar2 + iVar3 + iVar4 == 0) {
      SetTrigg(1,0);
      ShowPage("#PAGE1");
      ShowVictory();
    }
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetUnitsAmount1(&DAT_100064d8,&DAT_10006450), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_100064f8,&DAT_10006468), 0 < iVar2)) ||
      (iVar2 = GetUnitsAmount1(&DAT_100064f8,&DAT_10006478), 0 < iVar2)))) {
    SetTrigg(2,0);
    ShowPage("#PAGE2");
    LooseGame();
  }
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_10006450);
    if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006458), 0 < iVar2)) {
      CreateZoneNearGroup(&DAT_10006528,&DAT_100064d8,&DAT_10006450,500);
      SelectUnits(&DAT_10006458,0);
      SelSendAndKill(1,&DAT_10006528,0x40,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10006468);
    if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006470), 0 < iVar2)) {
      CreateZoneNearGroup(&DAT_10006530,&DAT_100064f8,&DAT_10006468,500);
      SelectUnits(&DAT_10006470,0);
      SelSendAndKill(1,&DAT_10006530,0x40,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10006478);
    if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006480), 0 < iVar2)) {
      CreateZoneNearGroup(&DAT_10006538,&DAT_100064f8,&DAT_10006478,500);
      SelectUnits(&DAT_10006480,0);
      SelSendAndKill(1,&DAT_10006538,0x40,0);
    }
    RunTimer(1,100);
  }
  iVar2 = GetUnitsByNation(&DAT_10006450,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10006498,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10006450,0);
    SelDie(0);
    SelectUnits(&DAT_10006498,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10006468,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10006498,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10006468,0);
    SelDie(0);
    SelectUnits(&DAT_10006498,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10006478,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10006498,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10006478,0);
    SelDie(0);
    SelectUnits(&DAT_10006498,0);
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') &&
      (iVar2 = GetUnitsAmount1(&DAT_100064c0,&DAT_10006460), pcVar7 = (void*)&RunTimer,
      pcVar6 = (void*)&SetTrigg, pcVar8 = (void*)&GetDiff, 0 < iVar2)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10006450,1), iVar2 == 0 ||
      (iVar2 = GetUnitsAmount1(&DAT_100064c0,&DAT_10006450), pcVar7 = (void*)&RunTimer,
      pcVar6 = (void*)&SetTrigg, pcVar8 = (void*)&GetDiff, 0 < iVar2)))) {
    SetTrigg(3,0);
    iVar2 = GetDiff(0);
    RunTimer(3,iVar2 * -500 + 0x6a4);
  }
  cVar1 = TimerDoneFirst(3);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10006460,0);
    SelSendAndKill(1,&DAT_100064c8,0x40,0);
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100064c8,&DAT_10006460), 0 < iVar2)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10006450,1), iVar2 == 0 ||
      (iVar2 = GetUnitsAmount1(&DAT_100064c8,&DAT_10006450), 0 < iVar2)))) {
    SetTrigg(4,0);
    iVar2 = GetDiff(0);
    RunTimer(4,iVar2 * -500 + 0x6a4);
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10006460,0);
    SelSendAndKill(1,&DAT_100064d0,0x40,0);
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100064d0,&DAT_10006460), 0 < iVar2)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10006450,1), iVar2 == 0 ||
      (iVar2 = GetUnitsAmount1(&DAT_100064d0,&DAT_10006450), 0 < iVar2)))) {
    SetTrigg(5,0);
    iVar2 = GetDiff(0);
    RunTimer(5,iVar2 * -500 + 0x6a4);
  }
  cVar1 = TimerDoneFirst(5);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10006460,0);
    SelSendAndKill(1,&DAT_100064d8,0x40,0);
    cVar1 = Trigg(10);
    if (cVar1 != '\0') {
      SetTrigg(10,0);
      ShowPage("#OTST2");
    }
  }
  cVar1 = Trigg(6);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100064e0,&DAT_10006488), 0 < iVar2)) &&
     (((iVar2 = GetUnitsByNation(&DAT_10006468,1), iVar2 == 0 &&
       (iVar2 = GetUnitsByNation(&DAT_10006478,1), iVar2 == 0)) ||
      ((iVar2 = GetUnitsAmount1(&DAT_100064e0,&DAT_10006468), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_100064e0,&DAT_10006478), 0 < iVar2)))))) {
    SetTrigg(6,0);
    iVar2 = GetDiff(0);
    RunTimer(6,iVar2 * -500 + 0x6a4);
  }
  cVar1 = TimerDoneFirst(6);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10006488,0);
    SelSendAndKill(1,&DAT_100064e8,0x40,0);
  }
  cVar1 = Trigg(7);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100064e8,&DAT_10006488), 0 < iVar2)) &&
     (((iVar2 = GetUnitsByNation(&DAT_10006468,1), iVar2 == 0 &&
       (iVar2 = GetUnitsByNation(&DAT_10006478,1), iVar2 == 0)) ||
      ((iVar2 = GetUnitsAmount1(&DAT_100064e8,&DAT_10006468), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_100064e8,&DAT_10006478), 0 < iVar2)))))) {
    SetTrigg(7,0);
    iVar2 = GetDiff(0);
    RunTimer(7,iVar2 * -500 + 0x6a4);
  }
  cVar1 = TimerDoneFirst(7);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10006488,0);
    SelSendAndKill(1,&DAT_100064f0,0x40,0);
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100064f0,&DAT_10006488), 0 < iVar2)) &&
     (((iVar2 = GetUnitsByNation(&DAT_10006468,1), iVar2 == 0 &&
       (iVar2 = GetUnitsByNation(&DAT_10006478,1), iVar2 == 0)) ||
      ((iVar2 = GetUnitsAmount1(&DAT_100064f0,&DAT_10006468), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_100064f0,&DAT_10006478), 0 < iVar2)))))) {
    SetTrigg(8,0);
    iVar2 = GetDiff(0);
    RunTimer(8,iVar2 * -500 + 0x6a4);
  }
  cVar1 = TimerDoneFirst(8);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10006488,0);
    SelSendAndKill(1,&DAT_100064f8,0x40,0);
    cVar1 = Trigg(10);
    if (cVar1 != '\0') {
      SetTrigg(10,0);
      ShowPage("#OTST2");
    }
  }
  cVar1 = Trigg(9);
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = GetDiff(0);
  iVar3 = GetGlobalTime();
  if (iVar3 <= (0xc - iVar2) * 500) {
    return;
  }
  SetTrigg(9,0);
  uVar5 = GetDiff(0);
  switch(uVar5) {
  case 0:
    puVar9 = &DAT_10006540;
    break;
  case 1:
    puVar9 = &DAT_10006520;
    break;
  case 2:
    puVar9 = &DAT_10006510;
    break;
  case 3:
    puVar9 = &DAT_10006518;
    break;
  default:
    goto switchD_10001b34_default;
  }
  CreateObject0(&DAT_100064b0,puVar9,&DAT_10006508,0,&DAT_10006500,0xc4);
switchD_10001b34_default:
  ShowPage("#PAGE3");
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
