#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
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
long long DAT_10006750 = 0;
long long DAT_10006758 = 0;
long long DAT_10006760 = 0;
long long DAT_10006768 = 0;
long long DAT_10006770 = 0;
long long DAT_10006778 = 0;
long long DAT_10006780 = 0;
long long DAT_10006788 = 0;
long long DAT_10006790 = 0;
long long DAT_10006798 = 0;
long long DAT_100067a0 = 0;
long long DAT_100067a8 = 0;
long long DAT_100067b0 = 0;
long long DAT_100067b8 = 0;
long long DAT_100067c0 = 0;
long long DAT_100067c8 = 0;
long long DAT_100067d0 = 0;
long long DAT_100067d8 = 0;
long long DAT_100067e0 = 0;
long long DAT_100067e8 = 0;
long long DAT_100067f0 = 0;
long long DAT_100067f8 = 0;
long long DAT_10006800 = 0;
long long DAT_10006808 = 0;
long long DAT_10006810 = 0;
long long DAT_10006818 = 0;
long long DAT_10006820 = 0;
long long DAT_10006828 = 0;
long long DAT_10006830 = 0;
long long DAT_10006838 = 0;
long long DAT_10006840 = 0;
long long DAT_10006848 = 0;
long long DAT_10006850 = 0;
long long DAT_10006858 = 0;

/* Forward declarations */
unsigned int FUN_100019c0(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,
            int param_9,int param_10,int param_11,int param_12);

void OnInit();
void ProcessScenary();


unsigned int __cdecl
FUN_100019c0(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,
            int param_9,int param_10,int param_11,int param_12)

