/* Auto-generated from Algeria.c */
#include "game_api.h"

/* AI state variables */
long long DAT_1000a030 = 0;
int DAT_1000a0c8 = 100;
long long DAT_1000bb00 = 0;
long long DAT_1000bb08 = 0;
long long DAT_1000bb10 = 0;
long long DAT_1000bb20 = 0;
long long DAT_1000bb28 = 0;
long long DAT_1000bb30 = 0;
long long DAT_1000bb38 = 0;
long long DAT_1000bb70 = 0;
long long DAT_1000bba8 = 0;
long long DAT_1000bc78 = 0;
long long DAT_1000bc80 = 0;
long long DAT_1000bc88 = 0;
int DAT_1000bc90 = 0;
long long DAT_1000bc98 = 0;
long long DAT_1000bca0 = 0;
long long DAT_1000bca8 = 0;
long long DAT_1000bcb0 = 0;
long long DAT_1000bcb8 = 0;
long long DAT_1000bcc0 = 0;
long long DAT_1000bcc8 = 0;
long long DAT_1000bcd0 = 0;
long long DAT_1000bcd8 = 0;
int DAT_1000bce0 = 0;
long long DAT_1000bce8 = 0;
long long DAT_1000bcf0 = 0;
long long DAT_1000bcf8 = 0;
long long DAT_1000bd00 = 0;
long long DAT_1000bd08 = 0;
long long DAT_1000bd10 = 0;
long long DAT_1000bd18 = 0;
long long DAT_1000bd20 = 0;
long long DAT_1000bd28 = 0;
long long DAT_1000bd30 = 0;
long long DAT_1000bd38 = 0;
long long DAT_1000bd40 = 0;
long long DAT_1000bd48 = 0;
long long DAT_1000bd50 = 0;
long long DAT_1000bd58 = 0;
long long DAT_1000bd60 = 0;
long long DAT_1000bd68 = 0;
long long DAT_1000bd70 = 0;
long long DAT_1000bd78 = 0;
long long DAT_1000bd80 = 0;
long long DAT_1000bd88 = 0;
long long DAT_1000bd90 = 0;
long long DAT_1000bd98 = 0;
long long DAT_1000bda0 = 0;
long long DAT_1000bda8 = 0;
long long DAT_1000bdb0 = 0;
long long DAT_1000bdb8 = 0;
long long DAT_1000bdc0 = 0;
long long DAT_1000bdc8 = 0;
long long DAT_1000bdd0 = 0;
long long DAT_1000bdd8 = 0;
long long DAT_1000bde0 = 0;
long long DAT_1000bde8 = 0;
long long DAT_1000bdf0 = 0;
long long DAT_1000bdf8 = 0;
long long DAT_1000be00 = 0;
long long DAT_1000be08 = 0;
long long DAT_1000be10 = 0;
long long DAT_1000be18 = 0;
long long DAT_1000be20 = 0;
long long DAT_1000be28 = 0;
long long DAT_1000be30 = 0;
long long DAT_1000be38 = 0;
long long DAT_1000be48 = 0;
long long DAT_1000be50 = 0;
long long DAT_1000be58 = 0;
long long DAT_1000be60 = 0;
long long DAT_1000be68 = 0;
long long DAT_1000be70 = 0;
long long DAT_1000be78 = 0;
long long DAT_1000be88 = 0;
long long DAT_1000be90 = 0;
long long DAT_1000be98 = 0;
long long DAT_1000bea0 = 0;
long long DAT_1000bea8 = 0;
long long DAT_1000beb0 = 0;
long long DAT_1000beb8 = 0;
long long DAT_1000bec8 = 0;
long long DAT_1000bed0 = 0;
long long DAT_1000bed8 = 0;
long long DAT_1000bee0 = 0;
long long DAT_1000bee8 = 0;
long long DAT_1000bef0 = 0;
long long DAT_1000bef8 = 0;
long long DAT_1000bf00 = 0;
long long DAT_1000bf08 = 0;
long long DAT_1000bf10 = 0;
long long DAT_1000bf18 = 0;
int DAT_1000bf20 = 0;
long long DAT_1000bf28 = 0;
long long DAT_1000bf30 = 0;
long long DAT_1000bf38 = 0;
long long DAT_1000bf40 = 0;
int DAT_1000c0f4 = 0;

/* Forward declarations */
static void FUN_10001000(void);
static void FUN_10001b30(void);
static void FUN_10001c40(void);
static void FUN_10001ca0(void);
static void FUN_10001d30(void);
static void FUN_100026a0(void);
static void FUN_10002770(void);
static void FUN_10002780(void);
static void FUN_10002800(void);


void FUN_10001000(void)

{
  int iVar1;
  
  if (DAT_1000bce0 < 2) {
    iVar1 = GetUnits(&DAT_1000bb38);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_1000bb70,iVar1,0x32,0x32);
      TryUnit(&DAT_1000bb20,iVar1,10,0x32);
    }
  }
  return;
}





void FUN_10001b30(void)

