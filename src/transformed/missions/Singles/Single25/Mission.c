#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_10007088[] = "Z54";
char DAT_1000708c[] = "Z53";
char DAT_10007090[] = "Z52";
char DAT_10007094[] = "Z51";
char DAT_10007098[] = "Z50";
char DAT_100070dc[] = "G9";
char DAT_100070e8[] = "Z044";
char DAT_100070f8[] = "Z043";
char DAT_10007108[] = "Z042";
char DAT_10007118[] = "Z041";
char DAT_10007120[] = "Z44";
char DAT_10007124[] = "Z43";
char DAT_10007128[] = "Z42";
char DAT_1000712c[] = "Z41";
char DAT_10007130[] = "Z9B";
char DAT_10007134[] = "Z9A";
char DAT_10007138[] = "Z9D";
char DAT_1000713c[] = "Z10";
char DAT_10007140[] = "Z9";
char DAT_10007144[] = "Z5B";
char DAT_10007148[] = "Z5A";
char DAT_1000714c[] = "Z5D";
char DAT_10007150[] = "Z6";
char DAT_10007154[] = "Z5";
char DAT_10007158[] = "Z27";
char DAT_1000715c[] = "Z37";
char DAT_10007160[] = "Z26";
char DAT_10007164[] = "Z36";
char DAT_10007168[] = "Z25";
char DAT_1000716c[] = "Z35";
char DAT_10007170[] = "Z24";
char DAT_10007174[] = "Z34";
char DAT_10007178[] = "Z23";
char DAT_1000717c[] = "Z33";
char DAT_10007180[] = "Z22";
char DAT_10007184[] = "Z32";
char DAT_10007188[] = "Z21";
char DAT_1000718c[] = "Z31";
char DAT_10007190[] = "Z4";
char DAT_10007194[] = "Z3";
char DAT_10007198[] = "Z07";
char DAT_1000719c[] = "Z17";
char DAT_100071a0[] = "Z06";
char DAT_100071a4[] = "Z16";
char DAT_100071a8[] = "Z05";
char DAT_100071ac[] = "Z15";
char DAT_100071b0[] = "Z04";
char DAT_100071b4[] = "Z14";
char DAT_100071b8[] = "Z03";
char DAT_100071bc[] = "Z13";
char DAT_100071c0[] = "Z02";
char DAT_100071c4[] = "Z12";
char DAT_100071c8[] = "Z01";
char DAT_100071cc[] = "Z11";
char DAT_100071d0[] = "Z2";
char DAT_100071d4[] = "Z1";
long long DAT_100075b0 = 0;
int DAT_100075b8 = 0;
int DAT_100075bc = 0;
int DAT_100075c0 = 0;
long long DAT_100075c8 = 0;
long long DAT_100075d0 = 0;
long long DAT_100075d8 = 0;
long long DAT_100075e0 = 0;
long long DAT_100075e8 = 0;
long long DAT_100075f0 = 0;
long long DAT_100075f8 = 0;
long long DAT_10007600 = 0;
long long DAT_10007608 = 0;
long long DAT_10007610 = 0;
long long DAT_10007618 = 0;
long long DAT_10007620 = 0;
long long DAT_10007628 = 0;
long long DAT_10007630 = 0;
long long DAT_10007638 = 0;
long long DAT_10007640 = 0;
long long DAT_10007648 = 0;
long long DAT_10007650 = 0;
long long DAT_10007658 = 0;
long long DAT_10007660 = 0;
long long DAT_10007668 = 0;
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
int DAT_100076e8 = 0;
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
long long DAT_10007788 = 0;
long long DAT_10007790 = 0;
long long DAT_10007798 = 0;
long long DAT_100077a0 = 0;
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
long long DAT_10007870 = 0;
long long DAT_10007878 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  SetPlayerName(1,"ENGLAND");
  SetPlayerName(2,"PORTUGALIA");
  SetPlayerName(3,"SPAIN");
  SetPlayerName(5,"PIRATES");
  RegisterVar(&DAT_100075b8,4);
  RegisterVar(&DAT_100075c0,4);
  RegisterVar(&DAT_100076e8,4);
  ChangeFriends(1,0xfe);
  ChangeFriends(2,0xfe);
  ChangeFriends(3,0xfe);
  RegisterZone(&DAT_10007658,DAT_100071d4);
  RegisterZone(&DAT_10007668,DAT_100071d0);
  RegisterZone(&DAT_10007730,DAT_100071cc);
  RegisterZone(&DAT_10007700,DAT_100071c8);
  RegisterZone(&DAT_10007740,DAT_100071c4);
  RegisterZone(&DAT_10007708,DAT_100071c0);
  RegisterZone(&DAT_10007750,DAT_100071bc);
  RegisterZone(&DAT_10007710,DAT_100071b8);
  RegisterZone(&DAT_10007758,DAT_100071b4);
  RegisterZone(&DAT_10007720,DAT_100071b0);
  RegisterZone(&DAT_10007768,DAT_100071ac);
  RegisterZone(&DAT_10007728,DAT_100071a8);
  RegisterZone(&DAT_10007778,DAT_100071a4);
  RegisterZone(&DAT_10007738,DAT_100071a0);
  RegisterZone(&DAT_10007788,DAT_1000719c);
  RegisterZone(&DAT_10007748,DAT_10007198);
  RegisterZone(&DAT_10007670,DAT_10007194);
  RegisterZone(&DAT_10007678,DAT_10007190);
  RegisterZone(&DAT_100077a8,DAT_1000718c);
  RegisterZone(&DAT_10007760,DAT_10007188);
  RegisterZone(&DAT_100077b8,DAT_10007184);
  RegisterZone(&DAT_10007770,DAT_10007180);
  RegisterZone(&DAT_100077c0,DAT_1000717c);
  RegisterZone(&DAT_10007780,DAT_10007178);
  RegisterZone(&DAT_100077c8,DAT_10007174);
  RegisterZone(&DAT_10007790,DAT_10007170);
  RegisterZone(&DAT_100077d8,DAT_1000716c);
  RegisterZone(&DAT_10007798,DAT_10007168);
  RegisterZone(&DAT_100077e8,DAT_10007164);
  RegisterZone(&DAT_100077a0,DAT_10007160);
  RegisterZone(&DAT_100077f8,DAT_1000715c);
  RegisterZone(&DAT_100077b0,DAT_10007158);
  RegisterZone(&DAT_10007680,DAT_10007154);
  RegisterZone(&DAT_10007690,DAT_10007150);
  RegisterZone(&DAT_10007840,DAT_1000714c);
  RegisterZone(&DAT_10007830,DAT_10007148);
  RegisterZone(&DAT_10007838,DAT_10007144);
  RegisterZone(&DAT_10007698,DAT_10007140);
  RegisterZone(&DAT_10007718,DAT_1000713c);
  RegisterZone(&DAT_10007858,DAT_10007138);
  RegisterZone(&DAT_10007848,DAT_10007134);
  RegisterZone(&DAT_10007850,DAT_10007130);
  RegisterZone(&DAT_100077d0,DAT_1000712c);
  RegisterZone(&DAT_100077e0,DAT_10007128);
  RegisterZone(&DAT_100077f0,DAT_10007124);
  RegisterZone(&DAT_10007808,DAT_10007120);
  RegisterZone(&DAT_10007860,DAT_10007118);
  RegisterZone(&DAT_100075c8,"Z041D");
  RegisterZone(&DAT_10007868,DAT_10007108);
  RegisterZone(&DAT_100075d0,"Z042D");
  RegisterZone(&DAT_10007870,DAT_100070f8);
  RegisterZone(&DAT_100075d8,"Z043D");
  RegisterZone(&DAT_10007878,DAT_100070e8);
  RegisterZone(&DAT_100075e0,"Z044D");
  RegisterUnits(&DAT_10007610,DAT_100070dc);
  RegisterUnits(&DAT_10007618,"G5051");
  RegisterUnits(&DAT_10007628,"G5150");
  RegisterUnits(&DAT_10007630,"G5152");
  RegisterUnits(&DAT_10007638,"G5251");
  RegisterUnits(&DAT_10007650,"G5354");
  RegisterUnits(&DAT_100076b0,"G5453");
  RegisterUnits(&DAT_100076a8,"G5450");
  RegisterUnits(&DAT_10007620,"G5054");
  RegisterZone(&DAT_10007800,DAT_10007098);
  RegisterZone(&DAT_10007810,DAT_10007094);
  RegisterZone(&DAT_10007818,DAT_10007090);
  RegisterZone(&DAT_10007820,DAT_1000708c);
  RegisterZone(&DAT_10007828,DAT_10007088);
  RegisterDynGroup(&DAT_100075e8);
  RegisterDynGroup(&DAT_10007608);
  RegisterFormation(&DAT_10007660,"#ALONE");
  RegisterUnitType(&DAT_100076b8,"Fregat(en)");
  RegisterDynGroup(&DAT_100075f0);
  RegisterFormation(&DAT_10007688,"#ALONE");
  RegisterUnitType(&DAT_100076c0,"Fregat(en)");
  RegisterDynGroup(&DAT_10007600);
  RegisterDynGroup(&DAT_100075f8);
  RegisterDynGroup(&DAT_10007640);
  RegisterDynGroup(&DAT_10007648);
  RegisterFormation(&DAT_100076a0,"#ALONE");
  RegisterUnitType(&DAT_100076c8,"Pehota_turki_DIP(en)");
  RegisterVar(&DAT_100075e8,8);
  RegisterVar(&DAT_10007608,8);
  RegisterVar(&DAT_100075f0,8);
  RegisterVar(&DAT_10007600,8);
  RegisterVar(&DAT_100075f8,8);
  RegisterVar(&DAT_10007640,8);
  RegisterVar(&DAT_10007648,8);
  RegisterUnitType(&DAT_100076f8,"shahta(fr)");
  RegisterUnitType(&DAT_100075b0,"shahta_FE(fr)");
  RegisterUnitType(&DAT_100076f0,"shahta_UG(fr)");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pcVar5;
  int *puVar6;
  int uVar7;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    DAT_100075c0 = GetDiff(0);
    DAT_100076e8 = DAT_100075c0 + 0xf;
    DAT_100075b8 = 1;
    if (DAT_100075c0 != 0) {
      RunTimer(1,10000);
    }
    RunTimer(5,1000);
    RunTimer(4,0);
    SelectUnits(&DAT_10007628,0);
    SelectUnits(&DAT_100076a8,1);
    Patrol(5,&DAT_10007800,0);
    SelectUnits(&DAT_10007618,0);
    SelectUnits(&DAT_10007638,1);
    Patrol(5,&DAT_10007810,0);
    SelectUnits(&DAT_10007630,0);
    Patrol(5,&DAT_10007818,0);
    SelectUnits(&DAT_100076b0,0);
    Patrol(5,&DAT_10007820,0);
    SelectUnits(&DAT_10007620,0);
    SelectUnits(&DAT_10007650,1);
    Patrol(5,&DAT_10007828,0);
    InitialUpgrade(DAT_100070dc,"AKA16BA");
    InitialUpgrade(DAT_100070dc,"AKA17BA");
    InitialUpgrade(DAT_100070dc,"AKA20BA");
    InitialUpgrade(DAT_100070dc,"AKA28BA");
    if (DAT_100075c0 == 1) {
LAB_100016a6:
      AddResource(0,3,-1000);
      AddResource(0,1,-1000);
      AddResource(0,0,-1000);
      AddResource(0,2,-1000);
      AddResource(0,5,-1000);
      AddResource(0,4,-1000);
    }
    else {
      if (DAT_100075c0 == 2) {
LAB_10001669:
        AddResource(0,3,-1000);
        AddResource(0,1,-1000);
        AddResource(0,0,-1000);
        AddResource(0,2,-1000);
        AddResource(0,5,-1000);
        AddResource(0,4,-1000);
        goto LAB_100016a6;
      }
      if (DAT_100075c0 == 3) {
        AddResource(0,3,-2000);
        AddResource(0,1,-2000);
        AddResource(0,0,-2000);
        AddResource(0,2,-2000);
        AddResource(0,5,-2000);
        AddResource(0,4,-2000);
        InitialUpgrade(DAT_100070dc,"AKA27BA");
        goto LAB_10001669;
      }
    }
    RunTimer(0xf,0x32);
    StartAI(1,"ENGLAND.0",2,0,1,DAT_100075c0);
    StartAI(2,"PORTUGALIA.0",2,0,1,DAT_100075c0);
    StartAI(3,"SPAIN.0",2,0,1,DAT_100075c0);
    ShowPage("#PAGE0");
    SetTrigg(99,0);
  }
  cVar1 = Trigg(0x2d);
  if (cVar1 == '\0') goto LAB_1000258c;
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    DAT_100076e8 = DAT_100076e8 + DAT_100075c0;
    SetTrigg(0x4d,0);
    RunTimer(1,10000);
  }
  iVar2 = GetTotalAmount0(&DAT_100075e8);
  if (iVar2 == 0) {
    FreeTimer(4);
    RunTimer(4,0);
    SetTrigg(0x15,0);
    SetTrigg(0x17,0);
    SetTrigg(0x19,0);
    SetTrigg(0x1e,0);
  }
  cVar1 = Trigg(0x4d);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10007608), iVar2 == 0)) {
    FreeTimer(4);
    RunTimer(4,0);
    SetTrigg(0x15,0);
    SetTrigg(0x21,0);
    SetTrigg(0x23,0);
    SetTrigg(0x28,0);
  }
  cVar1 = TimerDone(4);
  if (cVar1 != '\0') {
    cVar1 = Trigg(0x15);
    if (cVar1 == '\0') {
      CreateObject0(&DAT_10007608,&DAT_10007660,&DAT_100076b8,5,&DAT_10007678,0x80);
      SelectUnits(&DAT_10007608,0);
      SelSendTo(5,&DAT_10007830,0xc0,0);
      SetTrigg(0x33,0);
      SetTrigg(0x20,0);
    }
    else {
      CreateObject0(&DAT_100075e8,&DAT_10007660,&DAT_100076b8,5,&DAT_10007668,0x55);
      SelectUnits(&DAT_100075e8,0);
      SelSendTo(5,&DAT_10007848,0x40,0);
      SetTrigg(0x32,0);
      SetTrigg(0x16,0);
    }
    SetTrigg(0x15,0);
    RunTimer(4,5000);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x16), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount1(&DAT_10007848,&DAT_100075e8), 0 < iVar2)) {
    iVar2 = GetUnitsAmount0(&DAT_10007858,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_10007858,5,0);
      SelSendTo(5,&DAT_10007730,0,0);
      AllowAttack(5,1);
    }
    SelectUnits(&DAT_100075e8,0);
    SelSendTo(5,&DAT_10007858,0x20,0);
    SetTrigg(0x32,0);
    SetTrigg(0x17,0);
    SetTrigg(0x16,0);
    RunTimer(2,1000);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 == '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    FreeTimer(2);
    SelectUnits(&DAT_100075e8,0);
    AllowAttack(5,0);
    SelSendTo(5,&DAT_10007698,0x4a,0);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007858,&DAT_100075e8), 0 < iVar2)) {
    iVar2 = GetUnitsAmount0(&DAT_10007808,0);
    iVar3 = GetUnitsAmount0(&DAT_100077f0,0);
    if ((iVar2 < iVar3) && (iVar2 = GetUnitsAmount0(&DAT_10007808,0), iVar2 != 0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    SetTrigg(0x1d,0);
    DAT_100075b8 = 0;
    if (-1 < DAT_100076e8) {
      do {
        CreateObject0(&DAT_100075f8,&DAT_100076a0,&DAT_100076c8,5,&DAT_10007718,0);
        SelectUnits(&DAT_100075f8,0);
        RemoveGroup(&DAT_100075f8,&DAT_10007648);
        DAT_100075b8 = DAT_100075b8 + 1;
      } while (DAT_100075b8 <= DAT_100076e8);
    }
    SelectUnits(&DAT_10007648,0);
    cVar1 = Trigg(0x1d);
    if (cVar1 == '\0') {
      puVar6 = &DAT_10007870;
    }
    else {
      puVar6 = &DAT_10007878;
    }
    SelSendAndKill(5,puVar6,0,0);
    SetTrigg(0x18,0);
    SetTrigg(0x17,0);
  }
  cVar1 = Trigg(0x18);
  if (cVar1 == '\0') {
    cVar1 = Trigg(0x1d);
    if (cVar1 == '\0') {
      iVar2 = GetUnitsAmount0(&DAT_100077f0,0);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_100075d8,5);
        if (iVar2 < 1) {
          SelectUnits(&DAT_10007648,0);
          puVar6 = &DAT_10007870;
          goto LAB_10001b54;
        }
LAB_10001b02:
        SetTrigg(0x1e,0);
      }
    }
    else {
      iVar2 = GetUnitsAmount0(&DAT_10007808,0);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_100075e0,5);
        if (0 < iVar2) goto LAB_10001b02;
        SelectUnits(&DAT_10007648,0);
        puVar6 = &DAT_10007878;
LAB_10001b54:
        SelSendAndKill(5,puVar6,0,0);
      }
    }
  }
  cVar1 = Trigg(0x1e);
  if (cVar1 == '\0') {
    SetTrigg(0x19,0);
    SetTrigg(0x18,0);
    SetTrigg(0x1e,0);
    iVar2 = GetUnitsAmount2(&DAT_10007858,&DAT_100076b8,5);
    if (0 < iVar2) {
      SelectUnits(&DAT_10007648,0);
      SelSendTo(5,&DAT_10007718,0x40,0);
      SetTrigg(0x19,0);
    }
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10007648), iVar2 == 0)) {
    SelectUnitsInZone(&DAT_10007858,5,0);
    SelSendTo(5,&DAT_10007730,0,0);
    AllowAttack(5,1);
    SetTrigg(0x18,0);
    SetTrigg(0x19,0);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10007858,5), 0 < iVar2)) {
    SelectTypeOfUnitsInZone(&DAT_10007858,&DAT_100076c8,5,0);
    iVar2 = GetUnitsAmount2(&DAT_10007858,&DAT_100076b8,5);
    if (0 < iVar2) {
      SelErase(5);
      SelectUnitsInZone(&DAT_10007858,5,0);
      AllowAttack(5,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10007648);
    if (iVar2 == 0) {
      SelectUnitsInZone(&DAT_10007858,5,0);
      SelSendTo(5,&DAT_10007730,0,0);
      AllowAttack(5,1);
      SetTrigg(0x19,0);
    }
    else {
      SelectUnits(&DAT_10007648,0);
      SelSendTo(5,&DAT_10007718,0,0);
    }
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x20), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount1(&DAT_10007830,&DAT_10007608), 0 < iVar2)) {
    iVar2 = GetUnitsAmount0(&DAT_10007840,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_10007840,5,0);
      SelSendTo(5,&DAT_100077a8,0,0);
      AllowAttack(5,1);
    }
    SelectUnits(&DAT_10007608,0);
    SelSendTo(5,&DAT_10007838,0x20,0);
    SetTrigg(0x33,0);
    SetTrigg(0x21,0);
    SetTrigg(0x20,0);
    RunTimer(3,1000);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 == '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    FreeTimer(3);
    SelectUnits(&DAT_10007608,0);
    AllowAttack(5,0);
    SelSendTo(5,&DAT_10007680,0,0);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007840,&DAT_10007608), 0 < iVar2)) {
    iVar2 = GetUnitsAmount0(&DAT_100077e0,0);
    iVar3 = GetUnitsAmount0(&DAT_100077d0,0);
    if ((iVar3 < iVar2) || (iVar2 = GetUnitsAmount0(&DAT_100077e0,0), iVar2 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    SetTrigg(0x1d,0);
    DAT_100075bc = 0;
    if (-1 < DAT_100076e8) {
      do {
        CreateObject0(&DAT_100075f8,&DAT_100076a0,&DAT_100076c8,5,&DAT_10007690,0);
        SelectUnits(&DAT_100075f8,0);
        RemoveGroup(&DAT_100075f8,&DAT_10007640);
        DAT_100075bc = DAT_100075bc + 1;
      } while (DAT_100075bc <= DAT_100076e8);
    }
    SelectUnits(&DAT_10007640,0);
    cVar1 = Trigg(0x1d);
    if (cVar1 == '\0') {
      puVar6 = &DAT_10007860;
    }
    else {
      puVar6 = &DAT_10007868;
    }
    SelSendAndKill(5,puVar6,0,0);
    SetTrigg(0x22,0);
    SetTrigg(0x21,0);
  }
  cVar1 = Trigg(0x22);
  if (cVar1 == '\0') {
    cVar1 = Trigg(0x1d);
    if (cVar1 == '\0') {
      iVar2 = GetUnitsAmount0(&DAT_100077d0,0);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_100075c8,5);
        if (iVar2 < 1) {
          SelectUnits(&DAT_10007640,0);
          puVar6 = &DAT_10007860;
          goto LAB_10001f4b;
        }
LAB_10001ef9:
        SetTrigg(0x28,0);
      }
    }
    else {
      iVar2 = GetUnitsAmount0(&DAT_100077e0,0);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_100075d0,5);
        if (0 < iVar2) goto LAB_10001ef9;
        SelectUnits(&DAT_10007640,0);
        puVar6 = &DAT_10007868;
LAB_10001f4b:
        SelSendAndKill(5,puVar6,0,0);
      }
    }
  }
  cVar1 = Trigg(0x28);
  if (cVar1 == '\0') {
    SetTrigg(0x23,0);
    SetTrigg(0x22,0);
    SetTrigg(0x28,0);
    iVar2 = GetUnitsAmount2(&DAT_10007840,&DAT_100076b8,5);
    if (0 < iVar2) {
      SelectUnits(&DAT_10007640,0);
      SelSendTo(5,&DAT_10007690,0x40,0);
      SetTrigg(0x23,0);
    }
  }
  cVar1 = Trigg(0x22);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10007640), iVar2 == 0)) {
    SelectUnitsInZone(&DAT_10007840,5,0);
    SelSendTo(5,&DAT_100077a8,0,0);
    AllowAttack(5,1);
    SetTrigg(0x22,0);
    SetTrigg(0x23,0);
  }
  cVar1 = Trigg(0x23);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10007840,5), 0 < iVar2)) {
    SelectTypeOfUnitsInZone(&DAT_10007840,&DAT_100076c8,5,0);
    iVar2 = GetUnitsAmount2(&DAT_10007840,&DAT_100076b8,5);
    if (0 < iVar2) {
      SelErase(5);
      SelectUnitsInZone(&DAT_10007840,5,0);
      AllowAttack(5,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10007640);
    if (iVar2 == 0) {
      SelectUnitsInZone(&DAT_10007840,5,0);
      SelSendTo(5,&DAT_100077a8,0,0);
      AllowAttack(5,1);
      SetTrigg(0x23,0);
    }
    else {
      SelectUnits(&DAT_10007640,0);
      SelSendTo(5,&DAT_10007690,0,0);
    }
  }
  if ((DAT_100075c0 != 0) && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    if (DAT_100075c0 < DAT_100075b8) {
      SelectTypeOfUnitsInZone(&DAT_10007658,&DAT_100076c0,5,0);
      SelSendTo(5,&DAT_10007658,0x40,0);
      SelectTypeOfUnitsInZone(&DAT_10007670,&DAT_100076c0,5,0);
      SelSendTo(5,&DAT_10007670,0xc0,0);
      DAT_100075b8 = 1;
      RunTimer(5,30000);
    }
    else {
      CreateObject0(&DAT_100075f0,&DAT_10007688,&DAT_100076c0,5,&DAT_10007668,0x55);
      SelectUnits(&DAT_100075f0,0);
      SelSendTo(5,&DAT_10007658,0x40,0);
      CreateObject0(&DAT_10007600,&DAT_10007688,&DAT_100076c0,5,&DAT_10007678,0x8c);
      SelectUnits(&DAT_10007600,0);
      SelSendTo(5,&DAT_10007670,0xa0,0);
      DAT_100075b8 = DAT_100075b8 + 1;
      RunTimer(5,0x15e);
    }
  }
  cVar1 = Trigg(0x32);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount2(&DAT_10007730,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_10007730,5,0);
      SelectUnitsInZone(&DAT_10007700,5,1);
      SelSendTo(5,&DAT_10007700,0x20,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_10007740,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_10007740,5,0);
      SelectUnitsInZone(&DAT_10007708,5,1);
      SelSendTo(5,&DAT_10007708,0x20,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_10007750,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_10007750,5,0);
      SelectUnitsInZone(&DAT_10007710,5,1);
      SelSendTo(5,&DAT_10007710,0x20,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_10007758,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_10007758,5,0);
      SelectUnitsInZone(&DAT_10007720,5,1);
      SelSendTo(5,&DAT_10007720,0x20,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_10007768,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_10007768,5,0);
      SelectUnitsInZone(&DAT_10007728,5,1);
      SelSendTo(5,&DAT_10007728,0x20,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_10007778,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_10007778,5,0);
      SelectUnitsInZone(&DAT_10007738,5,1);
      SelSendTo(5,&DAT_10007738,0x20,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_10007788,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_10007788,5,0);
      SelectUnitsInZone(&DAT_10007748,5,1);
      SelSendTo(5,&DAT_10007748,0x20,0);
    }
  }
  cVar1 = Trigg(0x33);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount2(&DAT_100077a8,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_100077a8,5,0);
      SelectUnitsInZone(&DAT_10007760,5,1);
      SelSendTo(5,&DAT_10007760,0x8c,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_100077b8,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_100077b8,5,0);
      SelectUnitsInZone(&DAT_10007770,5,1);
      SelSendTo(5,&DAT_10007770,0x8c,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_100077c0,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_100077c0,5,0);
      SelectUnitsInZone(&DAT_10007780,5,1);
      SelSendTo(5,&DAT_10007780,0x8c,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_100077c8,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_100077c8,5,0);
      SelectUnitsInZone(&DAT_10007790,5,1);
      SelSendTo(5,&DAT_10007790,0x8c,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_100077d8,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_100077d8,5,0);
      SelectUnitsInZone(&DAT_10007798,5,1);
      SelSendTo(5,&DAT_10007798,0x8c,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_100077e8,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_100077e8,5,0);
      SelectUnitsInZone(&DAT_100077a0,5,1);
      SelSendTo(5,&DAT_100077a0,0x8c,0);
    }
    iVar2 = GetUnitsAmount2(&DAT_100077f8,&DAT_100076c0,5);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_100077f8,5,0);
      SelectUnitsInZone(&DAT_100077b0,5,1);
      SelSendTo(5,&DAT_100077b0,0x8c,0);
    }
  }
