#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006030[] = "@g";
char DAT_10006110[] = "Grn";
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_100066a0,"Gcanon1");
  RegisterUnits(&DAT_10006698,"Gcanon2");
  RegisterUnits(&DAT_10006670,"Gcanonor");
  RegisterUnits(&DAT_10006658,"Gotryd");
  RegisterUnits(&DAT_10006760,"Gvorota");
  RegisterUnits(&DAT_10006718,"Gvorota1");
  RegisterUnits(&DAT_10006720,"Gvorota2");
  RegisterUnits(&DAT_100066b8,"Gkomandir");
  RegisterUnits(&DAT_100066e8,"Gkomandiror");
  RegisterUnits(&DAT_10006650,"Gmushketer");
  RegisterUnits(&DAT_10006700,"Gotrydk");
  RegisterUnits(&DAT_10006750,"Gkrepost");
  RegisterUnits(&DAT_100066b0,"Grazb");
  RegisterUnits(&DAT_10006708,"Grazb1");
  RegisterUnits(&DAT_10006758,"Grazbvorota");
  RegisterUnits(&DAT_10006678,"Gvsevorota");
  RegisterUnits(&DAT_10006688,"Gvsevorotaor");
  RegisterUnits(&DAT_10006748,"Gloshadi");
  RegisterUnits(&DAT_10006770,"Gpatrul");
  RegisterUnits(&DAT_10006710,DAT_10006110);
  RegisterZone(&DAT_10006660,"Zvorota");
  RegisterZone(&DAT_10006690,"Zperedvorot");
  RegisterZone(&DAT_100066f8,"Zderevny");
  RegisterZone(&DAT_100066c0,"Zrazb");
  RegisterZone(&DAT_10006768,"Zgren");
  RegisterZone(&DAT_10006668,"Zloshadi");
  RegisterZone(&DAT_100066f0,"Zloshadi1");
  RegisterZone(&DAT_100066d8,"Zpatrul1");
  RegisterZone(&DAT_100066c8,"Zpatrul2");
  RegisterZone(&DAT_100066d0,"Zpatrul3");
  RegisterZone(&DAT_100066e0,"Zpatrul4");
  RegisterUnitType(&DAT_100066a8,"Grenader(au)");
  RegisterFormation(&DAT_10006740,"#LINE72");
  RegisterFormation(&DAT_10006730,"#LINE40PUS");
  RegisterFormation(&DAT_10006728,"#LINE29PUS");
  RegisterFormation(&DAT_10006738,"#LINE25PUS");
  RegisterVar(&DAT_10006680,8);
  SetPlayerName(1,"TURKEY");
  SetPlayerName(6,"TURKEY");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"ROBBERSS");
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
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,300000);
      SetResource(0,1,150000);
      SetResource(0,4,300000);
      SetResource(0,5,300000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gotryd","Mushketer_ev(SA)ATTACK");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)ATTACK3");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)ATTACK4");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD3");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD4");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD5");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD6");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD7");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,250000);
      SetResource(0,1,130000);
      SetResource(0,4,250000);
      SetResource(0,5,280000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gotryd","Mushketer_ev(SA)ATTACK");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)ATTACK3");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD3");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD4");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)SHIELD5");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,15000);
      SetResource(0,1,10000);
      SetResource(0,4,20000);
      SetResource(0,5,25000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gotryd","Mushketer_ev(SA)ATTACK");
      InitialUpgrade("Gotryd","Mushketer_ev(SA)ATTACK3");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,10000);
      SetResource(0,1,7000);
      SetResource(0,4,17000);
      SetResource(0,5,20000);
      SetResource(0,0,0);
      SetResource(0,2,0);
    }
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,4,5000000);
    SetResource(1,2,5000000);
    SetResource(1,0,5000000);
    SetResource(1,5,5000000);
    SetResource(4,3,500000);
    SetResource(4,1,500000);
    SetResource(4,4,500000);
    SetResource(4,2,500000);
    SetResource(4,0,500000);
    SetResource(4,5,500000);
    SetResource(5,3,500000);
    SetResource(5,1,500000);
    SetResource(5,4,500000);
    SetResource(5,2,500000);
    SetResource(5,0,500000);
    SetResource(5,5,500000);
    SetResource(6,3,500000);
    SetResource(6,1,500000);
    SetResource(6,4,500000);
    SetResource(6,2,500000);
    SetResource(6,0,500000);
    SetResource(6,5,500000);
    ShowPage("#PAGE1");
    InitialUpgrade("Gotryd","AKA20TU");
    InitialUpgrade("Gotrydk","AKA33SA");
    ChangeFriends(0,0x11);
    ChangeFriends(4,0x11);
    ChangeFriends(6,0x42);
    DisableMission(0x42);
    DisableMission(0x44);
    DisableMission(0x43);
    DisableMission(0x45);
    SetLightSpot(&DAT_10006660,5,7);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100066c0,0), 0 < iVar2)) {
    SetTrigg(10,0);
    SelectUnits(&DAT_10006758,0);
    SelOpenGates(5);
    ShowPage("#PAGE5");
    SelectUnits(&DAT_100066b0,0);
    SelAttackGroup(5,&DAT_10006700);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_10006660,&DAT_100066b8), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount0(&DAT_10006660,0), 0xf < iVar2)))) {
    SetTrigg(2,0);
    ShowPage("#PAGE2");
    SelectUnits(&DAT_10006760,0);
    SelOpenGates(4);
    RunTimer(1,1000);
    SelectUnits(&DAT_10006670,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_10006650,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_10006688,0);
    SelChangeNation(4,0);
    EnableMission(0x44);
    DisableMission(0x41);
    EnableMission(0x42);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SelectUnits1(1,&DAT_100066a0,0);
    SelAttackGroup(1,&DAT_10006718);
    SelectUnits1(1,&DAT_10006698,0);
    SelAttackGroup(1,&DAT_10006720);
  }
  cVar1 = Trigg(6);
  if ((((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006718), iVar2 == 0)) &&
      (iVar2 = GetTotalAmount0(&DAT_10006720), iVar2 == 0)) &&
     ((iVar2 = GetTotalAmount0(&DAT_100066a0), 0 < iVar2 &&
      (iVar2 = GetTotalAmount0(&DAT_10006698), 0 < iVar2)))) {
    AttackEnemyInZone(&DAT_100066a0,&DAT_100066f8,0);
    AttackEnemyInZone(&DAT_10006698,&DAT_100066f8,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100066b0,5), iVar2 == 0)) {
    SetTrigg(0xe,0);
    ShowPage("#PAGE6");
    AddResource(0,3,5000);
    SelectUnits(&DAT_10006708,0);
    SelChangeNation(5,0);
    SelectUnits(&DAT_10006678,0);
    SelChangeNation(5,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(4,0);
    SelectUnits(&DAT_10006658,0);
    SelSendAndKill(1,&DAT_10006690,0x80,0);
    SetTrigg(0x2b,0);
  }
  cVar1 = Trigg(5);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0x2b), cVar1 == '\0')) &&
      (iVar2 = GetTotalAmount0(&DAT_10006718), iVar2 == 0)) &&
     (iVar2 = GetTotalAmount0(&DAT_10006720), iVar2 == 0)) {
    SetTrigg(5,0);
    RunTimer(0xc,700);
    SelectUnits(&DAT_10006658,0);
    SelSendAndKill(1,&DAT_100066f8,0x79,0);
  }
  cVar1 = Trigg(0x29);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xc), cVar1 != '\0')) {
    SetTrigg(0x29,0);
    SelectUnits(&DAT_10006658,0);
    SelSendAndKill(1,&DAT_100066f8,0x79,0);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount0(&DAT_10006668,0), 2 < iVar2 ||
      (iVar2 = GetUnitsAmount1(&DAT_10006668,&DAT_100066b8), 0 < iVar2)))) {
    SetTrigg(0x14,0);
    SelectUnits(&DAT_10006748,0);
    SelSendTo(4,&DAT_100066f0,0xc4,0);
    SetStartPoint(&DAT_100066f0);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100066f0,4), 5 < iVar2)) {
    SetTrigg(0x15,0);
    cVar1 = AskQuestion("#PAGE7");
    if (cVar1 == '\x01') {
      SelectUnits(&DAT_10006748,0);
      SelChangeNation(4,0);
      AddResource(0,1,-1000);
    }
    else {
      SelectUnits(&DAT_10006748,0);
      SelSendTo(4,&DAT_10006768,0x80,0);
    }
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006768,4), 5 < iVar2)) {
    SetTrigg(0x16,0);
    SelectUnits(&DAT_10006748,0);
    SelErase(4);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), pcVar4 = (void*)&ShowPage, cVar1 != '\0')) {
    SetTrigg(0xb,0);
    ShowPage("#PAGE4");
// FIXME(decompiler):     iVar2 = GetDiff(0);
    CreateObject0(&DAT_10006680,(((int*)0))[iVar2],0,0,0,0);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006658,1), iVar2 < 5)) {
    SetTrigg(8,0);
    SelectUnits1(1,&DAT_100066a0,0);
    SelDie(1);
    SelectUnits(&DAT_10006698,0);
    SelDie(1);
    ShowPage("#PAGE3");
    RunTimer(3,1000);
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x43);
    SetLightSpot(&DAT_100066e0,5,8);
  }
  cVar1 = Trigg(0x20);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006750,1), iVar2 < 10)) {
    SetTrigg(0x20,0);
    ShowPage("#PAGE10");
    ShowVictory();
  }
  cVar1 = Trigg(0xd);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100066f8,0), iVar2 == 0)) &&
      (iVar2 = GetUnitsAmount0(&DAT_100066f8,4), iVar2 == 0)) &&
     (iVar2 = GetUnitsAmount0(&DAT_100066f8,1), 0 < iVar2)) {
    SetTrigg(0xd,0);
    RunTimer(0xd,600);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xd), cVar1 != '\0')) {
    SetTrigg(0x19,0);
    ShowPage("#PAGE12");
    LooseGame();
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100066b8), iVar2 == 0)) {
    SetTrigg(0x21,0);
    ShowPage("#PAGE11");
    LooseGame();
  }
  cVar1 = Trigg(0x50);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetUnitsAmount0(&DAT_100066d8,0), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_100066c8,0), 0 < iVar2)) ||
      (iVar2 = GetUnitsAmount0(&DAT_100066d0,0), pcVar3 = (void*)&Trigg, 0 < iVar2)))) {
    SetTrigg(0x50,0);
    SelectUnits(&DAT_10006770,0);
    SelSendTo(1,&DAT_100066c8,0xdc,0);
    RunTimer(0x14,200);
  }
  cVar1 = Trigg(0x51);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x14), cVar1 != '\0')) {
    SetTrigg(0x51,0);
    ShowPage("#PAGE8");
    SelectUnits(&DAT_10006770,0);
    SelSendTo(1,&DAT_100066e0,0xf5,0);
    RunTimer(0x15,1000);
  }
  cVar1 = Trigg(0x52);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x15), cVar1 != '\0')) {
    SetTrigg(0x52,0);
    SelectUnits(&DAT_10006770,0);
    Patrol(1,&DAT_100066c8,0x96);
  }
  cVar1 = Trigg(0x28);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006710,5), iVar2 == 0)) {
    SetTrigg(0x28,0);
    ShowPage("#PAGE20");
    iVar2 = GetDiff(0);
    AddResource(0,4,(4 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    AddResource(0,5,(4 - iVar2) * 1000);
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
