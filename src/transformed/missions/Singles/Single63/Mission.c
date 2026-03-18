#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
int this_ptr = 0;
long long DAT_1000bdc0 = 0;
long long DAT_1000bdc8 = 0;
long long DAT_1000bdd0 = 0;
long long DAT_1000bdd8 = 0;
long long DAT_1000bde0 = 0;
long long DAT_1000bde8 = 0;
long long DAT_1000bdf0 = 0;
long long DAT_1000bdf8 = 0;
long long DAT_1000be00 = 0;
long long DAT_1000be08 = 0;
long long DAT_1000be10 = 0;
long long DAT_1000be18 = 0;
long long DAT_1000be20 = 0;
long long DAT_1000be28 = 0;
long long DAT_1000be30 = 0;
long long DAT_1000be38 = 0;
long long DAT_1000be40 = 0;
long long DAT_1000be48 = 0;
long long DAT_1000be50 = 0;
long long DAT_1000be58 = 0;
long long DAT_1000be60 = 0;
long long DAT_1000be68 = 0;
long long DAT_1000be70 = 0;
long long DAT_1000be78 = 0;
long long DAT_1000be80 = 0;
long long DAT_1000be88 = 0;
long long DAT_1000be90 = 0;
long long DAT_1000be98 = 0;
long long DAT_1000bea0 = 0;
long long DAT_1000bea8 = 0;
long long DAT_1000beb0 = 0;
long long DAT_1000beb8 = 0;
long long DAT_1000bec0 = 0;
long long DAT_1000bec8 = 0;
long long DAT_1000bed0 = 0;
long long DAT_1000bed8 = 0;
long long DAT_1000bee8 = 0;
long long DAT_1000bef8 = 0;
long long DAT_1000bf00 = 0;
long long DAT_1000bf08 = 0;
long long DAT_1000bf18 = 0;
long long DAT_1000bf28 = 0;
long long DAT_1000bf38 = 0;
long long DAT_1000bf48 = 0;
long long DAT_1000bf50 = 0;
long long DAT_1000bf60 = 0;
long long DAT_1000bf68 = 0;
long long DAT_1000bf78 = 0;
long long DAT_1000bf80 = 0;
long long DAT_1000bf88 = 0;
long long DAT_1000bf90 = 0;
long long DAT_1000bf98 = 0;
long long DAT_1000bfa0 = 0;
long long DAT_1000bfa8 = 0;
long long DAT_1000bfb0 = 0;
long long DAT_1000bfb8 = 0;
long long DAT_1000bfc0 = 0;
long long DAT_1000bfc8 = 0;
long long DAT_1000bfd0 = 0;
long long DAT_1000bfd8 = 0;
long long DAT_1000bfe0 = 0;
long long DAT_1000bfe8 = 0;
long long DAT_1000bff0 = 0;
long long DAT_1000bff8 = 0;
int DAT_1000c000 = 0;
long long DAT_1000c008 = 0;
long long DAT_1000c010 = 0;
long long DAT_1000c018 = 0;
long long DAT_1000c020 = 0;
long long DAT_1000c028 = 0;
long long DAT_1000c030 = 0;
long long DAT_1000c070 = 0;
long long DAT_1000c0b0 = 0;
long long DAT_1000c0f0 = 0;
long long DAT_1000c0f8 = 0;
int DAT_1000c104 = 0;

/* Stubs for missing internal functions */
int FUN_10001260() { return 0; }


