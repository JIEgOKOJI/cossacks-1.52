/* Auto-generated from Ukraine.c */
#include "game_api.h"

/* AI state variables */
long long DAT_10009030 = 0;
int DAT_100090c8 = 100;
long long DAT_1000aa20 = 0;
long long DAT_1000aa28 = 0;
long long DAT_1000aa38 = 0;
long long DAT_1000aa40 = 0;
long long DAT_1000aa48 = 0;
long long DAT_1000aab0 = 0;
long long DAT_1000ab80 = 0;
long long DAT_1000ab88 = 0;
long long DAT_1000ab90 = 0;
int DAT_1000ab98 = 0;
long long DAT_1000aba0 = 0;
long long DAT_1000aba8 = 0;
long long DAT_1000abb0 = 0;
long long DAT_1000abb8 = 0;
long long DAT_1000abc0 = 0;
int DAT_1000abc8 = 0;
long long DAT_1000abd0 = 0;
long long DAT_1000abd8 = 0;
long long DAT_1000abe0 = 0;
long long DAT_1000abe8 = 0;
long long DAT_1000abf0 = 0;
long long DAT_1000abf8 = 0;
long long DAT_1000ac00 = 0;
long long DAT_1000ac08 = 0;
long long DAT_1000ac10 = 0;
long long DAT_1000ac18 = 0;
long long DAT_1000ac20 = 0;
long long DAT_1000ac28 = 0;
long long DAT_1000ac30 = 0;
long long DAT_1000ac38 = 0;
long long DAT_1000ac40 = 0;
long long DAT_1000ac48 = 0;
long long DAT_1000ac50 = 0;
long long DAT_1000ac58 = 0;
long long DAT_1000ac60 = 0;
long long DAT_1000ac68 = 0;
long long DAT_1000ac70 = 0;
long long DAT_1000ac78 = 0;
long long DAT_1000ac80 = 0;
long long DAT_1000ac88 = 0;
long long DAT_1000ac90 = 0;
long long DAT_1000ac98 = 0;
long long DAT_1000aca0 = 0;
long long DAT_1000aca8 = 0;
long long DAT_1000acb0 = 0;
long long DAT_1000acb8 = 0;
long long DAT_1000acc0 = 0;
long long DAT_1000acc8 = 0;
long long DAT_1000acd0 = 0;
long long DAT_1000acd8 = 0;
long long DAT_1000ace0 = 0;
long long DAT_1000ace8 = 0;
long long DAT_1000acf0 = 0;
long long DAT_1000acf8 = 0;
long long DAT_1000ad00 = 0;
long long DAT_1000ad08 = 0;
long long DAT_1000ad10 = 0;
long long DAT_1000ad18 = 0;
long long DAT_1000ad20 = 0;
long long DAT_1000ad30 = 0;
long long DAT_1000ad38 = 0;
long long DAT_1000ad40 = 0;
long long DAT_1000ad48 = 0;
long long DAT_1000ad50 = 0;
long long DAT_1000ad58 = 0;
long long DAT_1000ad60 = 0;
long long DAT_1000ad68 = 0;
long long DAT_1000ad70 = 0;
long long DAT_1000ad78 = 0;
long long DAT_1000ad80 = 0;
long long DAT_1000ad88 = 0;
long long DAT_1000ad90 = 0;
long long DAT_1000ad98 = 0;
long long DAT_1000ada0 = 0;
long long DAT_1000ada8 = 0;
long long DAT_1000adb0 = 0;
long long DAT_1000adb8 = 0;
long long DAT_1000adc0 = 0;
int DAT_1000adc8 = 0;
long long DAT_1000add0 = 0;
long long DAT_1000add8 = 0;
long long DAT_1000ade0 = 0;
int DAT_1000af94 = 0;

/* Forward declarations */
void ProcessLandAI(void);
static void FUN_10001950(void);
static void FUN_100019f0(void);
static void FUN_10002150(void);
static void FUN_100021f0(void);


void FUN_10001950(void)

