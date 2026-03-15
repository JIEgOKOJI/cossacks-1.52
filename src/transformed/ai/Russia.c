/* Auto-generated from Russia.c */
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
long long DAT_10010630 = 0;
long long DAT_100135d8 = 0;
int DAT_100135e0 = 0;
long long DAT_100135e8 = 0;
long long DAT_100135f0 = 0;
long long DAT_10013600 = 0;
long long DAT_10013608 = 0;
long long DAT_10013610 = 0;
long long DAT_10013618 = 0;
long long DAT_10013620 = 0;
long long DAT_10013628 = 0;
long long DAT_10013630 = 0;
long long DAT_10013638 = 0;
long long DAT_10013640 = 0;
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
long long DAT_100136b8 = 0;
long long DAT_100136c0 = 0;
long long DAT_100136c8 = 0;
long long DAT_100136d0 = 0;
long long DAT_100136d8 = 0;
long long DAT_100136e0 = 0;
int DAT_100136e8 = 0;
long long DAT_100136f8 = 0;
long long DAT_10013700 = 0;
long long DAT_10013708 = 0;
long long DAT_10013728 = 0;
long long DAT_10013730 = 0;
long long DAT_10013738 = 0;
long long DAT_10013740 = 0;
long long DAT_10013748 = 0;
long long DAT_10013750 = 0;
long long DAT_10013758 = 0;
long long DAT_10013760 = 0;
long long DAT_10013768 = 0;
long long DAT_10013830 = 0;
long long DAT_10013838 = 0;
long long DAT_10013840 = 0;
long long DAT_10013848 = 0;
long long DAT_10013850 = 0;
int DAT_10013858 = 0;
long long DAT_10013860 = 0;
long long DAT_10013868 = 0;
long long DAT_10013870 = 0;
long long DAT_10013878 = 0;
long long DAT_10013880 = 0;
long long DAT_10013888 = 0;
long long DAT_10013898 = 0;
long long DAT_100138a0 = 0;
long long DAT_100138a8 = 0;
long long DAT_100138b0 = 0;
long long DAT_100138b8 = 0;
long long DAT_100138c0 = 0;
long long DAT_100138c8 = 0;
long long DAT_100138d0 = 0;
long long DAT_100138d8 = 0;
long long DAT_100138e0 = 0;
long long DAT_100138e8 = 0;
long long DAT_100138f8 = 0;
long long DAT_10013900 = 0;
long long DAT_10013910 = 0;
long long DAT_10013918 = 0;
char DAT_10013920 = 0;
char DAT_10013ab0 = 0;
char DAT_10013ab4 = 0;
char DAT_10013c44 = 0;
char DAT_10013c48 = 0;
long long DAT_10015ee0 = 0;
int DAT_10015f18 = 0;
long long DAT_10015f28 = 0;
long long DAT_10015f30 = 0;
long long DAT_10015f38 = 0;
long long DAT_10015f40 = 0;
long long DAT_10015f48 = 0;
long long DAT_10015f50 = 0;
char DAT_10015f58 = 0;
long long DAT_10015f78 = 0;
long long DAT_10015f88 = 0;
long long DAT_10015f90 = 0;
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
long long DAT_10016038 = 0;
long long DAT_10016040 = 0;
long long DAT_10016048 = 0;
long long DAT_10016050 = 0;
long long DAT_10016058 = 0;
long long DAT_10016060 = 0;
long long DAT_10016068 = 0;
long long DAT_10016070 = 0;
long long DAT_10016090 = 0;
long long DAT_10016098 = 0;
long long DAT_100160a0 = 0;
int DAT_100160a8 = 0;
long long DAT_100160b0 = 0;
long long DAT_100160b8 = 0;
long long DAT_100160c0 = 0;
long long DAT_100160c8 = 0;
long long DAT_100160d0 = 0;
long long DAT_100160d8 = 0;
long long DAT_100160e0 = 0;
long long DAT_100160e8 = 0;
long long DAT_100160f0 = 0;
long long DAT_10016110 = 0;
long long DAT_10016118 = 0;
long long DAT_10016120 = 0;
long long DAT_10016128 = 0;
long long DAT_10016130 = 0;
long long DAT_10016138 = 0;
long long DAT_10016140 = 0;
int DAT_10016148 = 0;
int DAT_10016149 = 0;
int DAT_1001614a = 0;
int DAT_1001614b = 0;
int DAT_1001614c = 0;
int DAT_1001614d = 0;
long long DAT_10016150 = 0;
long long DAT_10016158 = 0;
long long DAT_10016160 = 0;
long long DAT_10016168 = 0;
int DAT_10016170 = 0;
long long DAT_10016178 = 0;
int DAT_10016180 = 0;
int DAT_10016184 = 0;
long long DAT_10016190 = 0;
long long DAT_10016198 = 0;
long long DAT_100161a8 = 0;
long long DAT_100161b0 = 0;
long long DAT_100161b8 = 0;
long long DAT_100161c0 = 0;
long long DAT_100161c8 = 0;
long long DAT_100161d0 = 0;
int DAT_1001620c = 0;
long long DAT_10016210 = 0;
long long DAT_10016218 = 0;
long long DAT_10016220 = 0;
long long DAT_10016230 = 0;
long long DAT_10016238 = 0;
long long DAT_10016240 = 0;
long long DAT_10016248 = 0;
int DAT_10016250 = 0;
long long DAT_10016258 = 0;
long long DAT_10016260 = 0;
long long DAT_10016268 = 0;
int DAT_10016274 = 0;
long long DAT_10016278 = 0;
long long DAT_10016280 = 0;
long long DAT_10016288 = 0;
long long DAT_10016290 = 0;
long long DAT_10016298 = 0;
long long DAT_100162a0 = 0;
long long DAT_100162a8 = 0;
long long DAT_100162c8 = 0;
long long DAT_100162d0 = 0;
long long DAT_100162d8 = 0;
int DAT_100162e0 = 0;
int DAT_100162e1 = 0;
int DAT_100162e2 = 0;
int DAT_100162e3 = 0;
int DAT_100162e4 = 0;
int DAT_100162e5 = 0;
long long DAT_100162e8 = 0;
long long DAT_100162f0 = 0;
int DAT_100162f8 = 0;
long long DAT_10016300 = 0;
long long DAT_10016308 = 0;
long long DAT_10016310 = 0;
long long DAT_10016318 = 0;
long long DAT_10016320 = 0;
int DAT_10016328 = 0;
long long DAT_10016330 = 0;
long long DAT_10016338 = 0;
int DAT_10016340 = 0;
long long DAT_10016348 = 0;
long long DAT_10016350 = 0;
long long DAT_10016358 = 0;
long long DAT_10016370 = 0;
long long DAT_10016380 = 0;
long long DAT_10016388 = 0;
long long DAT_10016390 = 0;
long long DAT_10016398 = 0;
int DAT_10016554 = 0;
long long DAT_10016558 = 0;
int DAT_100165c4 = 0;
int DAT_100165c8 = 0;
char DAT_100165cc = 0;
int DAT_1001660c = 0;

/* Forward declarations */
void ProcessLandAI(void);
void ProcessMiddleSeaAI(void);
static int * FUN_10002e40(void);
static int FUN_10002e70(int param_1,int param_2,int param_3);
static int FUN_10002ea0(int param_1,int param_2,int param_3);
static void FUN_10002f50(void);
static void FUN_100030d0(void);
static void FUN_10003140(void);
static void FUN_100031e0(void);
static void FUN_10003230(void);
static void FUN_10003270(void);
static void FUN_10004140(void);
static void FUN_10004220(void);
static void FUN_10004270(void);
static void FUN_10005130(void);
static int FUN_10005180(int *param_1);
static void FUN_100051c0(void);
static void FUN_100059a0(void);
static void FUN_10005ae0(void);
static void FUN_10005d00(int param_1);
static void FUN_10005ee0(int param_1);
static void FUN_10006200(int param_1);
static void FUN_10006540(void);
static void FUN_100065f0(void);
static void FUN_10006640(void);
static void FUN_10006730(void);
static void FUN_10006860(void);
static void FUN_10006a70(void);
static void FUN_10006af0(void);
static void FUN_10006b50(void);
static void FUN_10006c50(void);


int * FUN_10002e40(void)

{
  sprintf(&DAT_10013768,&DAT_10010630);
  return &DAT_10013768;
}





int  FUN_10002e70(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetTorgResult(param_1,param_2,1000);
  return (param_3 * 1000) / iVar1;
}





int  FUN_10002ea0(int param_1,int param_2,int param_3)

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
  iVar2 = FUN_10002e70(param_3,param_1,param_2 - iVar1);
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
    iVar1 = FUN_10002e70(param_3,param_1,param_2 - iVar1);
    uVar5 = AI_Torg(param_3,param_1,iVar1);
    return (((int)((unsigned int)uVar5 >> 8) << 8) | 1);
  }
  return uVar3 & 0xffffff00;
}






void FUN_10002f50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_10016274 = GetAINation();
  iVar1 = GetUnits(&DAT_10016150);
  iVar2 = GetExtraction(1);
  iVar3 = GetExtraction(4);
  iVar4 = GetExtraction(5);
  DAT_10016170 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_10016274 * 0x4b8;
  DAT_100165c4 = *(int *)(&DAT_10013ab0 + iVar1);
  DAT_10016180 = &DAT_10013920 + iVar1;
  DAT_10016184 = &DAT_10013ab4 + iVar1;
  DAT_100165c8 = *(int *)(&DAT_10013c44 + iVar1);
  DAT_1001620c = &DAT_10013c48 + iVar1;
  DAT_10016250 = GetMoney(3);
  DAT_100135e0 = GetMoney(0);
  DAT_10016340 = GetMoney(2);
  DAT_100136e8 = GetMoney(4);
  DAT_100160a8 = GetMoney(5);
  DAT_100162f8 = GetMoney(1);
  iVar1 = GetStartRes();
  if (iVar1 == 0) {
    DAT_1000f248 = 4;
  }
  SetMineBalanse(0x13,&DAT_1000f114);
  SetMinesUpgradeRules(&DAT_10016558);
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  DAT_10016148 = 1;
  DAT_1001614a = 1;
  DAT_1001614c = 1;
  DAT_1001614d = 1;
  DAT_100162e3 = 1;
  DAT_100162e1 = 1;
  DAT_100162e4 = 1;
  DAT_100162e5 = 1;
  DAT_1001614b = 0;
  DAT_10016149 = 0;
  DAT_100162e0 = 0;
  DAT_100162e2 = 0;
  DAT_1001660c = 0;
  return;
}





