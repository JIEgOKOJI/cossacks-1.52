#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006070[] = "G25E";
char DAT_10006078[] = "G24E";
char DAT_10006080[] = "G23E";
char DAT_10006088[] = "G22E";
char DAT_10006090[] = "G35";
char DAT_10006094[] = "G12E";
char DAT_1000609c[] = "G11E";
char DAT_100060a4[] = "G10E";
char DAT_100060ac[] = "G12";
char DAT_100060b0[] = "G11";
char DAT_100060b4[] = "G10";
char DAT_100060b8[] = "G20K";
char DAT_100060c0[] = "G16A";
char DAT_100060c8[] = "G16";
char DAT_100060cc[] = "G2";
char DAT_100060d0[] = "G1";
char DAT_100060d4[] = "Z33D";
char DAT_100060dc[] = "Z32D";
char DAT_100060e4[] = "Z31D";
char DAT_100060ec[] = "Z1JD";
char DAT_100060f4[] = "Z33";
char DAT_100060f8[] = "Z32";
char DAT_100060fc[] = "Z31";
char DAT_10006100[] = "ZX2";
char DAT_10006104[] = "ZX1";
char DAT_10006108[] = "Z29";
char DAT_1000610c[] = "Z28";
char DAT_10006110[] = "Z27";
char DAT_10006114[] = "Z26";
char DAT_10006118[] = "Z23";
char DAT_1000611c[] = "Z22";
char DAT_10006120[] = "Z21B";
char DAT_10006128[] = "Z21A";
char DAT_10006130[] = "Z21";
char DAT_10006134[] = "Z12";
char DAT_10006138[] = "Z11";
char DAT_1000613c[] = "Z10";
char DAT_10006140[] = "Z20K";
char DAT_10006148[] = "Z2A";
char DAT_1000614c[] = "Z2";
char DAT_10006150[] = "Z1K";
char DAT_10006154[] = "Z1J";
char DAT_10006158[] = "Z1H";
char DAT_1000615c[] = "Z1G";
char DAT_10006160[] = "Z1F";
char DAT_10006164[] = "Z1E";
char DAT_10006168[] = "Z1D";
char DAT_1000616c[] = "Z1C";
char DAT_10006170[] = "Z1B";
char DAT_10006174[] = "Z1A";
char DAT_10006178[] = "Z1";
long long DAT_10006590 = 0;
int DAT_10006598 = 0;
long long DAT_100065a0 = 0;
long long DAT_100065a8 = 0;
long long DAT_100065b0 = 0;
long long DAT_100065b8 = 0;
long long DAT_100065c0 = 0;
long long DAT_100065c8 = 0;
long long DAT_100065d0 = 0;
long long DAT_100065d8 = 0;
long long DAT_100065e0 = 0;
long long DAT_100065e8 = 0;
long long DAT_100065f0 = 0;
long long DAT_100065f8 = 0;
long long DAT_10006600 = 0;
long long DAT_10006608 = 0;
long long DAT_10006610 = 0;
int DAT_10006618 = 0;
int DAT_1000661c = 0;
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
int DAT_10006748 = 0;
long long DAT_10006750 = 0;
long long DAT_10006758 = 0;
long long DAT_10006760 = 0;
long long DAT_10006768 = 0;
long long DAT_10006770 = 0;
long long DAT_10006778 = 0;
long long DAT_10006780 = 0;
long long DAT_10006788 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  SetPlayerName(1,"HOLLAND");
  SetPlayerName(2,"FRANCE");
  SetPlayerName(4,"DWELLERS");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(1,0xfe);
  ChangeFriends(2,0xfe);
  ChangeFriends(4,0xff);
  RegisterVar(&DAT_10006598,4);
  RegisterVar(&DAT_10006748,4);
  RegisterVar(&DAT_10006618,4);
  RegisterVar(&DAT_1000661c,4);
  RegisterZone(&DAT_10006608,DAT_10006178);
  RegisterZone(&DAT_100066a8,DAT_10006174);
  RegisterZone(&DAT_100066b0,DAT_10006170);
  RegisterZone(&DAT_100066b8,DAT_1000616c);
  RegisterZone(&DAT_100066c8,DAT_10006168);
  RegisterZone(&DAT_100066e0,DAT_10006164);
  RegisterZone(&DAT_100066f0,DAT_10006160);
  RegisterZone(&DAT_100066f8,DAT_1000615c);
  RegisterZone(&DAT_10006708,DAT_10006158);
  RegisterZone(&DAT_10006710,DAT_10006154);
  RegisterZone(&DAT_10006718,DAT_10006150);
  RegisterZone(&DAT_10006610,DAT_1000614c);
  RegisterZone(&DAT_100066d8,DAT_10006148);
  RegisterZone(&DAT_10006770,DAT_10006140);
  RegisterZone(&DAT_10006628,DAT_1000613c);
  RegisterZone(&DAT_10006630,DAT_10006138);
  RegisterZone(&DAT_10006638,DAT_10006134);
  RegisterZone(&DAT_10006648,DAT_10006130);
  RegisterZone(&DAT_10006760,DAT_10006128);
  RegisterZone(&DAT_10006768,DAT_10006120);
  RegisterZone(&DAT_10006650,DAT_1000611c);
  RegisterZone(&DAT_10006658,DAT_10006118);
  RegisterZone(&DAT_10006670,DAT_10006114);
  RegisterZone(&DAT_10006680,DAT_10006110);
  RegisterZone(&DAT_10006690,DAT_1000610c);
  RegisterZone(&DAT_10006698,DAT_10006108);
  RegisterZone(&DAT_10006750,DAT_10006104);
  RegisterZone(&DAT_10006758,DAT_10006100);
  RegisterZone(&DAT_10006668,DAT_100060fc);
  RegisterZone(&DAT_10006678,DAT_100060f8);
  RegisterZone(&DAT_10006688,DAT_100060f4);
  RegisterZone(&DAT_10006590,DAT_100060ec);
  RegisterZone(&DAT_10006778,DAT_100060e4);
  RegisterZone(&DAT_10006780,DAT_100060dc);
  RegisterZone(&DAT_10006788,DAT_100060d4);
  RegisterUnits(&DAT_100065a0,DAT_100060d0);
  RegisterUnits(&DAT_100065a8,DAT_100060cc);
  RegisterUnits(&DAT_100065f0,DAT_100060c8);
  RegisterUnits(&DAT_100066c0,DAT_100060c0);
  RegisterUnits(&DAT_100066e8,DAT_100060b8);
  RegisterUnits(&DAT_100065c8,DAT_100060b4);
  RegisterUnits(&DAT_100065d0,DAT_100060b0);
  RegisterUnits(&DAT_100065d8,DAT_100060ac);
  RegisterUnits(&DAT_10006620,DAT_100060a4);
  RegisterUnits(&DAT_10006640,DAT_1000609c);
  RegisterUnits(&DAT_10006660,DAT_10006094);
  RegisterZone(&DAT_10006600,DAT_10006090);
  RegisterUnits(&DAT_10006700,DAT_10006088);
  RegisterUnits(&DAT_10006720,DAT_10006080);
  RegisterUnits(&DAT_10006728,DAT_10006078);
  RegisterUnits(&DAT_10006738,DAT_10006070);
  RegisterDynGroup(&DAT_100065b0);
  RegisterFormation(&DAT_100065b8,"#LINE30PUS");
  RegisterUnitType(&DAT_100065c0,"Konni_Ricar(en)");
  RegisterDynGroup(&DAT_100065e0);
  RegisterDynGroup(&DAT_100066a0);
  RegisterUnitType(&DAT_10006730,"Kavalerist_avstrii(au)");
  RegisterDynGroup(&DAT_100065e8);
  RegisterDynGroup(&DAT_100065f8);
  RegisterUnitType(&DAT_10006740,"Mameluk(AL)");
  RegisterVar(&DAT_100066d0,8);
  RegisterVar(&DAT_100065e0,8);
  RegisterVar(&DAT_100066a0,8);
  RegisterVar(&DAT_100065e8,8);
  RegisterVar(&DAT_100065f8,8);
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
  int *puVar7;
  char *pcVar8;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    DAT_10006598 = GetDiff(0);
    if (DAT_10006598 == 1) {
      pcVar8 = "#LINE5";
    }
    else if (DAT_10006598 == 2) {
      pcVar8 = "#LINE10";
    }
    else if (DAT_10006598 == 3) {
      pcVar8 = "#LINE15PUS";
    }
    else {
      pcVar8 = "#LINE3";
    }
    RegisterFormation(&DAT_100066d0,pcVar8);
    RunTimer(1,1000);
    RunTimer(0x15,5000);
    SetTrigg(0x15,0);
    DAT_10006748 = 3;
    DAT_10006618 = 5;
    DAT_1000661c = 4;
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    SetLightSpot(&DAT_10006680,200,1);
    SetLightSpot(&DAT_10006690,200,2);
    TakeFood(&DAT_100065f0);
    TakeFood(&DAT_100066c0);
    InitialUpgrade(DAT_100060c8,"AKA01SP");
    InitialUpgrade(DAT_100060c8,"AKA02SP");
    InitialUpgrade(DAT_100060c8,"AKA03SP");
    InitialUpgrade(DAT_100060c8,"AKA04SP");
    if (DAT_10006598 < 2) {
      SelectUnits(&DAT_10006620,0);
      SelectUnits(&DAT_10006640,1);
      SelectUnits(&DAT_10006660,1);
      SelectUnits(&DAT_10006700,1);
      SelectUnits(&DAT_10006720,1);
      SelectUnits(&DAT_10006728,1);
      SelectUnits(&DAT_10006738,1);
      SelErase(5);
    }
    SetResource(0,0,(DAT_10006598 / 3 + 5) * 2000 + DAT_10006598 * -3000);
    uVar2 = GetResource(0,0);
    SetResource(0,3,uVar2);
    uVar2 = GetResource(0,0);
    SetResource(0,2,uVar2);
    uVar2 = GetResource(0,0);
    SetResource(0,1,uVar2);
    uVar2 = GetResource(0,0);
    SetResource(0,4,uVar2);
    uVar2 = GetResource(0,0);
    SetResource(0,5,uVar2);
    if (DAT_10006598 == 0) {
      iVar3 = GetResource(0,3);
      iVar3 = iVar3 / 2;
    }
    else {
      iVar3 = GetResource(0,3);
      iVar3 = iVar3 << 1;
    }
    SetResource(1,0,iVar3);
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
    uVar2 = GetResource(1,3);
    SetResource(2,0,uVar2);
    uVar2 = GetResource(2,0);
    SetResource(2,3,uVar2);
    uVar2 = GetResource(2,0);
    SetResource(2,2,uVar2);
    uVar2 = GetResource(2,0);
    SetResource(2,1,uVar2);
    uVar2 = GetResource(2,0);
    SetResource(2,4,uVar2);
    uVar2 = GetResource(2,0);
    SetResource(2,5,uVar2);
    StartAI(1,"HOLLAND.0",0,0,1,DAT_10006598);
    StartAI(2,"FRANCE.0",0,0,1,DAT_10006598);
    ShowPage("#PAGE12");
    SetTrigg(99,0);
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SelectUnits(&DAT_100065a0,0);
    SelectUnits(&DAT_100065a8,1);
    SelSendTo(4,&DAT_10006718,0x80,0);
    SetTrigg(1,0);
  }
  cVar1 = Trigg(2);
  if (((cVar1 != '\0') && (cVar1 = Trigg(1), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10006718,4), 0 < iVar3)) {
    ShowPage("#PAGE0");
    SetLightSpot(&DAT_10006610,600,4);
    SetStartPoint(&DAT_10006718);
    EnableMission(0x44);
    SelectUnits(&DAT_100065a0,0);
    SelectUnits(&DAT_100065a8,1);
    SelSendTo(4,&DAT_10006608,0x80,0);
    SelChangeNation(4,0);
    SetTrigg(2,0);
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) &&
     ((iVar3 = GetTotalAmount0(&DAT_100065c8), iVar3 == 0 &&
      ((iVar3 = GetTotalAmount0(&DAT_100065d0), iVar3 == 0 &&
       (iVar3 = GetTotalAmount0(&DAT_100065d8), iVar3 == 0)))))) {
    SelectUnits(&DAT_100065a0,0);
    SelSendTo(4,&DAT_10006610,0x80,0);
    SelectUnits(&DAT_100065a8,0);
    SelSendTo(4,&DAT_100066d8,0x80,0);
    cVar1 = Trigg(0x61);
    if (cVar1 != '\0') {
      DisableMission(0x44);
      EnableMission(0x45);
      SelectUnits(&DAT_100066e8,0);
      SelSendTo(4,&DAT_10006770,0x8c,0);
      SelectUnits(&DAT_100065a0,0);
      SelectUnits(&DAT_100065a8,1);
      SelChangeNation(0,4);
      ShowPage("#PAGE5");
      SetTrigg(0x61,0);
    }
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x61), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount1(&DAT_10006610,&DAT_100065a0), 0 < iVar3)) {
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
    ShowPage("#PAGE7");
    SetTrigg(0x37,0);
    SetTrigg(0x38,0);
    SetTrigg(3,0);
    SetTrigg(4,0);
    SetTrigg(5,0);
  }
  cVar1 = Trigg(0x38);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x37), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10006610,0), 0 < iVar3)) {
    cVar1 = AskQuestion("#PAGE1");
    if ((cVar1 == '\0') || (iVar3 = GetResource(0,1), iVar3 < 1000)) {
      SetTrigg(0x38,0);
      ShowPage("#PAGE6");
    }
    else {
      SelectUnits(&DAT_100066e8,0);
      SelErase(4);
      CreateObject0(&DAT_100065b0,&DAT_100065b8,&DAT_100065c0,0,&DAT_10006770,0x8c);
      AddResource(0,1,-1000);
      DisableMission(0x46);
      EnableMission(0x47);
      SetTrigg(0x37,0);
      SetTrigg(0x38,0);
    }
  }
  cVar1 = Trigg(0x38);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x37), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10006610,0), iVar3 == 0)) {
    SetTrigg(0x38,0);
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) &&
     ((iVar3 = GetTotalAmount0(&DAT_100065a0), iVar3 == 0 ||
      (iVar3 = GetTotalAmount0(&DAT_100065a8), iVar3 == 0)))) {
    DisableMission(0x44);
    EnableMission(0x45);
    iVar3 = GetTotalAmount0(&DAT_100065a0);
    if (iVar3 == 0) {
      ShowPage("#PAGE3");
    }
    else {
      SelectUnits(&DAT_100065a0,0);
      SelChangeNation(0,4);
      SelectUnits(&DAT_100065a0,0);
      SelSendTo(4,&DAT_10006610,0x80,0);
      ShowPage("#PAGE4");
    }
    SelectUnits(&DAT_100065c8,0);
    SelectUnits(&DAT_100065d0,1);
    SelectUnits(&DAT_100065d8,1);
    SelSendTo(5,&DAT_10006648,0x80,0);
    SetTrigg(3,0);
    SetTrigg(4,0);
    SetTrigg(5,0);
    SetTrigg(7,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') || (cVar1 = Trigg(0x61), cVar1 == '\0')) goto LAB_10001c4a;
  iVar3 = GetUnitsAmount0(&DAT_10006638,0);
  iVar4 = GetUnitsAmount0(&DAT_10006630,0);
  iVar5 = GetUnitsAmount0(&DAT_10006628,0);
  if (iVar3 + iVar4 + iVar5 < 1) goto LAB_10001c4a;
  SelectUnits(&DAT_100065c8,0);
  SelectUnits(&DAT_100065d0,1);
  SelectUnits(&DAT_100065d8,1);
  AllowAttack(5,1);
  iVar3 = GetUnitsAmount0(&DAT_10006638,0);
  if (iVar3 == 0) {
    puVar7 = &DAT_10006630;
LAB_10001b97:
    SelSendAndKill(5,puVar7,0x80,0);
  }
  else {
    iVar3 = GetUnitsAmount0(&DAT_10006628,0);
    if ((iVar3 == 0) && (iVar3 = GetUnitsAmount0(&DAT_10006630,0), iVar3 == 0)) {
      puVar7 = &DAT_10006638;
      goto LAB_10001b97;
    }
    SelectUnits(&DAT_100065c8,0);
    SelectUnits(&DAT_100065d0,1);
    SelSendAndKill(5,&DAT_10006630,0x80,0);
    SelectUnits(&DAT_100065d8,0);
    SelSendAndKill(5,&DAT_10006638,0x80,0);
  }
  iVar3 = GetUnitsAmount0(&DAT_10006628,0);
  if (0 < iVar3) {
    SelectUnits(&DAT_100065d0,0);
    SelSendAndKill(5,&DAT_10006628,0x80,0);
  }
  SetTrigg(4,0);
LAB_10001c4a:
  cVar1 = Trigg(7);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 == '\0')) && (cVar1 = Trigg(0x61), cVar1 != '\0')
     ) {
    iVar3 = GetUnitsAmount0(&DAT_10006638,0);
    iVar4 = GetUnitsAmount0(&DAT_10006630,0);
    iVar5 = GetUnitsAmount0(&DAT_10006628,0);
    if (iVar3 + iVar4 + iVar5 == 0) {
      SelectUnits(&DAT_100065c8,0);
      SelectUnits(&DAT_100065d0,1);
      SelectUnits(&DAT_100065d8,1);
      SelSendAndKill(5,&DAT_10006630,0x80,0);
      SetTrigg(7,0);
    }
  }
  cVar1 = Trigg(8);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_100065d8);
    iVar4 = GetTotalAmount0(&DAT_100065d0);
    iVar5 = GetTotalAmount0(&DAT_100065c8);
    if (iVar3 + iVar4 + iVar5 < 0x1e) {
      SelectUnits(&DAT_100065c8,0);
      SelectUnits(&DAT_100065d0,1);
      SelectUnits(&DAT_100065d8,1);
      SelSendAndKill(5,&DAT_10006610,0x80,0);
      SetTrigg(8,0);
    }
  }
  cVar1 = Trigg(0x23);
  if (cVar1 != '\0') {
    cVar1 = Trigg(0x24);
    if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10006670,0), 0 < iVar3)) {
      SelectUnitsInZone(&DAT_10006698,5,0);
      SelSendAndKill(5,&DAT_10006670,0x80,0);
      SetTrigg(0x24,0);
    }
    iVar3 = GetUnitsAmount0(&DAT_10006670,0);
    if (iVar3 == 0) {
      SetTrigg(0x24,0);
      cVar1 = TimerDone(0x15);
      if (cVar1 == '\0') {
        cVar1 = Trigg(0x15);
        if (((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10006670,0), iVar3 == 0)) &&
           ((iVar3 = GetTotalAmount0(&DAT_100065e0), iVar3 == 0 &&
            (iVar3 = GetTotalAmount0(&DAT_100066a0), iVar3 == 0)))) {
          CreateObject0(&DAT_100066a0,&DAT_100066d0,&DAT_10006730,5,&DAT_10006750,0x80);
          SelectUnits(&DAT_100066a0,0);
          AllowAttack(5,1);
          SelSendAndKill(5,&DAT_10006710,0x80,0);
          SetTrigg(0x1e,0);
          SetTrigg(0x1f,0);
          SetTrigg(0x20,0);
          SetTrigg(0x21,0);
          SetTrigg(0x28,0);
          SetTrigg(0x29,0);
          SetTrigg(0x2a,0);
          SetTrigg(0x2b,0);
        }
      }
      else {
        CreateObject0(&DAT_100065e0,&DAT_100066d0,&DAT_10006730,5,&DAT_10006750,0x80);
        SelectUnits(&DAT_100065e0,0);
        SelectUnits(&DAT_100066a0,1);
        AllowAttack(5,0);
        SelSendTo(5,&DAT_10006710,0x80,0);
        cVar1 = Trigg(0x25);
        if (cVar1 == '\0') {
          SetTrigg(0x25,0);
        }
        else {
          CreateObject0(&DAT_100065e8,&DAT_100066d0,&DAT_10006730,5,&DAT_10006750,0x80);
          SelectUnits(&DAT_100065e8,0);
          SelSendAndKill(5,&DAT_10006650,0x80,0);
          CreateObject0(&DAT_100065f8,&DAT_100066d0,&DAT_10006730,5,&DAT_10006758,0x80);
          SelectUnits(&DAT_100065f8,0);
          SelSendAndKill(5,&DAT_10006658,0x80,0);
          SetTrigg(0x25,0);
        }
        SetTrigg(0x1e,0);
        SetTrigg(0x1f,0);
        SetTrigg(0x20,0);
        SetTrigg(0x21,0);
        SetTrigg(0x28,0);
        SetTrigg(0x29,0);
        SetTrigg(0x2a,0);
        SetTrigg(0x2b,0);
        SetTrigg(0x15,0);
        RunTimer(0x15,5000);
      }
    }
    cVar1 = Trigg(0x1e);
    if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006590,&DAT_100065e0), 0 < iVar3)) {
      SelectUnits(&DAT_100065e0,0);
      SelectUnits(&DAT_100066a0,1);
      SelSendAndKill(5,&DAT_10006668,0x6e,0);
      SetTrigg(0x1e,0);
    }
    cVar1 = Trigg(0x1f);
    if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006778,&DAT_100065e0), 0 < iVar3)) {
      DAT_10006618 = DAT_10006618 + 1;
      SelectUnits(&DAT_100065e0,0);
      SelectUnits(&DAT_100066a0,1);
      SelSendAndKill(5,&DAT_10006678,0x28,0);
      SetTrigg(0x1f,0);
    }
    cVar1 = Trigg(0x20);
    if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006780,&DAT_100065e0), 0 < iVar3)) {
      DAT_10006748 = DAT_10006748 + 1;
      SelectUnits(&DAT_100065e0,0);
      SelectUnits(&DAT_100066a0,1);
      SelSendAndKill(5,&DAT_10006688,0xdc,0);
      SetTrigg(0x20,0);
    }
    cVar1 = Trigg(0x21);
    if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006788,&DAT_100065e0), 0 < iVar3)) {
      DAT_1000661c = DAT_1000661c + 1;
      SelectUnits(&DAT_100065e0,0);
      SelectUnits(&DAT_100066a0,1);
      SelSendAndKill(5,&DAT_10006648,0x80,0);
      SetTrigg(0x21,0);
    }
    cVar1 = Trigg(0x28);
    if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006590,&DAT_100066a0), 0 < iVar3)) {
      SelectUnits(&DAT_100066a0,0);
      SelSendAndKill(5,&DAT_10006668,0x6e,0);
      SetTrigg(0x28,0);
    }
    cVar1 = Trigg(0x29);
    if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006778,&DAT_100066a0), 0 < iVar3)) {
      DAT_10006618 = DAT_10006618 + 1;
      SelectUnits(&DAT_100066a0,0);
      SelSendAndKill(5,&DAT_10006678,0x28,0);
      SetTrigg(0x29,0);
    }
    cVar1 = Trigg(0x2a);
    if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006780,&DAT_100066a0), 0 < iVar3)) {
      DAT_10006748 = DAT_10006748 + 1;
      SelectUnits(&DAT_100066a0,0);
      SelSendAndKill(5,&DAT_10006688,0xdc,0);
      SetTrigg(0x2a,0);
    }
    cVar1 = Trigg(0x2b);
    if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006788,&DAT_100066a0), 0 < iVar3)) {
      DAT_1000661c = DAT_1000661c + 1;
      SelectUnits(&DAT_100066a0,0);
      SelSendAndKill(5,&DAT_10006648,0x80,0);
      SetTrigg(0x2b,0);
    }
    cVar1 = NationIsErased(5);
    if ((cVar1 != '\0') || (iVar3 = GetUnitsAmount0(&DAT_10006698,5), iVar3 < 10)) {
      DAT_1000661c = DAT_1000661c * 500;
      DAT_10006618 = DAT_10006618 * 500;
      DAT_10006748 = DAT_10006748 * 500;
      ShowPageParam("#PAGE9",DAT_10006748,DAT_10006618,DAT_1000661c);
      DisableMission(0x42);
      EnableMission(0x43);
      AddResource(0,1,DAT_10006748);
      AddResource(0,4,DAT_10006618);
      AddResource(0,5,DAT_1000661c);
      SetTrigg(0x23,0);
    }
  }
  cVar1 = Trigg(0x26);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    ShowPage("#PAGE10");
    SetTrigg(0x26,0);
  }
  cVar1 = Trigg(0x27);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE11");
    SetTrigg(0x27,0);
  }
  cVar1 = NationIsErased(1);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE8");
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
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
