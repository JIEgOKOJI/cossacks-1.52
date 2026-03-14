#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006068[] = "Zs2";
char DAT_1000606c[] = "Zs1";
char DAT_10006084[] = "Gs2";
char DAT_10006088[] = "Gs1";
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
long long DAT_100064a0 = 0;
long long DAT_100064a8 = 0;

void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006470,"Gkomandir");
  RegisterUnits(&DAT_10006458,"Gotaman");
  RegisterUnits(&DAT_10006478,"Gcenter");
  RegisterUnits(&DAT_10006468,"Gtransport");
  RegisterUnits(&DAT_10006460,"Ggarnizon");
  RegisterUnits(&DAT_10006488,DAT_10006088);
  RegisterUnits(&DAT_10006490,DAT_10006084);
  RegisterZone(&DAT_10006498,"Zfort");
  RegisterZone(&DAT_10006450,"Ztransport");
  RegisterZone(&DAT_100064a0,DAT_1000606c);
  RegisterZone(&DAT_100064a8,DAT_10006068);
  RegisterUnitType(&DAT_10006480,"Center_Turki(TU)");
  SetPlayerName(1,"ALJERIANS");
  SetPlayerName(2,"TURKEY");
  SetPlayerName(5,"PIRATES");
  SetPlayerName(6,"ALLIES");
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
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SetResource(1,3,100000);
    SetResource(1,1,50000);
    SetResource(1,4,50000);
    SetResource(1,5,50000);
    SetResource(1,0,50000);
    SetResource(1,2,50000);
    SetResource(2,3,100000);
    SetResource(2,1,50000);
    SetResource(2,4,50000);
    SetResource(2,5,50000);
    SetResource(2,0,50000);
    SetResource(2,2,50000);
    ChangeFriends(1,0x26);
    ChangeFriends(0,0x41);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,50000);
      SetResource(0,1,50000);
      SetResource(0,4,50000);
      SetResource(0,5,50000);
      SetResource(0,0,50000);
      SetResource(0,2,50000);
      SetLightSpot(&DAT_10006498,3,1);
      StartAI(1,"ALGIR.0",2,1,1,1);
      StartAI(2,"TURKISH.0",2,1,1,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,"ALGIR.0",2,1,1,2);
      StartAI(2,"TURKISH.0",2,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,"ALGIR.0",2,1,1,3);
      StartAI(2,"TURKISH.0",2,1,1,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,4000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(1,"ALGIR.0",2,1,1,3);
      StartAI(2,"TURKISH.0",2,1,1,3);
    }
    SelectUnits(&DAT_10006468,0);
    SelChangeNation(0,6);
    SelectUnits(&DAT_10006468,0);
    SelSendTo(6,&DAT_10006450,0,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006450,&DAT_10006468), iVar2 == 1)) {
    SetTrigg(2,0);
    SelectUnits(&DAT_10006468,0);
    SelDie(6);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount1(&DAT_10006480,0), iVar2 == 1)) {
    SetTrigg(3,0);
    ShowPage("#PAGE3");
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006458), iVar2 == 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE4");
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 == '\0')) &&
     (cVar1 = Trigg(3), cVar1 == '\0')) {
    SetTrigg(5,0);
    ShowPage("#PAGE5");
    ShowVictory();
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(6,0);
    ShowPage("#PAGE7");
    LooseGame();
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006470), iVar2 == 0)) {
    SetTrigg(7,0);
    ShowPage("#PAGE6");
    LooseGame();
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006478), iVar2 == 0)) {
    SetTrigg(8,0);
    ShowPage("#PAGE8");
    LooseGame();
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(9,0);
    ShowPage("#PAGE ");
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(10,0);
    ShowPage("#PAGE ");
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsAmount0(&DAT_100064a0,0), pcVar3 = (void*)&SelectUnits, 10 < iVar2)) {
    SetTrigg(0xb,0);
    SelectUnits(&DAT_10006488,0);
    SelDie(5);
    SelectUnits(&DAT_10006460,0);
    SelSendAndKill(5,&DAT_100064a0,0xe0,0);
    SetTrigg(0xd,1);
    ClearSelection(5);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100064a8,0), 10 < iVar2)) {
    SetTrigg(0xc,0);
    SelectUnits(&DAT_10006490,0);
    SelDie(5);
    SelectUnits(&DAT_10006460,0);
    SelSendAndKill(5,&DAT_100064a8,0xe0,0);
    SetTrigg(0xd,1);
    ClearSelection(5);
  }
  cVar1 = Trigg(0xd);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100064a8,0), iVar2 == 0)) &&
      (iVar2 = GetUnitsAmount0(&DAT_100064a0,0), iVar2 == 0)) &&
     ((cVar1 = Trigg(0xb), cVar1 == '\0' || (cVar1 = Trigg(0xc), cVar1 == '\0')))) {
    SetTrigg(0xd,0);
    SelectUnits(&DAT_10006460,0);
    SelSendAndKill(5,&DAT_10006498,0xe0,0);
    SetTrigg(0xc,1);
    SetTrigg(0xb,1);
    ClearSelection(5);
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
