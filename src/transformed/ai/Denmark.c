/* Auto-generated from Denmark.c */
#include "game_api.h"

/* AI state variables */
long long DAT_10008010 = 0;
long long DAT_1000805c = 0;
long long DAT_100080f4 = 0;
long long DAT_10008140 = 0;
long long DAT_1000814c = 0;
long long DAT_100081b8 = 0;
long long DAT_10008224 = 0;
int DAT_10008228 = 1;
long long DAT_100083fc = 0;
long long DAT_1000961c = 0;
long long DAT_10009630 = 0;
int DAT_10009638 = 0;
long long DAT_10009640 = 0;
long long DAT_10009648 = 0;
long long DAT_10009658 = 0;
long long DAT_10009660 = 0;
long long DAT_10009668 = 0;
long long DAT_10009670 = 0;
long long DAT_10009678 = 0;
long long DAT_10009680 = 0;
long long DAT_10009688 = 0;
long long DAT_10009690 = 0;
long long DAT_10009698 = 0;
long long DAT_100096a0 = 0;
long long DAT_100096a8 = 0;
long long DAT_100096b8 = 0;
long long DAT_100096c0 = 0;
long long DAT_100096c8 = 0;
long long DAT_100096d0 = 0;
long long DAT_100096d8 = 0;
long long DAT_100096e0 = 0;
long long DAT_100096e8 = 0;
long long DAT_100096f0 = 0;
long long DAT_100096f8 = 0;
long long DAT_10009700 = 0;
long long DAT_10009708 = 0;
long long DAT_10009710 = 0;
long long DAT_10009718 = 0;
long long DAT_10009720 = 0;
long long DAT_10009728 = 0;
long long DAT_10009730 = 0;
long long DAT_10009738 = 0;
int DAT_10009740 = 0;
long long DAT_10009750 = 0;
long long DAT_10009758 = 0;
long long DAT_10009760 = 0;
long long DAT_10009780 = 0;
long long DAT_10009788 = 0;
long long DAT_10009790 = 0;
long long DAT_10009798 = 0;
long long DAT_100097a0 = 0;
long long DAT_100097a8 = 0;
long long DAT_100097b0 = 0;
long long DAT_100097b8 = 0;
long long DAT_100097c0 = 0;
long long DAT_10009888 = 0;
long long DAT_10009890 = 0;
long long DAT_10009898 = 0;
long long DAT_100098a0 = 0;
int DAT_100098b0 = 0;
long long DAT_100098b8 = 0;
long long DAT_100098c0 = 0;
long long DAT_100098c8 = 0;
long long DAT_100098d0 = 0;
long long DAT_100098d8 = 0;
long long DAT_100098e0 = 0;
long long DAT_100098f0 = 0;
long long DAT_100098f8 = 0;
long long DAT_10009900 = 0;
long long DAT_10009908 = 0;
long long DAT_10009910 = 0;
long long DAT_10009918 = 0;
long long DAT_10009920 = 0;
long long DAT_10009928 = 0;
long long DAT_10009930 = 0;
long long DAT_10009938 = 0;
long long DAT_10009940 = 0;
long long DAT_10009950 = 0;
long long DAT_10009958 = 0;
long long DAT_10009968 = 0;
long long DAT_10009970 = 0;
char DAT_10009978 = 0;
char DAT_10009b08 = 0;
char DAT_10009b0c = 0;
char DAT_10009c9c = 0;
char DAT_10009ca0 = 0;
long long DAT_1000bf38 = 0;
int DAT_1000bf70 = 0;
long long DAT_1000bf80 = 0;
long long DAT_1000bf88 = 0;
long long DAT_1000bf90 = 0;
long long DAT_1000bf98 = 0;
long long DAT_1000bfa0 = 0;
long long DAT_1000bfa8 = 0;
char DAT_1000bfb0 = 0;
long long DAT_1000bfd0 = 0;
long long DAT_1000bfe0 = 0;
long long DAT_1000bfe8 = 0;
long long DAT_1000bff0 = 0;
long long DAT_1000bff8 = 0;
long long DAT_1000c000 = 0;
long long DAT_1000c008 = 0;
long long DAT_1000c010 = 0;
long long DAT_1000c018 = 0;
long long DAT_1000c020 = 0;
long long DAT_1000c028 = 0;
long long DAT_1000c030 = 0;
long long DAT_1000c038 = 0;
long long DAT_1000c040 = 0;
long long DAT_1000c048 = 0;
long long DAT_1000c050 = 0;
long long DAT_1000c058 = 0;
long long DAT_1000c090 = 0;
long long DAT_1000c098 = 0;
long long DAT_1000c0a0 = 0;
long long DAT_1000c0a8 = 0;
long long DAT_1000c0b0 = 0;
long long DAT_1000c0b8 = 0;
long long DAT_1000c0c0 = 0;
long long DAT_1000c0c8 = 0;
long long DAT_1000c0e8 = 0;
long long DAT_1000c0f0 = 0;
long long DAT_1000c0f8 = 0;
int DAT_1000c100 = 0;
long long DAT_1000c108 = 0;
long long DAT_1000c110 = 0;
long long DAT_1000c118 = 0;
long long DAT_1000c120 = 0;
long long DAT_1000c128 = 0;
long long DAT_1000c130 = 0;
long long DAT_1000c138 = 0;
long long DAT_1000c140 = 0;
long long DAT_1000c148 = 0;
long long DAT_1000c168 = 0;
long long DAT_1000c170 = 0;
long long DAT_1000c178 = 0;
long long DAT_1000c180 = 0;
long long DAT_1000c188 = 0;
long long DAT_1000c190 = 0;
long long DAT_1000c198 = 0;
int DAT_1000c1a0 = 0;
int DAT_1000c1a1 = 0;
int DAT_1000c1a2 = 0;
int DAT_1000c1a3 = 0;
int DAT_1000c1a4 = 0;
int DAT_1000c1a5 = 0;
long long DAT_1000c1a8 = 0;
long long DAT_1000c1b0 = 0;
long long DAT_1000c1b8 = 0;
long long DAT_1000c1c0 = 0;
int DAT_1000c1c8 = 0;
long long DAT_1000c1d0 = 0;
int DAT_1000c1d8 = 0;
int DAT_1000c1dc = 0;
long long DAT_1000c1e8 = 0;
long long DAT_1000c1f0 = 0;
long long DAT_1000c200 = 0;
long long DAT_1000c208 = 0;
long long DAT_1000c210 = 0;
long long DAT_1000c218 = 0;
long long DAT_1000c220 = 0;
long long DAT_1000c228 = 0;
int DAT_1000c264 = 0;
long long DAT_1000c268 = 0;
long long DAT_1000c270 = 0;
long long DAT_1000c278 = 0;
long long DAT_1000c288 = 0;
long long DAT_1000c290 = 0;
long long DAT_1000c298 = 0;
long long DAT_1000c2a0 = 0;
int DAT_1000c2a8 = 0;
long long DAT_1000c2b0 = 0;
long long DAT_1000c2b8 = 0;
long long DAT_1000c2c0 = 0;
int DAT_1000c2cc = 0;
long long DAT_1000c2d0 = 0;
long long DAT_1000c2d8 = 0;
long long DAT_1000c2e0 = 0;
long long DAT_1000c2e8 = 0;
long long DAT_1000c2f0 = 0;
long long DAT_1000c2f8 = 0;
long long DAT_1000c300 = 0;
long long DAT_1000c320 = 0;
long long DAT_1000c328 = 0;
long long DAT_1000c330 = 0;
int DAT_1000c338 = 0;
int DAT_1000c339 = 0;
int DAT_1000c33a = 0;
int DAT_1000c33b = 0;
int DAT_1000c33c = 0;
int DAT_1000c33d = 0;
long long DAT_1000c340 = 0;
long long DAT_1000c348 = 0;
int DAT_1000c350 = 0;
long long DAT_1000c358 = 0;
long long DAT_1000c360 = 0;
long long DAT_1000c368 = 0;
long long DAT_1000c370 = 0;
long long DAT_1000c378 = 0;
int DAT_1000c380 = 0;
long long DAT_1000c388 = 0;
long long DAT_1000c390 = 0;
int DAT_1000c398 = 0;
long long DAT_1000c3a0 = 0;
long long DAT_1000c3a8 = 0;
long long DAT_1000c3b0 = 0;
long long DAT_1000c3c8 = 0;
long long DAT_1000c3d8 = 0;
long long DAT_1000c3e0 = 0;
long long DAT_1000c3e8 = 0;
long long DAT_1000c3f0 = 0;
int DAT_1000c5ac = 0;
long long DAT_1000c5b0 = 0;
int DAT_1000c61c = 0;
int DAT_1000c620 = 0;
char DAT_1000c624 = 0;
int DAT_1000c664 = 0;

/* Forward declarations */
void ProcessLandAI(void);
void ProcessMiddleSeaAI(void);
static int * FUN_10002f30(int param_1,int param_2);
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


int *  FUN_10002f30(int param_1,int param_2)

{
  sprintf(&DAT_100097c0,&DAT_1000961c,param_1,param_2);
  return &DAT_100097c0;
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
  
  DAT_1000c2cc = GetAINation();
  iVar1 = GetUnits(&DAT_1000c1a8);
  iVar2 = GetExtraction(1);
  iVar3 = GetExtraction(4);
  iVar4 = GetExtraction(5);
  DAT_1000c1c8 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_1000c2cc * 0x4b8;
  DAT_1000c61c = *(int *)(&DAT_10009b08 + iVar1);
  DAT_1000c1d8 = &DAT_10009978 + iVar1;
  DAT_1000c1dc = &DAT_10009b0c + iVar1;
  DAT_1000c620 = *(int *)(&DAT_10009c9c + iVar1);
  DAT_1000c264 = &DAT_10009ca0 + iVar1;
  DAT_1000c2a8 = GetMoney(3);
  DAT_10009638 = GetMoney(0);
  DAT_1000c398 = GetMoney(2);
  DAT_10009740 = GetMoney(4);
  DAT_1000c100 = GetMoney(5);
  DAT_1000c350 = GetMoney(1);
  iVar1 = GetStartRes();
  if (iVar1 == 0) {
    DAT_10008228 = 4;
  }
  SetMineBalanse(0x13,&DAT_100080f4);
  SetMinesUpgradeRules(&DAT_1000c5b0);
  SetMinesBuildingRules(&DAT_10008224,0x1b);
  DAT_1000c1a0 = 1;
  DAT_1000c1a2 = 1;
  DAT_1000c1a4 = 1;
  DAT_1000c1a5 = 1;
  DAT_1000c33b = 1;
  DAT_1000c339 = 1;
  DAT_1000c33c = 1;
  DAT_1000c33d = 1;
  DAT_1000c1a3 = 0;
  DAT_1000c1a1 = 0;
  DAT_1000c338 = 0;
  DAT_1000c33a = 0;
  DAT_1000c664 = 0;
  return;
}





