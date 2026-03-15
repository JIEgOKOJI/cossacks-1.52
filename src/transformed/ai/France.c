/* Auto-generated from France.c */
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
long long DAT_1001068c = 0;
long long DAT_10013638 = 0;
int DAT_10013640 = 0;
long long DAT_10013648 = 0;
long long DAT_10013650 = 0;
long long DAT_10013660 = 0;
long long DAT_10013668 = 0;
long long DAT_10013670 = 0;
long long DAT_10013678 = 0;
long long DAT_10013680 = 0;
long long DAT_10013688 = 0;
long long DAT_10013690 = 0;
long long DAT_10013698 = 0;
long long DAT_100136a0 = 0;
long long DAT_100136a8 = 0;
long long DAT_100136b0 = 0;
long long DAT_100136c0 = 0;
long long DAT_100136c8 = 0;
long long DAT_100136d0 = 0;
long long DAT_100136d8 = 0;
long long DAT_100136e0 = 0;
long long DAT_100136e8 = 0;
long long DAT_100136f0 = 0;
long long DAT_100136f8 = 0;
long long DAT_10013700 = 0;
long long DAT_10013708 = 0;
long long DAT_10013710 = 0;
long long DAT_10013718 = 0;
long long DAT_10013720 = 0;
long long DAT_10013728 = 0;
long long DAT_10013730 = 0;
long long DAT_10013738 = 0;
long long DAT_10013740 = 0;
int DAT_10013748 = 0;
long long DAT_10013758 = 0;
long long DAT_10013760 = 0;
long long DAT_10013768 = 0;
long long DAT_10013788 = 0;
long long DAT_10013790 = 0;
long long DAT_10013798 = 0;
long long DAT_100137a0 = 0;
long long DAT_100137a8 = 0;
long long DAT_100137b0 = 0;
long long DAT_100137b8 = 0;
long long DAT_100137c0 = 0;
long long DAT_100137c8 = 0;
long long DAT_10013890 = 0;
long long DAT_10013898 = 0;
long long DAT_100138a0 = 0;
long long DAT_100138a8 = 0;
int DAT_100138b8 = 0;
long long DAT_100138c0 = 0;
long long DAT_100138c8 = 0;
long long DAT_100138d0 = 0;
long long DAT_100138d8 = 0;
long long DAT_100138e0 = 0;
long long DAT_100138e8 = 0;
long long DAT_100138f8 = 0;
long long DAT_10013900 = 0;
long long DAT_10013908 = 0;
long long DAT_10013910 = 0;
long long DAT_10013918 = 0;
long long DAT_10013920 = 0;
long long DAT_10013928 = 0;
long long DAT_10013930 = 0;
long long DAT_10013938 = 0;
long long DAT_10013940 = 0;
long long DAT_10013948 = 0;
long long DAT_10013958 = 0;
long long DAT_10013960 = 0;
long long DAT_10013970 = 0;
long long DAT_10013978 = 0;
char DAT_10013980 = 0;
char DAT_10013b10 = 0;
char DAT_10013b14 = 0;
char DAT_10013ca4 = 0;
char DAT_10013ca8 = 0;
long long DAT_10015f40 = 0;
int DAT_10015f78 = 0;
long long DAT_10015f88 = 0;
long long DAT_10015f90 = 0;
long long DAT_10015f98 = 0;
long long DAT_10015fa0 = 0;
long long DAT_10015fa8 = 0;
long long DAT_10015fb0 = 0;
char DAT_10015fb8 = 0;
long long DAT_10015fd8 = 0;
long long DAT_10015fe8 = 0;
long long DAT_10015ff0 = 0;
long long DAT_10015ff8 = 0;
long long DAT_10016000 = 0;
long long DAT_10016008 = 0;
long long DAT_10016010 = 0;
long long DAT_10016018 = 0;
long long DAT_10016020 = 0;
long long DAT_10016028 = 0;
long long DAT_10016030 = 0;
long long DAT_10016038 = 0;
long long DAT_10016040 = 0;
long long DAT_10016048 = 0;
long long DAT_10016050 = 0;
long long DAT_10016058 = 0;
long long DAT_10016060 = 0;
long long DAT_10016098 = 0;
long long DAT_100160a0 = 0;
long long DAT_100160a8 = 0;
long long DAT_100160b0 = 0;
long long DAT_100160b8 = 0;
long long DAT_100160c0 = 0;
long long DAT_100160c8 = 0;
long long DAT_100160d0 = 0;
long long DAT_100160f0 = 0;
long long DAT_100160f8 = 0;
long long DAT_10016100 = 0;
int DAT_10016108 = 0;
long long DAT_10016110 = 0;
long long DAT_10016118 = 0;
long long DAT_10016120 = 0;
long long DAT_10016128 = 0;
long long DAT_10016130 = 0;
long long DAT_10016138 = 0;
long long DAT_10016140 = 0;
long long DAT_10016148 = 0;
long long DAT_10016150 = 0;
long long DAT_10016170 = 0;
long long DAT_10016178 = 0;
long long DAT_10016180 = 0;
long long DAT_10016188 = 0;
long long DAT_10016190 = 0;
long long DAT_10016198 = 0;
long long DAT_100161a0 = 0;
int DAT_100161a8 = 0;
int DAT_100161a9 = 0;
int DAT_100161aa = 0;
int DAT_100161ab = 0;
int DAT_100161ac = 0;
int DAT_100161ad = 0;
long long DAT_100161b0 = 0;
long long DAT_100161b8 = 0;
long long DAT_100161c0 = 0;
long long DAT_100161c8 = 0;
int DAT_100161d0 = 0;
long long DAT_100161d8 = 0;
int DAT_100161e0 = 0;
int DAT_100161e4 = 0;
long long DAT_100161f0 = 0;
long long DAT_100161f8 = 0;
long long DAT_10016208 = 0;
long long DAT_10016210 = 0;
long long DAT_10016218 = 0;
long long DAT_10016220 = 0;
long long DAT_10016228 = 0;
long long DAT_10016230 = 0;
int DAT_1001626c = 0;
long long DAT_10016270 = 0;
long long DAT_10016278 = 0;
long long DAT_10016280 = 0;
long long DAT_10016290 = 0;
long long DAT_10016298 = 0;
long long DAT_100162a0 = 0;
long long DAT_100162a8 = 0;
int DAT_100162b0 = 0;
long long DAT_100162b8 = 0;
long long DAT_100162c0 = 0;
long long DAT_100162c8 = 0;
int DAT_100162d4 = 0;
long long DAT_100162d8 = 0;
long long DAT_100162e0 = 0;
long long DAT_100162e8 = 0;
long long DAT_100162f0 = 0;
long long DAT_100162f8 = 0;
long long DAT_10016300 = 0;
long long DAT_10016308 = 0;
long long DAT_10016328 = 0;
long long DAT_10016330 = 0;
long long DAT_10016338 = 0;
int DAT_10016340 = 0;
int DAT_10016341 = 0;
int DAT_10016342 = 0;
int DAT_10016343 = 0;
int DAT_10016344 = 0;
int DAT_10016345 = 0;
long long DAT_10016348 = 0;
long long DAT_10016350 = 0;
int DAT_10016358 = 0;
long long DAT_10016360 = 0;
long long DAT_10016368 = 0;
long long DAT_10016370 = 0;
long long DAT_10016378 = 0;
long long DAT_10016380 = 0;
int DAT_10016388 = 0;
long long DAT_10016390 = 0;
long long DAT_10016398 = 0;
int DAT_100163a0 = 0;
long long DAT_100163a8 = 0;
long long DAT_100163b0 = 0;
long long DAT_100163b8 = 0;
long long DAT_100163d0 = 0;
long long DAT_100163e0 = 0;
long long DAT_100163e8 = 0;
long long DAT_100163f0 = 0;
long long DAT_100163f8 = 0;
int DAT_100165b4 = 0;
long long DAT_100165b8 = 0;
int DAT_10016624 = 0;
int DAT_10016628 = 0;
char DAT_1001662c = 0;
int DAT_1001666c = 0;

/* Forward declarations */
void ProcessLandAI(void);
void ProcessMiddleSeaAI(void);
static int * FUN_10002f70(void);
static int FUN_10002fa0(int param_1,int param_2,int param_3);
static int FUN_10002fd0(int param_1,int param_2,int param_3);
static void FUN_10003080(void);
static void FUN_10003200(void);
static void FUN_10003270(void);
static void FUN_10003310(void);
static void FUN_10003360(void);
static void FUN_100033a0(void);
static void FUN_10004270(void);
static void FUN_10004350(void);
static void FUN_100043a0(void);
static void FUN_10005260(void);
static int FUN_100052b0(int *param_1);
static void FUN_100052f0(void);
static void FUN_10005ad0(void);
static void FUN_10005c10(void);
static void FUN_10005e30(int param_1);
static void FUN_10006010(int param_1);
static void FUN_10006330(int param_1);
static void FUN_10006670(void);
static void FUN_10006720(void);
static void FUN_10006770(void);
static void FUN_10006860(void);
static void FUN_10006990(void);
static void FUN_10006ba0(void);
static void FUN_10006c20(void);
static void FUN_10006c80(void);
static void FUN_10006d80(void);


int * FUN_10002f70(void)

{
  sprintf(&DAT_100137c8,&DAT_1001068c);
  return &DAT_100137c8;
}





int  FUN_10002fa0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetTorgResult(param_1,param_2,1000);
  return (param_3 * 1000) / iVar1;
}





int  FUN_10002fd0(int param_1,int param_2,int param_3)

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
  iVar2 = FUN_10002fa0(param_3,param_1,param_2 - iVar1);
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
    iVar1 = FUN_10002fa0(param_3,param_1,param_2 - iVar1);
    uVar5 = AI_Torg(param_3,param_1,iVar1);
    return (((int)((unsigned int)uVar5 >> 8) << 8) | 1);
  }
  return uVar3 & 0xffffff00;
}






