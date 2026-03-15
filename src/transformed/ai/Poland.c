/* Auto-generated from Poland.c */
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
long long DAT_10010798 = 0;
long long DAT_10013748 = 0;
int DAT_10013750 = 0;
long long DAT_10013758 = 0;
long long DAT_10013760 = 0;
long long DAT_10013770 = 0;
long long DAT_10013778 = 0;
long long DAT_10013780 = 0;
long long DAT_10013788 = 0;
long long DAT_10013790 = 0;
long long DAT_10013798 = 0;
long long DAT_100137a0 = 0;
long long DAT_100137a8 = 0;
long long DAT_100137b0 = 0;
long long DAT_100137b8 = 0;
long long DAT_100137c0 = 0;
long long DAT_100137d0 = 0;
long long DAT_100137d8 = 0;
long long DAT_100137e0 = 0;
long long DAT_100137e8 = 0;
long long DAT_100137f0 = 0;
long long DAT_100137f8 = 0;
long long DAT_10013800 = 0;
long long DAT_10013808 = 0;
long long DAT_10013810 = 0;
long long DAT_10013818 = 0;
long long DAT_10013820 = 0;
long long DAT_10013828 = 0;
long long DAT_10013830 = 0;
long long DAT_10013838 = 0;
long long DAT_10013840 = 0;
long long DAT_10013848 = 0;
long long DAT_10013850 = 0;
int DAT_10013858 = 0;
long long DAT_10013868 = 0;
long long DAT_10013870 = 0;
long long DAT_10013878 = 0;
long long DAT_10013898 = 0;
long long DAT_100138a0 = 0;
long long DAT_100138a8 = 0;
long long DAT_100138b0 = 0;
long long DAT_100138b8 = 0;
long long DAT_100138c0 = 0;
long long DAT_100138c8 = 0;
long long DAT_100138d0 = 0;
long long DAT_100138d8 = 0;
long long DAT_100139a0 = 0;
long long DAT_100139a8 = 0;
long long DAT_100139b0 = 0;
long long DAT_100139b8 = 0;
int DAT_100139c8 = 0;
long long DAT_100139d0 = 0;
long long DAT_100139d8 = 0;
long long DAT_100139e0 = 0;
long long DAT_100139e8 = 0;
long long DAT_100139f0 = 0;
long long DAT_100139f8 = 0;
long long DAT_10013a08 = 0;
long long DAT_10013a10 = 0;
long long DAT_10013a18 = 0;
long long DAT_10013a20 = 0;
long long DAT_10013a28 = 0;
long long DAT_10013a30 = 0;
long long DAT_10013a38 = 0;
long long DAT_10013a40 = 0;
long long DAT_10013a48 = 0;
long long DAT_10013a50 = 0;
long long DAT_10013a58 = 0;
long long DAT_10013a68 = 0;
long long DAT_10013a70 = 0;
long long DAT_10013a80 = 0;
long long DAT_10013a88 = 0;
char DAT_10013a90 = 0;
char DAT_10013c20 = 0;
char DAT_10013c24 = 0;
char DAT_10013db4 = 0;
char DAT_10013db8 = 0;
long long DAT_10016050 = 0;
int DAT_10016088 = 0;
long long DAT_10016098 = 0;
long long DAT_100160a0 = 0;
long long DAT_100160a8 = 0;
long long DAT_100160b0 = 0;
long long DAT_100160b8 = 0;
long long DAT_100160c0 = 0;
char DAT_100160c8 = 0;
long long DAT_100160e8 = 0;
long long DAT_100160f8 = 0;
long long DAT_10016100 = 0;
long long DAT_10016108 = 0;
long long DAT_10016110 = 0;
long long DAT_10016118 = 0;
long long DAT_10016120 = 0;
long long DAT_10016128 = 0;
long long DAT_10016130 = 0;
long long DAT_10016138 = 0;
long long DAT_10016140 = 0;
long long DAT_10016148 = 0;
long long DAT_10016150 = 0;
long long DAT_10016158 = 0;
long long DAT_10016160 = 0;
long long DAT_10016168 = 0;
long long DAT_10016170 = 0;
long long DAT_100161a8 = 0;
long long DAT_100161b0 = 0;
long long DAT_100161b8 = 0;
long long DAT_100161c0 = 0;
long long DAT_100161c8 = 0;
long long DAT_100161d0 = 0;
long long DAT_100161d8 = 0;
long long DAT_100161e0 = 0;
long long DAT_10016200 = 0;
long long DAT_10016208 = 0;
long long DAT_10016210 = 0;
int DAT_10016218 = 0;
long long DAT_10016220 = 0;
long long DAT_10016228 = 0;
long long DAT_10016230 = 0;
long long DAT_10016238 = 0;
long long DAT_10016240 = 0;
long long DAT_10016248 = 0;
long long DAT_10016250 = 0;
long long DAT_10016258 = 0;
long long DAT_10016260 = 0;
long long DAT_10016280 = 0;
long long DAT_10016288 = 0;
long long DAT_10016290 = 0;
long long DAT_10016298 = 0;
long long DAT_100162a0 = 0;
long long DAT_100162a8 = 0;
long long DAT_100162b0 = 0;
int DAT_100162b8 = 0;
int DAT_100162b9 = 0;
int DAT_100162ba = 0;
int DAT_100162bb = 0;
int DAT_100162bc = 0;
int DAT_100162bd = 0;
long long DAT_100162c0 = 0;
long long DAT_100162c8 = 0;
long long DAT_100162d0 = 0;
long long DAT_100162d8 = 0;
int DAT_100162e0 = 0;
long long DAT_100162e8 = 0;
int DAT_100162f0 = 0;
int DAT_100162f4 = 0;
long long DAT_10016300 = 0;
long long DAT_10016308 = 0;
long long DAT_10016318 = 0;
long long DAT_10016320 = 0;
long long DAT_10016328 = 0;
long long DAT_10016330 = 0;
long long DAT_10016338 = 0;
long long DAT_10016340 = 0;
int DAT_1001637c = 0;
long long DAT_10016380 = 0;
long long DAT_10016388 = 0;
long long DAT_10016390 = 0;
long long DAT_100163a0 = 0;
long long DAT_100163a8 = 0;
long long DAT_100163b0 = 0;
long long DAT_100163b8 = 0;
int DAT_100163c0 = 0;
long long DAT_100163c8 = 0;
long long DAT_100163d0 = 0;
long long DAT_100163d8 = 0;
int DAT_100163e4 = 0;
long long DAT_100163e8 = 0;
long long DAT_100163f0 = 0;
long long DAT_100163f8 = 0;
long long DAT_10016400 = 0;
long long DAT_10016408 = 0;
long long DAT_10016410 = 0;
long long DAT_10016418 = 0;
long long DAT_10016438 = 0;
long long DAT_10016440 = 0;
long long DAT_10016448 = 0;
int DAT_10016450 = 0;
int DAT_10016451 = 0;
int DAT_10016452 = 0;
int DAT_10016453 = 0;
int DAT_10016454 = 0;
int DAT_10016455 = 0;
long long DAT_10016458 = 0;
long long DAT_10016460 = 0;
int DAT_10016468 = 0;
long long DAT_10016470 = 0;
long long DAT_10016478 = 0;
long long DAT_10016480 = 0;
long long DAT_10016488 = 0;
long long DAT_10016490 = 0;
int DAT_10016498 = 0;
long long DAT_100164a0 = 0;
long long DAT_100164a8 = 0;
int DAT_100164b0 = 0;
long long DAT_100164b8 = 0;
long long DAT_100164c0 = 0;
long long DAT_100164c8 = 0;
long long DAT_100164e0 = 0;
long long DAT_100164f0 = 0;
long long DAT_100164f8 = 0;
long long DAT_10016500 = 0;
long long DAT_10016508 = 0;
int DAT_100166c4 = 0;
long long DAT_100166c8 = 0;
int DAT_10016734 = 0;
int DAT_10016738 = 0;
char DAT_1001673c = 0;
int DAT_1001677c = 0;

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
  sprintf(&DAT_100138d8,&DAT_10010798);
  return &DAT_100138d8;
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
  
  DAT_100163e4 = GetAINation();
  iVar1 = GetUnits(&DAT_100162c0);
  iVar2 = GetExtraction(1);
  iVar3 = GetExtraction(4);
  iVar4 = GetExtraction(5);
  DAT_100162e0 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_100163e4 * 0x4b8;
  DAT_10016734 = *(int *)(&DAT_10013c20 + iVar1);
  DAT_100162f0 = &DAT_10013a90 + iVar1;
  DAT_100162f4 = &DAT_10013c24 + iVar1;
  DAT_10016738 = *(int *)(&DAT_10013db4 + iVar1);
  DAT_1001637c = &DAT_10013db8 + iVar1;
  DAT_100163c0 = GetMoney(3);
  DAT_10013750 = GetMoney(0);
  DAT_100164b0 = GetMoney(2);
  DAT_10013858 = GetMoney(4);
  DAT_10016218 = GetMoney(5);
  DAT_10016468 = GetMoney(1);
  iVar1 = GetStartRes();
  if (iVar1 == 0) {
    DAT_1000f248 = 4;
  }
  SetMineBalanse(0x13,&DAT_1000f114);
  SetMinesUpgradeRules(&DAT_100166c8);
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  DAT_100162b8 = 1;
  DAT_100162ba = 1;
  DAT_100162bc = 1;
  DAT_100162bd = 1;
  DAT_10016453 = 1;
  DAT_10016451 = 1;
  DAT_10016454 = 1;
  DAT_10016455 = 1;
  DAT_100162bb = 0;
  DAT_100162b9 = 0;
  DAT_10016450 = 0;
  DAT_10016452 = 0;
  DAT_1001677c = 0;
  return;
}





