/* Auto-generated from Turcia.c */
#include "game_api.h"

/* AI state variables */
long long DAT_1000c030 = 0;
long long DAT_1000c0c8 = 0;
long long DAT_1000c180 = 0;
long long DAT_1000c1ec = 0;
int DAT_1000c1f0 = 1;
int DAT_1000c380 = 100;
long long DAT_1000e2f0 = 0;
long long DAT_1000e2f8 = 0;
int DAT_1000e300 = 0;
long long DAT_1000e308 = 0;
long long DAT_1000e318 = 0;
long long DAT_1000e320 = 0;
long long DAT_1000e328 = 0;
long long DAT_1000e330 = 0;
long long DAT_1000e338 = 0;
long long DAT_1000e340 = 0;
long long DAT_1000e348 = 0;
long long DAT_1000e380 = 0;
int DAT_1000e388 = 0;
long long DAT_1000e3b0 = 0;
long long DAT_1000e3b8 = 0;
long long DAT_1000e3c0 = 0;
long long DAT_1000e3c8 = 0;
long long DAT_1000e400 = 0;
long long DAT_1000e4d0 = 0;
long long DAT_1000e4d8 = 0;
long long DAT_1000e4e0 = 0;
long long DAT_1000e4e8 = 0;
int DAT_1000e4f0 = 0;
long long DAT_1000e4f8 = 0;
long long DAT_1000e500 = 0;
long long DAT_1000e508 = 0;
long long DAT_1000e518 = 0;
long long DAT_1000e520 = 0;
long long DAT_1000e528 = 0;
long long DAT_1000e530 = 0;
long long DAT_1000e540 = 0;
long long DAT_1000e548 = 0;
long long DAT_1000e550 = 0;
char DAT_1000e558 = 0;
char DAT_1000e6e8 = 0;
char DAT_1000e6ec = 0;
char DAT_1000e87c = 0;
char DAT_1000e880 = 0;
long long DAT_10010b18 = 0;
int DAT_10010b20 = 0;
long long DAT_10010b28 = 0;
long long DAT_10010b30 = 0;
long long DAT_10010b40 = 0;
long long DAT_10010b48 = 0;
long long DAT_10010b50 = 0;
long long DAT_10010b58 = 0;
long long DAT_10010b60 = 0;
long long DAT_10010b68 = 0;
long long DAT_10010b70 = 0;
long long DAT_10010b78 = 0;
long long DAT_10010b80 = 0;
long long DAT_10010b88 = 0;
long long DAT_10010b90 = 0;
long long DAT_10010b98 = 0;
long long DAT_10010ba0 = 0;
long long DAT_10010ba8 = 0;
long long DAT_10010bb0 = 0;
long long DAT_10010bb8 = 0;
long long DAT_10010bc0 = 0;
long long DAT_10010bc8 = 0;
long long DAT_10010bd0 = 0;
long long DAT_10010bf0 = 0;
int DAT_10010bf8 = 0;
long long DAT_10010c00 = 0;
long long DAT_10010c08 = 0;
long long DAT_10010c10 = 0;
long long DAT_10010c18 = 0;
long long DAT_10010c20 = 0;
long long DAT_10010c28 = 0;
long long DAT_10010c30 = 0;
long long DAT_10010c38 = 0;
long long DAT_10010c58 = 0;
long long DAT_10010c60 = 0;
long long DAT_10010c68 = 0;
long long DAT_10010c70 = 0;
long long DAT_10010c78 = 0;
long long DAT_10010c80 = 0;
long long DAT_10010c88 = 0;
int DAT_10010c90 = 0;
int DAT_10010c91 = 0;
int DAT_10010c92 = 0;
int DAT_10010c93 = 0;
int DAT_10010c94 = 0;
int DAT_10010c95 = 0;
long long DAT_10010c98 = 0;
long long DAT_10010ca0 = 0;
long long DAT_10010ca8 = 0;
long long DAT_10010cb0 = 0;
int DAT_10010cb8 = 0;
long long DAT_10010cc0 = 0;
int DAT_10010cc8 = 0;
int DAT_10010ccc = 0;
long long DAT_10010cd8 = 0;
long long DAT_10010ce0 = 0;
long long DAT_10010ce8 = 0;
long long DAT_10010cf0 = 0;
long long DAT_10010cf8 = 0;
long long DAT_10010d08 = 0;
long long DAT_10010d10 = 0;
long long DAT_10010d18 = 0;
long long DAT_10010d20 = 0;
long long DAT_10010d28 = 0;
long long DAT_10010d30 = 0;
long long DAT_10010d38 = 0;
int DAT_10010d40 = 0;
long long DAT_10010d48 = 0;
long long DAT_10010d50 = 0;
long long DAT_10010d60 = 0;
long long DAT_10010d68 = 0;
long long DAT_10010d70 = 0;
long long DAT_10010d78 = 0;
int DAT_10010d80 = 0;
long long DAT_10010d88 = 0;
long long DAT_10010d90 = 0;
long long DAT_10010d98 = 0;
int DAT_10010da4 = 0;
long long DAT_10010da8 = 0;
long long DAT_10010db0 = 0;
long long DAT_10010db8 = 0;
long long DAT_10010dc0 = 0;
long long DAT_10010dc8 = 0;
long long DAT_10010dd0 = 0;
long long DAT_10010dd8 = 0;
long long DAT_10010de0 = 0;
int DAT_10010de8 = 0;
int DAT_10010de9 = 0;
int DAT_10010dea = 0;
int DAT_10010deb = 0;
int DAT_10010dec = 0;
int DAT_10010ded = 0;
long long DAT_10010df0 = 0;
long long DAT_10010df8 = 0;
long long DAT_10010e00 = 0;
long long DAT_10010e08 = 0;
int DAT_10010e10 = 0;
long long DAT_10010e18 = 0;
long long DAT_10010e20 = 0;
long long DAT_10010e28 = 0;
long long DAT_10010e30 = 0;
long long DAT_10010e38 = 0;
int DAT_10010e40 = 0;
long long DAT_10010e48 = 0;
long long DAT_10010e50 = 0;
int DAT_10010e58 = 0;
long long DAT_10010e60 = 0;
long long DAT_10010e68 = 0;
long long DAT_10011028 = 0;
int DAT_10011094 = 0;
int DAT_10011098 = 0;
char DAT_1001109c = 0;
int DAT_100110dc = 0;
int DAT_100110e4 = 0;

/* Forward declarations */
static void FUN_10001000(void);
static void FUN_10001060(void);
static void FUN_10001f30(void);
static void FUN_100020a0(void);
static void FUN_10002100(void);
static void FUN_100021b0(void);
static void FUN_10003380(void);
static void FUN_100034e0(void);
static void FUN_10003520(void);
static void FUN_100035a0(void);


void FUN_10001000(void)

