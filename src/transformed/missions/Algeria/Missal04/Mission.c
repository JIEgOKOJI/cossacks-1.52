#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1000616c[] = "Z16";
char DAT_10006170[] = "Z10";
char DAT_10006174[] = "Z9";
char DAT_10006178[] = "Z8";
char DAT_1000617c[] = "Z7";
char DAT_10006180[] = "Z6";
char DAT_10006184[] = "Z5";
char DAT_10006188[] = "Z4";
char DAT_1000618c[] = "Z3";
char DAT_10006190[] = "Z2";
char DAT_10006194[] = "Z1";
char DAT_10006198[] = "G17";
char DAT_1000619c[] = "G16";
char DAT_100061a0[] = "G15";
char DAT_100061a4[] = "G14";
char DAT_100061a8[] = "G13";
char DAT_100061ac[] = "G12";
char DAT_100061b0[] = "G11";
char DAT_100061b4[] = "G10";
char DAT_100061b8[] = "G9B";
char DAT_100061bc[] = "G9A";
char DAT_100061c0[] = "G9";
char DAT_100061c4[] = "G8";
char DAT_100061c8[] = "G7";
char DAT_100061cc[] = "G6";
char DAT_100061d0[] = "G5";
char DAT_100061d4[] = "G4";
char DAT_100061d8[] = "G3";
char DAT_100061dc[] = "G2";
char DAT_100061e0[] = "G1";
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
long long DAT_100067e8 = 0;
long long DAT_100067f0 = 0;
long long DAT_100067f8 = 0;
long long DAT_10006800 = 0;
long long DAT_10006808 = 0;
long long DAT_10006818 = 0;

/* Forward declarations */
void FUN_100013b0(void);

void OnInit();
void ProcessScenary();


void FUN_100013b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetTotalAmount0(&DAT_100066f8);
  if (0 < iVar1) {
    iVar1 = GetKilled(&DAT_10006700);
    iVar2 = GetKilled(&DAT_100066f8);
    if (iVar1 <= iVar2) {
      iVar1 = GetKilled(&DAT_10006708);
      iVar2 = GetKilled(&DAT_100066f8);
      if (iVar1 <= iVar2) {
        iVar1 = GetKilled(&DAT_10006710);
        iVar2 = GetKilled(&DAT_100066f8);
        if (iVar1 < iVar2) {
          ShowPage("#PAGE4");
          InitialUpgrade(DAT_100061dc,"Pikiner_turki(AL)ATTACK");
          InitialUpgrade(DAT_100061dc,"Pikiner_turki(AL)SHIELD");
          return;
        }
      }
    }
  }
  iVar1 = GetTotalAmount0(&DAT_10006700);
  if (0 < iVar1) {
    iVar1 = GetKilled(&DAT_10006700);
    iVar2 = GetKilled(&DAT_100066f8);
    if (iVar2 <= iVar1) {
      iVar1 = GetKilled(&DAT_10006708);
      iVar2 = GetKilled(&DAT_10006700);
      if (iVar1 <= iVar2) {
        iVar1 = GetKilled(&DAT_10006710);
        iVar2 = GetKilled(&DAT_10006700);
        if (iVar1 < iVar2) {
          ShowPage("#PAGE5");
          InitialUpgrade(DAT_100061d8,"Pehota_turki(AL)ATTACK");
          InitialUpgrade(DAT_100061d8,"Pehota_turki(AL)SHIELD");
          return;
        }
      }
    }
  }
  iVar1 = GetTotalAmount0(&DAT_10006708);
  if (0 < iVar1) {
    iVar1 = GetKilled(&DAT_10006708);
    iVar2 = GetKilled(&DAT_100066f8);
    if (iVar2 <= iVar1) {
      iVar1 = GetKilled(&DAT_10006708);
      iVar2 = GetKilled(&DAT_10006700);
      if (iVar2 <= iVar1) {
        iVar1 = GetKilled(&DAT_10006710);
        iVar2 = GetKilled(&DAT_10006708);
        if (iVar1 < iVar2) {
          ShowPage("#PAGE6");
          InitialUpgrade(DAT_100061d4,"Ianithar(TU)ATTACK");
          InitialUpgrade(DAT_100061d4,"Ianithar(TU)SHIELD");
          return;
        }
      }
    }
  }
  iVar1 = GetTotalAmount0(&DAT_10006710);
  if (0 < iVar1) {
    iVar1 = GetKilled(&DAT_10006710);
    iVar2 = GetKilled(&DAT_100066f8);
    if (iVar2 <= iVar1) {
      iVar1 = GetKilled(&DAT_10006710);
      iVar2 = GetKilled(&DAT_10006700);
      if (iVar2 <= iVar1) {
        iVar1 = GetKilled(&DAT_10006710);
        iVar2 = GetKilled(&DAT_10006708);
        if (iVar2 < iVar1) {
          ShowPage("#PAGE7");
          InitialUpgrade(DAT_100061d0,"Mameluk(AL)ATTACK");
          InitialUpgrade(DAT_100061d0,"Mameluk(AL)SHIELD");
        }
      }
    }
  }
  return;
}





