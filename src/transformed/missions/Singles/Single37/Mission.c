#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10007110[] = "Z9";
char DAT_10007114[] = "Z85";
char DAT_10007118[] = "Z84";
char DAT_1000711c[] = "Z83";
char DAT_10007120[] = "Z82";
char DAT_10007124[] = "Z81";
char DAT_10007128[] = "Z8A";
char DAT_1000712c[] = "Z8";
char DAT_10007130[] = "Z7A";
char DAT_10007134[] = "Z7";
char DAT_10007138[] = "Z5";
char DAT_1000713c[] = "Z4";
char DAT_10007140[] = "Z3";
char DAT_10007144[] = "Z2";
char DAT_10007148[] = "Z1";
char DAT_1000714c[] = "ZGen";
char DAT_10007154[] = "Z0";
char DAT_10007158[] = "G6K";
char DAT_1000715c[] = "G6M";
char DAT_10007160[] = "G6G";
char DAT_10007164[] = "GSt";
char DAT_10007168[] = "GBar";
char DAT_10007188[] = "G825";
char DAT_10007190[] = "G815";
char DAT_10007198[] = "G823";
char DAT_100071a0[] = "G813";
char DAT_100071a8[] = "G8";
char DAT_100071ac[] = "G7";
char DAT_100071b0[] = "G5";
char DAT_100071b4[] = "G4";
char DAT_100071b8[] = "G3";
char DAT_100071bc[] = "G2";
char DAT_100071c0[] = "G1";
char DAT_100071d0[] = "GOff";
char DAT_100071ec[] = "GS";
char DAT_100071f0[] = "GE";
long long DAT_10007650 = 0;
long long DAT_10007658 = 0;
long long DAT_10007660 = 0;
int DAT_10007668 = 0;
long long DAT_10007670 = 0;
long long DAT_10007678 = 0;
long long DAT_10007680 = 0;
long long DAT_10007688 = 0;
long long DAT_10007690 = 0;
long long DAT_10007698 = 0;
long long DAT_100076a0 = 0;
long long DAT_100076a8 = 0;
long long DAT_100076b0 = 0;
long long DAT_100076b8 = 0;
long long DAT_100076c0 = 0;
long long DAT_100076c8 = 0;
long long DAT_100076d0 = 0;
long long DAT_100076d8 = 0;
long long DAT_100076e0 = 0;
long long DAT_100076e8 = 0;
long long DAT_100076f0 = 0;
long long DAT_100076f8 = 0;
long long DAT_10007700 = 0;
long long DAT_10007708 = 0;
long long DAT_10007710 = 0;
long long DAT_10007718 = 0;
long long DAT_10007720 = 0;
long long DAT_10007728 = 0;
long long DAT_10007730 = 0;
long long DAT_10007738 = 0;
long long DAT_10007740 = 0;
long long DAT_10007748 = 0;
long long DAT_10007750 = 0;
long long DAT_10007758 = 0;
long long DAT_10007760 = 0;
long long DAT_10007768 = 0;
long long DAT_10007770 = 0;
long long DAT_10007778 = 0;
long long DAT_10007780 = 0;
int DAT_10007788 = 0;
long long DAT_10007790 = 0;
long long DAT_10007798 = 0;
long long DAT_100077a8 = 0;
long long DAT_100077b0 = 0;
long long DAT_100077b8 = 0;
long long DAT_100077c0 = 0;
long long DAT_100077c8 = 0;
long long DAT_100077d0 = 0;
long long DAT_100077d8 = 0;
long long DAT_100077e0 = 0;
long long DAT_100077e8 = 0;
long long DAT_100077f0 = 0;
long long DAT_100077f8 = 0;
long long DAT_10007800 = 0;
long long DAT_10007808 = 0;
long long DAT_10007810 = 0;
long long DAT_10007818 = 0;
long long DAT_10007820 = 0;
long long DAT_10007828 = 0;
long long DAT_10007830 = 0;
long long DAT_10007838 = 0;
long long DAT_10007840 = 0;
long long DAT_10007848 = 0;
long long DAT_10007850 = 0;
long long DAT_10007858 = 0;
long long DAT_10007860 = 0;
long long DAT_10007868 = 0;

