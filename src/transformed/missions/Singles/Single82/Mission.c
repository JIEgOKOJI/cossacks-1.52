#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_100061b0[] = "Zmon";
char DAT_100061b8[] = "Zm";
char DAT_100061bc[] = "Zc";
char DAT_100061d0[] = "Zder";
char DAT_10006218[] = "Gpop";
char DAT_10006220[] = "Gc";
char DAT_10006244[] = "Gder";
long long DAT_100067a0 = 0;
long long DAT_100067a8 = 0;
long long DAT_100067b0 = 0;
long long DAT_100067b8 = 0;
int DAT_100067c0 = 0;
int DAT_100067c4 = 0;
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
long long DAT_10006860 = 0;
long long DAT_10006868 = 0;
long long DAT_10006870 = 0;
long long DAT_10006878 = 0;
long long DAT_10006880 = 0;
long long DAT_10006888 = 0;
long long DAT_100068a8 = 0;
long long DAT_100068b0 = 0;
long long DAT_100068b8 = 0;
long long DAT_100068c0 = 0;
long long DAT_100068c8 = 0;
long long DAT_100068d0 = 0;
long long DAT_100068d8 = 0;
long long DAT_100068e0 = 0;
long long DAT_100068e8 = 0;
long long DAT_100068f0 = 0;
long long DAT_100068f8 = 0;
long long DAT_10006900 = 0;
long long DAT_10006908 = 0;
long long DAT_10006910 = 0;
long long DAT_10006918 = 0;
long long DAT_10006920 = 0;
long long DAT_10006928 = 0;
long long DAT_10006930 = 0;
long long DAT_10006938 = 0;
long long DAT_10006940 = 0;
long long DAT_10006948 = 0;
long long DAT_10006950 = 0;
long long DAT_10006958 = 0;
long long DAT_10006960 = 0;
long long DAT_10006968 = 0;
long long DAT_10006970 = 0;
long long DAT_10006978 = 0;
long long DAT_10006980 = 0;
long long DAT_10006988 = 0;

