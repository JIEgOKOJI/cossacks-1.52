#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_10039040 = 0;
long long DAT_1003904c = 0;
long long DAT_10039050 = 0;
char DAT_10039094[] = "Z5";
char DAT_10039098[] = "Z9";
char DAT_1003909c[] = "Z4";
char DAT_100390a0[] = "Z8";
char DAT_100390a4[] = "Z3";
char DAT_100390a8[] = "Z7";
char DAT_100390ac[] = "Z2";
char DAT_100390b0[] = "Z6";
char DAT_100390b4[] = "Z1";
char DAT_100390c4[] = "SUXX";
long long DAT_1003cd50 = 0;
int DAT_1003cd5c = 4;
int DAT_1003cd60 = 800;
int DAT_1003cd64 = 2;
int DAT_1003cdb0 = 0;
int DAT_1003cdb4 = 0;
int DAT_1003cdb8 = 0;
long long DAT_1003ec88 = 0;
long long DAT_1003ec8c = 0;
long long DAT_1003ec90 = 0;
long long DAT_1003eca0 = 0;
int DAT_1003ecc8 = 0;
long long DAT_1003ecd8 = 0;
long long DAT_1003ece0 = 0;
long long DAT_1003ece8 = 0;
long long DAT_1003ecf0 = 0;
long long DAT_1003ecf8 = 0;
long long DAT_1003ed00 = 0;
long long DAT_1003ed08 = 0;
long long DAT_1003ed10 = 0;
long long DAT_1003ed18 = 0;
long long DAT_1003ed20 = 0;
int DAT_1003ed28 = 0;
long long DAT_1003ed30 = 0;
long long DAT_1003ed40 = 0;
int DAT_1003edf0 = 0;
long long DAT_1003edf8 = 0;
long long DAT_1003ee00 = 0;
long long DAT_1003ee08 = 0;
long long DAT_1003ee10 = 0;
long long DAT_1003ee18 = 0;
int DAT_1003ee68 = 0;
int DAT_1003eeb8 = 0;
int DAT_1003eebc = 0;
int DAT_1003eec0 = 0;
int DAT_1003eec4 = 0;
int DAT_1003eec8 = 0;
int DAT_1003eecc = 0;
int DAT_1003eed0 = 0;
int DAT_1003eed4 = 0;
int DAT_1003eef0 = 0;
long long DAT_1003eef4 = 0;
int *DAT_10040a34 = 0;
int DAT_10040a38 = 0;
int DAT_10039040_ovl = 776530087;
int DAT_1003904c_ovl = 1065353216;
int DAT_10039050_ovl = 1120403456;
int DAT_1003ec88_ovl = 0;
int DAT_1003ec8c_ovl = 0;
int DAT_1003ecd8_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10008e74() { return 0; }
int FUN_10008e7d() { return 0; }
int FUN_10008f24() { return 0; }
int FUN_10008f2d() { return 0; }
int FUN_10008fd4() { return 0; }
int FUN_10008fdd() { return 0; }
int FUN_10009d80() { return 0; }
int FUN_1000a678() { return 0; }
int FUN_1000b0c0() { return 0; }
int FUN_1000b160() { return 0; }
int FUN_1000b1f0() { return 0; }
int FUN_1000b650() { return 0; }
int FUN_1000bc50() { return 0; }
int FUN_1000c090() { return 0; }
int FUN_1000e140() { return 0; }
int FUN_1000e380() { return 0; }
int FUN_1000e390() { return 0; }


