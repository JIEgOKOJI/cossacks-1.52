/* Auto-generated from Spain.c */
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
long long DAT_10010670 = 0;
long long DAT_10013618 = 0;
int DAT_10013620 = 0;
long long DAT_10013628 = 0;
long long DAT_10013630 = 0;
long long DAT_10013640 = 0;
long long DAT_10013648 = 0;
long long DAT_10013650 = 0;
long long DAT_10013658 = 0;
long long DAT_10013660 = 0;
long long DAT_10013668 = 0;
long long DAT_10013670 = 0;
long long DAT_10013678 = 0;
long long DAT_10013680 = 0;
long long DAT_10013688 = 0;
long long DAT_10013690 = 0;
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
long long DAT_10013718 = 0;
long long DAT_10013720 = 0;
int DAT_10013728 = 0;
long long DAT_10013738 = 0;
long long DAT_10013740 = 0;
long long DAT_10013748 = 0;
long long DAT_10013768 = 0;
long long DAT_10013770 = 0;
long long DAT_10013778 = 0;
long long DAT_10013780 = 0;
long long DAT_10013788 = 0;
long long DAT_10013790 = 0;
long long DAT_10013798 = 0;
long long DAT_100137a0 = 0;
long long DAT_100137a8 = 0;
long long DAT_10013870 = 0;
long long DAT_10013878 = 0;
long long DAT_10013880 = 0;
long long DAT_10013888 = 0;
int DAT_10013898 = 0;
long long DAT_100138a0 = 0;
long long DAT_100138a8 = 0;
long long DAT_100138b0 = 0;
long long DAT_100138b8 = 0;
long long DAT_100138c0 = 0;
long long DAT_100138c8 = 0;
long long DAT_100138d8 = 0;
long long DAT_100138e0 = 0;
long long DAT_100138e8 = 0;
long long DAT_100138f0 = 0;
long long DAT_100138f8 = 0;
long long DAT_10013900 = 0;
long long DAT_10013908 = 0;
long long DAT_10013910 = 0;
long long DAT_10013918 = 0;
long long DAT_10013920 = 0;
long long DAT_10013928 = 0;
long long DAT_10013938 = 0;
long long DAT_10013940 = 0;
long long DAT_10013950 = 0;
long long DAT_10013958 = 0;
char DAT_10013960 = 0;
char DAT_10013af0 = 0;
char DAT_10013af4 = 0;
char DAT_10013c84 = 0;
char DAT_10013c88 = 0;
long long DAT_10015f20 = 0;
int DAT_10015f58 = 0;
long long DAT_10015f68 = 0;
long long DAT_10015f70 = 0;
long long DAT_10015f78 = 0;
long long DAT_10015f80 = 0;
long long DAT_10015f88 = 0;
long long DAT_10015f90 = 0;
char DAT_10015f98 = 0;
long long DAT_10015fb8 = 0;
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
long long DAT_10016038 = 0;
long long DAT_10016040 = 0;
long long DAT_10016078 = 0;
long long DAT_10016080 = 0;
long long DAT_10016088 = 0;
long long DAT_10016090 = 0;
long long DAT_10016098 = 0;
long long DAT_100160a0 = 0;
long long DAT_100160a8 = 0;
long long DAT_100160b0 = 0;
long long DAT_100160d0 = 0;
long long DAT_100160d8 = 0;
long long DAT_100160e0 = 0;
int DAT_100160e8 = 0;
long long DAT_100160f0 = 0;
long long DAT_100160f8 = 0;
long long DAT_10016100 = 0;
long long DAT_10016108 = 0;
long long DAT_10016110 = 0;
long long DAT_10016118 = 0;
long long DAT_10016120 = 0;
long long DAT_10016128 = 0;
long long DAT_10016130 = 0;
long long DAT_10016150 = 0;
long long DAT_10016158 = 0;
long long DAT_10016160 = 0;
long long DAT_10016168 = 0;
long long DAT_10016170 = 0;
long long DAT_10016178 = 0;
long long DAT_10016180 = 0;
int DAT_10016188 = 0;
int DAT_10016189 = 0;
int DAT_1001618a = 0;
int DAT_1001618b = 0;
int DAT_1001618c = 0;
int DAT_1001618d = 0;
long long DAT_10016190 = 0;
long long DAT_10016198 = 0;
long long DAT_100161a0 = 0;
long long DAT_100161a8 = 0;
int DAT_100161b0 = 0;
long long DAT_100161b8 = 0;
int DAT_100161c0 = 0;
int DAT_100161c4 = 0;
long long DAT_100161d0 = 0;
long long DAT_100161d8 = 0;
long long DAT_100161e8 = 0;
long long DAT_100161f0 = 0;
long long DAT_100161f8 = 0;
long long DAT_10016200 = 0;
long long DAT_10016208 = 0;
long long DAT_10016210 = 0;
int DAT_1001624c = 0;
long long DAT_10016250 = 0;
long long DAT_10016258 = 0;
long long DAT_10016260 = 0;
long long DAT_10016270 = 0;
long long DAT_10016278 = 0;
long long DAT_10016280 = 0;
long long DAT_10016288 = 0;
int DAT_10016290 = 0;
long long DAT_10016298 = 0;
long long DAT_100162a0 = 0;
long long DAT_100162a8 = 0;
int DAT_100162b4 = 0;
long long DAT_100162b8 = 0;
long long DAT_100162c0 = 0;
long long DAT_100162c8 = 0;
long long DAT_100162d0 = 0;
long long DAT_100162d8 = 0;
long long DAT_100162e0 = 0;
long long DAT_100162e8 = 0;
long long DAT_10016308 = 0;
long long DAT_10016310 = 0;
long long DAT_10016318 = 0;
int DAT_10016320 = 0;
int DAT_10016321 = 0;
int DAT_10016322 = 0;
int DAT_10016323 = 0;
int DAT_10016324 = 0;
int DAT_10016325 = 0;
long long DAT_10016328 = 0;
long long DAT_10016330 = 0;
int DAT_10016338 = 0;
long long DAT_10016340 = 0;
long long DAT_10016348 = 0;
long long DAT_10016350 = 0;
long long DAT_10016358 = 0;
long long DAT_10016360 = 0;
int DAT_10016368 = 0;
long long DAT_10016370 = 0;
long long DAT_10016378 = 0;
int DAT_10016380 = 0;
long long DAT_10016388 = 0;
long long DAT_10016390 = 0;
long long DAT_10016398 = 0;
long long DAT_100163b0 = 0;
long long DAT_100163c0 = 0;
long long DAT_100163c8 = 0;
long long DAT_100163d0 = 0;
long long DAT_100163d8 = 0;
int DAT_10016594 = 0;
long long DAT_10016598 = 0;
int DAT_10016604 = 0;
int DAT_10016608 = 0;
char DAT_1001660c = 0;
int DAT_1001664c = 0;

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
  sprintf(&DAT_100137a8,&DAT_10010670);
  return &DAT_100137a8;
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
  
  DAT_100162b4 = GetAINation();
  iVar1 = GetUnits(&DAT_10016190);
  iVar2 = GetExtraction(1);
  iVar3 = GetExtraction(4);
  iVar4 = GetExtraction(5);
  DAT_100161b0 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_100162b4 * 0x4b8;
  DAT_10016604 = *(int *)(&DAT_10013af0 + iVar1);
  DAT_100161c0 = &DAT_10013960 + iVar1;
  DAT_100161c4 = &DAT_10013af4 + iVar1;
  DAT_10016608 = *(int *)(&DAT_10013c84 + iVar1);
  DAT_1001624c = &DAT_10013c88 + iVar1;
  DAT_10016290 = GetMoney(3);
  DAT_10013620 = GetMoney(0);
  DAT_10016380 = GetMoney(2);
  DAT_10013728 = GetMoney(4);
  DAT_100160e8 = GetMoney(5);
  DAT_10016338 = GetMoney(1);
  iVar1 = GetStartRes();
  if (iVar1 == 0) {
    DAT_1000f248 = 4;
  }
  SetMineBalanse(0x13,&DAT_1000f114);
  SetMinesUpgradeRules(&DAT_10016598);
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  DAT_10016188 = 1;
  DAT_1001618a = 1;
  DAT_1001618c = 1;
  DAT_1001618d = 1;
  DAT_10016323 = 1;
  DAT_10016321 = 1;
  DAT_10016324 = 1;
  DAT_10016325 = 1;
  DAT_1001618b = 0;
  DAT_10016189 = 0;
  DAT_10016320 = 0;
  DAT_10016322 = 0;
  DAT_1001664c = 0;
  return;
}





void FUN_100031c0(void)

{
  int iVar1;
  
  if (DAT_10015f58 < 2) {
    iVar1 = GetUnits(&DAT_10013688);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_10013700,iVar1,0x32,0x32);
      TryUnit(&DAT_10013640,iVar1,0x14,0x32);
    }
  }
  return;
}





void FUN_10003230(void)

{
  TryUpgrade(&DAT_10016350,0x3c,100);
  TryUpgrade(&DAT_10016358,0x3c,100);
  TryUpgrade(&DAT_10016340,0x3c,100);
  TryUpgrade(&DAT_10016348,0x14,100);
  TryUpgrade(&DAT_10016360,10,100);
  TryUpgrade(&DAT_10016298,0x3c,100);
  TryUpgrade(&DAT_10016280,0x3c,100);
  TryUpgrade(&DAT_10016288,0x3c,100);
  TryUpgrade(&DAT_100162a0,0x14,100);
  TryUpgrade(&DAT_100162a8,10,100);
  return;
}