void FUN_10003080(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_100162d4 = GetAINation();
  iVar1 = GetUnits(&DAT_100161b0);
  iVar2 = GetExtraction(1);
  iVar3 = GetExtraction(4);
  iVar4 = GetExtraction(5);
  DAT_100161d0 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_100162d4 * 0x4b8;
  DAT_10016624 = *(int *)(&DAT_10013b10 + iVar1);
  DAT_100161e0 = &DAT_10013980 + iVar1;
  DAT_100161e4 = &DAT_10013b14 + iVar1;
  DAT_10016628 = *(int *)(&DAT_10013ca4 + iVar1);
  DAT_1001626c = &DAT_10013ca8 + iVar1;
  DAT_100162b0 = GetMoney(3);
  DAT_10013640 = GetMoney(0);
  DAT_100163a0 = GetMoney(2);
  DAT_10013748 = GetMoney(4);
  DAT_10016108 = GetMoney(5);
  DAT_10016358 = GetMoney(1);
  iVar1 = GetStartRes();
  if (iVar1 == 0) {
    DAT_1000f248 = 4;
  }
  SetMineBalanse(0x13,&DAT_1000f114);
  SetMinesUpgradeRules(&DAT_100165b8);
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  DAT_100161a8 = 1;
  DAT_100161aa = 1;
  DAT_100161ac = 1;
  DAT_100161ad = 1;
  DAT_10016343 = 1;
  DAT_10016341 = 1;
  DAT_10016344 = 1;
  DAT_10016345 = 1;
  DAT_100161ab = 0;
  DAT_100161a9 = 0;
  DAT_10016340 = 0;
  DAT_10016342 = 0;
  DAT_1001666c = 0;
  return;
}





void FUN_10003200(void)

{
  int iVar1;
  
  if (DAT_10015f78 < 2) {
    iVar1 = GetUnits(&DAT_100136a8);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_10013720,iVar1,0x32,0x32);
      TryUnit(&DAT_10013660,iVar1,0x14,0x32);
    }
  }
  return;
}





void FUN_10003270(void)

{
  TryUpgrade(&DAT_10016370,0x3c,100);
  TryUpgrade(&DAT_10016378,0x3c,100);
  TryUpgrade(&DAT_10016360,0x3c,100);
  TryUpgrade(&DAT_10016368,0x14,100);
  TryUpgrade(&DAT_10016380,10,100);
  TryUpgrade(&DAT_100162b8,0x3c,100);
  TryUpgrade(&DAT_100162a0,0x3c,100);
  TryUpgrade(&DAT_100162a8,0x3c,100);
  TryUpgrade(&DAT_100162c0,0x14,100);
  TryUpgrade(&DAT_100162c8,10,100);
  return;
}





void FUN_10003310(void)

{
  TryUpgrade(&DAT_10013930,0x5a,100);
  TryUpgrade(&DAT_10013938,0x5a,100);
  TryUpgrade(&DAT_10013928,0x5a,100);
  TryUpgrade(&DAT_10015f98,0x5a,100);
  TryUpgrade(&DAT_10015f88,0x5a,100);
  return;
}





void FUN_10003360(void)

{
  TryUpgrade(&DAT_100160b8,0x1e,0x32);
  TryUpgrade(&DAT_100160c0,0x1e,0x32);
  TryUpgrade(&DAT_100160c8,0x1e,0x32);
  TryUpgrade(&DAT_100160d0,0x1e,0x32);
  return;
}





void FUN_100033a0(void)

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
  cVar1 = UpgIsDone(&DAT_10016040);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = GetReadyUnits(&DAT_100162f8);
  iVar6 = GetUnits(&DAT_10015fd8);
  iVar7 = GetReadyUnits(&DAT_10015fd8);
  iVar8 = GetUnits(&DAT_10016008);
  iVar9 = GetReadyUnits(&DAT_10016008);
  iVar10 = GetUnits(&DAT_100160f8);
  iVar11 = GetReadyUnits(&DAT_100160f8);
  iVar12 = GetUnits(&DAT_100162f8);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  TryUpgrade(&DAT_10016040,0x5f,100);
  bVar13 = true;
  iVar5 = GetMoney(3);
  if ((((55000 < iVar5) && (iVar5 = GetMoney(1), 10000 < iVar5)) &&
      (iVar5 = GetMoney(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = GetUnits(&DAT_100161b0);
  iVar7 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_100161d8);
  GetUnits(&DAT_100136a8);
  iVar8 = GetUnits(&DAT_10016100);
  iVar11 = GetUnits(&DAT_100163d0);
  iVar9 = GetUnits(&DAT_10016350);
  iVar10 = GetUnits(&DAT_100136a8);
  iVar11 = iVar10 + iVar9 + iVar11;
  TryUpgrade(&DAT_10016130,99,0x50);
  TryUpgrade(&DAT_10016170,0x62,0x50);
  iVar9 = GetReadyUnits(&DAT_100138f8);
  iVar10 = GetUnits(&DAT_100138f8);
  if (iVar5 != 0) {
    TryUnit(&DAT_10015ff8,1,100,100);
    iVar12 = GetUnits(&DAT_10015ff8);
    if (iVar12 == 0) {
      return;
    }
    TryUpgrade(&DAT_10016398,100,100);
    cVar2 = FieldExist();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        TryUnit(&DAT_100161b0,100,100,100);
        TryUnit(&DAT_100136a8,100,100,100);
      }
      SetPDistribution(0,1,1);
    }
    else {
      cVar2 = UpgIsDone(&DAT_100137c0);
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
        TryUnit(&DAT_100161b0,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          TryUnit(&DAT_100161b0,1000,0xe8,100);
        }
        if (300 < iVar7) {
          TryUnit(&DAT_100136a8,uVar15,100,0x1e);
        }
      }
      cVar2 = UpgIsDone(&DAT_10016290);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = GetUnits(&DAT_100162f8), 0 < iVar7)
         ) {
        FUN_10003270();
      }
    }
    if (iVar3 < 5) {
      iVar3 = 5;
    }
    else {
      iVar3 = iVar3 + 2;
    }
    TryUnit(&DAT_10015fb0,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      TryUnit(&DAT_10013908,0xc,0x46);
    }
    else {
      TryUnit(&DAT_10013908,iVar4 + 6,0x1e,0x32);
      TryUnit(&DAT_10013908,iVar4 + 9,0xf,0x32);
      TryUnit(&DAT_10013908,iVar4 + 10,10,0x32);
    }
    iVar4 = GetUnitsByUsage(0,0x1f);
    if (iVar4 != 0) {
      TryUpgrade(&DAT_10016308,0x32,0x32);
      TryUpgrade(&DAT_100162f0,0x32,0x32);
      TryUpgrade(&DAT_10016300,0x32,0x32);
      TryUpgrade(&DAT_100162e0,0x32,0x32);
      TryUpgrade(&DAT_100162e8,0x32,0x32);
      TryUpgrade(&DAT_100162d8,0x32,0x32);
    }
    TryUnit(&DAT_100138c0,3,0x5a,10);
    TryUnit(&DAT_10015fd8,1,100,100);
    TryUnit(&DAT_10015fd8,2,0x5f,5);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015fd8,3,0x5f,5);
    }
    TryUnit(&DAT_10016208,1,100,100);
    TryUnit(&DAT_10016270,1,100,100);
    TryUnit(&DAT_10015ff0,1,0x32,0x32);
    TryUnit(&DAT_10016208,2,10,5);
    TryUnit(&DAT_100160f8,1,99,0x5a);
    TryUpgrade(&DAT_10013680,0x50,100);
    iVar4 = GetUnits(&DAT_10015f40);
    if (0 < iVar4) {
      TryUnit(&DAT_10013898,1,0x5a,0x19);
      TryUnit(&DAT_10016118,1,5,3);
    }
    TryUnit(&DAT_10015f40,1,0x5a,0x5a);
    if (iVar6 == 0) {
      TryUnit(&DAT_10016008,1,99,10);
    }
    TryUnit(&DAT_10013638,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      TryUnit(&DAT_10015ff8,2,0x1e,0x1e);
    }
    TryUnit(&DAT_10016278,1,0x5a,0x14);
    TryUnit(&DAT_10016278,2,0x32,5);
    TryUpgrade(&DAT_10016098,0x5a,99);
    TryUpgrade(&DAT_10016050,0x5a,99);
    TryUpgrade(&DAT_10016058,0x5a,99);
    TryUpgrade(&DAT_10016060,0x5a,99);
    TryUpgrade(&DAT_10016290,0x5f,100);
    TryUpgrade(&DAT_100161d8,99,100);
    TryUnit(&DAT_100162f8,1,0x50,0x14);
    TryUnit(&DAT_100162f8,2,0x32,5);
    TryUnit(&DAT_100162f8,3,0x1e,5);
    TryUnit(&DAT_100162f8,5,0x14,5);
    TryUpgrade(&DAT_10013978,0x5f,100);
    iVar4 = GetMaxPeasantsInMines();
    cVar2 = UpgIsRun(&DAT_10016290);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013978,0x5a,0x5a);
      TryUpgrade(&DAT_10013890,99,100);
    }
    cVar2 = UpgIsRun(&DAT_10013978);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013960,0x5a,0x5a);
      TryUpgrade(&DAT_100138a0,0x46,10);
      FUN_10003360();
    }
    cVar2 = UpgIsDone(&DAT_100160d0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013688,10,10,0x5a);
      TryUnit(&DAT_10013688,0xf,3,10);
    }
    SetUpgradeLock(1,0);
    iVar7 = GetMoney(0);
    if ((((14000 < iVar7) && (cVar2 = UpgIsRun(&DAT_100137c0), cVar2 != '\0')) &&
        (iVar7 = GetMoney(1), iVar7 < 0x1d4c)) &&
       (cVar2 = UpgIsRun(&DAT_10013978), cVar2 == '\0')) {
      SetUpgradeLock(1,1);
    }
    cVar2 = UpgIsRun(&DAT_10013978);
    if (((cVar2 == '\0') || (cVar2 = UpgIsRun(&DAT_10016110), cVar2 == '\0')) ||
       (cVar2 = UpgIsDone(&DAT_100161d8), cVar2 == '\0')) {
LAB_10003cdc:
      if (iVar4 == 0x5f) {
        TryUpgrade(&DAT_10013788,0x46,10);
        TryUnit(&DAT_100163b8,1,0x32,0x1e);
        TryUnit(&DAT_100163b8,2,0x1e,0x1e);
        TryUnit(&DAT_100163b8,3,0x14,0x1e);
        TryUnit(&DAT_100163b8,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = GetMoney(3), 50000 < iVar7 && (iVar7 = GetMoney(1), iVar7 < 0x2008)
          ))) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsRun(&DAT_10016040);
      if (((cVar2 == '\0') && (iVar7 = GetMoney(3), 60000 < iVar7)) &&
         (iVar7 = GetMoney(1), iVar7 < 11000)) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsDone(&DAT_10016040);
      if (cVar2 == '\0') goto LAB_10003cdc;
      if (iVar4 == 0x1c) {
        iVar4 = GetMoney(3);
        if ((50000 < iVar4) && (iVar4 = GetMoney(4), 0x1c84 < iVar4)) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -20000 < 0;
LAB_10003ccc:
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
          goto LAB_10003ccc;
        }
      }
      else {
        if (iVar4 != 0x37) goto LAB_10003cdc;
        iVar4 = GetMoney(3);
        if (80000 < iVar4) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -26000 < 0;
          goto LAB_10003ccc;
        }
      }
    }
    if (((0x50 < iVar5) && (iVar10 == iVar9)) &&
       (TryUnit(&DAT_100138f8,1,0x50,10), 0x5f < iVar5)) {
      TryUnit(&DAT_100138f8,2,0x50,10);
      TryUnit(&DAT_100138f8,3,0x32,10);
      TryUnit(&DAT_100138f8,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016290), cVar2 != '\0')) {
      TryUnit(&DAT_10016180,0x4b,1,0x1e);
      UpgIsDone(&DAT_100161b8);
      UpgIsDone(&DAT_100160d0);
    }
    GetUnits(&DAT_10013638);
    TryUnit(&DAT_10016210,3,0x5a,0x5a);
    cVar2 = UpgIsDone(&DAT_10016110);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10016210,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016290), cVar2 != '\0')) {
      if (iVar6 == 0) {
        TryUnit(&DAT_100160f8,2,0x5a,0x14);
        TryUnit(&DAT_100160f8,3,0x5a,0x14);
        TryUnit(&DAT_100160f8,4,0x5a,0x14);
      }
      iVar4 = GetUnits(&DAT_10016100);
      if (0x14 < iVar4) {
        TryUpgrade(&DAT_10016228,0x5a,100);
        TryUpgrade(&DAT_10016230,0x50,0x46);
      }
      TryUpgrade(&DAT_10016110,0x3c,0x5a);
      cVar2 = UpgIsRun(&DAT_10013928);
      if (cVar2 != '\0') {
        TryUpgrade(&DAT_10016188,0x5a,0x5a);
        TryUpgrade(&DAT_10016198,0x5a,0x5a);
        TryUpgrade(&DAT_100161a0,0x46,0x5a);
        TryUpgrade(&DAT_10016190,0x46,0x5a);
      }
    }
    TryUpgrade(&DAT_100137c0,99,100);
    TryUpgrade(&DAT_10013900,0x3c,0x5a);
    iVar4 = GetUnits(&DAT_10016270);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        TryUnit(&DAT_10016100,500,10,10);
      }
      FUN_10003310();
    }
  }
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10013650,0x5f,0x5a);
    TryUpgrade(&DAT_10013728,0x5f,0x5a);
    TryUpgrade(&DAT_10013648,0x5f,0x5a);
    TryUnit(&DAT_10016270,2,0x5f,0x5a);
  }
  cVar1 = UpgIsRun(&DAT_100137c0);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016218,0x5f,0x5a);
    TryUpgrade(&DAT_10016220,0x5f,0x5a);
  }
  iVar4 = GetReadyUnits(&DAT_10013898);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = GetUnits(&DAT_10015f40);
  if ((((iVar4 != 0) && (cVar1 = UpgIsRun(&DAT_10016290), cVar1 == '\0')) &&
      (iVar4 = GetMoney(1), 800 < iVar4)) &&
     ((iVar4 = GetMoney(3), iVar4 < 6000 && (iVar4 = GetMoney(4), 3000 < iVar4)))) {
    AI_Torg(4,3,3000);
  }
  iVar4 = GetMoney(3);
  if ((iVar4 < 1000) && (iVar4 = GetMoney(2), 5000 < iVar4)) {
    AI_Torg(2,3,4000);
  }
  cVar1 = UpgIsDone(&DAT_10016218);
  if ((cVar1 == '\0') || (cVar1 = UpgIsDone(&DAT_10016220), cVar1 == '\0')) {
    iVar4 = GetMoney(2);
    if (iVar4 < 0x1adb1) goto LAB_100041fa;
    uVar17 = 90000;
    uVar15 = 1;
  }
  else {
    iVar4 = GetMoney(2);
    if (110000 < iVar4) {
      AI_Torg(2,1,100000);
    }
    iVar4 = GetMoney(0);
    if (iVar4 == 0) goto LAB_100041fa;
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
      goto LAB_100041fa;
    }
    iVar4 = GetMoney(5);
    if ((iVar4 < 5000) && (iVar4 = GetMoney(0), iVar4 != 0)) {
      AI_Torg(2,5,50000);
    }
    iVar4 = GetMoney(5);
    if ((4999 < iVar4) || (iVar4 = GetMoney(0), iVar4 == 0)) goto LAB_100041fa;
    uVar17 = 50000;
    uVar15 = 5;
  }
  AI_Torg(2,uVar15,uVar17);
