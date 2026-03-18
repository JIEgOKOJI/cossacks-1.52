#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
int this_ptr = 0;
long long DAT_10012c88 = 0;
long long DAT_10012cf8 = 0;
unsigned char DAT_10012cfc[60] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10012d38 = 0;
long long DAT_10012d40 = 0;
long long DAT_10012d48 = 0;
long long DAT_10012d50 = 0;
long long DAT_10012d58 = 0;
long long DAT_10012d60 = 0;
long long DAT_10012d68 = 0;
long long DAT_10012d70 = 0;
long long DAT_10012d78 = 0;
long long DAT_10012d80 = 0;
long long DAT_10012d88 = 0;
long long DAT_10012d90 = 0;
long long DAT_10012d98 = 0;
long long DAT_10012da0 = 0;
long long DAT_10012da8 = 0;
long long DAT_10012db8 = 0;
long long DAT_10013060 = 0;
long long DAT_10013068 = 0;
long long DAT_10013070 = 0;
long long DAT_10013078 = 0;
long long DAT_10013080 = 0;
long long DAT_10013088 = 0;
long long DAT_10013090 = 0;
long long DAT_10013098 = 0;
long long DAT_100130a0 = 0;
long long DAT_100130a8 = 0;
long long DAT_100130b0 = 0;
long long DAT_100130b8 = 0;
long long DAT_100130c0 = 0;
long long DAT_100130c8 = 0;
long long DAT_100224f8 = 0;
long long DAT_10022500 = 0;
long long DAT_10022508 = 0;
long long DAT_10022510 = 0;
long long DAT_10022518 = 0;
long long DAT_10022528 = 0;
long long DAT_10022530 = 0;
long long DAT_10022538 = 0;
long long DAT_10022540 = 0;
long long DAT_10022548 = 0;
long long DAT_10022550 = 0;
long long DAT_10022558 = 0;
long long DAT_10022560 = 0;
long long DAT_10022568 = 0;
long long DAT_10022570 = 0;
long long DAT_100225e8 = 0;
long long DAT_10022660 = 0;
long long DAT_100226d8 = 0;
long long DAT_10022750 = 0;
long long DAT_10022758 = 0;
long long DAT_10022760 = 0;
long long DAT_10022768 = 0;
long long DAT_10022770 = 0;
long long DAT_10022778 = 0;
long long DAT_10022780 = 0;
long long DAT_10022788 = 0;
long long DAT_10022790 = 0;
long long DAT_10022798 = 0;
long long DAT_100227a0 = 0;
long long DAT_100227a8 = 0;
long long DAT_100227b0 = 0;
long long DAT_100227b8 = 0;
long long DAT_100227c0 = 0;
long long DAT_100227c8 = 0;
long long DAT_100227d0 = 0;
long long DAT_100227d8 = 0;
long long DAT_10022850 = 0;
long long DAT_100228c8 = 0;
long long DAT_10022940 = 0;
long long DAT_10022948 = 0;
long long DAT_10022950 = 0;
int DAT_1002295a = 0;
int DAT_1002295e = 0;
int DAT_10022962 = 0;
int DAT_10022966 = 0;
int DAT_1002296a = 0;
int DAT_1002296e = 0;
int DAT_10022972 = 0;
long long DAT_10022978 = 0;
long long DAT_10022980 = 0;
long long DAT_10022988 = 0;
long long DAT_10022990 = 0;
long long DAT_10022998 = 0;
long long DAT_100229a0 = 0;
long long DAT_10026698 = 0;
long long DAT_100266a0 = 0;
long long DAT_100266a8 = 0;
long long DAT_100266b0 = 0;
long long DAT_100266bc = 0;
long long DAT_100266c4 = 0;
long long DAT_100266e8 = 0;
long long DAT_100266f8 = 0;
int DAT_10027e6c = 0;
int DAT_10027e70 = 0;
int DAT_100266f8_ovl = 0;

/* Stubs for missing internal functions */
int FUN_100038ca() { return 0; }
int FUN_1000391a() { return 0; }
int FUN_100040a9() { return 0; }
int FUN_100040b2() { return 0; }
int FUN_100040d5() { return 0; }
int FUN_10004404() { return 0; }
int FUN_1000aefc() { return 0; }


/* Forward declarations */
int FUN_10001000(int param_1,int param_2,int param_3);
void FUN_10001910(int param_1);
void FUN_10001950(int param_1);
void FUN_10001980(void *param_1);
void FUN_100019d0(void *param_1);
void FUN_10001a20(void *param_1);
void FUN_10002a30(void);
void FUN_10002a40(void);
void 
FUN_10002ad0(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void  FUN_10002b80(void *this_ptr,int param_1);
void  FUN_10002b90(void *this_ptr,int param_1);
void  FUN_10002ba0(void *this_ptr,int param_1);
void  FUN_10002bb0(void *this_ptr,int param_1);
void  FUN_10002bc0(void *this_ptr,int *param_1,int param_2,int param_3);
void  FUN_10002be0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10002c10(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10002c40(void *this_ptr,int *param_1,int param_2,int param_3);
void  FUN_10002c60(void *this_ptr,int param_1);
void  FUN_10002c70(void *this_ptr,int param_1);
void  FUN_10002c80(void *this_ptr,int param_1);
void  FUN_10002c90(void *this_ptr,int param_1);
void  FUN_10002ca0(void *this_ptr,int *param_1);
BOOL  FUN_10002cc0(int param_1);
int  FUN_10002ce0(int param_1);
int  FUN_10002de0(int param_1);
void  FUN_10002e10(void *this_ptr,int param_1,int param_2);
void  FUN_10002ec0(void *this_ptr,int param_1,int param_2);
void  FUN_10002f70(void *this_ptr,int param_1,int param_2);
void  FUN_10003020(void *this_ptr,int param_1,int param_2);
void  FUN_100030d0(int param_1);
void  FUN_10003100(int *param_1);
void  FUN_10003160(void *this_ptr,int *param_1);
void  FUN_10003180(void *this_ptr,int *param_1,int *param_2);
int  FUN_100031d0(void *this_ptr,int param_1);
void  FUN_10003220(int param_1);
int *  FUN_100032c0(int *param_1);
BOOL  FUN_100032f0(int param_1);
int  FUN_10003310(int *param_1);
int *  FUN_10003390(int *param_1);
int *  FUN_100033a0(void *this_ptr,int param_1,int param_2);
int  FUN_100033e0(void *this_ptr,char param_1);
int *  FUN_10003420(int *param_1);
int *  FUN_100034a0(int *param_1);
int  FUN_100034c0(int param_1);
void FUN_100034e0(void);
void FUN_100034f8(void);
int FUN_10003662(int param_1);
int FUN_100036e0(int param_1);

void OnInit();
void ProcessScenary();


int __cdecl FUN_10001000(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = GetUnitsAmount1(param_2,param_1);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 8;
    } while (iVar2 < param_3);
  }
  return iVar2;
}





