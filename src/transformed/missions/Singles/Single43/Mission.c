#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_100060c4[] = "Zder";
char DAT_100060cc[] = "Zg2";
char DAT_100060d0[] = "Zg1";
char DAT_100060d4[] = "Zy5";
char DAT_100060d8[] = "Zy4";
char DAT_100060dc[] = "Zy3";
char DAT_100060e0[] = "Zy2";
char DAT_100060e4[] = "Zy1";
char DAT_10006120[] = "Gg2";
char DAT_10006124[] = "Gg1";
char DAT_10006128[] = "Gy5";
char DAT_1000612c[] = "Gy4";
char DAT_10006130[] = "Gy3";
char DAT_10006134[] = "Gy2";
char DAT_10006138[] = "Gy1";
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
    return 2000;
  default:
    return 100;
  }
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006580,"Gkomandir");
  RegisterUnits(&DAT_10006628,"Gserdyk");
  RegisterUnits(&DAT_100065e0,"Gcoss");
  RegisterUnits(&DAT_10006630,"Gglag1");
  RegisterUnits(&DAT_10006638,"Gglag2");
  RegisterUnits(&DAT_10006640,"Glag3");
  RegisterUnits(&DAT_100065b8,DAT_10006138);
  RegisterUnits(&DAT_100065c0,DAT_10006134);
  RegisterUnits(&DAT_100065c8,DAT_10006130);
  RegisterUnits(&DAT_100065d0,DAT_1000612c);
  RegisterUnits(&DAT_100065d8,DAT_10006128);
  RegisterUnits(&DAT_100065a8,DAT_10006124);
  RegisterUnits(&DAT_100065b0,DAT_10006120);
  RegisterUnits(&DAT_10006590,"Gder1");
  RegisterUnits(&DAT_10006598,"Gder2");
  RegisterZone(&DAT_10006548,"Zserdyk");
  RegisterZone(&DAT_100065f0,"Zcoss");
  RegisterZone(&DAT_10006670,"Zlag1");
  RegisterZone(&DAT_10006678,"Zlag2");
  RegisterZone(&DAT_10006680,"Zlag3");
  RegisterZone(&DAT_10006648,DAT_100060e4);
  RegisterZone(&DAT_10006650,DAT_100060e0);
  RegisterZone(&DAT_10006658,DAT_100060dc);
  RegisterZone(&DAT_10006660,DAT_100060d8);
  RegisterZone(&DAT_10006668,DAT_100060d4);
  RegisterZone(&DAT_10006618,DAT_100060d0);
  RegisterZone(&DAT_10006620,DAT_100060cc);
  RegisterZone(&DAT_10006530,DAT_100060c4);
  RegisterZone(&DAT_10006570,"Zbaza");
  RegisterZone(&DAT_10006610,"Zbaza1");
  RegisterZone(&DAT_10006600,"Zbaza2");
  RegisterZone(&DAT_10006608,"Zbaza3");
  RegisterUnitType(&DAT_100065a0,"Grenader_DIP(DIP)");
  RegisterUnitType(&DAT_100065f8,"Kozak_loshad_DIP(DIP)");
  RegisterUnitType(&DAT_100065e8,"Dragun_18_DIP(DIP)");
  RegisterDynGroup(&DAT_10006540);
  RegisterVar(&DAT_10006540,8);
  RegisterDynGroup(&DAT_10006538);
  RegisterVar(&DAT_10006538,8);
  RegisterDynGroup(&DAT_10006578);
  RegisterVar(&DAT_10006578,8);
  RegisterDynGroup(&DAT_10006588);
  RegisterVar(&DAT_10006588,8);
  RegisterDynGroup(&DAT_10006558);
  RegisterVar(&DAT_10006558,8);
  RegisterDynGroup(&DAT_10006550);
  RegisterVar(&DAT_10006550,8);
  RegisterFormation(&DAT_10006568,"#SQUARE36");
  RegisterFormation(&DAT_10006560,"#TRI3");
  SetPlayerName(1,"PRUSSIA");
  SetPlayerName(3,"PIRATES");
  SetPlayerName(5,"BANDITS");
  SetPlayerName(4,"ALLIES");
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
    iVar2 = FUN_10001000();
    RunTimer(10,iVar2 + 4000);
    iVar2 = FUN_10001000();
    RunTimer(0xb,iVar2 + 8000);
    iVar2 = FUN_10001000();
    RunTimer(0xc,iVar2 + 15000);
    SetResource(1,3,10000);
    SetResource(1,1,5000);
    SetResource(1,4,5000);
    SetResource(1,5,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    ChangeFriends(1,0x2e);
    ChangeFriends(3,0x2e);
    ChangeFriends(5,0x2e);
    ChangeFriends(0,0x51);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,50000);
      SetResource(0,1,50000);
      SetResource(0,4,50000);
      SetResource(0,5,50000);
      SetResource(0,0,50000);
      SetResource(0,2,50000);
      StartAI(1,"GERMAN.0",0,1,1,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,"GERMAN.0",0,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,"GERMAN.0",0,1,1,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,4000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(1,"GERMAN.0",0,1,1,3);
    }
    SelectUnits(&DAT_100065b8,0);
    Patrol(3,&DAT_10006648,0xc0);
    SelectUnits(&DAT_100065c0,0);
    Patrol(3,&DAT_10006650,0x20);
    SelectUnits(&DAT_100065c8,0);
    Patrol(3,&DAT_10006658,0x80);
    SelectUnits(&DAT_100065d0,0);
    Patrol(3,&DAT_10006660,0x40);
    SelectUnits(&DAT_100065d8,0);
    Patrol(3,&DAT_10006668,0x80);
    SelectUnits(&DAT_100065a8,0);
    Patrol(3,&DAT_10006618,0xa0);
    SelectUnits(&DAT_100065b0,0);
    Patrol(3,&DAT_10006620,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006548,0), iVar2 != 0)) {
    SetTrigg(2,0);
    ShowPage("#PAGE3");
    cVar1 = AskQuestion("#PAGE4");
    if (cVar1 == '\0') {
      ShowPage("#PAGE6");
      SelectUnits(&DAT_10006628,0);
      SelChangeNation(4,6);
    }
    else {
      iVar2 = GetResource(0,1);
      if (iVar2 < 0x3e9) {
        ShowPage("#PAGE5");
        RunTimer(1,1000);
        SetTrigg(3,1);
      }
      else {
        AddResource(0,1,0xfffffc18);
        SelectUnits(&DAT_10006628,0);
        SelChangeNation(4,0);
      }
    }
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    RunTimer(1,1000);
    SetTrigg(3,0);
    SetTrigg(2,1);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100065f0,0), iVar2 != 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE7");
    cVar1 = AskQuestion("#PAGE8");
    if (cVar1 == '\0') {
      ShowPage("#PAGE10");
      SelectUnits(&DAT_100065e0,0);
      SelChangeNation(4,6);
    }
    else {
      iVar2 = GetResource(0,1);
      if (iVar2 < 0x7d1) {
        ShowPage("#PAGE9");
        RunTimer(2,1000);
        SetTrigg(5,1);
      }
      else {
        AddResource(0,1,0xfffff830);
        SelectUnits(&DAT_100065e0,0);
        SelChangeNation(4,0);
      }
    }
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    RunTimer(2,1000);
    SetTrigg(5,0);
    SetTrigg(4,1);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006670,5), iVar2 == 0)) {
    SetTrigg(6,0);
    ShowPage("#PAGE11");
    AddResource(0,1,2000);
    SetTrigg(0xe,0);
    SetTrigg(0xf,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006678,5), iVar2 == 0)) {
    SetTrigg(7,0);
    ShowPage("#PAGE12");
    AddResource(0,1,1000);
    SetTrigg(0xc,0);
    SetTrigg(0xd,0);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006680,5), iVar2 == 0)) {
    SetTrigg(8,0);
    ShowPage("#PAGE13");
    AddResource(0,1,1000);
    SetTrigg(0x10,0);
    SetTrigg(0x11,0);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(9,0);
    ShowPage("#PAGE15");
    ShowVictory();
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(10,0);
    ShowPage("#PAGE14");
    LooseGame();
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006530,0), iVar2 != 0)) {
    SetTrigg(0xb,0);
    ShowPage("#PAGE16");
    SelectUnits(&DAT_10006590,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_10006598,0);
    SelChangeNation(4,0);
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(10), cVar1 != '\0')) &&
     (cVar1 = Trigg(0xb), cVar1 == '\0')) {
    SetTrigg(0xc,0);
    SetTrigg(0xd,1);
    RunTimer(10,1000);
    CreateObject0(&DAT_10006540,&DAT_10006568,&DAT_100065a0,5,&DAT_10006678,0x20);
    SelectUnits(&DAT_10006540,0);
    SelSendAndKill(5,&DAT_10006530,0x20,0);
    SelSendAndKill(5,&DAT_10006570,0xa0,2);
    SelSendAndKill(5,&DAT_10006610,0x80,2);
    SelSendAndKill(5,&DAT_10006600,0x40,2);
    SelSendAndKill(5,&DAT_10006608,0,2);
    RemoveGroup(&DAT_10006540,&DAT_10006538);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(10), cVar1 != '\0')) {
    SetTrigg(0xc,1);
    SetTrigg(0xd,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(10), cVar1 != '\0')) {
    SetTrigg(0xe,0);
    SetTrigg(0xf,1);
    iVar2 = FUN_10001000();
    RunTimer(0xb,iVar2 + 4000);
    CreateObject0(&DAT_10006578,&DAT_10006560,&DAT_100065f8,5,&DAT_10006670,0);
    SelectUnits(&DAT_10006578,0);
    SelSendAndKill(5,&DAT_10006570,0xa0,0);
    SelSendAndKill(5,&DAT_10006610,0x80,2);
    SelSendAndKill(5,&DAT_10006600,0x40,2);
    SelSendAndKill(5,&DAT_10006608,0,2);
    RemoveGroup(&DAT_10006578,&DAT_10006588);
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xb), cVar1 != '\0')) {
    SetTrigg(0xe,1);
    SetTrigg(0xf,0);
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(10), cVar1 != '\0')) {
    SetTrigg(0x10,0);
    SetTrigg(0x11,1);
    iVar2 = FUN_10001000();
    RunTimer(0xc,iVar2 + 5000);
    CreateObject0(&DAT_10006558,&DAT_10006560,&DAT_100065e8,5,&DAT_10006680,0);
    SelectUnits(&DAT_10006558,0);
    SelSendAndKill(5,&DAT_10006570,0xa0,0);
    SelSendAndKill(5,&DAT_10006610,0x80,2);
    SelSendAndKill(5,&DAT_10006600,0x40,2);
    SelSendAndKill(5,&DAT_10006608,0,2);
    RemoveGroup(&DAT_10006558,&DAT_10006550);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xc), cVar1 != '\0')) {
    SetTrigg(0x10,1);
    SetTrigg(0x11,0);
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