{
  char cVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  iVar2 = GetTotalAmount0(param_5);
  if (iVar2 < 1) {
LAB_10001a1a:
    iVar2 = GetUnitsAmount0(param_3,param_1);
    iVar3 = GetTotalAmount0(param_5);
    if (iVar3 == iVar2 || iVar3 - iVar2 < 0) goto LAB_10001a67;
  }
  else {
    iVar2 = GetUnitsAmount1(param_3,param_5);
    iVar3 = GetUnitsAmount1(param_4,param_5);
    if ((iVar2 == iVar3 || iVar2 - iVar3 < 0) ||
       (iVar2 = GetUnitsAmount0(param_3,param_2), iVar2 != 0)) goto LAB_10001a1a;
  }
  SelectUnits(param_5,0);
  SelSendTo(param_1,param_4,0x3e,1);
  AllowAttack(param_1,0);
  SetTrigg(0xc,0);
LAB_10001a67:
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(param_3,param_2), 0 < iVar2)) {
    AllowAttack(param_1,1);
    SetTrigg(0xc,0);
  }
  iVar2 = GetUnitsAmount0(param_3,param_1);
  if ((iVar2 == 0) && (iVar2 = GetUnitsAmount0(param_4,param_2), 0 < iVar2)) {
    ShowPage(param_6);
    AddResource(param_2,1,param_7);
    AddResource(param_2,3,param_8);
    AddResource(param_2,0,param_9);
    AddResource(param_2,2,param_10);
    AddResource(param_2,4,param_11);
    AddResource(param_2,5,param_12);
    return uVar4 & -256;
  }
  return (int)1;
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_100066c8,"Gkomandir");
  RegisterUnits(&DAT_10006830,"GroupV1");
  RegisterUnits(&DAT_10006828,"GroupV2");
  RegisterUnits(&DAT_10006700,"GroupFR1");
  RegisterUnits(&DAT_10006708,"GroupFR2");
  RegisterUnits(&DAT_100066f0,"GroupFR3");
  RegisterUnits(&DAT_100066f8,"GroupFR4");
  RegisterUnits(&DAT_100066a0,"GroupART1");
  RegisterUnits(&DAT_100066a8,"GroupART2");
  RegisterUnits(&DAT_10006698,"GroupART3");
  RegisterUnits(&DAT_10006820,"GroupR1");
  RegisterZone(&DAT_10006710,"ZoneFORT");
  RegisterZone(&DAT_10006840,"ZoneV1");
  RegisterZone(&DAT_10006848,"ZoneV2");
  RegisterZone(&DAT_100066d0,"ZoneFR1");
  RegisterZone(&DAT_100066d8,"ZoneFR2");
  RegisterZone(&DAT_100066e0,"ZoneFR3");
  RegisterZone(&DAT_100066e8,"ZoneFR4");
  RegisterZone(&DAT_100066c0,"ZoneART1");
  RegisterZone(&DAT_100066b8,"ZoneART2");
  RegisterZone(&DAT_100066b0,"ZoneART3");
  RegisterZone(&DAT_10006838,"ZoneR1");
  RegisterZone(&DAT_10006718,"ZoneRA1");
  RegisterUnitType(&DAT_10006730,"Melnica(VE)");
  RegisterUnitType(&DAT_10006738,"Rinok(VE)");
  RegisterUnitType(&DAT_10006740,"PorE(VE)");
  RegisterUnitType(&DAT_10006748,"Dip_korpus(VE)");
  RegisterUnitType(&DAT_10006750,"artileri_depo(VE)");
  RegisterUnitType(&DAT_10006758,"Kuznica(VE)");
  RegisterUnitType(&DAT_10006760,"WALL_UKR(VE)");
  RegisterUnitType(&DAT_10006768,"WALL_EV(VE)");
  RegisterUnitType(&DAT_10006770,"Konushnia_Swesair(VE)");
  RegisterUnitType(&DAT_10006778,"Kostel(VE)");
  RegisterUnitType(&DAT_10006780,"akademia_E(VE)");
  RegisterUnitType(&DAT_10006788,"Bashnia(VE)");
  RegisterUnitType(&DAT_10006798,"Kazarma_evro(VE)");
  RegisterUnitType(&DAT_100067a8,"Kazarma(VE)");
  RegisterUnitType(&DAT_10006790,"Europ(GE)");
  RegisterUnitType(&DAT_100067a0,"Dom_Prussia(GE)");
  RegisterUnitType(&DAT_100067b0,"Melnica(GE)");
  RegisterUnitType(&DAT_100067c0,"Sclad1(GE)");
  RegisterUnitType(&DAT_100067d0,"PorE(GE)");
  RegisterUnitType(&DAT_100067e0,"Dip_korpus(GE)");
  RegisterUnitType(&DAT_100067f0,"artileri_depo(GE)");
  RegisterUnitType(&DAT_10006800,"Kuznica(GE)");
  RegisterUnitType(&DAT_10006810,"WALL_UKR(GE)");
  RegisterUnitType(&DAT_100067b8,"WALL_EV(GE)");
  RegisterUnitType(&DAT_100067c8,"Konushnia_Swesair(GE)");
  RegisterUnitType(&DAT_100067d8,"Cercov_Poland(GE)");
  RegisterUnitType(&DAT_100067e8,"akademia_E(GE)");
  RegisterUnitType(&DAT_100067f8,"Bashnia(GE)");
  RegisterUnitType(&DAT_10006808,"Kazarma_evro(GE)");
  RegisterUnitType(&DAT_10006818,"Kazarma(GE)");
  RegisterUpgrade(&DAT_10006858,"AKA06VE");
  RegisterUpgrade(&DAT_10006690,"AKA29VE");
  RegisterUpgrade(&DAT_10006850,"AKA04VE");
  SetPlayerName(1,"SPAIN");
  SetPlayerName(2,"PRUSSIA");
  SetPlayerName(5,"ROZBOINIKI");
  InitialUpgrade("GroupART1","AKA17SP");
  InitialUpgrade("GroupART1","AKA17SP");
  InitialUpgrade("GroupART1","AKA17SP");
  InitialUpgrade("GroupART1","AKA20SP");
  InitialUpgrade("GroupART1","AKA11SP");
  InitialUpgrade("GroupART1","AKA20SP");
  InitialUpgrade("Gkomandir","AKA04VE");
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
    SetResource(2,3,150000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    SetResource(2,0,5000);
    SetResource(2,2,10000);
    SetResource(5,3,0xa98ac7);
    SetResource(5,1,0xa98ac7);
    SetResource(5,4,250000);
    SetResource(5,5,250000);
    SetResource(5,0,250000);
    SetResource(5,2,250000);
    SelectUnits(&DAT_10006830,0);
    Patrol(1,&DAT_10006840,0xc0);
    SelectUnits(&DAT_10006828,0);
    Patrol(1,&DAT_10006848,0x40);
    SelectUnits(&DAT_10006700,0);
    Patrol(1,&DAT_100066d0,0x40);
    SelectUnits(&DAT_10006708,0);
    Patrol(1,&DAT_100066d8,0x40);
    SelectUnits(&DAT_10006828,0);
    Patrol(1,&DAT_10006848,0x40);
    SelectUnits(&DAT_100066f0,0);
    Patrol(1,&DAT_100066e0,0xc0);
    SelectUnits(&DAT_100066f8,0);
    Patrol(1,&DAT_100066e8,0xc0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetLightSpot(&DAT_10006710,3,1);
      SetResource(0,3,55000);
      SetResource(0,1,55000);
      SetResource(0,4,50000);
      SetResource(0,5,50000);
      SetResource(0,0,50000);
      SetResource(0,2,50000);
      StartAI(2,"GERMAN.0",0,1,1,1);
      SelectUnits(&DAT_10006830,0);
      SelectUnits(&DAT_10006828,1);
      SelErase(1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,11000);
      SetResource(0,1,11000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      StartAI(2,"GERMAN.0",0,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,0x157c);
      SetResource(0,1,0x157c);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(2,"GERMAN.0",0,1,1,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,0x1194);
      SetResource(0,1,0x1194);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(2,"GERMAN.0",0,1,1,3);
    }
  }
  iVar2 = GetUnitsAmount0(&DAT_100066c0,0);
  if (0 < iVar2) {
    AttackZoneByArtillery(&DAT_100066a0,&DAT_100066c0,0);
  }
  iVar2 = GetUnitsAmount0(&DAT_100066b8,0);
  if (0 < iVar2) {
    AttackZoneByArtillery(&DAT_100066a8,&DAT_100066b8,0);
  }
  iVar2 = GetUnitsAmount0(&DAT_100066b0,0);
  if (0 < iVar2) {
    AttackZoneByArtillery(&DAT_10006698,&DAT_100066b0,0);
  }
  ChangeFriends(5,100);
  EnableUnit(0,&DAT_10006720,0);
  EnableUnit(0,&DAT_10006728,0);
  EnableUnit(0,&DAT_10006730,0);
  EnableUnit(0,&DAT_10006738,0);
  EnableUnit(0,&DAT_10006740,0);
  EnableUnit(0,&DAT_10006748,0);
  EnableUnit(0,&DAT_10006750,0);
  EnableUnit(0,&DAT_10006758,0);
  EnableUnit(0,&DAT_10006760,0);
  EnableUnit(0,&DAT_10006768,0);
  EnableUnit(0,&DAT_10006770,0);
  EnableUnit(0,&DAT_10006778,0);
  EnableUnit(0,&DAT_10006780,0);
  EnableUnit(0,&DAT_10006788,0);
  EnableUnit(0,&DAT_10006798,0);
  EnableUnit(0,&DAT_100067a8,0);
  EnableUnit(0,&DAT_10006790,0);
  EnableUnit(0,&DAT_100067a0,0);
  EnableUnit(0,&DAT_100067b0,0);
  EnableUnit(0,&DAT_100067c0,0);
  EnableUnit(0,&DAT_100067d0,0);
  EnableUnit(0,&DAT_100067e0,0);
  EnableUnit(0,&DAT_100067f0,0);
  EnableUnit(0,&DAT_10006800,0);
  EnableUnit(0,&DAT_10006810,0);
  EnableUnit(0,&DAT_100067b8,0);
  EnableUnit(0,&DAT_100067c8,0);
  EnableUnit(0,&DAT_100067d8,0);
  EnableUnit(0,&DAT_100067e8,0);
  EnableUnit(0,&DAT_100067f8,0);
  EnableUnit(0,&DAT_10006808,0);
  EnableUnit(0,&DAT_10006818,0);
  DisableUpgrade(0,&DAT_10006858);
  DisableUpgrade(0,&DAT_10006690);
  DisableUpgrade(0,&DAT_10006850);
  cVar1 = Trigg(0x16);
  if (cVar1 != '\0') {
    uVar3 = FUN_100019c0(5,0,&DAT_10006718,&DAT_10006838,&DAT_10006820,"#PAGE15",5000,0,0,0
                         ,0,0);
    SetTrigg(0x16,0);
  }
  cVar1 = Trigg(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), pcVar6 = (void*)&ShowPage, cVar1 != '\0')) {
    SetTrigg(0x5c,0);
    ShowPage("#PAGE12");
  }
  cVar1 = Trigg(0x5f);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100066c8,0), iVar2 == 0)) {
    SetTrigg(0x5f,0);
    ShowPage("#PAGE11");
    LooseGame();
  }
  cVar1 = Trigg(0x5e);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006710,1), iVar2 == 0)) {
    SetTrigg(0x5e,0);
    ShowPage("#PAGE10");
    ShowVictory();
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