/* Forward declarations */
int FUN_10001000(void);


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
                    
  RegisterUnits(&DAT_10006948,"Ggate");
  RegisterUnits(&DAT_10006910,"Ggate1");
  RegisterUnits(&DAT_10006900,"Ggate2");
  RegisterUnits(&DAT_10006950,DAT_10006244);
  RegisterUnits(&DAT_10006878,"Gbaraks");
  RegisterUnits(&DAT_100067b8,"Gbaraks18");
  RegisterUnits(&DAT_100068c0,"Gstables");
  RegisterUnits(&DAT_10006868,DAT_10006220);
  RegisterUnits(&DAT_10006988,DAT_10006218);
  RegisterUnitType(&DAT_100068a8,"Kirasir(fr)");
  RegisterUnitType(&DAT_100068e0,"Strelec_France(fr)");
  RegisterUnitType(&DAT_10006848,"Korolrv_Mus(fr)");
  RegisterFormation(&DAT_10006850,"#TRI3");
  RegisterFormation(&DAT_10006858,"#LINE3");
  RegisterZone(&DAT_100067a0,DAT_100061d0);
  RegisterZone(&DAT_100068b0,"Zder1");
  RegisterZone(&DAT_100068b8,"Zder2");
  RegisterZone(&DAT_10006880,DAT_100061bc);
  RegisterZone(&DAT_10006888,DAT_100061b8);
  RegisterZone(&DAT_100067f8,DAT_100061b0);
  RegisterZone(&DAT_10006860,"Zmon1");
  RegisterZone(&DAT_10006968,"Zfort1");
  RegisterZone(&DAT_10006970,"Zfort2");
  RegisterZone(&DAT_100067d8,"Zpyt1_1");
  RegisterZone(&DAT_100067e0,"Zpyt1_2");
  RegisterZone(&DAT_100067e8,"Zpyt1_3");
  RegisterZone(&DAT_100067f0,"Zpyt1_4");
  RegisterZone(&DAT_10006800,"Zpyt1_5");
  RegisterZone(&DAT_10006808,"Zpyt1_6");
  RegisterZone(&DAT_100067d0,"Zpyt1_7");
  RegisterZone(&DAT_10006818,"Zpyt2_1");
  RegisterZone(&DAT_10006820,"Zpyt2_2");
  RegisterZone(&DAT_10006828,"Zpyt2_3");
  RegisterZone(&DAT_10006830,"Zpyt2_4");
  RegisterZone(&DAT_10006838,"Zpyt2_5");
  RegisterZone(&DAT_10006840,"Zpyt2_6");
  RegisterZone(&DAT_10006810,"Zpyt2_7");
  RegisterUnitType(&DAT_10006870,"Pushka_mnogostvolka(PI)");
  RegisterUnitType(&DAT_100068d0,"Kreposnoi_portugal(PI)");
  RegisterUnitType(&DAT_100068d8,"WALL_EV(PI)");
  RegisterUnitType(&DAT_100068e8,"Center_France(fr)");
  RegisterUnitType(&DAT_100068f0,"Kuznica_FR(fr)");
  RegisterUnitType(&DAT_100068f8,"Konushnia_FR(fr)");
  RegisterUnitType(&DAT_10006908,"akademia_FR(fr)");
  RegisterUnitType(&DAT_10006918,"Dip_korpus_FR(fr)");
  RegisterUnitType(&DAT_10006920,"Kazarma_1_FR(fr)");
  RegisterUnitType(&DAT_10006928,"artileri_depo_FR(fr)");
  RegisterUnitType(&DAT_10006930,"WALL_EV(fr)");
  RegisterUnitType(&DAT_10006938,"Bashnia(fr)");
  RegisterUnitType(&DAT_10006940,"Rinok(fr)");
  RegisterDynGroup(&DAT_10006978);
  RegisterVar(&DAT_10006978,8);
  RegisterDynGroup(&DAT_100067b0);
  RegisterVar(&DAT_100067b0,8);
  RegisterDynGroup(&DAT_10006960);
  RegisterVar(&DAT_10006960,8);
  RegisterDynGroup(&DAT_10006980);
  RegisterVar(&DAT_10006980,8);
  RegisterDynGroup(&DAT_100067a8);
  RegisterVar(&DAT_100067a8,8);
  RegisterDynGroup(&DAT_10006958);
  RegisterVar(&DAT_10006958,8);
  RegisterDynGroup(&DAT_100068c8);
  RegisterVar(&DAT_100068c8,8);
  SetPlayerName(1,"FRANCE");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(2,"FRANCE");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  void *pcVar4;
  void *pcVar5;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    DisableMission(0x42);
    DisableMission(0x44);
    DisableMission(0x45);
    InitialUpgrade(DAT_10006220,"MAINFR");
    SetTrigg(5,0);
    SetTrigg(6,0);
    uVar2 = FUN_10001000();
    RunTimer(1,uVar2);
    uVar2 = FUN_10001000();
    RunTimer(2,uVar2);
    RunTimer(3,1000);
    RunTimer(4,1000);
    RunTimer(5,500);
    RunTimer(6,500);
    iVar3 = FUN_10001000();
    RunTimer(10,iVar3 + 10000);
    iVar3 = FUN_10001000();
    RunTimer(0xb,iVar3 + 15000);
    iVar3 = FUN_10001000();
    RunTimer(0xc,iVar3 + 20000);
    iVar3 = FUN_10001000();
    RunTimer(0xd,iVar3 + 25000);
    iVar3 = FUN_10001000();
    RunTimer(0xe,iVar3 + 30000);
    iVar3 = FUN_10001000();
    RunTimer(0xf,iVar3 + 35000);
    iVar3 = FUN_10001000();
    RunTimer(0x10,iVar3 + 40000);
    iVar3 = FUN_10001000();
    RunTimer(0x11,iVar3 + 45000);
    ChangeFriends(2,0x22);
    ChangeFriends(1,0x22);
    ChangeFriends(0,0x11);
    ChangeFriends(4,0x11);
    SelectUnits(&DAT_10006910,0);
    SelOpenGates(2);
    SelectUnits(&DAT_10006900,0);
    SelOpenGates(2);
    SetLightSpot(&DAT_100067a0,1,1);
    SetLightSpot(&DAT_100067f8,1,2);
    SetStartPoint(&DAT_100067a0);
    SetDestPoint(&DAT_100068c0,&DAT_10006968);
    SetDestPoint(&DAT_10006878,&DAT_10006968);
    SetDestPoint(&DAT_100067b8,&DAT_10006970);
    SelectUnits(&DAT_10006868,0);
    Patrol(2,&DAT_10006880,0xa0);
    ClearSelection(2);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      SetResource(0,3,20000);
      SetResource(0,1,10000);
      SetResource(0,4,12000);
      SetResource(0,5,12000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      CreateObject0(&DAT_100068c8,&DAT_10006858,&DAT_10006870,0,&DAT_10006888,0xc0);
      DAT_100067c0 = 3;
      DAT_100067c4 = 4;
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 1) {
      SetResource(0,3,10000);
      SetResource(0,1,7000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      DAT_100067c0 = 4;
      DAT_100067c4 = 6;
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 2) {
      SetResource(0,3,7000);
      SetResource(0,1,5000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      DAT_100067c0 = 5;
      DAT_100067c4 = 8;
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      SetResource(0,3,5000);
      SetResource(0,1,4000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      DAT_100067c0 = 6;
      DAT_100067c4 = 10;
    }
    EnableUnit(0,&DAT_100068d0,0);
    EnableUnit(0,&DAT_100068d8,0);
    EnableUnit(0,&DAT_100068e8,0);
    EnableUnit(0,&DAT_100068f0,0);
    EnableUnit(0,&DAT_100068f8,0);
    EnableUnit(0,&DAT_10006908,0);
    EnableUnit(0,&DAT_10006918,0);
    EnableUnit(0,&DAT_10006920,0);
    EnableUnit(0,&DAT_10006928,0);
    EnableUnit(0,&DAT_10006930,0);
    EnableUnit(0,&DAT_10006938,0);
    EnableUnit(0,&DAT_10006940,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_100067a0,2), iVar3 == 0)) {
    SetTrigg(2,0);
    ShowPage("#PAGE5");
    SelectUnits(&DAT_10006950,0);
    SelChangeNation(4,0);
    ClearLightSpot(1);
    EnableMission(0x42);
    DisableMission(0x41);
    EnableMission(0x45);
    EnableUnit(0,&DAT_100068d0,1);
    SetResource(1,3,5000);
    SetResource(1,1,5000);
    SetResource(1,4,10000);
    SetResource(1,5,10000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetTrigg(5,1);
    SetTrigg(6,1);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      StartAI(1,"FRANCE.0",0,1,1,1);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 1) {
      StartAI(1,"FRANCE.0",0,1,1,2);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 2) {
      StartAI(1,"FRANCE.0",0,1,1,3);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      StartAI(1,"FRANCE.0",0,1,1,3);
    }
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(4,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE4");
    ShowVictory();
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(5,0);
    SetTrigg(7,1);
    uVar2 = FUN_10001000();
    RunTimer(5,uVar2);
    iVar3 = 0;
    if (0 < DAT_100067c0) {
      do {
        ProduceUnitFast(&DAT_100068c0,&DAT_10006848,&DAT_10006978,6);
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_100067c0);
    }
    uVar2 = FUN_10001000();
    RunTimer(1,uVar2);
    iVar3 = 0;
    if (0 < DAT_100067c0) {
      do {
        EnableUnit(2,&DAT_100068a8,1);
        ProduceUnitFast(&DAT_10006878,&DAT_100068a8,&DAT_100067b0,6);
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_100067c0);
    }
    DAT_100067c0 = DAT_100067c0 + 1;
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(6,0);
    SetTrigg(8,1);
    uVar2 = FUN_10001000();
    RunTimer(6,uVar2);
    iVar3 = 0;
    if (0 < DAT_100067c4) {
      do {
        ProduceUnitFast(&DAT_100067b8,&DAT_100068e0,&DAT_10006960,5);
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_100067c4);
    }
    uVar2 = FUN_10001000();
    RunTimer(2,uVar2);
    DAT_100067c4 = DAT_100067c4 + 1;
  }
  cVar1 = Trigg(7);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), pcVar4 = (void*)&SelectUnits, cVar1 == '\0')) &&
     (cVar1 = TimerDone(5), pcVar4 = (void*)&SelectUnits, cVar1 != '\0')) {
    SetTrigg(7,0);
    SelectUnits(&DAT_10006978,0);
    SelectUnits(&DAT_100067b0,1);
    SelSendAndKill(2,&DAT_100067d8,0x40,0);
    SelSendAndKill(2,&DAT_100067e0,0x60,2);
    SelSendAndKill(2,&DAT_100067e8,0x80,2);
    SelSendAndKill(2,&DAT_100067f0,0x40,2);
    SelSendAndKill(2,&DAT_10006800,0x20,2);
    SelSendAndKill(2,&DAT_10006808,0xa0,2);
    SelSendAndKill(2,&DAT_100067d0,0x60,2);
    RemoveGroup(&DAT_10006978,&DAT_10006980);
    RemoveGroup(&DAT_100067b0,&DAT_100067a8);
    SetTrigg(5,1);
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) &&
     (cVar1 = TimerDone(6), cVar1 != '\0')) {
    SetTrigg(8,0);
    SelectUnits(&DAT_10006960,0);
    SelSendAndKill(2,&DAT_10006818,0x80,0);
    SelSendAndKill(2,&DAT_10006820,0x80,2);
    SelSendAndKill(2,&DAT_10006828,0x70,2);
    SelSendAndKill(2,&DAT_10006830,0x70,2);
    SelSendAndKill(2,&DAT_10006838,0x70,2);
    SelSendAndKill(2,&DAT_10006840,0x80,2);
    SelSendAndKill(2,&DAT_10006810,0x40,2);
    RemoveGroup(&DAT_10006960,&DAT_10006958);
    SetTrigg(6,1);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_100067f8,&DAT_10006988), iVar3 != 0)) {
    SetTrigg(9,0);
    SelectUnits(&DAT_10006948,0);
    SelOpenGates(4);
    ShowPage("#PAGE6");
    DisableMission(0x43);
    EnableMission(0x44);
    ClearLightSpot(2);
    AddResource(0,1,4000);
    SelectUnits(&DAT_10006988,0);
    SelChangeNation(0,4);
    SelectUnits(&DAT_10006988,0);
    SelSendTo(4,&DAT_10006860,0x60,0);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(10), pcVar4 = (void*)&InitialUpgrade, cVar1 != '\0')) {
    SetTrigg(10,0);
    InitialUpgrade(DAT_10006220,"Strelec_France(fr)ATTACK");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)ATTACK");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)SHIELD");
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xb), cVar1 != '\0')) {
    SetTrigg(0xb,0);
    InitialUpgrade(DAT_10006220,"Strelec_France(fr)ATTACK3");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)ATTACK3");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)SHIELD3");
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xc), cVar1 != '\0')) {
    SetTrigg(0xc,0);
    InitialUpgrade(DAT_10006220,"Strelec_France(fr)ATTACK4");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)ATTACK4");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)SHIELD4");
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xd), cVar1 != '\0')) {
    SetTrigg(0xd,0);
    InitialUpgrade(DAT_10006220,"Strelec_France(fr)ATTACK5");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)ATTACK5");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)SHIELD5");
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xe), cVar1 != '\0')) {
    SetTrigg(0xe,0);
    InitialUpgrade(DAT_10006220,"Strelec_France(fr)ATTACK6");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)ATTACK6");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)SHIELD6");
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xf), cVar1 != '\0')) {
    SetTrigg(0xf,0);
    InitialUpgrade(DAT_10006220,"Strelec_France(fr)ATTACK7");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)ATTACK7");
    InitialUpgrade(DAT_10006220,"Kirasir(fr)SHIELD7");
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x10), cVar1 != '\0')) {
    SetTrigg(0x10,0);
    InitialUpgrade(DAT_10006220,"AKA31FR");
    InitialUpgrade(DAT_10006220,"AKA34FR");
    InitialUpgrade(DAT_10006220,"AKA15FR");
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x11), cVar1 != '\0')) {
    SetTrigg(0x11,0);
    InitialUpgrade(DAT_10006220,"KUZ05FR");
    InitialUpgrade(DAT_10006220,"KUZ06FR");
    InitialUpgrade(DAT_10006220,"AKA33FR");
    InitialUpgrade(DAT_10006220,"AKA14FR");
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