void FUN_100031c0(void)

{
  int iVar1;
  
  if (DAT_1000bf70 < 2) {
    iVar1 = GetUnits(&DAT_100096a0);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_10009718,iVar1,0x32,0x32);
      TryUnit(&DAT_10009658,iVar1,0x14,0x32);
    }
  }
  return;
}





void FUN_10003230(void)

{
  TryUpgrade(&DAT_1000c368,0x3c,100);
  TryUpgrade(&DAT_1000c370,0x3c,100);
  TryUpgrade(&DAT_1000c358,0x3c,100);
  TryUpgrade(&DAT_1000c360,0x14,100);
  TryUpgrade(&DAT_1000c378,10,100);
  TryUpgrade(&DAT_1000c2b0,0x3c,100);
  TryUpgrade(&DAT_1000c298,0x3c,100);
  TryUpgrade(&DAT_1000c2a0,0x3c,100);
  TryUpgrade(&DAT_1000c2b8,0x14,100);
  TryUpgrade(&DAT_1000c2c0,10,100);
  return;
}





void FUN_100032d0(void)

{
  TryUpgrade(&DAT_10009928,0x5a,100);
  TryUpgrade(&DAT_10009930,0x5a,100);
  TryUpgrade(&DAT_10009920,0x5a,100);
  TryUpgrade(&DAT_1000bf90,0x5a,100);
  TryUpgrade(&DAT_1000bf80,0x5a,100);
  return;
}





void FUN_10003320(void)

{
  TryUpgrade(&DAT_1000c0b0,0x1e,0x32);
  TryUpgrade(&DAT_1000c0b8,0x1e,0x32);
  TryUpgrade(&DAT_1000c0c0,0x1e,0x32);
  TryUpgrade(&DAT_1000c0c8,0x1e,0x32);
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
  cVar1 = UpgIsDone(&DAT_1000c038);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = GetReadyUnits(&DAT_1000c2f0);
  iVar6 = GetUnits(&DAT_1000bfd0);
  iVar7 = GetReadyUnits(&DAT_1000bfd0);
  iVar8 = GetUnits(&DAT_1000c000);
  iVar9 = GetReadyUnits(&DAT_1000c000);
  iVar10 = GetUnits(&DAT_1000c0f0);
  iVar11 = GetReadyUnits(&DAT_1000c0f0);
  iVar12 = GetUnits(&DAT_1000c2f0);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  TryUpgrade(&DAT_1000c038,0x5f,100);
  bVar13 = true;
  iVar5 = GetMoney(3);
  if ((((55000 < iVar5) && (iVar5 = GetMoney(1), 10000 < iVar5)) &&
      (iVar5 = GetMoney(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = GetUnits(&DAT_1000c1a8);
  iVar7 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_1000c1d0);
  GetUnits(&DAT_100096a0);
  iVar8 = GetUnits(&DAT_1000c0f8);
  iVar11 = GetUnits(&DAT_1000c3c8);
  iVar9 = GetUnits(&DAT_1000c348);
  iVar10 = GetUnits(&DAT_100096a0);
  iVar11 = iVar10 + iVar9 + iVar11;
  TryUpgrade(&DAT_1000c128,99,0x50);
  TryUpgrade(&DAT_1000c168,0x62,0x50);
  iVar9 = GetReadyUnits(&DAT_100098f0);
  iVar10 = GetUnits(&DAT_100098f0);
  if (iVar5 != 0) {
    TryUnit(&DAT_1000bff0,1,100,100);
    iVar12 = GetUnits(&DAT_1000bff0);
    if (iVar12 == 0) {
      return;
    }
    TryUpgrade(&DAT_1000c390,100,100);
    cVar2 = FieldExist();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        TryUnit(&DAT_1000c1a8,100,100,100);
        TryUnit(&DAT_100096a0,100,100,100);
      }
      SetPDistribution(0,1,1);
    }
    else {
      cVar2 = UpgIsDone(&DAT_100097b8);
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
        TryUnit(&DAT_1000c1a8,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          TryUnit(&DAT_1000c1a8,1000,0xe8,100);
        }
        if (300 < iVar7) {
          TryUnit(&DAT_100096a0,uVar15,100,0x1e);
        }
      }
      cVar2 = UpgIsDone(&DAT_1000c288);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = GetUnits(&DAT_1000c2f0), 0 < iVar7)
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
    TryUnit(&DAT_1000bfa8,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      TryUnit(&DAT_10009900,0xc,0x46);
    }
    else {
      TryUnit(&DAT_10009900,iVar4 + 6,0x1e,0x32);
      TryUnit(&DAT_10009900,iVar4 + 9,0xf,0x32);
      TryUnit(&DAT_10009900,iVar4 + 10,10,0x32);
    }
    iVar4 = GetUnitsByUsage(0,0x1f);
    if (iVar4 != 0) {
      TryUpgrade(&DAT_1000c300,0x32,0x32);
      TryUpgrade(&DAT_1000c2e8,0x32,0x32);
      TryUpgrade(&DAT_1000c2f8,0x32,0x32);
      TryUpgrade(&DAT_1000c2d8,0x32,0x32);
      TryUpgrade(&DAT_1000c2e0,0x32,0x32);
      TryUpgrade(&DAT_1000c2d0,0x32,0x32);
    }
    TryUnit(&DAT_100098b8,3,0x5a,10);
    TryUnit(&DAT_1000bfd0,1,100,100);
    TryUnit(&DAT_1000bfd0,2,0x5f,5);
    if (iVar6 == 0) {
      TryUnit(&DAT_1000bfd0,3,0x5f,5);
    }
    TryUnit(&DAT_1000c200,1,100,100);
    TryUnit(&DAT_1000c268,1,100,100);
    TryUnit(&DAT_1000bfe8,1,0x32,0x32);
    TryUnit(&DAT_1000c200,2,10,5);
    TryUnit(&DAT_1000c0f0,1,99,0x5a);
    TryUpgrade(&DAT_10009678,0x50,100);
    iVar4 = GetUnits(&DAT_1000bf38);
    if (0 < iVar4) {
      TryUnit(&DAT_10009890,1,0x5a,0x19);
      TryUnit(&DAT_1000c110,1,5,3);
    }
    TryUnit(&DAT_1000bf38,1,0x5a,0x5a);
    if (iVar6 == 0) {
      TryUnit(&DAT_1000c000,1,99,10);
    }
    TryUnit(&DAT_10009630,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      TryUnit(&DAT_1000bff0,2,0x1e,0x1e);
    }
    TryUnit(&DAT_1000c270,1,0x5a,0x14);
    TryUnit(&DAT_1000c270,2,0x32,5);
    TryUpgrade(&DAT_1000c090,0x5a,99);
    TryUpgrade(&DAT_1000c048,0x5a,99);
    TryUpgrade(&DAT_1000c050,0x5a,99);
    TryUpgrade(&DAT_1000c058,0x5a,99);
    TryUpgrade(&DAT_1000c288,0x5f,100);
    TryUpgrade(&DAT_1000c1d0,99,100);
    TryUnit(&DAT_1000c2f0,1,0x50,0x14);
    TryUnit(&DAT_1000c2f0,2,0x32,5);
    TryUnit(&DAT_1000c2f0,3,0x1e,5);
    TryUnit(&DAT_1000c2f0,5,0x14,5);
    TryUpgrade(&DAT_10009970,0x5f,100);
    iVar4 = GetMaxPeasantsInMines();
    cVar2 = UpgIsRun(&DAT_1000c288);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10009970,0x5a,0x5a);
      TryUpgrade(&DAT_10009888,99,100);
    }
    cVar2 = UpgIsRun(&DAT_10009970);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_10009958,0x5a,0x5a);
      TryUpgrade(&DAT_10009898,0x46,10);
      FUN_10003320();
    }
    cVar2 = UpgIsDone(&DAT_1000c0c8);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10009680,10,10,0x5a);
      TryUnit(&DAT_10009680,0xf,3,10);
    }
    SetUpgradeLock(1,0);
    iVar7 = GetMoney(0);
    if ((((14000 < iVar7) && (cVar2 = UpgIsRun(&DAT_100097b8), cVar2 != '\0')) &&
        (iVar7 = GetMoney(1), iVar7 < 0x1d4c)) &&
       (cVar2 = UpgIsRun(&DAT_10009970), cVar2 == '\0')) {
      SetUpgradeLock(1,1);
    }
    cVar2 = UpgIsRun(&DAT_10009970);
    if (((cVar2 == '\0') || (cVar2 = UpgIsRun(&DAT_1000c108), cVar2 == '\0')) ||
       (cVar2 = UpgIsDone(&DAT_1000c1d0), cVar2 == '\0')) {
LAB_10003c9c:
      if (iVar4 == 0x5f) {
        TryUpgrade(&DAT_10009780,0x46,10);
        TryUnit(&DAT_1000c3b0,1,0x32,0x1e);
        TryUnit(&DAT_1000c3b0,2,0x1e,0x1e);
        TryUnit(&DAT_1000c3b0,3,0x14,0x1e);
        TryUnit(&DAT_1000c3b0,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = GetMoney(3), 50000 < iVar7 && (iVar7 = GetMoney(1), iVar7 < 0x2008)
          ))) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsRun(&DAT_1000c038);
      if (((cVar2 == '\0') && (iVar7 = GetMoney(3), 60000 < iVar7)) &&
         (iVar7 = GetMoney(1), iVar7 < 11000)) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsDone(&DAT_1000c038);
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
       (TryUnit(&DAT_100098f0,1,0x50,10), 0x5f < iVar5)) {
      TryUnit(&DAT_100098f0,2,0x50,10);
      TryUnit(&DAT_100098f0,3,0x32,10);
      TryUnit(&DAT_100098f0,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_1000c288), cVar2 != '\0')) {
      TryUnit(&DAT_1000c178,0x4b,1,0x1e);
      UpgIsDone(&DAT_1000c1b0);
      UpgIsDone(&DAT_1000c0c8);
    }
    GetUnits(&DAT_10009630);
    TryUnit(&DAT_1000c208,3,0x5a,0x5a);
    cVar2 = UpgIsDone(&DAT_1000c108);
    if (cVar2 != '\0') {
      TryUnit(&DAT_1000c208,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_1000c288), cVar2 != '\0')) {
      if (iVar6 == 0) {
        TryUnit(&DAT_1000c0f0,2,0x5a,0x14);
        TryUnit(&DAT_1000c0f0,3,0x5a,0x14);
        TryUnit(&DAT_1000c0f0,4,0x5a,0x14);
      }
      iVar4 = GetUnits(&DAT_1000c0f8);
      if (0x14 < iVar4) {
        TryUpgrade(&DAT_1000c220,0x5a,100);
        TryUpgrade(&DAT_1000c228,0x50,0x46);
      }
      TryUpgrade(&DAT_1000c108,0x3c,0x5a);
      cVar2 = UpgIsRun(&DAT_10009920);
      if (cVar2 != '\0') {
        TryUpgrade(&DAT_1000c180,0x5a,0x5a);
        TryUpgrade(&DAT_1000c190,0x5a,0x5a);
        TryUpgrade(&DAT_1000c198,0x46,0x5a);
        TryUpgrade(&DAT_1000c188,0x46,0x5a);
      }
    }
    TryUpgrade(&DAT_100097b8,99,100);
    TryUpgrade(&DAT_100098f8,0x3c,0x5a);
    iVar4 = GetUnits(&DAT_1000c268);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        TryUnit(&DAT_1000c0f8,500,10,10);
      }
      FUN_100032d0();
    }
  }
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10009648,0x5f,0x5a);
    TryUpgrade(&DAT_10009720,0x5f,0x5a);
    TryUpgrade(&DAT_10009640,0x5f,0x5a);
    TryUnit(&DAT_1000c268,2,0x5f,0x5a);
  }
  cVar1 = UpgIsRun(&DAT_100097b8);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_1000c210,0x5f,0x5a);
    TryUpgrade(&DAT_1000c218,0x5f,0x5a);
  }
  iVar4 = GetReadyUnits(&DAT_10009890);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = GetUnits(&DAT_1000bf38);
  if ((((iVar4 != 0) && (cVar1 = UpgIsRun(&DAT_1000c288), cVar1 == '\0')) &&
      (iVar4 = GetMoney(1), 800 < iVar4)) &&
     ((iVar4 = GetMoney(3), iVar4 < 6000 && (iVar4 = GetMoney(4), 3000 < iVar4)))) {
    AI_Torg(4,3,3000);
  }
  iVar4 = GetMoney(3);
  if ((iVar4 < 1000) && (iVar4 = GetMoney(2), 5000 < iVar4)) {
    AI_Torg(2,3,4000);
  }
  cVar1 = UpgIsDone(&DAT_1000c210);
  if ((cVar1 == '\0') || (cVar1 = UpgIsDone(&DAT_1000c218), cVar1 == '\0')) {
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
    TryUpgrade(&DAT_1000c368,0x28,100);
    TryUpgrade(&DAT_1000c370,0x5a,100);
    TryUpgrade(&DAT_1000c358,0x5a,100);
    TryUpgrade(&DAT_1000c360,0x5a,100);
    TryUpgrade(&DAT_1000c378,0x5a,100);
    TryUpgrade(&DAT_1000c2b0,0x5a,100);
    TryUpgrade(&DAT_1000c298,0x5a,100);
    TryUpgrade(&DAT_1000c2a0,0x5a,100);
    TryUpgrade(&DAT_1000c2b8,0x5a,100);
    TryUpgrade(&DAT_1000c2c0,0x5a,100);
    TryUpgrade(&DAT_1000c278,0x32,100);
    TryUpgrade(&DAT_1000bfe0,0x32,100);
  }
  return;
}