void FUN_100030d0(void)

{
  int iVar1;
  
  if (DAT_10015f18 < 2) {
    iVar1 = GetUnits(&DAT_10013648);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_100136c0,iVar1,0x32,0x32);
      TryUnit(&DAT_10013600,iVar1,0x14,0x32);
    }
  }
  return;
}





void FUN_10003140(void)

{
  TryUpgrade(&DAT_10016310,0x3c,100);
  TryUpgrade(&DAT_10016318,0x3c,100);
  TryUpgrade(&DAT_10016300,0x3c,100);
  TryUpgrade(&DAT_10016308,0x14,100);
  TryUpgrade(&DAT_10016320,10,100);
  TryUpgrade(&DAT_10016258,0x3c,100);
  TryUpgrade(&DAT_10016240,0x3c,100);
  TryUpgrade(&DAT_10016248,0x3c,100);
  TryUpgrade(&DAT_10016260,0x14,100);
  TryUpgrade(&DAT_10016268,10,100);
  return;
}





void FUN_100031e0(void)

{
  TryUpgrade(&DAT_100138d0,0x5a,100);
  TryUpgrade(&DAT_100138d8,0x5a,100);
  TryUpgrade(&DAT_100138c8,0x5a,100);
  TryUpgrade(&DAT_10015f38,0x5a,100);
  TryUpgrade(&DAT_10015f28,0x5a,100);
  return;
}





void FUN_10003230(void)

{
  TryUpgrade(&DAT_10016058,0x1e,0x32);
  TryUpgrade(&DAT_10016060,0x1e,0x32);
  TryUpgrade(&DAT_10016068,0x1e,0x32);
  TryUpgrade(&DAT_10016070,0x1e,0x32);
  return;
}





void FUN_10003270(void)

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
  cVar1 = UpgIsDone(&DAT_10015fe0);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = GetReadyUnits(&DAT_10016298);
  iVar6 = GetUnits(&DAT_10015f78);
  iVar7 = GetReadyUnits(&DAT_10015f78);
  iVar8 = GetUnits(&DAT_10015fa8);
  iVar9 = GetReadyUnits(&DAT_10015fa8);
  iVar10 = GetUnits(&DAT_10016098);
  iVar11 = GetReadyUnits(&DAT_10016098);
  iVar12 = GetUnits(&DAT_10016298);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  TryUpgrade(&DAT_10015fe0,0x5f,100);
  bVar13 = true;
  iVar5 = GetMoney(3);
  if ((((55000 < iVar5) && (iVar5 = GetMoney(1), 10000 < iVar5)) &&
      (iVar5 = GetMoney(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = GetUnits(&DAT_10016150);
  iVar7 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_10016178);
  GetUnits(&DAT_10013648);
  iVar8 = GetUnits(&DAT_100160a0);
  iVar11 = GetUnits(&DAT_10016370);
  iVar9 = GetUnits(&DAT_100162f0);
  iVar10 = GetUnits(&DAT_10013648);
  iVar11 = iVar10 + iVar9 + iVar11;
  TryUpgrade(&DAT_100160d0,99,0x50);
  TryUpgrade(&DAT_10016110,0x62,0x50);
  iVar9 = GetReadyUnits(&DAT_10013898);
  iVar10 = GetUnits(&DAT_10013898);
  if (iVar5 != 0) {
    TryUnit(&DAT_10015f98,1,100,100);
    iVar12 = GetUnits(&DAT_10015f98);
    if (iVar12 == 0) {
      return;
    }
    TryUpgrade(&DAT_10016338,100,100);
    cVar2 = FieldExist();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        TryUnit(&DAT_10016150,100,100,100);
        TryUnit(&DAT_10013648,100,100,100);
      }
      SetPDistribution(0,1,1);
    }
    else {
      cVar2 = UpgIsDone(&DAT_10013760);
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
        TryUnit(&DAT_10016150,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          TryUnit(&DAT_10016150,1000,0xe8,100);
        }
        if (300 < iVar7) {
          TryUnit(&DAT_10013648,uVar15,100,0x1e);
        }
      }
      cVar2 = UpgIsDone(&DAT_10016230);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = GetUnits(&DAT_10016298), 0 < iVar7)
         ) {
        FUN_10003140();
      }
    }
    if (iVar3 < 5) {
      iVar3 = 5;
    }
    else {
      iVar3 = iVar3 + 2;
    }
    TryUnit(&DAT_10015f50,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      TryUnit(&DAT_100138a8,0xc,0x46);
    }
    else {
      TryUnit(&DAT_100138a8,iVar4 + 6,0x1e,0x32);
      TryUnit(&DAT_100138a8,iVar4 + 9,0xf,0x32);
      TryUnit(&DAT_100138a8,iVar4 + 10,10,0x32);
    }
    iVar4 = GetUnitsByUsage(0,0x1f);
    if (iVar4 != 0) {
      TryUpgrade(&DAT_100162a8,0x32,0x32);
      TryUpgrade(&DAT_10016290,0x32,0x32);
      TryUpgrade(&DAT_100162a0,0x32,0x32);
      TryUpgrade(&DAT_10016280,0x32,0x32);
      TryUpgrade(&DAT_10016288,0x32,0x32);
      TryUpgrade(&DAT_10016278,0x32,0x32);
    }
    TryUnit(&DAT_10013860,3,0x5a,10);
    TryUnit(&DAT_10015f78,1,100,100);
    TryUnit(&DAT_10015f78,2,0x5f,5);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015f78,3,0x5f,5);
    }
    TryUnit(&DAT_100161a8,1,100,100);
    TryUnit(&DAT_10016210,1,100,100);
    TryUnit(&DAT_10015f90,1,0x32,0x32);
    TryUnit(&DAT_100161a8,2,10,5);
    TryUnit(&DAT_10016098,1,99,0x5a);
    TryUpgrade(&DAT_10013620,0x50,100);
    iVar4 = GetUnits(&DAT_10015ee0);
    if (0 < iVar4) {
      TryUnit(&DAT_10013838,1,0x5a,0x19);
      TryUnit(&DAT_100160b8,1,5,3);
    }
    TryUnit(&DAT_10015ee0,1,0x5a,0x5a);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015fa8,1,99,10);
    }
    TryUnit(&DAT_100135d8,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      TryUnit(&DAT_10015f98,2,0x1e,0x1e);
    }
    TryUnit(&DAT_10016218,1,0x5a,0x14);
    TryUnit(&DAT_10016218,2,0x32,5);
    TryUpgrade(&DAT_10016038,0x5a,99);
    TryUpgrade(&DAT_10015ff0,0x5a,99);
    TryUpgrade(&DAT_10015ff8,0x5a,99);
    TryUpgrade(&DAT_10016000,0x5a,99);
    TryUpgrade(&DAT_10016230,0x5f,100);
    TryUpgrade(&DAT_10016178,99,100);
    TryUnit(&DAT_10016298,1,0x50,0x14);
    TryUnit(&DAT_10016298,2,0x32,5);
    TryUnit(&DAT_10016298,3,0x1e,5);
    TryUnit(&DAT_10016298,5,0x14,5);
    TryUpgrade(&DAT_10013918,0x5f,100);
    iVar4 = GetMaxPeasantsInMines();
    cVar2 = UpgIsRun(&DAT_10016230);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013918,0x5a,0x5a);
      TryUpgrade(&DAT_10013830,99,100);
    }
    cVar2 = UpgIsRun(&DAT_10013918);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013900,0x5a,0x5a);
      TryUpgrade(&DAT_10013840,0x46,10);
      FUN_10003230();
    }
    cVar2 = UpgIsDone(&DAT_10016070);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013628,10,10,0x5a);
      TryUnit(&DAT_10013628,0xf,3,10);
    }
    SetUpgradeLock(1,0);
    iVar7 = GetMoney(0);
    if ((((14000 < iVar7) && (cVar2 = UpgIsRun(&DAT_10013760), cVar2 != '\0')) &&
        (iVar7 = GetMoney(1), iVar7 < 0x1d4c)) &&
       (cVar2 = UpgIsRun(&DAT_10013918), cVar2 == '\0')) {
      SetUpgradeLock(1,1);
    }
    cVar2 = UpgIsRun(&DAT_10013918);
    if (((cVar2 == '\0') || (cVar2 = UpgIsRun(&DAT_100160b0), cVar2 == '\0')) ||
       (cVar2 = UpgIsDone(&DAT_10016178), cVar2 == '\0')) {
LAB_10003bac:
      if (iVar4 == 0x5f) {
        TryUpgrade(&DAT_10013728,0x46,10);
        TryUnit(&DAT_10016358,1,0x32,0x1e);
        TryUnit(&DAT_10016358,2,0x1e,0x1e);
        TryUnit(&DAT_10016358,3,0x14,0x1e);
        TryUnit(&DAT_10016358,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = GetMoney(3), 50000 < iVar7 && (iVar7 = GetMoney(1), iVar7 < 0x2008)
          ))) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsRun(&DAT_10015fe0);
      if (((cVar2 == '\0') && (iVar7 = GetMoney(3), 60000 < iVar7)) &&
         (iVar7 = GetMoney(1), iVar7 < 11000)) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsDone(&DAT_10015fe0);
      if (cVar2 == '\0') goto LAB_10003bac;
      if (iVar4 == 0x1c) {
        iVar4 = GetMoney(3);
        if ((50000 < iVar4) && (iVar4 = GetMoney(4), 0x1c84 < iVar4)) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -20000 < 0;
LAB_10003b9c:
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
          goto LAB_10003b9c;
        }
      }
      else {
        if (iVar4 != 0x37) goto LAB_10003bac;
        iVar4 = GetMoney(3);
        if (80000 < iVar4) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -26000 < 0;
          goto LAB_10003b9c;
        }
      }
    }
    if (((0x50 < iVar5) && (iVar10 == iVar9)) &&
       (TryUnit(&DAT_10013898,1,0x50,10), 0x5f < iVar5)) {
      TryUnit(&DAT_10013898,2,0x50,10);
      TryUnit(&DAT_10013898,3,0x32,10);
      TryUnit(&DAT_10013898,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016230), cVar2 != '\0')) {
      TryUnit(&DAT_10016120,0x4b,1,0x1e);
      UpgIsDone(&DAT_10016158);
      UpgIsDone(&DAT_10016070);
    }
    GetUnits(&DAT_100135d8);
    TryUnit(&DAT_100161b0,3,0x5a,0x5a);
    cVar2 = UpgIsDone(&DAT_100160b0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_100161b0,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016230), cVar2 != '\0')) {
      if (iVar6 == 0) {
        TryUnit(&DAT_10016098,2,0x5a,0x14);
        TryUnit(&DAT_10016098,3,0x5a,0x14);
        TryUnit(&DAT_10016098,4,0x5a,0x14);
      }
      iVar4 = GetUnits(&DAT_100160a0);
      if (0x14 < iVar4) {
        TryUpgrade(&DAT_100161c8,0x5a,100);
        TryUpgrade(&DAT_100161d0,0x50,0x46);
      }
      TryUpgrade(&DAT_100160b0,0x3c,0x5a);
      cVar2 = UpgIsRun(&DAT_100138c8);
      if (cVar2 != '\0') {
        TryUpgrade(&DAT_10016128,0x5a,0x5a);
        TryUpgrade(&DAT_10016138,0x5a,0x5a);
        TryUpgrade(&DAT_10016140,0x46,0x5a);
        TryUpgrade(&DAT_10016130,0x46,0x5a);
      }
    }
    TryUpgrade(&DAT_10013760,99,100);
    TryUpgrade(&DAT_100138a0,0x3c,0x5a);
    iVar4 = GetUnits(&DAT_10016210);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        TryUnit(&DAT_100160a0,500,10,10);
      }
      FUN_100031e0();
    }
  }
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_100135f0,0x5f,0x5a);
    TryUpgrade(&DAT_100136c8,0x5f,0x5a);
    TryUpgrade(&DAT_100135e8,0x5f,0x5a);
    TryUnit(&DAT_10016210,2,0x5f,0x5a);
  }
  cVar1 = UpgIsRun(&DAT_10013760);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_100161b8,0x5f,0x5a);
    TryUpgrade(&DAT_100161c0,0x5f,0x5a);
  }
  iVar4 = GetReadyUnits(&DAT_10013838);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = GetUnits(&DAT_10015ee0);
  if ((((iVar4 != 0) && (cVar1 = UpgIsRun(&DAT_10016230), cVar1 == '\0')) &&
      (iVar4 = GetMoney(1), 800 < iVar4)) &&
     ((iVar4 = GetMoney(3), iVar4 < 6000 && (iVar4 = GetMoney(4), 3000 < iVar4)))) {
    AI_Torg(4,3,3000);
  }
  iVar4 = GetMoney(3);
  if ((iVar4 < 1000) && (iVar4 = GetMoney(2), 5000 < iVar4)) {
    AI_Torg(2,3,4000);
  }
  cVar1 = UpgIsDone(&DAT_100161b8);
  if ((cVar1 == '\0') || (cVar1 = UpgIsDone(&DAT_100161c0), cVar1 == '\0')) {
    iVar4 = GetMoney(2);
    if (iVar4 < 0x1adb1) goto LAB_100040ca;
    uVar17 = 90000;
    uVar15 = 1;
  }
  else {
    iVar4 = GetMoney(2);
    if (110000 < iVar4) {
      AI_Torg(2,1,100000);
    }
    iVar4 = GetMoney(0);
    if (iVar4 == 0) goto LAB_100040ca;
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
      goto LAB_100040ca;
    }
    iVar4 = GetMoney(5);
    if ((iVar4 < 5000) && (iVar4 = GetMoney(0), iVar4 != 0)) {
      AI_Torg(2,5,50000);
    }
    iVar4 = GetMoney(5);
    if ((4999 < iVar4) || (iVar4 = GetMoney(0), iVar4 == 0)) goto LAB_100040ca;
    uVar17 = 50000;
    uVar15 = 5;
  }
  AI_Torg(2,uVar15,uVar17);
