/* Auto-generated from England.c */
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
long long DAT_1001065c = 0;
long long DAT_10013608 = 0;
int DAT_10013610 = 0;
long long DAT_10013618 = 0;
long long DAT_10013620 = 0;
long long DAT_10013630 = 0;
long long DAT_10013638 = 0;
long long DAT_10013640 = 0;
long long DAT_10013648 = 0;
long long DAT_10013650 = 0;
long long DAT_10013658 = 0;
long long DAT_10013660 = 0;
long long DAT_10013668 = 0;
long long DAT_10013670 = 0;
long long DAT_10013678 = 0;
long long DAT_10013680 = 0;
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
long long DAT_100136f8 = 0;
long long DAT_10013700 = 0;
long long DAT_10013708 = 0;
long long DAT_10013710 = 0;
int DAT_10013718 = 0;
long long DAT_10013728 = 0;
long long DAT_10013730 = 0;
long long DAT_10013738 = 0;
long long DAT_10013758 = 0;
long long DAT_10013760 = 0;
long long DAT_10013768 = 0;
long long DAT_10013770 = 0;
long long DAT_10013778 = 0;
long long DAT_10013780 = 0;
long long DAT_10013788 = 0;
long long DAT_10013790 = 0;
long long DAT_10013798 = 0;
long long DAT_10013860 = 0;
long long DAT_10013868 = 0;
long long DAT_10013870 = 0;
long long DAT_10013878 = 0;
int DAT_10013888 = 0;
long long DAT_10013890 = 0;
long long DAT_10013898 = 0;
long long DAT_100138a0 = 0;
long long DAT_100138a8 = 0;
long long DAT_100138b0 = 0;
long long DAT_100138b8 = 0;
long long DAT_100138c8 = 0;
long long DAT_100138d0 = 0;
long long DAT_100138d8 = 0;
long long DAT_100138e0 = 0;
long long DAT_100138e8 = 0;
long long DAT_100138f0 = 0;
long long DAT_100138f8 = 0;
long long DAT_10013900 = 0;
long long DAT_10013908 = 0;
long long DAT_10013910 = 0;
long long DAT_10013918 = 0;
long long DAT_10013928 = 0;
long long DAT_10013930 = 0;
long long DAT_10013940 = 0;
long long DAT_10013948 = 0;
char DAT_10013950 = 0;
char DAT_10013ae0 = 0;
char DAT_10013ae4 = 0;
char DAT_10013c74 = 0;
char DAT_10013c78 = 0;
long long DAT_10015f10 = 0;
int DAT_10015f48 = 0;
long long DAT_10015f58 = 0;
long long DAT_10015f60 = 0;
long long DAT_10015f68 = 0;
long long DAT_10015f70 = 0;
long long DAT_10015f78 = 0;
long long DAT_10015f80 = 0;
char DAT_10015f88 = 0;
long long DAT_10015fa8 = 0;
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
long long DAT_10016018 = 0;
long long DAT_10016020 = 0;
long long DAT_10016028 = 0;
long long DAT_10016030 = 0;
long long DAT_10016068 = 0;
long long DAT_10016070 = 0;
long long DAT_10016078 = 0;
long long DAT_10016080 = 0;
long long DAT_10016088 = 0;
long long DAT_10016090 = 0;
long long DAT_10016098 = 0;
long long DAT_100160a0 = 0;
long long DAT_100160c0 = 0;
long long DAT_100160c8 = 0;
long long DAT_100160d0 = 0;
int DAT_100160d8 = 0;
long long DAT_100160e0 = 0;
long long DAT_100160e8 = 0;
long long DAT_100160f0 = 0;
long long DAT_100160f8 = 0;
long long DAT_10016100 = 0;
long long DAT_10016108 = 0;
long long DAT_10016110 = 0;
long long DAT_10016118 = 0;
long long DAT_10016120 = 0;
long long DAT_10016140 = 0;
long long DAT_10016148 = 0;
long long DAT_10016150 = 0;
long long DAT_10016158 = 0;
long long DAT_10016160 = 0;
long long DAT_10016168 = 0;
long long DAT_10016170 = 0;
int DAT_10016178 = 0;
int DAT_10016179 = 0;
int DAT_1001617a = 0;
int DAT_1001617b = 0;
int DAT_1001617c = 0;
int DAT_1001617d = 0;
long long DAT_10016180 = 0;
long long DAT_10016188 = 0;
long long DAT_10016190 = 0;
long long DAT_10016198 = 0;
int DAT_100161a0 = 0;
long long DAT_100161a8 = 0;
int DAT_100161b0 = 0;
int DAT_100161b4 = 0;
long long DAT_100161c0 = 0;
long long DAT_100161c8 = 0;
long long DAT_100161d8 = 0;
long long DAT_100161e0 = 0;
long long DAT_100161e8 = 0;
long long DAT_100161f0 = 0;
long long DAT_100161f8 = 0;
long long DAT_10016200 = 0;
int DAT_1001623c = 0;
long long DAT_10016240 = 0;
long long DAT_10016248 = 0;
long long DAT_10016250 = 0;
long long DAT_10016260 = 0;
long long DAT_10016268 = 0;
long long DAT_10016270 = 0;
long long DAT_10016278 = 0;
int DAT_10016280 = 0;
long long DAT_10016288 = 0;
long long DAT_10016290 = 0;
long long DAT_10016298 = 0;
int DAT_100162a4 = 0;
long long DAT_100162a8 = 0;
long long DAT_100162b0 = 0;
long long DAT_100162b8 = 0;
long long DAT_100162c0 = 0;
long long DAT_100162c8 = 0;
long long DAT_100162d0 = 0;
long long DAT_100162d8 = 0;
long long DAT_100162f8 = 0;
long long DAT_10016300 = 0;
long long DAT_10016308 = 0;
int DAT_10016310 = 0;
int DAT_10016311 = 0;
int DAT_10016312 = 0;
int DAT_10016313 = 0;
int DAT_10016314 = 0;
int DAT_10016315 = 0;
long long DAT_10016318 = 0;
long long DAT_10016320 = 0;
int DAT_10016328 = 0;
long long DAT_10016330 = 0;
long long DAT_10016338 = 0;
long long DAT_10016340 = 0;
long long DAT_10016348 = 0;
long long DAT_10016350 = 0;
int DAT_10016358 = 0;
long long DAT_10016360 = 0;
long long DAT_10016368 = 0;
int DAT_10016370 = 0;
long long DAT_10016378 = 0;
long long DAT_10016380 = 0;
long long DAT_10016388 = 0;
long long DAT_100163a0 = 0;
long long DAT_100163b0 = 0;
long long DAT_100163b8 = 0;
long long DAT_100163c0 = 0;
long long DAT_100163c8 = 0;
int DAT_10016584 = 0;
long long DAT_10016588 = 0;
int DAT_100165f4 = 0;
int DAT_100165f8 = 0;
char DAT_100165fc = 0;
int DAT_1001663c = 0;

/* Forward declarations */
void ProcessLandAI(void);
void ProcessMiddleSeaAI(void);
static int * FUN_10002f30(void);
static int FUN_10002f60(int param_1,int param_2,int param_3);
static int FUN_10002f90(int param_1,int param_2,int param_3);
static void FUN_10003040(void);
static void FUN_100031c0(void);
static void FUN_10003230(void);
static void FUN_100032d0(void);
static void FUN_10003320(void);
static void FUN_10003360(void);
static void FUN_10004230(void);
static void FUN_10004310(void);
static void FUN_10004360(void);
static void FUN_10005220(void);
static int FUN_10005270(int *param_1);
static void FUN_100052b0(void);
static void FUN_10005a90(void);
static void FUN_10005bd0(void);
static void FUN_10005df0(int param_1);
static void FUN_10005fd0(int param_1);
static void FUN_100062f0(int param_1);
static void FUN_10006630(void);
static void FUN_100066e0(void);
static void FUN_10006730(void);
static void FUN_10006820(void);
static void FUN_10006950(void);
static void FUN_10006b60(void);
static void FUN_10006be0(void);
static void FUN_10006c40(void);
static void FUN_10006d40(void);


int * FUN_10002f30(void)

{
  sprintf(&DAT_10013798,&DAT_1001065c);
  return &DAT_10013798;
}





int  FUN_10002f60(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetTorgResult(param_1,param_2,1000);
  return (param_3 * 1000) / iVar1;
}





int  FUN_10002f90(int param_1,int param_2,int param_3)

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
  iVar2 = FUN_10002f60(param_3,param_1,param_2 - iVar1);
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
    iVar1 = FUN_10002f60(param_3,param_1,param_2 - iVar1);
    uVar5 = AI_Torg(param_3,param_1,iVar1);
    return (((int)((unsigned int)uVar5 >> 8) << 8) | 1);
  }
  return uVar3 & 0xffffff00;
}






void FUN_10003040(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_100162a4 = GetAINation();
  iVar1 = GetUnits(&DAT_10016180);
  iVar2 = GetExtraction(1);
  iVar3 = GetExtraction(4);
  iVar4 = GetExtraction(5);
  DAT_100161a0 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_100162a4 * 0x4b8;
  DAT_100165f4 = *(int *)(&DAT_10013ae0 + iVar1);
  DAT_100161b0 = &DAT_10013950 + iVar1;
  DAT_100161b4 = &DAT_10013ae4 + iVar1;
  DAT_100165f8 = *(int *)(&DAT_10013c74 + iVar1);
  DAT_1001623c = &DAT_10013c78 + iVar1;
  DAT_10016280 = GetMoney(3);
  DAT_10013610 = GetMoney(0);
  DAT_10016370 = GetMoney(2);
  DAT_10013718 = GetMoney(4);
  DAT_100160d8 = GetMoney(5);
  DAT_10016328 = GetMoney(1);
  iVar1 = GetStartRes();
  if (iVar1 == 0) {
    DAT_1000f248 = 4;
  }
  SetMineBalanse(0x13,&DAT_1000f114);
  SetMinesUpgradeRules(&DAT_10016588);
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  DAT_10016178 = 1;
  DAT_1001617a = 1;
  DAT_1001617c = 1;
  DAT_1001617d = 1;
  DAT_10016313 = 1;
  DAT_10016311 = 1;
  DAT_10016314 = 1;
  DAT_10016315 = 1;
  DAT_1001617b = 0;
  DAT_10016179 = 0;
  DAT_10016310 = 0;
  DAT_10016312 = 0;
  DAT_1001663c = 0;
  return;
}





