#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_10006150[] = "Z10";
char DAT_10006154[] = "Z9";
char DAT_10006158[] = "Z8";
char DAT_1000615c[] = "Z7";
char DAT_10006160[] = "Z6";
char DAT_10006164[] = "Z5";
char DAT_10006168[] = "Z4";
char DAT_1000616c[] = "Z3";
char DAT_10006170[] = "Z2";
char DAT_10006174[] = "Z1";
char DAT_10006178[] = "G25";
char DAT_1000617c[] = "G24";
char DAT_10006180[] = "G23";
char DAT_10006184[] = "G22";
char DAT_10006188[] = "G21";
char DAT_1000618c[] = "G20";
char DAT_10006190[] = "G19";
char DAT_10006194[] = "G18";
char DAT_10006198[] = "G17";
char DAT_1000619c[] = "G16";
char DAT_100061a0[] = "G15";
char DAT_100061a4[] = "G14";
char DAT_100061a8[] = "G13";
char DAT_100061ac[] = "G12";
char DAT_100061b0[] = "G11";
char DAT_100061b4[] = "G10";
char DAT_100061b8[] = "G9";
char DAT_100061bc[] = "G8";
char DAT_100061c0[] = "G7";
char DAT_100061c4[] = "G6";
char DAT_100061c8[] = "G5";
char DAT_100061cc[] = "G4";
char DAT_100061d0[] = "G3";
char DAT_100061d4[] = "G2";
char DAT_100061d8[] = "G1";
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  
                    
  RegisterUnits(&DAT_10006610,DAT_100061d8);
  RegisterUnits(&DAT_10006618,DAT_100061d4);
  RegisterUnits(&DAT_10006620,DAT_100061d0);
  RegisterUnits(&DAT_10006628,DAT_100061cc);
  RegisterUnits(&DAT_10006630,DAT_100061c8);
  RegisterUnits(&DAT_10006638,DAT_100061c4);
  RegisterUnits(&DAT_10006640,DAT_100061c0);
  RegisterUnits(&DAT_10006648,DAT_100061bc);
  RegisterUnits(&DAT_10006650,DAT_100061b8);
  RegisterUnits(&DAT_10006660,DAT_100061b4);
  RegisterUnits(&DAT_10006668,DAT_100061b0);
  RegisterUnits(&DAT_10006670,DAT_100061ac);
  RegisterUnits(&DAT_10006678,DAT_100061a8);
  RegisterUnits(&DAT_10006688,DAT_100061a4);
  RegisterUnits(&DAT_10006698,DAT_100061a0);
  RegisterUnits(&DAT_100066a8,DAT_1000619c);
  RegisterUnits(&DAT_100066b8,DAT_10006198);
  RegisterUnits(&DAT_100066c8,DAT_10006194);
  RegisterUnits(&DAT_100066d8,DAT_10006190);
  RegisterUnits(&DAT_10006680,DAT_1000618c);
  RegisterUnits(&DAT_10006690,DAT_10006188);
  RegisterUnits(&DAT_100066a0,DAT_10006184);
  RegisterUnits(&DAT_100066b0,DAT_10006180);
  RegisterUnits(&DAT_100066c0,DAT_1000617c);
  RegisterUnits(&DAT_100066d0,DAT_10006178);
  RegisterZone(&DAT_100066e0,DAT_10006174);
  RegisterZone(&DAT_100066e8,DAT_10006170);
  RegisterZone(&DAT_100066f0,DAT_1000616c);
  RegisterZone(&DAT_100066f8,DAT_10006168);
  RegisterZone(&DAT_10006700,DAT_10006164);
  RegisterZone(&DAT_10006708,DAT_10006160);
  RegisterZone(&DAT_10006710,DAT_1000615c);
  RegisterZone(&DAT_10006718,DAT_10006158);
  RegisterZone(&DAT_10006720,DAT_10006154);
  RegisterZone(&DAT_10006728,DAT_10006150);
  RegisterDynGroup(&DAT_10006658);
  RegisterUpgrade(&DAT_10006580,"MAINHO");
  RegisterUnitType(&DAT_100065c0,"Center_Austria(au)");
  RegisterUnitType(&DAT_100065d0,"Dom_Austria(au)");
  RegisterUnitType(&DAT_100065d8,"Melnica(au)");
  RegisterUnitType(&DAT_100065e0,"Sclad1(au)");
  RegisterUnitType(&DAT_100065e8,"Kuznica(au)");
  RegisterUnitType(&DAT_100065f0,"Konushnia_Swesair(au)");
  RegisterUnitType(&DAT_100065f8,"Cercov_Poland(au)");
  RegisterUnitType(&DAT_10006600,"akademia_E(au)");
  RegisterUnitType(&DAT_10006608,"Dip_korpus(au)");
  RegisterUnitType(&DAT_10006588,"Kazarma_evro(au)");
  RegisterUnitType(&DAT_10006590,"Kazarma(au)");
  RegisterUnitType(&DAT_10006598,"artileri_depo(au)");
  RegisterUnitType(&DAT_100065a0,"Rinok(au)");
  RegisterUnitType(&DAT_100065a8,"WALL_UKR(au)");
  RegisterUnitType(&DAT_100065b0,"WALL_EV(au)");
  RegisterUnitType(&DAT_100065b8,"Bashnia(au)");
  RegisterUnitType(&DAT_100065c8,"PorE(au)");
  SetPlayerName(5,"REBELS");
  SetPlayerName(1,"DUTCH");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(5,0x22);
  EnableUnit(0,&DAT_100065c0,0);
  EnableUnit(0,&DAT_100065d0,0);
  EnableUnit(0,&DAT_100065d8,0);
  iVar1 = GetDiff(0);
  if (iVar1 < 2) {
    EnableUnit(0,&DAT_100065e0,0);
  }
  EnableUnit(0,&DAT_100065e8,0);
  EnableUnit(0,&DAT_100065f0,0);
  EnableUnit(0,&DAT_100065f8,0);
  EnableUnit(0,&DAT_10006600,0);
  EnableUnit(0,&DAT_10006608,0);
  EnableUnit(0,&DAT_10006588,0);
  EnableUnit(0,&DAT_10006590,0);
  EnableUnit(0,&DAT_10006598,0);
  EnableUnit(0,&DAT_100065a0,0);
  EnableUnit(0,&DAT_100065a8,0);
  EnableUnit(0,&DAT_100065b0,0);
  EnableUnit(0,&DAT_100065b8,0);
  EnableUnit(0,&DAT_100065c8,0);
  DisableUpgrade(1,&DAT_10006580);
  DisableUpgrade(0,&DAT_10006580);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  void *pcVar5;
  void *pcVar6;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    iVar2 = GetDiff(1);
    SetResource(0,3,(0xc - iVar2) * 1000);
    iVar2 = GetDiff(1);
    SetResource(0,1,(0xb - iVar2) * 500);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar2 = GetDiff(1);
    SetResource(0,5,(0xc - iVar2) * 500);
    iVar2 = GetDiff(1);
    SetResource(0,4,(0xc - iVar2) * 500);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,100000);
      SetResource(0,1,50000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      SetResource(0,5,50000);
      SetResource(0,4,50000);
    }
    SetResource(1,3,200000);
    SetResource(1,1,200000);
    SetResource(1,0,200000);
    SetResource(1,2,200000);
    SetResource(1,5,500000);
    SetResource(1,4,500000);
    SetResource(5,3,200000);
    SetResource(5,1,200000);
    SetResource(5,0,0);
    SetResource(5,2,0);
    SetResource(5,5,500000);
    SetResource(5,4,500000);
    ShowPage("#PAGE0");
    iVar2 = rand();
    RunTimer(1,iVar2 / 0x1e + 200);
    SelectUnits(&DAT_10006678,0);
    SelOpenGates(1);
  }
  cVar1 = TimerDoneFirst(1);
  if (cVar1 != '\0') {
    ShowPage("#PAGE1");
    SaveSelectedUnits(0,&DAT_10006658,0);
    SelectUnits1(0,&DAT_10006618,0);
    SelChangeNation(0,5);
    SelectUnits1(0,&DAT_10006620,0);
    SelChangeNation(0,5);
    iVar2 = GetDiff(1);
    iVar3 = rand();
    RunTimer(2,iVar3 / (iVar2 + 7) + 100);
    iVar2 = GetDiff(1);
    iVar3 = rand();
    RunTimer(5,iVar3 / ((iVar2 + 3) * 10) + 0x14);
    SelectUnits(&DAT_10006688,0);
    SelectUnits(&DAT_10006698,1);
    SelSendAndKill(1,&DAT_100066f8,0,0);
    SelectUnits1(0,&DAT_10006658,0);
  }
  cVar1 = TimerDoneFirst(2);
  if (cVar1 != '\0') {
    SaveSelectedUnits(0,&DAT_10006658,0);
    ShowPage("#PAGE2");
    SelectUnits1(0,&DAT_10006628,0);
    SelChangeNation(0,5);
    SelectUnits1(0,&DAT_10006630,0);
    SelChangeNation(0,5);
    iVar2 = GetDiff(1);
    iVar3 = rand();
    RunTimer(3,iVar3 / (iVar2 + 5) + 100);
    SelectUnits1(0,&DAT_10006658,0);
  }
  cVar1 = TimerDoneFirst(3);
  if (cVar1 != '\0') {
    SaveSelectedUnits(0,&DAT_10006658,0);
    ShowPage("#PAGE3");
    SelectUnits1(0,&DAT_10006638,0);
    SelChangeNation(0,5);
    SelectUnits1(0,&DAT_10006640,0);
    SelChangeNation(0,5);
    iVar2 = GetDiff(1);
    iVar3 = rand();
    RunTimer(4,iVar3 / ((iVar2 + 4) * 5) + 100);
    SelectUnits1(0,&DAT_10006658,0);
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    SaveSelectedUnits(0,&DAT_10006658,0);
    ShowPage("#PAGE4");
    SelectUnits1(0,&DAT_10006648,0);
    SelChangeNation(0,5);
    SelectUnits1(0,&DAT_10006650,0);
    SelChangeNation(0,5);
    SelectUnits1(0,&DAT_10006658,0);
  }
  cVar1 = TimerDoneFirst(5);
  if (cVar1 != '\0') {
    SaveSelectedUnits(0,&DAT_10006658,0);
    ShowPage("#PAGE5");
    SelectUnits1(0,&DAT_10006660,0);
    SelChangeNation(0,5);
    SelectUnits1(0,&DAT_10006668,0);
    SelChangeNation(0,5);
    SelectUnits1(0,&DAT_10006658,0);
  }
  iVar2 = GetTotalAmount0(&DAT_100066b8);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10006688), pcVar6 = (void*)&SelectUnits, 0 < iVar2)
     ) {
    SelectUnits(&DAT_10006688,0);
    SelAttackGroup(1,&DAT_100066b8);
  }
  iVar2 = GetTotalAmount0(&DAT_100066b8);
  if (((iVar2 == 0) && (iVar2 = GetTotalAmount0(&DAT_10006698), pcVar5 = (void*)&SetTrigg, 0 < iVar2))
     && (iVar2 = GetUnitsAmount0(&DAT_100066f8,0), pcVar5 = (void*)&SetTrigg, 0 < iVar2)) {
    AttackEnemyInZone(&DAT_10006698,&DAT_100066f8,0);
    cVar1 = Trigg(0xb);
    if (cVar1 != '\0') {
      SetTrigg(0xb,0);
      SelectUnits(&DAT_100066d0,0);
      SelSendAndKill(1,&DAT_100066f8,0x40,0);
      SelectUnits(&DAT_10006688,0);
      SelSendAndKill(1,&DAT_100066f8,0x40,0);
    }
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100066f8,0), iVar2 == 0)) {
    SetTrigg(10,0);
    SelectUnits(&DAT_10006698,0);
    SelSendAndKill(1,&DAT_100066f8,0x40,0);
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006690,0), iVar2 == 0)) {
    SetTrigg(1,0);
    SelectUnits(&DAT_10006698,0);
    SelSendAndKill(1,&DAT_10006708,0x40,0);
    SelectUnits(&DAT_100066a8,0);
    SelSendAndKill(1,&DAT_10006700,0x40,0);
  }
  cVar1 = Trigg(2);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006708,0), iVar2 == 0)) &&
     (iVar2 = GetUnitsAmount1(&DAT_10006708,&DAT_10006698), 0 < iVar2)) {
    SetTrigg(2,0);
    cVar1 = AskQuestion("#PAGE6");
    if (cVar1 == '\0') {
      iVar2 = GetDiff(0);
      SetResource(1,3,iVar2 * 3000 + 10000);
      iVar2 = GetDiff(0);
      SetResource(1,1,iVar2 * 3000 + 10000);
      iVar2 = GetDiff(0);
      SetResource(1,0,iVar2 * 3000 + 10000);
      iVar2 = GetDiff(0);
      SetResource(1,2,iVar2 * 3000 + 10000);
      iVar2 = GetDiff(0);
      SetResource(1,5,iVar2 * 3000 + 10000);
      iVar2 = GetDiff(0);
      SetResource(1,4,iVar2 * 3000 + 10000);
      iVar2 = GetDiff(0);
      if (iVar2 < 2) {
        iVar2 = GetDiff(0);
      }
      else {
        iVar2 = GetDiff(0);
        iVar2 = iVar2 + -1;
      }
      StartAI(1,"DENMARK.0",1,1,0,iVar2);
    }
    else {
      ChangeFriends(1,3);
      SetTrigg(3,0);
    }
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (cVar1 = Trigg(3), pcVar6 = (void*)&ShowPage, cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006700,0), pcVar6 = (void*)&ShowPage, 0 < iVar2)) {
    SetTrigg(4,0);
    ShowPage("#PAGE7");
    SelectUnits(&DAT_100066a8,0);
    SelSendTo(1,&DAT_10006708,0x5a,0);
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006708,0), 0 < iVar2)) {
    SetTrigg(5,0);
    ShowPage("#PAGE8");
    ChangeFriends(1,2);
    iVar2 = GetDiff(0);
    SetResource(1,3,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(0);
    SetResource(1,1,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(0);
    SetResource(1,0,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(0);
    SetResource(1,2,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(0);
    SetResource(1,5,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(0);
    SetResource(1,4,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(0);
    if (iVar2 < 1) {
      StartAI(1,"DENMARK.0",1,1,0,1);
    }
    else {
      uVar4 = GetDiff(0);
      StartAI(1,"DENMARK.0",1,1,0,uVar4);
    }
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006670), iVar2 == 0)) {
    SetTrigg(6,0);
    ShowPage("#PAGE9");
    LooseGame();
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(7,0);
    ShowPage("#PAGE10");
    ShowVictory();
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') &&
      (iVar2 = GetTotalAmount0(&DAT_10006678), pcVar6 = (void*)&GetUnitsAmount0, 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_100066e0,0), 0 < iVar2)) {
    iVar2 = GetUnitsAmount0(&DAT_100066e8,1);
    iVar3 = GetUnitsAmount0(&DAT_100066f0,0);
    if ((iVar2 < iVar3) ||
       (iVar2 = GetUnitsAmount0(&DAT_100066e8,1), pcVar6 = (void*)&GetUnitsAmount0, iVar2 == 0)) {
      SetTrigg(8,0);
      SelectUnits(&DAT_10006678,0);
      SelCloseGates(1);
    }
  }
  cVar1 = Trigg(8);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006678), 0 < iVar2)) {
    iVar2 = GetUnitsAmount0(&DAT_100066e0,0);
    if (iVar2 != 0) {
      iVar2 = GetUnitsAmount0(&DAT_100066e8,1);
      iVar3 = GetUnitsAmount0(&DAT_100066f0,0);
      if (iVar2 <= iVar3) goto LAB_10001e64;
    }
    SetTrigg(8,0);
    SelectUnits(&DAT_10006678,0);
    SelOpenGates(1);
  }
