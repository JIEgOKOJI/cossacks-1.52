#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
long long DAT_1003b040 = 0;
long long DAT_1003b04c = 0;
long long DAT_1003b050 = 0;
char DAT_1003b0f8[] = "GB7";
char DAT_1003b0fc[] = "GB6";
char DAT_1003b100[] = "GB5";
char DAT_1003b104[] = "GB4";
char DAT_1003b108[] = "GB3";
char DAT_1003b10c[] = "GB2";
char DAT_1003b110[] = "GK";
char DAT_1003b114[] = "Z5";
char DAT_1003b118[] = "Z4";
char DAT_1003b11c[] = "Z3";
char DAT_1003b120[] = "Z7";
char DAT_1003b124[] = "Z2";
char DAT_1003b128[] = "Z6";
char DAT_1003b12c[] = "Z1";
long long DAT_1003b138 = 0;
long long DAT_1003b13c = 0;
long long DAT_1003ed50 = 0;
int DAT_1003ed5c = 50;
int DAT_1003ed60 = 4;
int DAT_1003ed64 = 800;
int DAT_1003ed68 = 2;
int DAT_1003edb0 = 0;
int DAT_1003edb4 = 0;
int DAT_1003edb8 = 0;
long long DAT_10040c88 = 0;
long long DAT_10040c8c = 0;
long long DAT_10040c90 = 0;
long long DAT_10040ca0 = 0;
int DAT_10040cc8 = 0;
long long DAT_10040cd8 = 0;
long long DAT_10040ce0 = 0;
long long DAT_10040ce8 = 0;
long long DAT_10041008 = 0;
long long DAT_10041010 = 0;
long long DAT_10041018 = 0;
long long DAT_100410b8 = 0;
long long DAT_100410c0 = 0;
long long DAT_100410c8 = 0;
long long DAT_100410d0 = 0;
long long DAT_100410d8 = 0;
long long DAT_100410e0 = 0;
long long DAT_100410e8 = 0;
long long DAT_10041100 = 0;
long long DAT_10041108 = 0;
long long DAT_10041110 = 0;
long long DAT_10041118 = 0;
long long DAT_10041120 = 0;
long long DAT_10041128 = 0;
long long DAT_10041130 = 0;
long long DAT_10041138 = 0;
long long DAT_10041140 = 0;
int DAT_10041148 = 0;
int DAT_1004114a = 0;
int DAT_1004114c = 0;
long long DAT_10041150 = 0;
long long DAT_10041158 = 0;
long long DAT_10041160 = 0;
int DAT_10041210 = 0;
long long DAT_10041218 = 0;
long long DAT_10041220 = 0;
long long DAT_10041228 = 0;
long long DAT_10041230 = 0;
int DAT_10041350 = 0;
int DAT_100413a0 = 0;
int DAT_100413a4 = 0;
int DAT_100413a8 = 0;
int DAT_100413ac = 0;
int DAT_100413b0 = 0;
int DAT_100413b4 = 0;
int DAT_100413b8 = 0;
int DAT_100413bc = 0;
int DAT_100413d8 = 0;
long long DAT_100413dc = 0;
int *DAT_10042f14 = 0;
int DAT_10042f18 = 0;
int DAT_1003b040_ovl = 776530087;
int DAT_1003b04c_ovl = 1065353216;
int DAT_1003b050_ovl = 1120403456;
int DAT_1003b138_ovl = 1176256512;
int DAT_1003b13c_ovl = 1078530041;
int DAT_10040c88_ovl = 0;
int DAT_10040c8c_ovl = 0;

/* Stubs for missing internal functions */
int FUN_1000a4d4() { return 0; }
int FUN_1000a4dd() { return 0; }
int FUN_1000a584() { return 0; }
int FUN_1000a58d() { return 0; }
int FUN_1000a634() { return 0; }
int FUN_1000a63d() { return 0; }
int FUN_1000ab30() { return 0; }
int FUN_1000aec0() { return 0; }
int FUN_1000b3e0() { return 0; }
int FUN_1000bcd8() { return 0; }
int FUN_1000c720() { return 0; }
int FUN_1000c7c0() { return 0; }
int FUN_1000c850() { return 0; }
int FUN_1000ccb0() { return 0; }
int FUN_1000d2b0() { return 0; }
int FUN_1000d6f0() { return 0; }
int FUN_1000f520() { return 0; }
int FUN_1000f7a0() { return 0; }
int FUN_1000f9e0() { return 0; }
int FUN_1000f9f0() { return 0; }