void OnInit(void)

{
  int iVar1;
  
                    
  RegisterUnits(&DAT_100066f0,DAT_100061e0);
  RegisterUnits(&DAT_100066f8,DAT_100061dc);
  RegisterUnits(&DAT_10006700,DAT_100061d8);
  RegisterUnits(&DAT_10006708,DAT_100061d4);
  RegisterUnits(&DAT_10006710,DAT_100061d0);
  RegisterUnits(&DAT_10006718,DAT_100061cc);
  RegisterUnits(&DAT_10006720,DAT_100061c8);
  RegisterUnits(&DAT_10006728,DAT_100061c4);
  RegisterUnits(&DAT_10006730,DAT_100061c0);
  RegisterUnits(&DAT_100067d0,DAT_100061bc);
  RegisterUnits(&DAT_100067d8,DAT_100061b8);
  RegisterUnits(&DAT_10006748,DAT_100061b4);
  RegisterUnits(&DAT_10006750,DAT_100061b0);
  RegisterUnits(&DAT_10006758,DAT_100061ac);
  RegisterUnits(&DAT_10006760,DAT_100061a8);
  RegisterUnits(&DAT_10006768,DAT_100061a4);
  RegisterUnits(&DAT_10006770,DAT_100061a0);
  RegisterUnits(&DAT_10006778,DAT_1000619c);
  RegisterUnits(&DAT_10006780,DAT_10006198);
  RegisterZone(&DAT_10006788,DAT_10006194);
  RegisterZone(&DAT_10006790,DAT_10006190);
  RegisterZone(&DAT_10006798,DAT_1000618c);
  RegisterZone(&DAT_100067a0,DAT_10006188);
  RegisterZone(&DAT_100067a8,DAT_10006184);
  RegisterZone(&DAT_100067b0,DAT_10006180);
  RegisterZone(&DAT_100067b8,DAT_1000617c);
  RegisterZone(&DAT_100067c0,DAT_10006178);
  RegisterZone(&DAT_100067c8,DAT_10006174);
  RegisterZone(&DAT_10006800,DAT_10006170);
  RegisterZone(&DAT_10006808,DAT_1000616c);
  RegisterVar(&DAT_10006738,8);
  RegisterVar(&DAT_10006740,8);
  RegisterVar(&DAT_10006818,8);
  RegisterUnitType(&DAT_100066a8,"Center_Algir(AL)");
  RegisterUnitType(&DAT_100066b0,"Dom_Algir(AL)");
  RegisterUnitType(&DAT_100066b8,"Rinok_Turki(AL)");
  RegisterUnitType(&DAT_100066c0,"Kuznia_Turki(AL)");
  RegisterUnitType(&DAT_100066c8,"Mechet_Turki(AL)");
  RegisterUnitType(&DAT_100066d0,"Minaret(AL)");
  RegisterUnitType(&DAT_100066d8,"Diplomatic_Turki(AL)");
  RegisterUnitType(&DAT_100066e0,"Barack_Turki(AL)");
  RegisterUnitType(&DAT_100066e8,"Konushnia_Turki(AL)");
  RegisterUnitType(&DAT_10006678,"Art_Depo_Turki(AL)");
  RegisterUnitType(&DAT_10006680,"Bashnia_3(AL)");
  RegisterUnitType(&DAT_10006688,"WALL_TU(AL)");
  RegisterUnitType(&DAT_10006690,"WALL_UKR(AL)");
  RegisterUnitType(&DAT_10006698,"Port(AL)");
  RegisterUnitType(&DAT_100066a0,"Melnica_tu(AL)");
  RegisterUnitType(&DAT_100067e8,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_100067f8,"SUNDUK1O(UN)");
  RegisterFormation(&DAT_100067f0,"#ALONE");
  ChangeFriends(0,0x21);
  ChangeFriends(1,2);
  ChangeFriends(5,0x22);
  SetPlayerName(1,"SPAIN");
  SetPlayerName(5,"NOMADS");
  iVar1 = GetDiff(0);
  if (0 < iVar1) {
    EnableUnit(0,&DAT_100066a8,0);
    EnableUnit(0,&DAT_100066b0,0);
    EnableUnit(0,&DAT_100066b8,0);
    EnableUnit(0,&DAT_100066c0,0);
    EnableUnit(0,&DAT_100066c8,0);
    EnableUnit(0,&DAT_100066d0,0);
    EnableUnit(0,&DAT_100066d8,0);
    EnableUnit(0,&DAT_100066e0,0);
    EnableUnit(0,&DAT_100066e8,0);
    EnableUnit(0,&DAT_10006678,0);
    EnableUnit(0,&DAT_10006680,0);
    EnableUnit(0,&DAT_10006688,0);
    EnableUnit(0,&DAT_10006690,0);
    EnableUnit(0,&DAT_10006698,0);
    EnableUnit(0,&DAT_100066a0,0);
  }
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pcVar4;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    CreateObject0(&DAT_10006738,&DAT_100067f0,&DAT_100067e8,5,&DAT_100067a8,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,(10 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,1,(5 - iVar2) * 200);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar2 = GetDiff(0);
    SetResource(0,5,iVar2 * -300 + 2000);
    iVar2 = GetDiff(0);
    SetResource(0,4,iVar2 * -300 + 2000);
    ShowPage("#PAGE0");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SelectUnits(&DAT_10006780,0);
      SelDie(1);
      SetResource(0,3,60000);
      SetResource(0,1,20000);
      SetResource(0,0,20000);
      SetResource(0,2,20000);
      SetResource(0,5,20000);
      SetResource(0,4,20000);
      SetLightSpot(&DAT_100067c0,2,2);
      SetLightSpot(&DAT_100067c8,2,3);
      SetLightSpot(&DAT_10006800,2,4);
    }
    TakeFood(&DAT_10006768);
    TakeStone(&DAT_10006770);
    SelectUnits(&DAT_100067d8,0);
    SelSendTo(1,&DAT_100067a0,0,0);
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsByNation(&DAT_10006718,0), pcVar4 = (void*)&ShowPage, 0 < iVar2)) {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ClearSelection(1);
    SelectUnits(&DAT_10006720,0);
    SelChangeNation(1,0);
    SelectUnits(&DAT_10006728,0);
    SelChangeNation(1,0);
    FUN_100013b0();
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ShowPage("#OTST1");
    }
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006718), iVar2 == 0)) {
    SetTrigg(1,0);
    ShowPage("#PAGE1A");
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006748,0), 0 < iVar2)) {
    SetTrigg(2,0);
    ShowPage("#PAGE2");
    ClearSelection(1);
    SelectUnits(&DAT_10006750,0);
    SelChangeNation(1,0);
    FUN_100013b0();
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006748), iVar2 == 0)) {
    SetTrigg(2,0);
    ShowPage("#PAGE2A");
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006758,0), 0 < iVar2)) {
    SetTrigg(3,0);
    ShowPage("#PAGE3");
    ClearSelection(1);
    SelectUnits(&DAT_10006760,0);
    SelChangeNation(1,0);
    FUN_100013b0();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006758), iVar2 == 0)) {
    SetTrigg(3,0);
    ShowPage("#PAGE3A");
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100066f0), iVar2 == 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE8");
    LooseGame();
  }
  cVar1 = Trigg(5);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(1), cVar1 == '\0')) && (cVar1 = Trigg(2), cVar1 == '\0'))
     && (cVar1 = Trigg(3), cVar1 == '\0')) {
    SetTrigg(5,0);
    ShowPage("#PAGE9");
    ShowVictory();
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100067b0,0), 0 < iVar2)) {
    SetTrigg(6,0);
    SelectUnits(&DAT_10006730,0);
    SelSendTo(1,&DAT_10006788,0x80,0);
    SelSendTo(1,&DAT_10006790,0xc4,2);
    SelSendTo(1,&DAT_10006798,0x80,2);
    SelSendTo(1,&DAT_100067a0,0x80,2);
    RunTimer(1,1);
  }
  cVar1 = Trigg(7);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) &&
     ((iVar2 = GetTotalAmount0(&DAT_10006730), 0 < iVar2 &&
      (iVar2 = GetTotalAmount0(&DAT_100067d0), 0 < iVar2)))) {
    CreateZoneNearGroup(&DAT_10006818,&DAT_100067b0,&DAT_10006730,100);
    SelectUnits(&DAT_100067d0,0);
    SelSendAndKill(1,&DAT_10006818,0x80,0);
    RunTimer(1,100);
  }
  cVar1 = Trigg(7);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_100067a0,&DAT_10006730);
    iVar3 = GetUnitsByNation(&DAT_10006730,1);
    if (((iVar2 == iVar3) && (iVar2 = GetUnitsByNation(&DAT_10006730,1), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_100067d8), 0 < iVar2)) {
      SetTrigg(7,0);
      SelectUnits(&DAT_10006730,0);
      SelectUnits(&DAT_100067d8,1);
      SendUnitsToTransport(1);
    }
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) {
    SelectUnits(&DAT_100067d8,0);
    iVar2 = GetUnitsByNation(&DAT_10006730,1);
    iVar3 = GetNInside(1);
    if (iVar3 == iVar2) {
      SetTrigg(8,0);
      SelectUnits(&DAT_100067d8,0);
      SelSendTo(1,&DAT_100067b8,0,0);
    }
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006730,0), 0 < iVar2)) {
    SetTrigg(10,0);
    ShowPage("#PAGE10");
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006730,0), 0 < iVar2)) {
    iVar2 = GetUnitsByNation(&DAT_10006730,0);
    iVar3 = GetTotalAmount0(&DAT_10006730);
    if ((iVar3 == iVar2) || (cVar1 = Trigg(8), cVar1 == '\0')) {
      SetTrigg(0xb,0);
      iVar2 = GetDiff(0);
      iVar3 = GetUnitsByNation(&DAT_10006730,0);
      ShowPageParam("#PAGE11",(5 - iVar2) * iVar3 * 200);
      iVar2 = GetDiff(0);
      iVar3 = GetUnitsByNation(&DAT_10006730,0);
      AddResource(0,4,(5 - iVar2) * iVar3 * 200);
    }
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100067a8,0), 0 < iVar2)) {
    SetTrigg(0xc,0);
    iVar2 = GetDiff(0);
    ShowPageParam("#PAGE12",iVar2 * -0x15e + 2000);
    iVar2 = GetDiff(0);
    AddResource(0,1,iVar2 * -0x15e + 2000);
    SelectUnits(&DAT_10006738,0);
    SelErase(5);
    CreateObject0(&DAT_10006740,&DAT_100067f0,&DAT_100067f8,5,&DAT_100067a8,0);
  }
  cVar1 = Trigg(0xd);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006778), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006808,0), 0 < iVar2)) {
    SetTrigg(0xd,0);
    cVar1 = AskQuestion("#PAGE13");
    if (cVar1 != '\0') {
      iVar2 = GetResource(0,1);
      if (iVar2 < 500) {
        ShowPage("#PAGE13B");
        ChangeFriends(0,1);
        AttackEnemyInZone(&DAT_10006778,&DAT_10006808,0);
        return;
      }
      AddResource(0,1,0xfffffe0c);
      ShowPage("#PAGE13A");
      SelectUnits(&DAT_10006778,0);
      SelChangeNation(5,0);
      return;
    }
    ShowPage("#PAGE13C");
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
