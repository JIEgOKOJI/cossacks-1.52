#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_1003b040 = 0;
long long DAT_1003b04c = 0;
long long DAT_1003b050 = 0;
char DAT_1003b0e0[] = "E4";
char DAT_1003b0e4[] = "E3";
char DAT_1003b0e8[] = "E2";
char DAT_1003b0ec[] = "E1";
char DAT_1003b1c8[] = "Z10";
char DAT_1003b1cc[] = "Z5";
char DAT_1003b1d0[] = "Z14";
char DAT_1003b1d4[] = "Z9";
char DAT_1003b1d8[] = "Z4";
char DAT_1003b1dc[] = "Z13";
char DAT_1003b1e0[] = "Z8";
char DAT_1003b1e4[] = "Z3";
char DAT_1003b1e8[] = "Z12";
char DAT_1003b1ec[] = "Z7";
char DAT_1003b1f0[] = "Z2";
char DAT_1003b1f4[] = "Z11";
char DAT_1003b1f8[] = "Z6";
char DAT_1003b1fc[] = "Z1";
long long DAT_1003b228 = 0;
long long DAT_1003b238 = 0;
long long DAT_1003b248 = 0;
long long DAT_1003ed50 = 0;
int DAT_1003ed88 = 4;
int DAT_1003ed8c = 800;
int DAT_1003ed90 = 2;
int DAT_1003ede0 = 0;
int DAT_1003ede4 = 0;
int DAT_1003ede8 = 0;
long long DAT_10040cb8 = 0;
long long DAT_10040cbc = 0;
long long DAT_10040cc0 = 0;
long long DAT_10040cd0 = 0;
int DAT_10040cf8 = 0;
long long DAT_10040d08 = 0;
long long DAT_10040d10 = 0;
long long DAT_10040d18 = 0;
long long DAT_10040d20 = 0;
unsigned char DAT_10040d28[72] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10040d70[40] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_10040d80 (*(long long *)((char *)DAT_10040d70 + 0x10))
#define DAT_10040d88 (*(long long *)((char *)DAT_10040d70 + 0x18))
int DAT_10040d90 = 0;
int DAT_10040d91 = 0;
unsigned char DAT_10040d98[40] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_10040da8 (*(long long *)((char *)DAT_10040d98 + 0x10))
#define DAT_10040db0 (*(long long *)((char *)DAT_10040d98 + 0x18))
int DAT_10040db8 = 0;
int DAT_10040db9 = 0;
unsigned char DAT_10040dc0[40] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_10040dd0 (*(long long *)((char *)DAT_10040dc0 + 0x10))
#define DAT_10040dd8 (*(long long *)((char *)DAT_10040dc0 + 0x18))
int DAT_10040de0 = 0;
int DAT_10040de1 = 0;
unsigned char DAT_10040de8[40] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_10040df8 (*(long long *)((char *)DAT_10040de8 + 0x10))
#define DAT_10040e00 (*(long long *)((char *)DAT_10040de8 + 0x18))
int DAT_10040e08 = 0;
int DAT_10040e09 = 0;
long long DAT_10040e10 = 0;
long long DAT_10040e18 = 0;
long long DAT_10040e20 = 0;
long long DAT_10040e28 = 0;
long long DAT_10040e30 = 0;
long long DAT_10040e38 = 0;
long long DAT_10040e40 = 0;
long long DAT_10040e48 = 0;
long long DAT_10040e50 = 0;
long long DAT_10040e58 = 0;
long long DAT_10040e60 = 0;
long long DAT_10040e68 = 0;
long long DAT_10040e70 = 0;
long long DAT_10040e78 = 0;
long long DAT_10040e80 = 0;
long long DAT_10040e88 = 0;
long long DAT_10040e90 = 0;
long long DAT_10040e98 = 0;
long long DAT_10040ea0 = 0;
long long DAT_10040ea8 = 0;
long long DAT_10040eb0 = 0;
long long DAT_10040eb8 = 0;
long long DAT_10040ec0 = 0;
long long DAT_10040ec8 = 0;
long long DAT_10040ed0 = 0;
long long DAT_10040ed8 = 0;
long long DAT_10040ee0 = 0;
long long DAT_10040ef0 = 0;
long long DAT_10040f60 = 0;
int DAT_10040f78 = 0;
long long DAT_10040f80 = 0;
long long DAT_10040f88 = 0;
long long DAT_10040f90 = 0;
long long DAT_10040f98 = 0;
long long DAT_10040fa0 = 0;
int DAT_10040fa8 = 0;
long long DAT_10040fb0 = 0;
int DAT_10040fbc = 0;
int DAT_1004104c = 0;
int DAT_1004109c = 0;
int DAT_100410a0 = 0;
int DAT_100410a4 = 0;
int DAT_100410a8 = 0;
int DAT_100410ac = 0;
int DAT_100410b0 = 0;
int DAT_100410b4 = 0;
int DAT_100410b8 = 0;
int DAT_100410d4 = 0;
long long DAT_100410d8 = 0;
int *DAT_10042c14 = 0;
int DAT_10042c18 = 0;
int DAT_1003b040_ovl = 776530087;
int DAT_1003b04c_ovl = 1065353216;
int DAT_1003b050_ovl = 1120403456;
int DAT_1003b228_ovl = 776530087;
int DAT_1003b238_ovl = 1202590843;
int DAT_1003b248_ovl = 776530087;
int DAT_10040cb8_ovl = 0;
int DAT_10040cbc_ovl = 0;

/* Stubs for missing internal functions */
int FUN_1000a934() { return 0; }
int FUN_1000a93d() { return 0; }
int FUN_1000a9e4() { return 0; }
int FUN_1000a9ed() { return 0; }
int FUN_1000aa94() { return 0; }
int FUN_1000aa9d() { return 0; }
int FUN_1000b840() { return 0; }
int FUN_1000c138() { return 0; }
int FUN_1000cb80() { return 0; }
int FUN_1000cc20() { return 0; }
int FUN_1000ccb0() { return 0; }
int FUN_1000d110() { return 0; }
int FUN_1000d710() { return 0; }
int FUN_1000db50() { return 0; }
int FUN_1000fc00() { return 0; }
int FUN_1000fe40() { return 0; }
int FUN_1000fe50() { return 0; }


