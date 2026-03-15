/* Auto-generated from Bavaria.c */
#include "game_api.h"

/* AI state variables */
long long DAT_1000f030 = 0;
long long DAT_1000f07c = 0;
long long DAT_1000f114 = 0;
long long DAT_1000f160 = 0;
long long DAT_1000f16c = 0;
long long DAT_1000f1d8 = 0;
long long DAT_1000f244 = 0;
int DAT_1000f248 = 1;
long long DAT_1000f41c = 0;
long long DAT_10010640 = 0;
long long DAT_100135e8 = 0;
int DAT_100135f0 = 0;
long long DAT_100135f8 = 0;
long long DAT_10013600 = 0;
long long DAT_10013610 = 0;
long long DAT_10013618 = 0;
long long DAT_10013620 = 0;
long long DAT_10013628 = 0;
long long DAT_10013630 = 0;
long long DAT_10013638 = 0;
long long DAT_10013640 = 0;
long long DAT_10013648 = 0;
long long DAT_10013650 = 0;
long long DAT_10013658 = 0;
long long DAT_10013660 = 0;
long long DAT_10013670 = 0;
long long DAT_10013678 = 0;
long long DAT_10013680 = 0;
long long DAT_10013688 = 0;
long long DAT_10013690 = 0;
long long DAT_10013698 = 0;
long long DAT_100136a0 = 0;
long long DAT_100136a8 = 0;
long long DAT_100136b0 = 0;
long long DAT_100136b8 = 0;
long long DAT_100136c0 = 0;
long long DAT_100136c8 = 0;
long long DAT_100136d0 = 0;
long long DAT_100136d8 = 0;
long long DAT_100136e0 = 0;
long long DAT_100136e8 = 0;
long long DAT_100136f0 = 0;
int DAT_100136f8 = 0;
long long DAT_10013708 = 0;
long long DAT_10013710 = 0;
long long DAT_10013718 = 0;
long long DAT_10013738 = 0;
long long DAT_10013740 = 0;
long long DAT_10013748 = 0;
long long DAT_10013750 = 0;
long long DAT_10013758 = 0;
long long DAT_10013760 = 0;
long long DAT_10013768 = 0;
long long DAT_10013770 = 0;
long long DAT_10013778 = 0;
long long DAT_10013840 = 0;
long long DAT_10013848 = 0;
long long DAT_10013850 = 0;
long long DAT_10013858 = 0;
int DAT_10013868 = 0;
long long DAT_10013870 = 0;
long long DAT_10013878 = 0;
long long DAT_10013880 = 0;
long long DAT_10013888 = 0;
long long DAT_10013890 = 0;
long long DAT_10013898 = 0;
long long DAT_100138a8 = 0;
long long DAT_100138b0 = 0;
long long DAT_100138b8 = 0;
long long DAT_100138c0 = 0;
long long DAT_100138c8 = 0;
long long DAT_100138d0 = 0;
long long DAT_100138d8 = 0;
long long DAT_100138e0 = 0;
long long DAT_100138e8 = 0;
long long DAT_100138f0 = 0;
long long DAT_100138f8 = 0;
long long DAT_10013908 = 0;
long long DAT_10013910 = 0;
long long DAT_10013920 = 0;
long long DAT_10013928 = 0;
char DAT_10013930 = 0;
char DAT_10013ac0 = 0;
char DAT_10013ac4 = 0;
char DAT_10013c54 = 0;
char DAT_10013c58 = 0;
long long DAT_10015ef0 = 0;
int DAT_10015f28 = 0;
long long DAT_10015f38 = 0;
long long DAT_10015f40 = 0;
long long DAT_10015f48 = 0;
long long DAT_10015f50 = 0;
long long DAT_10015f58 = 0;
long long DAT_10015f60 = 0;
char DAT_10015f68 = 0;
long long DAT_10015f88 = 0;
long long DAT_10015f98 = 0;
long long DAT_10015fa0 = 0;
long long DAT_10015fa8 = 0;
long long DAT_10015fb0 = 0;
long long DAT_10015fb8 = 0;
long long DAT_10015fc0 = 0;
long long DAT_10015fc8 = 0;
long long DAT_10015fd0 = 0;
long long DAT_10015fd8 = 0;
long long DAT_10015fe0 = 0;
long long DAT_10015fe8 = 0;
long long DAT_10015ff0 = 0;
long long DAT_10015ff8 = 0;
long long DAT_10016000 = 0;
long long DAT_10016008 = 0;
long long DAT_10016010 = 0;
long long DAT_10016048 = 0;
long long DAT_10016050 = 0;
long long DAT_10016058 = 0;
long long DAT_10016060 = 0;
long long DAT_10016068 = 0;
long long DAT_10016070 = 0;
long long DAT_10016078 = 0;
long long DAT_10016080 = 0;
long long DAT_100160a0 = 0;
long long DAT_100160a8 = 0;
long long DAT_100160b0 = 0;
int DAT_100160b8 = 0;
long long DAT_100160c0 = 0;
long long DAT_100160c8 = 0;
long long DAT_100160d0 = 0;
long long DAT_100160d8 = 0;
long long DAT_100160e0 = 0;
long long DAT_100160e8 = 0;
long long DAT_100160f0 = 0;
long long DAT_100160f8 = 0;
long long DAT_10016100 = 0;
long long DAT_10016120 = 0;
long long DAT_10016128 = 0;
long long DAT_10016130 = 0;
long long DAT_10016138 = 0;
long long DAT_10016140 = 0;
long long DAT_10016148 = 0;
long long DAT_10016150 = 0;
int DAT_10016158 = 0;
int DAT_10016159 = 0;
int DAT_1001615a = 0;
int DAT_1001615b = 0;
int DAT_1001615c = 0;
int DAT_1001615d = 0;
long long DAT_10016160 = 0;
long long DAT_10016168 = 0;
long long DAT_10016170 = 0;
long long DAT_10016178 = 0;
int DAT_10016180 = 0;
long long DAT_10016188 = 0;
int DAT_10016190 = 0;
int DAT_10016194 = 0;
long long DAT_100161a0 = 0;
long long DAT_100161a8 = 0;
long long DAT_100161b8 = 0;
long long DAT_100161c0 = 0;
long long DAT_100161c8 = 0;
long long DAT_100161d0 = 0;
long long DAT_100161d8 = 0;
long long DAT_100161e0 = 0;
int DAT_1001621c = 0;
long long DAT_10016220 = 0;
long long DAT_10016228 = 0;
long long DAT_10016230 = 0;
long long DAT_10016240 = 0;
long long DAT_10016248 = 0;
long long DAT_10016250 = 0;
long long DAT_10016258 = 0;
int DAT_10016260 = 0;
long long DAT_10016268 = 0;
long long DAT_10016270 = 0;
long long DAT_10016278 = 0;
int DAT_10016284 = 0;
long long DAT_10016288 = 0;
long long DAT_10016290 = 0;
long long DAT_10016298 = 0;
long long DAT_100162a0 = 0;
long long DAT_100162a8 = 0;
long long DAT_100162b0 = 0;
long long DAT_100162b8 = 0;
long long DAT_100162d8 = 0;
long long DAT_100162e0 = 0;
long long DAT_100162e8 = 0;
int DAT_100162f0 = 0;
int DAT_100162f1 = 0;
int DAT_100162f2 = 0;
int DAT_100162f3 = 0;
int DAT_100162f4 = 0;
int DAT_100162f5 = 0;
long long DAT_100162f8 = 0;
long long DAT_10016300 = 0;
int DAT_10016308 = 0;
long long DAT_10016310 = 0;
long long DAT_10016318 = 0;
long long DAT_10016320 = 0;
long long DAT_10016328 = 0;
long long DAT_10016330 = 0;
int DAT_10016338 = 0;
long long DAT_10016340 = 0;
long long DAT_10016348 = 0;
int DAT_10016350 = 0;
long long DAT_10016358 = 0;
long long DAT_10016360 = 0;
long long DAT_10016368 = 0;
long long DAT_10016380 = 0;
long long DAT_10016390 = 0;
long long DAT_10016398 = 0;
long long DAT_100163a0 = 0;
long long DAT_100163a8 = 0;
int DAT_10016564 = 0;
long long DAT_10016568 = 0;
int DAT_100165d4 = 0;
int DAT_100165d8 = 0;
char DAT_100165dc = 0;
int DAT_1001661c = 0;

/* Forward declarations */
void ProcessLandAI(void);
void ProcessMiddleSeaAI(void);
static int * FUN_10002f10(void);
static int FUN_10002f40(int param_1,int param_2,int param_3);
static int FUN_10002f70(int param_1,int param_2,int param_3);
static void FUN_10003020(void);
static void FUN_100031a0(void);
static void FUN_10003210(void);
static void FUN_100032b0(void);
static void FUN_10003300(void);
static void FUN_10003340(void);
static void FUN_10004210(void);
static void FUN_100042f0(void);
static void FUN_10004340(void);
static void FUN_10005200(void);
static int FUN_10005250(int *param_1);
static void FUN_10005290(void);
static void FUN_10005a70(void);
static void FUN_10005bb0(void);
static void FUN_10005dd0(int param_1);
static void FUN_10005fb0(int param_1);
static void FUN_100062d0(int param_1);
static void FUN_10006610(void);
static void FUN_100066c0(void);
static void FUN_10006710(void);
static void FUN_10006800(void);
static void FUN_10006930(void);
static void FUN_10006b40(void);
static void FUN_10006bc0(void);
static void FUN_10006c20(void);
static void FUN_10006d20(void);


int * FUN_10002f10(void)

{
  sprintf(&DAT_10013778,&DAT_10010640);
  return &DAT_10013778;
}





int  FUN_10002f40(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetTorgResult(param_1,param_2,1000);
  return (param_3 * 1000) / iVar1;
}





int  FUN_10002f70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int uVar5;
  int iVar6;
  
  iVar1 = GetMoney(param_1);
  if (param_2 <= iVar1) {
    return (((int)((unsigned int)iVar1 >> 8) << 8) | 1);
  }
  iVar1 = GetMoney(param_1);
  iVar2 = FUN_10002f40(param_3,param_1,param_2 - iVar1);
  uVar3 = GetMoney(param_3);
  if ((iVar2 < (int)uVar3) && (1000 < iVar2)) {
    iVar6 = 0;
    while( true ) {
      iVar4 = 0xf;
      if (iVar2 / 15000 < 0x10) {
        iVar4 = iVar2 / 15000;
      }
      if (iVar4 <= iVar6) break;
      AI_Torg(param_1,param_3,100);
      iVar6 = iVar6 + 1;
    }
    iVar1 = FUN_10002f40(param_3,param_1,param_2 - iVar1);
    uVar5 = AI_Torg(param_3,param_1,iVar1);
    return (((int)((unsigned int)uVar5 >> 8) << 8) | 1);
  }
  return uVar3 & 0xffffff00;
}






