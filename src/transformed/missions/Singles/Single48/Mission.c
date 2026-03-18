#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006520,"Gkomandir");
  RegisterUnits(&DAT_10006518,"Goboz");
  RegisterUnits(&DAT_10006510,"Gmarket");
  RegisterUnits(&DAT_10006530,"Ggonec");
  RegisterUnitType(&DAT_10006540,"PorE(sp)");
  RegisterUnitType(&DAT_10006548,"Kuznica_HO(HO)");
  RegisterUnitType(&DAT_10006550,"Center_Holland(HO)");
  RegisterUnitType(&DAT_10006558,"Konushnia_HO(HO)");
  RegisterUnitType(&DAT_10006560,"Kazarma_1_HO(HO)");
  RegisterUnitType(&DAT_10006568,"artileri_depo_HO(HO)");
  RegisterUnitType(&DAT_10006570,"Center_France(fr)");
  RegisterUnitType(&DAT_10006578,"Kuznica_FR(fr)");
  RegisterUnitType(&DAT_10006580,"Konushnia_FR(fr)");
  RegisterUnitType(&DAT_10006588,"Kazarma_1_FR(fr)");
  RegisterUnitType(&DAT_10006590,"WALL_EV(sp)");
  RegisterUnitType(&DAT_10006598,"WALL_EV(fr)");
  RegisterZone(&DAT_10006538,"Zrinok");
  RegisterZone(&DAT_10006528,"ZFrinok");
  SetPlayerName(1,"HOLLAND");
  SetPlayerName(2,"FRANCE");
  SetPlayerName(3,"HOLLAND");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SetLightSpot(&DAT_10006538,0,1);
    ChangeFriends(1,0x4e);
    ChangeFriends(0,0x11);
    ChangeFriends(2,0x4e);
    ChangeFriends(3,0x4e);
    RunTimer(1,500);
    RunTimer(2,500);
    RunTimer(3,500);
    SetTrigg(0xb,0);
    SetResource(1,3,5000);
    SetResource(1,1,15000);
    SetResource(1,4,5000);
    SetResource(1,5,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(2,3,5000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(3,3,5000);
    SetResource(3,1,5000);
    SetResource(3,4,5000);
    SetResource(3,5,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,50000);
      SetResource(0,1,100);
      SetResource(0,4,1000);
      SetResource(0,5,1000);
      SetResource(0,0,50000);
      SetResource(0,2,50000);
      StartAI(1,"HOLLAND.0",0,1,2,1);
      StartAI(2,"FRANCE.0",0,1,2,1);
      StartAI(3,"HOLLAND.0",0,1,2,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,10000);
      SetResource(0,1,100);
      SetResource(0,4,1000);
      SetResource(0,5,1000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      StartAI(1,"HOLLAND.0",0,1,2,2);
      StartAI(2,"FRANCE.0",0,1,2,2);
      StartAI(3,"HOLLAND.0",0,1,2,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,7000);
      SetResource(0,1,100);
      SetResource(0,4,700);
      SetResource(0,5,700);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,"HOLLAND.0",0,1,2,3);
      StartAI(2,"FRANCE.0",0,1,2,3);
      StartAI(3,"HOLLAND.0",0,1,2,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,5000);
      SetResource(0,1,100);
      SetResource(0,4,500);
      SetResource(0,5,500);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,"HOLLAND.0",0,1,2,3);
      StartAI(2,"FRANCE.0",0,1,2,3);
      StartAI(3,"HOLLAND.0",0,1,2,3);
    }
  }
  EnableUnit(0,&DAT_10006540,0);
  EnableUnit(0,&DAT_10006548,0);
  EnableUnit(0,&DAT_10006550,0);
  EnableUnit(0,&DAT_10006558,0);
  EnableUnit(0,&DAT_10006560,0);
  EnableUnit(0,&DAT_10006568,0);
  EnableUnit(0,&DAT_10006570,0);
  EnableUnit(0,&DAT_10006578,0);
  EnableUnit(0,&DAT_10006580,0);
  EnableUnit(0,&DAT_10006588,0);
  EnableUnit(0,&DAT_10006590,0);
  EnableUnit(0,&DAT_10006598,0);
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006538,&DAT_10006518), iVar2 != 0)) {
    SetTrigg(2,0);
    ShowPage("#PAGE4");
    AddResource(0,1,10000);
    AddResource(0,5,5000);
    AddResource(0,4,5000);
    SelectUnits(&DAT_10006518,0);
    SelErase(0);
    ClearLightSpot(1);
    SelectUnits(&DAT_10006510,0);
    SelChangeNation(4,0);
    RunTimer(1,1000);
    SetTrigg(0xb,1);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(6,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(8,0);
    ShowPage("#PAGE5");
    ShowVictory();
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(9,0);
    ShowPage("#PAGE6");
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    SetTrigg(10,0);
    ShowPage("#PAGE7");
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(0xb,0);
    SelectUnits(&DAT_10006530,0);
    SelSendTo(4,&DAT_10006538,0x40,0);
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006538,&DAT_10006530), iVar2 != 0)) &&
     (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(0xc,0);
    ShowPage("#PAGE8");
    cVar1 = AskQuestion("#PAGE9");
    if (cVar1 == '\0') {
      ShowPage("#PAGE12");
      SelectUnits(&DAT_10006530,0);
      SelChangeNation(4,2);
    }
    else {
      iVar2 = GetResource(0,1);
      if (iVar2 < 0xbb9) {
        ShowPage("#PAGE11");
        RunTimer(2,1000);
        SetTrigg(0xc,1);
      }
      else {
        ShowPage("#PAGE10");
        AddResource(0,1,0xfffff448);
        ChangeFriends(2,0x15);
        SelectUnits(&DAT_10006530,0);
        SelChangeNation(4,0);
      }
    }
  }
  cVar1 = Trigg(0xd);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006528,&DAT_10006530), iVar2 != 0)) &&
     (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(0xd,0);
    cVar1 = AskQuestion("#PAGE13");
    if (cVar1 != '\0') {
      iVar2 = GetResource(0,1);
      if (iVar2 < 0x4e21) {
        ShowPage("#PAGE15");
        RunTimer(3,1000);
        SetTrigg(0xd,1);
        return;
      }
      ShowPage("#PAGE14");
      AddResource(0,1,0xffffb1e0);
      ChangeFriends(2,0x15);
      ChangeFriends(3,0x4a);
      ChangeFriends(1,0x4a);
      return;
    }
    ShowPage("#PAGE16");
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
