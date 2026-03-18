#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_10006178[] = "Z2";
char DAT_1000617c[] = "Z1";
char DAT_10006180[] = "G3";
char DAT_10006184[] = "G2";
char DAT_10006188[] = "G1";
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006590,DAT_10006188);
  RegisterUnits(&DAT_10006598,DAT_10006184);
  RegisterUnits(&DAT_100065a0,DAT_10006180);
  RegisterZone(&DAT_100065b8,DAT_1000617c);
  RegisterZone(&DAT_100065c0,DAT_10006178);
  RegisterVar(&DAT_100065a8,8);
  RegisterVar(&DAT_100065b0,8);
  RegisterFormation(&DAT_100065d0,"#ALONE");
  RegisterUnitType(&DAT_10006538,"Center_Spain(sp)");
  RegisterUnitType(&DAT_10006548,"Dom_Ispain(sp)");
  RegisterUnitType(&DAT_10006558,"Melnica(sp)");
  RegisterUnitType(&DAT_10006560,"Sclad2(sp)");
  RegisterUnitType(&DAT_10006568,"Kuznica_SP(sp)");
  RegisterUnitType(&DAT_10006570,"Konushnia_SP(sp)");
  RegisterUnitType(&DAT_10006578,"Cercov_SP(sp)");
  RegisterUnitType(&DAT_10006580,"akademia_SP(sp)");
  RegisterUnitType(&DAT_10006588,"Dip_korpus_SP(sp)");
  RegisterUnitType(&DAT_10006500,"Kazarma_1_SP(sp)");
  RegisterUnitType(&DAT_10006508,"Kazarma_SP(sp)");
  RegisterUnitType(&DAT_10006510,"artileri_depo_SP(sp)");
  RegisterUnitType(&DAT_10006518,"Rinok(sp)");
  RegisterUnitType(&DAT_10006520,"WALL_UKR(sp)");
  RegisterUnitType(&DAT_10006528,"WALL_EV(sp)");
  RegisterUnitType(&DAT_10006530,"Bashnia(sp)");
  RegisterUnitType(&DAT_10006540,"PorE(sp)");
  RegisterUnitType(&DAT_10006550,"Melnica_tu(AL)");
  RegisterUnitType(&DAT_100065c8,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_100065d8,"SUNDUK1O(UN)");
  EnableUnit(0,&DAT_10006538,0);
  EnableUnit(0,&DAT_10006548,0);
  EnableUnit(0,&DAT_10006558,0);
  EnableUnit(0,&DAT_10006560,0);
  EnableUnit(0,&DAT_10006568,0);
  EnableUnit(0,&DAT_10006570,0);
  EnableUnit(0,&DAT_10006578,0);
  EnableUnit(0,&DAT_10006580,0);
  EnableUnit(0,&DAT_10006588,0);
  EnableUnit(0,&DAT_10006500,0);
  EnableUnit(0,&DAT_10006508,0);
  EnableUnit(0,&DAT_10006510,0);
  EnableUnit(0,&DAT_10006518,0);
  EnableUnit(0,&DAT_10006520,0);
  EnableUnit(0,&DAT_10006528,0);
  EnableUnit(0,&DAT_10006530,0);
  EnableUnit(0,&DAT_10006540,0);
  EnableUnit(0,&DAT_10006550,0);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  void *pcVar4;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    CreateObject0(&DAT_100065a8,&DAT_100065d0,&DAT_100065c8,4,&DAT_100065b8,0);
    SetResource(1,3,6000);
    SetResource(1,1,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    ShowPage("#PAGE0");
    iVar2 = GetDiff(0);
    if (iVar2 < 2) {
      iVar2 = GetDiff(0);
      StartAI(1,"SPAIN.0",2,1,0,iVar2 + 1);
      SetResource(0,3,6000);
      SetResource(0,1,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
    }
    else {
      uVar3 = GetDiff(0);
      StartAI(1,"SPAIN.0",2,1,0,uVar3);
      iVar2 = GetDiff(0);
      SetResource(0,3,(0xc - iVar2) * 500);
      iVar2 = GetDiff(0);
      SetResource(0,1,(10 - iVar2) * 500);
      iVar2 = GetDiff(0);
      SetResource(0,0,(10 - iVar2) * 500);
      iVar2 = GetDiff(0);
      SetResource(0,2,(10 - iVar2) * 500);
      iVar2 = GetDiff(0);
      SetResource(0,5,(10 - iVar2) * 500);
      iVar2 = GetDiff(0);
      SetResource(0,4,(10 - iVar2) * 500);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SelectUnits(&DAT_100065a0,0);
      SelErase(5);
      SetLightSpot(&DAT_100065c0,1,1);
      SetResource(1,3,100000);
    }
    TakeFood(&DAT_10006598);
    DisableMission(0x43);
    DisableMission(0x44);
    InitialUpgrade(DAT_10006188,"AKA04AL");
    InitialUpgrade(DAT_10006188,"KUZ01AL");
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsAmount0(&DAT_100065b8,0), pcVar4 = (void*)&SetTrigg, 0 < iVar2)) {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    ShowPageParam("#PAGE1",(6 - iVar2) * 500);
    iVar2 = GetDiff(0);
    AddResource(0,1,(6 - iVar2) * 500);
    ClearSelection(4);
    SelectUnits(&DAT_100065a8,0);
    SelErase(4);
    CreateObject0(&DAT_100065b0,&DAT_100065d0,&DAT_100065d8,4,&DAT_100065b8,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#PAGE2");
    ShowVictory();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100065c0,5), iVar2 == 0)) &&
     (iVar2 = GetUnitsAmount0(&DAT_100065c0,0), 0 < iVar2)) {
    SetTrigg(4,0);
    ClearSelection(5);
    SelectUnits1(5,&DAT_10006590,0);
    SelChangeNation(5,0);
    SelectUnits1(5,&DAT_10006598,0);
    SelChangeNation(5,0);
    ShowPage("#PAGE4");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ShowPage("#OTST1");
    }
    DisableMission(0x42);
    EnableMission(0x43);
    EnableMission(0x44);
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