{
  TryUpgrade(&DAT_1000adb0,0x3c,100);
  TryUpgrade(&DAT_1000adb8,0x3c,100);
  TryUpgrade(&DAT_1000ada0,0x3c,100);
  TryUpgrade(&DAT_1000ada8,0x3c,100);
  TryUpgrade(&DAT_1000adc0,0x3c,100);
  TryUpgrade(&DAT_1000ad80,0x3c,100);
  TryUpgrade(&DAT_1000ad70,10,100);
  TryUpgrade(&DAT_1000ad78,10,100);
  TryUpgrade(&DAT_1000ad88,10,100);
  TryUpgrade(&DAT_1000ad90,10,100);
  return;
}





void FUN_100019f0(void)

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
  int uVar10;
  
  SetMineBalanse(0x13,&DAT_10009030);
  iVar2 = GetMoney(3);
  iVar3 = GetMoney(0);
  iVar4 = GetMoney(2);
  iVar5 = GetMoney(1);
  GetMoney(5);
  GetMoney(4);
  TryUnit(&DAT_1000abe8,1,100,100);
  iVar6 = GetUnits(&DAT_1000abe8);
  if (iVar6 != 0) {
    TryUnit(&DAT_1000abd8,2,100,100);
    iVar6 = GetUnits(&DAT_1000abd8);
    if (iVar6 != 0) {
      TryUnit(&DAT_1000ad30,1,100,100);
      TryUnit(&DAT_1000ad60,2,100,100);
      iVar6 = GetUnits(&DAT_1000abd8);
      if (1 < iVar6) {
        if (1000 < iVar2) {
          TryUnit(&DAT_1000ad60,3,100,100);
        }
        TryUnit(&DAT_1000ad60,4,0x32,100);
        TryUnit(&DAT_1000ad60,5,0x1e,100);
      }
      TryUnit(&DAT_1000abe0,1,100,100);
      TryUnit(&DAT_1000ab88,1,100,100);
      TryUnit(&DAT_1000ac68,2,100,100);
      TryUnit(&DAT_1000ac68,3,0x5a,100);
      TryUnit(&DAT_1000ac68,4,0x5a,100);
      TryUnit(&DAT_1000ac68,5,0x5a,100);
      TryUnit(&DAT_1000aa20,1,100,100);
      TryUnit(&DAT_1000abc0,1,0x5a,100);
      iVar6 = GetUnits(&DAT_1000ad98);
      iVar7 = GetReadyUnits(&DAT_1000ad98);
      if (iVar7 == iVar6) {
        TryUnit(&DAT_1000ad98,2,0x32,10);
        TryUnit(&DAT_1000ad98,3,0x14,10);
      }
      iVar6 = GetUnits(&DAT_1000ad60);
      if (iVar6 != 0) {
        TryUnit(&DAT_1000abe8,2,10,10);
      }
      TryUnit(&DAT_1000abf0,1,0x5a,10);
    }
  }
  TryUpgrade(&DAT_1000add8,100,100);
  TryUpgrade(&DAT_1000ac80,99,100);
  cVar1 = UpgIsRun(&DAT_1000add8);
  if (cVar1 == '\0') goto LAB_10001d2c;
  if (700 < iVar2) {
    TryUnit(&DAT_1000aa48,500,0x14,100);
  }
  if (200 < iVar2) {
    TryUnit(&DAT_1000acf0,1000,100,100);
  }
  if (300 < iVar2) {
    TryUnit(&DAT_1000acf0,1000,100,100);
    TryUnit(&DAT_1000ade0,600,0x14,100);
    TryUnit(&DAT_1000ade0,600,0x14,100);
    if (DAT_1000abc8 == 0) {
      if ((1000 < iVar5) && (iVar6 = GetUnits(&DAT_1000aba0), iVar6 != 0)) {
LAB_10001cf7:
        TryUnit(&DAT_1000acc8,0x46,100,100);
      }
    }
    else if (1000 < iVar5) goto LAB_10001cf7;
  }
  TryUpgrade(&DAT_1000ac40,99,100);
  TryUpgrade(&DAT_1000aa38,99,100);