void __cdecl FUN_10001910(int param_1)

{
  if (*(int *)(((unsigned char *)&DAT_10012cfc) + param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(((unsigned char *)&DAT_10012cf8) + param_1 * 8);
  }
  SaveSelectedUnits(param_1,((unsigned char *)&DAT_10012cf8) + param_1 * 8,0);
  ClearSelection(param_1);
  return;
}





void __cdecl FUN_10001950(int param_1)

{
  ClearSelection(param_1);
  SelectUnits(((unsigned char *)&DAT_10012cf8) + param_1 * 8,0);
  return;
}





void __cdecl FUN_10001980(void *param_1)

{
  FUN_10002e10(param_1,&DAT_100130c0,0);
  FUN_10002e10(param_1,&DAT_100130c8,2);
  FUN_10002e10(param_1,&DAT_100130b0,2);
  FUN_10002e10(param_1,&DAT_100130b8,2);
  FUN_10002e10(param_1,&DAT_100130a8,2);
  return;
}





void __cdecl FUN_100019d0(void *param_1)

{
  FUN_10002e10(param_1,&DAT_10022510,0);
  FUN_10002e10(param_1,&DAT_10022518,2);
  FUN_10002e10(param_1,&DAT_10022500,2);
  FUN_10002e10(param_1,&DAT_10022508,2);
  FUN_10002ec0(param_1,&DAT_100224f8,2);
  return;
}





void __cdecl FUN_10001a20(void *param_1)

{
  FUN_10002e10(param_1,&DAT_10013088,0);
  FUN_10002e10(param_1,&DAT_10013078,2);
  FUN_10002e10(param_1,&DAT_10013080,2);
  FUN_10002e10(param_1,&DAT_10013060,2);
  FUN_10002e10(param_1,&DAT_10013070,2);
  return;
}





void FUN_10002a30(void)

{
  FUN_1000aefc();
  return;
}





void FUN_10002a40(void)

{
  return;
}






void 
FUN_10002ad0(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  RegisterVar(this_ptr,0x74);
  *(int *)this_ptr = param_1;
  RegisterUnits((int)this_ptr + 4,param_2);
  if (param_3 != 0) {
    RegisterZone((int)this_ptr + 0xc,param_3);
    SetDestPoint((int)this_ptr + 4,(int)this_ptr + 0xc);
  }
  RegisterDynGroup((int)this_ptr + 0x14);
  RegisterDynGroup((int)this_ptr + 0x1c);
  RegisterDynGroup((int)this_ptr + 0x6c);
  *(int *)((int)this_ptr + 0x30) = 0;
  *(int *)((int)this_ptr + 0x34) = 0;
  *(int *)((int)this_ptr + 0x38) = 0x3c;
  *(int *)((int)this_ptr + 0x44) = 0;
  *(int *)((int)this_ptr + 0x48) = 0;
  *(int *)((int)this_ptr + 0x4c) = 0x78;
  *(int *)((int)this_ptr + 0x54) = 0;
  *(int *)((int)this_ptr + 0x50) = 1;
  *(int *)((int)this_ptr + 0x58) = 10;
  *(int *)((int)this_ptr + 0x5c) = 1;
  *(int *)((int)this_ptr + 0x60) = 0;
  *(int *)((int)this_ptr + 0x24) = param_4;
  return;
}





void  FUN_10002b80(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x50) = param_1;
  return;
}





void  FUN_10002b90(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x58) = param_1;
  return;
}





void  FUN_10002ba0(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x5c) = param_1;
  return;
}





void  FUN_10002bb0(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x60) = param_1;
  return;
}





void  FUN_10002bc0(void *this_ptr,int *param_1,int param_2,int param_3)

{
  *(int *)((int)this_ptr + 0x3c) = *param_1;
  *(int *)((int)this_ptr + 0x40) = param_1[1];
  *(int *)((int)this_ptr + 0x44) = param_2;
  *(int *)((int)this_ptr + 0x48) = param_3;
  return;
}





void  FUN_10002be0(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((int)this_ptr + 0x28,param_1);
  *(int *)((int)this_ptr + 0x30) = param_2;
  *(int *)((int)this_ptr + 0x34) = param_3;
  return;
}





void  FUN_10002c10(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((int)this_ptr + 0x3c,param_1);
  *(int *)((int)this_ptr + 0x44) = param_2;
  *(int *)((int)this_ptr + 0x48) = param_3;
  return;
}





void  FUN_10002c40(void *this_ptr,int *param_1,int param_2,int param_3)

{
  *(int *)((int)this_ptr + 0x28) = *param_1;
  *(int *)((int)this_ptr + 0x2c) = param_1[1];
  *(int *)((int)this_ptr + 0x30) = param_2;
  *(int *)((int)this_ptr + 0x34) = param_3;
  return;
}





void  FUN_10002c60(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x30) = param_1 * *(int *)((int)this_ptr + 0x30);
  return;
}





void  FUN_10002c70(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x30) = *(int *)((int)this_ptr + 0x30) / param_1;
  return;
}





void  FUN_10002c80(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x44) = param_1 * *(int *)((int)this_ptr + 0x44);
  return;
}





void  FUN_10002c90(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x44) = *(int *)((int)this_ptr + 0x44) / param_1;
  return;
}





void  FUN_10002ca0(void *this_ptr,int *param_1)

{
  *(int *)((int)this_ptr + 100) = *param_1;
  *(int *)((int)this_ptr + 0x68) = param_1[1];
  return;
}





BOOL  FUN_10002cc0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 4);
  return iVar1 != 0;
}





int  FUN_10002ce0(int param_1)

{
  BOOL bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  unsigned int uVar6;
  int iVar7;
  
  iVar3 = GetTotalAmount0(param_1 + 0x1c);
  iVar7 = param_1 + 0x14;
  iVar4 = GetTotalAmount0(iVar7);
  if (*(int *)(param_1 + 0x24) < iVar4 + iVar3) {
    return -1;
  }
  bVar1 = FUN_10002cc0(param_1);
  if (bVar1) {
    iVar3 = param_1 + 4;
    cVar2 = CheckProduction(iVar3);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      }
      else {
        *(int *)(param_1 + 0x54) = 0;
        iVar7 = param_1 + 0x1c;
      }
      iVar4 = GetGlobalTime();
      if (*(int *)(param_1 + 0x60) < iVar4) {
        uVar5 = GetGlobalTime();
        *(int *)(param_1 + 0x60) = uVar5;
        uVar6 = rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x34)) {
          ProduceUnitFast(iVar3,param_1 + 0x28,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x30);
        }
        uVar6 = rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x48)) {
          ProduceUnitFast(iVar3,param_1 + 0x3c,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x44);
        }
      }
    }
  }
  return 0;
}






int  FUN_10002de0(int param_1)

{
  BOOL bVar1;
  int iVar2;
  
  bVar1 = FUN_10002cc0(param_1);
  if (bVar1) {
    iVar2 = GetTotalAmount0(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x58) <= iVar2) {
      return 1;
    }
  }
  return 0;
}





