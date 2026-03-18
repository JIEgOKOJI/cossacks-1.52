#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1000706c[] = "ZAP5";
char DAT_10007074[] = "ZAP4";
char DAT_1000707c[] = "ZAP3";
char DAT_10007084[] = "ZAP2";
char DAT_1000708c[] = "ZAP1";
char DAT_10007094[] = "ZA5";
char DAT_10007098[] = "ZA4";
char DAT_1000709c[] = "ZA3";
char DAT_100070a0[] = "ZA2";
char DAT_100070a4[] = "ZA1";
char DAT_100070a8[] = "Z021";
char DAT_100070b0[] = "Z02";
char DAT_100070b4[] = "Z01";
char DAT_10007148[] = "GSp";
char DAT_1000714c[] = "ZP03";
char DAT_10007154[] = "ZP01";
char DAT_1000715c[] = "ZP3";
char DAT_10007160[] = "ZP2";
char DAT_10007164[] = "ZP1";
char DAT_10007168[] = "Z1";
char DAT_1000716c[] = "Z0";
long long DAT_10007580 = 0;
long long DAT_10007588 = 0;
long long DAT_10007598 = 0;
long long DAT_100075a0 = 0;
int DAT_100075a4 = 0;
long long DAT_100075a8 = 0;
long long DAT_100075b0 = 0;
long long DAT_100075c0 = 0;
long long DAT_100075c8 = 0;
long long DAT_100075d0 = 0;
long long DAT_100075d8 = 0;
long long DAT_100075e0 = 0;
long long DAT_100075e8 = 0;
long long DAT_100075f0 = 0;
long long DAT_10007610 = 0;
long long DAT_10007618 = 0;
long long DAT_10007628 = 0;
long long DAT_10007630 = 0;
long long DAT_10007648 = 0;
long long DAT_10007650 = 0;
long long DAT_10007658 = 0;
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
int DAT_100076d8 = 0;
long long DAT_100076e0 = 0;
long long DAT_100076e8 = 0;
long long DAT_100076f0 = 0;
long long DAT_100076f8 = 0;
long long DAT_10007700 = 0;
long long DAT_10007708 = 0;
long long DAT_10007710 = 0;
long long DAT_10007718 = 0;
long long DAT_10007720 = 0;
long long DAT_10007730 = 0;
long long DAT_10007738 = 0;
long long DAT_10007740 = 0;
long long DAT_10007748 = 0;
long long DAT_10007750 = 0;
long long DAT_10007758 = 0;
long long DAT_10007768 = 0;
int DAT_10007770 = 0;
long long DAT_10007778 = 0;
long long DAT_10007780 = 0;
long long DAT_10007788 = 0;
long long DAT_10007790 = 0;
long long DAT_10007798 = 0;

/* Forward declarations */
int FUN_10001012(int param_1);
int FUN_10001030(int param_1,int param_2,int param_3,int param_4);
void FUN_10001073(int param_1,int param_2);
void FUN_1000108b(int param_1,int param_2,int param_3);
void FUN_100010a2(int param_1,int param_2);
void FUN_100010ba(int param_1,int param_2,int param_3);
void FUN_100010f6(int param_1,int param_2,int param_3,int param_4);

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





int __cdecl
FUN_10001030(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10001012(param_1);
  iVar2 = GetUnitsByNation(param_1,iVar1);
  if (iVar2 != 0) {
    SelectUnits1(iVar1,param_1,0);
    SelSendAndKill(iVar1,param_2,param_3,param_4);
  }
  return iVar1;
}





void __cdecl FUN_10001073(int param_1,int param_2)

{
  FUN_10001030(param_1,param_2,200,2);
  return;
}





void __cdecl FUN_1000108b(int param_1,int param_2,int param_3)

{
  FUN_10001030(param_1,param_2,param_3,2);
  return;
}





void __cdecl FUN_100010a2(int param_1,int param_2)

{
  FUN_10001030(param_1,param_2,200,0);
  return;
}





void __cdecl FUN_100010ba(int param_1,int param_2,int param_3)

{
  FUN_10001030(param_1,param_2,param_3,0);
  return;
}






