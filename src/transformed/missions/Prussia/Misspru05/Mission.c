#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006088[] = "Zp3";
char DAT_1000608c[] = "Zp2";
char DAT_10006090[] = "Zp1";
char DAT_100061f8[] = "Gall";
long long DAT_10006600 = 0;
long long DAT_10006608 = 0;
long long DAT_10006610 = 0;
long long DAT_10006618 = 0;
int DAT_10006620 = 0;
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

void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006648,"Gzasadaa1");
  RegisterUnits(&DAT_100066a8,"Gzasadaa2");
  RegisterUnits(&DAT_100066a0,"Gzasadaf2");
  RegisterUnits(&DAT_10006698,"Gzasadaf1");
  RegisterUnits(&DAT_10006690,"Gzasadar1");
  RegisterUnits(&DAT_10006688,"Gzasadar2");
  RegisterUnits(&DAT_10006708,DAT_100061f8);
  RegisterUnits(&DAT_10006700,"Gallch");
  RegisterUnits(&DAT_100066f8,"Gkomandirch");
  RegisterUnits(&DAT_100066f0,"Grazb1");
  RegisterUnits(&DAT_100066e8,"Grazb2");
  RegisterUnits(&DAT_10006640,"Gpatrulf1");
  RegisterUnits(&DAT_10006638,"Gorunit");
  RegisterUnits(&DAT_10006788,"Gzdan");
  RegisterUnits(&DAT_10006770,"Gstena");
  RegisterUnits(&DAT_10006710,"Gkomandirk");
  RegisterZone(&DAT_10006750,"Zforza1");
  RegisterZone(&DAT_10006650,"Zforza1_1");
  RegisterZone(&DAT_10006758,"Zforza2");
  RegisterZone(&DAT_10006658,"Zforza2_1");
  RegisterZone(&DAT_10006760,"Zforza3");
  RegisterZone(&DAT_10006668,"Zforza3_1");
  RegisterZone(&DAT_10006768,"Zforza4");
  RegisterZone(&DAT_10006670,"Zforza4_1");
  RegisterZone(&DAT_10006778,"Zforza5");
  RegisterZone(&DAT_10006780,"Zforza6");
  RegisterZone(&DAT_10006678,"Zforza6_1");
  RegisterZone(&DAT_100066b0,"Zback1");
  RegisterZone(&DAT_100066c8,"Zback2");
  RegisterZone(&DAT_100066d0,"Zback3");
  RegisterZone(&DAT_100066b8,"Zback4");
  RegisterZone(&DAT_100066c0,"Zback5");
  RegisterZone(&DAT_100066d8,"Zback6");
  RegisterZone(&DAT_10006728,"Zforr1");
  RegisterZone(&DAT_10006730,"Zforr2");
  RegisterZone(&DAT_10006610,"Zvmosta1");
  RegisterZone(&DAT_10006608,"Zvmosta2");
  RegisterZone(&DAT_10006718,"Zforpatrulf1");
  RegisterZone(&DAT_10006630,"Zsunduk");
  RegisterZone(&DAT_100066e0,"Zsunduk1");
  RegisterZone(&DAT_10006628,"Zkotel");
  RegisterZone(&DAT_10006618,"Zkotel1");
  RegisterZone(&DAT_10006748,"Zvvorot1");
  RegisterZone(&DAT_10006740,"Zvvorot2");
  RegisterZone(&DAT_10006790,DAT_10006090);
  RegisterZone(&DAT_10006798,DAT_1000608c);
  RegisterZone(&DAT_100067a0,DAT_10006088);
  RegisterDynGroup(&DAT_10006738);
  RegisterDynGroup(&DAT_10006680);
  RegisterUnitType(&DAT_10006720,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_10006600,"SUNDUK1O(UN)");
  RegisterFormation(&DAT_10006660,"#ALONE");
  RegisterVar(&DAT_10006620,4);
  ChangeFriends(0,0x31);
  ChangeFriends(1,0xe);
  ChangeFriends(3,0xc);
  SetPlayerName(1,"AUSTRIANS");
  SetPlayerName(2,"FRANCE");
  SetPlayerName(3,"RUSSIANS");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"ROBBERS");
  SetTrigg(0x1e,0);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  void *pcVar4;
  void *pcVar5;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    SetResource(0,1,iVar2 * -0x5dc + 10000);
    iVar2 = GetDiff(0);
    SetResource(0,2,(10 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,3,(10 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,4,(10 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,5,(10 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,0,(10 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      AddResource(0,3,200000);
      AddResource(0,1,20000);
      AddResource(0,4,200000);
      AddResource(0,5,200000);
      AddResource(0,2,200000);
      AddResource(0,0,200000);
    }
    DAT_10006620 = 0;
    ShowPage("#PAGE1");
    DisableMission(0x43);
    DisableMission(0x44);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006750,0), 0 < iVar2)) {
    SetTrigg(10,0);
    ClearSelection(1);
    SelectUnits1(1,&DAT_10006648,0);
    SelSendAndKill(1,&DAT_10006750,0x25,0);
    SelSendAndKill(1,&DAT_10006650,0x25,2);
    SetTrigg(0xb,1);
  }
  cVar1 = Trigg(0xb);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
      (iVar2 = GetUnitsAmount0(&DAT_10006750,0), iVar2 == 0)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006650,0), iVar2 == 0)) {
    SetTrigg(0xb,0);
    ClearSelection(1);
    SelectUnits1(1,&DAT_10006648,0);
    SelSendAndKill(1,&DAT_100066b0,0,0);
    SetTrigg(10,1);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006758,0), 0 < iVar2)) {
    SetTrigg(0xc,0);
    ClearSelection(1);
    SelectUnits1(1,&DAT_100066a8,0);
    SelSendAndKill(1,&DAT_10006758,0,0);
    SelSendAndKill(1,&DAT_10006658,0xeb,2);
    SetTrigg(0xd,1);
  }
  cVar1 = Trigg(0xd);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0xc), cVar1 == '\0')) &&
     ((iVar2 = GetUnitsAmount0(&DAT_10006758,0), iVar2 == 0 &&
      (iVar2 = GetUnitsAmount0(&DAT_10006658,0), iVar2 == 0)))) {
    SetTrigg(0xd,0);
    ClearSelection(1);
    SelectUnits1(1,&DAT_100066a8,0);
    SelSendAndKill(1,&DAT_100066c8,10,0);
    SetTrigg(0xc,1);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006760,0), 0 < iVar2)) {
    SetTrigg(0xe,0);
    ClearSelection(2);
    SelectUnits1(2,&DAT_100066a0,0);
    SelSendAndKill(2,&DAT_10006760,0x80,0);
    SelSendAndKill(2,&DAT_10006668,0x80,2);
    SetTrigg(0xf,1);
  }
  cVar1 = Trigg(0xf);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0xe), cVar1 == '\0')) &&
      (iVar2 = GetUnitsAmount0(&DAT_10006760,0), iVar2 == 0)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006668,0), iVar2 == 0)) {
    SetTrigg(0xf,0);
    ClearSelection(2);
    SelectUnits1(2,&DAT_100066a0,0);
    SelSendAndKill(2,&DAT_100066d0,0x82,0);
    SetTrigg(0xe,1);
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006768,0), 0 < iVar2)) {
    SetTrigg(0x10,0);
    ClearSelection(2);
    SelectUnits1(2,&DAT_10006698,0);
    SelSendAndKill(2,&DAT_10006768,0x80,0);
    SelSendAndKill(2,&DAT_10006670,100,2);
    SetTrigg(0x11,1);
  }
  cVar1 = Trigg(0x11);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x10), cVar1 == '\0')) &&
     ((iVar2 = GetUnitsAmount0(&DAT_10006768,0), iVar2 == 0 &&
      (iVar2 = GetUnitsAmount0(&DAT_10006670,0), iVar2 == 0)))) {
    SetTrigg(0x11,0);
    ClearSelection(2);
    SelectUnits1(2,&DAT_10006698,0);
    SelSendAndKill(2,&DAT_100066b8,0x80,0);
    SetTrigg(0x10,1);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006778,0), 0 < iVar2)) {
    SetTrigg(0x12,0);
    ClearSelection(3);
    SelectUnits1(3,&DAT_10006690,0);
    SelSendAndKill(3,&DAT_10006778,0,0);
    SetTrigg(0x13,1);
  }
  cVar1 = Trigg(0x13);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x12), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006778,0), iVar2 == 0)) {
    SetTrigg(0x13,0);
    ClearSelection(3);
    SelectUnits1(3,&DAT_10006690,0);
    SelSendAndKill(3,&DAT_100066c0,0,0);
    SetTrigg(0x12,1);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006780,0), 0 < iVar2)) {
    SetTrigg(0x14,0);
    ClearSelection(3);
    SelectUnits1(3,&DAT_10006688,0);
    SelSendAndKill(3,&DAT_10006780,0,0);
    SelSendAndKill(3,&DAT_10006678,0,2);
    SetTrigg(0x15,1);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x14), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006780,0), iVar2 == 0)) {
    SetTrigg(0x15,0);
    ClearSelection(3);
    SelectUnits1(3,&DAT_10006688,0);
    SelSendAndKill(3,&DAT_100066d8,0,0);
    SetTrigg(0x14,1);
  }
  cVar1 = Trigg(0x1e);
  if (cVar1 != '\0') {
    SetTrigg(0x1e,0);
    SelectUnits(&DAT_10006648,0);
    SelectUnits(&DAT_100066a8,1);
    DoNotUseSelInAI(1);
    SelectUnits(&DAT_10006698,0);
    SelectUnits(&DAT_100066a0,1);
    DoNotUseSelInAI(2);
    SelectUnits(&DAT_10006690,0);
    SelectUnits(&DAT_10006688,1);
    DoNotUseSelInAI(3);
    SelectUnits(&DAT_10006640,0);
    DoNotUseSelInAI(2);
    uVar3 = GetDiff(0);
    StartAI(1,"AUSTRIA.0",0,0,0,uVar3);
    SetResource(1,1,1000);
    SetResource(1,2,1000);
    SetResource(1,3,20000);
    SetResource(1,4,2000);
    SetResource(1,5,2000);
    SetResource(1,0,1000);
    uVar3 = GetDiff(0);
    StartAI(2,"FRANCE.0",0,0,0,uVar3);
    SetResource(2,1,1000);
    SetResource(2,2,1000);
    SetResource(2,3,20000);
    SetResource(2,4,2000);
    SetResource(2,5,2000);
    SetResource(2,0,1000);
    uVar3 = GetDiff(0);
    StartAI(3,"RUSSIA.0",0,0,0,uVar3);
    SetResource(3,1,1000);
    SetResource(3,2,1000);
    SetResource(3,3,20000);
    SetResource(3,4,4000);
    SetResource(3,5,4000);
    SetResource(3,0,1000);
  }
  cVar1 = Trigg(0x28);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006610,0), 0 < iVar2)) {
    SetTrigg(0x28,0);
    SelectUnits(&DAT_100066f8,0);
    SelSendTo(5,&DAT_10006608,0xdc,0);
  }
  cVar1 = Trigg(0x29);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006608,&DAT_100066f8), 0 < iVar2)) {
    SetTrigg(0x29,0);
    SetStartPoint(&DAT_10006608);
    cVar1 = AskQuestion("#PAGE5");
    if (cVar1 == '\0') {
      ChangeFriends(0,0x11);
      SelectUnits(&DAT_10006700,0);
      SelSendAndKill(5,&DAT_10006610,0xd2,0);
    }
    else {
      SelectUnits(&DAT_100066f0,0);
      SelSendAndKill(5,&DAT_10006728,0xa0,0);
      SelectUnits(&DAT_100066e8,0);
      SelSendAndKill(5,&DAT_10006730,0xd7,0);
      AddResource(0,1,0xfffff060);
      DAT_10006620 = 1;
      SetLightSpot(&DAT_10006748,3,3);
    }
  }
  cVar1 = Trigg(0x2a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006640,2), 3 < iVar2)) {
    SetTrigg(0x2a,0);
    SelectUnits(&DAT_10006640,0);
    Patrol(2,&DAT_10006718,0);
  }
  cVar1 = Trigg(0x2b);
  if (cVar1 != '\0') {
    SetTrigg(0x2b,0);
    CreateObject0(&DAT_10006738,&DAT_10006660,&DAT_10006720,7,&DAT_10006630,0);
  }
  cVar1 = Trigg(0x2c);
  if ((((cVar1 != '\0') &&
       (iVar2 = GetUnitsAmount0(&DAT_10006630,0), pcVar5 = (void*)&ShowPage, 0 < iVar2)) &&
      (iVar2 = GetUnitsAmount0(&DAT_100066e0,5), pcVar5 = (void*)&ShowPage, iVar2 == 0)) &&
     (iVar2 = GetUnitsAmount0(&DAT_100066e0,3), pcVar5 = (void*)&ShowPage, iVar2 == 0)) {
    SetTrigg(0x2c,0);
    if (DAT_10006620 == 0) {
      ShowPage("#PAGE6");
    }
    if (DAT_10006620 == 1) {
      ShowPage("#PAGE8");
    }
    SelectUnits(&DAT_10006738,0);
    SelErase(7);
    CreateObject0(&DAT_10006680,&DAT_10006660,&DAT_10006600,7,&DAT_10006630,0);
    AddResource(0,1,DAT_10006620 * 4000 + 2000);
  }
  cVar1 = Trigg(0x2d);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006628,0), 0 < iVar2)) &&
     ((iVar2 = GetUnitsAmount0(&DAT_10006618,5), iVar2 == 0 &&
      (iVar2 = GetUnitsAmount0(&DAT_10006618,3), iVar2 == 0)))) {
    SetTrigg(0x2d,0);
    ShowPage("#PAGE7");
    AddResource(0,3,8000);
  }
  cVar1 = Trigg(0x32);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount0(&DAT_10006748,0), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount0(&DAT_10006740,0), 0 < iVar2)))) {
    SetTrigg(0x32,0);
    DisableMission(0x42);
    EnableMission(0x43);
    EnableMission(0x44);
    SelectUnits(&DAT_10006788,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_10006638,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_10006770,0);
    SelChangeNation(4,0);
    ChangeFriends(0,0x11);
    SetTrigg(0x1e,1);
    RunTimer(2,6000);
  }
  cVar1 = Trigg(0x33);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(0x33,0);
    ShowPage("#PAGE15");
  }
  cVar1 = Trigg(0x34);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetUnitsAmount0(&DAT_10006790,0), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_10006798,0), 0 < iVar2)) ||
      (iVar2 = GetUnitsAmount0(&DAT_100067a0,0), 0 < iVar2)))) {
    SetTrigg(0x34,0);
    ShowPage("#PAGE9");
  }
  cVar1 = Trigg(0x5a);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(0x5a,0);
    ShowPage("#PAGE13");
  }
  cVar1 = Trigg(0x5b);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(0x5b,0);
    ShowPage("#PAGE11");
  }
  cVar1 = Trigg(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    SetTrigg(0x5c,0);
    ShowPage("#PAGE12");
  }
  cVar1 = Trigg(0x5e);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0x5a), cVar1 == '\0')) &&
      (cVar1 = Trigg(0x5b), cVar1 == '\0')) && (cVar1 = Trigg(0x5c), cVar1 == '\0')) {
    SetTrigg(0x5e,0);
    ShowPage("#PAGE14");
    ShowVictory();
  }
  cVar1 = Trigg(0x5f);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006710,0), iVar2 == 0)) {
    SetTrigg(0x5f,0);
    ShowPage("#PAGE10");
    LooseGame();
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