void  FUN_10002e10(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  
  uVar1 = FUN_10002de0((int)this_ptr);
  if ((char)uVar1 != '\0') {
    FUN_10001910(*(int *)this_ptr);
    SelectUnits((int)this_ptr + 0x1c,0);
    SelChangeNation(*(char *)this_ptr,7);
    FUN_10001910(7);
    SelectUnitsType((int)this_ptr + 0x28,7,0);
    SaveSelectedUnits(7,(int)this_ptr + 0x6c,0);
    SelectUnits((int)this_ptr + 0x1c,0);
    SelChangeNation(7,*(char *)this_ptr);
    FUN_10001950(7);
    SelectUnits((int)this_ptr + 0x6c,0);
    iVar2 = rand();
    SelSendTo(*(char *)this_ptr,param_1,iVar2,param_2);
    FUN_10001950(*(int *)this_ptr);
  }
  return;
}





void  FUN_10002ec0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  
  uVar1 = FUN_10002de0((int)this_ptr);
  if ((char)uVar1 != '\0') {
    FUN_10001910(*(int *)this_ptr);
    SelectUnits((int)this_ptr + 0x1c,0);
    SelChangeNation(*(char *)this_ptr,7);
    FUN_10001910(7);
    SelectUnitsType((int)this_ptr + 0x28,7,0);
    SaveSelectedUnits(7,(int)this_ptr + 0x6c,0);
    SelectUnits((int)this_ptr + 0x1c,0);
    SelChangeNation(7,*(char *)this_ptr);
    FUN_10001950(7);
    SelectUnits((int)this_ptr + 0x6c,0);
    iVar2 = rand();
    SelSendAndKill(*(char *)this_ptr,param_1,iVar2,param_2);
    FUN_10001950(*(int *)this_ptr);
  }
  return;
}





void  FUN_10002f70(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  
  uVar1 = FUN_10002de0((int)this_ptr);
  if ((char)uVar1 != '\0') {
    FUN_10001910(*(int *)this_ptr);
    SelectUnits((int)this_ptr + 0x1c,0);
    SelChangeNation(*(char *)this_ptr,7);
    FUN_10001910(7);
    SelectUnitsType((int)this_ptr + 0x3c,7,0);
    SaveSelectedUnits(7,(int)this_ptr + 0x6c,0);
    SelectUnits((int)this_ptr + 0x1c,0);
    SelChangeNation(7,*(char *)this_ptr);
    FUN_10001950(7);
    SelectUnits((int)this_ptr + 0x6c,0);
    iVar2 = rand();
    SelSendTo(*(char *)this_ptr,param_1,iVar2,param_2);
    FUN_10001950(*(int *)this_ptr);
  }
  return;
}





void  FUN_10003020(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  
  uVar1 = FUN_10002de0((int)this_ptr);
  if ((char)uVar1 != '\0') {
    FUN_10001910(*(int *)this_ptr);
    SelectUnits((int)this_ptr + 0x1c,0);
    SelChangeNation(*(char *)this_ptr,7);
    FUN_10001910(7);
    SelectUnitsType((int)this_ptr + 0x3c,7,0);
    SaveSelectedUnits(7,(int)this_ptr + 0x6c,0);
    SelectUnits((int)this_ptr + 0x1c,0);
    SelChangeNation(7,*(char *)this_ptr);
    FUN_10001950(7);
    SelectUnits((int)this_ptr + 0x6c,0);
    iVar2 = rand();
    SelSendAndKill(*(char *)this_ptr,param_1,iVar2,param_2);
    FUN_10001950(*(int *)this_ptr);
  }
  return;
}





void  FUN_100030d0(int param_1)

{
  GetNUnits(param_1 + 0x1c);
  RemoveGroup(param_1 + 0x1c,param_1 + 0x6c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
  return;
}





void  FUN_10003100(int *param_1)

{
  BOOL bVar1;
  int uVar2;
  int iVar3;
  
  bVar1 = FUN_10002cc0((intptr_t)param_1);
  if (bVar1) {
    FUN_10002ce0((intptr_t)param_1);
    uVar2 = FUN_10002de0((intptr_t)param_1);
    if ((char)uVar2 != '\0') {
      FUN_10001910(*param_1);
      SelectUnits(param_1 + 7,0);
      uVar2 = 0;
      iVar3 = rand();
      SelSendAndKill((char)*param_1,param_1 + 0x19,iVar3,uVar2);
      FUN_10001950(*param_1);
      FUN_100030d0((intptr_t)param_1);
    }
  }
  return;
}





void  FUN_10003160(void *this_ptr,int *param_1)

{
  FUN_10002ca0(this_ptr,param_1);
  FUN_10003100(this_ptr);
  return;
}





void  FUN_10003180(void *this_ptr,int *param_1,int *param_2)

{
  int uVar1;
  unsigned int uVar2;
  
  uVar1 = FUN_10002de0((int)this_ptr);
  if ((char)uVar1 != '\0') {
    uVar2 = rand();
    if ((uVar2 & 0xff) < 0xa0) {
      FUN_10002ca0(this_ptr,param_1);
      FUN_10003100(this_ptr);
      return;
    }
    FUN_10002ca0(this_ptr,param_2);
  }
  FUN_10003100(this_ptr);
  return;
}





int  FUN_100031d0(void *this_ptr,int param_1)

{
  RegisterVar(this_ptr,0x36);
  RegisterUnitType(this_ptr,param_1);
  RegisterDynGroup((int)this_ptr + 8);
  *(int *)((int)this_ptr + 0x22) = 0;
  *(int *)((int)this_ptr + 0x10) = 0;
  *(int *)((int)this_ptr + 0x14) = 0;
  *(short *)((int)this_ptr + 0x18) = 0;
  *(int *)((int)this_ptr + 0x2a) = 0;
  *(int *)((int)this_ptr + 0x2e) = 0;
  *(int *)((int)this_ptr + 0x32) = 0;
  return (int)this_ptr;
}





void  FUN_10003220(int param_1)

{
  *(int *)(param_1 + 800) = 0;
  return;
}





int *  FUN_100032c0(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  *param_1 = 0;
  RegisterDynGroup(param_1 + 3);
  puVar2 = param_1 + 7;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}





BOOL  FUN_100032f0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  return 0 < iVar1;
}





int  FUN_10003310(int *param_1)