void FUN_10003200(void)

{
  int iVar1;
  
  if (DAT_10016088 < 2) {
    iVar1 = GetUnits(&DAT_100137b8);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_10013830,iVar1,0x32,0x32);
      TryUnit(&DAT_10013770,iVar1,0x14,0x32);
    }
  }
  return;
}





void FUN_10003270(void)

{
  TryUpgrade(&DAT_10016480,0x3c,100);
  TryUpgrade(&DAT_10016488,0x3c,100);
  TryUpgrade(&DAT_10016470,0x3c,100);
  TryUpgrade(&DAT_10016478,0x14,100);
  TryUpgrade(&DAT_10016490,10,100);
  TryUpgrade(&DAT_100163c8,0x3c,100);
  TryUpgrade(&DAT_100163b0,0x3c,100);
  TryUpgrade(&DAT_100163b8,0x3c,100);
  TryUpgrade(&DAT_100163d0,0x14,100);
  TryUpgrade(&DAT_100163d8,10,100);
  return;
}





void FUN_10003310(void)

{
  TryUpgrade(&DAT_10013a40,0x5a,100);
  TryUpgrade(&DAT_10013a48,0x5a,100);
  TryUpgrade(&DAT_10013a38,0x5a,100);
  TryUpgrade(&DAT_100160a8,0x5a,100);
  TryUpgrade(&DAT_10016098,0x5a,100);
  return;
}





void FUN_10003360(void)

{
  TryUpgrade(&DAT_100161c8,0x1e,0x32);
  TryUpgrade(&DAT_100161d0,0x1e,0x32);
  TryUpgrade(&DAT_100161d8,0x1e,0x32);
  TryUpgrade(&DAT_100161e0,0x1e,0x32);
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
  cVar1 = UpgIsDone(&DAT_10016150);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = GetReadyUnits(&DAT_10016408);
  iVar6 = GetUnits(&DAT_100160e8);
  iVar7 = GetReadyUnits(&DAT_100160e8);
  iVar8 = GetUnits(&DAT_10016118);
  iVar9 = GetReadyUnits(&DAT_10016118);
  iVar10 = GetUnits(&DAT_10016208);
  iVar11 = GetReadyUnits(&DAT_10016208);
  iVar12 = GetUnits(&DAT_10016408);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  TryUpgrade(&DAT_10016150,0x5f,100);
  bVar13 = true;
  iVar5 = GetMoney(3);
  if ((((55000 < iVar5) && (iVar5 = GetMoney(1), 10000 < iVar5)) &&
      (iVar5 = GetMoney(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = GetUnits(&DAT_100162c0);
  iVar7 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_100162e8);
  GetUnits(&DAT_100137b8);
  iVar8 = GetUnits(&DAT_10016210);
  iVar11 = GetUnits(&DAT_100164e0);
  iVar9 = GetUnits(&DAT_10016460);
  iVar10 = GetUnits(&DAT_100137b8);
  iVar11 = iVar10 + iVar9 + iVar11;
  TryUpgrade(&DAT_10016240,99,0x50);
  TryUpgrade(&DAT_10016280,0x62,0x50);
  iVar9 = GetReadyUnits(&DAT_10013a08);
  iVar10 = GetUnits(&DAT_10013a08);
  if (iVar5 != 0) {
    TryUnit(&DAT_10016108,1,100,100);
    iVar12 = GetUnits(&DAT_10016108);
    if (iVar12 == 0) {
      return;
    }
    TryUpgrade(&DAT_100164a8,100,100);
    cVar2 = FieldExist();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        TryUnit(&DAT_100162c0,100,100,100);
        TryUnit(&DAT_100137b8,100,100,100);
      }
      SetPDistribution(0,1,1);
    }
    else {
      cVar2 = UpgIsDone(&DAT_100138d0);
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
        TryUnit(&DAT_100162c0,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          TryUnit(&DAT_100162c0,1000,0xe8,100);
        }
        if (300 < iVar7) {
          TryUnit(&DAT_100137b8,uVar15,100,0x1e);
        }
      }
      cVar2 = UpgIsDone(&DAT_100163a0);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = GetUnits(&DAT_10016408), 0 < iVar7)
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
    TryUnit(&DAT_100160c0,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      TryUnit(&DAT_10013a18,0xc,0x46);
    }
    else {
      TryUnit(&DAT_10013a18,iVar4 + 6,0x1e,0x32);
      TryUnit(&DAT_10013a18,iVar4 + 9,0xf,0x32);
      TryUnit(&DAT_10013a18,iVar4 + 10,10,0x32);
    }
    iVar4 = GetUnitsByUsage(0,0x1f);
    if (iVar4 != 0) {
      TryUpgrade(&DAT_10016418,0x32,0x32);
      TryUpgrade(&DAT_10016400,0x32,0x32);
      TryUpgrade(&DAT_10016410,0x32,0x32);
      TryUpgrade(&DAT_100163f0,0x32,0x32);
      TryUpgrade(&DAT_100163f8,0x32,0x32);
      TryUpgrade(&DAT_100163e8,0x32,0x32);
    }
    TryUnit(&DAT_100139d0,3,0x5a,10);
    TryUnit(&DAT_100160e8,1,100,100);
    TryUnit(&DAT_100160e8,2,0x5f,5);
    if (iVar6 == 0) {
      TryUnit(&DAT_100160e8,3,0x5f,5);
    }
    TryUnit(&DAT_10016318,1,100,100);
    TryUnit(&DAT_10016380,1,100,100);
    TryUnit(&DAT_10016100,1,0x32,0x32);
    TryUnit(&DAT_10016318,2,10,5);
    TryUnit(&DAT_10016208,1,99,0x5a);
    TryUpgrade(&DAT_10013790,0x50,100);
    iVar4 = GetUnits(&DAT_10016050);
    if (0 < iVar4) {
      TryUnit(&DAT_100139a8,1,0x5a,0x19);
      TryUnit(&DAT_10016228,1,5,3);
    }
    TryUnit(&DAT_10016050,1,0x5a,0x5a);
    if (iVar6 == 0) {
      TryUnit(&DAT_10016118,1,99,10);
    }
    TryUnit(&DAT_10013748,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      TryUnit(&DAT_10016108,2,0x1e,0x1e);
    }
    TryUnit(&DAT_10016388,1,0x5a,0x14);
    TryUnit(&DAT_10016388,2,0x32,5);
    TryUpgrade(&DAT_100161a8,0x5a,99);
    TryUpgrade(&DAT_10016160,0x5a,99);
    TryUpgrade(&DAT_10016168,0x5a,99);
    TryUpgrade(&DAT_10016170,0x5a,99);
    TryUpgrade(&DAT_100163a0,0x5f,100);
    TryUpgrade(&DAT_100162e8,99,100);
    TryUnit(&DAT_10016408,1,0x50,0x14);
    TryUnit(&DAT_10016408,2,0x32,5);
    TryUnit(&DAT_10016408,3,0x1e,5);
    TryUnit(&DAT_10016408,5,0x14,5);
    TryUpgrade(&DAT_10013a88,0x5f,100);
    iVar4 = GetMaxPeasantsInMines();
    cVar2 = UpgIsRun(&DAT_100163a0);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013a88,0x5a,0x5a);
      TryUpgrade(&DAT_100139a0,99,100);
    }
    cVar2 = UpgIsRun(&DAT_10013a88);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10013a70,0x5a,0x5a);
      TryUpgrade(&DAT_100139b0,0x46,10);
      FUN_10003360();
    }
    cVar2 = UpgIsDone(&DAT_100161e0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013798,10,10,0x5a);
      TryUnit(&DAT_10013798,0xf,3,10);
    }
    SetUpgradeLock(1,0);
    iVar7 = GetMoney(0);
    if ((((14000 < iVar7) && (cVar2 = UpgIsRun(&DAT_100138d0), cVar2 != '\0')) &&
        (iVar7 = GetMoney(1), iVar7 < 0x1d4c)) &&
       (cVar2 = UpgIsRun(&DAT_10013a88), cVar2 == '\0')) {
      SetUpgradeLock(1,1);
    }
    cVar2 = UpgIsRun(&DAT_10013a88);
    if (((cVar2 == '\0') || (cVar2 = UpgIsRun(&DAT_10016220), cVar2 == '\0')) ||
       (cVar2 = UpgIsDone(&DAT_100162e8), cVar2 == '\0')) {
LAB_10003cdc:
      if (iVar4 == 0x5f) {
        TryUpgrade(&DAT_10013898,0x46,10);
        TryUnit(&DAT_100164c8,1,0x32,0x1e);
        TryUnit(&DAT_100164c8,2,0x1e,0x1e);
        TryUnit(&DAT_100164c8,3,0x14,0x1e);
        TryUnit(&DAT_100164c8,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = GetMoney(3), 50000 < iVar7 && (iVar7 = GetMoney(1), iVar7 < 0x2008)
          ))) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsRun(&DAT_10016150);
      if (((cVar2 == '\0') && (iVar7 = GetMoney(3), 60000 < iVar7)) &&
         (iVar7 = GetMoney(1), iVar7 < 11000)) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsDone(&DAT_10016150);
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
       (TryUnit(&DAT_10013a08,1,0x50,10), 0x5f < iVar5)) {
      TryUnit(&DAT_10013a08,2,0x50,10);
      TryUnit(&DAT_10013a08,3,0x32,10);
      TryUnit(&DAT_10013a08,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_100163a0), cVar2 != '\0')) {
      TryUnit(&DAT_10016290,0x4b,1,0x1e);
      UpgIsDone(&DAT_100162c8);
      UpgIsDone(&DAT_100161e0);
    }
    GetUnits(&DAT_10013748);
    TryUnit(&DAT_10016320,3,0x5a,0x5a);
    cVar2 = UpgIsDone(&DAT_10016220);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10016320,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_100163a0), cVar2 != '\0')) {
      if (iVar6 == 0) {
        TryUnit(&DAT_10016208,2,0x5a,0x14);
        TryUnit(&DAT_10016208,3,0x5a,0x14);
        TryUnit(&DAT_10016208,4,0x5a,0x14);
      }
      iVar4 = GetUnits(&DAT_10016210);
      if (0x14 < iVar4) {
        TryUpgrade(&DAT_10016338,0x5a,100);
        TryUpgrade(&DAT_10016340,0x50,0x46);
      }
      TryUpgrade(&DAT_10016220,0x3c,0x5a);
      cVar2 = UpgIsRun(&DAT_10013a38);
      if (cVar2 != '\0') {
        TryUpgrade(&DAT_10016298,0x5a,0x5a);
        TryUpgrade(&DAT_100162a8,0x5a,0x5a);
        TryUpgrade(&DAT_100162b0,0x46,0x5a);
        TryUpgrade(&DAT_100162a0,0x46,0x5a);
      }
    }
    TryUpgrade(&DAT_100138d0,99,100);
    TryUpgrade(&DAT_10013a10,0x3c,0x5a);
    iVar4 = GetUnits(&DAT_10016380);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        TryUnit(&DAT_10016210,500,10,10);
      }
      FUN_10003310();
    }
  }
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10013760,0x5f,0x5a);
    TryUpgrade(&DAT_10013838,0x5f,0x5a);
    TryUpgrade(&DAT_10013758,0x5f,0x5a);
    TryUnit(&DAT_10016380,2,0x5f,0x5a);
  }
  cVar1 = UpgIsRun(&DAT_100138d0);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016328,0x5f,0x5a);
    TryUpgrade(&DAT_10016330,0x5f,0x5a);
  }
  iVar4 = GetReadyUnits(&DAT_100139a8);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = GetUnits(&DAT_10016050);
  if ((((iVar4 != 0) && (cVar1 = UpgIsRun(&DAT_100163a0), cVar1 == '\0')) &&
      (iVar4 = GetMoney(1), 800 < iVar4)) &&
     ((iVar4 = GetMoney(3), iVar4 < 6000 && (iVar4 = GetMoney(4), 3000 < iVar4)))) {
    AI_Torg(4,3,3000);
  }
  iVar4 = GetMoney(3);
  if ((iVar4 < 1000) && (iVar4 = GetMoney(2), 5000 < iVar4)) {
    AI_Torg(2,3,4000);
  }
  cVar1 = UpgIsDone(&DAT_10016328);
  if ((cVar1 == '\0') || (cVar1 = UpgIsDone(&DAT_10016330), cVar1 == '\0')) {
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
    TryUpgrade(&DAT_10016480,0x28,100);
    TryUpgrade(&DAT_10016488,0x5a,100);
    TryUpgrade(&DAT_10016470,0x5a,100);
    TryUpgrade(&DAT_10016478,0x5a,100);
    TryUpgrade(&DAT_10016490,0x5a,100);
    TryUpgrade(&DAT_100163c8,0x5a,100);
    TryUpgrade(&DAT_100163b0,0x5a,100);
    TryUpgrade(&DAT_100163b8,0x5a,100);
    TryUpgrade(&DAT_100163d0,0x5a,100);
    TryUpgrade(&DAT_100163d8,0x5a,100);
    TryUpgrade(&DAT_10016390,0x32,100);
    TryUpgrade(&DAT_100160f8,0x32,100);
  }
  return;
}





