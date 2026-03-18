#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
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
long long DAT_10006688 = 0;
long long DAT_10006690 = 0;
long long DAT_10006698 = 0;
long long DAT_100066a0 = 0;
long long DAT_100066a8 = 0;
long long DAT_100066b0 = 0;
long long DAT_100066b8 = 0;
long long DAT_100066c0 = 0;
long long DAT_100066c8 = 0;
long long DAT_100066d0 = 0;
long long DAT_100066d8 = 0;
long long DAT_100066e0 = 0;
long long DAT_100066e8 = 0;
long long DAT_100066f0 = 0;
long long DAT_100066f8 = 0;
long long DAT_10006700 = 0;
long long DAT_10006708 = 0;
long long DAT_10006710 = 0;
long long DAT_10006718 = 0;
long long DAT_10006720 = 0;
long long DAT_10006728 = 0;
long long DAT_10006730 = 0;
long long DAT_10006738 = 0;
long long DAT_10006740 = 0;
long long DAT_10006748 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnitType(&DAT_10006638,"Center_Turki(TU)");
  RegisterUnitType(&DAT_10006640,"Dom_Turki(TU)");
  RegisterUnitType(&DAT_10006648,"Melnica_tu(TU)");
  RegisterUnitType(&DAT_10006650,"Rinok_Turki(TU)");
  RegisterUnitType(&DAT_10006658,"Port(TU)");
  RegisterUnitType(&DAT_10006660,"Diplomatic_Turki(TU)");
  RegisterUnitType(&DAT_10006668,"Art_Depo_Turki(TU)");
  RegisterUnitType(&DAT_10006670,"Kuznia_Turki(TU)");
  RegisterUnitType(&DAT_10006678,"WALL_UKR(TU)");
  RegisterUnitType(&DAT_10006680,"WALL_TU(TU)");
  RegisterUnitType(&DAT_10006688,"Konushnia_Turki(TU)");
  RegisterUnitType(&DAT_10006690,"Mechet_Turki(TU)");
  RegisterUnitType(&DAT_10006698,"Minaret(TU)");
  RegisterUnitType(&DAT_100066a8,"Bashnia_3(TU)");
  RegisterUnitType(&DAT_100066b8,"Barack_Turki(TU)");
  RegisterUnitType(&DAT_100066c8,"PorE(au)");
  RegisterUnitType(&DAT_100066d8,"WALL_EV(VE)");
  RegisterUnitType(&DAT_100066f0,"Center_Austria(au)");
  RegisterUnitType(&DAT_10006708,"Melnica(au)");
  RegisterUnitType(&DAT_100066a0,"Dom_Austria(au)");
  RegisterUnitType(&DAT_100066b0,"Rinok(au)");
  RegisterUnitType(&DAT_100066c0,"Kuznica(au)");
  RegisterUnitType(&DAT_100066d0,"Konushnia_Swesair(au)");
  RegisterUnitType(&DAT_100066e8,"Cercov_Poland(au)");
  RegisterUnitType(&DAT_10006700,"akademia_E(au)");
  RegisterUnitType(&DAT_10006718,"Dip_korpus(au)");
  RegisterUnitType(&DAT_10006720,"Kazarma_evro(au)");
  RegisterUnitType(&DAT_10006728,"Kazarma(au)");
  RegisterUnitType(&DAT_10006730,"artileri_depo(au)");
  RegisterUnitType(&DAT_100066e0,"WALL_UKR(au)");
  RegisterUnitType(&DAT_100066f8,"WALL_EV(au)");
  RegisterUnitType(&DAT_10006710,"Bashnia(au)");
  RegisterUnits(&DAT_10006610,"Gtrans");
  RegisterUnits(&DAT_10006740,"Gyaht");
  RegisterUpgrade(&DAT_10006618,"AKA19VE");
  RegisterZone(&DAT_10006630,"Zport");
  RegisterZone(&DAT_10006620,"Zport1");
  RegisterZone(&DAT_10006738,"Zostrov");
  RegisterZone(&DAT_10006748,"Zyaht");
  RegisterZone(&DAT_10006628,"Ztrans");
  SetPlayerName(1,"TURKEY");
  SetPlayerName(2,"AUSTRIANS");
  SetPlayerName(3,"SPAIN");
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
    SelectUnits(&DAT_10006610,0);
    SelSendTo(3,&DAT_10006630,0x80,0);
    Patrol(3,&DAT_10006628,0);
    SelectUnits(&DAT_10006740,0);
    Patrol(1,&DAT_10006748,0xd6);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,50000);
      SetResource(0,1,50000);
      SetResource(0,4,50000);
      SetResource(0,5,50000);
      SetResource(0,0,50000);
      SetResource(0,2,50000);
      StartAI(2,"AUSTRIA.0",0,1,1,1);
      StartAI(1,"TURKISH.0",1,1,1,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(2,"AUSTRIA.0",0,1,1,2);
      StartAI(1,"TURKISH.0",1,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(2,"AUSTRIA.0",0,1,1,3);
      StartAI(1,"TURKISH.0",1,1,1,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,4000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(2,"AUSTRIA.0",0,1,1,3);
      StartAI(1,"TURKISH.0",1,1,1,3);
      DisableUpgrade(0,&DAT_10006618);
    }
  }
  ChangeFriends(1,6);
  ChangeFriends(0,9);
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#PAGE4");
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE3");
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 == '\0')) &&
     (cVar1 = Trigg(2), cVar1 == '\0')) {
    SetTrigg(4,0);
    ShowPage("#PAGE5");
    ShowVictory();
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    ShowPage("#PAGE6");
    LooseGame();
  }
  EnableUnit(0,&DAT_10006638,0);
  EnableUnit(0,&DAT_10006640,0);
  EnableUnit(0,&DAT_10006648,0);
  EnableUnit(0,&DAT_10006650,0);
  EnableUnit(0,&DAT_10006658,0);
  EnableUnit(0,&DAT_10006660,0);
  EnableUnit(0,&DAT_10006668,0);
  EnableUnit(0,&DAT_10006670,0);
  EnableUnit(0,&DAT_10006678,0);
  EnableUnit(0,&DAT_10006680,0);
  EnableUnit(0,&DAT_10006688,0);
  EnableUnit(0,&DAT_10006690,0);
  EnableUnit(0,&DAT_10006698,0);
  EnableUnit(0,&DAT_100066a8,0);
  EnableUnit(0,&DAT_100066b8,0);
  EnableUnit(0,&DAT_100066c8,0);
  EnableUnit(0,&DAT_100066d8,0);
  EnableUnit(0,&DAT_100066f0,0);
  EnableUnit(0,&DAT_10006708,0);
  EnableUnit(0,&DAT_100066a0,0);
  EnableUnit(0,&DAT_100066b0,0);
  EnableUnit(0,&DAT_100066c0,0);
  EnableUnit(0,&DAT_100066d0,0);
  EnableUnit(0,&DAT_100066e8,0);
  EnableUnit(0,&DAT_10006700,0);
  EnableUnit(0,&DAT_10006718,0);
  EnableUnit(0,&DAT_10006720,0);
  EnableUnit(0,&DAT_10006728,0);
  EnableUnit(0,&DAT_10006730,0);
  EnableUnit(0,&DAT_100066e0,0);
  EnableUnit(0,&DAT_100066f8,0);
  EnableUnit(0,&DAT_10006710,0);
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006630,&DAT_10006610), 0 < iVar2)) {
    SetTrigg(6,0);
    ShowPage("#PAGE7");
    AddResource(0,1,1000);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006630,&DAT_10006610), iVar2 == 0)) {
    SetTrigg(6,0);
  }
  SetLightSpot(&DAT_10006738,2,1);
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006630,&DAT_10006610), iVar2 != 0)) {
    SetTrigg(8,0);
    SetTrigg(9,0);
    SelectUnits(&DAT_10006610,0);
    SelSendTo(3,&DAT_10006620,0,0);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006620,&DAT_10006610), iVar2 != 0)) {
    SetTrigg(9,0);
    SetTrigg(8,0);
    SelectUnits(&DAT_10006610,0);
    SelSendTo(3,&DAT_10006630,0x80,0);
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