/* Forward declarations */
void 
FUN_10001020(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void 
FUN_100010f0(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
BOOL  FUN_100012e0(int param_1);
int *  FUN_10001420(void *this_ptr,int param_1);
void  FUN_10001440(int param_1);
void  FUN_10001460(void *this_ptr,int param_1);
void  FUN_100014b0(void *this_ptr,int param_1,int param_2);
void  FUN_10001500(void *this_ptr,int param_1,int param_2);
void 
FUN_10001550(void *this_ptr,int param_1,int param_2,int param_3,int param_4);

void OnInit();
void ProcessScenary();


void 
FUN_10001020(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((int)this_ptr + 8) = param_5;
  *(int *)this_ptr = param_4;
  *(int *)((int)this_ptr + 4) = 0;
  *(int *)((int)this_ptr + 0xc) = param_6;
  *(int *)((int)this_ptr + 0x10) = param_7;
  *(char *)((int)this_ptr + 0x14) = 0;
  CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bff0,param_4,param_1,0);
  RemoveGroup(&DAT_1000bf78,(int)this_ptr + 0x15);
  CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bff0,param_4,param_2,0);
  RemoveGroup(&DAT_1000bf78,(int)this_ptr + 0x1d);
  CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bff0,param_4,param_3,0);
  RemoveGroup(&DAT_1000bf78,(int)this_ptr + 0x25);
  RunTimer(*(char *)((int)this_ptr + 0xc),10);
  RunTimer(*(char *)((int)this_ptr + 0x10),param_5);
  return;
}





void 
FUN_100010f0(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(char *)((int)this_ptr + 0xc));
  if ((cVar1 != '\0') && (*(int *)((int)this_ptr + 4) != 0)) {
    RunTimer(*(char *)((int)this_ptr + 0xc),0x14);
    *(int *)((int)this_ptr + 4) = *(int *)((int)this_ptr + 4) + -1;
    iVar2 = GetTotalAmount0((int)this_ptr + 0x15);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bf88,*(char *)this_ptr,param_1,0);
      SelectUnits(&DAT_1000bf78,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_1000bf78,(int)this_ptr + 0x2d);
      ClearSelection(*(char *)this_ptr);
    }
    iVar2 = GetTotalAmount0((int)this_ptr + 0x1d);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bf88,*(char *)this_ptr,param_2,0);
      SelectUnits(&DAT_1000bf78,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_1000bf78,(int)this_ptr + 0x2d);
      ClearSelection(*(char *)this_ptr);
    }
    iVar2 = GetTotalAmount0((int)this_ptr + 0x25);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bed0,*(char *)this_ptr,param_3,0);
      SelectUnits(&DAT_1000bf78,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_1000bf78,(int)this_ptr + 0x35);
      ClearSelection(*(char *)this_ptr);
    }
  }
  return;
}





BOOL  FUN_100012e0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0x15);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = GetTotalAmount0(param_1 + 0x1d);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = GetTotalAmount0(param_1 + 0x25);
  return iVar1 != 0;
}





int *  FUN_10001420(void *this_ptr,int param_1)

{
  RegisterDynGroup((int)this_ptr + 4);
  *(int *)this_ptr = param_1;
  return this_ptr;
}





void  FUN_10001440(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 1) {
    iVar1 = GetTotalAmount0(param_1 + 4);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xc) = 0;
    }
  }
  return;
}





void  FUN_10001460(void *this_ptr,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this_ptr + 0xc) == 0) {
    iVar1 = GetDiff(0);
    ProduceUnitFast(param_1,&DAT_1000bf60,(int)this_ptr + 4,(10 - iVar1) * 1000);
    *(int *)((int)this_ptr + 0xc) = 1;
  }
  return;
}





void  FUN_100014b0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((int)this_ptr + 0xc) == 1) {
    iVar1 = GetUnitsAmount1(param_1,(int)this_ptr + 4);
    if (iVar1 != 0) {
      SelectUnits((int)this_ptr + 4,0);
      SelSendTo(*(char *)this_ptr,param_2,0,0);
      *(int *)((int)this_ptr + 0xc) = 2;
    }
  }
  return;
}





void  FUN_10001500(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((int)this_ptr + 0xc) == 2) {
    iVar1 = GetUnitsAmount1(param_1,(int)this_ptr + 4);
    if (iVar1 != 0) {
      SelectUnits((int)this_ptr + 4,0);
      Patrol(*(char *)this_ptr,param_2,0);
      *(int *)((int)this_ptr + 0xc) = 3;
    }
  }
  return;
}