void FUN_10003020(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_10016284 = GetAINation();
  iVar1 = GetUnits(&DAT_10016160);
  iVar2 = GetExtraction(1);
  iVar3 = GetExtraction(4);
  iVar4 = GetExtraction(5);
  DAT_10016180 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_10016284 * 0x4b8;
  DAT_100165d4 = *(int *)(&DAT_10013ac0 + iVar1);
  DAT_10016190 = &DAT_10013930 + iVar1;
  DAT_10016194 = &DAT_10013ac4 + iVar1;
  DAT_100165d8 = *(int *)(&DAT_10013c54 + iVar1);
  DAT_1001621c = &DAT_10013c58 + iVar1;
  DAT_10016260 = GetMoney(3);
  DAT_100135f0 = GetMoney(0);
  DAT_10016350 = GetMoney(2);
  DAT_100136f8 = GetMoney(4);
  DAT_100160b8 = GetMoney(5);
  DAT_10016308 = GetMoney(1);
  iVar1 = GetStartRes();
  if (iVar1 == 0) {
    DAT_1000f248 = 4;
  }
  SetMineBalanse(0x13,&DAT_1000f114);
  SetMinesUpgradeRules(&DAT_10016568);
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  DAT_10016158 = 1;
  DAT_1001615a = 1;
  DAT_1001615c = 1;
  DAT_1001615d = 1;
  DAT_100162f3 = 1;
  DAT_100162f1 = 1;
  DAT_100162f4 = 1;
  DAT_100162f5 = 1;
  DAT_1001615b = 0;
  DAT_10016159 = 0;
  DAT_100162f0 = 0;
  DAT_100162f2 = 0;
  DAT_1001661c = 0;
  return;
}





void FUN_100031a0(void)

{
  int iVar1;
  
  if (DAT_10015f28 < 2) {
    iVar1 = GetUnits(&DAT_10013658);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_100136d0,iVar1,0x32,0x32);
      TryUnit(&DAT_10013610,iVar1,0x14,0x32);
    }
  }
  return;
}





void FUN_10003210(void)

{
  TryUpgrade(&DAT_10016320,0x3c,100);
  TryUpgrade(&DAT_10016328,0x3c,100);
  TryUpgrade(&DAT_10016310,0x3c,100);
  TryUpgrade(&DAT_10016318,0x14,100);
  TryUpgrade(&DAT_10016330,10,100);
  TryUpgrade(&DAT_10016268,0x3c,100);
  TryUpgrade(&DAT_10016250,0x3c,100);
  TryUpgrade(&DAT_10016258,0x3c,100);
  TryUpgrade(&DAT_10016270,0x14,100);
  TryUpgrade(&DAT_10016278,10,100);
  return;
}





void FUN_100032b0(void)

{
  TryUpgrade(&DAT_100138e0,0x5a,100);
  TryUpgrade(&DAT_100138e8,0x5a,100);
  TryUpgrade(&DAT_100138d8,0x5a,100);
  TryUpgrade(&DAT_10015f48,0x5a,100);
  TryUpgrade(&DAT_10015f38,0x5a,100);
  return;
}





void FUN_10003300(void)

{
  TryUpgrade(&DAT_10016068,0x1e,0x32);
  TryUpgrade(&DAT_10016070,0x1e,0x32);
  TryUpgrade(&DAT_10016078,0x1e,0x32);
  TryUpgrade(&DAT_10016080,0x1e,0x32);
  return;
}





void FUN_10003340(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  BOOL bVar13;
  BOOL bVar14;
  int uVar15;
  int uVar16;
  int uVar17;
  
  SetDefSettings(300,400);
  SetDefenseState(0);
  iVar3 = GetUnitsByUsage(0,0x1b);
  iVar4 = GetUnitsByUsage(0,0x19);
  iVar5 = GetUnitsByUsage(0,0x1c);
  iVar6 = GetUnitsByUsage(0,0xe);
  cVar1 = UpgIsDone(&DAT_10015ff0);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = GetReadyUnits(&DAT_100162a8);
  iVar6 = GetUnits(&DAT_10015f88);
  iVar7 = GetReadyUnits(&DAT_10015f88);
  iVar8 = GetUnits(&DAT_10015fb8);
  iVar9 = GetReadyUnits(&DAT_10015fb8);
  iVar10 = GetUnits(&DAT_100160a8);
  iVar11 = GetReadyUnits(&DAT_100160a8);
  iVar12 = GetUnits(&DAT_100162a8);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  TryUpgrade(&DAT_10015ff0,0x5f,100);
  bVar13 = true;
  iVar5 = GetMoney(3);
  if ((((55000 < iVar5) && (iVar5 = GetMoney(1), 10000 < iVar5)) &&
      (iVar5 = GetMoney(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = GetUnits(&DAT_10016160);
  iVar7 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_10016188);
  GetUnits(&DAT_10013658);
  iVar8 = GetUnits(&DAT_100160b0);
  iVar11 = GetUnits(&DAT_10016380);
  iVar9 = GetUnits(&DAT_10016300);
  iVar10 = GetUnits(&DAT_10013658);
  iVar11 = iVar10 + iVar9 + iVar11;
  TryUpgrade(&DAT_100160e0,99,0x50);
  TryUpgrade(&DAT_10016120,0x62,0x50);
  iVar9 = GetReadyUnits(&DAT_100138a8);
  iVar10 = GetUnits(&DAT_100138a8);
  if (iVar5 != 0) {
    TryUnit(&DAT_10015fa8,1,100,100);
    iVar12 = GetUnits(&DAT_10015fa8);
    if (iVar12 == 0) {
      return;
    }
    TryUpgrade(&DAT_10016348,100,100);
    cVar2 = FieldExist();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        TryUnit(&DAT_10016160,100,100,100);
        TryUnit(&DAT_10013658,100,100,100);
      }
      SetPDistribution(0,1,1);
    }
    else {
      cVar2 = UpgIsDone(&DAT_10013770);
      if (cVar2 == '\0') {
        if (iVar7 < 0x2ee1) {
          if (iVar7 < 0x1771) {
            uVar16 = 4;
            uVar17 = 4;
            uVar15 = 10;
          }
          else {
            uVar16 = 5;
            uVar17 = 5;
            uVar15 = 9;
          }
        }
        else {
          uVar16 = 8;
          uVar17 = 8;
          uVar15 = 9;
        }
      }
      else if (iVar7 < 0x2ee1) {
        if (iVar7 < 0x1771) {
          uVar16 = 1;
          uVar17 = 4;
          uVar15 = 9;
        }
        else {
          uVar16 = 3;
          uVar17 = 5;
          uVar15 = 9;
        }
      }
      else {
        uVar16 = 6;
        uVar17 = 8;
        uVar15 = 9;
      }
      SetPDistribution(uVar15,uVar17,uVar16);
      uVar15 = 0x15e;
      if (cVar1 != '\0') {
        uVar15 = 300;
      }
      if ((iVar5 < 0x19) && (300 < iVar7)) {
        TryUnit(&DAT_10016160,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          TryUnit(&DAT_10016160,1000,0xe8,100);
        }
        if (300 < iVar7) {
          TryUnit(&DAT_10013658,uVar15,100,0x1e);
        }
      }
      cVar2 = UpgIsDone(&DAT_10016240);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = GetUnits(&DAT_100162a8), 0 < iVar7)
         ) {
        FUN_10003210();
      }
    }
    if (iVar3 < 5) {
      iVar3 = 5;
    }
    else {
      iVar3 = iVar3 + 2;
    }
    TryUnit(&DAT_10015f60,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      TryUnit(&DAT_100138b8,0xc,0x46);
    }
    else {
      TryUnit(&DAT_100138b8,iVar4 + 6,0x1e,0x32);
      TryUnit(&DAT_100138b8,iVar4 + 9,0xf,0x32);
      TryUnit(&DAT_100138b8,iVar4 + 10,10,0x32);
    }
    iVar4 = GetUnitsByUsage(0,0x1f);
    if (iVar4 != 0) {
      TryUpgrade(&DAT_100162b8,0x32,0x32);
      TryUpgrade(&DAT_100162a0,0x32,0x32);
      TryUpgrade(&DAT_100162b0,0x32,0x32);
      TryUpgrade(&DAT_10016290,0x32,0x32);
      TryUpgrade(&DAT_10016298,0x32,0x32);
      TryUpgrade(&DAT_10016288,0x32,0x32);
    }
    TryUnit(&DAT_10013870,3,0x5a,10);
    TryUnit(&DAT_10015f88,1,100,100);
    TryUnit(&DAT_10015f88,2,0x5f,5);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015f88,3,0x5f,5);
    }
    TryUnit(&DAT_100161b8,1,100,100);
    TryUnit(&DAT_10016220,1,100,100);
    TryUnit(&DAT_10015fa0,1,0x32,0x32);
    TryUnit(&DAT_100161b8,2,10,5);
    TryUnit(&DAT_100160a8,1,99,0x5a);
    TryUpgrade(&DAT_10013630,0x50,100);
    iVar4 = GetUnits(&DAT_10015ef0);
    if (0 < iVar4) {
      TryUnit(&DAT_10013848,1,0x5a,0x19);
      TryUnit(&DAT_100160c8,1,5,3);
    }
    TryUnit(&DAT_10015ef0,1,0x5a,0x5a);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015fb8,1,99,10);
    }
    TryUnit(&DAT_100135e8,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      TryUnit(&DAT_10015fa8,2,0x1e,0x1e);
    }
    TryUnit(&DAT_10016228,1,0x5a,0x14);
    TryUnit(&DAT_10016228,2,0x32,5);
    TryUpgrade(&DAT_10016048,0x5a,99);
    TryUpgrade(&DAT_10016000,0x5a,99);
    TryUpgrade(&DAT_10016008,0x5a,99);
    TryUpgrade(&DAT_10016010,0x5a,99);
    TryUpgrade(&DAT_10016240,0x5f,100);
    TryUpgrade(&DAT_10016188,99,100);
    TryUnit(&DAT_100162a8,1,0x50,0x14);
    TryUnit(&DAT_100162a8,2,0x32,5);
    TryUnit(&DAT_100162a8,3,0x1e,5);
    TryUnit(&DAT_100162a8,5,0x14,5);
    TryUpgrade(&DAT_10013928,0x5f,100);
    iVar4 = GetMaxPeasantsInMines();
    cVar2 = UpgIsRun(&DAT_10016240);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013928,0x5a,0x5a);
      TryUpgrade(&DAT_10013840,99,100);
    }
    cVar2 = UpgIsRun(&DAT_10013928);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013910,0x5a,0x5a);
      TryUpgrade(&DAT_10013850,0x46,10);
      FUN_10003300();
    }
    cVar2 = UpgIsDone(&DAT_10016080);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013638,10,10,0x5a);
      TryUnit(&DAT_10013638,0xf,3,10);
    }
    SetUpgradeLock(1,0);
    iVar7 = GetMoney(0);
    if ((((14000 < iVar7) && (cVar2 = UpgIsRun(&DAT_10013770), cVar2 != '\0')) &&
        (iVar7 = GetMoney(1), iVar7 < 0x1d4c)) &&
       (cVar2 = UpgIsRun(&DAT_10013928), cVar2 == '\0')) {
      SetUpgradeLock(1,1);
    }
    cVar2 = UpgIsRun(&DAT_10013928);
    if (((cVar2 == '\0') || (cVar2 = UpgIsRun(&DAT_100160c0), cVar2 == '\0')) ||
       (cVar2 = UpgIsDone(&DAT_10016188), cVar2 == '\0')) {
LAB_10003c7c:
      if (iVar4 == 0x5f) {
        TryUpgrade(&DAT_10013738,0x46,10);
        TryUnit(&DAT_10016368,1,0x32,0x1e);
        TryUnit(&DAT_10016368,2,0x1e,0x1e);
        TryUnit(&DAT_10016368,3,0x14,0x1e);
        TryUnit(&DAT_10016368,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = GetMoney(3), 50000 < iVar7 && (iVar7 = GetMoney(1), iVar7 < 0x2008)
          ))) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsRun(&DAT_10015ff0);
      if (((cVar2 == '\0') && (iVar7 = GetMoney(3), 60000 < iVar7)) &&
         (iVar7 = GetMoney(1), iVar7 < 11000)) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsDone(&DAT_10015ff0);
      if (cVar2 == '\0') goto LAB_10003c7c;
      if (iVar4 == 0x1c) {
        iVar4 = GetMoney(3);
        if ((50000 < iVar4) && (iVar4 = GetMoney(4), 0x1c84 < iVar4)) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -20000 < 0;
LAB_10003c6c:
          if (bVar14 != bVar13) {
            SetUpgradeLock(1,1);
          }
        }
      }
      else if (iVar4 == 0x28) {
        iVar4 = GetMoney(3);
        if ((50000 < iVar4) && (iVar4 = GetMoney(4), 0x2648 < iVar4)) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -24000 < 0;
          goto LAB_10003c6c;
        }
      }
      else {
        if (iVar4 != 0x37) goto LAB_10003c7c;
        iVar4 = GetMoney(3);
        if (80000 < iVar4) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -26000 < 0;
          goto LAB_10003c6c;
        }
      }
    }
    if (((0x50 < iVar5) && (iVar10 == iVar9)) &&
       (TryUnit(&DAT_100138a8,1,0x50,10), 0x5f < iVar5)) {
      TryUnit(&DAT_100138a8,2,0x50,10);
      TryUnit(&DAT_100138a8,3,0x32,10);
      TryUnit(&DAT_100138a8,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016240), cVar2 != '\0')) {
      TryUnit(&DAT_10016130,0x4b,1,0x1e);
      UpgIsDone(&DAT_10016168);
      UpgIsDone(&DAT_10016080);
    }
    GetUnits(&DAT_100135e8);
    TryUnit(&DAT_100161c0,3,0x5a,0x5a);
    cVar2 = UpgIsDone(&DAT_100160c0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_100161c0,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016240), cVar2 != '\0')) {
      if (iVar6 == 0) {
        TryUnit(&DAT_100160a8,2,0x5a,0x14);
        TryUnit(&DAT_100160a8,3,0x5a,0x14);
        TryUnit(&DAT_100160a8,4,0x5a,0x14);
      }
      iVar4 = GetUnits(&DAT_100160b0);
      if (0x14 < iVar4) {
        TryUpgrade(&DAT_100161d8,0x5a,100);
        TryUpgrade(&DAT_100161e0,0x50,0x46);
      }
      TryUpgrade(&DAT_100160c0,0x3c,0x5a);
      cVar2 = UpgIsRun(&DAT_100138d8);
      if (cVar2 != '\0') {
        TryUpgrade(&DAT_10016138,0x5a,0x5a);
        TryUpgrade(&DAT_10016148,0x5a,0x5a);
        TryUpgrade(&DAT_10016150,0x46,0x5a);
        TryUpgrade(&DAT_10016140,0x46,0x5a);
      }
    }
    TryUpgrade(&DAT_10013770,99,100);
    TryUpgrade(&DAT_100138b0,0x3c,0x5a);
    iVar4 = GetUnits(&DAT_10016220);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        TryUnit(&DAT_100160b0,500,10,10);
      }
      FUN_100032b0();
    }
  }
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10013600,0x5f,0x5a);
    TryUpgrade(&DAT_100136d8,0x5f,0x5a);
    TryUpgrade(&DAT_100135f8,0x5f,0x5a);
    TryUnit(&DAT_10016220,2,0x5f,0x5a);
  }
  cVar1 = UpgIsRun(&DAT_10013770);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_100161c8,0x5f,0x5a);
    TryUpgrade(&DAT_100161d0,0x5f,0x5a);
  }
  iVar4 = GetReadyUnits(&DAT_10013848);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = GetUnits(&DAT_10015ef0);
  if ((((iVar4 != 0) && (cVar1 = UpgIsRun(&DAT_10016240), cVar1 == '\0')) &&
      (iVar4 = GetMoney(1), 800 < iVar4)) &&
     ((iVar4 = GetMoney(3), iVar4 < 6000 && (iVar4 = GetMoney(4), 3000 < iVar4)))) {
    AI_Torg(4,3,3000);
  }
  iVar4 = GetMoney(3);
  if ((iVar4 < 1000) && (iVar4 = GetMoney(2), 5000 < iVar4)) {
    AI_Torg(2,3,4000);
  }
  cVar1 = UpgIsDone(&DAT_100161c8);
  if ((cVar1 == '\0') || (cVar1 = UpgIsDone(&DAT_100161d0), cVar1 == '\0')) {
    iVar4 = GetMoney(2);
    if (iVar4 < 0x1adb1) goto LAB_1000419a;
    uVar17 = 90000;
    uVar15 = 1;
  }
  else {
    iVar4 = GetMoney(2);
    if (110000 < iVar4) {
      AI_Torg(2,1,100000);
    }
    iVar4 = GetMoney(0);
    if (iVar4 == 0) goto LAB_1000419a;
    iVar4 = GetMoney(1);
    if ((iVar4 != 0) && (iVar4 = GetMoney(4), iVar4 < 5000)) {
      iVar4 = GetMoney(4);
      iVar5 = GetMoney(5);
      if (iVar5 < iVar4) {
        AI_Torg(2,5,25000);
        AI_Torg(2,4,25000);
      }
      else {
        AI_Torg(2,4,25000);
        AI_Torg(2,5,25000);
      }
      goto LAB_1000419a;
    }
    iVar4 = GetMoney(5);
    if ((iVar4 < 5000) && (iVar4 = GetMoney(0), iVar4 != 0)) {
      AI_Torg(2,5,50000);
    }
    iVar4 = GetMoney(5);
    if ((4999 < iVar4) || (iVar4 = GetMoney(0), iVar4 == 0)) goto LAB_1000419a;
    uVar17 = 50000;
    uVar15 = 5;
  }
  AI_Torg(2,uVar15,uVar17);