LAB_10001e64:
  iVar2 = GetDiff(1);
  iVar3 = GetGlobalTime();
  if (((10 - iVar2) * 4000 < iVar3) && (cVar1 = Trigg(3), pcVar6 = (void*)&ShowPage, cVar1 == '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE11");
    ChangeFriends(1,2);
    iVar2 = GetDiff(1);
    SetResource(1,3,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(1);
    SetResource(1,1,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(1);
    SetResource(1,0,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(1);
    SetResource(1,2,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(1);
    SetResource(1,5,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(1);
    SetResource(1,4,(iVar2 + 4) * 5000);
    iVar2 = GetDiff(1);
    if (iVar2 == 3) {
      StartAI(1,"DENMARK.0",1,1,0,3);
    }
    else {
      iVar2 = GetDiff(0);
      StartAI(1,"DENMARK.0",1,1,0,iVar2 + 1);
    }
  }
  iVar2 = GetUnitsByNation(&DAT_100066a0,5);
  if (((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_10006710,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006718,5), iVar2 == 0)) {
    ShowPage("#PAGE12");
    SelectUnits(&DAT_100066a0,0);
    SelChangeNation(5,0);
    SelectUnits(&DAT_100066c0,0);
    SelChangeNation(5,0);
  }
  iVar2 = GetUnitsByNation(&DAT_100066b0,5);
  if (((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_10006720,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006728,5), iVar2 == 0)) {
    ShowPage("#PAGE13");
    SelectUnits(&DAT_100066b0,0);
    SelChangeNation(5,0);
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
