#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006154[] = "Zc2";
char DAT_10006158[] = "Zc1";
char DAT_100061c4[] = "Zr14";
char DAT_100061cc[] = "Zr13";
char DAT_100061d4[] = "Zr12";
char DAT_100061dc[] = "Zr11";
char DAT_10006200[] = "Zr2";
char DAT_10006204[] = "Zr1";
char DAT_10006218[] = "Gr2";
char DAT_1000621c[] = "Gr1";
char DAT_10006220[] = "Gc2";
char DAT_10006224[] = "Gc1";
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
long long DAT_100066a0 = 0;
long long DAT_100066a8 = 0;
long long DAT_100066b0 = 0;
long long DAT_100066b8 = 0;
long long DAT_100066c0 = 0;
long long DAT_100066c8 = 0;
long long DAT_100066d0 = 0;
long long DAT_100066d8 = 0;
long long DAT_100066e0 = 0;
long long DAT_100066e8 = 0;
long long DAT_100066f0 = 0;
long long DAT_100066f8 = 0;
long long DAT_10006700 = 0;
long long DAT_10006708 = 0;
long long DAT_10006710 = 0;
long long DAT_10006718 = 0;
long long DAT_10006720 = 0;
long long DAT_10006728 = 0;
long long DAT_10006730 = 0;
long long DAT_10006738 = 0;
long long DAT_10006740 = 0;
long long DAT_10006748 = 0;
long long DAT_10006750 = 0;
long long DAT_10006758 = 0;
long long DAT_10006760 = 0;
long long DAT_10006768 = 0;
long long DAT_10006770 = 0;
long long DAT_10006778 = 0;
long long DAT_10006780 = 0;
long long DAT_10006788 = 0;
long long DAT_10006790 = 0;
long long DAT_10006798 = 0;
long long DAT_100067a0 = 0;
long long DAT_100067a8 = 0;

/* Forward declarations */
int FUN_10001000(void);

void OnInit();
void ProcessScenary();


int FUN_10001000(void)

