#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_10006058[] = "Z16";
char DAT_1000605c[] = "Z15";
char DAT_10006060[] = "Z14";
char DAT_10006064[] = "Z13";
char DAT_10006068[] = "Z12";
char DAT_1000606c[] = "Z11";
char DAT_10006070[] = "Z10";
char DAT_10006074[] = "Z9";
char DAT_10006078[] = "Z8";
char DAT_1000607c[] = "Z7";
char DAT_10006080[] = "Z6";
char DAT_10006084[] = "Z5";
char DAT_10006088[] = "Z4";
char DAT_1000608c[] = "Z3";
char DAT_10006090[] = "Z2";
char DAT_10006094[] = "Z1";
char DAT_10006098[] = "G39";
char DAT_1000609c[] = "G38";
char DAT_100060a0[] = "G37";
char DAT_100060a4[] = "G36";
char DAT_100060a8[] = "G35";
char DAT_100060ac[] = "G34";
char DAT_100060b0[] = "G33";
char DAT_100060b4[] = "G32";
char DAT_100060b8[] = "G31";
char DAT_100060bc[] = "G30";
char DAT_100060c0[] = "G29";
char DAT_100060c4[] = "G28";
char DAT_100060c8[] = "G27";
char DAT_100060cc[] = "G26";
char DAT_100060d0[] = "G25";
char DAT_100060d4[] = "G24";
char DAT_100060d8[] = "G23";
char DAT_100060dc[] = "G22";
char DAT_100060e0[] = "G21";
char DAT_100060e4[] = "G20";
char DAT_100060e8[] = "G19";
char DAT_100060ec[] = "G18";
char DAT_100060f0[] = "G17";
char DAT_100060f4[] = "G16";
char DAT_100060f8[] = "G15";
char DAT_100060fc[] = "G14";
char DAT_10006100[] = "G13";
char DAT_10006104[] = "G12";
char DAT_10006108[] = "G11";
char DAT_1000610c[] = "G10";
char DAT_10006110[] = "G9";
char DAT_10006114[] = "G8";
char DAT_10006118[] = "G7";
char DAT_1000611c[] = "G6";
char DAT_10006120[] = "G5";
char DAT_10006124[] = "G4";
char DAT_10006128[] = "G3";
char DAT_1000612c[] = "G2";
char DAT_10006130[] = "G1";
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_100064a0,DAT_10006130);
  RegisterUnits(&DAT_100064a8,DAT_1000612c);
  RegisterUnits(&DAT_100064b0,DAT_10006128);
  RegisterUnits(&DAT_100064b8,DAT_10006124);
  RegisterUnits(&DAT_100064c0,DAT_10006120);
  RegisterUnits(&DAT_100064c8,DAT_1000611c);
  RegisterUnits(&DAT_100064d0,DAT_10006118);
  RegisterUnits(&DAT_100064d8,DAT_10006114);
  RegisterUnits(&DAT_100064e0,DAT_10006110);
  RegisterUnits(&DAT_100064f8,DAT_1000610c);
  RegisterUnits(&DAT_10006500,DAT_10006108);
  RegisterUnits(&DAT_10006508,DAT_10006104);
  RegisterUnits(&DAT_10006510,DAT_10006100);
  RegisterUnits(&DAT_10006520,DAT_100060fc);
  RegisterUnits(&DAT_10006530,DAT_100060f8);
  RegisterUnits(&DAT_10006540,DAT_100060f4);
  RegisterUnits(&DAT_10006550,DAT_100060f0);
  RegisterUnits(&DAT_10006568,DAT_100060ec);
  RegisterUnits(&DAT_10006580,DAT_100060e8);
  RegisterUnits(&DAT_10006518,DAT_100060e4);
  RegisterUnits(&DAT_10006528,DAT_100060e0);
  RegisterUnits(&DAT_10006538,DAT_100060dc);
  RegisterUnits(&DAT_10006548,DAT_100060d8);
  RegisterUnits(&DAT_10006560,DAT_100060d4);
  RegisterUnits(&DAT_10006578,DAT_100060d0);
  RegisterUnits(&DAT_10006590,DAT_100060cc);
  RegisterUnits(&DAT_100065a0,DAT_100060c8);
  RegisterUnits(&DAT_100065b0,DAT_100060c4);
  RegisterUnits(&DAT_100065c0,DAT_100060c0);
  RegisterUnits(&DAT_10006558,DAT_100060bc);
  RegisterUnits(&DAT_10006570,DAT_100060b8);
  RegisterUnits(&DAT_10006588,DAT_100060b4);
  RegisterUnits(&DAT_10006598,DAT_100060b0);
  RegisterUnits(&DAT_100065a8,DAT_100060ac);
  RegisterUnits(&DAT_100065b8,DAT_100060a8);
  RegisterUnits(&DAT_100065c8,DAT_100060a4);
  RegisterUnits(&DAT_100065d0,DAT_100060a0);
  RegisterUnits(&DAT_100065d8,DAT_1000609c);
  RegisterUnits(&DAT_100065e0,DAT_10006098);
  RegisterZone(&DAT_100065e8,DAT_10006094);
  RegisterZone(&DAT_100065f0,DAT_10006090);
  RegisterZone(&DAT_100065f8,DAT_1000608c);
  RegisterZone(&DAT_10006600,DAT_10006088);
  RegisterZone(&DAT_10006608,DAT_10006084);
  RegisterZone(&DAT_10006610,DAT_10006080);
  RegisterZone(&DAT_10006618,DAT_1000607c);
  RegisterZone(&DAT_10006620,DAT_10006078);
  RegisterZone(&DAT_10006628,DAT_10006074);
  RegisterZone(&DAT_10006638,DAT_10006070);
  RegisterZone(&DAT_10006640,DAT_1000606c);
  RegisterZone(&DAT_10006648,DAT_10006068);
  RegisterZone(&DAT_10006650,DAT_10006064);
  RegisterZone(&DAT_10006658,DAT_10006060);
  RegisterZone(&DAT_10006660,DAT_1000605c);
  RegisterZone(&DAT_10006668,DAT_10006058);
  RegisterFormation(&DAT_10006630,"#LINEMORB10");
  RegisterUnitType(&DAT_100064e8,"Mortira(au)");
  RegisterVar(&DAT_10006670,8);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  RegisterVar(&DAT_10006678,8);
  RegisterVar(&DAT_10006680,8);
  RegisterDynGroup(&DAT_100064f0);
  SetPlayerName(1,"PRUSSIA");
  SetPlayerName(4,"ALLIES");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    SetResource(0,3,2000000);
    SetResource(0,1,2000000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,2000000);
    SetResource(0,4,2000000);
    SetResource(1,3,2000000);
    SetResource(1,1,2000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,20000000);
    SetResource(1,4,20000000);
    SetResource(4,3,2000000);
    SetResource(4,1,2000000);
    SetResource(4,0,0);
    SetResource(4,2,0);
    SetResource(4,5,5000000);
    SetResource(4,4,5000000);
    ShowPage("#PAGE0");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetLightSpot(&DAT_100065f0,3,1);
      SetLightSpot(&DAT_10006620,3,2);
      ShowPage("#OTST1");
      SelectUnits(&DAT_100065e0,0);
      SelDie(1);
    }
    SelectUnits(&DAT_100064c0,0);
    TakeFood(&DAT_100065c8);
    TakeWood(&DAT_100065d0);
    TakeStone(&DAT_100065d8);
  }
  cVar1 = Trigg(0x46);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if ((3 - iVar2) * 200 < iVar3) {
      SetTrigg(0x46,0);
      SelectUnits(&DAT_100064c0,0);
      SelSendAndKill(1,&DAT_100065f0,0x78,0);
      SelectUnits(&DAT_10006550,0);
      SelSendAndKill(1,&DAT_10006620,0x8c,0);
      iVar2 = GetDiff(0);
      RunTimer(1,(7 - iVar2) * 100);
    }
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006540), iVar2 == 0)) {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowVictory();
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064a0), iVar2 == 0)) {
    SetTrigg(2,0);
    ShowPage("#PAGE2");
    LooseGame();
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100064a8,0), iVar2 == 0)) {
    SetTrigg(2,0);
    ShowPage("#PAGE5");
    LooseGame();
  }
  iVar2 = GetUnitsAmount1(&DAT_100065f0,&DAT_100064c0);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_100064c8), 0 < iVar2)) {
    SelectUnits(&DAT_100064c0,0);
    SelAttackGroup(1,&DAT_100064c8);
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064c0), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_100064c8), iVar2 == 0)) {
    SetTrigg(3,0);
    SelectUnits(&DAT_100064c0,0);
    SelSendAndKill(1,&DAT_10006600,0x40,0);
  }
  iVar2 = GetUnitsAmount1(&DAT_10006620,&DAT_10006550);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006598), 0 < iVar2)) {
    SelectUnits(&DAT_10006550,0);
    SelAttackGroup(1,&DAT_10006598);
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006550), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10006598), iVar2 == 0)) {
    SetTrigg(4,0);
    SelectUnits(&DAT_10006550,0);
    SelSendAndKill(1,&DAT_10006628,0xc4,0);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetTotalAmount0(&DAT_100064c8), iVar2 == 0 ||
      (iVar2 = GetTotalAmount0(&DAT_100064c0), iVar2 == 0)))) {
    SetTrigg(6,0);
    SelectUnits(&DAT_100064d0,0);
    SelSendAndKill(1,&DAT_100065e8,0x78,0);
    SelSendAndKill(1,&DAT_100065f0,0x78,2);
    SelSendAndKill(1,&DAT_100065f8,0x40,2);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetTotalAmount0(&DAT_10006550), iVar2 == 0 ||
      (iVar2 = GetTotalAmount0(&DAT_10006598), iVar2 == 0)))) {
    SetTrigg(7,0);
    SelectUnits(&DAT_10006518,0);
    SelSendAndKill(1,&DAT_10006618,0x8c,0);
    SelSendAndKill(1,&DAT_10006620,0x8c,2);
    SelSendAndKill(1,&DAT_10006638,0xc4,2);
  }
  cVar1 = TimerDoneFirst(1);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_100064d8,0);
    SelSendAndKill(1,&DAT_100065e8,0x78,0);
    SelSendAndKill(1,&DAT_100065f0,0x78,2);
    SelSendAndKill(1,&DAT_10006608,0x40,2);
    SelectUnits(&DAT_10006520,0);
    SelSendAndKill(1,&DAT_100065e8,0x78,0);
    SelSendAndKill(1,&DAT_100065f0,0x78,2);
    SelSendAndKill(1,&DAT_10006610,0x40,2);
    SelectUnits(&DAT_10006528,0);
    SelSendAndKill(1,&DAT_10006618,0xa0,0);
    SelSendAndKill(1,&DAT_10006620,0xa0,2);
    SelSendAndKill(1,&DAT_10006628,0xc4,2);
    iVar2 = GetDiff(0);
    RunTimer(2,iVar2 * -200 + 0x76c);
    RunTimer(0xb,100);
  }
  cVar1 = TimerDone(0xb);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_10006520);
    if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006530), 0 < iVar2)) {
      CreateZoneNearGroup(&DAT_10006678,&DAT_100065e8,&DAT_10006520,500);
      SelectUnits(&DAT_10006530,0);
      SelSendAndKill(1,&DAT_10006678,0x40,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10006528);
    if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006538), 0 < iVar2)) {
      CreateZoneNearGroup(&DAT_10006680,&DAT_10006618,&DAT_10006528,500);
      SelectUnits(&DAT_10006538,0);
      SelSendAndKill(1,&DAT_10006680,0xc4,0);
    }
    RunTimer(0xb,100);
  }
  cVar1 = TimerDoneFirst(2);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10006580,0);
    SelSendAndKill(1,&DAT_10006618,0xaa,0);
    SelSendAndKill(1,&DAT_10006620,0xaa,2);
    SelSendAndKill(1,&DAT_10006608,0xc4,2);
    iVar2 = GetDiff(0);
    RunTimer(3,iVar2 * -200 + 0x76c);
  }
  cVar1 = TimerDoneFirst(3);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_100064e0,0);
    SelSendAndKill(1,&DAT_100065f8,0x40,0);
    SelectUnits(&DAT_10006568,0);
    SelSendAndKill(1,&DAT_10006638,0xc4,0);
    iVar2 = GetDiff(0);
    RunTimer(4,iVar2 * -200 + 0x76c);
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10006510,0);
    SelSendAndKill(1,&DAT_100065f0,0x78,0);
    SelectUnits(&DAT_10006590,0);
    SelSendAndKill(1,&DAT_10006620,0xa0,0);
    SelectUnits(&DAT_100064f8,0);
    SelSendAndKill(1,&DAT_100065e8,0x78,0);
    SelSendAndKill(1,&DAT_100065f0,0x78,2);
    SelSendAndKill(1,&DAT_10006600,0x40,2);
    SelectUnits(&DAT_10006548,0);
    SelSendAndKill(1,&DAT_10006618,0xa0,0);
    SelSendAndKill(1,&DAT_10006620,0xa0,2);
    SelSendAndKill(1,&DAT_10006640,0xc4,2);
    iVar2 = GetDiff(0);
    RunTimer(5,iVar2 * -200 + 0x76c);
    RunTimer(0xc,100);
  }
  cVar1 = TimerDone(0xc);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_100064f8);
    if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006500), 0 < iVar2)) {
      CreateZoneNearGroup(&DAT_10006678,&DAT_100065e8,&DAT_100064f8,500);
      SelectUnits(&DAT_10006500,0);
      SelSendAndKill(1,&DAT_10006678,0x40,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10006548);
    if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006560), 0 < iVar2)) {
      CreateZoneNearGroup(&DAT_10006680,&DAT_10006618,&DAT_10006548,500);
      SelectUnits(&DAT_10006560,0);
      SelSendAndKill(1,&DAT_10006680,0xc4,0);
    }
    RunTimer(0xc,100);
  }
  iVar2 = GetUnitsAmount1(&DAT_100065f0,&DAT_10006510);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_100064c8), 0 < iVar2)) {
    SelectUnits(&DAT_10006510,0);
    SelAttackGroup(1,&DAT_100064c8);
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006510), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_100064c8), iVar2 == 0)) {
    SetTrigg(8,0);
    SelectUnits(&DAT_10006510,0);
    SelSendAndKill(1,&DAT_10006610,0x40,0);
  }
  iVar2 = GetUnitsAmount1(&DAT_10006620,&DAT_10006590);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006598), 0 < iVar2)) {
    SelectUnits(&DAT_10006590,0);
    SelAttackGroup(1,&DAT_10006598);
  }
  cVar1 = Trigg(9);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006590), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10006598), iVar2 == 0)) {
    SetTrigg(9,0);
    SelectUnits(&DAT_10006590,0);
    SelSendAndKill(1,&DAT_10006640,0xc4,0);
  }
  cVar1 = TimerDoneFirst(5);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_100065c0);
    if ((((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006558), 0 < iVar2)) &&
        (iVar2 = GetTotalAmount0(&DAT_10006570), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_10006588), 0 < iVar2)) {
      ShowPage("#PAGE3");
    }
    SelectUnits(&DAT_100065c0,0);
    SelSendTo(1,&DAT_10006648,0,0);
    SelectUnits(&DAT_10006570,0);
    SelSendTo(1,&DAT_10006650,0,0);
    SelectUnits(&DAT_10006508,0);
    SelSendAndKill(1,&DAT_100065f8,0x40,0);
    SelectUnits(&DAT_10006578,0);
    SelSendAndKill(1,&DAT_10006638,0xc4,0);
  }
  cVar1 = Trigg(0x12);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100065f8,&DAT_10006508), 0 < iVar2)) ||
     (iVar2 = GetTotalAmount0(&DAT_10006508), iVar2 == 0)) {
    SetTrigg(0x12,0);
    SelectUnits(&DAT_100064c0,0);
    SelectUnits(&DAT_100064c8,1);
    SelectUnits(&DAT_100064d0,1);
    SelectUnits(&DAT_100064d8,1);
    SelectUnits(&DAT_100064e0,1);
    SelectUnits(&DAT_100064f8,1);
    SelectUnits(&DAT_10006508,1);
    SelectUnits(&DAT_10006510,1);
    SelectUnits(&DAT_10006520,1);
    SelSendAndKill(1,&DAT_10006608,100,0);
  }
  cVar1 = Trigg(0x13);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006638,&DAT_10006578), 0 < iVar2)) ||
     (iVar2 = GetTotalAmount0(&DAT_10006578), iVar2 == 0)) {
    SetTrigg(0x13,0);
    SelectUnits(&DAT_10006550,0);
    SelectUnits(&DAT_10006568,1);
    SelectUnits(&DAT_10006580,1);
    SelectUnits(&DAT_10006518,1);
    SelectUnits(&DAT_10006528,1);
    SelectUnits(&DAT_10006548,1);
    SelectUnits(&DAT_10006578,1);
    SelectUnits(&DAT_10006590,1);
    SelSendAndKill(1,&DAT_10006608,0xa0,0);
  }
  cVar1 = Trigg(0x14);
  if ((((((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064c0), iVar2 == 0)) &&
        (iVar2 = GetTotalAmount0(&DAT_10006500), iVar2 == 0)) &&
       (((iVar2 = GetTotalAmount0(&DAT_100064d0), iVar2 == 0 &&
         (iVar2 = GetTotalAmount0(&DAT_100064d8), iVar2 == 0)) &&
        ((iVar2 = GetTotalAmount0(&DAT_100064e0), iVar2 == 0 &&
         ((iVar2 = GetTotalAmount0(&DAT_100064f8), iVar2 == 0 &&
          (iVar2 = GetTotalAmount0(&DAT_10006508), iVar2 == 0)))))))) &&
      (iVar2 = GetTotalAmount0(&DAT_10006510), iVar2 == 0)) &&
     (((((iVar2 = GetTotalAmount0(&DAT_10006520), iVar2 == 0 &&
         (iVar2 = GetTotalAmount0(&DAT_10006550), iVar2 == 0)) &&
        (iVar2 = GetTotalAmount0(&DAT_10006568), iVar2 == 0)) &&
       ((iVar2 = GetTotalAmount0(&DAT_10006580), iVar2 == 0 &&
        (iVar2 = GetTotalAmount0(&DAT_10006518), iVar2 == 0)))) &&
      ((((iVar2 = GetTotalAmount0(&DAT_10006528), iVar2 == 0 &&
         ((iVar2 = GetTotalAmount0(&DAT_10006548), iVar2 == 0 &&
          (iVar2 = GetTotalAmount0(&DAT_10006560), iVar2 == 0)))) &&
        (iVar2 = GetTotalAmount0(&DAT_10006578), iVar2 == 0)) &&
       (iVar2 = GetTotalAmount0(&DAT_10006590), iVar2 == 0)))))) {
    SetTrigg(0x14,0);
    ShowPage("#PAGE4");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      CreateObject0(&DAT_10006670,&DAT_10006630,&DAT_100064e8,0,&DAT_10006668,0);
      ShowPage("#OTST2");
    }
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100065c0), 0 < iVar2)) {
    SelectUnits(&DAT_100065c0,0);
    cVar1 = CheckLeaveAbility(1);
    if (cVar1 != '\0') {
      SetTrigg(10,0);
      SelectUnits(&DAT_100065c0,0);
      SelectUnits(&DAT_10006558,1);
      SendUnitsToTransport(1);
    }
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_100065c0), 0 < iVar2)) {
    SelectUnits(&DAT_100065c0,0);
    iVar2 = GetTotalAmount0(&DAT_10006558);
    iVar3 = GetNInside(1);
    if (iVar3 == iVar2) {
      SetTrigg(0xb,0);
      SelectUnits(&DAT_100065c0,0);
      SelSendTo(1,&DAT_10006658,0x80,0);
      RunTimer(0xd,100);
    }
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0xd), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_100065c0), 0 < iVar2)) {
    SelectUnits(&DAT_100065c0,0);
    cVar1 = CheckLeaveAbility(1);
    if (cVar1 != '\0') {
      SetTrigg(0xc,0);
      SelectUnits(&DAT_100065c0,0);
      PushAllUnitsAway(1);
    }
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0xc), cVar1 == '\0')) {
    SelectUnits(&DAT_100065c0,0);
    iVar2 = GetNInside(1);
    if ((iVar2 == 0) || (iVar2 = GetTotalAmount0(&DAT_100065c0), iVar2 == 0)) {
      SetTrigg(0xd,0);
      SelectUnits(&DAT_10006558,0);
      SelSendAndKill(1,&DAT_10006608,0x80,0);
    }
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006570), 0 < iVar2)) {
    SelectUnits(&DAT_10006570,0);
    cVar1 = CheckLeaveAbility(1);
    if (cVar1 != '\0') {
      SetTrigg(0xe,0);
      SelectUnits(&DAT_10006570,0);
      SelectUnits(&DAT_10006588,1);
      SendUnitsToTransport(1);
    }
  }
  cVar1 = Trigg(0xf);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x10), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10006570), 0 < iVar2)) {
    SelectUnits(&DAT_10006570,0);
    iVar2 = GetTotalAmount0(&DAT_10006588);
    iVar3 = GetNInside(1);
    if (iVar3 == iVar2) {
      SetTrigg(0xf,0);
      SelectUnits(&DAT_10006570,0);
      SelSendTo(1,&DAT_10006658,0x80,0);
      RunTimer(0xe,100);
    }
  }
  cVar1 = Trigg(0x10);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0xe), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10006570), 0 < iVar2)) {
    SelectUnits(&DAT_10006570,0);
    cVar1 = CheckLeaveAbility(1);
    if (cVar1 != '\0') {
      SetTrigg(0x10,0);
      SelectUnits(&DAT_10006570,0);
      PushAllUnitsAway(1);
    }
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x10), cVar1 == '\0')) {
    SelectUnits(&DAT_10006570,0);
    iVar2 = GetNInside(1);
    if ((iVar2 == 0) || (iVar2 = GetTotalAmount0(&DAT_10006570), iVar2 == 0)) {
      SetTrigg(0x11,0);
      SelectUnits(&DAT_10006588,0);
      SelSendAndKill(1,&DAT_10006608,0x80,0);
    }
  }
  iVar2 = GetUnitsByNation(&DAT_100065a8,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_100065a8,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_100065a0,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_100064f0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_100065a0,0);
    SelDie(0);
    SelectUnits(&DAT_100064f0,0);
  }
  iVar2 = GetUnitsByNation(&DAT_100065b8,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_100065b8,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_100064b0,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_100064b0,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_100064b8,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_100064f0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_100064b8,0);
    SelDie(0);
    SelectUnits(&DAT_100064f0,0);
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
