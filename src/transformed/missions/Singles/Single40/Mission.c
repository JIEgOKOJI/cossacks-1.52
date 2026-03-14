#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
long long DAT_1003a040 = 0;
long long DAT_1003a04c = 0;
long long DAT_1003a050 = 0;
char DAT_1003a740[] = "G1";
char DAT_1003a770[] = "SUXX";
long long DAT_1003a788 = 0;
long long DAT_1003a798 = 0;
long long DAT_1003dd60 = 0;
long long DAT_1003dec4 = 0;
long long DAT_1003df08 = 0;
int DAT_1003dfd8 = 4;
int DAT_1003dfdc = 800;
int DAT_1003dfe0 = 2;
int DAT_1003e030 = 0;
int DAT_1003e034 = 0;
int DAT_1003e038 = 0;
long long DAT_1003ff08 = 0;
long long DAT_1003ff0c = 0;
long long DAT_1003ff10 = 0;
long long DAT_1003ff20 = 0;
int DAT_1003ff48 = 0;
long long DAT_1003ff58 = 0;
long long DAT_10040028 = 0;
int DAT_100400b0 = 0;
long long DAT_100400b8 = 0;
long long DAT_100400c0 = 0;
int DAT_100400c8 = 0;
long long DAT_100400d0 = 0;
long long DAT_10040120 = 0;
long long DAT_100401a8 = 0;
long long DAT_10040278 = 0;
int DAT_10040280 = 0;
int DAT_10040282 = 0;
int DAT_10040284 = 0;
long long DAT_10040288 = 0;
long long DAT_10040298 = 0;
long long DAT_100402a0 = 0;
int DAT_10040350 = 0;
int DAT_10040354 = 0;
long long DAT_10040358 = 0;
long long DAT_10040390 = 0;
long long DAT_10040398 = 0;
long long DAT_100403a0 = 0;
long long DAT_100403a8 = 0;
int DAT_100403b0 = 0;
int DAT_10040498 = 0;
int DAT_100404e8 = 0;
int DAT_100404ec = 0;
int DAT_100404f0 = 0;
int DAT_100404f4 = 0;
int DAT_100404f8 = 0;
int DAT_100404fc = 0;
int DAT_10040500 = 0;
int DAT_10040504 = 0;
int DAT_10040520 = 0;
long long DAT_10040524 = 0;
int *DAT_10042054 = 0;
int DAT_10042058 = 0;
int DAT_1003a040_ovl = 776530087;
int DAT_1003a04c_ovl = 1065353216;
int DAT_1003a050_ovl = 1120403456;
int DAT_1003a788_ovl = 0;
int DAT_1003a798_ovl = -1717986918;
int DAT_1003ff08_ovl = 0;
int DAT_1003ff0c_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10009de4() { return 0; }
int FUN_10009ded() { return 0; }
int FUN_10009e94() { return 0; }
int FUN_10009e9d() { return 0; }
int FUN_10009f44() { return 0; }
int FUN_10009f4d() { return 0; }
int FUN_1000a440() { return 0; }
int FUN_1000a8c0() { return 0; }
int FUN_1000ade0() { return 0; }
int FUN_1000b6d8() { return 0; }
int FUN_1000c120() { return 0; }
int FUN_1000c1c0() { return 0; }
int FUN_1000c250() { return 0; }
int FUN_1000c6b0() { return 0; }
int FUN_1000ccb0() { return 0; }
int FUN_1000d0f0() { return 0; }
int FUN_1000ef20() { return 0; }
int FUN_1000f1a0() { return 0; }
int FUN_1000f3e0() { return 0; }
int FUN_1000f3f0() { return 0; }


