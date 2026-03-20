#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
char DAT_1000e19c[] = "z_np";
char DAT_1000e1bc[] = "bar3";
char DAT_1000e1c4[] = "bar2";
long long DAT_10011498 = 0;
long long DAT_10011aa8 = 0;
long long DAT_10011ab0 = 0;
long long DAT_10011ab8 = 0;
long long DAT_10011b28 = 0;
unsigned char DAT_10011b2c[60] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10011b68 = 0;
long long DAT_10011b70 = 0;
long long DAT_10011b78 = 0;
long long DAT_10011b80 = 0;
long long DAT_10011b88 = 0;
long long DAT_10011b90 = 0;
long long DAT_10011b98 = 0;
long long DAT_10011ba0 = 0;
long long DAT_10011ba8 = 0;
long long DAT_10011bb0 = 0;
long long DAT_10011bb8 = 0;
long long DAT_10011e58 = 0;
long long DAT_10021288 = 0;
int DAT_1002128c = 0;
long long DAT_10021290 = 0;
long long DAT_10021298 = 0;
long long DAT_100212a0 = 0;
long long DAT_10021318 = 0;
long long DAT_10021390 = 0;
long long DAT_10021398 = 0;
long long DAT_100213a0 = 0;
long long DAT_1002217e = 0;
long long DAT_100222d0 = 0;
long long DAT_100230ae = 0;
long long DAT_10023200 = 0;
int DAT_10023208 = 0;
int DAT_1002320c = 0;
int DAT_10023218 = 0;
int DAT_1002321c = 0;
int DAT_10023228 = 0;
int DAT_1002322c = 0;
long long DAT_10023238 = 0;
long long DAT_10023244 = 0;
long long DAT_1002324c = 0;
long long DAT_10023270 = 0;
long long DAT_10023278 = 0;
long long DAT_10023280 = 0;
long long DAT_10023288 = 0;
long long DAT_10023290 = 0;
long long DAT_10023298 = 0;
long long DAT_100232a0 = 0;
long long DAT_100232a8 = 0;
long long DAT_100232b0 = 0;
long long DAT_100232b8 = 0;
long long DAT_100232c0 = 0;
long long DAT_100232c8 = 0;
long long DAT_10023340 = 0;
long long DAT_100233b8 = 0;
long long DAT_10023430 = 0;
int DAT_100234a8 = 0;
long long DAT_100234b1 = 0;
long long DAT_100234b8 = 0;
long long DAT_100234c0 = 0;
int DAT_100271b8 = 0;
long long DAT_100271c4 = 0;
long long DAT_100271f8 = 0;
int DAT_1002894c = 0;
int DAT_10028950 = 0;
int DAT_100271f8_ovl = 0;

/* Stubs for missing internal functions */
int FUN_100031d6() { return 0; }
int FUN_10003226() { return 0; }
int FUN_10003767() { return 0; }
int FUN_10003770() { return 0; }
int FUN_10003793() { return 0; }
int FUN_10003ac2() { return 0; }
int FUN_10009a44() { return 0; }