void __cdecl
FUN_100010f6(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(param_3);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(param_1);
    if (iVar2 < 2) {
      CreateObject0(&DAT_100075f0,&DAT_100076d0,param_2,5,param_4,0);
      RemoveGroup(&DAT_100075f0,param_1);
      FUN_100010a2(param_1,&DAT_10007740);
      RunTimer(param_3,0x10e);
      return;
    }
    RunTimer(param_3,0x5dc);
  }
  return;
}





void OnInit(void)

{
                    
  RegisterVar(&DAT_100075a0,4);
  RegisterVar(&DAT_100075a4,4);
  RegisterVar(&DAT_10007770,4);
  RegisterVar(&DAT_100076d8,4);
  SetPlayerName(1,"ALJERIANS");
  SetPlayerName(2,"SPAIN");
  SetPlayerName(5,"PIRATES");
  RegisterUnits(&DAT_10007698,"GErase");
  RegisterZone(&DAT_10007610,DAT_1000716c);
  RegisterZone(&DAT_10007618,DAT_10007168);
  RegisterZone(&DAT_10007738,DAT_10007164);
  RegisterZone(&DAT_10007740,DAT_10007160);
  RegisterZone(&DAT_10007748,DAT_1000715c);
  RegisterZone(&DAT_10007630,DAT_10007154);
  RegisterZone(&DAT_10007648,DAT_1000714c);
  RegisterUnits(&DAT_100076c0,DAT_10007148);
  RegisterDynGroup(&DAT_100075f0);
  RegisterDynGroup(&DAT_100076a0);
  RegisterVar(&DAT_100076a0,8);
  RegisterDynGroup(&DAT_100076a8);
  RegisterVar(&DAT_100076a8,8);
  RegisterDynGroup(&DAT_100076b0);
  RegisterVar(&DAT_100076b0,8);
  RegisterDynGroup(&DAT_100076b8);
  RegisterVar(&DAT_100076b8,8);
  RegisterDynGroup(&DAT_10007778);
  RegisterVar(&DAT_10007778,8);
  RegisterUnits(&DAT_10007750,"GWood");
  RegisterUnits(&DAT_10007720,"GFood");
  RegisterUnits(&DAT_100076c8,"GStone");
  RegisterUnitType(&DAT_10007650,"PorPO(PO)");
  RegisterUnitType(&DAT_10007598,"Kreposnoi_portugal(PO)");
  RegisterUpgrade(&DAT_10007768,"MAINPO");
  RegisterUnitType(&DAT_10007730,"Shebeka(AL)");
  RegisterUnitType(&DAT_100076d0,"Fregat(sp)");
  RegisterUnitType(&DAT_10007588,"Linkor(sp)");
  RegisterUnitType(&DAT_10007788,"Victoria(sp)");
  RegisterUnitType(&DAT_100075a8,"FregatNEW(sp)");
  RegisterFormation(&DAT_10007628,"#ALONE");
  RegisterZone(&DAT_100076e0,DAT_100070b4);
  RegisterZone(&DAT_100076e8,DAT_100070b0);
  RegisterZone(&DAT_10007758,DAT_100070a8);
  RegisterDynGroup(&DAT_100075c0);
  RegisterVar(&DAT_100075c0,8);
  RegisterDynGroup(&DAT_100075b0);
  RegisterVar(&DAT_100075b0,8);
  RegisterDynGroup(&DAT_10007658);
  RegisterZone(&DAT_100076f8,DAT_100070a4);
  RegisterZone(&DAT_10007700,DAT_100070a0);
  RegisterZone(&DAT_10007708,DAT_1000709c);
  RegisterZone(&DAT_10007710,DAT_10007098);
  RegisterZone(&DAT_10007718,DAT_10007094);
  RegisterZone(&DAT_100075c8,DAT_1000708c);
  RegisterZone(&DAT_100075d0,DAT_10007084);
  RegisterZone(&DAT_100075d8,DAT_1000707c);
  RegisterZone(&DAT_100075e0,DAT_10007074);
  RegisterZone(&DAT_100075e8,DAT_1000706c);
  RegisterDynGroup(&DAT_10007780);
  RegisterVar(&DAT_10007780,8);
  RegisterUnitType(&DAT_10007580,"KUTTER(sp)");
  RegisterUnits(&DAT_10007670,"GPort1");
  RegisterUnits(&DAT_10007680,"GPort2");
  RegisterUnits(&DAT_10007678,"GPort3");
  RegisterUnits(&DAT_10007690,"GPort4");
  RegisterUnits(&DAT_10007688,"GPort5");
  RegisterDynGroup(&DAT_10007798);
  RegisterVar(&DAT_10007798,8);
  RegisterDynGroup(&DAT_10007790);
  RegisterVar(&DAT_10007790,8);
  RegisterUnits(&DAT_100076f0,"GFood1");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  int iVar4;
  int iVar5;
  void *pcVar6;
  void *pcVar7;
  void *pcVar8;
  int *puVar9;
  int iStack_4;
  
                    
  iVar2 = GetResource(1,3);
  if (iVar2 < 100) {
    AddResource(1,3,100);
  }
  iVar2 = GetResource(1,1);
  if (iVar2 < 100) {
    AddResource(1,1,100);
  }
  iVar2 = GetResource(1,4);
  if (iVar2 < 100) {
    AddResource(1,4,100);
  }
  iVar2 = GetResource(1,5);
  if (iVar2 < 100) {
    AddResource(1,5,100);
  }
  cVar1 = TimerDone(10);
  if (cVar1 != '\0') {
    iVar2 = GetResource(2,3);
    if (iVar2 < 10000) {
      AddResource(2,3,100000000);
    }
    iVar2 = GetResource(2,1);
    if (iVar2 < 10000) {
      AddResource(2,1,100000000);
    }
    iVar2 = GetResource(2,4);
    if (iVar2 < 10000) {
      AddResource(2,4,100000000);
    }
    iVar2 = GetResource(2,5);
    if (iVar2 < 10000) {
      AddResource(2,5,100000000);
    }
    iVar2 = GetResource(5,3);
    if (iVar2 < 10000) {
      AddResource(5,3,100000000);
    }
    iVar2 = GetResource(5,1);
    if (iVar2 < 10000) {
      AddResource(5,1,100000000);
    }
    iVar2 = GetResource(5,4);
    if (iVar2 < 10000) {
      AddResource(5,4,100000000);
    }
    iVar2 = GetResource(5,5);
    if (iVar2 < 10000) {
      AddResource(5,5,100000000);
    }
    RunTimer(10,1000);
  }
  cVar1 = TimerDone(0xb);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount1(&DAT_10007650,0);
    AddResource(0,1,iVar2 * 0x32);
    RunTimer(0xb,0x96);
  }
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    TakeFood(&DAT_100076f0);
    InitialUpgrade("GFood1","AKA01AL");
    InitialUpgrade("GFood1","AKA02AL");
    InitialUpgrade("GFood1","AKA06AL");
    TakeFood(&DAT_10007720);
    TakeWood(&DAT_10007750);
    TakeStone(&DAT_100076c8);
    EnableUnit(0,&DAT_10007650,0);
    EnableUnit(0,&DAT_10007598,0);
    DAT_100075a4 = GetDiff(0);
    DAT_100076d8 = DAT_100075a4 * 5 + 1;
    DAT_10007770 = DAT_100075a4 + 1;
    if (DAT_100075a4 == 0) {
      InitialUpgrade("GFood","AKA16PO");
      InitialUpgrade("GFood","AKA20PO");
LAB_10001718:
      InitialUpgrade("GFood","AKA17PO");
      InitialUpgrade("GFood","AKA27PO");
      InitialUpgrade("GFood","AKA28PO");
    }
    else if (DAT_100075a4 == 1) goto LAB_10001718;
    InitialUpgrade("GFood","MAINPO");
    InitialUpgrade("GFood","AKA06PO");
    InitialUpgrade("GFood","AKA29PO");
    ChangeFriends(1,0xe);
    ChangeFriends(2,0xe);
    ChangeFriends(5,0x3e);
    SetResource(0,3,(5 - DAT_100075a4) * 2000);
    uVar3 = GetResource(0,3);
    SetResource(0,1,uVar3);
    uVar3 = GetResource(0,3);
    SetResource(0,4,uVar3);
    uVar3 = GetResource(0,3);
    SetResource(0,5,uVar3);
    uVar3 = GetResource(0,3);
    SetResource(0,0,uVar3);
    uVar3 = GetResource(0,3);
    SetResource(0,2,uVar3);
    iVar2 = GetResource(0,3);
    SetResource(1,0,iVar2 * (DAT_100075a4 + 1));
    uVar3 = GetResource(1,0);
    SetResource(1,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,2,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,5,uVar3);
    ClearSelection(0);
    ClearSelection(1);
    ClearSelection(2);
    ClearSelection(5);
    SelectUnitsType(&DAT_100076d0,5,0);
    if (DAT_100075a4 == 0) {
      SelDie(5);
    }
    else {
      SaveSelectedUnits(5,&DAT_10007658,0);
      RemoveGroup(&DAT_10007658,&DAT_100076a8);
    }
    ClearSelection(5);
    if (DAT_100075a4 == 0) {
      ClearSelection(0);
      ClearSelection(1);
      ClearSelection(2);
      SelectUnits(&DAT_10007698,0);
      SelDie(1);
      ClearSelection(1);
    }
    for (iVar2 = (1 < DAT_100075a4) + 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      CreateObject0(&DAT_100075f0,&DAT_100076d0,&DAT_10007738,5,0xc4,0);
      RemoveGroup(&DAT_100075f0,&DAT_100076a0);
      CreateObject0(&DAT_100075f0,&DAT_100076d0,&DAT_10007740,5,0,0);
      RemoveGroup(&DAT_100075f0,&DAT_100076a8);
      CreateObject0(&DAT_100075f0,&DAT_100076d0,&DAT_10007740,5,0,0);
      RemoveGroup(&DAT_100075f0,&DAT_100076b8);
      if (0 < DAT_100075a4) {
        CreateObject0(&DAT_100075f0,&DAT_10007588,&DAT_10007748,5,0x46,0);
        RemoveGroup(&DAT_100075f0,&DAT_100076b0);
      }
    }
    if (DAT_100075a4 == 1) {
LAB_10001a12:
      InitialUpgrade(DAT_10007148,"AKA27SP");
    }
    else {
      if (DAT_100075a4 == 2) {
LAB_100019ef:
        InitialUpgrade(DAT_10007148,"AKA16SP");
        InitialUpgrade(DAT_10007148,"AKA28SP");
        goto LAB_10001a12;
      }
      if (DAT_100075a4 == 3) {
        InitialUpgrade(DAT_10007148,"AKA17SP");
        InitialUpgrade(DAT_10007148,"AKA20SP");
        goto LAB_100019ef;
      }
    }
    iStack_4 = 0;
    if (0 < DAT_100076d8) {
      do {
        CreateObject0(&DAT_100075f0,&DAT_10007730,&DAT_10007618,1,0x40,0);
        RemoveGroup(&DAT_100075f0,&DAT_10007778);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < DAT_100076d8);
    }
    FUN_1000108b(&DAT_10007778,&DAT_10007618,0xac);
    iStack_4 = 0;
    do {
      CreateObject0(&DAT_100075f0,&DAT_100076d0,&DAT_100076e8,2,0x80,0);
      RemoveGroup(&DAT_100075f0,&DAT_100075b0);
      if ((DAT_100075a4 == 0) && (iStack_4 == 1)) {
        iStack_4 = 2;
      }
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < 3);
    if (0 < DAT_100075a4) {
      CreateObject0(&DAT_100075f0,&DAT_10007788,&DAT_100076e0,2,0x80,0);
      RemoveGroup(&DAT_100075f0,&DAT_100075c0);
    }
    if (2 < DAT_100075a4) {
      CreateObject0(&DAT_100075f0,&DAT_10007788,&DAT_100076e0,2,0x80,0);
      RemoveGroup(&DAT_100075f0,&DAT_100075c0);
    }
    if (DAT_100075a4 != 1) {
      CreateObject0(&DAT_100075f0,&DAT_100075a8,&DAT_100076e0,2,0x80,0);
      RemoveGroup(&DAT_100075f0,&DAT_100075b0);
    }
    FUN_100010ba(&DAT_100075c0,&DAT_100076e0,0xa0);
    FUN_100010ba(&DAT_100075b0,&DAT_100076e8,0xa0);
    RunTimer(1,0x6f);
    RunTimer(2,0xd3);
    RunTimer(3,0x137);
    RunTimer(4,0x19b);
    RunTimer(5,100);
    RunTimer(6,0x4b0);
    RunTimer(7,20000);
    RunTimer(10,0x6f);
    RunTimer(0xb,0x96);
    RunTimer(0xf,1000);
    ShowPage("#PAGE0");
    ShowPage("#PAGE0A");
    SetTrigg(99,0);
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(6), cVar1 != '\0')) {
    iStack_4 = 0;
    if (1 < DAT_100075a4 != -1) {
      do {
        CreateObject0(&DAT_100075f0,&DAT_10007580,&DAT_10007630,5,0xc4,0);
        FUN_10001073(&DAT_100075f0,&DAT_100076f8);
        FUN_10001073(&DAT_100075f0,&DAT_10007700);
        RemoveGroup(&DAT_100075f0,&DAT_10007780);
        CreateObject0(&DAT_100075f0,&DAT_10007580,&DAT_10007630,5,0xc4,0);
        FUN_10001073(&DAT_100075f0,&DAT_10007700);
        RemoveGroup(&DAT_100075f0,&DAT_10007780);
        CreateObject0(&DAT_100075f0,&DAT_10007580,&DAT_10007630,5,0xc4,0);
        FUN_10001073(&DAT_100075f0,&DAT_10007718);
        RemoveGroup(&DAT_100075f0,&DAT_10007780);
        CreateObject0(&DAT_100075f0,&DAT_10007580,&DAT_10007648,5,0x40,0);
        FUN_10001073(&DAT_100075f0,&DAT_10007708);
        FUN_10001073(&DAT_100075f0,&DAT_10007710);
        RemoveGroup(&DAT_100075f0,&DAT_10007780);
        CreateObject0(&DAT_100075f0,&DAT_10007580,&DAT_10007648,5,0x40,0);
        FUN_10001073(&DAT_100075f0,&DAT_10007710);
        RemoveGroup(&DAT_100075f0,&DAT_10007780);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < (int)((1 < DAT_100075a4) + 1));
    }
    FUN_10001073(&DAT_10007780,&DAT_10007610);
    RunTimer(6,5000);
    SetTrigg(0x10,0);
  }
  cVar1 = Trigg(0x1a);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_100075c8,5), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10007670), 0 < iVar2)) {
    SelectUnitsInZone(&DAT_100075c8,5,0);
    SelAttackGroup(5,&DAT_10007670);
  }
  cVar1 = Trigg(0x1a);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_100075d0,5), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10007680), 0 < iVar2)) {
    SelectUnitsInZone(&DAT_100075d0,5,0);
    SelAttackGroup(5,&DAT_10007680);
  }
  cVar1 = Trigg(0x1a);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_100075d8,5), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10007678), 0 < iVar2)) {
    SelectUnitsInZone(&DAT_100075d8,5,0);
    SelAttackGroup(5,&DAT_10007678);
  }
  cVar1 = Trigg(0x1a);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_100075e0,5), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10007690), 0 < iVar2)) {
    SelectUnitsInZone(&DAT_100075e0,5,0);
    SelAttackGroup(5,&DAT_10007690);
  }
  cVar1 = Trigg(0x1a);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_100075e8,5), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10007688), 0 < iVar2)) {
    SelectUnitsInZone(&DAT_100075e8,5,0);
    SelAttackGroup(5,&DAT_10007688);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 == '\0') || (cVar1 = TimerDone(6), cVar1 == '\0')) goto LAB_100020f7;
  iVar2 = GetTotalAmount0(&DAT_10007780);
  if (iVar2 <= DAT_10007770) {
    cVar1 = Trigg(6);
    if (cVar1 == '\0') {
      puVar9 = &DAT_10007648;
    }
    else {
      puVar9 = &DAT_10007630;
    }
    CreateObject0(&DAT_100075f0,&DAT_10007580,puVar9,5,0xc4,0);
    RemoveGroup(&DAT_100075f0,&DAT_10007780);
    cVar1 = Trigg(6);
    if (cVar1 == '\0') {
      puVar9 = &DAT_10007708;
    }
    else {
      puVar9 = &DAT_100076f8;
    }
    FUN_100010a2(&DAT_10007780,puVar9);
    RunTimer(6,100);
    goto LAB_100020f7;
  }
  cVar1 = Trigg(6);
  if (cVar1 == '\0') {
    iVar2 = GetTotalAmount0(&DAT_10007690);
    if (0 < iVar2) {
      FUN_10001073(&DAT_10007780,&DAT_10007710);
    }
    iVar2 = GetTotalAmount0(&DAT_10007688);
    if (0 < iVar2) {
      FUN_10001073(&DAT_10007780,&DAT_10007718);
    }
    iVar2 = GetTotalAmount0(&DAT_10007670);
    if (0 < iVar2) {
      FUN_10001073(&DAT_10007780,&DAT_100076f8);
    }
    iVar2 = GetTotalAmount0(&DAT_10007680);
    if (0 < iVar2) {
      puVar9 = &DAT_10007700;
      goto LAB_1000209c;
    }
  }
  else {
    iVar2 = GetTotalAmount0(&DAT_10007680);
    if (0 < iVar2) {
      FUN_10001073(&DAT_10007780,&DAT_10007700);
    }
    iVar2 = GetTotalAmount0(&DAT_10007688);
    if (0 < iVar2) {
      FUN_10001073(&DAT_10007780,&DAT_10007718);
    }
    iVar2 = GetTotalAmount0(&DAT_10007678);
    if (0 < iVar2) {
      FUN_10001073(&DAT_10007780,&DAT_10007708);
    }
    iVar2 = GetTotalAmount0(&DAT_10007690);
    if (0 < iVar2) {
      puVar9 = &DAT_10007710;
LAB_1000209c:
      FUN_10001073(&DAT_10007780,puVar9);
    }
  }
  FUN_10001073(&DAT_10007780,&DAT_10007610);
  cVar1 = Trigg(6);
  SetTrigg(6,0);
  SetTrigg(0x1a,0);
  RunTimer(6,(5 - DAT_100075a4) * 1000);
  RunTimer(9,0x4b);