LAB_100040ca:
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





void FUN_10004140(void)

{
  int iVar1;
  
  iVar1 = GetMoney(3);
  if (0x672 < iVar1) {
    TryUpgrade(&DAT_10016310,0x28,100);
    TryUpgrade(&DAT_10016318,0x5a,100);
    TryUpgrade(&DAT_10016300,0x5a,100);
    TryUpgrade(&DAT_10016308,0x5a,100);
    TryUpgrade(&DAT_10016320,0x5a,100);
    TryUpgrade(&DAT_10016258,0x5a,100);
    TryUpgrade(&DAT_10016240,0x5a,100);
    TryUpgrade(&DAT_10016248,0x5a,100);
    TryUpgrade(&DAT_10016260,0x5a,100);
    TryUpgrade(&DAT_10016268,0x5a,100);
    TryUpgrade(&DAT_10016220,0x32,100);
    TryUpgrade(&DAT_10015f88,0x32,100);
  }
  return;
}





void FUN_10004220(void)

{
  TryUpgrade(&DAT_100138d0,0x5a,100);
  TryUpgrade(&DAT_100138d8,0x5a,100);
  TryUpgrade(&DAT_100138c8,0x5a,100);
  TryUpgrade(&DAT_10015f38,10,100);
  TryUpgrade(&DAT_10015f28,10,100);
  return;
}





void FUN_10004270(void)

{
  TryUpgrade(&DAT_10016198,0x1e,0x32);
  TryUpgrade(&DAT_10016190,0x1e,0x32);
  TryUpgrade(&DAT_10016160,0x1e,0x32);
  TryUpgrade(&DAT_10016158,0x1e,0x32);
  TryUpgrade(&DAT_10016058,0x1e,0x32);
  TryUpgrade(&DAT_10016060,0x1e,0x32);
  TryUpgrade(&DAT_10016068,0x1e,0x32);
  TryUpgrade(&DAT_10016070,0x1e,0x32);
  return;
}





void FUN_10005130(void)

{
  TryUnit(&DAT_10015f98,1,100,100);
  TryUnit(&DAT_10015f78,1,100,100);
  TryUnit(&DAT_10015f90,1,100,100);
  TryUnit(&DAT_10013838,1,100,100);
  return;
}





