#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
char DAT_10007044[] = "ALLY";
long long DAT_10009dd8 = 0;
int DAT_10009de0 = 0;
long long DAT_10009de8 = 0;
unsigned char DAT_10009df0[272] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10009f00[272] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x9C, 0x02, 0x00, 0x00, 0x24, 0x30, 0x2A, 0x30, 0x2F, 0x30, 0x36, 0x30};
long long DAT_1000a010 = 0;
long long DAT_1000a018 = 0;
long long DAT_1000a020 = 0;
long long DAT_1000a028 = 0;
long long DAT_1000a030 = 0;
long long DAT_1000a038 = 0;
int DAT_1000a040 = 0;
long long DAT_1000a048 = 0;
long long DAT_1000a050 = 0;
long long DAT_1000a058 = 0;
long long DAT_1000a060 = 0;
long long DAT_1000a068 = 0;
long long DAT_1000a070 = 0;
unsigned char DAT_1000a078[272] = {0};
long long DAT_1000a188 = 0;
long long DAT_1000a190 = 0;
long long DAT_1000a198 = 0;
long long DAT_1000a1a0 = 0;
long long DAT_1000a1a8 = 0;
long long DAT_1000a1b0 = 0;
long long DAT_1000a1b8 = 0;
long long DAT_1000a1c0 = 0;
long long DAT_1000a1c8 = 0;
long long DAT_1000a1d0 = 0;
long long DAT_1000a1d8 = 0;
long long DAT_1000a1e0 = 0;
long long DAT_1000a1e8 = 0;
long long DAT_1000a1f0 = 0;
long long DAT_1000a1f8 = 0;
long long DAT_1000a200 = 0;
long long DAT_1000a208 = 0;
long long DAT_1000a210 = 0;
long long DAT_1000a218 = 0;
long long DAT_1000a220 = 0;