void FUN_100032d0(void)

{
  TryUpgrade(&DAT_10013910,0x5a,100);
  TryUpgrade(&DAT_10013918,0x5a,100);
  TryUpgrade(&DAT_10013908,0x5a,100);
  TryUpgrade(&DAT_10015f78,0x5a,100);
  TryUpgrade(&DAT_10015f68,0x5a,100);
  return;
}





void FUN_10003320(void)

{
  TryUpgrade(&DAT_10016098,0x1e,0x32);
  TryUpgrade(&DAT_100160a0,0x1e,0x32);
  TryUpgrade(&DAT_100160a8,0x1e,0x32);
  TryUpgrade(&DAT_100160b0,0x1e,0x32);
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
  cVar1 = UpgIsDone(&DAT_10016020);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = GetReadyUnits(&DAT_100162d8);
  iVar6 = GetUnits(&DAT_10015fb8);
  iVar7 = GetReadyUnits(&DAT_10015fb8);
  iVar8 = GetUnits(&DAT_10015fe8);
  iVar9 = GetReadyUnits(&DAT_10015fe8);
  iVar10 = GetUnits(&DAT_100160d8);
  iVar11 = GetReadyUnits(&DAT_100160d8);
  iVar12 = GetUnits(&DAT_100162d8);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  TryUpgrade(&DAT_10016020,0x5f,100);
  bVar13 = true;
  iVar5 = GetMoney(3);
  if ((((55000 < iVar5) && (iVar5 = GetMoney(1), 10000 < iVar5)) &&
      (iVar5 = GetMoney(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = GetUnits(&DAT_10016190);
  iVar7 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_100161b8);
  GetUnits(&DAT_10013688);
  iVar8 = GetUnits(&DAT_100160e0);
  iVar11 = GetUnits(&DAT_100163b0);
  iVar9 = GetUnits(&DAT_10016330);
  iVar10 = GetUnits(&DAT_10013688);
  iVar11 = iVar10 + iVar9 + iVar11;
  TryUpgrade(&DAT_10016110,99,0x50);
  TryUpgrade(&DAT_10016150,0x62,0x50);
  iVar9 = GetReadyUnits(&DAT_100138d8);
  iVar10 = GetUnits(&DAT_100138d8);
  if (iVar5 != 0) {
    TryUnit(&DAT_10015fd8,1,100,100);
    iVar12 = GetUnits(&DAT_10015fd8);
    if (iVar12 == 0) {
      return;
    }
    TryUpgrade(&DAT_10016378,100,100);
    cVar2 = FieldExist();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        TryUnit(&DAT_10016190,100,100,100);
        TryUnit(&DAT_10013688,100,100,100);
      }
      SetPDistribution(0,1,1);
    }
    else {
      cVar2 = UpgIsDone(&DAT_100137a0);
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
        TryUnit(&DAT_10016190,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          TryUnit(&DAT_10016190,1000,0xe8,100);
        }
        if (300 < iVar7) {
          TryUnit(&DAT_10013688,uVar15,100,0x1e);
        }
      }
      cVar2 = UpgIsDone(&DAT_10016270);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = GetUnits(&DAT_100162d8), 0 < iVar7)
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
    TryUnit(&DAT_10015f90,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      TryUnit(&DAT_100138e8,0xc,0x46);
    }
    else {
      TryUnit(&DAT_100138e8,iVar4 + 6,0x1e,0x32);
      TryUnit(&DAT_100138e8,iVar4 + 9,0xf,0x32);
      TryUnit(&DAT_100138e8,iVar4 + 10,10,0x32);
    }
    iVar4 = GetUnitsByUsage(0,0x1f);
    if (iVar4 != 0) {
      TryUpgrade(&DAT_100162e8,0x32,0x32);
      TryUpgrade(&DAT_100162d0,0x32,0x32);
      TryUpgrade(&DAT_100162e0,0x32,0x32);
      TryUpgrade(&DAT_100162c0,0x32,0x32);
      TryUpgrade(&DAT_100162c8,0x32,0x32);
      TryUpgrade(&DAT_100162b8,0x32,0x32);
    }
    TryUnit(&DAT_100138a0,3,0x5a,10);
    TryUnit(&DAT_10015fb8,1,100,100);
    TryUnit(&DAT_10015fb8,2,0x5f,5);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015fb8,3,0x5f,5);
    }
    TryUnit(&DAT_100161e8,1,100,100);
    TryUnit(&DAT_10016250,1,100,100);
    TryUnit(&DAT_10015fd0,1,0x32,0x32);
    TryUnit(&DAT_100161e8,2,10,5);
    TryUnit(&DAT_100160d8,1,99,0x5a);
    TryUpgrade(&DAT_10013660,0x50,100);
    iVar4 = GetUnits(&DAT_10015f20);
    if (0 < iVar4) {
      TryUnit(&DAT_10013878,1,0x5a,0x19);
      TryUnit(&DAT_100160f8,1,5,3);
    }
    TryUnit(&DAT_10015f20,1,0x5a,0x5a);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015fe8,1,99,10);
    }
    TryUnit(&DAT_10013618,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      TryUnit(&DAT_10015fd8,2,0x1e,0x1e);
    }
    TryUnit(&DAT_10016258,1,0x5a,0x14);
    TryUnit(&DAT_10016258,2,0x32,5);
    TryUpgrade(&DAT_10016078,0x5a,99);
    TryUpgrade(&DAT_10016030,0x5a,99);
    TryUpgrade(&DAT_10016038,0x5a,99);
    TryUpgrade(&DAT_10016040,0x5a,99);
    TryUpgrade(&DAT_10016270,0x5f,100);
    TryUpgrade(&DAT_100161b8,99,100);
    TryUnit(&DAT_100162d8,1,0x50,0x14);
    TryUnit(&DAT_100162d8,2,0x32,5);
    TryUnit(&DAT_100162d8,3,0x1e,5);
    TryUnit(&DAT_100162d8,5,0x14,5);
    TryUpgrade(&DAT_10013958,0x5f,100);
    iVar4 = GetMaxPeasantsInMines();
    cVar2 = UpgIsRun(&DAT_10016270);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013958,0x5a,0x5a);
      TryUpgrade(&DAT_10013870,99,100);
    }
    cVar2 = UpgIsRun(&DAT_10013958);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013940,0x5a,0x5a);
      TryUpgrade(&DAT_10013880,0x46,10);
      FUN_10003320();
    }
    cVar2 = UpgIsDone(&DAT_100160b0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013668,10,10,0x5a);
      TryUnit(&DAT_10013668,0xf,3,10);
    }
    SetUpgradeLock(1,0);
    iVar7 = GetMoney(0);
    if ((((14000 < iVar7) && (cVar2 = UpgIsRun(&DAT_100137a0), cVar2 != '\0')) &&
        (iVar7 = GetMoney(1), iVar7 < 0x1d4c)) &&
       (cVar2 = UpgIsRun(&DAT_10013958), cVar2 == '\0')) {
      SetUpgradeLock(1,1);
    }
    cVar2 = UpgIsRun(&DAT_10013958);
    if (((cVar2 == '\0') || (cVar2 = UpgIsRun(&DAT_100160f0), cVar2 == '\0')) ||
       (cVar2 = UpgIsDone(&DAT_100161b8), cVar2 == '\0')) {
LAB_10003c9c:
      if (iVar4 == 0x5f) {
        TryUpgrade(&DAT_10013768,0x46,10);
        TryUnit(&DAT_10016398,1,0x32,0x1e);
        TryUnit(&DAT_10016398,2,0x1e,0x1e);
        TryUnit(&DAT_10016398,3,0x14,0x1e);
        TryUnit(&DAT_10016398,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = GetMoney(3), 50000 < iVar7 && (iVar7 = GetMoney(1), iVar7 < 0x2008)
          ))) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsRun(&DAT_10016020);
      if (((cVar2 == '\0') && (iVar7 = GetMoney(3), 60000 < iVar7)) &&
         (iVar7 = GetMoney(1), iVar7 < 11000)) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsDone(&DAT_10016020);
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
       (TryUnit(&DAT_100138d8,1,0x50,10), 0x5f < iVar5)) {
      TryUnit(&DAT_100138d8,2,0x50,10);
      TryUnit(&DAT_100138d8,3,0x32,10);
      TryUnit(&DAT_100138d8,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016270), cVar2 != '\0')) {
      TryUnit(&DAT_10016160,0x4b,1,0x1e);
      UpgIsDone(&DAT_10016198);
      UpgIsDone(&DAT_100160b0);
    }
    GetUnits(&DAT_10013618);
    TryUnit(&DAT_100161f0,3,0x5a,0x5a);
    cVar2 = UpgIsDone(&DAT_100160f0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_100161f0,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_10016270), cVar2 != '\0')) {
      if (iVar6 == 0) {
        TryUnit(&DAT_100160d8,2,0x5a,0x14);
        TryUnit(&DAT_100160d8,3,0x5a,0x14);
        TryUnit(&DAT_100160d8,4,0x5a,0x14);
      }
      iVar4 = GetUnits(&DAT_100160e0);
      if (0x14 < iVar4) {
        TryUpgrade(&DAT_10016208,0x5a,100);
        TryUpgrade(&DAT_10016210,0x50,0x46);
      }
      TryUpgrade(&DAT_100160f0,0x3c,0x5a);
      cVar2 = UpgIsRun(&DAT_10013908);
      if (cVar2 != '\0') {
        TryUpgrade(&DAT_10016168,0x5a,0x5a);
        TryUpgrade(&DAT_10016178,0x5a,0x5a);
        TryUpgrade(&DAT_10016180,0x46,0x5a);
        TryUpgrade(&DAT_10016170,0x46,0x5a);
      }
    }
    TryUpgrade(&DAT_100137a0,99,100);
    TryUpgrade(&DAT_100138e0,0x3c,0x5a);
    iVar4 = GetUnits(&DAT_10016250);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        TryUnit(&DAT_100160e0,500,10,10);
      }
      FUN_100032d0();
    }
  }
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10013630,0x5f,0x5a);
    TryUpgrade(&DAT_10013708,0x5f,0x5a);
    TryUpgrade(&DAT_10013628,0x5f,0x5a);
    TryUnit(&DAT_10016250,2,0x5f,0x5a);
  }
  cVar1 = UpgIsRun(&DAT_100137a0);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_100161f8,0x5f,0x5a);
    TryUpgrade(&DAT_10016200,0x5f,0x5a);
  }
  iVar4 = GetReadyUnits(&DAT_10013878);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = GetUnits(&DAT_10015f20);
  if ((((iVar4 != 0) && (cVar1 = UpgIsRun(&DAT_10016270), cVar1 == '\0')) &&
      (iVar4 = GetMoney(1), 800 < iVar4)) &&
     ((iVar4 = GetMoney(3), iVar4 < 6000 && (iVar4 = GetMoney(4), 3000 < iVar4)))) {
    AI_Torg(4,3,3000);
  }
  iVar4 = GetMoney(3);
  if ((iVar4 < 1000) && (iVar4 = GetMoney(2), 5000 < iVar4)) {
    AI_Torg(2,3,4000);
  }
  cVar1 = UpgIsDone(&DAT_100161f8);
  if ((cVar1 == '\0') || (cVar1 = UpgIsDone(&DAT_10016200), cVar1 == '\0')) {
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
    TryUpgrade(&DAT_10016350,0x28,100);
    TryUpgrade(&DAT_10016358,0x5a,100);
    TryUpgrade(&DAT_10016340,0x5a,100);
    TryUpgrade(&DAT_10016348,0x5a,100);
    TryUpgrade(&DAT_10016360,0x5a,100);
    TryUpgrade(&DAT_10016298,0x5a,100);
    TryUpgrade(&DAT_10016280,0x5a,100);
    TryUpgrade(&DAT_10016288,0x5a,100);
    TryUpgrade(&DAT_100162a0,0x5a,100);
    TryUpgrade(&DAT_100162a8,0x5a,100);
    TryUpgrade(&DAT_10016260,0x32,100);
    TryUpgrade(&DAT_10015fc8,0x32,100);
  }
  return;
}