int  FUN_10005180(int *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_10013648) {
    cVar1 = UpgIsDone(&DAT_10016300);
    if (cVar1 != '\0') {
      cVar1 = UpgIsDone(&DAT_10016248);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}





void FUN_100051c0(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetUnits(&DAT_10016238);
  if (iVar2 == 0) {
    iVar2 = GetUnits(&DAT_10013888);
    if (iVar2 != 0) goto LAB_100051e4;
  }
  else {
LAB_100051e4:
    TryUpgrade(&DAT_10013910,100,100);
    TryUpgrade(&DAT_100161b8,100,100);
    TryUpgrade(&DAT_100161c0,100,100);
  }
  iVar2 = GetUnits(&DAT_10016370);
  if (iVar2 < 0x15) {
    iVar2 = GetUnits(&DAT_100162f0);
    if (iVar2 < 0x15) {
      iVar2 = GetUnits(&DAT_10013648);
      if (iVar2 < 0x8d) goto LAB_100052ad;
    }
  }
  TryUpgrade(&DAT_100135e8,0x5f,100);
  TryUpgrade(&DAT_100135f0,0x5f,100);
  iVar2 = GetUnits(&DAT_10016370);
  if (iVar2 < 0x8d) {
    iVar2 = GetUnits(&DAT_100162f0);
    if (0x3c < iVar2) goto LAB_1000529b;
    uVar3 = 0xf;
  }
  else {
LAB_1000529b:
    uVar3 = 0x5f;
  }
  TryUpgrade(&DAT_100136c8,uVar3,100);
LAB_100052ad:
  iVar2 = GetUnits(&DAT_10013648);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_10016310,0x50,100);
    TryUpgrade(&DAT_10016318,0x55,100);
    TryUpgrade(&DAT_10016300,0x5a,100);
    TryUpgrade(&DAT_10016258,0x50,100);
    TryUpgrade(&DAT_10016240,0x55,100);
    TryUpgrade(&DAT_10016248,0x5a,100);
    iVar2 = GetUnits(&DAT_10013648);
    if (0x78 < iVar2) {
      TryUpgrade(&DAT_10016308,0x5a,100);
      TryUpgrade(&DAT_10016320,0x5a,100);
      TryUpgrade(&DAT_10016260,0x5a,100);
      TryUpgrade(&DAT_10016268,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_100160a0);
  if (0x1e < iVar2) {
    TryUpgrade(&DAT_100138d0,0x5a,100);
    TryUpgrade(&DAT_100138d8,0x5a,100);
    TryUpgrade(&DAT_100138c8,0x5a,100);
    TryUpgrade(&DAT_10015f38,0x1e,100);
    TryUpgrade(&DAT_10015f28,0x1e,100);
    TryUpgrade(&DAT_10015f30,0x1e,100);
    TryUpgrade(&DAT_100161c8,0x5a,100);
    iVar2 = GetUnits(&DAT_100160a0);
    if (100 < iVar2) {
      TryUpgrade(&DAT_100161d0,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_100136c0);
  if (4 < iVar2) {
    TryUpgrade(&DAT_10016220,0x5a,100);
    TryUpgrade(&DAT_10015f88,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10016370);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_100160f0,0x50,100);
    TryUpgrade(&DAT_100160e8,0x55,100);
    TryUpgrade(&DAT_100160e0,0x5a,100);
    TryUpgrade(&DAT_10015fd8,0x50,100);
    TryUpgrade(&DAT_10015fd0,0x55,100);
    TryUpgrade(&DAT_10015fc8,0x5a,100);
    iVar2 = GetUnits(&DAT_10016370);
    if (0x32 < iVar2) {
      TryUpgrade(&DAT_100160d8,0x5f,100);
      TryUpgrade(&DAT_100160c8,0x5f,100);
      TryUpgrade(&DAT_10016118,0x5f,100);
      TryUpgrade(&DAT_10015fc0,0x5f,100);
      TryUpgrade(&DAT_10015fb8,0x5f,100);
      TryUpgrade(&DAT_10015fb0,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_100162f0);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013708,0x5a,100);
    TryUpgrade(&DAT_10013700,0x5a,100);
    TryUpgrade(&DAT_100136f8,0x5a,100);
    TryUpgrade(&DAT_10013678,0x5a,100);
    TryUpgrade(&DAT_10013670,0x5a,100);
    TryUpgrade(&DAT_10013668,0x5f,100);
    TryUpgrade(&DAT_10013660,0x5f,100);
    TryUpgrade(&DAT_10013638,0x5f,100);
    TryUpgrade(&DAT_10013630,0x5f,100);
    cVar1 = UpgIsRun(&DAT_10013630);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_100136e0,0x5f,100);
      TryUpgrade(&DAT_100136d8,0x5f,100);
      TryUpgrade(&DAT_100136d0,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013650);
  if (0x14 < iVar2) {
    iVar2 = GetUnits(&DAT_10013640);
    if (iVar2 < 0x14) {
      TryUpgrade(&DAT_100138c0,0x50,100);
      TryUpgrade(&DAT_100138b8,0x55,100);
      TryUpgrade(&DAT_100138b0,0x5a,100);
      TryUpgrade(&DAT_10013878,0x5f,100);
      TryUpgrade(&DAT_10013870,0x5f,100);
      TryUpgrade(&DAT_10013868,0x5f,100);
      TryUpgrade(&DAT_100161c8,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013640);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013618,0x50,100);
    TryUpgrade(&DAT_10013610,0x55,100);
    TryUpgrade(&DAT_10013608,0x5a,100);
    TryUpgrade(&DAT_100162d8,0x5f,100);
    TryUpgrade(&DAT_100162d0,0x5f,100);
    TryUpgrade(&DAT_100162c8,0x5f,100);
    TryUpgrade(&DAT_10016350,10,100);
    TryUpgrade(&DAT_10016348,0xf,100);
    TryUpgrade(&DAT_10016398,0x14,100);
    TryUpgrade(&DAT_10016390,0x19,100);
    TryUpgrade(&DAT_10016388,0x19,100);
    TryUpgrade(&DAT_10016380,0x19,100);
    TryUpgrade(&DAT_100161c8,0x5a,100);
    TryUpgrade(&DAT_100161d0,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015f40);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_100136a0,0x5a,100);
    TryUpgrade(&DAT_100136a8,0x5a,100);
    TryUpgrade(&DAT_100136b0,0x5a,100);
    TryUpgrade(&DAT_100136b8,0x5a,100);
    TryUpgrade(&DAT_10013680,0x5a,100);
    TryUpgrade(&DAT_10013690,0x5a,100);
    TryUpgrade(&DAT_10013748,0x5a,100);
    TryUpgrade(&DAT_10013750,0x5a,100);
    TryUpgrade(&DAT_10013758,0x5a,100);
    TryUpgrade(&DAT_10013730,0x5a,100);
    TryUpgrade(&DAT_10013738,0x5a,100);
    TryUpgrade(&DAT_10013740,0x5a,100);
    iVar2 = GetUnits(&DAT_10015f40);
    if (iVar2 < 0x3d) {
      TryUpgrade(&DAT_10015fe8,0xf,100);
      uVar3 = 0xf;
    }
    else {
      TryUpgrade(&DAT_10015fe8,0x5a);
      uVar3 = 0x5a;
    }
    TryUpgrade(&DAT_10016048,uVar3,100);
    cVar1 = UpgIsRun(&DAT_10015fe8);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016048);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016040,0x5a,100);
      }
    }
    TryUpgrade(&DAT_100161c8,0x5a,100);
    TryUpgrade(&DAT_100161d0,0x5a,100);
  }
  cVar1 = UpgIsDone(&DAT_100162c8);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016130,0x5a,100);
    cVar1 = UpgIsRun(&DAT_10016130);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016140,0x5a,100);
      cVar1 = UpgIsRun(&DAT_10016140);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016138,0x5a,100);
        cVar1 = UpgIsRun(&DAT_10016138);
        if (cVar1 != '\0') {
          TryUpgrade(&DAT_10016128,0x5a,100);
        }
      }
    }
  }
  return;
}





void FUN_100059a0(void)

{
  char cVar1;
  int iVar2;
  
  TryUpgrade(&DAT_10016338,0x32,100);
  iVar2 = GetUnits(&DAT_10015ee0);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10013620,100,100);
  }
  TryUpgrade(&DAT_10016038,100,100);
  iVar2 = FUN_10005180(&DAT_10013648);
  if ((iVar2 != 0) || ((DAT_10015f18 != 0 && (DAT_10015f18 != 5)))) {
    TryUpgrade(&DAT_10016230,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015fa8);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10016000,100,100);
  }
  cVar1 = UpgIsRun(&DAT_10016110);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10015ff0,100,100);
  }
  TryUpgrade(&DAT_10016110,0x5c,100);
  TryUpgrade(&DAT_100160c0,0x62,100);
  iVar2 = GetUnits(&DAT_10016098);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10016178,0x62,100);
  }
  TryUpgrade(&DAT_10015fe0,0x62,100);
  iVar2 = GetUnits(&DAT_10016218);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100138a0,100,100);
  }
  return;
}





void FUN_10005ae0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  TryUnit(&DAT_10016218,3,100,100);
  iVar2 = GetReadyUnits(&DAT_10015fa8);
  if (iVar2 != 0) {
    TryUnit(&DAT_10015f98,2,100,100);
    TryUnit(&DAT_10015f90,4,100,100);
  }
  TryUnit(&DAT_10015f98,1,100,100);
  TryUnit(&DAT_10015f78,1,100,100);
  if (*(int *)(&DAT_10015f58 + DAT_10016274 * 4) == 0) {
    FUN_10005130();
    iVar2 = GetReadyUnits(&DAT_10013838);
    if (iVar2 == 0) {
      return;
    }
  }
  TryUnit(&DAT_100161a8,1,100,100);
  TryUnit(&DAT_10015f78,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10015f78);
  if ((iVar2 < 2) && (iVar2 = GetStartRes(), iVar2 != 0)) {
    return;
  }
  TryUnit(&DAT_10016210,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016210);
  iVar3 = GetUnits(&DAT_10016210);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    TryUnit(&DAT_10015ee0,1,100,100);
    iVar2 = GetPeaceTimeLeft();
    if (iVar2 < 3) {
      TryUnit(&DAT_10015fa8,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10015fa8);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_10005130();
    TryUnit(&DAT_10015f78,4,100,100);
    iVar2 = GetReadyUnits(&DAT_10015f78);
    if (2 < iVar2) {
      TryUnit(&DAT_10016098,3,100,100);
      iVar2 = GetUnits(&DAT_10016218);
      if (iVar2 != 0) {
        TryUnit(&DAT_10016098,4,100,100);
      }
      TryUnit(&DAT_100135d8,1,100,100);
      TryUnit(&DAT_100135d8,3,0x28,100);
      cVar1 = UpgIsDone(&DAT_100138a0);
      if (cVar1 != '\0') {
        TryUnit(&DAT_10016098,5,100,100);
      }
      TryUnit(&DAT_100160b8,1,100,100);
    }
  }
  return;
}





void  FUN_10005d00(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetUnits(&DAT_10016238,param_1);
  if (iVar2 < 0x28) {
    SetAIRegister(DAT_10016274 + 8,0);
  }
  iVar2 = GetUnits(&DAT_10016238);
  if (iVar2 < 0x9d) {
    iVar2 = GetReadyUnits(&DAT_10016098);
    if (iVar2 == 0) goto LAB_10005d62;
  }
  SetAIRegister(DAT_10016274 + 8,1);
LAB_10005d62:
  iVar2 = 2;
  do {
    TryUnit(&DAT_10016150,1000,0x14,100);
    iVar3 = GetUnits(&DAT_10013648);
    if (iVar3 < 0x8c) {
      TryUnit(&DAT_10013648,1000,0x14,100);
    }
    else {
      TryUnit(&DAT_10013648,1000,0x14,0x28);
      TryUnit(&DAT_100160a0,1000,0x14,100);
    }
    iVar3 = GetAIRegister(DAT_10016274 + 8);
    if (iVar3 == 0) {
      iVar3 = GetPeaceTimeLeft();
      if (iVar3 < 1) {
        TryUnit(&DAT_10016238,0xa0,0x14,100);
      }
    }
    if (0) {
LAB_10005e35:
      iVar3 = GetMoney(5);
      if (2000 < iVar3) {
        iVar3 = GetMoney(4);
        if (2000 < iVar3) {
          iVar3 = 0x1e;
          do {
            TryUnit(&DAT_10013848,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = GetUnitCost(DAT_10016274 & 0xff,&DAT_10013848,1);
      if (iVar3 < 0x78) goto LAB_10005e35;
    }
    cVar1 = UpgIsDone(&DAT_10015fe0);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    TryUnit(&DAT_10016370,1000,0x14,uVar4);
    TryUnit(&DAT_10013640,1000,0x14,100);
    TryUnit(&DAT_10015f40,1000,0x14,100);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}





void  FUN_10005ee0(int param_1)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetReadyUnits(&DAT_10013838,param_1);
  if (iVar2 != 0) {
    iVar2 = GetStartRes();
    if (iVar2 == 3) {
      iVar2 = GetAIRegister(DAT_10016274);
      if (iVar2 == 0) {
        AI_Torg(2,3,500000);
        AI_Torg(0,3,80000);
        SetAIRegister(DAT_10016274,1);
        return;
      }
    }
    else {
      iVar2 = GetReadyUnits(&DAT_10013838);
      if (iVar2 != 0) {
        iVar2 = GetAIRegister(DAT_10016274);
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
          SetAIRegister(DAT_10016274,1);
        }
        cVar1 = UpgIsRun(&DAT_10016230);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016110);
          if (cVar1 == '\0') {
            iVar2 = GetReadyUnits(&DAT_10015ee0);
            if (iVar2 != 0) {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_10016274 & 0xff,&DAT_10016110,5);
              }
              FUN_10002ea0(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = UpgIsRun(&DAT_10016110);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10015fe0);
          if (cVar1 == '\0') {
            if (0) {
              iVar2 = 0;
            }
            else {
              iVar2 = GetUpgradeCost(DAT_10016274 & 0xff,&DAT_10015fe0,3);
            }
            uVar3 = FUN_10002ea0(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_10016274 & 0xff,&DAT_10015fe0,1);
              }
              uVar3 = FUN_10002ea0(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = GetUpgradeCost(DAT_10016274 & 0xff,&DAT_10015fe0,4);
                }
                FUN_10002ea0(4,(iVar2 * 0xb) / 10,2);
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





void  FUN_10006200(int param_1)

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
  cVar1 = UpgIsRun(&DAT_100160c0);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_10016274,&DAT_100160c0,3);
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
  cVar1 = UpgIsRun(&DAT_10015fe0);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_10016274,&DAT_10015fe0,3);
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
  cVar1 = UpgIsRun(&DAT_10016110);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_10016274,&DAT_10016110,3);
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
  cVar1 = UpgIsRun(&DAT_10016300);
  if (((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10016248), cVar1 == '\0')) &&
     (iVar2 = GetMoney(3), iVar2 < 9000)) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015fa8);
  if ((iVar2 == 0) && (iVar2 = GetPeaceTimeLeft(), iVar2 < 2)) {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUnitCost((char)DAT_10016274,&DAT_10015fa8,2);
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
  cVar1 = UpgIsRun(&DAT_10016230);
  if (cVar1 == '\0') {
    SetPDistribution(9,1,1);
  }
  cVar1 = UpgIsRun(&DAT_10016038);
  if ((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10013620), cVar1 == '\0')) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015ee0);
  if (iVar2 == 0) {
    SetPDistribution(6,4,4);
  }
  cVar1 = UpgIsRun(&DAT_10016338);
  if (cVar1 != '\0') {
    return;
  }
  SetPDistribution(9,1,1);
  return;
}





