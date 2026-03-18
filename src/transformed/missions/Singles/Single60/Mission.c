#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_10006154[] = "Zc4";
char DAT_10006158[] = "Zc3";
char DAT_1000615c[] = "Zc2";
char DAT_10006160[] = "Zc1";
char DAT_10006190[] = "Grab";
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006570,"Ggates");
  RegisterUnits(&DAT_10006568,"Gcroat");
  RegisterUnits(&DAT_10006640,DAT_10006190);
  RegisterUnits(&DAT_10006638,"Gcuirassier");
  RegisterZone(&DAT_10006530,"Zcroat");
  RegisterZone(&DAT_10006538,"Zkrest");
  RegisterZone(&DAT_10006540,"Zder1");
  RegisterZone(&DAT_10006548,"Zder2");
  RegisterZone(&DAT_10006618,DAT_10006160);
  RegisterZone(&DAT_10006620,DAT_1000615c);
  RegisterZone(&DAT_10006628,DAT_10006158);
  RegisterZone(&DAT_10006630,DAT_10006154);
  RegisterZone(&DAT_10006578,"Zpyt10");
  RegisterZone(&DAT_10006598,"Zpyt11");
  RegisterZone(&DAT_100065a0,"Zpyt12");
  RegisterZone(&DAT_10006580,"Zpyt13");
  RegisterZone(&DAT_10006590,"Zpyt14");
  RegisterZone(&DAT_100065d0,"Zpyt15");
  RegisterZone(&DAT_100065e0,"Zpyt16");
  RegisterZone(&DAT_100065b0,"Zpyt17");
  RegisterZone(&DAT_100065c0,"Zpyt18");
  RegisterZone(&DAT_10006600,"Zpyt19");
  RegisterZone(&DAT_10006648,"Zpyt110");
  RegisterZone(&DAT_10006588,"Zpyt20");
  RegisterZone(&DAT_100065c8,"Zpyt21");
  RegisterZone(&DAT_100065d8,"Zpyt22");
  RegisterZone(&DAT_100065a8,"Zpyt23");
  RegisterZone(&DAT_100065b8,"Zpyt24");
  RegisterZone(&DAT_100065f8,"Zpyt25");
  RegisterZone(&DAT_10006608,"Zpyt26");
  RegisterZone(&DAT_100065e8,"Zpyt27");
  RegisterZone(&DAT_100065f0,"Zpyt28");
  RegisterZone(&DAT_10006610,"Zpyt29");
  RegisterZone(&DAT_10006520,"Zpyt210");
  RegisterZone(&DAT_10006528,"Zpyt211");
  RegisterZone(&DAT_10006510,"Zpyt212");
  RegisterZone(&DAT_10006518,"Zpyt213");
  RegisterUnitType(&DAT_10006550,"Center_Austria(au)");
  RegisterUnitType(&DAT_10006558,"Kuznica(au)");
  RegisterUnitType(&DAT_10006560,"Dom_Austria(au)");
  SetPlayerName(1,"AUSTRIANS");
  SetPlayerName(4,"AUSTRIANS");
  SetPlayerName(6,"ALLIES");
  InitialUpgrade("&Grab1","AKA04AU");
  InitialUpgrade("&Ggates","AKA04AU");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  void *pcVar3;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SetLightSpot(&DAT_10006538,1,1);
    ChangeFriends(1,0x12);
    ChangeFriends(0,0x41);
    SelectUnits(&DAT_10006568,0);
    SelChangeNation(1,4);
    SelectUnits(&DAT_10006568,0);
    Patrol(4,&DAT_10006530,0xe0);
    SelectUnits(&DAT_10006638,0);
    SelChangeNation(1,4);
    SetResource(1,3,300000);
    SetResource(1,1,5000);
    SetResource(1,4,10000);
    SetResource(1,5,10000);
    SetResource(1,0,10000);
    SetResource(1,2,10000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,100000);
      SetResource(0,1,100000);
      SetResource(0,4,100000);
      SetResource(0,5,100000);
      SetResource(0,0,100000);
      SetResource(0,2,100000);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,50000);
      SetResource(0,1,50000);
      SetResource(0,4,50000);
      SetResource(0,5,50000);
      SetResource(0,0,50000);
      SetResource(0,2,50000);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,10000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,10000);
      SetResource(0,1,5000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
    }
  }
  EnableUnit(0,&DAT_10006550,0);
  EnableUnit(0,&DAT_10006558,0);
  EnableUnit(0,&DAT_10006560,0);
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE5");
    ShowVictory();
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006538,4), iVar2 == 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE6");
    SelectUnits(&DAT_10006640,0);
    SelChangeNation(6,0);
    SelectUnits(&DAT_10006570,0);
    SelOpenGates(1);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      StartAI(1,"AUSTRIA.0",0,1,1,0);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      StartAI(1,"AUSTRIA.0",0,1,1,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      StartAI(1,"AUSTRIA.0",0,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      StartAI(1,"AUSTRIA.0",0,1,1,3);
    }
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006618,&DAT_10006638), 0 < iVar2)) {
    SetTrigg(9,0);
    SelectUnits(&DAT_10006638,0);
    SelSendAndKill(4,&DAT_10006620,0,0);
    SelSendAndKill(4,&DAT_10006628,0xe0,2);
    SelSendAndKill(4,&DAT_10006630,0xc0,2);
    SetTrigg(10,0);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006630,&DAT_10006638), 0 < iVar2)) {
    SetTrigg(10,0);
    SelectUnits(&DAT_10006638,0);
    SelSendAndKill(4,&DAT_10006628,0x40,0);
    SelSendAndKill(4,&DAT_10006620,0x60,2);
    SelSendAndKill(4,&DAT_10006618,0x80,2);
    SetTrigg(9,0);
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