void FUN_10004310(void)

{
  TryUpgrade(&DAT_10013910,0x5a,100);
  TryUpgrade(&DAT_10013918,0x5a,100);
  TryUpgrade(&DAT_10013908,0x5a,100);
  TryUpgrade(&DAT_10015f78,10,100);
  TryUpgrade(&DAT_10015f68,10,100);
  return;
}





void FUN_10004360(void)

{
  TryUpgrade(&DAT_100161d8,0x1e,0x32);
  TryUpgrade(&DAT_100161d0,0x1e,0x32);
  TryUpgrade(&DAT_100161a0,0x1e,0x32);
  TryUpgrade(&DAT_10016198,0x1e,0x32);
  TryUpgrade(&DAT_10016098,0x1e,0x32);
  TryUpgrade(&DAT_100160a0,0x1e,0x32);
  TryUpgrade(&DAT_100160a8,0x1e,0x32);
  TryUpgrade(&DAT_100160b0,0x1e,0x32);
  return;
}





void FUN_10005220(void)

{
  TryUnit(&DAT_10015fd8,1,100,100);
  TryUnit(&DAT_10015fb8,1,100,100);
  TryUnit(&DAT_10015fd0,1,100,100);
  TryUnit(&DAT_10013878,1,100,100);
  return;
}





int  FUN_10005270(int *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_10013688) {
    cVar1 = UpgIsDone(&DAT_10016340);
    if (cVar1 != '\0') {
      cVar1 = UpgIsDone(&DAT_10016288);
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
  
  iVar2 = GetUnits(&DAT_10016278);
  if (iVar2 == 0) {
    iVar2 = GetUnits(&DAT_100138c8);
    if (iVar2 != 0) goto LAB_100052d4;
  }
  else {
LAB_100052d4:
    TryUpgrade(&DAT_10013950,100,100);
    TryUpgrade(&DAT_100161f8,100,100);
    TryUpgrade(&DAT_10016200,100,100);
  }
  iVar2 = GetUnits(&DAT_100163b0);
  if (iVar2 < 0x15) {
    iVar2 = GetUnits(&DAT_10016330);
    if (iVar2 < 0x15) {
      iVar2 = GetUnits(&DAT_10013688);
      if (iVar2 < 0x8d) goto LAB_1000539d;
    }
  }
  TryUpgrade(&DAT_10013628,0x5f,100);
  TryUpgrade(&DAT_10013630,0x5f,100);
  iVar2 = GetUnits(&DAT_100163b0);
  if (iVar2 < 0x8d) {
    iVar2 = GetUnits(&DAT_10016330);
    if (0x3c < iVar2) goto LAB_1000538b;
    uVar3 = 0xf;
  }
  else {
LAB_1000538b:
    uVar3 = 0x5f;
  }
  TryUpgrade(&DAT_10013708,uVar3,100);
LAB_1000539d:
  iVar2 = GetUnits(&DAT_10013688);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_10016350,0x50,100);
    TryUpgrade(&DAT_10016358,0x55,100);
    TryUpgrade(&DAT_10016340,0x5a,100);
    TryUpgrade(&DAT_10016298,0x50,100);
    TryUpgrade(&DAT_10016280,0x55,100);
    TryUpgrade(&DAT_10016288,0x5a,100);
    iVar2 = GetUnits(&DAT_10013688);
    if (0x78 < iVar2) {
      TryUpgrade(&DAT_10016348,0x5a,100);
      TryUpgrade(&DAT_10016360,0x5a,100);
      TryUpgrade(&DAT_100162a0,0x5a,100);
      TryUpgrade(&DAT_100162a8,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_100160e0);
  if (0x1e < iVar2) {
    TryUpgrade(&DAT_10013910,0x5a,100);
    TryUpgrade(&DAT_10013918,0x5a,100);
    TryUpgrade(&DAT_10013908,0x5a,100);
    TryUpgrade(&DAT_10015f78,0x1e,100);
    TryUpgrade(&DAT_10015f68,0x1e,100);
    TryUpgrade(&DAT_10015f70,0x1e,100);
    TryUpgrade(&DAT_10016208,0x5a,100);
    iVar2 = GetUnits(&DAT_100160e0);
    if (100 < iVar2) {
      TryUpgrade(&DAT_10016210,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013700);
  if (4 < iVar2) {
    TryUpgrade(&DAT_10016260,0x5a,100);
    TryUpgrade(&DAT_10015fc8,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_100163b0);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10016130,0x50,100);
    TryUpgrade(&DAT_10016128,0x55,100);
    TryUpgrade(&DAT_10016120,0x5a,100);
    TryUpgrade(&DAT_10016018,0x50,100);
    TryUpgrade(&DAT_10016010,0x55,100);
    TryUpgrade(&DAT_10016008,0x5a,100);
    iVar2 = GetUnits(&DAT_100163b0);
    if (0x32 < iVar2) {
      TryUpgrade(&DAT_10016118,0x5f,100);
      TryUpgrade(&DAT_10016108,0x5f,100);
      TryUpgrade(&DAT_10016158,0x5f,100);
      TryUpgrade(&DAT_10016000,0x5f,100);
      TryUpgrade(&DAT_10015ff8,0x5f,100);
      TryUpgrade(&DAT_10015ff0,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10016330);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013748,0x5a,100);
    TryUpgrade(&DAT_10013740,0x5a,100);
    TryUpgrade(&DAT_10013738,0x5a,100);
    TryUpgrade(&DAT_100136b8,0x5a,100);
    TryUpgrade(&DAT_100136b0,0x5a,100);
    TryUpgrade(&DAT_100136a8,0x5f,100);
    TryUpgrade(&DAT_100136a0,0x5f,100);
    TryUpgrade(&DAT_10013678,0x5f,100);
    TryUpgrade(&DAT_10013670,0x5f,100);
    cVar1 = UpgIsRun(&DAT_10013670);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10013720,0x5f,100);
      TryUpgrade(&DAT_10013718,0x5f,100);
      TryUpgrade(&DAT_10013710,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013690);
  if (0x14 < iVar2) {
    iVar2 = GetUnits(&DAT_10013680);
    if (iVar2 < 0x14) {
      TryUpgrade(&DAT_10013900,0x50,100);
      TryUpgrade(&DAT_100138f8,0x55,100);
      TryUpgrade(&DAT_100138f0,0x5a,100);
      TryUpgrade(&DAT_100138b8,0x5f,100);
      TryUpgrade(&DAT_100138b0,0x5f,100);
      TryUpgrade(&DAT_100138a8,0x5f,100);
      TryUpgrade(&DAT_10016208,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013680);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013658,0x50,100);
    TryUpgrade(&DAT_10013650,0x55,100);
    TryUpgrade(&DAT_10013648,0x5a,100);
    TryUpgrade(&DAT_10016318,0x5f,100);
    TryUpgrade(&DAT_10016310,0x5f,100);
    TryUpgrade(&DAT_10016308,0x5f,100);
    TryUpgrade(&DAT_10016390,10,100);
    TryUpgrade(&DAT_10016388,0xf,100);
    TryUpgrade(&DAT_100163d8,0x14,100);
    TryUpgrade(&DAT_100163d0,0x19,100);
    TryUpgrade(&DAT_100163c8,0x19,100);
    TryUpgrade(&DAT_100163c0,0x19,100);
    TryUpgrade(&DAT_10016208,0x5a,100);
    TryUpgrade(&DAT_10016210,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015f80);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_100136e0,0x5a,100);
    TryUpgrade(&DAT_100136e8,0x5a,100);
    TryUpgrade(&DAT_100136f0,0x5a,100);
    TryUpgrade(&DAT_100136f8,0x5a,100);
    TryUpgrade(&DAT_100136c0,0x5a,100);
    TryUpgrade(&DAT_100136d0,0x5a,100);
    TryUpgrade(&DAT_10013788,0x5a,100);
    TryUpgrade(&DAT_10013790,0x5a,100);
    TryUpgrade(&DAT_10013798,0x5a,100);
    TryUpgrade(&DAT_10013770,0x5a,100);
    TryUpgrade(&DAT_10013778,0x5a,100);
    TryUpgrade(&DAT_10013780,0x5a,100);
    iVar2 = GetUnits(&DAT_10015f80);
    if (iVar2 < 0x3d) {
      TryUpgrade(&DAT_10016028,0xf,100);
      uVar3 = 0xf;
    }
    else {
      TryUpgrade(&DAT_10016028,0x5a);
      uVar3 = 0x5a;
    }
    TryUpgrade(&DAT_10016088,uVar3,100);
    cVar1 = UpgIsRun(&DAT_10016028);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016088);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016080,0x5a,100);
      }
    }
    TryUpgrade(&DAT_10016208,0x5a,100);
    TryUpgrade(&DAT_10016210,0x5a,100);
  }
  cVar1 = UpgIsDone(&DAT_10016308);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016170,0x5a,100);
    cVar1 = UpgIsRun(&DAT_10016170);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016180,0x5a,100);
      cVar1 = UpgIsRun(&DAT_10016180);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016178,0x5a,100);
        cVar1 = UpgIsRun(&DAT_10016178);
        if (cVar1 != '\0') {
          TryUpgrade(&DAT_10016168,0x5a,100);
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
  
  TryUpgrade(&DAT_10016378,0x32,100);
  iVar2 = GetUnits(&DAT_10015f20);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10013660,100,100);
  }
  TryUpgrade(&DAT_10016078,100,100);
  iVar2 = FUN_10005270(&DAT_10013688);
  if ((iVar2 != 0) || ((DAT_10015f58 != 0 && (DAT_10015f58 != 5)))) {
    TryUpgrade(&DAT_10016270,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015fe8);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10016040,100,100);
  }
  cVar1 = UpgIsRun(&DAT_10016150);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016030,100,100);
  }
  TryUpgrade(&DAT_10016150,0x5c,100);
  TryUpgrade(&DAT_10016100,0x62,100);
  iVar2 = GetUnits(&DAT_100160d8);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100161b8,0x62,100);
  }
  TryUpgrade(&DAT_10016020,0x62,100);
  iVar2 = GetUnits(&DAT_10016258);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100138e0,100,100);
  }
  return;
}