/* Forward declarations */
void  FUN_10001ba0(int param_1);
int 
FUN_10001c10(void *this_ptr,char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
void  FUN_10001c80(void *this_ptr,int param_1);
void  FUN_10001cd0(void *this_ptr,int param_1);
void  FUN_10001d40(void *this_ptr,int param_1);
void  FUN_10001d70(void *this_ptr,char param_1,int param_2,int param_3);
BOOL FUN_10001da0(int param_1);
void FUN_10001dc0(int param_1,int param_2);

void OnInit();
void ProcessScenary();


void  FUN_10001ba0(int param_1)

{
  RegisterDynGroup(param_1 + 0x10);
  RegisterVar(param_1 + 0x10,8);
  RegisterFormation(param_1 + 8,"#ALONE");
  RegisterUnitType(param_1,"GRUZ(UN)");
  RegisterVar(param_1 + 0x1c,1);
  RegisterVar(param_1 + 0x18,4);
  RegisterVar(param_1 + 0x1e,4);
  RegisterVar(param_1 + 0x22,4);
  RegisterVar(param_1 + 0x1d,1);
  return;
}





int 
FUN_10001c10(void *this_ptr,char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  int in_EAX;
  unsigned int uVar1;
  int uVar2;
  
  uVar1 = (intptr_t)param_1;
  if (param_1 != '\0') {
    uVar1 = GetTotalAmount0((intptr_t)this_ptr + 0x10);
    if (uVar1 == 0) {
      *(int *)((intptr_t)this_ptr + 0x1e) = param_5;
      *(int *)((intptr_t)this_ptr + 0x18) = param_3;
      *(char *)((intptr_t)this_ptr + 0x1d) = (char)param_2;
      *(char *)((intptr_t)this_ptr + 0x1c) = 0;
      *(int *)((intptr_t)this_ptr + 0x22) = param_6;
      uVar2 = CreateObject0((intptr_t)this_ptr + 0x10,(intptr_t)this_ptr + 8,this_ptr,param_2,param_4,0);
      return (int)1;
    }
  }
  return uVar1 & -256;
}





void  FUN_10001c80(void *this_ptr,int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0((intptr_t)this_ptr + 0x10);
  if (iVar1 != 0) {
    iVar1 = GetUnitsAmount1(param_1,(intptr_t)this_ptr + 0x10);
    if (iVar1 != 0) {
      if (*(char *)((intptr_t)this_ptr + 0x1c) == '\0') {
        *(char *)((intptr_t)this_ptr + 0x1c) = 1;
      }
      FUN_10001d40(this_ptr,*(int *)((intptr_t)this_ptr + 0x1e));
    }
  }
  return;
}





void  FUN_10001cd0(void *this_ptr,int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0((intptr_t)this_ptr + 0x10);
  if (iVar1 != 0) {
    iVar1 = GetUnitsAmount1(param_1,(intptr_t)this_ptr + 0x10);
    if (iVar1 != 0) {
      if (*(char *)((intptr_t)this_ptr + 0x1c) != '\0') {
        iVar1 = GetDiff(0);
        AddResource((int)*(char *)((intptr_t)this_ptr + 0x1d) + -1,
                    *(char *)((intptr_t)this_ptr + 0x18),(iVar1 + 2) * 100);
        *(char *)((intptr_t)this_ptr + 0x1c) = 0;
      }
      FUN_10001d40(this_ptr,*(int *)((intptr_t)this_ptr + 0x22));
    }
  }
  return;
}





void  FUN_10001d40(void *this_ptr,int param_1)

{
  int extraout_ECX = 0;
  
  SelectUnits((intptr_t)this_ptr + 0x10,0);
  FUN_10001dc0(param_1,(int)*(char *)((intptr_t)this_ptr + 0x1d));
  ClearSelection(*(char *)((intptr_t)this_ptr + 0x1d));
  return;
}





void  FUN_10001d70(void *this_ptr,char param_1,int param_2,int param_3)

{
  if (param_1 != '\0') {
    FUN_10001c80(this_ptr,param_2);
    FUN_10001cd0(this_ptr,param_3);
  }
  return;
}





BOOL __cdecl FUN_10001da0(int param_1)

{
  int iVar1;
  
  iVar1 = GetUnitsByNation(param_1,4);
  return iVar1 != 0;
}





void __cdecl FUN_10001dc0(int param_1,int param_2)

{
  switch(param_1) {
  case 1:
    SelSendTo(param_2,&DAT_1000a1b0,0,0);
    return;
  case 10:
    SelSendTo(param_2,&DAT_1000a1b8,0x80,0);
    return;
  case 0x17:
    SelSendTo(param_2,&DAT_1000a1d0,0xf0,0);
    SelSendTo(param_2,&DAT_1000a1d8,0xe0,2);
    SelSendTo(param_2,&DAT_10009de8,0xe0,2);
    return;
  case 0x18:
    SelSendTo(param_2,&DAT_1000a1e0,0x10,0);
    SelSendTo(param_2,&DAT_1000a1e8,0,2);
    SelSendTo(param_2,&DAT_1000a048,0x20,2);
    return;
  case 0x20:
    SelSendTo(param_2,&DAT_1000a1d8,0x60,0);
    SelSendTo(param_2,&DAT_1000a1d0,0x70,2);
    SelSendTo(param_2,&DAT_1000a218,0x40,2);
    return;
  case 0x2a:
    SelSendTo(param_2,&DAT_1000a1e8,0x70,0);
    SelSendTo(param_2,&DAT_1000a1e0,0x90,2);
    SelSendTo(param_2,&DAT_1000a218,0,2);
  }
  return;
}





void OnInit(void)

{
  int iVar1;
  
                    
  RegisterUnits(&DAT_1000a1a0,"GStorage01");
  RegisterUnits(&DAT_1000a198,"GStorage02");
  RegisterUnits(&DAT_1000a068,"GWorota_Coal");
  RegisterUnits(&DAT_10009dd8,"GWorota_Iron");
  RegisterUnits(&DAT_1000a1c8,"GWorota_Gold");
  RegisterUnits(&DAT_1000a058,"GMine_Coal");
  RegisterZone(&DAT_1000a1b8,"ZTorg_Coal");
  RegisterUnits(&DAT_1000a220,"GMine_Iron");
  RegisterZone(&DAT_1000a048,"ZTorg_Iron");
  RegisterUnits(&DAT_1000a010,"GMine_Gold");
  RegisterZone(&DAT_10009de8,"ZTorg_Gold");
  RegisterZone(&DAT_1000a1b0,"ZSity_Coal");
  RegisterZone(&DAT_1000a218,"ZSity_IronGold");
  RegisterZone(&DAT_1000a1d0,"ZWay_01");
  RegisterZone(&DAT_1000a1d8,"ZWay_02");
  RegisterZone(&DAT_1000a1e0,"ZWay_03");
  RegisterZone(&DAT_1000a1e8,"ZWay_04");
  iVar1 = 0;
  do {
    FUN_10001ba0((int)(((unsigned char *)&DAT_1000a078) + iVar1));
    FUN_10001ba0((int)(((unsigned char *)&DAT_10009df0) + iVar1));
    FUN_10001ba0((int)(((unsigned char *)&DAT_10009f00) + iVar1));
    iVar1 = iVar1 + 0x26;
  } while (iVar1 < 0x10a);
  RegisterUnits(&DAT_1000a190,"GSee_Gold");
  RegisterUnits(&DAT_1000a070,"GPort_Gold");
  RegisterUnits(&DAT_1000a1c0,"GPort_Sity");
  RegisterUnits(&DAT_1000a018,"GParom1");
  RegisterUnits(&DAT_1000a020,"GParom2");
  RegisterZone(&DAT_1000a050,"ZPort_Gold");
  RegisterZone(&DAT_1000a030,"ZPort_Sity");
  RegisterVar(&DAT_10009de0,1);
  RegisterVar(&DAT_1000a040,1);
  RegisterUnits(&DAT_1000a060,"GMission1");
  RegisterUnits(&DAT_1000a028,"GMission1_Gard");
  RegisterZone(&DAT_1000a1f0,"ZMission1");
  RegisterUnits(&DAT_1000a038,"GCoal_Gard");
  RegisterZone(&DAT_1000a1a8,"ZCoal_Gard");
  RegisterUnits(&DAT_1000a210,"GIron_Gard");
  RegisterZone(&DAT_1000a188,"ZIron_Gard");
  RegisterZone(&DAT_1000a1f8,"ZMission2");
  RegisterZone(&DAT_1000a200,"ZMission3");
  RegisterZone(&DAT_1000a208,"ZMission4");
  ChangeFriends(0,3);
  ChangeFriends(3,0x18);
  ChangeFriends(5,0x3f);
  SetPlayerName(1,DAT_10007044);
  SetPlayerName(3,"RUSSIA");
  SetPlayerName(4,"SUPPLIER");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  BOOL bVar2;
  int iVar3;
  int uVar4;
  void *pcVar5;
  void *pcVar6;
  int *puVar7;
  void *pcVar8;
  int uVar9;
  int *puVar10;
  int uVar11;
  int uVar12;
  char auStack_2c [4];
  unsigned short uStack_28;
  unsigned short uStack_26;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar3 = GetDiff(0);
    SetResource(0,0,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,3,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,2,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,1,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,4,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,5,(5 - iVar3) * 1000);
    SetResource(3,0,5000);
    SetResource(3,3,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,4,5000);
    SetResource(3,5,5000);
    uVar4 = GetDiff(0);
    StartAI(3,"RUSSIA.0",1,1,0,uVar4);
    SelectUnits(&DAT_1000a068,0);
    SelectUnits(&DAT_10009dd8,1);
    SelectUnits(&DAT_1000a1c8,1);
    SelOpenGates(4);
    ClearSelection(4);
    RunTimer(1,300);
    RunTimer(2,300);
    RunTimer(3,300);
    DAT_10009de0 = '\x01';
    DAT_1000a040 = '\0';
// FIXME(decompiler):     iVar3 = GetDiff(0);
    SetLightSpot(&DAT_1000a1f0,4 - iVar3,0);
// FIXME(decompiler):     iVar3 = GetDiff(0);
    SetLightSpot(&DAT_1000a1f8,4 - iVar3,0);
// FIXME(decompiler):     iVar3 = GetDiff(0);
    SetLightSpot(&DAT_1000a200,4 - iVar3,0);
// FIXME(decompiler):     iVar3 = GetDiff(0);
    SetLightSpot(&DAT_1000a208,4 - iVar3,0);
    ShowPage("#PAGE1701");
    uVar4 = GetDiff(0);
    switch(uVar4) {
    case 3:
      InitialUpgrade("GPort_Sity","Pik_rus(RU)ATTACK6");
      InitialUpgrade("GPort_Sity","Pik_rus(RU)SHIELD6");
      InitialUpgrade("GPort_Sity","Pik_rus(RU)ATTACK5");
      InitialUpgrade("GPort_Sity","Pik_rus(RU)SHIELD5");
      InitialUpgrade("GPort_Sity","Strelec(RU)ATTACK4");
      InitialUpgrade("GPort_Sity","Strelec(RU)SHIELD7");
      InitialUpgrade("GPort_Sity","Strelec(RU)SHIELD6");
    case 2:
      InitialUpgrade("GPort_Sity","Pik_rus(RU)ATTACK4");
      InitialUpgrade("GPort_Sity","Pik_rus(RU)SHIELD4");
      InitialUpgrade("GPort_Sity","Strelec(RU)ATTACK3");
      InitialUpgrade("GPort_Sity","Strelec(RU)SHIELD5");
      InitialUpgrade("GPort_Sity","Strelec(RU)SHIELD4");
    case 1:
      InitialUpgrade("GPort_Sity","Pik_rus(RU)ATTACK3");
      InitialUpgrade("GPort_Sity","Pik_rus(RU)SHIELD3");
      InitialUpgrade("GPort_Sity","Strelec(RU)ATTACK");
      InitialUpgrade("GPort_Sity","Strelec(RU)SHIELD3");
    case 0:
      InitialUpgrade("GPort_Sity","Pik_rus(RU)ATTACK");
      InitialUpgrade("GPort_Sity","Pik_rus(RU)SHIELD");
      InitialUpgrade("GPort_Sity","Strelec(RU)SHIELD");
    default:
      EnableMission(0x41);
      EnableMission(0x42);
      EnableMission(0x44);
      EnableMission(0x45);
      EnableMission(0x46);
      DisableMission(0x43);
    }
  }
  cVar1 = GetUnitInfo(&DAT_1000a1a0,0,auStack_2c);
  if ((cVar1 != '\0') && (uStack_28 < uStack_26)) {
    uStack_28 = uStack_26;
    SetUnitInfo(auStack_2c);
  }
  cVar1 = GetUnitInfo(&DAT_1000a198,0,auStack_2c);
  if ((cVar1 != '\0') && (uStack_28 < uStack_26)) {
    uStack_28 = uStack_26;
    SetUnitInfo(auStack_2c);
  }
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    RunTimer(1,1000);
    puVar7 = &DAT_1000a078;
    do {
      uVar12 = 10;
      uVar11 = 1;
      puVar10 = &DAT_1000a1b8;
      uVar9 = 5;
      uVar4 = 4;
      bVar2 = FUN_10001da0(&DAT_1000a058);
      uVar4 = FUN_10001c10(puVar7,bVar2,uVar4,uVar9,puVar10,uVar11,uVar12);
      if ((char)uVar4 != '\0') break;
      puVar7 = puVar7 + 0x26;
    } while ((int)puVar7 < 0x1000a182);
  }
  cVar1 = TimerDone(2);
  if (cVar1 != '\0') {
    RunTimer(2,1000);
    puVar7 = &DAT_10009df0;
    do {
      uVar12 = 0x18;
      uVar11 = 0x2a;
      puVar10 = &DAT_1000a048;
      uVar9 = 4;
      uVar4 = 4;
      bVar2 = FUN_10001da0(&DAT_1000a220);
      uVar4 = FUN_10001c10(puVar7,bVar2,uVar4,uVar9,puVar10,uVar11,uVar12);
      if ((char)uVar4 != '\0') break;
      puVar7 = puVar7 + 0x26;
    } while ((int)puVar7 < 0x10009efa);
  }
  cVar1 = TimerDone(3);
  if (cVar1 != '\0') {
    RunTimer(3,1000);
    puVar7 = &DAT_10009f00;
    do {
      uVar12 = 0x17;
      uVar11 = 0x20;
      puVar10 = &DAT_10009de8;
      uVar9 = 1;
      uVar4 = 4;
      bVar2 = FUN_10001da0(&DAT_1000a010);
      uVar4 = FUN_10001c10(puVar7,bVar2,uVar4,uVar9,puVar10,uVar11,uVar12);
      if ((char)uVar4 != '\0') break;
      puVar7 = puVar7 + 0x26;
    } while ((int)puVar7 < 0x1000a00a);
  }
  iVar3 = 0;
  do {
    puVar10 = &DAT_1000a1b0;
    puVar7 = &DAT_1000a1b8;
    bVar2 = FUN_10001da0(&DAT_1000a058);
    FUN_10001d70(((unsigned char *)&DAT_1000a078) + iVar3,bVar2,puVar7,puVar10);
    puVar10 = &DAT_1000a218;
    puVar7 = &DAT_1000a048;
    bVar2 = FUN_10001da0(&DAT_1000a220);
    FUN_10001d70(((unsigned char *)&DAT_10009df0) + iVar3,bVar2,puVar7,puVar10);
    puVar10 = &DAT_1000a218;
    puVar7 = &DAT_10009de8;
    bVar2 = FUN_10001da0(&DAT_1000a010);
    FUN_10001d70(((unsigned char *)&DAT_10009f00) + iVar3,bVar2,puVar7,puVar10);
    iVar3 = iVar3 + 0x26;
  } while (iVar3 < 0x10a);
  cVar1 = Trigg(2);
  if (cVar1 == '\0') goto LAB_10001966;
  iVar3 = GetUnitsByNation(&DAT_1000a1c0,4);
  if (((iVar3 == 0) || (iVar3 = GetUnitsByNation(&DAT_1000a070,4), iVar3 == 0)) ||
     (iVar3 = GetUnitsByNation(&DAT_1000a190,4), iVar3 == 0)) {
    SetTrigg(2,0);
    goto LAB_10001966;
  }
  if (DAT_10009de0 == '\0') {
    iVar3 = GetUnitsAmount1(&DAT_1000a050,&DAT_1000a018);
    if (iVar3 != 0) {
      DAT_10009de0 = '\x01';
      SelectUnits(&DAT_1000a018,0);
      SelSendTo(4,&DAT_1000a030,0,0);
      ClearSelection(4);
    }
    if (DAT_10009de0 != '\0') goto LAB_1000184f;
  }
  else {
LAB_1000184f:
    iVar3 = GetUnitsAmount1(&DAT_1000a030,&DAT_1000a018);
    if (iVar3 != 0) {
      DAT_10009de0 = '\0';
      iVar3 = GetDiff(0);
      AddResource(3,1,(iVar3 + 5) * 1000);
      SelectUnits(&DAT_1000a018,0);
      SelSendTo(4,&DAT_1000a050,0,0);
      ClearSelection(4);
    }
  }
  if (DAT_1000a040 == '\0') {
    iVar3 = GetUnitsAmount1(&DAT_1000a050,&DAT_1000a020);
    if (iVar3 != 0) {
      DAT_1000a040 = '\x01';
      SelectUnits(&DAT_1000a020,0);
      SelSendTo(4,&DAT_1000a030,0,0);
      ClearSelection(4);
    }
    if (DAT_1000a040 == '\0') goto LAB_10001966;
  }
  iVar3 = GetUnitsAmount1(&DAT_1000a030,&DAT_1000a020);
  if (iVar3 != 0) {
    DAT_1000a040 = '\0';
    iVar3 = GetDiff(0);
    AddResource(3,1,(iVar3 + 5) * 1000);
    SelectUnits(&DAT_1000a020,0);
    SelSendTo(4,&DAT_1000a050,0,0);
    ClearSelection(4);
  }