void FUN_10004310(void)

{
  TryUpgrade(&DAT_10009928,0x5a,100);
  TryUpgrade(&DAT_10009930,0x5a,100);
  TryUpgrade(&DAT_10009920,0x5a,100);
  TryUpgrade(&DAT_1000bf90,10,100);
  TryUpgrade(&DAT_1000bf80,10,100);
  return;
}





void FUN_10004360(void)

{
  TryUpgrade(&DAT_1000c1f0,0x1e,0x32);
  TryUpgrade(&DAT_1000c1e8,0x1e,0x32);
  TryUpgrade(&DAT_1000c1b8,0x1e,0x32);
  TryUpgrade(&DAT_1000c1b0,0x1e,0x32);
  TryUpgrade(&DAT_1000c0b0,0x1e,0x32);
  TryUpgrade(&DAT_1000c0b8,0x1e,0x32);
  TryUpgrade(&DAT_1000c0c0,0x1e,0x32);
  TryUpgrade(&DAT_1000c0c8,0x1e,0x32);
  return;
}





void FUN_10005220(void)

{
  TryUnit(&DAT_1000bff0,1,100,100);
  TryUnit(&DAT_1000bfd0,1,100,100);
  TryUnit(&DAT_1000bfe8,1,100,100);
  TryUnit(&DAT_10009890,1,100,100);
  return;
}





int  FUN_10005270(int *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_100096a0) {
    cVar1 = UpgIsDone(&DAT_1000c358);
    if (cVar1 != '\0') {
      cVar1 = UpgIsDone(&DAT_1000c2a0);
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
  
  iVar2 = GetUnits(&DAT_1000c290);
  if (iVar2 == 0) {
    iVar2 = GetUnits(&DAT_100098e0);
    if (iVar2 != 0) goto LAB_100052d4;
  }
  else {
LAB_100052d4:
    TryUpgrade(&DAT_10009968,100,100);
    TryUpgrade(&DAT_1000c210,100,100);
    TryUpgrade(&DAT_1000c218,100,100);
  }
  iVar2 = GetUnits(&DAT_1000c3c8);
  if (iVar2 < 0x15) {
    iVar2 = GetUnits(&DAT_1000c348);
    if (iVar2 < 0x15) {
      iVar2 = GetUnits(&DAT_100096a0);
      if (iVar2 < 0x8d) goto LAB_1000539d;
    }
  }
  TryUpgrade(&DAT_10009640,0x5f,100);
  TryUpgrade(&DAT_10009648,0x5f,100);
  iVar2 = GetUnits(&DAT_1000c3c8);
  if (iVar2 < 0x8d) {
    iVar2 = GetUnits(&DAT_1000c348);
    if (0x3c < iVar2) goto LAB_1000538b;
    uVar3 = 0xf;
  }
  else {
LAB_1000538b:
    uVar3 = 0x5f;
  }
  TryUpgrade(&DAT_10009720,uVar3,100);
LAB_1000539d:
  iVar2 = GetUnits(&DAT_100096a0);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_1000c368,0x50,100);
    TryUpgrade(&DAT_1000c370,0x55,100);
    TryUpgrade(&DAT_1000c358,0x5a,100);
    TryUpgrade(&DAT_1000c2b0,0x50,100);
    TryUpgrade(&DAT_1000c298,0x55,100);
    TryUpgrade(&DAT_1000c2a0,0x5a,100);
    iVar2 = GetUnits(&DAT_100096a0);
    if (0x78 < iVar2) {
      TryUpgrade(&DAT_1000c360,0x5a,100);
      TryUpgrade(&DAT_1000c378,0x5a,100);
      TryUpgrade(&DAT_1000c2b8,0x5a,100);
      TryUpgrade(&DAT_1000c2c0,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_1000c0f8);
  if (0x1e < iVar2) {
    TryUpgrade(&DAT_10009928,0x5a,100);
    TryUpgrade(&DAT_10009930,0x5a,100);
    TryUpgrade(&DAT_10009920,0x5a,100);
    TryUpgrade(&DAT_1000bf90,0x1e,100);
    TryUpgrade(&DAT_1000bf80,0x1e,100);
    TryUpgrade(&DAT_1000bf88,0x1e,100);
    TryUpgrade(&DAT_1000c220,0x5a,100);
    iVar2 = GetUnits(&DAT_1000c0f8);
    if (100 < iVar2) {
      TryUpgrade(&DAT_1000c228,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10009718);
  if (4 < iVar2) {
    TryUpgrade(&DAT_1000c278,0x5a,100);
    TryUpgrade(&DAT_1000bfe0,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_1000c3c8);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_1000c148,0x50,100);
    TryUpgrade(&DAT_1000c140,0x55,100);
    TryUpgrade(&DAT_1000c138,0x5a,100);
    TryUpgrade(&DAT_1000c030,0x50,100);
    TryUpgrade(&DAT_1000c028,0x55,100);
    TryUpgrade(&DAT_1000c020,0x5a,100);
    iVar2 = GetUnits(&DAT_1000c3c8);
    if (0x32 < iVar2) {
      TryUpgrade(&DAT_1000c130,0x5f,100);
      TryUpgrade(&DAT_1000c120,0x5f,100);
      TryUpgrade(&DAT_1000c170,0x5f,100);
      TryUpgrade(&DAT_1000c018,0x5f,100);
      TryUpgrade(&DAT_1000c010,0x5f,100);
      TryUpgrade(&DAT_1000c008,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_1000c348);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10009760,0x5a,100);
    TryUpgrade(&DAT_10009758,0x5a,100);
    TryUpgrade(&DAT_10009750,0x5a,100);
    TryUpgrade(&DAT_100096d0,0x5a,100);
    TryUpgrade(&DAT_100096c8,0x5a,100);
    TryUpgrade(&DAT_100096c0,0x5f,100);
    TryUpgrade(&DAT_100096b8,0x5f,100);
    TryUpgrade(&DAT_10009690,0x5f,100);
    TryUpgrade(&DAT_10009688,0x5f,100);
    cVar1 = UpgIsRun(&DAT_10009688);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10009738,0x5f,100);
      TryUpgrade(&DAT_10009730,0x5f,100);
      TryUpgrade(&DAT_10009728,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_100096a8);
  if (0x14 < iVar2) {
    iVar2 = GetUnits(&DAT_10009698);
    if (iVar2 < 0x14) {
      TryUpgrade(&DAT_10009918,0x50,100);
      TryUpgrade(&DAT_10009910,0x55,100);
      TryUpgrade(&DAT_10009908,0x5a,100);
      TryUpgrade(&DAT_100098d0,0x5f,100);
      TryUpgrade(&DAT_100098c8,0x5f,100);
      TryUpgrade(&DAT_100098c0,0x5f,100);
      TryUpgrade(&DAT_1000c220,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10009698);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_10009670,0x50,100);
    TryUpgrade(&DAT_10009668,0x55,100);
    TryUpgrade(&DAT_10009660,0x5a,100);
    TryUpgrade(&DAT_1000c330,0x5f,100);
    TryUpgrade(&DAT_1000c328,0x5f,100);
    TryUpgrade(&DAT_1000c320,0x5f,100);
    TryUpgrade(&DAT_1000c3a8,10,100);
    TryUpgrade(&DAT_1000c3a0,0xf,100);
    TryUpgrade(&DAT_1000c3f0,0x14,100);
    TryUpgrade(&DAT_1000c3e8,0x19,100);
    TryUpgrade(&DAT_1000c3e0,0x19,100);
    TryUpgrade(&DAT_1000c3d8,0x19,100);
    TryUpgrade(&DAT_1000c220,0x5a,100);
    TryUpgrade(&DAT_1000c228,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_1000bf98);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_100096f8,0x5a,100);
    TryUpgrade(&DAT_10009700,0x5a,100);
    TryUpgrade(&DAT_10009708,0x5a,100);
    TryUpgrade(&DAT_10009710,0x5a,100);
    TryUpgrade(&DAT_100096d8,0x5a,100);
    TryUpgrade(&DAT_100096e8,0x5a,100);
    TryUpgrade(&DAT_100097a0,0x5a,100);
    TryUpgrade(&DAT_100097a8,0x5a,100);
    TryUpgrade(&DAT_100097b0,0x5a,100);
    TryUpgrade(&DAT_10009788,0x5a,100);
    TryUpgrade(&DAT_10009790,0x5a,100);
    TryUpgrade(&DAT_10009798,0x5a,100);
    iVar2 = GetUnits(&DAT_1000bf98);
    if (iVar2 < 0x3d) {
      TryUpgrade(&DAT_1000c040,0xf,100);
      uVar3 = 0xf;
    }
    else {
      TryUpgrade(&DAT_1000c040,0x5a);
      uVar3 = 0x5a;
    }
    TryUpgrade(&DAT_1000c0a0,uVar3,100);
    cVar1 = UpgIsRun(&DAT_1000c040);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_1000c0a0);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_1000c098,0x5a,100);
      }
    }
    TryUpgrade(&DAT_1000c220,0x5a,100);
    TryUpgrade(&DAT_1000c228,0x5a,100);
  }
  cVar1 = UpgIsDone(&DAT_1000c320);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_1000c188,0x5a,100);
    cVar1 = UpgIsRun(&DAT_1000c188);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_1000c198,0x5a,100);
      cVar1 = UpgIsRun(&DAT_1000c198);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_1000c190,0x5a,100);
        cVar1 = UpgIsRun(&DAT_1000c190);
        if (cVar1 != '\0') {
          TryUpgrade(&DAT_1000c180,0x5a,100);
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
  
  TryUpgrade(&DAT_1000c390,0x32,100);
  iVar2 = GetUnits(&DAT_1000bf38);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10009678,100,100);
  }
  TryUpgrade(&DAT_1000c090,100,100);
  iVar2 = FUN_10005270(&DAT_100096a0);
  if ((iVar2 != 0) || ((DAT_1000bf70 != 0 && (DAT_1000bf70 != 5)))) {
    TryUpgrade(&DAT_1000c288,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_1000c000);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_1000c058,100,100);
  }
  cVar1 = UpgIsRun(&DAT_1000c168);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_1000c048,100,100);
  }
  TryUpgrade(&DAT_1000c168,0x5c,100);
  TryUpgrade(&DAT_1000c118,0x62,100);
  iVar2 = GetUnits(&DAT_1000c0f0);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_1000c1d0,0x62,100);
  }
  TryUpgrade(&DAT_1000c038,0x62,100);
  iVar2 = GetUnits(&DAT_1000c270);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100098f8,100,100);
  }
  return;
}