void FUN_100031c0(void)

{
  int iVar1;
  
  if (DAT_10015f48 < 2) {
    iVar1 = GetUnits(&DAT_10013678);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_100136f0,iVar1,0x32,0x32);
      TryUnit(&DAT_10013630,iVar1,0x14,0x32);
    }
  }
  return;
}





void FUN_10003230(void)

{
  TryUpgrade(&DAT_10016340,0x3c,100);
  TryUpgrade(&DAT_10016348,0x3c,100);
  TryUpgrade(&DAT_10016330,0x3c,100);
  TryUpgrade(&DAT_10016338,0x14,100);
  TryUpgrade(&DAT_10016350,10,100);
  TryUpgrade(&DAT_10016288,0x3c,100);
  TryUpgrade(&DAT_10016270,0x3c,100);
  TryUpgrade(&DAT_10016278,0x3c,100);
  TryUpgrade(&DAT_10016290,0x14,100);
  TryUpgrade(&DAT_10016298,10,100);
  return;
}





void FUN_100032d0(void)

{
  TryUpgrade(&DAT_10013900,0x5a,100);
  TryUpgrade(&DAT_10013908,0x5a,100);
  TryUpgrade(&DAT_100138f8,0x5a,100);
  TryUpgrade(&DAT_10015f68,0x5a,100);
  TryUpgrade(&DAT_10015f58,0x5a,100);
  return;
}





void FUN_10003320(void)

{
  TryUpgrade(&DAT_10016088,0x1e,0x32);
  TryUpgrade(&DAT_10016090,0x1e,0x32);
  TryUpgrade(&DAT_10016098,0x1e,0x32);
  TryUpgrade(&DAT_100160a0,0x1e,0x32);
  return;
}





void FUN_10003360(void)

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
  cVar1 = UpgIsDone(&DAT_10016010);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = GetReadyUnits(&DAT_100162c8);
  iVar6 = GetUnits(&DAT_10015fa8);
  iVar7 = GetReadyUnits(&DAT_10015fa8);
  iVar8 = GetUnits(&DAT_10015fd8);
  iVar9 = GetReadyUnits(&DAT_10015fd8);
  iVar10 = GetUnits(&DAT_100160c8);
  iVar11 = GetReadyUnits(&DAT_100160c8);
  iVar12 = GetUnits(&DAT_100162c8);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  TryUpgrade(&DAT_10016010,0x5f,100);
  bVar13 = true;
  iVar5 = GetMoney(3);
  if ((((55000 < iVar5) && (iVar5 = GetMoney(1), 10000 < iVar5)) &&
      (iVar5 = GetMoney(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = GetUnits(&DAT_10016180);
  iVar7 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_100161a8);
  GetUnits(&DAT_10013678);
  iVar8 = GetUnits(&DAT_100160d0);
  iVar11 = GetUnits(&DAT_100163a0);
  iVar9 = GetUnits(&DAT_10016320);
  iVar10 = GetUnits(&DAT_10013678);
  iVar11 = iVar10 + iVar9 + iVar11;
  TryUpgrade(&DAT_10016100,99,0x50);
  TryUpgrade(&DAT_10016140,0x62,0x50);
  iVar9 = GetReadyUnits(&DAT_100138c8);
  iVar10 = GetUnits(&DAT_100138c8);
  if (iVar5 != 0) {
    TryUnit(&DAT_10015fc8,1,100,100);
    iVar12 = GetUnits(&DAT_10015fc8);
    if (iVar12 == 0) {
      return;
    }
    TryUpgrade(&DAT_10016368,100,100);
    cVar2 = FieldExist();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        TryUnit(&DAT_10016180,100,100,100);
        TryUnit(&DAT_10013678,100,100,100);
      }
      SetPDistribution(0,1,1);
    }
    else {
      cVar2 = UpgIsDone(&DAT_10013790);
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
        TryUnit(&DAT_10016180,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          TryUnit(&DAT_10016180,1000,0xe8,100);
        }
        if (300 < iVar7) {
          TryUnit(&DAT_10013678,uVar15,100,0x1e);
        }
      }
      cVar2 = UpgIsDone(&DAT_10016260);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = GetUnits(&DAT_100162c8), 0 < iVar7)
         ) {
        FUN_10003230();
      }
    }
    if (iVar3 < 5) {
      iVar3 = 5;
    }
    else {
      iVar3 = iVar3 + 2;
    }
    TryUnit(&DAT_10015f80,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      TryUnit(&DAT_100138d8,0xc,0x46);
    }
    else {
      TryUnit(&DAT_100138d8,iVar4 + 6,0x1e,0x32);
      TryUnit(&DAT_100138d8,iVar4 + 9,0xf,0x32);
      TryUnit(&DAT_100138d8,iVar4 + 10,10,0x32);
    }
    iVar4 = GetUnitsByUsage(0,0x1f);
    if (iVar4 != 0) {
      TryUpgrade(&DAT_100162d8,0x32,0x32);
      TryUpgrade(&DAT_100162c0,0x32,0x32);
      TryUpgrade(&DAT_100162d0,0x32,0x32);
      TryUpgrade(&DAT_100162b0,0x32,0x32);
      TryUpgrade(&DAT_100162b8,0x32,0x32);
      TryUpgrade(&DAT_100162a8,0x32,0x32);
    }
    TryUnit(&DAT_10013890,3,0x5a,10);
    TryUnit(&DAT_10015fa8,1,100,100);
    TryUnit(&DAT_10015fa8,2,0x5f,5);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015fa8,3,0x5f,5);
    }
    TryUnit(&DAT_100161d8,1,100,100);
    TryUnit(&DAT_10016240,1,100,100);
    TryUnit(&DAT_10015fc0,1,0x32,0x32);
    TryUnit(&DAT_100161d8,2,10,5);
    TryUnit(&DAT_100160c8,1,99,0x5a);
    TryUpgrade(&DAT_10013650,0x50,100);
    iVar4 = GetUnits(&DAT_10015f10);
    if (0 < iVar4) {
      TryUnit(&DAT_10013868,1,0x5a,0x19);
      TryUnit(&DAT_100160e8,1,5,3);
    }
    TryUnit(&DAT_10015f10,1,0x5a,0x5a);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015fd8,1,99,10);
    }
    TryUnit(&DAT_10013608,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      TryUnit(&DAT_10015fc8,2,0x1e,0x1e);
    }
    TryUnit(&DAT_10016248,1,0x5a,0x14);
    TryUnit(&DAT_10016248,2,0x32,5);
    TryUpgrade(&DAT_10016068,0x5a,99);
    TryUpgrade(&DAT_10016020,0x5a,99);
    TryUpgrade(&DAT_10016028,0x5a,99);
    TryUpgrade(&DAT_10016030,0x5a,99);
    TryUpgrade(&DAT_10016260,0x5f,100);
    TryUpgrade(&DAT_100161a8,99,100);
    TryUnit(&DAT_100162c8,1,0x50,0x14);
    TryUnit(&DAT_100162c8,2,0x32,5);
    TryUnit(&DAT_100162c8,3,0x1e,5);
    TryUnit(&DAT_100162c8,5,0x14,5);
    TryUpgrade(&DAT_10013948,0x5f,100);
    iVar4 = GetMaxPeasantsInMines();
    cVar2 = UpgIsRun(&DAT_10016260);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013948,0x5a,0x5a);
      TryUpgrade(&DAT_10013860,99,100);
    }
    cVar2 = UpgIsRun(&DAT_10013948);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013930,0x5a,0x5a);
      TryUpgrade(&DAT_10013870,0x46,10);
      FUN_10003320();
    }
    cVar2 = UpgIsDone(&DAT_100160a0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013658,10,10,0x5a);
      TryUnit(&DAT_10013658,0xf,3,10);
    }
    SetUpgradeLock(1,0);
    iVar7 = GetMoney(0);
    if ((((14000 < iVar7) && (cVar2 = UpgIsRun(&DAT_10013790), cVar2 != '\0')) &&
        (iVar7 = GetMoney(1), iVar7 < 0x1d4c)) &&
       (cVar2 = UpgIsRun(&DAT_10013948), cVar2 == '\0')) {
      SetUpgradeLock(1,1);
    }
    cVar2 = UpgIsRun(&DAT_10013948);
    if (((cVar2 == '\0') || (cVar2 = UpgIsRun(&DAT_100160e0), cVar2 == '\0')) ||
       (cVar2 = UpgIsDone(&DAT_100161a8), cVar2 == '\0')) {
LAB_10003c9c:
      if (iVar4 == 0x5f) {
        TryUpgrade(&DAT_10013758,0x46,10);
        TryUnit(&DAT_10016388,1,0x32,0x1e);
        TryUnit(&DAT_10016388,2,0x1e,0x1e);
        TryUnit(&DAT_10016388,3,0x14,0x1e);
        TryUnit(&DAT_10016388,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = GetMoney(3), 50000 < iVar7 && (iVar7 = GetMoney(1), iVar7 < 0x2008)
          ))) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsRun(&DAT_10016010);
      if (((cVar2 == '\0') && (iVar7 = GetMoney(3), 60000 < iVar7)) &&
         (iVar7 = GetMoney(1), iVar7 < 11000)) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsDone(&DAT_10016010);
      if (cVar2 == '\0') goto LAB_10003c9c;
      if (iVar4 == 0x1c) {
        iVar4 = GetMoney(3);
        if ((50000 < iVar4) && (iVar4 = GetMoney(4), 0x1c84 < iVar4)) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -20000 < 0;
LAB_10003c8c:
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
          goto LAB_10003c8c;
        }
      }
      else {
        if (iVar4 != 0x37) goto LAB_10003c9c;
        iVar4 = GetMoney(3);
        if (80000 < iVar4) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -26000 < 0;
          goto LAB_10003c8c;
        }
      }
    }
    if (((0x50 < iVar5) && (iVar10 == iVar9)) &&
       (TryUnit(&DAT_100138c8,1,0x50,10), 0x5f < iVar5)) {
      TryUnit(&DAT_100138c8,2,0x50,10);
      TryUnit(&DAT_100138c8,3,0x32,10);
      TryUnit(&DAT_100138c8,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016260), cVar2 != '\0')) {
      TryUnit(&DAT_10016150,0x4b,1,0x1e);
      UpgIsDone(&DAT_10016188);
      UpgIsDone(&DAT_100160a0);
    }
    GetUnits(&DAT_10013608);
    TryUnit(&DAT_100161e0,3,0x5a,0x5a);
    cVar2 = UpgIsDone(&DAT_100160e0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_100161e0,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016260), cVar2 != '\0')) {
      if (iVar6 == 0) {
        TryUnit(&DAT_100160c8,2,0x5a,0x14);
        TryUnit(&DAT_100160c8,3,0x5a,0x14);
        TryUnit(&DAT_100160c8,4,0x5a,0x14);
      }
      iVar4 = GetUnits(&DAT_100160d0);
      if (0x14 < iVar4) {
        TryUpgrade(&DAT_100161f8,0x5a,100);
        TryUpgrade(&DAT_10016200,0x50,0x46);
      }
      TryUpgrade(&DAT_100160e0,0x3c,0x5a);
      cVar2 = UpgIsRun(&DAT_100138f8);
      if (cVar2 != '\0') {
        TryUpgrade(&DAT_10016158,0x5a,0x5a);
        TryUpgrade(&DAT_10016168,0x5a,0x5a);
        TryUpgrade(&DAT_10016170,0x46,0x5a);
        TryUpgrade(&DAT_10016160,0x46,0x5a);
      }
    }
    TryUpgrade(&DAT_10013790,99,100);
    TryUpgrade(&DAT_100138d0,0x3c,0x5a);
    iVar4 = GetUnits(&DAT_10016240);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        TryUnit(&DAT_100160d0,500,10,10);
      }
      FUN_100032d0();
    }
  }
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10013620,0x5f,0x5a);
    TryUpgrade(&DAT_100136f8,0x5f,0x5a);
    TryUpgrade(&DAT_10013618,0x5f,0x5a);
    TryUnit(&DAT_10016240,2,0x5f,0x5a);
  }
  cVar1 = UpgIsRun(&DAT_10013790);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_100161e8,0x5f,0x5a);
    TryUpgrade(&DAT_100161f0,0x5f,0x5a);
  }
  iVar4 = GetReadyUnits(&DAT_10013868);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = GetUnits(&DAT_10015f10);
  if ((((iVar4 != 0) && (cVar1 = UpgIsRun(&DAT_10016260), cVar1 == '\0')) &&
      (iVar4 = GetMoney(1), 800 < iVar4)) &&
     ((iVar4 = GetMoney(3), iVar4 < 6000 && (iVar4 = GetMoney(4), 3000 < iVar4)))) {
    AI_Torg(4,3,3000);
  }
  iVar4 = GetMoney(3);
  if ((iVar4 < 1000) && (iVar4 = GetMoney(2), 5000 < iVar4)) {
    AI_Torg(2,3,4000);
  }
  cVar1 = UpgIsDone(&DAT_100161e8);
  if ((cVar1 == '\0') || (cVar1 = UpgIsDone(&DAT_100161f0), cVar1 == '\0')) {
    iVar4 = GetMoney(2);
    if (iVar4 < 0x1adb1) goto LAB_100041ba;
    uVar17 = 90000;
    uVar15 = 1;
  }
  else {
    iVar4 = GetMoney(2);
    if (110000 < iVar4) {
      AI_Torg(2,1,100000);
    }
    iVar4 = GetMoney(0);
    if (iVar4 == 0) goto LAB_100041ba;
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
      goto LAB_100041ba;
    }
    iVar4 = GetMoney(5);
    if ((iVar4 < 5000) && (iVar4 = GetMoney(0), iVar4 != 0)) {
      AI_Torg(2,5,50000);
    }
    iVar4 = GetMoney(5);
    if ((4999 < iVar4) || (iVar4 = GetMoney(0), iVar4 == 0)) goto LAB_100041ba;
    uVar17 = 50000;
    uVar15 = 5;
  }
  AI_Torg(2,uVar15,uVar17);