LAB_100041fa:
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





void FUN_10004270(void)

{
  int iVar1;
  
  iVar1 = GetMoney(3);
  if (0x672 < iVar1) {
    TryUpgrade(&DAT_10016370,0x28,100);
    TryUpgrade(&DAT_10016378,0x5a,100);
    TryUpgrade(&DAT_10016360,0x5a,100);
    TryUpgrade(&DAT_10016368,0x5a,100);
    TryUpgrade(&DAT_10016380,0x5a,100);
    TryUpgrade(&DAT_100162b8,0x5a,100);
    TryUpgrade(&DAT_100162a0,0x5a,100);
    TryUpgrade(&DAT_100162a8,0x5a,100);
    TryUpgrade(&DAT_100162c0,0x5a,100);
    TryUpgrade(&DAT_100162c8,0x5a,100);
    TryUpgrade(&DAT_10016280,0x32,100);
    TryUpgrade(&DAT_10015fe8,0x32,100);
  }
  return;
}





void FUN_10004350(void)

{
  TryUpgrade(&DAT_10013930,0x5a,100);
  TryUpgrade(&DAT_10013938,0x5a,100);
  TryUpgrade(&DAT_10013928,0x5a,100);
  TryUpgrade(&DAT_10015f98,10,100);
  TryUpgrade(&DAT_10015f88,10,100);
  return;
}





void FUN_100043a0(void)

{
  TryUpgrade(&DAT_100161f8,0x1e,0x32);
  TryUpgrade(&DAT_100161f0,0x1e,0x32);
  TryUpgrade(&DAT_100161c0,0x1e,0x32);
  TryUpgrade(&DAT_100161b8,0x1e,0x32);
  TryUpgrade(&DAT_100160b8,0x1e,0x32);
  TryUpgrade(&DAT_100160c0,0x1e,0x32);
  TryUpgrade(&DAT_100160c8,0x1e,0x32);
  TryUpgrade(&DAT_100160d0,0x1e,0x32);
  return;
}





void FUN_10005260(void)

{
  TryUnit(&DAT_10015ff8,1,100,100);
  TryUnit(&DAT_10015fd8,1,100,100);
  TryUnit(&DAT_10015ff0,1,100,100);
  TryUnit(&DAT_10013898,1,100,100);
  return;
}





