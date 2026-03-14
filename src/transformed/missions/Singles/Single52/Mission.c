#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
char DAT_10009038[] = "HELP";
char DAT_100092c4[] = "%s";
long long DAT_1000bf78 = 0;
long long DAT_1000bf80 = 0;
long long DAT_1000bf88 = 0;
long long DAT_1000bf90 = 0;
long long DAT_1000bf98 = 0;
long long DAT_1000c000 = 0;
long long DAT_1000c008 = 0;
long long DAT_1000c010 = 0;
long long DAT_1000c018 = 0;
long long DAT_1000c020 = 0;
long long DAT_1000c028 = 0;
long long DAT_1000c030 = 0;
long long DAT_1000c038 = 0;
long long DAT_1000c088 = 0;
long long DAT_1000c0d8 = 0;
long long DAT_1000c128 = 0;
long long DAT_1000c130 = 0;

/* Stubs for missing internal functions */
int FUN_10001fdd() { return 0; }


/* Forward declarations */
void FUN_10001020(void *param_1);
void  FUN_10001960(void *this_ptr,int param_1);
void  FUN_10001980(void *this_ptr,int param_1);
void  FUN_100019a0(void *this_ptr,int param_1);
void  FUN_100019c0(void *this_ptr,int param_1);
void  FUN_100019f0(void *this_ptr,int param_1);
void  FUN_10001a10(void *this_ptr,int param_1,int param_2);
void  FUN_10001a70(int param_1);
int  FUN_10001ac0(int param_1);
void  FUN_10001b10(void *this_ptr,int param_1);
void  FUN_10001b20(void *this_ptr,int param_1);
void  FUN_10001b30(void *this_ptr,int param_1);
void  FUN_10001b60(void *this_ptr,int param_1);
void  FUN_10001b80(void *this_ptr,int param_1);
void  FUN_10001ba0(void *this_ptr,int param_1);
void  FUN_10001bc0(void *this_ptr,int param_1);
void  FUN_10001be0(void *this_ptr,int param_1);
void  FUN_10001cc0(void *this_ptr,int param_1);
int  FUN_10001d60(int param_1);
BOOL  FUN_10001da0(int param_1);
int FUN_10001dc0(char *param_1,byte *param_2);


void __cdecl FUN_10001020(void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  int uVar5;
  
  iVar2 = GetTotalAmount1(&DAT_1000c000,2);
  iVar3 = GetTotalAmount1(&DAT_1000c000,1);
  if (iVar3 < iVar2) {
    uVar4 = 1;
    uVar5 = 2;
  }
  else {
    uVar4 = 2;
    uVar5 = 1;
  }
  cVar1 = NationIsErased(uVar4);
  if (cVar1 == '\0') {
    FUN_10001a10(param_1,4,uVar4);
    return;
  }
  cVar1 = NationIsErased(uVar5);
  if (cVar1 == '\0') {
    FUN_10001a10(param_1,4,uVar5);
    return;
  }
  FUN_10001a10(param_1,4,3);
  return;
}





void  FUN_10001960(void *this_ptr,int param_1)

{
  RegisterUnits(this_ptr,param_1);
  return;
}





void  FUN_10001980(void *this_ptr,int param_1)

{
  RegisterUnits((int)this_ptr + 8,param_1);
  return;
}





void  FUN_100019a0(void *this_ptr,int param_1)

{
  RegisterUnits((int)this_ptr + 0x10,param_1);
  return;
}





void  FUN_100019c0(void *this_ptr,int param_1)

{
  RegisterUnits((int)this_ptr + 0x18,param_1);
  FUN_10001dc0((char *)((int)this_ptr + 0x20),DAT_100092c4);
  return;
}





void  FUN_100019f0(void *this_ptr,int param_1)

{
  RegisterUnits((int)this_ptr + 0x48,param_1);
  return;
}





void  FUN_10001a10(void *this_ptr,int param_1,int param_2)

{
  TakeFood((int)this_ptr + 0x10);
  ClearSelection(param_1);
  SelectUnits((int)this_ptr + 0x48,0);
  SelDie(param_1);
  SelectUnits(this_ptr,0);
  SelectUnits((int)this_ptr + 8,1);
  SelChangeNation(param_1,param_2);
  return;
}





void  FUN_10001a70(int param_1)

