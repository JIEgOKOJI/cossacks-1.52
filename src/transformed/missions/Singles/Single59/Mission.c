#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_10005490 = 0;
long long DAT_10005498 = 0;
long long DAT_100054a0 = 0;
long long DAT_100054a8 = 0;
long long DAT_100054b0 = 0;
long long DAT_100054b8 = 0;
long long DAT_100054c0 = 0;
long long DAT_100054c8 = 0;
long long DAT_100054d0 = 0;
long long DAT_100054d8 = 0;
long long DAT_100054e0 = 0;
long long DAT_100054e8 = 0;
long long DAT_100054f0 = 0;

/* Forward declarations */
int FUN_10001000(void);


int FUN_10001000(void)

{
  int uVar1;
  
  uVar1 = GetDiff(0);
  switch(uVar1) {
  case 0:
    return 50000;
  case 1:
    return 20000;
  case 2:
    return 15000;
  case 3:
    return 10000;
  default:
    return 100;
  }
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_100054e0,"Ggates");
  RegisterUnitType(&DAT_10005498,"Pehota_turki(TU)");
  RegisterUnitType(&DAT_100054a0,"Pikiner_turki(TU)");
  RegisterUnitType(&DAT_100054a8,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_100054b0,"Bashnia_3(TU)");
  RegisterUnitType(&DAT_100054b8,"WALL_TU(TU)");
  RegisterUnitType(&DAT_100054c0,"Kuznica_ua(UA)");
  RegisterUnitType(&DAT_100054c8,"konushnia_ua(UA)");
  RegisterUnitType(&DAT_100054d0,"Strelcovaia_Izba(UA)");
  RegisterUnitType(&DAT_100054f0,"Grenader_DIP(TU)");
  RegisterUnitType(&DAT_10005490,"Strelec_Algir_DIP(TU)");
  RegisterUnitType(&DAT_100054d8,"Kozak_loshad_DIP(TU)");
  RegisterUnitType(&DAT_100054e8,"Dragun_18_DIP(TU)");
  SetPlayerName(5,"COSSACKS");
  SetPlayerName(6,"COSSACKS");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  void *pcVar4;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SelectUnits(&DAT_100054e0,0);
    SelOpenGates(5);
    ChangeFriends(5,0x60);
    iVar2 = FUN_10001000();
    RunTimer(1,iVar2 + 5000);
    SetResource(5,3,5000);
    SetResource(5,1,15000);
    SetResource(5,4,5000);
    SetResource(5,5,5000);
    SetResource(5,0,5000);
    SetResource(5,2,5000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,50000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      StartAI(5,"UKRAINE.0",0,1,2,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,1000);
      SetResource(0,2,1000);
      StartAI(5,"UKRAINE.0",0,1,2,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,500);
      SetResource(0,2,500);
      StartAI(5,"UKRAINE.0",0,1,2,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,2000);
      SetResource(0,1,2000);
      SetResource(0,4,2000);
      SetResource(0,5,4000);
      SetResource(0,0,500);
      SetResource(0,2,500);
      StartAI(5,"UKRAINE.0",0,1,2,3);
    }
  }
  EnableUnit(0,&DAT_10005498,0);
  EnableUnit(0,&DAT_100054a0,0);
  EnableUnit(0,&DAT_100054a8,0);
  EnableUnit(0,&DAT_100054b0,0);
  EnableUnit(0,&DAT_100054b8,0);
  EnableUnit(0,&DAT_100054c0,0);
  EnableUnit(0,&DAT_100054c8,0);
  EnableUnit(0,&DAT_100054d0,0);
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(6,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(5), cVar1 != '\0')) {
    SetTrigg(8,0);
    ShowPage("#PAGE5");
    ShowVictory();
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(9,0);
    ShowPage("#PAGE6");
    SetTrigg(10,1);
    SelectUnitsType(&DAT_100054f0,0,0);
    SelectUnitsType(&DAT_10005490,0,1);
    SelectUnitsType(&DAT_100054d8,0,1);
    SelectUnitsType(&DAT_100054e8,0,1);
    SelChangeNation(0,6);
    uVar3 = FUN_10001000();
    RunTimer(1,uVar3);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(10,0);
    SetTrigg(9,1);
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