{
  int iVar1;
  
  if (DAT_10010b20 < 2) {
    iVar1 = GetUnits(&DAT_1000e330);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_1000e380,iVar1,0x32,0x32);
      TryUnit(&DAT_1000e318,iVar1,10,0x32);
    }
  }
  return;
}






void FUN_10001060(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DAT_10010da4 = GetAINation();
  iVar1 = GetUnits(&DAT_10010c98);
  iVar2 = GetExtraction(1);
  iVar3 = GetExtraction(4);
  DAT_10010cb8 = GetExtraction(5);
  DAT_10010cb8 = ((iVar1 - iVar2) - iVar3) - DAT_10010cb8;
  iVar1 = DAT_10010da4 * 0x4b8;
  DAT_10011094 = *(int *)(&DAT_1000e6e8 + iVar1);
  DAT_10010cc8 = &DAT_1000e558 + iVar1;
  DAT_10010ccc = &DAT_1000e6ec + iVar1;
  DAT_10011098 = *(int *)(&DAT_1000e87c + iVar1);
  DAT_10010d40 = &DAT_1000e880 + iVar1;
  DAT_10010d80 = GetMoney(3);
  DAT_1000e300 = GetMoney(0);
  DAT_10010e58 = GetMoney(2);
  DAT_1000e388 = GetMoney(4);
  DAT_10010bf8 = GetMoney(5);
  DAT_10010e10 = GetMoney(1);
  iVar1 = GetStartRes();
  if (iVar1 == 0) {
    DAT_1000c1f0 = 4;
  }
  SetMineBalanse(0x13,&DAT_1000c0c8);
  SetMinesUpgradeRules(&DAT_10011028);
  SetMinesBuildingRules(&DAT_1000c1ec,0x1b);
  DAT_10010c90 = 1;
  DAT_10010c92 = 1;
  DAT_10010c94 = 1;
  DAT_10010c95 = 1;
  DAT_10010deb = 1;
  DAT_10010de9 = 1;
  DAT_10010dec = 1;
  DAT_10010ded = 1;
  DAT_10010c93 = 0;
  DAT_10010c91 = 0;
  DAT_10010de8 = 0;
  DAT_10010dea = 0;
  DAT_100110dc = 0;
  return;
}





void FUN_10001f30(void)

{
  TryUpgrade(&DAT_1000e348,0x3c,100);
  TryUpgrade(&DAT_1000e338,0x3c,100);
  TryUpgrade(&DAT_1000e340,0x3c,100);
  TryUpgrade(&DAT_1000e3c0,10,100);
  TryUpgrade(&DAT_1000e3c8,10,100);
  TryUpgrade(&DAT_1000e3b0,10,100);
  TryUpgrade(&DAT_1000e3b8,10,100);
  TryUpgrade(&DAT_10010e28,0x3c,100);
  TryUpgrade(&DAT_10010e30,0x3c,100);
  TryUpgrade(&DAT_10010e18,0x3c,100);
  TryUpgrade(&DAT_10010e20,0x14,100);
  TryUpgrade(&DAT_10010e38,10,100);
  TryUpgrade(&DAT_10010d88,0x3c,100);
  TryUpgrade(&DAT_10010d70,0x3c,100);
  TryUpgrade(&DAT_10010d78,0x3c,100);
  TryUpgrade(&DAT_10010d90,0x14,100);
  TryUpgrade(&DAT_10010d98,10,100);
  if (DAT_10010b20 == 1) {
    TryUpgrade(&DAT_10010df8,0x1e,0x32);
    TryUpgrade(&DAT_10010e00,0x1e,0x32);
    TryUpgrade(&DAT_10010e08,0x1e,0x32);
    TryUpgrade(&DAT_10010cd8,0x1e,0x32);
    TryUpgrade(&DAT_10010ce0,0x1e,0x32);
    TryUpgrade(&DAT_10010cf0,0x1e,0x32);
  }
  return;
}





void FUN_100020a0(void)

{
  TryUpgrade(&DAT_10010df8,0x1e,0x32);
  TryUpgrade(&DAT_10010e00,0x1e,0x32);
  TryUpgrade(&DAT_10010e08,0x1e,0x32);
  TryUpgrade(&DAT_10010cd8,0x1e,0x32);
  TryUpgrade(&DAT_10010ce0,0x1e,0x32);
  TryUpgrade(&DAT_10010cf0,0x1e,0x32);
  return;
}





void FUN_10002100(void)

{
  if (DAT_10010b20 == 1) {
    TryUpgrade(&DAT_10010cf8,0x1e,0x32);
    TryUpgrade(&DAT_10010ce8,0x1e,0x32);
    TryUpgrade(&DAT_10010ca8,0x1e,0x32);
    TryUpgrade(&DAT_10010ca0,0x1e,0x32);
  }
  TryUpgrade(&DAT_10010bb0,0x1e,0x32);
  TryUpgrade(&DAT_10010bb8,0x1e,0x32);
  TryUpgrade(&DAT_10010bc0,0x1e,0x32);
  TryUpgrade(&DAT_10010bc8,0x1e,0x32);
  return;
}