LAB_1000419a:
  iVar4 = GetMoney(0);
  if (150000 < iVar4) {
    AI_Torg(0,1,100000);
  }
  iVar4 = GetMoney(4);
  if (80000 < iVar4) {
    AI_Torg(4,1,40000);
  }
  iVar4 = GetMoney(5);
  if (80000 < iVar4) {
    AI_Torg(5,1,40000);
  }
  return;
}





void FUN_10004210(void)

{
  int iVar1;
  
  iVar1 = GetMoney(3);
  if (0x672 < iVar1) {
    TryUpgrade(&DAT_10016320,0x28,100);
    TryUpgrade(&DAT_10016328,0x5a,100);
    TryUpgrade(&DAT_10016310,0x5a,100);
    TryUpgrade(&DAT_10016318,0x5a,100);
    TryUpgrade(&DAT_10016330,0x5a,100);
    TryUpgrade(&DAT_10016268,0x5a,100);
    TryUpgrade(&DAT_10016250,0x5a,100);
    TryUpgrade(&DAT_10016258,0x5a,100);
    TryUpgrade(&DAT_10016270,0x5a,100);
    TryUpgrade(&DAT_10016278,0x5a,100);
    TryUpgrade(&DAT_10016230,0x32,100);
    TryUpgrade(&DAT_10015f98,0x32,100);
  }
  return;
}





void FUN_100042f0(void)

{
  TryUpgrade(&DAT_100138e0,0x5a,100);
  TryUpgrade(&DAT_100138e8,0x5a,100);
  TryUpgrade(&DAT_100138d8,0x5a,100);
  TryUpgrade(&DAT_10015f48,10,100);
  TryUpgrade(&DAT_10015f38,10,100);
  return;
}





void FUN_10004340(void)

{
  TryUpgrade(&DAT_100161a8,0x1e,0x32);
  TryUpgrade(&DAT_100161a0,0x1e,0x32);
  TryUpgrade(&DAT_10016170,0x1e,0x32);
  TryUpgrade(&DAT_10016168,0x1e,0x32);
  TryUpgrade(&DAT_10016068,0x1e,0x32);
  TryUpgrade(&DAT_10016070,0x1e,0x32);
  TryUpgrade(&DAT_10016078,0x1e,0x32);
  TryUpgrade(&DAT_10016080,0x1e,0x32);
  return;
}





void FUN_10005200(void)

{
  TryUnit(&DAT_10015fa8,1,100,100);
  TryUnit(&DAT_10015f88,1,100,100);
  TryUnit(&DAT_10015fa0,1,100,100);
  TryUnit(&DAT_10013848,1,100,100);
  return;
}





