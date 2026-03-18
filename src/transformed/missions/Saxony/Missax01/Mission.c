#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006074[] = "Z1";
char DAT_1000609c[] = "Zm1";
char DAT_100060a0[] = "Zm";
char DAT_100061b8[] = "Gm";
char DAT_100061c4[] = "Gart";
char DAT_10006250[] = "Gotr";
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
long long DAT_10006860 = 0;
long long DAT_10006868 = 0;
long long DAT_10006870 = 0;
long long DAT_10006878 = 0;
long long DAT_10006880 = 0;
long long DAT_10006888 = 0;
long long DAT_10006890 = 0;
long long DAT_10006898 = 0;
long long DAT_100068a0 = 0;
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006870,"Gkomandir");
  RegisterUnits(&DAT_10006940,"Gkomandirtam");
  RegisterUnits(&DAT_10006800,"GkomandirForta1");
  RegisterUnits(&DAT_10006828,"Gperes");
  RegisterUnits(&DAT_100067d8,"Gzasada");
  RegisterUnits(&DAT_100067b0,"Gotrperes");
  RegisterUnits(&DAT_10006950,DAT_10006250);
  RegisterUnits(&DAT_10006900,"Gpogr1");
  RegisterUnits(&DAT_100068f8,"Gpogr2");
  RegisterUnits(&DAT_100068a8,"Gvorotatam1");
  RegisterUnits(&DAT_100068b0,"Gvorotatam2");
  RegisterUnits(&DAT_100067f8,"GkomandirForta2");
  RegisterUnits(&DAT_10006810,"GkomandirForta3");
  RegisterUnits(&DAT_10006808,"GkomandirForta4");
  RegisterUnits(&DAT_10006848,"Gpikmen");
  RegisterUnits(&DAT_10006928,"Gloshadi");
  RegisterUnits(&DAT_100067c0,"Gloshadis");
  RegisterUnits(&DAT_10006830,"Grazboyniki");
  RegisterUnits(&DAT_100068d0,DAT_100061c4);
  RegisterUnits(&DAT_100067b8,"Gotrsm");
  RegisterUnits(&DAT_10006838,DAT_100061b8);
  RegisterUnits(&DAT_100067c8,"Gselor");
  RegisterUnits(&DAT_100068e8,"Gvorota1");
  RegisterUnits(&DAT_100068f0,"Gvorota2");
  RegisterUnits(&DAT_100068d8,"Gvorota3");
  RegisterUnits(&DAT_100068e0,"Gvorota4");
  RegisterUnits(&DAT_100067d0,"Gflots");
  RegisterUnits(&DAT_100068a0,"Gflotor");
  RegisterUnits(&DAT_100068c8,"Graboch1");
  RegisterUnits(&DAT_100068c0,"Graboch2");
  RegisterUnits(&DAT_100068b8,"Graboch3");
  RegisterUnits(&DAT_100067f0,"Gbelvorota");
  RegisterZone(&DAT_10006880,"Ztamog");
  RegisterZone(&DAT_10006930,"Ztamog1");
  RegisterZone(&DAT_100067e0,"Zpogr1");
  RegisterZone(&DAT_100067e8,"Zpogr2");
  RegisterZone(&DAT_10006860,"Zfortarazb");
  RegisterZone(&DAT_10006890,"Zfdlykr");
  RegisterZone(&DAT_10006858,"Zzasada");
  RegisterZone(&DAT_10006920,"Zforta1");
  RegisterZone(&DAT_10006908,"Zforta2");
  RegisterZone(&DAT_10006910,"Zforta3");
  RegisterZone(&DAT_10006918,"Zforta4");
  RegisterZone(&DAT_100067a0,"Zperedvorot1");
  RegisterZone(&DAT_10006790,"Zperedvorot2");
  RegisterZone(&DAT_10006798,"Zperedvorot3");
  RegisterZone(&DAT_100067a8,"Zperedvorot4");
  RegisterZone(&DAT_10006850,DAT_100060a0);
  RegisterZone(&DAT_10006938,DAT_1000609c);
  RegisterZone(&DAT_10006878,"Zperedperes");
  RegisterZone(&DAT_10006820,"Zpobeda");
  RegisterZone(&DAT_10006888,"Zflots");
  RegisterZone(&DAT_10006948,"Zflotor");
  RegisterZone(&DAT_10006840,DAT_10006074);
  RegisterUnitType(&DAT_10006868,"Kreposnoi_pruss(SA)");
  RegisterFormation(&DAT_10006898,"#LINE40PUS");
  RegisterVar(&DAT_10006818,8);
  SetPlayerName(1,"SVEDES");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"ROBBERS");
  SetPlayerName(6,"NEUTRALS");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  void *pcVar3;
  void *pcVar4;
  
                    
  cVar1 = Trigg(0x15);
  if (cVar1 != '\0') {
    SetTrigg(0x15,0);
    CreateObject0(&DAT_10006818,&DAT_10006898,&DAT_10006868,4,&DAT_10006890,0xe1);
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    TakeFood(&DAT_100068c8);
    TakeFood(&DAT_100068c0);
    TakeFood(&DAT_100068b8);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,40000);
      SetResource(0,1,30000);
      SetResource(0,4,30000);
      SetResource(0,5,30000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK4");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK5");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK6");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD4");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD5");
      InitialUpgrade("Gkomandir","Dragun(SA)ATTACK");
      InitialUpgrade("Gkomandir","Dragun(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Dragun(SA)ATTACK4");
      InitialUpgrade("Gkomandir","Dragun(SA)ATTACK5");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,30000);
      SetResource(0,1,20000);
      SetResource(0,4,20000);
      SetResource(0,5,20000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gkomandir","Dragun(SA)ATTACK");
      InitialUpgrade("Gkomandir","Dragun(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK4");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD4");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,20000);
      SetResource(0,1,15000);
      SetResource(0,4,15000);
      SetResource(0,5,15000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Dragun(SA)ATTACK");
      InitialUpgrade("Gkomandir","Dragun(SA)ATTACK3");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,12000);
      SetResource(0,1,14000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,0);
      SetResource(0,2,0);
    }
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,4,5000000);
    SetResource(1,2,5000000);
    SetResource(1,0,5000000);
    SetResource(1,5,5000);
    SetResource(4,3,5000000);
    SetResource(4,1,5000000);
    SetResource(4,4,5000000);
    SetResource(4,2,5000000);
    SetResource(4,0,5000000);
    SetResource(4,5,5000000);
    SetResource(5,3,5000000);
    SetResource(5,1,5000000);
    SetResource(5,4,5000000);
    SetResource(5,2,500000);
    SetResource(5,0,5000000);
    SetResource(5,5,5000000);
    SetResource(6,3,5000000);
    SetResource(6,1,5000000);
    SetResource(6,4,5000000);
    SetResource(6,2,5000000);
    SetResource(6,0,5000000);
    SetResource(6,5,5000000);
    ShowPage("#PAGE1");
    ChangeFriends(0,0x41);
    ChangeFriends(4,0x11);
    ChangeFriends(1,0x12);
    ChangeFriends(6,0x41);
    SetLightSpot(&DAT_10006890,1,1);
    SelectUnits(&DAT_100067b0,0);
    SetStandGround(1,1);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006920,&DAT_10006870), 0 < iVar2)) {
    SetTrigg(2,0);
    ShowPage("#PAGE2");
    SelectUnits(&DAT_10006848,0);
    SelChangeNation(4,0);
    SelSendTo(0,&DAT_10006920,0x1e,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006908,&DAT_10006870), 0 < iVar2)) {
    SetTrigg(3,0);
    iVar2 = AskMultilineQuestion(9,"#PAGE3",0,"Qf2_1|Qf2_2");
    if (iVar2 == 0) {
      AddResource(0,1,0xfffff448);
      SelectUnits(&DAT_10006928,0);
      SelChangeNation(4,0);
      SelectUnits(&DAT_10006928,0);
      SelSendTo(0,&DAT_10006908,0x1e,0);
    }
    else if (iVar2 == 1) {
      SelectUnits(&DAT_100067f8,0);
      SelSendTo(4,&DAT_10006908,0xf0,0);
    }
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006910,&DAT_10006870), 0 < iVar2)) &&
     (iVar2 = GetUnitsByNation(&DAT_10006830,5), 0 < iVar2)) {
    SetTrigg(4,0);
    ShowPage("#PAGE5");
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsByNation(&DAT_10006830,5), pcVar3 = (void*)&ShowPage, iVar2 == 0)) {
    SetTrigg(5,0);
    SelectUnits(&DAT_100067c8,0);
    SelDie(5);
    ShowPage("#PAGE6");
  }
  cVar1 = Trigg(0x21);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 != '\0')) &&
     ((cVar1 = Trigg(5), cVar1 == '\0' &&
      (iVar2 = GetUnitsAmount1(&DAT_10006910,&DAT_10006870), 0 < iVar2)))) {
    SetTrigg(0x21,0);
    ShowPage("#PAGE7");
    SelectUnits(&DAT_100067c0,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_100067c0,0);
    SelSendTo(0,&DAT_10006798,0,0);
    SetTrigg(6,0);
  }
  cVar1 = Trigg(6);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount1(&DAT_10006910,&DAT_10006870), 0 < iVar2)) {
    SetTrigg(6,0);
    ShowPage("#PAGE7");
    SelectUnits(&DAT_100067c0,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_100067c0,0);
    SelSendTo(0,&DAT_10006798,0,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount0(&DAT_10006850,0), 2 < iVar2 ||
      (iVar2 = GetUnitsAmount1(&DAT_10006850,&DAT_10006870), 0 < iVar2)))) {
    SetTrigg(7,0);
    SetStartPoint(&DAT_10006850);
    iVar2 = AskMultilineQuestion(9,"#PAGE8",0,"Qf3_1|Qf3_2|Qf3_3");
    if (iVar2 == 0) {
      SelectUnits(&DAT_10006838,0);
      SelChangeNation(4,0);
      AddResource(0,1,0xffffec78);
      SelectUnits(&DAT_100067b8,0);
      SelSendTo(4,&DAT_10006798,0,0);
    }
    else if (iVar2 == 1) {
      SelectUnits(&DAT_10006838,0);
      SelectUnits(&DAT_100067b8,1);
      SelSendTo(4,&DAT_100067a0,0x40,0);
    }
    else if (iVar2 == 2) {
      SelectUnits(&DAT_100067b8,0);
      SelectUnits(&DAT_10006838,1);
      SelChangeNation(4,1);
    }
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006918,&DAT_10006870), 0 < iVar2)) {
    SetTrigg(8,0);
    ShowPage("#PAGE9");
    SelectUnits(&DAT_100068d0,0);
    SelectUnits(&DAT_10006808,1);
    SelChangeNation(4,0);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_100067a0,&DAT_10006870), pcVar3 = (void*)&GetUnitsAmount0,
      iVar2 != 0 || (iVar2 = GetUnitsAmount0(&DAT_100067a0,0), 0 < iVar2)))) {
    SelectUnits(&DAT_100068e8,0);
    SelOpenGates(4);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_10006790,&DAT_10006870), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount0(&DAT_10006790,0), 0 < iVar2)))) {
    SelectUnits(&DAT_100068f0,0);
    SelOpenGates(4);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_10006798,&DAT_10006870), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount0(&DAT_10006798,0), 0 < iVar2)))) {
    SelectUnits(&DAT_100068d8,0);
    SelOpenGates(4);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_100067a8,&DAT_10006870), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount0(&DAT_100067a8,0), 0 < iVar2)))) {
    SetTrigg(0xc,0);
    SelectUnits(&DAT_100068e0,0);
    SelOpenGates(4);
  }
  cVar1 = Trigg(0xd);
  if (((cVar1 != '\0') && (cVar1 = Trigg(9), cVar1 == '\0')) &&
     ((iVar2 = GetUnitsAmount1(&DAT_100067a0,&DAT_10006870), iVar2 == 0 ||
      (iVar2 = GetUnitsAmount0(&DAT_100067a0,0), iVar2 == 0)))) {
    SelectUnits(&DAT_100068e8,0);
    SelCloseGates(4);
    SetTrigg(9,1);
  }
  cVar1 = Trigg(0xe);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     ((iVar2 = GetUnitsAmount1(&DAT_10006790,&DAT_10006870), iVar2 == 0 ||
      (iVar2 = GetUnitsAmount0(&DAT_10006790,0), iVar2 == 0)))) {
    SelectUnits(&DAT_100068f0,0);
    SelCloseGates(4);
    SetTrigg(10,1);
  }
  cVar1 = Trigg(0xf);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0xb), cVar1 == '\0')) &&
     ((iVar2 = GetUnitsAmount1(&DAT_10006798,&DAT_10006870), iVar2 == 0 ||
      (iVar2 = GetUnitsAmount0(&DAT_10006790,0), iVar2 == 0)))) {
    SelectUnits(&DAT_100068d8,0);
    SelCloseGates(4);
    SetTrigg(0xb,1);
  }
  cVar1 = Trigg(0x5d);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x1f), cVar1 != '\0')) {
    SetTrigg(0x5d,0);
    SelectUnits(&DAT_10006940,0);
    SelSendTo(6,&DAT_10006840,0x50,0);
    SelectUnits(&DAT_100068b0,0);
    SelOpenGates(6);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount0(&DAT_10006880,0), 10 < iVar2 ||
      (iVar2 = GetUnitsAmount1(&DAT_10006880,&DAT_10006870), 0 < iVar2)))) {
    SetTrigg(0x11,0);
    cVar1 = AskQuestion("#PAGE10");
    if (cVar1 == '\0') {
      ShowPage("#PAGE20");
      SelectUnits(&DAT_100068a8,0);
      SelOpenGates(6);
      SelectUnits(&DAT_10006900,0);
      SelChangeNation(6,1);
      SelectUnits(&DAT_100068f8,0);
      SelSendAndKill(1,&DAT_10006930,0x32,0);
      SelectUnits(&DAT_100068f8,0);
      SelChangeNation(6,1);
      SelectUnits(&DAT_100068f8,0);
      SelSendAndKill(1,&DAT_10006930,0x32,0);
      SelectUnits(&DAT_100067f0,0);
      SelChangeNation(6,1);
    }
    else {
      SelectUnits(&DAT_10006900,0);
      SelSendTo(6,&DAT_100067e0,0x5f,0);
      SelectUnits(&DAT_100068f8,0);
      SelSendTo(6,&DAT_100067e8,0xf0,0);
      AddResource(0,1,0xffffec78);
      SelectUnits(&DAT_100068a8,0);
      SelOpenGates(6);
      RunTimer(0x1f,600);
    }
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006950,1), iVar2 == 0)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006890,0), 0 < iVar2)) {
    SetTrigg(0x14,0);
    ShowPage("#PAGE13");
    SelectUnits(&DAT_10006818,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_100067d8,0);
    SelSendTo(1,&DAT_10006858,0x4b,0);
    RunTimer(0x14,400);
    DisableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x43);
    SetLightSpot(&DAT_10006820,3,8);
  }
  cVar1 = Trigg(0x16);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x14), cVar1 == '\0')) &&
     ((iVar2 = GetUnitsByNation(&DAT_100067b0,1), iVar2 == 0 &&
      (iVar2 = GetUnitsAmount0(&DAT_10006878,0), 3 < iVar2)))) {
    SetTrigg(0x16,0);
    ShowPage("#PAGE15");
    SelectUnits(&DAT_10006828,0);
    SelChangeNation(1,0);
    RunTimer(0x16,1000);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x14), cVar1 != '\0')) {
    SetTrigg(0x17,0);
    ShowPage("#PAGE14");
    SetStartPoint(&DAT_10006858);
    SetLightSpot(&DAT_10006858,4,5);
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x16), cVar1 != '\0')) {
    SetTrigg(0x18,0);
    ChangeFriends(4,0x11);
    ChangeFriends(1,2);
    ChangeFriends(6,0x40);
    ChangeFriends(0,0x11);
    SelectUnits(&DAT_100067d0,0);
    SelSendAndKill(1,&DAT_10006888,0x32,0);
    SelectUnits(&DAT_100068a0,0);
    SelSendAndKill(4,&DAT_10006948,0xb4,0);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006820,&DAT_10006818), 7 < iVar2)) {
    SetTrigg(0x19,0);
    ShowPage("#PAGE18");
    ShowVictory();
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006870,0), iVar2 == 0)) {
    SetTrigg(0x1a,0);
    ShowPage("#PAGE16");
    LooseGame();
  }
  cVar1 = Trigg(0x1b);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x16), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10006818,0), iVar2 < 10)) {
    SetTrigg(0x1b,0);
    ShowPage("#PAGE17");
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