{
  int uVar1;
  
  uVar1 = GetDiff(0);
  switch(uVar1) {
  case 0:
    return 10000;
  case 1:
    return 4000;
  case 2:
    return 3000;
  case 3:
    return 0x8fc;
  default:
    return 100;
  }
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_100066a8,"Gkomandir");
  RegisterUnits(&DAT_10006698,"Gtransport");
  RegisterUnits(&DAT_10006680,"Goboz");
  RegisterUnits(&DAT_100066b8,DAT_10006224);
  RegisterUnits(&DAT_100066c0,DAT_10006220);
  RegisterUnits(&DAT_10006710,DAT_1000621c);
  RegisterUnits(&DAT_10006718,DAT_10006218);
  RegisterZone(&DAT_100067a0,"Zlag1");
  RegisterZone(&DAT_100067a8,"Zlag2");
  RegisterZone(&DAT_10006770,DAT_10006204);
  RegisterZone(&DAT_10006778,DAT_10006200);
  RegisterZone(&DAT_10006768,"Zsklad");
  RegisterZone(&DAT_10006678,"Ztransport");
  RegisterZone(&DAT_100066b0,"Ztrans");
  RegisterZone(&DAT_10006780,DAT_100061dc);
  RegisterZone(&DAT_10006788,DAT_100061d4);
  RegisterZone(&DAT_10006790,DAT_100061cc);
  RegisterZone(&DAT_10006798,DAT_100061c4);
  RegisterZone(&DAT_10006608,"Zpyt1_1");
  RegisterZone(&DAT_10006610,"Zpyt1_2");
  RegisterZone(&DAT_10006618,"Zpyt1_3");
  RegisterZone(&DAT_10006628,"Zpyt1_4");
  RegisterZone(&DAT_10006638,"Zpyt1_5");
  RegisterZone(&DAT_10006640,"Zpyt1_6");
  RegisterZone(&DAT_10006600,"Zpyt1_7");
  RegisterZone(&DAT_10006648,"Zpyt2_1");
  RegisterZone(&DAT_10006650,"Zpyt2_2");
  RegisterZone(&DAT_10006658,"Zpyt2_3");
  RegisterZone(&DAT_10006660,"Zpyt2_4");
  RegisterZone(&DAT_10006668,"Zpyt2_5");
  RegisterZone(&DAT_10006670,"Zpyt2_6");
  RegisterZone(&DAT_10006758,DAT_10006158);
  RegisterZone(&DAT_10006760,DAT_10006154);
  RegisterUnitType(&DAT_100066c8,"Rinok(SA)");
  RegisterUnitType(&DAT_100066d0,"WALL_EV(SA)");
  RegisterUnitType(&DAT_100066d8,"Center_France(fr)");
  RegisterUnitType(&DAT_100066e0,"Kuznica_FR(fr)");
  RegisterUnitType(&DAT_100066e8,"Konushnia_FR(fr)");
  RegisterUnitType(&DAT_100066f0,"akademia_FR(fr)");
  RegisterUnitType(&DAT_100066f8,"Dip_korpus_FR(fr)");
  RegisterUnitType(&DAT_10006700,"Kazarma_1_FR(fr)");
  RegisterUnitType(&DAT_10006708,"Bashnia(SA)");
  RegisterUnitType(&DAT_10006720,"WALL_EV(fr)");
  RegisterUnitType(&DAT_10006728,"Bashnia(fr)");
  RegisterUnitType(&DAT_10006730,"Rinok(fr)");
  RegisterUnitType(&DAT_10006738,"Dragun_18_DIP(fr)");
  RegisterUnitType(&DAT_100066a0,"Pehota_turki_DIP(fr)");
  RegisterUnitType(&DAT_10006748,"Strelec_Algir_DIP(fr)");
  RegisterFormation(&DAT_10006690,"#LINEMORB20");
  RegisterFormation(&DAT_10006688,"#SQUARE72");
  SetPlayerName(1,"FRANCE");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(2,"FRANCE");
  RegisterDynGroup(&DAT_10006630);
  RegisterVar(&DAT_10006630,8);
  RegisterDynGroup(&DAT_100065f0);
  RegisterVar(&DAT_100065f0,8);
  RegisterDynGroup(&DAT_10006740);
  RegisterVar(&DAT_10006740,8);
  RegisterDynGroup(&DAT_10006620);
  RegisterVar(&DAT_10006620,8);
  RegisterDynGroup(&DAT_100065f8);
  RegisterVar(&DAT_100065f8,8);
  RegisterDynGroup(&DAT_10006750);
  RegisterVar(&DAT_10006750,8);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  void *pcVar3;
  void *pcVar4;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    DisableMission(0x42);
    DisableMission(0x43);
    iVar2 = FUN_10001000();
    RunTimer(1,iVar2 * 0x1e);
    iVar2 = FUN_10001000();
    RunTimer(2,iVar2 + 10000);
    iVar2 = FUN_10001000();
    RunTimer(3,iVar2 + 6000);
    iVar2 = FUN_10001000();
    RunTimer(4,iVar2 * 0xf);
    iVar2 = FUN_10001000();
    RunTimer(5,iVar2 * 0x17);
    iVar2 = FUN_10001000();
    RunTimer(6,iVar2 * 0x1d);
    RunTimer(10,500);
    ChangeFriends(2,0x22);
    ChangeFriends(1,0x22);
    ChangeFriends(0,0x11);
    ChangeFriends(4,0x11);
    SetResource(1,3,5000);
    SetResource(1,1,5000);
    SetResource(1,4,10000);
    SetResource(1,5,10000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,"FRANCE.0",0,1,1,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,6000);
      SetResource(0,1,6000);
      SetResource(0,4,6000);
      SetResource(0,5,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      StartAI(1,"FRANCE.0",0,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,"FRANCE.0",0,1,1,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,4000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(1,"FRANCE.0",0,1,1,3);
    }
    EnableUnit(0,&DAT_100066c8,0);
    EnableUnit(0,&DAT_100066d0,0);
    EnableUnit(0,&DAT_100066d8,0);
    EnableUnit(0,&DAT_100066e0,0);
    EnableUnit(0,&DAT_100066e8,0);
    EnableUnit(0,&DAT_100066f0,0);
    EnableUnit(0,&DAT_100066f8,0);
    EnableUnit(0,&DAT_10006700,0);
    EnableUnit(0,&DAT_10006708,0);
    EnableUnit(0,&DAT_10006720,0);
    EnableUnit(0,&DAT_10006728,0);
    EnableUnit(0,&DAT_10006730,0);
  }
  cVar1 = Trigg(2);
  if ((((cVar1 != '\0') && (iVar2 = GetResource(0,3), 100000 < iVar2)) &&
      (iVar2 = GetResource(0,4), 20000 < iVar2)) && (iVar2 = GetResource(0,5), 20000 < iVar2)) {
    SetTrigg(2,0);
    ShowPage("#PAGE4");
    SelectUnits(&DAT_10006680,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_10006698,0);
    SelSendTo(4,&DAT_10006678,0x20,0);
    AddResource(0,3,-100000);
    AddResource(0,4,-20000);
    AddResource(0,5,-2000);
    EnableMission(0x42);
    DisableMission(0x41);
    RunTimer(10,2000);
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) &&
     ((cVar1 = Trigg(6), cVar1 == '\0' &&
      (iVar2 = GetUnitsAmount1(&DAT_10006678,&DAT_10006680), iVar2 != 0)))) {
    SetTrigg(3,0);
    ShowPage("#PAGE14");
    ShowVictory();
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(4,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(5,0);
    ShowPage("#PAGE5");
    LooseGame();
  }
  cVar1 = Trigg(6);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount1(&DAT_10006768,&DAT_10006680), iVar2 != 0)) {
    SetTrigg(6,0);
  }
  cVar1 = Trigg(7);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) &&
     (cVar1 = TimerDone(10), cVar1 != '\0')) {
    SetTrigg(7,0);
    EnableMission(0x43);
    ShowPage("#PAGE6");
    SetLightSpot(&DAT_10006678,1,1);
    SelectUnits(&DAT_100066b8,0);
    Patrol(2,&DAT_10006758,0xe0);
    ClearSelection(2);
    SelectUnits(&DAT_100066c0,0);
    Patrol(2,&DAT_10006760,0x60);
    ClearSelection(2);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006680), iVar2 == 0)) {
    SetTrigg(8,0);
    ShowPage("#PAGE7");
    LooseGame();
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006770,0), iVar2 != 0)) {
    SetTrigg(9,0);
    SelectUnits(&DAT_10006710,0);
    SelSendAndKill(2,&DAT_10006770,0x20,0);
    SelSendAndKill(2,&DAT_10006780,0xe0,2);
    SelSendAndKill(2,&DAT_10006788,0xe0,2);
    SelSendAndKill(2,&DAT_10006790,0,2);
    SelSendAndKill(2,&DAT_10006798,0x60,2);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006778,0), iVar2 != 0)) {
    SetTrigg(10,0);
    SelectUnits(&DAT_10006718,0);
    SelSendAndKill(2,&DAT_10006778,0,0);
    SelSendAndKill(2,&DAT_10006780,0xe0,2);
    SelSendAndKill(2,&DAT_10006788,0xe0,2);
    SelSendAndKill(2,&DAT_10006790,0,2);
    SelSendAndKill(2,&DAT_10006798,0x60,2);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(0xb,0);
    SetTrigg(0xc,0);
    iVar2 = FUN_10001000();
    RunTimer(2,iVar2 + 8000);
    CreateObject0(&DAT_10006630,&DAT_10006690,&DAT_10006738,2,&DAT_100067a8,0xc0);
    SelectUnits(&DAT_10006630,0);
    SelSendAndKill(2,&DAT_10006648,0xa0,0);
    SelSendAndKill(2,&DAT_10006650,0xe0,2);
    SelSendAndKill(2,&DAT_10006658,0xe0,2);
    SelSendAndKill(2,&DAT_10006660,0xe0,2);
    SelSendAndKill(2,&DAT_10006668,0xe0,2);
    SelSendAndKill(2,&DAT_10006670,0xa0,2);
    SelSendAndKill(2,&DAT_10006600,0x60,2);
    RemoveGroup(&DAT_10006630,&DAT_10006620);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(0xb,0);
    SetTrigg(0xc,0);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(0xd,0);
    SetTrigg(0xe,0);
    iVar2 = FUN_10001000();
    RunTimer(3,iVar2 + 4000);
    CreateObject0(&DAT_100065f0,&DAT_10006688,&DAT_100066a0,2,&DAT_100067a0,0xc0);
    CreateObject0(&DAT_10006740,&DAT_10006688,&DAT_10006748,2,&DAT_100067a0,0xc0);
    SelectUnits(&DAT_100065f0,0);
    SelectUnits(&DAT_10006740,1);
    SelSendAndKill(2,&DAT_10006608,0xe0,0);
    SelSendAndKill(2,&DAT_10006610,0xa0,2);
    SelSendAndKill(2,&DAT_10006618,0,2);
    SelSendAndKill(2,&DAT_10006628,0xa0,2);
    SelSendAndKill(2,&DAT_10006638,0xe0,2);
    SelSendAndKill(2,&DAT_10006640,0,2);
    SelSendAndKill(2,&DAT_10006600,0x60,2);
    RemoveGroup(&DAT_100065f0,&DAT_100065f8);
    RemoveGroup(&DAT_10006740,&DAT_10006750);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(0xd,0);
    SetTrigg(0xe,0);
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsAmount0(&DAT_100067a8,2), pcVar3 = (void*)&ShowPage, pcVar4 = (void*)&AddResource,
     iVar2 == 0)) {
    SetTrigg(0xf,0);
    ShowPage("#PAGE8");
    AddResource(0,4,2000);
    AddResource(0,5,2000);
    SetTrigg(0xb,0);
    SetTrigg(0xc,0);
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100067a0,2), iVar2 == 0)) {
    SetTrigg(0x10,0);
    ShowPage("#PAGE9");
    AddResource(0,4,1000);
    AddResource(0,5,1000);
    SetTrigg(0xe,0);
    SetTrigg(0xd,0);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
    SetTrigg(0x11,0);
    ShowPage("#PAGE10");
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SetTrigg(0x12,0);
    ShowPage("#PAGE11");
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(6), cVar1 != '\0')) {
    SetTrigg(0x13,0);
    ShowPage("#PAGE12");
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