/* Forward declarations */
int FUN_10001012(int param_1);
int FUN_10001030(int param_1,int param_2);
int FUN_1000105e(int param_1,int param_2,int param_3);
int FUN_1000108e(int param_1,int param_2);
void FUN_10001104(int param_1);

void OnInit();
void ProcessScenary();


int __cdecl FUN_10001012(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = GetUnitsByNation(param_1,iVar2);
    if (0 < iVar1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return iVar2;
}





int __cdecl FUN_10001030(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001012(param_1);
  SelectUnits(param_1,0);
  SelSendTo(iVar1,param_2,0x40,2);
  return iVar1;
}





int __cdecl FUN_1000105e(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_10001012(param_1);
  SelectUnits(param_1,0);
  SelSendAndKill(iVar1,param_2,param_3,2);
  return iVar1;
}





int __cdecl FUN_1000108e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001012(param_1);
  SelectUnits(param_1,0);
  SelSendAndKill(iVar1,param_2,0x40,2);
  return iVar1;
}







void __cdecl FUN_10001104(int param_1)

{
  char cVar1;
  
  if (0 < DAT_10007668) {
    FUN_1000108e(param_1,&DAT_10007790);
    cVar1 = Trigg(0x22);
    if (cVar1 != '\0') {
      ClearSelection(3);
      SelectUnits(&DAT_10007678,0);
      SelectUnits(&DAT_10007670,1);
      SelectUnits(&DAT_10007680,1);
      SelOpenGates(3);
      ClearSelection(3);
      SetTrigg(0x22,0);
    }
  }
  return;
}





void OnInit(void)