/* Forward declarations */
void FUN_10001820(int param_1,char param_2,char param_3);
void FUN_100018e0(int param_1,char param_2);
void FUN_100019a0(int param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_10001ac0(char *param_1);
char * 
FUN_100022c0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void 
FUN_10002350(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void  FUN_10002470(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
void  FUN_100025c0(int param_1);
void FUN_10002640(unsigned int param_1);
void  FUN_100026b0(int param_1);
unsigned int *  FUN_10002710(void *this_ptr,unsigned int *param_1,byte param_2);
void  FUN_100027c0(void *this_ptr,int param_1,char param_2);
int FUN_10002920(char param_1);
void FUN_100029b0(void);
void FUN_100029f0(void);
void FUN_10002a40(void);
void FUN_10002a80(void);
void FUN_10002ac0(void);
void FUN_10002b10(void);
void FUN_10002b80(int param_1,char param_2);
void FUN_10003040(void);
void FUN_10003080(void);
void  FUN_100030c0(int param_1);
void  FUN_10003120(int param_1);
void  FUN_100031b0(int param_1);
void FUN_100037d0(void);
void FUN_10003810(void);
void FUN_10003850(void);
void FUN_10003c30(void);
void FUN_10003e50(void);
void FUN_10003f60(int param_1);
void FUN_10004000(int param_1);
void FUN_100040a0(int param_1,int param_2);
void FUN_10004140(void);
int FUN_100041d0(void);
void FUN_10004260(void);
void FUN_100045c0(void);
void FUN_10004670(int param_1,int param_2);
void FUN_100047a0(void);
void FUN_10005840(int param_1);
void FUN_100058e0(int param_1);
void FUN_10005980(void);
void  FUN_100059e0(int param_1);
void  FUN_10005a40(int param_1);
void  FUN_10005ab0(int param_1);
void  FUN_10005b10(int param_1);
int  FUN_10005b70(int param_1);
void  FUN_10005ba0(int param_1);
void  FUN_10005c00(void *this_ptr,int param_1);
void  FUN_10005c40(void *this_ptr,int param_1);
void  FUN_10005cc0(void *this_ptr,int param_1,int param_2);
void  FUN_10005de0(void *this_ptr,int param_1);
void  FUN_10005e20(void *this_ptr,int param_1);
void  FUN_10005e60(int param_1);
void  FUN_10005f10(void *this_ptr,int param_1);
void  FUN_10005f50(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005fb0(void *this_ptr,int param_1);
void  FUN_10006080(int param_1);
void  FUN_10006110(void *this_ptr,unsigned int param_1);
int  FUN_10006190(int param_1);
void  FUN_100061c0(void *this_ptr,int param_1);
void  FUN_10006240(void *this_ptr,int param_1);
void  FUN_100062b0(int param_1);
void  FUN_10006320(void *this_ptr,int param_1);
void  FUN_10006390(void *this_ptr,int param_1);
void  FUN_100063d0(int param_1);
void  FUN_10006440(void *param_1);
void  FUN_100064c0(void *this_ptr,int param_1);
void  FUN_10006520(void *param_1);
void  FUN_100065a0(void *this_ptr,int param_1);
void  FUN_100065e0(int param_1);
void  FUN_10006630(int param_1);
void  FUN_10006680(void *this_ptr,int param_1,int param_2);
void  FUN_100066d0(void *param_1);
void  FUN_100069c0(void *param_1);
void  FUN_10006a50(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006ab0(void *param_1);
void  FUN_10006b30(void *this_ptr,int param_1);
void FUN_10006ba0(short *param_1);
void  FUN_10006c40(void *this_ptr,int param_1);
void  FUN_10006c80(void *this_ptr,int param_1);
void  FUN_10006cc0(void *this_ptr,int param_1);
void  FUN_10006d00(void *this_ptr,void *param_1);
int  FUN_10006d70(int param_1);
int  FUN_10006db0(int param_1);
void  FUN_10006de0(void *param_1);
int FUN_10007070(void);
void  FUN_100070a0(void *this_ptr,int param_1,int param_2);
void  FUN_10007110(void *this_ptr,int param_1);
void  FUN_10007180(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10007220(void *this_ptr,int param_1,int param_2);
int  FUN_10007370(int param_1);
void  FUN_100073b0(int param_1);
void  FUN_10007420(void *this_ptr,int param_1);
void  FUN_100074a0(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10007540(int param_1);
void  FUN_10007590(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10007660(int param_1);
void  FUN_10007710(int param_1);
void  FUN_100077b0(int param_1);
void  FUN_10007830(int param_1);
void FUN_10007a40(int param_1);
void FUN_10007a70(int param_1,int param_2,int param_3);
void  FUN_10007af0(int param_1);
void  FUN_10007d20(void *this_ptr,int *param_1);
void  FUN_10007e50(int param_1);
void  FUN_10007ef0(int param_1);
int  FUN_10007f60(int param_1);
void  FUN_10007fa0(void *this_ptr,int param_1);
void  FUN_10008000(void *param_1);
void  FUN_10008210(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_100083a0(int param_1,int param_2,int param_3,int param_4);
void  FUN_100084a0(int param_1);
void  FUN_10008540(int param_1);
int  FUN_100085b0(int param_1);
void  FUN_100085f0(void *this_ptr,int *param_1);
void  FUN_10008720(int param_1);
void  FUN_10008860(void *this_ptr,int param_1);
void  FUN_100088c0(int param_1);
void  FUN_10008950(int param_1);
void 
FUN_100089c0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10008a60(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10008b10(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10008bd0(char *param_1);
void  FUN_10008d10(char *param_1);
void  FUN_10008de0(char *param_1);
int  FUN_10008eb0(int param_1);
void  FUN_10008ef0(void *this_ptr,int param_1);
void FUN_10008f70(int param_1);
void 
FUN_10009020(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5);
void  FUN_100090f0(int param_1);
void  FUN_10009230(int param_1);
int  FUN_100092b0(int param_1);
void  FUN_100092e0(void *this_ptr,int param_1);
void  FUN_10009360(void *param_1);
void  FUN_100093b0(void *this_ptr,unsigned int *param_1);
void  FUN_10009430(void *this_ptr,int param_1);
void  FUN_100094a0(void *this_ptr,int param_1,byte param_2);
void  FUN_10009520(void *this_ptr,int param_1);
int  FUN_10009570(int param_1);
void  FUN_100095a0(int param_1);
void  FUN_10009600(int param_1);
void  FUN_100096a0(int param_1);
void  FUN_10009700(int param_1);
void  FUN_10009760(void *this_ptr,int param_1);
void  FUN_100097d0(void *this_ptr,int param_1);
void  FUN_10009860(void *this_ptr,int param_1);
void  FUN_100098f0(void *this_ptr,char param_1);
void FUN_10009930(void);
void FUN_10009960(int param_1);
void  FUN_10009a00(void *param_1);
void  FUN_10009af0(int param_1);
void  FUN_10009b70(int param_1);
void FUN_10009dd0(void);
void FUN_10009e80(void);
void FUN_10009f30(void);
void FUN_10009fd0(void);
void FUN_1000a000(void);
void FUN_1000a010(void);
int FUN_1000a060(int param_1);
void FUN_1000a0b0(void *param_1);
void FUN_1000a160(void *param_1);
int FUN_1000a370(int *param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
int FUN_1000a4d0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_1000a636(void);
int FUN_1000a650(int param_1);
int FUN_1000a710(int param_1);
void FUN_1000a780(DWORD param_1);
unsigned int * FUN_1000a7d0(unsigned int *param_1,unsigned int *param_2);
unsigned int * FUN_1000a7e0(unsigned int *param_1,unsigned int *param_2);


void __cdecl FUN_10001820(int param_1,char param_2,char param_3)

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
  uStack_8 = 0x100018af;
  return;
}





void __cdecl FUN_100018e0(int param_1,char param_2)

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
  uStack_8 = 0x1000196b;
  return;
}







void __cdecl FUN_100019a0(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  fVar3 = (long double)FUN_10009f44(local_2c);
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_1003a040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_10009e94(*(int*)((char*)&local_1c + 4));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_10009de4((int)local_1c);
  lVar4 = 0;
  local_24 = (int)lVar4;
  return;
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
  
  local_8 = 0xffffffff;
local_14 = this_ptr;
  if (*(int *)((int)this_ptr + 8) == 0) {
    FUN_1000a160((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = FUN_100022c0(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(char **)((int)local_14 + 8) = local_20;
  }
  else {
    FUN_10002350(*(void **)((int)this_ptr + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  return;
}





void  FUN_10002470(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
LAB_1000251a:
          local_c = (unsigned int)*(byte *)((int)this_ptr + 5) * 100 + (unsigned int)*(byte *)((int)this_ptr + 6);
          goto LAB_1000255c;
        }
        pvVar1 = (void *)(unsigned int)*(byte *)((int)this_ptr + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(unsigned int)*(unsigned short *)((int)this_ptr + 3);
          if (pvVar4 < pvVar1) goto LAB_1000251a;
        }
      }
    }
  }
  if (*(int *)((int)this_ptr + 8) != 0) {
    uVar2 = (int)(short)param_4;
    local_8 = this_ptr;
    FUN_10002470(*(void **)((int)this_ptr + 8),
                                 (int)(char)param_1,
                                 (int)(char)param_2,
                                 (int)(char)param_3,uVar2);
  }
LAB_1000255c:
  local_8 = (void *)0x1000256c;
  return;
}





void  FUN_100025c0(int param_1)

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
      FUN_10002640(1);
    }
  }
  return;
}





void FUN_10002640(unsigned int param_1)

{
  void *in_ECX;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = in_ECX;
  FUN_100025c0((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_1000a0b0(local_8);
  }
  local_8 = (void *)0x1000268b;
  return;
}





void  FUN_100026b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1 + 0x20);
  return;
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
    if ((&DAT_1003dd60)[local_14] == param_2) {
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
    uVar2 = FUN_10002920(local_2a);
    local_40 = (int *)((int)local_8 + (uVar2 & 0xff) * 4);
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
    if ((&DAT_1003dd60)[bVar1] == param_1) {
      local_10 = 8;
      local_c = bVar1;
    }
    bVar1 = local_10 + 1;
  }
  return (int)local_c;
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
FUN_100026b0((int)local_2c);
  puVar3 = &DAT_1003ff20;
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
FUN_10001ac0(&DAT_1003ff10);
  uStack_8 = 0x10002aaf;
  return;
}





void FUN_10002ac0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_1000a710(0x10002b10);
  uStack_8 = 0x10002af2;
  return;
}





void FUN_10002b10(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_1003ff48 & 1) == 0) {
    DAT_1003ff48 = DAT_1003ff48 | 1;
    FUN_100025c0(0x1003ff10);
  }
  uStack_8 = 0x10002b5c;
  return;
}







void FUN_10002b80(int param_1,char param_2)

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
  FUN_100027c0(&DAT_1003ff20,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)(&DAT_1003ff20)[local_40]) {
      uVar2 = ((&DAT_1003ff20)[local_40] * 100) / local_10;
      FUN_10002470(&DAT_1003ff10,(int)local_2a,1,
                                 (int)(&DAT_1003dd60)[local_40],uVar2);
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
    FUN_100027c0(&DAT_1003ff20,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)(&DAT_1003ff20)[local_48]) {
        uVar2 = ((&DAT_1003ff20)[local_48] * 100) / local_10;
        FUN_10002470(&DAT_1003ff10,(int)local_2a,2,
                                   (int)(&DAT_1003dd60)[local_48],uVar2);
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
    FUN_100027c0(&DAT_1003ff20,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)(&DAT_1003ff20)[local_50]) {
        local_54 = ((float)(int)(&DAT_1003ff20)[local_50] * DAT_1003a050_ovl) / (float)local_10;
        if (local_54 < DAT_1003a04c_ovl) {
          local_54 = 1.0;
        }
        lVar5 = 0;
        FUN_10002470(&DAT_1003ff10,(int)local_2a,
                                   3,(int)(&DAT_1003dd60)[local_50],(unsigned int)lVar5);
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
DAT_1003ff08_ovl = local_c;
  DAT_1003ff0c_ovl = local_8;
  return;
}





void  FUN_100030c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10003120(int param_1)

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
    UnitsCenter(0,0xfffffff0,1000);
  }
  iVar3 = GetTotalAmount0(local_8);
  if (0 < iVar3) {
    UnitsCenter(local_8 + 8,local_8,1000);
    FUN_10003120(local_8);
    if (cVar1 == '\0') {
      iVar3 = GetUnitsAmount0(local_8 + 8,*(char *)(local_8 + 0x1e));
      if (iVar3 < 4) {
        SelectUnits(local_8,0);
        SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,
                       *(char *)(local_8 + 0x18),0);
        goto LAB_10003622;
      }
    }
    FUN_10002b80(local_8,*(char *)(local_8 + 0x1e));
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
      FUN_10001820(local_8 + 8,*(char *)(local_8 + 0x1d),0x14);
      local_10 = local_28;
      if ((int)local_28 == 0) {
        FUN_10001820(local_8 + 8,*(char *)(local_8 + 0x1d),0xf);
        local_10 = local_30;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        FUN_10001820(local_8 + 8,*(char *)(local_8 + 0x1d),0xb);
        local_10 = local_38;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        FUN_10001820(local_8 + 8,*(char *)(local_8 + 0x1d),0x16);
        local_10 = local_40;
      }
      FUN_100018e0(local_8 + 8,*(char *)(local_8 + 0x1e));
      local_18 = local_48;
      FUN_100019a0((int)local_10,*(int*)((char*)&local_10 + 4),(int)local_48,
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
      FUN_100018e0(local_8 + 8,0);
      local_18 = local_58;
      FUN_100019a0((int)local_10,*(int*)((char*)&local_10 + 4),(int)local_58,
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





void FUN_100037d0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10003810();
  uStack_8 = 0x100037fa;
  return;
}





void FUN_10003810(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10008eb0(0x10040358);
  uStack_8 = 0x1000383f;
  return;
}





void FUN_10003850(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
SetPlayerName(0,"PRUSSIA");
  SetPlayerName(3,DAT_1003a770);
  SetPlayerName(1,"SPAIN");
  RegisterDynGroup(&DAT_100402a0);
  RegisterDynGroup(&DAT_10040298);
  RegisterDynGroup(&DAT_10040390);
  RegisterDynGroup(&DAT_100403a0);
  RegisterDynGroup(&DAT_10040278);
  RegisterVar(&DAT_10040298,8);
  RegisterVar(&DAT_10040390,8);
  RegisterVar(&DAT_100403a0,8);
  RegisterVar(&DAT_10040278,8);
  RegisterVar(&DAT_10040354,4);
  RegisterVar(&DAT_100400c8,4);
  RegisterFormation(&DAT_10040398,"#ODIN");
  RegisterFormation(&DAT_100400d0,"#LINEMORB10");
  for (local_8 = 0; local_8 < 0x11; local_8 = local_8 + 1) {
    RegisterUnitType(&DAT_10040120 + local_8 * 8,(((int*)0))[local_8]);
    RegisterUnitType(&DAT_10040028 + local_8 * 8,(((int*)0))[local_8]);
  }
  for (local_8 = 0; local_8 < 0x1a; local_8 = local_8 + 1) {
    RegisterUnitType(&DAT_100401a8 + local_8 * 8,(((int*)0))[local_8]);
    RegisterUnitType(&DAT_1003ff58 + local_8 * 8,(((int*)0))[local_8]);
  }
  RegisterUnitType(&DAT_100400b8,"Kreposnoi_portugal(sp)");
  RegisterUnitType(&DAT_100403a8,"KUPEC(UN)");
  RegisterUnits(&DAT_100400c0,DAT_1003a740);
  DAT_10040280 = 0;
  DAT_10040282 = 0;
  DAT_10040284 = 0x40000000;
  RegisterVar(&DAT_10040350,4);
  return;
}









void FUN_10003c30(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = rand();
  DAT_10040280 = (short)(iVar1 % 15000) + 500;
  iVar1 = rand();
  DAT_10040282 = (short)(iVar1 % 15000) + 500;
  DAT_10040284 = (DAT_10040284 & 0xff000000) + 500;
  if ((DAT_10040280 & 1) == 0) {
    if ((DAT_10040282 & 1) == 0) {
      DAT_10040282 = 0x38a4;
    }
    else {
      DAT_10040282 = 500;
    }
  }
  else if ((DAT_10040282 & 1) == 0) {
    DAT_10040280 = 0x38a4;
  }
  else {
    DAT_10040280 = 500;
  }
  SetStartPoint(&DAT_10040280);
  iVar1 = rand();
  CreateObject0(&DAT_100402a0,&DAT_100400d0,&DAT_100401a8,0,&DAT_10040280,iVar1 % 0xff);
  iVar1 = rand();
  CreateObject0(&DAT_100402a0,&DAT_100400d0,&DAT_1003ff58,0,&DAT_10040280,iVar1 % 0xff);
  iVar1 = rand();
  CreateObject0(&DAT_100403a0,&DAT_10040398,&DAT_100403a8,0,&DAT_10040280,iVar1 % 0xff);
  uStack_8 = 0x10003dd9;
  return;
}





void FUN_10003e50(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
iVar1 = rand();
  DAT_10040280 = (short)(iVar1 % 0xb) * 800 + 4000;
  iVar1 = rand();
  DAT_10040282 = (short)(iVar1 % 0xb) * 800 + 4000;
  DAT_10040284 = (DAT_10040284 & 0xff000000) + 200;
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    iVar1 = rand();
    CreateObject0(&DAT_100402a0,&DAT_10040398,&DAT_100400b8,1,&DAT_10040280,iVar1 % 0xff);
  }
  return;
}





void __cdecl FUN_10003f60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = 0;
  for (local_c = 0; local_c < 0x11; local_c = local_c + 1) {
    iVar1 = GetTotalAmount1(param_1 + local_c * 8,0);
    local_8 = local_8 + *(int *)(&DAT_1003dec4 + local_c * 4) * iVar1;
  }
  return;
}





void __cdecl FUN_10004000(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = 0;
  for (local_c = 0; local_c < 0x1a; local_c = local_c + 1) {
    iVar1 = GetTotalAmount1(param_1 + local_c * 8,0);
    local_8 = local_8 + *(int *)(&DAT_1003df08 + local_c * 4) * iVar1;
  }
  return;
}





void __cdecl FUN_100040a0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
ClearSelection(0);
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    SelectUnitsType(param_1 + local_8 * 8,0,1);
  }
  return;
}