/* Forward declarations */
int FUN_100015c0(int param_1);
int FUN_100016d0(int param_1,unsigned short param_2);
int FUN_10001820(int param_1,char param_2,char param_3);
int FUN_100018e0(int param_1,char param_2);
int FUN_100019a0(int param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_10001ac0(char *param_1);
char * 
FUN_100022c0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void 
FUN_10002350(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
int  FUN_10002470(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
void  FUN_100025c0(intptr_t param_1);
int FUN_10002640(unsigned int param_1);
int  FUN_100026b0(int param_1);
unsigned int *  FUN_10002710(void *this_ptr,unsigned int *param_1,byte param_2);
void  FUN_100027c0(void *this_ptr,int param_1,char param_2);
int FUN_10002920(char param_1);
void FUN_100029b0(void);
void FUN_100029f0(void);
void FUN_10002a40(void);
void FUN_10002a80(void);
void FUN_10002ac0(void);
void FUN_10002b10(void);
int FUN_10002b80(int param_1,char param_2);
void FUN_10003040(void);
void FUN_10003080(void);
int  FUN_10003120(int param_1);
void  FUN_100031b0(int param_1);
void FUN_10004040(int param_1,int param_2,int param_3);
void FUN_100041d0(int param_1);
void FUN_10004290(int param_1);
void FUN_10004310(unsigned short *param_1,int param_2,char param_3);
void FUN_100044a0(int param_1);
void FUN_10004630(void *param_1,unsigned short *param_2);
void FUN_10004810(intptr_t param_1);
void FUN_10004ad0(char param_1,int param_2,int param_3);
int FUN_10006340(int param_1);
void FUN_100063e0(int param_1);
int FUN_10006480(void);
void  FUN_10006540(int param_1);
int  FUN_10006610(int param_1);
int  FUN_10006670(int param_1);
void  FUN_10006700(void *this_ptr,int param_1);
int  FUN_10006740(void *this_ptr,int param_1);
void  FUN_100067c0(void *this_ptr,int param_1,int param_2);
void  FUN_100068e0(void *this_ptr,int param_1);
void  FUN_10006920(void *this_ptr,int param_1);
void  FUN_10006960(int param_1);
void  FUN_10006a10(void *this_ptr,int param_1);
void  FUN_10006a50(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006ab0(void *this_ptr,int param_1);
int  FUN_10006b80(int param_1);
void  FUN_10006c10(void *this_ptr,unsigned int param_1);
int  FUN_10006c90(int param_1);
void  FUN_10006cc0(void *this_ptr,int param_1);
void  FUN_10006d40(void *this_ptr,int param_1);
int  FUN_10006db0(int param_1);
void  FUN_10006e20(void *this_ptr,int param_1);
void  FUN_10006e90(void *this_ptr,int param_1);
void  FUN_10006ed0(int param_1);
void  FUN_10006f40(void *param_1);
void  FUN_10006fc0(void *this_ptr,int param_1);
void  FUN_10007020(void *param_1);
void  FUN_100070a0(void *this_ptr,int param_1);
void  FUN_100070e0(int param_1);
void  FUN_10007130(int param_1);
void  FUN_10007180(void *this_ptr,int param_1,int param_2);
void  FUN_100071d0(void *param_1);
void  FUN_100074c0(void *param_1);
void  FUN_10007550(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100075b0(void *param_1);
void  FUN_10007630(void *this_ptr,int param_1);
int FUN_100076a0(short *param_1);
void  FUN_10007740(void *this_ptr,int param_1);
void  FUN_10007780(void *this_ptr,int param_1);
void  FUN_100077c0(void *this_ptr,int param_1);
void  FUN_10007800(void *this_ptr,void *param_1);
int  FUN_10007870(int param_1);
int  FUN_100078b0(int param_1);
void  FUN_100078e0(void *param_1);
int FUN_10007b70(void);
void  FUN_10007ba0(void *this_ptr,int param_1,int param_2);
void  FUN_10007c10(void *this_ptr,int param_1);
void  FUN_10007c80(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10007d20(void *this_ptr,int param_1,int param_2);
int  FUN_10007e70(int param_1);
int  FUN_10007eb0(int param_1);
int  FUN_10007f20(void *this_ptr,int param_1);
void  FUN_10007fa0(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10008040(int param_1);
void  FUN_10008090(void *this_ptr,int param_1,int param_2,int param_3);
int  FUN_10008160(int param_1);
void  FUN_10008210(int param_1);
void  FUN_100082b0(int param_1);
void  FUN_10008330(int param_1);
void FUN_10008540(int param_1);
void FUN_10008570(int param_1,int param_2,int param_3);
void  FUN_100085f0(int param_1);
void  FUN_10008820(void *this_ptr,int *param_1);
int  FUN_10008950(int param_1);
int  FUN_100089f0(int param_1);
int  FUN_10008a60(int param_1);
void  FUN_10008aa0(void *this_ptr,int param_1);
void  FUN_10008b00(void *param_1);
void  FUN_10008d10(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_10008ea0(int param_1,int param_2,int param_3,int param_4);
int  FUN_10008fa0(int param_1);
int  FUN_10009040(int param_1);
int  FUN_100090b0(int param_1);
int  FUN_100090f0(void *this_ptr,int *param_1);
void  FUN_10009220(int param_1);
void  FUN_10009360(void *this_ptr,int param_1);
int  FUN_100093c0(int param_1);
int  FUN_10009450(int param_1);
void 
FUN_100094c0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10009560(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10009610(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_100096d0(char *param_1);
void  FUN_10009810(char *param_1);
void  FUN_100098e0(char *param_1);
int  FUN_100099b0(int param_1);
void  FUN_100099f0(void *this_ptr,int param_1);
void  FUN_10009a50(void *this_ptr,int param_1);
int  FUN_10009ad0(void *this_ptr,int param_1);
void  FUN_10009bc0(void *this_ptr,int param_1,int param_2);
int  FUN_10009c50(int param_1);
void 
FUN_10009c90(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5);
void  FUN_10009d60(int param_1);
void  FUN_10009ea0(int param_1);
int  FUN_10009f60(int param_1);
void  FUN_10009f90(void *this_ptr,short param_1);
void  FUN_1000a000(void *param_1);
void  FUN_1000a050(void *this_ptr,unsigned int *param_1);
void  FUN_1000a0d0(void *this_ptr,int param_1);
void  FUN_1000a140(void *this_ptr,int param_1,byte param_2);
void  FUN_1000a1c0(void *this_ptr,int param_1);
int  FUN_1000a210(int param_1);
int  FUN_1000a2a0(int param_1);
void  FUN_1000a3a0(int param_1);
void  FUN_1000a400(void *this_ptr,int param_1);
void  FUN_1000a470(void *this_ptr,int param_1);
void  FUN_1000a500(void *this_ptr,int param_1);
void  FUN_1000a590(void *this_ptr,char param_1);
void  FUN_1000a5d0(void *this_ptr,int param_1);
void FUN_1000a610(int param_1);
void  FUN_1000a6b0(int param_1);
void  FUN_1000a710(int param_1);
void FUN_1000a920(void);
void FUN_1000a9d0(void);
void FUN_1000aa80(void);
void FUN_1000ab20(void);
void FUN_1000ab50(void);
void FUN_1000ab60(void);
int FUN_1000abb0(int param_1);
void FUN_1000ac00(void *param_1);
int FUN_1000acb0(void *param_1);
int FUN_1000b020(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_1000b186(void);
int FUN_1000b1a0(int param_1);
int FUN_1000b260(int param_1);

void OnInit();
void ProcessScenary();


int __cdecl FUN_100015c0(int param_1)

{
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
  uStack_8 = 0x1000168f;
  return 0;
}





int __cdecl FUN_100016d0(int param_1,unsigned short param_2)

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
  uStack_8 = 0x100017ce;
  return 0;
}





int __cdecl FUN_10001820(int param_1,char param_2,char param_3)

{
  int iVar1;
  int extraout_EDX = 0;
  int *puVar2;
  int local_54 [16];
  long long local_14;
  char local_c [4];
  int uStack_8;
RegisterDynGroup(local_c);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,local_c,0);
  local_14 = FUN_100016d0(local_c,(unsigned short)(intptr_t)param_3);
  uStack_8 = 0x100018af;
  return 0;
}





int __cdecl FUN_100018e0(int param_1,char param_2)

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
  local_14 = FUN_100015c0(local_c);
  uStack_8 = 0x1000196b;
  return 0;
}







int __cdecl FUN_100019a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *puVar2;
  long double fVar3;
  long long lVar4;
  int local_80 [16];
  double local_40;
  double local_38;
  int local_30;
  void *local_2c;
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
  local_2c = (void *)(param_2 - param_4);
  local_30 = param_1 - param_3;
  fVar3 = (long double)FUN_1000aa94(local_2c,(int)((double)(intptr_t)local_2c / (double)local_30));
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_1003b040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_1000a9e4(*(int*)((char*)&local_1c + 4),(int)(local_1c));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_1000a934((void *)local_1c,(int)(void *)local_1c);
  lVar4 = 0;
  local_24 = (int)lVar4;
  return 0;
}





void  FUN_10001ac0(char *param_1)

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
  FUN_10002350(param_1,8,3,0x15,0,200,3,0x50);
  FUN_10002350(local_8,8,3,0x18,0,200,3,0x50);
  FUN_10002350(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002350(local_8,8,2,8,0,0x5a,3,0x32);
  FUN_10002350(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002350(local_8,8,2,0x16,0,0x1e,3,0x32);
  FUN_10002350(local_8,8,3,0x17,0,1000,3,0x5a);
  FUN_10002350(local_8,8,3,0xf,0,1000,3,0x5a);
  FUN_10002350(local_8,0x15,2,0xf,0,300,3,0x1e);
  FUN_10002350(local_8,0x15,2,0x14,0,300,3,0x1e);
  FUN_10002350(local_8,0x15,2,0x15,0,300,3,0x1e);
  FUN_10002350(local_8,0x15,2,0x18,0,300,3,0x1e);
  FUN_10002350(local_8,0x15,2,0x16,0,300,3,0x1e);
  FUN_10002350(local_8,0x15,2,0xb,0,300,3,0x1e);
  FUN_10002350(local_8,0x15,2,8,0,300,3,0x1e);
  FUN_10002350(local_8,0x15,3,0x17,0,1000,3,0x5a);
  FUN_10002350(local_8,0x15,2,10,0,500,3,0x1e);
  FUN_10002350(local_8,0x15,1,0x16,1,0x14,4,0x50);
  FUN_10002350(local_8,0x15,1,0x14,1,10,4,0x50);
  FUN_10002350(local_8,0x15,2,8,1,0x1e,4,0x50);
  FUN_10002350(local_8,0x15,2,0x15,1,100,4,0x50);
  FUN_10002350(local_8,0x14,2,0x14,0,500,3,0x50);
  FUN_10002350(local_8,0x14,2,0x16,0,500,3,0x50);
  FUN_10002350(local_8,0x14,2,0x15,0,500,3,0x50);
  FUN_10002350(local_8,0x14,3,0x17,0,1000,3,0x5a);
  FUN_10002350(local_8,0xf,2,0x15,0,300,3,0x50);
  FUN_10002350(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002350(local_8,0xf,2,8,0,300,3,0x32);
  FUN_10002350(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002350(local_8,0xf,2,0x16,0,300,3,0x32);
  FUN_10002350(local_8,0xf,2,0x17,0,300,3,0x5a);
  FUN_10002350(local_8,0xf,2,0xf,0,300,3,0x5a);
  FUN_10002350(local_8,0xf,2,0x18,0,300,3,0x1e);
  FUN_10002350(local_8,0xb,2,0x15,0,300,3,0x50);
  FUN_10002350(local_8,0xb,2,0x18,0,300,3,0x50);
  FUN_10002350(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002350(local_8,0xb,2,8,0,300,3,0x32);
  FUN_10002350(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002350(local_8,0xb,2,0x16,0,300,3,0x32);
  FUN_10002350(local_8,0xb,2,0x17,0,300,3,0x5a);
  FUN_10002350(local_8,0xb,2,0xf,0,300,3,0x5a);
  FUN_10002350(local_8,0xb,2,0xb,0,300,3,0x1e);
  FUN_10002350(local_8,0xb,2,10,0,500,3,0x1e);
  FUN_10002350(local_8,0x18,2,0x15,0,300,3,0x50);
  FUN_10002350(local_8,0x18,2,0x18,0,300,3,0x50);
  FUN_10002350(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002350(local_8,0x18,2,8,0,300,3,0x32);
  FUN_10002350(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002350(local_8,0x18,2,0x16,0,300,3,0x32);
  FUN_10002350(local_8,0x18,2,0x17,0,300,3,0x5a);
  FUN_10002350(local_8,0x18,2,0xf,0,300,3,0x5a);
  FUN_10002350(local_8,0x16,2,0x15,0,500,3,0x50);
  FUN_10002350(local_8,0x16,2,0x18,0,500,3,0x50);
  FUN_10002350(local_8,0x16,2,0x14,0,500,3,0x32);
  FUN_10002350(local_8,0x16,2,8,0,500,3,0x32);
  FUN_10002350(local_8,0x16,2,0xb,0,500,3,0x32);
  FUN_10002350(local_8,0x16,2,0x16,0,500,3,0x32);
  FUN_10002350(local_8,0x16,2,0x17,0,500,3,0x5a);
  FUN_10002350(local_8,0x16,2,0xf,0,500,3,0x5a);
  FUN_10002350(local_8,0x16,2,0xb,0,500,3,0x1e);
  FUN_10002350(local_8,0x16,2,10,0,500,2,0x1e);
  FUN_10002350(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (char *)0x1000211c;
  return;
}





char * 
FUN_100022c0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)this_ptr = param_1;
  *(char *)((intptr_t)this_ptr + 1) = param_2;
  *(char *)((intptr_t)this_ptr + 2) = param_3;
  *(short *)((intptr_t)this_ptr + 3) = param_5;
  *(char *)((intptr_t)this_ptr + 5) = param_6;
  *(char *)((intptr_t)this_ptr + 6) = param_7;
  *(char *)((intptr_t)this_ptr + 7) = param_4;
  *(int *)((intptr_t)this_ptr + 8) = 0;
  return this_ptr;
}





void 
FUN_10002350(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
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
  
  local_8 = -1;
local_14 = this_ptr;
  if (*(int *)((intptr_t)this_ptr + 8) == 0) {
    local_1c = (void *)FUN_1000acb0((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = FUN_100022c0(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(char **)((intptr_t)local_14 + 8) = local_20;
  }
  else {
    FUN_10002350(*(void **)((intptr_t)this_ptr + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  return;
}





int  FUN_10002470(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
    pvVar4 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 1);
    if (pvVar4 == (void *)(param_2 & 0xff)) {
      pvVar4 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 2);
      if (pvVar4 == (void *)(param_3 & 0xff)) {
        pvVar4 = (void *)0x0;
        if ((*(char *)((intptr_t)this_ptr + 7) != '\0') &&
           (pvVar4 = (void *)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 3), pvVar4 < (void *)(param_4 & 0xffff)))
        {
LAB_1000251a:
          local_c = (unsigned int)*(byte *)((intptr_t)this_ptr + 5) * 100 + (unsigned int)*(byte *)((intptr_t)this_ptr + 6);
          goto LAB_1000255c;
        }
        pvVar1 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 3);
          if (pvVar4 < pvVar1) goto LAB_1000251a;
        }
      }
    }
  }
  if (*(int *)((intptr_t)this_ptr + 8) != 0) {
    uVar2 = (int)(short)param_4;
    local_8 = this_ptr;
    local_c = FUN_10002470(*(void **)((intptr_t)this_ptr + 8),
                                 (int)(char)param_1,
                                 (int)(char)param_2,
                                 (int)(char)param_3,uVar2);
  }
LAB_1000255c:
  local_8 = (void *)0x1000256c;
  return 0;
}





void  FUN_100025c0(intptr_t param_1)

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
      local_14 = FUN_10002640(1);
    }
  }
  return;
}





int FUN_10002640(unsigned int param_1)

{
  void *in_ECX;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = in_ECX;
  FUN_100025c0((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_1000ac00(local_8);
  }
  local_8 = (void *)0x1000268b;
  return 0;
}





int  FUN_100026b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1 + 0x20);
  return 0;
}





unsigned int *  FUN_10002710(void *this_ptr,unsigned int *param_1,byte param_2)

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
    if (((long long *)&DAT_1003ed50)[local_14] == param_2) {
      uVar1 = *(int *)((intptr_t)this_ptr + local_14 * 4);
      *(int*)((char*)&local_10 + 1) = (int)uVar1;
      uStack_c = (char)((unsigned int)uVar1 >> 0x18);
      local_14 = 8;
    }
  }
  *param_1 = local_10;
  *(char *)(param_1 + 1) = uStack_c;
  return param_1;
}





void  FUN_100027c0(void *this_ptr,int param_1,char param_2)

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
    *(int *)((intptr_t)this_ptr + local_c * 4) = 0;
    iVar1 = local_c + 1;
    local_c = iVar1;
  }
  local_8 = this_ptr;
  SelectUnitsInZone(param_1,(intptr_t)param_2,0);
  SaveSelectedUnits(param_2,(intptr_t)local_8 + 0x20,0);
  local_10 = GetTotalAmount0((intptr_t)local_8 + 0x20);
  for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
    GetUnitInfo((intptr_t)local_8 + 0x20,local_c,local_3c);
    uVar2 = FUN_10002920(local_2a);
    local_40 = (int *)((intptr_t)local_8 + (uVar2 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x100028cc;
  return;
}





int FUN_10002920(char param_1)

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
    if (((long long *)&DAT_1003ed50)[bVar1] == param_1) {
      local_10 = 8;
      local_c = bVar1;
    }
    bVar1 = local_10 + 1;
  }
  return (intptr_t)local_c;
}





void FUN_100029b0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100029f0();
  uStack_8 = 0x100029da;
  return;
}





void FUN_100029f0(void)

{
  int *puVar1;
  int iVar2;
  int *puVar3;
  char local_2c [36];
  int uStack_8;
puVar1 = (int *)FUN_100026b0((intptr_t)local_2c);
  puVar3 = &DAT_10040cd0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x10002a2b;
  return;
}





void FUN_10002a40(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002a80();
  FUN_10002ac0();
  uStack_8 = 0x10002a6f;
  return;
}





void FUN_10002a80(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001ac0(&DAT_10040cc0);
  uStack_8 = 0x10002aaf;
  return;
}





void FUN_10002ac0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_1000b260(0x10002b10);
  uStack_8 = 0x10002af2;
  return;
}





void FUN_10002b10(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_10040cf8 & 1) == 0) {
    DAT_10040cf8 = DAT_10040cf8 | 1;
    FUN_100025c0((intptr_t)&DAT_10040cc0);
  }
  uStack_8 = 0x10002b5c;
  return;
}







int FUN_10002b80(int param_1,char param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int extraout_ECX = 0;
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
local_c = local_c & -65536;
  local_10 = GetTotalAmount0(param_1);
  GetUnitInfo(param_1,0,local_3c);
  UnitsCenter(local_8,param_1,500);
  FUN_100027c0(&DAT_10040cd0,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)((long long *)&DAT_10040cd0)[local_40]) {
      uVar2 = (((long long *)&DAT_10040cd0)[local_40] * 100) / local_10;
      uVar1 = FUN_10002470(&DAT_10040cc0,(intptr_t)local_2a,1,
                                 (int)((long long *)&DAT_1003ed50)[local_40],uVar2);
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
    FUN_100027c0(&DAT_10040cd0,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)((long long *)&DAT_10040cd0)[local_48]) {
        uVar2 = (((long long *)&DAT_10040cd0)[local_48] * 100) / local_10;
        uVar1 = FUN_10002470(&DAT_10040cc0,(intptr_t)local_2a,2,
                                   (int)((long long *)&DAT_1003ed50)[local_48],uVar2);
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
    FUN_100027c0(&DAT_10040cd0,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)((long long *)&DAT_10040cd0)[local_50]) {
        local_54 = ((float)(int)((long long *)&DAT_10040cd0)[local_50] * DAT_1003b050_ovl) / (float)local_10;
        if (local_54 < DAT_1003b04c_ovl) {
          local_54 = 1.0;
        }
        lVar5 = 0;
        uVar1 = FUN_10002470(&DAT_10040cc0,(intptr_t)local_2a,
                                   3,(int)((long long *)&DAT_1003ed50)[local_50],(unsigned int)lVar5);
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
  return 0;
}





void FUN_10003040(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10003080();
  uStack_8 = 0x1000306a;
  return;
}







void FUN_10003080(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
DAT_10040cb8_ovl = local_c;
  DAT_10040cbc_ovl = local_8;
  return;
}






int  FUN_10003120(int param_1)

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
  return 0;
}





