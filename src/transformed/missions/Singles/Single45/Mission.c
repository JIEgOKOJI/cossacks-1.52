#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006080[] = "Zsh2";
char DAT_10006088[] = "Zsh1";
char DAT_100060a4[] = "Zl22";
char DAT_100060ac[] = "Zl11";
char DAT_100060b4[] = "Zl2";
char DAT_100060b8[] = "Zl1";
char DAT_100060bc[] = "Gb4";
char DAT_100060c0[] = "Gb3";
char DAT_100060c4[] = "Gb2";
char DAT_100060c8[] = "Gb1";
long long DAT_10006480 = 0;
long long DAT_10006488 = 0;
long long DAT_10006490 = 0;
long long DAT_10006498 = 0;
long long DAT_100064a0 = 0;
long long DAT_100064a8 = 0;
long long DAT_100064b0 = 0;
long long DAT_100064b8 = 0;
long long DAT_100064c0 = 0;
long long DAT_100064c8 = 0;
long long DAT_100064d0 = 0;
long long DAT_100064d8 = 0;
long long DAT_100064e0 = 0;
long long DAT_100064e8 = 0;
long long DAT_100064f0 = 0;
long long DAT_100064f8 = 0;
long long DAT_10006500 = 0;
long long DAT_10006508 = 0;
long long DAT_10006510 = 0;
long long DAT_10006518 = 0;
long long DAT_10006520 = 0;
long long DAT_10006528 = 0;

/* Forward declarations */
int FUN_10001000(void);


int FUN_10001000(void)

{
  int uVar1;
  
  uVar1 = GetDiff(0);
  switch(uVar1) {
  case 0:
    return 6000;
  case 1:
    return 7000;
  case 2:
    return 8000;
  case 3:
    return 10000;
  default:
    return 100;
  }
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_100064c0,"Gkomandir");
  RegisterUnits(&DAT_10006480,"Glin1");
  RegisterUnits(&DAT_10006488,"Glin2");
  RegisterUnits(&DAT_100064e0,DAT_100060c8);
  RegisterUnits(&DAT_100064e8,DAT_100060c4);
  RegisterUnits(&DAT_100064f0,DAT_100060c0);
  RegisterUnits(&DAT_100064f8,DAT_100060bc);
  RegisterZone(&DAT_10006520,DAT_100060b8);
  RegisterZone(&DAT_10006528,DAT_100060b4);
  RegisterZone(&DAT_10006508,DAT_100060ac);
  RegisterZone(&DAT_10006510,DAT_100060a4);
  RegisterZone(&DAT_10006500,"Zostrov");
  RegisterZone(&DAT_100064a0,"Zpereprava");
  RegisterZone(&DAT_10006490,DAT_10006088);
  RegisterZone(&DAT_10006498,DAT_10006080);
  RegisterFormation(&DAT_100064b8,"#ALONE");
  RegisterFormation(&DAT_100064b0,"#TRI3");
  RegisterUnitType(&DAT_10006518,"Konni_Ricar(VE)");
  RegisterUnitType(&DAT_100064d8,"Shebeka(TU)");
  RegisterDynGroup(&DAT_100064a8);
  RegisterVar(&DAT_100064a8,8);
  RegisterDynGroup(&DAT_100064d0);
  RegisterVar(&DAT_100064d0,8);
  RegisterDynGroup(&DAT_100064c8);
  RegisterVar(&DAT_100064c8,8);
  SetPlayerName(2,"ALJERIANS");
  SetPlayerName(1,"TURKEY");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"ENEMY");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  void *pcVar4;
  void *pcVar5;
  void *pcVar6;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    iVar2 = FUN_10001000();
    RunTimer(1,iVar2 + 3000);
    SetResource(1,3,5000);
    SetResource(1,1,5000);
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
    InitialUpgrade(DAT_100060c8,"AKA28TU");
    ChangeFriends(1,0x26);
    ChangeFriends(2,0x26);
    ChangeFriends(0,0x11);
    ChangeFriends(4,0x11);
    ChangeFriends(5,0x26);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,50000);
      SetResource(0,1,50000);
      SetResource(0,4,50000);
      SetResource(0,5,50000);
      SetResource(0,0,50000);
      SetResource(0,2,50000);
      StartAI(2,"ALGIR.0",0,1,1,1);
      StartAI(1,"TURKISH.0",0,1,1,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,10000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      InitialUpgrade(DAT_100060c8,"AKA27TU");
      InitialUpgrade(DAT_100060c8,"AKA17TU");
      StartAI(2,"ALGIR.0",0,1,1,2);
      StartAI(1,"TURKISH.0",0,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      InitialUpgrade(DAT_100060c8,"AKA27TU");
      InitialUpgrade(DAT_100060c8,"AKA17TU");
      StartAI(2,"ALGIR.0",0,1,1,3);
      StartAI(1,"TURKISH.0",0,1,1,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      InitialUpgrade(DAT_100060c8,"AKA27TU");
      InitialUpgrade(DAT_100060c8,"AKA17TU");
      InitialUpgrade(DAT_100060c8,"AKA27TU");
      InitialUpgrade(DAT_100060c8,"AKA17TU");
      StartAI(2,"ALGIR.0",0,1,1,3);
      StartAI(1,"TURKISH.0",0,1,1,3);
    }
    SelectUnits(&DAT_10006480,0);
    SelAttackGroup(4,&DAT_100064e0);
    SelectUnits(&DAT_10006488,0);
    SelAttackGroup(4,&DAT_100064e8);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064e0), iVar2 == 0)) {
    SetTrigg(2,0);
    SelectUnits(&DAT_10006480,0);
    SelSendAndKill(4,&DAT_10006520,0x80,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064e8), iVar2 == 0)) {
    SetTrigg(3,0);
    SelectUnits(&DAT_10006488,0);
    SelSendAndKill(4,&DAT_10006528,0,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006528,&DAT_10006488), iVar2 == 1)) {
    SelectUnits(&DAT_10006488,0);
    SelAttackGroup(4,&DAT_100064f8);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), pcVar5 = (void*)&ShowPage, cVar1 != '\0')) {
    SetTrigg(6,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(9,0);
    ShowPage("#PAGE5");
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(10,0);
    ShowPage("#PAGE6");
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) && (cVar1 = Trigg(9), cVar1 == '\0'))
  {
    SetTrigg(0xb,0);
    ShowPage("#PAGE7");
    ShowVictory();
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064f0), iVar2 == 0)) {
    SetTrigg(0xc,0);
    SelectUnits(&DAT_10006480,0);
    Patrol(4,&DAT_10006508,0x40);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064f8), iVar2 == 0)) {
    SetTrigg(0xd,0);
    SelectUnits(&DAT_10006488,0);
    Patrol(4,&DAT_10006510,0x40);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(0xe,0);
    SetTrigg(0xd,1);
    CreateObject0(&DAT_100064a8,&DAT_100064b0,&DAT_10006518,0,&DAT_10006500,0x40);
    ShowPage("#PAGE8");
    CreateObject0(&DAT_100064d0,&DAT_100064b8,&DAT_100064d8,5,&DAT_10006490,0x20);
    SelectUnits(&DAT_100064d0,0);
    SelSendAndKill(5,&DAT_100064a0,0,0);
    CreateObject0(&DAT_100064c8,&DAT_100064b8,&DAT_100064d8,5,&DAT_10006498,0x60);
    SelectUnits(&DAT_100064d0,0);
    SelSendAndKill(5,&DAT_100064a0,0x80,0);
    uVar3 = FUN_10001000();
    RunTimer(1,uVar3);
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(0xe,1);
    SetTrigg(0xd,0);
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
