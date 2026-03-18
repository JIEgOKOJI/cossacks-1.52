#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_10006038[] = "Z15";
char DAT_1000603c[] = "Z13";
char DAT_10006040[] = "Z12";
char DAT_10006044[] = "Z11";
char DAT_10006048[] = "Z10";
char DAT_1000604c[] = "Z9A";
char DAT_10006050[] = "Z9";
char DAT_10006054[] = "Z8A";
char DAT_10006058[] = "Z8";
char DAT_1000605c[] = "Z7A";
char DAT_10006060[] = "Z7";
char DAT_10006064[] = "Z6A";
char DAT_10006068[] = "Z6";
char DAT_1000606c[] = "Z5A";
char DAT_10006070[] = "Z5";
char DAT_10006074[] = "Z4";
char DAT_10006078[] = "Z3";
char DAT_1000607c[] = "Z2";
char DAT_10006080[] = "Z1";
char DAT_10006084[] = "G20";
char DAT_10006088[] = "G19";
char DAT_1000608c[] = "G18";
char DAT_10006090[] = "G17";
char DAT_10006094[] = "G16";
char DAT_10006098[] = "G15";
char DAT_1000609c[] = "G14";
char DAT_100060a0[] = "G13";
char DAT_100060a4[] = "G12";
char DAT_100060a8[] = "G11";
char DAT_100060ac[] = "G10";
char DAT_100060b0[] = "G9";
char DAT_100060b4[] = "G8";
char DAT_100060b8[] = "G7";
char DAT_100060bc[] = "G6";
char DAT_100060c0[] = "G5";
char DAT_100060c4[] = "G4";
char DAT_100060c8[] = "G3";
char DAT_100060cc[] = "G2";
char DAT_100060d0[] = "G1";
long long DAT_10006430 = 0;
long long DAT_10006438 = 0;
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
long long DAT_10006548 = 0;
long long DAT_10006550 = 0;
long long DAT_10006558 = 0;
long long DAT_10006560 = 0;
long long DAT_10006568 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006430,DAT_100060d0);
  RegisterUnits(&DAT_10006438,DAT_100060cc);
  RegisterUnits(&DAT_10006440,DAT_100060c8);
  RegisterUnits(&DAT_10006448,DAT_100060c4);
  RegisterUnits(&DAT_10006450,DAT_100060c0);
  RegisterUnits(&DAT_10006458,DAT_100060bc);
  RegisterUnits(&DAT_10006460,DAT_100060b8);
  RegisterUnits(&DAT_10006468,DAT_100060b4);
  RegisterUnits(&DAT_10006470,DAT_100060b0);
  RegisterUnits(&DAT_10006480,DAT_100060ac);
  RegisterUnits(&DAT_10006488,DAT_100060a8);
  RegisterUnits(&DAT_10006490,DAT_100060a4);
  RegisterUnits(&DAT_10006498,DAT_100060a0);
  RegisterUnits(&DAT_100064a8,DAT_1000609c);
  RegisterUnits(&DAT_100064b0,DAT_10006098);
  RegisterUnits(&DAT_100064b8,DAT_10006094);
  RegisterUnits(&DAT_100064c0,DAT_10006090);
  RegisterUnits(&DAT_100064c8,DAT_1000608c);
  RegisterUnits(&DAT_100064d0,DAT_10006088);
  RegisterUnits(&DAT_100064a0,DAT_10006084);
  RegisterDynGroup(&DAT_10006478);
  RegisterZone(&DAT_100064d8,DAT_10006080);
  RegisterZone(&DAT_100064e0,DAT_1000607c);
  RegisterZone(&DAT_100064e8,DAT_10006078);
  RegisterZone(&DAT_100064f0,DAT_10006074);
  RegisterZone(&DAT_100064f8,DAT_10006070);
  RegisterZone(&DAT_10006548,DAT_1000606c);
  RegisterZone(&DAT_10006500,DAT_10006068);
  RegisterZone(&DAT_10006550,DAT_10006064);
  RegisterZone(&DAT_10006508,DAT_10006060);
  RegisterZone(&DAT_10006558,DAT_1000605c);
  RegisterZone(&DAT_10006510,DAT_10006058);
  RegisterZone(&DAT_10006560,DAT_10006054);
  RegisterZone(&DAT_10006518,DAT_10006050);
  RegisterZone(&DAT_10006568,DAT_1000604c);
  RegisterZone(&DAT_10006520,DAT_10006048);
  RegisterZone(&DAT_10006528,DAT_10006044);
  RegisterZone(&DAT_10006530,DAT_10006040);
  RegisterZone(&DAT_10006538,DAT_1000603c);
  RegisterZone(&DAT_10006540,DAT_10006038);
  SetPlayerName(1,"PRUSSIA");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pcVar4;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    ShowPage("#PAGE0");
    SetResource(0,3,500000);
    SetResource(0,1,500000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,500000);
    SetResource(0,4,500000);
    SetResource(1,3,90000000);
    SetResource(1,1,90000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,90000000);
    SetResource(1,4,90000000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SelectUnits(&DAT_100064d0,0);
      SelDie(1);
      SelectUnits(&DAT_100064a0,0);
      SelDie(1);
    }
  }
  iVar2 = GetUnitsByNation(&DAT_10006448,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10006478,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10006448,0);
    SelDie(0);
    SelectUnits(&DAT_10006478,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10006438,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10006438,0);
    SelDie(1);
  }
  iVar2 = GetTotalAmount0(&DAT_10006450);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10006450);
    iVar3 = GetUnitsAmount1(&DAT_100064f8,&DAT_10006450);
    if (iVar3 == iVar2) {
      AttackZoneByArtillery(&DAT_10006450,&DAT_10006548,0);
    }
    else {
      SelectUnits(&DAT_10006450,0);
      SelSendTo(1,&DAT_100064f8,0x46,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10006458);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10006458);
    iVar3 = GetUnitsAmount1(&DAT_10006500,&DAT_10006458);
    if (iVar3 == iVar2) {
      AttackZoneByArtillery(&DAT_10006458,&DAT_10006550,0);
    }
    else {
      SelectUnits(&DAT_10006458,0);
      SelSendTo(1,&DAT_10006500,0x46,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10006460);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10006460);
    iVar3 = GetUnitsAmount1(&DAT_10006508,&DAT_10006460);
    if (iVar3 == iVar2) {
      AttackZoneByArtillery(&DAT_10006460,&DAT_10006558,0);
    }
    else {
      SelectUnits(&DAT_10006460,0);
      SelSendTo(1,&DAT_10006508,0x46,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10006468);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10006468);
    iVar3 = GetUnitsAmount1(&DAT_10006510,&DAT_10006468);
    if (iVar3 == iVar2) {
      AttackZoneByArtillery(&DAT_10006468,&DAT_10006560,0);
    }
    else {
      SelectUnits(&DAT_10006468,0);
      SelSendTo(1,&DAT_10006510,0x46,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10006470);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10006470);
    iVar3 = GetUnitsAmount1(&DAT_10006518,&DAT_10006470);
    if (iVar3 == iVar2) {
      AttackZoneByArtillery(&DAT_10006470,&DAT_10006568,0);
    }
    else {
      SelectUnits(&DAT_10006470,0);
      SelSendTo(1,&DAT_10006518,0x46,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10006480);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10006480);
    iVar3 = GetUnitsAmount1(&DAT_10006520,&DAT_10006480);
    if (iVar3 < iVar2) {
      SelectUnits(&DAT_10006480,0);
      SelSendTo(1,&DAT_10006520,0x46,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10006488);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10006488);
    iVar3 = GetUnitsAmount1(&DAT_10006528,&DAT_10006488);
    if (iVar3 < iVar2) {
      SelectUnits(&DAT_10006488,0);
      SelSendTo(1,&DAT_10006528,0x46,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10006490);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10006490);
    iVar3 = GetUnitsAmount1(&DAT_10006530,&DAT_10006490);
    if (iVar3 < iVar2) {
      SelectUnits(&DAT_10006490,0);
      SelSendTo(1,&DAT_10006530,0x46,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10006498);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10006498);
    iVar3 = GetUnitsAmount1(&DAT_10006538,&DAT_10006498);
    if (iVar3 < iVar2) {
      SelectUnits(&DAT_10006498,0);
      SelSendTo(1,&DAT_10006538,0x46,0);
    }
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsByNation(&DAT_100064b8,1), pcVar4 = (void*)&SetTrigg, iVar2 == 0)) {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    SelectUnits(&DAT_100064c8,0);
    AllowAttack(1,0);
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006540,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_100064c8,&DAT_10006540,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064c0), iVar2 == 0)) {
    SetTrigg(2,0);
    ShowPage("#PAGE2");
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100064d8,0), 0x14 < iVar2)) {
    SetTrigg(3,0);
    SelectUnits(&DAT_100064a8,0);
    SelSendAndKill(1,&DAT_100064d8,0,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100064e0,0), 0x14 < iVar2)) {
    SetTrigg(3,0);
    SelectUnits(&DAT_100064a8,0);
    SelSendAndKill(1,&DAT_100064e0,0,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100064e8,0), 0x14 < iVar2)) {
    SetTrigg(3,0);
    SelectUnits(&DAT_100064a8,0);
    SelSendAndKill(1,&DAT_100064e8,0,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100064d8,&DAT_10006438), 0 < iVar2)) {
    SetTrigg(4,0);
    SelectUnits(&DAT_100064b0,0);
    SelSendAndKill(1,&DAT_100064d8,0,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100064e0,&DAT_10006438), 0 < iVar2)) {
    SetTrigg(4,0);
    SelectUnits(&DAT_100064b0,0);
    SelSendAndKill(1,&DAT_100064e0,0,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100064e8,&DAT_10006438), 0 < iVar2)) {
    SetTrigg(4,0);
    SelectUnits(&DAT_100064b0,0);
    SelSendAndKill(1,&DAT_100064e8,0,0);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006430,0), iVar2 == 0)) {
    SetTrigg(5,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(6);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetTotalAmount0(&DAT_10006440);
    if ((5 - iVar2) * 5 <= iVar3) {
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10006440);
      if (((5 - iVar2) * 0x14 <= iVar3) || (cVar1 = Trigg(2), cVar1 != '\0')) goto LAB_10001930;
    }
    SetTrigg(6,0);
    SelectUnits(&DAT_10006440,0);
    SelSendTo(1,&DAT_100064f0,0,0);
    RunTimer(1,300);
  }
LAB_10001930:
  cVar1 = TimerDoneFirst(1);
  if (cVar1 != '\0') {
    ShowPage("#PAGE4");
    ShowVictory();
  }
  cVar1 = Trigg(7);
  if ((((cVar1 != '\0') && (iVar2 = GetGlobalTime(), 4000 < iVar2)) &&
      (cVar1 = Trigg(1), cVar1 != '\0')) && (iVar2 = GetTotalAmount0(&DAT_100064c8), 0 < iVar2)) {
    SetTrigg(7,0);
    ShowPage("#OTST1");
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