/* Forward declarations */
void FUN_10001830(int param_1,char param_2,char param_3);
void FUN_100018f0(int param_1,char param_2);
void FUN_100019b0(int param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_10001ad0(char *param_1);
char * 
FUN_100022d0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void 
FUN_10002360(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void  FUN_10002480(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
void  FUN_100025d0(int param_1);
void FUN_10002650(unsigned int param_1);
void  FUN_100026c0(int param_1);
unsigned int *  FUN_10002720(void *this_ptr,unsigned int *param_1,byte param_2);
void  FUN_100027d0(void *this_ptr,int param_1,char param_2);
int FUN_10002930(char param_1);
void FUN_100029c0(void);
void FUN_10002a00(void);
void FUN_10002a50(void);
void FUN_10002a90(void);
void FUN_10002ad0(void);
void FUN_10002b20(void);
void FUN_10002b90(int param_1,char param_2);
void FUN_10003050(void);
void FUN_10003090(void);
void  FUN_100030d0(int param_1);
void  FUN_10003130(int param_1);
void  FUN_100031c0(int param_1);
void FUN_100037e0(void);
void FUN_10003db0(unsigned short *param_1,int param_2);
void FUN_10003f90(int param_1);
void FUN_10004050(unsigned short *param_1,int param_2);
void FUN_100041c0(int param_1,int param_2);
void FUN_100044d0(int param_1);
void FUN_10004670(int param_1);
void FUN_10004710(int param_1);
void FUN_10004840(void);
void FUN_100049c0(int param_1,int param_2);
void FUN_10004aa0(void);
void FUN_10005d70(int param_1);
void FUN_10005e10(int param_1);
void FUN_10005eb0(void);
void  FUN_10005f10(int param_1);
void  FUN_10005f70(int param_1);
void  FUN_10005fe0(int param_1);
void  FUN_10006040(int param_1);
int  FUN_100060a0(int param_1);
void  FUN_100060d0(int param_1);
void  FUN_10006130(void *this_ptr,int param_1);
void  FUN_10006170(void *this_ptr,int param_1);
void  FUN_100061f0(void *this_ptr,int param_1,int param_2);
void  FUN_10006310(void *this_ptr,int param_1);
void  FUN_10006350(void *this_ptr,int param_1);
void  FUN_10006390(int param_1);
void  FUN_10006440(void *this_ptr,int param_1);
void  FUN_10006480(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100064e0(void *this_ptr,int param_1);
void  FUN_100065b0(int param_1);
void  FUN_10006640(void *this_ptr,unsigned int param_1);
int  FUN_100066c0(int param_1);
void  FUN_100066f0(void *this_ptr,int param_1);
void  FUN_10006770(void *this_ptr,int param_1);
void  FUN_100067e0(int param_1);
void  FUN_10006850(void *this_ptr,int param_1);
void  FUN_100068c0(void *this_ptr,int param_1);
void  FUN_10006900(int param_1);
void  FUN_10006970(void *param_1);
void  FUN_100069f0(void *this_ptr,int param_1);
void  FUN_10006a50(void *param_1);
void  FUN_10006ad0(void *this_ptr,int param_1);
void  FUN_10006b10(int param_1);
void  FUN_10006b60(int param_1);
void  FUN_10006bb0(void *this_ptr,int param_1,int param_2);
void  FUN_10006c00(void *param_1);
void  FUN_10006ef0(void *param_1);
void  FUN_10006f80(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006fe0(void *param_1);
void  FUN_10007060(void *this_ptr,int param_1);
void FUN_100070d0(short *param_1);
void  FUN_10007170(void *this_ptr,int param_1);
void  FUN_100071b0(void *this_ptr,int param_1);
void  FUN_100071f0(void *this_ptr,int param_1);
void  FUN_10007230(void *this_ptr,void *param_1);
int  FUN_100072a0(int param_1);
int  FUN_100072e0(int param_1);
void  FUN_10007310(void *param_1);
int FUN_100075a0(void);
void  FUN_100075d0(void *this_ptr,int param_1,int param_2);
void  FUN_10007640(void *this_ptr,int param_1);
void  FUN_100076b0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10007750(void *this_ptr,int param_1,int param_2);
int  FUN_100078a0(int param_1);
void  FUN_100078e0(int param_1);
void  FUN_10007950(void *this_ptr,int param_1);
void  FUN_100079d0(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10007a70(int param_1);
void  FUN_10007ac0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10007b90(int param_1);
void  FUN_10007c40(int param_1);
void  FUN_10007ce0(int param_1);
void  FUN_10007d60(int param_1);
void FUN_10007f70(int param_1);
void FUN_10007fa0(int param_1,int param_2,int param_3);
void  FUN_10008020(int param_1);
void  FUN_10008250(void *this_ptr,int *param_1);
void  FUN_10008380(int param_1);
void  FUN_10008420(int param_1);
int  FUN_10008490(int param_1);
void  FUN_100084d0(void *this_ptr,int param_1);
void  FUN_10008530(void *param_1);
void  FUN_10008740(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_100088d0(int param_1,int param_2,int param_3,int param_4);
void  FUN_100089d0(int param_1);
void  FUN_10008a70(int param_1);
int  FUN_10008ae0(int param_1);
void  FUN_10008b20(void *this_ptr,int *param_1);
void  FUN_10008c50(int param_1);
void  FUN_10008d90(void *this_ptr,int param_1);
void  FUN_10008df0(int param_1);
void  FUN_10008e80(int param_1);
void 
FUN_10008ef0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10008f90(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10009040(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10009100(char *param_1);
void  FUN_10009240(char *param_1);
void  FUN_10009310(char *param_1);
int  FUN_100093e0(int param_1);
void  FUN_10009420(void *this_ptr,int param_1);
void  FUN_10009480(void *this_ptr,int param_1);
void  FUN_10009500(void *this_ptr,int param_1);
void  FUN_100095f0(void *this_ptr,int param_1,int param_2);
int  FUN_10009680(int param_1);
void 
FUN_100096c0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5);
void  FUN_10009790(int param_1);
void  FUN_100098d0(int param_1);
int  FUN_10009990(int param_1);
void  FUN_100099c0(void *this_ptr,int param_1);
void  FUN_10009a40(void *param_1);
void  FUN_10009a90(void *this_ptr,unsigned int *param_1);
void  FUN_10009b10(void *this_ptr,int param_1);
void  FUN_10009b80(void *this_ptr,int param_1,byte param_2);
void  FUN_10009c00(void *this_ptr,int param_1);
int  FUN_10009c50(int param_1);
void  FUN_10009c80(int param_1);
void  FUN_10009ce0(int param_1);
void  FUN_10009d80(int param_1);
void  FUN_10009de0(int param_1);
void  FUN_10009e40(void *this_ptr,int param_1);
void  FUN_10009eb0(void *this_ptr,int param_1);
void  FUN_10009f40(void *this_ptr,int param_1);
void  FUN_10009fd0(void *this_ptr,char param_1);
void FUN_1000a010(void);
void FUN_1000a040(int param_1);
void  FUN_1000a0e0(void *param_1);
void  FUN_1000a1d0(int param_1);
void  FUN_1000a250(int param_1);
void FUN_1000a4c0(void);
void FUN_1000a570(void);
void FUN_1000a620(void);
void FUN_1000a6c0(void);
void FUN_1000a6f0(void);
void FUN_1000a700(void);
int FUN_1000a750(int param_1);
void  FUN_1000a7a0(void *this_ptr,void *param_1);
void FUN_1000a850(void *param_1);
int FUN_1000aa60(int *param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
int FUN_1000abc0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_1000ad26(void);
int FUN_1000ad40(int param_1);
int FUN_1000ae00(int param_1);
void FUN_1000ae70(DWORD param_1);


void __cdecl FUN_10001830(int param_1,char param_2,char param_3)

{
  int iVar1;
  int extraout_EDX;
  int *puVar2;
  int local_54 [16];
  long long local_14;
  char local_c [4];
  int uStack_8;
RegisterDynGroup(local_c);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,local_c,0);
  ProcessScenary(local_c,(unsigned short)(int)param_3);
  uStack_8 = 0x100018bf;
  return;
}





void __cdecl FUN_100018f0(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  long long local_14;
  char local_c [4];
  int uStack_8;
RegisterDynGroup(local_c);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,local_c,0);
  OnInit(local_c);
  uStack_8 = 0x1000197b;
  return;
}







void __cdecl FUN_100019b0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *puVar2;
  long double fVar3;
  long long lVar4;
  int local_80 [16];
  double local_40;
  double local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  long long local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
local_8 = param_3;
  local_c = param_4;
  local_10 = param_1;
  local_14 = param_2;
  local_2c = param_2 - param_4;
  local_30 = param_1 - param_3;
  fVar3 = (long double)FUN_1000a634(local_2c);
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_1003b040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_1000a584(*(int*)((char*)&local_1c + 4));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_1000a4d4((int)local_1c);
  lVar4 = 0;
  local_24 = (int)lVar4;
  return;
}





void  FUN_10001ad0(char *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  char *local_8;
*param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  *(int *)(param_1 + 8) = 0;
  local_8 = param_1;
  FUN_10002360(param_1,8,3,0x15,0,200,3,0x50);
  FUN_10002360(local_8,8,3,0x18,0,200,3,0x50);
  FUN_10002360(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002360(local_8,8,2,8,0,0x5a,3,0x32);
  FUN_10002360(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002360(local_8,8,2,0x16,0,0x1e,3,0x32);
  FUN_10002360(local_8,8,3,0x17,0,1000,3,0x5a);
  FUN_10002360(local_8,8,3,0xf,0,1000,3,0x5a);
  FUN_10002360(local_8,0x15,2,0xf,0,300,3,0x1e);
  FUN_10002360(local_8,0x15,2,0x14,0,300,3,0x1e);
  FUN_10002360(local_8,0x15,2,0x15,0,300,3,0x1e);
  FUN_10002360(local_8,0x15,2,0x18,0,300,3,0x1e);
  FUN_10002360(local_8,0x15,2,0x16,0,300,3,0x1e);
  FUN_10002360(local_8,0x15,2,0xb,0,300,3,0x1e);
  FUN_10002360(local_8,0x15,2,8,0,300,3,0x1e);
  FUN_10002360(local_8,0x15,3,0x17,0,1000,3,0x5a);
  FUN_10002360(local_8,0x15,2,10,0,500,3,0x1e);
  FUN_10002360(local_8,0x15,1,0x16,1,0x14,4,0x50);
  FUN_10002360(local_8,0x15,1,0x14,1,10,4,0x50);
  FUN_10002360(local_8,0x15,2,8,1,0x1e,4,0x50);
  FUN_10002360(local_8,0x15,2,0x15,1,100,4,0x50);
  FUN_10002360(local_8,0x14,2,0x14,0,500,3,0x50);
  FUN_10002360(local_8,0x14,2,0x16,0,500,3,0x50);
  FUN_10002360(local_8,0x14,2,0x15,0,500,3,0x50);
  FUN_10002360(local_8,0x14,3,0x17,0,1000,3,0x5a);
  FUN_10002360(local_8,0xf,2,0x15,0,300,3,0x50);
  FUN_10002360(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002360(local_8,0xf,2,8,0,300,3,0x32);
  FUN_10002360(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002360(local_8,0xf,2,0x16,0,300,3,0x32);
  FUN_10002360(local_8,0xf,2,0x17,0,300,3,0x5a);
  FUN_10002360(local_8,0xf,2,0xf,0,300,3,0x5a);
  FUN_10002360(local_8,0xf,2,0x18,0,300,3,0x1e);
  FUN_10002360(local_8,0xb,2,0x15,0,300,3,0x50);
  FUN_10002360(local_8,0xb,2,0x18,0,300,3,0x50);
  FUN_10002360(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002360(local_8,0xb,2,8,0,300,3,0x32);
  FUN_10002360(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002360(local_8,0xb,2,0x16,0,300,3,0x32);
  FUN_10002360(local_8,0xb,2,0x17,0,300,3,0x5a);
  FUN_10002360(local_8,0xb,2,0xf,0,300,3,0x5a);
  FUN_10002360(local_8,0xb,2,0xb,0,300,3,0x1e);
  FUN_10002360(local_8,0xb,2,10,0,500,3,0x1e);
  FUN_10002360(local_8,0x18,2,0x15,0,300,3,0x50);
  FUN_10002360(local_8,0x18,2,0x18,0,300,3,0x50);
  FUN_10002360(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002360(local_8,0x18,2,8,0,300,3,0x32);
  FUN_10002360(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002360(local_8,0x18,2,0x16,0,300,3,0x32);
  FUN_10002360(local_8,0x18,2,0x17,0,300,3,0x5a);
  FUN_10002360(local_8,0x18,2,0xf,0,300,3,0x5a);
  FUN_10002360(local_8,0x16,2,0x15,0,500,3,0x50);
  FUN_10002360(local_8,0x16,2,0x18,0,500,3,0x50);
  FUN_10002360(local_8,0x16,2,0x14,0,500,3,0x32);
  FUN_10002360(local_8,0x16,2,8,0,500,3,0x32);
  FUN_10002360(local_8,0x16,2,0xb,0,500,3,0x32);
  FUN_10002360(local_8,0x16,2,0x16,0,500,3,0x32);
  FUN_10002360(local_8,0x16,2,0x17,0,500,3,0x5a);
  FUN_10002360(local_8,0x16,2,0xf,0,500,3,0x5a);
  FUN_10002360(local_8,0x16,2,0xb,0,500,3,0x1e);
  FUN_10002360(local_8,0x16,2,10,0,500,2,0x1e);
  FUN_10002360(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (char *)0x1000212c;
  return;
}





char * 
FUN_100022d0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)this_ptr = param_1;
  *(char *)((int)this_ptr + 1) = param_2;
  *(char *)((int)this_ptr + 2) = param_3;
  *(short *)((int)this_ptr + 3) = param_5;
  *(char *)((int)this_ptr + 5) = param_6;
  *(char *)((int)this_ptr + 6) = param_7;
  *(char *)((int)this_ptr + 7) = param_4;
  *(int *)((int)this_ptr + 8) = 0;
  return this_ptr;
}





void 
FUN_10002360(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7)

{
  int iVar1;
  int *puVar2;
  int local_60 [16];
  char *local_20;
  void *local_1c;
  char *local_18;
  void *local_14;
  void *local_10;
  char *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
local_14 = this_ptr;
  if (*(int *)((int)this_ptr + 8) == 0) {
    FUN_1000a850((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = FUN_100022d0(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(char **)((int)local_14 + 8) = local_20;
  }
  else {
    FUN_10002360(*(void **)((int)this_ptr + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  return;
}





void  FUN_10002480(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  void *pvVar1;
  unsigned int uVar2;
  int iVar3;
  void *pvVar4;
  int *puVar5;
  int local_4c [16];
  int local_c;
  void *local_8;
local_c = 0;
  pvVar4 = (void *)(unsigned int)*(byte *)this_ptr;
  pvVar1 = this_ptr;
  if (pvVar4 == (void *)(param_1 & 0xff)) {
    pvVar4 = (void *)(unsigned int)*(byte *)((int)this_ptr + 1);
    if (pvVar4 == (void *)(param_2 & 0xff)) {
      pvVar4 = (void *)(unsigned int)*(byte *)((int)this_ptr + 2);
      if (pvVar4 == (void *)(param_3 & 0xff)) {
        pvVar4 = (void *)0x0;
        if ((*(char *)((int)this_ptr + 7) != '\0') &&
           (pvVar4 = (void *)(unsigned int)*(unsigned short *)((int)this_ptr + 3), pvVar4 < (void *)(param_4 & 0xffff)))
        {
LAB_1000252a:
          local_c = (unsigned int)*(byte *)((int)this_ptr + 5) * 100 + (unsigned int)*(byte *)((int)this_ptr + 6);
          goto LAB_1000256c;
        }
        pvVar1 = (void *)(unsigned int)*(byte *)((int)this_ptr + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(unsigned int)*(unsigned short *)((int)this_ptr + 3);
          if (pvVar4 < pvVar1) goto LAB_1000252a;
        }
      }
    }
  }
  if (*(int *)((int)this_ptr + 8) != 0) {
    uVar2 = (int)(short)param_4;
    local_8 = this_ptr;
    FUN_10002480(*(void **)((int)this_ptr + 8),
                                 (int)(char)param_1,
                                 (int)(char)param_2,
                                 (int)(char)param_3,uVar2);
  }
LAB_1000256c:
  local_8 = (void *)0x1000257c;
  return;
}





void  FUN_100025d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
if (*(int *)(param_1 + 8) != 0) {
    local_10 = *(int *)(param_1 + 8);
    local_c = local_10;
    if (local_10 == 0) {
      local_14 = 0;
    }
    else {
      local_8 = param_1;
      FUN_10002650(1);
    }
  }
  return;
}





void FUN_10002650(unsigned int param_1)

{
  void *in_ECX;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = in_ECX;
  FUN_100025d0((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_1000a7a0(local_8,local_8);
  }
  local_8 = (void *)0x1000269b;
  return;
}





void  FUN_100026c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1 + 0x20);
  return;
}





unsigned int *  FUN_10002720(void *this_ptr,unsigned int *param_1,byte param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_54 [16];
  int local_14;
  unsigned int local_10;
  char uStack_c;
local_10 = (unsigned int)param_2;
  uStack_c = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if ((&DAT_1003ed50)[local_14] == param_2) {
      uVar1 = *(int *)((int)this_ptr + local_14 * 4);
      *(int*)((char*)&local_10 + 1) = (int)uVar1;
      uStack_c = (char)((unsigned int)uVar1 >> 0x18);
      local_14 = 8;
    }
  }
  *param_1 = local_10;
  *(char *)(param_1 + 1) = uStack_c;
  return param_1;
}





void  FUN_100027d0(void *this_ptr,int param_1,char param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  int local_80 [16];
  int *local_40;
  char local_3c [18];
  char local_2a;
  int local_10;
  int local_c;
  void *local_8;
  
  iVar1 = -0x33333334;
local_c = 0;
  while (local_c < 8) {
    *(int *)((int)this_ptr + local_c * 4) = 0;
    iVar1 = local_c + 1;
    local_c = iVar1;
  }
  local_8 = this_ptr;
  SelectUnitsInZone(param_1,(int)param_2,0);
  SaveSelectedUnits(param_2,(int)local_8 + 0x20,0);
  local_10 = GetTotalAmount0((int)local_8 + 0x20);
  for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
    GetUnitInfo((int)local_8 + 0x20,local_c,local_3c);
    uVar2 = FUN_10002930(local_2a);
    local_40 = (int *)((int)local_8 + (uVar2 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x100028dc;
  return;
}





int FUN_10002930(char param_1)

{
  byte bVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_50 [16];
  byte local_10;
  byte local_c;
  
  uVar2 = 0xcccccc;
local_c = 0;
  bVar1 = 0;
  while (bVar1 < 8) {
    uVar2 = 0;
    local_10 = bVar1;
    if ((&DAT_1003ed50)[bVar1] == param_1) {
      local_10 = 8;
      local_c = bVar1;
    }
    bVar1 = local_10 + 1;
  }
  return (int)local_c;
}





void FUN_100029c0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002a00();
  uStack_8 = 0x100029ea;
  return;
}





void FUN_10002a00(void)

{
  int *puVar1;
  int iVar2;
  int *puVar3;
  int local_6c [16];
  char local_2c [36];
  int uStack_8;
FUN_100026c0((int)local_2c);
  puVar3 = &DAT_10040ca0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x10002a3b;
  return;
}





void FUN_10002a50(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002a90();
  FUN_10002ad0();
  uStack_8 = 0x10002a7f;
  return;
}





void FUN_10002a90(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001ad0(&DAT_10040c90);
  uStack_8 = 0x10002abf;
  return;
}





void FUN_10002ad0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_1000ae00(0x10002b20);
  uStack_8 = 0x10002b02;
  return;
}





void FUN_10002b20(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_10040cc8 & 1) == 0) {
    DAT_10040cc8 = DAT_10040cc8 | 1;
    FUN_100025d0(0x10040c90);
  }
  uStack_8 = 0x10002b6c;
  return;
}







void FUN_10002b90(int param_1,char param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int extraout_ECX;
  int *puVar4;
  long long lVar5;
  unsigned short local_58;
  short uStack_56;
  float local_54;
  int local_50;
  unsigned short local_4c;
  short uStack_4a;
  int local_48;
  unsigned short local_44;
  short uStack_42;
  int local_40;
  char local_3c [18];
  char local_2a;
  int local_10;
  unsigned int local_c;
  int local_8;
local_c = local_c & 0xffff0000;
  local_10 = GetTotalAmount0(param_1);
  GetUnitInfo(param_1,0,local_3c);
  UnitsCenter(local_8,param_1,500);
  FUN_100027d0(&DAT_10040ca0,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)(&DAT_10040ca0)[local_40]) {
      uVar2 = ((&DAT_10040ca0)[local_40] * 100) / local_10;
      FUN_10002480(&DAT_10040c90,(int)local_2a,1,
                                 (int)(&DAT_1003ed50)[local_40],uVar2);
      local_44 = (int)uVar1;
      if ((local_c & 0xffff) / 100 < uVar1 / 100) {
        local_c = (int)uVar1;
      }
      if (uVar1 / 100 == (local_c & 0xffff) / 100) {
        local_c = (int)(short)(((local_c & 0xffff) + (unsigned int)uVar1) / 2);
      }
    }
  }
  if ((local_c & 0xffff) == 0) {
    UnitsCenter(local_8,param_1,1000);
    FUN_100027d0(&DAT_10040ca0,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)(&DAT_10040ca0)[local_48]) {
        uVar2 = ((&DAT_10040ca0)[local_48] * 100) / local_10;
        FUN_10002480(&DAT_10040c90,(int)local_2a,2,
                                   (int)(&DAT_1003ed50)[local_48],uVar2);
        local_4c = (int)uVar1;
        if ((local_c & 0xffff) / 100 < uVar1 / 100) {
          local_c = (int)uVar1;
        }
        if (uVar1 / 100 == (local_c & 0xffff) / 100) {
          local_c = (int)(short)(((local_c & 0xffff) + (unsigned int)uVar1) / 2);
        }
      }
    }
  }
  if ((local_c & 0xffff) == 0) {
    UnitsCenter(local_8,param_1,2000);
    FUN_100027d0(&DAT_10040ca0,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)(&DAT_10040ca0)[local_50]) {
        local_54 = ((float)(int)(&DAT_10040ca0)[local_50] * DAT_1003b050_ovl) / (float)local_10;
        if (local_54 < DAT_1003b04c_ovl) {
          local_54 = 1.0;
        }
        lVar5 = 0;
        FUN_10002480(&DAT_10040c90,(int)local_2a,
                                   3,(int)(&DAT_1003ed50)[local_50],(unsigned int)lVar5);
        local_58 = (int)uVar1;
        if ((local_c & 0xffff) / 100 < uVar1 / 100) {
          local_c = (int)uVar1;
        }
        if (uVar1 / 100 == (local_c & 0xffff) / 100) {
          local_c = (int)(short)(((local_c & 0xffff) + (unsigned int)uVar1) / 2);
        }
      }
    }
  }
  return;
}





void FUN_10003050(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10003090();
  uStack_8 = 0x1000307a;
  return;
}







void FUN_10003090(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
DAT_10040c88_ovl = local_c;
  DAT_10040c8c_ovl = local_8;
  return;
}





void  FUN_100030d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10003130(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(param_1 + 0x10,param_1);
  iVar1 = GetTotalAmount0(local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_100031c0(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  BOOL bVar5;
  int local_64;
  long long local_60;
  long long local_58;
  long long local_50;
  long long local_48;
  long long local_40;
  long long local_38;
  long long local_30;
  long long local_28;
  long long local_20;
  long long local_18;
  long long local_10;
  int local_8;
local_8 = param_1;
  if (param_1 == -0x10) {
    UnitsCenter(0,0xfffffff0,1000);
  }
  iVar3 = GetTotalAmount0(local_8);
  if (0 < iVar3) {
    UnitsCenter(local_8 + 8,local_8,1000);
    FUN_10003130(local_8);
    if (cVar1 == '\0') {
      iVar3 = GetUnitsAmount0(local_8 + 8,*(char *)(local_8 + 0x1e));
      if (iVar3 < 4) {
        SelectUnits(local_8,0);
        SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,
                       *(char *)(local_8 + 0x18),0);
        goto LAB_10003632;
      }
    }
    FUN_10002b90(local_8,*(char *)(local_8 + 0x1e));
    local_64 = (uVar2 & 0xffff) / 100 - 1;
    switch(local_64) {
    case 0:
      SelectUnits(local_8,0);
      SetStandGround(*(char *)(local_8 + 0x1d),1);
      break;
    case 1:
      SelectUnits(local_8,0);
      SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,*(char *)(local_8 + 0x18),
                     0);
      break;
    case 2:
      AttackEnemyInZone(local_8,local_8 + 8,
                        (int)*(char *)(local_8 + 0x1e));
      break;
    case 3:
      FUN_10001830(local_8 + 8,*(char *)(local_8 + 0x1d),0x14);
      local_10 = local_28;
      if ((int)local_28 == 0) {
        FUN_10001830(local_8 + 8,*(char *)(local_8 + 0x1d),0xf);
        local_10 = local_30;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        FUN_10001830(local_8 + 8,*(char *)(local_8 + 0x1d),0xb);
        local_10 = local_38;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        FUN_10001830(local_8 + 8,*(char *)(local_8 + 0x1d),0x16);
        local_10 = local_40;
      }
      FUN_100018f0(local_8 + 8,*(char *)(local_8 + 0x1e));
      local_18 = local_48;
      FUN_100019b0((int)local_10,*(int*)((char*)&local_10 + 4),(int)local_48,
                                    (int)((unsigned long long)local_48 >> 0x20),400);
      (*(short*)&local_20) = (short)local_50;
      *(short *)(local_8 + 8) = (short)local_20;
      *(short*)((char*)&local_20 + 4) = (short)((unsigned long long)local_50 >> 0x20);
      *(short *)(local_8 + 10) = *(short*)((char*)&local_20 + 4);
      local_20 = local_50;
      SelectUnits(local_8,0);
      SelSendTo(*(char *)(local_8 + 0x1d),local_8 + 8,*(char *)(local_8 + 0x18),0);
      break;
    case 4:
      (*(int*)&local_10) = *(unsigned short *)(local_8 + 8) - 0x96;
      *(int*)((char*)&local_10 + 4) = *(unsigned short *)(local_8 + 10) - 0x96;
      FUN_100018f0(local_8 + 8,0);
      local_18 = local_58;
      FUN_100019b0((int)local_10,*(int*)((char*)&local_10 + 4),(int)local_58,
                                    (int)((unsigned long long)local_58 >> 0x20),800);
      (*(short*)&local_20) = (short)local_60;
      *(short *)(local_8 + 8) = (short)local_20;
      *(short*)((char*)&local_20 + 4) = (short)((unsigned long long)local_60 >> 0x20);
      *(short *)(local_8 + 10) = *(short*)((char*)&local_20 + 4);
      local_20 = local_60;
      SelectUnits(local_8,0);
      SelSendTo(*(char *)(local_8 + 0x1d),local_8 + 8,*(char *)(local_8 + 0x18),0);
      break;
    default:
      SelectUnits(local_8,0);
      SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,*(char *)(local_8 + 0x18),
                     0);
    }
  }
LAB_10003632:
  return;
}





void FUN_100037e0(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
DVar1 = FUN_1000aec0((int *)0x0);
  FUN_1000ae70(DVar1);
  SetPlayerName(0,"RUSSIA");
  SetPlayerName(1,"RUSSIA");
  SetPlayerName(2,"RUSSIA");
  RegisterZone(&DAT_100410b8,DAT_1003b12c);
  RegisterZone(&DAT_100410e0,DAT_1003b128);
  RegisterZone(&DAT_100410c0,DAT_1003b124);
  RegisterZone(&DAT_100410e8,DAT_1003b120);
  RegisterZone(&DAT_100410c8,DAT_1003b11c);
  RegisterZone(&DAT_100410d0,DAT_1003b118);
  RegisterZone(&DAT_100410d8,DAT_1003b114);
  RegisterUnits(&DAT_10041010,DAT_1003b110);
  RegisterUnits(&DAT_10041108,DAT_1003b10c);
  RegisterUnits(&DAT_10041110,DAT_1003b108);
  RegisterUnits(&DAT_10041118,DAT_1003b104);
  RegisterUnits(&DAT_10041120,DAT_1003b100);
  RegisterUnits(&DAT_10041128,DAT_1003b0fc);
  RegisterUnits(&DAT_10041130,DAT_1003b0f8);
  RegisterDynGroup(&DAT_10041160);
  RegisterFormation(&DAT_10041218,"#ODIN");
  RegisterFormation(&DAT_10041008,"#LINE6");
  RegisterDynGroup(&DAT_10041100);
  RegisterDynGroup(&DAT_10040cd8);
  RegisterVar(&DAT_10041160,8);
  RegisterVar(&DAT_10041100,8);
  RegisterVar(&DAT_10040cd8,8);
  RegisterUpgrade(&DAT_10041228,"Strelec(RU)ATTACK");
  RegisterUpgrade(&DAT_10041230,"Strelec(RU)SHIELD");
  RegisterUnitType(&DAT_10041150,"Strelec(RU)");
  RegisterUnitType(&DAT_10041138,"Tiagoli_koval_rus(RU)");
  RegisterUnitType(&DAT_10041140,"Tiagoli_kozak(RU)");
  RegisterUnitType(&DAT_10040ce0,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10041220,"Pik_rus(RU)");
  for (local_8 = 0; local_8 < 0x32; local_8 = local_8 + 1) {
    RegisterDynGroup(&DAT_10040ce8 + local_8 * 0x10);
    RegisterVar(&DAT_10040ce8 + local_8 * 0x10,0x10);
  }
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    RegisterDynGroup(&DAT_10041018 + local_8 * 0x10);
    RegisterVar(&DAT_10041018 + local_8 * 0x10,0x10);
  }
  DAT_10041148 = 0;
  DAT_1004114a = 0;
  DAT_1004114c = 0x40000000;
  RegisterDynGroup(&DAT_10041158);
  RegisterVar(&DAT_10041210,4);
  return;
}







void __cdecl FUN_10003db0(unsigned short *param_1,int param_2)

{
  int iVar1;
  int extraout_ECX;
  int *puVar2;
  long long lVar3;
  int local_6c [16];
  double local_2c;
  double local_24;
  int local_1c;
  float local_18;
  int local_14;
  unsigned int local_10;
  unsigned int local_c;
  unsigned int local_8;
local_8 = *(unsigned int *)(param_1 + 2) & 0xffffff;
  local_c = (unsigned int)*param_1;
  local_10 = (unsigned int)param_1[1];
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_1c = rand();
    local_1c = local_1c % 10000;
    local_18 = ((float)local_1c * DAT_1003b13c_ovl + (float)local_1c * DAT_1003b13c_ovl) / DAT_1003b138_ovl;
    local_24 = (double)(int)local_8;
    FUN_1000a4d4(10000);
    lVar3 = 0;
    param_1[1] = (short)local_10 + (short)lVar3;
    local_2c = (double)(int)local_8;
    FUN_1000a584(extraout_ECX);
    lVar3 = 0;
    *param_1 = (short)local_c + (short)lVar3;
    if (local_14 % 3 == 0) {
      iVar1 = rand();
      CreateObject0(&DAT_10040ce8 + local_14 * 0x10,&DAT_10041218,&DAT_10041220,1,param_1,
                    iVar1 % 0xff);
    }
    else {
      iVar1 = rand();
      CreateObject0(&DAT_10040ce8 + local_14 * 0x10,&DAT_10041218,&DAT_10041150,1,param_1,
                    iVar1 % 0xff);
    }
  }
  return;
}





void __cdecl FUN_10003f90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
local_8 = local_8 & 0xffffff00;
  iVar1 = GetTotalAmount0(param_1);
  if (0 < iVar1) {
    UnitsCenter(param_1 + 8,param_1,0x96);
    GetUnitsAmount1(param_1 + 8,&DAT_10041100);
  }
  return;
}







void __cdecl FUN_10004050(unsigned short *param_1,int param_2)

{
  int iVar1;
  int extraout_ECX;
  int *puVar2;
  long long lVar3;
  int local_6c [16];
  double local_2c;
  double local_24;
  int local_1c;
  float local_18;
  int local_14;
  unsigned int local_10;
  unsigned int local_c;
  unsigned int local_8;
local_8 = *(unsigned int *)(param_1 + 2) & 0xffffff;
  local_c = (unsigned int)*param_1;
  local_10 = (unsigned int)param_1[1];
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_1c = rand();
    local_1c = local_1c % 10000;
    local_18 = ((float)local_1c * DAT_1003b13c_ovl + (float)local_1c * DAT_1003b13c_ovl) / DAT_1003b138_ovl;
    local_24 = (double)(int)local_8;
    FUN_1000a4d4(10000);
    lVar3 = 0;
    param_1[1] = (short)local_10 + (short)lVar3;
    local_2c = (double)(int)local_8;
    FUN_1000a584(extraout_ECX);
    lVar3 = 0;
    *param_1 = (short)local_c + (short)lVar3;
    iVar1 = rand();
    CreateObject0(&DAT_10041018 + local_14 * 0x10,&DAT_10041008,&DAT_10041140,3,param_1,iVar1 % 0xff
                 );
  }
  return;
}





void __cdecl FUN_100041c0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int uVar3;
  int local_48 [16];
  unsigned int local_8;
local_8 = local_8 & 0xffffff00;
  iVar1 = GetUnitsByNation(param_1,3);
  if (0 < iVar1) {
    UnitsCenter(param_1 + 8,param_1,1000);
    if (param_2 != 0) {
      iVar1 = GetUnitsAmount0(param_1 + 8,1);
      if (0 < iVar1) {
        SelectUnitsInZone(param_1 + 8,1,0);
        SelCenter(&DAT_10041148,1,100);
        *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (*(short *)(param_1 + 8) - DAT_10041148)
        ;
        *(short *)(param_1 + 10) =
             *(short *)(param_1 + 10) + (*(short *)(param_1 + 10) - DAT_1004114a);
        SelectUnits(param_1,0);
        uVar3 = 0;
        iVar1 = rand();
        SelSendTo(3,param_1 + 8,iVar1 % 0xff,uVar3);
      }
    }
    iVar1 = GetUnitsAmount1(param_1 + 8,&DAT_10041100);
    if (0 < iVar1) {
      UnitsCenter(param_1 + 8,&DAT_10041100,200);
      uVar3 = 0;
      iVar1 = rand();
      SelSendTo(3,param_1 + 8,iVar1 % 0xff,uVar3);
      UnitsCenter(param_1 + 8,param_1,200);
      iVar1 = GetUnitsAmount1(param_1 + 8,&DAT_10041100);
      if (0 < iVar1) {
        SelectUnits(param_1,0);
        SelChangeNation(3,0);
        AddResource(0,3,500);
      }
    }
  }
  return;
}





void __cdecl FUN_100044d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int uVar3;
  int local_44 [15];
  int uStack_8;
iVar1 = GetUnitsByNation(param_1,3);
  if (0 < iVar1) {
    UnitsCenter(param_1 + 8,param_1,400);
    iVar1 = rand();
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (1000 - (short)(iVar1 % 2000));
    iVar1 = rand();
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (1000 - (short)(iVar1 % 2000));
    SelectUnits(param_1,0);
    iVar1 = rand();
    if (iVar1 % 5 == 0) {
      SelectUnits(&DAT_10041100,0);
      SelCenter(param_1 + 8,0,400);
    }
    uVar3 = 0;
    iVar1 = rand();
    SelSendAndKill(3,param_1 + 8,iVar1 % 0xff,uVar3);
  }
  uStack_8 = 0x1000460e;
  return;
}





void __cdecl FUN_10004670(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
local_8 = local_8 & 0xffffff00;
  UnitsCenter(param_1 + 8,param_1,0x96);
  GetUnitsAmount0(param_1 + 8,0);
  return;
}





void __cdecl FUN_10004710(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int local_44 [15];
  int uStack_8;
FUN_10004670(param_1);
  if (cVar1 == '\0') {
    UnitsCenter(param_1 + 8,param_1,400);
    iVar2 = rand();
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (200 - (short)(iVar2 % 400));
    iVar2 = rand();
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (200 - (short)(iVar2 % 400));
    SelectUnits(param_1,0);
    uVar4 = 0;
    iVar2 = rand();
    SelSendTo(1,param_1 + 8,iVar2 % 0xff,uVar4);
  }
  uStack_8 = 0x100047fd;
  return;
}





void FUN_10004840(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10005e10(&DAT_10041160);
  SelectTypeOfUnitsInZone(&DAT_100410c0,&DAT_10040ce0,3,0);
  SelectTypeOfUnitsInZone(&DAT_100410c8,&DAT_10040ce0,3,1);
  SelectTypeOfUnitsInZone(&DAT_100410d0,&DAT_10040ce0,3,1);
  SelectTypeOfUnitsInZone(&DAT_100410d8,&DAT_10040ce0,3,1);
  SelectTypeOfUnitsInZone(&DAT_100410e0,&DAT_10040ce0,3,1);
  SelectTypeOfUnitsInZone(&DAT_100410e8,&DAT_10040ce0,3,1);
  SaveSelectedUnits(3,&DAT_10041160,0);
  TakeWood(&DAT_10041160);
  uStack_8 = 0x10004964;
  return;
}





void __cdecl FUN_100049c0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
local_8 = local_8 & 0xffffff00;
  iVar1 = GetUnitsAmount0(param_1,1);
  if (iVar1 == 0) {
    SelectTypeOfUnitsInZone(param_1,&DAT_10040ce0,3,0);
    SelChangeNation(3,0);
    SelectUnits(param_2,0);
    SelChangeNation(3,0);
  }
  return;
}