int  FUN_100052b0(int *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_100136a8) {
    cVar1 = UpgIsDone(&DAT_10016360);
    if (cVar1 != '\0') {
      cVar1 = UpgIsDone(&DAT_100162a8);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}





void FUN_100052f0(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetUnits(&DAT_10016298);
  if (iVar2 == 0) {
    iVar2 = GetUnits(&DAT_100138e8);
    if (iVar2 != 0) goto LAB_10005314;
  }
  else {
LAB_10005314:
    TryUpgrade(&DAT_10013970,100,100);
    TryUpgrade(&DAT_10016218,100,100);
    TryUpgrade(&DAT_10016220,100,100);
  }
  iVar2 = GetUnits(&DAT_100163d0);
  if (iVar2 < 0x15) {
    iVar2 = GetUnits(&DAT_10016350);
    if (iVar2 < 0x15) {
      iVar2 = GetUnits(&DAT_100136a8);
      if (iVar2 < 0x8d) goto LAB_100053dd;
    }
  }
  TryUpgrade(&DAT_10013648,0x5f,100);
  TryUpgrade(&DAT_10013650,0x5f,100);
  iVar2 = GetUnits(&DAT_100163d0);
  if (iVar2 < 0x8d) {
    iVar2 = GetUnits(&DAT_10016350);
    if (0x3c < iVar2) goto LAB_100053cb;
    uVar3 = 0xf;
  }
  else {
LAB_100053cb:
    uVar3 = 0x5f;
  }
  TryUpgrade(&DAT_10013728,uVar3,100);
LAB_100053dd:
  iVar2 = GetUnits(&DAT_100136a8);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_10016370,0x50,100);
    TryUpgrade(&DAT_10016378,0x55,100);
    TryUpgrade(&DAT_10016360,0x5a,100);
    TryUpgrade(&DAT_100162b8,0x50,100);
    TryUpgrade(&DAT_100162a0,0x55,100);
    TryUpgrade(&DAT_100162a8,0x5a,100);
    iVar2 = GetUnits(&DAT_100136a8);
    if (0x78 < iVar2) {
      TryUpgrade(&DAT_10016368,0x5a,100);
      TryUpgrade(&DAT_10016380,0x5a,100);
      TryUpgrade(&DAT_100162c0,0x5a,100);
      TryUpgrade(&DAT_100162c8,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10016100);
  if (0x1e < iVar2) {
    TryUpgrade(&DAT_10013930,0x5a,100);
    TryUpgrade(&DAT_10013938,0x5a,100);
    TryUpgrade(&DAT_10013928,0x5a,100);
    TryUpgrade(&DAT_10015f98,0x1e,100);
    TryUpgrade(&DAT_10015f88,0x1e,100);
    TryUpgrade(&DAT_10015f90,0x1e,100);
    TryUpgrade(&DAT_10016228,0x5a,100);
    iVar2 = GetUnits(&DAT_10016100);
    if (100 < iVar2) {
      TryUpgrade(&DAT_10016230,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013720);
  if (4 < iVar2) {
    TryUpgrade(&DAT_10016280,0x5a,100);
    TryUpgrade(&DAT_10015fe8,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_100163d0);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10016150,0x50,100);
    TryUpgrade(&DAT_10016148,0x55,100);
    TryUpgrade(&DAT_10016140,0x5a,100);
    TryUpgrade(&DAT_10016038,0x50,100);
    TryUpgrade(&DAT_10016030,0x55,100);
    TryUpgrade(&DAT_10016028,0x5a,100);
    iVar2 = GetUnits(&DAT_100163d0);
    if (0x32 < iVar2) {
      TryUpgrade(&DAT_10016138,0x5f,100);
      TryUpgrade(&DAT_10016128,0x5f,100);
      TryUpgrade(&DAT_10016178,0x5f,100);
      TryUpgrade(&DAT_10016020,0x5f,100);
      TryUpgrade(&DAT_10016018,0x5f,100);
      TryUpgrade(&DAT_10016010,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10016350);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013768,0x5a,100);
    TryUpgrade(&DAT_10013760,0x5a,100);
    TryUpgrade(&DAT_10013758,0x5a,100);
    TryUpgrade(&DAT_100136d8,0x5a,100);
    TryUpgrade(&DAT_100136d0,0x5a,100);
    TryUpgrade(&DAT_100136c8,0x5f,100);
    TryUpgrade(&DAT_100136c0,0x5f,100);
    TryUpgrade(&DAT_10013698,0x5f,100);
    TryUpgrade(&DAT_10013690,0x5f,100);
    cVar1 = UpgIsRun(&DAT_10013690);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10013740,0x5f,100);
      TryUpgrade(&DAT_10013738,0x5f,100);
      TryUpgrade(&DAT_10013730,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_100136b0);
  if (0x14 < iVar2) {
    iVar2 = GetUnits(&DAT_100136a0);
    if (iVar2 < 0x14) {
      TryUpgrade(&DAT_10013920,0x50,100);
      TryUpgrade(&DAT_10013918,0x55,100);
      TryUpgrade(&DAT_10013910,0x5a,100);
      TryUpgrade(&DAT_100138d8,0x5f,100);
      TryUpgrade(&DAT_100138d0,0x5f,100);
      TryUpgrade(&DAT_100138c8,0x5f,100);
      TryUpgrade(&DAT_10016228,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_100136a0);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013678,0x50,100);
    TryUpgrade(&DAT_10013670,0x55,100);
    TryUpgrade(&DAT_10013668,0x5a,100);
    TryUpgrade(&DAT_10016338,0x5f,100);
    TryUpgrade(&DAT_10016330,0x5f,100);
    TryUpgrade(&DAT_10016328,0x5f,100);
    TryUpgrade(&DAT_100163b0,10,100);
    TryUpgrade(&DAT_100163a8,0xf,100);
    TryUpgrade(&DAT_100163f8,0x14,100);
    TryUpgrade(&DAT_100163f0,0x19,100);
    TryUpgrade(&DAT_100163e8,0x19,100);
    TryUpgrade(&DAT_100163e0,0x19,100);
    TryUpgrade(&DAT_10016228,0x5a,100);
    TryUpgrade(&DAT_10016230,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015fa0);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_10013700,0x5a,100);
    TryUpgrade(&DAT_10013708,0x5a,100);
    TryUpgrade(&DAT_10013710,0x5a,100);
    TryUpgrade(&DAT_10013718,0x5a,100);
    TryUpgrade(&DAT_100136e0,0x5a,100);
    TryUpgrade(&DAT_100136f0,0x5a,100);
    TryUpgrade(&DAT_100137a8,0x5a,100);
    TryUpgrade(&DAT_100137b0,0x5a,100);
    TryUpgrade(&DAT_100137b8,0x5a,100);
    TryUpgrade(&DAT_10013790,0x5a,100);
    TryUpgrade(&DAT_10013798,0x5a,100);
    TryUpgrade(&DAT_100137a0,0x5a,100);
    iVar2 = GetUnits(&DAT_10015fa0);
    if (iVar2 < 0x3d) {
      TryUpgrade(&DAT_10016048,0xf,100);
      uVar3 = 0xf;
    }
    else {
      TryUpgrade(&DAT_10016048,0x5a);
      uVar3 = 0x5a;
    }
    TryUpgrade(&DAT_100160a8,uVar3,100);
    cVar1 = UpgIsRun(&DAT_10016048);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_100160a8);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_100160a0,0x5a,100);
      }
    }
    TryUpgrade(&DAT_10016228,0x5a,100);
    TryUpgrade(&DAT_10016230,0x5a,100);
  }
  cVar1 = UpgIsDone(&DAT_10016328);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016190,0x5a,100);
    cVar1 = UpgIsRun(&DAT_10016190);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_100161a0,0x5a,100);
      cVar1 = UpgIsRun(&DAT_100161a0);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016198,0x5a,100);
        cVar1 = UpgIsRun(&DAT_10016198);
        if (cVar1 != '\0') {
          TryUpgrade(&DAT_10016188,0x5a,100);
        }
      }
    }
  }
  return;
}





void FUN_10005ad0(void)

{
  char cVar1;
  int iVar2;
  
  TryUpgrade(&DAT_10016398,0x32,100);
  iVar2 = GetUnits(&DAT_10015f40);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10013680,100,100);
  }
  TryUpgrade(&DAT_10016098,100,100);
  iVar2 = FUN_100052b0(&DAT_100136a8);
  if ((iVar2 != 0) || ((DAT_10015f78 != 0 && (DAT_10015f78 != 5)))) {
    TryUpgrade(&DAT_10016290,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10016008);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10016060,100,100);
  }
  cVar1 = UpgIsRun(&DAT_10016170);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016050,100,100);
  }
  TryUpgrade(&DAT_10016170,0x5c,100);
  TryUpgrade(&DAT_10016120,0x62,100);
  iVar2 = GetUnits(&DAT_100160f8);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100161d8,0x62,100);
  }
  TryUpgrade(&DAT_10016040,0x62,100);
  iVar2 = GetUnits(&DAT_10016278);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10013900,100,100);
  }
  return;
}





void FUN_10005c10(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  TryUnit(&DAT_10016278,3,100,100);
  iVar2 = GetReadyUnits(&DAT_10016008);
  if (iVar2 != 0) {
    TryUnit(&DAT_10015ff8,2,100,100);
    TryUnit(&DAT_10015ff0,4,100,100);
  }
  TryUnit(&DAT_10015ff8,1,100,100);
  TryUnit(&DAT_10015fd8,1,100,100);
  if (*(int *)(&DAT_10015fb8 + DAT_100162d4 * 4) == 0) {
    FUN_10005260();
    iVar2 = GetReadyUnits(&DAT_10013898);
    if (iVar2 == 0) {
      return;
    }
  }
  TryUnit(&DAT_10016208,1,100,100);
  TryUnit(&DAT_10015fd8,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10015fd8);
  if ((iVar2 < 2) && (iVar2 = GetStartRes(), iVar2 != 0)) {
    return;
  }
  TryUnit(&DAT_10016270,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016270);
  iVar3 = GetUnits(&DAT_10016270);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    TryUnit(&DAT_10015f40,1,100,100);
    iVar2 = GetPeaceTimeLeft();
    if (iVar2 < 3) {
      TryUnit(&DAT_10016008,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10016008);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_10005260();
    TryUnit(&DAT_10015fd8,4,100,100);
    iVar2 = GetReadyUnits(&DAT_10015fd8);
    if (2 < iVar2) {
      TryUnit(&DAT_100160f8,3,100,100);
      iVar2 = GetUnits(&DAT_10016278);
      if (iVar2 != 0) {
        TryUnit(&DAT_100160f8,4,100,100);
      }
      TryUnit(&DAT_10013638,1,100,100);
      TryUnit(&DAT_10013638,3,0x28,100);
      cVar1 = UpgIsDone(&DAT_10013900);
      if (cVar1 != '\0') {
        TryUnit(&DAT_100160f8,5,100,100);
      }
      TryUnit(&DAT_10016118,1,100,100);
    }
  }
  return;
}





void  FUN_10005e30(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetUnits(&DAT_10016298,param_1);
  if (iVar2 < 0x28) {
    SetAIRegister(DAT_100162d4 + 8,0);
  }
  iVar2 = GetUnits(&DAT_10016298);
  if (iVar2 < 0x9d) {
    iVar2 = GetReadyUnits(&DAT_100160f8);
    if (iVar2 == 0) goto LAB_10005e92;
  }
  SetAIRegister(DAT_100162d4 + 8,1);
LAB_10005e92:
  iVar2 = 2;
  do {
    TryUnit(&DAT_100161b0,1000,0x14,100);
    iVar3 = GetUnits(&DAT_100136a8);
    if (iVar3 < 0x8c) {
      TryUnit(&DAT_100136a8,1000,0x14,100);
    }
    else {
      TryUnit(&DAT_100136a8,1000,0x14,0x28);
      TryUnit(&DAT_10016100,1000,0x14,100);
    }
    iVar3 = GetAIRegister(DAT_100162d4 + 8);
    if (iVar3 == 0) {
      iVar3 = GetPeaceTimeLeft();
      if (iVar3 < 1) {
        TryUnit(&DAT_10016298,0xa0,0x14,100);
      }
    }
    if (0) {
LAB_10005f65:
      iVar3 = GetMoney(5);
      if (2000 < iVar3) {
        iVar3 = GetMoney(4);
        if (2000 < iVar3) {
          iVar3 = 0x1e;
          do {
            TryUnit(&DAT_100138a8,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = GetUnitCost(DAT_100162d4 & 0xff,&DAT_100138a8,1);
      if (iVar3 < 0x78) goto LAB_10005f65;
    }
    cVar1 = UpgIsDone(&DAT_10016040);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    TryUnit(&DAT_100163d0,1000,0x14,uVar4);
    TryUnit(&DAT_100136a0,1000,0x14,100);
    TryUnit(&DAT_10015fa0,1000,0x14,100);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}





void  FUN_10006010(int param_1)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetReadyUnits(&DAT_10013898,param_1);
  if (iVar2 != 0) {
    iVar2 = GetStartRes();
    if (iVar2 == 3) {
      iVar2 = GetAIRegister(DAT_100162d4);
      if (iVar2 == 0) {
        AI_Torg(2,3,500000);
        AI_Torg(0,3,80000);
        SetAIRegister(DAT_100162d4,1);
        return;
      }
    }
    else {
      iVar2 = GetReadyUnits(&DAT_10013898);
      if (iVar2 != 0) {
        iVar2 = GetAIRegister(DAT_100162d4);
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
          SetAIRegister(DAT_100162d4,1);
        }
        cVar1 = UpgIsRun(&DAT_10016290);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016170);
          if (cVar1 == '\0') {
            iVar2 = GetReadyUnits(&DAT_10015f40);
            if (iVar2 != 0) {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_100162d4 & 0xff,&DAT_10016170,5);
              }
              FUN_10002fd0(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = UpgIsRun(&DAT_10016170);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016040);
          if (cVar1 == '\0') {
            if (0) {
              iVar2 = 0;
            }
            else {
              iVar2 = GetUpgradeCost(DAT_100162d4 & 0xff,&DAT_10016040,3);
            }
            uVar3 = FUN_10002fd0(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_100162d4 & 0xff,&DAT_10016040,1);
              }
              uVar3 = FUN_10002fd0(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = GetUpgradeCost(DAT_100162d4 & 0xff,&DAT_10016040,4);
                }
                FUN_10002fd0(4,(iVar2 * 0xb) / 10,2);
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





void  FUN_10006330(int param_1)

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
  cVar1 = UpgIsRun(&DAT_10016120);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100162d4,&DAT_10016120,3);
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
  cVar1 = UpgIsRun(&DAT_10016040);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100162d4,&DAT_10016040,3);
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
  cVar1 = UpgIsRun(&DAT_10016170);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100162d4,&DAT_10016170,3);
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
  cVar1 = UpgIsRun(&DAT_10016360);
  if (((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_100162a8), cVar1 == '\0')) &&
     (iVar2 = GetMoney(3), iVar2 < 9000)) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10016008);
  if ((iVar2 == 0) && (iVar2 = GetPeaceTimeLeft(), iVar2 < 2)) {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUnitCost((char)DAT_100162d4,&DAT_10016008,2);
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
  cVar1 = UpgIsRun(&DAT_10016290);
  if (cVar1 == '\0') {
    SetPDistribution(9,1,1);
  }
  cVar1 = UpgIsRun(&DAT_10016098);
  if ((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10013680), cVar1 == '\0')) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015f40);
  if (iVar2 == 0) {
    SetPDistribution(6,4,4);
  }
  cVar1 = UpgIsRun(&DAT_10016398);
  if (cVar1 != '\0') {
    return;
  }
  SetPDistribution(9,1,1);
  return;
}