LAB_100041ba:
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





void FUN_10004230(void)

{
  int iVar1;
  
  iVar1 = GetMoney(3);
  if (0x672 < iVar1) {
    TryUpgrade(&DAT_10016340,0x28,100);
    TryUpgrade(&DAT_10016348,0x5a,100);
    TryUpgrade(&DAT_10016330,0x5a,100);
    TryUpgrade(&DAT_10016338,0x5a,100);
    TryUpgrade(&DAT_10016350,0x5a,100);
    TryUpgrade(&DAT_10016288,0x5a,100);
    TryUpgrade(&DAT_10016270,0x5a,100);
    TryUpgrade(&DAT_10016278,0x5a,100);
    TryUpgrade(&DAT_10016290,0x5a,100);
    TryUpgrade(&DAT_10016298,0x5a,100);
    TryUpgrade(&DAT_10016250,0x32,100);
    TryUpgrade(&DAT_10015fb8,0x32,100);
  }
  return;
}





void FUN_10004310(void)

{
  TryUpgrade(&DAT_10013900,0x5a,100);
  TryUpgrade(&DAT_10013908,0x5a,100);
  TryUpgrade(&DAT_100138f8,0x5a,100);
  TryUpgrade(&DAT_10015f68,10,100);
  TryUpgrade(&DAT_10015f58,10,100);
  return;
}





void FUN_10004360(void)

{
  TryUpgrade(&DAT_100161c8,0x1e,0x32);
  TryUpgrade(&DAT_100161c0,0x1e,0x32);
  TryUpgrade(&DAT_10016190,0x1e,0x32);
  TryUpgrade(&DAT_10016188,0x1e,0x32);
  TryUpgrade(&DAT_10016088,0x1e,0x32);
  TryUpgrade(&DAT_10016090,0x1e,0x32);
  TryUpgrade(&DAT_10016098,0x1e,0x32);
  TryUpgrade(&DAT_100160a0,0x1e,0x32);
  return;
}





void FUN_10005220(void)

{
  TryUnit(&DAT_10015fc8,1,100,100);
  TryUnit(&DAT_10015fa8,1,100,100);
  TryUnit(&DAT_10015fc0,1,100,100);
  TryUnit(&DAT_10013868,1,100,100);
  return;
}