void FUN_10004aa0(void)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int uVar6;
  int local_58 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
uVar2 = Trigg(99);
  if ((uVar2 & 0xff) != 0) {
    DAT_10041210 = GetDiff(0);
    SetResource(0,3,100);
    SetResource(0,1,0);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,0);
    SetResource(0,4,0);
    ChangeFriends(3,0xb);
    ChangeFriends(1,0xb);
    EnableUnit(0,&DAT_10041150,0);
    DisableUpgrade(0,&DAT_10041228);
    DisableUpgrade(0,&DAT_10041230);
    SelectUnits(&DAT_10041010,0);
    SaveSelectedUnits(0,&DAT_10041100,0);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
    DisableMission(0x49);
    RunTimer(0x1e,0x96);
    SetTrigg(99,0);
  }
  uVar2 = TimerDoneFirst(0x1e);
  if ((uVar2 & 0xff) != 0) {
    ShowPage("#PAGE0");
    DAT_10041148 = 0x21ca;
    DAT_1004114a = 0x1ce8;
    DAT_1004114c = (DAT_1004114c & 0xff000000) + 0x5dc;
    DAT_1003ed5c = DAT_10041210 * 5 + 0x23;
    FUN_10003db0(&DAT_10041148,DAT_1003ed5c);
    DAT_10041148 = 9000;
    DAT_1004114a = 8000;
    DAT_1004114c = (DAT_1004114c & 0xff000000) + 0x16a8;
    FUN_10004050(&DAT_10041148,10);
    FUN_10004840();
    RunTimer(1,200);
    RunTimer(2,200);
  }
  uVar2 = Trigg(100);
  if ((uVar2 & 0xff) == 0) goto LAB_10005995;
  SaveSelectedUnits(0,&DAT_10041158,0);
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    uVar2 = Trigg(0xd);
    FUN_100041c0((int)(&DAT_10041018 + local_8 * 0x10),uVar2 & 0xff);
    if (cVar1 != '\0') {
      uVar2 = Trigg(0xb);
      if ((uVar2 & 0xff) != 0) {
        DisableMission(0x45);
        EnableMission(0x46);
        EnableMission(0x47);
        ShowPage("#PAGE5");
        UnitsCenter(&DAT_10041148,&DAT_10041100,100);
        SelectUnits(&DAT_10041100,0);
        SelErase(0);
        iVar3 = rand();
        CreateObject0(&DAT_10041100,&DAT_10041218,&DAT_10041138,0,&DAT_10041148,iVar3 % 0xff);
        SetTrigg(0xb,0);
        if (DAT_10041210 < 1) {
          SetLightSpot(&DAT_100410c0,0,2);
          SetLightSpot(&DAT_100410c8,0,3);
          SetLightSpot(&DAT_100410d0,0,4);
          SetLightSpot(&DAT_100410d8,0,5);
          SetLightSpot(&DAT_100410e0,0,6);
          SetLightSpot(&DAT_100410e8,0,7);
        }
      }
    }
  }
  uVar2 = TimerDoneFirst(2);
  if ((uVar2 & 0xff) != 0) {
    for (local_c = 0; local_c < 10; local_c = local_c + 1) {
      iVar4 = local_c % 3;
      iVar3 = GetGlobalTime();
      if (iVar4 == iVar3 % 3) {
        FUN_100044d0((int)(&DAT_10041018 + local_c * 0x10));
      }
    }
    RunTimer(2,300);
  }
  uVar2 = Trigg(0xd);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = TimerDoneFirst(1);
    if ((uVar2 & 0xff) != 0) {
      for (local_10 = 0; local_10 < DAT_1003ed5c; local_10 = local_10 + 1) {
        iVar4 = local_10 % 3;
        iVar3 = GetGlobalTime();
        if (iVar4 == iVar3 % 3) {
          FUN_10004710((int)(&DAT_10040ce8 + local_10 * 0x10));
        }
      }
      RunTimer(1,0x96);
    }
    uVar2 = Trigg(2);
    if ((uVar2 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_100410b8,&DAT_10041100);
      if (iVar3 == 0) {
        RunTimer(3,1000);
        DisableMission(0x43);
        EnableMission(0x44);
        EnableMission(0x45);
        SetTrigg(2,0);
      }
    }
    uVar2 = TimerDoneFirst(3);
    if ((uVar2 & 0xff) != 0) {
      ChangeFriends(1,2);
      SetTrigg(5,0);
      ShowPage("#PAGE6");
      for (local_14 = 0; local_14 < DAT_10041210 * 2 + 4; local_14 = local_14 + 1) {
        iVar3 = rand();
        CreateObject0(&DAT_10041160,&DAT_10041218,&DAT_10041150,1,&DAT_100410b8,iVar3 % 0xff);
        RemoveGroup(&DAT_10041160,&DAT_10040cd8);
      }
      RunTimer(7,(3 - DAT_10041210) * 100 + 1000);
    }
    uVar2 = TimerDoneFirst(7);
    if ((uVar2 & 0xff) != 0) {
      SelectUnits(&DAT_10040cd8,0);
      UnitsCenter(&DAT_10041148,&DAT_10041100,300);
      uVar6 = 2;
      iVar3 = rand();
      SelSendAndKill(1,&DAT_10041148,iVar3 % 0xff,uVar6);
      RunTimer(7,(3 - DAT_10041210) * 100 + 1000);
    }
    uVar2 = Trigg(5);
    if ((uVar2 & 0xff) != 0) {
      for (local_18 = 0; local_18 < DAT_1003ed5c; local_18 = local_18 + 1) {
        FUN_10003f90((int)(&DAT_10040ce8 + local_18 * 0x10));
        if (cVar1 != '\0') {
          ShowPage("#PAGE8");
          ChangeFriends(1,2);
          SetTrigg(5,0);
        }
      }
    }
    FUN_100049c0(&DAT_100410c0,&DAT_10041108);
    if (cVar1 == '\0') {
      FUN_100049c0(&DAT_100410c8,&DAT_10041110);
      if (cVar1 == '\0') {
        FUN_100049c0(&DAT_100410d0,&DAT_10041118);
        if (cVar1 == '\0') {
          FUN_100049c0(&DAT_100410d8,&DAT_10041120);
          if (cVar1 == '\0') {
            FUN_100049c0(&DAT_100410e0,&DAT_10041128);
            if (cVar1 == '\0') {
              FUN_100049c0(&DAT_100410e8,&DAT_10041130);
              if (cVar1 == '\0') goto LAB_100057cb;
            }
          }
        }
      }
    }
    DisableMission(0x47);
    EnableMission(0x48);
    EnableMission(0x49);
    ChangeFriends(3,9);
    SetTrigg(0xd,0);
    AddResource(0,3,DAT_10041210 * -3000 + 10000);
    SetResource(0,1,DAT_10041210 * -3000 + 10000);
    SetResource(0,0,DAT_10041210 * -3000 + 10000);
    SetResource(0,2,DAT_10041210 * -3000 + 10000);
    SetResource(0,5,0);
    SetResource(0,4,DAT_10041210 * -3000 + 10000);
    SetResource(1,3,3000);
    SetResource(1,1,3000);
    SetResource(1,0,3000);
    SetResource(1,2,3000);
    SetResource(1,5,10000);
    SetResource(1,4,3000);
    if (DAT_10041210 < 1) {
      ClearLightSpot(2);
      ClearLightSpot(3);
      ClearLightSpot(4);
      ClearLightSpot(5);
      ClearLightSpot(6);
      ClearLightSpot(7);
    }
    ShowPage("#PAGE7");
    StartAI(1,"RUSSIA.0",0,0,0,DAT_10041210);
  }