void FUN_10005bd0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  TryUnit(&DAT_1000c270,3,100,100);
  iVar2 = GetReadyUnits(&DAT_1000c000);
  if (iVar2 != 0) {
    TryUnit(&DAT_1000bff0,2,100,100);
    TryUnit(&DAT_1000bfe8,4,100,100);
  }
  TryUnit(&DAT_1000bff0,1,100,100);
  TryUnit(&DAT_1000bfd0,1,100,100);
  if (*(int *)(&DAT_1000bfb0 + DAT_1000c2cc * 4) == 0) {
    FUN_10005220();
    iVar2 = GetReadyUnits(&DAT_10009890);
    if (iVar2 == 0) {
      return;
    }
  }
  TryUnit(&DAT_1000c200,1,100,100);
  TryUnit(&DAT_1000bfd0,2,100,100);
  iVar2 = GetReadyUnits(&DAT_1000bfd0);
  if ((iVar2 < 2) && (iVar2 = GetStartRes(), iVar2 != 0)) {
    return;
  }
  TryUnit(&DAT_1000c268,2,100,100);
  iVar2 = GetReadyUnits(&DAT_1000c268);
  iVar3 = GetUnits(&DAT_1000c268);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    TryUnit(&DAT_1000bf38,1,100,100);
    iVar2 = GetPeaceTimeLeft();
    if (iVar2 < 3) {
      TryUnit(&DAT_1000c000,1,100,100);
      iVar2 = GetReadyUnits(&DAT_1000c000);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_10005220();
    TryUnit(&DAT_1000bfd0,4,100,100);
    iVar2 = GetReadyUnits(&DAT_1000bfd0);
    if (2 < iVar2) {
      TryUnit(&DAT_1000c0f0,3,100,100);
      iVar2 = GetUnits(&DAT_1000c270);
      if (iVar2 != 0) {
        TryUnit(&DAT_1000c0f0,4,100,100);
      }
      TryUnit(&DAT_10009630,1,100,100);
      TryUnit(&DAT_10009630,3,0x28,100);
      cVar1 = UpgIsDone(&DAT_100098f8);
      if (cVar1 != '\0') {
        TryUnit(&DAT_1000c0f0,5,100,100);
      }
      TryUnit(&DAT_1000c110,1,100,100);
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
  
  iVar2 = GetUnits(&DAT_1000c290,param_1);
  if (iVar2 < 0x28) {
    SetAIRegister(DAT_1000c2cc + 8,0);
  }
  iVar2 = GetUnits(&DAT_1000c290);
  if (iVar2 < 0x9d) {
    iVar2 = GetReadyUnits(&DAT_1000c0f0);
    if (iVar2 == 0) goto LAB_10005e52;
  }
  SetAIRegister(DAT_1000c2cc + 8,1);
LAB_10005e52:
  iVar2 = 2;
  do {
    TryUnit(&DAT_1000c1a8,1000,0x14,100);
    iVar3 = GetUnits(&DAT_100096a0);
    if (iVar3 < 0x8c) {
      TryUnit(&DAT_100096a0,1000,0x14,100);
    }
    else {
      TryUnit(&DAT_100096a0,1000,0x14,0x28);
      TryUnit(&DAT_1000c0f8,1000,0x14,100);
    }
    iVar3 = GetAIRegister(DAT_1000c2cc + 8);
    if (iVar3 == 0) {
      iVar3 = GetPeaceTimeLeft();
      if (iVar3 < 1) {
        TryUnit(&DAT_1000c290,0xa0,0x14,100);
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
            TryUnit(&DAT_100098a0,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = GetUnitCost(DAT_1000c2cc & 0xff,&DAT_100098a0,1);
      if (iVar3 < 0x78) goto LAB_10005f25;
    }
    cVar1 = UpgIsDone(&DAT_1000c038);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    TryUnit(&DAT_1000c3c8,1000,0x14,uVar4);
    TryUnit(&DAT_10009698,1000,0x14,100);
    TryUnit(&DAT_1000bf98,1000,0x14,100);
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
  
  iVar2 = GetReadyUnits(&DAT_10009890,param_1);
  if (iVar2 != 0) {
    iVar2 = GetStartRes();
    if (iVar2 == 3) {
      iVar2 = GetAIRegister(DAT_1000c2cc);
      if (iVar2 == 0) {
        AI_Torg(2,3,500000);
        AI_Torg(0,3,80000);
        SetAIRegister(DAT_1000c2cc,1);
        return;
      }
    }
    else {
      iVar2 = GetReadyUnits(&DAT_10009890);
      if (iVar2 != 0) {
        iVar2 = GetAIRegister(DAT_1000c2cc);
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
          SetAIRegister(DAT_1000c2cc,1);
        }
        cVar1 = UpgIsRun(&DAT_1000c288);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_1000c168);
          if (cVar1 == '\0') {
            iVar2 = GetReadyUnits(&DAT_1000bf38);
            if (iVar2 != 0) {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_1000c2cc & 0xff,&DAT_1000c168,5);
              }
              FUN_10002f90(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = UpgIsRun(&DAT_1000c168);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_1000c038);
          if (cVar1 == '\0') {
            if (0) {
              iVar2 = 0;
            }
            else {
              iVar2 = GetUpgradeCost(DAT_1000c2cc & 0xff,&DAT_1000c038,3);
            }
            uVar3 = FUN_10002f90(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_1000c2cc & 0xff,&DAT_1000c038,1);
              }
              uVar3 = FUN_10002f90(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = GetUpgradeCost(DAT_1000c2cc & 0xff,&DAT_1000c038,4);
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
  cVar1 = UpgIsRun(&DAT_1000c118);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_1000c2cc,&DAT_1000c118,3);
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
  cVar1 = UpgIsRun(&DAT_1000c038);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_1000c2cc,&DAT_1000c038,3);
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
  cVar1 = UpgIsRun(&DAT_1000c168);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost((char)DAT_1000c2cc,&DAT_1000c168,3);
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
  cVar1 = UpgIsRun(&DAT_1000c358);
  if (((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_1000c2a0), cVar1 == '\0')) &&
     (iVar2 = GetMoney(3), iVar2 < 9000)) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_1000c000);
  if ((iVar2 == 0) && (iVar2 = GetPeaceTimeLeft(), iVar2 < 2)) {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUnitCost((char)DAT_1000c2cc,&DAT_1000c000,2);
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
  cVar1 = UpgIsRun(&DAT_1000c288);
  if (cVar1 == '\0') {
    SetPDistribution(9,1,1);
  }
  cVar1 = UpgIsRun(&DAT_1000c090);
  if ((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10009678), cVar1 == '\0')) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_1000bf38);
  if (iVar2 == 0) {
    SetPDistribution(6,4,4);
  }
  cVar1 = UpgIsRun(&DAT_1000c390);
  if (cVar1 != '\0') {
    return;
  }
  SetPDistribution(9,1,1);
  return;
}





void FUN_10006630(void)

{
  char cVar1;
  
  SetMinesUpgradeRules(&DAT_1000c5b0);
  cVar1 = UpgIsRun(&DAT_1000c358);
  if (cVar1 != '\0') {
    cVar1 = UpgIsRun(&DAT_1000c2a0);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000814c);
      return;
    }
  }
  if (((DAT_1000bf70 == 2) || (DAT_1000bf70 == 3)) || (DAT_1000bf70 == 4)) {
    SetMinesUpgradeRules(&DAT_100081b8);
  }
  else {
    cVar1 = UpgIsRun(&DAT_1000c288);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_1000c168);
      if (cVar1 == '\0') {
        SetMinesUpgradeRules(&DAT_1000c5b0);
        return;
      }
    }
    cVar1 = UpgIsRun(&DAT_1000c168);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_100081b8);
      return;
    }
  }
  return;
}