void FUN_100021b0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *puVar10;
  int uVar11;
  int uVar12;
  int uVar13;
  
  SetMineBalanse(0x13,&DAT_1000c030);
  iVar2 = GetMoney(3);
  iVar3 = GetMoney(0);
  iVar4 = GetMoney(2);
  iVar5 = GetMoney(1);
  iVar6 = GetMoney(5);
  iVar7 = GetMoney(4);
  TryUnit(&DAT_10010b50,1,100,100);
  iVar8 = GetUnits(&DAT_10010b50);
  if (iVar8 != 0) {
    TryUnit(&DAT_10010b30,2,100,100);
    iVar8 = GetUnits(&DAT_10010b30);
    if (iVar8 != 0) {
      TryUnit(&DAT_10010d10,1,100,100);
      TryUnit(&DAT_10010d48,1,100,100);
      iVar8 = GetUnits(&DAT_10010b18);
      if (iVar8 != 0) {
        TryUnit(&DAT_10010d48,2,100,100);
        iVar8 = GetUnits(&DAT_10010b30);
        if (1 < iVar8) {
          if (1000 < iVar2) {
            TryUnit(&DAT_10010d48,3,100,100);
          }
          TryUnit(&DAT_10010d48,4,0x32,100);
          TryUnit(&DAT_10010d48,5,0x1e,100);
        }
      }
      TryUnit(&DAT_10010b48,1,100,100);
      cVar1 = FieldExist();
      if ((cVar1 != '\0') && (0x4b0 < iVar2)) {
        TryUnit(&DAT_10010b48,3,10,2);
        if (2000 < iVar2) {
          TryUnit(&DAT_10010b48,5,10,1);
          TryUnit(&DAT_10010b48,6,3,1);
          TryUnit(&DAT_10010b48,7,2,1);
          TryUnit(&DAT_1000e4d8,1,100,100);
        }
      }
      iVar8 = GetUnits(&DAT_10010b18);
      if (iVar8 != 0) {
        iVar8 = GetUnits(&DAT_10010d48);
        if (1 < iVar8) {
          TryUnit(&DAT_10010bf0,2,100,100);
          TryUnit(&DAT_10010bf0,3,0x5a,100);
          TryUnit(&DAT_10010bf0,4,0x5a,100);
          TryUnit(&DAT_10010bf0,5,0x5a,100);
          TryUnit(&DAT_1000e2f0,1,100,100);
        }
      }
      TryUnit(&DAT_10010b18,1,0x5a,100);
      iVar8 = GetUnits(&DAT_10010dd0);
      iVar9 = GetReadyUnits(&DAT_10010dd0);
      if (iVar9 == iVar8) {
        iVar8 = GetUnits(&DAT_10010bf0);
        if (iVar8 != 0) {
          TryUnit(&DAT_10010dd0,2,0x32,10);
          TryUnit(&DAT_10010dd0,3,0x14,10);
        }
      }
      iVar8 = GetUnits(&DAT_10010d48);
      if (iVar8 != 0) {
        TryUnit(&DAT_10010b50,2,10,10);
      }
      TryUnit(&DAT_10010b58,1,0x5a,10);
    }
  }
  TryUpgrade(&DAT_10010e50,100,100);
  cVar1 = UpgIsRun(&DAT_10010e50);
  if (cVar1 != '\0') {
    if (700 < iVar2) {
      if (DAT_10010b20 == 1) {
        iVar8 = GetUnits(&DAT_10010bd0);
        if (99 < iVar8) {
          TryUnit(&DAT_10010d08,800,0x14,0x3c);
          uVar11 = 800;
          goto LAB_10002542;
        }
        TryUnit(&DAT_1000e330,400,0x14,0x28);
        uVar12 = 10;
        uVar11 = 200;
        puVar10 = &DAT_10010bd0;
      }
      else {
        TryUnit(&DAT_10010d08,400,0x14,0x3c);
        uVar11 = 400;
LAB_10002542:
        uVar12 = 0x14;
        puVar10 = &DAT_1000e330;
      }
      TryUnit(puVar10,uVar11,uVar12,100);
    }
    if (0xfa < iVar2) {
      TryUnit(&DAT_10010c98,1000,100,100);
    }
    if (300 < iVar2) {
      TryUnit(&DAT_10010e68,400,0x14,100);
      TryUnit(&DAT_10010e68,400,0x14,100);
      if (1000 < iVar5) {
        TryUnit(&DAT_10010c68,0x46,100,100);
      }
    }
    TryUpgrade(&DAT_10010ba8,99,100);
    TryUpgrade(&DAT_1000e320,99,100);
  }
  if (DAT_10010b20 == 1) {
    iVar8 = GetUnits(&DAT_10010c98);
    if (0x2d < iVar8) {
      FUN_100020a0();
    }
  }
  TryUpgrade(&DAT_10010cc0,100,100);
  TryUpgrade(&DAT_10010d60,0x62,100);
  TryUpgrade(&DAT_10010c18,99,100);
  TryUpgrade(&DAT_10010ba0,99,100);
  TryUpgrade(&DAT_10010ba8,99,100);
  TryUpgrade(&DAT_10010b90,99,100);
  TryUpgrade(&DAT_10010b98,99,100);
  TryUpgrade(&DAT_1000e400,100,100);
  TryUpgrade(&DAT_1000e550,99,100);
  cVar1 = UpgIsDone(&DAT_10010cc0);
  if (cVar1 != '\0') {
    if (DAT_10010b20 == 1) {
      TryUnit(&DAT_1000e508,0x28,10,0x32);
    }
    TryUpgrade(&DAT_10010c58,99,100);
    TryUpgrade(&DAT_10010c00,99,100);
    cVar1 = UpgIsDone(&DAT_10010c00);
    if (cVar1 != '\0') {
      TryUnit(&DAT_10010d18,0x28,10,0x32);
      TryUpgrade(&DAT_1000e4d0,99,100);
    }
    iVar8 = GetUnits(&DAT_10010d08);
    if (0x14 < iVar8) {
      TryUpgrade(&DAT_10010d30,0x5a,100);
      TryUpgrade(&DAT_10010d38,0x50,0x46);
    }
    TryUpgrade(&DAT_1000e308,0x5f,100);
    FUN_10002100();
    cVar1 = UpgIsDone(&DAT_10010bc8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000e328,10,10,0x32);
    }
    cVar1 = UpgIsDone(&DAT_10010ca0);
    if (cVar1 != '\0') {
      TryUnit(&DAT_10010e48,0xc,10,0x32);
    }
    TryUnit(&DAT_1000e508,0x14,10,0x32);
    FUN_10001f30();
    TryUpgrade(&DAT_10010b88,0x1e,0x32);
    TryUpgrade(&DAT_10010b80,0x1e,0x32);
    TryUpgrade(&DAT_10010b78,0x1e,0x32);
    TryUpgrade(&DAT_10010b70,0x1e,0x32);
    TryUpgrade(&DAT_10010b68,0x1e,0x32);
    TryUpgrade(&DAT_10010b60,0x1e,0x32);
    TryUpgrade(&DAT_10010c38,0x1e,0x32);
    TryUpgrade(&DAT_10010c30,0x1e,0x32);
    TryUpgrade(&DAT_10010c28,0x1e,0x32);
    TryUpgrade(&DAT_10010c20,0x1e,0x32);
    TryUpgrade(&DAT_10010c10,0x1e,0x32);
    TryUpgrade(&DAT_10010c60,0x1e,0x32);
    TryUpgrade(&DAT_10010c70,0x28,0x14);
    TryUpgrade(&DAT_10010c80,0x28,0x14);
    TryUpgrade(&DAT_10010c88,0x28,0x14);
    TryUpgrade(&DAT_10010c78,0x28,0x14);
  }
  TryUnit(&DAT_10010d18,3,0x32,0x32);
  if (DAT_10010b20 == 1) {
    TryUnit(&DAT_1000e530,6,99,10);
    TryUnit(&DAT_1000e530,0xc,0x3c,10);
    TryUnit(&DAT_10010b28,6,0x5a,0x14);
  }
  else {
    TryUnit(&DAT_1000e4f8,3,0x5a,0x32);
    TryUnit(&DAT_1000e530,6,99,10);
    TryUnit(&DAT_1000e530,0xc,0x3c,10);
    TryUnit(&DAT_1000e530,0xf,0x32,10);
    TryUnit(&DAT_10010b28,6,0x5a,0x14);
  }
  iVar8 = GetReadyUnits(&DAT_1000e4d8);
  if (iVar8 == 0) goto LAB_10002a55;
  if (100000 < iVar4) {
    AI_Torg(2,1,90000);
  }
  if (1000000 < iVar3) {
    AI_Torg(0,1,90000);
  }
  if (iVar2 < 300) {
    if (iVar6 < 0x2ee1) {
      if (iVar5 < 0xbb9) {
        if (iVar4 < 0x5dd) {
          if (iVar3 < 0x5dd) goto LAB_10002a06;
          uVar12 = 1000;
          uVar11 = 0;
        }
        else {
          uVar12 = 0x5dc;
          uVar11 = 2;
        }
      }
      else {
        uVar12 = 1000;
        uVar11 = 1;
      }
    }
    else {
      uVar12 = 1000;
      uVar11 = 5;
    }
    AI_Torg(uVar11,3,uVar12);
  }
