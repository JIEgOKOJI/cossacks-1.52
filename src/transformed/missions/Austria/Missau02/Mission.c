#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006080[] = "Z22";
char DAT_10006084[] = "Z21";
char DAT_10006088[] = "Z20";
char DAT_1000608c[] = "Z19";
char DAT_10006090[] = "Z18";
char DAT_10006094[] = "Z17";
char DAT_10006098[] = "Z16";
char DAT_1000609c[] = "Z15";
char DAT_100060a0[] = "Z14";
char DAT_100060a4[] = "Z13";
char DAT_100060a8[] = "Z12";
char DAT_100060ac[] = "Z11";
char DAT_100060b0[] = "Z10";
char DAT_100060b4[] = "Z9";
char DAT_100060b8[] = "Z8";
char DAT_100060bc[] = "Z7";
char DAT_100060c0[] = "Z6";
char DAT_100060c4[] = "Z5";
char DAT_100060c8[] = "Z4";
char DAT_100060cc[] = "Z3";
char DAT_100060d0[] = "Z2";
char DAT_100060d4[] = "Z1";
char DAT_100060d8[] = "G28";
char DAT_100060dc[] = "G27";
char DAT_100060e0[] = "G26";
char DAT_100060e4[] = "G25";
char DAT_100060e8[] = "G24";
char DAT_100060ec[] = "G23";
char DAT_100060f0[] = "G22";
char DAT_100060f4[] = "G21";
char DAT_100060f8[] = "G20";
char DAT_100060fc[] = "G19";
char DAT_10006100[] = "G18";
char DAT_10006104[] = "G17";
char DAT_10006108[] = "G16A";
char DAT_10006110[] = "G16";
char DAT_10006114[] = "G15";
char DAT_10006118[] = "G14";
char DAT_1000611c[] = "G13";
char DAT_10006120[] = "G12";
char DAT_10006124[] = "G11";
char DAT_10006128[] = "G10";
char DAT_1000612c[] = "G9A";
char DAT_10006130[] = "G9";
char DAT_10006134[] = "G8";
char DAT_10006138[] = "G7";
char DAT_1000613c[] = "G6";
char DAT_10006140[] = "G5";
char DAT_10006144[] = "G4";
char DAT_10006148[] = "G3";
char DAT_1000614c[] = "G2";
char DAT_10006150[] = "G1";
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
long long DAT_10006570 = 0;
long long DAT_10006578 = 0;
long long DAT_10006580 = 0;
long long DAT_10006588 = 0;
long long DAT_10006590 = 0;
long long DAT_10006598 = 0;
long long DAT_100065a0 = 0;
long long DAT_100065a8 = 0;
long long DAT_100065b0 = 0;
long long DAT_100065b8 = 0;
long long DAT_100065c0 = 0;
long long DAT_100065c8 = 0;
long long DAT_100065d0 = 0;
long long DAT_100065d8 = 0;
long long DAT_100065e0 = 0;
long long DAT_100065e8 = 0;
long long DAT_100065f0 = 0;
long long DAT_100065f8 = 0;
long long DAT_10006600 = 0;
long long DAT_10006608 = 0;
long long DAT_10006610 = 0;
long long DAT_10006618 = 0;
long long DAT_10006620 = 0;
long long DAT_10006628 = 0;
long long DAT_10006630 = 0;
long long DAT_10006638 = 0;
long long DAT_10006640 = 0;
long long DAT_10006648 = 0;
long long DAT_10006650 = 0;
long long DAT_10006658 = 0;
long long DAT_10006660 = 0;
long long DAT_10006668 = 0;
long long DAT_10006670 = 0;
long long DAT_10006678 = 0;
long long DAT_10006680 = 0;
long long DAT_10006688 = 0;
long long DAT_10006690 = 0;
long long DAT_10006698 = 0;

/* Forward declarations */
void FUN_10001330(int param_1);

void OnInit();
void ProcessScenary();


void __cdecl FUN_10001330(int param_1)