void FUN_10004350(void)

{
  TryUpgrade(&DAT_10013a40,0x5a,100);
  TryUpgrade(&DAT_10013a48,0x5a,100);
  TryUpgrade(&DAT_10013a38,0x5a,100);
  TryUpgrade(&DAT_100160a8,10,100);
  TryUpgrade(&DAT_10016098,10,100);
  return;
}





void FUN_100043a0(void)

{
  TryUpgrade(&DAT_10016308,0x1e,0x32);
  TryUpgrade(&DAT_10016300,0x1e,0x32);
  TryUpgrade(&DAT_100162d0,0x1e,0x32);
  TryUpgrade(&DAT_100162c8,0x1e,0x32);
  TryUpgrade(&DAT_100161c8,0x1e,0x32);
  TryUpgrade(&DAT_100161d0,0x1e,0x32);
  TryUpgrade(&DAT_100161d8,0x1e,0x32);
  TryUpgrade(&DAT_100161e0,0x1e,0x32);
  return;
}





void FUN_10005260(void)

{
  TryUnit(&DAT_10016108,1,100,100);
  TryUnit(&DAT_100160e8,1,100,100);
  TryUnit(&DAT_10016100,1,100,100);
  TryUnit(&DAT_100139a8,1,100,100);
  return;
}





int  FUN_100052b0(int *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_100137b8) {
    cVar1 = UpgIsDone(&DAT_10016470);
    if (cVar1 != '\0') {
      cVar1 = UpgIsDone(&DAT_100163b8);
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
  
  iVar2 = GetUnits(&DAT_100163a8);
  if (iVar2 == 0) {
    iVar2 = GetUnits(&DAT_100139f8);
    if (iVar2 != 0) goto LAB_10005314;
  }
  else {
LAB_10005314:
    TryUpgrade(&DAT_10013a80,100,100);
    TryUpgrade(&DAT_10016328,100,100);
    TryUpgrade(&DAT_10016330,100,100);
  }
  iVar2 = GetUnits(&DAT_100164e0);
  if (iVar2 < 0x15) {
    iVar2 = GetUnits(&DAT_10016460);
    if (iVar2 < 0x15) {
      iVar2 = GetUnits(&DAT_100137b8);
      if (iVar2 < 0x8d) goto LAB_100053dd;
    }
  }
  TryUpgrade(&DAT_10013758,0x5f,100);
  TryUpgrade(&DAT_10013760,0x5f,100);
  iVar2 = GetUnits(&DAT_100164e0);
  if (iVar2 < 0x8d) {
    iVar2 = GetUnits(&DAT_10016460);
    if (0x3c < iVar2) goto LAB_100053cb;
    uVar3 = 0xf;
  }
  else {
LAB_100053cb:
    uVar3 = 0x5f;
  }
  TryUpgrade(&DAT_10013838,uVar3,100);
LAB_100053dd:
  iVar2 = GetUnits(&DAT_100137b8);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_10016480,0x50,100);
    TryUpgrade(&DAT_10016488,0x55,100);
    TryUpgrade(&DAT_10016470,0x5a,100);
    TryUpgrade(&DAT_100163c8,0x50,100);
    TryUpgrade(&DAT_100163b0,0x55,100);
    TryUpgrade(&DAT_100163b8,0x5a,100);
    iVar2 = GetUnits(&DAT_100137b8);
    if (0x78 < iVar2) {
      TryUpgrade(&DAT_10016478,0x5a,100);
      TryUpgrade(&DAT_10016490,0x5a,100);
      TryUpgrade(&DAT_100163d0,0x5a,100);
      TryUpgrade(&DAT_100163d8,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10016210);
  if (0x1e < iVar2) {
    TryUpgrade(&DAT_10013a40,0x5a,100);
    TryUpgrade(&DAT_10013a48,0x5a,100);
    TryUpgrade(&DAT_10013a38,0x5a,100);
    TryUpgrade(&DAT_100160a8,0x1e,100);
    TryUpgrade(&DAT_10016098,0x1e,100);
    TryUpgrade(&DAT_100160a0,0x1e,100);
    TryUpgrade(&DAT_10016338,0x5a,100);
    iVar2 = GetUnits(&DAT_10016210);
    if (100 < iVar2) {
      TryUpgrade(&DAT_10016340,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013830);
  if (4 < iVar2) {
    TryUpgrade(&DAT_10016390,0x5a,100);
    TryUpgrade(&DAT_100160f8,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_100164e0);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10016260,0x50,100);
    TryUpgrade(&DAT_10016258,0x55,100);
    TryUpgrade(&DAT_10016250,0x5a,100);
    TryUpgrade(&DAT_10016148,0x50,100);
    TryUpgrade(&DAT_10016140,0x55,100);
    TryUpgrade(&DAT_10016138,0x5a,100);
    iVar2 = GetUnits(&DAT_100164e0);
    if (0x32 < iVar2) {
      TryUpgrade(&DAT_10016248,0x5f,100);
      TryUpgrade(&DAT_10016238,0x5f,100);
      TryUpgrade(&DAT_10016288,0x5f,100);
      TryUpgrade(&DAT_10016130,0x5f,100);
      TryUpgrade(&DAT_10016128,0x5f,100);
      TryUpgrade(&DAT_10016120,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10016460);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013878,0x5a,100);
    TryUpgrade(&DAT_10013870,0x5a,100);
    TryUpgrade(&DAT_10013868,0x5a,100);
    TryUpgrade(&DAT_100137e8,0x5a,100);
    TryUpgrade(&DAT_100137e0,0x5a,100);
    TryUpgrade(&DAT_100137d8,0x5f,100);
    TryUpgrade(&DAT_100137d0,0x5f,100);
    TryUpgrade(&DAT_100137a8,0x5f,100);
    TryUpgrade(&DAT_100137a0,0x5f,100);
    cVar1 = UpgIsRun(&DAT_100137a0);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10013850,0x5f,100);
      TryUpgrade(&DAT_10013848,0x5f,100);
      TryUpgrade(&DAT_10013840,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_100137c0);
  if (0x14 < iVar2) {
    iVar2 = GetUnits(&DAT_100137b0);
    if (iVar2 < 0x14) {
      TryUpgrade(&DAT_10013a30,0x50,100);
      TryUpgrade(&DAT_10013a28,0x55,100);
      TryUpgrade(&DAT_10013a20,0x5a,100);
      TryUpgrade(&DAT_100139e8,0x5f,100);
      TryUpgrade(&DAT_100139e0,0x5f,100);
      TryUpgrade(&DAT_100139d8,0x5f,100);
      TryUpgrade(&DAT_10016338,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_100137b0);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10013788,0x50,100);
    TryUpgrade(&DAT_10013780,0x55,100);
    TryUpgrade(&DAT_10013778,0x5a,100);
    TryUpgrade(&DAT_10016448,0x5f,100);
    TryUpgrade(&DAT_10016440,0x5f,100);
    TryUpgrade(&DAT_10016438,0x5f,100);
    TryUpgrade(&DAT_100164c0,10,100);
    TryUpgrade(&DAT_100164b8,0xf,100);
    TryUpgrade(&DAT_10016508,0x14,100);
    TryUpgrade(&DAT_10016500,0x19,100);
    TryUpgrade(&DAT_100164f8,0x19,100);
    TryUpgrade(&DAT_100164f0,0x19,100);
    TryUpgrade(&DAT_10016338,0x5a,100);
    TryUpgrade(&DAT_10016340,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_100160b0);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_10013810,0x5a,100);
    TryUpgrade(&DAT_10013818,0x5a,100);
    TryUpgrade(&DAT_10013820,0x5a,100);
    TryUpgrade(&DAT_10013828,0x5a,100);
    TryUpgrade(&DAT_100137f0,0x5a,100);
    TryUpgrade(&DAT_10013800,0x5a,100);
    TryUpgrade(&DAT_100138b8,0x5a,100);
    TryUpgrade(&DAT_100138c0,0x5a,100);
    TryUpgrade(&DAT_100138c8,0x5a,100);
    TryUpgrade(&DAT_100138a0,0x5a,100);
    TryUpgrade(&DAT_100138a8,0x5a,100);
    TryUpgrade(&DAT_100138b0,0x5a,100);
    iVar2 = GetUnits(&DAT_100160b0);
    if (iVar2 < 0x3d) {
      TryUpgrade(&DAT_10016158,0xf,100);
      uVar3 = 0xf;
    }
    else {
      TryUpgrade(&DAT_10016158,0x5a);
      uVar3 = 0x5a;
    }
    TryUpgrade(&DAT_100161b8,uVar3,100);
    cVar1 = UpgIsRun(&DAT_10016158);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_100161b8);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_100161b0,0x5a,100);
      }
    }
    TryUpgrade(&DAT_10016338,0x5a,100);
    TryUpgrade(&DAT_10016340,0x5a,100);
  }
  cVar1 = UpgIsDone(&DAT_10016438);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_100162a0,0x5a,100);
    cVar1 = UpgIsRun(&DAT_100162a0);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_100162b0,0x5a,100);
      cVar1 = UpgIsRun(&DAT_100162b0);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_100162a8,0x5a,100);
        cVar1 = UpgIsRun(&DAT_100162a8);
        if (cVar1 != '\0') {
          TryUpgrade(&DAT_10016298,0x5a,100);
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
  
  TryUpgrade(&DAT_100164a8,0x32,100);
  iVar2 = GetUnits(&DAT_10016050);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10013790,100,100);
  }
  TryUpgrade(&DAT_100161a8,100,100);
  iVar2 = FUN_100052b0(&DAT_100137b8);
  if ((iVar2 != 0) || ((DAT_10016088 != 0 && (DAT_10016088 != 5)))) {
    TryUpgrade(&DAT_100163a0,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10016118);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10016170,100,100);
  }
  cVar1 = UpgIsRun(&DAT_10016280);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016160,100,100);
  }
  TryUpgrade(&DAT_10016280,0x5c,100);
  TryUpgrade(&DAT_10016230,0x62,100);
  iVar2 = GetUnits(&DAT_10016208);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100162e8,0x62,100);
  }
  TryUpgrade(&DAT_10016150,0x62,100);
  iVar2 = GetUnits(&DAT_10016388);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10013a10,100,100);
  }
  return;
}