LAB_10002a06:
  cVar1 = UpgIsDone(&DAT_10010d60);
  if ((cVar1 == '\0') && (800 < iVar5)) {
    if (9000 < iVar6) {
      AI_Torg(5,3,3000);
    }
    if (9000 < iVar7) {
      AI_Torg(4,3,3000);
    }
  }
LAB_10002a55:
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    uVar13 = 5;
    uVar12 = 5;
    uVar11 = 0;
  }
  else {
    iVar3 = GetUnits(&DAT_10010c98);
    if ((iVar3 < 0x14) && (iVar2 < 2000)) {
      uVar13 = 2;
      uVar12 = 5;
      uVar11 = 10;
    }
    else {
      cVar1 = UpgIsDone(&DAT_10010b98);
      if ((cVar1 == '\0') || (iVar2 < 15000)) {
        uVar13 = 4;
        uVar12 = 4;
        uVar11 = 10;
      }
      else {
        uVar13 = 4;
        uVar12 = 6;
        uVar11 = 10;
      }
    }
  }
  SetPDistribution(uVar11,uVar12,uVar13);
  cVar1 = UpgIsDone(&DAT_1000e400);
  if (cVar1 == '\0') {
    TryUnit(&DAT_10010b28,3,100,0x32);
  }
  else {
    SetPDistribution(6,7,3);
    TryUnit(&DAT_10010b28,7,0x46,0x32);
    TryUpgrade(&DAT_10010d20,0x5f,100);
    TryUpgrade(&DAT_10010d28,0x5f,100);
    TryUpgrade(&DAT_1000e540,0x5f,100);
    cVar1 = UpgIsDone(&DAT_1000e540);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_1000e4e0,0x5a,100);
      TryUpgrade(&DAT_1000e520,0x5a,100);
      TryUpgrade(&DAT_1000e2f8,0x5a,100);
      TryUpgrade(&DAT_1000e500,0x5a,100);
      return;
    }
  }
  return;
}





void FUN_10003380(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = GetUnits(&DAT_10010d08);
  if (0x28 < iVar2) {
    TryUpgrade(&DAT_1000e348,0x28,100);
    TryUpgrade(&DAT_1000e338,0x5a,100);
    TryUpgrade(&DAT_1000e340,0x5a,100);
    TryUpgrade(&DAT_1000e3c0,0x5a,100);
    TryUpgrade(&DAT_1000e3c8,0x5a,100);
    TryUpgrade(&DAT_1000e3b0,0x5a,100);
    TryUpgrade(&DAT_1000e3b8,0x5a,100);
  }
  TryUpgrade(&DAT_10010e28,0x5a,100);
  TryUpgrade(&DAT_10010e30,0x5a,100);
  TryUpgrade(&DAT_10010e18,0x5a,100);
  cVar1 = UpgIsRun(&DAT_10010d78);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10010e20,0x5a,100);
  }
  TryUpgrade(&DAT_10010e38,0x5a,100);
  TryUpgrade(&DAT_10010d88,0x5a,100);
  TryUpgrade(&DAT_10010d70,0x5a,100);
  TryUpgrade(&DAT_10010d78,0x5a,100);
  TryUpgrade(&DAT_10010d90,0x5a,100);
  TryUpgrade(&DAT_10010d98,0x5a,100);
  TryUpgrade(&DAT_10010b40,0x50,100);
  TryUpgrade(&DAT_10010d50,0x50,100);
  return;
}





void FUN_100034e0(void)

{
  TryUpgrade(&DAT_10010df8,0x46,0x32);
  TryUpgrade(&DAT_10010e00,0x46,0x32);
  TryUpgrade(&DAT_10010e08,0x46,0x32);
  TryUpgrade(&DAT_10010cd8,0x46,0x32);
  return;
}





void FUN_10003520(void)

{
  TryUpgrade(&DAT_10010cf8,0x1e,0x32);
  TryUpgrade(&DAT_10010ce8,0x1e,0x32);
  TryUpgrade(&DAT_10010ca8,0x1e,0x32);
  TryUpgrade(&DAT_10010ca0,0x1e,0x32);
  TryUpgrade(&DAT_10010bb0,0x1e,0x32);
  TryUpgrade(&DAT_10010bb8,0x1e,0x32);
  TryUpgrade(&DAT_10010bc0,0x1e,0x32);
  TryUpgrade(&DAT_10010bc8,0x1e,0x32);
  return;
}