{
                    
  RegisterVar(&DAT_10007788,4);
  RegisterVar(&DAT_10007668,4);
  SetPlayerName(1,"ENEMY");
  SetPlayerName(2,"ENEMY");
  SetPlayerName(3,"ENEMY");
  SetPlayerName(4,"FRANCE");
  ChangeFriends(1,0xe);
  ChangeFriends(2,0xe);
  ChangeFriends(3,0xe);
  ChangeFriends(4,0x11);
  RegisterUnits(&DAT_100076e8,DAT_100071f0);
  RegisterUnits(&DAT_100076f0,DAT_100071ec);
  RegisterUnits(&DAT_10007858,"GHussar");
  RegisterUnits(&DAT_100077e8,"GGeneral");
  RegisterUnits(&DAT_10007750,DAT_100071d0);
  RegisterUnits(&DAT_10007698,"GMortars");
  RegisterDynGroup(&DAT_10007780);
  RegisterVar(&DAT_10007780,8);
  RegisterDynGroup(&DAT_10007658);
  RegisterVar(&DAT_10007658,8);
  RegisterUnits(&DAT_100076a8,DAT_100071c0);
  RegisterUnits(&DAT_100076b0,DAT_100071bc);
  RegisterUnits(&DAT_100076b8,DAT_100071b8);
  RegisterUnits(&DAT_100076c0,DAT_100071b4);
  RegisterUnits(&DAT_100076c8,DAT_100071b0);
  RegisterUnits(&DAT_100076d0,DAT_100071ac);
  RegisterUnits(&DAT_100076d8,DAT_100071a8);
  RegisterUnits(&DAT_10007838,DAT_100071a0);
  RegisterUnits(&DAT_10007848,DAT_10007198);
  RegisterUnits(&DAT_10007840,DAT_10007190);
  RegisterUnits(&DAT_10007850,DAT_10007188);
  RegisterUnits(&DAT_10007678,"GGate1");
  RegisterUnits(&DAT_10007670,"GGate2");
  RegisterUnits(&DAT_10007680,"GGate3");
  RegisterUnits(&DAT_10007688,DAT_10007168);
  RegisterUnits(&DAT_100077a8,DAT_10007164);
  RegisterUnits(&DAT_10007758,DAT_10007160);
  RegisterDynGroup(&DAT_10007818);
  RegisterVar(&DAT_10007818,8);
  RegisterUnits(&DAT_10007768,DAT_1000715c);
  RegisterDynGroup(&DAT_10007860);
  RegisterVar(&DAT_10007860,8);
  RegisterUnits(&DAT_10007760,DAT_10007158);
  RegisterDynGroup(&DAT_100076a0);
  RegisterVar(&DAT_100076a0,8);
  RegisterDynGroup(&DAT_100076e0);
  RegisterVar(&DAT_100076e0,8);
  RegisterDynGroup(&DAT_100076f8);
  RegisterVar(&DAT_100076f8,8);
  RegisterZone(&DAT_10007700,DAT_10007154);
  RegisterZone(&DAT_10007790,DAT_1000714c);
  RegisterZone(&DAT_10007708,DAT_10007148);
  RegisterZone(&DAT_10007710,DAT_10007144);
  RegisterZone(&DAT_10007720,DAT_10007140);
  RegisterZone(&DAT_10007728,DAT_1000713c);
  RegisterZone(&DAT_10007730,DAT_10007138);
  RegisterZone(&DAT_10007738,DAT_10007134);
  RegisterZone(&DAT_10007828,DAT_10007130);
  RegisterZone(&DAT_10007740,DAT_1000712c);
  RegisterZone(&DAT_10007830,DAT_10007128);
  RegisterZone(&DAT_100077f8,DAT_10007124);
  RegisterZone(&DAT_10007800,DAT_10007120);
  RegisterZone(&DAT_10007808,DAT_1000711c);
  RegisterZone(&DAT_10007810,DAT_10007118);
  RegisterZone(&DAT_10007820,DAT_10007114);
  RegisterZone(&DAT_10007748,DAT_10007110);
  RegisterFormation(&DAT_10007718,"#ALONE");
  RegisterFormation(&DAT_100077d0,"#LINE15PUS");
  RegisterUnitType(&DAT_100077c8,"Grenader(au)");
  RegisterUnitType(&DAT_100077e0,"Mushketer(au)");
  RegisterUnitType(&DAT_10007660,"Kirasir(au)");
  RegisterUnitType(&DAT_100077f0,"Konushnia_Swesair(au)");
  RegisterUnitType(&DAT_100077b8,"Kazarma(au)");
  RegisterUnitType(&DAT_100077d8,"Kuznica(au)");
  RegisterUnitType(&DAT_10007650,"Pushka(fr)");
  RegisterUnitType(&DAT_100077c0,"Mushketer(fr)");
  RegisterUnitType(&DAT_100077b0,"Dragun_France(fr)");
  RegisterUnitType(&DAT_10007868,"Kirasir(fr)");
  RegisterUnitType(&DAT_10007770,"Korolrv_Mus(fr)");
  RegisterUnitType(&DAT_10007778,"Krestian_Sved(fr)");
  RegisterUpgrade(&DAT_10007690,"AKA25AU");
  RegisterUpgrade(&DAT_10007798,"AKA25FR");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pcVar6;
  void *pcVar7;
  int *puVar8;
  int *puVar9;
  int uVar10;
  int iStack_4;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 == '\0') goto LAB_100017b9;
  SelectUnits(&DAT_10007858,0);
  SelChangeNation(4,0);
  SetStartPoint(&DAT_10007700);
  DAT_10007668 = GetDiff(0);
  DAT_10007788 = 0;
  SetResource(0,0,0);
  SetResource(0,2,0);
  SetResource(0,3,1000000);
  uVar2 = GetResource(0,3);
  SetResource(0,1,uVar2);
  uVar2 = GetResource(0,3);
  SetResource(0,4,uVar2);
  uVar2 = GetResource(0,3);
  SetResource(0,5,uVar2);
  SetResource(1,3,99999999);
  uVar2 = GetResource(1,3);
  SetResource(1,1,uVar2);
  uVar2 = GetResource(1,3);
  SetResource(2,3,uVar2);
  uVar2 = GetResource(1,3);
  SetResource(2,1,uVar2);
  uVar2 = GetResource(1,3);
  SetResource(3,3,uVar2);
  uVar2 = GetResource(1,3);
  SetResource(3,1,uVar2);
  uVar2 = GetResource(1,3);
  SetResource(4,3,uVar2);
  uVar2 = GetResource(1,3);
  SetResource(4,1,uVar2);
  EnableMission(0x42);
  DisableMission(0x43);
  DisableMission(0x44);
  DisableMission(0x45);
  DisableMission(0x46);
  DisableMission(0x47);
  DisableMission(0x48);
  RemoveGroup(&DAT_10007758,&DAT_10007818);
  RemoveGroup(&DAT_10007768,&DAT_10007860);
  RemoveGroup(&DAT_10007760,&DAT_100076a0);
  InitialUpgrade(DAT_100071f0,"MAINEN");
  InitialUpgrade(DAT_100071ec,"MAINSP");
  InitialUpgrade(DAT_10007160,"MAINAU");
  InitialUpgrade("GHussar","MAINFR");
  if (DAT_10007668 == 2) {
LAB_100016f6:
    InitialUpgrade(DAT_10007160,"Pik_evro_rus(au)ATTACK7");
    InitialUpgrade(DAT_10007160,"Pik_evro_rus(au)SHIELD7");
    InitialUpgrade(DAT_10007160,"KUZ02AU");
    InitialUpgrade(DAT_10007160,"KUZ03AU");
    InitialUpgrade(DAT_10007160,"KUZ04AU");
    InitialUpgrade(DAT_10007160,"KUZ05AU");
    InitialUpgrade(DAT_10007160,"AKA31AU");
    InitialUpgrade(DAT_10007160,"AKA34AU");
  }
  else if (DAT_10007668 == 3) {
    InitialUpgrade(DAT_10007160,"KUZ06AU");
    InitialUpgrade(DAT_10007160,"AKA15AU");
    goto LAB_100016f6;
  }
  ShowPage("#PAGE0");
  RunTimer(1,300);
  RunTimer(6,0x5dc);
  RunTimer(10,10000);
  SetTrigg(99,0);