{
  TryUpgrade(&DAT_1000bf08,0x3c,100);
  TryUpgrade(&DAT_1000bf10,0x3c,100);
  TryUpgrade(&DAT_1000bef8,0x3c,100);
  TryUpgrade(&DAT_1000bf00,0x14,100);
  TryUpgrade(&DAT_1000bf18,10,100);
  TryUpgrade(&DAT_1000bea8,0x3c,100);
  TryUpgrade(&DAT_1000be98,0x3c,100);
  TryUpgrade(&DAT_1000bea0,0x3c,100);
  TryUpgrade(&DAT_1000beb0,0x14,100);
  TryUpgrade(&DAT_1000beb8,10,100);
  if (DAT_1000bce0 == 1) {
    TryUpgrade(&DAT_1000bee0,0x1e,0x32);
    TryUpgrade(&DAT_1000bee8,0x1e,0x32);
    TryUpgrade(&DAT_1000bef0,0x1e,0x32);
    TryUpgrade(&DAT_1000be18,0x1e,0x32);
    TryUpgrade(&DAT_1000be20,0x1e,0x32);
    TryUpgrade(&DAT_1000be30,0x1e,0x32);
  }
  return;
}





void FUN_10001c40(void)

{
  TryUpgrade(&DAT_1000bee0,0x1e,0x32);
  TryUpgrade(&DAT_1000bee8,0x1e,0x32);
  TryUpgrade(&DAT_1000bef0,0x1e,0x32);
  TryUpgrade(&DAT_1000be18,0x1e,0x32);
  TryUpgrade(&DAT_1000be20,0x1e,0x32);
  TryUpgrade(&DAT_1000be30,0x1e,0x32);
  return;
}





void FUN_10001ca0(void)

{
  if (DAT_1000bce0 == 1) {
    TryUpgrade(&DAT_1000be38,0x1e,0x32);
    TryUpgrade(&DAT_1000be28,0x1e,0x32);
    TryUpgrade(&DAT_1000be00,0x1e,0x32);
    TryUpgrade(&DAT_1000bdf8,0x1e,0x32);
  }
  TryUpgrade(&DAT_1000bd68,0x1e,0x32);
  TryUpgrade(&DAT_1000bd70,0x1e,0x32);
  TryUpgrade(&DAT_1000bd78,0x1e,0x32);
  TryUpgrade(&DAT_1000bd80,0x1e,0x32);
  return;
}