int  FUN_10005250(int *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_10013658) {
    cVar1 = UpgIsDone(&DAT_10016310);
    if (cVar1 != '\0') {
      cVar1 = UpgIsDone(&DAT_10016258);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}





void FUN_10005290(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetUnits(&DAT_10016248);
  if (iVar2 == 0) {
    iVar2 = GetUnits(&DAT_10013898);
    if (iVar2 != 0) goto LAB_100052b4;
  }
  else {
LAB_100052b4:
    TryUpgrade(&DAT_10013920,100,100);
    TryUpgrade(&DAT_100161c8,100,100);
    TryUpgrade(&DAT_100161d0,100,100);
  }
  iVar2 = GetUnits(&DAT_10016380);
  if (iVar2 < 0x15) {
    iVar2 = GetUnits(&DAT_10016300);
    if (iVar2 < 0x15) {
      iVar2 = GetUnits(&DAT_10013658);
      if (iVar2 < 0x8d) goto LAB_1000537d;
    }
  }
  TryUpgrade(&DAT_100135f8,0x5f,100);
  TryUpgrade(&DAT_10013600,0x5f,100);
  iVar2 = GetUnits(&DAT_10016380);
  if (iVar2 < 0x8d) {
    iVar2 = GetUnits(&DAT_10016300);
    if (0x3c < iVar2) goto LAB_1000536b;
    uVar3 = 0xf;
  }
  else {
LAB_1000536b:
    uVar3 = 0x5f;
  }
  TryUpgrade(&DAT_100136d8,uVar3,100);
LAB_1000537d:
  iVar2 = GetUnits(&DAT_10013658);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_10016320,0x50,100);
    TryUpgrade(&DAT_10016328,0x55,100);
    TryUpgrade(&DAT_10016310,0x5a,100);
    TryUpgrade(&DAT_10016268,0x50,100);
    TryUpgrade(&DAT_10016250,0x55,100);
    TryUpgrade(&DAT_10016258,0x5a,100);
    iVar2 = GetUnits(&DAT_10013658);
    if (0x78 < iVar2) {
      TryUpgrade(&DAT_10016318,0x5a,100);
      TryUpgrade(&DAT_10016330,0x5a,100);
      TryUpgrade(&DAT_10016270,0x5a,100);
      TryUpgrade(&DAT_10016278,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_100160b0);
  if (0x1e < iVar2) {
    TryUpgrade(&DAT_100138e0,0x5a,100);
    TryUpgrade(&DAT_100138e8,0x5a,100);
    TryUpgrade(&DAT_100138d8,0x5a,100);
    TryUpgrade(&DAT_10015f48,0x1e,100);
    TryUpgrade(&DAT_10015f38,0x1e,100);
    TryUpgrade(&DAT_10015f40,0x1e,100);
    TryUpgrade(&DAT_100161d8,0x5a,100);
    iVar2 = GetUnits(&DAT_100160b0);
    if (100 < iVar2) {
      TryUpgrade(&DAT_100161e0,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_100136d0);
  if (4 < iVar2) {
    TryUpgrade(&DAT_10016230,0x5a,100);
    TryUpgrade(&DAT_10015f98,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10016380);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10016100,0x50,100);
    TryUpgrade(&DAT_100160f8,0x55,100);
    TryUpgrade(&DAT_100160f0,0x5a,100);
    TryUpgrade(&DAT_10015fe8,0x50,100);
    TryUpgrade(&DAT_10015fe0,0x55,100);
    TryUpgrade(&DAT_10015fd8,0x5a,100);
    iVar2 = GetUnits(&DAT_10016380);
    if (0x32 < iVar2) {
      TryUpgrade(&DAT_100160e8,0x5f,100);
      TryUpgrade(&DAT_100160d8,0x5f,100);
      TryUpgrade(&DAT_10016128,0x5f,100);
      TryUpgrade(&DAT_10015fd0,0x5f,100);
      TryUpgrade(&DAT_10015fc8,0x5f,100);
      TryUpgrade(&DAT_10015fc0,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10016300);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013718,0x5a,100);
    TryUpgrade(&DAT_10013710,0x5a,100);
    TryUpgrade(&DAT_10013708,0x5a,100);
    TryUpgrade(&DAT_10013688,0x5a,100);
    TryUpgrade(&DAT_10013680,0x5a,100);
    TryUpgrade(&DAT_10013678,0x5f,100);
    TryUpgrade(&DAT_10013670,0x5f,100);
    TryUpgrade(&DAT_10013648,0x5f,100);
    TryUpgrade(&DAT_10013640,0x5f,100);
    cVar1 = UpgIsRun(&DAT_10013640);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_100136f0,0x5f,100);
      TryUpgrade(&DAT_100136e8,0x5f,100);
      TryUpgrade(&DAT_100136e0,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013660);
  if (0x14 < iVar2) {
    iVar2 = GetUnits(&DAT_10013650);
    if (iVar2 < 0x14) {
      TryUpgrade(&DAT_100138d0,0x50,100);
      TryUpgrade(&DAT_100138c8,0x55,100);
      TryUpgrade(&DAT_100138c0,0x5a,100);
      TryUpgrade(&DAT_10013888,0x5f,100);
      TryUpgrade(&DAT_10013880,0x5f,100);
      TryUpgrade(&DAT_10013878,0x5f,100);
      TryUpgrade(&DAT_100161d8,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013650);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013628,0x50,100);
    TryUpgrade(&DAT_10013620,0x55,100);
    TryUpgrade(&DAT_10013618,0x5a,100);
    TryUpgrade(&DAT_100162e8,0x5f,100);
    TryUpgrade(&DAT_100162e0,0x5f,100);
    TryUpgrade(&DAT_100162d8,0x5f,100);
    TryUpgrade(&DAT_10016360,10,100);
    TryUpgrade(&DAT_10016358,0xf,100);
    TryUpgrade(&DAT_100163a8,0x14,100);
    TryUpgrade(&DAT_100163a0,0x19,100);
    TryUpgrade(&DAT_10016398,0x19,100);
    TryUpgrade(&DAT_10016390,0x19,100);
    TryUpgrade(&DAT_100161d8,0x5a,100);
    TryUpgrade(&DAT_100161e0,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015f50);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_100136b0,0x5a,100);
    TryUpgrade(&DAT_100136b8,0x5a,100);
    TryUpgrade(&DAT_100136c0,0x5a,100);
    TryUpgrade(&DAT_100136c8,0x5a,100);
    TryUpgrade(&DAT_10013690,0x5a,100);
    TryUpgrade(&DAT_100136a0,0x5a,100);
    TryUpgrade(&DAT_10013758,0x5a,100);
    TryUpgrade(&DAT_10013760,0x5a,100);
    TryUpgrade(&DAT_10013768,0x5a,100);
    TryUpgrade(&DAT_10013740,0x5a,100);
    TryUpgrade(&DAT_10013748,0x5a,100);
    TryUpgrade(&DAT_10013750,0x5a,100);
    iVar2 = GetUnits(&DAT_10015f50);
    if (iVar2 < 0x3d) {
      TryUpgrade(&DAT_10015ff8,0xf,100);
      uVar3 = 0xf;
    }
    else {
      TryUpgrade(&DAT_10015ff8,0x5a);
      uVar3 = 0x5a;
    }
    TryUpgrade(&DAT_10016058,uVar3,100);
    cVar1 = UpgIsRun(&DAT_10015ff8);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016058);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016050,0x5a,100);
      }
    }
    TryUpgrade(&DAT_100161d8,0x5a,100);
    TryUpgrade(&DAT_100161e0,0x5a,100);
  }
  cVar1 = UpgIsDone(&DAT_100162d8);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016140,0x5a,100);
    cVar1 = UpgIsRun(&DAT_10016140);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016150,0x5a,100);
      cVar1 = UpgIsRun(&DAT_10016150);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016148,0x5a,100);
        cVar1 = UpgIsRun(&DAT_10016148);
        if (cVar1 != '\0') {
          TryUpgrade(&DAT_10016138,0x5a,100);
        }
      }
    }
  }
  return;
}





void FUN_10005a70(void)

{
  char cVar1;
  int iVar2;
  
  TryUpgrade(&DAT_10016348,0x32,100);
  iVar2 = GetUnits(&DAT_10015ef0);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10013630,100,100);
  }
  TryUpgrade(&DAT_10016048,100,100);
  iVar2 = FUN_10005250(&DAT_10013658);
  if ((iVar2 != 0) || ((DAT_10015f28 != 0 && (DAT_10015f28 != 5)))) {
    TryUpgrade(&DAT_10016240,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015fb8);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10016010,100,100);
  }
  cVar1 = UpgIsRun(&DAT_10016120);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016000,100,100);
  }
  TryUpgrade(&DAT_10016120,0x5c,100);
  TryUpgrade(&DAT_100160d0,0x62,100);
  iVar2 = GetUnits(&DAT_100160a8);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10016188,0x62,100);
  }
  TryUpgrade(&DAT_10015ff0,0x62,100);
  iVar2 = GetUnits(&DAT_10016228);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100138b0,100,100);
  }
  return;
}





void FUN_10005bb0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  TryUnit(&DAT_10016228,3,100,100);
  iVar2 = GetReadyUnits(&DAT_10015fb8);
  if (iVar2 != 0) {
    TryUnit(&DAT_10015fa8,2,100,100);
    TryUnit(&DAT_10015fa0,4,100,100);
  }
  TryUnit(&DAT_10015fa8,1,100,100);
  TryUnit(&DAT_10015f88,1,100,100);
  if (*(int *)(&DAT_10015f68 + DAT_10016284 * 4) == 0) {
    FUN_10005200();
    iVar2 = GetReadyUnits(&DAT_10013848);
    if (iVar2 == 0) {
      return;
    }
  }
  TryUnit(&DAT_100161b8,1,100,100);
  TryUnit(&DAT_10015f88,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10015f88);
  if ((iVar2 < 2) && (iVar2 = GetStartRes(), iVar2 != 0)) {
    return;
  }
  TryUnit(&DAT_10016220,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016220);
  iVar3 = GetUnits(&DAT_10016220);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    TryUnit(&DAT_10015ef0,1,100,100);
    iVar2 = GetPeaceTimeLeft();
    if (iVar2 < 3) {
      TryUnit(&DAT_10015fb8,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10015fb8);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_10005200();
    TryUnit(&DAT_10015f88,4,100,100);
    iVar2 = GetReadyUnits(&DAT_10015f88);
    if (2 < iVar2) {
      TryUnit(&DAT_100160a8,3,100,100);
      iVar2 = GetUnits(&DAT_10016228);
      if (iVar2 != 0) {
        TryUnit(&DAT_100160a8,4,100,100);
      }
      TryUnit(&DAT_100135e8,1,100,100);
      TryUnit(&DAT_100135e8,3,0x28,100);
      cVar1 = UpgIsDone(&DAT_100138b0);
      if (cVar1 != '\0') {
        TryUnit(&DAT_100160a8,5,100,100);
      }
      TryUnit(&DAT_100160c8,1,100,100);
    }
  }
  return;
}





void  FUN_10005dd0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetUnits(&DAT_10016248,param_1);
  if (iVar2 < 0x28) {
    SetAIRegister(DAT_10016284 + 8,0);
  }
  iVar2 = GetUnits(&DAT_10016248);
  if (iVar2 < 0x9d) {
    iVar2 = GetReadyUnits(&DAT_100160a8);
    if (iVar2 == 0) goto LAB_10005e32;
  }
  SetAIRegister(DAT_10016284 + 8,1);
LAB_10005e32:
  iVar2 = 2;
  do {
    TryUnit(&DAT_10016160,1000,0x14,100);
    iVar3 = GetUnits(&DAT_10013658);
    if (iVar3 < 0x8c) {
      TryUnit(&DAT_10013658,1000,0x14,100);
    }
    else {
      TryUnit(&DAT_10013658,1000,0x14,0x28);
      TryUnit(&DAT_100160b0,1000,0x14,100);
    }
    iVar3 = GetAIRegister(DAT_10016284 + 8);
    if (iVar3 == 0) {
      iVar3 = GetPeaceTimeLeft();
      if (iVar3 < 1) {
        TryUnit(&DAT_10016248,0xa0,0x14,100);
      }
    }
    if (0) {
LAB_10005f05:
      iVar3 = GetMoney(5);
      if (2000 < iVar3) {
        iVar3 = GetMoney(4);
        if (2000 < iVar3) {
          iVar3 = 0x1e;
          do {
            TryUnit(&DAT_10013858,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = GetUnitCost(DAT_10016284 & 0xff,&DAT_10013858,1);
      if (iVar3 < 0x78) goto LAB_10005f05;
    }
    cVar1 = UpgIsDone(&DAT_10015ff0);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    TryUnit(&DAT_10016380,1000,0x14,uVar4);
    TryUnit(&DAT_10013650,1000,0x14,100);
    TryUnit(&DAT_10015f50,1000,0x14,100);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}





void  FUN_10005fb0(int param_1)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetReadyUnits(&DAT_10013848,param_1);
  if (iVar2 != 0) {
    iVar2 = GetStartRes();
    if (iVar2 == 3) {
      iVar2 = GetAIRegister(DAT_10016284);
      if (iVar2 == 0) {
        AI_Torg(2,3,500000);
        AI_Torg(0,3,80000);
        SetAIRegister(DAT_10016284,1);
        return;
      }
    }
    else {
      iVar2 = GetReadyUnits(&DAT_10013848);
      if (iVar2 != 0) {
        iVar2 = GetAIRegister(DAT_10016284);
        if (iVar2 == 0) {
          AI_Torg(5,3,4000);
          iVar2 = GetStartRes();
          if (iVar2 == 2) {
            AI_Torg(4,0,1000);
            AI_Torg(4,2,1000);
          }
          iVar2 = GetStartRes();
          if (iVar2 == 1) {
            AI_Torg(4,0,600);
            AI_Torg(4,2,600);
          }
          SetAIRegister(DAT_10016284,1);
        }
        cVar1 = UpgIsRun(&DAT_10016240);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016120);
          if (cVar1 == '\0') {
            iVar2 = GetReadyUnits(&DAT_10015ef0);
            if (iVar2 != 0) {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_10016284 & 0xff,&DAT_10016120,5);
              }
              FUN_10002f70(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = UpgIsRun(&DAT_10016120);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10015ff0);
          if (cVar1 == '\0') {
            if (0) {
              iVar2 = 0;
            }
            else {
              iVar2 = GetUpgradeCost(DAT_10016284 & 0xff,&DAT_10015ff0,3);
            }
            uVar3 = FUN_10002f70(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_10016284 & 0xff,&DAT_10015ff0,1);
              }
              uVar3 = FUN_10002f70(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = GetUpgradeCost(DAT_10016284 & 0xff,&DAT_10015ff0,4);
                }
                FUN_10002f70(4,(iVar2 * 0xb) / 10,2);
              }
            }
          }
        }
        iVar2 = GetMoney(2);
        if (100000 < iVar2) {
          AI_Torg(0,2,5000);
          uVar3 = GetMoney(2);
          AI_Torg(2,1,uVar3);
        }
        iVar2 = GetMoney(0);
        if (100000 < iVar2) {
          AI_Torg(2,0,5000);
          uVar3 = GetMoney(0);
          AI_Torg(0,1,uVar3);
        }
      }
    }
  }
  return;
}