LAB_100017b9:
  cVar1 = TimerDone(10);
  if (cVar1 != '\0') {
    iVar3 = GetResource(3,2);
    if (iVar3 < 1000) {
      AddResource(3,2,100000);
    }
    cVar1 = Trigg(0x16);
    if (cVar1 != '\0') {
      iVar3 = GetResource(1,3);
      if (iVar3 < 1000) {
        SetResource(1,3,99999999);
      }
      iVar3 = GetResource(2,3);
      if (iVar3 < 1000) {
        SetResource(2,3,99999999);
      }
    }
    cVar1 = Trigg(0x21);
    if (cVar1 != '\0') {
      iVar3 = GetResource(3,3);
      if (iVar3 < 1000) {
        SetResource(3,3,99999999);
      }
      iVar3 = GetResource(3,1);
      if (iVar3 < 1000) {
        SetResource(3,1,99999999);
      }
      iVar3 = GetResource(3,4);
      if (iVar3 < 1000) {
        SetResource(3,4,99999999);
      }
      iVar3 = GetResource(3,5);
      if (iVar3 < 1000) {
        SetResource(3,5,99999999);
      }
    }
    RunTimer(10,1000);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') &&
     ((cVar1 = TimerDone(1), cVar1 != '\0' || (cVar1 = Trigg(0x14), cVar1 == '\0')))) {
    cVar1 = Trigg(0x14);
    if (cVar1 != '\0') {
      ShowPage("#PAGE1");
      SetLightSpot(&DAT_10007790,1,1);
    }
    FUN_1000108e(&DAT_10007838,&DAT_10007790);
    FUN_1000108e(&DAT_10007848,&DAT_10007790);
    FUN_10001030(&DAT_10007840,&DAT_10007810);
    uVar10 = 2;
    uVar2 = 0x40;
    puVar8 = &DAT_10007790;
    iVar3 = FUN_10001030(&DAT_10007840,&DAT_10007820);
    SelSendAndKill(iVar3,puVar8,uVar2,uVar10);
    FUN_10001030(&DAT_10007850,&DAT_10007810);
    uVar10 = 2;
    uVar2 = 0x40;
    puVar8 = &DAT_10007790;
    iVar3 = FUN_10001030(&DAT_10007850,&DAT_10007820);
    SelSendAndKill(iVar3,puVar8,uVar2,uVar10);
    SetTrigg(0x15,0);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007790,&DAT_10007858), 0 < iVar3)) {
    ShowPage("#PAGE2");
    ClearLightSpot(1);
    SetLightSpot(&DAT_10007828,1,2);
    DisableMission(0x42);
    EnableMission(0x43);
    EnableMission(0x44);
    RunTimer(8,11000);
    SetTrigg(0x14,0);
  }
  cVar1 = Trigg(0x14);
  if ((((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) && (cVar1 = Trigg(1), cVar1 != '\0'))
     && (((cVar1 = Trigg(0xb), cVar1 != '\0' &&
          (iVar3 = GetUnitsAmount1(&DAT_10007708,&DAT_10007858), 0 < iVar3)) && (DAT_10007788 < 3)))
     ) {
    cVar1 = AskQuestion("#PAGE3");
    if (cVar1 != '\0') {
      SelectUnits(&DAT_100076a8,0);
      SelChangeNation(4,0);
      DAT_10007788 = DAT_10007788 + 1;
      SetTrigg(1,0);
    }
    SetTrigg(0xb,0);
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) &&
     ((cVar1 = Trigg(1), cVar1 != '\0' &&
      (iVar3 = GetUnitsAmount1(&DAT_10007708,&DAT_10007858), iVar3 == 0)))) {
    SetTrigg(0xb,1);
  }
  cVar1 = Trigg(0x14);
  if ((((cVar1 == '\0') && (cVar1 = Trigg(2), cVar1 != '\0')) && (cVar1 = Trigg(0xc), cVar1 != '\0')
      ) && ((iVar3 = GetUnitsAmount1(&DAT_10007710,&DAT_10007858), 0 < iVar3 && (DAT_10007788 < 3)))
     ) {
    cVar1 = AskQuestion("#PAGE3");
    if (cVar1 != '\0') {
      SelectUnits(&DAT_100076b0,0);
      SelChangeNation(4,0);
      DAT_10007788 = DAT_10007788 + 1;
      SetTrigg(2,0);
    }
    SetTrigg(0xc,0);
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) &&
     ((cVar1 = Trigg(2), cVar1 != '\0' &&
      (iVar3 = GetUnitsAmount1(&DAT_10007710,&DAT_10007858), iVar3 == 0)))) {
    SetTrigg(0xc,1);
  }
  cVar1 = Trigg(0x14);
  if (((((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) && (cVar1 = Trigg(3), cVar1 != '\0'))
      && ((cVar1 = Trigg(0xd), cVar1 != '\0' &&
          (iVar3 = GetUnitsAmount1(&DAT_10007720,&DAT_10007858), 0 < iVar3)))) && (DAT_10007788 < 3)
     ) {
    cVar1 = AskQuestion("#PAGE3");
    if (cVar1 != '\0') {
      SelectUnits(&DAT_100076b8,0);
      SelChangeNation(4,0);
      DAT_10007788 = DAT_10007788 + 1;
      SetTrigg(3,0);
    }
    SetTrigg(0xd,0);
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) &&
     ((cVar1 = Trigg(3), cVar1 != '\0' &&
      (iVar3 = GetUnitsAmount1(&DAT_10007720,&DAT_10007858), iVar3 == 0)))) {
    SetTrigg(0xd,1);
  }
  cVar1 = Trigg(0x14);
  if ((((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) && (cVar1 = Trigg(4), cVar1 != '\0'))
     && (((cVar1 = Trigg(0xe), cVar1 != '\0' &&
          (iVar3 = GetUnitsAmount1(&DAT_10007728,&DAT_10007858), 0 < iVar3)) && (DAT_10007788 < 3)))
     ) {
    cVar1 = AskQuestion("#PAGE3");
    if (cVar1 != '\0') {
      SelectUnits(&DAT_100076c0,0);
      SelChangeNation(4,0);
      DAT_10007788 = DAT_10007788 + 1;
      SetTrigg(4,0);
    }
    SetTrigg(0xe,0);
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) &&
     ((cVar1 = Trigg(4), cVar1 != '\0' &&
      (iVar3 = GetUnitsAmount1(&DAT_10007728,&DAT_10007858), iVar3 == 0)))) {
    SetTrigg(0xe,1);
  }
  cVar1 = Trigg(0x14);
  if ((((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) && (cVar1 = Trigg(5), cVar1 != '\0'))
     && (((cVar1 = Trigg(0xf), cVar1 != '\0' &&
          (iVar3 = GetUnitsAmount1(&DAT_10007730,&DAT_10007858), 0 < iVar3)) && (DAT_10007788 < 3)))
     ) {
    cVar1 = AskQuestion("#PAGE3");
    if (cVar1 != '\0') {
      SelectUnits(&DAT_100076c8,0);
      SelChangeNation(4,0);
      DAT_10007788 = DAT_10007788 + 1;
      SetTrigg(5,0);
    }
    SetTrigg(0xf,0);
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) &&
     ((cVar1 = Trigg(5), cVar1 != '\0' &&
      (iVar3 = GetUnitsAmount1(&DAT_10007730,&DAT_10007858), iVar3 == 0)))) {
    SetTrigg(0xf,1);
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 == '\0') && (cVar1 = Trigg(6), cVar1 != '\0')) &&
     (iVar3 = GetUnitsAmount1(&DAT_10007828,&DAT_10007858), 0 < iVar3)) {
    SelectUnits(&DAT_100076d0,0);
    SelChangeNation(4,0);
    FUN_1000108e(&DAT_100076d8,&DAT_100077f8);
    FUN_1000108e(&DAT_100076d8,&DAT_10007738);
    SetTrigg(6,0);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x21), cVar1 != '\0')) &&
     (cVar1 = TimerDone(6), cVar1 != '\0')) {
    cVar1 = Trigg(7);
    if (cVar1 == '\0') {
      CreateObject0(&DAT_100076f8,&DAT_10007660,&DAT_100077f8,3);
      cVar1 = Trigg(8);
      if (cVar1 != '\0') {
        FUN_1000108e(&DAT_100076f8,&DAT_10007808);
      }
      FUN_1000108e(&DAT_100076f8,&DAT_10007790);
      CreateObject0(&DAT_100076f8,&DAT_100077c8,&DAT_100077f8,3);
      FUN_10001030(&DAT_100076f8,&DAT_10007810);
      puVar8 = &DAT_100076f8;
    }
    else {
      CreateObject0(&DAT_100076e0,&DAT_100077c8,&DAT_100077f8,3);
      cVar1 = Trigg(8);
      if (cVar1 != '\0') {
        FUN_1000108e(&DAT_100076e0,&DAT_10007808);
      }
      FUN_1000108e(&DAT_100076e0,&DAT_10007790);
      CreateObject0(&DAT_100076e0,&DAT_100077c8,&DAT_100077f8,3);
      FUN_10001030(&DAT_100076e0,&DAT_10007810);
      puVar8 = &DAT_100076e0;
    }
    uVar10 = 2;
    uVar2 = 0x40;
    puVar9 = &DAT_10007790;
    iVar3 = FUN_10001030(puVar8,&DAT_10007820);
    SelSendAndKill(iVar3,puVar9,uVar2,uVar10);
    RunTimer(6,700);
    cVar1 = Trigg(7);
    SetTrigg(7,'\x01' - (cVar1 != '\0'));
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(8), cVar1 != '\0')) {
    iStack_4 = 5;
    do {
      CreateObject0(&DAT_10007780,&DAT_100077c0,&DAT_10007738,4);
      RemoveGroup(&DAT_10007780,&DAT_10007658);
      CreateObject0(&DAT_10007780,&DAT_10007650,&DAT_10007738,4);
      RemoveGroup(&DAT_10007780,&DAT_10007658);
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
    iStack_4 = 2;
    do {
      CreateObject0(&DAT_10007780,&DAT_100077b0,&DAT_10007738,4);
      RemoveGroup(&DAT_10007780,&DAT_10007658);
      CreateObject0(&DAT_10007780,&DAT_10007868,&DAT_10007738,4);
      RemoveGroup(&DAT_10007780,&DAT_10007658);
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
    CreateObject0(&DAT_10007780,&DAT_10007770,&DAT_10007738,4);
    RemoveGroup(&DAT_10007780,&DAT_10007658);
    FUN_1000105e(&DAT_10007658,&DAT_10007828,0x80);
    FUN_1000105e(&DAT_100076a8,&DAT_10007828,0x80);
    FUN_1000105e(&DAT_100076b0,&DAT_10007828,0x80);
    FUN_1000105e(&DAT_100076b8,&DAT_10007828,0x80);
    FUN_1000105e(&DAT_100076c0,&DAT_10007828,0x80);
    FUN_1000105e(&DAT_100076c8,&DAT_10007828,0x80);
    FUN_1000105e(&DAT_10007698,&DAT_10007828,0x80);
    RemoveGroup(&DAT_100076a8,&DAT_10007658);
    RemoveGroup(&DAT_100076c0,&DAT_10007658);
    RemoveGroup(&DAT_100076b0,&DAT_10007658);
    RemoveGroup(&DAT_100076c8,&DAT_10007658);
    RemoveGroup(&DAT_100076b8,&DAT_10007658);
    RemoveGroup(&DAT_10007698,&DAT_10007658);
    RunTimer(8,500);
    SetTrigg(8,0);
  }
  cVar1 = Trigg(8);
  if (((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) &&
     (cVar1 = TimerDone(8), cVar1 != '\0')) {
    ShowPage("#PAGE4");
    SelectUnits(&DAT_10007658,0);
    SelChangeNation(4,0);
    ClearLightSpot(2);
    SetLightSpot(&DAT_10007748,1,3);
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
    SetTrigg(9,0);
  }
  cVar1 = Trigg(9);
  if ((cVar1 == '\0') && (cVar1 = Trigg(10), cVar1 != '\0')) {
    iVar3 = GetTotalAmount1(&DAT_100077f0,3);
    iVar4 = GetTotalAmount1(&DAT_100077b8,3);
    iVar5 = GetTotalAmount1(&DAT_100077d8,3);
    if (iVar3 + iVar4 + iVar5 == 0) {
      iStack_4 = 5;
      do {
        CreateObject0(&DAT_10007780,&DAT_100077c0,&DAT_10007738,0);
        uVar10 = 2;
        uVar2 = 0x80;
        puVar8 = &DAT_10007828;
        iVar3 = FUN_1000105e(&DAT_10007780,&DAT_10007738,0x80);
        SelSendAndKill(iVar3,puVar8,uVar2,uVar10);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
      iStack_4 = 2;
      do {
        CreateObject0(&DAT_10007780,&DAT_100077b0,&DAT_10007738,0);
        uVar10 = 2;
        uVar2 = 0x80;
        puVar8 = &DAT_10007828;
        iVar3 = FUN_1000105e(&DAT_10007780,&DAT_10007738,0x80);
        SelSendAndKill(iVar3,puVar8,uVar2,uVar10);
        CreateObject0(&DAT_10007780,&DAT_10007868,&DAT_10007738,0);
        uVar10 = 2;
        uVar2 = 0x80;
        puVar8 = &DAT_10007828;
        iVar3 = FUN_1000105e(&DAT_10007780,&DAT_10007738,0x80);
        SelSendAndKill(iVar3,puVar8,uVar2,uVar10);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
      CreateObject0(&DAT_10007780,&DAT_10007770,&DAT_10007738,0);
      uVar10 = 2;
      uVar2 = 0x80;
      puVar8 = &DAT_10007828;
      iVar3 = FUN_1000105e(&DAT_10007780,&DAT_10007738,0x80);
      SelSendAndKill(iVar3,puVar8,uVar2,uVar10);
      CreateObject0(&DAT_10007780,&DAT_10007778,&DAT_10007738,0);
      FUN_1000105e(&DAT_10007780,&DAT_10007738,0x80);
      SetResource(0,0,100000);
      SetResource(0,2,100000);
      SetResource(0,3,100000);
      SetResource(0,1,100000);
      SetResource(0,4,100000);
      SetResource(0,5,100000);
      SetResource(1,0,100000);
      uVar2 = GetResource(1,0);
      SetResource(1,3,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(1,2,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(1,1,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(1,4,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(1,5,uVar2);
      SetResource(2,0,100000);
      uVar2 = GetResource(1,0);
      SetResource(2,3,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(2,2,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(2,1,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(2,4,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(2,5,uVar2);
      SetResource(3,0,100000);
      uVar2 = GetResource(1,0);
      SetResource(3,3,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(3,2,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(3,1,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(3,4,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(3,5,uVar2);
      uVar2 = GetResource(1,0);
      SetResource(4,3,uVar2);
      ClearSelection(3);
      SelectUnits(&DAT_10007678,0);
      SelectUnits(&DAT_10007670,1);
      SelectUnits(&DAT_10007680,1);
      SelOpenGates(3);
      ClearSelection(3);
      ShowPage("#PAGE5");
      ClearLightSpot(3);
      DisableMission(0x46);
      EnableMission(0x47);
      EnableMission(0x48);
      StartAI(3,"AUSTRIA.0",1,3,1,DAT_10007668);
      RunTimer(0x16,11000);
      SetTrigg(0x21,0);
      SetTrigg(10,0);
    }
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') &&
     (((cVar1 = TimerDone(0x16), cVar1 != '\0' ||
       (cVar1 = IsUpgradeDone(&DAT_10007798,0), cVar1 != '\0')) ||
      (cVar1 = IsUpgradeDone(&DAT_10007690,0), cVar1 != '\0')))) {
    StartAI(1,"SPAIN.0",2,3,1,DAT_10007668);
    StartAI(2,"ENGLAND.0",2,3,1,DAT_10007668);
    SetTrigg(0x16,0);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10007818), iVar3 < DAT_10007668 * 10 + 0x2a))
  {
    iVar3 = 0;
    if (DAT_10007668 != -1 && -1 < DAT_10007668 + 1) {
      do {
        ProduceUnitFast(&DAT_10007688,&DAT_100077c8,&DAT_10007818,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_10007668 + 1);
    }
    FUN_10001104(&DAT_10007818);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10007860), iVar3 < DAT_10007668 * 5 + 0x15))
  {
    iVar3 = 0;
    if (0 < DAT_10007668) {
      do {
        ProduceUnitFast(&DAT_10007688,&DAT_100077e0,&DAT_10007860,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_10007668);
    }
    FUN_10001104(&DAT_10007860);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') &&
     (iVar3 = GetTotalAmount0(&DAT_100076a0), iVar3 < (DAT_10007668 * 5 + 0x14) * 2)) {
    iVar3 = 0;
    if (0 < DAT_10007668) {
      do {
        ProduceUnitFast(&DAT_100077a8,&DAT_10007660,&DAT_100076a0,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_10007668);
    }
    FUN_10001104(&DAT_100076a0);
  }
  cVar1 = Trigg(0x5b);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), pcVar6 = (void*)&ShowPage, cVar1 != '\0')) {
    ShowPage("#PAGE11");
    SetTrigg(0x5b,0);
  }
  cVar1 = Trigg(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE12");
    SetTrigg(0x5c,0);
  }
  cVar1 = Trigg(0x5d);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage("#PAGE13");
    SetTrigg(0x5d,0);
  }
  iVar3 = GetTotalAmount0(&DAT_10007858);
  if (iVar3 == 0) {
    ShowPage("#PAGE10H");
    LooseGame();
  }
  iVar3 = GetTotalAmount0(&DAT_100077e8);
  if (iVar3 == 0) {
    ShowPage("#PAGE10G");
    LooseGame();
  }
  cVar1 = Trigg(0x5b);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5c), cVar1 == '\0')) &&
     (cVar1 = Trigg(0x5d), cVar1 == '\0')) {
    iVar3 = 1;
    do {
      cVar1 = TimerDone(iVar3);
      if (cVar1 == '\0') {
        FreeTimer(iVar3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1e);
    ShowPage("#PAGE20");
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