void FUN_10004140(void)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
FUN_10003f60(0x10040028);
  FUN_10004000(0x1003ff58);
  DAT_10040354 = iVar2 + iVar1;
  FUN_10003f60(0x10040120);
  FUN_10004000(0x100401a8);
  DAT_100400c8 = iVar2 + iVar1;
  uStack_8 = 0x100041ad;
  return;
}







int FUN_100041d0(void)

{
  float fVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  float local_c;
local_c = (float)DAT_10040354 / (float)DAT_100400c8;
  if (local_c < DAT_1003a04c_ovl) {
    local_c = DAT_1003a04c_ovl / local_c;
  }
  fVar1 = (float)DAT_1003a788_ovl - (float)DAT_10040350 * (float)DAT_1003a798_ovl;
  return (int)fVar1 < local_c != 0;
}





void FUN_10004260(void)

{
  int iVar1;
  int *puVar2;
  unsigned int *puVar3;
  int local_38;
  unsigned int local_34 [11];
  int local_8;
FUN_100040a0(0x10040120,0x11);
  SaveSelectedUnits(0,&DAT_10040390,0);
  FUN_100040a0(0x10040028,0x11);
  SaveSelectedUnits(0,&DAT_100402a0,0);
  RemoveGroup(&DAT_10040390,&DAT_100402a0);
  FUN_100058e0(&DAT_10040390);
  local_8 = GetTotalAmount0(&DAT_100402a0);
  for (local_38 = 0; local_38 < local_8 / (7 - DAT_10040350); local_38 = local_38 + 1) {
    puVar3 = local_34;
    iVar1 = rand();
    GetUnitInfo(&DAT_100402a0,iVar1 % local_8,puVar3);
    InsertUnitToGroup(0,&DAT_10040390,local_34[0] & 0xffff);
  }
  SelectUnits(&DAT_10040390,0);
  SelDie(0);
  SelChangeNation(0,3);
  FUN_100058e0(&DAT_10040278);
  FUN_100040a0(0x1003ff58,0x1a);
  SaveSelectedUnits(0,&DAT_10040278,0);
  FUN_100040a0(0x100401a8,0x1a);
  SaveSelectedUnits(0,&DAT_100402a0,0);
  RemoveGroup(&DAT_10040278,&DAT_100402a0);
  local_8 = GetTotalAmount0(&DAT_100402a0);
  for (local_38 = 0; local_38 < local_8 / (6 - DAT_10040350); local_38 = local_38 + 1) {
    puVar3 = local_34;
    iVar1 = rand();
    GetUnitInfo(&DAT_100402a0,iVar1 % local_8,puVar3);
    InsertUnitToGroup(0,&DAT_10040278,local_34[0] & 0xffff);
  }
  SelectUnits(&DAT_10040278,0);
  SelChangeNation(0,3);
  return;
}