void 
FUN_10001550(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  FUN_10001440((int)this_ptr);
  FUN_10001460(this_ptr,param_1);
  FUN_100014b0(this_ptr,param_2,param_3);
  FUN_10001500(this_ptr,param_3,param_4);
  return;
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_1000c008,"GDelEasy");
  RegisterUnits(&DAT_1000be30,"GFortHome");
  RegisterUnits(&DAT_1000bf80,"GFortPeasant");
  RegisterUnits(&DAT_1000bdc0,"GFortGarnizon");
  RegisterUnits(&DAT_1000bff8,"GKomandir");
  RegisterUnits(&DAT_1000c0f8,"GZabor_100");
  RegisterUnits(&DAT_1000be10,"GKavaleriya");
  RegisterUnits(&DAT_1000bf00,"GFortresGarnizon");
  RegisterZone(&DAT_1000bdc8,"ZPrikaz");
  RegisterZone(&DAT_1000be68,"ZWay_Attack01");
  RegisterZone(&DAT_1000be60,"ZWay_Attack02");
  RegisterZone(&DAT_1000bea8,"ZWay_Attack03");
  RegisterZone(&DAT_1000bea0,"ZWay_Attack04");
  RegisterZone(&DAT_1000be98,"ZWay_Attack05");
  RegisterZone(&DAT_1000be88,"ZWay_Attack06");
  RegisterZone(&DAT_1000bec8,"ZWay_Attack07");
  RegisterZone(&DAT_1000beb8,"ZWay_Attack08");
  RegisterZone(&DAT_1000beb0,"ZWay_Attack09");
  RegisterZone(&DAT_1000be90,"ZWay_Attack10");
  RegisterZone(&DAT_1000be80,"ZWay_Attack11");
  RegisterZone(&DAT_1000bec0,"ZWay_Attack12");
  RegisterZone(&DAT_1000c010,"ZLag1");
  RegisterZone(&DAT_1000bfd8,"ZLag1_Tent1");
  RegisterZone(&DAT_1000bfd0,"ZLag1_Tent2");
  RegisterZone(&DAT_1000bfc0,"ZLag1_Tent3");
  RegisterZone(&DAT_1000bfb8,"ZLag1_Unit1");
  RegisterZone(&DAT_1000bfb0,"ZLag1_Unit2");
  RegisterZone(&DAT_1000bfa8,"ZLag1_Unit3");
  RegisterZone(&DAT_1000be38,"ZLag1_Sbor");
  RegisterZone(&DAT_1000c018,"ZLag2");
  RegisterZone(&DAT_1000be58,"ZLag2_Tent1");
  RegisterZone(&DAT_1000be78,"ZLag2_Tent2");
  RegisterZone(&DAT_1000be70,"ZLag2_Tent3");
  RegisterZone(&DAT_1000bdd0,"ZLag2_Unit1");
  RegisterZone(&DAT_1000bde0,"ZLag2_Unit2");
  RegisterZone(&DAT_1000bdd8,"ZLag2_Unit3");
  RegisterZone(&DAT_1000bef8,"ZLag2_Sbor");
  RegisterZone(&DAT_1000c020,"ZLag3");
  RegisterZone(&DAT_1000bfa0,"ZLag3_Tent1");
  RegisterZone(&DAT_1000bf98,"ZLag3_Tent2");
  RegisterZone(&DAT_1000bf90,"ZLag3_Tent3");
  RegisterZone(&DAT_1000be50,"ZLag3_Unit1");
  RegisterZone(&DAT_1000be48,"ZLag3_Unit2");
  RegisterZone(&DAT_1000be40,"ZLag3_Unit3");
  RegisterZone(&DAT_1000bf48,"ZLag3_Sbor");
  RegisterUnits(&DAT_1000be20,"GRazbPort");
  RegisterZone(&DAT_1000c0f0,"ZCreateYatch");
  RegisterZone(&DAT_1000bdf8,"ZPatrol1_0");
  RegisterZone(&DAT_1000be08,"ZPatrol1_1");
  RegisterZone(&DAT_1000be00,"ZPatrol1_2");
  RegisterZone(&DAT_1000bdf0,"ZPatrol1_3");
  RegisterZone(&DAT_1000bde8,"ZPatrol1_4");
  RegisterUnitType(&DAT_1000be28,"Mortira_b(sp)");
  RegisterUnitType(&DAT_1000bff0,"URTA(UN)");
  RegisterUnitType(&DAT_1000bf88,"Pehota_turki(TU)");
  RegisterUnitType(&DAT_1000bed0,"Tatarin(TU)");
  RegisterUnitType(&DAT_1000bf60,"YahtaTU(TU)");
  RegisterUnitType(&DAT_1000bfe0,"WALL_UKR(sp)");
  RegisterUnitType(&DAT_1000bfe8,"WALL_EV(sp)");
  RegisterFormation(&DAT_1000be18,"#ALONE");
  RegisterDynGroup(&DAT_1000bfc8);
  RegisterVar(&DAT_1000bfc8,8);
  RegisterDynGroup(&DAT_1000bf78);
  RegisterVar(&DAT_1000bf78,8);
  RegisterVar(&DAT_1000c030,0x3d);
  RegisterVar(&DAT_1000c070,0x3d);
  RegisterVar(&DAT_1000c0b0,0x3d);
  RegisterVar(&DAT_1000c104,4);
  RegisterVar(&DAT_1000bed8,0x10);
  RegisterVar(&DAT_1000bee8,0x10);
  RegisterVar(&DAT_1000bf28,0x10);
  RegisterVar(&DAT_1000bf38,0x10);
  RegisterVar(&DAT_1000bf50,0x10);
  RegisterVar(&DAT_1000bf68,0x10);
  RegisterVar(&DAT_1000bf08,0x10);
  RegisterVar(&DAT_1000bf18,0x10);
  SetPlayerName(1,"FRIEND");
  SetPlayerName(2,"ALIANCE");
  SetPlayerName(3,"FRANCE");
  SetPlayerName(5,"ROBBERS");
  RegisterDynGroup(&DAT_1000c028);
  RegisterVar(&DAT_1000c028,8);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  BOOL bVar2;
  BOOL bVar3;
  BOOL bVar4;
  int uVar5;
  int iVar6;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  int extraout_var_04;
  int *this_ptr;
  int iVar7;
  void *pcVar8;
  int *puVar9;
  int *puVar10;
  int *puVar11;
  int uVar12;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    SelectUnits(&DAT_1000c008,0);
    SelErase(2);
    ClearSelection(2);
    ChangeFriends(0,3);
    ChangeFriends(2,0x2c);
    ChangeFriends(2,0x28);
    SetResource(3,0,5000);
    SetResource(3,3,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,4,5000);
    SetResource(3,5,5000);
    uVar5 = GetDiff(0);
    StartAI(3,"FRANCE.0",2,1,1,uVar5);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    iVar6 = GetDiff(0);
    SetResource(0,3,iVar6 * -4000 + 30000);
    iVar6 = GetDiff(0);
    SetResource(0,5,iVar6 * -3000 + 20000);
    iVar6 = GetDiff(0);
    SetResource(0,4,iVar6 * -3000 + 20000);
    iVar6 = GetDiff(0);
    SetResource(0,1,(5 - iVar6) * 4000);
    iVar7 = 0;
    iVar6 = GetDiff(0);
    if (0 < (5 - iVar6) * 2) {
      do {
        CreateObject0(&DAT_1000bfc8,&DAT_1000be18,&DAT_1000be28,0,&DAT_1000bea0,0);
        iVar7 = iVar7 + 1;
        iVar6 = GetDiff(0);
      } while (iVar7 < (5 - iVar6) * 2);
    }
    RunTimer(0x14,0x32);
    RunTimer(0x15,0x32);
    RunTimer(0x16,0x32);
    RunTimer(0x17,0x32);
    RunTimer(0x18,0x32);
    RunTimer(0x19,0x32);
    RunTimer(0x1a,0x32);
    EnableUnit(0,&DAT_1000bfe0,0);
    EnableUnit(0,&DAT_1000bfe8,0);
    EnableMission(0x41);
    EnableMission(0x42);
    DisableMission(0x49);
    DisableMission(0x43);
    DisableMission(0x4b);
    EnableMission(0x4c);
    EnableMission(0x44);
    EnableMission(0x45);
    DisableMission(0x46);
    EnableMission(0x47);
    DisableMission(0x4d);
    DisableMission(0x4e);
    ShowPage("#PAGE1505");
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar6 = GetTotalAmount0(&DAT_1000bdc0), iVar6 == 0)) {
    SaveSelectedUnits(0,&DAT_1000c028,0);
    SetTrigg(2,0);
    iVar6 = GetDiff(0);
    RunTimer(0x1a,(5 - iVar6) * 1000);
    SelectUnits(&DAT_1000be30,0);
    SelChangeNation(2,0);
    SelectUnits(&DAT_1000be30,0);
    SelChangeNation(1,0);
    SelectUnits(&DAT_1000bf80,0);
    SelChangeNation(2,0);
    SelectUnits(&DAT_1000bf80,0);
    SelChangeNation(1,0);
    ShowPage("#PAGE1501");
    iVar6 = GetDiff(0);
    AddResource(0,3,(5 - iVar6) * 2000);
    iVar6 = GetDiff(0);
    AddResource(0,5,(5 - iVar6) * 1000);
    iVar6 = GetDiff(0);
    AddResource(0,4,(5 - iVar6) * 1000);
    ShowPage("#PAGE1502");
    SetTrigg(4,0);
    SelectUnits(&DAT_1000c028,0);
    EnableMission(0x49);
    EnableMission(0x43);
    DisableMission(0x42);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    EnableMission(0x4d);
    EnableMission(0x4e);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar6 = GetTotalAmount0(&DAT_1000c0f8), iVar6 < 0x5f)) {
    DisableMission(0x46);
    SetTrigg(8,0);
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    cVar1 = Trigg(3);
    if ((cVar1 != '\0') && (iVar6 = GetUnitsAmount1(&DAT_1000bdc8,&DAT_1000bff8), iVar6 != 0)) {
      SetTrigg(3,0);
      iVar6 = GetTotalAmount0(&DAT_1000c0f8);
      if (iVar6 < 0x5f) {
        cVar1 = AskQuestion("#PAGE1504");
        if (cVar1 != '\0') {
          SelectUnits(&DAT_1000be10,0);
          SetTrigg(4,0);
          SetTrigg(5,0);
          DisableMission(0x46);
          DisableMission(0x45);
        }
      }
      else {
        ShowPage("#PAGE1503");
        EnableMission(0x46);
      }
    }
    iVar6 = GetUnitsAmount1(&DAT_1000bdc8,&DAT_1000bff8);
    if (iVar6 == 0) {
      SetTrigg(3,0);
    }
  }
  cVar1 = Trigg(4);
  if (cVar1 == '\0') {
    SelectUnits(&DAT_1000be10,0);
    SelAttackGroup(1,&DAT_1000bdc0);
    ClearSelection(1);
  }
  iVar6 = GetDiff(0);
  DAT_1000c104 = DAT_1000c000 / ((4 - iVar6) * 10);