void FUN_10005c10(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  TryUnit(&DAT_10016388,3,100,100);
  iVar2 = GetReadyUnits(&DAT_10016118);
  if (iVar2 != 0) {
    TryUnit(&DAT_10016108,2,100,100);
    TryUnit(&DAT_10016100,4,100,100);
  }
  TryUnit(&DAT_10016108,1,100,100);
  TryUnit(&DAT_100160e8,1,100,100);
  if (*(int *)(&DAT_100160c8 + DAT_100163e4 * 4) == 0) {
    FUN_10005260();
    iVar2 = GetReadyUnits(&DAT_100139a8);
    if (iVar2 == 0) {
      return;
    }
  }
  TryUnit(&DAT_10016318,1,100,100);
  TryUnit(&DAT_100160e8,2,100,100);
  iVar2 = GetReadyUnits(&DAT_100160e8);
  if ((iVar2 < 2) && (iVar2 = GetStartRes(), iVar2 != 0)) {
    return;
  }
  TryUnit(&DAT_10016380,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016380);
  iVar3 = GetUnits(&DAT_10016380);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    TryUnit(&DAT_10016050,1,100,100);
    iVar2 = GetPeaceTimeLeft();
    if (iVar2 < 3) {
      TryUnit(&DAT_10016118,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10016118);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_10005260();
    TryUnit(&DAT_100160e8,4,100,100);
    iVar2 = GetReadyUnits(&DAT_100160e8);
    if (2 < iVar2) {
      TryUnit(&DAT_10016208,3,100,100);
      iVar2 = GetUnits(&DAT_10016388);
      if (iVar2 != 0) {
        TryUnit(&DAT_10016208,4,100,100);
      }
      TryUnit(&DAT_10013748,1,100,100);
      TryUnit(&DAT_10013748,3,0x28,100);
      cVar1 = UpgIsDone(&DAT_10013a10);
      if (cVar1 != '\0') {
        TryUnit(&DAT_10016208,5,100,100);
      }
      TryUnit(&DAT_10016228,1,100,100);
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
  
  iVar2 = GetUnits(&DAT_100163a8,param_1);
  if (iVar2 < 0x28) {
    SetAIRegister(DAT_100163e4 + 8,0);
  }
  iVar2 = GetUnits(&DAT_100163a8);
  if (iVar2 < 0x9d) {
    iVar2 = GetReadyUnits(&DAT_10016208);
    if (iVar2 == 0) goto LAB_10005e92;
  }
  SetAIRegister(DAT_100163e4 + 8,1);
LAB_10005e92:
  iVar2 = 2;
  do {
    TryUnit(&DAT_100162c0,1000,0x14,100);
    iVar3 = GetUnits(&DAT_100137b8);
    if (iVar3 < 0x8c) {
      TryUnit(&DAT_100137b8,1000,0x14,100);
    }
    else {
      TryUnit(&DAT_100137b8,1000,0x14,0x28);
      TryUnit(&DAT_10016210,1000,0x14,100);
    }
    iVar3 = GetAIRegister(DAT_100163e4 + 8);
    if (iVar3 == 0) {
      iVar3 = GetPeaceTimeLeft();
      if (iVar3 < 1) {
        TryUnit(&DAT_100163a8,0xa0,0x14,100);
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
            TryUnit(&DAT_100139b8,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = GetUnitCost(DAT_100163e4 & 0xff,&DAT_100139b8,1);
      if (iVar3 < 0x78) goto LAB_10005f65;
    }
    cVar1 = UpgIsDone(&DAT_10016150);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    TryUnit(&DAT_100164e0,1000,0x14,uVar4);
    TryUnit(&DAT_100137b0,1000,0x14,100);
    TryUnit(&DAT_100160b0,1000,0x14,100);
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
  
  iVar2 = GetReadyUnits(&DAT_100139a8,param_1);
  if (iVar2 != 0) {
    iVar2 = GetStartRes();
    if (iVar2 == 3) {
      iVar2 = GetAIRegister(DAT_100163e4);
      if (iVar2 == 0) {
        AI_Torg(2,3,500000);
        AI_Torg(0,3,80000);
        SetAIRegister(DAT_100163e4,1);
        return;
      }
    }
    else {
      iVar2 = GetReadyUnits(&DAT_100139a8);
      if (iVar2 != 0) {
        iVar2 = GetAIRegister(DAT_100163e4);
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
          SetAIRegister(DAT_100163e4,1);
        }
        cVar1 = UpgIsRun(&DAT_100163a0);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016280);
          if (cVar1 == '\0') {
            iVar2 = GetReadyUnits(&DAT_10016050);
            if (iVar2 != 0) {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_100163e4 & 0xff,&DAT_10016280,5);
              }
              FUN_10002fd0(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = UpgIsRun(&DAT_10016280);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10016150);
          if (cVar1 == '\0') {
            if (0) {
              iVar2 = 0;
            }
            else {
              iVar2 = GetUpgradeCost(DAT_100163e4 & 0xff,&DAT_10016150,3);
            }
            uVar3 = FUN_10002fd0(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_100163e4 & 0xff,&DAT_10016150,1);
              }
              uVar3 = FUN_10002fd0(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = GetUpgradeCost(DAT_100163e4 & 0xff,&DAT_10016150,4);
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
  cVar1 = UpgIsRun(&DAT_10016230);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100163e4,&DAT_10016230,3);
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
  cVar1 = UpgIsRun(&DAT_10016150);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100163e4,&DAT_10016150,3);
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
  cVar1 = UpgIsRun(&DAT_10016280);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_100163e4,&DAT_10016280,3);
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
  cVar1 = UpgIsRun(&DAT_10016470);
  if (((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_100163b8), cVar1 == '\0')) &&
     (iVar2 = GetMoney(3), iVar2 < 9000)) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10016118);
  if ((iVar2 == 0) && (iVar2 = GetPeaceTimeLeft(), iVar2 < 2)) {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUnitCost((char)DAT_100163e4,&DAT_10016118,2);
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
  cVar1 = UpgIsRun(&DAT_100163a0);
  if (cVar1 == '\0') {
    SetPDistribution(9,1,1);
  }
  cVar1 = UpgIsRun(&DAT_100161a8);
  if ((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10013790), cVar1 == '\0')) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10016050);
  if (iVar2 == 0) {
    SetPDistribution(6,4,4);
  }
  cVar1 = UpgIsRun(&DAT_100164a8);
  if (cVar1 != '\0') {
    return;
  }
  SetPDistribution(9,1,1);
  return;
}





void FUN_10006670(void)

{
  char cVar1;
  
  SetMinesUpgradeRules(&DAT_100166c8);
  cVar1 = UpgIsRun(&DAT_10016470);
  if (cVar1 != '\0') {
    cVar1 = UpgIsRun(&DAT_100163b8);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f16c);
      return;
    }
  }
  if (((DAT_10016088 == 2) || (DAT_10016088 == 3)) || (DAT_10016088 == 4)) {
    SetMinesUpgradeRules(&DAT_1000f1d8);
  }
  else {
    cVar1 = UpgIsRun(&DAT_100163a0);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016280);
      if (cVar1 == '\0') {
        SetMinesUpgradeRules(&DAT_100166c8);
        return;
      }
    }
    cVar1 = UpgIsRun(&DAT_10016280);
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
  iVar1 = FUN_100052b0(&DAT_100137b8);
  if (iVar1 != 0) {
    SetDefenseState(0);
  }
  iVar1 = GetMaxPeaceTime();
  if ((iVar1 < 1) && (iVar1 = GetReadyUnits(&DAT_10013a08), iVar1 < 1)) {
    return;
  }
  SetDefenseState(0);
  return;
}