void FUN_10006540(void)

{
  char cVar1;
  
  SetMinesUpgradeRules(&DAT_10016558);
  cVar1 = UpgIsRun(&DAT_10016300);
  if (cVar1 != '\0') {
    cVar1 = UpgIsRun(&DAT_10016248);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f16c);
      return;
    }
  }
  if (((DAT_10015f18 == 2) || (DAT_10015f18 == 3)) || (DAT_10015f18 == 4)) {
    SetMinesUpgradeRules(&DAT_1000f1d8);
  }
  else {
    cVar1 = UpgIsRun(&DAT_10016230);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016110);
      if (cVar1 == '\0') {
        SetMinesUpgradeRules(&DAT_10016558);
        return;
      }
    }
    cVar1 = UpgIsRun(&DAT_10016110);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f1d8);
      return;
    }
  }
  return;
}





void FUN_100065f0(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = FUN_10005180(&DAT_10013648);
  if (iVar1 != 0) {
    SetDefenseState(0);
  }
  iVar1 = GetMaxPeaceTime();
  if ((iVar1 < 1) && (iVar1 = GetReadyUnits(&DAT_10013898), iVar1 < 1)) {
    return;
  }
  SetDefenseState(0);
  return;
}





void FUN_10006640(void)

{
  char cVar1;
  
  cVar1 = UpgIsDone(&DAT_10016158);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10016330,0x1e,0x1e,0x3c);
  }
  cVar1 = UpgIsDone(&DAT_10016070);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10013628,0x14,0x1e,0x3c);
  }
  TryUnit(&DAT_10013888,0x3c,0x50,100);
  TryUpgrade(&DAT_10016198,0x1e,100);
  TryUpgrade(&DAT_10016190,0x1e,100);
  TryUpgrade(&DAT_10016160,0x1e,100);
  TryUpgrade(&DAT_10016158,0x1e,100);
  TryUpgrade(&DAT_10016168,0x1e,100);
  TryUpgrade(&DAT_10016058,0x1e,100);
  TryUpgrade(&DAT_10016060,0x1e,100);
  TryUpgrade(&DAT_10016068,0x1e,100);
  TryUpgrade(&DAT_10016070,0x1e,100);
  return;
}





void FUN_10006730(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = GetReadyUnits(&DAT_10013898);
  iVar3 = GetUnits(&DAT_10016210);
  iVar4 = GetReadyUnits(&DAT_10016210);
  iVar5 = GetUnits(&DAT_10015ee0);
  iVar6 = GetReadyUnits(&DAT_10015ee0);
  iVar7 = GetUnits(&DAT_10013898);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_10016170)) {
    TryUnit(&DAT_10013898,4,0x32,100);
    cVar1 = UpgIsRun(&DAT_10016178);
    if (cVar1 != '\0') {
      TryUnit(&DAT_10013898,6,0x32,100);
    }
    cVar1 = UpgIsRun(&DAT_10015fe0);
    if (cVar1 != '\0') {
      TryUnit(&DAT_10013898,8,0x32,100);
    }
  }
  TryUpgrade(&DAT_100162a8,0x32,100);
  TryUpgrade(&DAT_10016290,0x28,100);
  TryUpgrade(&DAT_100162a0,0x1e,100);
  TryUpgrade(&DAT_10016280,0x14,100);
  TryUpgrade(&DAT_10016288,0xf,100);
  TryUpgrade(&DAT_10016278,10,100);
  return;
}





void FUN_10006860(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetReadyUnits(&DAT_10016218);
  iVar3 = GetUnits(&DAT_10016218);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10016218,5,100,100);
  }
  TryUnit(&DAT_10015f78,1,100,100);
  TryUnit(&DAT_100161a8,1,100,100);
  TryUnit(&DAT_10016210,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016210);
  iVar3 = GetUnits(&DAT_10016210);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10015ee0,1,100,100);
    iVar2 = GetReadyUnits(&DAT_10015ee0);
    if (iVar2 != 0) {
      TryUnit(&DAT_10015f90,1,100,100);
      TryUnit(&DAT_10015f98,1,100,100);
      TryUnit(&DAT_10013838,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10013838);
      if (iVar2 != 0) {
        TryUnit(&DAT_10015fa8,1,100,100);
        TryUnit(&DAT_100160b8,1,100,100);
        TryUnit(&DAT_100135d8,1,100,100);
        TryUnit(&DAT_10016098,1,100,100);
        cVar1 = UpgIsRun(&DAT_10015fe0);
        if (cVar1 != '\0') {
          iVar2 = GetReadyUnits(&DAT_10015f78);
          iVar3 = GetUnits(&DAT_10015f78);
          if (iVar3 == iVar2) {
            iVar2 = GetExtraction(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            TryUnit(&DAT_10015f78,uVar4,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_10016098);
          iVar3 = GetUnits(&DAT_10016098);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_10016098,7,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_100135d8);
          iVar3 = GetUnits(&DAT_100135d8);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_100135d8,3,100,100);
          }
        }
      }
    }
  }
  return;
}





void FUN_10006a70(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = GetUnits(&DAT_10013848);
  if (iVar1 < 4) {
    SetAIRegister(DAT_10016274 + 8,0);
  }
  iVar1 = GetUnits(&DAT_10013848);
  if (0x5f < iVar1) {
    SetAIRegister(DAT_10016274 + 8,1);
  }
  iVar1 = GetAIRegister(DAT_10016274 + 8);
  SetDefenseState((((int)((unsigned int)iVar1 >> 8) << 8) | iVar1 == 0));
  SetDefenseState(0);
  return;
}





void FUN_10006af0(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int uVar2;
  
  uVar2 = 0;
  if (*(int *)(&DAT_10015f58 + DAT_10016274 * 4) != 0) {
    FUN_100065f0();
    uVar2 = extraout_ECX;
  }
  FUN_10005d00(uVar2);
  FUN_10006640();
  iVar1 = GetPeaceTimeLeft();
  if (iVar1 < 5) {
    FUN_10006730();
  }
  FUN_10005ae0();
  FUN_100059a0();
  iVar1 = GetPeaceTimeLeft();
  uVar2 = extraout_ECX_00;
  if (iVar1 < 3) {
    FUN_100051c0();
    uVar2 = extraout_ECX_01;
  }
  FUN_10005ee0(uVar2);
  FUN_10006200(extraout_ECX_02);
  FUN_10006540();
  return;
}