void  FUN_100031b0(int param_1)

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
    UnitsCenter(0,-16,1000);
  }
  iVar3 = GetTotalAmount0(local_8);
  if (0 < iVar3) {
    UnitsCenter(local_8 + 8,local_8,1000);
    cVar1 = FUN_10003120(local_8);
    if (cVar1 == '\0') {
      iVar3 = GetUnitsAmount0(local_8 + 8,*(char *)(local_8 + 0x1e));
      if (iVar3 < 4) {
        SelectUnits(local_8,0);
        SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,
                       *(char *)(local_8 + 0x18),0);
        goto LAB_10003622;
      }
    }
    uVar2 = FUN_10002b80(local_8,*(char *)(local_8 + 0x1e));
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
      local_28 = FUN_10001820(local_8 + 8,*(char *)(local_8 + 0x1d),0x14);
      local_10 = local_28;
      if ((intptr_t)local_28 == 0) {
        local_30 = FUN_10001820(local_8 + 8,*(char *)(local_8 + 0x1d),0xf);
        local_10 = local_30;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        local_38 = FUN_10001820(local_8 + 8,*(char *)(local_8 + 0x1d),0xb);
        local_10 = local_38;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        local_40 = FUN_10001820(local_8 + 8,*(char *)(local_8 + 0x1d),0x16);
        local_10 = local_40;
      }
      local_48 = FUN_100018e0(local_8 + 8,*(char *)(local_8 + 0x1e));
      local_18 = local_48;
      local_50 = FUN_100019a0((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_48,
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
      local_58 = FUN_100018e0(local_8 + 8,0);
      local_18 = local_58;
      local_60 = FUN_100019a0((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_58,
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
LAB_10003622:
  return;
}





void __cdecl FUN_10004040(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    CreateObject0(param_1,&DAT_10040f98,&DAT_10040fa0,1,param_2,0);
    CreateObject0(param_1,&DAT_10040f98,&DAT_10040fa0,1,param_2,0);
    CreateObject0(param_1,&DAT_10040f98,&DAT_10040fa0,1,param_2,0);
    CreateObject0(param_1,&DAT_10040f98,&DAT_10040f88,1,param_2,0);
    CreateObject0(param_1,&DAT_10040f98,&DAT_10040e38,1,param_2,0);
    CreateObject0(param_1,&DAT_10040f98,&DAT_10040e38,1,param_2,0);
  }
  return;
}





void __cdecl FUN_100041d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
ClearSelection(0);
  for (local_8 = 1; local_8 < 9; local_8 = local_8 + 1) {
    SelectUnitsType(((unsigned char *)&DAT_10040d28) + local_8 * 8,0,1);
  }
  SaveSelectedUnits(0,param_1,0);
  return;
}





void __cdecl FUN_10004290(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SelectUnitsType(&DAT_10040d28,0,0);
  SaveSelectedUnits(0,param_1,0);
  uStack_8 = 0x100042ea;
  return;
}





void __cdecl FUN_10004310(unsigned short *param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  unsigned int local_44 [5];
  int local_30;
  int local_2c;
  unsigned int local_18;
  unsigned int local_14;
  int local_10;
  unsigned int local_c;
  int local_8;
if (param_3 == '\0') {
    FUN_100041d0(param_2);
  }
  else {
    FUN_10004290(param_2);
  }
  local_8 = GetTotalAmount0(param_2);
  local_c = 0;
  local_10 = 0xfffa;
  local_14 = (unsigned int)*param_1;
  local_18 = (unsigned int)param_1[1];
  if (0 < local_8) {
    for (local_48 = 0; local_48 < local_8; local_48 = local_48 + 1) {
      GetUnitInfo(param_2,local_48,local_44);
      local_4c = local_30 - local_14;
      local_50 = local_2c - local_18;
      local_54 = FUN_10006480();
      if (local_54 < local_10) {
        local_c = local_44[0] & 0xffff;
        local_10 = local_54;
      }
    }
    FUN_100063e0(param_2);
    InsertUnitToGroup(0,param_2,local_c);
  }
  return;
}





void __cdecl FUN_100044a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
SelectUnits(param_1,0);
  SelCenter(param_1 + 8,*(char *)(param_1 + 0x20),600);
  FUN_10004310((unsigned short *)(param_1 + 8),&DAT_10040d20,'\0');
  UnitsCenter(param_1 + 0x10,&DAT_10040d20,300);
  local_8 = GetTopDst(param_1 + 0x10,param_1 + 8);
  local_c = FUN_10006480();
  if (local_8 * 0x2c - local_c != 0 && local_c <= local_8 * 0x2c) {
    FUN_10004310((unsigned short *)(param_1 + 8),&DAT_10040d20,'\x01');
  }
  SelAttackGroup(*(char *)(param_1 + 0x20),&DAT_10040d20);
  return;
}