LAB_1000258c:
  cVar1 = TimerDone(0xf);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount1(&DAT_100076f0,5);
    iVar3 = GetTotalAmount1(&DAT_100075b0,5);
    iVar4 = GetTotalAmount1(&DAT_100076f8,5);
    if (0 < iVar2 + iVar3 + iVar4) {
      ClearSelection(5);
      SelectUnitsType(&DAT_100076f8,5,0);
      SelectUnitsType(&DAT_100075b0,5,1);
      SelectUnitsType(&DAT_100076f0,5,1);
      SelDie(5);
      ClearSelection(5);
      RunTimer(0xf,0x15e);
    }
  }
  cVar1 = Trigg(0x29);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    ShowPage("#PAGE1");
    SetTrigg(0x29,0);
  }
  cVar1 = Trigg(0x2a);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE2");
    SetTrigg(0x2a,0);
  }
  cVar1 = Trigg(0x2b);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage("#PAGE3");
    SetTrigg(0x2b,0);
  }
  cVar1 = Trigg(0x2d);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount1(&DAT_100076c0,5);
    iVar3 = GetTotalAmount1(&DAT_100076c8,5);
    iVar4 = GetTotalAmount1(&DAT_100076b8,5);
    if (iVar2 + iVar3 + iVar4 == 0) {
      ShowPage("#PAGE5");
      SetTrigg(0x2d,0);
    }
  }
  cVar1 = NationIsErased(1);
  if ((((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) &&
      (cVar1 = NationIsErased(3), cVar1 != '\0')) && (cVar1 = NationIsErased(5), cVar1 != '\0')) {
    ShowPage("#PAGE8");
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE9");
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