void FUN_10006770(void)

{
  char cVar1;
  
  cVar1 = UpgIsDone(&DAT_100162c8);
  if (cVar1 != '\0') {
    TryUnit(&DAT_100164a0,0x1e,0x1e,0x3c);
  }
  cVar1 = UpgIsDone(&DAT_100161e0);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10013798,0x14,0x1e,0x3c);
  }
  TryUnit(&DAT_100139f8,0x3c,0x50,100);
  TryUpgrade(&DAT_10016308,0x1e,100);
  TryUpgrade(&DAT_10016300,0x1e,100);
  TryUpgrade(&DAT_100162d0,0x1e,100);
  TryUpgrade(&DAT_100162c8,0x1e,100);
  TryUpgrade(&DAT_100162d8,0x1e,100);
  TryUpgrade(&DAT_100161c8,0x1e,100);
  TryUpgrade(&DAT_100161d0,0x1e,100);
  TryUpgrade(&DAT_100161d8,0x1e,100);
  TryUpgrade(&DAT_100161e0,0x1e,100);
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
  
  iVar2 = GetReadyUnits(&DAT_10013a08);
  iVar3 = GetUnits(&DAT_10016380);
  iVar4 = GetReadyUnits(&DAT_10016380);
  iVar5 = GetUnits(&DAT_10016050);
  iVar6 = GetReadyUnits(&DAT_10016050);
  iVar7 = GetUnits(&DAT_10013a08);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_100162e0)) {
    TryUnit(&DAT_10013a08,4,0x32,100);
    cVar1 = UpgIsRun(&DAT_100162e8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_10013a08,6,0x32,100);
    }
    cVar1 = UpgIsRun(&DAT_10016150);
    if (cVar1 != '\0') {
      TryUnit(&DAT_10013a08,8,0x32,100);
    }
  }
  TryUpgrade(&DAT_10016418,0x32,100);
  TryUpgrade(&DAT_10016400,0x28,100);
  TryUpgrade(&DAT_10016410,0x1e,100);
  TryUpgrade(&DAT_100163f0,0x14,100);
  TryUpgrade(&DAT_100163f8,0xf,100);
  TryUpgrade(&DAT_100163e8,10,100);
  return;
}