void  FUN_100062d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  int uVar5;
  
  SetPDistribution(0,4,4,param_1);
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    return;
  }
  SetPDistribution(9,4,4);
  iVar2 = GetStartRes();
  if (iVar2 == 3) {
    return;
  }
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    SetPDistribution(0,6,3);
    return;
  }
  SetPDistribution(9,4,4);
  cVar1 = UpgIsRun(&DAT_100160d0);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_10016284,&DAT_100160d0,3);
    }
    iVar3 = GetMoney(3);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 4;
      uVar4 = 4;
    }
    else {
      uVar5 = 6;
      uVar4 = 6;
    }
    SetPDistribution(9,uVar4,uVar5);
  }
  cVar1 = UpgIsRun(&DAT_10015ff0);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_10016284,&DAT_10015ff0,3);
    }
    iVar3 = GetMoney(3);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 9;
      uVar4 = 2;
    }
    else {
      uVar5 = 6;
      uVar4 = 6;
    }
    SetPDistribution(9,uVar4,uVar5);
  }
  cVar1 = UpgIsRun(&DAT_10016120);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_10016284,&DAT_10016120,3);
    }
    iVar3 = GetMoney(3);
    if (iVar3 < (iVar2 * 0xd) / 10) {
      uVar4 = 9;
    }
    else {
      uVar4 = 6;
    }
    SetPDistribution(uVar4,9,1);
  }
  cVar1 = UpgIsRun(&DAT_10016310);
  if (((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10016258), cVar1 == '\0')) &&
     (iVar2 = GetMoney(3), iVar2 < 9000)) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015fb8);
  if ((iVar2 == 0) && (iVar2 = GetPeaceTimeLeft(), iVar2 < 2)) {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUnitCost((char)DAT_10016284,&DAT_10015fb8,2);
    }
    iVar3 = GetMoney(2);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 3;
      uVar4 = 5;
    }
    else {
      uVar5 = 1;
      uVar4 = 7;
    }
    SetPDistribution(9,uVar4,uVar5);
  }
  cVar1 = UpgIsRun(&DAT_10016240);
  if (cVar1 == '\0') {
    SetPDistribution(9,1,1);
  }
  cVar1 = UpgIsRun(&DAT_10016048);
  if ((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10013630), cVar1 == '\0')) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015ef0);
  if (iVar2 == 0) {
    SetPDistribution(6,4,4);
  }
  cVar1 = UpgIsRun(&DAT_10016348);
  if (cVar1 != '\0') {
    return;
  }
  SetPDistribution(9,1,1);
  return;
}





void FUN_10006610(void)

{
  char cVar1;
  
  SetMinesUpgradeRules(&DAT_10016568);
  cVar1 = UpgIsRun(&DAT_10016310);
  if (cVar1 != '\0') {
    cVar1 = UpgIsRun(&DAT_10016258);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f16c);
      return;
    }
  }
  if (((DAT_10015f28 == 2) || (DAT_10015f28 == 3)) || (DAT_10015f28 == 4)) {
    SetMinesUpgradeRules(&DAT_1000f1d8);
  }
  else {
    cVar1 = UpgIsRun(&DAT_10016240);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016120);
      if (cVar1 == '\0') {
        SetMinesUpgradeRules(&DAT_10016568);
        return;
      }
    }
    cVar1 = UpgIsRun(&DAT_10016120);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f1d8);
      return;
    }
  }
  return;
}





void FUN_100066c0(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = FUN_10005250(&DAT_10013658);
  if (iVar1 != 0) {
    SetDefenseState(0);
  }
  iVar1 = GetMaxPeaceTime();
  if ((iVar1 < 1) && (iVar1 = GetReadyUnits(&DAT_100138a8), iVar1 < 1)) {
    return;
  }
  SetDefenseState(0);
  return;
}





void FUN_10006710(void)

{
  char cVar1;
  
  cVar1 = UpgIsDone(&DAT_10016168);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10016340,0x1e,0x1e,0x3c);
  }
  cVar1 = UpgIsDone(&DAT_10016080);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10013638,0x14,0x1e,0x3c);
  }
  TryUnit(&DAT_10013898,0x3c,0x50,100);
  TryUpgrade(&DAT_100161a8,0x1e,100);
  TryUpgrade(&DAT_100161a0,0x1e,100);
  TryUpgrade(&DAT_10016170,0x1e,100);
  TryUpgrade(&DAT_10016168,0x1e,100);
  TryUpgrade(&DAT_10016178,0x1e,100);
  TryUpgrade(&DAT_10016068,0x1e,100);
  TryUpgrade(&DAT_10016070,0x1e,100);
  TryUpgrade(&DAT_10016078,0x1e,100);
  TryUpgrade(&DAT_10016080,0x1e,100);
  return;
}





void FUN_10006800(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = GetReadyUnits(&DAT_100138a8);
  iVar3 = GetUnits(&DAT_10016220);
  iVar4 = GetReadyUnits(&DAT_10016220);
  iVar5 = GetUnits(&DAT_10015ef0);
  iVar6 = GetReadyUnits(&DAT_10015ef0);
  iVar7 = GetUnits(&DAT_100138a8);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_10016180)) {
    TryUnit(&DAT_100138a8,4,0x32,100);
    cVar1 = UpgIsRun(&DAT_10016188);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100138a8,6,0x32,100);
    }
    cVar1 = UpgIsRun(&DAT_10015ff0);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100138a8,8,0x32,100);
    }
  }
  TryUpgrade(&DAT_100162b8,0x32,100);
  TryUpgrade(&DAT_100162a0,0x28,100);
  TryUpgrade(&DAT_100162b0,0x1e,100);
  TryUpgrade(&DAT_10016290,0x14,100);
  TryUpgrade(&DAT_10016298,0xf,100);
  TryUpgrade(&DAT_10016288,10,100);
  return;
}





void FUN_10006930(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetReadyUnits(&DAT_10016228);
  iVar3 = GetUnits(&DAT_10016228);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10016228,5,100,100);
  }
  TryUnit(&DAT_10015f88,1,100,100);
  TryUnit(&DAT_100161b8,1,100,100);
  TryUnit(&DAT_10016220,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016220);
  iVar3 = GetUnits(&DAT_10016220);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10015ef0,1,100,100);
    iVar2 = GetReadyUnits(&DAT_10015ef0);
    if (iVar2 != 0) {
      TryUnit(&DAT_10015fa0,1,100,100);
      TryUnit(&DAT_10015fa8,1,100,100);
      TryUnit(&DAT_10013848,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10013848);
      if (iVar2 != 0) {
        TryUnit(&DAT_10015fb8,1,100,100);
        TryUnit(&DAT_100160c8,1,100,100);
        TryUnit(&DAT_100135e8,1,100,100);
        TryUnit(&DAT_100160a8,1,100,100);
        cVar1 = UpgIsRun(&DAT_10015ff0);
        if (cVar1 != '\0') {
          iVar2 = GetReadyUnits(&DAT_10015f88);
          iVar3 = GetUnits(&DAT_10015f88);
          if (iVar3 == iVar2) {
            iVar2 = GetExtraction(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            TryUnit(&DAT_10015f88,uVar4,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_100160a8);
          iVar3 = GetUnits(&DAT_100160a8);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_100160a8,7,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_100135e8);
          iVar3 = GetUnits(&DAT_100135e8);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_100135e8,3,100,100);
          }
        }
      }
    }
  }
  return;
}





void FUN_10006b40(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = GetUnits(&DAT_10013858);
  if (iVar1 < 4) {
    SetAIRegister(DAT_10016284 + 8,0);
  }
  iVar1 = GetUnits(&DAT_10013858);
  if (0x5f < iVar1) {
    SetAIRegister(DAT_10016284 + 8,1);
  }
  iVar1 = GetAIRegister(DAT_10016284 + 8);
  SetDefenseState((((int)((unsigned int)iVar1 >> 8) << 8) | iVar1 == 0));
  SetDefenseState(0);
  return;
}





void FUN_10006bc0(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int uVar2;
  
  uVar2 = 0;
  if (*(int *)(&DAT_10015f68 + DAT_10016284 * 4) != 0) {
    FUN_100066c0();
    uVar2 = extraout_ECX;
  }
  FUN_10005dd0(uVar2);
  FUN_10006710();
  iVar1 = GetPeaceTimeLeft();
  if (iVar1 < 5) {
    FUN_10006800();
  }
  FUN_10005bb0();
  FUN_10005a70();
  iVar1 = GetPeaceTimeLeft();
  uVar2 = extraout_ECX_00;
  if (iVar1 < 3) {
    FUN_10005290();
    uVar2 = extraout_ECX_01;
  }
  FUN_10005fb0(uVar2);
  FUN_100062d0(extraout_ECX_02);
  FUN_10006610();
  return;
}





