#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_10006070[] = "Z7";
char DAT_10006074[] = "Z6";
char DAT_10006078[] = "Z5";
char DAT_1000607c[] = "Z4";
char DAT_10006080[] = "Z3";
char DAT_10006084[] = "Z2";
char DAT_10006088[] = "Z1";
char DAT_1000608c[] = "G6";
char DAT_10006090[] = "G5";
char DAT_10006094[] = "G4";
char DAT_10006098[] = "G3";
char DAT_1000609c[] = "G2";
char DAT_100060a0[] = "G1";
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
long long DAT_10006498 = 0;
long long DAT_100064a0 = 0;
long long DAT_100064a8 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006418,DAT_100060a0);
  RegisterUnits(&DAT_10006420,DAT_1000609c);
  RegisterUnits(&DAT_10006428,DAT_10006098);
  RegisterUnits(&DAT_10006430,DAT_10006094);
  RegisterUnits(&DAT_10006438,DAT_10006090);
  RegisterUnits(&DAT_10006440,DAT_1000608c);
  RegisterZone(&DAT_10006458,DAT_10006088);
  RegisterZone(&DAT_10006460,DAT_10006084);
  RegisterZone(&DAT_10006468,DAT_10006080);
  RegisterZone(&DAT_10006470,DAT_1000607c);
  RegisterZone(&DAT_10006478,DAT_10006078);
  RegisterZone(&DAT_10006480,DAT_10006074);
  RegisterZone(&DAT_10006488,DAT_10006070);
  RegisterVar(&DAT_10006448,8);
  RegisterVar(&DAT_10006450,8);
  RegisterUnitType(&DAT_10006498,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_100064a8,"SUNDUK1O(UN)");
  RegisterFormation(&DAT_100064a0,"#ALONE");
  ChangeFriends(0,1);
  ChangeFriends(1,0x2a);
  ChangeFriends(3,0x2a);
  ChangeFriends(5,0x2a);
  SetPlayerName(1,"SPAIN");
  SetPlayerName(3,"TRAITOR");
  SetPlayerName(5,"NOMADS");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  void *pcVar4;
  void *pcVar5;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    CreateObject0(&DAT_10006448,&DAT_100064a0,&DAT_10006498,5,&DAT_10006458,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,(0xc - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,1,(0xc - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,0,(0xc - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,2,(0xc - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,5,(0xc - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,4,(0xc - iVar2) * 500);
    SetResource(3,3,6000);
    SetResource(3,1,6000);
    SetResource(3,0,6000);
    SetResource(3,2,6000);
    SetResource(3,5,6000);
    SetResource(3,4,6000);
    ShowPage("#PAGE0");
    SelectUnits(&DAT_10006420,0);
    Patrol(1,&DAT_10006460,0);
    SelectUnits(&DAT_10006428,0);
    Patrol(1,&DAT_10006468,0);
    SelectUnits(&DAT_10006430,0);
    Patrol(1,&DAT_10006470,0);
    SelectUnits(&DAT_10006438,0);
    Patrol(1,&DAT_10006478,0);
    iVar2 = GetDiff(0);
    if (iVar2 < 1) {
      SetLightSpot(&DAT_10006488,2,1);
      SetResource(0,3,100000);
      StartAI(3,"ALGIR.0",1,1,0,1);
    }
    else {
      uVar3 = GetDiff(0);
      StartAI(3,"ALGIR.0",1,1,0,uVar3);
    }
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsByNation(&DAT_10006418,0), pcVar4 = (void*)&SetTrigg, pcVar5 = (void*)&ShowPage,
     0 < iVar2)) {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowVictory();
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006418), iVar2 == 0)) {
    SetTrigg(2,0);
    ShowPage("#PAGE2");
    LooseGame();
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#PAGE2A");
    LooseGame();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE3");
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006458,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006458,5), iVar2 == 0)) {
    SetTrigg(4,0);
    iVar2 = GetDiff(0);
    ShowPageParam("#PAGE4",iVar2 * -300 + 2000);
    iVar2 = GetDiff(0);
    AddResource(0,1,iVar2 * -300 + 2000);
    SelectUnits(&DAT_10006448,0);
    SelErase(5);
    CreateObject0(&DAT_10006450,&DAT_100064a0,&DAT_100064a8,5,&DAT_10006458,0);
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006480,0), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10006440), iVar2 == 0)) {
    SetTrigg(5,0);
    iVar2 = GetDiff(0);
    ShowPageParam("#PAGE5",(6 - iVar2) * 500);
    iVar2 = GetDiff(0);
    AddResource(0,3,(6 - iVar2) * 500);
    AddResource(0,1,0x39);
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