void FUN_10005bd0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  TryUnit(&DAT_10016258,3,100,100);
  iVar2 = GetReadyUnits(&DAT_10015fe8);
  if (iVar2 != 0) {
    TryUnit(&DAT_10015fd8,2,100,100);
    TryUnit(&DAT_10015fd0,4,100,100);
  }
  TryUnit(&DAT_10015fd8,1,100,100);
  TryUnit(&DAT_10015fb8,1,100,100);
  if (*(int *)(&DAT_10015f98 + DAT_100162b4 * 4) == 0) {
    FUN_10005220();
    iVar2 = GetReadyUnits(&DAT_10013878);
    if (iVar2 == 0) {
      return;
    }
  }
  TryUnit(&DAT_100161e8,1,100,100);
  TryUnit(&DAT_10015fb8,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10015fb8);
  if ((iVar2 < 2) && (iVar2 = GetStartRes(), iVar2 != 0)) {
    return;
  }
  TryUnit(&DAT_10016250,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016250);
  iVar3 = GetUnits(&DAT_10016250);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    TryUnit(&DAT_10015f20,1,100,100);
    iVar2 = GetPeaceTimeLeft();
    if (iVar2 < 3) {
      TryUnit(&DAT_10015fe8,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10015fe8);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_10005220();
    TryUnit(&DAT_10015fb8,4,100,100);
    iVar2 = GetReadyUnits(&DAT_10015fb8);
    if (2 < iVar2) {
      TryUnit(&DAT_100160d8,3,100,100);
      iVar2 = GetUnits(&DAT_10016258);
      if (iVar2 != 0) {
        TryUnit(&DAT_100160d8,4,100,100);
      }
      TryUnit(&DAT_10013618,1,100,100);
      TryUnit(&DAT_10013618,3,0x28,100);
      cVar1 = UpgIsDone(&DAT_100138e0);
      if (cVar1 != '\0') {
        TryUnit(&DAT_100160d8,5,100,100);
      }
      TryUnit(&DAT_100160f8,1,100,100);
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
  
  iVar2 = GetUnits(&DAT_10016278,param_1);
  if (iVar2 < 0x28) {
    SetAIRegister(DAT_100162b4 + 8,0);
  }
  iVar2 = GetUnits(&DAT_10016278);
  if (iVar2 < 0x9d) {
    iVar2 = GetReadyUnits(&DAT_100160d8);
    if (iVar2 == 0) goto LAB_10005e52;
  }
  SetAIRegister(DAT_100162b4 + 8,1);
LAB_10005e52:
  iVar2 = 2;
  do {
    TryUnit(&DAT_10016190,1000,0x14,100);
    iVar3 = GetUnits(&DAT_10013688);
    if (iVar3 < 0x8c) {
      TryUnit(&DAT_10013688,1000,0x14,100);
    }
    else {
      TryUnit(&DAT_10013688,1000,0x14,0x28);
      TryUnit(&DAT_100160e0,1000,0x14,100);
    }
    iVar3 = GetAIRegister(DAT_100162b4 + 8);
    if (iVar3 == 0) {
      iVar3 = GetPeaceTimeLeft();
      if (iVar3 < 1) {
        TryUnit(&DAT_10016278,0xa0,0x14,100);
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
            TryUnit(&DAT_10013888,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = GetUnitCost(DAT_100162b4 & 0xff,&DAT_10013888,1);
      if (iVar3 < 0x78) goto LAB_10005f25;
    }
    cVar1 = UpgIsDone(&DAT_10016020);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    TryUnit(&DAT_100163b0,1000,0x14,uVar4);
    TryUnit(&DAT_10013680,1000,0x14,100);
    TryUnit(&DAT_10015f80,1000,0x14,100);
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
  
  iVar2 = GetReadyUnits(&DAT_10013878,param_1);
  if (iVar2 != 0) {
    iVar2 = GetStartRes();
    if (iVar2 == 3) {
      iVar2 = GetAIRegister(DAT_100162b4);
      if (iVar2 == 0) {
        AI_Torg(2,3,500000);
        AI_Torg(0,3,80000);
        SetAIRegister(DAT_100162b4,1);
        return;
      }
    }
    else {
      iVar2 = GetReadyUnits(&DAT_10013878);
      if (iVar2 != 0) {
        iVar2 = GetAIRegister(DAT_100162b4);
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
          SetAIRegister(DAT_100162b4,1);
        }
        cVar1 = UpgIsRun(&DAT_10016270);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016150);
          if (cVar1 == '\0') {
            iVar2 = GetReadyUnits(&DAT_10015f20);
            if (iVar2 != 0) {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_100162b4 & 0xff,&DAT_10016150,5);
              }
              FUN_10002f90(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = UpgIsRun(&DAT_10016150);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016020);
          if (cVar1 == '\0') {
            if (0) {
              iVar2 = 0;
            }
            else {
              iVar2 = GetUpgradeCost(DAT_100162b4 & 0xff,&DAT_10016020,3);
            }
            uVar3 = FUN_10002f90(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_100162b4 & 0xff,&DAT_10016020,1);
              }
              uVar3 = FUN_10002f90(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = GetUpgradeCost(DAT_100162b4 & 0xff,&DAT_10016020,4);
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
  cVar1 = UpgIsRun(&DAT_10016100);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100162b4,&DAT_10016100,3);
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
  cVar1 = UpgIsRun(&DAT_10016020);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100162b4,&DAT_10016020,3);
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
  cVar1 = UpgIsRun(&DAT_10016150);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100162b4,&DAT_10016150,3);
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
  cVar1 = UpgIsRun(&DAT_10016340);
  if (((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10016288), cVar1 == '\0')) &&
     (iVar2 = GetMoney(3), iVar2 < 9000)) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015fe8);
  if ((iVar2 == 0) && (iVar2 = GetPeaceTimeLeft(), iVar2 < 2)) {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUnitCost((char)DAT_100162b4,&DAT_10015fe8,2);
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
  cVar1 = UpgIsRun(&DAT_10016270);
  if (cVar1 == '\0') {
    SetPDistribution(9,1,1);
  }
  cVar1 = UpgIsRun(&DAT_10016078);
  if ((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10013660), cVar1 == '\0')) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015f20);
  if (iVar2 == 0) {
    SetPDistribution(6,4,4);
  }
  cVar1 = UpgIsRun(&DAT_10016378);
  if (cVar1 != '\0') {
    return;
  }
  SetPDistribution(9,1,1);
  return;
}