{
  int iVar1;
  int iVar2;
  char auStack_2c [4];
  short uStack_28;
  short uStack_26;
  
  iVar1 = GetNUnits(param_1 + 0x18);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      GetUnitInfo(param_1 + 0x18,iVar2,auStack_2c);
      uStack_28 = uStack_26;
      SetUnitInfo(auStack_2c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}





int  FUN_10001ac0(int param_1)

{
  RegisterDynGroup(param_1 + 4);
  RegisterDynGroup(param_1 + 0x34);
  RegisterDynGroup(param_1 + 0x3c);
  RegisterDynGroup(param_1 + 0x44);
  RegisterDynGroup(param_1 + 0x4c);
  *(int *)(param_1 + 0x54) = 1;
  *(int *)(param_1 + 0x58) = 4000;
  *(int *)(param_1 + 0x5c) = 0;
  RegisterDynGroup(param_1 + 0x60);
  return param_1;
}





void  FUN_10001b10(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x54) = param_1;
  return;
}





void  FUN_10001b20(void *this_ptr,int param_1)

{
  *(int *)this_ptr = param_1;
  return;
}





void  FUN_10001b30(void *this_ptr,int param_1)

{
  char local_8 [8];
  
  RegisterUnits(local_8,param_1);
  RemoveGroup(local_8,(int)this_ptr + 4);
  return;
}





void  FUN_10001b60(void *this_ptr,int param_1)

{
  RegisterUnits((int)this_ptr + 0xc,param_1);
  return;
}





void  FUN_10001b80(void *this_ptr,int param_1)

{
  RegisterZone((int)this_ptr + 0x14,param_1);
  return;
}





void  FUN_10001ba0(void *this_ptr,int param_1)

{
  RegisterUnitType((int)this_ptr + 0x1c,param_1);
  return;
}





void  FUN_10001bc0(void *this_ptr,int param_1)

{
  RegisterUnitType((int)this_ptr + 0x24,param_1);
  return;
}