void FUN_100045c0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SelectUnits(&DAT_10040390,0);
  SelChangeNation(3,0);
  SelectUnits(&DAT_10040278,0);
  SelChangeNation(3,0);
  uStack_8 = 0x10004643;
  return;
}





void __cdecl FUN_10004670(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int uVar3;
  int local_44 [15];
  int uStack_8;
FUN_100040a0(param_1,0x11);
  SelDie(0);
  SelChangeNation(0,3);
  FUN_100040a0(param_2,0x1a);
  iVar1 = rand();
  DAT_10040280 = (short)(iVar1 % 0x3c8c);
  iVar1 = rand();
  DAT_10040282 = (short)(iVar1 % 0x3c8c);
  uVar3 = 0;
  iVar1 = rand();
  SelSendTo(0,&DAT_10040280,iVar1 % 0xff,uVar3);
  SelChangeNation(0,3);
  ChangeFriends(3,0xb);
  uStack_8 = 0x10004758;
  return;
}





void FUN_100047a0(void)

{
  char cVar1;
  unsigned int uVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  int *puVar6;
  int local_44 [15];
  int uStack_8;
uVar2 = Trigg(99);
  if ((uVar2 & 0xff) != 0) {
    DVar3 = FUN_1000a8c0((int *)0x0);
    FUN_1000a780(DVar3);
    DAT_10040350 = GetDiff(0);
    ChangeFriends(0,9);
    RunTimer(0x1e,0x32);
    SetTrigg(99,0);
    SetResource(1,3,10000);
    SetResource(1,1,10000);
    SetResource(1,0,10000);
    SetResource(1,2,10000);
    SetResource(1,5,10000);
    SetResource(1,4,10000);
    SetResource(3,3,20000);
    SetResource(3,1,20000);
    SetResource(3,0,20000);
    SetResource(3,2,20000);
    SetResource(3,5,20000);
    SetResource(3,4,20000);
    SetResource(0,3,DAT_10040350 * -3000 + 11000);
    SetResource(0,1,DAT_10040350 * -3000 + 11000);
    SetResource(0,0,DAT_10040350 * -3000 + 11000);
    SetResource(0,2,DAT_10040350 * -3000 + 11000);
    SetResource(0,5,DAT_10040350 * -3000 + 11000);
    SetResource(0,4,DAT_10040350 * -3000 + 11000);
  }
  uVar2 = TimerDoneFirst(0x1e);
  if ((uVar2 & 0xff) != 0) {
    ShowPage("#PAGE0");
    SelectUnits(&DAT_100400c0,0);
    SelErase(5);
    FUN_10003c30();
    FUN_10003e50();
    FUN_10008ef0(&DAT_10040358,&DAT_100403a0);
    StartAI(1,"SPAIN.0",0,0,0,DAT_10040350);
    RunTimer(2,(3 - DAT_10040350) * 400 + 2000);
    RunTimer(0x1d,300);
    DAT_10040354 = 10;
    DAT_100400c8 = 10;
  }
  uVar2 = Trigg(100);
  if ((uVar2 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_10040298,0);
    SelectUnitsType(&DAT_100400b8,0,0);
    uVar2 = Trigg(10);
    if ((uVar2 & 0xff) == 0) {
      SelectUnitsType(DAT_100403b0,0,1);
    }
    SelDie(0);
    uVar2 = Trigg(10);
    if ((uVar2 & 0xff) != 0) {
      uVar2 = TimerDoneFirst(2);
      if ((uVar2 & 0xff) != 0) {
        FUN_10004140();
        uVar2 = Trigg(1);
        if ((uVar2 & 0xff) != 0) {
          iVar5 = GetAmountOfWarriors(0);
          iVar4 = GetAmountOfWarriors(1);
          if (4 < iVar5 / (iVar4 + 1)) {
            iVar5 = GetResource(0,3);
            AddResource(3,3,iVar5 / 2);
            iVar5 = GetResource(0,1);
            AddResource(3,1,iVar5 / 2);
            iVar5 = GetResource(0,0);
            AddResource(3,0,iVar5 / 2);
            iVar5 = GetResource(0,2);
            AddResource(3,2,iVar5 / 2);
            iVar5 = GetResource(0,5);
            AddResource(3,5,iVar5 / 2);
            iVar5 = GetResource(0,4);
            AddResource(3,4,iVar5 / 2);
            iVar5 = GetResource(0,3);
            AddResource(0,3,-iVar5 / 2);
            iVar5 = GetResource(0,1);
            AddResource(0,1,-iVar5 / 2);
            iVar5 = GetResource(0,0);
            AddResource(0,0,-iVar5 / 2);
            iVar5 = GetResource(0,2);
            AddResource(0,2,-iVar5 / 2);
            iVar5 = GetResource(0,5);
            AddResource(0,5,-iVar5 / 2);
            iVar5 = GetResource(0,4);
            AddResource(0,4,-iVar5 / 2);
            if (DAT_100400c8 < DAT_10040354) {
              ShowPage("#PAGE2");
              FUN_10004670(0x10040028,0x1003ff58);
              FUN_1000a7d0((unsigned int *)&DAT_10040288,(unsigned int *)"SAKSINIA.0");
              DAT_100400b0 = &DAT_10040028;
              DAT_100403b0 = &DAT_1003ff58;
            }
            else {
              ShowPage("#PAGE3");
              FUN_10004670(0x10040120,0x100401a8);
              FUN_1000a7d0((unsigned int *)&DAT_10040288,(unsigned int *)"GERMAN.0");
              DAT_100400b0 = &DAT_10040120;
              DAT_100403b0 = &DAT_100401a8;
            }
            RunTimer(6,2000);
            SetTrigg(10,0);
            SetTrigg(1,0);
          }
        }
        uVar2 = Trigg(1);
        if ((uVar2 & 0xff) != 0) {
          uVar2 = FUN_100041d0();
          if ((uVar2 & 0xff) != 0) {
            ShowPage("#PAGE1");
            FUN_10004260();
            RunTimer(3,DAT_10040350 * 500 + 1000);
            ChangeFriends(0,1);
            RunTimer(4,0x14);
            SetTrigg(1,0);
          }
        }
        RunTimer(2,1000);
      }
    }
    uVar2 = TimerDoneFirst(3);
    if ((uVar2 & 0xff) != 0) {
      FUN_100045c0();
      RunTimer(5,(3 - DAT_10040350) * 700 + 2000);
    }
    uVar2 = TimerDoneFirst(5);
    if ((uVar2 & 0xff) != 0) {
      SetTrigg(1,1);
    }
    uVar2 = TimerDoneFirst(4);
    if ((uVar2 & 0xff) != 0) {
      ChangeFriends(0,9);
    }
    uVar2 = TimerDoneFirst(6);
    if ((uVar2 & 0xff) != 0) {
      FUN_100040a0((int)DAT_100400b0,0x11);
      SelDie(0);
      FUN_100040a0((int)DAT_100403b0,0x1a);
      SelDie(0);
      StartAI(3,&DAT_10040288,0,0,0,DAT_10040350);
      RunTimer(7,4000);
    }
    uVar2 = TimerDoneFirst(7);
    if ((uVar2 & 0xff) != 0) {
      ShowPage("#PAGE4");
      ChangeFriends(0,1);
      ChangeFriends(3,10);
    }
    uVar2 = Trigg(10);
    if (((uVar2 & 0xff) != 0) && ((DAT_10040354 == 0 || (DAT_100400c8 == 0)))) {
      uVar2 = TimerDone(0x1d);
      if ((uVar2 & 0xff) != 0) {
        ShowPage("#PAGE7");
        LooseGame();
        SetTrigg(100,0);
      }
    }
    uVar2 = TimerDone(0x1e);
    if ((uVar2 & 0xff) != 0) {
      uVar2 = NationIsErased(0);
      if ((uVar2 & 0xff) != 0) {
        ShowPage("#PAGE6");
        LooseGame();
        SetTrigg(100,0);
      }
    }
    uVar2 = Trigg(10);
    if ((uVar2 & 0xff) == 0) {
      uVar2 = NationIsErased(1);
      if ((uVar2 & 0xff) != 0) {
        uVar2 = NationIsErased(3);
        if ((uVar2 & 0xff) != 0) {
          ShowPage("#PAGE5");
          ShowVictory();
          SetTrigg(100,0);
        }
      }
    }
    FUN_10008f70(&DAT_10040298);
    if (cVar1 != '\0') {
      uVar2 = Trigg(10);
      if ((uVar2 & 0xff) != 0) {
        FUN_10004140();
        ShowPageParam("#PAGE8",DAT_10040354,DAT_100400c8);
        FUN_100058e0(&DAT_10040298);
      }
    }
    ClearSelection(0);
    SelectUnits(&DAT_10040298,0);
  }
  uStack_8 = 0x100054e4;
  return;
}