void FUN_10001d30(void)

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
  
  SetMineBalanse(0x13,&DAT_1000a030);
  iVar2 = GetMoney(3);
  iVar3 = GetMoney(0);
  iVar4 = GetMoney(2);
  iVar5 = GetMoney(1);
  iVar6 = GetMoney(5);
  iVar7 = GetMoney(4);
  TryUnit(&DAT_1000bd08,1,100,100);
  iVar8 = GetUnits(&DAT_1000bd08);
  if (iVar8 != 0) {
    TryUnit(&DAT_1000bcf0,2,100,100);
    iVar8 = GetUnits(&DAT_1000bcf0);
    if (iVar8 != 0) {
      TryUnit(&DAT_1000be50,1,100,100);
      TryUnit(&DAT_1000be70,1,100,100);
      iVar8 = GetUnits(&DAT_1000bcd8);
      if (iVar8 != 0) {
        TryUnit(&DAT_1000be70,2,100,100);
        iVar8 = GetUnits(&DAT_1000bcf0);
        if (1 < iVar8) {
          if (1000 < iVar2) {
            TryUnit(&DAT_1000be70,3,100,100);
          }
          TryUnit(&DAT_1000be70,4,0x32,100);
          TryUnit(&DAT_1000be70,5,0x1e,100);
        }
      }
      TryUnit(&DAT_1000bd00,1,100,100);
      cVar1 = FieldExist();
      if ((cVar1 != '\0') && (0x4b0 < iVar2)) {
        TryUnit(&DAT_1000bd00,3,10,2);
        if (2000 < iVar2) {
          TryUnit(&DAT_1000bd00,5,10,1);
          TryUnit(&DAT_1000bd00,6,3,1);
          TryUnit(&DAT_1000bd00,7,2,1);
          TryUnit(&DAT_1000bc80,1,100,100);
        }
      }
      iVar8 = GetUnits(&DAT_1000bcd8);
      if (iVar8 != 0) {
        iVar8 = GetUnits(&DAT_1000be70);
        if (1 < iVar8) {
          TryUnit(&DAT_1000bd90,2,100,100);
          TryUnit(&DAT_1000bd90,3,0x5a,100);
          TryUnit(&DAT_1000bd90,4,0x5a,100);
          TryUnit(&DAT_1000bd90,5,0x5a,100);
          TryUnit(&DAT_1000bb00,1,100,100);
        }
      }
      TryUnit(&DAT_1000bcd8,1,0x5a,100);
      iVar8 = GetUnits(&DAT_1000bec8);
      iVar9 = GetReadyUnits(&DAT_1000bec8);
      if (iVar9 == iVar8) {
        iVar8 = GetUnits(&DAT_1000bd90);
        if (iVar8 != 0) {
          TryUnit(&DAT_1000bec8,2,0x32,10);
          TryUnit(&DAT_1000bec8,3,0x14,10);
        }
      }
      iVar8 = GetUnits(&DAT_1000be70);
      if (iVar8 != 0) {
        TryUnit(&DAT_1000bd08,2,10,10);
      }
      TryUnit(&DAT_1000bd10,1,0x5a,10);
    }
  }
  TryUpgrade(&DAT_1000bf30,100,100);
  cVar1 = UpgIsRun(&DAT_1000bf30);
  if (cVar1 != '\0') {
    if (700 < iVar2) {
      if (DAT_1000bce0 == 1) {
        iVar8 = GetUnits(&DAT_1000bd88);
        if (99 < iVar8) {
          TryUnit(&DAT_1000be48,800,0x14,0x3c);
          uVar11 = 800;
          goto LAB_100020c2;
        }
        TryUnit(&DAT_1000bb38,400,0x14,0x28);
        uVar12 = 10;
        uVar11 = 200;
        puVar10 = &DAT_1000bd88;
      }
      else {
        TryUnit(&DAT_1000be48,400,0x14,0x3c);
        uVar11 = 400;
LAB_100020c2:
        uVar12 = 0x14;
        puVar10 = &DAT_1000bb38;
      }
      TryUnit(puVar10,uVar11,uVar12,100);
    }
    if (0xfa < iVar2) {
      TryUnit(&DAT_1000bdf0,1000,100,100);
    }
    if (300 < iVar2) {
      TryUnit(&DAT_1000bf40,400,0x14,100);
      TryUnit(&DAT_1000bf40,400,0x14,100);
      if (1000 < iVar5) {
        TryUnit(&DAT_1000bde8,0x46,100,100);
      }
    }
    TryUpgrade(&DAT_1000bd60,99,100);
    TryUpgrade(&DAT_1000bb28,99,100);
  }
  if (DAT_1000bce0 == 1) {
    iVar8 = GetUnits(&DAT_1000bdf0);
    if (0x2d < iVar8) {
      FUN_10001c40();
    }
  }
  TryUpgrade(&DAT_1000be10,100,100);
  TryUpgrade(&DAT_1000be88,0x62,100);
  TryUpgrade(&DAT_1000bdb0,99,100);
  TryUpgrade(&DAT_1000bd58,99,100);
  TryUpgrade(&DAT_1000bd60,99,100);
  TryUpgrade(&DAT_1000bd48,99,100);
  TryUpgrade(&DAT_1000bd50,99,100);
  TryUpgrade(&DAT_1000bba8,100,100);
  TryUpgrade(&DAT_1000bcd0,99,100);
  cVar1 = UpgIsDone(&DAT_1000be10);
  if (cVar1 != '\0') {
    if (DAT_1000bce0 == 1) {
      TryUnit(&DAT_1000bca8,0x28,10,0x32);
    }
    TryUpgrade(&DAT_1000bdd8,99,100);
    TryUpgrade(&DAT_1000bd98,99,100);
    cVar1 = UpgIsDone(&DAT_1000bd98);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000be58,0x28,10,0x32);
      TryUpgrade(&DAT_1000bc78,99,100);
    }
    TryUpgrade(&DAT_1000bb10,0x5f,100);
    FUN_10001ca0();
    cVar1 = UpgIsDone(&DAT_1000bd80);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000bb30,10,10,0x32);
    }
    cVar1 = UpgIsDone(&DAT_1000bdf8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000bf28,0xc,10,0x32);
    }
    TryUnit(&DAT_1000bca8,0x14,10,0x32);
    FUN_10001b30();
    TryUpgrade(&DAT_1000bd40,0x1e,0x32);
    TryUpgrade(&DAT_1000bd38,0x1e,0x32);
    TryUpgrade(&DAT_1000bd30,0x1e,0x32);
    TryUpgrade(&DAT_1000bd28,0x1e,0x32);
    TryUpgrade(&DAT_1000bd20,0x1e,0x32);
    TryUpgrade(&DAT_1000bd18,0x1e,0x32);
    TryUpgrade(&DAT_1000bdd0,0x1e,0x32);
    TryUpgrade(&DAT_1000bdc8,0x1e,0x32);
    TryUpgrade(&DAT_1000bdc0,0x1e,0x32);
    TryUpgrade(&DAT_1000bdb8,0x1e,0x32);
    TryUpgrade(&DAT_1000bda8,0x1e,0x32);
    TryUpgrade(&DAT_1000bde0,0x1e,0x32);
  }
  TryUnit(&DAT_1000be58,3,0x32,0x32);
  if (DAT_1000bce0 == 1) {
    TryUnit(&DAT_1000bcc0,6,99,10);
    TryUnit(&DAT_1000bcc0,0xc,0x3c,10);
    TryUnit(&DAT_1000bce8,6,0x5a,0x14);
  }
  else {
    TryUnit(&DAT_1000bc98,3,0x5a,0x32);
    TryUnit(&DAT_1000bcc0,6,99,10);
    TryUnit(&DAT_1000bcc0,0xc,0x3c,10);
    TryUnit(&DAT_1000bcc0,0xf,0x32,10);
    TryUnit(&DAT_1000bce8,6,0x5a,0x14);
  }
  iVar8 = GetReadyUnits(&DAT_1000bc80);
  if (iVar8 == 0) goto LAB_10002565;
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
          if (iVar3 < 0x5dd) goto LAB_10002516;
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
LAB_10002516:
  cVar1 = UpgIsDone(&DAT_1000be88);
  if ((cVar1 == '\0') && (800 < iVar5)) {
    if (9000 < iVar6) {
      AI_Torg(5,3,3000);
    }
    if (9000 < iVar7) {
      AI_Torg(4,3,3000);
    }
  }