// FIXME(decompiler):   iVar6 = GetDiff(0);
  FUN_10001260(&DAT_1000c030,DAT_1000c104 + iVar6 * 3);
// FIXME(decompiler):   iVar6 = GetDiff(0);
  FUN_10001260(&DAT_1000c070,DAT_1000c104 + iVar6 * 3);
// FIXME(decompiler):   iVar6 = GetDiff(0);
  FUN_10001260(&DAT_1000c0b0,DAT_1000c104 + iVar6 * 3);
  FUN_100010f0(&DAT_1000c030,&DAT_1000bfb8,&DAT_1000bfb0,&DAT_1000bfa8,&DAT_1000be38);
  FUN_100010f0(&DAT_1000c070,&DAT_1000bdd0,&DAT_1000bde0,&DAT_1000bdd8,&DAT_1000bef8);
  FUN_100010f0(&DAT_1000c0b0,&DAT_1000be50,&DAT_1000be48,&DAT_1000be40,&DAT_1000bf48);
  cVar1 = TimerDone(0x1a);
  if ((cVar1 == '\0') || (cVar1 = Trigg(2), cVar1 != '\0')) goto LAB_10002283;
  cVar1 = Trigg(6);
  if (cVar1 != '\0') {
    SetTrigg(6,0);
    SetTrigg(7,0);
    iVar6 = GetDiff(0);
    if (iVar6 != 1) {
      if (iVar6 != 2) {
        if (iVar6 != 3) goto LAB_10002135;
        uVar12 = 0x15;
        uVar5 = 0x14;
        iVar6 = GetDiff(0);
        FUN_10001020(&DAT_1000c030,&DAT_1000bfd8,&DAT_1000bfd0,&DAT_1000bfc0,5,(5 - iVar6) * 1000,
                     uVar5,uVar12);
      }
      uVar12 = 0x17;
      uVar5 = 0x16;
      iVar6 = GetDiff(0);
      FUN_10001020(&DAT_1000c070,&DAT_1000be58,&DAT_1000be78,&DAT_1000be70,5,(5 - iVar6) * 1000,
                   uVar5,uVar12);
    }
    uVar12 = 0x19;
    uVar5 = 0x18;
    iVar6 = GetDiff(0);
    FUN_10001020(&DAT_1000c0b0,&DAT_1000bfa0,&DAT_1000bf98,&DAT_1000bf90,5,(5 - iVar6) * 1000,uVar5,
                 uVar12);
  }
