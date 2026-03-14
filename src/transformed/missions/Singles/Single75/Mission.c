#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
long long DAT_1000ae88 = 0;
long long DAT_1000ae90 = 0;
long long DAT_1000ae98 = 0;
long long DAT_1000aea0 = 0;
OneUnit DAT_1000aea8 = {0};
int DAT_1000aeac = 0;
long long DAT_1000aed8 = 0;
long long DAT_1000aee0 = 0;
long long DAT_1000aee8 = 0;
long long DAT_1000aef0 = 0;
long long DAT_1000aef8 = 0;
long long DAT_1000af00 = 0;
long long DAT_1000af08 = 0;
long long DAT_1000af10 = 0;
long long DAT_1000af18 = 0;
long long DAT_1000af20 = 0;
long long DAT_1000af28 = 0;
long long DAT_1000af30 = 0;
long long DAT_1000af38 = 0;
long long DAT_1000af40 = 0;
long long DAT_1000af48 = 0;
long long DAT_1000af50 = 0;
long long DAT_1000af58 = 0;
long long DAT_1000af60 = 0;
long long DAT_1000af68 = 0;
long long DAT_1000af70 = 0;
long long DAT_1000af78 = 0;
long long DAT_1000af80 = 0;
long long DAT_1000af88 = 0;
long long DAT_1000af90 = 0;
long long DAT_1000af98 = 0;
long long DAT_1000afa0 = 0;
long long DAT_1000afa8 = 0;
long long DAT_1000afb0 = 0;
long long DAT_1000afb8 = 0;
long long DAT_1000afc0 = 0;
long long DAT_1000afc8 = 0;
long long DAT_1000afd0 = 0;
long long DAT_1000afd8 = 0;
long long DAT_1000afe0 = 0;
long long DAT_1000afe8 = 0;
long long DAT_1000aff8 = 0;
long long DAT_1000b008 = 0;
long long DAT_1000b010 = 0;
long long DAT_1000b018 = 0;
long long DAT_1000b020 = 0;
long long DAT_1000b028 = 0;
long long DAT_1000b030 = 0;
long long DAT_1000b040 = 0;
long long DAT_1000b048 = 0;
long long DAT_1000b050 = 0;
long long DAT_1000b060 = 0;
long long DAT_1000b068 = 0;
long long DAT_1000b070 = 0;
long long DAT_1000b078 = 0;
long long DAT_1000b088 = 0;
long long DAT_1000b098 = 0;
long long DAT_1000b0a0 = 0;
long long DAT_1000b0b0 = 0;
long long DAT_1000b0c0 = 0;
long long DAT_1000b0c8 = 0;
long long DAT_1000b0d0 = 0;
long long DAT_1000b0d8 = 0;
long long DAT_1000b0e0 = 0;
long long DAT_1000b0e8 = 0;
long long DAT_1000b0f0 = 0;
long long DAT_1000b0f8 = 0;
long long DAT_1000b100 = 0;
long long DAT_1000b108 = 0;
long long DAT_1000b110 = 0;
long long DAT_1000b118 = 0;
long long DAT_1000b120 = 0;
long long DAT_1000b128 = 0;
long long DAT_1000b130 = 0;
long long DAT_1000b138 = 0;
long long DAT_1000b140 = 0;
long long DAT_1000b148 = 0;
long long DAT_1000b150 = 0;
long long DAT_1000b158 = 0;
long long DAT_1000b160 = 0;
long long DAT_1000b168 = 0;
long long DAT_1000b170 = 0;
long long DAT_1000b178 = 0;
long long DAT_1000b180 = 0;
long long DAT_1000b188 = 0;
long long DAT_1000b190 = 0;
long long DAT_1000b198 = 0;
long long DAT_1000b1a0 = 0;
long long DAT_1000b1a8 = 0;
long long DAT_1000b1b0 = 0;
long long DAT_1000b1b8 = 0;
long long DAT_1000b1c0 = 0;
long long DAT_1000b1c8 = 0;
long long DAT_1000b1d0 = 0;
long long DAT_1000b1d8 = 0;
long long DAT_1000b1e0 = 0;
long long DAT_1000b1e8 = 0;
long long DAT_1000b1f0 = 0;
long long DAT_1000b1f8 = 0;
long long DAT_1000b200 = 0;
long long DAT_1000b208 = 0;
long long DAT_1000b210 = 0;
long long DAT_1000b218 = 0;
long long DAT_1000b220 = 0;