int  FUN_10005270(int *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_10013678) {
    cVar1 = UpgIsDone(&DAT_10016330);
    if (cVar1 != '\0') {
      cVar1 = UpgIsDone(&DAT_10016278);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}





void FUN_100052b0(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetUnits(&DAT_10016268);
  if (iVar2 == 0) {
    iVar2 = GetUnits(&DAT_100138b8);
    if (iVar2 != 0) goto LAB_100052d4;
  }
  else {
LAB_100052d4:
    TryUpgrade(&DAT_10013940,100,100);
    TryUpgrade(&DAT_100161e8,100,100);
    TryUpgrade(&DAT_100161f0,100,100);
  }
  iVar2 = GetUnits(&DAT_100163a0);
  if (iVar2 < 0x15) {
    iVar2 = GetUnits(&DAT_10016320);
    if (iVar2 < 0x15) {
      iVar2 = GetUnits(&DAT_10013678);
      if (iVar2 < 0x8d) goto LAB_1000539d;
    }
  }
  TryUpgrade(&DAT_10013618,0x5f,100);
  TryUpgrade(&DAT_10013620,0x5f,100);
  iVar2 = GetUnits(&DAT_100163a0);
  if (iVar2 < 0x8d) {
    iVar2 = GetUnits(&DAT_10016320);
    if (0x3c < iVar2) goto LAB_1000538b;
    uVar3 = 0xf;
  }
  else {
LAB_1000538b:
    uVar3 = 0x5f;
  }
  TryUpgrade(&DAT_100136f8,uVar3,100);
LAB_1000539d:
  iVar2 = GetUnits(&DAT_10013678);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_10016340,0x50,100);
    TryUpgrade(&DAT_10016348,0x55,100);
    TryUpgrade(&DAT_10016330,0x5a,100);
    TryUpgrade(&DAT_10016288,0x50,100);
    TryUpgrade(&DAT_10016270,0x55,100);
    TryUpgrade(&DAT_10016278,0x5a,100);
    iVar2 = GetUnits(&DAT_10013678);
    if (0x78 < iVar2) {
      TryUpgrade(&DAT_10016338,0x5a,100);
      TryUpgrade(&DAT_10016350,0x5a,100);
      TryUpgrade(&DAT_10016290,0x5a,100);
      TryUpgrade(&DAT_10016298,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_100160d0);
  if (0x1e < iVar2) {
    TryUpgrade(&DAT_10013900,0x5a,100);
    TryUpgrade(&DAT_10013908,0x5a,100);
    TryUpgrade(&DAT_100138f8,0x5a,100);
    TryUpgrade(&DAT_10015f68,0x1e,100);
    TryUpgrade(&DAT_10015f58,0x1e,100);
    TryUpgrade(&DAT_10015f60,0x1e,100);
    TryUpgrade(&DAT_100161f8,0x5a,100);
    iVar2 = GetUnits(&DAT_100160d0);
    if (100 < iVar2) {
      TryUpgrade(&DAT_10016200,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_100136f0);
  if (4 < iVar2) {
    TryUpgrade(&DAT_10016250,0x5a,100);
    TryUpgrade(&DAT_10015fb8,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_100163a0);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10016120,0x50,100);
    TryUpgrade(&DAT_10016118,0x55,100);
    TryUpgrade(&DAT_10016110,0x5a,100);
    TryUpgrade(&DAT_10016008,0x50,100);
    TryUpgrade(&DAT_10016000,0x55,100);
    TryUpgrade(&DAT_10015ff8,0x5a,100);
    iVar2 = GetUnits(&DAT_100163a0);
    if (0x32 < iVar2) {
      TryUpgrade(&DAT_10016108,0x5f,100);
      TryUpgrade(&DAT_100160f8,0x5f,100);
      TryUpgrade(&DAT_10016148,0x5f,100);
      TryUpgrade(&DAT_10015ff0,0x5f,100);
      TryUpgrade(&DAT_10015fe8,0x5f,100);
      TryUpgrade(&DAT_10015fe0,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10016320);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013738,0x5a,100);
    TryUpgrade(&DAT_10013730,0x5a,100);
    TryUpgrade(&DAT_10013728,0x5a,100);
    TryUpgrade(&DAT_100136a8,0x5a,100);
    TryUpgrade(&DAT_100136a0,0x5a,100);
    TryUpgrade(&DAT_10013698,0x5f,100);
    TryUpgrade(&DAT_10013690,0x5f,100);
    TryUpgrade(&DAT_10013668,0x5f,100);
    TryUpgrade(&DAT_10013660,0x5f,100);
    cVar1 = UpgIsRun(&DAT_10013660);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10013710,0x5f,100);
      TryUpgrade(&DAT_10013708,0x5f,100);
      TryUpgrade(&DAT_10013700,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013680);
  if (0x14 < iVar2) {
    iVar2 = GetUnits(&DAT_10013670);
    if (iVar2 < 0x14) {
      TryUpgrade(&DAT_100138f0,0x50,100);
      TryUpgrade(&DAT_100138e8,0x55,100);
      TryUpgrade(&DAT_100138e0,0x5a,100);
      TryUpgrade(&DAT_100138a8,0x5f,100);
      TryUpgrade(&DAT_100138a0,0x5f,100);
      TryUpgrade(&DAT_10013898,0x5f,100);
      TryUpgrade(&DAT_100161f8,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013670);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013648,0x50,100);
    TryUpgrade(&DAT_10013640,0x55,100);
    TryUpgrade(&DAT_10013638,0x5a,100);
    TryUpgrade(&DAT_10016308,0x5f,100);
    TryUpgrade(&DAT_10016300,0x5f,100);
    TryUpgrade(&DAT_100162f8,0x5f,100);
    TryUpgrade(&DAT_10016380,10,100);
    TryUpgrade(&DAT_10016378,0xf,100);
    TryUpgrade(&DAT_100163c8,0x14,100);
    TryUpgrade(&DAT_100163c0,0x19,100);
    TryUpgrade(&DAT_100163b8,0x19,100);
    TryUpgrade(&DAT_100163b0,0x19,100);
    TryUpgrade(&DAT_100161f8,0x5a,100);
    TryUpgrade(&DAT_10016200,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015f70);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_100136d0,0x5a,100);
    TryUpgrade(&DAT_100136d8,0x5a,100);
    TryUpgrade(&DAT_100136e0,0x5a,100);
    TryUpgrade(&DAT_100136e8,0x5a,100);
    TryUpgrade(&DAT_100136b0,0x5a,100);
    TryUpgrade(&DAT_100136c0,0x5a,100);
    TryUpgrade(&DAT_10013778,0x5a,100);
    TryUpgrade(&DAT_10013780,0x5a,100);
    TryUpgrade(&DAT_10013788,0x5a,100);
    TryUpgrade(&DAT_10013760,0x5a,100);
    TryUpgrade(&DAT_10013768,0x5a,100);
    TryUpgrade(&DAT_10013770,0x5a,100);
    iVar2 = GetUnits(&DAT_10015f70);
    if (iVar2 < 0x3d) {
      TryUpgrade(&DAT_10016018,0xf,100);
      uVar3 = 0xf;
    }
    else {
      TryUpgrade(&DAT_10016018,0x5a);
      uVar3 = 0x5a;
    }
    TryUpgrade(&DAT_10016078,uVar3,100);
    cVar1 = UpgIsRun(&DAT_10016018);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016078);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016070,0x5a,100);
      }
    }
    TryUpgrade(&DAT_100161f8,0x5a,100);
    TryUpgrade(&DAT_10016200,0x5a,100);
  }
  cVar1 = UpgIsDone(&DAT_100162f8);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016160,0x5a,100);
    cVar1 = UpgIsRun(&DAT_10016160);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016170,0x5a,100);
      cVar1 = UpgIsRun(&DAT_10016170);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016168,0x5a,100);
        cVar1 = UpgIsRun(&DAT_10016168);
        if (cVar1 != '\0') {
          TryUpgrade(&DAT_10016158,0x5a,100);
        }
      }
    }
  }
  return;
}





void FUN_10005a90(void)

{
  char cVar1;
  int iVar2;
  
  TryUpgrade(&DAT_10016368,0x32,100);
  iVar2 = GetUnits(&DAT_10015f10);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10013650,100,100);
  }
  TryUpgrade(&DAT_10016068,100,100);
  iVar2 = FUN_10005270(&DAT_10013678);
  if ((iVar2 != 0) || ((DAT_10015f48 != 0 && (DAT_10015f48 != 5)))) {
    TryUpgrade(&DAT_10016260,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015fd8);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10016030,100,100);
  }
  cVar1 = UpgIsRun(&DAT_10016140);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016020,100,100);
  }
  TryUpgrade(&DAT_10016140,0x5c,100);
  TryUpgrade(&DAT_100160f0,0x62,100);
  iVar2 = GetUnits(&DAT_100160c8);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100161a8,0x62,100);
  }
  TryUpgrade(&DAT_10016010,0x62,100);
  iVar2 = GetUnits(&DAT_10016248);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100138d0,100,100);
  }
  return;
}





void FUN_10005bd0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  TryUnit(&DAT_10016248,3,100,100);
  iVar2 = GetReadyUnits(&DAT_10015fd8);
  if (iVar2 != 0) {
    TryUnit(&DAT_10015fc8,2,100,100);
    TryUnit(&DAT_10015fc0,4,100,100);
  }
  TryUnit(&DAT_10015fc8,1,100,100);
  TryUnit(&DAT_10015fa8,1,100,100);
  if (*(int *)(&DAT_10015f88 + DAT_100162a4 * 4) == 0) {
    FUN_10005220();
    iVar2 = GetReadyUnits(&DAT_10013868);
    if (iVar2 == 0) {
      return;
    }
  }
  TryUnit(&DAT_100161d8,1,100,100);
  TryUnit(&DAT_10015fa8,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10015fa8);
  if ((iVar2 < 2) && (iVar2 = GetStartRes(), iVar2 != 0)) {
    return;
  }
  TryUnit(&DAT_10016240,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016240);
  iVar3 = GetUnits(&DAT_10016240);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    TryUnit(&DAT_10015f10,1,100,100);
    iVar2 = GetPeaceTimeLeft();
    if (iVar2 < 3) {
      TryUnit(&DAT_10015fd8,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10015fd8);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_10005220();
    TryUnit(&DAT_10015fa8,4,100,100);
    iVar2 = GetReadyUnits(&DAT_10015fa8);
    if (2 < iVar2) {
      TryUnit(&DAT_100160c8,3,100,100);
      iVar2 = GetUnits(&DAT_10016248);
      if (iVar2 != 0) {
        TryUnit(&DAT_100160c8,4,100,100);
      }
      TryUnit(&DAT_10013608,1,100,100);
      TryUnit(&DAT_10013608,3,0x28,100);
      cVar1 = UpgIsDone(&DAT_100138d0);
      if (cVar1 != '\0') {
        TryUnit(&DAT_100160c8,5,100,100);
      }
      TryUnit(&DAT_100160e8,1,100,100);
    }
  }
  return;
}





void  FUN_10005df0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetUnits(&DAT_10016268,param_1);
  if (iVar2 < 0x28) {
    SetAIRegister(DAT_100162a4 + 8,0);
  }
  iVar2 = GetUnits(&DAT_10016268);
  if (iVar2 < 0x9d) {
    iVar2 = GetReadyUnits(&DAT_100160c8);
    if (iVar2 == 0) goto LAB_10005e52;
  }
  SetAIRegister(DAT_100162a4 + 8,1);
LAB_10005e52:
  iVar2 = 2;
  do {
    TryUnit(&DAT_10016180,1000,0x14,100);
    iVar3 = GetUnits(&DAT_10013678);
    if (iVar3 < 0x8c) {
      TryUnit(&DAT_10013678,1000,0x14,100);
    }
    else {
      TryUnit(&DAT_10013678,1000,0x14,0x28);
      TryUnit(&DAT_100160d0,1000,0x14,100);
    }
    iVar3 = GetAIRegister(DAT_100162a4 + 8);
    if (iVar3 == 0) {
      iVar3 = GetPeaceTimeLeft();
      if (iVar3 < 1) {
        TryUnit(&DAT_10016268,0xa0,0x14,100);
      }
    }
    if (0) {
LAB_10005f25:
      iVar3 = GetMoney(5);
      if (2000 < iVar3) {
        iVar3 = GetMoney(4);
        if (2000 < iVar3) {
          iVar3 = 0x1e;
          do {
            TryUnit(&DAT_10013878,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = GetUnitCost(DAT_100162a4 & 0xff,&DAT_10013878,1);
      if (iVar3 < 0x78) goto LAB_10005f25;
    }
    cVar1 = UpgIsDone(&DAT_10016010);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    TryUnit(&DAT_100163a0,1000,0x14,uVar4);
    TryUnit(&DAT_10013670,1000,0x14,100);
    TryUnit(&DAT_10015f70,1000,0x14,100);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}





void  FUN_10005fd0(int param_1)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetReadyUnits(&DAT_10013868,param_1);
  if (iVar2 != 0) {
    iVar2 = GetStartRes();
    if (iVar2 == 3) {
      iVar2 = GetAIRegister(DAT_100162a4);
      if (iVar2 == 0) {
        AI_Torg(2,3,500000);
        AI_Torg(0,3,80000);
        SetAIRegister(DAT_100162a4,1);
        return;
      }
    }
    else {
      iVar2 = GetReadyUnits(&DAT_10013868);
      if (iVar2 != 0) {
        iVar2 = GetAIRegister(DAT_100162a4);
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
          SetAIRegister(DAT_100162a4,1);
        }
        cVar1 = UpgIsRun(&DAT_10016260);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016140);
          if (cVar1 == '\0') {
            iVar2 = GetReadyUnits(&DAT_10015f10);
            if (iVar2 != 0) {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_100162a4 & 0xff,&DAT_10016140,5);
              }
              FUN_10002f90(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = UpgIsRun(&DAT_10016140);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016010);
          if (cVar1 == '\0') {
            if (0) {
              iVar2 = 0;
            }
            else {
              iVar2 = GetUpgradeCost(DAT_100162a4 & 0xff,&DAT_10016010,3);
            }
            uVar3 = FUN_10002f90(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_100162a4 & 0xff,&DAT_10016010,1);
              }
              uVar3 = FUN_10002f90(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = GetUpgradeCost(DAT_100162a4 & 0xff,&DAT_10016010,4);
                }
                FUN_10002f90(4,(iVar2 * 0xb) / 10,2);
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





void  FUN_100062f0(int param_1)

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
  cVar1 = UpgIsRun(&DAT_100160f0);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100162a4,&DAT_100160f0,3);
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
  cVar1 = UpgIsRun(&DAT_10016010);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100162a4,&DAT_10016010,3);
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
  cVar1 = UpgIsRun(&DAT_10016140);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100162a4,&DAT_10016140,3);
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
  cVar1 = UpgIsRun(&DAT_10016330);
  if (((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10016278), cVar1 == '\0')) &&
     (iVar2 = GetMoney(3), iVar2 < 9000)) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015fd8);
  if ((iVar2 == 0) && (iVar2 = GetPeaceTimeLeft(), iVar2 < 2)) {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUnitCost((char)DAT_100162a4,&DAT_10015fd8,2);
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
  cVar1 = UpgIsRun(&DAT_10016260);
  if (cVar1 == '\0') {
    SetPDistribution(9,1,1);
  }
  cVar1 = UpgIsRun(&DAT_10016068);
  if ((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10013650), cVar1 == '\0')) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015f10);
  if (iVar2 == 0) {
    SetPDistribution(6,4,4);
  }
  cVar1 = UpgIsRun(&DAT_10016368);
  if (cVar1 != '\0') {
    return;
  }
  SetPDistribution(9,1,1);
  return;
}





