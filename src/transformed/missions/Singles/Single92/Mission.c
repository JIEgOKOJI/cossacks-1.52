#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1000607c[] = "Zy1";
char DAT_10006088[] = "Zp3";
char DAT_1000608c[] = "Zp2";
char DAT_10006090[] = "Zp1";
char DAT_10006094[] = "Zf4";
char DAT_10006098[] = "Zf3";
char DAT_1000609c[] = "Zf2";
char DAT_100060a0[] = "Zf1";
char DAT_100060a4[] = "Gy1";
long long DAT_10006400 = 0;
long long DAT_10006408 = 0;
long long DAT_10006410 = 0;
long long DAT_10006418 = 0;
long long DAT_10006420 = 0;
long long DAT_10006428 = 0;
long long DAT_10006430 = 0;
long long DAT_10006438 = 0;
long long DAT_10006440 = 0;
long long DAT_10006448 = 0;
long long DAT_10006450 = 0;
long long DAT_10006458 = 0;
long long DAT_10006460 = 0;
long long DAT_10006468 = 0;
long long DAT_10006470 = 0;
long long DAT_10006478 = 0;
long long DAT_10006480 = 0;
long long DAT_10006488 = 0;
long long DAT_10006490 = 0;
long long DAT_10006498 = 0;

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
    return 250000;
  case 1:
    return 15000;
  case 2:
    return 10000;
  case 3:
    return 7000;
  default:
    return 100;
  }
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006418,"Gport");
  RegisterUnits(&DAT_10006430,DAT_100060a4);
  RegisterZone(&DAT_10006460,DAT_100060a0);
  RegisterZone(&DAT_10006468,DAT_1000609c);
  RegisterZone(&DAT_10006470,DAT_10006098);
  RegisterZone(&DAT_10006478,DAT_10006094);
  RegisterZone(&DAT_10006480,DAT_10006090);
  RegisterZone(&DAT_10006488,DAT_1000608c);
  RegisterZone(&DAT_10006490,DAT_10006088);
  RegisterZone(&DAT_10006420,"Zport");
  RegisterZone(&DAT_10006498,DAT_1000607c);
  RegisterUnitType(&DAT_10006428,"PorPO(PO)");
  RegisterUnitType(&DAT_10006458,"FregatNEW(HO)");
  RegisterUnitType(&DAT_10006400,"Fregat(HO)");
  RegisterUnitType(&DAT_10006450,"Yahta(HO)");
  RegisterFormation(&DAT_10006410,"#ALONE");
  RegisterFormation(&DAT_10006408,"#SHIPS3");
  SetPlayerName(1,"HOLLAND");
  SetPlayerName(2,"HOLLAND");
  RegisterDynGroup(&DAT_10006438);
  RegisterVar(&DAT_10006438,8);
  RegisterDynGroup(&DAT_10006448);
  RegisterVar(&DAT_10006448,8);
  RegisterDynGroup(&DAT_10006440);
  RegisterVar(&DAT_10006440,8);
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
    RunTimer(1,5000);
    iVar2 = FUN_10001000();
    RunTimer(2,iVar2 + 5000);
    SetTrigg(9,0);
    SetTrigg(0xd,0);
    RunTimer(3,5000);
    EnableUnit(0,&DAT_10006428,0);
    ChangeFriends(2,0x22);
    ChangeFriends(1,0x22);
    ChangeFriends(0,0x11);
    ChangeFriends(4,0x11);
    SetResource(1,3,5000);
    SetResource(1,1,5000);
    SetResource(1,4,10000);
    SetResource(1,5,10000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,9000);
      SetResource(0,1,9000);
      SetResource(0,4,9000);
      SetResource(0,5,9000);
      SetResource(0,0,9000);
      SetResource(0,2,9000);
      StartAI(1,"HOLLAND.0",1,1,1,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,"HOLLAND.0",1,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,6000);
      SetResource(0,1,6000);
      SetResource(0,4,6000);
      SetResource(0,5,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      StartAI(1,"HOLLAND.0",1,1,1,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,"HOLLAND.0",1,1,1,3);
    }
    SetTrigg(6,0);
    SelectUnits(&DAT_10006430,0);
    SelSendAndKill(2,&DAT_10006488,0x80,0);
    SelSendAndKill(2,&DAT_10006480,0x80,2);
    SelSendAndKill(2,&DAT_10006420,0x80,2);
    ClearSelection(2);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#PAGE3");
    ShowVictory();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE4");
    LooseGame();
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(4,0);
    SetTrigg(5,0);
    SetTrigg(6,0);
    CreateObject0(&DAT_10006438,&DAT_10006410,&DAT_10006458,2,&DAT_10006478,0xc0);
    SelectUnits(&DAT_10006438,0);
    SelSendAndKill(2,&DAT_10006470,0xa0,0);
    SelSendAndKill(2,&DAT_10006468,0xa0,2);
    SelSendAndKill(2,&DAT_10006460,0xc0,2);
    ClearSelection(2);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006460,&DAT_10006438), iVar2 != 0)) {
    SetTrigg(5,0);
    SetTrigg(4,0);
    SelectUnits(&DAT_10006438,0);
    SelErase(2);
    RunTimer(1,5000);
  }
  cVar1 = Trigg(6);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 != '\0')) && (cVar1 = Trigg(4), cVar1 == '\0'))
     && (iVar2 = GetTotalAmount0(&DAT_10006438), iVar2 == 0)) {
    SetTrigg(6,0);
    RunTimer(1,5000);
    SetTrigg(4,0);
    ShowPage("#PAGE");
    AddResource(0,1,5000);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006420,&DAT_10006430), iVar2 != 0)) {
    SetTrigg(7,0);
    SelectUnits(&DAT_10006430,0);
    SelAttackGroup(2,&DAT_10006418);
    ClearSelection(2);
    SetTrigg(7,0);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(8,0);
    CreateObject0(&DAT_10006448,&DAT_10006408,&DAT_10006400,2,&DAT_10006490,0x40);
    SelectUnits(&DAT_10006448,0);
    SelSendAndKill(2,&DAT_10006488,0x80,0);
    SelSendAndKill(2,&DAT_10006480,0x80,2);
    SelSendAndKill(2,&DAT_10006420,0x80,2);
    ClearSelection(2);
    SetTrigg(9,0);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006448), iVar2 == 0)) {
    SetTrigg(9,0);
    iVar2 = FUN_10001000();
    RunTimer(2,iVar2 + 5000);
    SetTrigg(8,0);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006420,&DAT_10006448), iVar2 != 0)) {
    SetTrigg(10,0);
    SelectUnits(&DAT_10006448,0);
    SelAttackGroup(2,&DAT_10006418);
    ClearSelection(2);
    SetTrigg(10,0);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006418), iVar2 == 0)) {
    SetTrigg(0xb,0);
    ShowPage("#PAGE");
    LooseGame();
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(0xc,0);
    CreateObject0(&DAT_10006440,&DAT_10006410,&DAT_10006450,2,&DAT_10006498,0x80);
    SelectUnits(&DAT_10006440,0);
    SelSendAndKill(2,&DAT_10006468,0x90,0);
    SelSendAndKill(2,&DAT_10006488,0x80,2);
    SelSendAndKill(2,&DAT_10006480,0x80,2);
    SelSendAndKill(2,&DAT_10006420,0x80,2);
    ClearSelection(2);
    SetTrigg(0xd,0);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006440), iVar2 == 0)) {
    SetTrigg(0xd,0);
    RunTimer(3,5000);
    SetTrigg(0xc,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006420,&DAT_10006440), iVar2 != 0)) {
    SetTrigg(0xe,0);
    SelectUnits(&DAT_10006440,0);
    SelAttackGroup(2,&DAT_10006418);
    ClearSelection(2);
    SetTrigg(0xe,0);
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
