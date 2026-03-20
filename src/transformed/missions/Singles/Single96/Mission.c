#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002c028[] = "Z11";
char DAT_1002c02c[] = "Z10";
char DAT_1002c030[] = "Z9";
char DAT_1002c054[] = "Z8";
char DAT_1002c058[] = "Z7";
char DAT_1002c05c[] = "Z6";
char DAT_1002c060[] = "Z5";
char DAT_1002c0e4[] = "GHo";
char DAT_1002c0e8[] = "ZP2";
char DAT_1002c0ec[] = "ZP1";
char DAT_1002c0f0[] = "Z4";
char DAT_1002c0f4[] = "Z3";
char DAT_1002c0f8[] = "Z2";
char DAT_1002c0fc[] = "Z1";
char DAT_1002c100[] = "Z0";
int DAT_1002fa30 = 100;
long long DAT_100313f0 = 0;
long long DAT_100313f8 = 0;
int DAT_100313fc = 0;
long long DAT_10031400 = 0;
long long DAT_10031408 = 0;
long long DAT_10031410 = 0;
long long DAT_10031418 = 0;
long long DAT_10031420 = 0;
long long DAT_10031428 = 0;
long long DAT_10031430 = 0;
long long DAT_10031438 = 0;
long long DAT_10031440 = 0;
long long DAT_10031448 = 0;
long long DAT_10031450 = 0;
long long DAT_10031458 = 0;
long long DAT_10031460 = 0;
long long DAT_10031468 = 0;
long long DAT_10031470 = 0;
long long DAT_10031478 = 0;
long long DAT_10031480 = 0;
long long DAT_10031488 = 0;
long long DAT_10031490 = 0;
long long DAT_10031498 = 0;
long long DAT_100314a0 = 0;
long long DAT_100314a8 = 0;
int DAT_100314b0 = 0;
long long DAT_100314b8 = 0;
long long DAT_100314c0 = 0;
long long DAT_100314d0 = 0;
long long DAT_100314d8 = 0;
long long DAT_100314e0 = 0;
long long DAT_100314e8 = 0;
long long DAT_100314f0 = 0;
long long DAT_100314f8 = 0;
int DAT_10031500 = 0;
long long DAT_10031508 = 0;
long long DAT_10031510 = 0;
long long DAT_10031518 = 0;
long long DAT_10031520 = 0;
long long DAT_10031528 = 0;
long long DAT_10031530 = 0;
long long DAT_10031538 = 0;
long long DAT_10031540 = 0;
long long DAT_10031548 = 0;

/* Forward declarations */
void FUN_10001120(char param_1);
void FUN_100011d0(char param_1,char param_2);
void FUN_10001260(char param_1);
int FUN_100012d0(int param_1);
void FUN_10001350(int param_1,int param_2,char param_3,char param_4);
void FUN_10001450(int param_1,int param_2);
void FUN_100014a0(int param_1,int param_2,char param_3);
void FUN_100014f0(int param_1,int param_2);
void FUN_10001540(int param_1,int param_2,char param_3);
void FUN_10001590(int param_1,int param_2,char param_3,char param_4);
void FUN_10001650(int param_1,int param_2);
void FUN_100016a0(int param_1,int param_2,char param_3);
void FUN_100017d0(int param_1,int param_2,int param_3);

void OnInit();
void ProcessScenary();


void __cdecl FUN_10001120(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
for (local_8 = 0; (intptr_t)local_8 < 6; local_8 = local_8 + 1) {
    iVar1 = GetResource(param_1,local_8 & 0xff);
    if (iVar1 < DAT_1002fa30) {
      AddResource(param_1,local_8 & 0xff,DAT_1002fa30);
    }
  }
  return;
}





void __cdecl FUN_100011d0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = GetResource(param_1,(intptr_t)param_2);
  if (iVar1 < 100000) {
    SetResource(param_1,param_2,10000000);
  }
  uStack_8 = 0x10001235;
  return;
}





void __cdecl FUN_10001260(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    FUN_100011d0(param_1,(char)local_8);
  }
  return;
}





int __cdecl FUN_100012d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
for (local_8 = 0; (intptr_t)local_8 < 8; local_8 = local_8 + 1) {
    iVar1 = GetUnitsByNation(param_1,local_8 & 0xff);
    if (0 < iVar1) break;
  }
  return 0;
}