void __cdecl FUN_10004630(void *param_1,unsigned short *param_2)

{
  int iVar1;
  int *puVar2;
  long double fVar3;
  long long lVar4;
  int local_38;
  double local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  double local_1c;
  void *local_14;
  unsigned int local_10;
  unsigned int local_c;
  unsigned int local_8;
local_8 = (unsigned int)*param_2;
  local_c = (unsigned int)param_2[1];
  local_10 = (unsigned int)*(unsigned short *)((intptr_t)param_1 + 0x10);
  local_14 = (void *)(unsigned int)*(unsigned short *)((intptr_t)param_1 + 0x12);
  local_28 = (intptr_t)local_14 - local_c;
  local_2c = local_10 - local_8;
  fVar3 = (long double)FUN_1000aa94(local_14,(int)((double)local_28 / (double)local_2c));
  local_1c = (double)fVar3;
  if ((int)(local_10 - local_8) < 0) {
    local_1c = DAT_1003b040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_34 = local_1c - DAT_1003b248_ovl;
  local_38 = rand();
  local_38 = local_38 % 0x65;
  local_1c = (double)local_38 * DAT_1003b238_ovl * DAT_1003b228_ovl + local_34;
  FUN_1000a9e4((void *)0x65,(int)(local_1c));
  lVar4 = 0;
  *(short *)((intptr_t)param_1 + 0x10) = (short)lVar4;
  FUN_1000a934(param_1,(*(int*)&local_1c));
  lVar4 = 0;
  *(short *)((intptr_t)param_1 + 0x12) = (short)lVar4;
  local_24 = local_20 + 0x80;
  *(int *)((intptr_t)param_1 + 0x22) = local_24;
  SelectUnits(param_1,0);
  SelSendAndKill(0,0,0,0);
  return;
}





void __cdecl FUN_10004810(intptr_t param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
iVar1 = GetTotalAmount0(param_1);
  if (0 < iVar1) {
    SelectUnits(param_1,0);
    SelCenter(param_1 + 8,*(char *)(param_1 + 0x20),800);
    iVar1 = GetUnitsAmount0(param_1 + 8,0);
    if (iVar1 < 1) {
      if (*(char *)(param_1 + 0x21) == '\x01') {
        SelSendAndKill(*(char *)(param_1 + 0x20),param_1 + 0x10,
                       *(char *)(param_1 + 0x22),0);
        iVar1 = GetUnitsAmount1(param_1 + 0x10,param_1);
        if (1 < iVar1) {
          *(char *)(param_1 + 0x21) = 2;
        }
      }
      else {
        FUN_100044a0(param_1);
      }
    }
    else {
      SelectUnitsInZone(param_1 + 8,0,0);
      SelCenter(&DAT_10040e90,0,100);
      SaveSelectedUnits(0,param_1 + 0x18,0);
      local_8 = GetTopDst(param_1 + 8,&DAT_10040e90);
      local_c = FUN_10006480();
      if (local_8 * 0x23 - local_c != 0 && local_c <= local_8 * 0x23) {
        FUN_10004310((unsigned short *)(param_1 + 8),param_1 + 0x18,'\x01');
      }
      SelSendAndKill(*(char *)(param_1 + 0x20),param_1 + 8,*(char *)(param_1 + 0x22),0);
      SelAttackGroup(*(char *)(param_1 + 0x20),param_1 + 0x18);
    }
  }
  return;
}





void __cdecl FUN_10004ad0(char param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg((intptr_t)param_1);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(param_2,0);
    if (0 < iVar2) {
      FUN_10004040(&DAT_10040ec0,param_3,DAT_10040fa8 + DAT_10040f78 + 3 + DAT_10040fbc);
      SetTrigg(param_1,0);
    }
  }
  uVar1 = Trigg(param_1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(param_2,0);
    if (0 < iVar2) {
      SelectUnitsInZone(param_2,0,0);
      SaveSelectedUnits(0,&DAT_10040ec0,0);
      SelectUnitsInZone(param_2,1,0);
      SelAttackGroup(1,&DAT_10040ec0);
    }
  }
  uVar1 = Trigg(param_1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(param_2,0);
    if (iVar2 == 0) {
      SetTrigg(param_1,0);
    }
  }
  uStack_8 = 0x10004c69;
  return;
}