LAB_100057cb:
  uVar2 = NationIsErased(1);
  if ((uVar2 & 0xff) != 0) {
    ShowPage("#PAGE2");
    ShowVictory();
    SetTrigg(100,0);
  }
  uVar2 = Trigg(5);
  if ((uVar2 & 0xff) == 0) {
    iVar3 = GetUnitsByNation(&DAT_10041100,1);
    if (iVar3 == 1) {
      ShowPage("#PAGE1");
      LooseGame();
      SetTrigg(100,0);
    }
  }
  iVar3 = GetTotalAmount0(&DAT_10041100);
  if (iVar3 == 0) {
    ShowPage("#PAGE3");
    LooseGame();
    SetTrigg(100,0);
  }
  uVar2 = Trigg(0xd);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = NationIsErased(0);
    if ((uVar2 & 0xff) != 0) {
      ShowPage("#PAGE4");
      LooseGame();
      SetTrigg(100,0);
    }
  }
  ClearSelection(0);
  SelectUnits(&DAT_10041158,0);
LAB_10005995:
  return;
}





void __cdecl FUN_10005d70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  unsigned int local_c;
  unsigned int local_8;
local_8 = local_8 & 0xffffff00;
  local_c = local_c & 0xffffff00;
  while ((local_c & 0xff) < 8) {
    iVar1 = GetUnitsByNation(param_1,local_c & 0xff);
    if (0 < iVar1) {
      local_8 = (int)(char)local_c;
      local_c = (int)8;
    }
    local_c = (int)(char)local_c + '\x01';
  }
  return;
}