{
  int *puVar1;
  unsigned int uVar2;
  short asStack_58 [22];
  short asStack_2c [22];
  
  puVar1 = ((unsigned char *)&DAT_10012cf8) + *param_1 * 8;
  if (*(int *)(((unsigned char *)&DAT_10012cfc) + *param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(puVar1);
  }
  SaveSelectedUnits((char)*param_1,puVar1,0);
  uVar2 = GetTotalAmount0(puVar1);
  if (uVar2 == 1) {
    GetUnitInfo(param_1 + 3,0,asStack_58);
    uVar2 = GetUnitInfo(puVar1,0,asStack_2c);
    if (asStack_58[0] == asStack_2c[0]) {
      return (int)1;
    }
  }
  return uVar2 & -256;
}





int *  FUN_10003390(int *param_1)

{
  FUN_100032c0(param_1);
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





int *  FUN_100033a0(void *this_ptr,int param_1,int param_2)

{
  FUN_100032c0(this_ptr);
  RegisterVar(this_ptr,0x35);
  RegisterUnits((int)this_ptr + 0xc,param_1);
  *(int *)this_ptr = param_2;
  *(char *)((int)this_ptr + 0x34) = 1;
  return this_ptr;
}





int  FUN_100033e0(void *this_ptr,char param_1)

{
  BOOL bVar1;
  int extraout_var;
  unsigned int uVar2;
  int uVar3;
  
  bVar1 = FUN_100032f0((int)this_ptr);
  uVar2 = (int)bVar1;
  if (bVar1) {
    uVar2 = FUN_10003310(this_ptr);
    if ((char)uVar2 != '\0') {
      uVar3 = (int)(uVar2 >> 8);
      uVar2 = (intptr_t)param_1;
      if (param_1 != '\0') {
        uVar2 = (int)*(char *)((int)this_ptr + 0x34);
        if (*(char *)((int)this_ptr + 0x34) != '\0') {
          *(char *)((int)this_ptr + 0x34) = 0;
          return (int)1;
        }
        goto LAB_10003414;
      }
    }
    *(char *)((int)this_ptr + 0x34) = 1;
  }
LAB_10003414:
  return uVar2 & -256;
}





int *  FUN_10003420(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  FUN_10003390(param_1);
  FUN_100032c0((int *)((intptr_t)param_1 + 0x3d));
  FUN_100034c0((intptr_t)param_1 + 0xa9);
  puVar2 = (int *)((intptr_t)param_1 + 0x3e5);
  iVar1 = 100;
  do {
    FUN_100032c0(puVar2);
    puVar2 = puVar2 + 0xd;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(int *)((intptr_t)param_1 + 0x185a) = 5;
  *(int *)((intptr_t)param_1 + 0x1835) = 0;
  *(char *)((intptr_t)param_1 + 0x184d) = 0;
  *(int *)((intptr_t)param_1 + 0x184e) = 0;
  *(int *)((intptr_t)param_1 + 0x1852) = 0;
  *(int *)((intptr_t)param_1 + 0x1856) = 0;
  *(int *)((intptr_t)param_1 + 0x185e) = 10;
  RegisterDynGroup((intptr_t)param_1 + 0x1862);
  return param_1;
}





int *  FUN_100034a0(int *param_1)

{
  FUN_10003390(param_1);
  *(char *)((intptr_t)param_1 + 0x41) = 0;
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





int  FUN_100034c0(int param_1)

{
  FUN_10003220(param_1 + 0x10);
  *(int *)(param_1 + 0x334) = 0;
  return param_1;
}







void FUN_100034e0(void)

{
  void *extraout_ECX;
  
  FUN_100034f8();
  DAT_100266f8_ovl = FUN_1000391a();
  FUN_100038ca(extraout_ECX);
  return;
}





void FUN_100034f8(void)

{
  return;
}





int __cdecl FUN_10003662(int param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_100040a9();
  pbVar1 = (byte *)FUN_10004404(DAT_10027e70);
  if (pbVar1 < DAT_10027e6c + (4 - (int)DAT_10027e70)) {
    SVar2 = FUN_10004404(DAT_10027e70);
    pbVar1 = FUN_100040d5(DAT_10027e70,(unsigned int *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_100036d7;
    }
    DAT_10027e6c = pbVar1 + ((int)DAT_10027e6c - (int)DAT_10027e70 >> 2) * 4;
    DAT_10027e70 = pbVar1;
  }
  *(int *)DAT_10027e6c = param_1;
  DAT_10027e6c = DAT_10027e6c + 4;
LAB_100036d7:
  FUN_100040b2();
  return param_1;
}





int __cdecl FUN_100036e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10003662(param_1);
  return (iVar1 != 0) - 1;
}





void OnInit(void)

{
  DWORD DVar1;
  unsigned int uVar2;
  int iVar3;
  int uVar4;
  
                    
  DVar1 = time(NULL);
  srand(DVar1);
  RegisterZone(&DAT_10012d40,"z_treasure0");
  RegisterZone(&DAT_10012d48,"z_treasure1");
  RegisterZone(&DAT_10012d50,"z_treasure2");
  RegisterZone(&DAT_10012d58,"z_treasure3");
  RegisterZone(&DAT_10012d60,"z_treasure4");
  uVar2 = rand();
  DAT_1002295a = ((uVar2 & 0xff) * 6) / 0xff;
  RegisterUnitType(&DAT_10012d98,"Sclad2(sp)");
  RegisterFormation(&DAT_100266e8,"#ALONE");
  RegisterVar(&DAT_10022528,8);
  RegisterDynGroup(&DAT_10022528);
  RegisterUnitType(&DAT_100266a0,"Lodka(sp)");
  RegisterUnits(&DAT_10013090,"port0");
  RegisterUnits(&DAT_10013098,"port1");
  RegisterUnits(&DAT_100130a0,"port2");
  RegisterZone(&DAT_10022758,"z_port0");
  RegisterZone(&DAT_10022760,"z_port1");
  RegisterZone(&DAT_10022768,"z_port2");
  RegisterUnits(&DAT_10012d70,"courier");
  RegisterZone(&DAT_10022770,"z_courier");
  RegisterUnitType(&DAT_10022548,"KUTTER(PO)");
  RegisterUnitType(&DAT_100227a8,"KUTTER(en)");
  RegisterUnitType(&DAT_10022550,"KUTTER(sp)");
  RegisterUnitType(&DAT_10012d80,"KECH(PO)");
  RegisterUnitType(&DAT_10012da0,"KECH(en)");
  RegisterUnitType(&DAT_10012d68,"KECH(sp)");
  EnableUnit(5,&DAT_10022548,1);
  EnableUnit(5,&DAT_100227a8,1);
  EnableUnit(5,&DAT_10022550,1);
  EnableUnit(5,&DAT_10012d80,1);
  RegisterVar(&DAT_10022850,0x74);
  RegisterVar(&DAT_100227d8,0x74);
  RegisterVar(&DAT_100228c8,0x74);
  FUN_10002ad0(&DAT_10022850,5,"band0_port",0,100);
  FUN_10002b90(&DAT_10022850,1);
  FUN_10002ba0(&DAT_10022850,0);
  FUN_10002b80(&DAT_10022850,0);
  FUN_10002bb0(&DAT_10022850,10000);
  FUN_10002ad0(&DAT_100227d8,5,"band2_port",0,100);
  FUN_10002b90(&DAT_100227d8,1);
  FUN_10002ba0(&DAT_100227d8,0);
  FUN_10002b80(&DAT_100227d8,0);
  FUN_10002bb0(&DAT_100227d8,10000);
  FUN_10002ad0(&DAT_100228c8,5,"band3_port",0,100);
  FUN_10002b90(&DAT_100228c8,1);
  FUN_10002ba0(&DAT_100228c8,0);
  FUN_10002b80(&DAT_100228c8,0);
  FUN_10002bb0(&DAT_100228c8,10000);
  RegisterZone(&DAT_100130c0,"z_raid0_0");
  RegisterZone(&DAT_100130c8,"z_raid0_1");
  RegisterZone(&DAT_100130b0,"z_raid0_2");
  RegisterZone(&DAT_100130b8,"z_raid0_3");
  RegisterZone(&DAT_100130a8,"z_raid0_4");
  RegisterZone(&DAT_10022510,"z_raid1_0");
  RegisterZone(&DAT_10022518,"z_raid1_1");
  RegisterZone(&DAT_10022500,"z_raid1_2");
  RegisterZone(&DAT_10022508,"z_raid1_3");
  RegisterZone(&DAT_100224f8,"z_raid1_4");
  RegisterZone(&DAT_10013088,"z_raid2_0");
  RegisterZone(&DAT_10013078,"z_raid2_1");
  RegisterZone(&DAT_10013080,"z_raid2_2");
  RegisterZone(&DAT_10013060,"z_raid2_3");
  RegisterZone(&DAT_10013070,"z_raid2_4");
  RegisterVar(&DAT_10022570,0x74);
  RegisterVar(&DAT_100225e8,0x74);
  RegisterVar(&DAT_10022660,0x74);
  RegisterVar(&DAT_100226d8,0x74);
  RegisterZone(&DAT_10012d78,"z_gold0");
  RegisterZone(&DAT_10012d88,"z_gold1");
  RegisterZone(&DAT_10012d90,"z_gold2");
  RegisterZone(&DAT_100229a0,"z_coal0");
  RegisterZone(&DAT_10022538,"z_stone0");
  RegisterZone(&DAT_100227b0,"z_milkyway0");
  RegisterZone(&DAT_10022798,"z_milkyway1");
  RegisterZone(&DAT_10022778,"z_harbour0");
  RegisterZone(&DAT_10022788,"z_harbour2");
  RegisterZone(&DAT_10022780,"z_harbour3");
  FUN_10002ad0(&DAT_10022570,5,"band0_barrack",0,100);
  uVar4 = 200;
  iVar3 = GetDiff(0);
  FUN_10002be0(&DAT_10022570,"Pehota_turki_DIP(PO)",(4 - iVar3) * 0x32,uVar4);
  uVar4 = 0xaa;
  iVar3 = GetDiff(0);
  FUN_10002c10(&DAT_10022570,"Strelec_Algir_DIP(PO)",(4 - iVar3) * 0x19,uVar4);
  iVar3 = GetDiff(0);
  FUN_10002b90(&DAT_10022570,iVar3 + 4);
  iVar3 = GetDiff(0);
  FUN_10002ba0(&DAT_10022570,iVar3 + 2);
  FUN_10002bb0(&DAT_10022570,10000);
  FUN_10002ad0(&DAT_100225e8,5,"band1_barrack",0,100);
  uVar4 = 200;
  iVar3 = GetDiff(0);
  FUN_10002be0(&DAT_100225e8,"Rundashir_Avstria_DIP(fr)",(4 - iVar3) * 0x32,uVar4);
  uVar4 = 0xaa;
  iVar3 = GetDiff(0);
  FUN_10002c10(&DAT_100225e8,"Strelec_Algir_DIP(fr)",(4 - iVar3) * 0x19,uVar4);
  iVar3 = GetDiff(0);
  FUN_10002b90(&DAT_100225e8,iVar3 + 6);
  iVar3 = GetDiff(0);
  FUN_10002ba0(&DAT_100225e8,iVar3 + 2);
  FUN_10002bb0(&DAT_100225e8,80000);
  FUN_10002ad0(&DAT_10022660,5,"band2_barrack",0,100);
  uVar4 = 200;
  iVar3 = GetDiff(0);
  FUN_10002be0(&DAT_10022660,"Pehota_turki_DIP(en)",(4 - iVar3) * 0x32,uVar4);
  uVar4 = 0xaa;
  iVar3 = GetDiff(0);
  FUN_10002c10(&DAT_10022660,"Strelec_Algir_DIP(en)",(4 - iVar3) * 0x19,uVar4);
  iVar3 = GetDiff(0);
  FUN_10002b90(&DAT_10022660,iVar3 + 4);
  iVar3 = GetDiff(0);
  FUN_10002ba0(&DAT_10022660,iVar3 + 2);
  FUN_10002bb0(&DAT_10022660,9000);
  FUN_10002ad0(&DAT_100226d8,5,"band3_barrack",0,100);
  uVar4 = 200;
  iVar3 = GetDiff(0);
  FUN_10002be0(&DAT_100226d8,"Pehota_turki_DIP(sp)",(4 - iVar3) * 0x32,uVar4);
  uVar4 = 0xaa;
  iVar3 = GetDiff(0);
  FUN_10002c10(&DAT_100226d8,"Strelec_Algir_DIP(sp)",(4 - iVar3) * 0x19,uVar4);
  iVar3 = GetDiff(0);
  FUN_10002b90(&DAT_100226d8,iVar3 + 4);
  iVar3 = GetDiff(0);
  FUN_10002ba0(&DAT_100226d8,iVar3 + 2);
  FUN_10002bb0(&DAT_100226d8,0x2134);
  RegisterUnits(&DAT_10026698,"blocks");
  RegisterUnitType(&DAT_10022750,"konushnia_BR(en)");
  RegisterUnitType(&DAT_10022568,"Center_British(en)");
  RegisterUnitType(&DAT_100227c8,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_10022558,"Pikiner_evro(en)");
  RegisterUnitType(&DAT_100266a8,"Kazarma_1_BR(en)");
  RegisterUnitType(&DAT_10012d38,"Bashnia(en)");
  RegisterUnitType(&DAT_10022540,"Dip_korpus_BR(en)");
  RegisterUnitType(&DAT_10022530,"akademia_BR(en)");
  RegisterUpgrade(&DAT_10022790,"Melnica(sp)GETRES");
  RegisterUpgrade(&DAT_100227a0,"Melnica(sp)GETRES2");
  RegisterUpgrade(&DAT_10022978,"AKA01SP");
  RegisterUpgrade(&DAT_10022980,"AKA02SP");
  RegisterUpgrade(&DAT_10022988,"AKA03SP");
  RegisterUpgrade(&DAT_10012da8,"AKA08SP");
  RegisterUpgrade(&DAT_100227b8,"AKA23SP");
  RegisterUpgrade(&DAT_100227c0,"AKA24SP");
  RegisterUpgrade(&DAT_10012db8,"AKA04SP");
  RegisterUpgrade(&DAT_10022998,"AKA24EN");
  RegisterUnitType(&DAT_10022560,"Dip_korpus_SP(sp)");
  RegisterUnitType(&DAT_10013068,"Rinok(sp)");
  RegisterUnitType(&DAT_10012c88,"Kazarma_1_SP(sp)");
  RegisterUnitType(&DAT_10022990,"akademia_SP(sp)");
  RegisterUnitType(&DAT_100227d0,"PorE(sp)");
  SetPlayerName(3,"vn_englishman");
  SetPlayerName(6,"ALLIES");
  SetPlayerName(2,"SPAIN");
  SetPlayerName(4,"vn_englishman");
  SetPlayerName(1,"ALLIES");
  SetPlayerName(5,"ROBBERS");
  ChangeFriends(3,0xfe);
  ChangeFriends(2,0xfe);
  ChangeFriends(4,0xfe);
  ChangeFriends(1,0xff);
  ChangeFriends(6,1);
  SetTrigg(2,0);
  SetTrigg(5,0);
  SetTrigg(6,0);
  SetTrigg(8,0);
  SetTrigg(9,0);
  SetTrigg(0xb,0);
  SetTrigg(0xc,0);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  BOOL bVar2;
  int iVar3;
  int uVar4;
  unsigned int uVar5;
  int iVar6;
  void *pcVar7;
  int *puVar8;
  int *puVar9;
  int *puVar10;
  
                    
  cVar1 = Trigg(0);
  if (cVar1 != '\0') {
    SetTrigg(0,0);
    iVar3 = GetDiff(0);
    if (iVar3 < 2) {
      SelectUnits(&DAT_10026698,0);
      SelDie(5);
    }
    DisableUpgrade(0,&DAT_10022790);
    DisableUpgrade(0,&DAT_100227a0);
    DisableUpgrade(0,&DAT_10022978);
    DisableUpgrade(0,&DAT_10022980);
    DisableUpgrade(0,&DAT_10022988);
    DisableUpgrade(0,&DAT_10012da8);
    DisableUpgrade(0,&DAT_100227b8);
    DisableUpgrade(0,&DAT_100227c0);
    DisableUpgrade(0,&DAT_10012db8);
    DisableUpgrade(0,&DAT_10022998);
    EnableUnit(0,&DAT_10022560,0);
    EnableUnit(0,&DAT_10013068,0);
    EnableUnit(3,&DAT_10022750,0);
    DisableMission(0x49);
    DisableMission(0x41);
    SetResource(0,3,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    SetResource(0,4,5000);
    SetResource(0,5,5000);
    SetResource(3,3,2000);
    SetResource(3,0,2000);
    SetResource(3,2,2000);
    SetResource(3,1,2000);
    SetResource(3,4,2000);
    SetResource(3,5,2000);
    SetResource(2,3,4000);
    SetResource(2,0,4000);
    SetResource(2,2,4000);
    SetResource(2,1,4000);
    SetResource(2,4,4000);
    SetResource(2,5,4000);
    SetResource(4,3,4000);
    SetResource(4,0,4000);
    SetResource(4,2,4000);
    SetResource(4,1,4000);
    SetResource(4,4,4000);
    SetResource(4,5,4000);
    iVar3 = GetDiff(0);
    StartAI(3,"ENGLAND.0",0,0,0,(iVar3 + 1) / 2);
    uVar4 = GetDiff(0);
    StartAI(2,"SPAIN.0",0,0,0,uVar4);
    uVar4 = GetDiff(0);
    StartAI(4,"ENGLAND.0",3,0,0,uVar4);
  }
  cVar1 = Trigg(1);
  if (((cVar1 != '\0') && (iVar3 = GetDiff(0), iVar3 < 2)) &&
     (iVar3 = GetTotalAmount1(&DAT_10022558,3), iVar3 < 10)) {
    SetTrigg(1,0);
    ShowPage("#ai0_surrender");
    ClearSelection(3);
    SelectUnitsType(&DAT_100227c8,3,0);
    SelectUnitsType(&DAT_10022558,3,1);
    SelectUnitsType(&DAT_10022568,3,1);
    SelChangeNation(3,0);
    ClearSelection(3);
    SelectUnitsType(&DAT_100266a8,3,0);
    SelectUnitsType(&DAT_10022540,3,1);
    SelectUnitsType(&DAT_10012d38,3,1);
    SelDie(3);
  }
  iVar3 = GetTotalAmount1(&DAT_100227c8,0);
  if ((iVar3 == 0) && (iVar3 = GetTotalAmount1(&DAT_10022568,0), iVar3 == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  cVar1 = Trigg(2);
  if ((cVar1 == '\0') && (bVar2)) {
    SetTrigg(2,0);
    DisableMission(0x57);
    EnableMission(0x49);
    EnableMission(0x41);
    ShowPage("#eng_capture");
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (!bVar2)) {
    SetTrigg(2,0);
    DisableMission(0x49);
    EnableMission(0x57);
    ShowPage("#eng_lost");
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') &&
     ((iVar3 = GetReadyAmount(&DAT_10012c88,0), iVar3 != 0 ||
      (iVar3 = GetReadyAmount(&DAT_100266a8,0), iVar3 != 0)))) {
    SetTrigg(7,0);
    iVar3 = GetGlobalTime();
    FUN_10002bb0(&DAT_10022570,iVar3 + 2000);
    uVar4 = GetGlobalTime();
    FUN_10002bb0(&DAT_100225e8,uVar4);
    iVar3 = GetGlobalTime();
    FUN_10002bb0(&DAT_10022660,iVar3 + 5000);
    iVar3 = GetGlobalTime();
    FUN_10002bb0(&DAT_100226d8,iVar3 + 5000);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') &&
     ((iVar3 = GetReadyAmount(&DAT_10012c88,0), 1 < iVar3 ||
      (iVar3 = GetReadyAmount(&DAT_100266a8,0), 1 < iVar3)))) {
    SetTrigg(5,0);
    FUN_10002c70(&DAT_10022570,2);
    FUN_10002c90(&DAT_10022570,2);
    FUN_10002c70(&DAT_100225e8,2);
    FUN_10002c90(&DAT_100225e8,2);
    FUN_10002c70(&DAT_10022660,3);
    FUN_10002c90(&DAT_10022660,3);
  }
  cVar1 = Trigg(5);
  if (((cVar1 == '\0') && (iVar3 = GetReadyAmount(&DAT_10012c88,0), iVar3 < 2)) &&
     (iVar3 = GetReadyAmount(&DAT_100266a8,0), iVar3 < 2)) {
    SetTrigg(5,0);
    FUN_10002c60(&DAT_10022570,2);
    FUN_10002c80(&DAT_10022570,2);
    FUN_10002c60(&DAT_100225e8,2);
    FUN_10002c80(&DAT_100225e8,2);
    FUN_10002c60(&DAT_10022660,3);
    FUN_10002c80(&DAT_10022660,3);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') &&
     ((iVar3 = GetReadyAmount(&DAT_10022990,0), iVar3 != 0 ||
      (iVar3 = GetReadyAmount(&DAT_10022530,0), iVar3 != 0)))) {
    SetTrigg(6,0);
    FUN_10002c70(&DAT_10022570,2);
    FUN_10002c90(&DAT_10022570,2);
    FUN_10002c70(&DAT_100225e8,2);
    FUN_10002c90(&DAT_100225e8,2);
  }
  cVar1 = Trigg(6);
  if (((cVar1 == '\0') && (iVar3 = GetReadyAmount(&DAT_10022990,0), iVar3 == 0)) &&
     (iVar3 = GetReadyAmount(&DAT_10022530,0), iVar3 == 0)) {
    SetTrigg(6,0);
    FUN_10002c60(&DAT_10022570,2);
    FUN_10002c80(&DAT_10022570,2);
    FUN_10002c60(&DAT_100225e8,2);
    FUN_10002c80(&DAT_100225e8,2);
  }
  FUN_10002b80(&DAT_10022570,0);
  FUN_10002b80(&DAT_100225e8,0);
  FUN_10002b80(&DAT_10022660,0);
  FUN_10002b80(&DAT_100226d8,0);
  iVar3 = GetTotalAmount0(0x10022570);
  if (iVar3 < 0x23) {
    FUN_10002b80(&DAT_10022570,2);
  }
  iVar3 = GetTotalAmount0(0x100225e8);
  if (iVar3 < 0x2d) {
    FUN_10002b80(&DAT_100225e8,3);
  }
  iVar3 = GetTotalAmount0(0x10022660);
  if (iVar3 < 0x3c) {
    FUN_10002b80(&DAT_10022660,3);
  }
  iVar3 = GetTotalAmount0(0x100226d8);
  if (iVar3 < 0x50) {
    FUN_10002b80(&DAT_100226d8,3);
  }
  cVar1 = Trigg(2);
  if (cVar1 == '\0') {
    FUN_10003160(&DAT_10022570,(int *)&DAT_10012d78);
    FUN_10003160(&DAT_100225e8,(int *)&DAT_10012d78);
    FUN_10003160(&DAT_10022660,(int *)&DAT_10012d88);
    FUN_10003160(&DAT_100226d8,(int *)&DAT_10012d90);
  }
  else {
    iVar3 = GetUnitsAmount0(&DAT_10022798,5);
    if (iVar3 == 0) {
      puVar9 = (int *)&DAT_10022798;
    }
    else {
      puVar9 = (int *)&DAT_10022538;
    }
    FUN_10003180(&DAT_10022570,(int *)&DAT_10012d78,puVar9);
    iVar3 = GetUnitsAmount0(&DAT_10022798,5);
    if (iVar3 == 0) {
      puVar9 = (int *)&DAT_100227b0;
    }
    else {
      puVar9 = (int *)&DAT_10022538;
    }
    FUN_10003180(&DAT_100225e8,(int *)&DAT_10012d78,puVar9);
    iVar3 = GetUnitsAmount0(&DAT_10022768,5);
    if (iVar3 == 0) {
      puVar9 = (int *)&DAT_10022768;
    }
    else {
      puVar9 = (int *)&DAT_10012d88;
    }
    FUN_10003180(&DAT_10022660,puVar9,(int *)&DAT_10012d90);
    iVar3 = GetUnitsAmount0(&DAT_10022758,5);
    if ((iVar3 == 0) || (iVar3 = GetUnitsAmount0(&DAT_10022760,5), iVar3 == 0)) {
      puVar10 = (int *)&DAT_10022760;
      puVar9 = (int *)&DAT_10022758;
    }
    else {
      puVar10 = (int *)&DAT_100229a0;
      puVar9 = (int *)&DAT_10012d88;
    }
    FUN_10003180(&DAT_100226d8,puVar9,puVar10);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 == '\0') && (cVar1 = Trigg(8), cVar1 != '\0')) {
    SetTrigg(0xb,0);
    uVar4 = GetGlobalTime();
    FUN_10002bb0(&DAT_10022850,uVar4);
    uVar4 = GetGlobalTime();
    FUN_10002bb0(&DAT_100227d8,uVar4);
    uVar4 = GetGlobalTime();
    FUN_10002bb0(&DAT_100228c8,uVar4);
  }
  iVar3 = GetTotalAmount1(&DAT_10022548,5);
  if (((iVar3 < 10) && (iVar3 = GetTotalAmount1(&DAT_10022550,5), iVar3 < 10)) &&
     (iVar3 = GetTotalAmount1(&DAT_100227a8,5), iVar3 < 10)) {
    FUN_10002c40(&DAT_10022850,(int *)&DAT_10022548,4000,200);
    FUN_10002bc0(&DAT_10022850,(int *)&DAT_100227a8,4000,0x28);
    FUN_10002ce0(0x10022850);
    FUN_10002c40(&DAT_100227d8,(int *)&DAT_100227a8,4000,200);
    FUN_10002bc0(&DAT_100227d8,(int *)&DAT_10022550,4000,0x28);
    FUN_10002ce0(0x100227d8);
    FUN_10002c40(&DAT_100228c8,(int *)&DAT_10022550,4000,200);
    FUN_10002bc0(&DAT_100228c8,(int *)&DAT_10022548,4000,0x28);
    FUN_10002ce0(0x100228c8);
  }
  uVar4 = FUN_10002de0(0x10022850);
  if ((char)uVar4 != '\0') {
    uVar5 = rand();
    if ((uVar5 & 0xff) < 0x80) {
      FUN_10001980(&DAT_10022850);
      FUN_10003020(&DAT_10022850,&DAT_10022770,0);
    }
    else {
      FUN_100019d0(&DAT_10022850);
      FUN_10002f70(&DAT_10022850,&DAT_10022780,0);
    }
    FUN_100030d0(0x10022850);
  }
  uVar4 = FUN_10002de0(0x100227d8);
  if ((char)uVar4 != '\0') {
    uVar5 = rand();
    if ((uVar5 & 0xff) < 0x80) {
      FUN_10001980(&DAT_100227d8);
      puVar8 = &DAT_10022778;
    }
    else {
      FUN_10001a20(&DAT_100227d8);
      puVar8 = &DAT_10022780;
    }
    FUN_10002f70(&DAT_100227d8,puVar8,0);
    FUN_100030d0(0x100227d8);
  }
  uVar4 = FUN_10002de0(0x100228c8);
  if ((char)uVar4 != '\0') {
    uVar5 = rand();
    if ((uVar5 & 0xff) < 0x80) {
      FUN_100019d0(&DAT_100228c8);
      FUN_10002f70(&DAT_100228c8,&DAT_10022778,0);
    }
    else {
      FUN_10001a20(&DAT_100228c8);
      FUN_10003020(&DAT_100228c8,&DAT_10022770,0);
    }
    FUN_100030d0(0x100228c8);
  }
  cVar1 = Trigg(10);
  if (cVar1 != '\0') {
    SetTrigg(10,0);
    iVar3 = 0x50;
    do {
      ProduceUnitFast(&DAT_10013090,&DAT_100266a0,&DAT_10022528,6);
      ProduceUnitFast(&DAT_10013098,&DAT_100266a0,&DAT_10022528,6);
      ProduceUnitFast(&DAT_100130a0,&DAT_100266a0,&DAT_10022528,6);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  cVar1 = Trigg(9);
  if ((cVar1 == '\0') &&
     (((iVar3 = GetUnitsAmount0(&DAT_10022758,5), iVar3 != 0 ||
       (iVar3 = GetUnitsAmount0(&DAT_10022760,5), iVar3 != 0)) ||
      (iVar3 = GetUnitsAmount0(&DAT_10022768,5), pcVar7 = (void*)&SelectUnits, iVar3 != 0)))) {
    SetTrigg(9,0);
    FUN_10001910(6);
    SelectUnits(&DAT_10012d70,0);
    SelSendTo(6,&DAT_10022770,100,0);
    FUN_10001950(6);
  }
  cVar1 = Trigg(8);
  if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10022770,&DAT_10012d70), iVar3 != 0)) {
    SetTrigg(8,0);
    SetStartPoint(&DAT_10022770);
    RefreshScreen();
    ShowPage("#fishers_help");
    FUN_10001910(6);
    SelectUnits(&DAT_10012d70,0);
    SelSendAndKill(6,&DAT_10022780,0x28,0);
    FUN_10001950(6);
  }
  cVar1 = Trigg(0xc);
  if ((((cVar1 == '\0') && (bVar2 = FUN_10002cc0(0x100226d8), !bVar2)) &&
      (iVar3 = GetUnitsAmount0(&DAT_10022758,5), iVar3 == 0)) &&
     ((iVar3 = GetUnitsAmount0(&DAT_10022760,5), iVar3 == 0 &&
      (iVar3 = GetUnitsAmount0(&DAT_10022768,5), iVar3 == 0)))) {
    SetTrigg(0xc,0);
    FUN_10001910(6);
    SelectUnits(&DAT_10013090,0);
    SelectUnits(&DAT_10013098,1);
    SelectUnits(&DAT_100130a0,1);
    SelectUnits(&DAT_10022528,1);
    SelChangeNation(6,0);
    ShowPage("#fishers_happy");
    FUN_10001950(6);
  }
  iVar3 = FUN_10001000(&DAT_100266bc,0x10012d40,5);
  if (DAT_10022962 == 0) {
    if ((iVar3 < 5) && (((long long *)&DAT_10022950)[iVar3] == '\0')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    uVar4 = FUN_100033e0(&DAT_100266b0,cVar1);
    if (((char)uVar4 != '\0') &&
       (cVar1 = AskQuestion("#search_treasure"), pcVar7 = (void*)&ShowPage, cVar1 != '\0')) {
      FUN_10001910(0);
      UnitsCenter(&DAT_100266c4,&DAT_100266bc,400);
      SelectTypeOfUnitsInZone(&DAT_100266c4,&DAT_10022940,0,0);
      SaveSelectedUnits(0,&DAT_10022948,0);
      iVar6 = GetTotalAmount0(&DAT_10022948);
      if (iVar6 == 0) {
        ShowPage("#no_diggers");
        FUN_10001950(0);
      }
      else if ((iVar6 < 0x14) && (cVar1 = AskQuestion("#little_diggers"), cVar1 == '\0')) {
        FUN_10001950(0);
      }
      else {
        DAT_10022962 = 1;
        if (0x13 < iVar6) {
          iVar6 = 0x14;
        }
        DAT_1002295e = iVar3;
        iVar3 = GetGlobalTime();
        DAT_10022966 = iVar3 + (int)(80000 / (long long)iVar6);
        DAT_1002296a = GetGlobalTime();
        DAT_1002296e = DAT_1002296a + 2000;
        DAT_10022972 = DAT_1002296e;
        SelChangeNation(0,6);
        FUN_10001950(0);
      }
    }
  }
  else {
    if (DAT_10022962 == 1) {
      iVar3 = GetGlobalTime();
      if (DAT_1002296a < iVar3) {
        TakeStone(&DAT_10022948);
        iVar3 = GetGlobalTime();
        DAT_1002296a = iVar3 + 2000;
        iVar3 = GetGlobalTime();
        DAT_1002296e = iVar3 + 0x4b;
      }
      iVar3 = GetGlobalTime();
      if (DAT_1002296e < iVar3) {
        FUN_10001910(6);
        SelectUnits(&DAT_10022948,0);
        uVar4 = 0;
        iVar3 = rand();
        SelSendTo(6,((unsigned char *)&DAT_10012d40) + DAT_1002295e * 8,iVar3,uVar4);
        FUN_10001950(6);
        iVar3 = GetGlobalTime();
        DAT_1002296e = iVar3 + 2000;
        iVar3 = GetGlobalTime();
        DAT_10022972 = iVar3 + 0x19;
      }
      iVar3 = GetGlobalTime();
      if (DAT_10022972 < iVar3) {
        TakeWood(&DAT_10022948);
        iVar3 = GetGlobalTime();
        DAT_10022972 = iVar3 + 2000;
        iVar3 = GetGlobalTime();
        DAT_1002296a = iVar3 + 0x4b;
      }
      iVar3 = GetGlobalTime();
      if (DAT_10022966 < iVar3) {
        TakeWood(&DAT_10022948);
      }
      iVar3 = GetGlobalTime();
      if (DAT_10022966 + 0x32 < iVar3) {
        UnitsCenter(&DAT_100266c4,&DAT_100266bc,500);
        FUN_10001910(6);
        SelectUnits(&DAT_10022948,0);
        uVar4 = 0;
        iVar3 = rand();
        SelSendTo(6,&DAT_100266c4,iVar3,uVar4);
        SelChangeNation(6,0);
        FUN_10001950(6);
        DAT_10022962 = 0;
        ((long long *)&DAT_10022950)[DAT_1002295e] = 1;
        if (DAT_1002295e == DAT_1002295a) {
          ShowPage("#find_treasure");
          ShowVictory();
        }
        else {
          ShowPage("#search_false");
        }
      }
    }
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(3,0);
    cVar1 = Trigg(4);
    if (cVar1 == '\0') {
      ShowPage("#victory");
      ShowVictory();
    }
    else {
      ShowPage("#ai2_death");
    }
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(4), cVar1 != '\0')) {
    SetTrigg(4,0);
    cVar1 = Trigg(3);
    if (cVar1 == '\0') {
      ShowPage("#victory");
      ShowVictory();
    }
    else {
      ShowPage("#ai3_death");
    }
  }
  cVar1 = NationIsErased(0);
  if ((cVar1 != '\0') || (bVar2 = FUN_100032f0(0x100266b0), !bVar2)) {
    ShowPage("#defeat");
    LooseGame();
  }
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