LAB_10001d2c:
  TryUpgrade(&DAT_1000ad10,100,100);
  cVar1 = UpgIsDone(&DAT_1000ac80);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_1000ad68,99,100);
    TryUpgrade(&DAT_1000ac90,99,100);
  }
  TryUpgrade(&DAT_1000ac38,99,100);
  TryUpgrade(&DAT_1000aab0,100,100);
  cVar1 = UpgIsDone(&DAT_1000ad10);
  if (cVar1 != '\0') {
    if (DAT_1000abc8 == 1) {
      TryUnit(&DAT_1000aba8,0x28,10,0x32);
    }
    TryUpgrade(&DAT_1000acb8,99,100);
    TryUpgrade(&DAT_1000ac70,99,100);
    cVar1 = UpgIsDone(&DAT_1000ac70);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000ad38,0x28,10,0x32);
      TryUpgrade(&DAT_1000ab80,99,100);
      TryUpgrade(&DAT_1000ac40,99,100);
      TryUpgrade(&DAT_1000ac28,99,100);
      TryUpgrade(&DAT_1000ac30,99,100);
    }
    TryUpgrade(&DAT_1000ad50,0x5f,100);
    TryUpgrade(&DAT_1000ad58,0x5f,100);
    TryUpgrade(&DAT_1000aa28,0x5f,100);
    FUN_100021f0();
    cVar1 = UpgIsDone(&DAT_1000ac60);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000aa40,10,10,0x32);
    }
    cVar1 = UpgIsDone(&DAT_1000acf8);
    if (cVar1 != '\0') {
      if (8000 < iVar5) {
        TryUnit(&DAT_1000add0,10,0x14,0x32);
      }
      if (30000 < iVar5) {
        TryUnit(&DAT_1000add0,0x14,0x14,0x32);
      }
    }
    TryUnit(&DAT_1000aba8,0x14,10,0x32);
    FUN_10001950();
    TryUpgrade(&DAT_1000ac20,0x1e,0x32);
    TryUpgrade(&DAT_1000ac18,0x1e,0x32);
    TryUpgrade(&DAT_1000ac10,0x1e,0x32);
    TryUpgrade(&DAT_1000ac08,0x1e,0x32);
    TryUpgrade(&DAT_1000ac00,0x1e,0x32);
    TryUpgrade(&DAT_1000abf8,0x1e,0x32);
    TryUpgrade(&DAT_1000acb0,0x1e,0x32);
    TryUpgrade(&DAT_1000aca8,0x1e,0x32);
    TryUpgrade(&DAT_1000aca0,0x1e,0x32);
    TryUpgrade(&DAT_1000ac98,0x1e,0x32);
    TryUpgrade(&DAT_1000ac88,0x1e,0x32);
    TryUpgrade(&DAT_1000acc0,0x1e,0x32);
    cVar1 = UpgIsDone(&DAT_1000adc0);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_1000acd0,0x28,0x14);
      TryUpgrade(&DAT_1000ace0,0x28,0x14);
      TryUpgrade(&DAT_1000ace8,0x28,0x14);
      TryUpgrade(&DAT_1000acd8,0x28,0x14);
    }
  }
  TryUnit(&DAT_1000ad38,3,0x32,100);
  if (DAT_1000abc8 != 1) {
    TryUnit(&DAT_1000aba0,3,0x5a,100);
  }
  iVar6 = GetReadyUnits(&DAT_1000ab88);
  if (iVar6 != 0) {
    if ((0x9c4 < iVar5) && (cVar1 = UpgIsDone(&DAT_1000ac80), cVar1 == '\0')) {
      AI_Torg(1,3,500);
    }
    if (100000 < iVar4) {
      AI_Torg(2,1,90000);
    }
    if (1000000 < iVar3) {
      AI_Torg(0,1,90000);
    }
  }
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    uVar10 = 5;
    uVar9 = 5;
    uVar8 = 0;
  }
  else {
    iVar3 = GetUnits(&DAT_1000acf0);
    if ((iVar3 < 0x14) && (iVar2 < 2000)) {
      uVar10 = 2;
      uVar9 = 2;
      uVar8 = 10;
    }
    else {
      cVar1 = UpgIsDone(&DAT_1000ac80);
      if (cVar1 == '\0') {
        uVar10 = 2;
        uVar9 = 4;
        uVar8 = 10;
      }
      else {
        uVar10 = 3;
        uVar9 = 6;
        uVar8 = 7;
      }
    }
  }
  SetPDistribution(uVar8,uVar9,uVar10);
  cVar1 = UpgIsDone(&DAT_1000aab0);
  if (cVar1 == '\0') {
    TryUnit(&DAT_1000abd0,3,100,0x32);
    return;
  }
  SetPDistribution(6,7,3);
  TryUnit(&DAT_1000abd0,7,0x46,0x32);
  return;
}