/* Forward declarations */
int * FUN_10001020(void);
int * FUN_10001070(void);
int *  FUN_100010c0(void *this_ptr,int param_1);
void  FUN_100010e0(int param_1);
void  FUN_10001100(void *this_ptr,int param_1);
void  FUN_10001140(void *this_ptr,int param_1,int param_2);
void  FUN_10001190(void *this_ptr,int param_1,int param_2);
void 
FUN_100011e0(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void FUN_10002160(int param_1,int param_2,int param_3);
void FUN_100021e0(char param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_10002240(int param_1,int param_2,int param_3,int param_4);
int FUN_10002290(int param_1,int param_2,int param_3);


int * FUN_10001020(void)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(&DAT_1000b068);
  if (iVar1 == 0) {
    return &DAT_1000b068;
  }
  iVar1 = GetTotalAmount0(&DAT_1000b158);
  if (iVar1 == 0) {
    return &DAT_1000b158;
  }
  iVar1 = GetTotalAmount0(&DAT_1000b150);
  return (int *)(~-(unsigned int)(iVar1 != 0) & 0x1000b150);
}





int * FUN_10001070(void)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(&DAT_1000b070);
  if (iVar1 == 0) {
    return &DAT_1000b070;
  }
  iVar1 = GetTotalAmount0(&DAT_1000b210);
  if (iVar1 == 0) {
    return &DAT_1000b210;
  }
  iVar1 = GetTotalAmount0(&DAT_1000b220);
  return (int *)(~-(unsigned int)(iVar1 != 0) & 0x1000b220);
}





int *  FUN_100010c0(void *this_ptr,int param_1)

{
  RegisterDynGroup((int)this_ptr + 4);
  *(int *)this_ptr = param_1;
  return this_ptr;
}





void  FUN_100010e0(int param_1)

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





void  FUN_10001100(void *this_ptr,int param_1)

{
  if (*(int *)((int)this_ptr + 0xc) == 0) {
    ProduceUnitFast(param_1,&DAT_1000b148,(int)this_ptr + 4,15000);
    *(int *)((int)this_ptr + 0xc) = 1;
  }
  return;
}





void  FUN_10001140(void *this_ptr,int param_1,int param_2)

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





void  FUN_10001190(void *this_ptr,int param_1,int param_2)

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
FUN_100011e0(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  FUN_100010e0((int)this_ptr);
  FUN_10001100(this_ptr,param_1);
  FUN_10001140(this_ptr,param_2,param_3);
  FUN_10001190(this_ptr,param_3,param_4);
  return;
}





void __cdecl FUN_10002160(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetUnitsByNation(param_1,param_2);
  if (iVar1 != 0) {
    CreateZoneNearGroup(&DAT_1000af68,&DAT_1000afa8,param_1,300);
    iVar1 = GetUnitsAmount0(&DAT_1000af68,param_2);
    if (iVar1 == 0) {
      iVar1 = GetUnitsAmount0(&DAT_1000af68,param_3);
      if (iVar1 != 0) {
        SelectUnits(param_1,0);
        SelDie(param_2);
        ClearSelection(param_2);
      }
    }
  }
  return;
}