void FUN_100035a0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int uVar9;
  int uVar10;
  int uVar11;
  
  SetMineBalanse(0x13,&DAT_1000c030);
  iVar2 = GetMoney(3);
  GetMoney(0);
  GetMoney(2);
  iVar3 = GetMoney(1);
  GetMoney(5);
  GetMoney(4);
  TryUnit(&DAT_10010b50,1,100,100);
  iVar4 = GetUnits(&DAT_10010b50);
  if (iVar4 != 0) {
    TryUnit(&DAT_10010b30,1,100,5);
    if (DAT_1000e4f0 == 0) {
      TryUnit(&DAT_10010b48,1,100,100);
      TryUnit(&DAT_1000e4d8,1,100,100);
      SetPDistribution(0,3,1);
      iVar4 = GetUnits(&DAT_1000e4d8);
      if (iVar4 == 0) {
        return;
      }
    }
    iVar4 = GetUnits(&DAT_10010b30);
    if (iVar4 != 0) {
      iVar4 = GetReadyUnits(&DAT_1000e4d8);
      iVar5 = GetUnits(&DAT_1000e4d8);
      if (iVar5 == iVar4) {
        TryUnit(&DAT_10010d10,1,100,100);
      }
      TryUnit(&DAT_10010d48,2,100,100);
      TryUnit(&DAT_10010b30,2,100,100);
      TryUnit(&DAT_10010b18,1,0x5a,100);
      iVar4 = GetUnits(&DAT_10010b18);
      if ((iVar4 != 0) && (iVar4 = GetUnits(&DAT_10010b30), 1 < iVar4)) {
        if (1000 < iVar2) {
          TryUnit(&DAT_10010d48,3,100,100);
        }
        TryUnit(&DAT_10010d48,4,0x3c,100);
        TryUnit(&DAT_10010d48,5,0x3c,100);
      }
      TryUnit(&DAT_10010b48,1,100,100);
      cVar1 = FieldExist();
      if (((cVar1 != '\0') && (0x4b0 < iVar2)) &&
         (TryUnit(&DAT_10010b48,3,10,2), 2000 < iVar2)) {
        TryUnit(&DAT_10010b48,5,10,1);
        TryUnit(&DAT_10010b48,6,3,1);
        TryUnit(&DAT_10010b48,7,2,1);
      }
      iVar4 = GetUnits(&DAT_10010c98);
      if (0x18 < iVar4) {
        TryUnit(&DAT_1000e4d8,1,100,100);
      }
      iVar4 = GetUnits(&DAT_10010b18);
      if ((iVar4 != 0) && (iVar4 = GetUnits(&DAT_10010d48), 1 < iVar4)) {
        TryUnit(&DAT_10010bf0,2,100,100);
        TryUnit(&DAT_10010bf0,3,0x5a,100);
        TryUnit(&DAT_10010bf0,4,0x5a,100);
        TryUnit(&DAT_10010bf0,5,0x5a,100);
        TryUnit(&DAT_1000e2f0,1,100,100);
        TryUnit(&DAT_1000e2f0,3,0x28,100);
      }
      iVar4 = GetUnits(&DAT_10010dd0);
      iVar5 = GetReadyUnits(&DAT_10010dd0);
      if ((iVar5 == iVar4) && (iVar4 = GetUnits(&DAT_10010bf0), iVar4 != 0)) {
        TryUnit(&DAT_10010dd0,2,0x32,10);
        TryUnit(&DAT_10010dd0,3,0x14,10);
      }
      iVar4 = GetUnits(&DAT_10010d48);
      if (iVar4 != 0) {
        TryUnit(&DAT_10010b50,2,10,10);
      }
      TryUnit(&DAT_10010b58,1,0x5a,10);
    }
  }
  TryUpgrade(&DAT_10010e50,0x32,100);
  if (700 < iVar2) {
    TryUnit(&DAT_10010bd0,200,0x14,0x3c);
    iVar4 = GetUnits(&DAT_1000e330);
    if (0xfa < iVar4) {
      TryUnit(&DAT_10010d08,800,0x14,0x3c);
    }
    TryUnit(&DAT_1000e330,800,0x14,100);
  }
  if (0xfa < iVar2) {
    TryUnit(&DAT_10010c98,1000,100,100);
  }
  if (300 < iVar2) {
    TryUnit(&DAT_10010e68,400,0x14,100);
    TryUnit(&DAT_10010e68,400,0x14,100);
    if (0x5dc < iVar3) {
      TryUnit(&DAT_10010c68,0x1e,100,100);
      if (5000 < iVar3) {
        TryUnit(&DAT_10010d68,0xa0,100,100);
      }
      if (3000 < iVar3) {
        TryUnit(&DAT_10010d68,0x78,100,100);
      }
      if (1000 < iVar3) {
        TryUnit(&DAT_10010d68,0x28,100,100);
      }
    }
  }
  TryUpgrade(&DAT_10010ba8,99,100);
  iVar3 = GetUnits(&DAT_10010d48);
  if (iVar3 != 0) {
    TryUpgrade(&DAT_1000e320,99,100);
  }
  iVar3 = GetUnits(&DAT_10010bd0);
  if (0x1e < iVar3) {
    FUN_100034e0();
  }
  iVar3 = GetUnits(&DAT_1000e330);
  if (0x1e < iVar3) {
    FUN_10003380();
  }
  TryUpgrade(&DAT_10010cc0,100,100);
  TryUpgrade(&DAT_10010d60,0x62,100);
  TryUpgrade(&DAT_10010c18,99,100);
  TryUpgrade(&DAT_10010ba0,99,100);
  TryUpgrade(&DAT_10010ba8,99,100);
  TryUpgrade(&DAT_10010b90,99,100);
  TryUpgrade(&DAT_10010b98,99,100);
  TryUpgrade(&DAT_1000e400,100,100);
  cVar1 = UpgIsDone(&DAT_10010cc0);
  if (cVar1 != '\0') {
    if (DAT_10010b20 == 1) {
      TryUnit(&DAT_1000e508,0x28,10,0x32);
    }
    TryUpgrade(&DAT_10010c58,99,100);
    iVar3 = GetUnits(&DAT_10010d08);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_10010d30,0x5a,100);
      TryUpgrade(&DAT_10010d38,0x50,0x46);
    }
    TryUpgrade(&DAT_1000e308,0x5f,100);
    FUN_10003520();
    cVar1 = UpgIsDone(&DAT_10010bc8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000e328,10,10,0x32);
    }
    cVar1 = UpgIsDone(&DAT_10010ca0);
    if (cVar1 != '\0') {
      TryUnit(&DAT_10010e48,0xc,10,0x32);
    }
    TryUnit(&DAT_1000e508,0x32,10,0x32);
    TryUpgrade(&DAT_10010b88,0x5a,0x32);
    TryUpgrade(&DAT_10010b80,0x5a,0x32);
    TryUpgrade(&DAT_10010b78,0x5a,0x32);
    TryUpgrade(&DAT_10010b70,0x5a,0x32);
    TryUpgrade(&DAT_10010b68,0x5a,0x32);
    TryUpgrade(&DAT_10010b60,0x5a,0x32);
    TryUpgrade(&DAT_10010c38,0x5a,0x32);
    TryUpgrade(&DAT_10010c30,0x5a,0x32);
    TryUpgrade(&DAT_10010c28,0x5a,0x32);
    TryUpgrade(&DAT_10010c20,0x5a,0x32);
    TryUpgrade(&DAT_10010c10,0x5a,0x32);
    TryUpgrade(&DAT_10010c60,0x5a,0x32);
    TryUpgrade(&DAT_10010c70,0x28,0x14);
    TryUpgrade(&DAT_10010c80,0x28,0x14);
    TryUpgrade(&DAT_10010c88,0x28,0x14);
    TryUpgrade(&DAT_10010c78,0x28,0x14);
  }
  iVar3 = GetReadyUnits(&DAT_1000e4d8);
  if (iVar3 == 0) goto LAB_10004144;
  iVar3 = GetMoney(0);
  iVar4 = GetMoney(2);
  iVar5 = GetMoney(4);
  iVar6 = GetMoney(5);
  iVar7 = GetMoney(1);
  if (iVar2 < 0x96) {
    if (iVar4 < 0x1389) {
      if (iVar4 < 0x3e9) {
        if (iVar3 < 0x1389) {
          if (iVar3 < 0x3e9) {
            if (iVar6 < 0x7d1) {
              if (iVar5 < 0x7d1) {
                if (iVar7 < 0x3e9) goto LAB_10003df7;
                uVar10 = 500;
                uVar9 = 1;
              }
              else {
                uVar10 = 800;
                uVar9 = 4;
              }
            }
            else {
              uVar10 = 800;
              uVar9 = 5;
            }
          }
          else {
            uVar10 = 900;
            uVar9 = 0;
          }
        }
        else {
          uVar10 = 3000;
          uVar9 = 0;
        }
      }
      else {
        uVar10 = 900;
        uVar9 = 2;
      }
    }
    else {
      uVar10 = 3000;
      uVar9 = 2;
    }
    AI_Torg(uVar9,3,uVar10);
  }