void FUN_10002150(void)

{
  TryUpgrade(&DAT_1000adb0,0x3c,100);
  TryUpgrade(&DAT_1000adb8,0x3c,100);
  TryUpgrade(&DAT_1000ada0,0x3c,100);
  TryUpgrade(&DAT_1000ada8,0x46,100);
  TryUpgrade(&DAT_1000adc0,0x46,100);
  TryUpgrade(&DAT_1000ad80,0x3c,100);
  TryUpgrade(&DAT_1000ad70,0x3c,100);
  TryUpgrade(&DAT_1000ad78,0x3c,100);
  TryUpgrade(&DAT_1000ad88,0x14,100);
  TryUpgrade(&DAT_1000ad90,10,100);
  return;
}





void FUN_100021f0(void)

{
  TryUpgrade(&DAT_1000ad20,0x1e,0x32);
  TryUpgrade(&DAT_1000ad18,0x1e,0x32);
  TryUpgrade(&DAT_1000ad00,0x1e,0x32);
  TryUpgrade(&DAT_1000acf8,0x1e,0x32);
  TryUpgrade(&DAT_1000ac48,0x1e,0x32);
  TryUpgrade(&DAT_1000ac50,0x1e,0x32);
  TryUpgrade(&DAT_1000ac58,0x1e,0x32);
  TryUpgrade(&DAT_1000ac60,0x1e,0x32);
  return;
}