void FUN_100066e0(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = FUN_10005270(&DAT_100096a0);
  if (iVar1 != 0) {
    SetDefenseState(0);
  }
  iVar1 = GetMaxPeaceTime();
  if ((iVar1 < 1) && (iVar1 = GetReadyUnits(&DAT_100098f0), iVar1 < 1)) {
    return;
  }
  SetDefenseState(0);
  return;
}





void FUN_10006730(void)

{
  char cVar1;
  
  cVar1 = UpgIsDone(&DAT_1000c1b0);
  if (cVar1 != '\0') {
    TryUnit(&DAT_1000c388,0x1e,0x1e,0x3c);
  }
  cVar1 = UpgIsDone(&DAT_1000c0c8);
  if (cVar1 != '\0') {
    TryUnit(&DAT_10009680,0x14,0x1e,0x3c);
  }
  TryUnit(&DAT_100098e0,0x3c,0x50,100);
  TryUpgrade(&DAT_1000c1f0,0x1e,100);
  TryUpgrade(&DAT_1000c1e8,0x1e,100);
  TryUpgrade(&DAT_1000c1b8,0x1e,100);
  TryUpgrade(&DAT_1000c1b0,0x1e,100);
  TryUpgrade(&DAT_1000c1c0,0x1e,100);
  TryUpgrade(&DAT_1000c0b0,0x1e,100);
  TryUpgrade(&DAT_1000c0b8,0x1e,100);
  TryUpgrade(&DAT_1000c0c0,0x1e,100);
  TryUpgrade(&DAT_1000c0c8,0x1e,100);
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
  
  iVar2 = GetReadyUnits(&DAT_100098f0);
  iVar3 = GetUnits(&DAT_1000c268);
  iVar4 = GetReadyUnits(&DAT_1000c268);
  iVar5 = GetUnits(&DAT_1000bf38);
  iVar6 = GetReadyUnits(&DAT_1000bf38);
  iVar7 = GetUnits(&DAT_100098f0);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_1000c1c8)) {
    TryUnit(&DAT_100098f0,4,0x32,100);
    cVar1 = UpgIsRun(&DAT_1000c1d0);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100098f0,6,0x32,100);
    }
    cVar1 = UpgIsRun(&DAT_1000c038);
    if (cVar1 != '\0') {
      TryUnit(&DAT_100098f0,8,0x32,100);
    }
  }
  TryUpgrade(&DAT_1000c300,0x32,100);
  TryUpgrade(&DAT_1000c2e8,0x28,100);
  TryUpgrade(&DAT_1000c2f8,0x1e,100);
  TryUpgrade(&DAT_1000c2d8,0x14,100);
  TryUpgrade(&DAT_1000c2e0,0xf,100);
  TryUpgrade(&DAT_1000c2d0,10,100);
  return;
}