void __cdecl FUN_10005840(int param_1)

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





void __cdecl FUN_100058e0(int param_1)

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
  uStack_8 = 0x10005954;
  return;
}





void FUN_10005980(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x100059c9;
  return;
}





void  FUN_100059e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10005a40(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100059e0(param_1);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}





void  FUN_10005ab0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_10005b10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_10005ab0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10005b70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10005ba0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10005c00(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_10005c40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((int)this_ptr + 8,*(int *)((int)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10005c98;
  return;
}





void  FUN_10005cc0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10005ab0(this_ptr);
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
  local_8 = (void *)0x10005d97;
  return;
}





void  FUN_10005de0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10005e20(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10005e60(int param_1)

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





void  FUN_10005f10(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10005f50(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  *(int *)((int)this_ptr + 0x1c) = param_2;
  *(int *)((int)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10005fb0(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10006050;
  return;
}





void  FUN_10006080(int param_1)

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





void  FUN_10006110(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100059e0(this_ptr);
  SelChangeNation(*(char *)((int)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((int)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10006168;
  return;
}





int  FUN_10006190(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100061c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100059e0(this_ptr);
  SelSendTo(*(char *)((int)local_8 + 0x10),param_1,0,0);
  *(int *)((int)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000621c;
  return;
}





void  FUN_10006240(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100059e0(this_ptr);
  Patrol(*(char *)((int)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x10006291;
  return;
}





void  FUN_100062b0(int param_1)

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





void  FUN_10006320(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10006373;
  return;
}





void  FUN_10006390(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_100063d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100059e0(param_1);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_10006440(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10005b10(param_1);
  if (cVar1 != '\0') {
    FUN_10006520(local_8);
    FUN_10006080(local_8);
    if (iVar2 < 10) {
      FUN_100061c0(local_8,*(int *)((int)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x1000649f;
  return;
}





void  FUN_100064c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10006506;
  return;
}





void  FUN_10006520(void *param_1)

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
  FUN_10005c40(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000657b;
  return;
}





void  FUN_100065a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_100065e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10006630(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10006630(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005ba0(param_1);
  return;
}





void  FUN_10006680(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x24) = param_1;
  *(int *)((int)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_100066d0(void *param_1)

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
      (local_8 = param_1, FUN_10005b10(param_1), cVar1 != '\0')) &&
     (*(int *)((int)local_8 + 0x10) != 0)) {
    if (*(int *)((int)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_10005c40(local_8,600);
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
          FUN_10006110(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10005a40((int)local_8);
        }
        AddResource(0,*(char *)((int)local_8 + 0x24),*(int *)((int)local_8 + 0x28));
        FUN_10006680(local_8,0,0);
      }
    }
    else {
      FUN_10006080(local_8);
      if (iVar3 < 0x32) {
        FUN_100069c0(local_8);
      }
      FUN_100062b0((int)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_10006ba0(*(short **)((int)local_8 + 0x20));
        FUN_10006d00(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10006902;
  return;
}





void  FUN_100069c0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10006110(param_1,6);
  FUN_100059e0(local_8);
  uVar5 = 0;
  uVar4 = 0;
  FUN_10005c40(local_8,100);
  SelSendTo(*(char *)((int)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_100063d0((int)local_8);
  local_8 = (void *)0x10006a2c;
  return;
}





void  FUN_10006a50(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005f50(this_ptr,param_1,param_2,param_3);
  *(char *)((int)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10006a95;
  return;
}





void  FUN_10006ab0(void *param_1)

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
  FUN_10005c40(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10006b0b;
  return;
}





void  FUN_10006b30(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 4) = param_1;
  (&DAT_10040498)[DAT_100404e8] = this_ptr;
  DAT_100404e8 = DAT_100404e8 + 1;
  return;
}





void __cdecl FUN_10006ba0(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_10040498;
  for (local_c = 0; local_c < DAT_100404e8; local_c = local_c + 1) {
    psVar1 = (short *)FUN_10006d70((&DAT_10040498)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = (&DAT_10040498)[local_c];
    }
  }
  return;
}





void  FUN_10006c40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 8) = param_1;
  return;
}





void  FUN_10006c80(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10006cc0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10006d00(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10006680(param_1,*(int *)((int)this_ptr + 0xc),*(int *)((int)this_ptr + 0x10));
  FUN_100061c0(param_1,*(int *)((int)local_8 + 8));
  local_8 = (void *)0x10006d4f;
  return;
}





int  FUN_10006d70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10006db0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10006de0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100073b0((int)param_1);
  if ((0 < iVar2) && (*(int *)((int)local_8 + 0x1c) + 1 < *(int *)((int)local_8 + 0x20))) {
    if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10007420(local_8,*(int *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10007a70((int)local_8 + 0xc,
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10007420(local_8,*(int *)
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
  local_8 = (void *)0x10006fe2;
  return;
}





int FUN_10007070(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_100070a0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10007110(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10007180(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x100071f1;
  return;
}





void  FUN_10007220(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_100073b0((int)this_ptr);
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
    FUN_100070a0(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10007321;
  return;
}





int  FUN_10007370(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_100073b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_10007420(void *this_ptr,int param_1)

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
  FUN_100073b0((int)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10007480;
  return;
}





void  FUN_100074a0(void *this_ptr,int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xc,param_1);
  FUN_10005840((int)local_8 + 0xc);
  *(unsigned int *)((int)local_8 + 0x18) = uVar1 & 0xff;
  *(int *)((int)local_8 + 0x14) = 0;
  *(int *)((int)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10007514;
  return;
}





BOOL  FUN_10007540(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10007590(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10007540((int)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x1000762d;
  return;
}





void  FUN_10007660(int param_1)

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





void  FUN_10007710(int param_1)

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





void  FUN_100077b0(int param_1)

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





void  FUN_10007830(int param_1)

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
      FUN_10007710(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_10007660(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_100077b0(local_8);
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





void __cdecl FUN_10007a40(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_100404ec = param_1;
  return;
}





void __cdecl FUN_10007a70(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_100404ec != (void *)0x0) {
    bVar1 = FUN_10007540((int)DAT_100404ec);
    if (bVar1) {
      FUN_10007590(DAT_100404ec,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10007ac9;
  return;
}





void  FUN_10007af0(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  FUN_10007ef0(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      FUN_10007e50(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_100404f0,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_100404f4 == 0) {
        FUN_10007e50(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_100404f0,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_100404f4,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_100404f4,0);
      }
    }
    else {
      FUN_10007e50(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_100404f0,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10007d20(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10007e05;
  return;
}





void  FUN_10007e50(int param_1)

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





void  FUN_10007ef0(int param_1)

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





int  FUN_10007f60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10007fa0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10007fe7;
  return;
}





void  FUN_10008000(void *param_1)

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
  FUN_10008540((int)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((int)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      FUN_100085f0(local_8,local_10);
      FUN_100083a0((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((int)local_8 + 0xc) = 2;
      }
      else {
        FUN_100084a0((int)local_8);
        if (cVar1 == '\0') {
          SelectUnits((int)local_8 + 0xd,0);
          SelSendTo(DAT_1003dfd8,(int)local_8 + 0x1d,*(char *)((int)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((int)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      FUN_100085f0(local_8,local_18);
      FUN_100083a0((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((int)local_8 + 0xd,0);
        SelSendTo(DAT_1003dfd8,DAT_100404f8,*(char *)((int)local_8 + 8),0);
      }
      else {
        *(char *)((int)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x10008199;
  return;
}







void  FUN_10008210(void *this_ptr,int param_1,int param_2,int param_3)

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
  FUN_100085f0(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = piVar1[1];
  local_38 = local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_10009f44(local_20);
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_1003a040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10009e94(extraout_ECX);
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_10009de4(*(int*)((char*)&local_28 + 4));
  lVar5 = 0;
  local_14 = (int)lVar5;
  FUN_100083a0((int)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((int)local_8 + 8) = local_2c + 0x80;
  FUN_10008000(local_8);
  local_8 = (void *)0x10008341;
  return;
}





void FUN_100083a0(int param_1,int param_2,int param_3,int param_4)

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
GetUnitInfo(DAT_100404fc,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_100404f8,DAT_100404fc,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





void  FUN_100084a0(int param_1)

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





void  FUN_10008540(int param_1)

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





int  FUN_100085b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





void  FUN_100085f0(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x100086d5;
  return;
}





void  FUN_10008720(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10008950(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_10040500,local_8,DAT_1003dfdc);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      FUN_100088c0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_1003dfe0,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_10008860(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x100088a4;
  return;
}





void  FUN_100088c0(int param_1)

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





void  FUN_10008950(int param_1)

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
FUN_100089c0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((int)this_ptr + 6) = param_1;
  *(int *)((int)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_10005840(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10008a38;
  return;
}





void 
FUN_10008a60(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  RegisterZone((int)local_8 + 0x1e,param_2);
  FUN_100089c0(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10008ae2;
  return;
}





void  FUN_10008b10(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((int)local_8 + 0x1e,DAT_10040504,(int)local_8 + 0x16,300);
  FUN_100089c0(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10008ba0;
  return;
}





void  FUN_10008bd0(char *param_1)

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
      FUN_10008d10(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10008de0(local_8);
      SetTrigg(local_8[2],1);
    }
  }
  local_8 = (char *)0x10008ccb;
  return;
}





void  FUN_10008d10(char *param_1)

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
  local_8 = (char *)0x10008daa;
  return;
}





void  FUN_10008de0(char *param_1)

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
  local_8 = (char *)0x10008e7a;
  return;
}





int  FUN_10008eb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = 0xffffffff;
  return param_1;
}





void  FUN_10008ef0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned short *local_8;
*(int *)((int)this_ptr + 0x30) = param_1;
  local_8 = this_ptr;
  GetUnitInfo(*(int *)((int)this_ptr + 0x30),0,this_ptr);
  *(unsigned int *)(local_8 + 0x16) = (unsigned int)*local_8;
  local_8 = (unsigned short *)0x10008f50;
  return;
}





void FUN_10008f70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  unsigned short *local_8;
local_c = 0;
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 == 1) {
    GetUnitInfo(param_1,0,local_8);
    if ((unsigned int)*local_8 == *(unsigned int *)(local_8 + 0x16)) {
      local_c = 1;
    }
  }
  local_8 = (unsigned short *)0x10008fec;
  return;
}





void 
FUN_10009020(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  char local_10 [8];
  void *local_8;
*(int *)((int)this_ptr + 0x41) = param_1;
  *(char *)((int)this_ptr + 0x34) = param_2;
  *(int *)((int)this_ptr + 0x35) = param_3;
  *(int *)((int)this_ptr + 0x39) = param_4;
  *(int *)((int)this_ptr + 0x3d) = param_5;
  local_8 = this_ptr;
  UnitsCenter(local_10,*(int *)((int)this_ptr + 0x41),500);
  SelSendTo(0,local_10,0,0);
  local_8 = (void *)0x100090b5;
  return;
}





void  FUN_100090f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  short local_10;
  short local_e;
  int local_8;
local_8 = param_1;
  SelectUnits(*(int *)(param_1 + 0x41),0);
  UnitsCenter(&local_10,*(int *)(local_8 + 0x41),700);
  if (*(int *)(local_8 + 0x35) != 0) {
    local_10 = local_10 + *(short *)(local_8 + 0x35);
  }
  if (*(int *)(local_8 + 0x39) != 0) {
    local_e = *(short *)(local_8 + 0x39);
  }
  if (*(char *)(local_8 + 0x34) == '\0') {
    SelSendTo(3,&local_10,*(char *)(local_8 + 0x3d),0);
  }
  if (*(char *)(local_8 + 0x34) == '\x01') {
    SelSendAndKill(3,&local_10,*(char *)(local_8 + 0x3d),0);
  }
  *(int *)(local_8 + 0x41) = 0;
  return;
}





void  FUN_10009230(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  char local_14 [8];
  char local_c;
  int local_8;
local_c = 0;
  if (*(int *)(param_1 + 0x41) != 0) {
    local_8 = param_1;
    UnitsCenter(local_14,*(int *)(param_1 + 0x41),500);
  }
  return;
}





int  FUN_100092b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100092e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100095a0(this_ptr);
  SelCenter((int)local_8 + 8,*(char *)((int)local_8 + 0x3c),param_1);
  local_8 = (void *)0x1000933c;
  return;
}





void  FUN_10009360(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100092e0(param_1,300);
  local_8 = (void *)0x10009397;
  return;
}





void  FUN_100093b0(void *this_ptr,unsigned int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10009360(this_ptr);
  local_10 = (unsigned int)*(unsigned short *)((int)local_8 + 8);
  local_c = (unsigned int)*(unsigned short *)((int)local_8 + 10);
  *param_1 = local_10;
  param_1[1] = local_c;
  local_8 = (void *)0x1000940b;
  return;
}





void  FUN_10009430(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100095a0(this_ptr);
  SelSendAndKill(*(char *)((int)local_8 + 0x3c),param_1,0,0);
  local_8 = (void *)0x10009483;
  return;
}





void  FUN_100094a0(void *this_ptr,int param_1,byte param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100095a0(this_ptr);
  uVar1 = (unsigned int)param_2;
  iVar2 = rand();
  SelSendTo(*(char *)((int)local_8 + 0x3c),param_1,iVar2 % 0xff,uVar1);
  local_8 = (void *)0x10009501;
  return;
}





void  FUN_10009520(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100094a0(this_ptr,param_1,0);
  local_8 = (void *)0x10009558;
  return;
}





int  FUN_10009570(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100095a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10009600(int param_1)

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





void  FUN_100096a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_10009700(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_100096a0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10009760(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  FUN_10009600(local_8);
  *(char *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x100097b2;
  return;
}





void  FUN_100097d0(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup(this_ptr);
  RemoveGroup(param_1,local_8);
  FUN_10009600(local_8);
  *(char *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10009838;
  return;
}





void  FUN_10009860(void *this_ptr,int param_1)

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
  local_8 = (void *)0x100098cb;
  return;
}





void  FUN_100098f0(void *this_ptr,char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)((int)this_ptr + 0x3c) = param_1;
  return;
}





void FUN_10009930(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return;
}





void FUN_10009960(int param_1)

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
    uVar1 = FUN_10009570(local_8);
    SelectUnits(uVar1,uVar4);
    SelAttackGroup(1,param_1);
  }
  return;
}





void  FUN_10009a00(void *param_1)

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
  FUN_10009700(param_1);
  if (cVar1 != '\0') {
    uVar5 = 0;
    FUN_100092e0(local_8,3000);
    iVar3 = GetUnitsAmount0(uVar2,uVar5);
    if (0 < iVar3) {
      uVar6 = 0;
      uVar5 = 0;
      FUN_100092e0(local_8,3000);
      SelectUnitsInZone(uVar2,uVar5,uVar6);
      SaveSelectedUnits(0,(int)local_8 + 0x3d,0);
      FUN_10009960((int)local_8 + 0x3d);
    }
  }
  local_8 = (void *)0x10009ab1;
  return;
}





void  FUN_10009af0(int param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  uVar1 = FUN_10009570(param_1);
  RegisterDynGroup(uVar1);
  RegisterDynGroup(local_8 + 0x3d);
  return;
}





void  FUN_10009b70(int param_1)

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





void FUN_10009dd0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000b6d8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_10009ded((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10009e80(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000b6d8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_10009e9d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10009f30(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000b6d8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_10009f4d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_10009fd0(void)

{
  FUN_1000a010();
  return;
}





void FUN_1000a000(void)

{
  return;
}





void FUN_1000a010(void)

{
  return;
}





int __cdecl FUN_1000a060(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_10040520;
  DAT_10040520 = param_1;
  return uVar1;
}





void __cdecl FUN_1000a0b0(void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000c120(9);
    if (((((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000ade0(2,0x1003a95c,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000ccb0(param_1,*(int *)((int)param_1 + -0xc));
    FUN_1000c1c0(9);
  }
  return;
}





void __cdecl FUN_1000a160(void *param_1)

{
  FUN_1000c250(param_1,1);
  return;
}





int __cdecl
FUN_1000a370(int *param_1,int param_2,int param_3,int param_4,
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
  
  local_28 = FUN_1000a440;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1000ef20();
  ((int(*)())pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
  }
  return 0;
}





int __cdecl FUN_1000a4d0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

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
      FUN_1000f1a0();
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
    FUN_1000f1a0();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_1000a636(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003e034 = *(int *)(unaff_EBP + 8);
  DAT_1003e030 = in_EAX;
  DAT_1003e038 = unaff_EBP;
  return;
}





int __cdecl FUN_1000a650(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_1000f3e0();
  uVar1 = FUN_1000d0f0((int)DAT_10042058,2);
  if (uVar1 < (unsigned int)((int)DAT_10042054 + (4 - (int)DAT_10042058))) {
    iVar5 = 0x68;
    pcVar4 = "onexit.c";
    uVar1 = 2;
    iVar2 = FUN_1000d0f0((int)DAT_10042058,2);
    piVar3 = FUN_1000c6b0(DAT_10042058,(void *)(iVar2 + 0x10),uVar1,(int)pcVar4,iVar5);
    if (piVar3 == (int *)0x0) {
      FUN_1000f3f0();
      return 0;
    }
    DAT_10042054 = piVar3 + ((int)DAT_10042054 - (int)DAT_10042058 >> 2);
    DAT_10042058 = piVar3;
  }
  *DAT_10042054 = param_1;
  DAT_10042054 = DAT_10042054 + 1;
  FUN_1000f3f0();
  return param_1;
}





int __cdecl FUN_1000a710(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000a650(param_1);
  return (iVar1 != 0) - 1;
}





void __cdecl FUN_1000a780(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000ef20();
  pDVar1[5] = param_1;
  return;
}





unsigned int * __cdecl FUN_1000a7d0(unsigned int *param_1,unsigned int *param_2)

{
  byte bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  puVar4 = param_1;
  while (((unsigned int)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (unsigned int)bVar1;
    param_2 = (unsigned int *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_1000a8b8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (unsigned int *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_1000a8b8:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( 1 );
}





unsigned int * __cdecl FUN_1000a7e0(unsigned int *param_1,unsigned int *param_2)

{
  byte bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  puVar3 = param_1;
  do {
    if (((unsigned int)puVar3 & 3) == 0) goto LAB_1000a7fc;
    uVar4 = *puVar3;
    puVar3 = (unsigned int *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000a82f;
  while( 1 ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (unsigned int *)((int)puVar5 + 2);
      goto joined_r0x1000a84b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000a7fc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000a84b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (unsigned int *)((int)puVar5 + 1);
      goto joined_r0x1000a84b;
    }
  }
LAB_1000a82f:
  puVar5 = (unsigned int *)((int)puVar3 + -1);
joined_r0x1000a84b:
  do {
    if (((unsigned int)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_1000a8b8:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( 1 );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (unsigned int)bVar1;
    param_2 = (unsigned int *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_1000a8b8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (unsigned int *)((int)puVar5 + 1);
  } while( 1 );
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
  uStack_8 = 0x1000168f;
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
  uStack_8 = 0x100017ce;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