void FUN_10006670(void)

{
  char cVar1;
  
  SetMinesUpgradeRules(&DAT_100165b8);
  cVar1 = UpgIsRun(&DAT_10016360);
  if (cVar1 != '\0') {
    cVar1 = UpgIsRun(&DAT_100162a8);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f16c);
      return;
    }
  }
  if (((DAT_10015f78 == 2) || (DAT_10015f78 == 3)) || (DAT_10015f78 == 4)) {
    SetMinesUpgradeRules(&DAT_1000f1d8);
  }
  else {
    cVar1 = UpgIsRun(&DAT_10016290);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016170);
      if (cVar1 == '\0') {
        SetMinesUpgradeRules(&DAT_100165b8);
        return;
      }
    }
    cVar1 = UpgIsRun(&DAT_10016170);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f1d8);
      return;
    }
  }
  return;
}





void FUN_10006720(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = FUN_100052b0(&DAT_100136a8);
  if (iVar1 != 0) {
    SetDefenseState(0);
  }
  iVar1 = GetMaxPeaceTime();
  if ((iVar1 < 1) && (iVar1 = GetReadyUnits(&DAT_100138f8), iVar1 < 1)) {
    return;
  }
  SetDefenseState(0);
  return;
}





void FUN_10006770(void)

{
  char cVar1;
  
  cVar1 = UpgIsDone(&DAT_100161b8);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10016390,0x1e,0x1e,0x3c);
  }
  cVar1 = UpgIsDone(&DAT_100160d0);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10013688,0x14,0x1e,0x3c);
  }
  TryUnit(&DAT_100138e8,0x3c,0x50,100);
  TryUpgrade(&DAT_100161f8,0x1e,100);
  TryUpgrade(&DAT_100161f0,0x1e,100);
  TryUpgrade(&DAT_100161c0,0x1e,100);
  TryUpgrade(&DAT_100161b8,0x1e,100);
  TryUpgrade(&DAT_100161c8,0x1e,100);
  TryUpgrade(&DAT_100160b8,0x1e,100);
  TryUpgrade(&DAT_100160c0,0x1e,100);
  TryUpgrade(&DAT_100160c8,0x1e,100);
  TryUpgrade(&DAT_100160d0,0x1e,100);
  return;
}





void FUN_10006860(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = GetReadyUnits(&DAT_100138f8);
  iVar3 = GetUnits(&DAT_10016270);
  iVar4 = GetReadyUnits(&DAT_10016270);
  iVar5 = GetUnits(&DAT_10015f40);
  iVar6 = GetReadyUnits(&DAT_10015f40);
  iVar7 = GetUnits(&DAT_100138f8);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_100161d0)) {
    TryUnit(&DAT_100138f8,4,0x32,100);
    cVar1 = UpgIsRun(&DAT_100161d8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100138f8,6,0x32,100);
    }
    cVar1 = UpgIsRun(&DAT_10016040);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100138f8,8,0x32,100);
    }
  }
  TryUpgrade(&DAT_10016308,0x32,100);
  TryUpgrade(&DAT_100162f0,0x28,100);
  TryUpgrade(&DAT_10016300,0x1e,100);
  TryUpgrade(&DAT_100162e0,0x14,100);
  TryUpgrade(&DAT_100162e8,0xf,100);
  TryUpgrade(&DAT_100162d8,10,100);
  return;
}





void FUN_10006990(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetReadyUnits(&DAT_10016278);
  iVar3 = GetUnits(&DAT_10016278);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10016278,5,100,100);
  }
  TryUnit(&DAT_10015fd8,1,100,100);
  TryUnit(&DAT_10016208,1,100,100);
  TryUnit(&DAT_10016270,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016270);
  iVar3 = GetUnits(&DAT_10016270);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10015f40,1,100,100);
    iVar2 = GetReadyUnits(&DAT_10015f40);
    if (iVar2 != 0) {
      TryUnit(&DAT_10015ff0,1,100,100);
      TryUnit(&DAT_10015ff8,1,100,100);
      TryUnit(&DAT_10013898,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10013898);
      if (iVar2 != 0) {
        TryUnit(&DAT_10016008,1,100,100);
        TryUnit(&DAT_10016118,1,100,100);
        TryUnit(&DAT_10013638,1,100,100);
        TryUnit(&DAT_100160f8,1,100,100);
        cVar1 = UpgIsRun(&DAT_10016040);
        if (cVar1 != '\0') {
          iVar2 = GetReadyUnits(&DAT_10015fd8);
          iVar3 = GetUnits(&DAT_10015fd8);
          if (iVar3 == iVar2) {
            iVar2 = GetExtraction(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            TryUnit(&DAT_10015fd8,uVar4,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_100160f8);
          iVar3 = GetUnits(&DAT_100160f8);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_100160f8,7,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_10013638);
          iVar3 = GetUnits(&DAT_10013638);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_10013638,3,100,100);
          }
        }
      }
    }
  }
  return;
}





void FUN_10006ba0(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = GetUnits(&DAT_100138a8);
  if (iVar1 < 4) {
    SetAIRegister(DAT_100162d4 + 8,0);
  }
  iVar1 = GetUnits(&DAT_100138a8);
  if (0x5f < iVar1) {
    SetAIRegister(DAT_100162d4 + 8,1);
  }
  iVar1 = GetAIRegister(DAT_100162d4 + 8);
  SetDefenseState((((int)((unsigned int)iVar1 >> 8) << 8) | iVar1 == 0));
  SetDefenseState(0);
  return;
}





void FUN_10006c20(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int uVar2;
  
  uVar2 = 0;
  if (*(int *)(&DAT_10015fb8 + DAT_100162d4 * 4) != 0) {
    FUN_10006720();
    uVar2 = extraout_ECX;
  }
  FUN_10005e30(uVar2);
  FUN_10006770();
  iVar1 = GetPeaceTimeLeft();
  if (iVar1 < 5) {
    FUN_10006860();
  }
  FUN_10005c10();
  FUN_10005ad0();
  iVar1 = GetPeaceTimeLeft();
  uVar2 = extraout_ECX_00;
  if (iVar1 < 3) {
    FUN_100052f0();
    uVar2 = extraout_ECX_01;
  }
  FUN_10006010(uVar2);
  FUN_10006330(extraout_ECX_02);
  FUN_10006670();
  return;
}