void FUN_10006c20(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  
  FUN_10006b40();
  FUN_10006930();
  iVar3 = 2;
  do {
    TryUnit(&DAT_10016160,1000,0x14,100);
    TryUnit(&DAT_10013658,1000,0x14,100);
    iVar2 = GetAIRegister(DAT_10016284 + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        TryUnit(&DAT_10013858,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      TryUnit(&DAT_10016130,0x3c,10,100);
    }
    cVar1 = UpgIsDone(&DAT_10015ff0);
    if (cVar1 == '\0') {
      TryUnit(&DAT_10013660,1000,0x14,100);
    }
    TryUnit(&DAT_10013650,1000,0x14,100);
    TryUnit(&DAT_10015f50,1000,0x14,100);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10006710();
  FUN_10005fb0(extraout_ECX);
  FUN_100062d0(extraout_ECX_00);
  FUN_10005290();
  FUN_10005a70();
  return;
}






void FUN_10006d20(void)

{
  DAT_10015f28 = GetLandType();
  DAT_10016338 = GetDifficulty();
  DAT_10013868 = GetStartRes();
  FUN_10003020();
  SetMineBalanse(0x13,&DAT_1000f114);
  FUN_10006610();
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  switch(DAT_10015f28) {
  case 0:
  case 5:
    if (DAT_10013868 == 3) {
      SetMineBalanse(3,&DAT_1000f160);
      SetMinesUpgradeRules(&DAT_1000f16c);
      SetMinesBuildingRules(&DAT_1000f41c,5);
      FUN_10006c20();
    }
    else {
      SetMineBalanse(0x13,&DAT_1000f114);
      SetMinesUpgradeRules(&DAT_10016568);
      if (DAT_10013868 == 0) {
        DAT_1000f248 = 4;
      }
      SetMinesBuildingRules(&DAT_1000f244,0x1b);
      FUN_10006bc0();
    }
    break;
  case 1:
    ProcessMiddleSeaAI();
    break;
  case 2:
  case 3:
  case 4:
    SET_MINE_CAPTURE_RADIUS(0x122);
    SET_MINE_UPGRADE1_RADIUS(0x122);
    SET_MINE_UPGRADE2_RADIUS(0x122);
    SetMineBalanse(0x13,&DAT_1000f07c);
    FUN_10003340();
  }
  FUN_100031a0();
  return;
}





__declspec(dllexport) void ProcessLandAI(void)

{
  return;
}





__declspec(dllexport) void ProcessMiddleSeaAI(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *puVar11;
  int uVar12;
  int uVar13;
  SetDefenseState(0);
  SetMineBalanse(0x13,&DAT_1000f030);
  iVar3 = GetUnits(&DAT_10016160);
  iVar4 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_10016188);
  GetUnits(&DAT_10013658);
  UpgIsDone(&DAT_10015ff0);
  GetUnits(&DAT_100160b0);
  iVar5 = GetUnits(&DAT_10016380);
  iVar6 = GetUnits(&DAT_10016300);
  iVar7 = GetUnits(&DAT_10013658);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = GetDifficulty();
  if (0 < iVar6) {
    TryUnit(&DAT_100162f8,0xf,0x14,0x28);
  }
  iVar6 = GetReadyUnits(&DAT_100138a8);
  iVar7 = GetUnits(&DAT_100138a8);
  if (iVar3 == 0) {
    return;
  }
  TryUnit(&DAT_10015fa8,1,100,100);
  iVar8 = GetUnits(&DAT_10015fa8);
  if (iVar8 == 0) {
    return;
  }
  TryUpgrade(&DAT_10016348,100,100);
  cVar2 = FieldExist();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      TryUnit(&DAT_10016160,100,100,100);
      TryUnit(&DAT_10013658,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_10004210();
    }
    SetPDistribution(0,1,1);
  }
  else {
    if (DAT_10016564 == 0) {
      if (12000 < iVar4) {
        SetPDistribution(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_10004579:
      SetPDistribution(9,uVar12,uVar13);
    }
    else {
      if (DAT_10016564 == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_10004579;
      }
      if (DAT_10016564 == 2) {
        uVar13 = 9;
        uVar12 = 4;
        goto LAB_10004579;
      }
    }
    uVar12 = 0x1c2;
    if (cVar1 != '\0') {
      uVar12 = 0x17c;
    }
    if (iVar3 < 0x19) {
      if (300 < iVar4) {
        TryUnit(&DAT_10016160,100,100,100);
        goto LAB_100045b7;
      }
    }
    else {
LAB_100045b7:
      if ((300 < iVar4) && (TryUnit(&DAT_10016160,uVar12,0xe8,100), 400 < iVar4)) {
        TryUnit(&DAT_10013658,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_10004210();
    }
  }
  TryUnit(&DAT_10015f88,1,100,100);
  TryUnit(&DAT_10015f88,2,0x5a,5);
  TryUnit(&DAT_10015f88,3,0x5a,5);
  iVar8 = GetUnits(&DAT_10016220);
  if (1 < iVar8) {
    TryUnit(&DAT_10015f88,2,0x50,5);
    iVar8 = GetUnits(&DAT_10015f88);
    if (1 < iVar8) {
      TryUnit(&DAT_100160a8,1,99,0x5a);
    }
    iVar8 = GetReadyUnits(&DAT_10015f88);
    if (1 < iVar8) {
      TryUnit(&DAT_10013848,1,100,100);
    }
    TryUpgrade(&DAT_100160e0,99,100);
  }
  iVar8 = GetUnits(&DAT_10016160);
  if (0x23 < iVar8) {
    TryUnit(&DAT_10013848,1,100,100);
  }
  TryUnit(&DAT_100161b8,1,100,100);
  TryUnit(&DAT_10016220,1,100,100);
  TryUnit(&DAT_10016220,2,100,100);
  TryUnit(&DAT_10015fa0,1,0x32,0x32);
  TryUnit(&DAT_100161b8,2,10,5);
  TryUpgrade(&DAT_10013630,0x50,100);
  iVar8 = GetUnits(&DAT_10015ef0);
  if (0 < iVar8) {
    TryUnit(&DAT_100160c8,1,5,3);
  }
  cVar2 = FieldExist();
  if (cVar2 != '\0') {
    TryUnit(&DAT_10015ef0,1,0x5a,0x5a);
  }
  TryUnit(&DAT_10015fb8,1,99,10);
  TryUnit(&DAT_100135e8,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    TryUnit(&DAT_10015fa8,2,0x1e,0x1e);
  }
  TryUnit(&DAT_10016228,1,0x5a,0x14);
  TryUnit(&DAT_10016228,2,0x50,5);
  TryUpgrade(&DAT_10016048,0x5a,99);
  TryUpgrade(&DAT_10016240,0x5f,100);
  TryUpgrade(&DAT_10016188,100,100);
  TryUpgrade(&DAT_10016010,0x5a,0x5a);
  TryUpgrade(&DAT_10016000,0x5f,100);
  TryUpgrade(&DAT_10016008,0x5f,100);
  iVar8 = GetReadyUnits(&DAT_100160a8);
  if (((iVar8 == 0) || (cVar2 = UpgIsRun(&DAT_10016188), cVar2 != '\0')) ||
     ((iVar8 = GetMoney(1), 0xe74 < iVar8 &&
      ((iVar8 = GetMoney(4), 0x157c < iVar8 && (iVar8 = GetMoney(5), 0x20d0 < iVar8)))
      ))) {
    SetUpgradeLock(1,0);
    SetUpgradeLock(4,0);
    SetUpgradeLock(3,0);
    SetUpgradeLock(1,0);
  }
  else {
    iVar8 = GetMoney(0);
    if ((iVar8 != 0) && (iVar8 = GetMoney(5), 0x20d0 < iVar8)) {
      iVar8 = GetMoney(5);
      if (14000 < iVar8) {
        AI_Torg(5,1,5000);
      }
      iVar8 = GetMoney(4);
      if (13000 < iVar8) {
        AI_Torg(4,1,5000);
      }
    }
  }
  TryUpgrade(&DAT_10013770,100,100);
  TryUnit(&DAT_100162a8,1,0x32,0x5a);
  TryUnit(&DAT_100162a8,2,0x14,0x32);
  TryUnit(&DAT_100162a8,3,10,0x32);
  cVar2 = UpgIsDone(&DAT_10013928);
  if (cVar2 == '\0') {
    iVar9 = GetUnitsByUsage(0,0x1c);
    iVar10 = GetUnitsByUsage(0,0x1b);
    iVar8 = GetUnitsByUsage(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_10015f60;
      goto LAB_100049e3;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_10015f60;
      goto LAB_100049e3;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_100138b8;
LAB_100049e3:
    TryUnit(puVar11,iVar8,0x32,0x32);
  }
  TryUpgrade(&DAT_10013928,99,100);
  cVar2 = UpgIsRun(&DAT_10016240);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013928,0x5a,0x5a);
    TryUpgrade(&DAT_10013840,99,100);
  }
  cVar2 = UpgIsRun(&DAT_10013928);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013910,0x5a,0x5a);
    TryUpgrade(&DAT_10013850,0x46,10);
    FUN_10003300();
  }
  SetUpgradeLock(1,0);
  iVar8 = GetMoney(0);
  if ((((14000 < iVar8) && (cVar2 = UpgIsRun(&DAT_10013770), cVar2 != '\0')) &&
      (iVar8 = GetMoney(1), iVar8 < 0x1d4c)) &&
     (cVar2 = UpgIsRun(&DAT_10013928), cVar2 == '\0')) {
    SetUpgradeLock(1,1);
  }
  TryUnit(&DAT_100161c0,3,0x5a,0x5a);
  cVar2 = UpgIsDone(&DAT_100160c0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161c0,0x14,10,0x5a);
  }
  TryUpgrade(&DAT_100160c0,99,0x5a);
  TryUpgrade(&DAT_100160d0,99,100);
  TryUpgrade(&DAT_100162b8,0x32,0x32);
  TryUpgrade(&DAT_100162a0,0x32,0x32);
  TryUpgrade(&DAT_100162b0,0x32,0x32);
  TryUpgrade(&DAT_10016290,0x32,0x32);
  TryUpgrade(&DAT_10016298,0x32,0x32);
  TryUpgrade(&DAT_10016288,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     (TryUnit(&DAT_100138a8,1,0x50,10), 0x3c < iVar3)) {
    TryUnit(&DAT_100138a8,2,0x50,10);
    TryUnit(&DAT_100138a8,3,0x32,10);
    TryUnit(&DAT_100138a8,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    TryUnit(&DAT_10016130,0x32,1,0x1e);
    TryUnit(&DAT_10016248,0x14,1,0x1e);
  }
  else {
    TryUnit(&DAT_10013898,0x32,10,100);
    TryUnit(&DAT_10016130,0x4b,1,0x1e);
    TryUnit(&DAT_10016248,0x1e,1,0x1e);
    TryUpgrade(&DAT_10013600,0x5f,0x5a);
    TryUpgrade(&DAT_100136d8,0x5f,0x5a);
    TryUpgrade(&DAT_100135f8,0x5f,0x5a);
    cVar2 = UpgIsDone(&DAT_10016168);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10016340,5,0x1e,10);
    }
    cVar2 = UpgIsDone(&DAT_10016080);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013638,10,0x1e,10);
    }
    FUN_10004340();
  }
  cVar2 = UpgIsDone(&DAT_10015ff0);
  if (cVar2 != '\0') {
    cVar2 = UpgIsDone(&DAT_100160d0);
    if (cVar2 == '\0') {
      uVar13 = 2;
      uVar12 = 2;
    }
    else {
      uVar13 = 4;
      uVar12 = 4;
    }
    SetPDistribution(8,uVar12,uVar13);
  }
  iVar3 = GetUnits(&DAT_100160a8);
  if (iVar3 != 0) {
    TryUnit(&DAT_100161c0,6,0x5a,0x5a);
  }
  cVar2 = UpgIsDone(&DAT_100160c0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161c0,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    TryUnit(&DAT_100160a8,2,0x5f,0x14);
    TryUnit(&DAT_100160a8,3,0x5f,0x14);
    TryUnit(&DAT_100160a8,4,0x5f,0x14);
    TryUnit(&DAT_100160a8,5,0x28,0x14);
    TryUnit(&DAT_100160a8,6,0x28,0x14);
    TryUpgrade(&DAT_10015ff0,99,100);
    iVar3 = GetUnits(&DAT_100160b0);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_100161d8,0x5a,100);
      TryUpgrade(&DAT_100161e0,0x50,0x46);
    }
    TryUpgrade(&DAT_100160c0,0x3c,0x5a);
    cVar1 = UpgIsRun(&DAT_100138d8);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016138,0x5a,0x5a);
      TryUpgrade(&DAT_10016148,0x5a,0x5a);
      TryUpgrade(&DAT_10016150,0x46,0x5a);
      TryUpgrade(&DAT_10016140,0x46,0x5a);
    }
  }
  TryUpgrade(&DAT_10013770,99,100);
  TryUpgrade(&DAT_100138b0,0x3c,0x5a);
  TryUpgrade(&DAT_10016120,100,100);
  if (0x15e < iVar5) {
    TryUnit(&DAT_100160b0,500,10,100);
    FUN_100042f0();
  }
  iVar3 = GetReadyUnits(&DAT_10013848);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = GetMoney(0);
  iVar6 = GetMoney(2);
  iVar7 = GetMoney(4);
  iVar5 = GetMoney(5);
  iVar8 = GetMoney(1);
  if (iVar4 < 0x96) {
    if (iVar6 < 0x1389) {
      if (iVar6 < 0x3e9) {
        if (iVar3 < 0x1389) {
          if (iVar3 < 0x3e9) {
            if (iVar5 < 0x7d1) {
              if (iVar7 < 0x7d1) {
                if (iVar8 < 0x3e9) goto LAB_10004f83;
                uVar13 = 500;
                uVar12 = 1;
              }
              else {
                uVar13 = 800;
                uVar12 = 4;
              }
            }
            else {
              uVar13 = 800;
              uVar12 = 5;
            }
          }
          else {
            uVar13 = 900;
            uVar12 = 0;
          }
        }
        else {
          uVar13 = 3000;
          uVar12 = 0;
        }
      }
      else {
        uVar13 = 900;
        uVar12 = 2;
      }
    }
    else {
      uVar13 = 3000;
      uVar12 = 2;
    }
    AI_Torg(uVar12,3,uVar13);
  }