void FUN_10006630(void)

{
  char cVar1;
  
  SetMinesUpgradeRules(&DAT_10016598);
  cVar1 = UpgIsRun(&DAT_10016340);
  if (cVar1 != '\0') {
    cVar1 = UpgIsRun(&DAT_10016288);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f16c);
      return;
    }
  }
  if (((DAT_10015f58 == 2) || (DAT_10015f58 == 3)) || (DAT_10015f58 == 4)) {
    SetMinesUpgradeRules(&DAT_1000f1d8);
  }
  else {
    cVar1 = UpgIsRun(&DAT_10016270);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016150);
      if (cVar1 == '\0') {
        SetMinesUpgradeRules(&DAT_10016598);
        return;
      }
    }
    cVar1 = UpgIsRun(&DAT_10016150);
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
  iVar1 = FUN_10005270(&DAT_10013688);
  if (iVar1 != 0) {
    SetDefenseState(0);
  }
  iVar1 = GetMaxPeaceTime();
  if ((iVar1 < 1) && (iVar1 = GetReadyUnits(&DAT_100138d8), iVar1 < 1)) {
    return;
  }
  SetDefenseState(0);
  return;
}





void FUN_10006730(void)

{
  char cVar1;
  
  cVar1 = UpgIsDone(&DAT_10016198);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10016370,0x1e,0x1e,0x3c);
  }
  cVar1 = UpgIsDone(&DAT_100160b0);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10013668,0x14,0x1e,0x3c);
  }
  TryUnit(&DAT_100138c8,0x3c,0x50,100);
  TryUpgrade(&DAT_100161d8,0x1e,100);
  TryUpgrade(&DAT_100161d0,0x1e,100);
  TryUpgrade(&DAT_100161a0,0x1e,100);
  TryUpgrade(&DAT_10016198,0x1e,100);
  TryUpgrade(&DAT_100161a8,0x1e,100);
  TryUpgrade(&DAT_10016098,0x1e,100);
  TryUpgrade(&DAT_100160a0,0x1e,100);
  TryUpgrade(&DAT_100160a8,0x1e,100);
  TryUpgrade(&DAT_100160b0,0x1e,100);
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
  
  iVar2 = GetReadyUnits(&DAT_100138d8);
  iVar3 = GetUnits(&DAT_10016250);
  iVar4 = GetReadyUnits(&DAT_10016250);
  iVar5 = GetUnits(&DAT_10015f20);
  iVar6 = GetReadyUnits(&DAT_10015f20);
  iVar7 = GetUnits(&DAT_100138d8);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_100161b0)) {
    TryUnit(&DAT_100138d8,4,0x32,100);
    cVar1 = UpgIsRun(&DAT_100161b8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100138d8,6,0x32,100);
    }
    cVar1 = UpgIsRun(&DAT_10016020);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100138d8,8,0x32,100);
    }
  }
  TryUpgrade(&DAT_100162e8,0x32,100);
  TryUpgrade(&DAT_100162d0,0x28,100);
  TryUpgrade(&DAT_100162e0,0x1e,100);
  TryUpgrade(&DAT_100162c0,0x14,100);
  TryUpgrade(&DAT_100162c8,0xf,100);
  TryUpgrade(&DAT_100162b8,10,100);
  return;
}