LAB_10002135:
  cVar1 = Trigg(7);
  if (cVar1 == '\0') {
    bVar2 = FUN_100012e0(0x1000c0b0);
    bVar3 = FUN_100012e0(0x1000c070);
    bVar4 = FUN_100012e0(0x1000c030);
    iVar6 = GetDiff(0);
    if ((int)bVar2 + (int)bVar3 +
        (int)bVar4 < iVar6) {
      iVar6 = GetUnitsAmount0(&DAT_1000c010,0);
      if ((iVar6 == 0) && (bVar2 = FUN_100012e0(0x1000c030), (int)bVar2 == 0))
      {
        uVar12 = 0x15;
        uVar5 = 0x14;
        iVar6 = GetDiff(0);
        this_ptr = &DAT_1000c030;
        iVar6 = (5 - iVar6) * 1000;
        puVar11 = &DAT_1000bfc0;
        puVar10 = &DAT_1000bfd0;
        puVar9 = &DAT_1000bfd8;
      }
      else {
        iVar6 = GetUnitsAmount0(&DAT_1000c018,0);
        if ((iVar6 == 0) && (bVar2 = FUN_100012e0(0x1000c070), (int)bVar2 == 0)
           ) {
          uVar12 = 0x17;
          uVar5 = 0x16;
          iVar6 = GetDiff(0);
          this_ptr = &DAT_1000c070;
          iVar6 = (5 - iVar6) * 1000;
          puVar11 = &DAT_1000be70;
          puVar10 = &DAT_1000be78;
          puVar9 = &DAT_1000be58;
        }
        else {
          iVar6 = GetUnitsAmount0(&DAT_1000c020,0);
          if ((iVar6 != 0) ||
             (bVar2 = FUN_100012e0(0x1000c0b0), (int)bVar2 != 0))
          goto LAB_10002283;
          uVar12 = 0x19;
          uVar5 = 0x18;
          iVar6 = GetDiff(0);
          iVar6 = (5 - iVar6) * 1000;
          puVar11 = &DAT_1000bf90;
          puVar10 = &DAT_1000bf98;
          puVar9 = &DAT_1000bfa0;
          this_ptr = &DAT_1000c0b0;
        }
      }
      FUN_10001020(this_ptr,puVar9,puVar10,puVar11,5,iVar6,uVar5,uVar12);
    }
  }
LAB_10002283:
  FUN_10001550(&DAT_1000bed8,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000be00,&DAT_1000be08);
  FUN_10001550(&DAT_1000bee8,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000be00,&DAT_1000be08);
  FUN_10001550(&DAT_1000bf28,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000be00);
  FUN_10001550(&DAT_1000bf38,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000be00);
  FUN_10001550(&DAT_1000bf50,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000bdf0);
  FUN_10001550(&DAT_1000bf68,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000bdf0);
  FUN_10001550(&DAT_1000bf08,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000bde8);
  FUN_10001550(&DAT_1000bf18,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000bde8);
  iVar6 = GetTotalAmount0(&DAT_1000bf00);
  if (iVar6 == 0) {
    ShowVictory();
    DisableMission(0x43);
    EnableMission(0x4b);
  }
  cVar1 = NationIsErased(0);
  if (cVar1 == '\0') {
    return;
  }
                    
                    
  LooseGame();
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