__declspec(dllexport) void ProcessLandAI(void)

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
  SetMineBalanse(0x13,&DAT_10009030);
  iVar2 = GetMoney(3);
  iVar3 = GetMoney(0);
  iVar4 = GetMoney(2);
  iVar5 = GetMoney(1);
  iVar6 = GetMoney(5);
  iVar7 = GetMoney(4);
  TryUnit(&DAT_1000abe8,1,100,100);
  iVar8 = GetUnits(&DAT_1000abe8);
  if (iVar8 != 0) {
    TryUnit(&DAT_1000abd8,2,100,100);
    iVar8 = GetUnits(&DAT_1000abd8);
    if (iVar8 != 0) {
      TryUnit(&DAT_1000ad30,1,100,100);
      TryUnit(&DAT_1000ad60,2,100,100);
      iVar8 = GetUnits(&DAT_1000abd8);
      if (1 < iVar8) {
        if (1000 < iVar2) {
          TryUnit(&DAT_1000ad60,3,100,100);
        }
        TryUnit(&DAT_1000ad60,4,0x32,100);
        TryUnit(&DAT_1000ad60,5,0x1e,100);
        TryUnit(&DAT_1000ac68,2,100,100);
        TryUnit(&DAT_1000ac68,3,0x5a,100);
        TryUnit(&DAT_1000ac68,4,0x5a,100);
        TryUnit(&DAT_1000ac68,5,0x5a,100);
        TryUnit(&DAT_1000aa20,1,100,100);
      }
      TryUnit(&DAT_1000abe0,1,100,100);
      if ((700 < iVar2) || (5000 < iVar5)) {
        TryUnit(&DAT_1000ab88,1,100,100);
        TryUnit(&DAT_1000abc0,1,0x5a,100);
      }
      iVar8 = GetUnits(&DAT_1000ad60);
      if (iVar8 != 0) {
        TryUnit(&DAT_1000abe8,2,10,10);
      }
      TryUnit(&DAT_1000abf0,1,0x5a,10);
    }
  }
  TryUpgrade(&DAT_1000add8,100,100);
  TryUpgrade(&DAT_1000ac80,99,100);
  cVar1 = UpgIsRun(&DAT_1000add8);
  if (cVar1 != '\0') {
    if (700 < iVar2) {
      TryUnit(&DAT_1000aa48,500,100,100);
    }
    if (200 < iVar2) {
      TryUnit(&DAT_1000acf0,1000,100,100);
    }
    if (300 < iVar2) {
      TryUnit(&DAT_1000acf0,1000,100,100);
      TryUnit(&DAT_1000ade0,600,0x14,100);
      TryUnit(&DAT_1000ade0,600,0x14,100);
      if (1000 < iVar5) {
        TryUnit(&DAT_1000acc8,0x46,100,100);
      }
    }
    TryUpgrade(&DAT_1000ac40,99,100);
    TryUpgrade(&DAT_1000aa38,99,100);
  }
  TryUpgrade(&DAT_1000ad10,100,100);
  cVar1 = UpgIsDone(&DAT_1000ac80);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_1000ad68,99,100);
    TryUpgrade(&DAT_1000ac90,99,100);
  }
  TryUpgrade(&DAT_1000ac38,99,100);
  cVar1 = UpgIsDone(&DAT_1000ad10);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_1000acb8,99,100);
    TryUpgrade(&DAT_1000ac40,99,100);
    TryUpgrade(&DAT_1000ac28,99,100);
    TryUpgrade(&DAT_1000ac30,99,100);
    TryUpgrade(&DAT_1000ad50,0x5f,100);
    TryUpgrade(&DAT_1000ad58,0x5f,100);
    TryUpgrade(&DAT_1000aa28,0x5f,100);
    FUN_100021f0();
    cVar1 = UpgIsDone(&DAT_1000ac60);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000aa40,10,10,0x32);
    }
    cVar1 = UpgIsDone(&DAT_1000acf8);
    if (cVar1 != '\0') {
      if (8000 < iVar5) {
        TryUnit(&DAT_1000add0,10,0x14,0x32);
      }
      if (30000 < iVar5) {
        TryUnit(&DAT_1000add0,0x14,0x14,0x32);
      }
    }
    TryUnit(&DAT_1000aba8,0x14,10,0x32);
    FUN_10002150();
    TryUpgrade(&DAT_1000ac20,0x3c,0x32);
    TryUpgrade(&DAT_1000ac18,0x3c,0x32);
    TryUpgrade(&DAT_1000ac10,0x3c,0x32);
    TryUpgrade(&DAT_1000ac08,0x3c,0x32);
    TryUpgrade(&DAT_1000ac00,0x3c,0x32);
    TryUpgrade(&DAT_1000abf8,0x3c,0x32);
    TryUpgrade(&DAT_1000acb0,0x1e,0x32);
    TryUpgrade(&DAT_1000aca8,0x1e,0x32);
    TryUpgrade(&DAT_1000aca0,0x1e,0x32);
    TryUpgrade(&DAT_1000ac98,0x1e,0x32);
    TryUpgrade(&DAT_1000ac88,0x1e,0x32);
    TryUpgrade(&DAT_1000acc0,0x1e,0x32);
    cVar1 = UpgIsDone(&DAT_1000adc0);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_1000acd0,0x28,0x14);
      TryUpgrade(&DAT_1000ace0,0x28,0x14);
      TryUpgrade(&DAT_1000ace8,0x28,0x14);
      TryUpgrade(&DAT_1000acd8,0x28,0x14);
    }
  }
  iVar8 = GetReadyUnits(&DAT_1000ab88);
  if (iVar8 == 0) goto LAB_10002913;
  if (0x9c4 < iVar5) {
    cVar1 = UpgIsDone(&DAT_1000ac80);
    if (cVar1 == '\0') {
      AI_Torg(1,3,500);
    }
  }
  if (100000 < iVar4) {
    AI_Torg(2,1,90000);
  }
  if (1000000 < iVar3) {
    AI_Torg(0,1,90000);
  }
  if (499 < iVar2) goto LAB_10002913;
  cVar1 = FieldExist();
  if (cVar1 == '\0') goto LAB_10002913;
  if (20000 < iVar6) {
    uVar10 = 3000;
    goto LAB_10002907;
  }
  if (iVar7 < 0x4e21) {
    if (iVar5 < 0x3a99) {
      if (iVar4 < 0x11171) {
        if (iVar3 < 0x9c41) {
          if (iVar7 < 0x2711) {
            if (iVar6 < 0x2711) {
              if (2000 < iVar7) {
                uVar10 = 900;
                uVar9 = 4;
                goto LAB_1000290b;
              }
              if (iVar6 < 0x7d1) goto LAB_10002913;
              uVar10 = 900;
            }
            else {
              uVar10 = 1000;
            }
LAB_10002907:
            uVar9 = 5;
          }
          else {
            uVar10 = 1000;
            uVar9 = 4;
          }
        }
        else {
          uVar10 = 10000;
          uVar9 = 0;
        }
      }
      else {
        uVar10 = 30000;
        uVar9 = 2;
      }
    }
    else {
      uVar10 = 3000;
      uVar9 = 1;
    }
  }
  else {
    uVar10 = 3000;
    uVar9 = 4;
  }