void __cdecl FUN_10005e10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
while( 1 ) {
    iVar1 = GetTotalAmount0(param_1);
    if (iVar1 == 0) break;
    RemoveUnitFromGroup(param_1,0);
  }
  GetTotalAmount0(param_1);
  uStack_8 = 0x10005e84;
  return;
}





void FUN_10005eb0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x10005ef9;
  return;
}





void  FUN_10005f10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10005f70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005f10(param_1);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}





void  FUN_10005fe0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_10006040(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_10005fe0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_100060a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100060d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10006130(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_10006170(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((int)this_ptr + 8,*(int *)((int)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x100061c8;
  return;
}





void  FUN_100061f0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10005fe0(this_ptr);
  if (iVar2 == 0) {
    ClearSelection(*(char *)((int)local_8 + 0x10));
    for (local_c = 0; uVar1 = (int)((unsigned int)local_c >> 8), local_c < param_2;
        local_c = local_c + 1) {
      CreateObject0(local_8,*(int *)((int)local_8 + 0x1c),
                    *(int *)((int)local_8 + 0x18),
                    (int)*(char *)((int)local_8 + 0x10),param_1,0);
      SelectUnits(local_8,1);
    }
    SaveSelectedUnits((int)*(char *)((int)local_8 + 0x10),local_8,0);
  }
  local_8 = (void *)0x100062c7;
  return;
}





void  FUN_10006310(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10006350(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10006390(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  for (local_10 = 0; (int)local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = GetUnitsByNation(local_8,local_10 & 0xff);
    if (0 < iVar1) {
      local_c = local_10;
      local_10 = 8;
    }
  }
  *(unsigned int *)(local_8 + 0x10) = local_c;
  return;
}





void  FUN_10006440(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10006480(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  *(int *)((int)this_ptr + 0x1c) = param_2;
  *(int *)((int)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_100064e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  char local_34 [4];
  unsigned short local_30;
  unsigned short uStack_2e;
  void *local_8;
local_8 = this_ptr;
  GetUnitInfo(this_ptr,0,local_34);
  if ((int)((unsigned int)local_30 + param_1) < (int)(unsigned int)uStack_2e) {
    local_30 = local_30 + (short)param_1;
  }
  if ((int)(unsigned int)uStack_2e <= (int)((unsigned int)local_30 + param_1)) {
    local_30 = uStack_2e;
  }
  SetUnitInfo(local_34);
  local_8 = (void *)0x10006580;
  return;
}





void  FUN_100065b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_7c [16];
  unsigned int local_3c;
  unsigned int local_38;
  char local_34 [4];
  unsigned short local_30;
  unsigned short uStack_2e;
  int local_8;
local_8 = param_1;
  GetUnitInfo(param_1,0,local_34);
  local_38 = (unsigned int)local_30;
  local_3c = (unsigned int)uStack_2e;
  0;
  return;
}





void  FUN_10006640(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005f10(this_ptr);
  SelChangeNation(*(char *)((int)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((int)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10006698;
  return;
}





int  FUN_100066c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100066f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005f10(this_ptr);
  SelSendTo(*(char *)((int)local_8 + 0x10),param_1,0,0);
  *(int *)((int)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000674c;
  return;
}





void  FUN_10006770(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005f10(this_ptr);
  Patrol(*(char *)((int)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x100067c1;
  return;
}





void  FUN_100067e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetUnitsAmount1(*(int *)(param_1 + 0x20),param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10006850(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  iVar1 = GetUnitsAmount1(param_1,this_ptr);
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100068a3;
  return;
}





void  FUN_100068c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10006900(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005f10(param_1);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_10006970(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10006040(param_1);
  if (cVar1 != '\0') {
    FUN_10006a50(local_8);
    FUN_100065b0(local_8);
    if (iVar2 < 10) {
      FUN_100066f0(local_8,*(int *)((int)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x100069cf;
  return;
}





void  FUN_100069f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10006a36;
  return;
}





void  FUN_10006a50(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  uVar4 = 0;
  local_8 = param_1;
  FUN_10006170(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10006aab;
  return;
}





void  FUN_10006ad0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10006b10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10006b60(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10006b60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100060d0(param_1);
  return;
}





void  FUN_10006bb0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x24) = param_1;
  *(int *)((int)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10006c00(void *param_1)

{
  char cVar1;
  void *this_ptr;
  int uVar2;
  int iVar3;
  int *puVar4;
  void *pvVar5;
  int uVar6;
  int local_50 [16];
  int local_10;
  int local_c;
  void *local_8;
if (((*(char *)((int)param_1 + 0x2c) != '\0') &&
      (local_8 = param_1, FUN_10006040(param_1), cVar1 != '\0')) &&
     (*(int *)((int)local_8 + 0x10) != 0)) {
    if (*(int *)((int)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_10006170(local_8,600);
      iVar3 = GetUnitsAmount0(uVar2,uVar6);
      if ((0 < iVar3) && (*(int *)((int)local_8 + 0x28) != 0)) {
        local_c = *(int *)((int)local_8 + 0x24);
        switch(local_c) {
        case 0:
          ShowPageParam("#PAGE1_0",*(int *)((int)local_8 + 0x28));
          break;
        case 1:
          ShowPageParam("#PAGE1_1",*(int *)((int)local_8 + 0x28));
          break;
        case 2:
          ShowPageParam("#PAGE1_2",*(int *)((int)local_8 + 0x28));
          break;
        case 3:
          ShowPageParam("#PAGE1_3",*(int *)((int)local_8 + 0x28));
          break;
        case 4:
          ShowPageParam("#PAGE1_4",*(int *)((int)local_8 + 0x28));
          break;
        case 5:
          ShowPageParam("#PAGE1_5",*(int *)((int)local_8 + 0x28));
        }
        local_10 = AskMultilineQuestion(7,"#PAGE3",0,"FM10_A|FM10_B");
        if (local_10 == 0) {
          FUN_10006640(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10005f70((int)local_8);
        }
        AddResource(0,*(char *)((int)local_8 + 0x24),*(int *)((int)local_8 + 0x28));
        FUN_10006bb0(local_8,0,0);
      }
    }
    else {
      FUN_100065b0(local_8);
      if (iVar3 < 0x32) {
        FUN_10006ef0(local_8);
      }
      FUN_100067e0((int)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_100070d0(*(short **)((int)local_8 + 0x20));
        FUN_10007230(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10006e32;
  return;
}





void  FUN_10006ef0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10006640(param_1,6);
  FUN_10005f10(local_8);
  uVar5 = 0;
  uVar4 = 0;
  FUN_10006170(local_8,100);
  SelSendTo(*(char *)((int)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10006900((int)local_8);
  local_8 = (void *)0x10006f5c;
  return;
}





void  FUN_10006f80(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10006480(this_ptr,param_1,param_2,param_3);
  *(char *)((int)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10006fc5;
  return;
}





void  FUN_10006fe0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  uVar4 = 0;
  local_8 = param_1;
  FUN_10006170(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000703b;
  return;
}





void  FUN_10007060(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 4) = param_1;
  (&DAT_10041350)[DAT_100413a0] = this_ptr;
  DAT_100413a0 = DAT_100413a0 + 1;
  return;
}





void __cdecl FUN_100070d0(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_10041350;
  for (local_c = 0; local_c < DAT_100413a0; local_c = local_c + 1) {
    psVar1 = (short *)FUN_100072a0((&DAT_10041350)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = (&DAT_10041350)[local_c];
    }
  }
  return;
}





void  FUN_10007170(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 8) = param_1;
  return;
}





void  FUN_100071b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_100071f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10007230(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10006bb0(param_1,*(int *)((int)this_ptr + 0xc),*(int *)((int)this_ptr + 0x10));
  FUN_100066f0(param_1,*(int *)((int)local_8 + 8));
  local_8 = (void *)0x1000727f;
  return;
}





int  FUN_100072a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_100072e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10007310(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100078e0((int)param_1);
  if ((0 < iVar2) && (*(int *)((int)local_8 + 0x1c) + 1 < *(int *)((int)local_8 + 0x20))) {
    if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10007950(local_8,*(int *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10007fa0((int)local_8 + 0xc,
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10007950(local_8,*(int *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
      ;
      if (cVar1 != '\0') {
        *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + 1;
        SelectUnits((int)local_8 + 0xc,0);
        SelSendTo(*(char *)((int)local_8 + 0x24),
                  *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),0,0);
      }
    }
    else if ((*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x34) == 2) ||
            (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x34) == 1)) {
      SelectUnits((int)local_8 + 0xc,0);
      *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + 1;
      SelSendTo(*(char *)((int)local_8 + 0x24),
                *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),0,2);
    }
    else if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x34) == 0) {
      SelectUnits((int)local_8 + 0xc,0);
      *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + 1;
      SelSendTo(*(char *)((int)local_8 + 0x24),
                *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),0,0);
    }
  }
  local_8 = (void *)0x10007512;
  return;
}





int FUN_100075a0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_100075d0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10007640(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_100076b0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  RegisterDynGroup((int)this_ptr + 0xc);
  *local_8 = param_1;
  local_8[1] = param_2;
  local_8[7] = 0;
  local_8[8] = 0;
  local_8[9] = param_3;
  local_8 = (int *)0x10007721;
  return;
}





void  FUN_10007750(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_100078e0((int)this_ptr);
  if (iVar2 == 0) {
    ClearSelection(*(char *)(local_8 + 9));
    for (local_c = 0; uVar1 = (int)((unsigned int)local_c >> 8), local_c < param_2;
        local_c = local_c + 1) {
      CreateObject0(local_8 + 3,local_8[1],*local_8,(int)*(char *)(local_8 + 9),
                    param_1,0);
      SelectUnits(local_8 + 3,1);
    }
    SaveSelectedUnits((int)*(char *)(local_8 + 9),local_8 + 3,0);
    local_8[8] = 0;
    FUN_100075d0(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10007851;
  return;
}





int  FUN_100078a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_100078e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_10007950(void *this_ptr,int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  iVar2 = GetUnitsAmount1(param_1,(int)this_ptr + 0xc);
  FUN_100078e0((int)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100079b0;
  return;
}





void  FUN_100079d0(void *this_ptr,int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xc,param_1);
  FUN_10005d70((int)local_8 + 0xc);
  *(unsigned int *)((int)local_8 + 0x18) = uVar1 & 0xff;
  *(int *)((int)local_8 + 0x14) = 0;
  *(int *)((int)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10007a44;
  return;
}





BOOL  FUN_10007a70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10007ac0(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10007a70((int)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x10007b5d;
  return;
}





void  FUN_10007b90(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  local_c = 0;
  iVar2 = GetTotalAmount0(*(int *)(local_8 + 8));
  iVar1 = GetNInside(*(char *)(local_8 + 0x18));
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10007c40(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  SelectUnits(*(int *)(local_8 + 8),1);
  SendUnitsToTransport(*(char *)(local_8 + 0x18));
  return;
}





void  FUN_10007ce0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  PushAllUnitsAway(*(char *)(local_8 + 0x18));
  return;
}





void  FUN_10007d60(int param_1)

{
  char cVar1;
  int uVar3;
  unsigned int uVar2;
  int iVar4;
  int uVar5;
  int *puVar6;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  local_c = *(int *)(local_8 + 0x14) + -1;
  uVar5 = (int)((unsigned int)*(int *)(local_8 + 0x14) >> 8);
  uVar3 = (int)((unsigned int)local_c >> 8);
  switch(local_c) {
  case 0:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10007c40(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_10007b90(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10007ce0(local_8);
      *(int *)(local_8 + 0x14) = 4;
    }
    break;
  case 3:
    iVar4 = GetNInside((int)*(char *)(local_8 + 0x18));
    if (iVar4 == 0) {
      RunTimer(*(char *)(local_8 + 0x1c),100);
      *(int *)(local_8 + 0x14) = 5;
    }
    break;
  case 4:
    uVar2 = TimerDoneFirst((int)*(char *)(local_8 + 0x1c));
    if ((uVar2 & 0xff) != 0) {
      *(int *)(local_8 + 0x14) = 0;
    }
  }
  return;
}





void __cdecl FUN_10007f70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_100413a4 = param_1;
  return;
}





void __cdecl FUN_10007fa0(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_100413a4 != (void *)0x0) {
    bVar1 = FUN_10007a70((int)DAT_100413a4);
    if (bVar1) {
      FUN_10007ac0(DAT_100413a4,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10007ff9;
  return;
}





void  FUN_10008020(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  FUN_10008420(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      FUN_10008380(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_100413a8,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_100413ac == 0) {
        FUN_10008380(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_100413a8,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_100413ac,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_100413ac,0);
      }
    }
    else {
      FUN_10008380(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_100413a8,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10008250(void *this_ptr,int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_8c [16];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_34 [20];
  int local_20;
  int local_1c;
  void *local_8;
local_3c = 0;
  local_38 = 0;
  local_8 = this_ptr;
  local_40 = GetTotalAmount0((int)this_ptr + 0xc);
  if (0 < local_40) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_40; local_4c = local_4c + 1) {
      GetUnitInfo((int)local_8 + 0xc,local_4c,local_34);
      local_44 = local_44 + local_20;
      local_48 = local_48 + local_1c;
    }
    local_3c = local_44 / local_40;
    local_38 = local_48 / local_40;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  local_8 = (void *)0x10008335;
  return;
}





void  FUN_10008380(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(param_1 + 0x14,param_1 + 0xc);
  iVar1 = GetTotalAmount0(local_8 + 0xc);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10008420(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10008490(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_100084d0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10008517;
  return;
}





void  FUN_10008530(void *param_1)

{
  char cVar1;
  int *puVar2;
  int iVar3;
  int uVar4;
  int local_58 [16];
  int local_18 [2];
  int local_10 [2];
  void *local_8;
local_8 = param_1;
  FUN_10008a70((int)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((int)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      FUN_10008b20(local_8,local_10);
      FUN_100088d0((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((int)local_8 + 0xc) = 2;
      }
      else {
        FUN_100089d0((int)local_8);
        if (cVar1 == '\0') {
          SelectUnits((int)local_8 + 0xd,0);
          SelSendTo(DAT_1003ed60,(int)local_8 + 0x1d,*(char *)((int)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((int)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      FUN_10008b20(local_8,local_18);
      FUN_100088d0((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((int)local_8 + 0xd,0);
        SelSendTo(DAT_1003ed60,DAT_100413b0,*(char *)((int)local_8 + 8),0);
      }
      else {
        *(char *)((int)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x100086c9;
  return;
}







void  FUN_10008740(void *this_ptr,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int *puVar3;
  long double fVar4;
  long long lVar5;
  int local_8c [16];
  double local_4c;
  double local_44;
  int local_3c;
  int local_38;
  int local_34 [2];
  int local_2c;
  long long local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
local_c = param_1;
  local_10 = param_2;
  local_8 = this_ptr;
  FUN_10008b20(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = piVar1[1];
  local_38 = local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_1000a634(local_20);
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_1003b040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_1000a584(extraout_ECX);
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_1000a4d4(*(int*)((char*)&local_28 + 4));
  lVar5 = 0;
  local_14 = (int)lVar5;
  FUN_100088d0((int)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((int)local_8 + 8) = local_2c + 0x80;
  FUN_10008530(local_8);
  local_8 = (void *)0x10008871;
  return;
}





void FUN_100088d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_7c [16];
  int local_3c;
  int local_38;
  char local_34 [20];
  int local_20;
  int local_1c;
  int local_8;
GetUnitInfo(DAT_100413b4,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_100413b0,DAT_100413b4,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





void  FUN_100089d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(param_1 + 0x1d,param_1 + 0xd);
  iVar1 = GetTotalAmount0(local_8 + 0xd);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10008a70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetTotalAmount0(param_1 + 0xd);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10008ae0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





void  FUN_10008b20(void *this_ptr,int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_8c [16];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_34 [20];
  int local_20;
  int local_1c;
  void *local_8;
local_3c = 0;
  local_38 = 0;
  local_8 = this_ptr;
  local_40 = GetTotalAmount0((int)this_ptr + 0xd);
  if (0 < local_40) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_40; local_4c = local_4c + 1) {
      GetUnitInfo((int)local_8 + 0xd,local_4c,local_34);
      local_44 = local_44 + local_20;
      local_48 = local_48 + local_1c;
    }
    local_3c = local_44 / local_40;
    local_38 = local_48 / local_40;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  local_8 = (void *)0x10008c05;
  return;
}





void  FUN_10008c50(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10008e80(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_100413b8,local_8,DAT_1003ed64);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      FUN_10008df0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_1003ed68,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_10008d90(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10008dd4;
  return;
}





void  FUN_10008df0(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(*(int *)(param_1 + 0x10),param_1);
  iVar1 = GetTotalAmount0(local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10008e80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetTotalAmount0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





void 
FUN_10008ef0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((int)this_ptr + 6) = param_1;
  *(int *)((int)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_10005d70(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10008f68;
  return;
}





void 
FUN_10008f90(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  RegisterZone((int)local_8 + 0x1e,param_2);
  FUN_10008ef0(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10009012;
  return;
}





void  FUN_10009040(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((int)local_8 + 0x1e,DAT_100413bc,(int)local_8 + 0x16,300);
  FUN_10008ef0(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x100090d0;
  return;
}





void  FUN_10009100(char *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
local_8 = param_1;
  uVar1 = Trigg(param_1[2]);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (0 < iVar2) {
      FUN_10009240(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10009310(local_8);
      SetTrigg(local_8[2],1);
    }
  }
  local_8 = (char *)0x100091fb;
  return;
}





void  FUN_10009240(char *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  char *local_8;
local_8 = param_1;
  SaveSelectedUnits(*param_1,param_1 + 0xe,0);
  SelectUnits(*(int *)(local_8 + 6),0);
  SelOpenGates(local_8[1]);
  SelectUnits(local_8 + 0xe,0);
  local_8 = (char *)0x100092da;
  return;
}





void  FUN_10009310(char *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  char *local_8;
local_8 = param_1;
  SaveSelectedUnits(*param_1,param_1 + 0xe,0);
  SelectUnits(*(int *)(local_8 + 6),0);
  SelCloseGates(local_8[1]);
  SelectUnits(local_8 + 0xe,0);
  local_8 = (char *)0x100093aa;
  return;
}





int  FUN_100093e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = 0xffffffff;
  return param_1;
}





void  FUN_10009420(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x30,param_1);
  local_8 = (void *)0x10009467;
  return;
}





void  FUN_10009480(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup((int)this_ptr + 0x30);
  RemoveGroup(param_1,(int)local_8 + 0x30);
  local_8 = (void *)0x100094e0;
  return;
}





void  FUN_10009500(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  unsigned short *local_8;
local_c = 0;
  local_8 = this_ptr;
  if (*(int *)((int)this_ptr + 0x2c) == -1) {
    GetUnitInfo((int)this_ptr + 0x30,0,this_ptr);
    *(unsigned int *)(local_8 + 0x16) = (unsigned int)*local_8;
  }
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 == 1) {
    GetUnitInfo(param_1,0,local_8);
    if ((unsigned int)*local_8 == *(unsigned int *)(local_8 + 0x16)) {
      local_c = 1;
    }
  }
  local_8 = (unsigned short *)0x100095b2;
  return;
}





void  FUN_100095f0(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  FUN_10009500(this_ptr,param_1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(param_2,param_1);
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10009658;
  return;
}





int  FUN_10009680(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0x30;
}





void 
FUN_100096c0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  char local_10 [8];
  void *local_8;
*(int *)((int)this_ptr + 0x45) = param_1;
  *(char *)((int)this_ptr + 0x38) = param_2;
  *(int *)((int)this_ptr + 0x39) = param_3;
  *(int *)((int)this_ptr + 0x3d) = param_4;
  *(int *)((int)this_ptr + 0x41) = param_5;
  local_8 = this_ptr;
  UnitsCenter(local_10,*(int *)((int)this_ptr + 0x45),500);
  SelSendTo(0,local_10,0,0);
  local_8 = (void *)0x10009755;
  return;
}





void  FUN_10009790(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  short local_10;
  short local_e;
  int local_8;
local_8 = param_1;
  SelectUnits(*(int *)(param_1 + 0x45),0);
  UnitsCenter(&local_10,*(int *)(local_8 + 0x45),700);
  if (*(int *)(local_8 + 0x39) != 0) {
    local_10 = local_10 + *(short *)(local_8 + 0x39);
  }
  if (*(int *)(local_8 + 0x3d) != 0) {
    local_e = *(short *)(local_8 + 0x3d);
  }
  if (*(char *)(local_8 + 0x38) == '\0') {
    SelSendTo(3,&local_10,*(char *)(local_8 + 0x41),0);
  }
  if (*(char *)(local_8 + 0x38) == '\x01') {
    SelSendAndKill(3,&local_10,*(char *)(local_8 + 0x41),0);
  }
  *(int *)(local_8 + 0x45) = 0;
  return;
}





void  FUN_100098d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  char local_14 [8];
  char local_c;
  int local_8;
local_c = 0;
  if (*(int *)(param_1 + 0x45) != 0) {
    local_8 = param_1;
    UnitsCenter(local_14,*(int *)(param_1 + 0x45),500);
    iVar1 = FUN_10009680(local_8);
    iVar1 = GetUnitsAmount1(local_14,iVar1);
    if (0 < iVar1) {
      FUN_10009790(local_8);
      local_c = 1;
    }
  }
  return;
}





int  FUN_10009990(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100099c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10009c80(this_ptr);
  SelCenter((int)local_8 + 8,*(char *)((int)local_8 + 0x3c),param_1);
  local_8 = (void *)0x10009a1c;
  return;
}





void  FUN_10009a40(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100099c0(param_1,300);
  local_8 = (void *)0x10009a77;
  return;
}





void  FUN_10009a90(void *this_ptr,unsigned int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10009a40(this_ptr);
  local_10 = (unsigned int)*(unsigned short *)((int)local_8 + 8);
  local_c = (unsigned int)*(unsigned short *)((int)local_8 + 10);
  *param_1 = local_10;
  param_1[1] = local_c;
  local_8 = (void *)0x10009aeb;
  return;
}





void  FUN_10009b10(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10009c80(this_ptr);
  SelSendAndKill(*(char *)((int)local_8 + 0x3c),param_1,0,0);
  local_8 = (void *)0x10009b63;
  return;
}





void  FUN_10009b80(void *this_ptr,int param_1,byte param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10009c80(this_ptr);
  uVar1 = (unsigned int)param_2;
  iVar2 = rand();
  SelSendTo(*(char *)((int)local_8 + 0x3c),param_1,iVar2 % 0xff,uVar1);
  local_8 = (void *)0x10009be1;
  return;
}





void  FUN_10009c00(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10009b80(this_ptr,param_1,0);
  local_8 = (void *)0x10009c38;
  return;
}





int  FUN_10009c50(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10009c80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10009ce0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  char local_c;
  int local_8;
local_c = 0;
  local_10 = local_10 & 0xffffff00;
  local_8 = param_1;
  while ((local_10 & 0xff) < 8) {
    iVar1 = GetUnitsByNation(local_8,local_10 & 0xff);
    if (0 < iVar1) {
      local_c = (char)local_10;
      local_10 = (int)8;
    }
    local_10 = (int)(char)local_10 + '\x01';
  }
  return;
}





void  FUN_10009d80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_10009de0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_10009d80(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10009e40(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  FUN_10009ce0(local_8);
  *(char *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10009e92;
  return;
}





void  FUN_10009eb0(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup(this_ptr);
  RemoveGroup(param_1,local_8);
  FUN_10009ce0(local_8);
  *(char *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10009f18;
  return;
}





void  FUN_10009f40(void *this_ptr,int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  iVar2 = GetTotalAmount0(this_ptr);
  iVar1 = GetUnitsAmount1(param_1,local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10009fab;
  return;
}





void  FUN_10009fd0(void *this_ptr,char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)((int)this_ptr + 0x3c) = param_1;
  return;
}





void FUN_1000a010(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return;
}





void FUN_1000a040(int param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int local_48 [16];
  int local_8;
iVar2 = GetTotalAmount0(param_1);
  if (0 < iVar2) {
    uVar4 = 0;
    uVar1 = FUN_10009c50(local_8);
    SelectUnits(uVar1,uVar4);
    SelAttackGroup(1,param_1);
  }
  return;
}





void  FUN_1000a0e0(void *param_1)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int uVar5;
  int uVar6;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10009de0(param_1);
  if (cVar1 != '\0') {
    uVar5 = 0;
    FUN_100099c0(local_8,3000);
    iVar3 = GetUnitsAmount0(uVar2,uVar5);
    if (0 < iVar3) {
      uVar6 = 0;
      uVar5 = 0;
      FUN_100099c0(local_8,3000);
      SelectUnitsInZone(uVar2,uVar5,uVar6);
      SaveSelectedUnits(0,(int)local_8 + 0x3d,0);
      FUN_1000a040((int)local_8 + 0x3d);
    }
  }
  local_8 = (void *)0x1000a191;
  return;
}





void  FUN_1000a1d0(int param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  uVar1 = FUN_10009c50(param_1);
  RegisterDynGroup(uVar1);
  RegisterDynGroup(local_8 + 0x3d);
  return;
}





void  FUN_1000a250(int param_1)

{
  int iVar1;
  int *puVar2;
  int uVar3;
  int local_50 [16];
  char local_10 [8];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  SelCenter(local_10,1,300);
  uVar3 = 0;
  iVar1 = rand();
  SelSendAndKill(1,local_10,iVar1 % 0xff,uVar3);
  return;
}





void FUN_1000a4c0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000bcd8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000a4dd((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_1000a570(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000bcd8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000a58d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_1000a620(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000bcd8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000a63d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_1000a6c0(void)

{
  FUN_1000a700();
  return;
}





void FUN_1000a6f0(void)

{
  return;
}





void FUN_1000a700(void)

{
  return;
}





int __cdecl FUN_1000a750(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_100413d8;
  DAT_100413d8 = param_1;
  return uVar1;
}





void  FUN_1000a7a0(void *this_ptr,void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000c720(this_ptr,9);
    if (((((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000b3e0(2,0x1003b2dc,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000d2b0(param_1,*(int *)((int)param_1 + -0xc));
    FUN_1000c7c0(9);
  }
  return;
}





void __cdecl FUN_1000a850(void *param_1)

{
  FUN_1000c850(param_1,1);
  return;
}





int __cdecl
FUN_1000aa60(int *param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  DWORD *pDVar1;
  int uVar2;
  int **ppuVar3;
  int *local_34;
  int local_30;
  int *local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char *local_10;
  char *local_c;
  int local_8;
  
  local_28 = FUN_1000ab30;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1000f520();
  ((int(*)())pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
  }
  return 0;
}





int __cdecl FUN_1000abc0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = *(unsigned int *)(param_1 + 0xc);
  uVar5 = uVar6;
  uVar4 = uVar6;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar6 == 0xffffffff) {
      FUN_1000f7a0();
    }
    uVar6 = uVar6 - 1;
    iVar1 = iVar2 + uVar6 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 = uVar3, uVar6 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar5 = uVar6;
      uVar4 = uVar3;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(unsigned int *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    FUN_1000f7a0();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_1000ad26(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003edb4 = *(int *)(unaff_EBP + 8);
  DAT_1003edb0 = in_EAX;
  DAT_1003edb8 = unaff_EBP;
  return;
}





int __cdecl FUN_1000ad40(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *this_ptr;
  void *this_00;
  void *this_01;
  unsigned int uVar4;
  char *pcVar5;
  int iVar6;
  
  FUN_1000f9e0();
  pvVar1 = (void *)FUN_1000d6f0(this_ptr,(int)DAT_10042f18,2);
  this_00 = (void *)((int)DAT_10042f14 + (4 - (int)DAT_10042f18));
  if (pvVar1 < this_00) {
    iVar6 = 0x68;
    pcVar5 = "onexit.c";
    uVar4 = 2;
    iVar2 = FUN_1000d6f0(this_00,(int)DAT_10042f18,2);
    piVar3 = FUN_1000ccb0(this_01,DAT_10042f18,(void *)(iVar2 + 0x10),uVar4,(int)pcVar5,iVar6);
    if (piVar3 == (int *)0x0) {
      FUN_1000f9f0();
      return 0;
    }
    DAT_10042f14 = piVar3 + ((int)DAT_10042f14 - (int)DAT_10042f18 >> 2);
    DAT_10042f18 = piVar3;
  }
  *DAT_10042f14 = param_1;
  DAT_10042f14 = DAT_10042f14 + 1;
  FUN_1000f9f0();
  return param_1;
}





int __cdecl FUN_1000ae00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000ad40(param_1);
  return (iVar1 != 0) - 1;
}





void __cdecl FUN_1000ae70(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000f520();
  pDVar1[5] = param_1;
  return;
}





__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [20];
  int local_1c;
  int local_18;
  int uStack_8;
local_38 = 0;
  local_34 = 0;
  local_3c = GetTotalAmount0(param_1);
  if (0 < local_3c) {
    local_40 = 0;
    local_44 = 0;
    for (local_48 = 0; local_48 < local_3c; local_48 = local_48 + 1) {
      GetUnitInfo(param_1,local_48,local_30);
      local_40 = local_40 + local_1c;
      local_44 = local_44 + local_18;
    }
    local_38 = local_40 / local_3c;
    local_34 = local_44 / local_3c;
  }
  uStack_8 = 0x1000169f;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int param_2 = 0;
  int iVar1;
  int *puVar2;
  int local_8c [16];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [18];
  unsigned short local_1e;
  short uStack_1c;
  short uStack_1a;
  int local_18;
  int uStack_8;
local_38 = 0;
  local_34 = 0;
  local_3c = GetTotalAmount0(param_1);
  local_40 = 0;
  if (0 < local_3c) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_3c; local_4c = local_4c + 1) {
      GetUnitInfo(param_1,local_4c,local_30);
      if ((local_1e & 0xff) == (param_2 & 0xff)) {
        local_44 = local_44 + (int)uStack_1c;
        local_48 = local_48 + local_18;
        local_40 = local_40 + 1;
      }
    }
    if (0 < local_40) {
      local_38 = local_44 / local_40;
      local_34 = local_48 / local_40;
    }
  }
  uStack_8 = 0x100017de;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