LAB_10003df7:
  iVar8 = GetReadyUnits(&DAT_10010b18);
  if (((iVar8 != 0) && (1000 < iVar7)) && (cVar1 = UpgIsRun(&DAT_10010d60), cVar1 == '\0')) {
    if (3000 < iVar5) {
      AI_Torg(4,3,2000);
    }
    if (4000 < iVar6) {
      AI_Torg(5,3,3000);
    }
  }
  iVar8 = GetMoney(2);
  if (120000 < iVar8) {
    AI_Torg(2,1,100000);
  }
  iVar8 = GetMoney(0);
  if (100000 < iVar8) {
    AI_Torg(0,1,90000);
  }
  iVar8 = GetUnits(&DAT_10010d10);
  if ((iVar8 != 0) && (cVar1 = UpgIsRun(&DAT_10010cc0), cVar1 == '\0')) {
    iVar8 = GetMoney(5);
    if ((9000 < iVar8) &&
       ((iVar8 = GetMoney(0), iVar8 != 0 && (iVar8 = GetMoney(1), iVar8 < 4000)))) {
      iVar8 = GetMoney(5);
      if (12000 < iVar8) {
        AI_Torg(5,1,3000);
      }
      iVar8 = GetMoney(4);
      if (8000 < iVar8) {
        AI_Torg(4,1,2000);
      }
      iVar8 = GetMoney(2);
      if (20000 < iVar8) {
        AI_Torg(2,1,12000);
      }
      iVar8 = GetMoney(3);
      if (30000 < iVar8) {
        AI_Torg(3,1,15000);
      }
    }
    iVar8 = GetMoney(5);
    if (((9000 < iVar8) && (iVar8 = GetMoney(1), iVar8 != 0)) &&
       (iVar8 = GetMoney(1), 4000 < iVar8)) {
      iVar8 = GetMoney(5);
      if (12000 < iVar8) {
        AI_Torg(5,4,3000);
      }
      iVar8 = GetMoney(2);
      if (20000 < iVar8) {
        AI_Torg(2,4,12000);
      }
      iVar8 = GetMoney(3);
      if (30000 < iVar8) {
        AI_Torg(3,4,15000);
      }
    }
  }
  if (100000 < iVar4) {
    AI_Torg(2,1,90000);
  }
  if (1000000 < iVar3) {
    AI_Torg(0,1,90000);
  }
  if (iVar2 < 300) {
    if (iVar6 < 0x2ee1) {
      if (iVar7 < 0xbb9) {
        if (iVar4 < 0x5dd) {
          if (iVar3 < 0x5dd) goto LAB_100040c2;
          uVar10 = 1000;
          uVar9 = 0;
        }
        else {
          uVar10 = 0x5dc;
          uVar9 = 2;
        }
      }
      else {
        uVar10 = 1000;
        uVar9 = 1;
      }
    }
    else {
      uVar10 = 1000;
      uVar9 = 5;
    }
    AI_Torg(uVar9,3,uVar10);
  }
LAB_100040c2:
  cVar1 = UpgIsDone(&DAT_10010d60);
  if ((cVar1 == '\0') && (800 < iVar7)) {
    if (9000 < iVar6) {
      AI_Torg(5,3,3000);
    }
    if (9000 < iVar5) {
      AI_Torg(4,3,3000);
    }
  }
  iVar3 = GetAINation();
  if (*(int *)(&DAT_1001109c + iVar3 * 4) == 0) {
    AI_Torg(5,3,5000);
    iVar3 = GetAINation();
    *(int *)(&DAT_1001109c + iVar3 * 4) = 1;
  }
LAB_10004144:
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    uVar11 = 5;
    uVar10 = 5;
    uVar9 = 0;
  }
  else {
    iVar3 = GetUnits(&DAT_10010c98);
    if ((iVar3 < 0x14) && (iVar2 < 2000)) {
      uVar11 = 2;
      uVar10 = 5;
      uVar9 = 0xc;
    }
    else {
      cVar1 = UpgIsDone(&DAT_10010b98);
      if ((cVar1 == '\0') || (iVar2 < 25000)) {
        uVar11 = 3;
        uVar10 = 5;
        uVar9 = 0xc;
      }
      else {
        uVar11 = 4;
        uVar10 = 6;
        uVar9 = 0xc;
      }
    }
  }
  SetPDistribution(uVar9,uVar10,uVar11);
  iVar2 = GetUnits(&DAT_10010c98);
  iVar3 = GetExtraction(1);
  iVar4 = GetExtraction(4);
  iVar5 = GetExtraction(5);
  iVar5 = ((iVar2 - iVar3) - iVar4) - iVar5;
  SetDefenseState(1);
  if (0x28 < iVar5) {
    SetDefenseState(0);
  }
  TryUpgrade(&DAT_10010d20,100,10);
  TryUpgrade(&DAT_10010d28,100,10);
  TryUpgrade(&DAT_1000e548,100,10);
  iVar2 = GetReadyUnits(&DAT_1000e518);
  iVar3 = GetUnits(&DAT_1000e518);
  if ((iVar3 == iVar2) && (0x28 < iVar5)) {
    TryUnit(&DAT_1000e518,4,0x32,100);
    cVar1 = UpgIsRun(&DAT_10010cc0);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000e518,6,0x32,100);
    }
  }
  cVar1 = UpgIsDone(&DAT_10010cc0);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10010dd8,0x32,0x32);
    TryUpgrade(&DAT_10010dc0,0x28,0x32);
    TryUpgrade(&DAT_10010dc8,0x1e,0x32);
    TryUpgrade(&DAT_10010db0,0x14,0x32);
    TryUpgrade(&DAT_10010db8,0xf,0x32);
    TryUpgrade(&DAT_10010da8,10,0x32);
  }
  return;
}





__declspec(dllexport) void InitAI(void)