void __cdecl
FUN_10001350(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
local_8 = FUN_100012d0(param_1);
  iVar1 = GetUnitsByNation(param_1,local_8 & 0xff);
  if (iVar1 != 0) {
    SelectUnits1(local_8 & 0xff,param_1,0);
    SetStandGround(local_8 & 0xff,0);
    AllowAttack(local_8 & 0xff,1);
    SelSendAndKill(local_8 & 0xff,param_2,param_3,param_4);
  }
  return;
}





void __cdecl FUN_10001450(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001350(param_1,param_2,200,2);
  uStack_8 = 0x1000148c;
  return;
}





void __cdecl FUN_100014a0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001350(param_1,param_2,param_3,2);
  uStack_8 = 0x100014db;
  return;
}





void __cdecl FUN_100014f0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001350(param_1,param_2,200,0);
  uStack_8 = 0x1000152c;
  return;
}





void __cdecl FUN_10001540(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001350(param_1,param_2,param_3,0);
  uStack_8 = 0x1000157b;
  return;
}





void __cdecl
FUN_10001590(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
local_8 = FUN_100012d0(param_1);
  iVar1 = GetUnitsByNation(param_1,local_8 & 0xff);
  if (iVar1 != 0) {
    SelectUnits1(local_8 & 0xff,param_1,0);
    SelSendTo(local_8 & 0xff,param_2,param_3,param_4);
  }
  return;
}





void __cdecl FUN_10001650(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001590(param_1,param_2,0x80,0);
  uStack_8 = 0x1000168c;
  return;
}





void __cdecl FUN_100016a0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001590(param_1,param_2,param_3,0);
  uStack_8 = 0x100016db;
  return;
}







void __cdecl FUN_100017d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_c;
  int local_8;
local_8 = FUN_100012d0(param_1);
  for (local_c = 0; local_c < DAT_10031500; local_c = local_c + 1) {
    CreateObject0(&DAT_10031418,param_2,param_3,(char)local_8,0,0);
    RemoveGroup(&DAT_10031418,param_1);
  }
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterVar(&DAT_100313f8,4);
  RegisterVar(&DAT_100313fc,4);
  RegisterVar(&DAT_10031500,4);
  RegisterVar(&DAT_100314b0,4);
  SetPlayerName(1,"HOLLAND");
  SetPlayerName(2,"HOLLAND");
  SetPlayerName(3,"HOLLAND");
  SetPlayerName(5,"HOLLAND");
  SetPlayerName(4,"PRUSSIA");
  RegisterUnits(&DAT_100314e0,"GErase");
  RegisterDynGroup(&DAT_10031418);
  RegisterDynGroup(&DAT_10031420);
  RegisterDynGroup(&DAT_10031428);
  RegisterDynGroup(&DAT_10031430);
  RegisterDynGroup(&DAT_10031438);
  RegisterDynGroup(&DAT_100314a8);
  RegisterVar(&DAT_10031418,8);
  RegisterVar(&DAT_10031420,8);
  RegisterVar(&DAT_10031428,8);
  RegisterVar(&DAT_10031430,8);
  RegisterVar(&DAT_10031438,8);
  RegisterZone(&DAT_10031450,DAT_1002c100);
  RegisterZone(&DAT_10031458,DAT_1002c0fc);
  RegisterZone(&DAT_10031460,DAT_1002c0f8);
  RegisterZone(&DAT_10031470,DAT_1002c0f4);
  RegisterZone(&DAT_10031478,DAT_1002c0f0);
  RegisterZone(&DAT_10031538,DAT_1002c0ec);
  RegisterZone(&DAT_10031540,DAT_1002c0e8);
  RegisterUnits(&DAT_100314f0,DAT_1002c0e4);
  RegisterUnitType(&DAT_10031548,"Fregat(HO)");
  RegisterUnits(&DAT_10031528,"GFood3");
  RegisterUnits(&DAT_10031530,"GFood5");
  RegisterUnits(&DAT_100314d0,"GPort1");
  RegisterUnits(&DAT_100314d8,"GPort2");
  RegisterDynGroup(&DAT_10031440);
  RegisterVar(&DAT_10031440,8);
  RegisterUnits(&DAT_10031410,"GBase");
  RegisterUnits(&DAT_10031448,"GFleet");
  RegisterUnitType(&DAT_10031400,"Fregat(GE)");
  RegisterDynGroup(&DAT_10031510);
  RegisterVar(&DAT_10031510,8);
  RegisterFormation(&DAT_10031468,"#ALONE");
  RegisterUnitType(&DAT_100314c0,"PorE(GE)");
  RegisterUpgrade(&DAT_100314b8,"MAINGE");
  RegisterUpgrade(&DAT_100314f8,"MAINHO");
  RegisterUnits(&DAT_10031408,"GBaseAll");
  RegisterZone(&DAT_10031480,DAT_1002c060);
  RegisterZone(&DAT_10031488,DAT_1002c05c);
  RegisterZone(&DAT_10031490,DAT_1002c058);
  RegisterZone(&DAT_10031498,DAT_1002c054);
  RegisterUnitType(&DAT_100314e8,"FregatNEW(HO)");
  RegisterUnitType(&DAT_100313f0,"Victoria(HO)");
  RegisterZone(&DAT_100314a0,DAT_1002c030);
  RegisterZone(&DAT_10031518,DAT_1002c02c);
  RegisterZone(&DAT_10031520,DAT_1002c028);
  RegisterUnitType(&DAT_10031508,"PorE(HO)");
  uStack_8 = 0x10001e7d;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *puVar6;
  int local_10;
  unsigned int local_c;
  unsigned int local_8;