/* Forward declarations */
int FUN_10001580(int param_1);
int FUN_10001690(int param_1,unsigned short param_2);
int FUN_100017e0(int param_1,char param_2,char param_3);
int FUN_100018a0(int param_1,char param_2);
int FUN_10001960(int param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_10001a80(char *param_1);
char * 
FUN_10002280(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void 
FUN_10002310(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
int  FUN_10002430(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
void  FUN_10002580(intptr_t param_1);
int FUN_10002600(unsigned int param_1);
int  FUN_10002670(int param_1);
unsigned int *  FUN_100026d0(void *this_ptr,unsigned int *param_1,byte param_2);
void  FUN_10002780(void *this_ptr,int param_1,char param_2);
int FUN_100028e0(char param_1);
void FUN_10002970(void);
void FUN_100029b0(void);
void FUN_10002a00(void);
void FUN_10002a40(void);
void FUN_10002a80(void);
void FUN_10002ad0(void);
int FUN_10002b40(int param_1,char param_2);
void FUN_10003000(void);
void FUN_10003040(void);
int  FUN_100030e0(int param_1);
void  FUN_10003170(int param_1);
void FUN_10003b00(int param_1,int param_2);
void FUN_10003bb0(void);
int FUN_10004890(int param_1);
void FUN_10004930(int param_1);
void FUN_100049d0(void);
void  FUN_10004a90(int param_1);
int  FUN_10004b60(int param_1);
int  FUN_10004bc0(int param_1);
void  FUN_10004c50(void *this_ptr,int param_1);
int  FUN_10004c90(void *this_ptr,int param_1);
void  FUN_10004d10(void *this_ptr,int param_1,int param_2);
void  FUN_10004e30(void *this_ptr,int param_1);
void  FUN_10004e70(void *this_ptr,int param_1);
void  FUN_10004eb0(int param_1);
void  FUN_10004f60(void *this_ptr,int param_1);
void  FUN_10004fa0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005000(void *this_ptr,int param_1);
int  FUN_100050d0(int param_1);
void  FUN_10005160(void *this_ptr,unsigned int param_1);
int  FUN_100051e0(int param_1);
void  FUN_10005210(void *this_ptr,int param_1);
void  FUN_10005290(void *this_ptr,int param_1);
int  FUN_10005300(int param_1);
void  FUN_10005370(void *this_ptr,int param_1);
void  FUN_100053e0(void *this_ptr,int param_1);
void  FUN_10005420(int param_1);
void  FUN_10005490(void *param_1);
void  FUN_10005510(void *this_ptr,int param_1);
void  FUN_10005570(void *param_1);
void  FUN_100055f0(void *this_ptr,int param_1);
void  FUN_10005630(int param_1);
void  FUN_10005680(int param_1);
void  FUN_100056d0(void *this_ptr,int param_1,int param_2);
void  FUN_10005720(void *param_1);
void  FUN_10005a10(void *param_1);
void  FUN_10005aa0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005b00(void *param_1);
void  FUN_10005b80(void *this_ptr,int param_1);
int FUN_10005bf0(short *param_1);
void  FUN_10005c90(void *this_ptr,int param_1);
void  FUN_10005cd0(void *this_ptr,int param_1);
void  FUN_10005d10(void *this_ptr,int param_1);
void  FUN_10005d50(void *this_ptr,void *param_1);
int  FUN_10005dc0(int param_1);
int  FUN_10005e00(int param_1);
void  FUN_10005e30(void *param_1);
int FUN_100060c0(void);
void  FUN_100060f0(void *this_ptr,int param_1,int param_2);
void  FUN_10006160(void *this_ptr,int param_1);
void  FUN_100061d0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006270(void *this_ptr,int param_1,int param_2);
int  FUN_100063c0(int param_1);
int  FUN_10006400(int param_1);
int  FUN_10006470(void *this_ptr,int param_1);
void  FUN_100064f0(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10006590(int param_1);
void  FUN_100065e0(void *this_ptr,int param_1,int param_2,int param_3);
int  FUN_100066b0(int param_1);
void  FUN_10006760(int param_1);
void  FUN_10006800(int param_1);
void  FUN_10006880(int param_1);
void FUN_10006a90(int param_1);
void FUN_10006ac0(int param_1,int param_2,int param_3);
void  FUN_10006b40(int param_1);
void  FUN_10006d70(void *this_ptr,int *param_1);
int  FUN_10006ea0(int param_1);
int  FUN_10006f40(int param_1);
int  FUN_10006fb0(int param_1);
void  FUN_10006ff0(void *this_ptr,int param_1);
void  FUN_10007050(void *param_1);
void  FUN_10007260(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_100073f0(int param_1,int param_2,int param_3,int param_4);
int  FUN_100074f0(int param_1);
int  FUN_10007590(int param_1);
int  FUN_10007600(int param_1);
int  FUN_10007640(void *this_ptr,int *param_1);
void  FUN_10007770(int param_1);
void  FUN_100078b0(void *this_ptr,int param_1);
int  FUN_10007910(int param_1);
int  FUN_100079a0(int param_1);
void 
FUN_10007a10(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10007ab0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10007b60(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10007c20(char *param_1);
void  FUN_10007d60(char *param_1);
void  FUN_10007e30(char *param_1);
int  FUN_10007f00(int param_1);
void  FUN_10007f40(void *this_ptr,int param_1);
void  FUN_10007fa0(void *this_ptr,int param_1);
int  FUN_10008020(void *this_ptr,int param_1);
void  FUN_10008110(void *this_ptr,int param_1,int param_2);
int  FUN_100081a0(int param_1);
void 
FUN_100081e0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5);
void  FUN_100082b0(int param_1);
void  FUN_100083f0(int param_1);
int  FUN_100084b0(int param_1);
void  FUN_100084e0(void *this_ptr,short param_1);
void  FUN_10008550(void *param_1);
void  FUN_100085a0(void *this_ptr,unsigned int *param_1);
void  FUN_10008620(void *this_ptr,int param_1);
void  FUN_10008690(void *this_ptr,int param_1,byte param_2);
void  FUN_10008710(void *this_ptr,int param_1);
int  FUN_10008760(int param_1);
int  FUN_100087f0(int param_1);
void  FUN_100088f0(int param_1);
void  FUN_10008950(void *this_ptr,int param_1);
void  FUN_100089c0(void *this_ptr,int param_1);
void  FUN_10008a50(void *this_ptr,int param_1);
void  FUN_10008ae0(void *this_ptr,char param_1);
void  FUN_10008b20(void *this_ptr,int param_1);
void FUN_10008b60(int param_1);
void  FUN_10008c00(int param_1);
void  FUN_10008c60(int param_1);
void FUN_10008e60(void);
void FUN_10008f10(void);
void FUN_10008fc0(void);
void FUN_10009060(void);
void FUN_10009090(void);
void FUN_100090a0(void);
int FUN_100090f0(int param_1);
void FUN_10009140(void *param_1);
int FUN_100091f0(void *param_1);
int FUN_10009560(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_100096c6(void);
int FUN_100096e0(int param_1);
int FUN_100097a0(int param_1);

void OnInit();
void ProcessScenary();


int __cdecl FUN_10001580(int param_1)

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
  uStack_8 = 0x1000164f;
  return 0;
}





int __cdecl FUN_10001690(int param_1,unsigned short param_2)

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
  uStack_8 = 0x1000178e;
  return 0;
}





int __cdecl FUN_100017e0(int param_1,char param_2,char param_3)

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
  local_14 = FUN_10001690(local_c,(unsigned short)(intptr_t)param_3);
  uStack_8 = 0x1000186f;
  return 0;
}





int __cdecl FUN_100018a0(int param_1,char param_2)

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
  local_14 = FUN_10001580(local_c);
  uStack_8 = 0x1000192b;
  return 0;
}







int __cdecl FUN_10001960(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  fVar3 = (long double)FUN_10008fd4(local_2c);
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_10039040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_10008f24(*(int*)((char*)&local_1c + 4));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_10008e74((intptr_t)local_1c);
  lVar4 = 0;
  local_24 = (int)lVar4;
  return 0;
}





void  FUN_10001a80(char *param_1)

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
  FUN_10002310(param_1,8,3,0x15,0,200,3,0x50);
  FUN_10002310(local_8,8,3,0x18,0,200,3,0x50);
  FUN_10002310(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002310(local_8,8,2,8,0,0x5a,3,0x32);
  FUN_10002310(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002310(local_8,8,2,0x16,0,0x1e,3,0x32);
  FUN_10002310(local_8,8,3,0x17,0,1000,3,0x5a);
  FUN_10002310(local_8,8,3,0xf,0,1000,3,0x5a);
  FUN_10002310(local_8,0x15,2,0xf,0,300,3,0x1e);
  FUN_10002310(local_8,0x15,2,0x14,0,300,3,0x1e);
  FUN_10002310(local_8,0x15,2,0x15,0,300,3,0x1e);
  FUN_10002310(local_8,0x15,2,0x18,0,300,3,0x1e);
  FUN_10002310(local_8,0x15,2,0x16,0,300,3,0x1e);
  FUN_10002310(local_8,0x15,2,0xb,0,300,3,0x1e);
  FUN_10002310(local_8,0x15,2,8,0,300,3,0x1e);
  FUN_10002310(local_8,0x15,3,0x17,0,1000,3,0x5a);
  FUN_10002310(local_8,0x15,2,10,0,500,3,0x1e);
  FUN_10002310(local_8,0x15,1,0x16,1,0x14,4,0x50);
  FUN_10002310(local_8,0x15,1,0x14,1,10,4,0x50);
  FUN_10002310(local_8,0x15,2,8,1,0x1e,4,0x50);
  FUN_10002310(local_8,0x15,2,0x15,1,100,4,0x50);
  FUN_10002310(local_8,0x14,2,0x14,0,500,3,0x50);
  FUN_10002310(local_8,0x14,2,0x16,0,500,3,0x50);
  FUN_10002310(local_8,0x14,2,0x15,0,500,3,0x50);
  FUN_10002310(local_8,0x14,3,0x17,0,1000,3,0x5a);
  FUN_10002310(local_8,0xf,2,0x15,0,300,3,0x50);
  FUN_10002310(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002310(local_8,0xf,2,8,0,300,3,0x32);
  FUN_10002310(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002310(local_8,0xf,2,0x16,0,300,3,0x32);
  FUN_10002310(local_8,0xf,2,0x17,0,300,3,0x5a);
  FUN_10002310(local_8,0xf,2,0xf,0,300,3,0x5a);
  FUN_10002310(local_8,0xf,2,0x18,0,300,3,0x1e);
  FUN_10002310(local_8,0xb,2,0x15,0,300,3,0x50);
  FUN_10002310(local_8,0xb,2,0x18,0,300,3,0x50);
  FUN_10002310(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002310(local_8,0xb,2,8,0,300,3,0x32);
  FUN_10002310(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002310(local_8,0xb,2,0x16,0,300,3,0x32);
  FUN_10002310(local_8,0xb,2,0x17,0,300,3,0x5a);
  FUN_10002310(local_8,0xb,2,0xf,0,300,3,0x5a);
  FUN_10002310(local_8,0xb,2,0xb,0,300,3,0x1e);
  FUN_10002310(local_8,0xb,2,10,0,500,3,0x1e);
  FUN_10002310(local_8,0x18,2,0x15,0,300,3,0x50);
  FUN_10002310(local_8,0x18,2,0x18,0,300,3,0x50);
  FUN_10002310(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002310(local_8,0x18,2,8,0,300,3,0x32);
  FUN_10002310(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002310(local_8,0x18,2,0x16,0,300,3,0x32);
  FUN_10002310(local_8,0x18,2,0x17,0,300,3,0x5a);
  FUN_10002310(local_8,0x18,2,0xf,0,300,3,0x5a);
  FUN_10002310(local_8,0x16,2,0x15,0,500,3,0x50);
  FUN_10002310(local_8,0x16,2,0x18,0,500,3,0x50);
  FUN_10002310(local_8,0x16,2,0x14,0,500,3,0x32);
  FUN_10002310(local_8,0x16,2,8,0,500,3,0x32);
  FUN_10002310(local_8,0x16,2,0xb,0,500,3,0x32);
  FUN_10002310(local_8,0x16,2,0x16,0,500,3,0x32);
  FUN_10002310(local_8,0x16,2,0x17,0,500,3,0x5a);
  FUN_10002310(local_8,0x16,2,0xf,0,500,3,0x5a);
  FUN_10002310(local_8,0x16,2,0xb,0,500,3,0x1e);
  FUN_10002310(local_8,0x16,2,10,0,500,2,0x1e);
  FUN_10002310(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (char *)0x100020dc;
  return;
}





char * 
FUN_10002280(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
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
FUN_10002310(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
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
    local_1c = (void *)FUN_100091f0((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = FUN_10002280(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(char **)((intptr_t)local_14 + 8) = local_20;
  }
  else {
    FUN_10002310(*(void **)((intptr_t)this_ptr + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  return;
}





int  FUN_10002430(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
LAB_100024da:
          local_c = (unsigned int)*(byte *)((intptr_t)this_ptr + 5) * 100 + (unsigned int)*(byte *)((intptr_t)this_ptr + 6);
          goto LAB_1000251c;
        }
        pvVar1 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 3);
          if (pvVar4 < pvVar1) goto LAB_100024da;
        }
      }
    }
  }
  if (*(int *)((intptr_t)this_ptr + 8) != 0) {
    uVar2 = (int)(short)param_4;
    local_8 = this_ptr;
    local_c = FUN_10002430(*(void **)((intptr_t)this_ptr + 8),
                                 (int)(char)param_1,
                                 (int)(char)param_2,
                                 (int)(char)param_3,uVar2);
  }
LAB_1000251c:
  local_8 = (void *)0x1000252c;
  return 0;
}





void  FUN_10002580(intptr_t param_1)

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
      local_14 = FUN_10002600(1);
    }
  }
  return;
}





int FUN_10002600(unsigned int param_1)

{
  void *in_ECX;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = in_ECX;
  FUN_10002580((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10009140(local_8);
  }
  local_8 = (void *)0x1000264b;
  return 0;
}





int  FUN_10002670(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1 + 0x20);
  return 0;
}





unsigned int *  FUN_100026d0(void *this_ptr,unsigned int *param_1,byte param_2)

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
    if (((long long *)&DAT_1003cd50)[local_14] == param_2) {
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





void  FUN_10002780(void *this_ptr,int param_1,char param_2)

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
    uVar2 = FUN_100028e0(local_2a);
    local_40 = (int *)((intptr_t)local_8 + (uVar2 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x1000288c;
  return;
}





int FUN_100028e0(char param_1)

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
    if (((long long *)&DAT_1003cd50)[bVar1] == param_1) {
      local_10 = 8;
      local_c = bVar1;
    }
    bVar1 = local_10 + 1;
  }
  return (intptr_t)local_c;
}





void FUN_10002970(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100029b0();
  uStack_8 = 0x1000299a;
  return;
}





void FUN_100029b0(void)

{
  int *puVar1;
  int iVar2;
  int *puVar3;
  char local_2c [36];
  int uStack_8;
puVar1 = (int *)FUN_10002670((intptr_t)local_2c);
  puVar3 = &DAT_1003eca0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x100029eb;
  return;
}





void FUN_10002a00(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002a40();
  FUN_10002a80();
  uStack_8 = 0x10002a2f;
  return;
}





void FUN_10002a40(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001a80(&DAT_1003ec90);
  uStack_8 = 0x10002a6f;
  return;
}





void FUN_10002a80(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100097a0(0x10002ad0);
  uStack_8 = 0x10002ab2;
  return;
}





void FUN_10002ad0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_1003ecc8 & 1) == 0) {
    DAT_1003ecc8 = DAT_1003ecc8 | 1;
    FUN_10002580((intptr_t)&DAT_1003ec90);
  }
  uStack_8 = 0x10002b1c;
  return;
}







int FUN_10002b40(int param_1,char param_2)

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
  FUN_10002780(&DAT_1003eca0,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)((long long *)&DAT_1003eca0)[local_40]) {
      uVar2 = (((long long *)&DAT_1003eca0)[local_40] * 100) / local_10;
      uVar1 = FUN_10002430(&DAT_1003ec90,(intptr_t)local_2a,1,
                                 (int)((long long *)&DAT_1003cd50)[local_40],uVar2);
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
    FUN_10002780(&DAT_1003eca0,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)((long long *)&DAT_1003eca0)[local_48]) {
        uVar2 = (((long long *)&DAT_1003eca0)[local_48] * 100) / local_10;
        uVar1 = FUN_10002430(&DAT_1003ec90,(intptr_t)local_2a,2,
                                   (int)((long long *)&DAT_1003cd50)[local_48],uVar2);
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
    FUN_10002780(&DAT_1003eca0,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)((long long *)&DAT_1003eca0)[local_50]) {
        local_54 = ((float)(int)((long long *)&DAT_1003eca0)[local_50] * DAT_10039050_ovl) / (float)local_10;
        if (local_54 < DAT_1003904c_ovl) {
          local_54 = 1.0;
        }
        lVar5 = 0;
        uVar1 = FUN_10002430(&DAT_1003ec90,(intptr_t)local_2a,
                                   3,(int)((long long *)&DAT_1003cd50)[local_50],(unsigned int)lVar5);
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





void FUN_10003000(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10003040();
  uStack_8 = 0x1000302a;
  return;
}







void FUN_10003040(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
DAT_1003ec88_ovl = local_c;
  DAT_1003ec8c_ovl = local_8;
  return;
}






int  FUN_100030e0(int param_1)

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





void  FUN_10003170(int param_1)

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
    cVar1 = FUN_100030e0(local_8);
    if (cVar1 == '\0') {
      iVar3 = GetUnitsAmount0(local_8 + 8,*(char *)(local_8 + 0x1e));
      if (iVar3 < 4) {
        SelectUnits(local_8,0);
        SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,
                       *(char *)(local_8 + 0x18),0);
        goto LAB_100035e2;
      }
    }
    uVar2 = FUN_10002b40(local_8,*(char *)(local_8 + 0x1e));
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
      local_28 = FUN_100017e0(local_8 + 8,*(char *)(local_8 + 0x1d),0x14);
      local_10 = local_28;
      if ((intptr_t)local_28 == 0) {
        local_30 = FUN_100017e0(local_8 + 8,*(char *)(local_8 + 0x1d),0xf);
        local_10 = local_30;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        local_38 = FUN_100017e0(local_8 + 8,*(char *)(local_8 + 0x1d),0xb);
        local_10 = local_38;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        local_40 = FUN_100017e0(local_8 + 8,*(char *)(local_8 + 0x1d),0x16);
        local_10 = local_40;
      }
      local_48 = FUN_100018a0(local_8 + 8,*(char *)(local_8 + 0x1e));
      local_18 = local_48;
      local_50 = FUN_10001960((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_48,
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
      local_58 = FUN_100018a0(local_8 + 8,0);
      local_18 = local_58;
      local_60 = FUN_10001960((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_58,
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
LAB_100035e2:
  return;
}





void __cdecl FUN_10003b00(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
CreateObject0(&DAT_1003ed30,&DAT_1003edf8,&DAT_1003ee18,4,param_1,0x80);
  SelectUnits(&DAT_1003ed30,0);
  SelSendTo(4,param_2,0x80,0);
  uStack_8 = 0x10003b89;
  return;
}





void FUN_10003bb0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
CreateObject0(&DAT_1003ee00,&DAT_1003edf8,&DAT_1003ed40,5,&DAT_1003ed00,0x80);
  SelectUnits(&DAT_1003ee00,0);
  SelSendTo(5,&DAT_1003ed10,0x80,0);
  uStack_8 = 0x10003c3b;
  return;
}





int __cdecl FUN_10004890(int param_1)

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





void __cdecl FUN_10004930(int param_1)

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
  uStack_8 = 0x100049a4;
  return;
}





void FUN_100049d0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x10004a19;
  return;
}






void  FUN_10004a90(int param_1)

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






int  FUN_10004b60(int param_1)

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





int  FUN_10004bc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}






void  FUN_10004c50(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x14) = param_1;
  return;
}





int  FUN_10004c90(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((intptr_t)this_ptr + 8,*(int *)((intptr_t)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10004ce8;
  return 0;
}





void  FUN_10004d10(void *this_ptr,int param_1,int param_2)

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
  local_8 = (void *)0x10004de7;
  return;
}





void  FUN_10004e30(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10004e70(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10004eb0(int param_1)

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





void  FUN_10004f60(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10004fa0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  *(int *)((intptr_t)this_ptr + 0x1c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10005000(void *this_ptr,int param_1)

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
  local_8 = (void *)0x100050a0;
  return;
}





int  FUN_100050d0(int param_1)

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





void  FUN_10005160(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelChangeNation(*(char *)((intptr_t)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((intptr_t)local_8 + 0x10) = param_1;
  local_8 = (void *)0x100051b8;
  return;
}





int  FUN_100051e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10005210(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),param_1,0,0);
  *(int *)((intptr_t)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000526c;
  return;
}





void  FUN_10005290(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  Patrol(*(char *)((intptr_t)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x100052e1;
  return;
}





int  FUN_10005300(int param_1)

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





void  FUN_10005370(void *this_ptr,int param_1)

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
  local_8 = (void *)0x100053c3;
  return;
}





void  FUN_100053e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10005420(int param_1)

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





void  FUN_10005490(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  cVar1 = FUN_10004b60(param_1);
  if (cVar1 != '\0') {
    FUN_10005570(local_8);
    iVar2 = FUN_100050d0(local_8);
    if (iVar2 < 10) {
      FUN_10005210(local_8,*(int *)((intptr_t)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x100054ef;
  return;
}





void  FUN_10005510(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10005556;
  return;
}





void  FUN_10005570(void *param_1)

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
  uVar1 = FUN_10004c90(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x100055cb;
  return;
}





void  FUN_100055f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10005630(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005680(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10005680(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_100056d0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x24) = param_1;
  *(int *)((intptr_t)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10005720(void *param_1)

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
      (local_8 = param_1, cVar1 = FUN_10004b60(param_1), cVar1 != '\0')) &&
     (*(int *)((intptr_t)local_8 + 0x10) != 0)) {
    if (*(int *)((intptr_t)local_8 + 0x10) == 6) {
      uVar6 = 0;
      uVar2 = FUN_10004c90(local_8,600);
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
          FUN_10005160(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10004a90((intptr_t)local_8);
        }
        AddResource(0,*(char *)((intptr_t)local_8 + 0x24),*(int *)((intptr_t)local_8 + 0x28));
        FUN_100056d0(local_8,0,0);
      }
    }
    else {
      iVar3 = FUN_100050d0(local_8);
      if (iVar3 < 0x32) {
        FUN_10005a10(local_8);
      }
      cVar1 = FUN_10005300((intptr_t)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        this_ptr = (void *)FUN_10005bf0(*(short **)((intptr_t)local_8 + 0x20));
        FUN_10005d50(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10005952;
  return;
}





void  FUN_10005a10(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10005160(param_1,6);
  SelectUnits(local_8,0);
  uVar5 = 0;
  uVar4 = 0;
  uVar1 = FUN_10004c90(local_8,100);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10005420((intptr_t)local_8);
  local_8 = (void *)0x10005a7c;
  return;
}





void  FUN_10005aa0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10004fa0(this_ptr,param_1,param_2,param_3);
  *(char *)((intptr_t)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10005ae5;
  return;
}





void  FUN_10005b00(void *param_1)

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
  uVar1 = FUN_10004c90(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10005b5b;
  return;
}





void  FUN_10005b80(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 4) = param_1;
  ((long long *)&DAT_1003ee68)[DAT_1003eeb8] = this_ptr;
  DAT_1003eeb8 = DAT_1003eeb8 + 1;
  return;
}





int __cdecl FUN_10005bf0(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1003ee68;
  for (local_c = 0; local_c < DAT_1003eeb8; local_c = local_c + 1) {
    psVar1 = (short *)FUN_10005dc0(((long long *)&DAT_1003ee68)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_1003ee68)[local_c];
    }
  }
  return 0;
}





void  FUN_10005c90(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 8) = param_1;
  return;
}





void  FUN_10005cd0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10005d10(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10005d50(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100056d0(param_1,*(int *)((intptr_t)this_ptr + 0xc),*(int *)((intptr_t)this_ptr + 0x10));
  FUN_10005210(param_1,*(int *)((intptr_t)local_8 + 8));
  local_8 = (void *)0x10005d9f;
  return;
}





int  FUN_10005dc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10005e00(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10005e30(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  iVar2 = FUN_10006400((intptr_t)param_1);
  if ((0 < iVar2) && (*(int *)((intptr_t)local_8 + 0x1c) + 1 < *(int *)((intptr_t)local_8 + 0x20))) {
    if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      cVar1 = FUN_10006470(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10006ac0((intptr_t)local_8 + 0xc,
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      cVar1 = FUN_10006470(local_8,*(int *)
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
  local_8 = (void *)0x10006032;
  return;
}





int FUN_100060c0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_100060f0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10006160(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_100061d0(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x10006241;
  return;
}





void  FUN_10006270(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  iVar2 = FUN_10006400((intptr_t)this_ptr);
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
    FUN_100060f0(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10006371;
  return;
}





int  FUN_100063c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





int  FUN_10006400(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return 0;
}





int  FUN_10006470(void *this_ptr,int param_1)

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
  iVar1 = FUN_10006400((intptr_t)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100064d0;
  return 0;
}





void  FUN_100064f0(void *this_ptr,int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xc,param_1);
  uVar1 = FUN_10004890((intptr_t)local_8 + 0xc);
  *(unsigned int *)((intptr_t)local_8 + 0x18) = uVar1 & 0xff;
  *(int *)((intptr_t)local_8 + 0x14) = 0;
  *(int *)((intptr_t)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10006564;
  return;
}





BOOL  FUN_10006590(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_100065e0(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10006590((intptr_t)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x1000667d;
  return;
}





int  FUN_100066b0(int param_1)

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





void  FUN_10006760(int param_1)

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





void  FUN_10006800(int param_1)

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





void  FUN_10006880(int param_1)

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
      FUN_10006760(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    cVar1 = FUN_100066b0(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10006800(local_8);
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





void __cdecl FUN_10006a90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_1003eebc = param_1;
  return;
}





void __cdecl FUN_10006ac0(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_1003eebc != (void *)0x0) {
    bVar1 = FUN_10006590((int)DAT_1003eebc);
    if (bVar1) {
      FUN_100065e0(DAT_1003eebc,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10006b19;
  return;
}





void  FUN_10006b40(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  cVar1 = FUN_10006f40(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      cVar1 = FUN_10006ea0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_1003eec0,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_1003eec4 == 0) {
        cVar1 = FUN_10006ea0(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_1003eec0,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_1003eec4,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_1003eec4,0);
      }
    }
    else {
      cVar1 = FUN_10006ea0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_1003eec0,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10006d70(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10006e55;
  return;
}





int  FUN_10006ea0(int param_1)

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





int  FUN_10006f40(int param_1)

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





int  FUN_10006fb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10006ff0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10007037;
  return;
}





void  FUN_10007050(void *param_1)

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
  cVar1 = FUN_10007590((intptr_t)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      puVar2 = (int *)FUN_10007640(local_8,local_10);
      FUN_100073f0((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((intptr_t)local_8 + 0xc) = 2;
      }
      else {
        cVar1 = FUN_100074f0((intptr_t)local_8);
        if (cVar1 == '\0') {
          SelectUnits((intptr_t)local_8 + 0xd,0);
          SelSendTo(DAT_1003cd5c,(intptr_t)local_8 + 0x1d,*(char *)((intptr_t)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      puVar2 = (int *)FUN_10007640(local_8,local_18);
      FUN_100073f0((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((intptr_t)local_8 + 0xd,0);
        SelSendTo(DAT_1003cd5c,DAT_1003eec8,*(char *)((intptr_t)local_8 + 8),0);
      }
      else {
        *(char *)((intptr_t)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x100071e9;
  return;
}







void  FUN_10007260(void *this_ptr,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX = 0;
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
  piVar1 = (int *)FUN_10007640(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = piVar1[1];
  local_38 = local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_10008fd4(local_20);
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_10039040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10008f24(extraout_ECX);
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_10008e74(*(int*)((char*)&local_28 + 4));
  lVar5 = 0;
  local_14 = (int)lVar5;
  FUN_100073f0((intptr_t)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((intptr_t)local_8 + 8) = local_2c + 0x80;
  FUN_10007050(local_8);
  local_8 = (void *)0x10007391;
  return;
}





void FUN_100073f0(int param_1,int param_2,int param_3,int param_4)

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
GetUnitInfo(DAT_1003eecc,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_1003eec8,DAT_1003eecc,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





int  FUN_100074f0(int param_1)

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





int  FUN_10007590(int param_1)

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





int  FUN_10007600(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





int  FUN_10007640(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10007725;
  return 0;
}





void  FUN_10007770(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  cVar1 = FUN_100079a0(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_1003eed0,local_8,DAT_1003cd60);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      cVar1 = FUN_10007910(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_1003cd64,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_100078b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x100078f4;
  return;
}





int  FUN_10007910(int param_1)

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





int  FUN_100079a0(int param_1)

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
FUN_10007a10(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((intptr_t)this_ptr + 6) = param_1;
  *(int *)((intptr_t)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  uVar1 = FUN_10004890(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10007a88;
  return;
}





void 
FUN_10007ab0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  RegisterZone((intptr_t)local_8 + 0x1e,param_2);
  FUN_10007a10(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10007b32;
  return;
}





void  FUN_10007b60(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((intptr_t)local_8 + 0x1e,DAT_1003eed4,(intptr_t)local_8 + 0x16,300);
  FUN_10007a10(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10007bf0;
  return;
}





void  FUN_10007c20(char *param_1)

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
      FUN_10007d60(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10007e30(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  local_8 = (char *)0x10007d1b;
  return;
}





void  FUN_10007d60(char *param_1)

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
  local_8 = (char *)0x10007dfa;
  return;
}





void  FUN_10007e30(char *param_1)

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
  local_8 = (char *)0x10007eca;
  return;
}





int  FUN_10007f00(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = -1;
  return param_1;
}





void  FUN_10007f40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x30,param_1);
  local_8 = (void *)0x10007f87;
  return;
}





void  FUN_10007fa0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup((intptr_t)this_ptr + 0x30);
  RemoveGroup(param_1,(intptr_t)local_8 + 0x30);
  local_8 = (void *)0x10008000;
  return;
}





int  FUN_10008020(void *this_ptr,int param_1)

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
  local_8 = (unsigned short *)0x100080d2;
  return 0;
}





void  FUN_10008110(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  cVar1 = FUN_10008020(this_ptr,param_1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(param_2,param_1);
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10008178;
  return;
}





int  FUN_100081a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0x30;
}





void 
FUN_100081e0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
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
  local_8 = (void *)0x10008275;
  return;
}





void  FUN_100082b0(int param_1)

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





void  FUN_100083f0(int param_1)

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
    iVar1 = FUN_100081a0(local_8);
    iVar1 = GetUnitsAmount1(local_14,iVar1);
    if (0 < iVar1) {
      FUN_100082b0(local_8);
      local_c = 1;
    }
  }
  return;
}





int  FUN_100084b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100084e0(void *this_ptr,short param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  UnitsCenter((intptr_t)this_ptr + 8,this_ptr,(intptr_t)param_1);
  local_8 = (void *)0x10008532;
  return;
}





void  FUN_10008550(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100084e0(param_1,300);
  local_8 = (void *)0x10008587;
  return;
}





void  FUN_100085a0(void *this_ptr,unsigned int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10008550(this_ptr);
  local_10 = (unsigned int)*(unsigned short *)((intptr_t)local_8 + 8);
  local_c = (unsigned int)*(unsigned short *)((intptr_t)local_8 + 10);
  *param_1 = local_10;
  param_1[1] = local_c;
  local_8 = (void *)0x100085fb;
  return;
}





void  FUN_10008620(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelSendAndKill(*(char *)((intptr_t)local_8 + 0x3c),param_1,0,0);
  local_8 = (void *)0x10008673;
  return;
}





void  FUN_10008690(void *this_ptr,int param_1,byte param_2)

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
  local_8 = (void *)0x100086f1;
  return;
}





void  FUN_10008710(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10008690(this_ptr,param_1,0);
  local_8 = (void *)0x10008748;
  return;
}





int  FUN_10008760(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}






int  FUN_100087f0(int param_1)

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






void  FUN_100088f0(int param_1)

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





void  FUN_10008950(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  uVar1 = FUN_100087f0(local_8);
  *(char *)((intptr_t)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x100089a2;
  return;
}





void  FUN_100089c0(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup(this_ptr);
  RemoveGroup(param_1,local_8);
  uVar1 = FUN_100087f0(local_8);
  *(char *)((intptr_t)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10008a28;
  return;
}





void  FUN_10008a50(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10008abb;
  return;
}





void  FUN_10008ae0(void *this_ptr,char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)((intptr_t)this_ptr + 0x3c) = param_1;
  return;
}





void  FUN_10008b20(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x3d) = param_1;
  return;
}





void FUN_10008b60(int param_1)

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
    uVar1 = FUN_10008760(local_8);
    SelectUnits(uVar1,uVar4);
    SelAttackGroup(1,param_1);
  }
  return;
}





void  FUN_10008c00(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
if (*(int *)(param_1 + 0x3d) != 0) {
    local_8 = param_1;
    FUN_10008b60(*(int *)(param_1 + 0x3d));
  }
  return;
}





void  FUN_10008c60(int param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  uVar1 = FUN_10008760(param_1);
  RegisterDynGroup(uVar1);
  return;
}





void FUN_10008e60(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000a678((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_10008e7d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10008f10(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000a678((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_10008f2d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10008fc0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000a678((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_10008fdd((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_10009060(void)

{
  FUN_100090a0();
  return;
}





void FUN_10009090(void)

{
  return;
}





void FUN_100090a0(void)

{
  return;
}





int __cdecl FUN_100090f0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_1003eef0;
  DAT_1003eef0 = param_1;
  return uVar1;
}





void __cdecl FUN_10009140(void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000b0c0(9);
    if (((((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((intptr_t)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((intptr_t)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_10009d80(2,0x10039264,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000bc50(param_1,*(int *)((intptr_t)param_1 + -0xc));
    FUN_1000b160(9);
  }
  return;
}





int __cdecl FUN_100091f0(void *param_1)

{
  FUN_1000b1f0(param_1,1);
  return 0;
}





int __cdecl FUN_10009560(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

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
      FUN_1000e140();
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
    FUN_1000e140();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_100096c6(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003cdb4 = *(int *)(unaff_EBP + 8);
  DAT_1003cdb0 = in_EAX;
  DAT_1003cdb8 = unaff_EBP;
  return;
}





int __cdecl FUN_100096e0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_1000e380();
  uVar1 = FUN_1000c090((int)DAT_10040a38,2);
  if (uVar1 < (unsigned int)((int)DAT_10040a34 + (4 - (int)DAT_10040a38))) {
    iVar5 = 0x68;
    pcVar4 = "onexit.c";
    uVar1 = 2;
    iVar2 = FUN_1000c090((int)DAT_10040a38,2);
    piVar3 = FUN_1000b650(DAT_10040a38,(void *)(iVar2 + 0x10),uVar1,(int)pcVar4,iVar5);
    if (piVar3 == (int *)0x0) {
      FUN_1000e390();
      return 0;
    }
    DAT_10040a34 = piVar3 + ((int)DAT_10040a34 - (int)DAT_10040a38 >> 2);
    DAT_10040a38 = piVar3;
  }
  *DAT_10040a34 = param_1;
  DAT_10040a34 = DAT_10040a34 + 1;
  FUN_1000e390();
  return param_1;
}





int __cdecl FUN_100097a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100096e0(param_1);
  return (iVar1 != 0) - 1;
}





void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
DVar1 = time(NULL);
  srand(DVar1);
  SetPlayerName(0,"VENECIA");
  SetPlayerName(1,DAT_100390c4);
  SetPlayerName(2,"ENGLAND");
  RegisterZone(&DAT_1003ece0,DAT_100390b4);
  RegisterZone(&DAT_1003ed08,DAT_100390b0);
  RegisterZone(&DAT_1003ece8,DAT_100390ac);
  RegisterZone(&DAT_1003ed10,DAT_100390a8);
  RegisterZone(&DAT_1003ecf0,DAT_100390a4);
  RegisterZone(&DAT_1003ed18,DAT_100390a0);
  RegisterZone(&DAT_1003ecf8,DAT_1003909c);
  RegisterZone(&DAT_1003ed20,DAT_10039098);
  RegisterZone(&DAT_1003ed00,DAT_10039094);
  RegisterUnitType(&DAT_1003ee08,"PorE(VE)");
  RegisterUnitType(&DAT_1003ee10,"PorE(SA)");
  RegisterUnitType(&DAT_1003ed40,"Fregat(VE)");
  RegisterUnitType(&DAT_1003ee18,"PERES_KOR(SA)");
  RegisterFormation(&DAT_1003edf8,"#ODIN");
  RegisterDynGroup(&DAT_1003ed30);
  RegisterDynGroup(&DAT_1003ee00);
  RegisterVar(&DAT_1003ed30,8);
  RegisterVar(&DAT_1003ee00,8);
  RegisterVar(&DAT_1003edf0,4);
  RegisterVar(&DAT_1003ed28,4);
  RegisterVar(&DAT_1003ecd8,4);
  uStack_8 = 0x10003a46;
  return;
}







void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_1003edf0 = GetDiff(0);
    ChangeFriends(1,0x16);
    ChangeFriends(2,0x16);
    ChangeFriends(0,0x21);
    SetResource(0,3,DAT_1003edf0 * -3000 + 10000);
    SetResource(0,1,DAT_1003edf0 * -3000 + 10000);
    SetResource(0,0,DAT_1003edf0 * -3000 + 10000);
    SetResource(0,2,DAT_1003edf0 * -3000 + 10000);
    SetResource(0,5,DAT_1003edf0 * -3000 + 10000);
    SetResource(0,4,DAT_1003edf0 * -3000 + 10000);
    SetResource(1,3,3000);
    SetResource(1,1,3000);
    SetResource(1,0,3000);
    SetResource(1,2,3000);
    SetResource(1,5,3000);
    SetResource(1,4,3000);
    SetResource(2,3,3000);
    SetResource(2,1,3000);
    SetResource(2,0,3000);
    SetResource(2,2,3000);
    SetResource(2,5,3000);
    SetResource(2,4,3000);
    EnableUnit(0,&DAT_1003ee08,0);
    EnableUnit(0,&DAT_1003ee10,0);
    StartAI(1,"SAKSINIA.0",0,0,0,DAT_1003edf0);
    StartAI(2,"ENGLAND.0",2,0,0,DAT_1003edf0);
    DAT_1003ecd8_ovl = 0;
    DAT_1003ed28 = GetGlobalTime();
    RunTimer(0x1e,0x96);
    SetTrigg(99,0);
  }
  uVar1 = TimerDoneFirst(0x1e);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE0");
    SetLightSpot(&DAT_1003ed18,1,2);
    SetLightSpot(&DAT_1003ed20,1,3);
    RunTimer(1,(4 - DAT_1003edf0) * 500);
    RunTimer(2,(4 - DAT_1003edf0) * 1000);
    RunTimer(3,(4 - DAT_1003edf0) * 10000);
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(1);
    if ((uVar1 & 0xff) != 0) {
      FUN_10003b00(&DAT_1003ece0,&DAT_1003ecf0);
      iVar4 = 4 - DAT_1003edf0;
      iVar3 = rand();
      RunTimer(1,iVar4 * 500 + (iVar3 % 10) * 400);
    }
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      FUN_10003b00(&DAT_1003ece8,&DAT_1003ecf8);
      iVar4 = 4 - DAT_1003edf0;
      iVar3 = rand();
      RunTimer(2,iVar4 * 500 + (iVar3 % 10) * 400);
    }
    uVar1 = TimerDoneFirst(3);
    if ((uVar1 & 0xff) != 0) {
      FUN_10003bb0();
    }
    iVar3 = GetUnitsAmount0(&DAT_1003ecf0,4);
    if (iVar3 != 0) {
      DAT_1003ed28 = GetGlobalTime();
      SelectUnitsInZone(&DAT_1003ecf0,4,0);
      SelErase(4);
    }
    iVar3 = GetUnitsAmount0(&DAT_1003ecf8,4);
    if (iVar3 != 0) {
      DAT_1003ed28 = GetGlobalTime();
      SelectUnitsInZone(&DAT_1003ecf8,4,0);
      SelErase(4);
    }
    uVar1 = Trigg(1);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_1003ed10,&DAT_1003ee00);
      if (0 < iVar3) {
        iVar3 = GetUnitsAmount0(&DAT_1003ed10,0);
        if (0 < iVar3) {
          ShowPageParam("#PAGE6",DAT_1003edf0 * 0xfa + 1000);
          SetLightSpot(&DAT_1003ed10,1,1);
          uVar1 = AskQuestion("#PAGE4");
          if ((uVar1 & 0xff) != 0) {
            iVar3 = GetResource(0,1);
            if (iVar3 < DAT_1003edf0 * 0xfa + 1000) {
              ShowPage("#PAGE5");
            }
            else {
              AddResource(0,1,-(DAT_1003edf0 * 0xfa + 1000));
              SelectUnits(&DAT_1003ee00,0);
              SelSendTo(5,&DAT_1003ed00,0,0);
              RunTimer(10,1000);
            }
          }
          SetTrigg(1,0);
        }
      }
    }
    uVar1 = Trigg(1);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetUnitsAmount0(&DAT_1003ed10,0);
      if (iVar3 == 0) {
        SetTrigg(1,0);
      }
    }
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_1003ed10,&DAT_1003ee00);
      if (0 < iVar3) {
        ShowPage("#PAGE3");
        SetTrigg(2,0);
      }
    }
    uVar1 = TimerDoneFirst(10);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_1003ee00,0);
      Patrol(5,&DAT_1003ed08,0);
    }
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      LooseGame();
      SetTrigg(100,0);
    }
    iVar4 = DAT_1003edf0 * 500;
    iVar3 = DAT_1003ed28 + 40000;
    iVar2 = GetGlobalTime();
    if (iVar3 + iVar4 < iVar2) {
      ShowVictory();
      SetTrigg(100,0);
    }
  }
  uStack_8 = 0x10004615;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