void FUN_10006950(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetReadyUnits(&DAT_10016258);
  iVar3 = GetUnits(&DAT_10016258);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10016258,5,100,100);
  }
  TryUnit(&DAT_10015fb8,1,100,100);
  TryUnit(&DAT_100161e8,1,100,100);
  TryUnit(&DAT_10016250,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016250);
  iVar3 = GetUnits(&DAT_10016250);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10015f20,1,100,100);
    iVar2 = GetReadyUnits(&DAT_10015f20);
    if (iVar2 != 0) {
      TryUnit(&DAT_10015fd0,1,100,100);
      TryUnit(&DAT_10015fd8,1,100,100);
      TryUnit(&DAT_10013878,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10013878);
      if (iVar2 != 0) {
        TryUnit(&DAT_10015fe8,1,100,100);
        TryUnit(&DAT_100160f8,1,100,100);
        TryUnit(&DAT_10013618,1,100,100);
        TryUnit(&DAT_100160d8,1,100,100);
        cVar1 = UpgIsRun(&DAT_10016020);
        if (cVar1 != '\0') {
          iVar2 = GetReadyUnits(&DAT_10015fb8);
          iVar3 = GetUnits(&DAT_10015fb8);
          if (iVar3 == iVar2) {
            iVar2 = GetExtraction(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            TryUnit(&DAT_10015fb8,uVar4,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_100160d8);
          iVar3 = GetUnits(&DAT_100160d8);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_100160d8,7,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_10013618);
          iVar3 = GetUnits(&DAT_10013618);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_10013618,3,100,100);
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
  iVar1 = GetUnits(&DAT_10013888);
  if (iVar1 < 4) {
    SetAIRegister(DAT_100162b4 + 8,0);
  }
  iVar1 = GetUnits(&DAT_10013888);
  if (0x5f < iVar1) {
    SetAIRegister(DAT_100162b4 + 8,1);
  }
  iVar1 = GetAIRegister(DAT_100162b4 + 8);
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
  if (*(int *)(&DAT_10015f98 + DAT_100162b4 * 4) != 0) {
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
    TryUnit(&DAT_10016190,1000,0x14,100);
    TryUnit(&DAT_10013688,1000,0x14,100);
    iVar2 = GetAIRegister(DAT_100162b4 + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        TryUnit(&DAT_10013888,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      TryUnit(&DAT_10016160,0x3c,10,100);
    }
    cVar1 = UpgIsDone(&DAT_10016020);
    if (cVar1 == '\0') {
      TryUnit(&DAT_10013690,1000,0x14,100);
    }
    TryUnit(&DAT_10013680,1000,0x14,100);
    TryUnit(&DAT_10015f80,1000,0x14,100);
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
  DAT_10015f58 = GetLandType();
  DAT_10016368 = GetDifficulty();
  DAT_10013898 = GetStartRes();
  FUN_10003040();
  SetMineBalanse(0x13,&DAT_1000f114);
  FUN_10006630();
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  switch(DAT_10015f58) {
  case 0:
  case 5:
    if (DAT_10013898 == 3) {
      SetMineBalanse(3,&DAT_1000f160);
      SetMinesUpgradeRules(&DAT_1000f16c);
      SetMinesBuildingRules(&DAT_1000f41c,5);
      FUN_10006c40();
    }
    else {
      SetMineBalanse(0x13,&DAT_1000f114);
      SetMinesUpgradeRules(&DAT_10016598);
      if (DAT_10013898 == 0) {
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
  iVar3 = GetUnits(&DAT_10016190);
  iVar4 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_100161b8);
  GetUnits(&DAT_10013688);
  UpgIsDone(&DAT_10016020);
  GetUnits(&DAT_100160e0);
  iVar5 = GetUnits(&DAT_100163b0);
  iVar6 = GetUnits(&DAT_10016330);
  iVar7 = GetUnits(&DAT_10013688);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = GetDifficulty();
  if (0 < iVar6) {
    TryUnit(&DAT_10016328,0xf,0x14,0x28);
  }
  iVar6 = GetReadyUnits(&DAT_100138d8);
  iVar7 = GetUnits(&DAT_100138d8);
  if (iVar3 == 0) {
    return;
  }
  TryUnit(&DAT_10015fd8,1,100,100);
  iVar8 = GetUnits(&DAT_10015fd8);
  if (iVar8 == 0) {
    return;
  }
  TryUpgrade(&DAT_10016378,100,100);
  cVar2 = FieldExist();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      TryUnit(&DAT_10016190,100,100,100);
      TryUnit(&DAT_10013688,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_10004230();
    }
    SetPDistribution(0,1,1);
  }
  else {
    if (DAT_10016594 == 0) {
      if (12000 < iVar4) {
        SetPDistribution(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_10004599:
      SetPDistribution(9,uVar12,uVar13);
    }
    else {
      if (DAT_10016594 == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_10004599;
      }
      if (DAT_10016594 == 2) {
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
        TryUnit(&DAT_10016190,100,100,100);
        goto LAB_100045d7;
      }
    }
    else {
LAB_100045d7:
      if ((300 < iVar4) && (TryUnit(&DAT_10016190,uVar12,0xe8,100), 400 < iVar4)) {
        TryUnit(&DAT_10013688,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_10004230();
    }
  }
  TryUnit(&DAT_10015fb8,1,100,100);
  TryUnit(&DAT_10015fb8,2,0x5a,5);
  TryUnit(&DAT_10015fb8,3,0x5a,5);
  iVar8 = GetUnits(&DAT_10016250);
  if (1 < iVar8) {
    TryUnit(&DAT_10015fb8,2,0x50,5);
    iVar8 = GetUnits(&DAT_10015fb8);
    if (1 < iVar8) {
      TryUnit(&DAT_100160d8,1,99,0x5a);
    }
    iVar8 = GetReadyUnits(&DAT_10015fb8);
    if (1 < iVar8) {
      TryUnit(&DAT_10013878,1,100,100);
    }
    TryUpgrade(&DAT_10016110,99,100);
  }
  iVar8 = GetUnits(&DAT_10016190);
  if (0x23 < iVar8) {
    TryUnit(&DAT_10013878,1,100,100);
  }
  TryUnit(&DAT_100161e8,1,100,100);
  TryUnit(&DAT_10016250,1,100,100);
  TryUnit(&DAT_10016250,2,100,100);
  TryUnit(&DAT_10015fd0,1,0x32,0x32);
  TryUnit(&DAT_100161e8,2,10,5);
  TryUpgrade(&DAT_10013660,0x50,100);
  iVar8 = GetUnits(&DAT_10015f20);
  if (0 < iVar8) {
    TryUnit(&DAT_100160f8,1,5,3);
  }
  cVar2 = FieldExist();
  if (cVar2 != '\0') {
    TryUnit(&DAT_10015f20,1,0x5a,0x5a);
  }
  TryUnit(&DAT_10015fe8,1,99,10);
  TryUnit(&DAT_10013618,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    TryUnit(&DAT_10015fd8,2,0x1e,0x1e);
  }
  TryUnit(&DAT_10016258,1,0x5a,0x14);
  TryUnit(&DAT_10016258,2,0x50,5);
  TryUpgrade(&DAT_10016078,0x5a,99);
  TryUpgrade(&DAT_10016270,0x5f,100);
  TryUpgrade(&DAT_100161b8,100,100);
  TryUpgrade(&DAT_10016040,0x5a,0x5a);
  TryUpgrade(&DAT_10016030,0x5f,100);
  TryUpgrade(&DAT_10016038,0x5f,100);
  iVar8 = GetReadyUnits(&DAT_100160d8);
  if (((iVar8 == 0) || (cVar2 = UpgIsRun(&DAT_100161b8), cVar2 != '\0')) ||
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
  TryUpgrade(&DAT_100137a0,100,100);
  TryUnit(&DAT_100162d8,1,0x32,0x5a);
  TryUnit(&DAT_100162d8,2,0x14,0x32);
  TryUnit(&DAT_100162d8,3,10,0x32);
  cVar2 = UpgIsDone(&DAT_10013958);
  if (cVar2 == '\0') {
    iVar9 = GetUnitsByUsage(0,0x1c);
    iVar10 = GetUnitsByUsage(0,0x1b);
    iVar8 = GetUnitsByUsage(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_10015f90;
      goto LAB_10004a03;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_10015f90;
      goto LAB_10004a03;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_100138e8;
LAB_10004a03:
    TryUnit(puVar11,iVar8,0x32,0x32);
  }
  TryUpgrade(&DAT_10013958,99,100);
  cVar2 = UpgIsRun(&DAT_10016270);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013958,0x5a,0x5a);
    TryUpgrade(&DAT_10013870,99,100);
  }
  cVar2 = UpgIsRun(&DAT_10013958);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013940,0x5a,0x5a);
    TryUpgrade(&DAT_10013880,0x46,10);
    FUN_10003320();
  }
  SetUpgradeLock(1,0);
  iVar8 = GetMoney(0);
  if ((((14000 < iVar8) && (cVar2 = UpgIsRun(&DAT_100137a0), cVar2 != '\0')) &&
      (iVar8 = GetMoney(1), iVar8 < 0x1d4c)) &&
     (cVar2 = UpgIsRun(&DAT_10013958), cVar2 == '\0')) {
    SetUpgradeLock(1,1);
  }
  TryUnit(&DAT_100161f0,3,0x5a,0x5a);
  cVar2 = UpgIsDone(&DAT_100160f0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161f0,0x14,10,0x5a);
  }
  TryUpgrade(&DAT_100160f0,99,0x5a);
  TryUpgrade(&DAT_10016100,99,100);
  TryUpgrade(&DAT_100162e8,0x32,0x32);
  TryUpgrade(&DAT_100162d0,0x32,0x32);
  TryUpgrade(&DAT_100162e0,0x32,0x32);
  TryUpgrade(&DAT_100162c0,0x32,0x32);
  TryUpgrade(&DAT_100162c8,0x32,0x32);
  TryUpgrade(&DAT_100162b8,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     (TryUnit(&DAT_100138d8,1,0x50,10), 0x3c < iVar3)) {
    TryUnit(&DAT_100138d8,2,0x50,10);
    TryUnit(&DAT_100138d8,3,0x32,10);
    TryUnit(&DAT_100138d8,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    TryUnit(&DAT_10016160,0x32,1,0x1e);
    TryUnit(&DAT_10016278,0x14,1,0x1e);
  }
  else {
    TryUnit(&DAT_100138c8,0x32,10,100);
    TryUnit(&DAT_10016160,0x4b,1,0x1e);
    TryUnit(&DAT_10016278,0x1e,1,0x1e);
    TryUpgrade(&DAT_10013630,0x5f,0x5a);
    TryUpgrade(&DAT_10013708,0x5f,0x5a);
    TryUpgrade(&DAT_10013628,0x5f,0x5a);
    cVar2 = UpgIsDone(&DAT_10016198);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10016370,5,0x1e,10);
    }
    cVar2 = UpgIsDone(&DAT_100160b0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013668,10,0x1e,10);
    }
    FUN_10004360();
  }
  cVar2 = UpgIsDone(&DAT_10016020);
  if (cVar2 != '\0') {
    cVar2 = UpgIsDone(&DAT_10016100);
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
  iVar3 = GetUnits(&DAT_100160d8);
  if (iVar3 != 0) {
    TryUnit(&DAT_100161f0,6,0x5a,0x5a);
  }
  cVar2 = UpgIsDone(&DAT_100160f0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161f0,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    TryUnit(&DAT_100160d8,2,0x5f,0x14);
    TryUnit(&DAT_100160d8,3,0x5f,0x14);
    TryUnit(&DAT_100160d8,4,0x5f,0x14);
    TryUnit(&DAT_100160d8,5,0x28,0x14);
    TryUnit(&DAT_100160d8,6,0x28,0x14);
    TryUpgrade(&DAT_10016020,99,100);
    iVar3 = GetUnits(&DAT_100160e0);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_10016208,0x5a,100);
      TryUpgrade(&DAT_10016210,0x50,0x46);
    }
    TryUpgrade(&DAT_100160f0,0x3c,0x5a);
    cVar1 = UpgIsRun(&DAT_10013908);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016168,0x5a,0x5a);
      TryUpgrade(&DAT_10016178,0x5a,0x5a);
      TryUpgrade(&DAT_10016180,0x46,0x5a);
      TryUpgrade(&DAT_10016170,0x46,0x5a);
    }
  }
  TryUpgrade(&DAT_100137a0,99,100);
  TryUpgrade(&DAT_100138e0,0x3c,0x5a);
  TryUpgrade(&DAT_10016150,100,100);
  if (0x15e < iVar5) {
    TryUnit(&DAT_100160e0,500,10,100);
    FUN_10004310();
  }
  iVar3 = GetReadyUnits(&DAT_10013878);
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
  iVar3 = GetReadyUnits(&DAT_10015f20);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = UpgIsRun(&DAT_10016270), cVar1 == '\0')) {
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
  iVar3 = GetUnits(&DAT_100161e8);
  if ((iVar3 != 0) && (cVar1 = UpgIsRun(&DAT_100161b8), cVar1 == '\0')) {
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
  if (*(int *)(&DAT_1001660c + iVar3 * 4) == 0) {
    AI_Torg(5,3,4000);
    iVar3 = GetAINation();
    *(int *)(&DAT_1001660c + iVar3 * 4) = 1;
  }
  return;
}





__declspec(dllexport) void InitAI(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  unsigned int uVar4;
  int *puVar5;
  unsigned int uVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_60 [48];
  char acStack_30 [48];
  if ((((1) &&
       (RegisterUpgrade(&DAT_10016088,"KUZ04SP"), 1)) &&
      (RegisterUpgrade(&DAT_10016028,"AKA35SP"), 1)) &&
     (RegisterUpgrade(&DAT_10016080,"AKA36SP"), 1)) {
    RegisterUpgrade(&DAT_10016090,"AKA32SP");
  }
  if (1) {
    RegisterUnitType(&DAT_10013690,"Dragun(sp)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10013900,"Dragun(sp)ATTACK"), 1))
        && ((RegisterUpgrade(&DAT_100138f8,"Dragun(sp)ATTACK3"),
            1 &&
            ((RegisterUpgrade(&DAT_100138f0,"Dragun(sp)ATTACK4"),
             1 &&
             (RegisterUpgrade(&DAT_10013938,"Dragun(sp)ATTACK5"),
             1)))))) &&
       (RegisterUpgrade(&DAT_10013928,"Dragun(sp)ATTACK6"), 1))
      && (((((RegisterUpgrade(&DAT_10013920,"Dragun(sp)ATTACK7"),
             1 &&
             (RegisterUpgrade(&DAT_100136d8,"Dragun(sp)SHIELD"),
             1)) &&
            (RegisterUpgrade(&DAT_100136c8,"Dragun(sp)SHIELD3"),
            1)) &&
           ((RegisterUpgrade(&DAT_100138c0,"Dragun(sp)SHIELD4"),
            1 &&
            (RegisterUpgrade(&DAT_100138b8,"Dragun(sp)SHIELD5"),
            1)))) &&
          ((RegisterUpgrade(&DAT_100138b0,"Dragun(sp)SHIELD6"), 1
           && ((RegisterUpgrade(&DAT_100138a8,"Dragun(sp)SHIELD7"),
               1 &&
               (RegisterUpgrade(&DAT_10013900,"Dragun(sp)ATTACK"),
               1)))))))) &&
     (((RegisterUpgrade(&DAT_100138f8,"Dragun(sp)ATTACK3"), 1 &&
       (((RegisterUpgrade(&DAT_100138f0,"Dragun(sp)ATTACK4"), 1
         && (RegisterUpgrade(&DAT_10013938,"Dragun(sp)ATTACK5"),
            1)) &&
        (RegisterUpgrade(&DAT_10013928,"Dragun(sp)ATTACK6"), 1)))
       ) && ((((RegisterUpgrade(&DAT_10013920,"Dragun(sp)ATTACK7"),
               1 &&
               (RegisterUpgrade(&DAT_100136d8,"Dragun(sp)SHIELD"),
               1)) &&
              ((RegisterUpgrade(&DAT_100136c8,"Dragun(sp)SHIELD3"),
               1 &&
               ((RegisterUpgrade(&DAT_100138c0,"Dragun(sp)SHIELD4"),
                1 &&
                (RegisterUpgrade(&DAT_100138b8,"Dragun(sp)SHIELD5"),
                1)))))) &&
             (RegisterUpgrade(&DAT_100138b0,"Dragun(sp)SHIELD6"),
             1)))))) {
    RegisterUpgrade(&DAT_100138a8,"Dragun(sp)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_10013680,"Dragun_18(sp)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10013658,"Dragun_18(sp)ATTACK"), 1
         )) && (RegisterUpgrade(&DAT_10013650,"Dragun_18(sp)ATTACK3"),
               1)) &&
       ((RegisterUpgrade(&DAT_10013648,"Dragun_18(sp)ATTACK4"), 1
        && (RegisterUpgrade(&DAT_10016318,"Dragun_18(sp)ATTACK5"),
           1)))) &&
      ((RegisterUpgrade(&DAT_10016310,"Dragun_18(sp)ATTACK6"), 1
       && ((RegisterUpgrade(&DAT_10016308,"Dragun_18(sp)ATTACK7"),
           1 &&
           (RegisterUpgrade(&DAT_10016390,"Dragun_18(sp)SHIELD"),
           1)))))) &&
     (((RegisterUpgrade(&DAT_10016388,"Dragun_18(sp)SHIELD3"), 1
       && (((RegisterUpgrade(&DAT_100163d8,"Dragun_18(sp)SHIELD4"),
            1 &&
            (RegisterUpgrade(&DAT_100163d0,"Dragun_18(sp)SHIELD5"),
            1)) &&
           (RegisterUpgrade(&DAT_100163c8,"Dragun_18(sp)SHIELD6"),
           1)))) &&
      ((((RegisterUpgrade(&DAT_100163c0,"Dragun_18(sp)SHIELD7"),
         1 &&
         (RegisterUpgrade(&DAT_10013658,"Dragun_18(sp)ATTACK"), 1
         )) && (((RegisterUpgrade(&DAT_10013650,"Dragun_18(sp)ATTACK3"),
                 1 &&
                 ((RegisterUpgrade(&DAT_10013648,"Dragun_18(sp)ATTACK4"),
                  1 &&
                  (RegisterUpgrade(&DAT_10016318,"Dragun_18(sp)ATTACK5"),
                  1)))) &&
                (RegisterUpgrade(&DAT_10016310,"Dragun_18(sp)ATTACK6"),
                1)))) &&
       ((((RegisterUpgrade(&DAT_10016308,"Dragun_18(sp)ATTACK7"),
          1 &&
          (RegisterUpgrade(&DAT_10016390,"Dragun_18(sp)SHIELD"),
          1)) &&
         (RegisterUpgrade(&DAT_10016388,"Dragun_18(sp)SHIELD3"),
         1)) &&
        (((RegisterUpgrade(&DAT_100163d8,"Dragun_18(sp)SHIELD4"),
          1 &&
          (RegisterUpgrade(&DAT_100163d0,"Dragun_18(sp)SHIELD5"),
          1)) &&
         (RegisterUpgrade(&DAT_100163c8,"Dragun_18(sp)SHIELD6"),
         1)))))))))) {
    RegisterUpgrade(&DAT_100163c0,"Dragun_18(sp)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_10015fe0,"Sveshenik_evro(sp)");
  }
  DAT_100162b4 = GetAINation();
  iVar3 = DAT_100162b4 * 0x4b8;
  *(int *)(&DAT_10013af0 + iVar3) = 0;
  *(int *)(&DAT_10013c84 + iVar3) = 0;
  uVar4 = GetRandomIndex();
  *(unsigned int *)(&DAT_10015f98 + DAT_100162b4 * 4) = uVar4 & 0x80;
  if (1) {
    RegisterUpgrade(&DAT_100160d0,"Barabanshik_ev1(sp)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10013888,"Dragun_18_DIP(sp)");
  }
  bVar2 = GetRandomIndex();
  pcVar7 = "Dragun(sp)";
  if ((bVar2 & 6) != 2) {
    pcVar7 = "Konni_Ricar(sp)";
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
  pcVar7 = "Mushketer(sp)";
  if ((bVar2 & 0x18) != 8) {
    pcVar7 = "Grenader(sp)";
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
      (RegisterUnitType(&DAT_10016278,"Strelec_Algir_DIP(sp)"), 1)
      ) && (RegisterUnitType(&DAT_10016328,"Kozak_loshad_DIP(sp)"),
           1)) {
    RegisterUnitType(&DAT_10013700,"Officer_evro(sp)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_10016260,"Officer_evro(sp)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_10015fc8,"Officer_evro(sp)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10013640,"Barabanshik_ev1(sp)");
  }
  AssignFormUnit("Pikiner_evro(sp)");
  if ((((1) &&
       (RegisterUnitType(&DAT_10013688,"Pikiner_evro(sp)"), 1)) &&
      (RegisterUnitType(&DAT_10016190,"Kreposnoi_portugal(sp)"), 1
      )) && (RegisterUnitType(&DAT_10016160,"Grenader_DIP(sp)"), 1
            )) {
    RegisterUnitType(&DAT_100160e0,"Strelec_Spain(sp)");
    if (((((1) &&
          (RegisterUnitType(&DAT_100163b0,acStack_60), 1)) &&
         ((RegisterUnitType(&DAT_10016330,"Kirasir(sp)"), 1 &&
          ((RegisterUnitType(&DAT_10015f80,acStack_30), 1 &&
           (RegisterUnitType(&DAT_10016370,"Pushka(sp)"), 1))))))
        && (((RegisterUnitType(&DAT_10013668,"Mortira(sp)"), 1 &&
             (((RegisterUnitType(&DAT_100138c8,"Mortira_b(sp)"), 1
               && (RegisterUnitType(&DAT_100161f0,"Lodka(sp)"), 1)
               ) && (RegisterUnitType(&DAT_10015fb8,"Center_Spain(sp)"),
                    1)))) &&
            (((RegisterUnitType(&DAT_10015fd8,"Melnica(sp)"), 1 &&
              (RegisterUnitType(&DAT_10016250,"Kazarma_1_SP(sp)"),
              1)) &&
             ((RegisterUnitType(&DAT_10016258,"Kazarma_SP(sp)"), 1
              && ((RegisterUnitType(&DAT_10015fd0,"Sclad2(sp)"), 1
                  && (RegisterUnitType(&DAT_10015f20,"akademia_SP(sp)"),
                     1)))))))))) &&
       ((RegisterUnitType(&DAT_100160d8,"Konushnia_SP(sp)"), 1 &&
        (((((RegisterUnitType(&DAT_10015fe8,"Dip_korpus_SP(sp)"),
            1 &&
            (RegisterUnitType(&DAT_10013618,"artileri_depo_SP(sp)"),
            1)) &&
           (RegisterUnitType(&DAT_10013878,"Rinok(sp)"), 1)) &&
          (((RegisterUnitType(&DAT_100138d8,"Bashnia(sp)"), 1 &&
            (RegisterUnitType(&DAT_100161e8,"Kuznica_SP(sp)"), 1))
           && ((RegisterUnitType(&DAT_100160f8,"Cercov_SP(sp)"), 1
               && ((RegisterUnitType(&DAT_100162d8,"PorE(sp)"), 1
                   && (RegisterUnitType(&DAT_100138e8,"Fregat(sp)"),
                      1)))))))) &&
         ((RegisterUnitType(&DAT_10015f90,"GALERA(sp)"), 1 &&
          ((RegisterUnitType(&DAT_10016398,"Linkor(sp)"), 1 &&
           (RegisterUnitType(&DAT_10015f88,"Yahta(sp)"), 1))))))))
       )) {
      RegisterUnitType(&DAT_100138a0,"PERES_KOR(sp)");
    }
  }
  if (((((((((1) &&
            (RegisterUpgrade(&DAT_10016378,"Melnica(sp)GETRES"),
            1)) &&
           (RegisterUpgrade(&DAT_10016100,"Melnica(sp)GETRES2"),
           1)) &&
          ((RegisterUpgrade(&DAT_10013660,"KUZ01SP"), 1 &&
           (RegisterUpgrade(&DAT_10016350,"Pikiner_evro(sp)ATTACK"),
           1)))) &&
         (RegisterUpgrade(&DAT_10016358,"Pikiner_evro(sp)ATTACK3"),
         1)) &&
        ((RegisterUpgrade(&DAT_10016340,"Pikiner_evro(sp)ATTACK4"),
         1 &&
         (RegisterUpgrade(&DAT_10016348,"Pikiner_evro(sp)ATTACK5"),
         1)))) &&
       ((RegisterUpgrade(&DAT_10016360,"Pikiner_evro(sp)ATTACK6"),
        1 &&
        (((RegisterUpgrade(&DAT_10016298,"Pikiner_evro(sp)SHIELD"),
          1 &&
          (RegisterUpgrade(&DAT_10016280,"Pikiner_evro(sp)SHIELD3"),
          1)) &&
         (RegisterUpgrade(&DAT_10016288,"Pikiner_evro(sp)SHIELD4"),
         1)))))) &&
      ((((RegisterUpgrade(&DAT_100162a0,"Pikiner_evro(sp)SHIELD5"),
         1 &&
         (RegisterUpgrade(&DAT_100162a8,"Pikiner_evro(sp)SHIELD6"),
         1)) &&
        (RegisterUpgrade(&DAT_10013910,"Strelec_Spain(sp)ATTACK"),
        1)) &&
       ((RegisterUpgrade(&DAT_10013918,"Strelec_Spain(sp)ATTACK3"),
        1 &&
        (RegisterUpgrade(&DAT_10013908,"Strelec_Spain(sp)ATTACK4"),
        1)))))) &&
     ((RegisterUpgrade(&DAT_10015f78,"Strelec_Spain(sp)SHIELD"),
      1 &&
      (RegisterUpgrade(&DAT_10015f68,"Strelec_Spain(sp)SHIELD3"),
      1)))) {
    RegisterUpgrade(&DAT_10015f70,"Strelec_Spain(sp)SHIELD4");
  }
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016018,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016010,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016008,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016000,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10015ff8,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10015ff0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016130,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016128,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016120,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016118,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016108,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10016158,puVar5);
  if (((((1) &&
        (RegisterUpgrade(&DAT_100136b8,"Kirasir(sp)ATTACK"), 1))
       && (RegisterUpgrade(&DAT_100136b0,"Kirasir(sp)ATTACK3"), 1
          )) && ((RegisterUpgrade(&DAT_100136a8,"Kirasir(sp)ATTACK4"),
                 1 &&
                 (RegisterUpgrade(&DAT_100136a0,"Kirasir(sp)ATTACK5"),
                 1)))) &&
     ((((RegisterUpgrade(&DAT_10013678,"Kirasir(sp)ATTACK6"), 1
        && ((RegisterUpgrade(&DAT_10013670,"Kirasir(sp)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_10013748,"Kirasir(sp)SHIELD"),
            1)))) &&
       (RegisterUpgrade(&DAT_10013740,"Kirasir(sp)SHIELD3"), 1))
      && (((RegisterUpgrade(&DAT_10013738,"Kirasir(sp)SHIELD4"),
           1 &&
           (RegisterUpgrade(&DAT_10013720,"Kirasir(sp)SHIELD5"),
           1)) &&
          (RegisterUpgrade(&DAT_10013718,"Kirasir(sp)SHIELD6"), 1
          )))))) {
    RegisterUpgrade(&DAT_10013710,"Kirasir(sp)SHIELD7");
  }
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136e0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136e8,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136f0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136f8,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136c0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_100136d0,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013788,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013790,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013798,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013770,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013778,puVar5);
  puVar5 = FUN_10002f30();
  SafeRegisterUpgrade(&DAT_10013780,puVar5);
  if (((((((1) &&
          (RegisterUpgrade(&DAT_100161d8,"Pushka(sp)BUILD"), 1))
         && ((RegisterUpgrade(&DAT_100161d0,"Pushka(sp)BUILD3"),
             1 &&
             ((RegisterUpgrade(&DAT_100161a0,"Pushka(sp)BUILD4"),
              1 &&
              (RegisterUpgrade(&DAT_10016198,"Pushka(sp)BUILD5"),
              1)))))) &&
        ((RegisterUpgrade(&DAT_100161a8,"Pushka(sp)BUILD6"), 1 &&
         (((((RegisterUpgrade(&DAT_10016098,"Mortira(sp)BUILD"),
             1 &&
             (RegisterUpgrade(&DAT_100160a0,"Mortira(sp)BUILD3"),
             1)) &&
            (RegisterUpgrade(&DAT_100160a8,"Mortira(sp)BUILD4"),
            1)) &&
           ((RegisterUpgrade(&DAT_100160b0,"Mortira(sp)BUILD5"),
            1 &&
            (RegisterUpgrade(&DAT_100161b8,"KUZ03SP"), 1)))) &&
          ((RegisterUpgrade(&DAT_10016020,"MAINSP"), 1 &&
           ((RegisterUpgrade(&DAT_10013958,"AKA06SP"), 1 &&
            (RegisterUpgrade(&DAT_10016078,"AKA01SP"), 1)))))))))
        ) && (RegisterUpgrade(&DAT_10016030,"AKA02SP"), 1)) &&
      (((((((((RegisterUpgrade(&DAT_10016038,"AKA03SP"), 1 &&
              (RegisterUpgrade(&DAT_10016040,"AKA04SP"), 1)) &&
             (RegisterUpgrade(&DAT_10016270,"AKA08SP"), 1)) &&
            ((RegisterUpgrade(&DAT_10016110,"AKA23SP"), 1 &&
             (RegisterUpgrade(&DAT_10016150,"AKA24SP"), 1)))) &&
           ((RegisterUpgrade(&DAT_10016208,"AKA31SP"), 1 &&
            ((RegisterUpgrade(&DAT_10016210,"AKA33SP"), 1 &&
             (RegisterUpgrade(&DAT_10016168,"AKA12SP"), 1))))))
          && (RegisterUpgrade(&DAT_10016178,"AKA13SP"), 1)) &&
         (((RegisterUpgrade(&DAT_10016180,"AKA14SP"), 1 &&
           (RegisterUpgrade(&DAT_10016170,"AKA15SP"), 1)) &&
          (RegisterUpgrade(&DAT_10013950,"AKA11SP"), 1)))) &&
        (((RegisterUpgrade(&DAT_100138e0,"AKA10SP"), 1 &&
          (RegisterUpgrade(&DAT_100137a0,"AKA30SP"), 1)) &&
         ((RegisterUpgrade(&DAT_100160f0,"AKA07SP"), 1 &&
          ((RegisterUpgrade(&DAT_10013940,"AKA20SP"), 1 &&
           (RegisterUpgrade(&DAT_100161f8,"KUZ02SP"), 1))))))))
       && ((RegisterUpgrade(&DAT_10016200,"AKA09SP"), 1 &&
           ((((RegisterUpgrade(&DAT_10013870,"AKA05SP"), 1 &&
              (RegisterUpgrade(&DAT_10013880,"AKA28SP"), 1)) &&
             (RegisterUpgrade(&DAT_10013768,"AKA29SP"), 1)) &&
            ((RegisterUpgrade(&DAT_10013628,"KUZ05SP"), 1 &&
             (RegisterUpgrade(&DAT_10013708,"KUZ06SP"), 1))))))))
      )) && ((((RegisterUpgrade(&DAT_10013630,"AKA34SP"), 1 &&
               ((RegisterUpgrade(&DAT_100162e8,"Bashnia(sp)PAUSE"),
                1 &&
                (RegisterUpgrade(&DAT_100162d0,"Bashnia(sp)PAUSE3"),
                1)))) &&
              (RegisterUpgrade(&DAT_100162e0,"Bashnia(sp)PAUSE4"),
              1)) &&
             ((RegisterUpgrade(&DAT_100162c0,"Bashnia(sp)PAUSE5"),
              1 &&
              (RegisterUpgrade(&DAT_100162c8,"Bashnia(sp)PAUSE6"),
              1)))))) {
    RegisterUpgrade(&DAT_100162b8,"Bashnia(sp)PAUSE7");
  }
  SetPDistribution(9,4,4);
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(sp)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(sp)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(sp)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(sp)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(sp)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(sp)INSIDE7",0x32);
  AssignPeasant("Kreposnoi_portugal(sp)");
  AssignMine("shahta(sp)");
  AssignHouse("Dom_Ispain(sp)");
  AssignWall("WALL_EV(sp)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x5a);
  SET_MINE_UPGRADE2_RADIUS(0x5a);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}





__declspec(dllexport) void ProcessAI(void)

{
  DAT_100162b4 = GetAINation();
  FUN_10006d40();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