int __cdecl FUN_10006340(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  unsigned int local_c;
  unsigned int local_8;
local_8 = local_8 & -256;
  local_c = local_c & -256;
  while ((local_c & 0xff) < 8) {
    iVar1 = GetUnitsByNation(param_1,local_c & 0xff);
    if (0 < iVar1) {
      local_8 = (int)(char)local_c;
      local_c = (int)8;
    }
    local_c = (int)(char)local_c + '\x01';
  }
  return 0;
}





void __cdecl FUN_100063e0(int param_1)

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
  uStack_8 = 0x10006454;
  return;
}





int FUN_10006480(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x100064c9;
  return 0;
}






void  FUN_10006540(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}






int  FUN_10006610(int param_1)

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
  return 0;
}





int  FUN_10006670(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}






void  FUN_10006700(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x14) = param_1;
  return;
}





int  FUN_10006740(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((intptr_t)this_ptr + 8,*(int *)((intptr_t)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10006798;
  return 0;
}





void  FUN_100067c0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  iVar2 = GetTotalAmount0(this_ptr);
  if (iVar2 == 0) {
    ClearSelection(*(char *)((intptr_t)local_8 + 0x10));
    for (local_c = 0; uVar1 = (int)((unsigned int)local_c >> 8), local_c < param_2;
        local_c = local_c + 1) {
      CreateObject0(local_8,*(int *)((intptr_t)local_8 + 0x1c),
                    *(int *)((intptr_t)local_8 + 0x18),
                    (int)*(char *)((intptr_t)local_8 + 0x10),param_1,0);
      SelectUnits(local_8,1);
    }
    SaveSelectedUnits((int)*(char *)((intptr_t)local_8 + 0x10),local_8,0);
  }
  local_8 = (void *)0x10006897;
  return;
}





void  FUN_100068e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10006920(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10006960(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  for (local_10 = 0; (intptr_t)local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = GetUnitsByNation(local_8,local_10 & 0xff);
    if (0 < iVar1) {
      local_c = local_10;
      local_10 = 8;
    }
  }
  *(unsigned int *)(local_8 + 0x10) = local_c;
  return;
}





void  FUN_10006a10(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10006a50(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  *(int *)((intptr_t)this_ptr + 0x1c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10006ab0(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10006b50;
  return;
}





int  FUN_10006b80(int param_1)

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
  return 0;
}





void  FUN_10006c10(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelChangeNation(*(char *)((intptr_t)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((intptr_t)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10006c68;
  return;
}





int  FUN_10006c90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10006cc0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),param_1,0,0);
  *(int *)((intptr_t)local_8 + 0x20) = param_1;
  local_8 = (void *)0x10006d1c;
  return;
}





void  FUN_10006d40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  Patrol(*(char *)((intptr_t)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x10006d91;
  return;
}





int  FUN_10006db0(int param_1)

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
  return 0;
}





void  FUN_10006e20(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10006e73;
  return;
}





void  FUN_10006e90(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10006ed0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_10006f40(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  cVar1 = FUN_10006610(param_1);
  if (cVar1 != '\0') {
    FUN_10007020(local_8);
    iVar2 = FUN_10006b80(local_8);
    if (iVar2 < 10) {
      FUN_10006cc0(local_8,*(int *)((intptr_t)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x10006f9f;
  return;
}





void  FUN_10006fc0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10007006;
  return;
}





void  FUN_10007020(void *param_1)

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
  uVar1 = FUN_10006740(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000707b;
  return;
}





void  FUN_100070a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_100070e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10007130(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10007130(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10007180(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x24) = param_1;
  *(int *)((intptr_t)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_100071d0(void *param_1)

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
if (((*(char *)((intptr_t)param_1 + 0x2c) != '\0') &&
      (local_8 = param_1, cVar1 = FUN_10006610(param_1), cVar1 != '\0')) &&
     (*(int *)((intptr_t)local_8 + 0x10) != 0)) {
    if (*(int *)((intptr_t)local_8 + 0x10) == 6) {
      uVar6 = 0;
      uVar2 = FUN_10006740(local_8,600);
      iVar3 = GetUnitsAmount0(uVar2,uVar6);
      if ((0 < iVar3) && (*(int *)((intptr_t)local_8 + 0x28) != 0)) {
        local_c = *(int *)((intptr_t)local_8 + 0x24);
        switch(local_c) {
        case 0:
          ShowPageParam("#PAGE1_0",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 1:
          ShowPageParam("#PAGE1_1",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 2:
          ShowPageParam("#PAGE1_2",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 3:
          ShowPageParam("#PAGE1_3",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 4:
          ShowPageParam("#PAGE1_4",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 5:
          ShowPageParam("#PAGE1_5",*(int *)((intptr_t)local_8 + 0x28));
        }
        local_10 = AskMultilineQuestion(7,"#PAGE3",0,"FM10_A|FM10_B");
        if (local_10 == 0) {
          FUN_10006c10(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10006540((intptr_t)local_8);
        }
        AddResource(0,*(char *)((intptr_t)local_8 + 0x24),*(int *)((intptr_t)local_8 + 0x28));
        FUN_10007180(local_8,0,0);
      }
    }
    else {
      iVar3 = FUN_10006b80(local_8);
      if (iVar3 < 0x32) {
        FUN_100074c0(local_8);
      }
      cVar1 = FUN_10006db0((intptr_t)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        this_ptr = (void *)FUN_100076a0(*(short **)((intptr_t)local_8 + 0x20));
        FUN_10007800(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10007402;
  return;
}





void  FUN_100074c0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10006c10(param_1,6);
  SelectUnits(local_8,0);
  uVar5 = 0;
  uVar4 = 0;
  uVar1 = FUN_10006740(local_8,100);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10006ed0((intptr_t)local_8);
  local_8 = (void *)0x1000752c;
  return;
}





void  FUN_10007550(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10006a50(this_ptr,param_1,param_2,param_3);
  *(char *)((intptr_t)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10007595;
  return;
}





void  FUN_100075b0(void *param_1)

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
  uVar1 = FUN_10006740(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000760b;
  return;
}





void  FUN_10007630(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 4) = param_1;
  ((long long *)&DAT_1004104c)[DAT_1004109c] = this_ptr;
  DAT_1004109c = DAT_1004109c + 1;
  return;
}





int __cdecl FUN_100076a0(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1004104c;
  for (local_c = 0; local_c < DAT_1004109c; local_c = local_c + 1) {
    psVar1 = (short *)FUN_10007870(((long long *)&DAT_1004104c)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_1004104c)[local_c];
    }
  }
  return 0;
}





void  FUN_10007740(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 8) = param_1;
  return;
}





void  FUN_10007780(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_100077c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10007800(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10007180(param_1,*(int *)((intptr_t)this_ptr + 0xc),*(int *)((intptr_t)this_ptr + 0x10));
  FUN_10006cc0(param_1,*(int *)((intptr_t)local_8 + 8));
  local_8 = (void *)0x1000784f;
  return;
}





int  FUN_10007870(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_100078b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100078e0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  iVar2 = FUN_10007eb0((intptr_t)param_1);
  if ((0 < iVar2) && (*(int *)((intptr_t)local_8 + 0x1c) + 1 < *(int *)((intptr_t)local_8 + 0x20))) {
    if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      cVar1 = FUN_10007f20(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10008570((intptr_t)local_8 + 0xc,
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      cVar1 = FUN_10007f20(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
      ;
      if (cVar1 != '\0') {
        *(int *)((intptr_t)local_8 + 0x1c) = *(int *)((intptr_t)local_8 + 0x1c) + 1;
        SelectUnits((intptr_t)local_8 + 0xc,0);
        SelSendTo(*(char *)((intptr_t)local_8 + 0x24),
                  *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),0,0);
      }
    }
    else if ((*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x34) == 2) ||
            (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x34) == 1)) {
      SelectUnits((intptr_t)local_8 + 0xc,0);
      *(int *)((intptr_t)local_8 + 0x1c) = *(int *)((intptr_t)local_8 + 0x1c) + 1;
      SelSendTo(*(char *)((intptr_t)local_8 + 0x24),
                *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),0,2);
    }
    else if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x34) == 0) {
      SelectUnits((intptr_t)local_8 + 0xc,0);
      *(int *)((intptr_t)local_8 + 0x1c) = *(int *)((intptr_t)local_8 + 0x1c) + 1;
      SelSendTo(*(char *)((intptr_t)local_8 + 0x24),
                *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),0,0);
    }
  }
  local_8 = (void *)0x10007ae2;
  return;
}





int FUN_10007b70(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_10007ba0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10007c10(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10007c80(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  RegisterDynGroup((intptr_t)this_ptr + 0xc);
  *local_8 = param_1;
  local_8[1] = param_2;
  local_8[7] = 0;
  local_8[8] = 0;
  local_8[9] = param_3;
  local_8 = (int *)0x10007cf1;
  return;
}





void  FUN_10007d20(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  iVar2 = FUN_10007eb0((intptr_t)this_ptr);
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
    FUN_10007ba0(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10007e21;
  return;
}





int  FUN_10007e70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





int  FUN_10007eb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return 0;
}





int  FUN_10007f20(void *this_ptr,int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  iVar2 = GetUnitsAmount1(param_1,(intptr_t)this_ptr + 0xc);
  iVar1 = FUN_10007eb0((intptr_t)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10007f80;
  return 0;
}





void  FUN_10007fa0(void *this_ptr,int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xc,param_1);
  uVar1 = FUN_10006340((intptr_t)local_8 + 0xc);
  *(unsigned int *)((intptr_t)local_8 + 0x18) = uVar1 & 0xff;
  *(int *)((intptr_t)local_8 + 0x14) = 0;
  *(int *)((intptr_t)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10008014;
  return;
}





BOOL  FUN_10008040(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10008090(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10008040((intptr_t)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x1000812d;
  return;
}





int  FUN_10008160(int param_1)

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
  return 0;
}





void  FUN_10008210(int param_1)

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





void  FUN_100082b0(int param_1)

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





void  FUN_10008330(int param_1)

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
      FUN_10008210(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    cVar1 = FUN_10008160(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_100082b0(local_8);
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





void __cdecl FUN_10008540(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_100410a0 = param_1;
  return;
}





void __cdecl FUN_10008570(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_100410a0 != (void *)0x0) {
    bVar1 = FUN_10008040((int)DAT_100410a0);
    if (bVar1) {
      FUN_10008090(DAT_100410a0,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x100085c9;
  return;
}





void  FUN_100085f0(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  cVar1 = FUN_100089f0(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      cVar1 = FUN_10008950(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_100410a4,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_100410a8 == 0) {
        cVar1 = FUN_10008950(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_100410a4,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_100410a8,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_100410a8,0);
      }
    }
    else {
      cVar1 = FUN_10008950(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_100410a4,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10008820(void *this_ptr,int *param_1)

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
  local_40 = GetTotalAmount0((intptr_t)this_ptr + 0xc);
  if (0 < local_40) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_40; local_4c = local_4c + 1) {
      GetUnitInfo((intptr_t)local_8 + 0xc,local_4c,local_34);
      local_44 = local_44 + local_20;
      local_48 = local_48 + local_1c;
    }
    local_3c = local_44 / local_40;
    local_38 = local_48 / local_40;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  local_8 = (void *)0x10008905;
  return;
}





int  FUN_10008950(int param_1)

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
  return 0;
}





int  FUN_100089f0(int param_1)

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
  return 0;
}





int  FUN_10008a60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10008aa0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10008ae7;
  return;
}





void  FUN_10008b00(void *param_1)

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
  cVar1 = FUN_10009040((intptr_t)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      puVar2 = (int *)FUN_100090f0(local_8,local_10);
      FUN_10008ea0((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((intptr_t)local_8 + 0xc) = 2;
      }
      else {
        cVar1 = FUN_10008fa0((intptr_t)local_8);
        if (cVar1 == '\0') {
          SelectUnits((intptr_t)local_8 + 0xd,0);
          SelSendTo(DAT_1003ed88,(intptr_t)local_8 + 0x1d,*(char *)((intptr_t)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      puVar2 = (int *)FUN_100090f0(local_8,local_18);
      FUN_10008ea0((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((intptr_t)local_8 + 0xd,0);
        SelSendTo(DAT_1003ed88,DAT_100410ac,*(char *)((intptr_t)local_8 + 8),0);
      }
      else {
        *(char *)((intptr_t)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x10008c99;
  return;
}







void  FUN_10008d10(void *this_ptr,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
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
  void *local_20;
  int local_1c;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  void *local_8;
local_c = param_1;
  local_10 = param_2;
  local_8 = this_ptr;
  piVar1 = (int *)FUN_100090f0(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = (void *)piVar1[1];
  local_38 = (intptr_t)local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_1000aa94(local_20,(int)((double)local_38 / (double)local_3c));
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_1003b040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_1000a9e4(this_00,(int)(local_28));
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_1000a934(*(int*)((char*)&local_28 + 4),(intptr_t)local_28);
  lVar5 = 0;
  local_14 = (void *)lVar5;
  FUN_10008ea0((intptr_t)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((intptr_t)local_8 + 8) = local_2c + 0x80;
  FUN_10008b00(local_8);
  return;
}





void FUN_10008ea0(int param_1,int param_2,int param_3,int param_4)

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
GetUnitInfo(DAT_100410b0,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_100410ac,DAT_100410b0,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





int  FUN_10008fa0(int param_1)

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
  return 0;
}





int  FUN_10009040(int param_1)

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
  return 0;
}





int  FUN_100090b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





int  FUN_100090f0(void *this_ptr,int *param_1)

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
  local_40 = GetTotalAmount0((intptr_t)this_ptr + 0xd);
  if (0 < local_40) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_40; local_4c = local_4c + 1) {
      GetUnitInfo((intptr_t)local_8 + 0xd,local_4c,local_34);
      local_44 = local_44 + local_20;
      local_48 = local_48 + local_1c;
    }
    local_3c = local_44 / local_40;
    local_38 = local_48 / local_40;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  local_8 = (void *)0x100091d5;
  return 0;
}





void  FUN_10009220(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  cVar1 = FUN_10009450(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_100410b4,local_8,DAT_1003ed8c);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      cVar1 = FUN_100093c0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_1003ed90,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_10009360(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x100093a4;
  return;
}





int  FUN_100093c0(int param_1)

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
  return 0;
}





int  FUN_10009450(int param_1)

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
  return 0;
}





void 
FUN_100094c0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((intptr_t)this_ptr + 6) = param_1;
  *(int *)((intptr_t)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  uVar1 = FUN_10006340(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10009538;
  return;
}





void 
FUN_10009560(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  RegisterZone((intptr_t)local_8 + 0x1e,param_2);
  FUN_100094c0(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x100095e2;
  return;
}





void  FUN_10009610(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((intptr_t)local_8 + 0x1e,DAT_100410b8,(intptr_t)local_8 + 0x16,300);
  FUN_100094c0(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x100096a0;
  return;
}





void  FUN_100096d0(char *param_1)

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
      FUN_10009810(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_100098e0(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  local_8 = (char *)0x100097cb;
  return;
}





void  FUN_10009810(char *param_1)

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
  local_8 = (char *)0x100098aa;
  return;
}





void  FUN_100098e0(char *param_1)

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
  local_8 = (char *)0x1000997a;
  return;
}





int  FUN_100099b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = -1;
  return param_1;
}





void  FUN_100099f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x30,param_1);
  local_8 = (void *)0x10009a37;
  return;
}





void  FUN_10009a50(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup((intptr_t)this_ptr + 0x30);
  RemoveGroup(param_1,(intptr_t)local_8 + 0x30);
  local_8 = (void *)0x10009ab0;
  return;
}





int  FUN_10009ad0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  unsigned short *local_8;
local_c = 0;
  local_8 = this_ptr;
  if (*(int *)((intptr_t)this_ptr + 0x2c) == -1) {
    GetUnitInfo((intptr_t)this_ptr + 0x30,0,this_ptr);
    *(unsigned int *)(local_8 + 0x16) = (unsigned int)*local_8;
  }
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 == 1) {
    GetUnitInfo(param_1,0,local_8);
    if ((unsigned int)*local_8 == *(unsigned int *)(local_8 + 0x16)) {
      local_c = 1;
    }
  }
  local_8 = (unsigned short *)0x10009b82;
  return 0;
}





void  FUN_10009bc0(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  cVar1 = FUN_10009ad0(this_ptr,param_1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(param_2,param_1);
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10009c28;
  return;
}





int  FUN_10009c50(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0x30;
}





void 
FUN_10009c90(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  char local_10 [8];
  void *local_8;
*(int *)((intptr_t)this_ptr + 0x45) = param_1;
  *(char *)((intptr_t)this_ptr + 0x38) = param_2;
  *(int *)((intptr_t)this_ptr + 0x39) = param_3;
  *(int *)((intptr_t)this_ptr + 0x3d) = param_4;
  *(int *)((intptr_t)this_ptr + 0x41) = param_5;
  local_8 = this_ptr;
  UnitsCenter(local_10,*(int *)((intptr_t)this_ptr + 0x45),500);
  SelSendTo(0,local_10,0,0);
  local_8 = (void *)0x10009d25;
  return;
}





void  FUN_10009d60(int param_1)

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





void  FUN_10009ea0(int param_1)

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
    iVar1 = FUN_10009c50(local_8);
    iVar1 = GetUnitsAmount1(local_14,iVar1);
    if (0 < iVar1) {
      FUN_10009d60(local_8);
      local_c = 1;
    }
  }
  return;
}





int  FUN_10009f60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10009f90(void *this_ptr,short param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  UnitsCenter((intptr_t)this_ptr + 8,this_ptr,(intptr_t)param_1);
  local_8 = (void *)0x10009fe2;
  return;
}





void  FUN_1000a000(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10009f90(param_1,300);
  local_8 = (void *)0x1000a037;
  return;
}





void  FUN_1000a050(void *this_ptr,unsigned int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_1000a000(this_ptr);
  local_10 = (unsigned int)*(unsigned short *)((intptr_t)local_8 + 8);
  local_c = (unsigned int)*(unsigned short *)((intptr_t)local_8 + 10);
  *param_1 = local_10;
  param_1[1] = local_c;
  local_8 = (void *)0x1000a0ab;
  return;
}





void  FUN_1000a0d0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelSendAndKill(*(char *)((intptr_t)local_8 + 0x3c),param_1,0,0);
  local_8 = (void *)0x1000a123;
  return;
}





void  FUN_1000a140(void *this_ptr,int param_1,byte param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  uVar1 = (unsigned int)param_2;
  iVar2 = rand();
  SelSendTo(*(char *)((intptr_t)local_8 + 0x3c),param_1,iVar2 % 0xff,uVar1);
  local_8 = (void *)0x1000a1a1;
  return;
}





void  FUN_1000a1c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_1000a140(this_ptr,param_1,0);
  local_8 = (void *)0x1000a1f8;
  return;
}





int  FUN_1000a210(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}






int  FUN_1000a2a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  char local_c;
  int local_8;
local_c = 0;
  local_10 = local_10 & -256;
  local_8 = param_1;
  while ((local_10 & 0xff) < 8) {
    iVar1 = GetUnitsByNation(local_8,local_10 & 0xff);
    if (0 < iVar1) {
      local_c = (char)local_10;
      local_10 = (int)8;
    }
    local_10 = (int)(char)local_10 + '\x01';
  }
  return 0;
}






void  FUN_1000a3a0(int param_1)

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





void  FUN_1000a400(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  uVar1 = FUN_1000a2a0(local_8);
  *(char *)((intptr_t)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x1000a452;
  return;
}





void  FUN_1000a470(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup(this_ptr);
  RemoveGroup(param_1,local_8);
  uVar1 = FUN_1000a2a0(local_8);
  *(char *)((intptr_t)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x1000a4d8;
  return;
}





void  FUN_1000a500(void *this_ptr,int param_1)

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
  local_8 = (void *)0x1000a56b;
  return;
}





void  FUN_1000a590(void *this_ptr,char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)((intptr_t)this_ptr + 0x3c) = param_1;
  return;
}





void  FUN_1000a5d0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x3d) = param_1;
  return;
}





void FUN_1000a610(int param_1)

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
    uVar1 = FUN_1000a210(local_8);
    SelectUnits(uVar1,uVar4);
    SelAttackGroup(1,param_1);
  }
  return;
}





void  FUN_1000a6b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
if (*(int *)(param_1 + 0x3d) != 0) {
    local_8 = param_1;
    FUN_1000a610(*(int *)(param_1 + 0x3d));
  }
  return;
}





void  FUN_1000a710(int param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  uVar1 = FUN_1000a210(param_1);
  RegisterDynGroup(uVar1);
  return;
}





void FUN_1000a920(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000c138((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000a93d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_1000a9d0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000c138((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000a9ed((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_1000aa80(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000c138((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000aa9d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_1000ab20(void)

{
  FUN_1000ab60();
  return;
}





void FUN_1000ab50(void)

{
  return;
}





void FUN_1000ab60(void)

{
  return;
}





int __cdecl FUN_1000abb0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_100410d4;
  DAT_100410d4 = param_1;
  return uVar1;
}





void __cdecl FUN_1000ac00(void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000cb80(9);
    if (((((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((intptr_t)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((intptr_t)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000b840(2,0x1003b3ac,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000d710(param_1,*(int *)((intptr_t)param_1 + -0xc));
    FUN_1000cc20(9);
  }
  return;
}





int __cdecl FUN_1000acb0(void *param_1)

{
  FUN_1000ccb0(param_1,1);
  return 0;
}





int __cdecl FUN_1000b020(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

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
    if (uVar6 == -1) {
      FUN_1000fc00();
    }
    uVar6 = uVar6 - 1;
    iVar1 = iVar2 + uVar6 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 = uVar3, uVar6 == -1)) {
      param_2 = param_2 + -1;
      uVar5 = uVar6;
      uVar4 = uVar3;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(unsigned int *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    FUN_1000fc00();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_1000b186(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003ede4 = *(int *)(unaff_EBP + 8);
  DAT_1003ede0 = in_EAX;
  DAT_1003ede8 = unaff_EBP;
  return;
}





int __cdecl FUN_1000b1a0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_1000fe40();
  uVar1 = FUN_1000db50((int)DAT_10042c18,2);
  if (uVar1 < (unsigned int)((int)DAT_10042c14 + (4 - (int)DAT_10042c18))) {
    iVar5 = 0x68;
    pcVar4 = "onexit.c";
    uVar1 = 2;
    iVar2 = FUN_1000db50((int)DAT_10042c18,2);
    piVar3 = FUN_1000d110(DAT_10042c18,(void *)(iVar2 + 0x10),uVar1,(int)pcVar4,iVar5);
    if (piVar3 == (int *)0x0) {
      FUN_1000fe50();
      return 0;
    }
    DAT_10042c14 = piVar3 + ((int)DAT_10042c14 - (int)DAT_10042c18 >> 2);
    DAT_10042c18 = piVar3;
  }
  *DAT_10042c14 = param_1;
  DAT_10042c14 = DAT_10042c14 + 1;
  FUN_1000fe50();
  return param_1;
}





int __cdecl FUN_1000b260(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000b1a0(param_1);
  return (iVar1 != 0) - 1;
}





void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
DVar1 = time(NULL);
  srand(DVar1);
  SetPlayerName(0,"PRUSSIA");
  SetPlayerName(1,"BAVARIA");
  RegisterZone(&DAT_10040e48,DAT_1003b1fc);
  RegisterZone(&DAT_10040e70,DAT_1003b1f8);
  RegisterZone(&DAT_10040ed0,DAT_1003b1f4);
  RegisterZone(&DAT_10040e50,DAT_1003b1f0);
  RegisterZone(&DAT_10040e78,DAT_1003b1ec);
  RegisterZone(&DAT_10040ed8,DAT_1003b1e8);
  RegisterZone(&DAT_10040e58,DAT_1003b1e4);
  RegisterZone(&DAT_10040e80,DAT_1003b1e0);
  RegisterZone(&DAT_10040ee0,DAT_1003b1dc);
  RegisterZone(&DAT_10040e60,DAT_1003b1d8);
  RegisterZone(&DAT_10040e88,DAT_1003b1d4);
  RegisterZone(&DAT_10040ef0,DAT_1003b1d0);
  RegisterZone(&DAT_10040e68,DAT_1003b1cc);
  RegisterZone(&DAT_10040ec8,DAT_1003b1c8);
  RegisterFormation(&DAT_10040f98,"#ODIN");
  RegisterUnitType(&DAT_10040fa0,"Pik_evro_rus(BA)");
  RegisterUnitType(&DAT_10040f88,"Mushketer_BA(BA)");
  RegisterUnitType(&DAT_10040e38,"Grenader(BA)");
  RegisterUnitType(&DAT_10040ea8,"Fregat(GE)");
  RegisterUnitType(&DAT_10040ea0,"FregatNEW(BA)");
  RegisterUnitType(&DAT_10040d18,"Kreposnoi_pruss(GE)");
  RegisterUnitType(&DAT_10040e40,"Pik_evro_rus(GE)");
  RegisterUnitType(&DAT_10040fb0,"Mushketer_PR(GE)");
  RegisterUnitType(&DAT_10040d10,"GRUZ(UN)");
  RegisterUnitType(&DAT_10040eb0,"Europ(GE)");
  RegisterUnitType(&DAT_10040f90,"Sclad1(GE)");
  RegisterUnitType(&DAT_10040f80,"Melnica(GE)");
  RegisterUnits(&DAT_10040e10,DAT_1003b0ec);
  RegisterUnits(&DAT_10040e18,DAT_1003b0e8);
  RegisterUnits(&DAT_10040e20,DAT_1003b0e4);
  RegisterUnits(&DAT_10040e28,DAT_1003b0e0);
  RegisterDynGroup(&DAT_10040eb8);
  RegisterDynGroup(&DAT_10040ec0);
  RegisterDynGroup(&DAT_10040d08);
  RegisterDynGroup(&DAT_10040d20);
  RegisterDynGroup(&DAT_10040e30);
  RegisterDynGroup(&DAT_10040e98);
  RegisterVar(&DAT_10040eb8,8);
  RegisterVar(&DAT_10040ec0,8);
  RegisterVar(&DAT_10040d08,8);
  RegisterVar(&DAT_10040d20,8);
  RegisterVar(&DAT_10040e30,8);
  RegisterVar(&DAT_10040e98,8);
  RegisterDynGroup(&DAT_10040d70);
  DAT_10040d90 = 1;
  RegisterDynGroup(&DAT_10040d98);
  DAT_10040db8 = 1;
  RegisterDynGroup(&DAT_10040dc0);
  DAT_10040de0 = 1;
  RegisterDynGroup(&DAT_10040de8);
  DAT_10040e08 = 1;
  RegisterDynGroup(&DAT_10040d88);
  RegisterDynGroup(&DAT_10040db0);
  RegisterDynGroup(&DAT_10040dd8);
  RegisterDynGroup(&DAT_10040e00);
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    RegisterUnitType(((unsigned char *)&DAT_10040d28) + local_8 * 8,(((int*)0))[local_8]);
  }
  RegisterVar(&DAT_10040fa8,4);
  RegisterVar(&DAT_10040d70,0x26);
  RegisterVar(&DAT_10040d98,0x26);
  RegisterVar(&DAT_10040dc0,0x26);
  RegisterVar(&DAT_10040de8,0x26);
  RegisterVar(&DAT_10040f78,4);
  RegisterVar(&DAT_10040fa8,4);
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  unsigned int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_10040f78 = GetDiff(0);
    ChangeFriends(0,9);
    DAT_10040fa8 = 0;
    SetResource(0,3,DAT_10040f78 * -5000 + 50000);
    SetResource(0,1,DAT_10040f78 * -3000 + 18000);
    SetResource(0,0,3000);
    SetResource(0,2,3000);
    SetResource(0,5,DAT_10040f78 * -3000 + 11000);
    SetResource(0,4,DAT_10040f78 * -3000 + 11000);
    EnableUnit(0,&DAT_10040eb0,0);
    EnableUnit(0,&DAT_10040f90,0);
    EnableUnit(0,&DAT_10040f80,0);
    RunTimer(5,100);
    RunTimer(6,100);
    RunTimer(0x1e,0x96);
    SetTrigg(99,0);
  }
  uVar1 = TimerDoneFirst(0x1e);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE0");
    if (DAT_10040f78 < 1) {
      SetLightSpot(&DAT_10040e68,1,5);
      SetLightSpot(&DAT_10040e70,1,6);
      SetLightSpot(&DAT_10040e78,1,7);
      SetLightSpot(&DAT_10040e80,1,8);
    }
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetAmountOfWarriors(0);
    DAT_10040fbc = (iVar2 + -0x6b) / (7 - DAT_10040f78);
    SaveSelectedUnits(0,&DAT_10040eb8,0);
    local_8 = local_8 & -256;
    uVar1 = TimerIsEmpty(1);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_10040d70);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_10040e10);
        if (0 < iVar2) {
          FUN_10004040(&DAT_10040ec0,&DAT_10040e48,DAT_10040fa8 + DAT_10040f78 + DAT_10040fbc)
          ;
          local_8 = (int)1;
          RunTimer(1,(4 - DAT_10040f78) * 500);
        }
      }
    }
    uVar1 = TimerIsEmpty(2);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_10040d98);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_10040e18);
        if (0 < iVar2) {
          FUN_10004040(&DAT_10040ec0,&DAT_10040e50,DAT_10040fa8 + DAT_10040f78 + DAT_10040fbc)
          ;
          local_8 = (int)1;
          RunTimer(2,(4 - DAT_10040f78) * 500);
        }
      }
    }
    uVar1 = TimerIsEmpty(3);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_10040dc0);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_10040e20);
        if (0 < iVar2) {
          FUN_10004040(&DAT_10040ec0,&DAT_10040e58,DAT_10040fa8 + DAT_10040f78 + DAT_10040fbc)
          ;
          local_8 = (int)1;
          RunTimer(3,(4 - DAT_10040f78) * 500);
        }
      }
    }
    uVar1 = TimerIsEmpty(4);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_10040de8);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_10040e28);
        if (0 < iVar2) {
          FUN_10004040(&DAT_10040ec0,&DAT_10040e60,DAT_10040fa8 + DAT_10040f78 + DAT_10040fbc)
          ;
          local_8 = (int)1;
          RunTimer(4,(4 - DAT_10040f78) * 500);
        }
      }
    }
    if ((local_8 & 0xff) != 0) {
      DAT_10040fa8 = DAT_10040fa8 + 1;
    }
    uVar1 = TimerDoneFirst(1);
    if ((uVar1 & 0xff) != 0) {
      SelectUnitsInZone(&DAT_10040e68,1,0);
      SelCenter(&DAT_10040d80,DAT_10040d90,800);
      SaveSelectedUnits(1,&DAT_10040d70,0);
      FUN_10004630(&DAT_10040d70,(unsigned short *)&DAT_10040f60);
      DAT_10040d91 = 1;
      FreeTimer(1);
    }
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      SelectUnitsInZone(&DAT_10040e70,1,0);
      SelCenter(&DAT_10040da8,DAT_10040db8,800);
      SaveSelectedUnits(1,&DAT_10040d98,0);
      FUN_10004630(&DAT_10040d98,(unsigned short *)&DAT_10040f60);
      DAT_10040db9 = 1;
      FreeTimer(2);
    }
    uVar1 = TimerDoneFirst(3);
    if ((uVar1 & 0xff) != 0) {
      SelectUnitsInZone(&DAT_10040e78,1,0);
      SelCenter(&DAT_10040dd0,DAT_10040de0,800);
      SaveSelectedUnits(1,&DAT_10040dc0,0);
      FUN_10004630(&DAT_10040dc0,(unsigned short *)&DAT_10040f60);
      DAT_10040de1 = 1;
      FreeTimer(3);
    }
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) != 0) {
      SelectUnitsInZone(&DAT_10040e80,1,0);
      SelCenter(&DAT_10040df8,DAT_10040e08,800);
      SaveSelectedUnits(1,&DAT_10040de8,0);
      FUN_10004630(&DAT_10040de8,(unsigned short *)&DAT_10040f60);
      DAT_10040e09 = 1;
      FreeTimer(4);
    }
    uVar1 = TimerDoneFirst(5);
    if ((uVar1 & 0xff) != 0) {
      FUN_100041d0(&DAT_10040d08);
      UnitsCenter(&DAT_10040f60,&DAT_10040d08,1000);
      FUN_10004810((intptr_t)&DAT_10040d70);
      FUN_10004810((intptr_t)&DAT_10040d98);
      FUN_10004810((intptr_t)&DAT_10040dc0);
      FUN_10004810((intptr_t)&DAT_10040de8);
      uVar1 = NationIsErased(0);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(100,0);
        LooseGame();
      }
      iVar2 = GetTotalAmount0(&DAT_10040e10);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_10040e18);
        if (iVar2 < 1) {
          iVar2 = GetTotalAmount0(&DAT_10040e20);
          if (iVar2 < 1) {
            iVar2 = GetTotalAmount0(&DAT_10040e28);
            if (iVar2 < 1) {
              SetTrigg(100,0);
              ShowVictory();
            }
          }
        }
      }
      RunTimer(5,0xf);
    }
    uVar1 = TimerDoneFirst(6);
    if ((uVar1 & 0xff) != 0) {
      CreateObject0(&DAT_10040e98,&DAT_10040f98,&DAT_10040ea0,1,&DAT_10040ed0,0);
      SelectUnits(&DAT_10040e98,0);
      SetLightSpot(&DAT_10040ed8,3,1);
      SelSendAndKill(1,&DAT_10040ed8,0x80,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10040e98);
    if (iVar2 < 1) {
      iVar2 = GetTotalAmount0(&DAT_10040e30);
      if (iVar2 < 1) {
        uVar1 = TimerDone(6);
        if ((uVar1 & 0xff) != 0) {
          CreateObject0(&DAT_10040e30,&DAT_10040f98,&DAT_10040ea8,3,&DAT_10040e88,0);
          SelectUnits(&DAT_10040e30,0);
          SelSendAndKill(3,&DAT_10040ec8,0x80,0);
          SetTrigg(0xf,0);
          RunTimer(6,3000);
        }
      }
    }
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_10040ec8,&DAT_10040e30);
      if (0 < iVar2) {
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d18,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d18,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d18,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d18,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d18,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d18,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d18,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d18,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d18,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040e40,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040fb0,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d10,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d10,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        CreateObject0(&DAT_10040ec0,&DAT_10040f98,&DAT_10040d10,0,&DAT_10040ee0,0);
        SelectUnits(&DAT_10040ec0,0);
        SelSendTo(0,&DAT_10040ef0,0x80,0);
        AddResource(0,3,(3 - DAT_10040f78) * 20000 + 30000);
        SetTrigg(0xf,0);
      }
    }
    FUN_10004ad0(1,&DAT_10040e68,&DAT_10040e48);
    FUN_10004ad0(2,&DAT_10040e70,&DAT_10040e50);
    FUN_10004ad0(3,&DAT_10040e78,&DAT_10040e58);
    FUN_10004ad0(4,&DAT_10040e80,&DAT_10040e60);
    ClearSelection(0);
    SelectUnits(&DAT_10040eb8,0);
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