uVar1 = TimerDone(10);
  if ((uVar1 & 0xff) != 0) {
    FUN_10001120(1);
    FUN_10001120(3);
    FUN_10001120(5);
    iVar5 = GetResource(2,3);
    if (iVar5 < 10000) {
      AddResource(2,3,100000000);
    }
    iVar5 = GetResource(2,1);
    if (iVar5 < 10000) {
      AddResource(2,1,100000000);
    }
    iVar5 = GetResource(2,4);
    if (iVar5 < 10000) {
      AddResource(2,4,100000000);
    }
    iVar5 = GetResource(2,5);
    if (iVar5 < 10000) {
      AddResource(2,5,100000000);
    }
    RunTimer(10,1000);
  }
  uVar1 = Trigg(0);
  if ((uVar1 & 0xff) != 0) {
    ChangeFriends(1,0x2e);
    ChangeFriends(2,0x2e);
    ChangeFriends(3,0x2e);
    ChangeFriends(5,0x2e);
    ChangeFriends(4,0x11);
    DAT_100313fc = GetDiff(0);
    DAT_100314b0 = DAT_100313fc * -2 + 0xf;
    SetResource(0,0,(10 - (DAT_100313fc * 5) / 2) * 1000);
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
    uVar2 = GetResource(0,3);
    SetResource(1,0,uVar2);
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
    SetResource(3,0,1000000);
    uVar2 = GetResource(3,0);
    SetResource(3,3,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(3,2,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(3,1,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(3,4,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(3,5,uVar2);
    uVar2 = GetResource(3,3);
    SetResource(5,0,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(5,3,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(5,2,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(5,1,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(5,4,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(5,5,uVar2);
    EnableUnit(0,&DAT_10031508,0);
    EnableUnit(0,&DAT_100314c0,0);
    InitialUpgrade("GBase","AKA06GE");
    TakeFood(&DAT_10031528);
    TakeFood(&DAT_10031530);
    InitialUpgrade("GFood3","AKA01HO");
    InitialUpgrade("GFood3","AKA02HO");
    InitialUpgrade("GFood5","AKA01HO");
    InitialUpgrade("GFood5","AKA02HO");
    InitialUpgrade("GFood3","AKA06HO");
    local_10 = DAT_100313fc;
    if (DAT_100313fc == 1) {
LAB_100027d5:
      InitialUpgrade(DAT_1002c0e4,"AKA27HO");
      InitialUpgrade(DAT_1002c0e4,"AKA01HO");
    }
    else {
      if (DAT_100313fc == 2) {
LAB_1000279d:
        InitialUpgrade(DAT_1002c0e4,"AKA16HO");
        InitialUpgrade(DAT_1002c0e4,"AKA28HO");
        goto LAB_100027d5;
      }
      if (DAT_100313fc == 3) {
        InitialUpgrade(DAT_1002c0e4,"AKA17HO");
        InitialUpgrade(DAT_1002c0e4,"AKA20HO");
        goto LAB_1000279d;
      }
    }
    StartAI(1,"HOLLAND.0",0,0,1,DAT_100313fc);
    RunTimer(10,0);
    RunTimer(1,0x6e);
    RunTimer(2,0xde);
    RunTimer(3,1000);
    RemoveGroup(&DAT_10031448,&DAT_10031440);
    EnableMission(0x42);
    EnableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x48);
    DisableMission(0x47);
    ShowPage("#PAGE0");
    SetTrigg(0,0);
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10031458,2);
    if (0 < iVar5) {
      SelectUnitsInZone(&DAT_10031458,2,0);
      SelAttackGroup(2,&DAT_10031410);
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(3);
      if ((uVar1 & 0xff) == 0) {
        FUN_10001540(&DAT_10031440,&DAT_10031460,0xb4);
        SelectUnitsInZone(&DAT_10031450,2,0);
        SelSendAndKill(2,&DAT_10031458,0x40,0);
        RunTimer(3,1000);
        SetTrigg(3,0);
      }
      else {
        SelectUnitsInZone(&DAT_10031450,2,0);
        SelSendTo(2,&DAT_10031458,0x40,0);
        RunTimer(3,0x54);
        SetTrigg(3,0);
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      FUN_10001260(3);
      ProduceUnitFast(&DAT_100314d0,&DAT_10031548,&DAT_10031418,6);
      if (0 < DAT_100313fc) {
        ProduceUnitFast(&DAT_100314d8,&DAT_10031548,&DAT_10031420,6);
      }
      if (1 < DAT_100313fc) {
        ProduceUnitFast(&DAT_100314d0,&DAT_10031548,&DAT_10031418,6);
      }
      if (2 < DAT_100313fc) {
        ProduceUnitFast(&DAT_100314d8,&DAT_10031548,&DAT_10031420,6);
      }
      FUN_10001450(&DAT_10031418,&DAT_10031470);
      FUN_10001450(&DAT_10031418,&DAT_10031458);
      FUN_10001450(&DAT_10031420,&DAT_10031478);
      FUN_10001450(&DAT_10031420,&DAT_10031458);
      ClearSelection(2);
      ClearSelection(3);
      SelectUnitsInZone(&DAT_10031538,3,0);
      SelectUnitsInZone(&DAT_10031540,3,1);
      SelChangeNation(3,2);
      RunTimer(1,0x9c4);
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetTotalAmount0(&DAT_10031440);
      if (iVar5 < DAT_100314b0) {
        FUN_10001260(4);
        ProduceUnitFast(&DAT_10031410,&DAT_10031400,&DAT_10031440,6);
        RunTimer(2,1000);
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5b);
    if ((uVar1 & 0xff) == 0) {
      SetResource(3,0,(DAT_100313fc + 1) * 100000);
      uVar2 = GetResource(3,0);
      SetResource(3,3,uVar2);
      uVar2 = GetResource(3,0);
      SetResource(3,2,uVar2);
      uVar2 = GetResource(3,0);
      SetResource(3,1,uVar2);
      uVar2 = GetResource(3,0);
      SetResource(3,4,uVar2);
      uVar2 = GetResource(3,0);
      SetResource(3,5,uVar2);
      uVar2 = GetResource(3,3);
      SetResource(5,0,uVar2);
      uVar2 = GetResource(3,0);
      SetResource(5,3,uVar2);
      uVar2 = GetResource(3,0);
      SetResource(5,2,uVar2);
      uVar2 = GetResource(3,0);
      SetResource(5,1,uVar2);
      uVar2 = GetResource(3,0);
      SetResource(5,4,uVar2);
      uVar2 = GetResource(3,0);
      SetResource(5,5,uVar2);
      StartAI(3,"HOLLAND.0",2,3,1,DAT_100313fc);
      StartAI(5,"HOLLAND.0",0,3,1,DAT_100313fc);
      RemoveGroup(&DAT_100314f0,&DAT_10031510);
      RunTimer(4,2000);
      RunTimer(0xf,5000);
      EnableMission(0x47);
      ShowPage("#PAGE3");
      SetTrigg(0x23,0);
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      if (0 < DAT_100313fc) {
        CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031480,0);
        RemoveGroup(&DAT_10031418,&DAT_10031510);
        CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_100314e8,2,&DAT_10031488,0);
        RemoveGroup(&DAT_10031418,&DAT_10031510);
        CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031490,0);
        RemoveGroup(&DAT_10031418,&DAT_10031510);
        CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031498,0);
        RemoveGroup(&DAT_10031418,&DAT_10031510);
        CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_100314e8,2,&DAT_100314a0,0);
        RemoveGroup(&DAT_10031418,&DAT_10031510);
        CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031518,0);
        RemoveGroup(&DAT_10031418,&DAT_10031510);
        RunTimer(5,500);
      }
      EnableMission(0x45);
      ShowPage("#PAGE2");
      FUN_10001540(&DAT_10031510,&DAT_10031520,0x15);
      SetTrigg(0x24,0);
    }
  }
  uVar1 = TimerDone(5);
  if ((uVar1 & 0xff) != 0) {
    if (1 < DAT_100313fc) {
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031480,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_100313f0,2,&DAT_10031488,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031490,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031498,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_100314e8,2,&DAT_100314a0,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031518,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      RunTimer(6,0x15e);
    }
    FUN_10001540(&DAT_10031510,&DAT_10031520,0x15);
    FreeTimer(5);
  }
  uVar1 = TimerDone(6);
  if ((uVar1 & 0xff) != 0) {
    if (2 < DAT_100313fc) {
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_100314e8,2,&DAT_10031480,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_100313f0,2,&DAT_10031488,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031490,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_100314e8,2,&DAT_10031498,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_100313f0,2,&DAT_100314a0,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      CreateObject0(&DAT_10031418,&DAT_10031468,&DAT_10031548,2,&DAT_10031518,0);
      RemoveGroup(&DAT_10031418,&DAT_10031510);
      RunTimer(6,0x15e);
    }
    FUN_10001540(&DAT_10031510,&DAT_10031520,0x15);
    FreeTimer(6);
  }
  uVar1 = TimerDone(0xf);
  if ((uVar1 & 0xff) != 0) {
    FUN_10001540(&DAT_10031510,&DAT_10031458,0x40);
    FreeTimer(0xf);
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      EnableUnit(0,&DAT_10031508,1);
      EnableUnit(0,&DAT_100314c0,1);
      SelectUnits(&DAT_10031410,0);
      SelChangeNation(4,0);
      SelectUnits(&DAT_10031408,0);
      SelChangeNation(4,0);
      SelectUnits(&DAT_10031440,0);
      SelChangeNation(4,0);
      EnableMission(0x44);
      DisableMission(0x43);
      ShowPage("#PAGE11");
      ShowPage("#PAGE1");
      SetTrigg(0x5b,0);
    }
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount1(&DAT_10031548,2);
    iVar3 = GetTotalAmount1(&DAT_100314e8,2);
    iVar4 = GetTotalAmount1(&DAT_100313f0,2);
    if (iVar5 + iVar3 + iVar4 == 0) {
      EnableMission(0x48);
      DisableMission(0x45);
      ShowPage("#PAGE12");
      SetTrigg(0x5c,0);
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      ShowPage("#PAGE13");
      SetTrigg(0x5d,0);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(5);
    if ((uVar1 & 0xff) != 0) {
      ShowPage("#PAGE15");
      SetTrigg(0x5f,0);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) == 0) {
      iVar5 = GetTotalAmount1(&DAT_100314c0,4);
      iVar3 = GetTotalAmount1(&DAT_100314c0,0);
      if (iVar5 + iVar3 != 0) goto LAB_10003bb4;
    }
    for (local_8 = 1; (intptr_t)local_8 < 0x14; local_8 = local_8 + 1) {
      uVar1 = TimerDone(local_8 & 0xff);
      if ((uVar1 & 0xff) == 0) {
        RunTimer(local_8 & 0xff,1);
      }
    }
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) == 0) {
      ShowPage("#PAGE10");
    }
    else {
      ShowPage("#PAGE10B");
    }
    LooseGame();
    SetTrigg(0x5a,0);
  }
LAB_10003bb4:
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x5d);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x5f);
        if ((uVar1 & 0xff) == 0) {
          for (local_c = 1; (intptr_t)local_c < 0x1e; local_c = local_c + 1) {
            uVar1 = TimerDone(local_c & 0xff);
            if ((uVar1 & 0xff) == 0) {
              FreeTimer(local_c & 0xff);
            }
          }
          ShowPage("#PAGE20");
          ShowVictory();
        }
      }
    }
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