void  FUN_10001be0(void *this_ptr,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = GetTotalAmount0((int)this_ptr + 0x34);
  if ((((iVar2 != 0) || (iVar2 = GetTotalAmount0((int)this_ptr + 0x3c), iVar2 != 0)) ||
      (cVar1 = CheckProduction((int)this_ptr + 0xc), cVar1 == '\0')) &&
     (iVar2 = GetGlobalTime(), iVar2 <= *(int *)((int)this_ptr + 0x5c))) {
    return;
  }
  iVar2 = GetGlobalTime();
  *(int *)((int)this_ptr + 0x5c) = iVar2 + *(int *)((int)this_ptr + 0x58);
  iVar2 = GetUnitsByNation((int)this_ptr + 4,*(char *)this_ptr);
  iVar3 = (iVar2 + 1) * *(int *)((int)this_ptr + 0x54);
  iVar2 = iVar3 / 3;
  if (0 < iVar2) {
    do {
      ProduceUnitFast((int)this_ptr + 0xc,(int)this_ptr + 0x1c,(int)this_ptr + 0x34,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0 < iVar3) {
    do {
      ProduceUnitFast((int)this_ptr + 0xc,(int)this_ptr + 0x24,(int)this_ptr + 0x3c,0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar2 = GetDiff(0);
  *(int *)((int)this_ptr + 0x54) = *(int *)((int)this_ptr + 0x54) + iVar2 * param_1;
  return;
}





void  FUN_10001cc0(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  char local_8 [8];
  
  UnitsCenter(local_8,param_1,1000);
  ClearSelection(*(char *)this_ptr);
  SelectUnits((int)this_ptr + 0x4c,0);
  uVar2 = 0;
  iVar1 = rand();
  SelSendAndKill(*(char *)this_ptr,local_8,iVar1,uVar2);
  ClearSelection(*(char *)this_ptr);
  SelectUnits((int)this_ptr + 0x44,0);
  SelAttackGroup(*(char *)this_ptr,param_1);
  return;
}





int  FUN_10001d60(int param_1)

{
  unsigned int uVar1;
  int uVar2;
  
  uVar1 = CheckProduction(param_1 + 0xc);
  if ((char)uVar1 != '\0') {
    RemoveGroup(param_1 + 0x34,param_1 + 0x44);
    RemoveGroup(param_1 + 0x3c,param_1 + 0x4c);
    return (int)1;
  }
  return uVar1 & 0xffffff00;
}





BOOL  FUN_10001da0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  return iVar1 == 0;
}





int __cdecl FUN_10001dc0(char *param_1,byte *param_2)

{
  int iVar1;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10001fdd(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}





void OnInit(void)

{
                    
  RegisterVar(&DAT_1000bf98,0x68);
  RegisterUnits(&DAT_1000bf88,"Market");
  FUN_10001b20(&DAT_1000bf98,5);
  FUN_10001b30(&DAT_1000bf98,"Band0_house0");
  FUN_10001b30(&DAT_1000bf98,"Band0_house1");
  FUN_10001b30(&DAT_1000bf98,"Band0_house2");
  FUN_10001b60(&DAT_1000bf98,"Band0_barrack");
  FUN_10001b80(&DAT_1000bf98,"Z_Band0_main");
  FUN_10001ba0(&DAT_1000bf98,"Strelec_Algir(AL)");
  FUN_10001bc0(&DAT_1000bf98,"Pehota_turki(AL)");
  RegisterZone(&DAT_1000c020,"Z_View0");
  RegisterZone(&DAT_1000c028,"Z_View1");
  RegisterZone(&DAT_1000c030,"Z_View2");
  RegisterZone(&DAT_1000c010,"Z_View3");
  RegisterZone(&DAT_1000c018,"Z_View4");
  RegisterUnits(&DAT_1000c008,"Enemy3_guard");
  RegisterUnitType(&DAT_1000c000,"Kreposnoi_pruss(BA)");
  RegisterUnitType(&DAT_1000bf78,"Rinok(DA)");
  RegisterUnitType(&DAT_1000bf90,"WALL_UKR(DA)");
  RegisterUnitType(&DAT_1000c130,"WALL_EV(DA)");
  RegisterUpgrade(&DAT_1000bf80,"AKA24DA");
  RegisterUpgrade(&DAT_1000c128,"AKA19DA");
  FUN_10001960(&DAT_1000c038,"Link0_MainForce");
  FUN_10001980(&DAT_1000c038,"Link0_Buildings");
  FUN_100019c0(&DAT_1000c038,"Link0_Towers");
  FUN_100019f0(&DAT_1000c038,"Link0_Wall");
  FUN_100019a0(&DAT_1000c038,"Link0_Food");
  FUN_10001960(&DAT_1000c088,"Link1_MainForce");
  FUN_10001980(&DAT_1000c088,"Link1_Buildings");
  FUN_100019c0(&DAT_1000c088,"Link1_Towers");
  FUN_100019f0(&DAT_1000c088,"Link1_Wall");
  FUN_100019a0(&DAT_1000c088,"Link1_Food");
  FUN_10001960(&DAT_1000c0d8,"Link2_MainForce");
  FUN_10001980(&DAT_1000c0d8,"Link2_Buildings");
  FUN_100019c0(&DAT_1000c0d8,"Link2_Towers");
  FUN_100019f0(&DAT_1000c0d8,"Link2_Wall");
  FUN_100019a0(&DAT_1000c0d8,"Link2_Food");
  ChangeFriends(1,0xe);
  ChangeFriends(2,0xe);
  ChangeFriends(3,0xe);
  ChangeFriends(4,0xe);
  ChangeFriends(5,0xe);
  SetPlayerName(1,"ENEMY");
  SetPlayerName(2,"ENEMY");
  SetPlayerName(3,"ENEMY");
  SetPlayerName(4,DAT_10009038);
  SetPlayerName(5,"ROBBERS");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  byte bVar2;
  BOOL bVar3;
  int iVar4;
  int uVar5;
  void *pcVar6;
  void *pcVar7;
  
                    
  cVar1 = Trigg(0);
  if (cVar1 != '\0') {
    SetTrigg(0,0);
    ShowPage("#PAGE0");
    DisableMission(0x42);
    DisableMission(0x43);
    SelectUnits(&DAT_1000c008,0);
    SetStandGround(3,1);
    EnableUnit(0,&DAT_1000bf78,0);
    EnableUnit(0,&DAT_1000c130,0);
    EnableUnit(0,&DAT_1000bf90,0);
    DisableUpgrade(0,&DAT_1000bf80);
    DisableUpgrade(0,&DAT_1000c128);
    iVar4 = GetDiff(0);
    if (iVar4 == 0) {
      SetLightSpot(&DAT_1000c020,2,0);
      SetLightSpot(&DAT_1000c028,2,1);
      SetLightSpot(&DAT_1000c030,2,2);
      SetLightSpot(&DAT_1000c010,2,3);
      SetLightSpot(&DAT_1000c018,2,4);
    }
    iVar4 = GetDiff(0);
    if (iVar4 == 1) {
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
    }
    iVar4 = GetDiff(0);
    if (iVar4 == 2) {
      SetResource(0,3,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
    }
    iVar4 = GetDiff(0);
    if (iVar4 == 3) {
      SetResource(0,3,2000);
      SetResource(0,0,2000);
      SetResource(0,2,2000);
      SetResource(0,1,2000);
      SetResource(0,4,2000);
      SetResource(0,5,2000);
    }
    iVar4 = GetDiff(0);
    FUN_10001b10(&DAT_1000bf98,iVar4 + 1);
    iVar4 = GetDiff(0);
    RunTimer(2,(8 - iVar4) * 500);
    SetResource(1,3,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,4,5000);
    SetResource(1,5,8000);
    StartAI(1,"BAVARIA.0",0,2,2,0xffffffff);
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,8000);
    StartAI(2,"BAVARIA.0",0,2,2,0xffffffff);
    RunTimer(0,20000);
    RunTimer(1,6000);
  }
  iVar4 = GetGlobalTime();
  bVar2 = Trigg(8);
  if ((bVar2 & 2000 < iVar4) != 0) {
    bVar3 = FUN_10001da0(0x1000bf98);
    if (bVar3) {
      SetTrigg(8,0);
      iVar4 = GetDiff(0);
      ShowPageParam("#BandIsDead",(4 - iVar4) * 500);
      iVar4 = GetDiff(0);
      AddResource(0,1,(4 - iVar4) * 500);
      DisableMission(0x42);
      EnableMission(0x43);
    }
    FUN_10001cc0(&DAT_1000bf98,&DAT_1000bf88);
    cVar1 = TimerDone(2);
    if ((cVar1 != '\0') &&
       (uVar5 = FUN_10001d60(0x1000bf98), pcVar7 = (void*)&ShowPage, (char)uVar5 != '\0')) {
      iVar4 = GetDiff(0);
      RunTimer(2,(8 - iVar4) * 500);
      FUN_10001be0(&DAT_1000bf98,1);
      cVar1 = Trigg(7);
      if (cVar1 != '\0') {
        SetTrigg(7,0);
        ShowPage("#BandAttack");
        EnableMission(0x42);
      }
    }
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    FUN_10001a70(0x1000c038);
    cVar1 = TimerDone(0);
    if (cVar1 != '\0') {
      SetTrigg(1,0);
      FUN_10001020(&DAT_1000c038);
      ShowPage("#Transfer0");
      RunTimer(0,20000);
    }
  }
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    FUN_10001a70(0x1000c088);
    cVar1 = TimerDone(0);
    if ((cVar1 != '\0') && (cVar1 = Trigg(1), cVar1 == '\0')) {
      SetTrigg(2,0);
      FUN_10001020(&DAT_1000c088);
      ShowPage("#Transfer1");
      RunTimer(0,20000);
    }
  }
  cVar1 = Trigg(3);
  if (cVar1 != '\0') {
    FUN_10001a70(0x1000c0d8);
    cVar1 = TimerDone(0);
    if ((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) {
      SetTrigg(3,0);
      FUN_10001020(&DAT_1000c0d8);
      ShowPage("#Transfer2");
    }
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(4,0);
    ShowPage("#Enemy3StartAI");
    SetResource(3,3,10000);
    SetResource(3,0,10000);
    SetResource(3,2,10000);
    SetResource(3,1,10000);
    SetResource(3,4,10000);
    SetResource(3,5,10000);
    StartAI(3,"BAVARIA.0",0,2,2,0xffffffff);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(5,0);
    ShowPage("#Enemy1IsErased");
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(6,0);
    ShowPage("#Enemy2IsErased");
  }
  cVar1 = NationIsErased(3);
  if (cVar1 != '\0') {
    ShowPage("#Enemy3IsErased");
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PlayerIsErased");
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