void FUN_10006950(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetReadyUnits(&DAT_1000c270);
  iVar3 = GetUnits(&DAT_1000c270);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_1000c270,5,100,100);
  }
  TryUnit(&DAT_1000bfd0,1,100,100);
  TryUnit(&DAT_1000c200,1,100,100);
  TryUnit(&DAT_1000c268,2,100,100);
  iVar2 = GetReadyUnits(&DAT_1000c268);
  iVar3 = GetUnits(&DAT_1000c268);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_1000bf38,1,100,100);
    iVar2 = GetReadyUnits(&DAT_1000bf38);
    if (iVar2 != 0) {
      TryUnit(&DAT_1000bfe8,1,100,100);
      TryUnit(&DAT_1000bff0,1,100,100);
      TryUnit(&DAT_10009890,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10009890);
      if (iVar2 != 0) {
        TryUnit(&DAT_1000c000,1,100,100);
        TryUnit(&DAT_1000c110,1,100,100);
        TryUnit(&DAT_10009630,1,100,100);
        TryUnit(&DAT_1000c0f0,1,100,100);
        cVar1 = UpgIsRun(&DAT_1000c038);
        if (cVar1 != '\0') {
          iVar2 = GetReadyUnits(&DAT_1000bfd0);
          iVar3 = GetUnits(&DAT_1000bfd0);
          if (iVar3 == iVar2) {
            iVar2 = GetExtraction(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            TryUnit(&DAT_1000bfd0,uVar4,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_1000c0f0);
          iVar3 = GetUnits(&DAT_1000c0f0);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_1000c0f0,7,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_10009630);
          iVar3 = GetUnits(&DAT_10009630);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_10009630,3,100,100);
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
  iVar1 = GetUnits(&DAT_100098a0);
  if (iVar1 < 4) {
    SetAIRegister(DAT_1000c2cc + 8,0);
  }
  iVar1 = GetUnits(&DAT_100098a0);
  if (0x5f < iVar1) {
    SetAIRegister(DAT_1000c2cc + 8,1);
  }
  iVar1 = GetAIRegister(DAT_1000c2cc + 8);
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
  if (*(int *)(&DAT_1000bfb0 + DAT_1000c2cc * 4) != 0) {
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
    TryUnit(&DAT_1000c1a8,1000,0x14,100);
    TryUnit(&DAT_100096a0,1000,0x14,100);
    iVar2 = GetAIRegister(DAT_1000c2cc + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        TryUnit(&DAT_100098a0,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      TryUnit(&DAT_1000c178,0x3c,10,100);
    }
    cVar1 = UpgIsDone(&DAT_1000c038);
    if (cVar1 == '\0') {
      TryUnit(&DAT_100096a8,1000,0x14,100);
    }
    TryUnit(&DAT_10009698,1000,0x14,100);
    TryUnit(&DAT_1000bf98,1000,0x14,100);
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
  DAT_1000bf70 = GetLandType();
  DAT_1000c380 = GetDifficulty();
  DAT_100098b0 = GetStartRes();
  FUN_10003040();
  SetMineBalanse(0x13,&DAT_100080f4);
  FUN_10006630();
  SetMinesBuildingRules(&DAT_10008224,0x1b);
  switch(DAT_1000bf70) {
  case 0:
  case 5:
    if (DAT_100098b0 == 3) {
      SetMineBalanse(3,&DAT_10008140);
      SetMinesUpgradeRules(&DAT_1000814c);
      SetMinesBuildingRules(&DAT_100083fc,5);
      FUN_10006c40();
    }
    else {
      SetMineBalanse(0x13,&DAT_100080f4);
      SetMinesUpgradeRules(&DAT_1000c5b0);
      if (DAT_100098b0 == 0) {
        DAT_10008228 = 4;
      }
      SetMinesBuildingRules(&DAT_10008224,0x1b);
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
    SetMineBalanse(0x13,&DAT_1000805c);
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
  SetMineBalanse(0x13,&DAT_10008010);
  iVar3 = GetUnits(&DAT_1000c1a8);
  iVar4 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_1000c1d0);
  GetUnits(&DAT_100096a0);
  UpgIsDone(&DAT_1000c038);
  GetUnits(&DAT_1000c0f8);
  iVar5 = GetUnits(&DAT_1000c3c8);
  iVar6 = GetUnits(&DAT_1000c348);
  iVar7 = GetUnits(&DAT_100096a0);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = GetDifficulty();
  if (0 < iVar6) {
    TryUnit(&DAT_1000c340,0xf,0x14,0x28);
  }
  iVar6 = GetReadyUnits(&DAT_100098f0);
  iVar7 = GetUnits(&DAT_100098f0);
  if (iVar3 == 0) {
    return;
  }
  TryUnit(&DAT_1000bff0,1,100,100);
  iVar8 = GetUnits(&DAT_1000bff0);
  if (iVar8 == 0) {
    return;
  }
  TryUpgrade(&DAT_1000c390,100,100);
  cVar2 = FieldExist();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      TryUnit(&DAT_1000c1a8,100,100,100);
      TryUnit(&DAT_100096a0,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_10004230();
    }
    SetPDistribution(0,1,1);
  }
  else {
    if (DAT_1000c5ac == 0) {
      if (12000 < iVar4) {
        SetPDistribution(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_10004599:
      SetPDistribution(9,uVar12,uVar13);
    }
    else {
      if (DAT_1000c5ac == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_10004599;
      }
      if (DAT_1000c5ac == 2) {
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
        TryUnit(&DAT_1000c1a8,100,100,100);
        goto LAB_100045d7;
      }
    }
    else {
LAB_100045d7:
      if ((300 < iVar4) && (TryUnit(&DAT_1000c1a8,uVar12,0xe8,100), 400 < iVar4)) {
        TryUnit(&DAT_100096a0,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_10004230();
    }
  }
  TryUnit(&DAT_1000bfd0,1,100,100);
  TryUnit(&DAT_1000bfd0,2,0x5a,5);
  TryUnit(&DAT_1000bfd0,3,0x5a,5);
  iVar8 = GetUnits(&DAT_1000c268);
  if (1 < iVar8) {
    TryUnit(&DAT_1000bfd0,2,0x50,5);
    iVar8 = GetUnits(&DAT_1000bfd0);
    if (1 < iVar8) {
      TryUnit(&DAT_1000c0f0,1,99,0x5a);
    }
    iVar8 = GetReadyUnits(&DAT_1000bfd0);
    if (1 < iVar8) {
      TryUnit(&DAT_10009890,1,100,100);
    }
    TryUpgrade(&DAT_1000c128,99,100);
  }
  iVar8 = GetUnits(&DAT_1000c1a8);
  if (0x23 < iVar8) {
    TryUnit(&DAT_10009890,1,100,100);
  }
  TryUnit(&DAT_1000c200,1,100,100);
  TryUnit(&DAT_1000c268,1,100,100);
  TryUnit(&DAT_1000c268,2,100,100);
  TryUnit(&DAT_1000bfe8,1,0x32,0x32);
  TryUnit(&DAT_1000c200,2,10,5);
  TryUpgrade(&DAT_10009678,0x50,100);
  iVar8 = GetUnits(&DAT_1000bf38);
  if (0 < iVar8) {
    TryUnit(&DAT_1000c110,1,5,3);
  }
  cVar2 = FieldExist();
  if (cVar2 != '\0') {
    TryUnit(&DAT_1000bf38,1,0x5a,0x5a);
  }
  TryUnit(&DAT_1000c000,1,99,10);
  TryUnit(&DAT_10009630,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    TryUnit(&DAT_1000bff0,2,0x1e,0x1e);
  }
  TryUnit(&DAT_1000c270,1,0x5a,0x14);
  TryUnit(&DAT_1000c270,2,0x50,5);
  TryUpgrade(&DAT_1000c090,0x5a,99);
  TryUpgrade(&DAT_1000c288,0x5f,100);
  TryUpgrade(&DAT_1000c1d0,100,100);
  TryUpgrade(&DAT_1000c058,0x5a,0x5a);
  TryUpgrade(&DAT_1000c048,0x5f,100);
  TryUpgrade(&DAT_1000c050,0x5f,100);
  iVar8 = GetReadyUnits(&DAT_1000c0f0);
  if (((iVar8 == 0) || (cVar2 = UpgIsRun(&DAT_1000c1d0), cVar2 != '\0')) ||
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
  TryUpgrade(&DAT_100097b8,100,100);
  TryUnit(&DAT_1000c2f0,1,0x32,0x5a);
  TryUnit(&DAT_1000c2f0,2,0x14,0x32);
  TryUnit(&DAT_1000c2f0,3,10,0x32);
  cVar2 = UpgIsDone(&DAT_10009970);
  if (cVar2 == '\0') {
    iVar9 = GetUnitsByUsage(0,0x1c);
    iVar10 = GetUnitsByUsage(0,0x1b);
    iVar8 = GetUnitsByUsage(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_1000bfa8;
      goto LAB_10004a03;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_1000bfa8;
      goto LAB_10004a03;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_10009900;
LAB_10004a03:
    TryUnit(puVar11,iVar8,0x32,0x32);
  }
  TryUpgrade(&DAT_10009970,99,100);
  cVar2 = UpgIsRun(&DAT_1000c288);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10009970,0x5a,0x5a);
    TryUpgrade(&DAT_10009888,99,100);
  }
  cVar2 = UpgIsRun(&DAT_10009970);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10009958,0x5a,0x5a);
    TryUpgrade(&DAT_10009898,0x46,10);
    FUN_10003320();
  }
  SetUpgradeLock(1,0);
  iVar8 = GetMoney(0);
  if ((((14000 < iVar8) && (cVar2 = UpgIsRun(&DAT_100097b8), cVar2 != '\0')) &&
      (iVar8 = GetMoney(1), iVar8 < 0x1d4c)) &&
     (cVar2 = UpgIsRun(&DAT_10009970), cVar2 == '\0')) {
    SetUpgradeLock(1,1);
  }
  TryUnit(&DAT_1000c208,3,0x5a,0x5a);
  cVar2 = UpgIsDone(&DAT_1000c108);
  if (cVar2 != '\0') {
    TryUnit(&DAT_1000c208,0x14,10,0x5a);
  }
  TryUpgrade(&DAT_1000c108,99,0x5a);
  TryUpgrade(&DAT_1000c118,99,100);
  TryUpgrade(&DAT_1000c300,0x32,0x32);
  TryUpgrade(&DAT_1000c2e8,0x32,0x32);
  TryUpgrade(&DAT_1000c2f8,0x32,0x32);
  TryUpgrade(&DAT_1000c2d8,0x32,0x32);
  TryUpgrade(&DAT_1000c2e0,0x32,0x32);
  TryUpgrade(&DAT_1000c2d0,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     (TryUnit(&DAT_100098f0,1,0x50,10), 0x3c < iVar3)) {
    TryUnit(&DAT_100098f0,2,0x50,10);
    TryUnit(&DAT_100098f0,3,0x32,10);
    TryUnit(&DAT_100098f0,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    TryUnit(&DAT_1000c178,0x32,1,0x1e);
    TryUnit(&DAT_1000c290,0x14,1,0x1e);
  }
  else {
    TryUnit(&DAT_100098e0,0x32,10,100);
    TryUnit(&DAT_1000c178,0x4b,1,0x1e);
    TryUnit(&DAT_1000c290,0x1e,1,0x1e);
    TryUpgrade(&DAT_10009648,0x5f,0x5a);
    TryUpgrade(&DAT_10009720,0x5f,0x5a);
    TryUpgrade(&DAT_10009640,0x5f,0x5a);
    cVar2 = UpgIsDone(&DAT_1000c1b0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_1000c388,5,0x1e,10);
    }
    cVar2 = UpgIsDone(&DAT_1000c0c8);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10009680,10,0x1e,10);
    }
    FUN_10004360();
  }
  cVar2 = UpgIsDone(&DAT_1000c038);
  if (cVar2 != '\0') {
    cVar2 = UpgIsDone(&DAT_1000c118);
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
  iVar3 = GetUnits(&DAT_1000c0f0);
  if (iVar3 != 0) {
    TryUnit(&DAT_1000c208,6,0x5a,0x5a);
  }
  cVar2 = UpgIsDone(&DAT_1000c108);
  if (cVar2 != '\0') {
    TryUnit(&DAT_1000c208,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    TryUnit(&DAT_1000c0f0,2,0x5f,0x14);
    TryUnit(&DAT_1000c0f0,3,0x5f,0x14);
    TryUnit(&DAT_1000c0f0,4,0x5f,0x14);
    TryUnit(&DAT_1000c0f0,5,0x28,0x14);
    TryUnit(&DAT_1000c0f0,6,0x28,0x14);
    TryUpgrade(&DAT_1000c038,99,100);
    iVar3 = GetUnits(&DAT_1000c0f8);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_1000c220,0x5a,100);
      TryUpgrade(&DAT_1000c228,0x50,0x46);
    }
    TryUpgrade(&DAT_1000c108,0x3c,0x5a);
    cVar1 = UpgIsRun(&DAT_10009920);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_1000c180,0x5a,0x5a);
      TryUpgrade(&DAT_1000c190,0x5a,0x5a);
      TryUpgrade(&DAT_1000c198,0x46,0x5a);
      TryUpgrade(&DAT_1000c188,0x46,0x5a);
    }
  }
  TryUpgrade(&DAT_100097b8,99,100);
  TryUpgrade(&DAT_100098f8,0x3c,0x5a);
  TryUpgrade(&DAT_1000c168,100,100);
  if (0x15e < iVar5) {
    TryUnit(&DAT_1000c0f8,500,10,100);
    FUN_10004310();
  }
  iVar3 = GetReadyUnits(&DAT_10009890);
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
  iVar3 = GetReadyUnits(&DAT_1000bf38);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = UpgIsRun(&DAT_1000c288), cVar1 == '\0')) {
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
  iVar3 = GetUnits(&DAT_1000c200);
  if ((iVar3 != 0) && (cVar1 = UpgIsRun(&DAT_1000c1d0), cVar1 == '\0')) {
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
  if (*(int *)(&DAT_1000c624 + iVar3 * 4) == 0) {
    AI_Torg(5,3,4000);
    iVar3 = GetAINation();
    *(int *)(&DAT_1000c624 + iVar3 * 4) = 1;
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
       (RegisterUpgrade(&DAT_1000c0a0,"KUZ04DA"), 1)) &&
      (RegisterUpgrade(&DAT_1000c040,"AKA35DA"), 1)) &&
     (RegisterUpgrade(&DAT_1000c098,"AKA36DA"), 1)) {
    RegisterUpgrade(&DAT_1000c0a8,"AKA32DA");
  }
  if (1) {
    RegisterUnitType(&DAT_100096a8,"Dragun(DA)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10009918,"Dragun(DA)ATTACK"), 1))
        && ((RegisterUpgrade(&DAT_10009910,"Dragun(DA)ATTACK3"),
            1 &&
            ((RegisterUpgrade(&DAT_10009908,"Dragun(DA)ATTACK4"),
             1 &&
             (RegisterUpgrade(&DAT_10009950,"Dragun(DA)ATTACK5"),
             1)))))) &&
       (RegisterUpgrade(&DAT_10009940,"Dragun(DA)ATTACK6"), 1))
      && (((((RegisterUpgrade(&DAT_10009938,"Dragun(DA)ATTACK7"),
             1 &&
             (RegisterUpgrade(&DAT_100096f0,"Dragun(DA)SHIELD"),
             1)) &&
            (RegisterUpgrade(&DAT_100096e0,"Dragun(DA)SHIELD3"),
            1)) &&
           ((RegisterUpgrade(&DAT_100098d8,"Dragun(DA)SHIELD4"),
            1 &&
            (RegisterUpgrade(&DAT_100098d0,"Dragun(DA)SHIELD5"),
            1)))) &&
          ((RegisterUpgrade(&DAT_100098c8,"Dragun(DA)SHIELD6"), 1
           && ((RegisterUpgrade(&DAT_100098c0,"Dragun(DA)SHIELD7"),
               1 &&
               (RegisterUpgrade(&DAT_10009918,"Dragun(DA)ATTACK"),
               1)))))))) &&
     (((RegisterUpgrade(&DAT_10009910,"Dragun(DA)ATTACK3"), 1 &&
       (((RegisterUpgrade(&DAT_10009908,"Dragun(DA)ATTACK4"), 1
         && (RegisterUpgrade(&DAT_10009950,"Dragun(DA)ATTACK5"),
            1)) &&
        (RegisterUpgrade(&DAT_10009940,"Dragun(DA)ATTACK6"), 1)))
       ) && ((((RegisterUpgrade(&DAT_10009938,"Dragun(DA)ATTACK7"),
               1 &&
               (RegisterUpgrade(&DAT_100096f0,"Dragun(DA)SHIELD"),
               1)) &&
              ((RegisterUpgrade(&DAT_100096e0,"Dragun(DA)SHIELD3"),
               1 &&
               ((RegisterUpgrade(&DAT_100098d8,"Dragun(DA)SHIELD4"),
                1 &&
                (RegisterUpgrade(&DAT_100098d0,"Dragun(DA)SHIELD5"),
                1)))))) &&
             (RegisterUpgrade(&DAT_100098c8,"Dragun(DA)SHIELD6"),
             1)))))) {
    RegisterUpgrade(&DAT_100098c0,"Dragun(DA)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_10009698,"Dragun_18(DA)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10009670,"Dragun_18(DA)ATTACK"), 1
         )) && (RegisterUpgrade(&DAT_10009668,"Dragun_18(DA)ATTACK3"),
               1)) &&
       ((RegisterUpgrade(&DAT_10009660,"Dragun_18(DA)ATTACK4"), 1
        && (RegisterUpgrade(&DAT_1000c330,"Dragun_18(DA)ATTACK5"),
           1)))) &&
      ((RegisterUpgrade(&DAT_1000c328,"Dragun_18(DA)ATTACK6"), 1
       && ((RegisterUpgrade(&DAT_1000c320,"Dragun_18(DA)ATTACK7"),
           1 &&
           (RegisterUpgrade(&DAT_1000c3a8,"Dragun_18(DA)SHIELD"),
           1)))))) &&
     (((RegisterUpgrade(&DAT_1000c3a0,"Dragun_18(DA)SHIELD3"), 1
       && (((RegisterUpgrade(&DAT_1000c3f0,"Dragun_18(DA)SHIELD4"),
            1 &&
            (RegisterUpgrade(&DAT_1000c3e8,"Dragun_18(DA)SHIELD5"),
            1)) &&
           (RegisterUpgrade(&DAT_1000c3e0,"Dragun_18(DA)SHIELD6"),
           1)))) &&
      ((((RegisterUpgrade(&DAT_1000c3d8,"Dragun_18(DA)SHIELD7"),
         1 &&
         (RegisterUpgrade(&DAT_10009670,"Dragun_18(DA)ATTACK"), 1
         )) && (((RegisterUpgrade(&DAT_10009668,"Dragun_18(DA)ATTACK3"),
                 1 &&
                 ((RegisterUpgrade(&DAT_10009660,"Dragun_18(DA)ATTACK4"),
                  1 &&
                  (RegisterUpgrade(&DAT_1000c330,"Dragun_18(DA)ATTACK5"),
                  1)))) &&
                (RegisterUpgrade(&DAT_1000c328,"Dragun_18(DA)ATTACK6"),
                1)))) &&
       ((((RegisterUpgrade(&DAT_1000c320,"Dragun_18(DA)ATTACK7"),
          1 &&
          (RegisterUpgrade(&DAT_1000c3a8,"Dragun_18(DA)SHIELD"),
          1)) &&
         (RegisterUpgrade(&DAT_1000c3a0,"Dragun_18(DA)SHIELD3"),
         1)) &&
        (((RegisterUpgrade(&DAT_1000c3f0,"Dragun_18(DA)SHIELD4"),
          1 &&
          (RegisterUpgrade(&DAT_1000c3e8,"Dragun_18(DA)SHIELD5"),
          1)) &&
         (RegisterUpgrade(&DAT_1000c3e0,"Dragun_18(DA)SHIELD6"),
         1)))))))))) {
    RegisterUpgrade(&DAT_1000c3d8,"Dragun_18(DA)SHIELD7");
  }
  if (1) {
    RegisterUnitType(&DAT_1000bff8,"Sveshenik_evro(DA)");
  }
  DAT_1000c2cc = GetAINation();
  uVar4 = GetRandomIndex();
  iVar2 = DAT_1000c2cc;
  *(unsigned int *)(&DAT_1000bfb0 + DAT_1000c2cc * 4) = uVar4 & 0x80;
  *(int *)(&DAT_10009b08 + iVar2 * 0x4b8) = 0;
  *(int *)(&DAT_10009c9c + iVar2 * 0x4b8) = 0;
  if (1) {
    RegisterUpgrade(&DAT_1000c0e8,"Barabanshik_ev1(DA)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_100098a0,"Dragun_18_DIP(DA)");
  }
  bVar3 = GetRandomIndex();
  pcVar7 = "Dragun(DA)";
  if ((bVar3 & 6) != 2) {
    pcVar7 = "Konni_Ricar(DA)";
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
  uVar4 = 0xffffffff;
  pcVar7 = "Grenader(DA)";
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
      (RegisterUnitType(&DAT_1000c290,"Strelec_Algir_DIP(DA)"), 1)
      ) && (RegisterUnitType(&DAT_1000c340,"Kozak_loshad_DIP(DA)"),
           1)) {
    RegisterUnitType(&DAT_10009718,"Officer_evro(DA)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_1000c278,"Officer_evro(DA)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_1000bfe0,"Officer_evro(DA)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10009658,"Barabanshik_ev1(DA)");
  }
  AssignFormUnit("Pikiner_evro(DA)");
  if ((((1) &&
       (RegisterUnitType(&DAT_100096a0,"Pikiner_evro(DA)"), 1)) &&
      (RegisterUnitType(&DAT_1000c1a8,"Kreposnoi_pruss(DA)"), 1))
     && (RegisterUnitType(&DAT_1000c178,"Grenader_DIP(DA)"), 1)) {
    RegisterUnitType(&DAT_1000c0f8,"Mushketer_ev(DA)");
    if (((((1) &&
          (RegisterUnitType(&DAT_1000c3c8,acStack_60), 1)) &&
         ((RegisterUnitType(&DAT_1000c348,"Kirasir(DA)"), 1 &&
          ((RegisterUnitType(&DAT_1000bf98,acStack_30), 1 &&
           (RegisterUnitType(&DAT_1000c388,"Pushka(DA)"), 1))))))
        && (((RegisterUnitType(&DAT_10009680,"Mortira(DA)"), 1 &&
             (((RegisterUnitType(&DAT_100098e0,"Mortira_b(DA)"), 1
               && (RegisterUnitType(&DAT_1000c208,"Lodka(DA)"), 1)
               ) && (RegisterUnitType(&DAT_1000bfd0,"Europ(DA)"),
                    1)))) &&
            (((RegisterUnitType(&DAT_1000bff0,"Melnica(DA)"), 1 &&
              (RegisterUnitType(&DAT_1000c268,"Kazarma_evro(DA)"),
              1)) &&
             ((RegisterUnitType(&DAT_1000c270,"Kazarma(DA)"), 1 &&
              ((RegisterUnitType(&DAT_1000bfe8,"Sclad1(DA)"), 1 &&
               (RegisterUnitType(&DAT_1000bf38,"akademia_E(DA)"),
               1)))))))))) &&
       ((RegisterUnitType(&DAT_1000c0f0,"Konushnia_Swesair(DA)"),
        1 &&
        (((((RegisterUnitType(&DAT_1000c000,"Dip_korpus(DA)"), 1
            && (RegisterUnitType(&DAT_10009630,"artileri_depo(DA)"),
               1)) &&
           (RegisterUnitType(&DAT_10009890,"Rinok(DA)"), 1)) &&
          (((RegisterUnitType(&DAT_100098f0,"Bashnia(DA)"), 1 &&
            (RegisterUnitType(&DAT_1000c200,"Kuznica(DA)"), 1)) &&
           ((RegisterUnitType(&DAT_1000c110,"Cercov_Poland(DA)"),
            1 &&
            ((RegisterUnitType(&DAT_1000c2f0,"PorE(DA)"), 1 &&
             (RegisterUnitType(&DAT_10009900,"Fregat(DA)"), 1)))))
           ))) && ((RegisterUnitType(&DAT_1000bfa8,"GALERA(DA)"),
                   1 &&
                   ((RegisterUnitType(&DAT_1000c3b0,"Linkor(DA)"),
                    1 &&
                    (RegisterUnitType(&DAT_1000bfa0,"Yahta(DA)"),
                    1)))))))))) {
      RegisterUnitType(&DAT_100098b8,"PERES_KOR(DA)");
    }
  }
  if (((((((((1) &&
            (RegisterUpgrade(&DAT_1000c390,"Melnica(DA)GETRES"),
            1)) &&
           (RegisterUpgrade(&DAT_1000c118,"Melnica(DA)GETRES2"),
           1)) &&
          ((RegisterUpgrade(&DAT_10009678,"KUZ01DA"), 1 &&
           (RegisterUpgrade(&DAT_1000c368,"Pikiner_evro(DA)ATTACK"),
           1)))) &&
         (RegisterUpgrade(&DAT_1000c370,"Pikiner_evro(DA)ATTACK3"),
         1)) &&
        ((RegisterUpgrade(&DAT_1000c358,"Pikiner_evro(DA)ATTACK4"),
         1 &&
         (RegisterUpgrade(&DAT_1000c360,"Pikiner_evro(DA)ATTACK5"),
         1)))) &&
       ((RegisterUpgrade(&DAT_1000c378,"Pikiner_evro(DA)ATTACK6"),
        1 &&
        (((RegisterUpgrade(&DAT_1000c2b0,"Pikiner_evro(DA)SHIELD"),
          1 &&
          (RegisterUpgrade(&DAT_1000c298,"Pikiner_evro(DA)SHIELD3"),
          1)) &&
         (RegisterUpgrade(&DAT_1000c2a0,"Pikiner_evro(DA)SHIELD4"),
         1)))))) &&
      ((((RegisterUpgrade(&DAT_1000c2b8,"Pikiner_evro(DA)SHIELD5"),
         1 &&
         (RegisterUpgrade(&DAT_1000c2c0,"Pikiner_evro(DA)SHIELD6"),
         1)) &&
        (RegisterUpgrade(&DAT_10009928,"Mushketer_ev(DA)ATTACK"),
        1)) &&
       ((RegisterUpgrade(&DAT_10009930,"Mushketer_ev(DA)ATTACK3"),
        1 &&
        (RegisterUpgrade(&DAT_10009920,"Mushketer_ev(DA)ATTACK4"),
        1)))))) &&
     ((RegisterUpgrade(&DAT_1000bf90,"Mushketer_ev(DA)SHIELD"), 1
      && (RegisterUpgrade(&DAT_1000bf80,"Mushketer_ev(DA)SHIELD3"),
         1)))) {
    RegisterUpgrade(&DAT_1000bf88,"Mushketer_ev(DA)SHIELD4");
  }
  puVar5 = FUN_10002f30(acStack_60,"ATTACK");
  SafeRegisterUpgrade(&DAT_1000c030,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"ATTACK3");
  SafeRegisterUpgrade(&DAT_1000c028,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"ATTACK4");
  SafeRegisterUpgrade(&DAT_1000c020,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"ATTACK5");
  SafeRegisterUpgrade(&DAT_1000c018,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"ATTACK6");
  SafeRegisterUpgrade(&DAT_1000c010,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"ATTACK7");
  SafeRegisterUpgrade(&DAT_1000c008,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"SHIELD");
  SafeRegisterUpgrade(&DAT_1000c148,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"SHIELD3");
  SafeRegisterUpgrade(&DAT_1000c140,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"SHIELD4");
  SafeRegisterUpgrade(&DAT_1000c138,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"SHIELD5");
  SafeRegisterUpgrade(&DAT_1000c130,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"SHIELD6");
  SafeRegisterUpgrade(&DAT_1000c120,puVar5);
  puVar5 = FUN_10002f30(acStack_60,"SHIELD7");
  SafeRegisterUpgrade(&DAT_1000c170,puVar5);
  if (((((1) &&
        (RegisterUpgrade(&DAT_100096d0,"Kirasir(DA)ATTACK"), 1))
       && (RegisterUpgrade(&DAT_100096c8,"Kirasir(DA)ATTACK3"), 1
          )) && ((RegisterUpgrade(&DAT_100096c0,"Kirasir(DA)ATTACK4"),
                 1 &&
                 (RegisterUpgrade(&DAT_100096b8,"Kirasir(DA)ATTACK5"),
                 1)))) &&
     ((((RegisterUpgrade(&DAT_10009690,"Kirasir(DA)ATTACK6"), 1
        && ((RegisterUpgrade(&DAT_10009688,"Kirasir(DA)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_10009760,"Kirasir(DA)SHIELD"),
            1)))) &&
       (RegisterUpgrade(&DAT_10009758,"Kirasir(DA)SHIELD3"), 1))
      && (((RegisterUpgrade(&DAT_10009750,"Kirasir(DA)SHIELD4"),
           1 &&
           (RegisterUpgrade(&DAT_10009738,"Kirasir(DA)SHIELD5"),
           1)) &&
          (RegisterUpgrade(&DAT_10009730,"Kirasir(DA)SHIELD6"), 1
          )))))) {
    RegisterUpgrade(&DAT_10009728,"Kirasir(DA)SHIELD7");
  }
  puVar5 = FUN_10002f30(acStack_30,"ATTACK");
  SafeRegisterUpgrade(&DAT_100096f8,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"ATTACK3");
  SafeRegisterUpgrade(&DAT_10009700,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"ATTACK4");
  SafeRegisterUpgrade(&DAT_10009708,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"ATTACK5");
  SafeRegisterUpgrade(&DAT_10009710,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"ATTACK6");
  SafeRegisterUpgrade(&DAT_100096d8,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"ATTACK7");
  SafeRegisterUpgrade(&DAT_100096e8,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"SHIELD");
  SafeRegisterUpgrade(&DAT_100097a0,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"SHIELD3");
  SafeRegisterUpgrade(&DAT_100097a8,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"SHIELD4");
  SafeRegisterUpgrade(&DAT_100097b0,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"SHIELD5");
  SafeRegisterUpgrade(&DAT_10009788,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"SHIELD6");
  SafeRegisterUpgrade(&DAT_10009790,puVar5);
  puVar5 = FUN_10002f30(acStack_30,"SHIELD7");
  SafeRegisterUpgrade(&DAT_10009798,puVar5);
  if (((((((1) &&
          (RegisterUpgrade(&DAT_1000c1f0,"Pushka(DA)BUILD"), 1))
         && ((RegisterUpgrade(&DAT_1000c1e8,"Pushka(DA)BUILD3"),
             1 &&
             ((RegisterUpgrade(&DAT_1000c1b8,"Pushka(DA)BUILD4"),
              1 &&
              (RegisterUpgrade(&DAT_1000c1b0,"Pushka(DA)BUILD5"),
              1)))))) &&
        ((RegisterUpgrade(&DAT_1000c1c0,"Pushka(DA)BUILD6"), 1 &&
         (((((RegisterUpgrade(&DAT_1000c0b0,"Mortira(DA)BUILD"),
             1 &&
             (RegisterUpgrade(&DAT_1000c0b8,"Mortira(DA)BUILD3"),
             1)) &&
            (RegisterUpgrade(&DAT_1000c0c0,"Mortira(DA)BUILD4"),
            1)) &&
           ((RegisterUpgrade(&DAT_1000c0c8,"Mortira(DA)BUILD5"),
            1 &&
            (RegisterUpgrade(&DAT_1000c1d0,"KUZ03DA"), 1)))) &&
          ((RegisterUpgrade(&DAT_1000c038,"MAINDA"), 1 &&
           ((RegisterUpgrade(&DAT_10009970,"AKA06DA"), 1 &&
            (RegisterUpgrade(&DAT_1000c090,"AKA01DA"), 1)))))))))
        ) && (RegisterUpgrade(&DAT_1000c048,"AKA02DA"), 1)) &&
      (((((((((RegisterUpgrade(&DAT_1000c050,"AKA03DA"), 1 &&
              (RegisterUpgrade(&DAT_1000c058,"AKA04DA"), 1)) &&
             (RegisterUpgrade(&DAT_1000c288,"AKA08DA"), 1)) &&
            ((RegisterUpgrade(&DAT_1000c128,"AKA23DA"), 1 &&
             (RegisterUpgrade(&DAT_1000c168,"AKA24DA"), 1)))) &&
           ((RegisterUpgrade(&DAT_1000c220,"AKA31DA"), 1 &&
            ((RegisterUpgrade(&DAT_1000c228,"AKA33DA"), 1 &&
             (RegisterUpgrade(&DAT_1000c180,"AKA12DA"), 1))))))
          && (RegisterUpgrade(&DAT_1000c190,"AKA13DA"), 1)) &&
         (((RegisterUpgrade(&DAT_1000c198,"AKA14DA"), 1 &&
           (RegisterUpgrade(&DAT_1000c188,"AKA15DA"), 1)) &&
          (RegisterUpgrade(&DAT_10009968,"AKA11DA"), 1)))) &&
        (((RegisterUpgrade(&DAT_100098f8,"AKA10DA"), 1 &&
          (RegisterUpgrade(&DAT_100097b8,"AKA30DA"), 1)) &&
         ((RegisterUpgrade(&DAT_1000c108,"AKA07DA"), 1 &&
          ((RegisterUpgrade(&DAT_10009958,"AKA20DA"), 1 &&
           (RegisterUpgrade(&DAT_1000c210,"KUZ02DA"), 1))))))))
       && ((RegisterUpgrade(&DAT_1000c218,"AKA09DA"), 1 &&
           ((((RegisterUpgrade(&DAT_10009888,"AKA05DA"), 1 &&
              (RegisterUpgrade(&DAT_10009898,"AKA28DA"), 1)) &&
             (RegisterUpgrade(&DAT_10009780,"AKA29DA"), 1)) &&
            ((RegisterUpgrade(&DAT_10009640,"KUZ05DA"), 1 &&
             (RegisterUpgrade(&DAT_10009720,"KUZ06DA"), 1))))))))
      )) && ((((RegisterUpgrade(&DAT_10009648,"AKA34DA"), 1 &&
               ((RegisterUpgrade(&DAT_1000c300,"Bashnia(DA)PAUSE"),
                1 &&
                (RegisterUpgrade(&DAT_1000c2e8,"Bashnia(DA)PAUSE3"),
                1)))) &&
              (RegisterUpgrade(&DAT_1000c2f8,"Bashnia(DA)PAUSE4"),
              1)) &&
             ((RegisterUpgrade(&DAT_1000c2d8,"Bashnia(DA)PAUSE5"),
              1 &&
              (RegisterUpgrade(&DAT_1000c2e0,"Bashnia(DA)PAUSE6"),
              1)))))) {
    RegisterUpgrade(&DAT_1000c2d0,"Bashnia(DA)PAUSE7");
  }
  SetPDistribution(9,4,4);
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(DA)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(DA)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(DA)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(DA)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(DA)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(DA)INSIDE7",0x32);
  AssignPeasant("Kreposnoi_pruss(DA)");
  AssignMine("shahta(DA)");
  AssignHouse("Dom_Prussia(DA)");
  AssignWall("WALL_EV(DA)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x5a);
  SET_MINE_UPGRADE2_RADIUS(0x5a);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}





__declspec(dllexport) void ProcessAI(void)

{
  DAT_1000c2cc = GetAINation();
  FUN_10006d40();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