LAB_10004f83:
  iVar3 = GetReadyUnits(&DAT_10015ef0);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = UpgIsRun(&DAT_10016240), cVar1 == '\0')) {
    if (3000 < iVar7) {
      AI_Torg(4,3,2000);
    }
    if (4000 < iVar5) {
      AI_Torg(5,3,3000);
    }
  }
  iVar3 = GetMoney(2);
  if (120000 < iVar3) {
    AI_Torg(2,1,100000);
  }
  iVar3 = GetMoney(0);
  if (100000 < iVar3) {
    AI_Torg(0,1,90000);
  }
  iVar3 = GetUnits(&DAT_100161b8);
  if ((iVar3 != 0) && (cVar1 = UpgIsRun(&DAT_10016188), cVar1 == '\0')) {
    iVar3 = GetMoney(5);
    if ((9000 < iVar3) &&
       ((iVar3 = GetMoney(0), iVar3 != 0 && (iVar3 = GetMoney(1), iVar3 < 4000)))) {
      iVar3 = GetMoney(5);
      if (12000 < iVar3) {
        AI_Torg(5,1,3000);
      }
      iVar3 = GetMoney(4);
      if (8000 < iVar3) {
        AI_Torg(4,1,2000);
      }
      iVar3 = GetMoney(2);
      if (20000 < iVar3) {
        AI_Torg(2,1,12000);
      }
      iVar3 = GetMoney(3);
      if (30000 < iVar3) {
        AI_Torg(3,1,15000);
      }
    }
    iVar3 = GetMoney(5);
    if (((9000 < iVar3) && (iVar3 = GetMoney(1), iVar3 != 0)) &&
       (iVar3 = GetMoney(1), 4000 < iVar3)) {
      iVar3 = GetMoney(5);
      if (12000 < iVar3) {
        AI_Torg(5,4,3000);
      }
      iVar3 = GetMoney(2);
      if (20000 < iVar3) {
        AI_Torg(2,4,12000);
      }
      iVar3 = GetMoney(3);
      if (30000 < iVar3) {
        AI_Torg(3,4,15000);
      }
    }
  }
  iVar3 = GetAINation();
  if (*(int *)(&DAT_100165dc + iVar3 * 4) == 0) {
    AI_Torg(5,3,4000);
    iVar3 = GetAINation();
    *(int *)(&DAT_100165dc + iVar3 * 4) = 1;
  }
  return;
}