void FUN_10006990(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetReadyUnits(&DAT_10016388);
  iVar3 = GetUnits(&DAT_10016388);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10016388,5,100,100);
  }
  TryUnit(&DAT_100160e8,1,100,100);
  TryUnit(&DAT_10016318,1,100,100);
  TryUnit(&DAT_10016380,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10016380);
  iVar3 = GetUnits(&DAT_10016380);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10016050,1,100,100);
    iVar2 = GetReadyUnits(&DAT_10016050);
    if (iVar2 != 0) {
      TryUnit(&DAT_10016100,1,100,100);
      TryUnit(&DAT_10016108,1,100,100);
      TryUnit(&DAT_100139a8,1,100,100);
      iVar2 = GetReadyUnits(&DAT_100139a8);
      if (iVar2 != 0) {
        TryUnit(&DAT_10016118,1,100,100);
        TryUnit(&DAT_10016228,1,100,100);
        TryUnit(&DAT_10013748,1,100,100);
        TryUnit(&DAT_10016208,1,100,100);
        cVar1 = UpgIsRun(&DAT_10016150);
        if (cVar1 != '\0') {
          iVar2 = GetReadyUnits(&DAT_100160e8);
          iVar3 = GetUnits(&DAT_100160e8);
          if (iVar3 == iVar2) {
            iVar2 = GetExtraction(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            TryUnit(&DAT_100160e8,uVar4,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_10016208);
          iVar3 = GetUnits(&DAT_10016208);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_10016208,7,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_10013748);
          iVar3 = GetUnits(&DAT_10013748);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_10013748,3,100,100);
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
  iVar1 = GetUnits(&DAT_100139b8);
  if (iVar1 < 4) {
    SetAIRegister(DAT_100163e4 + 8,0);
  }
  iVar1 = GetUnits(&DAT_100139b8);
  if (0x5f < iVar1) {
    SetAIRegister(DAT_100163e4 + 8,1);
  }
  iVar1 = GetAIRegister(DAT_100163e4 + 8);
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
  if (*(int *)(&DAT_100160c8 + DAT_100163e4 * 4) != 0) {
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
    TryUnit(&DAT_100162c0,1000,0x14,100);
    TryUnit(&DAT_100137b8,1000,0x14,100);
    iVar2 = GetAIRegister(DAT_100163e4 + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        TryUnit(&DAT_100139b8,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      TryUnit(&DAT_10016290,0x3c,10,100);
    }
    cVar1 = UpgIsDone(&DAT_10016150);
    if (cVar1 == '\0') {
      TryUnit(&DAT_100137c0,1000,0x14,100);
    }
    TryUnit(&DAT_100137b0,1000,0x14,100);
    TryUnit(&DAT_100160b0,1000,0x14,100);
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
  DAT_10016088 = GetLandType();
  DAT_10016498 = GetDifficulty();
  DAT_100139c8 = GetStartRes();
  FUN_10003080();
  SetMineBalanse(0x13,&DAT_1000f114);
  FUN_10006670();
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  switch(DAT_10016088) {
  case 0:
  case 5:
    if (DAT_100139c8 == 3) {
      SetMineBalanse(3,&DAT_1000f160);
      SetMinesUpgradeRules(&DAT_1000f16c);
      SetMinesBuildingRules(&DAT_1000f41c,5);
      FUN_10006c80();
    }
    else {
      SetMineBalanse(0x13,&DAT_1000f114);
      SetMinesUpgradeRules(&DAT_100166c8);
      if (DAT_100139c8 == 0) {
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
  iVar3 = GetUnits(&DAT_100162c0);
  iVar4 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_100162e8);
  GetUnits(&DAT_100137b8);
  UpgIsDone(&DAT_10016150);
  GetUnits(&DAT_10016210);
  iVar5 = GetUnits(&DAT_100164e0);
  iVar6 = GetUnits(&DAT_10016460);
  iVar7 = GetUnits(&DAT_100137b8);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = GetDifficulty();
  if (0 < iVar6) {
    TryUnit(&DAT_10016458,0xf,0x14,0x28);
  }
  iVar6 = GetReadyUnits(&DAT_10013a08);
  iVar7 = GetUnits(&DAT_10013a08);
  if (iVar3 == 0) {
    return;
  }
  TryUnit(&DAT_10016108,1,100,100);
  iVar8 = GetUnits(&DAT_10016108);
  if (iVar8 == 0) {
    return;
  }
  TryUpgrade(&DAT_100164a8,100,100);
  cVar2 = FieldExist();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      TryUnit(&DAT_100162c0,100,100,100);
      TryUnit(&DAT_100137b8,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_10004270();
    }
    SetPDistribution(0,1,1);
  }
  else {
    if (DAT_100166c4 == 0) {
      if (12000 < iVar4) {
        SetPDistribution(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_100045d9:
      SetPDistribution(9,uVar12,uVar13);
    }
    else {
      if (DAT_100166c4 == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_100045d9;
      }
      if (DAT_100166c4 == 2) {
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
        TryUnit(&DAT_100162c0,100,100,100);
        goto LAB_10004617;
      }
    }
    else {
LAB_10004617:
      if ((300 < iVar4) && (TryUnit(&DAT_100162c0,uVar12,0xe8,100), 400 < iVar4)) {
        TryUnit(&DAT_100137b8,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_10004270();
    }
  }
  TryUnit(&DAT_100160e8,1,100,100);
  TryUnit(&DAT_100160e8,2,0x5a,5);
  TryUnit(&DAT_100160e8,3,0x5a,5);
  iVar8 = GetUnits(&DAT_10016380);
  if (1 < iVar8) {
    TryUnit(&DAT_100160e8,2,0x50,5);
    iVar8 = GetUnits(&DAT_100160e8);
    if (1 < iVar8) {
      TryUnit(&DAT_10016208,1,99,0x5a);
    }
    iVar8 = GetReadyUnits(&DAT_100160e8);
    if (1 < iVar8) {
      TryUnit(&DAT_100139a8,1,100,100);
    }
    TryUpgrade(&DAT_10016240,99,100);
  }
  iVar8 = GetUnits(&DAT_100162c0);
  if (0x23 < iVar8) {
    TryUnit(&DAT_100139a8,1,100,100);
  }
  TryUnit(&DAT_10016318,1,100,100);
  TryUnit(&DAT_10016380,1,100,100);
  TryUnit(&DAT_10016380,2,100,100);
  TryUnit(&DAT_10016100,1,0x32,0x32);
  TryUnit(&DAT_10016318,2,10,5);
  TryUpgrade(&DAT_10013790,0x50,100);
  iVar8 = GetUnits(&DAT_10016050);
  if (0 < iVar8) {
    TryUnit(&DAT_10016228,1,5,3);
  }
  cVar2 = FieldExist();
  if (cVar2 != '\0') {
    TryUnit(&DAT_10016050,1,0x5a,0x5a);
  }
  TryUnit(&DAT_10016118,1,99,10);
  TryUnit(&DAT_10013748,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    TryUnit(&DAT_10016108,2,0x1e,0x1e);
  }
  TryUnit(&DAT_10016388,1,0x5a,0x14);
  TryUnit(&DAT_10016388,2,0x50,5);
  TryUpgrade(&DAT_100161a8,0x5a,99);
  TryUpgrade(&DAT_100163a0,0x5f,100);
  TryUpgrade(&DAT_100162e8,100,100);
  TryUpgrade(&DAT_10016170,0x5a,0x5a);
  TryUpgrade(&DAT_10016160,0x5f,100);
  TryUpgrade(&DAT_10016168,0x5f,100);
  iVar8 = GetReadyUnits(&DAT_10016208);
  if (((iVar8 == 0) || (cVar2 = UpgIsRun(&DAT_100162e8), cVar2 != '\0')) ||
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
  TryUpgrade(&DAT_100138d0,100,100);
  TryUnit(&DAT_10016408,1,0x32,0x5a);
  TryUnit(&DAT_10016408,2,0x14,0x32);
  TryUnit(&DAT_10016408,3,10,0x32);
  cVar2 = UpgIsDone(&DAT_10013a88);
  if (cVar2 == '\0') {
    iVar9 = GetUnitsByUsage(0,0x1c);
    iVar10 = GetUnitsByUsage(0,0x1b);
    iVar8 = GetUnitsByUsage(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_100160c0;
      goto LAB_10004a43;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_100160c0;
      goto LAB_10004a43;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_10013a18;
LAB_10004a43:
    TryUnit(puVar11,iVar8,0x32,0x32);
  }
  TryUpgrade(&DAT_10013a88,99,100);
  cVar2 = UpgIsRun(&DAT_100163a0);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013a88,0x5a,0x5a);
    TryUpgrade(&DAT_100139a0,99,100);
  }
  cVar2 = UpgIsRun(&DAT_10013a88);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013a70,0x5a,0x5a);
    TryUpgrade(&DAT_100139b0,0x46,10);
    FUN_10003360();
  }
  SetUpgradeLock(1,0);
  iVar8 = GetMoney(0);
  if ((((14000 < iVar8) && (cVar2 = UpgIsRun(&DAT_100138d0), cVar2 != '\0')) &&
      (iVar8 = GetMoney(1), iVar8 < 0x1d4c)) &&
     (cVar2 = UpgIsRun(&DAT_10013a88), cVar2 == '\0')) {
    SetUpgradeLock(1,1);
  }
  TryUnit(&DAT_10016320,3,0x5a,0x5a);
  cVar2 = UpgIsDone(&DAT_10016220);
  if (cVar2 != '\0') {
    TryUnit(&DAT_10016320,0x14,10,0x5a);
  }
  TryUpgrade(&DAT_10016220,99,0x5a);
  TryUpgrade(&DAT_10016230,99,100);
  TryUpgrade(&DAT_10016418,0x32,0x32);
  TryUpgrade(&DAT_10016400,0x32,0x32);
  TryUpgrade(&DAT_10016410,0x32,0x32);
  TryUpgrade(&DAT_100163f0,0x32,0x32);
  TryUpgrade(&DAT_100163f8,0x32,0x32);
  TryUpgrade(&DAT_100163e8,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     (TryUnit(&DAT_10013a08,1,0x50,10), 0x3c < iVar3)) {
    TryUnit(&DAT_10013a08,2,0x50,10);
    TryUnit(&DAT_10013a08,3,0x32,10);
    TryUnit(&DAT_10013a08,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    TryUnit(&DAT_10016290,0x32,1,0x1e);
    TryUnit(&DAT_100163a8,0x14,1,0x1e);
  }
  else {
    TryUnit(&DAT_100139f8,0x32,10,100);
    TryUnit(&DAT_10016290,0x4b,1,0x1e);
    TryUnit(&DAT_100163a8,0x1e,1,0x1e);
    TryUpgrade(&DAT_10013760,0x5f,0x5a);
    TryUpgrade(&DAT_10013838,0x5f,0x5a);
    TryUpgrade(&DAT_10013758,0x5f,0x5a);
    cVar2 = UpgIsDone(&DAT_100162c8);
    if (cVar2 != '\0') {
      TryUnit(&DAT_100164a0,5,0x1e,10);
    }
    cVar2 = UpgIsDone(&DAT_100161e0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013798,10,0x1e,10);
    }
    FUN_100043a0();
  }
  cVar2 = UpgIsDone(&DAT_10016150);
  if (cVar2 != '\0') {
    cVar2 = UpgIsDone(&DAT_10016230);
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
  iVar3 = GetUnits(&DAT_10016208);
  if (iVar3 != 0) {
    TryUnit(&DAT_10016320,6,0x5a,0x5a);
  }
  cVar2 = UpgIsDone(&DAT_10016220);
  if (cVar2 != '\0') {
    TryUnit(&DAT_10016320,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    TryUnit(&DAT_10016208,2,0x5f,0x14);
    TryUnit(&DAT_10016208,3,0x5f,0x14);
    TryUnit(&DAT_10016208,4,0x5f,0x14);
    TryUnit(&DAT_10016208,5,0x28,0x14);
    TryUnit(&DAT_10016208,6,0x28,0x14);
    TryUpgrade(&DAT_10016150,99,100);
    iVar3 = GetUnits(&DAT_10016210);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_10016338,0x5a,100);
      TryUpgrade(&DAT_10016340,0x50,0x46);
    }
    TryUpgrade(&DAT_10016220,0x3c,0x5a);
    cVar1 = UpgIsRun(&DAT_10013a38);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016298,0x5a,0x5a);
      TryUpgrade(&DAT_100162a8,0x5a,0x5a);
      TryUpgrade(&DAT_100162b0,0x46,0x5a);
      TryUpgrade(&DAT_100162a0,0x46,0x5a);
    }
  }
  TryUpgrade(&DAT_100138d0,99,100);
  TryUpgrade(&DAT_10013a10,0x3c,0x5a);
  TryUpgrade(&DAT_10016280,100,100);
  if (0x15e < iVar5) {
    TryUnit(&DAT_10016210,500,10,100);
    FUN_10004350();
  }
  iVar3 = GetReadyUnits(&DAT_100139a8);
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
  iVar3 = GetReadyUnits(&DAT_10016050);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = UpgIsRun(&DAT_100163a0), cVar1 == '\0')) {
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
  iVar3 = GetUnits(&DAT_10016318);
  if ((iVar3 != 0) && (cVar1 = UpgIsRun(&DAT_100162e8), cVar1 == '\0')) {
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
  if (*(int *)(&DAT_1001673c + iVar3 * 4) == 0) {
    AI_Torg(5,3,4000);
    iVar3 = GetAINation();
    *(int *)(&DAT_1001673c + iVar3 * 4) = 1;
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
       (RegisterUpgrade(&DAT_100161b8,"KUZ04PL"), 1)) &&
      (RegisterUpgrade(&DAT_10016158,"AKA35PL"), 1)) &&
     (RegisterUpgrade(&DAT_100161b0,"AKA36PL"), 1)) {
    RegisterUpgrade(&DAT_100161c0,"AKA32PL");
  }
  if (1) {
    RegisterUnitType(&DAT_100137c0,"Dragun(PL)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10013a30,"Dragun(PL)ATTACK"), 1))
        && ((RegisterUpgrade(&DAT_10013a28,"Dragun(PL)ATTACK3"),
            1 &&
            ((RegisterUpgrade(&DAT_10013a20,"Dragun(PL)ATTACK4"),
             1 &&
             (RegisterUpgrade(&DAT_10013a68,"Dragun(PL)ATTACK5"),
             1)))))) &&
       (RegisterUpgrade(&DAT_10013a58,"Dragun(PL)ATTACK6"), 1))
      && ((((((RegisterUpgrade(&DAT_10013a50,"Dragun(PL)ATTACK7"),
              1 &&
              (RegisterUpgrade(&DAT_10013808,"Dragun(PL)SHIELD"),
              1)) &&
             (RegisterUpgrade(&DAT_100137f8,"Dragun(PL)SHIELD3"),
             1)) &&
            ((RegisterUpgrade(&DAT_100139f0,"Dragun(PL)SHIELD4"),
             1 &&
             (RegisterUpgrade(&DAT_100139e8,"Dragun(PL)SHIELD5"),
             1)))) &&
           (RegisterUpgrade(&DAT_100139e0,"Dragun(PL)SHIELD6"), 1
           )) && ((RegisterUpgrade(&DAT_100139d8,"Dragun(PL)SHIELD7"),
                  1 &&
                  (RegisterUpgrade(&DAT_10013a30,"Dragun(PL)ATTACK"),
                  1)))))) &&
     (((RegisterUpgrade(&DAT_10013a28,"Dragun(PL)ATTACK3"), 1 &&
       (((RegisterUpgrade(&DAT_10013a20,"Dragun(PL)ATTACK4"), 1
         && (RegisterUpgrade(&DAT_10013a68,"Dragun(PL)ATTACK5"),
            1)) &&
        (RegisterUpgrade(&DAT_10013a58,"Dragun(PL)ATTACK6"), 1)))
       ) && (((RegisterUpgrade(&DAT_10013a50,"Dragun(PL)ATTACK7"),
              1 &&
              (RegisterUpgrade(&DAT_10013808,"Dragun(PL)SHIELD"),
              1)) &&
             ((RegisterUpgrade(&DAT_100137f8,"Dragun(PL)SHIELD3"),
              1 &&
              (((RegisterUpgrade(&DAT_100139f0,"Dragun(PL)SHIELD4"),
                1 &&
                (RegisterUpgrade(&DAT_100139e8,"Dragun(PL)SHIELD5"),
                1)) &&
               (RegisterUpgrade(&DAT_100139e0,"Dragun(PL)SHIELD6"),
               1)))))))))) {
    RegisterUpgrade(&DAT_100139d8,"Dragun(PL)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_100137b0,"Dragun_18(PL)");
  }
  if (((((1) &&
        (RegisterUpgrade(&DAT_10013788,"Dragun_18(PL)ATTACK"), 1)
        ) && (RegisterUpgrade(&DAT_10013780,"Dragun_18(PL)ATTACK3"),
             1)) &&
      ((RegisterUpgrade(&DAT_10013778,"Dragun_18(PL)ATTACK4"), 1
       && (RegisterUpgrade(&DAT_10016448,"Dragun_18(PL)ATTACK5"),
          1)))) &&
     ((((((RegisterUpgrade(&DAT_10016440,"Dragun_18(PL)ATTACK6"),
          1 &&
          ((RegisterUpgrade(&DAT_10016438,"Dragun_18(PL)ATTACK7"),
           1 &&
           (RegisterUpgrade(&DAT_100164c0,"Dragun_18(PL)SHIELD"),
           1)))) &&
         (RegisterUpgrade(&DAT_100164b8,"Dragun_18(PL)SHIELD3"),
         1)) &&
        ((((((RegisterUpgrade(&DAT_10016508,"Dragun_18(PL)SHIELD4"),
             1 &&
             (RegisterUpgrade(&DAT_10016500,"Dragun_18(PL)SHIELD5"),
             1)) &&
            (RegisterUpgrade(&DAT_100164f8,"Dragun_18(PL)SHIELD6"),
            1)) &&
           ((RegisterUpgrade(&DAT_100164f0,"Dragun_18(PL)SHIELD7"),
            1 &&
            (RegisterUpgrade(&DAT_10013788,"Dragun_18(PL)ATTACK"),
            1)))) &&
          ((RegisterUpgrade(&DAT_10013780,"Dragun_18(PL)ATTACK3"),
           1 &&
           ((RegisterUpgrade(&DAT_10013778,"Dragun_18(PL)ATTACK4"),
            1 &&
            (RegisterUpgrade(&DAT_10016448,"Dragun_18(PL)ATTACK5"),
            1)))))) &&
         (RegisterUpgrade(&DAT_10016440,"Dragun_18(PL)ATTACK6"),
         1)))) &&
       (((RegisterUpgrade(&DAT_10016438,"Dragun_18(PL)ATTACK7"),
         1 &&
         (RegisterUpgrade(&DAT_100164c0,"Dragun_18(PL)SHIELD"), 1
         )) && (RegisterUpgrade(&DAT_100164b8,"Dragun_18(PL)SHIELD3"),
               1)))) &&
      (((RegisterUpgrade(&DAT_10016508,"Dragun_18(PL)SHIELD4"), 1
        && (RegisterUpgrade(&DAT_10016500,"Dragun_18(PL)SHIELD5"),
           1)) &&
       (RegisterUpgrade(&DAT_100164f8,"Dragun_18(PL)SHIELD6"), 1)
       ))))) {
    RegisterUpgrade(&DAT_100164f0,"Dragun_18(PL)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_10016110,"Sveshenik_evro(PL)");
  }
  DAT_100163e4 = GetAINation();
  uVar4 = GetRandomIndex();
  iVar2 = DAT_100163e4;
  *(unsigned int *)(&DAT_100160c8 + DAT_100163e4 * 4) = uVar4 & 0x80;
  *(int *)(&DAT_10013c20 + iVar2 * 0x4b8) = 0;
  *(int *)(&DAT_10013db4 + iVar2 * 0x4b8) = 0;
  if (1) {
    RegisterUpgrade(&DAT_10016200,"Barabanshik_ev1(PL)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_100139b8,"Dragun_18_DIP(PL)");
  }
  bVar3 = GetRandomIndex();
  pcVar7 = "Reitor_Polsha(PL)";
  if ((bVar3 & 2) != 2) {
    pcVar7 = "Poland_pikiner(PL)";
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
  pcVar7 = "Mushketer(PL)";
  if ((bVar3 & 0x18) != 8) {
    pcVar7 = "Grenader(PL)";
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
      (RegisterUnitType(&DAT_100139b8,"Dragun_18_DIP(PL)"), 1)) &&
     ((RegisterUnitType(&DAT_100163a8,"Strelec_Algir_DIP(PL)"), 1
      && (RegisterUnitType(&DAT_10016458,"Kozak_loshad_DIP(PL)"),
         1)))) {
    RegisterUnitType(&DAT_10013830,"Officer_evro(PL)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_10016390,"Officer_evro(PL)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_100160f8,"Officer_evro(PL)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10013770,"Barabanshik_ev1(PL)");
  }
  AssignFormUnit("Pikiner_polan(PL)");
  if ((((1) &&
       (RegisterUnitType(&DAT_100137b8,"Pikiner_polan(PL)"), 1))
      && (RegisterUnitType(&DAT_100162c0,"Kreposnoi_evro(PL)"), 1)
      ) && (RegisterUnitType(&DAT_10016290,"Grenader_DIP(PL)"), 1)
     ) {
    RegisterUnitType(&DAT_10016210,"Mushketer_polsha(PL)");
    if (((((((1) &&
            (RegisterUnitType(&DAT_100164e0,acStack_60), 1)) &&
           ((RegisterUnitType(&DAT_10016460,"Kirasir(PL)"), 1 &&
            ((RegisterUnitType(&DAT_100160b0,acStack_30), 1 &&
             (RegisterUnitType(&DAT_100164a0,"Pushka(PL)"), 1)))))
           ) && (RegisterUnitType(&DAT_10013798,"Mortira(PL)"), 1)
          ) && ((((RegisterUnitType(&DAT_100139f8,"Mortira_b(PL)"),
                  1 &&
                  (RegisterUnitType(&DAT_10016320,"Lodka(PL)"), 1)
                  ) && (RegisterUnitType(&DAT_100160e8,"Center_Poland(PL)"),
                       1)) &&
                ((RegisterUnitType(&DAT_10016108,"Melnica(PL)"), 1
                 && (RegisterUnitType(&DAT_10016380,"Kazarma_evro(PL)"),
                    1)))))) &&
        (((((RegisterUnitType(&DAT_10016388,"Kazarma(PL)"), 1 &&
            ((RegisterUnitType(&DAT_10016100,"Sclad2(PL)"), 1 &&
             (RegisterUnitType(&DAT_10016050,"akademia_E(PL)"), 1)
             ))) && ((RegisterUnitType(&DAT_10016208,"Konushnia_Swesair(PL)"),
                     1 &&
                     (((RegisterUnitType(&DAT_10016118,"Dip_korpus(PL)"),
                       1 &&
                       (RegisterUnitType(&DAT_10013748,"artileri_depo(PL)"),
                       1)) &&
                      (RegisterUnitType(&DAT_100139a8,"Rinok(PL)"),
                      1)))))) &&
          ((RegisterUnitType(&DAT_10013a08,"Bashnia(PL)"), 1 &&
           (RegisterUnitType(&DAT_10016318,"Kuznica(PL)"), 1))))
         && ((RegisterUnitType(&DAT_10016228,"Cercov_Poland(PL)"),
             1 &&
             ((RegisterUnitType(&DAT_10016408,"PorE(PL)"), 1 &&
              (RegisterUnitType(&DAT_10013a18,"Fregat(PL)"), 1))))
            )))) &&
       ((RegisterUnitType(&DAT_100160c0,"GALERA(PL)"), 1 &&
        ((RegisterUnitType(&DAT_100164c8,"Linkor(PL)"), 1 &&
         (RegisterUnitType(&DAT_100160b8,"Yahta(PL)"), 1)))))) {
      RegisterUnitType(&DAT_100139d0,"PERES_KOR(PL)");
    }
  }
  if (((((1) &&
        (RegisterUpgrade(&DAT_100164a8,"Melnica(PL)GETRES"), 1))
       && (RegisterUpgrade(&DAT_10016230,"Melnica(PL)GETRES2"), 1
          )) && ((((RegisterUpgrade(&DAT_10013790,"KUZ01PL"), 1
                   && (RegisterUpgrade(&DAT_10016480,"Pikiner_polan(PL)ATTACK"),
                      1)) &&
                  ((RegisterUpgrade(&DAT_10016488,"Pikiner_polan(PL)ATTACK3"),
                   1 &&
                   ((RegisterUpgrade(&DAT_10016470,"Pikiner_polan(PL)ATTACK4"),
                    1 &&
                    (RegisterUpgrade(&DAT_10016478,"Pikiner_polan(PL)ATTACK5"),
                    1)))))) &&
                 ((RegisterUpgrade(&DAT_10016490,"Pikiner_polan(PL)ATTACK6"),
                  1 &&
                  ((((((RegisterUpgrade(&DAT_100163c8,"Pikiner_polan(PL)SHIELD"),
                       1 &&
                       (RegisterUpgrade(&DAT_100163b0,"Pikiner_polan(PL)SHIELD3"),
                       1)) &&
                      (RegisterUpgrade(&DAT_100163b8,"Pikiner_polan(PL)SHIELD4"),
                      1)) &&
                     ((RegisterUpgrade(&DAT_100163d0,"Pikiner_polan(PL)SHIELD5"),
                      1 &&
                      (RegisterUpgrade(&DAT_100163d8,"Pikiner_polan(PL)SHIELD6"),
                      1)))) &&
                    (RegisterUpgrade(&DAT_10013a40,"Mushketer_polsha(PL)ATTACK"),
                    1)) &&
                   ((RegisterUpgrade(&DAT_10013a48,"Mushketer_polsha(PL)ATTACK3"),
                    1 &&
                    (RegisterUpgrade(&DAT_10013a38,"Mushketer_polsha(PL)ATTACK4"),
                    1)))))))))) &&
     ((RegisterUpgrade(&DAT_100160a8,"Mushketer_polsha(PL)SHIELD"),
      1 &&
      (RegisterUpgrade(&DAT_10016098,"Mushketer_polsha(PL)SHIELD3"),
      1)))) {
    RegisterUpgrade(&DAT_100160a0,"Mushketer_polsha(PL)SHIELD4");
  }
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016148,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016140,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016138,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016130,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016128,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016120,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016260,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016258,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016250,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016248,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016238,puVar5);
  puVar5 = FUN_10002f70();
  SafeRegisterUpgrade(&DAT_10016288,puVar5);
  if (((((((((1) &&
            (RegisterUpgrade(&DAT_100137e8,"Kirasir(PL)ATTACK"),
            1)) &&
           (RegisterUpgrade(&DAT_100137e0,"Kirasir(PL)ATTACK3"),
           1)) &&
          (((RegisterUpgrade(&DAT_100137d8,"Kirasir(PL)ATTACK4"),
            1 &&
            (RegisterUpgrade(&DAT_100137d0,"Kirasir(PL)ATTACK5"),
            1)) &&
           ((RegisterUpgrade(&DAT_100137a8,"Kirasir(PL)ATTACK6"),
            1 &&
            ((RegisterUpgrade(&DAT_100137a0,"Kirasir(PL)ATTACK7"),
             1 &&
             (RegisterUpgrade(&DAT_10013878,"Kirasir(PL)SHIELD"),
             1)))))))) &&
         (RegisterUpgrade(&DAT_10013870,"Kirasir(PL)SHIELD3"), 1)
         ) && (((RegisterUpgrade(&DAT_10013868,"Kirasir(PL)SHIELD4"),
                1 &&
                (RegisterUpgrade(&DAT_10013850,"Kirasir(PL)SHIELD5"),
                1)) &&
               (RegisterUpgrade(&DAT_10013848,"Kirasir(PL)SHIELD6"),
               1)))) &&
       ((((((RegisterUpgrade(&DAT_10013840,"Kirasir(PL)SHIELD7"),
            1 &&
            (RegisterUpgrade(&DAT_10013810,"Grenader(PL)ATTACK"),
            1)) &&
           (((RegisterUpgrade(&DAT_10013818,"Grenader(PL)ATTACK3"),
             1 &&
             ((RegisterUpgrade(&DAT_10013820,"Grenader(PL)ATTACK4"),
              1 &&
              (RegisterUpgrade(&DAT_10013828,"Grenader(PL)ATTACK5"),
              1)))) &&
            (RegisterUpgrade(&DAT_100137f0,"Grenader(PL)ATTACK6"),
            1)))) &&
          (((((RegisterUpgrade(&DAT_10013800,"Grenader(PL)ATTACK7"),
              1 &&
              (RegisterUpgrade(&DAT_100138b8,"Grenader(PL)SHIELD"),
              1)) &&
             (RegisterUpgrade(&DAT_100138c0,"Grenader(PL)SHIELD3"),
             1)) &&
            ((RegisterUpgrade(&DAT_100138c8,"Grenader(PL)SHIELD4"),
             1 &&
             (RegisterUpgrade(&DAT_100138a0,"Grenader(PL)SHIELD5"),
             1)))) &&
           ((RegisterUpgrade(&DAT_100138a8,"Grenader(PL)SHIELD6"),
            1 &&
            ((RegisterUpgrade(&DAT_100138b0,"Grenader(PL)SHIELD7"),
             1 &&
             (RegisterUpgrade(&DAT_10016308,"Pushka(PL)BUILD"), 1
             )))))))) &&
         ((RegisterUpgrade(&DAT_10016300,"Pushka(PL)BUILD3"), 1
          && ((((RegisterUpgrade(&DAT_100162d0,"Pushka(PL)BUILD4"),
                1 &&
                (RegisterUpgrade(&DAT_100162c8,"Pushka(PL)BUILD5"),
                1)) &&
               (RegisterUpgrade(&DAT_100162d8,"Pushka(PL)BUILD6"),
               1)) &&
              (((RegisterUpgrade(&DAT_100161c8,"Mortira(PL)BUILD"),
                1 &&
                (RegisterUpgrade(&DAT_100161d0,"Mortira(PL)BUILD3"),
                1)) &&
               ((RegisterUpgrade(&DAT_100161d8,"Mortira(PL)BUILD4"),
                1 &&
                ((RegisterUpgrade(&DAT_100161e0,"Mortira(PL)BUILD5"),
                 1 &&
                 (RegisterUpgrade(&DAT_100162e8,"KUZ03PL"), 1))))
               )))))))) &&
        (RegisterUpgrade(&DAT_10016150,"MAINPL"), 1)))) &&
      (((((RegisterUpgrade(&DAT_10013a88,"AKA06PL"), 1 &&
          (RegisterUpgrade(&DAT_100161a8,"AKA01PL"), 1)) &&
         (RegisterUpgrade(&DAT_10016160,"AKA02PL"), 1)) &&
        ((RegisterUpgrade(&DAT_10016168,"AKA03PL"), 1 &&
         (RegisterUpgrade(&DAT_10016170,"AKA04PL"), 1)))) &&
       (((RegisterUpgrade(&DAT_100163a0,"AKA08PL"), 1 &&
         ((RegisterUpgrade(&DAT_10016240,"AKA23PL"), 1 &&
          (RegisterUpgrade(&DAT_10016280,"AKA24PL"), 1)))) &&
        ((RegisterUpgrade(&DAT_10016338,"AKA31PL"), 1 &&
         ((((RegisterUpgrade(&DAT_10016340,"AKA33PL"), 1 &&
            (RegisterUpgrade(&DAT_10016298,"AKA12PL"), 1)) &&
           (RegisterUpgrade(&DAT_100162a8,"AKA13PL"), 1)) &&
          ((RegisterUpgrade(&DAT_100162b0,"AKA14PL"), 1 &&
           (RegisterUpgrade(&DAT_100162a0,"AKA15PL"), 1))))))))))
      )) && (((RegisterUpgrade(&DAT_10013a80,"AKA11PL"), 1 &&
              ((RegisterUpgrade(&DAT_10013a10,"AKA10PL"), 1 &&
               (RegisterUpgrade(&DAT_100138d0,"AKA30PL"), 1))))
             && ((RegisterUpgrade(&DAT_10016220,"AKA07PL"), 1 &&
                 ((((((RegisterUpgrade(&DAT_10013a70,"AKA20PL"),
                      1 &&
                      (RegisterUpgrade(&DAT_10016328,"KUZ02PL"),
                      1)) &&
                     (RegisterUpgrade(&DAT_10016330,"AKA09PL"), 1
                     )) && (((RegisterUpgrade(&DAT_100139a0,"AKA05PL"),
                             1 &&
                             (RegisterUpgrade(&DAT_100139b0,"AKA28PL"),
                             1)) &&
                            ((RegisterUpgrade(&DAT_10013898,"AKA29PL"),
                             1 &&
                             ((RegisterUpgrade(&DAT_10013758,"KUZ05PL"),
                              1 &&
                              (RegisterUpgrade(&DAT_10013838,"KUZ06PL"),
                              1)))))))) &&
                   ((RegisterUpgrade(&DAT_10013760,"AKA34PL"), 1
                    && (((RegisterUpgrade(&DAT_10016418,"Bashnia(PL)PAUSE"),
                         1 &&
                         (RegisterUpgrade(&DAT_10016400,"Bashnia(PL)PAUSE3"),
                         1)) &&
                        (RegisterUpgrade(&DAT_10016410,"Bashnia(PL)PAUSE4"),
                        1)))))) &&
                  ((RegisterUpgrade(&DAT_100163f0,"Bashnia(PL)PAUSE5"),
                   1 &&
                   (RegisterUpgrade(&DAT_100163f8,"Bashnia(PL)PAUSE6"),
                   1)))))))))) {
    RegisterUpgrade(&DAT_100163e8,"Bashnia(PL)PAUSE7");
  }
  SetPDistribution(9,4,4);
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(PL)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(PL)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(PL)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(PL)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(PL)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(PL)INSIDE7",0x32);
  AssignPeasant("Kreposnoi_evro(PL)");
  AssignMine("shahta(PL)");
  AssignHouse("Dom_Poland(PL)");
  AssignWall("WALL_EV(PL)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x5a);
  SET_MINE_UPGRADE2_RADIUS(0x5a);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}





__declspec(dllexport) void ProcessAI(void)

{
  DAT_100163e4 = GetAINation();
  FUN_10006d80();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