{
  int iVar1;
  int *puVar2;
  
  iVar1 = GetTotalAmount0(param_1);
  if (0 < iVar1) {
    iVar1 = GetTotalAmount0(&DAT_10006518);
    if ((iVar1 != 0) && (iVar1 = GetTotalAmount0(&DAT_10006570), iVar1 != 0)) {
      return;
    }
    iVar1 = GetUnitsAmount1(&DAT_10006630,param_1);
    if (((iVar1 < 1) && (iVar1 = GetUnitsAmount1(&DAT_10006638,param_1), iVar1 < 1)) &&
       (iVar1 = GetUnitsAmount1(&DAT_10006638,param_1), iVar1 < 1)) {
      SelectUnits(param_1,0);
      SelSendAndKill(1,&DAT_10006630,0,0);
      return;
    }
    iVar1 = GetUnitsAmount0(&DAT_10006630,0);
    if (0 < iVar1) {
      AttackEnemyInZone(param_1,&DAT_10006630,0);
      return;
    }
    iVar1 = GetUnitsAmount0(&DAT_10006638,0);
    puVar2 = &DAT_10006638;
    if (iVar1 < 1) {
      iVar1 = GetUnitsAmount0(&DAT_10006638,0);
      if (iVar1 < 1) {
        return;
      }
      puVar2 = &DAT_10006640;
    }
    AttackEnemyInZone(param_1,puVar2,0);
  }
  return;
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_100064d8,DAT_10006150);
  RegisterUnits(&DAT_100064e0,DAT_1000614c);
  RegisterUnits(&DAT_100064e8,DAT_10006148);
  RegisterUnits(&DAT_100064f0,DAT_10006144);
  RegisterUnits(&DAT_100064f8,DAT_10006140);
  RegisterUnits(&DAT_10006500,DAT_1000613c);
  RegisterUnits(&DAT_10006508,DAT_10006138);
  RegisterUnits(&DAT_10006510,DAT_10006134);
  RegisterUnits(&DAT_10006518,DAT_10006130);
  RegisterUnits(&DAT_10006608,DAT_1000612c);
  RegisterUnits(&DAT_10006528,DAT_10006128);
  RegisterUnits(&DAT_10006530,DAT_10006124);
  RegisterUnits(&DAT_10006538,DAT_10006120);
  RegisterUnits(&DAT_10006540,DAT_1000611c);
  RegisterUnits(&DAT_10006550,DAT_10006118);
  RegisterUnits(&DAT_10006560,DAT_10006114);
  RegisterUnits(&DAT_10006570,DAT_10006110);
  RegisterUnits(&DAT_10006690,DAT_10006108);
  RegisterUnits(&DAT_10006580,DAT_10006104);
  RegisterUnits(&DAT_10006590,DAT_10006100);
  RegisterUnits(&DAT_100065a0,DAT_100060fc);
  RegisterUnits(&DAT_10006548,DAT_100060f8);
  RegisterUnits(&DAT_10006558,DAT_100060f4);
  RegisterUnits(&DAT_10006568,DAT_100060f0);
  RegisterUnits(&DAT_10006578,DAT_100060ec);
  RegisterUnits(&DAT_10006588,DAT_100060e8);
  RegisterUnits(&DAT_10006598,DAT_100060e4);
  RegisterUnits(&DAT_100065a8,DAT_100060e0);
  RegisterUnits(&DAT_100065b0,DAT_100060dc);
  RegisterUnits(&DAT_100065b8,DAT_100060d8);
  RegisterZone(&DAT_100065c0,DAT_100060d4);
  RegisterZone(&DAT_100065c8,DAT_100060d0);
  RegisterZone(&DAT_100065d0,DAT_100060cc);
  RegisterZone(&DAT_100065d8,DAT_100060c8);
  RegisterZone(&DAT_100065e0,DAT_100060c4);
  RegisterZone(&DAT_100065e8,DAT_100060c0);
  RegisterZone(&DAT_100065f0,DAT_100060bc);
  RegisterZone(&DAT_100065f8,DAT_100060b8);
  RegisterZone(&DAT_10006600,DAT_100060b4);
  RegisterZone(&DAT_10006628,DAT_100060b0);
  RegisterZone(&DAT_10006630,DAT_100060ac);
  RegisterZone(&DAT_10006638,DAT_100060a8);
  RegisterZone(&DAT_10006640,DAT_100060a4);
  RegisterZone(&DAT_10006650,DAT_100060a0);
  RegisterZone(&DAT_10006660,DAT_1000609c);
  RegisterZone(&DAT_10006670,DAT_10006098);
  RegisterZone(&DAT_10006678,DAT_10006094);
  RegisterZone(&DAT_10006680,DAT_10006090);
  RegisterZone(&DAT_10006688,DAT_1000608c);
  RegisterZone(&DAT_10006648,DAT_10006088);
  RegisterZone(&DAT_10006658,DAT_10006084);
  RegisterZone(&DAT_10006668,DAT_10006080);
  RegisterDynGroup(&DAT_10006520);
  RegisterUnitType(&DAT_10006610,"Kreposnoi_pruss(au)");
  RegisterUnitType(&DAT_10006620,"Pikiner_evro(au)");
  RegisterUnitType(&DAT_100064c0,"Mushketer_avstr(au)");
  RegisterFormation(&DAT_10006618,"#SQUARE196");
  RegisterVar(&DAT_100064c8,8);
  RegisterVar(&DAT_100064d0,8);
  SetPlayerName(1,"CHEHS");
  EnableUnit(0,&DAT_10006610,0);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pcVar4;
  void *pcVar5;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    iVar2 = GetDiff(1);
    SetResource(0,3,iVar2 * -140000 + 500000);
    iVar2 = GetDiff(1);
    SetResource(0,1,(5 - iVar2) * 30000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar2 = GetDiff(1);
    SetResource(0,5,(9 - iVar2) * 10000);
    iVar2 = GetDiff(1);
    SetResource(0,4,(9 - iVar2) * 10000);
    ShowPage("#PAGE0");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SelectUnits(&DAT_100065b8,0);
      SelDie(1);
      ShowPage("#OTST1");
    }
    SelectUnits(&DAT_100064f0,0);
    SelSendAndKill(1,&DAT_100065c0,0,0);
    SelSendAndKill(1,&DAT_100065c8,0,2);
    SelSendAndKill(1,&DAT_100065d0,0,2);
    SelSendAndKill(1,&DAT_100065d8,0,2);
    SelSendAndKill(1,&DAT_100065e0,0,2);
    SelSendAndKill(1,&DAT_100065e8,0,2);
    SelectUnits(&DAT_100064f8,0);
    SelSendAndKill(1,&DAT_100065f0,0,0);
    SelSendAndKill(1,&DAT_100065f8,0,2);
    SelectUnits(&DAT_10006548,0);
    SelSendAndKill(1,&DAT_10006660,0,0);
    SelectUnits(&DAT_10006588,0);
    SelSendAndKill(1,&DAT_100065f0,0,0);
    SelSendAndKill(1,&DAT_100065f8,0,2);
    SelectUnits(&DAT_10006500,0);
    SelSendAndKill(1,&DAT_10006600,0,0);
    SelSendAndKill(1,&DAT_10006628,0,2);
    SelectUnits(&DAT_10006530,0);
    SelSendAndKill(1,&DAT_10006650,0,0);
    SelectUnits(&DAT_10006550,0);
    SelSendAndKill(1,&DAT_10006670,0,0);
    SelSendAndKill(1,&DAT_10006678,0,2);
    RunTimer(1,100);
    DisableMission(0x43);
    DisableMission(0x44);
  }
  iVar2 = GetUnitsByNation(&DAT_100064d8,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_100064d8,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_100064e0,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10006520,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_100064e0,0);
    SelDie(0);
    SelectUnits(&DAT_10006520,0);
  }
  iVar2 = GetUnitsByNation(&DAT_100064e8,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_100064e8,0);
    SelDie(1);
  }
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_10006500);
    if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10006508), iVar2 < 1)) {
      FUN_10001330(&DAT_10006508);
    }
    else {
      CreateZoneNearGroup(&DAT_10006698,&DAT_10006628,&DAT_10006500,100);
      SelectUnits(&DAT_10006508,0);
      SelSendAndKill(1,&DAT_10006698,0,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10006530);
    if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10006538), iVar2 < 1)) {
      FUN_10001330(&DAT_10006538);
    }
    else {
      CreateZoneNearGroup(&DAT_10006698,&DAT_10006650,&DAT_10006530,100);
      SelectUnits(&DAT_10006538,0);
      SelSendAndKill(1,&DAT_10006698,0x40,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10006550);
    if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10006560), iVar2 < 1)) {
      FUN_10001330(&DAT_10006560);
    }
    else {
      CreateZoneNearGroup(&DAT_10006698,&DAT_10006678,&DAT_10006550,100);
      SelectUnits(&DAT_10006560,0);
      SelSendAndKill(1,&DAT_10006698,0,0);
    }
    cVar1 = Trigg(1);
    if (((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006580), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_10006590), 0 < iVar2)) {
      CreateZoneNearGroup(&DAT_10006698,&DAT_10006680,&DAT_10006580,100);
      SelectUnits(&DAT_10006590,0);
      SelSendAndKill(1,&DAT_10006698,0,0);
    }
    else {
      FUN_10001330(&DAT_10006590);
    }
    RunTimer(1,200);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsAmount1(&DAT_10006628,&DAT_10006500), pcVar4 = (void*)&SetTrigg, 0 < iVar2)) {
    SetTrigg(2,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006500), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10006510);
    if ((iVar2 < 1) || (iVar2 = GetDiff(1), iVar2 < 2)) {
      iVar2 = GetTotalAmount0(&DAT_10006518);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_10006528);
        if (iVar2 < 1) {
          SetTrigg(2,0);
          SelectUnits(&DAT_10006500,0);
          SelSendAndKill(1,&DAT_10006640,0,0);
        }
        else {
          SelectUnits(&DAT_10006500,0);
          SelAttackGroup(1,&DAT_10006528);
        }
      }
      else {
        SelectUnits(&DAT_10006500,0);
        SelAttackGroup(1,&DAT_10006518);
      }
    }
    else {
      SelectUnits(&DAT_10006500,0);
      SelAttackGroup(1,&DAT_10006510);
    }
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006650,&DAT_10006530), 0 < iVar2)) {
    SetTrigg(6,0);
  }
  cVar1 = Trigg(6);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006530), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10006540);
    if ((iVar2 < 1) || (iVar2 = GetDiff(1), iVar2 < 2)) {
      iVar2 = GetTotalAmount0(&DAT_10006510);
      if ((iVar2 < 1) || (iVar2 = GetDiff(1), iVar2 < 2)) {
        iVar2 = GetTotalAmount0(&DAT_10006518);
        if (iVar2 < 1) {
          iVar2 = GetTotalAmount0(&DAT_10006528);
          if (iVar2 < 1) {
            SetTrigg(6,0);
            SelectUnits(&DAT_10006530,0);
            SelSendAndKill(1,&DAT_10006640,0,0);
          }
          else {
            SelectUnits(&DAT_10006530,0);
            SelAttackGroup(1,&DAT_10006528);
          }
        }
        else {
          SelectUnits(&DAT_10006530,0);
          SelAttackGroup(1,&DAT_10006518);
        }
      }
      else {
        SelectUnits(&DAT_10006530,0);
        SelAttackGroup(1,&DAT_10006510);
      }
    }
    else {
      SelectUnits(&DAT_10006530,0);
      SelAttackGroup(1,&DAT_10006540);
    }
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006678,&DAT_10006550), 0 < iVar2)) {
    SetTrigg(7,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006550), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10006570);
    if (iVar2 < 1) {
      iVar2 = GetTotalAmount0(&DAT_10006598);
      if (iVar2 < 1) {
        SetTrigg(7,0);
        SelectUnits(&DAT_10006550,0);
        SelSendAndKill(1,&DAT_10006640,0,0);
      }
      else {
        SelectUnits(&DAT_10006550,0);
        SelAttackGroup(1,&DAT_10006598);
      }
    }
    else {
      SelectUnits(&DAT_10006550,0);
      SelAttackGroup(1,&DAT_10006570);
    }
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetTotalAmount0(&DAT_10006518), iVar2 == 0 || (cVar1 = TimerDone(3), cVar1 != '\0'))
      && (iVar2 = GetTotalAmount0(&DAT_10006558), 0 < iVar2)))) {
    SetTrigg(3,0);
    SelectUnits(&DAT_10006558,0);
    SelSendAndKill(1,&DAT_10006600,0,0);
    SelSendAndKill(1,&DAT_10006628,0,2);
    SelSendAndKill(1,&DAT_10006630,0,2);
    SelSendAndKill(1,&DAT_10006638,0,2);
    SelSendAndKill(1,&DAT_10006640,0,2);
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') &&
      ((iVar2 = GetTotalAmount0(&DAT_10006518), iVar2 == 0 || (cVar1 = TimerDone(3), cVar1 != '\0'))
      )) && (iVar2 = GetTotalAmount0(&DAT_10006568), 0 < iVar2)) {
    SetTrigg(8,0);
    SelectUnits(&DAT_10006568,0);
    SelSendAndKill(1,&DAT_10006650,0,0);
    iVar2 = GetTotalAmount0(&DAT_10006518);
    if (iVar2 == 0) {
      SelSendAndKill(1,&DAT_10006628,0,2);
    }
    SelSendAndKill(1,&DAT_10006630,0,2);
    SelSendAndKill(1,&DAT_10006638,0,2);
    SelSendAndKill(1,&DAT_10006640,0,2);
  }
  cVar1 = Trigg(9);
  if (((cVar1 != '\0') &&
      ((iVar2 = GetTotalAmount0(&DAT_10006570), iVar2 == 0 || (cVar1 = TimerDone(2), cVar1 != '\0'))
      )) && (iVar2 = GetTotalAmount0(&DAT_10006578), 0 < iVar2)) {
    SetTrigg(9,0);
    SelectUnits(&DAT_10006578,0);
    SelSendAndKill(1,&DAT_10006670,0,0);
    SelSendAndKill(1,&DAT_10006678,0,2);
    SelSendAndKill(1,&DAT_10006630,0,2);
    SelSendAndKill(1,&DAT_10006638,0,2);
    SelSendAndKill(1,&DAT_10006640,0,2);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006518), iVar2 == 0)) {
    SetTrigg(4,0);
    RunTimer(2,2000);
    iVar2 = GetTotalAmount0(&DAT_10006608);
    if (0 < iVar2) {
      ClearSelection(0);
      SelectUnits(&DAT_10006608,0);
      SelDie(0);
    }
    ShowPage("#PAGE1");
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006570), iVar2 == 0)) {
    SetTrigg(5,0);
    RunTimer(3,2000);
    iVar2 = GetTotalAmount0(&DAT_10006690);
    if (0 < iVar2) {
      ClearSelection(0);
      SelectUnits(&DAT_10006690,0);
      SelDie(0);
    }
    ShowPage("#PAGE2");
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar2 = GetGlobalTime(), 5000 < iVar2)) {
    SetTrigg(1,0);
    SelectUnits(&DAT_10006580,0);
    SelSendAndKill(1,&DAT_10006680,0x40,0);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006680,&DAT_10006580), 0 < iVar2)) {
    SetTrigg(10,0);
  }
  cVar1 = Trigg(10);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006580), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_100065a0);
    if ((iVar2 < 1) || (iVar2 = GetDiff(1), iVar2 < 2)) {
      iVar2 = GetTotalAmount0(&DAT_10006570);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_10006598);
        if (iVar2 < 1) {
          SetTrigg(10,0);
          SelectUnits(&DAT_10006580,0);
          SelSendAndKill(1,&DAT_10006638,0,0);
        }
        else {
          SelectUnits(&DAT_10006580,0);
          SelAttackGroup(1,&DAT_10006598);
        }
      }
      else {
        SelectUnits(&DAT_10006580,0);
        SelAttackGroup(1,&DAT_10006570);
      }
    }
    else {
      SelectUnits(&DAT_10006580,0);
      SelAttackGroup(1,&DAT_100065a0);
    }
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064d8), iVar2 < 0x3c)) {
    SetTrigg(0xb,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(0xc);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if ((iVar2 * 3000 + 10000 < iVar3) ||
       (((((iVar2 = GetTotalAmount0(&DAT_10006500), pcVar5 = (void*)&Trigg, iVar2 == 0 &&
           (iVar2 = GetTotalAmount0(&DAT_10006530), pcVar5 = (void*)&Trigg, iVar2 == 0)) &&
          (iVar2 = GetTotalAmount0(&DAT_10006550), pcVar5 = (void*)&Trigg, iVar2 == 0)) &&
         ((iVar2 = GetTotalAmount0(&DAT_10006580), pcVar5 = (void*)&Trigg, iVar2 == 0 &&
          (cVar1 = Trigg(4), cVar1 != '\0')))) && (cVar1 = Trigg(5), cVar1 != '\0')))) {
      SetTrigg(0xc,0);
      DisableMission(0x42);
      EnableMission(0x43);
      EnableMission(0x44);
      ShowPage("#PAGE4");
      CreateObject0(&DAT_100064c8,&DAT_10006618,&DAT_10006620,0,&DAT_10006658,0xc0);
      CreateObject0(&DAT_100064d0,&DAT_10006618,&DAT_100064c0,0,&DAT_10006668,0xc0);
      iVar2 = GetDiff(1);
      AddResource(0,3,(0xf - iVar2) * 2000);
      iVar2 = GetDiff(1);
      AddResource(0,1,(10 - iVar2) * 1000);
      iVar2 = GetDiff(1);
      AddResource(0,5,(10 - iVar2) * 3000);
      iVar2 = GetDiff(1);
      AddResource(0,4,(10 - iVar2) * 3000);
    }
  }
  cVar1 = Trigg(0xd);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100065a8,1), iVar2 == 0)) &&
     (iVar2 = GetUnitsByNation(&DAT_100065b0,1), iVar2 == 0)) {
    SetTrigg(0xd,0);
    ShowPage("#PAGE5");
    ShowVictory();
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