LAB_1000290b:
  AI_Torg(uVar9,3,uVar10);
LAB_10002913:
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    SetPDistribution(0,5,5);
    return;
  }
  iVar3 = GetUnits(&DAT_1000acf0);
  if ((iVar3 < 0x14) && (iVar2 < 2000)) {
    SetPDistribution(10,2,2);
    return;
  }
  cVar1 = UpgIsDone(&DAT_1000ac80);
  if (cVar1 == '\0') {
    SetPDistribution(10,4,2);
    return;
  }
  SetPDistribution(7,6,3);
  return;
}





__declspec(dllexport) void InitAI(void)

{
  if (1) {
    RegisterUnitType(&DAT_1000aa48,"Kozacki_Strelec(UA)");
    if (1) {
      RegisterUnitType(&DAT_1000acf0,"Kres_ukranian(UA)");
      if (1) {
        RegisterUnitType(&DAT_1000acc8,"Grenader_DIP(UA)");
        if (1) {
          RegisterUnitType(&DAT_1000ade0,"Kozak_pikiner(UA)");
          if (1) {
            RegisterUnitType(&DAT_1000add0,"Pushka(UA)");
            if (1) {
              RegisterUnitType(&DAT_1000aa40,"Mortira(UA)");
              if (1) {
                RegisterUnitType(&DAT_1000aba8,"Mortira_b(UA)");
                if (1) {
                  RegisterUnitType(&DAT_1000ad38,"Lodka(UA)");
                  if (1) {
                    RegisterUnitType(&DAT_1000abd8,"CenterUR(UA)");
                    if (1) {
                      RegisterUnitType(&DAT_1000abe8,"Melnica_rus(UA)");
                      if (1) {
                        RegisterUnitType(&DAT_1000ad60,"Strelcovaia_Izba(UA)");
                        if (1) {
                          RegisterUnitType(&DAT_1000abe0,"Sclad3(UA)");
                          if (1) {
                            RegisterUnitType(&DAT_1000abc0,"akademia_UA(UA)");
                            if (1) {
                              RegisterUnitType(&DAT_1000ac68,"konushnia_ua(UA)");
                              if (1) {
                                RegisterUnitType(&DAT_1000abf0,"Dip_korpus_UA(UA)");
                                if (1) {
                                  RegisterUnitType(&DAT_1000aa20,"artileri_depo_UA(UA)");
                                  if (1) {
                                    RegisterUnitType(&DAT_1000ab88,"Rinok(UA)");
                                    if (1) {
                                      RegisterUnitType(&DAT_1000ad30,"Kuznica_ua(UA)");
                                      if (1) {
                                        RegisterUnitType(&DAT_1000ac78,"Cerkov_UA(UA)");
                                        if (1) {
                                          RegisterUnitType(&DAT_1000ad98,"Poru(UA)");
                                          if (1) {
                                            RegisterUnitType(&DAT_1000abd0,"GALERA(UA)");
                                            if (1) {
                                              RegisterUnitType(&DAT_1000aba0,"PERES_KOR(UA)"
                                                             );
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
    RegisterUpgrade(&DAT_1000add8,"Melnica_rus(UA)GETRES");
    if (1) {
      RegisterUpgrade(&DAT_1000ac80,"Melnica_rus(UA)GETRES2");
      if (1) {
        RegisterUpgrade(&DAT_1000aa38,"KUZ01UA");
        if (1) {
          RegisterUpgrade(&DAT_1000adb0,"Kozacki_Strelec(UA)ATTACK");
          if (1) {
            RegisterUpgrade(&DAT_1000adb8,"Kozacki_Strelec(UA)ATTACK3");
            if (1) {
              RegisterUpgrade(&DAT_1000ada0,"Kozacki_Strelec(UA)ATTACK4");
              if (1) {
                RegisterUpgrade(&DAT_1000ada8,"Kozacki_Strelec(UA)ATTACK5");
                if (1) {
                  RegisterUpgrade(&DAT_1000adc0,"Kozacki_Strelec(UA)ATTACK6");
                  if (1) {
                    RegisterUpgrade(&DAT_1000ad80,"Kozacki_Strelec(UA)SHIELD");
                    if (1) {
                      RegisterUpgrade(&DAT_1000ad70,"Kozacki_Strelec(UA)SHIELD3");
                      if (1) {
                        RegisterUpgrade(&DAT_1000ad78,"Kozacki_Strelec(UA)SHIELD4");
                        if (1) {
                          RegisterUpgrade(&DAT_1000ad88,"Kozacki_Strelec(UA)SHIELD5");
                          if (1) {
                            RegisterUpgrade(&DAT_1000ad90,"Kozacki_Strelec(UA)SHIELD6");
                            if (1) {
                              RegisterUpgrade(&DAT_1000ac20,"Kozak_pikiner(UA)ATTACK");
                              if (1) {
                                RegisterUpgrade(&DAT_1000ac18,"Kozak_pikiner(UA)ATTACK3");
                                if (1) {
                                  RegisterUpgrade(&DAT_1000ac10,"Kozak_pikiner(UA)ATTACK4")
                                  ;
                                  if (1) {
                                    RegisterUpgrade(&DAT_1000ac08,
                                                    "Kozak_pikiner(UA)ATTACK5");
                                    if (1) {
                                      RegisterUpgrade(&DAT_1000ac00,
                                                      "Kozak_pikiner(UA)ATTACK6");
                                      if (1) {
                                        RegisterUpgrade(&DAT_1000abf8,
                                                        "Kozak_pikiner(UA)ATTACK7");
                                        if (1) {
                                          RegisterUpgrade(&DAT_1000acb0,
                                                          "Kozak_pikiner(UA)SHIELD");
                                          if (1) {
                                            RegisterUpgrade(&DAT_1000aca8,
                                                            "Kozak_pikiner(UA)SHIELD3");
                                            if (1) {
                                              RegisterUpgrade(&DAT_1000aca0,
                                                              "Kozak_pikiner(UA)SHIELD4");
                                              if (1) {
                                                RegisterUpgrade(&DAT_1000ac98,
                                                                "Kozak_pikiner(UA)SHIELD5")
                                                ;
                                                if (1) {
                                                  RegisterUpgrade(&DAT_1000ac88,
                                                                                                                                    
                                                  "Kozak_pikiner(UA)SHIELD6");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_1000acc0,
                                                                                                                                        
                                                  "Kozak_pikiner(UA)SHIELD7");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_1000ad20,
                                                                    "Pushka(UA)BUILD");
                                                    if (1) {
                                                      RegisterUpgrade(&DAT_1000ad18,
                                                                      "Pushka(UA)BUILD3");
                                                      if (1) {
                                                        RegisterUpgrade(&DAT_1000ad00,
                                                                        "Pushka(UA)BUILD4")
                                                        ;
                                                        if (1) {
                                                          RegisterUpgrade(&DAT_1000acf8,
                                                                                                                                                    
                                                  "Pushka(UA)BUILD5");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_1000ad08,
                                                                    "Pushka(UA)BUILD6");
                                                    if (1) {
                                                      RegisterUpgrade(&DAT_1000ac48,
                                                                      "Mortira(UA)BUILD");
                                                      if (1) {
                                                        RegisterUpgrade(&DAT_1000ac50,
                                                                        "Mortira(UA)BUILD3"
                                                                       );
                                                        if (1) {
                                                          RegisterUpgrade(&DAT_1000ac58,
                                                                                                                                                    
                                                  "Mortira(UA)BUILD4");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_1000ac60,
                                                                    "Mortira(UA)BUILD5");
                                                    if (1) {
                                                      RegisterUpgrade(&DAT_1000ad10,
                                                                      "KUZ03UA");
                                                      if (1) {
                                                        RegisterUpgrade(&DAT_1000ac40,
                                                                        "AKA01UA");
                                                        if (1) {
                                                          RegisterUpgrade(&DAT_1000ac28,
                                                                          "AKA02UA");
                                                          if (1) {
                                                            RegisterUpgrade(&DAT_1000ac30,
                                                                            "AKA03UA");
                                                            if (1) {
                                                              RegisterUpgrade(&DAT_1000ac38,
                                                                              "AKA04UA");
                                                              if (1) {
                                                                RegisterUpgrade(&DAT_1000ad68,
                                                                                "AKA08UA");
                                                                if (1) {
                                                                  RegisterUpgrade(&DAT_1000ac90,
                                                                                  "AKA23UA"
                                                                                 );
                                                                  if (1) {
                                                                    RegisterUpgrade(&DAT_1000acb8,
                                                                                                                                                                        
                                                  "AKA24UA");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_1000ad50,"AKA31UA"
                                                                   );
                                                    if (1) {
                                                      RegisterUpgrade(&DAT_1000ad58,
                                                                      "AKA33UA");
                                                      if (1) {
                                                        RegisterUpgrade(&DAT_1000acd0,
                                                                        "AKA12UA");
                                                        if (1) {
                                                          RegisterUpgrade(&DAT_1000ace0,
                                                                          "AKA13UA");
                                                          if (1) {
                                                            RegisterUpgrade(&DAT_1000ace8,
                                                                            "AKA14UA");
                                                            if (1) {
                                                              RegisterUpgrade(&DAT_1000acd8,
                                                                              "AKA15UA");
                                                              if (1) {
                                                                RegisterUpgrade(&DAT_1000abb0,
                                                                                "AKA10UA");
                                                                if (1) {
                                                                  RegisterUpgrade(&DAT_1000aab0,
                                                                                  "AKA30UA"
                                                                                 );
                                                                  if (1) {
                                                                    RegisterUpgrade(&DAT_1000ac70,
                                                                                                                                                                        
                                                  "AKA07UA");
                                                  if (1) {
                                                    RegisterUpgrade(&DAT_1000abb8,"AKA20UA"
                                                                   );
                                                    if (1) {
                                                      RegisterUpgrade(&DAT_1000ad40,
                                                                      "KUZ02UA");
                                                      if (1) {
                                                        RegisterUpgrade(&DAT_1000ad48,
                                                                        "AKA09UA");
                                                        if (1) {
                                                          RegisterUpgrade(&DAT_1000ab80,
                                                                          "AKA05UA");
                                                          if (1) {
                                                            RegisterUpgrade(&DAT_1000ab90,
                                                                            "AKA28UA");
                                                            if (1) {
                                                              RegisterUpgrade(&DAT_1000aa28,
                                                                              "KUZ05UA");
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
  AssignMineUpgrade(0,"shahta(UA)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(UA)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(UA)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(UA)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(UA)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(UA)INSIDE7",0x32);
  AssignPeasant("Kres_ukranian(UA)");
  AssignMine("shahta(UA)");
  AssignHouse("Ukrainska_hata(UA)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x104);
  SET_MINE_UPGRADE2_RADIUS(0x82);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}






__declspec(dllexport) void ProcessAI(void)

{
  DAT_1000abc8 = GetLandType();
  DAT_1000adc8 = GetDifficulty();
  if (DAT_1000af94 == 0) {
    DAT_1000af94 = 10;
    DAT_100090c8 = 0x1e;
  }
  else if (DAT_1000af94 == 1) {
    DAT_1000af94 = 0x1e;
    DAT_100090c8 = 0x32;
  }
  else {
    DAT_1000af94 = 100;
    DAT_100090c8 = 100;
  }
  DAT_1000ab98 = GetStartRes();
  if (DAT_1000abc8 != 0) {
    if ((0 < DAT_1000abc8) && (DAT_1000abc8 < 5)) {
      FUN_100019f0();
      return;
    }
    return;
  }
  ProcessLandAI();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