/* Forward declarations */
char FUN_10001000(unsigned int param_1,unsigned int param_2);
void FUN_100010a0(int param_1);
void FUN_100010d0(int param_1,int param_2,int param_3,int param_4);
void FUN_10001660(int param_1);
int FUN_100016a0(int param_1);
void FUN_10001d60(void);
void FUN_10002020(void);
void FUN_10002030(void);
void 
FUN_100020a0(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void  FUN_10002150(void *this_ptr,int param_1);
void  FUN_10002160(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10002190(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100021c0(void *this_ptr,int *param_1);
BOOL  FUN_100021e0(int param_1);
int  FUN_10002200(intptr_t param_1);
int  FUN_100022f0(int param_1);
void  FUN_10002320(int param_1);
void  FUN_10002350(int *param_1);
void  FUN_100023b0(void *this_ptr,int *param_1,int *param_2);
void  FUN_10002400(int param_1);
int *  FUN_100024a0(int *param_1);
int  FUN_100024d0(void *this_ptr,int param_1);
BOOL  FUN_10002520(int param_1);
int  FUN_10002540(int *param_1);
int *  FUN_100025c0(int *param_1);
int *  FUN_100025d0(void *this_ptr,int param_1,int param_2);
int  FUN_10002610(void *this_ptr,char param_1);
int *  FUN_10002650(int *param_1);
int *  FUN_100026d0(int *param_1);
int  FUN_100026f0(int param_1);
int *  FUN_10002710(void *this_ptr,int param_1,int param_2);
void  FUN_10002750(void *this_ptr,int param_1);
void  FUN_100027a0(void *this_ptr,int *param_1);
int * 
FUN_100027d0(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
unsigned int  FUN_10002830(void *this_ptr,void *param_1);
void  FUN_100028f0(void *this_ptr,int param_1);
void  FUN_10002960(int param_1);
void FUN_10002970(int param_1,int param_2,int param_3,int param_4,int param_5);
void 
FUN_10002a40(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
int *  FUN_10002a80(int *param_1);
int  FUN_10002ad0(intptr_t param_1);
unsigned int  FUN_10002b20(void *this_ptr,unsigned int param_1,int param_2,int param_3,int param_4);
void  FUN_10002bf0(void *this_ptr,int *param_1);
void  FUN_10002e90(void *this_ptr,int param_1,int param_2);
void FUN_10002eb0(void);
void FUN_10002ec8(void);
int FUN_10002f27(int param_1,int param_2);
int FUN_10002f4c(int param_1);
int FUN_10002fca(int param_1);

void OnInit();
void ProcessScenary();


char __cdecl FUN_10001000(unsigned int param_1,unsigned int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return -0x40;
  }
  iVar3 = (param_1 ^ (intptr_t)param_1 >> 0x1f) - ((intptr_t)param_1 >> 0x1f);
  iVar1 = (param_2 ^ (intptr_t)param_2 >> 0x1f) - ((intptr_t)param_2 >> 0x1f);
  if (iVar1 < iVar3) {
    iVar1 = FUN_10002f27(iVar1 * 0x100,iVar3);
    cVar2 = ((long long *)&DAT_10011498)[iVar1 * 2];
  }
  else {
    iVar1 = FUN_10002f27(iVar3 * 0x100,iVar1);
    cVar2 = '@' - ((long long *)&DAT_10011498)[iVar1 * 2];
  }
  if ((intptr_t)param_1 < 0) {
    cVar2 = -0x80 - cVar2;
  }
  if ((intptr_t)param_2 < 0) {
    cVar2 = -cVar2;
  }
  return cVar2;
}





void __cdecl FUN_100010a0(int param_1)

{
  int iVar1;
  
  iVar1 = GetNUnits(param_1);
  if (0 < iVar1) {
    do {
      RemoveUnitFromGroup(param_1,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}





void __cdecl FUN_100010d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int uVar2;
  char cVar3;
  int iStack_c;
  unsigned short local_8;
  unsigned short uStack_6;
  
  iVar1 = param_2;
  UnitsCenter(&local_8,param_2,100);
  uVar2 = param_3;
  GetZoneCoor(param_3,&iStack_c,&param_2);
  cVar3 = FUN_10001000(iStack_c - (unsigned int)local_8,param_2 - (unsigned int)uStack_6);
  param_3 = (int)cVar3;
  SelectUnits(iVar1,0);
  SelSendTo(param_1,uVar2,param_3,param_4);
  return;
}





void __cdecl FUN_10001660(int param_1)

{
  if (*(int *)(((unsigned char *)&DAT_10011b2c) + param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(((unsigned char *)&DAT_10011b28) + param_1 * 8);
  }
  SaveSelectedUnits(param_1,((unsigned char *)&DAT_10011b28) + param_1 * 8,0);
  ClearSelection(param_1);
  return;
}





int __cdecl FUN_100016a0(int param_1)

{
  ClearSelection(param_1);
  SelectUnits(((unsigned char *)&DAT_10011b28) + param_1 * 8,0);
  return 0;
}





void FUN_10001d60(void)

{
  int uVar1;
  int iVar2;
  unsigned int uVar3;
  
switchD_10001d96_default:
  RefreshScreen();
  uVar1 = AskMultilineQuestion
                    (9,"#Menu_port0",0,"V05_MPort0_0|V05_MPort0_1|V05_MPort0_2|V05_MPort0_3|V05_MPort0_4|V05_MPort0_5|V05_MPort0_6");
  switch(uVar1) {
  case 0:
    RefreshScreen();
    ShowPageParam("#Menu_port1",DAT_10023208,DAT_1002320c,DAT_10023218,DAT_1002321c,
                  DAT_10023228);
    goto switchD_10001d96_default;
  case 1:
    iVar2 = GetResource(0,1);
    if (DAT_10023208 < iVar2) {
      AddResource(0,1,-DAT_10023208);
      DAT_10023228 = DAT_10023228 + DAT_10023208;
      DAT_10023208 = DAT_10023208 + 0x14;
      DAT_1002320c = DAT_1002320c + 1;
      goto switchD_10001d96_default;
    }
    break;
  case 2:
    if (0 < DAT_1002320c) {
      DAT_1002320c = DAT_1002320c + -1;
      iVar2 = DAT_10023208 + -0x14;
      DAT_10023208 = iVar2;
      goto LAB_10001e52;
    }
    goto switchD_10001d96_default;
  case 3:
    iVar2 = GetResource(0,1);
    if (DAT_10023218 < iVar2) {
      AddResource(0,1,-DAT_10023218);
      DAT_10023228 = DAT_10023228 + DAT_10023218;
      DAT_10023218 = DAT_10023218 + 0x14;
      DAT_1002321c = DAT_1002321c + 1;
      goto switchD_10001d96_default;
    }
    break;
  case 4:
    if (0 < DAT_1002321c) {
      DAT_1002321c = DAT_1002321c + -1;
      iVar2 = DAT_10023218 + -0x14;
      DAT_10023218 = iVar2;
LAB_10001e52:
      DAT_10023228 = DAT_10023228 - iVar2;
      AddResource(0,1,iVar2);
    }
    goto switchD_10001d96_default;
  case 5:
    goto switchD_10001d96_caseD_5;
  case 6:
    goto switchD_10001d96_caseD_6;
  default:
    goto switchD_10001d96_default;
  }
  RefreshScreen();
  ShowPage("#LittleMoney");
  goto switchD_10001d96_default;
switchD_10001d96_caseD_5:
  uVar3 = FUN_10002830(&DAT_10023208,&DAT_10023238);
  if ((char)uVar3 != '\0') {
switchD_10001d96_caseD_6:
    return;
  }
  goto switchD_10001d96_default;
}





void FUN_10002020(void)

{
  FUN_10009a44();
  return;
}





void FUN_10002030(void)

{
  return;
}






void 
FUN_100020a0(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  RegisterVar(this_ptr,0x74);
  *(int *)this_ptr = param_1;
  RegisterUnits((intptr_t)this_ptr + 4,param_2);
  if (param_3 != 0) {
    RegisterZone((intptr_t)this_ptr + 0xc,param_3);
    SetDestPoint((intptr_t)this_ptr + 4,(intptr_t)this_ptr + 0xc);
  }
  RegisterDynGroup((intptr_t)this_ptr + 0x14);
  RegisterDynGroup((intptr_t)this_ptr + 0x1c);
  RegisterDynGroup((intptr_t)this_ptr + 0x6c);
  *(int *)((intptr_t)this_ptr + 0x30) = 0;
  *(int *)((intptr_t)this_ptr + 0x34) = 0;
  *(int *)((intptr_t)this_ptr + 0x38) = 0x3c;
  *(int *)((intptr_t)this_ptr + 0x44) = 0;
  *(int *)((intptr_t)this_ptr + 0x48) = 0;
  *(int *)((intptr_t)this_ptr + 0x4c) = 0x78;
  *(int *)((intptr_t)this_ptr + 0x54) = 0;
  *(int *)((intptr_t)this_ptr + 0x50) = 1;
  *(int *)((intptr_t)this_ptr + 0x58) = 10;
  *(int *)((intptr_t)this_ptr + 0x5c) = 1;
  *(int *)((intptr_t)this_ptr + 0x60) = 0;
  *(int *)((intptr_t)this_ptr + 0x24) = param_4;
  return;
}





void  FUN_10002150(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x58) = param_1;
  return;
}





void  FUN_10002160(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((intptr_t)this_ptr + 0x28,param_1);
  *(int *)((intptr_t)this_ptr + 0x30) = param_2;
  *(int *)((intptr_t)this_ptr + 0x34) = param_3;
  return;
}





void  FUN_10002190(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((intptr_t)this_ptr + 0x3c,param_1);
  *(int *)((intptr_t)this_ptr + 0x44) = param_2;
  *(int *)((intptr_t)this_ptr + 0x48) = param_3;
  return;
}





void  FUN_100021c0(void *this_ptr,int *param_1)

{
  *(int *)((intptr_t)this_ptr + 100) = *param_1;
  *(int *)((intptr_t)this_ptr + 0x68) = param_1[1];
  return;
}





BOOL  FUN_100021e0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 4);
  return iVar1 != 0;
}





int  FUN_10002200(intptr_t param_1)

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
  bVar1 = FUN_100021e0(param_1);
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





int  FUN_100022f0(int param_1)

{
  BOOL bVar1;
  int iVar2;
  
  bVar1 = FUN_100021e0(param_1);
  if (bVar1) {
    iVar2 = GetTotalAmount0(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x58) <= iVar2) {
      return 1;
    }
  }
  return 0;
}





void  FUN_10002320(int param_1)

{
  GetNUnits(param_1 + 0x1c);
  RemoveGroup(param_1 + 0x1c,param_1 + 0x6c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
  return;
}





void  FUN_10002350(int *param_1)

{
  BOOL bVar1;
  int uVar2;
  int iVar3;
  
  bVar1 = FUN_100021e0((intptr_t)param_1);
  if (bVar1) {
    FUN_10002200((intptr_t)param_1);
    uVar2 = FUN_100022f0((intptr_t)param_1);
    if ((char)uVar2 != '\0') {
      FUN_10001660(*param_1);
      SelectUnits(param_1 + 7,0);
      uVar2 = 0;
      iVar3 = rand();
      SelSendAndKill((char)*param_1,param_1 + 0x19,iVar3,uVar2);
      FUN_100016a0(*param_1);
      FUN_10002320((intptr_t)param_1);
    }
  }
  return;
}





void  FUN_100023b0(void *this_ptr,int *param_1,int *param_2)

{
  int uVar1;
  unsigned int uVar2;
  
  uVar1 = FUN_100022f0((intptr_t)this_ptr);
  if ((char)uVar1 != '\0') {
    uVar2 = rand();
    if ((uVar2 & 0xff) < 0xa0) {
      FUN_100021c0(this_ptr,param_1);
      FUN_10002350(this_ptr);
      return;
    }
    FUN_100021c0(this_ptr,param_2);
  }
  FUN_10002350(this_ptr);
  return;
}





void  FUN_10002400(int param_1)

{
  *(int *)(param_1 + 800) = 0;
  return;
}





int *  FUN_100024a0(int *param_1)

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





int  FUN_100024d0(void *this_ptr,int param_1)

{
  int uVar1;
  
  if (*(int *)this_ptr == param_1) {
    return 0;
  }
  FUN_10001660(*(int *)this_ptr);
  SelectUnits((intptr_t)this_ptr + 0xc,0);
  SelChangeNation(*(char *)this_ptr,param_1);
  uVar1 = FUN_100016a0(*(int *)this_ptr);
  *(int *)this_ptr = param_1;
  return uVar1;
}





BOOL  FUN_10002520(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  return 0 < iVar1;
}





int  FUN_10002540(int *param_1)

{
  int *puVar1;
  unsigned int uVar2;
  short asStack_58 [22];
  short asStack_2c [22];
  
  puVar1 = ((unsigned char *)&DAT_10011b28) + *param_1 * 8;
  if (*(int *)(((unsigned char *)&DAT_10011b2c) + *param_1 * 8) != 0x554e4954) {
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





int *  FUN_100025c0(int *param_1)

{
  FUN_100024a0(param_1);
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





int *  FUN_100025d0(void *this_ptr,int param_1,int param_2)

{
  FUN_100024a0(this_ptr);
  RegisterVar(this_ptr,0x35);
  RegisterUnits((intptr_t)this_ptr + 0xc,param_1);
  *(int *)this_ptr = param_2;
  *(char *)((intptr_t)this_ptr + 0x34) = 1;
  return this_ptr;
}





int  FUN_10002610(void *this_ptr,char param_1)

{
  BOOL bVar1;
  int extraout_var = 0;
  unsigned int uVar2;
  int uVar3;
  
  bVar1 = FUN_10002520((intptr_t)this_ptr);
  uVar2 = (int)bVar1;
  if (bVar1) {
    uVar2 = FUN_10002540(this_ptr);
    if ((char)uVar2 != '\0') {
      uVar3 = (int)(uVar2 >> 8);
      uVar2 = (intptr_t)param_1;
      if (param_1 != '\0') {
        uVar2 = (int)*(char *)((intptr_t)this_ptr + 0x34);
        if (*(char *)((intptr_t)this_ptr + 0x34) != '\0') {
          *(char *)((intptr_t)this_ptr + 0x34) = 0;
          return (int)1;
        }
        goto LAB_10002644;
      }
    }
    *(char *)((intptr_t)this_ptr + 0x34) = 1;
  }
LAB_10002644:
  return uVar2 & -256;
}





int *  FUN_10002650(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  FUN_100025c0(param_1);
  FUN_100024a0((int *)((intptr_t)param_1 + 0x3d));
  FUN_100026f0((intptr_t)param_1 + 0xa9);
  puVar2 = (int *)((intptr_t)param_1 + 0x3e5);
  iVar1 = 100;
  do {
    FUN_100024a0(puVar2);
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





int *  FUN_100026d0(int *param_1)

{
  FUN_100025c0(param_1);
  *(char *)((intptr_t)param_1 + 0x41) = 0;
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





int  FUN_100026f0(int param_1)

{
  FUN_10002400(param_1 + 0x10);
  *(int *)(param_1 + 0x334) = 0;
  return param_1;
}





int *  FUN_10002710(void *this_ptr,int param_1,int param_2)

{
  RegisterVar(this_ptr,5);
  *(int *)this_ptr = param_1;
  *(char *)((intptr_t)this_ptr + 4) = '\x01' << ((byte)param_1 & 0x1f);
  if (param_2 != 0) {
    SetPlayerName(param_1,param_2);
  }
  return this_ptr;
}





void  FUN_10002750(void *this_ptr,int param_1)

{
  SetResource(*(char *)this_ptr,3,param_1);
  SetResource(*(char *)this_ptr,0,param_1);
  SetResource(*(char *)this_ptr,2,param_1);
  SetResource(*(char *)this_ptr,1,param_1);
  SetResource(*(char *)this_ptr,4,param_1);
  SetResource(*(char *)this_ptr,5,param_1);
  return;
}





void  FUN_100027a0(void *this_ptr,int *param_1)

{
  int uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  bVar2 = *(byte *)((intptr_t)this_ptr + 4) | '\x01' << ((byte)uVar1 & 0x1f);
  *(byte *)((intptr_t)this_ptr + 4) = bVar2;
  ChangeFriends(*(char *)this_ptr,(int)bVar2);
  return;
}





int * 
FUN_100027d0(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  RegisterVar(this_ptr,0x30);
  RegisterUnitType((intptr_t)this_ptr + 8,param_1);
  RegisterUnitType((intptr_t)this_ptr + 0x18,param_3);
  *(int *)this_ptr = param_2;
  *(int *)((intptr_t)this_ptr + 4) = 0;
  *(int *)((intptr_t)this_ptr + 0x14) = 0;
  *(int *)((intptr_t)this_ptr + 0x20) = 0;
  *(int *)((intptr_t)this_ptr + 0x24) = 0;
  *(int *)((intptr_t)this_ptr + 0x10) = param_4;
  RegisterDynGroup((intptr_t)this_ptr + 0x28);
  return this_ptr;
}





unsigned int  FUN_10002830(void *this_ptr,void *param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  RefreshScreen();
  if ((*(int *)((intptr_t)this_ptr + 4) == 0) && (*(int *)((intptr_t)this_ptr + 0x14) == 0)) {
    ShowPage("#Menu_port3");
    return uVar1 & -256;
  }
  ShowPage("#Menu_port2");
  FUN_100024d0(param_1,6);
  iVar2 = 0;
  if (0 < *(int *)((intptr_t)this_ptr + 4)) {
    do {
      ProduceUnitFast((intptr_t)param_1 + 0xc,(intptr_t)this_ptr + 8,(intptr_t)this_ptr + 0x28,6);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((intptr_t)this_ptr + 4));
  }
  iVar2 = 0;
  if (0 < *(int *)((intptr_t)this_ptr + 0x14)) {
    do {
      ProduceUnitFast((intptr_t)param_1 + 0xc,(intptr_t)this_ptr + 0x18,(intptr_t)this_ptr + 0x28,6);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((intptr_t)this_ptr + 0x14));
  }
  *(int *)((intptr_t)this_ptr + 0x24) = 1;
  return 1;
}





void  FUN_100028f0(void *this_ptr,int param_1)

{
  char cVar1;
  
  if (*(int *)((intptr_t)this_ptr + 0x24) == 1) {
    cVar1 = CheckProduction(param_1 + 0xc);
    if (cVar1 != '\0') {
      ShowPage("#Menu_port4");
      ClearSelection(6);
      SelectUnits((intptr_t)this_ptr + 0x28,0);
      SelChangeNation(6,0);
      FUN_100010a0((intptr_t)this_ptr + 0x28);
      FUN_10002960((intptr_t)this_ptr);
      *(int *)((intptr_t)this_ptr + 0x24) = 0;
    }
  }
  return;
}





void  FUN_10002960(int param_1)

{
  *(int *)(param_1 + 4) = 0;
  *(int *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x20) = 0;
  return;
}





void __cdecl FUN_10002970(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (*(int *)(param_3 + 4) == 0x554e4954) {
    if (DAT_1002128c != 0x554e4954) {
      RegisterDynGroup(&DAT_10021288);
    }
    FUN_10001660(param_2);
    SelectUnitsInZone(param_1,param_2,0);
    SaveSelectedUnits(param_2,&DAT_10021288,0);
    FUN_100016a0(param_2);
    FUN_10001660(param_4);
    iVar1 = GetTotalAmount0(&DAT_10021288);
    if (iVar1 != 0) {
      SelectUnits(param_3,0);
      SelAttackGroup(param_4,&DAT_10021288);
      FUN_100016a0(param_4);
      return;
    }
    iVar1 = GetUnitsAmount1(param_5,param_3);
    if (iVar1 == 0) {
      FUN_100010d0(param_4,param_3,param_5,0);
    }
    FUN_100016a0(param_4);
  }
  return;
}





void 
FUN_10002a40(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  RegisterZone(this_ptr,param_1);
  RegisterZone((intptr_t)this_ptr + 8,param_2);
  RegisterZone((intptr_t)this_ptr + 0x10,param_3);
  RegisterZone((intptr_t)this_ptr + 0x18,param_4);
  return;
}





int *  FUN_10002a80(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  iVar1 = 0x32;
  puVar2 = param_1;
  do {
    FUN_100025c0(puVar2);
    puVar2 = (int *)((int)puVar2 + 0x47);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  RegisterVar(param_1,0xf29);
  *(short *)((intptr_t)param_1 + 0xf1e) = 0;
  param_1[0x3c8] = 0;
  param_1[0x3c9] = 6;
  return param_1;
}





int  FUN_10002ad0(intptr_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (*(short *)(param_1 + 0xf1e) != 0) {
    iVar2 = param_1 + 0xc;
    do {
      iVar1 = GetTotalAmount0(iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x47;
    } while (iVar4 < (int)(unsigned int)*(unsigned short *)(param_1 + 0xf1e));
    return iVar3;
  }
  return 0;
}





unsigned int  FUN_10002b20(void *this_ptr,unsigned int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int in_EAX;
  int uVar4;
  unsigned int uVar5;
  char auStack_2c [44];
  
  uVar2 = *(unsigned short *)((intptr_t)this_ptr + 0xf1e);
  if (0x31 < uVar2) {
    return in_EAX & -256;
  }
  *(unsigned short *)((intptr_t)this_ptr + 0xf1e) = uVar2 + 1;
  *(int *)((intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x35) = param_2;
  if (param_2 == 3) {
    uVar5 = *(unsigned int *)((intptr_t)this_ptr + 0xf20);
    if (param_1 == uVar5) goto LAB_10002b88;
  }
  else {
    if (param_1 == *(unsigned int *)((intptr_t)this_ptr + 0xf24)) goto LAB_10002b88;
    uVar5 = *(unsigned int *)((intptr_t)this_ptr + 0xf24) & 0xff;
  }
  SelChangeNation(param_1,uVar5);
LAB_10002b88:
  iVar1 = (intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0xc;
  SaveSelectedUnits(param_1,iVar1,0);
  iVar3 = *(int *)((intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x43);
  *(int *)((intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x3b) = 0;
  if (iVar3 != 0x554e4954) {
    RegisterDynGroup((intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x3f);
  }
  if (param_4 != 0) {
    RemoveGroup(param_4,(intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x3f);
  }
  uVar4 = GetUnitInfo(iVar1,0,auStack_2c);
  return (int)1;
}





void  FUN_10002bf0(void *this_ptr,int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX = 0;
  int iVar5;
  int local_74;
  int uStack_70;
  int uStack_6c;
  char auStack_68 [8];
  char auStack_60 [8];
  char auStack_58 [20];
  int uStack_44;
  int uStack_40;
  char auStack_2c [20];
  int uStack_18;
  int uStack_14;
  
  local_74 = 0;
  if (*(short *)((intptr_t)this_ptr + 0xf1e) != 0) {
    iVar5 = (intptr_t)this_ptr + 0xc;
    do {
      iVar3 = GetTotalAmount0(iVar5);
      if (iVar3 != 0) {
        FUN_10001660(*(int *)((intptr_t)this_ptr + 0xf20));
        FUN_10001660(*(int *)((intptr_t)this_ptr + 0xf24));
        UnitsCenter(auStack_60,iVar5,0x5dc);
        UnitsCenter(auStack_68,iVar5,200);
        switch(*(int *)(iVar5 + 0x29)) {
        case 0:
          iVar3 = (unsigned int)*(byte *)(iVar5 + 0x2d) * 0x20 + 0xdee + (intptr_t)this_ptr;
          iVar4 = GetUnitsAmount1(iVar3,iVar5);
          if (iVar4 == 0) {
            FUN_100010d0((int)*(char *)((intptr_t)this_ptr + 0xf24),iVar5,iVar3,0);
          }
          else {
            *(int *)(iVar5 + 0x29) = 1;
            iVar3 = GetGlobalTime();
            *(int *)(iVar5 + 0x2f) = iVar3 + 1000;
            GetUnitInfo(iVar5,0,auStack_58);
            uStack_44 = 0x3c00;
            uStack_40 = 0;
            SetUnitInfo(auStack_58);
          }
          FUN_10002970(auStack_60,0,iVar5 + 0x33,5,auStack_68);
          break;
        case 1:
          bVar1 = *(byte *)(iVar5 + 0x2d);
          iVar3 = GetGlobalTime();
          if (*(int *)(iVar5 + 0x2f) < iVar3) {
            *(int *)(iVar5 + 0x29) = 2;
            GetZoneCoor((unsigned int)bVar1 * 0x20 + 0xdf6 + (intptr_t)this_ptr,&uStack_70,&uStack_6c);
            GetUnitInfo(iVar5,0,auStack_2c);
            uStack_18 = uStack_70;
            uStack_14 = uStack_6c;
            SetUnitInfo(auStack_2c);
          }
          break;
        case 2:
          iVar3 = (unsigned int)*(byte *)(iVar5 + 0x2d) * 0x20 + 0xde6 + (intptr_t)this_ptr;
          iVar4 = GetUnitsAmount1(iVar3,iVar5);
          if (iVar4 == 0) {
            FUN_100010d0((unsigned int)*(byte *)((intptr_t)this_ptr + 0xf24),iVar5,iVar3,0);
          }
          else {
            *(int *)(iVar5 + 0x29) = 3;
            iVar3 = GetGlobalTime();
            *(int *)(iVar5 + 0x2f) = iVar3 + 400;
            SelectUnits(iVar5,0);
            SelChangeNation(*(char *)((intptr_t)this_ptr + 0xf24),*(char *)((intptr_t)this_ptr + 0xf20));
          }
          FUN_10002970(auStack_60,0,iVar5 + 0x33,5,auStack_68);
          break;
        case 3:
          iVar3 = GetGlobalTime();
          if (*(int *)(iVar5 + 0x2f) < iVar3) {
            *(char *)((intptr_t)this_ptr + 0xf28) = (char)local_74;
            cVar2 = ((int(*)())param_1)();
            if (cVar2 == '\0') {
              iVar3 = GetGlobalTime();
              *(int *)(iVar5 + 0x2f) = iVar3 + 400;
            }
            else {
              *(int *)(iVar5 + 0x29) = 0;
              SelectUnits(iVar5,0);
              SelChangeNation(*(char *)((intptr_t)this_ptr + 0xf20),*(char *)((intptr_t)this_ptr + 0xf24))
              ;
            }
          }
        }
        FUN_100016a0(*(int *)((intptr_t)this_ptr + 0xf20));
        FUN_100016a0(*(int *)((intptr_t)this_ptr + 0xf24));
      }
      local_74 = local_74 + 1;
      iVar5 = iVar5 + 0x47;
    } while (local_74 < (int)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 0xf1e));
  }
  return;
}





void  FUN_10002e90(void *this_ptr,int param_1,int param_2)

{
  *(int *)((intptr_t)this_ptr + 0xf20) = param_1;
  *(int *)((intptr_t)this_ptr + 0xf24) = param_2;
  return;
}







void FUN_10002eb0(void)

{
  void *extraout_ECX;
  
  FUN_10002ec8();
  DAT_100271f8_ovl = FUN_10003226();
  FUN_100031d6(extraout_ECX);
  return;
}





void FUN_10002ec8(void)

{
  return;
}





int __cdecl FUN_10002f27(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}





int __cdecl FUN_10002f4c(int param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_10003767();
  pbVar1 = (byte *)FUN_10003ac2(DAT_10028950);
  if (pbVar1 < DAT_1002894c + (4 - (int)DAT_10028950)) {
    SVar2 = FUN_10003ac2(DAT_10028950);
    pbVar1 = FUN_10003793(DAT_10028950,(unsigned int *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10002fc1;
    }
    DAT_1002894c = pbVar1 + ((int)DAT_1002894c - (int)DAT_10028950 >> 2) * 4;
    DAT_10028950 = pbVar1;
  }
  *(int *)DAT_1002894c = param_1;
  DAT_1002894c = DAT_1002894c + 4;
LAB_10002fc1:
  FUN_10003770();
  return param_1;
}





int __cdecl FUN_10002fca(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10002f4c(param_1);
  return (iVar1 != 0) - 1;
}





void OnInit(void)

{
                    
  RegisterZone(&DAT_100232b0,"z_relative");
  RegisterUpgrade(&DAT_10011bb8,"AKA25EN");
  RegisterUnits(&DAT_10011b78,"del0_0");
  RegisterUnits(&DAT_10011b70,"del0_1");
  RegisterUnits(&DAT_10011b88,"del1_0");
  RegisterUnits(&DAT_10011b80,"del1_1");
  RegisterUnits(&DAT_10021298,"del_dif0");
  RegisterUnits(&DAT_10023200,"cors_patr");
  RegisterZone(&DAT_10023270,"z_cors2_patr");
  FUN_100020a0(&DAT_100232c8,DAT_100234c0,"cors0",0x1000e204,100);
  FUN_100020a0(&DAT_10023340,DAT_100234c0,"cors1",0x1000e1f4,100);
  FUN_100020a0(&DAT_100233b8,DAT_100234c0,"cors2",0x1000e1e4,100);
  FUN_100020a0(&DAT_10023430,DAT_100234c0,"cors3",0x1000e1d4,100);
  FUN_100020a0(&DAT_100212a0,DAT_100234c0,DAT_1000e1c4,0,0x20);
  FUN_100020a0(&DAT_10021318,DAT_100234c0,DAT_1000e1bc,0,0x20);
  RegisterZone(&DAT_10023288,"z_cors0_patr");
  RegisterZone(&DAT_10023290,"z_port0");
  RegisterZone(&DAT_10023280,DAT_1000e19c);
  RegisterUnitType(&DAT_10011b90,"Mushketer_ev(en)");
  RegisterUnitType(&DAT_10011ba8,"Konni_Ricar(en)");
  RegisterUnitType(&DAT_10021290,"Yahta(sp)");
  RegisterUnitType(&DAT_100232c0,"KECH(en)");
  RegisterUnitType(&DAT_10023278,"KECH(sp)");
  RegisterZone(&DAT_100234b8,"z_help");
  RegisterZone(&DAT_10023298,"z_ai1");
  RegisterZone(&DAT_100232a0,"z_ai3");
  RegisterZone(&DAT_10011b98,"z_cors2");
  RegisterZone(&DAT_10011ba0,"z_cors3");
  RegisterZone(&DAT_100232a8,"z_port1");
  RunTimer(0,1000);
  RunTimer(1,1000);
  FUN_10002a40(&DAT_100230ae,"z_dock1","z_port1","z_gate_in0",
               "z_gate_out0");
  FUN_10002e90(&DAT_100222d0,DAT_100234a8,DAT_100234a8);
  FUN_10002a40(&DAT_1002217e,"z_ai1_dock","z_ai1","z_gate_in1",
               "z_gate_out1");
  FUN_10002e90(&DAT_100213a0,DAT_100234c0,DAT_100234c0);
  RegisterUnits(&DAT_10021390,"parom0");
  RegisterUnits(&DAT_10021398,"parom2");
  RegisterZone(&DAT_10011b68,DAT_1000e19c);
  SetDestPoint(&DAT_10023244,&DAT_10011b68);
  InitialUpgrade("netral_port","AKA06FR");
  FUN_100027a0(&DAT_10011e58,&DAT_10011aa8);
  FUN_100027a0(&DAT_100234a8,&DAT_10011aa8);
  FUN_100027a0(&DAT_100234c0,(int *)&DAT_100234b1);
  FUN_100027a0(&DAT_10011ab0,(int *)&DAT_100234b1);
  FUN_100027a0(&DAT_10011ab8,(int *)&DAT_100234b1);
  SetTrigg(1,0);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  void *pcVar5;
  unsigned int uVar6;
  
                    
  cVar1 = Trigg(0);
  if (cVar1 != '\0') {
    SetTrigg(0,0);
    ShowPage("#Entry");
    SelectUnits(&DAT_10021390,0);
    FUN_10002b20(&DAT_100222d0,6,0,0,0);
    SelectUnits(&DAT_10021398,0);
    FUN_10002b20(&DAT_100222d0,6,0,0,0);
    DisableUpgrade((char)DAT_10011aa8,&DAT_10011bb8);
    ClearSelection(DAT_100234c0 & 0xff);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetLightSpot(&DAT_100232b0,4,0);
      SelectUnits(&DAT_10011b78,1);
      SelectUnits(&DAT_10011b70,1);
      SelectUnits(&DAT_10021298,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetLightSpot(&DAT_100232b0,1,0);
      SelectUnits(&DAT_10011b88,1);
      SelectUnits(&DAT_10011b80,1);
    }
    SelErase(DAT_100234c0 & 0xff);
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      DisableMission(0x53);
      DisableMission(0x44);
    }
    SelectUnits(&DAT_10023200,0);
    Patrol(DAT_100234c0 & 0xff,&DAT_10023270,0);
    iVar3 = GetDiff(0);
    iVar2 = iVar3 + 2;
    FUN_10002150(&DAT_100232c8,iVar2);
    FUN_10002150(&DAT_10023340,iVar2);
    FUN_10002150(&DAT_100233b8,iVar2);
    FUN_10002150(&DAT_10023430,iVar2);
    iVar2 = iVar3 * -200 + 0xdac;
    FUN_10002160(&DAT_100232c8,"Yahta(en)",iVar2,200);
    FUN_10002190(&DAT_100232c8,"GALERA(en)",iVar2,100);
    FUN_10002160(&DAT_10023340,"Yahta(HO)",iVar2,200);
    FUN_10002190(&DAT_10023340,"GALERA(HO)",iVar2,100);
    FUN_10002160(&DAT_100233b8,"Yahta(fr)",iVar2,200);
    FUN_10002190(&DAT_100233b8,"GALERA(fr)",iVar2,100);
    FUN_10002160(&DAT_10023430,"Yahta(sp)",iVar2,200);
    FUN_10002190(&DAT_10023430,"GALERA(sp)",iVar2,100);
    FUN_10002160(&DAT_100212a0,"Pikiner_evro(fr)",0x96,200);
    FUN_10002190(&DAT_100212a0,"Mushketer_ev(fr)",400,100);
    FUN_10002160(&DAT_10021318,"Pikiner_evro(sp)",0x96,200);
    FUN_10002190(&DAT_10021318,"Strelec_Spain(sp)",400,100);
    iVar2 = GetDiff(0);
    FUN_10002750(&DAT_10011aa8,(6 - iVar2) * 1000);
    FUN_10002750(&DAT_10011e58,6000);
    FUN_10002750(&DAT_100234b1,6000);
    FUN_10002750(&DAT_10011ab0,6000);
    FUN_10002750(&DAT_10011ab8,6000);
    StartAI(DAT_10011e58,"ENGLAND.0",3,0,0,-1);
    StartAI(DAT_100234b1,"SPAIN.0",0,0,0,-1);
    StartAI(DAT_10011ab0,"SPAIN.0",3,0,0,-1);
    StartAI(DAT_10011ab8,"FRANCE.0",3,0,0,-1);
  }
  cVar1 = NationIsErased(DAT_100234b1);
  if (cVar1 != '\0') {
    ShowPage("#victory");
    ShowVictory();
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(DAT_10011ab0), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#ai1_death");
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(DAT_10011ab8), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#ai3_death");
  }
  cVar1 = NationIsErased((char)DAT_10011aa8);
  if (cVar1 != '\0') {
    ShowPage("#defeat");
    LooseGame();
  }
  cVar1 = TimerDone(0);
  if (((cVar1 != '\0') && (iVar2 = FUN_10002ad0((intptr_t)&DAT_100222d0), iVar2 < 3)) &&
     (iVar2 = GetUnitsAmount0(&DAT_100232a8,DAT_100234a8 & 0xff), iVar2 == 0)) {
    RunTimer(0,4000);
    CreateObject0(&DAT_100232b8,&DAT_10011bb0,&DAT_100232c0,DAT_100234a8 & 0xff,&DAT_100232a8,100);
    AddResource(DAT_10011e58,1,-200);
    SelectUnits(&DAT_100232b8,0);
    FUN_10002b20(&DAT_100222d0,DAT_100234a8,0,0,0);
  }
  cVar1 = TimerDone(1);
  if (((cVar1 != '\0') && (iVar2 = FUN_10002ad0((intptr_t)&DAT_100213a0), iVar2 < 4)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10023298,DAT_100234c0 & 0xff), iVar2 == 0)) {
    RunTimer(1,4000);
    CreateObject0(&DAT_100232b8,&DAT_10011bb0,&DAT_10023278,DAT_100234c0 & 0xff,&DAT_10023298,100);
    AddResource(DAT_100234b1,1,-200);
    SelectUnits(&DAT_100232b8,0);
    FUN_10002b20(&DAT_100213a0,DAT_100234c0,0,0,0);
  }
  UnitsCenter(&DAT_1002324c,&DAT_10023244,1000);
  iVar2 = GetUnitsAmount1(&DAT_1002324c,&DAT_100271c4);
  uVar6 = DAT_100234a8;
  if (iVar2 != 0) {
    cVar1 = Trigg(1);
    if (cVar1 == '\0') {
      SetTrigg(1,0);
      ShowPage("#Ali0");
    }
    uVar6 = DAT_100271b8;
    if (DAT_1002322c != 0) goto LAB_10001c9d;
  }
  FUN_100024d0(&DAT_10023238,uVar6);
LAB_10001c9d:
  FUN_10002610(&DAT_100271b8,'\x01');
  uVar4 = FUN_10002610(&DAT_10023238,'\x01');
  if ((char)uVar4 != '\0') {
    FUN_10001d60();
  }
  FUN_100028f0(&DAT_10023208,(intptr_t)&DAT_10023238);
  FUN_10002200((intptr_t)&DAT_100232c8);
  FUN_10002200((intptr_t)&DAT_10023340);
  FUN_10002200((intptr_t)&DAT_100233b8);
  FUN_10002200((intptr_t)&DAT_10023430);
  FUN_10002200((intptr_t)&DAT_100212a0);
  FUN_10002200((intptr_t)&DAT_10021318);
  FUN_100023b0(&DAT_100232c8,(int *)&DAT_10023288,(int *)&DAT_10023290);
  FUN_100023b0(&DAT_10023340,(int *)&DAT_10023280,(int *)&DAT_10023288);
  FUN_100023b0(&DAT_100233b8,(int *)&DAT_10023290,(int *)&DAT_10023280);
  FUN_100023b0(&DAT_10023430,(int *)&DAT_10023290,(int *)&DAT_10023280);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