LAB_10002565:
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    uVar13 = 5;
    uVar12 = 5;
    uVar11 = 0;
  }
  else {
    iVar3 = GetUnits(&DAT_1000bdf0);
    if ((iVar3 < 0x14) && (iVar2 < 2000)) {
      uVar13 = 2;
      uVar12 = 5;
      uVar11 = 10;
    }
    else {
      cVar1 = UpgIsDone(&DAT_1000bd50);
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
  cVar1 = UpgIsDone(&DAT_1000bba8);
  if (cVar1 == '\0') {
    TryUnit(&DAT_1000bce8,3,100,0x32);
  }
  else {
    SetPDistribution(6,7,3);
    TryUnit(&DAT_1000bce8,7,0x46,0x32);
    TryUpgrade(&DAT_1000be60,0x5f,100);
    TryUpgrade(&DAT_1000be68,0x5f,100);
    TryUpgrade(&DAT_1000bcc8,0x5f,100);
    cVar1 = UpgIsDone(&DAT_1000bcc8);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_1000bc88,0x5a,100);
      TryUpgrade(&DAT_1000bcb0,0x5a,100);
      TryUpgrade(&DAT_1000bb08,0x5a,100);
      TryUpgrade(&DAT_1000bca0,0x5a,100);
      return;
    }
  }
  return;
}





void FUN_100026a0(void)

{
  TryUpgrade(&DAT_1000bf08,0x5a,100);
  TryUpgrade(&DAT_1000bf10,0x5a,100);
  TryUpgrade(&DAT_1000bef8,0x5a,100);
  TryUpgrade(&DAT_1000bf00,0x5a,100);
  TryUpgrade(&DAT_1000bf18,0x5a,100);
  TryUpgrade(&DAT_1000bea8,0x5a,100);
  TryUpgrade(&DAT_1000be98,0x5a,100);
  TryUpgrade(&DAT_1000bea0,0x5a,100);
  TryUpgrade(&DAT_1000beb0,0x5a,100);
  TryUpgrade(&DAT_1000beb8,0x5a,100);
  if (DAT_1000bce0 == 1) {
    TryUpgrade(&DAT_1000bcf8,0x50,100);
    TryUpgrade(&DAT_1000be78,0x50,100);
  }
  return;
}





void FUN_10002770(void)

{
  return;
}





void FUN_10002780(void)

{
  TryUpgrade(&DAT_1000be38,0x1e,0x32);
  TryUpgrade(&DAT_1000be28,0x1e,0x32);
  TryUpgrade(&DAT_1000be00,0x1e,0x32);
  TryUpgrade(&DAT_1000bdf8,0x1e,0x32);
  TryUpgrade(&DAT_1000bd68,0x1e,0x32);
  TryUpgrade(&DAT_1000bd70,0x1e,0x32);
  TryUpgrade(&DAT_1000bd78,0x1e,0x32);
  TryUpgrade(&DAT_1000bd80,0x1e,0x32);
  return;
}