void FUN_10006630(void)

{
  char cVar1;
  
  SetMinesUpgradeRules(&DAT_10016588);
  cVar1 = UpgIsRun(&DAT_10016330);
  if (cVar1 != '\0') {
    cVar1 = UpgIsRun(&DAT_10016278);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f16c);
      return;
    }
  }
  if (((DAT_10015f48 == 2) || (DAT_10015f48 == 3)) || (DAT_10015f48 == 4)) {
    SetMinesUpgradeRules(&DAT_1000f1d8);
  }
  else {
    cVar1 = UpgIsRun(&DAT_10016260);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016140);
      if (cVar1 == '\0') {
        SetMinesUpgradeRules(&DAT_10016588);
        return;
      }
    }
    cVar1 = UpgIsRun(&DAT_10016140);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f1d8);
      return;
    }
  }
  return;
}





void FUN_100066e0(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = FUN_10005270(&DAT_10013678);
  if (iVar1 != 0) {
    SetDefenseState(0);
  }
  iVar1 = GetMaxPeaceTime();
  if ((iVar1 < 1) && (iVar1 = GetReadyUnits(&DAT_100138c8), iVar1 < 1)) {
    return;
  }
  SetDefenseState(0);
  return;
}





void FUN_10006730(void)

{
  char cVar1;
  
  cVar1 = UpgIsDone(&DAT_10016188);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10016360,0x1e,0x1e,0x3c);
  }
  cVar1 = UpgIsDone(&DAT_100160a0);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10013658,0x14,0x1e,0x3c);
  }
  TryUnit(&DAT_100138b8,0x3c,0x50,100);
  TryUpgrade(&DAT_100161c8,0x1e,100);
  TryUpgrade(&DAT_100161c0,0x1e,100);
  TryUpgrade(&DAT_10016190,0x1e,100);
  TryUpgrade(&DAT_10016188,0x1e,100);
  TryUpgrade(&DAT_10016198,0x1e,100);
  TryUpgrade(&DAT_10016088,0x1e,100);
  TryUpgrade(&DAT_10016090,0x1e,100);
  TryUpgrade(&DAT_10016098,0x1e,100);
  TryUpgrade(&DAT_100160a0,0x1e,100);
  return;
}





void FUN_10006820(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = GetReadyUnits(&DAT_100138c8);
  iVar3 = GetUnits(&DAT_10016240);
  iVar4 = GetReadyUnits(&DAT_10016240);
  iVar5 = GetUnits(&DAT_10015f10);
  iVar6 = GetReadyUnits(&DAT_10015f10);
  iVar7 = GetUnits(&DAT_100138c8);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_100161a0)) {
    TryUnit(&DAT_100138c8,4,0x32,100);
    cVar1 = UpgIsRun(&DAT_100161a8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100138c8,6,0x32,100);
    }
    cVar1 = UpgIsRun(&DAT_10016010);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100138c8,8,0x32,100);
    }
  }
  TryUpgrade(&DAT_100162d8,0x32,100);
  TryUpgrade(&DAT_100162c0,0x28,100);
  TryUpgrade(&DAT_100162d0,0x1e,100);
  TryUpgrade(&DAT_100162b0,0x14,100);
  TryUpgrade(&DAT_100162b8,0xf,100);
  TryUpgrade(&DAT_100162a8,10,100);
  return;
}





void FUN_10006950(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetReadyUnits(&DAT_10016248);
  iVar3 = GetUnits(&DAT_10016248);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10016248,5,100,100);
  }
  TryUnit(&DAT_10015fa8,1,100,100);
  TryUnit(&DAT_100161d8,1,100,100);
  TryUnit(&DAT_10016240,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016240);
  iVar3 = GetUnits(&DAT_10016240);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10015f10,1,100,100);
    iVar2 = GetReadyUnits(&DAT_10015f10);
    if (iVar2 != 0) {
      TryUnit(&DAT_10015fc0,1,100,100);
      TryUnit(&DAT_10015fc8,1,100,100);
      TryUnit(&DAT_10013868,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10013868);
      if (iVar2 != 0) {
        TryUnit(&DAT_10015fd8,1,100,100);
        TryUnit(&DAT_100160e8,1,100,100);
        TryUnit(&DAT_10013608,1,100,100);
        TryUnit(&DAT_100160c8,1,100,100);
        cVar1 = UpgIsRun(&DAT_10016010);
        if (cVar1 != '\0') {
          iVar2 = GetReadyUnits(&DAT_10015fa8);
          iVar3 = GetUnits(&DAT_10015fa8);
          if (iVar3 == iVar2) {
            iVar2 = GetExtraction(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            TryUnit(&DAT_10015fa8,uVar4,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_100160c8);
          iVar3 = GetUnits(&DAT_100160c8);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_100160c8,7,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_10013608);
          iVar3 = GetUnits(&DAT_10013608);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_10013608,3,100,100);
          }
        }
      }
    }
  }
  return;
}





void FUN_10006b60(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = GetUnits(&DAT_10013878);
  if (iVar1 < 4) {
    SetAIRegister(DAT_100162a4 + 8,0);
  }
  iVar1 = GetUnits(&DAT_10013878);
  if (0x5f < iVar1) {
    SetAIRegister(DAT_100162a4 + 8,1);
  }
  iVar1 = GetAIRegister(DAT_100162a4 + 8);
  SetDefenseState((((int)((unsigned int)iVar1 >> 8) << 8) | iVar1 == 0));
  SetDefenseState(0);
  return;
}





void FUN_10006be0(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int uVar2;
  
  uVar2 = 0;
  if (*(int *)(&DAT_10015f88 + DAT_100162a4 * 4) != 0) {
    FUN_100066e0();
    uVar2 = extraout_ECX;
  }
  FUN_10005df0(uVar2);
  FUN_10006730();
  iVar1 = GetPeaceTimeLeft();
  if (iVar1 < 5) {
    FUN_10006820();
  }
  FUN_10005bd0();
  FUN_10005a90();
  iVar1 = GetPeaceTimeLeft();
  uVar2 = extraout_ECX_00;
  if (iVar1 < 3) {
    FUN_100052b0();
    uVar2 = extraout_ECX_01;
  }
  FUN_10005fd0(uVar2);
  FUN_100062f0(extraout_ECX_02);
  FUN_10006630();
  return;
}