void FUN_10006b50(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  
  FUN_10006a70();
  FUN_10006860();
  iVar3 = 2;
  do {
    TryUnit(&DAT_10016150,1000,0x14,100);
    TryUnit(&DAT_10013648,1000,0x14,100);
    iVar2 = GetAIRegister(DAT_10016274 + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        TryUnit(&DAT_10013848,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      TryUnit(&DAT_10016120,0x3c,10,100);
    }
    cVar1 = UpgIsDone(&DAT_10015fe0);
    if (cVar1 == '\0') {
      TryUnit(&DAT_10013650,1000,0x14,100);
    }
    TryUnit(&DAT_10013640,1000,0x14,100);
    TryUnit(&DAT_10015f40,1000,0x14,100);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10006640();
  FUN_10005ee0(extraout_ECX);
  FUN_10006200(extraout_ECX_00);
  FUN_100051c0();
  FUN_100059a0();
  return;
}






void FUN_10006c50(void)

{
  DAT_10015f18 = GetLandType();
  DAT_10016328 = GetDifficulty();
  DAT_10013858 = GetStartRes();
  FUN_10002f50();
  SetMineBalanse(0x13,&DAT_1000f114);
  FUN_10006540();
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  switch(DAT_10015f18) {
  case 0:
  case 5:
    if (DAT_10013858 == 3) {
      SetMineBalanse(3,&DAT_1000f160);
      SetMinesUpgradeRules(&DAT_1000f16c);
      SetMinesBuildingRules(&DAT_1000f41c,5);
      FUN_10006b50();
    }
    else {
      SetMineBalanse(0x13,&DAT_1000f114);
      SetMinesUpgradeRules(&DAT_10016558);
      if (DAT_10013858 == 0) {
        DAT_1000f248 = 4;
      }
      SetMinesBuildingRules(&DAT_1000f244,0x1b);
      FUN_10006af0();
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
    FUN_10003270();
  }
  FUN_100030d0();
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
  iVar3 = GetUnits(&DAT_10016150);
  iVar4 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_10016178);
  GetUnits(&DAT_10013648);
  UpgIsDone(&DAT_10015fe0);
  GetUnits(&DAT_100160a0);
  iVar5 = GetUnits(&DAT_10016370);
  iVar6 = GetUnits(&DAT_100162f0);
  iVar7 = GetUnits(&DAT_10013648);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = GetDifficulty();
  if (0 < iVar6) {
    TryUnit(&DAT_100162e8,0xf,0x14,0x28);
  }
  iVar6 = GetReadyUnits(&DAT_10013898);
  iVar7 = GetUnits(&DAT_10013898);
  if (iVar3 == 0) {
    return;
  }
  TryUnit(&DAT_10015f98,1,100,100);
  iVar8 = GetUnits(&DAT_10015f98);
  if (iVar8 == 0) {
    return;
  }
  TryUpgrade(&DAT_10016338,100,100);
  cVar2 = FieldExist();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      TryUnit(&DAT_10016150,100,100,100);
      TryUnit(&DAT_10013648,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_10004140();
    }
    SetPDistribution(0,1,1);
  }
  else {
    if (DAT_10016554 == 0) {
      if (12000 < iVar4) {
        SetPDistribution(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_100044a9:
      SetPDistribution(9,uVar12,uVar13);
    }
    else {
      if (DAT_10016554 == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_100044a9;
      }
      if (DAT_10016554 == 2) {
        uVar13 = 9;
        uVar12 = 4;
        goto LAB_100044a9;
      }
    }
    uVar12 = 0x1c2;
    if (cVar1 != '\0') {
      uVar12 = 0x17c;
    }
    if (iVar3 < 0x19) {
      if (300 < iVar4) {
        TryUnit(&DAT_10016150,100,100,100);
        goto LAB_100044e7;
      }
    }
    else {
LAB_100044e7:
      if ((300 < iVar4) && (TryUnit(&DAT_10016150,uVar12,0xe8,100), 400 < iVar4)) {
        TryUnit(&DAT_10013648,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_10004140();
    }
  }
  TryUnit(&DAT_10015f78,1,100,100);
  TryUnit(&DAT_10015f78,2,0x5a,5);
  TryUnit(&DAT_10015f78,3,0x5a,5);
  iVar8 = GetUnits(&DAT_10016210);
  if (1 < iVar8) {
    TryUnit(&DAT_10015f78,2,0x50,5);
    iVar8 = GetUnits(&DAT_10015f78);
    if (1 < iVar8) {
      TryUnit(&DAT_10016098,1,99,0x5a);
    }
    iVar8 = GetReadyUnits(&DAT_10015f78);
    if (1 < iVar8) {
      TryUnit(&DAT_10013838,1,100,100);
    }
    TryUpgrade(&DAT_100160d0,99,100);
  }
  iVar8 = GetUnits(&DAT_10016150);
  if (0x23 < iVar8) {
    TryUnit(&DAT_10013838,1,100,100);
  }
  TryUnit(&DAT_100161a8,1,100,100);
  TryUnit(&DAT_10016210,1,100,100);
  TryUnit(&DAT_10016210,2,100,100);
  TryUnit(&DAT_10015f90,1,0x32,0x32);
  TryUnit(&DAT_100161a8,2,10,5);
  TryUpgrade(&DAT_10013620,0x50,100);
  iVar8 = GetUnits(&DAT_10015ee0);
  if (0 < iVar8) {
    TryUnit(&DAT_100160b8,1,5,3);
  }
  cVar2 = FieldExist();
  if (cVar2 != '\0') {
    TryUnit(&DAT_10015ee0,1,0x5a,0x5a);
  }
  TryUnit(&DAT_10015fa8,1,99,10);
  TryUnit(&DAT_100135d8,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    TryUnit(&DAT_10015f98,2,0x1e,0x1e);
  }
  TryUnit(&DAT_10016218,1,0x5a,0x14);
  TryUnit(&DAT_10016218,2,0x50,5);
  TryUpgrade(&DAT_10016038,0x5a,99);
  TryUpgrade(&DAT_10016230,0x5f,100);
  TryUpgrade(&DAT_10016178,100,100);
  TryUpgrade(&DAT_10016000,0x5a,0x5a);
  TryUpgrade(&DAT_10015ff0,0x5f,100);
  TryUpgrade(&DAT_10015ff8,0x5f,100);
  iVar8 = GetReadyUnits(&DAT_10016098);
  if (((iVar8 == 0) || (cVar2 = UpgIsRun(&DAT_10016178), cVar2 != '\0')) ||
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
  TryUpgrade(&DAT_10013760,100,100);
  TryUnit(&DAT_10016298,1,0x32,0x5a);
  TryUnit(&DAT_10016298,2,0x14,0x32);
  TryUnit(&DAT_10016298,3,10,0x32);
  cVar2 = UpgIsDone(&DAT_10013918);
  if (cVar2 == '\0') {
    iVar9 = GetUnitsByUsage(0,0x1c);
    iVar10 = GetUnitsByUsage(0,0x1b);
    iVar8 = GetUnitsByUsage(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_10015f50;
      goto LAB_10004913;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_10015f50;
      goto LAB_10004913;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_100138a8;
LAB_10004913:
    TryUnit(puVar11,iVar8,0x32,0x32);
  }
  TryUpgrade(&DAT_10013918,99,100);
  cVar2 = UpgIsRun(&DAT_10016230);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013918,0x5a,0x5a);
    TryUpgrade(&DAT_10013830,99,100);
  }
  cVar2 = UpgIsRun(&DAT_10013918);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013900,0x5a,0x5a);
    TryUpgrade(&DAT_10013840,0x46,10);
    FUN_10003230();
  }
  SetUpgradeLock(1,0);
  iVar8 = GetMoney(0);
  if ((((14000 < iVar8) && (cVar2 = UpgIsRun(&DAT_10013760), cVar2 != '\0')) &&
      (iVar8 = GetMoney(1), iVar8 < 0x1d4c)) &&
     (cVar2 = UpgIsRun(&DAT_10013918), cVar2 == '\0')) {
    SetUpgradeLock(1,1);
  }
  TryUnit(&DAT_100161b0,3,0x5a,0x5a);
  cVar2 = UpgIsDone(&DAT_100160b0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161b0,0x14,10,0x5a);
  }
  TryUpgrade(&DAT_100160b0,99,0x5a);
  TryUpgrade(&DAT_100160c0,99,100);
  TryUpgrade(&DAT_100162a8,0x32,0x32);
  TryUpgrade(&DAT_10016290,0x32,0x32);
  TryUpgrade(&DAT_100162a0,0x32,0x32);
  TryUpgrade(&DAT_10016280,0x32,0x32);
  TryUpgrade(&DAT_10016288,0x32,0x32);
  TryUpgrade(&DAT_10016278,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     (TryUnit(&DAT_10013898,1,0x50,10), 0x3c < iVar3)) {
    TryUnit(&DAT_10013898,2,0x50,10);
    TryUnit(&DAT_10013898,3,0x32,10);
    TryUnit(&DAT_10013898,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    TryUnit(&DAT_10016120,0x32,1,0x1e);
    TryUnit(&DAT_10016238,0x14,1,0x1e);
  }
  else {
    TryUnit(&DAT_10013888,0x32,10,100);
    TryUnit(&DAT_10016120,0x4b,1,0x1e);
    TryUnit(&DAT_10016238,0x1e,1,0x1e);
    TryUpgrade(&DAT_100135f0,0x5f,0x5a);
    TryUpgrade(&DAT_100136c8,0x5f,0x5a);
    TryUpgrade(&DAT_100135e8,0x5f,0x5a);
    cVar2 = UpgIsDone(&DAT_10016158);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10016330,5,0x1e,10);
    }
    cVar2 = UpgIsDone(&DAT_10016070);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013628,10,0x1e,10);
    }
    FUN_10004270();
  }
  cVar2 = UpgIsDone(&DAT_10015fe0);
  if (cVar2 != '\0') {
    cVar2 = UpgIsDone(&DAT_100160c0);
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
  iVar3 = GetUnits(&DAT_10016098);
  if (iVar3 != 0) {
    TryUnit(&DAT_100161b0,6,0x5a,0x5a);
  }
  cVar2 = UpgIsDone(&DAT_100160b0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161b0,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    TryUnit(&DAT_10016098,2,0x5f,0x14);
    TryUnit(&DAT_10016098,3,0x5f,0x14);
    TryUnit(&DAT_10016098,4,0x5f,0x14);
    TryUnit(&DAT_10016098,5,0x28,0x14);
    TryUnit(&DAT_10016098,6,0x28,0x14);
    TryUpgrade(&DAT_10015fe0,99,100);
    iVar3 = GetUnits(&DAT_100160a0);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_100161c8,0x5a,100);
      TryUpgrade(&DAT_100161d0,0x50,0x46);
    }
    TryUpgrade(&DAT_100160b0,0x3c,0x5a);
    cVar1 = UpgIsRun(&DAT_100138c8);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016128,0x5a,0x5a);
      TryUpgrade(&DAT_10016138,0x5a,0x5a);
      TryUpgrade(&DAT_10016140,0x46,0x5a);
      TryUpgrade(&DAT_10016130,0x46,0x5a);
    }
  }
  TryUpgrade(&DAT_10013760,99,100);
  TryUpgrade(&DAT_100138a0,0x3c,0x5a);
  TryUpgrade(&DAT_10016110,100,100);
  if (0x15e < iVar5) {
    TryUnit(&DAT_100160a0,500,10,100);
    FUN_10004220();
  }
  iVar3 = GetReadyUnits(&DAT_10013838);
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
                if (iVar8 < 0x3e9) goto LAB_10004eb3;
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
LAB_10004eb3:
  iVar3 = GetReadyUnits(&DAT_10015ee0);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = UpgIsRun(&DAT_10016230), cVar1 == '\0')) {
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
  iVar3 = GetUnits(&DAT_100161a8);
  if ((iVar3 != 0) && (cVar1 = UpgIsRun(&DAT_10016178), cVar1 == '\0')) {
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
  if (*(int *)(&DAT_100165cc + iVar3 * 4) == 0) {
    AI_Torg(5,3,4000);
    iVar3 = GetAINation();
    *(int *)(&DAT_100165cc + iVar3 * 4) = 1;
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
       (RegisterUpgrade(&DAT_10016048,"KUZ04RU"), 1)) &&
      (RegisterUpgrade(&DAT_10015fe8,"AKA35RU"), 1)) &&
     (RegisterUpgrade(&DAT_10016040,"AKA36RU"), 1)) {
    RegisterUpgrade(&DAT_10016050,"AKA32RU");
  }
  if (1) {
    RegisterUnitType(&DAT_10013650,"Dragun_18(RU)");
  }
  SafeRegisterUpgrade(&DAT_100138c0,"Dragun(RU)ATTACK");
  SafeRegisterUpgrade(&DAT_100138b8,"Dragun(RU)ATTACK3");
  SafeRegisterUpgrade(&DAT_100138b0,"Dragun(RU)ATTACK4");
  SafeRegisterUpgrade(&DAT_100138f8,"Dragun(RU)ATTACK5");
  SafeRegisterUpgrade(&DAT_100138e8,"Dragun(RU)ATTACK6");
  SafeRegisterUpgrade(&DAT_100138e0,"Dragun(RU)ATTACK7");
  SafeRegisterUpgrade(&DAT_10013698,"Dragun(RU)SHIELD");
  SafeRegisterUpgrade(&DAT_10013688,"Dragun(RU)SHIELD3");
  SafeRegisterUpgrade(&DAT_10013880,"Dragun(RU)SHIELD4");
  SafeRegisterUpgrade(&DAT_10013878,"Dragun(RU)SHIELD5");
  SafeRegisterUpgrade(&DAT_10013870,"Dragun(RU)SHIELD6");
  SafeRegisterUpgrade(&DAT_10013868,"Dragun(RU)SHIELD7");
  SafeRegisterUpgrade(&DAT_100138c0,"Dragun(RU)ATTACK");
  SafeRegisterUpgrade(&DAT_100138b8,"Dragun(RU)ATTACK3");
  SafeRegisterUpgrade(&DAT_100138b0,"Dragun(RU)ATTACK4");
  SafeRegisterUpgrade(&DAT_100138f8,"Dragun(RU)ATTACK5");
  SafeRegisterUpgrade(&DAT_100138e8,"Dragun(RU)ATTACK6");
  SafeRegisterUpgrade(&DAT_100138e0,"Dragun(RU)ATTACK7");
  SafeRegisterUpgrade(&DAT_10013698,"Dragun(RU)SHIELD");
  SafeRegisterUpgrade(&DAT_10013688,"Dragun(RU)SHIELD3");
  SafeRegisterUpgrade(&DAT_10013880,"Dragun(RU)SHIELD4");
  SafeRegisterUpgrade(&DAT_10013878,"Dragun(RU)SHIELD5");
  SafeRegisterUpgrade(&DAT_10013870,"Dragun(RU)SHIELD6");
  SafeRegisterUpgrade(&DAT_10013868,"Dragun(RU)SHIELD7");
  if (1) {
    RegisterUnitType(&DAT_10013640,"Dragun_18(RU)");
  }
  if ((((1) &&
       (RegisterUpgrade(&DAT_10013618,"Dragun_18(RU)ATTACK"), 1))
      && ((RegisterUpgrade(&DAT_10013610,"Dragun_18(RU)ATTACK3"),
          1 &&
          ((RegisterUpgrade(&DAT_10013608,"Dragun_18(RU)ATTACK4"),
           1 &&
           (RegisterUpgrade(&DAT_100162d8,"Dragun_18(RU)ATTACK5"),
           1)))))) &&
     (((((RegisterUpgrade(&DAT_100162d0,"Dragun_18(RU)ATTACK6"),
         1 &&
         (((((RegisterUpgrade(&DAT_100162c8,"Dragun_18(RU)ATTACK7"),
             1 &&
             (RegisterUpgrade(&DAT_10016350,"Dragun_18(RU)SHIELD"),
             1)) &&
            (RegisterUpgrade(&DAT_10016348,"Dragun_18(RU)SHIELD3"),
            1)) &&
           ((RegisterUpgrade(&DAT_10016398,"Dragun_18(RU)SHIELD4"),
            1 &&
            (RegisterUpgrade(&DAT_10016390,"Dragun_18(RU)SHIELD5"),
            1)))) &&
          ((RegisterUpgrade(&DAT_10016388,"Dragun_18(RU)SHIELD6"),
           1 &&
           ((RegisterUpgrade(&DAT_10016380,"Dragun_18(RU)SHIELD7"),
            1 &&
            (RegisterUpgrade(&DAT_10013618,"Dragun_18(RU)ATTACK"),
            1)))))))) &&
        (RegisterUpgrade(&DAT_10013610,"Dragun_18(RU)ATTACK3"), 1
        )) && ((((RegisterUpgrade(&DAT_10013608,"Dragun_18(RU)ATTACK4"),
                 1 &&
                 (RegisterUpgrade(&DAT_100162d8,"Dragun_18(RU)ATTACK5"),
                 1)) &&
                (RegisterUpgrade(&DAT_100162d0,"Dragun_18(RU)ATTACK6"),
                1)) &&
               (((RegisterUpgrade(&DAT_100162c8,"Dragun_18(RU)ATTACK7"),
                 1 &&
                 (RegisterUpgrade(&DAT_10016350,"Dragun_18(RU)SHIELD"),
                 1)) &&
                ((RegisterUpgrade(&DAT_10016348,"Dragun_18(RU)SHIELD3"),
                 1 &&
                 ((RegisterUpgrade(&DAT_10016398,"Dragun_18(RU)SHIELD4"),
                  1 &&
                  (RegisterUpgrade(&DAT_10016390,"Dragun_18(RU)SHIELD5"),
                  1)))))))))) &&
      (RegisterUpgrade(&DAT_10016388,"Dragun_18(RU)SHIELD6"), 1))
     )) {
    RegisterUpgrade(&DAT_10016380,"Dragun_18(RU)SHIELD7");
  }
  if ((1) &&
     (RegisterUnitType(&DAT_10015fa0,"Sveshenik_ukr(RU)"), 1)) {
    RegisterUnitType(&DAT_10013848,"Dragun_18_DIP(RU)");
  }
  DAT_10016274 = GetAINation();
  uVar4 = GetRandomIndex();
  iVar2 = DAT_10016274;
  *(unsigned int *)(&DAT_10015f58 + DAT_10016274 * 4) = uVar4 & 0x80;
  *(int *)(&DAT_10013ab0 + iVar2 * 0x4b8) = 0;
  *(int *)(&DAT_10013c44 + iVar2 * 0x4b8) = 0;
  if (1) {
    RegisterUpgrade(&DAT_10016090,"Barabanshik_1(RU)SHIELD");
  }
  bVar3 = GetRandomIndex();
  pcVar7 = "Tiagoli_kozak(RU)";
  if ((bVar3 & 6) != 2) {
    pcVar7 = "Tiagoli_koval_rus(RU)";
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
  pcVar7 = "Mushketer(RU)";
  if ((bVar3 & 0x18) != 8) {
    pcVar7 = "Grenader(RU)";
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
  if (((1) &&
      (RegisterUnitType(&DAT_10016238,"Strelec_Algir_DIP(RU)"), 1)
      ) && (RegisterUnitType(&DAT_100162e8,"Kozak_loshad_DIP(RU)"),
           1)) {
    RegisterUnitType(&DAT_100136c0,"Russki_Komandir(RU)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_10016220,"Russki_Komandir(RU)ATTACK"),
     1)) {
    RegisterUpgrade(&DAT_10015f88,"Russki_Komandir(RU)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10013600,"Barabanshik_1(RU)");
  }
  AssignFormUnit("Pik_rus(RU)");
  if (((1) &&
      (RegisterUnitType(&DAT_10013648,"Pik_rus(RU)"), 1)) &&
     ((RegisterUnitType(&DAT_10016150,"Kreposnoi(RU)"), 1 &&
      (RegisterUnitType(&DAT_10016120,"Grenader_DIP(RU)"), 1)))) {
    RegisterUnitType(&DAT_100160a0,"Strelec(RU)");
    if ((((((((1) &&
             (RegisterUnitType(&DAT_10016370,acStack_60), 1)) &&
            (RegisterUnitType(&DAT_100162f0,"Kirasir(RU)"), 1)) &&
           ((RegisterUnitType(&DAT_10015f40,acStack_30), 1 &&
            (RegisterUnitType(&DAT_10016330,"Pushka(RU)"), 1))))
          && (RegisterUnitType(&DAT_10013628,"Mortira(RU)"), 1))
         && ((RegisterUnitType(&DAT_10013888,"Mortira_b(RU)"), 1
             && (RegisterUnitType(&DAT_100161b0,"Lodka(RU)"), 1)))
         ) && (((RegisterUnitType(&DAT_10013850,"Gusar_evro(RU)"),
                1 &&
                (((RegisterUnitType(&DAT_10015f78,"Russki_Center(RU)"),
                  1 &&
                  (RegisterUnitType(&DAT_10015f98,"Melnica_rus(RU)"),
                  1)) &&
                 (RegisterUnitType(&DAT_10016210,"Rus_Strel_Dom(RU)"),
                 1)))) &&
               (((RegisterUnitType(&DAT_10016218,"Kazarma(RU)"), 1
                 && (RegisterUnitType(&DAT_10015f90,"Sclad3(RU)"),
                    1)) &&
                (RegisterUnitType(&DAT_10015ee0,"akademia_RU(RU)"),
                1)))))) &&
       (((((RegisterUnitType(&DAT_10016098,"konushnia(RU)"), 1 &&
           (RegisterUnitType(&DAT_10015fa8,"Dip_korpus_RU(RU)"), 1
           )) && ((RegisterUnitType(&DAT_100135d8,"artileri_depo(RU)"),
                  1 &&
                  (((RegisterUnitType(&DAT_10013838,"Rinok(RU)"),
                    1 &&
                    (RegisterUnitType(&DAT_10013898,"Bashnia_2(RU)"),
                    1)) &&
                   (RegisterUnitType(&DAT_100161a8,"Kuznica(RU)"),
                   1)))))) &&
         ((RegisterUnitType(&DAT_100160b8,"Cerkov_RU(RU)"), 1 &&
          (RegisterUnitType(&DAT_10016298,"PorR(RU)"), 1)))) &&
        ((RegisterUnitType(&DAT_100138a8,"Fregat(RU)"), 1 &&
         (((RegisterUnitType(&DAT_10015f50,"GALERA(RU)"), 1 &&
           (RegisterUnitType(&DAT_10016358,"Linkor(RU)"), 1)) &&
          (RegisterUnitType(&DAT_10015f48,"Yahta(RU)"), 1))))))))
    {
      RegisterUnitType(&DAT_10013860,"PERES_KOR(RU)");
    }
  }
  if (((((((((1) &&
            (RegisterUpgrade(&DAT_10016338,"Melnica_rus(RU)GETRES"),
            1)) &&
           (RegisterUpgrade(&DAT_100160c0,"Melnica_rus(RU)GETRES2"),
           1)) &&
          ((RegisterUpgrade(&DAT_10013620,"KUZ01RU"), 1 &&
           (RegisterUpgrade(&DAT_10016310,"Pik_rus(RU)ATTACK"), 1
           )))) && (RegisterUpgrade(&DAT_10016318,"Pik_rus(RU)ATTACK3"),
                   1)) &&
        ((RegisterUpgrade(&DAT_10016300,"Pik_rus(RU)ATTACK4"), 1
         && (RegisterUpgrade(&DAT_10016308,"Pik_rus(RU)ATTACK5"),
            1)))) &&
       ((RegisterUpgrade(&DAT_10016320,"Pik_rus(RU)ATTACK6"), 1
        && (((RegisterUpgrade(&DAT_10016258,"Pik_rus(RU)SHIELD"),
             1 &&
             (RegisterUpgrade(&DAT_10016240,"Pik_rus(RU)SHIELD3"),
             1)) &&
            (RegisterUpgrade(&DAT_10016248,"Pik_rus(RU)SHIELD4"),
            1)))))) &&
      (((RegisterUpgrade(&DAT_10016260,"Pik_rus(RU)SHIELD5"), 1
        && (RegisterUpgrade(&DAT_10016268,"Pik_rus(RU)SHIELD6"),
           1)) &&
       ((RegisterUpgrade(&DAT_100138d0,"Strelec(RU)ATTACK"), 1 &&
        ((RegisterUpgrade(&DAT_100138d8,"Strelec(RU)ATTACK3"), 1
         && (RegisterUpgrade(&DAT_100138c8,"Strelec(RU)ATTACK4"),
            1)))))))) &&
     ((RegisterUpgrade(&DAT_10015f38,"Strelec(RU)SHIELD"), 1 &&
      (RegisterUpgrade(&DAT_10015f28,"Strelec(RU)SHIELD3"), 1))))
  {
    RegisterUpgrade(&DAT_10015f30,"Strelec(RU)SHIELD4");
  }
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10015fd8,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10015fd0,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10015fc8,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10015fc0,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10015fb8,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10015fb0,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_100160f0,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_100160e8,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_100160e0,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_100160d8,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_100160c8,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10016118,puVar5);
  if (((((1) &&
        (RegisterUpgrade(&DAT_10013678,"Kirasir(RU)ATTACK"), 1))
       && (RegisterUpgrade(&DAT_10013670,"Kirasir(RU)ATTACK3"), 1
          )) && (((RegisterUpgrade(&DAT_10013668,"Kirasir(RU)ATTACK4"),
                  1 &&
                  (RegisterUpgrade(&DAT_10013660,"Kirasir(RU)ATTACK5"),
                  1)) &&
                 ((RegisterUpgrade(&DAT_10013638,"Kirasir(RU)ATTACK6"),
                  1 &&
                  ((RegisterUpgrade(&DAT_10013630,"Kirasir(RU)ATTACK7"),
                   1 &&
                   (RegisterUpgrade(&DAT_10013708,"Kirasir(RU)SHIELD"),
                   1)))))))) &&
     ((RegisterUpgrade(&DAT_10013700,"Kirasir(RU)SHIELD3"), 1 &&
      (((RegisterUpgrade(&DAT_100136f8,"Kirasir(RU)SHIELD4"), 1
        && (RegisterUpgrade(&DAT_100136e0,"Kirasir(RU)SHIELD5"),
           1)) &&
       (RegisterUpgrade(&DAT_100136d8,"Kirasir(RU)SHIELD6"), 1)))
      ))) {
    RegisterUpgrade(&DAT_100136d0,"Kirasir(RU)SHIELD7");
  }
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_100136a0,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_100136a8,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_100136b0,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_100136b8,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10013680,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10013690,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10013748,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10013750,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10013758,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10013730,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10013738,puVar5);
  puVar5 = FUN_10002e40();
  SafeRegisterUpgrade(&DAT_10013740,puVar5);
  if (((((1) &&
        (RegisterUpgrade(&DAT_10016198,"Pushka(RU)BUILD"), 1)) &&
       ((((RegisterUpgrade(&DAT_10016190,"Pushka(RU)BUILD3"), 1
          && ((RegisterUpgrade(&DAT_10016160,"Pushka(RU)BUILD4"),
              1 &&
              (RegisterUpgrade(&DAT_10016158,"Pushka(RU)BUILD5"),
              1)))) &&
         (RegisterUpgrade(&DAT_10016168,"Pushka(RU)BUILD6"), 1))
        && ((((RegisterUpgrade(&DAT_10016058,"Mortira(RU)BUILD"),
              1 &&
              (RegisterUpgrade(&DAT_10016060,"Mortira(RU)BUILD3"),
              1)) &&
             (RegisterUpgrade(&DAT_10016068,"Mortira(RU)BUILD4"),
             1)) &&
            ((RegisterUpgrade(&DAT_10016070,"Mortira(RU)BUILD5"),
             1 &&
             (RegisterUpgrade(&DAT_10016178,"KUZ03RU"), 1))))))))
      && ((((RegisterUpgrade(&DAT_10015fe0,"MAINRU"), 1 &&
            ((RegisterUpgrade(&DAT_10013918,"AKA06RU"), 1 &&
             (RegisterUpgrade(&DAT_10016038,"AKA01RU"), 1)))) &&
           ((RegisterUpgrade(&DAT_10015ff0,"AKA02RU"), 1 &&
            ((((RegisterUpgrade(&DAT_10015ff8,"AKA03RU"), 1 &&
               (RegisterUpgrade(&DAT_10016000,"AKA04RU"), 1)) &&
              (RegisterUpgrade(&DAT_10016230,"AKA08RU"), 1)) &&
             (((RegisterUpgrade(&DAT_100160d0,"AKA23RU"), 1 &&
               (RegisterUpgrade(&DAT_10016110,"AKA24RU"), 1)) &&
              ((RegisterUpgrade(&DAT_100161c8,"AKA31RU"), 1 &&
               ((RegisterUpgrade(&DAT_100161d0,"AKA33RU"), 1 &&
                (RegisterUpgrade(&DAT_10016128,"AKA12RU"), 1)))))
              ))))))) &&
          ((RegisterUpgrade(&DAT_10016138,"AKA13RU"), 1 &&
           (((((RegisterUpgrade(&DAT_10016140,"AKA14RU"), 1 &&
               (RegisterUpgrade(&DAT_10016130,"AKA15RU"), 1)) &&
              (RegisterUpgrade(&DAT_10013910,"AKA11RU"), 1)) &&
             (((RegisterUpgrade(&DAT_100138a0,"AKA10RU"), 1 &&
               (RegisterUpgrade(&DAT_10013760,"AKA30RU"), 1)) &&
              ((RegisterUpgrade(&DAT_100160b0,"AKA07RU"), 1 &&
               ((RegisterUpgrade(&DAT_10013900,"AKA20RU"), 1 &&
                (RegisterUpgrade(&DAT_100161b8,"KUZ02RU"), 1)))))
              ))) && ((RegisterUpgrade(&DAT_100161c0,"AKA09RU"),
                      1 &&
                      ((((RegisterUpgrade(&DAT_10013830,"AKA05RU"),
                         1 &&
                         (RegisterUpgrade(&DAT_10013840,"AKA28RU"),
                         1)) &&
                        (RegisterUpgrade(&DAT_10013728,"AKA29RU"),
                        1)) &&
                       ((RegisterUpgrade(&DAT_100135e8,"KUZ05RU"),
                        1 &&
                        (RegisterUpgrade(&DAT_100136c8,"KUZ06RU"),
                        1)))))))))))))) &&
     ((((RegisterUpgrade(&DAT_100135f0,"AKA34RU"), 1 &&
        ((RegisterUpgrade(&DAT_100162a8,"Bashnia_2(RU)PAUSE"), 1
         && (RegisterUpgrade(&DAT_10016290,"Bashnia_2(RU)PAUSE3"),
            1)))) &&
       (RegisterUpgrade(&DAT_100162a0,"Bashnia_2(RU)PAUSE4"), 1))
      && ((RegisterUpgrade(&DAT_10016280,"Bashnia_2(RU)PAUSE5"),
          1 &&
          (RegisterUpgrade(&DAT_10016288,"Bashnia_2(RU)PAUSE6"),
          1)))))) {
    RegisterUpgrade(&DAT_10016278,"Bashnia_2(RU)PAUSE7");
  }
  SetPDistribution(9,4,4);
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(RU)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(RU)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(RU)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(RU)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(RU)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(RU)INSIDE7",0x32);
  AssignPeasant("Kreposnoi(RU)");
  AssignMine("shahta(RU)");
  AssignHouse("ruskaia_izba(RU)");
  AssignWall("WALL_KR(RU)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x5a);
  SET_MINE_UPGRADE2_RADIUS(0x5a);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}





__declspec(dllexport) void ProcessAI(void)

{
  DAT_10016274 = GetAINation();
  FUN_10006c50();
  TryUnit(&DAT_10016210,5,100,100);
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