void FUN_10002800(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int uVar8;
  int uVar9;
  
  SetMineBalanse(0x13,&DAT_1000a030);
  iVar2 = GetMoney(3);
  GetMoney(0);
  GetMoney(2);
  iVar3 = GetMoney(1);
  GetMoney(5);
  GetMoney(4);
  TryUnit(&DAT_1000bd08,1,100,100);
  iVar4 = GetUnits(&DAT_1000bd08);
  if (iVar4 != 0) {
    TryUnit(&DAT_1000bcf0,2,100,100);
    iVar4 = GetUnits(&DAT_1000bcf0);
    if (iVar4 != 0) {
      TryUnit(&DAT_1000be50,1,100,100);
      TryUnit(&DAT_1000be70,1,100,100);
      iVar4 = GetUnits(&DAT_1000bcd8);
      if (iVar4 != 0) {
        TryUnit(&DAT_1000be70,2,100,100);
        iVar4 = GetUnits(&DAT_1000bcf0);
        if (1 < iVar4) {
          if (1000 < iVar2) {
            TryUnit(&DAT_1000be70,3,100,100);
          }
          TryUnit(&DAT_1000be70,4,0x3c,100);
          TryUnit(&DAT_1000be70,5,0x3c,100);
        }
      }
      TryUnit(&DAT_1000bd00,1,100,100);
      cVar1 = FieldExist();
      if ((cVar1 != '\0') && (0x4b0 < iVar2)) {
        TryUnit(&DAT_1000bd00,3,10,2);
        if (2000 < iVar2) {
          TryUnit(&DAT_1000bd00,5,10,1);
          TryUnit(&DAT_1000bd00,6,3,1);
          TryUnit(&DAT_1000bd00,7,2,1);
        }
        iVar4 = GetUnits(&DAT_1000bdf0);
        if (0x18 < iVar4) {
          TryUnit(&DAT_1000bc80,1,100,100);
        }
      }
      iVar4 = GetUnits(&DAT_1000bcd8);
      if ((iVar4 != 0) && (iVar4 = GetUnits(&DAT_1000be70), 1 < iVar4)) {
        TryUnit(&DAT_1000bd90,2,100,100);
        TryUnit(&DAT_1000bd90,3,0x5a,100);
        TryUnit(&DAT_1000bd90,4,0x5a,100);
        TryUnit(&DAT_1000bd90,5,0x5a,100);
        TryUnit(&DAT_1000bb00,1,100,100);
      }
      TryUnit(&DAT_1000bcd8,1,0x5a,100);
      iVar4 = GetUnits(&DAT_1000bec8);
      iVar5 = GetReadyUnits(&DAT_1000bec8);
      if ((iVar5 == iVar4) && (iVar4 = GetUnits(&DAT_1000bd90), iVar4 != 0)) {
        TryUnit(&DAT_1000bec8,2,0x32,10);
        TryUnit(&DAT_1000bec8,3,0x14,10);
      }
      iVar4 = GetUnits(&DAT_1000be70);
      if (iVar4 != 0) {
        TryUnit(&DAT_1000bd08,2,10,10);
      }
      TryUnit(&DAT_1000bd10,1,0x5a,10);
    }
  }
  TryUpgrade(&DAT_1000bf30,100,100);
  cVar1 = UpgIsRun(&DAT_1000bf30);
  if (cVar1 != '\0') {
    if (700 < iVar2) {
      iVar4 = GetUnits(&DAT_1000be90);
      if (iVar4 < 0x1a4) {
        TryUnit(&DAT_1000bb38,400,0x14,0x28);
        TryUnit(&DAT_1000be90,600,5,100);
      }
      else {
        TryUnit(&DAT_1000be90,600,5,100);
        iVar4 = GetUnits(&DAT_1000bb38);
        if (0xfa < iVar4) {
          TryUnit(&DAT_1000be48,800,0x14,0x3c);
        }
        TryUnit(&DAT_1000bb38,800,0x14,100);
      }
    }
    if (0xfa < iVar2) {
      TryUnit(&DAT_1000bdf0,1000,100,100);
    }
    if (300 < iVar2) {
      TryUnit(&DAT_1000bf40,400,0x14,100);
      TryUnit(&DAT_1000bf40,400,0x14,100);
      if (0x5dc < iVar3) {
        TryUnit(&DAT_1000bde8,0x46,100,100);
      }
    }
    TryUpgrade(&DAT_1000bd60,99,100);
    TryUpgrade(&DAT_1000bb28,99,100);
  }
  iVar3 = GetUnits(&DAT_1000bdf0);
  if (0x2d < iVar3) {
    FUN_10002770();
  }
  TryUpgrade(&DAT_1000be10,100,100);
  TryUpgrade(&DAT_1000be88,0x62,100);
  TryUpgrade(&DAT_1000bdb0,99,100);
  TryUpgrade(&DAT_1000bd58,99,100);
  TryUpgrade(&DAT_1000bd60,99,100);
  TryUpgrade(&DAT_1000bd48,99,100);
  TryUpgrade(&DAT_1000bd50,99,100);
  TryUpgrade(&DAT_1000bba8,100,100);
  cVar1 = UpgIsDone(&DAT_1000be10);
  if (cVar1 != '\0') {
    if (DAT_1000bce0 == 1) {
      TryUnit(&DAT_1000bca8,0x28,10,0x32);
    }
    TryUpgrade(&DAT_1000bb10,0x5f,100);
    FUN_10002780();
    cVar1 = UpgIsDone(&DAT_1000bd80);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000bb30,10,10,0x32);
    }
    cVar1 = UpgIsDone(&DAT_1000bdf8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000bf28,0xc,10,0x32);
    }
    TryUnit(&DAT_1000bca8,0x32,10,0x32);
    TryUpgrade(&DAT_1000bd40,0x1e,0x32);
    TryUpgrade(&DAT_1000bd38,0x1e,0x32);
    TryUpgrade(&DAT_1000bd30,0x1e,0x32);
    TryUpgrade(&DAT_1000bd28,0x1e,0x32);
    TryUpgrade(&DAT_1000bd20,0x1e,0x32);
    TryUpgrade(&DAT_1000bd18,0x1e,0x32);
    TryUpgrade(&DAT_1000bdd0,0x1e,0x32);
    TryUpgrade(&DAT_1000bdc8,0x1e,0x32);
    TryUpgrade(&DAT_1000bdc0,0x1e,0x32);
    TryUpgrade(&DAT_1000bdb8,0x1e,0x32);
    TryUpgrade(&DAT_1000bda8,0x1e,0x32);
    TryUpgrade(&DAT_1000bde0,0x1e,0x32);
  }
  iVar3 = GetUnits(&DAT_1000bdf0);
  if (0x23 < iVar3) {
    FUN_100026a0();
  }
  iVar3 = GetReadyUnits(&DAT_1000bc80);
  if (iVar3 == 0) {
    return;
  }
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
                if (iVar7 < 0x3e9) goto LAB_10002f45;
                uVar9 = 500;
                uVar8 = 1;
              }
              else {
                uVar9 = 800;
                uVar8 = 4;
              }
            }
            else {
              uVar9 = 800;
              uVar8 = 5;
            }
          }
          else {
            uVar9 = 900;
            uVar8 = 0;
          }
        }
        else {
          uVar9 = 3000;
          uVar8 = 0;
        }
      }
      else {
        uVar9 = 900;
        uVar8 = 2;
      }
    }
    else {
      uVar9 = 3000;
      uVar8 = 2;
    }
    AI_Torg(uVar8,3,uVar9);
  }
