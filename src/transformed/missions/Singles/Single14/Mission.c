#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
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
                    
  RegisterUnits(&DAT_10006568,"Gkomandir");
  RegisterUnits(&DAT_100065b8,"Goboz1");
  RegisterUnits(&DAT_100065b0,"Goboz2");
  RegisterUnits(&DAT_10006528,"Grinok");
  RegisterZone(&DAT_10006558,"ZrinokUkr");
  RegisterZone(&DAT_100065a8,"ZrinokSwed");
  RegisterZone(&DAT_100065c8,"ZskladMold");
  RegisterZone(&DAT_10006530,"Zpovorot");
  RegisterZone(&DAT_10006560,"Zpovorot1");
  RegisterZone(&DAT_10006578,"Zselo");
  RegisterZone(&DAT_10006588,"Zpyt1");
  RegisterZone(&DAT_10006590,"Zpyt2");
  RegisterZone(&DAT_10006598,"Zpyt3");
  RegisterZone(&DAT_100065a0,"Zpyt4");
  RegisterZone(&DAT_100065d0,"Zlag1");
  RegisterZone(&DAT_100065d8,"Zlag2");
  RegisterZone(&DAT_10006570,"Zatak");
  SetPlayerName(1,"SVEDES");
  SetPlayerName(2,"POLAND");
  SetPlayerName(3,"ALLIES");
  SetPlayerName(4,"TURKEY");
  SetPlayerName(5,"RUSSIANS");
  SetPlayerName(6,"BANDITS");
  RegisterDynGroup(&DAT_10006520);
  RegisterVar(&DAT_10006520,8);
  RegisterDynGroup(&DAT_10006550);
  RegisterVar(&DAT_10006550,8);
  RegisterUnitType(&DAT_10006580,"Rinok(UA)");
  RegisterFormation(&DAT_10006548,"#LINE3");
  RegisterFormation(&DAT_10006540,"#TRI3");
  RegisterUnitType(&DAT_10006538,"Dragun_18_DIP(TU)");
  RegisterUnitType(&DAT_100065c0,"GRUZ(UN)");
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
    SetResource(1,3,6000);
    SetResource(1,1,5000);
    SetResource(1,4,5000);
    SetResource(1,5,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(2,3,6000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(4,3,6000);
    SetResource(4,1,5000);
    SetResource(4,4,5000);
    SetResource(4,5,5000);
    SetResource(4,0,5000);
    SetResource(4,2,5000);
    SetResource(5,3,6000);
    SetResource(5,1,5000);
    SetResource(5,4,5000);
    SetResource(5,5,5000);
    SetResource(5,0,5000);
    SetResource(5,2,5000);
    ChangeFriends(2,0x74);
    ChangeFriends(0,0xb);
    ChangeFriends(1,0xb);
    SetTrigg(0xf,0);
    SetLightSpot(&DAT_100065c8,2,1);
    SetLightSpot(&DAT_100065a8,2,2);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,10000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      StartAI(2,"POLAND.0",0,1,1,0);
      StartAI(4,"TURKISH.0",1,1,1,0);
      StartAI(1,"SVEDEN.0",1,1,1,0);
      StartAI(5,"RUSSIA.0",1,1,1,0);
      RunTimer(1,6000);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(2,"POLAND.0",0,1,1,1);
      StartAI(4,"TURKISH.0",1,1,1,1);
      StartAI(1,"SVEDEN.0",1,1,1,1);
      StartAI(5,"RUSSIA.0",1,1,1,1);
      RunTimer(1,5000);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(2,"POLAND.0",0,1,1,2);
      StartAI(4,"TURKISH.0",1,1,1,2);
      StartAI(1,"SVEDEN.0",1,1,1,2);
      StartAI(4,"RUSSIA.0",1,1,1,2);
      RunTimer(1,4000);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,4000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(2,"POLAND.0",0,1,1,3);
      StartAI(4,"TURKISH.0",1,1,1,3);
      StartAI(1,"SVEDEN.0",1,1,1,3);
      StartAI(5,"RUSSIA.0",1,1,1,3);
      RunTimer(1,3000);
    }
  }
  EnableUnit(0,&DAT_10006580,0);
  SelectUnits(&DAT_100065b0,0);
  RemoveGroup(&DAT_100065b0,&DAT_10006520);
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#PAGE3");
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(4), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE4");
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(5,0);
    ShowPage("#PAGE5");
    LooseGame();
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(5), cVar1 != '\0')) {
    SetTrigg(6,0);
    ShowPage("#PAGE6");
  }
  cVar1 = Trigg(4);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 == '\0')) &&
      (cVar1 = Trigg(2), cVar1 == '\0')) && (cVar1 = Trigg(6), cVar1 == '\0')) {
    SetTrigg(4,0);
    ShowPage("#PAGE7");
    ShowVictory();
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(7,0);
    ShowPage("#PAGE8");
    SetTrigg(0xc,0);
    SetTrigg(0xb,0);
    SetTrigg(10,0);
    ClearLightSpot(2);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100065c8,&DAT_100065b8), 0 < iVar2)) {
    SetTrigg(8,0);
    SelectUnits(&DAT_100065b8,0);
    SelSendTo(3,&DAT_10006560,0,0);
    SelSendTo(3,&DAT_10006530,0,2);
    SelSendTo(3,&DAT_10006558,0x60,2);
    SetTrigg(9,0);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006558,&DAT_100065b8), 0 < iVar2)) {
    SetTrigg(9,0);
    ShowPage("#PAGE9");
    AddResource(0,1,500);
    SelectUnits(&DAT_100065b8,0);
    SelSendTo(3,&DAT_10006530,0x80,0);
    SelSendTo(3,&DAT_10006560,0x80,2);
    SelSendTo(3,&DAT_100065c8,0x20,2);
    SetTrigg(8,0);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_100065a8,&DAT_10006520), 0 < iVar2)) {
    SetTrigg(10,0);
    SelectUnits(&DAT_10006520,0);
    SelSendTo(3,&DAT_10006588,0x40,0);
    SelSendTo(3,&DAT_10006590,0x40,2);
    SelSendTo(3,&DAT_10006598,0x40,2);
    SelSendTo(3,&DAT_100065a0,0x20,2);
    SelSendTo(3,&DAT_10006558,0x60,2);
    SetTrigg(0xb,0);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006558,&DAT_10006520), 0 < iVar2)) {
    SetTrigg(0xb,0);
    ShowPage("#PAGE10");
    AddResource(0,1,1000);
    SelectUnits(&DAT_10006520,0);
    SelSendTo(3,&DAT_100065a0,0xac,0);
    SelSendTo(3,&DAT_10006598,0xc0,2);
    SelSendTo(3,&DAT_10006590,0xc0,2);
    SelSendTo(3,&DAT_10006588,0xac,2);
    SelSendTo(3,&DAT_100065a8,0x20,2);
    SetTrigg(10,0);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006520), iVar2 == 0)) {
    SetTrigg(0xc,0);
    ShowPage("#PAGE11");
    RunTimer(2,0x1194);
    SetTrigg(0xe,0);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(0xd,0);
    CreateObject0(&DAT_10006550,&DAT_10006540,&DAT_10006538,6,&DAT_100065d8,0);
    SelectUnits(&DAT_10006550,0);
    SelSendAndKill(6,&DAT_10006570,0x80,0);
    SetTrigg(0xf,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(0xe,0);
    CreateObject0(&DAT_10006520,&DAT_10006548,&DAT_100065c0,3,&DAT_100065a8,0x40);
    ShowPage("#PAGE12");
    SetTrigg(0xc,0);
    SetTrigg(0xb,0);
    SetTrigg(10,0);
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006550), iVar2 == 0)) {
    SetTrigg(0xf,0);
    ShowPage("#PAGE");
    RunTimer(1,3000);
    SetTrigg(0xd,0);
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100065d0,6), iVar2 == 0)) {
    SetTrigg(0x10,0);
    ShowPage("#PAGE13");
    SetTrigg(0xd,0);
    SetTrigg(0xf,0);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006528), iVar2 == 0)) {
    SetTrigg(0x11,0);
    ShowPage("#PAGE14");
    LooseGame();
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006568), iVar2 == 0)) {
    SetTrigg(0x12,0);
    ShowPage("#PAGE15");
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