{
  if (((((1) &&
        (RegisterUnitType(&DAT_1000e4e8,"Dragun_18_DIP(TU)"), 1))
       && (RegisterUnitType(&DAT_1000e330,"Pikiner_turki(TU)"), 1)
       ) && (((RegisterUnitType(&DAT_10010c98,"Krestian_Turki(TU)"),
              1 &&
              (RegisterUnitType(&DAT_10010bd0,"Pehota_turki(TU)"),
              1)) &&
             ((RegisterUnitType(&DAT_10010c68,"Grenader_DIP(TU)"),
              1 &&
              ((RegisterUnitType(&DAT_10010d08,"Ianithar(TU)"), 1
               && (RegisterUnitType(&DAT_10010e68,"TUrkey_pikiner(TU)"),
                  1)))))))) &&
     ((RegisterUnitType(&DAT_10010e48,"Pushka(TU)"), 1 &&
      ((RegisterUnitType(&DAT_1000e328,"Mortira(TU)"), 1 &&
       (RegisterUnitType(&DAT_1000e508,"Mortira_b(TU)"), 1)))))) {
    RegisterUnitType(&DAT_10010d18,"Lodka(TU)");
  }
  AssignFormUnit("Pikiner_turki(TU)");
  if ((((1) &&
       (RegisterUnitType(&DAT_10010d68,"Strelec_Algir_DIP(TU)"), 1
       )) && (RegisterUnitType(&DAT_10010df0,"Kozak_loshad_DIP(TU)"),
             1)) &&
     (RegisterUnitType(&DAT_1000e380,"Oficer_turki(TU)"), 1)) {
    RegisterUnitType(&DAT_1000e318,"Barabanshik_Turki(TU)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_10010d50,"Oficer_turki(TU)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_10010b40,"Oficer_turki(TU)SHIELD");
  }
  if ((((1) &&
       (RegisterUnitType(&DAT_10010b30,"Center_Turki(TU)"), 1)) &&
      ((RegisterUnitType(&DAT_10010b50,"Melnica_tu(TU)"), 1 &&
       (((RegisterUnitType(&DAT_10010d48,"Barack_Turki(TU)"), 1 &&
         (RegisterUnitType(&DAT_10010b48,"Sclad4(TU)"), 1)) &&
        (RegisterUnitType(&DAT_10010b18,"Minaret(TU)"), 1)))))) &&
     (((RegisterUnitType(&DAT_10010bf0,"Konushnia_Turki(TU)"), 1
       && (RegisterUnitType(&DAT_10010b58,"Diplomatic_Turki(TU)"),
          1)) &&
      ((RegisterUnitType(&DAT_1000e2f0,"Art_Depo_Turki(TU)"), 1 &&
       ((((RegisterUnitType(&DAT_1000e4d8,"Rinok_Turki(TU)"), 1 &&
          (RegisterUnitType(&DAT_10010d10,"Kuznia_Turki(TU)"), 1))
         && ((RegisterUnitType(&DAT_10010c08,"Mechet_Turki(TU)"),
             1 &&
             (((RegisterUnitType(&DAT_10010dd0,"Port(TU)"), 1 &&
               (RegisterUnitType(&DAT_1000e518,"Bashnia_3(TU)"), 1
               )) && (RegisterUnitType(&DAT_10010b28,"GALERA(TU)"),
                     1)))))) &&
        ((RegisterUnitType(&DAT_1000e4f8,"PERES_KOR(TU)"), 1 &&
         (RegisterUnitType(&DAT_1000e530,"Shebeka(TU)"), 1))))))))
     )) {
    RegisterUnitType(&DAT_10010e60,"Linkor(TU)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10010de0,"AKA29TU"), 1)) &&
        ((RegisterUpgrade(&DAT_1000e550,"AKA06TU"), 1 &&
         ((((((RegisterUpgrade(&DAT_10010dd8,"Bashnia_3(TU)PAUSE"),
              1 &&
              (RegisterUpgrade(&DAT_10010dc0,"Bashnia_3(TU)PAUSE3"),
              1)) &&
             (RegisterUpgrade(&DAT_10010dc8,"Bashnia_3(TU)PAUSE4"),
             1)) &&
            ((RegisterUpgrade(&DAT_10010db0,"Bashnia_3(TU)PAUSE5"),
             1 &&
             (RegisterUpgrade(&DAT_10010db8,"Bashnia_3(TU)PAUSE6"),
             1)))) &&
           (RegisterUpgrade(&DAT_10010da8,"Bashnia_3(TU)PAUSE7"),
           1)) &&
          ((RegisterUpgrade(&DAT_10010e50,"Melnica_tu(TU)GETRES"),
           1 &&
           (RegisterUpgrade(&DAT_1000e320,"KUZ01TU"), 1))))))))
       && ((RegisterUpgrade(&DAT_10010e28,"Pikiner_turki(TU)ATTACK"),
           1 &&
           (((RegisterUpgrade(&DAT_10010e30,"Pikiner_turki(TU)ATTACK3"),
             1 &&
             (RegisterUpgrade(&DAT_10010e18,"Pikiner_turki(TU)ATTACK4"),
             1)) &&
            (RegisterUpgrade(&DAT_10010e20,"Pikiner_turki(TU)ATTACK5"),
            1)))))) &&
      ((RegisterUpgrade(&DAT_10010e38,"Pikiner_turki(TU)ATTACK6"),
       1 &&
       (RegisterUpgrade(&DAT_10010d88,"Pikiner_turki(TU)SHIELD"),
       1)))) &&
     ((((((((RegisterUpgrade(&DAT_10010d70,"Pikiner_turki(TU)SHIELD3"),
            1 &&
            ((RegisterUpgrade(&DAT_10010d78,"Pikiner_turki(TU)SHIELD4"),
             1 &&
             (RegisterUpgrade(&DAT_10010d90,"Pikiner_turki(TU)SHIELD5"),
             1)))) &&
           (RegisterUpgrade(&DAT_10010d98,"Pikiner_turki(TU)SHIELD6"),
           1)) &&
          ((((RegisterUpgrade(&DAT_10010df8,"Pehota_turki(TU)ATTACK"),
             1 &&
             (RegisterUpgrade(&DAT_10010e00,"Pehota_turki(TU)ATTACK3"),
             1)) &&
            (RegisterUpgrade(&DAT_10010e08,"Pehota_turki(TU)ATTACK4"),
            1)) &&
           (((RegisterUpgrade(&DAT_10010cd8,"Pehota_turki(TU)SHIELD"),
             1 &&
             (RegisterUpgrade(&DAT_10010ce0,"Pehota_turki(TU)SHIELD3"),
             1)) &&
            ((RegisterUpgrade(&DAT_10010cf0,"Pehota_turki(TU)SHIELD4"),
             1 &&
             ((RegisterUpgrade(&DAT_10010b88,"TUrkey_pikiner(TU)ATTACK"),
              1 &&
              (RegisterUpgrade(&DAT_10010b80,"TUrkey_pikiner(TU)ATTACK3"),
              1)))))))))) &&
         (RegisterUpgrade(&DAT_10010b78,"TUrkey_pikiner(TU)ATTACK4"),
         1)) &&
        ((((((RegisterUpgrade(&DAT_10010b70,"TUrkey_pikiner(TU)ATTACK5"),
             1 &&
             (RegisterUpgrade(&DAT_10010b68,"TUrkey_pikiner(TU)ATTACK6"),
             1)) &&
            (RegisterUpgrade(&DAT_10010b60,"TUrkey_pikiner(TU)ATTACK7"),
            1)) &&
           ((RegisterUpgrade(&DAT_10010c38,"TUrkey_pikiner(TU)SHIELD"),
            1 &&
            (RegisterUpgrade(&DAT_10010c30,"TUrkey_pikiner(TU)SHIELD3"),
            1)))) &&
          ((RegisterUpgrade(&DAT_10010c28,"TUrkey_pikiner(TU)SHIELD4"),
           1 &&
           ((RegisterUpgrade(&DAT_10010c20,"TUrkey_pikiner(TU)SHIELD5"),
            1 &&
            (RegisterUpgrade(&DAT_10010c10,"TUrkey_pikiner(TU)SHIELD6"),
            1)))))) &&
         ((RegisterUpgrade(&DAT_10010c60,"TUrkey_pikiner(TU)SHIELD7"),
          1 &&
          (((RegisterUpgrade(&DAT_1000e348,"Ianithar(TU)ATTACK"),
            1 &&
            (RegisterUpgrade(&DAT_1000e338,"Ianithar(TU)ATTACK3"),
            1)) &&
           (RegisterUpgrade(&DAT_1000e340,"Ianithar(TU)ATTACK4"),
           1)))))))) &&
       (((((RegisterUpgrade(&DAT_1000e3c0,"Ianithar(TU)SHIELD"),
           1 &&
           (RegisterUpgrade(&DAT_1000e3c8,"Ianithar(TU)SHIELD3"),
           1)) &&
          ((RegisterUpgrade(&DAT_1000e3b0,"Ianithar(TU)SHIELD4"),
           1 &&
           ((RegisterUpgrade(&DAT_1000e3b8,"Ianithar(TU)SHIELD5"),
            1 &&
            (RegisterUpgrade(&DAT_10010cf8,"Pushka(TU)BUILD"), 1)
            ))))) &&
         (RegisterUpgrade(&DAT_10010ce8,"Pushka(TU)BUILD3"), 1))
        && ((((((RegisterUpgrade(&DAT_10010ca8,"Pushka(TU)BUILD4"),
                1 &&
                (RegisterUpgrade(&DAT_10010ca0,"Pushka(TU)BUILD5"),
                1)) &&
               (RegisterUpgrade(&DAT_10010cb0,"Pushka(TU)BUILD6"),
               1)) &&
              (((RegisterUpgrade(&DAT_10010bb0,"Mortira(TU)BUILD"),
                1 &&
                (RegisterUpgrade(&DAT_10010bb8,"Mortira(TU)BUILD3"),
                1)) &&
               ((RegisterUpgrade(&DAT_10010bc0,"Mortira(TU)BUILD4"),
                1 &&
                ((RegisterUpgrade(&DAT_10010bc8,"Mortira(TU)BUILD5"),
                 1 &&
                 (RegisterUpgrade(&DAT_10010cc0,"KUZ03TU"), 1))))
               )))) && (RegisterUpgrade(&DAT_10010ba8,"AKA01TU"),
                       1)) &&
            ((((RegisterUpgrade(&DAT_10010b90,"AKA02TU"), 1 &&
               (RegisterUpgrade(&DAT_10010b98,"AKA03TU"), 1)) &&
              (RegisterUpgrade(&DAT_10010ba0,"AKA04TU"), 1)) &&
             ((RegisterUpgrade(&DAT_10010d60,"AKA08TU"), 1 &&
              (RegisterUpgrade(&DAT_10010c18,"AKA23TU"), 1)))))))
        ))) && ((((RegisterUpgrade(&DAT_10010c58,"AKA24TU"), 1 &&
                  ((RegisterUpgrade(&DAT_10010d30,"AKA31TU"), 1
                   && (RegisterUpgrade(&DAT_10010d38,"AKA33TU"),
                      1)))) &&
                 ((RegisterUpgrade(&DAT_10010c70,"AKA12TU"), 1 &&
                  (((RegisterUpgrade(&DAT_10010c80,"AKA13TU"), 1
                    && (RegisterUpgrade(&DAT_10010c88,"AKA14TU"),
                       1)) &&
                   (RegisterUpgrade(&DAT_10010c78,"AKA15TU"), 1))
                  )))) && ((((RegisterUpgrade(&DAT_1000e528,"AKA10TU"),
                             1 &&
                             (RegisterUpgrade(&DAT_1000e400,"AKA30TU"),
                             1)) &&
                            (((RegisterUpgrade(&DAT_10010c00,"AKA07TU"),
                              1 &&
                              ((RegisterUpgrade(&DAT_1000e540,"AKA20TU"),
                               1 &&
                               (RegisterUpgrade(&DAT_10010d20,"KUZ02TU"),
                               1)))) &&
                             (RegisterUpgrade(&DAT_10010d28,"AKA09TU"),
                             1)))) &&
                           ((((RegisterUpgrade(&DAT_1000e4d0,"AKA05TU"),
                              1 &&
                              (RegisterUpgrade(&DAT_1000e4e0,"AKA28TU"),
                              1)) &&
                             (RegisterUpgrade(&DAT_1000e308,"KUZ05TU"),
                             1)) &&
                            (((RegisterUpgrade(&DAT_1000e2f8,"AKA16TU"),
                              1 &&
                              (RegisterUpgrade(&DAT_1000e500,"AKA17TU"),
                              1)) &&
                             (RegisterUpgrade(&DAT_1000e520,"AKA27TU"),
                             1)))))))))))) {
    RegisterUpgrade(&DAT_1000e548,"AKA11TU");
  }
  SetPDistribution(9,4,4);
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(TU)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(TU)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(TU)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(TU)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(TU)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(TU)INSIDE7",0x32);
  AssignPeasant("Krestian_Turki(TU)");
  AssignMine("shahta(TU)");
  AssignHouse("Dom_Turki(TU)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x104);
  SET_MINE_UPGRADE2_RADIUS(0x82);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}






__declspec(dllexport) void ProcessAI(void)

{
  FUN_10001060();
  SetMinesUpgradeRules(&DAT_1000c180);
  DAT_10010b20 = GetLandType();
  DAT_10010e40 = GetDifficulty();
  if (DAT_100110e4 == 0) {
    DAT_100110e4 = 10;
    DAT_1000c380 = 0x1e;
  }
  else if (DAT_100110e4 == 1) {
    DAT_100110e4 = 0x1e;
    DAT_1000c380 = 0x32;
  }
  else {
    DAT_100110e4 = 100;
    DAT_1000c380 = 100;
  }
  DAT_1000e4f0 = GetStartRes();
  if (DAT_10010b20 == 0) {
    FUN_100035a0();
  }
  else if ((0 < DAT_10010b20) && (DAT_10010b20 < 5)) {
    FUN_100021b0();
  }
  FUN_10001000();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