LAB_10001966:
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (iVar3 = GetUnitsByNation(&DAT_1000a058,4), pcVar5 = (void*)&ShowPage, iVar3 == 0))
     && (iVar3 = GetUnitsByNation(&DAT_1000a220,4), pcVar5 = (void*)&ShowPage, iVar3 == 0)) {
    SetTrigg(3,0);
    ShowPage("#PAGE1702");
    SetResource(4,5,0);
    SetResource(4,4,0);
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_1000a028), iVar3 == 0)) &&
     (iVar3 = GetUnitsAmount0(&DAT_1000a1f0,0), iVar3 != 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE1703");
    SelectUnits(&DAT_1000a060,0);
    SelChangeNation(4,0);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_1000a1a8,0), iVar3 != 0)) {
    SetTrigg(5,0);
    iVar3 = GetTotalAmount0(&DAT_1000a038);
    if (iVar3 != 0) {
      ShowPage("#PAGE1704");
      SelectUnits(&DAT_1000a038,0);
      SelChangeNation(1,0);
    }
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_1000a188,0), iVar3 != 0)) {
    SetTrigg(6,0);
    iVar3 = GetTotalAmount0(&DAT_1000a210);
    if (iVar3 != 0) {
      ShowPage("#PAGE1705");
      SelectUnits(&DAT_1000a210,0);
      SelChangeNation(1,0);
    }
  }
  cVar1 = Trigg(7);
  if ((((cVar1 != '\0') && (iVar3 = GetUnitsByNation(&DAT_1000a058,4), iVar3 == 0)) &&
      (iVar3 = GetUnitsByNation(&DAT_1000a220,4), iVar3 == 0)) &&
     ((iVar3 = GetUnitsByNation(&DAT_1000a010,4), iVar3 == 0 &&
      (iVar3 = GetUnitsByNation(&DAT_1000a190,4), iVar3 == 0)))) {
    SetTrigg(7,0);
    DisableMission(0x42);
    EnableMission(0x43);
  }
  cVar1 = NationIsErased(3);
  if (cVar1 != '\0') {
    ShowPage("#PAGE1706");
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE1707");
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
