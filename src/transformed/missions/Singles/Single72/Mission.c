#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006130[] = "Zlag";
char DAT_10006148[] = "Zder";
char DAT_10006190[] = "Grab";
char DAT_10006198[] = "Gdip";
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
    return 15000;
  case 1:
    return 5000;
  case 2:
    return 0xdac;
  case 3:
    return 3000;
  default:
    return 100;
  }
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_100065c0,"Ggates");
  RegisterUnits(&DAT_100065c8,DAT_10006198);
  RegisterUnits(&DAT_100065e8,DAT_10006190);
  RegisterUnits(&DAT_100065d8,"Gtatar1");
  RegisterUnits(&DAT_100065b8,"Gmills");
  RegisterUnits(&DAT_100065d0,"Gtown");
  RegisterUnits(&DAT_10006538,"Gkomandir");
  RegisterUnits(&DAT_10006540,"Gzabor");
  RegisterUnitType(&DAT_10006520,"Tatarin(TU)");
  RegisterFormation(&DAT_10006530,"#TRI3");
  RegisterZone(&DAT_10006510,DAT_10006148);
  RegisterZone(&DAT_10006548,"Zder1");
  RegisterZone(&DAT_10006550,"Zder2");
  RegisterZone(&DAT_10006518,DAT_10006130);
  RegisterZone(&DAT_100065e0,"Zfort");
  RegisterUnitType(&DAT_10006558,"Kuznica_ua(UA)");
  RegisterUnitType(&DAT_10006560,"konushnia_ua(UA)");
  RegisterUnitType(&DAT_10006568,"akademia_UA(UA)");
  RegisterUnitType(&DAT_10006570,"Dip_korpus_UA(UA)");
  RegisterUnitType(&DAT_10006578,"Rinok(UA)");
  RegisterUnitType(&DAT_10006580,"Strelcovaia_Izba(UA)");
  RegisterUnitType(&DAT_10006588,"artileri_depo_UA(UA)");
  RegisterUnitType(&DAT_10006590,"Melnica_rus(UA)");
  RegisterUnitType(&DAT_10006598,"Cerkov_UA(UA)");
  RegisterUnitType(&DAT_100065a0,"Melnica_rus(RU)");
  RegisterUnitType(&DAT_100065a8,"WALL_KR(RU)");
  RegisterUnitType(&DAT_100065b0,"Bashnia_2(RU)");
  RegisterDynGroup(&DAT_10006528);
  RegisterVar(&DAT_10006528,8);
  SetPlayerName(1,"SVEDES");
  SetPlayerName(4,"UKRAINE");
  SetPlayerName(5,"BANDITS");
  InitialUpgrade("Grab1","AKA04AU");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  void *pcVar4;
  void *pcVar5;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SetTrigg(5,0);
    uVar2 = FUN_10001000();
    RunTimer(1,uVar2);
    RunTimer(2,1000);
    ChangeFriends(5,0x22);
    ChangeFriends(1,0x22);
    ChangeFriends(0,0x11);
    ChangeFriends(4,0x11);
    SelectUnits(&DAT_100065c0,0);
    SelOpenGates(4);
    SetLightSpot(&DAT_10006510,1,1);
    SetResource(1,3,10000);
    SetResource(1,1,5000);
    SetResource(1,4,10000);
    SetResource(1,5,10000);
    SetResource(1,0,10000);
    SetResource(1,2,10000);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      SetResource(0,3,20000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      StartAI(1,"SVEDEN.0",0,1,1,1);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 1) {
      SetResource(0,3,10000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,"SVEDEN.0",0,1,1,2);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 2) {
      SetResource(0,3,7000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,"SVEDEN.0",0,1,1,3);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      SetResource(0,3,5000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(1,"SVEDEN.0",0,1,1,3);
    }
  }
  EnableUnit(0,&DAT_10006558,0);
  EnableUnit(0,&DAT_10006560,0);
  EnableUnit(0,&DAT_10006568,0);
  EnableUnit(0,&DAT_10006570,0);
  EnableUnit(0,&DAT_10006578,0);
  EnableUnit(0,&DAT_10006580,0);
  EnableUnit(0,&DAT_10006588,0);
  EnableUnit(0,&DAT_10006590,0);
  EnableUnit(0,&DAT_10006598,0);
  EnableUnit(0,&DAT_100065a0,0);
  EnableUnit(0,&DAT_100065a8,0);
  EnableUnit(0,&DAT_100065b0,0);
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), pcVar4 = (void*)&ShowPage, cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE4");
    ShowVictory();
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006510,&DAT_10006538), iVar3 != 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE5");
    ClearLightSpot(1);
    SetTrigg(5,0);
    SelectUnits(&DAT_100065d0,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_100065b8,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_100065e8,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_100065c0,0);
    SelChangeNation(4,0);
    uVar2 = FUN_10001000();
    RunTimer(1,uVar2);
    RunTimer(2,0x5dc);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(5,0);
    CreateObject0(&DAT_10006528,&DAT_10006530,&DAT_10006520,5,&DAT_10006518,0);
    SelectUnits(&DAT_10006528,0);
    SelSendAndKill(5,&DAT_10006548,0x20,0);
    uVar2 = FUN_10001000();
    RunTimer(1,uVar2);
    SetTrigg(5,0);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10006518,5), iVar3 == 0)) {
    SetTrigg(6,0);
    ShowPage("#PAGE6");
    SetTrigg(5,0);
  }
  cVar1 = Trigg(7);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 == '\0')) &&
     (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(7,0);
    SelectUnits(&DAT_100065d8,0);
    SelSendAndKill(5,&DAT_10006550,0,0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10006550,&DAT_100065d8);
  if (iVar3 != 0) {
    SelectUnits(&DAT_100065d8,0);
    SelAttackGroup(5,&DAT_10006540);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006550,&DAT_10006540), iVar3 == 0)) {
    SetTrigg(8,0);
    SelectUnits(&DAT_100065d8,0);
    SelSendAndKill(5,&DAT_10006510,0x20,0);
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