__declspec(dllexport) void InitAI(void)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  int *puVar4;
  unsigned int uVar5;
  char *pcVar6;
  char *pcVar7;
  char acStack_60 [48];
  char acStack_30 [48];
  if ((((1) &&
       (RegisterUpgrade(&DAT_10016058,"KUZ04BA"), 1)) &&
      (RegisterUpgrade(&DAT_10015ff8,"AKA35BA"), 1)) &&
     (RegisterUpgrade(&DAT_10016050,"AKA36BA"), 1)) {
    RegisterUpgrade(&DAT_10016060,"AKA32BA");
  }
  if (1) {
    RegisterUnitType(&DAT_10013660,"Dragun(BA)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_100138d0,"Dragun(BA)ATTACK"), 1))
        && ((RegisterUpgrade(&DAT_100138c8,"Dragun(BA)ATTACK3"),
            1 &&
            ((RegisterUpgrade(&DAT_100138c0,"Dragun(BA)ATTACK4"),
             1 &&
             (RegisterUpgrade(&DAT_10013908,"Dragun(BA)ATTACK5"),
             1)))))) &&
       (RegisterUpgrade(&DAT_100138f8,"Dragun(BA)ATTACK6"), 1))
      && (((((RegisterUpgrade(&DAT_100138f0,"Dragun(BA)ATTACK7"),
             1 &&
             (RegisterUpgrade(&DAT_100136a8,"Dragun(BA)SHIELD"),
             1)) &&
            (RegisterUpgrade(&DAT_10013698,"Dragun(BA)SHIELD3"),
            1)) &&
           ((RegisterUpgrade(&DAT_10013890,"Dragun(BA)SHIELD4"),
            1 &&
            (RegisterUpgrade(&DAT_10013888,"Dragun(BA)SHIELD5"),
            1)))) &&
          ((RegisterUpgrade(&DAT_10013880,"Dragun(BA)SHIELD6"), 1
           && ((RegisterUpgrade(&DAT_10013878,"Dragun(BA)SHIELD7"),
               1 &&
               (RegisterUpgrade(&DAT_100138d0,"Dragun(BA)ATTACK"),
               1)))))))) &&
     (((RegisterUpgrade(&DAT_100138c8,"Dragun(BA)ATTACK3"), 1 &&
       (((RegisterUpgrade(&DAT_100138c0,"Dragun(BA)ATTACK4"), 1
         && (RegisterUpgrade(&DAT_10013908,"Dragun(BA)ATTACK5"),
            1)) &&
        (RegisterUpgrade(&DAT_100138f8,"Dragun(BA)ATTACK6"), 1)))
       ) && ((((RegisterUpgrade(&DAT_100138f0,"Dragun(BA)ATTACK7"),
               1 &&
               (RegisterUpgrade(&DAT_100136a8,"Dragun(BA)SHIELD"),
               1)) &&
              ((RegisterUpgrade(&DAT_10013698,"Dragun(BA)SHIELD3"),
               1 &&
               ((RegisterUpgrade(&DAT_10013890,"Dragun(BA)SHIELD4"),
                1 &&
                (RegisterUpgrade(&DAT_10013888,"Dragun(BA)SHIELD5"),
                1)))))) &&
             (RegisterUpgrade(&DAT_10013880,"Dragun(BA)SHIELD6"),
             1)))))) {
    RegisterUpgrade(&DAT_10013878,"Dragun(BA)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_10013650,"Dragun_18(BA)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10013628,"Dragun_18(BA)ATTACK"), 1
         )) && (RegisterUpgrade(&DAT_10013620,"Dragun_18(BA)ATTACK3"),
               1)) &&
       ((RegisterUpgrade(&DAT_10013618,"Dragun_18(BA)ATTACK4"), 1
        && (RegisterUpgrade(&DAT_100162e8,"Dragun_18(BA)ATTACK5"),
           1)))) &&
      ((RegisterUpgrade(&DAT_100162e0,"Dragun_18(BA)ATTACK6"), 1
       && ((RegisterUpgrade(&DAT_100162d8,"Dragun_18(BA)ATTACK7"),
           1 &&
           (RegisterUpgrade(&DAT_10016360,"Dragun_18(BA)SHIELD"),
           1)))))) &&
     (((RegisterUpgrade(&DAT_10016358,"Dragun_18(BA)SHIELD3"), 1
       && (((RegisterUpgrade(&DAT_100163a8,"Dragun_18(BA)SHIELD4"),
            1 &&
            (RegisterUpgrade(&DAT_100163a0,"Dragun_18(BA)SHIELD5"),
            1)) &&
           (RegisterUpgrade(&DAT_10016398,"Dragun_18(BA)SHIELD6"),
           1)))) &&
      ((((RegisterUpgrade(&DAT_10016390,"Dragun_18(BA)SHIELD7"),
         1 &&
         (RegisterUpgrade(&DAT_10013628,"Dragun_18(BA)ATTACK"), 1
         )) && (((RegisterUpgrade(&DAT_10013620,"Dragun_18(BA)ATTACK3"),
                 1 &&
                 ((RegisterUpgrade(&DAT_10013618,"Dragun_18(BA)ATTACK4"),
                  1 &&
                  (RegisterUpgrade(&DAT_100162e8,"Dragun_18(BA)ATTACK5"),
                  1)))) &&
                (RegisterUpgrade(&DAT_100162e0,"Dragun_18(BA)ATTACK6"),
                1)))) &&
       ((((RegisterUpgrade(&DAT_100162d8,"Dragun_18(BA)ATTACK7"),
          1 &&
          (RegisterUpgrade(&DAT_10016360,"Dragun_18(BA)SHIELD"),
          1)) &&
         (RegisterUpgrade(&DAT_10016358,"Dragun_18(BA)SHIELD3"),
         1)) &&
        (((RegisterUpgrade(&DAT_100163a8,"Dragun_18(BA)SHIELD4"),
          1 &&
          (RegisterUpgrade(&DAT_100163a0,"Dragun_18(BA)SHIELD5"),
          1)) &&
         (RegisterUpgrade(&DAT_10016398,"Dragun_18(BA)SHIELD6"),
         1)))))))))) {
    RegisterUpgrade(&DAT_10016390,"Dragun_18(BA)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_10015fb0,"Sveshenik_evro(BA)");
  }
  DAT_10016284 = GetAINation();
  uVar3 = GetRandomIndex();
  iVar2 = DAT_10016284;
  *(unsigned int *)(&DAT_10015f68 + DAT_10016284 * 4) = uVar3 & 0x80;
  *(int *)(&DAT_10013ac0 + iVar2 * 0x4b8) = 0;
  *(int *)(&DAT_10013c54 + iVar2 * 0x4b8) = 0;
  if (1) {
    RegisterUpgrade(&DAT_100160a0,"Barabanshik_ev1(BA)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10013858,"Dragun_18_DIP(BA)");
  }
  GetRandomIndex();
  uVar3 = 0xffffffff;
  pcVar6 = "Konni_Ricar(BA)";
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = acStack_60;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(int *)pcVar7 = *(int *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = "Mushketer_BA(BA)";
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = acStack_30;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(int *)pcVar7 = *(int *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  if (((1) &&
      (RegisterUnitType(&DAT_10016248,"Strelec_Algir_DIP(BA)"), 1)
      ) && (RegisterUnitType(&DAT_100162f8,"Kozak_loshad_DIP(BA)"),
           1)) {
    RegisterUnitType(&DAT_100136d0,"Officer_evro(BA)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_10016230,"Officer_evro(BA)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_10015f98,"Officer_evro(BA)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10013610,"Barabanshik_ev1(BA)");
  }
  AssignFormUnit("Pikiner_evro(BA)");
  if ((((1) &&
       (RegisterUnitType(&DAT_10013658,"Pikiner_evro(BA)"), 1)) &&
      (RegisterUnitType(&DAT_10016160,"Kreposnoi_pruss(BA)"), 1))
     && (RegisterUnitType(&DAT_10016130,"Grenader_DIP(BA)"), 1)) {
    RegisterUnitType(&DAT_100160b0,"Mushketer_ev(BA)");
    if (((((1) &&
          (RegisterUnitType(&DAT_10016380,acStack_60), 1)) &&
         ((RegisterUnitType(&DAT_10016300,"Kirasir(BA)"), 1 &&
          ((RegisterUnitType(&DAT_10015f50,acStack_30), 1 &&
           (RegisterUnitType(&DAT_10016340,"Pushka(BA)"), 1))))))
        && (((RegisterUnitType(&DAT_10013638,"Mortira(BA)"), 1 &&
             (((RegisterUnitType(&DAT_10013898,"Mortira_b(BA)"), 1
               && (RegisterUnitType(&DAT_100161c0,"Lodka(BA)"), 1)
               ) && (RegisterUnitType(&DAT_10015f88,"Europ(BA)"),
                    1)))) &&
            (((RegisterUnitType(&DAT_10015fa8,"Melnica(BA)"), 1 &&
              (RegisterUnitType(&DAT_10016220,"Kazarma_evro(BA)"),
              1)) &&
             ((RegisterUnitType(&DAT_10016228,"Kazarma(BA)"), 1 &&
              ((RegisterUnitType(&DAT_10015fa0,"Sclad1(BA)"), 1 &&
               (RegisterUnitType(&DAT_10015ef0,"akademia_E(BA)"),
               1)))))))))) &&
       ((RegisterUnitType(&DAT_100160a8,"Konushnia_Swesair(BA)"),
        1 &&
        (((((RegisterUnitType(&DAT_10015fb8,"Dip_korpus(BA)"), 1
            && (RegisterUnitType(&DAT_100135e8,"artileri_depo(BA)"),
               1)) &&
           (RegisterUnitType(&DAT_10013848,"Rinok(BA)"), 1)) &&
          (((RegisterUnitType(&DAT_100138a8,"Bashnia(BA)"), 1 &&
            (RegisterUnitType(&DAT_100161b8,"Kuznica(BA)"), 1)) &&
           ((RegisterUnitType(&DAT_100160c8,"Cercov_Poland(BA)"),
            1 &&
            ((RegisterUnitType(&DAT_100162a8,"PorE(BA)"), 1 &&
             (RegisterUnitType(&DAT_100138b8,"Fregat(BA)"), 1)))))
           ))) && ((RegisterUnitType(&DAT_10015f60,"GALERA(BA)"),
                   1 &&
                   ((RegisterUnitType(&DAT_10016368,"Linkor(BA)"),
                    1 &&
                    (RegisterUnitType(&DAT_10015f58,"Yahta(BA)"),
                    1)))))))))) {
      RegisterUnitType(&DAT_10013870,"PERES_KOR(BA)");
    }
  }
  if (((((((((1) &&
            (RegisterUpgrade(&DAT_10016348,"Melnica(BA)GETRES"),
            1)) &&
           (RegisterUpgrade(&DAT_100160d0,"Melnica(BA)GETRES2"),
           1)) &&
          ((RegisterUpgrade(&DAT_10013630,"KUZ01BA"), 1 &&
           (RegisterUpgrade(&DAT_10016320,"Pikiner_evro(BA)ATTACK"),
           1)))) &&
         (RegisterUpgrade(&DAT_10016328,"Pikiner_evro(BA)ATTACK3"),
         1)) &&
        ((RegisterUpgrade(&DAT_10016310,"Pikiner_evro(BA)ATTACK4"),
         1 &&
         (RegisterUpgrade(&DAT_10016318,"Pikiner_evro(BA)ATTACK5"),
         1)))) &&
       ((RegisterUpgrade(&DAT_10016330,"Pikiner_evro(BA)ATTACK6"),
        1 &&
        (((RegisterUpgrade(&DAT_10016268,"Pikiner_evro(BA)SHIELD"),
          1 &&
          (RegisterUpgrade(&DAT_10016250,"Pikiner_evro(BA)SHIELD3"),
          1)) &&
         (RegisterUpgrade(&DAT_10016258,"Pikiner_evro(BA)SHIELD4"),
         1)))))) &&
      ((((RegisterUpgrade(&DAT_10016270,"Pikiner_evro(BA)SHIELD5"),
         1 &&
         (RegisterUpgrade(&DAT_10016278,"Pikiner_evro(BA)SHIELD6"),
         1)) &&
        (RegisterUpgrade(&DAT_100138e0,"Mushketer_ev(BA)ATTACK"),
        1)) &&
       ((RegisterUpgrade(&DAT_100138e8,"Mushketer_ev(BA)ATTACK3"),
        1 &&
        (RegisterUpgrade(&DAT_100138d8,"Mushketer_ev(BA)ATTACK4"),
        1)))))) &&
     ((RegisterUpgrade(&DAT_10015f48,"Mushketer_ev(BA)SHIELD"), 1
      && (RegisterUpgrade(&DAT_10015f38,"Mushketer_ev(BA)SHIELD3"),
         1)))) {
    RegisterUpgrade(&DAT_10015f40,"Mushketer_ev(BA)SHIELD4");
  }
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10015fe8,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10015fe0,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10015fd8,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10015fd0,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10015fc8,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10015fc0,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10016100,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_100160f8,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_100160f0,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_100160e8,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_100160d8,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10016128,puVar4);
  if (((((1) &&
        (RegisterUpgrade(&DAT_10013688,"Kirasir(BA)ATTACK"), 1))
       && (RegisterUpgrade(&DAT_10013680,"Kirasir(BA)ATTACK3"), 1
          )) && ((RegisterUpgrade(&DAT_10013678,"Kirasir(BA)ATTACK4"),
                 1 &&
                 (RegisterUpgrade(&DAT_10013670,"Kirasir(BA)ATTACK5"),
                 1)))) &&
     ((((RegisterUpgrade(&DAT_10013648,"Kirasir(BA)ATTACK6"), 1
        && ((RegisterUpgrade(&DAT_10013640,"Kirasir(BA)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_10013718,"Kirasir(BA)SHIELD"),
            1)))) &&
       (RegisterUpgrade(&DAT_10013710,"Kirasir(BA)SHIELD3"), 1))
      && (((RegisterUpgrade(&DAT_10013708,"Kirasir(BA)SHIELD4"),
           1 &&
           (RegisterUpgrade(&DAT_100136f0,"Kirasir(BA)SHIELD5"),
           1)) &&
          (RegisterUpgrade(&DAT_100136e8,"Kirasir(BA)SHIELD6"), 1
          )))))) {
    RegisterUpgrade(&DAT_100136e0,"Kirasir(BA)SHIELD7");
  }
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_100136b0,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_100136b8,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_100136c0,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_100136c8,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10013690,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_100136a0,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10013758,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10013760,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10013768,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10013740,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10013748,puVar4);
  puVar4 = FUN_10002f10();
  SafeRegisterUpgrade(&DAT_10013750,puVar4);
  if (((((((1) &&
          (RegisterUpgrade(&DAT_100161a8,"Pushka(BA)BUILD"), 1))
         && ((RegisterUpgrade(&DAT_100161a0,"Pushka(BA)BUILD3"),
             1 &&
             ((RegisterUpgrade(&DAT_10016170,"Pushka(BA)BUILD4"),
              1 &&
              (RegisterUpgrade(&DAT_10016168,"Pushka(BA)BUILD5"),
              1)))))) &&
        ((RegisterUpgrade(&DAT_10016178,"Pushka(BA)BUILD6"), 1 &&
         (((((RegisterUpgrade(&DAT_10016068,"Mortira(BA)BUILD"),
             1 &&
             (RegisterUpgrade(&DAT_10016070,"Mortira(BA)BUILD3"),
             1)) &&
            (RegisterUpgrade(&DAT_10016078,"Mortira(BA)BUILD4"),
            1)) &&
           ((RegisterUpgrade(&DAT_10016080,"Mortira(BA)BUILD5"),
            1 &&
            (RegisterUpgrade(&DAT_10016188,"KUZ03BA"), 1)))) &&
          ((RegisterUpgrade(&DAT_10015ff0,"MAINBA"), 1 &&
           ((RegisterUpgrade(&DAT_10013928,"AKA06BA"), 1 &&
            (RegisterUpgrade(&DAT_10016048,"AKA01BA"), 1)))))))))
        ) && (RegisterUpgrade(&DAT_10016000,"AKA02BA"), 1)) &&
      (((((((((RegisterUpgrade(&DAT_10016008,"AKA03BA"), 1 &&
              (RegisterUpgrade(&DAT_10016010,"AKA04BA"), 1)) &&
             (RegisterUpgrade(&DAT_10016240,"AKA08BA"), 1)) &&
            ((RegisterUpgrade(&DAT_100160e0,"AKA23BA"), 1 &&
             (RegisterUpgrade(&DAT_10016120,"AKA24BA"), 1)))) &&
           ((RegisterUpgrade(&DAT_100161d8,"AKA31BA"), 1 &&
            ((RegisterUpgrade(&DAT_100161e0,"AKA33BA"), 1 &&
             (RegisterUpgrade(&DAT_10016138,"AKA12BA"), 1))))))
          && (RegisterUpgrade(&DAT_10016148,"AKA13BA"), 1)) &&
         (((RegisterUpgrade(&DAT_10016150,"AKA14BA"), 1 &&
           (RegisterUpgrade(&DAT_10016140,"AKA15BA"), 1)) &&
          (RegisterUpgrade(&DAT_10013920,"AKA11BA"), 1)))) &&
        (((RegisterUpgrade(&DAT_100138b0,"AKA10BA"), 1 &&
          (RegisterUpgrade(&DAT_10013770,"AKA30BA"), 1)) &&
         ((RegisterUpgrade(&DAT_100160c0,"AKA07BA"), 1 &&
          ((RegisterUpgrade(&DAT_10013910,"AKA20BA"), 1 &&
           (RegisterUpgrade(&DAT_100161c8,"KUZ02BA"), 1))))))))
       && ((RegisterUpgrade(&DAT_100161d0,"AKA09BA"), 1 &&
           ((((RegisterUpgrade(&DAT_10013840,"AKA05BA"), 1 &&
              (RegisterUpgrade(&DAT_10013850,"AKA28BA"), 1)) &&
             (RegisterUpgrade(&DAT_10013738,"AKA29BA"), 1)) &&
            ((RegisterUpgrade(&DAT_100135f8,"KUZ05BA"), 1 &&
             (RegisterUpgrade(&DAT_100136d8,"KUZ06BA"), 1))))))))
      )) && ((((RegisterUpgrade(&DAT_10013600,"AKA34BA"), 1 &&
               ((RegisterUpgrade(&DAT_100162b8,"Bashnia(BA)PAUSE"),
                1 &&
                (RegisterUpgrade(&DAT_100162a0,"Bashnia(BA)PAUSE3"),
                1)))) &&
              (RegisterUpgrade(&DAT_100162b0,"Bashnia(BA)PAUSE4"),
              1)) &&
             ((RegisterUpgrade(&DAT_10016290,"Bashnia(BA)PAUSE5"),
              1 &&
              (RegisterUpgrade(&DAT_10016298,"Bashnia(BA)PAUSE6"),
              1)))))) {
    RegisterUpgrade(&DAT_10016288,"Bashnia(BA)PAUSE7");
  }
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(BA)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(BA)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(BA)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(BA)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(BA)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(BA)INSIDE7",0x32);
  AssignPeasant("Kreposnoi_pruss(BA)");
  AssignMine("shahta(BA)");
  AssignHouse("Dom_Prussia(BA)");
  AssignWall("WALL_EV(BA)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x5a);
  SET_MINE_UPGRADE2_RADIUS(0x5a);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}





__declspec(dllexport) void ProcessAI(void)

{
  DAT_10016284 = GetAINation();
  FUN_10006d20();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