LAB_100020f7:
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    FUN_1000108b(&DAT_100075c0,&DAT_10007610,0xa0);
    RunTimer(8,(10 - DAT_100075a4) * 2000);
    SetTrigg(7,0);
    RunTimer(0x11,2000);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x11), cVar1 != '\0')) {
    FUN_100010ba(&DAT_100075b0,&DAT_10007758,0x80);
    FUN_1000108b(&DAT_100075b0,&DAT_10007610,0xa0);
    SetTrigg(0x11,0);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(8), cVar1 != '\0')) {
    uVar3 = GetResource(1,0);
    SetResource(1,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,5,uVar3);
    StartAI(1,"ALGIR.0",2,2,1,DAT_100075a4);
    SetTrigg(8,0);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (DAT_100075a4 != 0)) {
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      iVar2 = GetTotalAmount0(&DAT_100076b0);
      if (iVar2 < 2) {
        CreateObject0(&DAT_100075f0,&DAT_10007588,&DAT_10007630,5,200,0);
        RemoveGroup(&DAT_100075f0,&DAT_100076b0);
        FUN_100010a2(&DAT_100076b0,&DAT_10007738);
        FUN_10001073(&DAT_100076b0,&DAT_10007740);
        FUN_10001073(&DAT_100076b0,&DAT_10007748);
        FUN_10001073(&DAT_100076b0,&DAT_10007740);
        RunTimer(3,0x15e);
      }
      else {
        RunTimer(3,10000);
      }
    }
    FUN_100010f6(&DAT_100076a0,&DAT_10007630,1,200);
    FUN_100010f6(&DAT_100076a8,&DAT_10007648,2,200);
    FUN_100010f6(&DAT_100076b8,&DAT_10007648,4,0x46);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    FUN_100010a2(&DAT_100076a0,&DAT_10007738);
    FUN_10001073(&DAT_100076a0,&DAT_10007740);
    FUN_10001073(&DAT_100076a0,&DAT_10007748);
    FUN_10001073(&DAT_100076a0,&DAT_10007740);
    FUN_10001073(&DAT_100076a0,&DAT_10007738);
    FUN_10001073(&DAT_100076a0,&DAT_10007740);
    FUN_10001073(&DAT_100076a0,&DAT_10007748);
    FUN_10001073(&DAT_100076a0,&DAT_10007740);
    FUN_100010ba(&DAT_100076a8,&DAT_10007740,100);
    FUN_10001073(&DAT_100076a8,&DAT_10007738);
    FUN_10001073(&DAT_100076a8,&DAT_10007740);
    FUN_10001073(&DAT_100076a8,&DAT_10007748);
    FUN_1000108b(&DAT_100076a8,&DAT_10007740,100);
    FUN_10001073(&DAT_100076a8,&DAT_10007738);
    FUN_10001073(&DAT_100076a8,&DAT_10007740);
    FUN_10001073(&DAT_100076a8,&DAT_10007748);
    FUN_100010a2(&DAT_100076b8,&DAT_10007740);
    FUN_10001073(&DAT_100076b8,&DAT_10007748);
    FUN_1000108b(&DAT_100076b8,&DAT_10007740,100);
    FUN_10001073(&DAT_100076b8,&DAT_10007738);
    FUN_10001073(&DAT_100076b8,&DAT_10007740);
    FUN_10001073(&DAT_100076b8,&DAT_10007748);
    FUN_1000108b(&DAT_100076b8,&DAT_10007740,100);
    FUN_10001073(&DAT_100076b8,&DAT_10007738);
    FUN_100010a2(&DAT_100076b0,&DAT_10007748);
    FUN_1000108b(&DAT_100076b0,&DAT_10007740,100);
    FUN_10001073(&DAT_100076b0,&DAT_10007738);
    FUN_10001073(&DAT_100076b0,&DAT_10007740);
    if ((DAT_100075a4 != 0) && (DAT_10007770 < 10)) {
      DAT_10007770 = DAT_10007770 + 1;
    }
    RunTimer(5,12000);
  }
  cVar1 = Trigg(0x5b);
  if (((cVar1 != '\0') &&
      (cVar1 = Trigg(8), pcVar6 = (void*)&ShowPage, pcVar8 = (void*)&SetTrigg, cVar1 == '\0')) &&
     (cVar1 = NationIsErased(1), pcVar6 = (void*)&ShowPage, pcVar8 = (void*)&SetTrigg, cVar1 != '\0')) {
    ShowPage("#PAGE11");
    SetTrigg(0x5b,0);
  }
  cVar1 = Trigg(0x5c);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_100075c0);
    iVar4 = GetTotalAmount0(&DAT_100075b0);
    if (iVar2 + iVar4 == 0) {
      ShowPage("#PAGE12");
      SetTrigg(0x5c,0);
    }
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xf), cVar1 != '\0')) {
    iVar2 = GetTotalAmount1(&DAT_10007580,5);
    iVar4 = GetTotalAmount1(&DAT_10007588,5);
    iVar5 = GetTotalAmount1(&DAT_100076d0,5);
    if (iVar2 + iVar4 + iVar5 < 5) {
      ShowPage("#PAGE15");
      SetTrigg(0x37,0);
    }
  }
  cVar1 = Trigg(0x5a);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount1(&DAT_10007650,0), iVar2 < 3)) {
    iStack_4 = 1;
    do {
      cVar1 = TimerDone(iStack_4);
      if (cVar1 == '\0') {
        RunTimer(iStack_4,1);
      }
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < 0x14);
    ShowPage("#PAGE10");
    LooseGame();
    SetTrigg(0x5a,0);
  }
  cVar1 = Trigg(0x5a);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount1(&DAT_10007598,0), iVar2 == 0)) {
    iStack_4 = 1;
    do {
      cVar1 = TimerDone(iStack_4);
      if (cVar1 == '\0') {
        RunTimer(iStack_4,1);
      }
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < 0x14);
    ShowPage("#PAGE10B");
    LooseGame();
    SetTrigg(0x5a,0);
  }
  cVar1 = Trigg(0x5b);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0x37), cVar1 == '\0')) {
    iVar2 = 1;
    do {
      cVar1 = TimerDone(iVar2);
      if (cVar1 == '\0') {
        FreeTimer(iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
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