void FUN_10006c80(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  
  FUN_10006ba0();
  FUN_10006990();
  iVar3 = 2;
  do {
    TryUnit(&DAT_100161b0,1000,0x14,100);
    TryUnit(&DAT_100136a8,1000,0x14,100);
    iVar2 = GetAIRegister(DAT_100162d4 + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        TryUnit(&DAT_100138a8,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      TryUnit(&DAT_10016180,0x3c,10,100);
    }
    cVar1 = UpgIsDone(&DAT_10016040);
    if (cVar1 == '\0') {
      TryUnit(&DAT_100136b0,1000,0x14,100);
    }
    TryUnit(&DAT_100136a0,1000,0x14,100);
    TryUnit(&DAT_10015fa0,1000,0x14,100);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10006770();
  FUN_10006010(extraout_ECX);
  FUN_10006330(extraout_ECX_00);
  FUN_100052f0();
  FUN_10005ad0();
  return;
}






void FUN_10006d80(void)

{
  DAT_10015f78 = GetLandType();
  DAT_10016388 = GetDifficulty();
  DAT_100138b8 = GetStartRes();
  FUN_10003080();
  SetMineBalanse(0x13,&DAT_1000f114);
  FUN_10006670();
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  switch(DAT_10015f78) {
  case 0:
  case 5:
    if (DAT_100138b8 == 3) {
      SetMineBalanse(3,&DAT_1000f160);
      SetMinesUpgradeRules(&DAT_1000f16c);
      SetMinesBuildingRules(&DAT_1000f41c,5);
      FUN_10006c80();
    }
    else {
      SetMineBalanse(0x13,&DAT_1000f114);
      SetMinesUpgradeRules(&DAT_100165b8);
      if (DAT_100138b8 == 0) {
        DAT_1000f248 = 4;
      }
      SetMinesBuildingRules(&DAT_1000f244,0x1b);
      FUN_10006c20();
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
    FUN_100033a0();
  }
  FUN_10003200();
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
  iVar3 = GetUnits(&DAT_100161b0);
  iVar4 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_100161d8);
  GetUnits(&DAT_100136a8);
  UpgIsDone(&DAT_10016040);
  GetUnits(&DAT_10016100);
  iVar5 = GetUnits(&DAT_100163d0);
  iVar6 = GetUnits(&DAT_10016350);
  iVar7 = GetUnits(&DAT_100136a8);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = GetDifficulty();
  if (0 < iVar6) {
    TryUnit(&DAT_10016348,0xf,0x14,0x28);
  }
  iVar6 = GetReadyUnits(&DAT_100138f8);
  iVar7 = GetUnits(&DAT_100138f8);
  if (iVar3 == 0) {
    return;
  }
  TryUnit(&DAT_10015ff8,1,100,100);
  iVar8 = GetUnits(&DAT_10015ff8);
  if (iVar8 == 0) {
    return;
  }
  TryUpgrade(&DAT_10016398,100,100);
  cVar2 = FieldExist();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      TryUnit(&DAT_100161b0,100,100,100);
      TryUnit(&DAT_100136a8,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_10004270();
    }
    SetPDistribution(0,1,1);
  }
  else {
    if (DAT_100165b4 == 0) {
      if (12000 < iVar4) {
        SetPDistribution(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_100045d9:
      SetPDistribution(9,uVar12,uVar13);
    }
    else {
      if (DAT_100165b4 == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_100045d9;
      }
      if (DAT_100165b4 == 2) {
        uVar13 = 9;
        uVar12 = 4;
        goto LAB_100045d9;
      }
    }
    uVar12 = 0x1c2;
    if (cVar1 != '\0') {
      uVar12 = 0x17c;
    }
    if (iVar3 < 0x19) {
      if (300 < iVar4) {
        TryUnit(&DAT_100161b0,100,100,100);
        goto LAB_10004617;
      }
    }
    else {
LAB_10004617:
      if ((300 < iVar4) && (TryUnit(&DAT_100161b0,uVar12,0xe8,100), 400 < iVar4)) {
        TryUnit(&DAT_100136a8,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_10004270();
    }
  }
  TryUnit(&DAT_10015fd8,1,100,100);
  TryUnit(&DAT_10015fd8,2,0x5a,5);
  TryUnit(&DAT_10015fd8,3,0x5a,5);
  iVar8 = GetUnits(&DAT_10016270);
  if (1 < iVar8) {
    TryUnit(&DAT_10015fd8,2,0x50,5);
    iVar8 = GetUnits(&DAT_10015fd8);
    if (1 < iVar8) {
      TryUnit(&DAT_100160f8,1,99,0x5a);
    }
    iVar8 = GetReadyUnits(&DAT_10015fd8);
    if (1 < iVar8) {
      TryUnit(&DAT_10013898,1,100,100);
    }
    TryUpgrade(&DAT_10016130,99,100);
  }
  iVar8 = GetUnits(&DAT_100161b0);
  if (0x23 < iVar8) {
    TryUnit(&DAT_10013898,1,100,100);
  }
  TryUnit(&DAT_10016208,1,100,100);
  TryUnit(&DAT_10016270,1,100,100);
  TryUnit(&DAT_10016270,2,100,100);
  TryUnit(&DAT_10015ff0,1,0x32,0x32);
  TryUnit(&DAT_10016208,2,10,5);
  TryUpgrade(&DAT_10013680,0x50,100);
  iVar8 = GetUnits(&DAT_10015f40);
  if (0 < iVar8) {
    TryUnit(&DAT_10016118,1,5,3);
  }
  cVar2 = FieldExist();
  if (cVar2 != '\0') {
    TryUnit(&DAT_10015f40,1,0x5a,0x5a);
  }
  TryUnit(&DAT_10016008,1,99,10);
  TryUnit(&DAT_10013638,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    TryUnit(&DAT_10015ff8,2,0x1e,0x1e);
  }
  TryUnit(&DAT_10016278,1,0x5a,0x14);
  TryUnit(&DAT_10016278,2,0x50,5);
  TryUpgrade(&DAT_10016098,0x5a,99);
  TryUpgrade(&DAT_10016290,0x5f,100);
  TryUpgrade(&DAT_100161d8,100,100);
  TryUpgrade(&DAT_10016060,0x5a,0x5a);
  TryUpgrade(&DAT_10016050,0x5f,100);
  TryUpgrade(&DAT_10016058,0x5f,100);
  iVar8 = GetReadyUnits(&DAT_100160f8);
  if (((iVar8 == 0) || (cVar2 = UpgIsRun(&DAT_100161d8), cVar2 != '\0')) ||
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
  TryUpgrade(&DAT_100137c0,100,100);
  TryUnit(&DAT_100162f8,1,0x32,0x5a);
  TryUnit(&DAT_100162f8,2,0x14,0x32);
  TryUnit(&DAT_100162f8,3,10,0x32);
  cVar2 = UpgIsDone(&DAT_10013978);
  if (cVar2 == '\0') {
    iVar9 = GetUnitsByUsage(0,0x1c);
    iVar10 = GetUnitsByUsage(0,0x1b);
    iVar8 = GetUnitsByUsage(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_10015fb0;
      goto LAB_10004a43;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_10015fb0;
      goto LAB_10004a43;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_10013908;
LAB_10004a43:
    TryUnit(puVar11,iVar8,0x32,0x32);
  }
  TryUpgrade(&DAT_10013978,99,100);
  cVar2 = UpgIsRun(&DAT_10016290);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013978,0x5a,0x5a);
    TryUpgrade(&DAT_10013890,99,100);
  }
  cVar2 = UpgIsRun(&DAT_10013978);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013960,0x5a,0x5a);
    TryUpgrade(&DAT_100138a0,0x46,10);
    FUN_10003360();
  }
  SetUpgradeLock(1,0);
  iVar8 = GetMoney(0);
  if ((((14000 < iVar8) && (cVar2 = UpgIsRun(&DAT_100137c0), cVar2 != '\0')) &&
      (iVar8 = GetMoney(1), iVar8 < 0x1d4c)) &&
     (cVar2 = UpgIsRun(&DAT_10013978), cVar2 == '\0')) {
    SetUpgradeLock(1,1);
  }
  TryUnit(&DAT_10016210,3,0x5a,0x5a);
  cVar2 = UpgIsDone(&DAT_10016110);
  if (cVar2 != '\0') {
    TryUnit(&DAT_10016210,0x14,10,0x5a);
  }
  TryUpgrade(&DAT_10016110,99,0x5a);
  TryUpgrade(&DAT_10016120,99,100);
  TryUpgrade(&DAT_10016308,0x32,0x32);
  TryUpgrade(&DAT_100162f0,0x32,0x32);
  TryUpgrade(&DAT_10016300,0x32,0x32);
  TryUpgrade(&DAT_100162e0,0x32,0x32);
  TryUpgrade(&DAT_100162e8,0x32,0x32);
  TryUpgrade(&DAT_100162d8,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     (TryUnit(&DAT_100138f8,1,0x50,10), 0x3c < iVar3)) {
    TryUnit(&DAT_100138f8,2,0x50,10);
    TryUnit(&DAT_100138f8,3,0x32,10);
    TryUnit(&DAT_100138f8,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    TryUnit(&DAT_10016180,0x32,1,0x1e);
    TryUnit(&DAT_10016298,0x14,1,0x1e);
  }
  else {
    TryUnit(&DAT_100138e8,0x32,10,100);
    TryUnit(&DAT_10016180,0x4b,1,0x1e);
    TryUnit(&DAT_10016298,0x1e,1,0x1e);
    TryUpgrade(&DAT_10013650,0x5f,0x5a);
    TryUpgrade(&DAT_10013728,0x5f,0x5a);
    TryUpgrade(&DAT_10013648,0x5f,0x5a);
    cVar2 = UpgIsDone(&DAT_100161b8);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10016390,5,0x1e,10);
    }
    cVar2 = UpgIsDone(&DAT_100160d0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013688,10,0x1e,10);
    }
    FUN_100043a0();
  }
  cVar2 = UpgIsDone(&DAT_10016040);
  if (cVar2 != '\0') {
    cVar2 = UpgIsDone(&DAT_10016120);
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
  iVar3 = GetUnits(&DAT_100160f8);
  if (iVar3 != 0) {
    TryUnit(&DAT_10016210,6,0x5a,0x5a);
  }
  cVar2 = UpgIsDone(&DAT_10016110);
  if (cVar2 != '\0') {
    TryUnit(&DAT_10016210,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    TryUnit(&DAT_100160f8,2,0x5f,0x14);
    TryUnit(&DAT_100160f8,3,0x5f,0x14);
    TryUnit(&DAT_100160f8,4,0x5f,0x14);
    TryUnit(&DAT_100160f8,5,0x28,0x14);
    TryUnit(&DAT_100160f8,6,0x28,0x14);
    TryUpgrade(&DAT_10016040,99,100);
    iVar3 = GetUnits(&DAT_10016100);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_10016228,0x5a,100);
      TryUpgrade(&DAT_10016230,0x50,0x46);
    }
    TryUpgrade(&DAT_10016110,0x3c,0x5a);
    cVar1 = UpgIsRun(&DAT_10013928);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016188,0x5a,0x5a);
      TryUpgrade(&DAT_10016198,0x5a,0x5a);
      TryUpgrade(&DAT_100161a0,0x46,0x5a);
      TryUpgrade(&DAT_10016190,0x46,0x5a);
    }
  }
  TryUpgrade(&DAT_100137c0,99,100);
  TryUpgrade(&DAT_10013900,0x3c,0x5a);
  TryUpgrade(&DAT_10016170,100,100);
  if (0x15e < iVar5) {
    TryUnit(&DAT_10016100,500,10,100);
    FUN_10004350();
  }
  iVar3 = GetReadyUnits(&DAT_10013898);
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
                if (iVar8 < 0x3e9) goto LAB_10004fe3;
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
LAB_10004fe3:
  iVar3 = GetReadyUnits(&DAT_10015f40);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = UpgIsRun(&DAT_10016290), cVar1 == '\0')) {
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
  iVar3 = GetUnits(&DAT_10016208);
  if ((iVar3 != 0) && (cVar1 = UpgIsRun(&DAT_100161d8), cVar1 == '\0')) {
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
  if (*(int *)(&DAT_1001662c + iVar3 * 4) == 0) {
    AI_Torg(5,3,4000);
    iVar3 = GetAINation();
    *(int *)(&DAT_1001662c + iVar3 * 4) = 1;
  }
  return;
}





__declspec(dllexport) void InitAI(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  unsigned int uVar4;
  int *puVar5;
  unsigned int uVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_60 [48];
  char acStack_30 [48];
  if ((((1) &&
       (RegisterUpgrade(&DAT_100160a8,"KUZ04FR"), 1)) &&
      (RegisterUpgrade(&DAT_10016048,"AKA35FR"), 1)) &&
     (RegisterUpgrade(&DAT_100160a0,"AKA36FR"), 1)) {
    RegisterUpgrade(&DAT_100160b0,"AKA32FR");
  }
  if (1) {
    RegisterUnitType(&DAT_100136b0,"Dragun(fr)");
  }
  if (((((1) &&
        (RegisterUpgrade(&DAT_10013920,"Dragun(fr)ATTACK"), 1))
       && ((RegisterUpgrade(&DAT_10013918,"Dragun(fr)ATTACK3"), 1
           && ((RegisterUpgrade(&DAT_10013910,"Dragun(fr)ATTACK4"),
               1 &&
               (RegisterUpgrade(&DAT_10013958,"Dragun(fr)ATTACK5"),
               1)))))) &&
      (((RegisterUpgrade(&DAT_10013948,"Dragun(fr)ATTACK6"), 1 &&
        (((RegisterUpgrade(&DAT_10013940,"Dragun(fr)ATTACK7"), 1
          && (RegisterUpgrade(&DAT_100136f8,"Dragun(fr)SHIELD"),
             1)) &&
         (RegisterUpgrade(&DAT_100136e8,"Dragun(fr)SHIELD3"), 1))
        )) && ((((RegisterUpgrade(&DAT_100138e0,"Dragun(fr)SHIELD4"),
                 1 &&
                 (RegisterUpgrade(&DAT_100138d8,"Dragun(fr)SHIELD5"),
                 1)) &&
                ((RegisterUpgrade(&DAT_100138d0,"Dragun(fr)SHIELD6"),
                 1 &&
                 ((RegisterUpgrade(&DAT_100138c8,"Dragun(fr)SHIELD7"),
                  1 &&
                  (RegisterUpgrade(&DAT_10013920,"Dragun(fr)ATTACK"),
                  1)))))) &&
               (RegisterUpgrade(&DAT_10013918,"Dragun(fr)ATTACK3"),
               1)))))) &&
     ((((((RegisterUpgrade(&DAT_10013910,"Dragun(fr)ATTACK4"), 1
          && (RegisterUpgrade(&DAT_10013958,"Dragun(fr)ATTACK5"),
             1)) &&
         (RegisterUpgrade(&DAT_10013948,"Dragun(fr)ATTACK6"), 1))
        && ((RegisterUpgrade(&DAT_10013940,"Dragun(fr)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_100136f8,"Dragun(fr)SHIELD"), 1
            )))) &&
       ((RegisterUpgrade(&DAT_100136e8,"Dragun(fr)SHIELD3"), 1 &&
        ((RegisterUpgrade(&DAT_100138e0,"Dragun(fr)SHIELD4"), 1
         && (RegisterUpgrade(&DAT_100138d8,"Dragun(fr)SHIELD5"),
            1)))))) &&
      (RegisterUpgrade(&DAT_100138d0,"Dragun(fr)SHIELD6"), 1))))
  {
    RegisterUpgrade(&DAT_100138c8,"Dragun(fr)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_100136a0,"Dragun_France(fr)");
  }
  if (((((1) &&
        (RegisterUpgrade(&DAT_10013678,"Dragun_France(fr)ATTACK"),
        1)) &&
       (RegisterUpgrade(&DAT_10013670,"Dragun_France(fr)ATTACK3"),
       1)) &&
      ((((RegisterUpgrade(&DAT_10013668,"Dragun_France(fr)ATTACK4"),
         1 &&
         (RegisterUpgrade(&DAT_10016338,"Dragun_France(fr)ATTACK5"),
         1)) &&
        ((RegisterUpgrade(&DAT_10016330,"Dragun_France(fr)ATTACK6"),
         1 &&
         ((RegisterUpgrade(&DAT_10016328,"Dragun_France(fr)ATTACK7"),
          1 &&
          (RegisterUpgrade(&DAT_100163b0,"Dragun_France(fr)SHIELD"),
          1)))))) &&
       (RegisterUpgrade(&DAT_100163a8,"Dragun_France(fr)SHIELD3"),
       1)))) &&
     (((RegisterUpgrade(&DAT_100163f8,"Dragun_France(fr)SHIELD4"),
       1 &&
       (RegisterUpgrade(&DAT_100163f0,"Dragun_France(fr)SHIELD5"),
       1)) &&
      (RegisterUpgrade(&DAT_100163e8,"Dragun_France(fr)SHIELD6"),
      1)))) {
    RegisterUpgrade(&DAT_100163e0,"Dragun_France(fr)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_10016000,"Sveshenik_evro(fr)");
  }
  DAT_100162d4 = GetAINation();
  uVar4 = GetRandomIndex();
  iVar2 = DAT_100162d4;
  *(unsigned int *)(&DAT_10015fb8 + DAT_100162d4 * 4) = uVar4 & 0x80;
  *(int *)(&DAT_10013b10 + iVar2 * 0x4b8) = 0;
  *(int *)(&DAT_10013ca4 + iVar2 * 0x4b8) = 0;
  if (1) {
    RegisterUpgrade(&DAT_100160f0,"Barabanshik_ev1(fr)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_100138a8,"Dragun_18_DIP(fr)");
  }
  bVar3 = GetRandomIndex();
  uVar4 = 0xffffffff;
  pcVar7 = "Konni_Ricar(fr)";
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = acStack_30;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(int *)pcVar8 = *(int *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar7 = "Mushketer(fr)";
  if ((bVar3 & 8) != 8) {
    pcVar7 = "Grenader(fr)";
  }
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = acStack_60;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(int *)pcVar8 = *(int *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if (((1) &&
      (RegisterUnitType(&DAT_10016298,"Strelec_Algir_DIP(fr)"), 1)
      ) && (RegisterUnitType(&DAT_10016348,"Kozak_loshad_DIP(fr)"),
           1)) {
    RegisterUnitType(&DAT_10013720,"Officer_evro(fr)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_10016280,"Officer_evro(fr)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_10015fe8,"Officer_evro(fr)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10013660,"Barabanshik_ev1(fr)");
  }
  AssignFormUnit("Pikiner_evro(fr)");
  if (((((1) &&
        (RegisterUnitType(&DAT_100136a8,"Pikiner_evro(fr)"), 1))
       && (RegisterUnitType(&DAT_100161b0,"Krestian_Sved(fr)"), 1)
       ) && ((RegisterUnitType(&DAT_10016180,"Grenader_DIP(fr)"),
             1 &&
             (RegisterUnitType(&DAT_10016100,"Mushketer_ev(fr)"),
             1)))) &&
     (RegisterUnitType(&DAT_100163d0,acStack_30), 1)) {
    RegisterUnitType(&DAT_10016350,"Kirasir(fr)");
    if ((((((1) &&
           (RegisterUnitType(&DAT_10015fa0,acStack_60), 1)) &&
          ((RegisterUnitType(&DAT_10016390,"Pushka(fr)"), 1 &&
           (((RegisterUnitType(&DAT_10013688,"Mortira(fr)"), 1 &&
             (RegisterUnitType(&DAT_100138e8,"Mortira_b(fr)"), 1))
            && (RegisterUnitType(&DAT_10016210,"Lodka(fr)"), 1))))
          )) && (((RegisterUnitType(&DAT_100136a0,"Dragun_France(fr)"),
                  1 &&
                  (RegisterUnitType(&DAT_10015fd8,"Center_France(fr)"),
                  1)) &&
                 ((RegisterUnitType(&DAT_10015ff8,"Melnica(fr)"),
                  1 &&
                  (((RegisterUnitType(&DAT_10016270,"Kazarma_1_FR(fr)"),
                    1 &&
                    (RegisterUnitType(&DAT_10016278,"Kazarma_FR(fr)"),
                    1)) &&
                   ((RegisterUnitType(&DAT_10015ff0,"Sclad2(fr)"),
                    1 &&
                    (((RegisterUnitType(&DAT_10015f40,"akademia_FR(fr)"),
                      1 &&
                      (RegisterUnitType(&DAT_100160f8,"Konushnia_FR(fr)"),
                      1)) &&
                     (RegisterUnitType(&DAT_10016008,"Dip_korpus_FR(fr)"),
                     1)))))))))))) &&
        ((RegisterUnitType(&DAT_10013638,"artileri_depo_FR(fr)"),
         1 &&
         (RegisterUnitType(&DAT_10013898,"Rinok(fr)"), 1)))) &&
       ((RegisterUnitType(&DAT_100138f8,"Bashnia(fr)"), 1 &&
        ((RegisterUnitType(&DAT_10016208,"Kuznica_FR(fr)"), 1 &&
         (RegisterUnitType(&DAT_10016118,"NotrDam(fr)"), 1)))))) {
      RegisterUnitType(&DAT_100162f8,"PorE(fr)");
    }
  }
  if (((1) &&
      (RegisterUpgrade(&DAT_10016398,"Melnica(fr)GETRES"), 1)) &&
     (RegisterUpgrade(&DAT_10016120,"Melnica(fr)GETRES2"), 1)) {
    RegisterUpgrade(&DAT_10013680,"KUZ01FR");
  }
  if (((1) &&
      (RegisterUnitType(&DAT_10013908,"Fregat(fr)"), 1)) &&
     ((RegisterUnitType(&DAT_10015fb0,"GALERA(fr)"), 1 &&
      ((RegisterUnitType(&DAT_100163b8,"Linkor(fr)"), 1 &&
       (RegisterUnitType(&DAT_10015fa8,"Yahta(fr)"), 1)))))) {
    RegisterUnitType(&DAT_100138c0,"PERES_KOR(fr)");
  }
  if ((((((((1) &&
           (RegisterUpgrade(&DAT_10016370,"Pikiner_evro(fr)ATTACK"),
           1)) &&
          (RegisterUpgrade(&DAT_10016378,"Pikiner_evro(fr)ATTACK3"),
          1)) &&
         ((RegisterUpgrade(&DAT_10016360,"Pikiner_evro(fr)ATTACK4"),
          1 &&
          (RegisterUpgrade(&DAT_10016368,"Pikiner_evro(fr)ATTACK5"),
          1)))) &&
        (RegisterUpgrade(&DAT_10016380,"Pikiner_evro(fr)ATTACK6"),
        1)) &&
       ((RegisterUpgrade(&DAT_100162b8,"Pikiner_evro(fr)SHIELD"),
        1 &&
        (RegisterUpgrade(&DAT_100162a0,"Pikiner_evro(fr)SHIELD3"),
        1)))) &&
      ((RegisterUpgrade(&DAT_100162a8,"Pikiner_evro(fr)SHIELD4"),
       1 &&
       (((RegisterUpgrade(&DAT_100162c0,"Pikiner_evro(fr)SHIELD5"),
         1 &&
         (RegisterUpgrade(&DAT_100162c8,"Pikiner_evro(fr)SHIELD6"),
         1)) &&
        (RegisterUpgrade(&DAT_10013930,"Mushketer_ev(fr)ATTACK"),
        1)))))) &&
     (((RegisterUpgrade(&DAT_10013938,"Mushketer_ev(fr)ATTACK3"),
       1 &&
       (RegisterUpgrade(&DAT_10013928,"Mushketer_ev(fr)ATTACK4"),
       1)) &&
      ((RegisterUpgrade(&DAT_10015f98,"Mushketer_ev(fr)SHIELD"),
       1 &&
       (RegisterUpgrade(&DAT_10015f88,"Mushketer_ev(fr)SHIELD3"),
       1)))))) {
    RegisterUpgrade(&DAT_10015f90,"Mushketer_ev(fr)SHIELD4");
  }
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016038,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016030,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016028,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016020,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016018,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016010,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016150,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016148,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016140,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016138,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016128,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016178,puVar5);
  if (((((((1) &&
          (RegisterUpgrade(&DAT_10013678,"Dragun_France(fr)ATTACK"),
          1)) &&
         ((RegisterUpgrade(&DAT_10013670,"Dragun_France(fr)ATTACK3"),
          1 &&
          (((RegisterUpgrade(&DAT_10013668,"Dragun_France(fr)ATTACK4"),
            1 &&
            (RegisterUpgrade(&DAT_10016338,"Dragun_France(fr)ATTACK5"),
            1)) &&
           (RegisterUpgrade(&DAT_10016330,"Dragun_France(fr)ATTACK6"),
           1)))))) &&
        ((RegisterUpgrade(&DAT_10016328,"Dragun_France(fr)ATTACK7"),
         1 &&
         (RegisterUpgrade(&DAT_100163b0,"Dragun_France(fr)SHIELD"),
         1)))) &&
       ((RegisterUpgrade(&DAT_100163a8,"Dragun_France(fr)SHIELD3"),
        1 &&
        (((RegisterUpgrade(&DAT_100163f8,"Dragun_France(fr)SHIELD4"),
          1 &&
          (RegisterUpgrade(&DAT_100163f0,"Dragun_France(fr)SHIELD5"),
          1)) &&
         ((RegisterUpgrade(&DAT_100163e8,"Dragun_France(fr)SHIELD6"),
          1 &&
          ((((RegisterUpgrade(&DAT_100163e0,"Dragun_France(fr)SHIELD7"),
             1 &&
             (RegisterUpgrade(&DAT_100136d8,"Kirasir(fr)ATTACK"),
             1)) &&
            (RegisterUpgrade(&DAT_100136d0,"Kirasir(fr)ATTACK3"),
            1)) &&
           ((RegisterUpgrade(&DAT_100136c8,"Kirasir(fr)ATTACK4"),
            1 &&
            (RegisterUpgrade(&DAT_100136c0,"Kirasir(fr)ATTACK5"),
            1)))))))))))) &&
      ((RegisterUpgrade(&DAT_10013698,"Kirasir(fr)ATTACK6"), 1 &&
       ((RegisterUpgrade(&DAT_10013690,"Kirasir(fr)ATTACK7"), 1
        && (RegisterUpgrade(&DAT_10013768,"Kirasir(fr)SHIELD"), 1
           )))))) &&
     ((RegisterUpgrade(&DAT_10013760,"Kirasir(fr)SHIELD3"), 1 &&
      (((RegisterUpgrade(&DAT_10013758,"Kirasir(fr)SHIELD4"), 1
        && (RegisterUpgrade(&DAT_10013740,"Kirasir(fr)SHIELD5"),
           1)) &&
       (RegisterUpgrade(&DAT_10013738,"Kirasir(fr)SHIELD6"), 1)))
      ))) {
    RegisterUpgrade(&DAT_10013730,"Kirasir(fr)SHIELD7");
  }
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10013700,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10013708,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10013710,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10013718,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_100136e0,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_100136f0,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_100137a8,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_100137b0,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_100137b8,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10013790,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10013798,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_100137a0,puVar5);
  if (((((1) &&
        (RegisterUpgrade(&DAT_100161f8,"Pushka(fr)BUILD"), 1)) &&
       ((RegisterUpgrade(&DAT_100161f0,"Pushka(fr)BUILD3"), 1 &&
        ((RegisterUpgrade(&DAT_100161c0,"Pushka(fr)BUILD4"), 1 &&
         (RegisterUpgrade(&DAT_100161b8,"Pushka(fr)BUILD5"), 1)))
        ))) && ((RegisterUpgrade(&DAT_100161c8,"Pushka(fr)BUILD6"),
                1 &&
                ((((RegisterUpgrade(&DAT_100160b8,"Mortira(fr)BUILD"),
                   1 &&
                   (RegisterUpgrade(&DAT_100160c0,"Mortira(fr)BUILD3"),
                   1)) &&
                  (RegisterUpgrade(&DAT_100160c8,"Mortira(fr)BUILD4"),
                  1)) &&
                 ((RegisterUpgrade(&DAT_100160d0,"Mortira(fr)BUILD5"),
                  1 &&
                  (RegisterUpgrade(&DAT_100161d8,"KUZ03FR"), 1)))
                 ))))) &&
     (((((((RegisterUpgrade(&DAT_10016040,"MAINFR"), 1 &&
           ((RegisterUpgrade(&DAT_100161d8,"KUZ03FR"), 1 &&
            (RegisterUpgrade(&DAT_10016040,"MAINFR"), 1)))) &&
          (RegisterUpgrade(&DAT_10013978,"AKA06FR"), 1)) &&
         (((((RegisterUpgrade(&DAT_10016098,"AKA01FR"), 1 &&
             (RegisterUpgrade(&DAT_10016050,"AKA02FR"), 1)) &&
            (RegisterUpgrade(&DAT_10016058,"AKA03FR"), 1)) &&
           ((RegisterUpgrade(&DAT_10016060,"AKA04FR"), 1 &&
            (RegisterUpgrade(&DAT_10016290,"AKA08FR"), 1)))) &&
          ((RegisterUpgrade(&DAT_10016130,"AKA23FR"), 1 &&
           ((RegisterUpgrade(&DAT_10016170,"AKA24FR"), 1 &&
            (RegisterUpgrade(&DAT_10016228,"AKA31FR"), 1))))))))
        && (RegisterUpgrade(&DAT_10016230,"AKA33FR"), 1)) &&
       ((((RegisterUpgrade(&DAT_10016188,"AKA12FR"), 1 &&
          (RegisterUpgrade(&DAT_10016198,"AKA13FR"), 1)) &&
         (RegisterUpgrade(&DAT_100161a0,"AKA14FR"), 1)) &&
        ((((((RegisterUpgrade(&DAT_10016190,"AKA15FR"), 1 &&
             (RegisterUpgrade(&DAT_10013970,"AKA11FR"), 1)) &&
            ((RegisterUpgrade(&DAT_10013900,"AKA10FR"), 1 &&
             ((RegisterUpgrade(&DAT_100137c0,"AKA30FR"), 1 &&
              (RegisterUpgrade(&DAT_10016110,"AKA07FR"), 1))))))
           && (RegisterUpgrade(&DAT_10013960,"AKA20FR"), 1)) &&
          (((RegisterUpgrade(&DAT_10016218,"KUZ02FR"), 1 &&
            (RegisterUpgrade(&DAT_10016220,"AKA09FR"), 1)) &&
           (RegisterUpgrade(&DAT_10013890,"AKA05FR"), 1)))) &&
         ((RegisterUpgrade(&DAT_100138a0,"AKA28FR"), 1 &&
          (RegisterUpgrade(&DAT_10013788,"AKA29FR"), 1)))))))) &&
      (((RegisterUpgrade(&DAT_10013648,"KUZ05FR"), 1 &&
        ((RegisterUpgrade(&DAT_10013728,"KUZ06FR"), 1 &&
         (RegisterUpgrade(&DAT_10013650,"AKA34FR"), 1)))) &&
       ((RegisterUpgrade(&DAT_10016308,"Bashnia(fr)PAUSE"), 1 &&
        ((((RegisterUpgrade(&DAT_100162f0,"Bashnia(fr)PAUSE3"), 1
           && (RegisterUpgrade(&DAT_10016300,"Bashnia(fr)PAUSE4"),
              1)) &&
          (RegisterUpgrade(&DAT_100162e0,"Bashnia(fr)PAUSE5"), 1)
          ) && (RegisterUpgrade(&DAT_100162e8,"Bashnia(fr)PAUSE6"),
               1)))))))))) {
    RegisterUpgrade(&DAT_100162d8,"Bashnia(fr)PAUSE7");
  }
  SetPDistribution(9,4,4);
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(fr)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(fr)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(fr)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(fr)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(fr)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(fr)INSIDE7",0x32);
  AssignPeasant("Krestian_Sved(fr)");
  AssignMine("shahta(fr)");
  AssignHouse("Dom_France(fr)");
  AssignWall("WALL_EV(fr)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x5a);
  SET_MINE_UPGRADE2_RADIUS(0x5a);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}





__declspec(dllexport) void ProcessAI(void)

{
  DAT_100162d4 = GetAINation();
  FUN_10006d80();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