LAB_10002f45:
  iVar2 = GetReadyUnits(&DAT_1000bcd8);
  if (((iVar2 != 0) && (1000 < iVar7)) && (cVar1 = UpgIsRun(&DAT_1000be88), cVar1 == '\0')) {
    if (3000 < iVar5) {
      AI_Torg(4,3,2000);
    }
    if (4000 < iVar6) {
      AI_Torg(5,3,3000);
    }
  }
  iVar2 = GetMoney(2);
  if (120000 < iVar2) {
    AI_Torg(2,1,100000);
  }
  iVar2 = GetMoney(0);
  if (100000 < iVar2) {
    AI_Torg(0,1,90000);
  }
  iVar2 = GetUnits(&DAT_1000be50);
  if ((iVar2 != 0) && (cVar1 = UpgIsRun(&DAT_1000be10), cVar1 == '\0')) {
    iVar2 = GetMoney(5);
    if ((9000 < iVar2) &&
       ((iVar2 = GetMoney(0), iVar2 != 0 && (iVar2 = GetMoney(1), iVar2 < 4000)))) {
      iVar2 = GetMoney(5);
      if (12000 < iVar2) {
        AI_Torg(5,1,3000);
      }
      iVar2 = GetMoney(4);
      if (8000 < iVar2) {
        AI_Torg(4,1,2000);
      }
      iVar2 = GetMoney(2);
      if (20000 < iVar2) {
        AI_Torg(2,1,12000);
      }
      iVar2 = GetMoney(3);
      if (30000 < iVar2) {
        AI_Torg(3,1,15000);
      }
    }
    iVar2 = GetMoney(5);
    if (((9000 < iVar2) && (iVar2 = GetMoney(1), iVar2 != 0)) &&
       (iVar2 = GetMoney(1), 4000 < iVar2)) {
      iVar2 = GetMoney(5);
      if (12000 < iVar2) {
        AI_Torg(5,4,3000);
      }
      iVar2 = GetMoney(2);
      if (20000 < iVar2) {
        AI_Torg(2,4,12000);
      }
      iVar2 = GetMoney(3);
      if (30000 < iVar2) {
        AI_Torg(3,4,15000);
      }
    }
  }
  iVar2 = GetAIRegister(1);
  if (iVar2 == 0) {
    AI_Torg(5,3,4000);
    SetAIRegister(1,1);
  }
  return;
}





__declspec(dllexport) void InitAI(void)