void FUN_10006c40(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  
  FUN_10006b60();
  FUN_10006950();
  iVar3 = 2;
  do {
    TryUnit(&DAT_10016180,1000,0x14,100);
    TryUnit(&DAT_10013678,1000,0x14,100);
    iVar2 = GetAIRegister(DAT_100162a4 + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        TryUnit(&DAT_10013878,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      TryUnit(&DAT_10016150,0x3c,10,100);
    }
    cVar1 = UpgIsDone(&DAT_10016010);
    if (cVar1 == '\0') {
      TryUnit(&DAT_10013680,1000,0x14,100);
    }
    TryUnit(&DAT_10013670,1000,0x14,100);
    TryUnit(&DAT_10015f70,1000,0x14,100);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10006730();
  FUN_10005fd0(extraout_ECX);
  FUN_100062f0(extraout_ECX_00);
  FUN_100052b0();
  FUN_10005a90();
  return;
}






void FUN_10006d40(void)

{
  DAT_10015f48 = GetLandType();
  DAT_10016358 = GetDifficulty();
  DAT_10013888 = GetStartRes();
  FUN_10003040();
  SetMineBalanse(0x13,&DAT_1000f114);
  FUN_10006630();
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  switch(DAT_10015f48) {
  case 0:
  case 5:
    if (DAT_10013888 == 3) {
      SetMineBalanse(3,&DAT_1000f160);
      SetMinesUpgradeRules(&DAT_1000f16c);
      SetMinesBuildingRules(&DAT_1000f41c,5);
      FUN_10006c40();
    }
    else {
      SetMineBalanse(0x13,&DAT_1000f114);
      SetMinesUpgradeRules(&DAT_10016588);
      if (DAT_10013888 == 0) {
        DAT_1000f248 = 4;
      }
      SetMinesBuildingRules(&DAT_1000f244,0x1b);
      FUN_10006be0();
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
    FUN_10003360();
  }
  FUN_100031c0();
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
  iVar3 = GetUnits(&DAT_10016180);
  iVar4 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_100161a8);
  GetUnits(&DAT_10013678);
  UpgIsDone(&DAT_10016010);
  GetUnits(&DAT_100160d0);
  iVar5 = GetUnits(&DAT_100163a0);
  iVar6 = GetUnits(&DAT_10016320);
  iVar7 = GetUnits(&DAT_10013678);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = GetDifficulty();
  if (0 < iVar6) {
    TryUnit(&DAT_10016318,0xf,0x14,0x28);
  }
  iVar6 = GetReadyUnits(&DAT_100138c8);
  iVar7 = GetUnits(&DAT_100138c8);
  if (iVar3 == 0) {
    return;
  }
  TryUnit(&DAT_10015fc8,1,100,100);
  iVar8 = GetUnits(&DAT_10015fc8);
  if (iVar8 == 0) {
    return;
  }
  TryUpgrade(&DAT_10016368,100,100);
  cVar2 = FieldExist();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      TryUnit(&DAT_10016180,100,100,100);
      TryUnit(&DAT_10013678,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_10004230();
    }
    SetPDistribution(0,1,1);
  }
  else {
    if (DAT_10016584 == 0) {
      if (12000 < iVar4) {
        SetPDistribution(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_10004599:
      SetPDistribution(9,uVar12,uVar13);
    }
    else {
      if (DAT_10016584 == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_10004599;
      }
      if (DAT_10016584 == 2) {
        uVar13 = 9;
        uVar12 = 4;
        goto LAB_10004599;
      }
    }
    uVar12 = 0x1c2;
    if (cVar1 != '\0') {
      uVar12 = 0x17c;
    }
    if (iVar3 < 0x19) {
      if (300 < iVar4) {
        TryUnit(&DAT_10016180,100,100,100);
        goto LAB_100045d7;
      }
    }
    else {
LAB_100045d7:
      if ((300 < iVar4) && (TryUnit(&DAT_10016180,uVar12,0xe8,100), 400 < iVar4)) {
        TryUnit(&DAT_10013678,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_10004230();
    }
  }
  TryUnit(&DAT_10015fa8,1,100,100);
  TryUnit(&DAT_10015fa8,2,0x5a,5);
  TryUnit(&DAT_10015fa8,3,0x5a,5);
  iVar8 = GetUnits(&DAT_10016240);
  if (1 < iVar8) {
    TryUnit(&DAT_10015fa8,2,0x50,5);
    iVar8 = GetUnits(&DAT_10015fa8);
    if (1 < iVar8) {
      TryUnit(&DAT_100160c8,1,99,0x5a);
    }
    iVar8 = GetReadyUnits(&DAT_10015fa8);
    if (1 < iVar8) {
      TryUnit(&DAT_10013868,1,100,100);
    }
    TryUpgrade(&DAT_10016100,99,100);
  }
  iVar8 = GetUnits(&DAT_10016180);
  if (0x23 < iVar8) {
    TryUnit(&DAT_10013868,1,100,100);
  }
  TryUnit(&DAT_100161d8,1,100,100);
  TryUnit(&DAT_10016240,1,100,100);
  TryUnit(&DAT_10016240,2,100,100);
  TryUnit(&DAT_10015fc0,1,0x32,0x32);
  TryUnit(&DAT_100161d8,2,10,5);
  TryUpgrade(&DAT_10013650,0x50,100);
  iVar8 = GetUnits(&DAT_10015f10);
  if (0 < iVar8) {
    TryUnit(&DAT_100160e8,1,5,3);
  }
  cVar2 = FieldExist();
  if (cVar2 != '\0') {
    TryUnit(&DAT_10015f10,1,0x5a,0x5a);
  }
  TryUnit(&DAT_10015fd8,1,99,10);
  TryUnit(&DAT_10013608,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    TryUnit(&DAT_10015fc8,2,0x1e,0x1e);
  }
  TryUnit(&DAT_10016248,1,0x5a,0x14);
  TryUnit(&DAT_10016248,2,0x50,5);
  TryUpgrade(&DAT_10016068,0x5a,99);
  TryUpgrade(&DAT_10016260,0x5f,100);
  TryUpgrade(&DAT_100161a8,100,100);
  TryUpgrade(&DAT_10016030,0x5a,0x5a);
  TryUpgrade(&DAT_10016020,0x5f,100);
  TryUpgrade(&DAT_10016028,0x5f,100);
  iVar8 = GetReadyUnits(&DAT_100160c8);
  if (((iVar8 == 0) || (cVar2 = UpgIsRun(&DAT_100161a8), cVar2 != '\0')) ||
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
  TryUpgrade(&DAT_10013790,100,100);
  TryUnit(&DAT_100162c8,1,0x32,0x5a);
  TryUnit(&DAT_100162c8,2,0x14,0x32);
  TryUnit(&DAT_100162c8,3,10,0x32);
  cVar2 = UpgIsDone(&DAT_10013948);
  if (cVar2 == '\0') {
    iVar9 = GetUnitsByUsage(0,0x1c);
    iVar10 = GetUnitsByUsage(0,0x1b);
    iVar8 = GetUnitsByUsage(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_10015f80;
      goto LAB_10004a03;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_10015f80;
      goto LAB_10004a03;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_100138d8;
LAB_10004a03:
    TryUnit(puVar11,iVar8,0x32,0x32);
  }
  TryUpgrade(&DAT_10013948,99,100);
  cVar2 = UpgIsRun(&DAT_10016260);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013948,0x5a,0x5a);
    TryUpgrade(&DAT_10013860,99,100);
  }
  cVar2 = UpgIsRun(&DAT_10013948);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013930,0x5a,0x5a);
    TryUpgrade(&DAT_10013870,0x46,10);
    FUN_10003320();
  }
  SetUpgradeLock(1,0);
  iVar8 = GetMoney(0);
  if ((((14000 < iVar8) && (cVar2 = UpgIsRun(&DAT_10013790), cVar2 != '\0')) &&
      (iVar8 = GetMoney(1), iVar8 < 0x1d4c)) &&
     (cVar2 = UpgIsRun(&DAT_10013948), cVar2 == '\0')) {
    SetUpgradeLock(1,1);
  }
  TryUnit(&DAT_100161e0,3,0x5a,0x5a);
  cVar2 = UpgIsDone(&DAT_100160e0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161e0,0x14,10,0x5a);
  }
  TryUpgrade(&DAT_100160e0,99,0x5a);
  TryUpgrade(&DAT_100160f0,99,100);
  TryUpgrade(&DAT_100162d8,0x32,0x32);
  TryUpgrade(&DAT_100162c0,0x32,0x32);
  TryUpgrade(&DAT_100162d0,0x32,0x32);
  TryUpgrade(&DAT_100162b0,0x32,0x32);
  TryUpgrade(&DAT_100162b8,0x32,0x32);
  TryUpgrade(&DAT_100162a8,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     (TryUnit(&DAT_100138c8,1,0x50,10), 0x3c < iVar3)) {
    TryUnit(&DAT_100138c8,2,0x50,10);
    TryUnit(&DAT_100138c8,3,0x32,10);
    TryUnit(&DAT_100138c8,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    TryUnit(&DAT_10016150,0x32,1,0x1e);
    TryUnit(&DAT_10016268,0x14,1,0x1e);
  }
  else {
    TryUnit(&DAT_100138b8,0x32,10,100);
    TryUnit(&DAT_10016150,0x4b,1,0x1e);
    TryUnit(&DAT_10016268,0x1e,1,0x1e);
    TryUpgrade(&DAT_10013620,0x5f,0x5a);
    TryUpgrade(&DAT_100136f8,0x5f,0x5a);
    TryUpgrade(&DAT_10013618,0x5f,0x5a);
    cVar2 = UpgIsDone(&DAT_10016188);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10016360,5,0x1e,10);
    }
    cVar2 = UpgIsDone(&DAT_100160a0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013658,10,0x1e,10);
    }
    FUN_10004360();
  }
  cVar2 = UpgIsDone(&DAT_10016010);
  if (cVar2 != '\0') {
    cVar2 = UpgIsDone(&DAT_100160f0);
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
  iVar3 = GetUnits(&DAT_100160c8);
  if (iVar3 != 0) {
    TryUnit(&DAT_100161e0,6,0x5a,0x5a);
  }
  cVar2 = UpgIsDone(&DAT_100160e0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161e0,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    TryUnit(&DAT_100160c8,2,0x5f,0x14);
    TryUnit(&DAT_100160c8,3,0x5f,0x14);
    TryUnit(&DAT_100160c8,4,0x5f,0x14);
    TryUnit(&DAT_100160c8,5,0x28,0x14);
    TryUnit(&DAT_100160c8,6,0x28,0x14);
    TryUpgrade(&DAT_10016010,99,100);
    iVar3 = GetUnits(&DAT_100160d0);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_100161f8,0x5a,100);
      TryUpgrade(&DAT_10016200,0x50,0x46);
    }
    TryUpgrade(&DAT_100160e0,0x3c,0x5a);
    cVar1 = UpgIsRun(&DAT_100138f8);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016158,0x5a,0x5a);
      TryUpgrade(&DAT_10016168,0x5a,0x5a);
      TryUpgrade(&DAT_10016170,0x46,0x5a);
      TryUpgrade(&DAT_10016160,0x46,0x5a);
    }
  }
  TryUpgrade(&DAT_10013790,99,100);
  TryUpgrade(&DAT_100138d0,0x3c,0x5a);
  TryUpgrade(&DAT_10016140,100,100);
  if (0x15e < iVar5) {
    TryUnit(&DAT_100160d0,500,10,100);
    FUN_10004310();
  }
  iVar3 = GetReadyUnits(&DAT_10013868);
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
                if (iVar8 < 0x3e9) goto LAB_10004fa3;
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
LAB_10004fa3:
  iVar3 = GetReadyUnits(&DAT_10015f10);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = UpgIsRun(&DAT_10016260), cVar1 == '\0')) {
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
  iVar3 = GetUnits(&DAT_100161d8);
  if ((iVar3 != 0) && (cVar1 = UpgIsRun(&DAT_100161a8), cVar1 == '\0')) {
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
  if (*(int *)(&DAT_100165fc + iVar3 * 4) == 0) {
    AI_Torg(5,3,4000);
    iVar3 = GetAINation();
    *(int *)(&DAT_100165fc + iVar3 * 4) = 1;
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
  if (1) {
    RegisterUpgrade(&DAT_10016078,"KUZ04EN");
    if (1) {
      RegisterUpgrade(&DAT_10016018,"AKA35EN");
      if (1) {
        RegisterUpgrade(&DAT_10016070,"AKA36EN");
        if (1) {
          RegisterUpgrade(&DAT_10016080,"AKA32EN");
        }
      }
    }
  }
  if (1) {
    RegisterUnitType(&DAT_10013680,"Dragun(en)");
  }
  if (1) {
    RegisterUpgrade(&DAT_100138f0,"Dragun(en)ATTACK");
    if (1) {
      RegisterUpgrade(&DAT_100138e8,"Dragun(en)ATTACK3");
      if (1) {
        RegisterUpgrade(&DAT_100138e0,"Dragun(en)ATTACK4");
        if (1) {
          RegisterUpgrade(&DAT_10013928,"Dragun(en)ATTACK5");
          if (1) {
            RegisterUpgrade(&DAT_10013918,"Dragun(en)ATTACK6");
            if (1) {
              RegisterUpgrade(&DAT_10013910,"Dragun(en)ATTACK7");
              if (1) {
                RegisterUpgrade(&DAT_100136c8,"Dragun(en)SHIELD");
                if (1) {
                  RegisterUpgrade(&DAT_100136b8,"Dragun(en)SHIELD3");
                  if (1) {
                    RegisterUpgrade(&DAT_100138b0,"Dragun(en)SHIELD4");
                    if (1) {
                      RegisterUpgrade(&DAT_100138a8,"Dragun(en)SHIELD5");
                      if (1) {
                        RegisterUpgrade(&DAT_100138a0,"Dragun(en)SHIELD6");
                        if (1) {
                          RegisterUpgrade(&DAT_10013898,"Dragun(en)SHIELD7");
                          if (1) {
                            RegisterUpgrade(&DAT_100138f0,"Dragun(en)ATTACK");
                            if (1) {
                              RegisterUpgrade(&DAT_100138e8,"Dragun(en)ATTACK3");
                              if (1) {
                                RegisterUpgrade(&DAT_100138e0,"Dragun(en)ATTACK4");
                                if (1) {
                                  RegisterUpgrade(&DAT_10013928,"Dragun(en)ATTACK5");
                                  if (1) {
                                    RegisterUpgrade(&DAT_10013918,"Dragun(en)ATTACK6");
                                    if (1) {
                                      RegisterUpgrade(&DAT_10013910,"Dragun(en)ATTACK7");
                                      if (1) {
                                        RegisterUpgrade(&DAT_100136c8,"Dragun(en)SHIELD");
                                        if (1) {
                                          RegisterUpgrade(&DAT_100136b8,"Dragun(en)SHIELD3"
                                                         );
                                          if (1) {
                                            RegisterUpgrade(&DAT_100138b0,
                                                            "Dragun(en)SHIELD4");
                                            if (1) {
                                              RegisterUpgrade(&DAT_100138a8,
                                                              "Dragun(en)SHIELD5");
                                              if (1) {
                                                RegisterUpgrade(&DAT_100138a0,
                                                                "Dragun(en)SHIELD6");
                                                if (1) {
                                                  RegisterUpgrade(&DAT_10013898,
                                                                  "Dragun(en)SHIELD7");
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (1) {
    RegisterUnitType(&DAT_10013670,"Dragun_18(en)");
  }
  if (1) {
    RegisterUpgrade(&DAT_10013648,"Dragun_18(en)ATTACK");
    if (1) {
      RegisterUpgrade(&DAT_10013640,"Dragun_18(en)ATTACK3");
      if (1) {
        RegisterUpgrade(&DAT_10013638,"Dragun_18(en)ATTACK4");
        if (1) {
          RegisterUpgrade(&DAT_10016308,"Dragun_18(en)ATTACK5");
          if (1) {
            RegisterUpgrade(&DAT_10016300,"Dragun_18(en)ATTACK6");
            if (1) {
              RegisterUpgrade(&DAT_100162f8,"Dragun_18(en)ATTACK7");
              if (1) {
                RegisterUpgrade(&DAT_10016380,"Dragun_18(en)SHIELD");
                if (1) {
                  RegisterUpgrade(&DAT_10016378,"Dragun_18(en)SHIELD3");
                  if (1) {
                    RegisterUpgrade(&DAT_100163c8,"Dragun_18(en)SHIELD4");
                    if (1) {
                      RegisterUpgrade(&DAT_100163c0,"Dragun_18(en)SHIELD5");
                      if (1) {
                        RegisterUpgrade(&DAT_100163b8,"Dragun_18(en)SHIELD6");
                        if (1) {
                          RegisterUpgrade(&DAT_100163b0,"Dragun_18(en)SHIELD7");
                          if (1) {
                            RegisterUpgrade(&DAT_10013648,"Dragun_18(en)ATTACK");
                            if (1) {
                              RegisterUpgrade(&DAT_10013640,"Dragun_18(en)ATTACK3");
                              if (1) {
                                RegisterUpgrade(&DAT_10013638,"Dragun_18(en)ATTACK4");
                                if (1) {
                                  RegisterUpgrade(&DAT_10016308,"Dragun_18(en)ATTACK5");
                                  if (1) {
                                    RegisterUpgrade(&DAT_10016300,"Dragun_18(en)ATTACK6");
                                    if (1) {
                                      RegisterUpgrade(&DAT_100162f8,"Dragun_18(en)ATTACK7")
                                      ;
                                      if (1) {
                                        RegisterUpgrade(&DAT_10016380,"Dragun_18(en)SHIELD"
                                                       );
                                        if (1) {
                                          RegisterUpgrade(&DAT_10016378,
                                                          "Dragun_18(en)SHIELD3");
                                          if (1) {
                                            RegisterUpgrade(&DAT_100163c8,
                                                            "Dragun_18(en)SHIELD4");
                                            if (1) {
                                              RegisterUpgrade(&DAT_100163c0,
                                                              "Dragun_18(en)SHIELD5");
                                              if (1) {
                                                RegisterUpgrade(&DAT_100163b8,
                                                                "Dragun_18(en)SHIELD6");
                                                if (1) {
                                                  RegisterUpgrade(&DAT_100163b0,
                                                                  "Dragun_18(en)SHIELD7");
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (1) {
    RegisterUnitType(&DAT_10015fd0,"Sveshenik_evro(en)");
  }
  DAT_100162a4 = GetAINation();
  uVar4 = GetRandomIndex();
  iVar2 = DAT_100162a4;
  *(unsigned int *)(&DAT_10015f88 + DAT_100162a4 * 4) = uVar4 & 0x80;
  *(int *)(&DAT_10013ae0 + iVar2 * 0x4b8) = 0;
  *(int *)(&DAT_10013c74 + iVar2 * 0x4b8) = 0;
  if (1) {
    RegisterUpgrade(&DAT_100160c0,"Barabanshik_ev1(en)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10013878,"Dragun_18_DIP(en)");
  }
  bVar3 = GetRandomIndex();
  pcVar7 = "Dragun(en)";
  if ((bVar3 & 6) != 2) {
    pcVar7 = "Konni_Ricar(en)";
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
  pcVar7 = "Strelec_eng(en)";
  if ((bVar3 & 0x18) != 8) {
    pcVar7 = "Grenader(en)";
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
  if (1) {
    RegisterUnitType(&DAT_100136f0,"Officer_evro(en)");
  }
  if (1) {
    RegisterUpgrade(&DAT_10016250,"Officer_evro(en)ATTACK");
    if (1) {
      RegisterUpgrade(&DAT_10015fb8,"Officer_evro(en)SHIELD");
    }
  }
  if (1) {
    RegisterUnitType(&DAT_10013630,"Barabanshik_ev1(en)");
  }
  AssignFormUnit("Pikiner_evro(en)");
  if (1) {
    RegisterUnitType(&DAT_10013678,"Pikiner_evro(en)");
    if (1) {
      RegisterUnitType(&DAT_10016180,"Krestian_Sved(en)");
    }
  }
  AssignPeasant("Krestian_Sved(en)");
  if (1) {
    RegisterUnitType(&DAT_10016150,"Grenader_DIP(en)");
    if (1) {
      RegisterUnitType(&DAT_100160d0,"Mushketer_ev(en)");
      if (1) {
        RegisterUnitType(&DAT_100163a0,acStack_60);
        if (1) {
          RegisterUnitType(&DAT_10016320,"Kirasir(en)");
          if (1) {
            RegisterUnitType(&DAT_10015f70,acStack_30);
            if (1) {
              RegisterUnitType(&DAT_10016360,"Pushka(en)");
              if (1) {
                RegisterUnitType(&DAT_10013658,"Mortira(en)");
                if (1) {
                  RegisterUnitType(&DAT_100138b8,"Mortira_b(en)");
                  if (1) {
                    RegisterUnitType(&DAT_100161e0,"Lodka(en)");
                    if (1) {
                      RegisterUnitType(&DAT_10016318,"Kozak_loshad_DIP(en)");
                      if (1) {
                        RegisterUnitType(&DAT_10016268,"Strelec_Algir_DIP(en)");
                        if (1) {
                          RegisterUnitType(&DAT_10015fa8,"Center_British(en)");
                          if (1) {
                            RegisterUnitType(&DAT_10015fc8,"Melnica(en)");
                            if (1) {
                              RegisterUnitType(&DAT_10016240,"Kazarma_1_BR(en)");
                              if (1) {
                                RegisterUnitType(&DAT_10016248,"Kazarma_BR(en)");
                                if (1) {
                                  RegisterUnitType(&DAT_10015fc0,"Sclad1(en)");
                                  if (1) {
                                    RegisterUnitType(&DAT_10015f10,"akademia_BR(en)");
                                    if (1) {
                                      RegisterUnitType(&DAT_100160c8,"konushnia_BR(en)");
                                      if (1) {
                                        RegisterUnitType(&DAT_10015fd8,"Dip_korpus_BR(en)");
                                        if (1) {
                                          RegisterUnitType(&DAT_10013608,
                                                          "artileri_depo_BR(en)");
                                          if (1) {
                                            RegisterUnitType(&DAT_10013868,"Rinok(en)");
                                            if (1) {
                                              RegisterUnitType(&DAT_100138c8,"Bashnia(en)");
                                              if (1) {
                                                RegisterUnitType(&DAT_100161d8,
                                                                "Kuznica_BR(en)");
                                                if (1) {
                                                  RegisterUnitType(&DAT_100160e8,
                                                                  "Cerkov_BR(en)");
                                                  if (1) {
                                                    RegisterUnitType(&DAT_100162c8,
                                                                    "PorE(en)");
                                                    if (1) {
                                                      RegisterUnitType(&DAT_100138d8,
                                                                      "Fregat(en)");
                                                      if (1) {
                                                        RegisterUnitType(&DAT_10015f80,
                                                                        "GALERA(en)");
                                                        if (1) {
                                                          RegisterUnitType(&DAT_10016388,
                                                                          "Linkor(en)");
                                                          if (1) {
                                                            RegisterUnitType(&DAT_10015f78,
                                                                            "Yahta(en)");
                                                            if (1) {
                                                              RegisterUnitType(&DAT_10013890,
                                                                                                                                                            
                                                  "PERES_KOR(en)");
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (1) {
    RegisterUpgrade(&DAT_10016368,"Melnica(en)GETRES");
    if (1) {
      RegisterUpgrade(&DAT_100160f0,"Melnica(en)GETRES2");
      if (1) {
        RegisterUpgrade(&DAT_10013650,"KUZ01EN");
        if (1) {
          RegisterUpgrade(&DAT_10016340,"Pikiner_evro(en)ATTACK");
          if (1) {
            RegisterUpgrade(&DAT_10016348,"Pikiner_evro(en)ATTACK3");
            if (1) {
              RegisterUpgrade(&DAT_10016330,"Pikiner_evro(en)ATTACK4");
              if (1) {
                RegisterUpgrade(&DAT_10016338,"Pikiner_evro(en)ATTACK5");
                if (1) {
                  RegisterUpgrade(&DAT_10016350,"Pikiner_evro(en)ATTACK6");
                  if (1) {
                    RegisterUpgrade(&DAT_10016288,"Pikiner_evro(en)SHIELD");
                    if (1) {
                      RegisterUpgrade(&DAT_10016270,"Pikiner_evro(en)SHIELD3");
                      if (1) {
                        RegisterUpgrade(&DAT_10016278,"Pikiner_evro(en)SHIELD4");
                        if (1) {
                          RegisterUpgrade(&DAT_10016290,"Pikiner_evro(en)SHIELD5");
                          if (1) {
                            RegisterUpgrade(&DAT_10016298,"Pikiner_evro(en)SHIELD6");
                            if (1) {
                              RegisterUpgrade(&DAT_10013900,"Mushketer_ev(en)ATTACK");
                              if (1) {
                                RegisterUpgrade(&DAT_10013908,"Mushketer_ev(en)ATTACK3");
                                if (1) {
                                  RegisterUpgrade(&DAT_100138f8,"Mushketer_ev(en)ATTACK4");
                                  if (1) {
                                    RegisterUpgrade(&DAT_10015f68,"Mushketer_ev(en)SHIELD")
                                    ;
                                    if (1) {
                                      RegisterUpgrade(&DAT_10015f58,
                                                      "Mushketer_ev(en)SHIELD3");
                                      if (1) {
                                        RegisterUpgrade(&DAT_10015f60,
                                                        "Mushketer_ev(en)SHIELD4");
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016008,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016000,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10015ff8,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10015ff0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10015fe8,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10015fe0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016120,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016118,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016110,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016108,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100160f8,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016148,puVar5);
  if (1) {
    RegisterUpgrade(&DAT_100136a8,"Kirasir(en)ATTACK");
    if (1) {
      RegisterUpgrade(&DAT_100136a0,"Kirasir(en)ATTACK3");
      if (1) {
        RegisterUpgrade(&DAT_10013698,"Kirasir(en)ATTACK4");
        if (1) {
          RegisterUpgrade(&DAT_10013690,"Kirasir(en)ATTACK5");
          if (1) {
            RegisterUpgrade(&DAT_10013668,"Kirasir(en)ATTACK6");
            if (1) {
              RegisterUpgrade(&DAT_10013660,"Kirasir(en)ATTACK7");
              if (1) {
                RegisterUpgrade(&DAT_10013738,"Kirasir(en)SHIELD");
                if (1) {
                  RegisterUpgrade(&DAT_10013730,"Kirasir(en)SHIELD3");
                  if (1) {
                    RegisterUpgrade(&DAT_10013728,"Kirasir(en)SHIELD4");
                    if (1) {
                      RegisterUpgrade(&DAT_10013710,"Kirasir(en)SHIELD5");
                      if (1) {
                        RegisterUpgrade(&DAT_10013708,"Kirasir(en)SHIELD6");
                        if (1) {
                          RegisterUpgrade(&DAT_10013700,"Kirasir(en)SHIELD7");
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136d0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136d8,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136e0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136e8,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136b0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136c0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013778,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013780,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013788,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013760,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013768,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013770,puVar5);
  if (1) {
    RegisterUpgrade(&DAT_100161c8,"Pushka(en)BUILD");
    if (1) {
      RegisterUpgrade(&DAT_100161c0,"Pushka(en)BUILD3");
      if (1) {
        RegisterUpgrade(&DAT_10016190,"Pushka(en)BUILD4");
        if (1) {
          RegisterUpgrade(&DAT_10016188,"Pushka(en)BUILD5");
          if (1) {
            RegisterUpgrade(&DAT_10016198,"Pushka(en)BUILD6");
            if (1) {
              RegisterUpgrade(&DAT_10016088,"Mortira(en)BUILD");
              if (1) {
                RegisterUpgrade(&DAT_10016090,"Mortira(en)BUILD3");
                if (1) {
                  RegisterUpgrade(&DAT_10016098,"Mortira(en)BUILD4");
                  if (1) {
                    RegisterUpgrade(&DAT_100160a0,"Mortira(en)BUILD5");
                    if (1) {
                      RegisterUpgrade(&DAT_100161a8,"KUZ03EN");
                      if (1) {
                        RegisterUpgrade(&DAT_10016010,"MAINEN");
                        if (1) {
                          RegisterUpgrade(&DAT_10013948,"AKA06EN");
                          if (1) {
                            RegisterUpgrade(&DAT_10016068,"AKA01EN");
                            if (1) {
                              RegisterUpgrade(&DAT_10016020,"AKA02EN");
                              if (1) {
                                RegisterUpgrade(&DAT_10016028,"AKA03EN");
                                if (1) {
                                  RegisterUpgrade(&DAT_10016030,"AKA04EN");
                                  if (1) {
                                    RegisterUpgrade(&DAT_10016260,"AKA08EN");
                                    if (1) {
                                      RegisterUpgrade(&DAT_10016100,"AKA23EN");
                                      if (1) {
                                        RegisterUpgrade(&DAT_10016140,"AKA24EN");
                                        if (1) {
                                          RegisterUpgrade(&DAT_100161f8,"AKA31EN");
                                          if (1) {
                                            RegisterUpgrade(&DAT_10016200,"AKA33EN");
                                            if (1) {
                                              RegisterUpgrade(&DAT_10016158,"AKA12EN");
                                              if (1) {
                                                RegisterUpgrade(&DAT_10016168,"AKA13EN");
                                                if (1) {
                                                  RegisterUpgrade(&DAT_10016170,"AKA14EN");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_10016160,"AKA15EN"
                                                                   );
                                                    if (1) {
                                                      RegisterUpgrade(&DAT_10013940,
                                                                      "AKA11EN");
                                                      if (1) {
                                                        RegisterUpgrade(&DAT_100138d0,
                                                                        "AKA10EN");
                                                        if (1) {
                                                          RegisterUpgrade(&DAT_10013790,
                                                                          "AKA30EN");
                                                          if (1) {
                                                            RegisterUpgrade(&DAT_100160e0,
                                                                            "AKA07EN");
                                                            if (1) {
                                                              RegisterUpgrade(&DAT_10013930,
                                                                              "AKA20EN");
                                                              if (1) {
                                                                RegisterUpgrade(&DAT_100161e8,
                                                                                "KUZ02EN");
                                                                if (1) {
                                                                  RegisterUpgrade(&DAT_100161f0,
                                                                                  "AKA09EN"
                                                                                 );
                                                                  if (1) {
                                                                    RegisterUpgrade(&DAT_10013860,
                                                                                                                                                                        
                                                  "AKA05EN");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_10013870,"AKA28EN"
                                                                   );
                                                    if (1) {
                                                      RegisterUpgrade(&DAT_10013758,
                                                                      "AKA29EN");
                                                      if (1) {
                                                        RegisterUpgrade(&DAT_10013618,
                                                                        "KUZ05EN");
                                                        if (1) {
                                                          RegisterUpgrade(&DAT_100136f8,
                                                                          "KUZ06EN");
                                                          if (1) {
                                                            RegisterUpgrade(&DAT_10013620,
                                                                            "AKA34EN");
                                                            if (1) {
                                                              RegisterUpgrade(&DAT_100162d8,
                                                                                                                                                            
                                                  "Bashnia(en)PAUSE");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_100162c0,
                                                                    "Bashnia(en)PAUSE3");
                                                    if (1) {
                                                      RegisterUpgrade(&DAT_100162d0,
                                                                      "Bashnia(en)PAUSE4");
                                                      if (1) {
                                                        RegisterUpgrade(&DAT_100162b0,
                                                                        "Bashnia(en)PAUSE5"
                                                                       );
                                                        if (1) {
                                                          RegisterUpgrade(&DAT_100162b8,
                                                                                                                                                    
                                                  "Bashnia(en)PAUSE6");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_100162a8,
                                                                    "Bashnia(en)PAUSE7");
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  SetPDistribution(9,4,4);
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(en)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(en)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(en)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(en)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(en)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(en)INSIDE7",0x32);
  AssignMine("shahta(en)");
  AssignHouse("Dom_English(en)");
  AssignWall("WALL_EV(en)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x5a);
  SET_MINE_UPGRADE2_RADIUS(0x5a);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}





__declspec(dllexport) void ProcessAI(void)

{
  DAT_100162a4 = GetAINation();
  FUN_10006d40();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