void __cdecl
FUN_100021e0(char param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if ((param_1 != '\0') && (0 < param_2)) {
    param_1 = param_2;
    do {
      iVar1 = GetDiff(0);
      ProduceUnitFast(param_4,param_3,param_5,(5 - iVar1) * 500);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}





void __cdecl
FUN_10002240(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = GetUnitsAmount2(param_3,param_1,param_2);
  if (iVar1 != 0) {
    SelectTypeOfUnitsInZone(param_3,param_1,param_2,0);
    SelSendAndKill(param_2,param_4,0,0);
    ClearSelection(param_2);
  }
  return;
}





int __cdecl FUN_10002290(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  CreateZoneNearGroup(param_3,&DAT_1000afa8,param_2,400);
  iVar1 = GetUnitsAmount1(param_3,param_1);
  iVar2 = GetTotalAmount0(param_1);
  iVar3 = iVar2 * 0x55555556;
  if (iVar1 < iVar2 / 3) {
    SelectUnits(param_1,0);
    SelSendAndKill(2,param_3,0x80,0);
    ClearSelection(2);
  }
  return iVar3;
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_1000ae88,"GF18E");
  RegisterUnits(&DAT_1000ae90,"GF18N");
  RegisterUnits(&DAT_1000ae98,"GF18H");
  RegisterUnits(&DAT_1000afc8,"GVictory_R");
  RegisterUnits(&DAT_1000b208,"GPort_R");
  RegisterUnitType(&DAT_1000b138,"Melnica_rus(RU)");
  RegisterUnitType(&DAT_1000b008,"Russki_Center(RU)");
  RegisterUnitType(&DAT_1000b130,"shahta(RU)");
  RegisterUnitType(&DAT_1000b018,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_1000b190,"WALL_KR(RU)");
  RegisterUnits(&DAT_1000b0f0,"GGarnizon_F1");
  RegisterUnits(&DAT_1000aed8,"GWall_F");
  RegisterUnitType(&DAT_1000af38,"PorR(RU)");
  RegisterUnits(&DAT_1000b1a0,"GDom01");
  RegisterUnits(&DAT_1000aef8,"GMine01");
  RegisterUnits(&DAT_1000afe0,"GAkad");
  RegisterUnits(&DAT_1000b1b0,"GDom02");
  RegisterUnits(&DAT_1000af00,"GMine02");
  RegisterUnits(&DAT_1000b118,"GRinok");
  RegisterUnits(&DAT_1000b1a8,"GDom03");
  RegisterUnits(&DAT_1000aee8,"GMine03");
  RegisterUnits(&DAT_1000b188,"GSklad");
  RegisterUnits(&DAT_1000b1d0,"GDom04");
  RegisterUnits(&DAT_1000aef0,"GMine04");
  RegisterUnits(&DAT_1000b1c0,"GDom05");
  RegisterUnits(&DAT_1000af28,"GMine05");
  RegisterUnits(&DAT_1000b1e8,"GDom06");
  RegisterUnits(&DAT_1000af30,"GMine06");
  RegisterUnits(&DAT_1000b1d8,"GDom07");
  RegisterUnits(&DAT_1000af20,"GMine07");
  RegisterUnits(&DAT_1000b1f8,"GDom08");
  RegisterUnits(&DAT_1000b1f0,"GDom09");
  RegisterUnits(&DAT_1000b1c8,"GDom10");
  RegisterUnits(&DAT_1000b1b8,"GDom11");
  RegisterUnits(&DAT_1000b1e0,"GDom12");
  RegisterZone(&DAT_1000afa8,"ZFort_C");
  RegisterVar(&DAT_1000af68,8);
  RegisterVar(&DAT_1000af58,8);
  RegisterUnits(&DAT_1000b108,"GWorota_F2");
  RegisterUnits(&DAT_1000aee0,"GBarak_F2");
  RegisterUnits(&DAT_1000b128,"GKon_F2");
  RegisterZone(&DAT_1000b0c0,"ZBar_02");
  RegisterZone(&DAT_1000afa0,"ZSbor_Gr");
  RegisterZone(&DAT_1000b0c8,"ZKon_01_F2");
  RegisterZone(&DAT_1000b110,"ZKon_02_F2");
  RegisterZone(&DAT_1000b160,"ZPov_01_Dr");
  RegisterZone(&DAT_1000af90,"ZSbor_Dr");
  RegisterZone(&DAT_1000b180,"ZPov_01_All");
  RegisterZone(&DAT_1000b198,"ZSbor_All");
  RegisterUnitType(&DAT_1000b120,"Grenader(SV)");
  RegisterUnitType(&DAT_1000b178,"Dragun_18(SV)");
  RegisterDynGroup(&DAT_1000b218);
  RegisterDynGroup(&DAT_1000b200);
  RegisterDynGroup(&DAT_1000b070);
  RegisterDynGroup(&DAT_1000b068);
  RegisterDynGroup(&DAT_1000b210);
  RegisterDynGroup(&DAT_1000b158);
  RegisterDynGroup(&DAT_1000b220);
  RegisterDynGroup(&DAT_1000b150);
  RegisterVar(&DAT_1000b218,8);
  RegisterVar(&DAT_1000b200,8);
  RegisterVar(&DAT_1000b070,8);
  RegisterVar(&DAT_1000b068,8);
  RegisterVar(&DAT_1000b010,8);
  RegisterVar(&DAT_1000b210,8);
  RegisterVar(&DAT_1000b158,8);
  RegisterVar(&DAT_1000afd0,8);
  RegisterVar(&DAT_1000b220,8);
  RegisterVar(&DAT_1000b150,8);
  RegisterVar(&DAT_1000afd8,8);
  RegisterZone(&DAT_1000afb0,"ZAttack1");
  RegisterZone(&DAT_1000afb8,"ZAttack2");
  RegisterZone(&DAT_1000afc0,"ZAttack3");
  RegisterUnits(&DAT_1000b140,"GWoodPs01");
  RegisterUnits(&DAT_1000b0f8,"GWood_F3");
  RegisterUnits(&DAT_1000b100,"GWood_F4");
  RegisterUnits(&DAT_1000af50,"GFoodPs01");
  RegisterUnits(&DAT_1000b170,"GFood_F3");
  RegisterUnits(&DAT_1000b168,"GFood_F4");
  RegisterUnits(&DAT_1000aea0,"GStone_F3");
  RegisterUnits(&DAT_1000af60,"GPatrolRightDr");
  RegisterZone(&DAT_1000b020,"ZPatrolRightDr");
  RegisterUnits(&DAT_1000b098,"GPatrolLeftDr");
  RegisterZone(&DAT_1000af18,"ZPatrolLeftDr");
  RegisterUnits(&DAT_1000af48,"GPortLeft01");
  RegisterZone(&DAT_1000af10,"ZPortLeftCreate01");
  RegisterZone(&DAT_1000b060,"ZPatrolLeft03");
  RegisterZone(&DAT_1000b040,"ZPatrolLeft04");
  RegisterUnits(&DAT_1000af40,"GPortLeft02");
  RegisterZone(&DAT_1000af08,"ZPortLeftCreate02");
  RegisterZone(&DAT_1000b028,"ZPatrolLeft01");
  RegisterZone(&DAT_1000b048,"ZPatrolLeft02");
  RegisterUnits(&DAT_1000af80,"GPortRight01");
  RegisterZone(&DAT_1000af70,"ZPortRightCreate01");
  RegisterZone(&DAT_1000b0e8,"ZPatrolRight03");
  RegisterZone(&DAT_1000b0d8,"ZPatrolRight04");
  RegisterUnits(&DAT_1000af88,"GPortRight02");
  RegisterZone(&DAT_1000af78,"ZPortRightCreate02");
  RegisterZone(&DAT_1000b0d0,"ZPatrolRight01");
  RegisterZone(&DAT_1000b0e0,"ZPatrolRight02");
  RegisterUnitType(&DAT_1000b148,"Fregat(SV)");
  RegisterUnits(&DAT_1000af98,"GFortGarnizonGen");
  EnableMission(0x41);
  EnableMission(0x42);
  EnableMission(0x48);
  EnableMission(0x4a);
  DisableMission(0x43);
  DisableMission(0x44);
  DisableMission(0x45);
  DisableMission(0x46);
  DisableMission(0x47);
  SetPlayerName(2,"SVEDEN");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *puVar4;
  void *pcVar5;
  void *pcVar6;
  int uVar7;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    EnableUnit(0,&DAT_1000b138,0);
    EnableUnit(0,&DAT_1000b008,0);
    EnableUnit(0,&DAT_1000b130,0);
    EnableUnit(0,&DAT_1000b018,0);
    EnableUnit(0,&DAT_1000b190,0);
    ShowPage("#PAGE1601");
    GetUnitInfo(&DAT_1000afc8,0,&DAT_1000aea8);
    sVar2 = GetDiff(0);
    DAT_1000aeac = sVar2 * 0x3fac + 200;
    SetUnitInfo(&DAT_1000aea8);
    RunTimer(1,0x32);
    InitialUpgrade("GBarak_F2","MAINSV");
    SelectUnits(&DAT_1000b108,0);
    SelOpenGates(2);
    RunTimer(2,10);
    TakeFood(&DAT_1000af50);
    TakeFood(&DAT_1000b170);
    TakeFood(&DAT_1000b168);
    TakeWood(&DAT_1000b140);
    TakeWood(&DAT_1000b0f8);
    TakeWood(&DAT_1000b100);
    TakeStone(&DAT_1000aea0);
    SelectUnits(&DAT_1000af60,0);
    Patrol(2,&DAT_1000b020,0x60);
    ClearSelection(2);
    SelectUnits(&DAT_1000b098,0);
    Patrol(2,&DAT_1000af18,0x20);
    ClearSelection(2);
    InitialUpgrade("GPortLeft01","AKA06SV");
    InitialUpgrade("GPortLeft01","AKA30SV");
// FIXME(decompiler):     iVar3 = GetDiff(0,0);
    SelectUnits(&DAT_1000ae88 + iVar3 * 8);
    SelErase(2);
  }
  iVar3 = GetTotalAmount0(&DAT_1000afc8);
  if ((((iVar3 != 0) && (iVar3 = GetTotalAmount0(&DAT_1000b208), iVar3 != 0)) &&
      (cVar1 = TimerDone(1), cVar1 != '\0')) &&
     (GetUnitInfo(&DAT_1000afc8,0,&DAT_1000aea8), DAT_1000aeac < 0xffc8)) {
    DAT_1000aeac = DAT_1000aeac + 0x14;
    SetUnitInfo(&DAT_1000aea8);
    RunTimer(1,100);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') &&
     (iVar3 = GetTotalAmount0(&DAT_1000b0f0), pcVar5 = (void*)&EnableMission, iVar3 == 0)) {
    SetTrigg(2,0);
    EnableUnit(0,&DAT_1000b138,1);
    EnableUnit(0,&DAT_1000b008,1);
    EnableUnit(0,&DAT_1000b130,1);
    EnableUnit(0,&DAT_1000af38,0);
    SelectUnits(&DAT_1000aed8,0);
    SelChangeNation(2,0);
    ShowPage("#PAGE1602");
    iVar3 = GetDiff(0);
    SetResource(0,0,(8 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,3,(8 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,2,(8 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,1,(8 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,4,(8 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,5,(8 - iVar3) * 1000);
    SetTrigg(4,0);
    DisableMission(0x42);
    EnableMission(0x43);
    EnableMission(0x44);
    EnableMission(0x45);
  }
  FUN_10002160(&DAT_1000b1a0,2,0);
  FUN_10002160(&DAT_1000aef8,2,0);
  FUN_10002160(&DAT_1000afe0,2,0);
  FUN_10002160(&DAT_1000b1b0,2,0);
  FUN_10002160(&DAT_1000af00,2,0);
  FUN_10002160(&DAT_1000b118,2,0);
  FUN_10002160(&DAT_1000b1a8,2,0);
  FUN_10002160(&DAT_1000aee8,2,0);
  FUN_10002160(&DAT_1000b188,2,0);
  FUN_10002160(&DAT_1000b1d0,2,0);
  FUN_10002160(&DAT_1000aef0,2,0);
  FUN_10002160(&DAT_1000b1c0,2,0);
  FUN_10002160(&DAT_1000af28,2,0);
  FUN_10002160(&DAT_1000b1e8,2,0);
  FUN_10002160(&DAT_1000af30,2,0);
  FUN_10002160(&DAT_1000b1d8,2,0);
  FUN_10002160(&DAT_1000af20,2,0);
  FUN_10002160(&DAT_1000b1f8,2,0);
  FUN_10002160(&DAT_1000b1f0,2,0);
  FUN_10002160(&DAT_1000b1c8,2,0);
  FUN_10002160(&DAT_1000b1b8,2,0);
  FUN_10002160(&DAT_1000b1e0,2,0);
  cVar1 = Trigg(4);
  if (cVar1 == '\0') {
    cVar1 = TimerDone(2);
    if ((cVar1 != '\0') &&
       (((iVar3 = GetTotalAmount0(&DAT_1000b068), iVar3 == 0 ||
         (iVar3 = GetTotalAmount0(&DAT_1000b158), iVar3 == 0)) ||
        (iVar3 = GetTotalAmount0(&DAT_1000b150), iVar3 == 0)))) {
      SetTrigg(3,1);
      iVar3 = GetDiff(0);
      RunTimer(2,(10 - iVar3) * 1000);
      FUN_100021e0('\x01',10,&DAT_1000b120,&DAT_1000aee0,&DAT_1000b218);
      FUN_100021e0('\x01',10,&DAT_1000b178,&DAT_1000b128,&DAT_1000b200);
    }
    FUN_10002240(&DAT_1000b120,2,&DAT_1000b0c0,&DAT_1000afa0);
    FUN_10002240(&DAT_1000b178,2,&DAT_1000b0c8,&DAT_1000af90);
    FUN_10002240(&DAT_1000b178,2,&DAT_1000b110,&DAT_1000b160);
    FUN_10002240(&DAT_1000b178,2,&DAT_1000b160,&DAT_1000af90);
    FUN_10002240(&DAT_1000b178,2,&DAT_1000af90,&DAT_1000b180);
    FUN_10002240(&DAT_1000b178,2,&DAT_1000b180,&DAT_1000b198);
    FUN_10002240(&DAT_1000b120,2,&DAT_1000afa0,&DAT_1000b180);
    FUN_10002240(&DAT_1000b120,2,&DAT_1000b180,&DAT_1000b198);
    cVar1 = Trigg(3);
    if (((cVar1 != '\0') && (iVar3 = GetUnitsAmount2(&DAT_1000b198,&DAT_1000b120,2), 9 < iVar3)) &&
       (puVar4 = FUN_10001020(), puVar4 != (int *)0x0)) {
      SetTrigg(3,0);
      SelectTypeOfUnitsInZone(&DAT_1000b198,&DAT_1000b120,2,0);
      uVar7 = 1;
      puVar4 = FUN_10001020();
      SaveSelectedUnits(2,puVar4,uVar7);
      SelSendAndKill(2,&DAT_1000afb0,0x80,0);
      SelSendAndKill(2,&DAT_1000afb8,0x80,2);
      SelSendAndKill(2,&DAT_1000afc0,0x80,2);
      SelSendAndKill(2,&DAT_1000afa8,0x80,2);
      ClearSelection(2);
      SelectTypeOfUnitsInZone(&DAT_1000b198,&DAT_1000b178,2,0);
      uVar7 = 1;
      puVar4 = FUN_10001070();
      SaveSelectedUnits(2,puVar4,uVar7);
      ClearSelection(2);
    }
    FUN_10002290(&DAT_1000b070,&DAT_1000b068,&DAT_1000b010);
    FUN_10002290(&DAT_1000b210,&DAT_1000b158,&DAT_1000afd0);
    FUN_10002290(&DAT_1000b220,&DAT_1000b150,&DAT_1000afd8);
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') &&
      (iVar3 = GetTotalAmount0(&DAT_1000aee0), pcVar6 = (void*)&ShowPage, iVar3 == 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_1000b128), pcVar6 = (void*)&ShowPage, iVar3 == 0)) {
    SetTrigg(4,1);
    SetTrigg(5,0);
    ShowPage("#PAGE1605");
    EnableUnit(0,&DAT_1000af38,1);
    DisableMission(0x45);
    EnableMission(0x46);
    EnableMission(0x47);
  }
  FUN_100011e0(&DAT_1000afe8,&DAT_1000af48,&DAT_1000af10,&DAT_1000b060,&DAT_1000b040);
  FUN_100011e0(&DAT_1000aff8,&DAT_1000af48,&DAT_1000af10,&DAT_1000b040,&DAT_1000b060);
  FUN_100011e0(&DAT_1000b078,&DAT_1000af40,&DAT_1000af08,&DAT_1000b028,&DAT_1000b048);
  FUN_100011e0(&DAT_1000b088,&DAT_1000af40,&DAT_1000af08,&DAT_1000b048,&DAT_1000b028);
  FUN_100011e0(&DAT_1000b0a0,&DAT_1000af80,&DAT_1000af70,&DAT_1000b0e8,&DAT_1000b0d8);
  FUN_100011e0(&DAT_1000b0b0,&DAT_1000af80,&DAT_1000af70,&DAT_1000b0d8,&DAT_1000b0e8);
  FUN_100011e0(&DAT_1000b030,&DAT_1000af88,&DAT_1000af78,&DAT_1000b0d0,&DAT_1000b0e0);
  FUN_100011e0(&DAT_1000b050,&DAT_1000af88,&DAT_1000af78,&DAT_1000b0e0,&DAT_1000b0d0);
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE1603");
    LooseGame();
  }
  iVar3 = GetTotalAmount0(&DAT_1000af98);
  if (iVar3 < 0xb) {
    ShowPage("#PAGE1604");
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