{
  if (((((((1) &&
          (RegisterUnitType(&DAT_1000bb38,"Pikiner_turki(AL)"), 1)
          ) && (RegisterUnitType(&DAT_1000bdf0,"Krestian_Turki(AL)"),
               1)) &&
        ((RegisterUnitType(&DAT_1000bd88,"Pehota_turki(AL)"), 1 &&
         (RegisterUnitType(&DAT_1000bde8,"Grenader_DIP(AL)"), 1)))
        ) && ((RegisterUnitType(&DAT_1000be48,"Strelec_Algir(AL)"),
              1 &&
              ((RegisterUnitType(&DAT_1000bf40,"Mameluk(AL)"), 1
               && (RegisterUnitType(&DAT_1000bf28,"Pushka(AL)"), 1
                  )))))) &&
      (RegisterUnitType(&DAT_1000bb30,"Mortira(AL)"), 1)) &&
     (RegisterUnitType(&DAT_1000bca8,"Mortira_b(AL)"), 1)) {
    RegisterUnitType(&DAT_1000be58,"Lodka(AL)");
  }
  AssignFormUnit("Pikiner_turki(AL)");
  if ((((1) &&
       (RegisterUnitType(&DAT_1000be90,"Strelec_Algir(AL)"), 1))
      && (RegisterUnitType(&DAT_1000bed8,"Kozak_loshad_DIP(AL)"),
         1)) &&
     (RegisterUnitType(&DAT_1000bb70,"Oficer_turki(AL)"), 1)) {
    RegisterUnitType(&DAT_1000bb20,"Barabanshik_Turki(AL)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_1000be78,"Oficer_turki(AL)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_1000bcf8,"Oficer_turki(AL)SHIELD");
  }
  if (((((1) &&
        (RegisterUnitType(&DAT_1000bcf0,"Center_Algir(AL)"), 1))
       && ((RegisterUnitType(&DAT_1000bd08,"Melnica_tu(AL)"), 1 &&
           (((RegisterUnitType(&DAT_1000be70,"Barack_Turki(AL)"),
             1 &&
             (RegisterUnitType(&DAT_1000bd00,"Sclad4(AL)"), 1)) &&
            (RegisterUnitType(&DAT_1000bcd8,"Minaret(AL)"), 1)))))
       ) && ((RegisterUnitType(&DAT_1000bd90,"Konushnia_Turki(AL)"),
             1 &&
             (RegisterUnitType(&DAT_1000bd10,"Diplomatic_Turki(AL)"),
             1)))) &&
     ((RegisterUnitType(&DAT_1000bb00,"Art_Depo_Turki(AL)"), 1 &&
      (((RegisterUnitType(&DAT_1000bc80,"Rinok_Turki(AL)"), 1 &&
        (RegisterUnitType(&DAT_1000be50,"Kuznia_Turki(AL)"), 1))
       && ((RegisterUnitType(&DAT_1000bda0,"Mechet_Turki(AL)"), 1
           && ((((RegisterUnitType(&DAT_1000bec8,"Port(AL)"), 1 &&
                 (RegisterUnitType(&DAT_1000bce8,"GALERA(AL)"), 1)
                 ) && (RegisterUnitType(&DAT_1000bc98,"PERES_KOR(AL)"),
                      1)) &&
               (RegisterUnitType(&DAT_1000bcc0,"Shebeka(AL)"), 1))
              )))))))) {
    RegisterUnitType(&DAT_1000bf38,"Linkor(AL)");
  }
  if (((((1) &&
        (RegisterUpgrade(&DAT_1000bed0,"AKA29AL"), 1)) &&
       (((RegisterUpgrade(&DAT_1000bcd0,"AKA06AL"), 1 &&
         ((RegisterUpgrade(&DAT_1000bf30,"Melnica_tu(AL)GETRES"),
          1 &&
          (RegisterUpgrade(&DAT_1000bb28,"KUZ01AL"), 1)))) &&
        (RegisterUpgrade(&DAT_1000bf08,"Pikiner_turki(AL)ATTACK"),
        1)))) &&
      (((((RegisterUpgrade(&DAT_1000bf10,"Pikiner_turki(AL)ATTACK3"),
          1 &&
          (RegisterUpgrade(&DAT_1000bef8,"Pikiner_turki(AL)ATTACK4"),
          1)) &&
         (RegisterUpgrade(&DAT_1000bf00,"Pikiner_turki(AL)ATTACK5"),
         1)) &&
        (((RegisterUpgrade(&DAT_1000bf18,"Pikiner_turki(AL)ATTACK6"),
          1 &&
          (RegisterUpgrade(&DAT_1000bea8,"Pikiner_turki(AL)SHIELD"),
          1)) &&
         ((RegisterUpgrade(&DAT_1000be98,"Pikiner_turki(AL)SHIELD3"),
          1 &&
          ((RegisterUpgrade(&DAT_1000bea0,"Pikiner_turki(AL)SHIELD4"),
           1 &&
           (RegisterUpgrade(&DAT_1000beb0,"Pikiner_turki(AL)SHIELD5"),
           1)))))))) &&
       ((RegisterUpgrade(&DAT_1000beb8,"Pikiner_turki(AL)SHIELD6"),
        1 &&
        (((RegisterUpgrade(&DAT_1000bee0,"Pehota_turki(AL)ATTACK"),
          1 &&
          (RegisterUpgrade(&DAT_1000bee8,"Pehota_turki(AL)ATTACK3"),
          1)) &&
         (RegisterUpgrade(&DAT_1000bef0,"Pehota_turki(AL)ATTACK4"),
         1)))))))) &&
     ((((RegisterUpgrade(&DAT_1000be18,"Pehota_turki(AL)SHIELD"),
        1 &&
        (RegisterUpgrade(&DAT_1000be20,"Pehota_turki(AL)SHIELD3"),
        1)) &&
       (((RegisterUpgrade(&DAT_1000be30,"Pehota_turki(AL)SHIELD4"),
         1 &&
         ((RegisterUpgrade(&DAT_1000bd40,"Mameluk(AL)ATTACK"), 1
          && (RegisterUpgrade(&DAT_1000bd38,"Mameluk(AL)ATTACK3"),
             1)))) &&
        (RegisterUpgrade(&DAT_1000bd30,"Mameluk(AL)ATTACK4"), 1))
       )) && ((((((((RegisterUpgrade(&DAT_1000bd28,"Mameluk(AL)ATTACK5"),
                    1 &&
                    (RegisterUpgrade(&DAT_1000bd20,"Mameluk(AL)ATTACK6"),
                    1)) &&
                   (RegisterUpgrade(&DAT_1000bd18,"Mameluk(AL)ATTACK7"),
                   1)) &&
                  ((RegisterUpgrade(&DAT_1000bdd0,"Mameluk(AL)SHIELD"),
                   1 &&
                   (RegisterUpgrade(&DAT_1000bdc8,"Mameluk(AL)SHIELD3"),
                   1)))) &&
                 (RegisterUpgrade(&DAT_1000bdc0,"Mameluk(AL)SHIELD4"),
                 1)) &&
                (((((((RegisterUpgrade(&DAT_1000bdb8,"Mameluk(AL)SHIELD5"),
                      1 &&
                      (RegisterUpgrade(&DAT_1000bda8,"Mameluk(AL)SHIELD6"),
                      1)) &&
                     ((RegisterUpgrade(&DAT_1000bde0,"Mameluk(AL)SHIELD7"),
                      1 &&
                      (((RegisterUpgrade(&DAT_1000be38,"Pushka(AL)BUILD"),
                        1 &&
                        (RegisterUpgrade(&DAT_1000be28,"Pushka(AL)BUILD3"),
                        1)) &&
                       (RegisterUpgrade(&DAT_1000be00,"Pushka(AL)BUILD4"),
                       1)))))) &&
                    ((RegisterUpgrade(&DAT_1000bdf8,"Pushka(AL)BUILD5"),
                     1 &&
                     (RegisterUpgrade(&DAT_1000be08,"Pushka(AL)BUILD6"),
                     1)))) &&
                   (RegisterUpgrade(&DAT_1000bd68,"Mortira(AL)BUILD"),
                   1)) &&
                  (((RegisterUpgrade(&DAT_1000bd70,"Mortira(AL)BUILD3"),
                    1 &&
                    (RegisterUpgrade(&DAT_1000bd78,"Mortira(AL)BUILD4"),
                    1)) &&
                   ((RegisterUpgrade(&DAT_1000bd80,"Mortira(AL)BUILD5"),
                    1 &&
                    (((RegisterUpgrade(&DAT_1000be10,"KUZ03AL"),
                      1 &&
                      (RegisterUpgrade(&DAT_1000bd60,"AKA01AL"),
                      1)) &&
                     (RegisterUpgrade(&DAT_1000bd48,"AKA02AL"), 1
                     )))))))) &&
                 ((((RegisterUpgrade(&DAT_1000bd50,"AKA03AL"), 1
                    && (RegisterUpgrade(&DAT_1000bd58,"AKA04AL"),
                       1)) &&
                   ((RegisterUpgrade(&DAT_1000be88,"AKA08AL"), 1
                    && (((RegisterUpgrade(&DAT_1000bdb0,"AKA23AL"),
                         1 &&
                         (RegisterUpgrade(&DAT_1000bdd8,"AKA24AL"),
                         1)) &&
                        ((RegisterUpgrade(&DAT_1000bcb8,"AKA10AL"),
                         1 &&
                         ((((RegisterUpgrade(&DAT_1000bba8,"AKA30AL"),
                            1 &&
                            (RegisterUpgrade(&DAT_1000bd98,"AKA07AL"),
                            1)) &&
                           (RegisterUpgrade(&DAT_1000bcc8,"AKA20AL"),
                           1)) &&
                          ((RegisterUpgrade(&DAT_1000be60,"KUZ02AL"),
                           1 &&
                           (RegisterUpgrade(&DAT_1000be68,"AKA09AL"),
                           1)))))))))))) &&
                  (RegisterUpgrade(&DAT_1000bc78,"AKA05AL"), 1)))
                 ))) && ((RegisterUpgrade(&DAT_1000bc88,"AKA28AL"),
                         1 &&
                         (RegisterUpgrade(&DAT_1000bb10,"KUZ05AL"),
                         1)))) &&
              ((RegisterUpgrade(&DAT_1000bb08,"AKA16AL"), 1 &&
               (RegisterUpgrade(&DAT_1000bca0,"AKA17AL"), 1))))))
     )) {
    RegisterUpgrade(&DAT_1000bcb0,"AKA27AL");
  }
  SetPDistribution(9,4,4);
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(AL)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(AL)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(AL)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(AL)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(AL)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(AL)INSIDE7",0x32);
  AssignPeasant("Krestian_Turki(AL)");
  AssignMine("shahta(AL)");
  AssignHouse("Dom_Algir(AL)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x104);
  SET_MINE_UPGRADE2_RADIUS(0x82);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}






__declspec(dllexport) void ProcessAI(void)

{
  DAT_1000bce0 = GetLandType();
  DAT_1000bf20 = GetDifficulty();
  if (DAT_1000c0f4 == 0) {
    DAT_1000c0f4 = 10;
    DAT_1000a0c8 = 0x1e;
  }
  else if (DAT_1000c0f4 == 1) {
    DAT_1000c0f4 = 0x1e;
    DAT_1000a0c8 = 0x32;
  }
  else {
    DAT_1000c0f4 = 100;
    DAT_1000a0c8 = 100;
  }
  DAT_1000bc90 = GetStartRes();
  if (DAT_1000bce0 == 0) {
    FUN_10002800();
  }
  else if ((0 < DAT_1000bce0) && (DAT_1000bce0 < 5)) {
    FUN_10001d30();
  }
  FUN_10001000();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
