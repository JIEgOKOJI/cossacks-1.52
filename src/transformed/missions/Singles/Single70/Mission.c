#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
long long DAT_10038040 = 0;
char DAT_10038058[] = "G11";
char DAT_1003805c[] = "G10";
char DAT_10038060[] = "G9";
char DAT_10038064[] = "G8";
char DAT_10038068[] = "G7";
char DAT_1003806c[] = "G6";
char DAT_10038070[] = "G5";
char DAT_10038074[] = "G4";
char DAT_10038078[] = "G3";
char DAT_1003807c[] = "G2";
char DAT_10038080[] = "G1";
char DAT_1003817c[] = "Zl3";
char DAT_10038180[] = "Zl2";
char DAT_10038184[] = "Zl1";
char DAT_10038188[] = "Z%d";
long long DAT_1003bd60 = 0;
int DAT_1003bd6c = 4;
int DAT_1003bd70 = 800;
int DAT_1003bd74 = 2;
int DAT_1003bdc0 = 0;
int DAT_1003bdc4 = 0;
int DAT_1003bdc8 = 0;
long long DAT_1003dcc0 = 0;
long long DAT_1003dcc4 = 0;
long long DAT_1003dcc8 = 0;
long long DAT_1003dcd8 = 0;
int DAT_1003dd00 = 0;
long long DAT_1003dd10 = 0;
long long DAT_1003dda0 = 0;
long long DAT_1003ddb0 = 0;
long long DAT_1003de30 = 0;
long long DAT_1003de40 = 0;
long long DAT_1003de50 = 0;
long long DAT_1003de58 = 0;
long long DAT_1003de60 = 0;
long long DAT_1003de68 = 0;
long long DAT_1003de70 = 0;
long long DAT_1003de78 = 0;
long long DAT_1003de80 = 0;
long long DAT_1003de88 = 0;
long long DAT_1003de90 = 0;
long long DAT_1003de98 = 0;
long long DAT_1003dea0 = 0;
long long DAT_1003dea8 = 0;
long long DAT_1003deb0 = 0;
long long DAT_1003deb8 = 0;
long long DAT_1003dec8 = 0;
long long DAT_1003ded8 = 0;
long long DAT_1003dee8 = 0;
long long DAT_1003def8 = 0;
long long DAT_1003df08 = 0;
long long DAT_1003df60 = 0;
long long DAT_1003df70 = 0;
long long DAT_1003df80 = 0;
long long DAT_1003df90 = 0;
long long DAT_1003dfa0 = 0;
long long DAT_1003dfb0 = 0;
long long DAT_1003dfc0 = 0;
long long DAT_1003dfd0 = 0;
long long DAT_1003dfe0 = 0;
long long DAT_1003dff0 = 0;
long long DAT_1003e000 = 0;
long long DAT_1003e010 = 0;
long long DAT_1003e020 = 0;
long long DAT_1003e028 = 0;
long long DAT_1003e030 = 0;
long long DAT_1003e038 = 0;
long long DAT_1003e040 = 0;
long long DAT_1003e048 = 0;
long long DAT_1003e050 = 0;
long long DAT_1003e058 = 0;
long long DAT_1003e060 = 0;
long long DAT_1003e068 = 0;
long long DAT_1003e070 = 0;
long long DAT_1003e078 = 0;
long long DAT_1003e080 = 0;
long long DAT_1003e088 = 0;
int DAT_1003e138 = 0;
long long DAT_1003e140 = 0;
long long DAT_1003e150 = 0;
long long DAT_1003e160 = 0;
long long DAT_1003e170 = 0;
long long DAT_1003e180 = 0;
long long DAT_1003e188 = 0;
long long DAT_1003e190 = 0;
long long DAT_1003e198 = 0;
long long DAT_1003e1a0 = 0;
long long DAT_1003e1a8 = 0;
int DAT_1003e2a4 = 0;
int DAT_1003e2f4 = 0;
int DAT_1003e2f8 = 0;
int DAT_1003e2fc = 0;
int DAT_1003e300 = 0;
int DAT_1003e304 = 0;
int DAT_1003e308 = 0;
int DAT_1003e30c = 0;
int DAT_1003e310 = 0;
int DAT_1003e32c = 0;
long long DAT_1003e330 = 0;
int *DAT_1003fe94 = 0;
int DAT_1003fe98 = 0;
int DAT_10038040_ovl = 776530087;
int DAT_1003dcc0_ovl = 0;
int DAT_1003dcc4_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10008384() { return 0; }
int FUN_1000838d() { return 0; }
int FUN_10008434() { return 0; }
int FUN_1000843d() { return 0; }
int FUN_100084e4() { return 0; }
int FUN_100084ed() { return 0; }
int FUN_100089e0() { return 0; }
int FUN_10008d70() { return 0; }
int FUN_10009390() { return 0; }
int FUN_10009c88() { return 0; }
int FUN_1000a6d0() { return 0; }
int FUN_1000a770() { return 0; }
int FUN_1000a800() { return 0; }
int FUN_1000ac60() { return 0; }
int FUN_1000b260() { return 0; }
int FUN_1000b6a0() { return 0; }
int FUN_1000d4d0() { return 0; }
int FUN_1000d750() { return 0; }
int FUN_1000d990() { return 0; }
int FUN_1000d9a0() { return 0; }
int FUN_1000dad0() { return 0; }


/* Forward declarations */
void FUN_100016b0(int param_1,char param_2,char param_3);
void FUN_10001770(int param_1,char param_2);
void FUN_10001830(int param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_10001950(char *param_1);
char * 
FUN_10001c60(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void 
FUN_10001cf0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void  FUN_10001e10(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
void  FUN_10001f60(int param_1);
void FUN_10001fe0(unsigned int param_1);
void  FUN_10002050(int param_1);
unsigned int *  FUN_100020b0(void *this_ptr,unsigned int *param_1,byte param_2);
void  FUN_10002160(void *this_ptr,int param_1);
int FUN_100022c0(char param_1);
void FUN_10002350(void);
void FUN_10002390(void);
void FUN_100023e0(void);
void FUN_10002420(void);
void FUN_10002460(void);
void FUN_100024b0(void);
void FUN_10002520(int param_1);
void FUN_100029a0(void);
void FUN_100029e0(void);
void  FUN_10002a20(int param_1);
void  FUN_10002a80(int param_1);
void  FUN_10002b10(int param_1);
void FUN_10003000(void);
void FUN_10003040(void);
void FUN_100030a0(void);
void FUN_100030e0(void);
void FUN_10003130(void);
void FUN_10003170(void);
void FUN_100031f0(void);
void FUN_10003910(int param_1);
void FUN_10003980(short *param_1,int param_2);
void FUN_10003a00(void);
void FUN_10004c80(int param_1);
void  FUN_10004d20(int param_1);
void  FUN_10004d80(int param_1);
void  FUN_10004df0(int param_1);
void  FUN_10004e50(int param_1);
int  FUN_10004eb0(int param_1);
void  FUN_10004ee0(int param_1);
void  FUN_10004f40(void *this_ptr,int param_1);
void  FUN_10004f80(void *this_ptr,int param_1);
void  FUN_10005000(void *this_ptr,int param_1,int param_2);
void  FUN_10005120(void *this_ptr,int param_1);
void  FUN_10005160(void *this_ptr,int param_1);
void  FUN_100051a0(int param_1);
void  FUN_10005250(void *this_ptr,int param_1);
void  FUN_10005290(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100052f0(void *this_ptr,int param_1);
void  FUN_100053c0(int param_1);
void  FUN_10005450(void *this_ptr,unsigned int param_1);
int  FUN_100054d0(int param_1);
void  FUN_10005500(void *this_ptr,int param_1);
void  FUN_10005580(void *this_ptr,int param_1);
void  FUN_100055f0(int param_1);
void  FUN_10005660(void *this_ptr,int param_1);
void  FUN_100056d0(void *this_ptr,int param_1);
void  FUN_10005710(int param_1);
void  FUN_10005780(void *param_1);
void  FUN_10005800(void *this_ptr,int param_1);
void  FUN_10005860(void *param_1);
void  FUN_100058e0(void *this_ptr,int param_1);
void  FUN_10005920(int param_1);
void  FUN_10005970(int param_1);
void  FUN_100059c0(void *this_ptr,int param_1,int param_2);
void  FUN_10005a10(void *param_1);
void  FUN_10005d00(void *param_1);
void  FUN_10005d90(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005df0(void *param_1);
void  FUN_10005e70(void *this_ptr,int param_1);
void FUN_10005ee0(short *param_1);
void  FUN_10005f80(void *this_ptr,int param_1);
void  FUN_10005fc0(void *this_ptr,int param_1);
void  FUN_10006000(void *this_ptr,int param_1);
void  FUN_10006040(void *this_ptr,void *param_1);
int  FUN_100060b0(int param_1);
int  FUN_100060f0(int param_1);
void  FUN_10006120(void *param_1);
int FUN_100063b0(void);
void  FUN_100063e0(void *this_ptr,int param_1,int param_2);
void  FUN_10006450(void *this_ptr,int param_1);
void  FUN_100064c0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006560(void *this_ptr,int param_1,int param_2);
int  FUN_100066b0(int param_1);
void  FUN_100066f0(int param_1);
void  FUN_10006760(void *this_ptr,int param_1);
void  FUN_100067e0(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10006880(int param_1);
void  FUN_100068d0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100069a0(int param_1);
void  FUN_10006a50(int param_1);
void  FUN_10006af0(int param_1);
void  FUN_10006b70(int param_1);
void FUN_10006d80(int param_1);
void FUN_10006db0(int param_1,int param_2,int param_3);
void  FUN_10006e30(int param_1);
void  FUN_10007060(void *this_ptr,int *param_1);
void  FUN_10007190(int param_1);
void  FUN_10007230(int param_1);
int  FUN_100072a0(int param_1);
void  FUN_100072e0(void *this_ptr,int param_1);
void  FUN_10007340(void *param_1);
void  FUN_10007550(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_100076e0(int param_1,int param_2,int param_3,int param_4);
void  FUN_100077e0(int param_1);
void  FUN_10007880(int param_1);
int  FUN_100078f0(int param_1);
void  FUN_10007930(void *this_ptr,int *param_1);
void  FUN_10007a60(int param_1);
void  FUN_10007ba0(void *this_ptr,int param_1);
void  FUN_10007c00(int param_1);
void  FUN_10007c90(int param_1);
void 
FUN_10007d00(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10007da0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10007e50(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10007f10(char *param_1);
void  FUN_10008050(char *param_1);
void  FUN_10008120(char *param_1);
void FUN_10008370(void);
void FUN_10008420(void);
void FUN_100084d0(void);
void FUN_10008570(void);
void FUN_100085a0(void);
void FUN_100085b0(void);
int FUN_10008600(int param_1);
void FUN_10008650(void *param_1);
void FUN_10008700(unsigned int param_1);
int FUN_10008910(int *param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
int FUN_10008a70(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10008bd6(void);
int FUN_10008bf0(int param_1);
int FUN_10008cb0(int param_1);
void FUN_10008d20(DWORD param_1);
int FUN_10008f00(char *param_1,byte *param_2);


void __cdecl FUN_100016b0(int param_1,char param_2,char param_3)

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
  uStack_8 = 0x1000173f;
  return;
}





void __cdecl FUN_10001770(int param_1,char param_2)

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
  uStack_8 = 0x100017fb;
  return;
}







void __cdecl FUN_10001830(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  fVar3 = (long double)FUN_100084e4(local_2c,(int)((double)(int)local_2c / (double)local_30));
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_10038040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_10008434(*(int*)((char*)&local_1c + 4),(int)(local_1c));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_10008384((void *)local_1c,(int)(void *)local_1c);
  lVar4 = 0;
  local_24 = (int)lVar4;
  return;
}





void  FUN_10001950(char *param_1)

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
  FUN_10001cf0(param_1,8,2,0x15,0,100,3,0x50);
  FUN_10001cf0(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10001cf0(local_8,8,2,8,0,0x5a,3,0x32);
  FUN_10001cf0(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10001cf0(local_8,8,2,0x16,0,0x1e,3,0x32);
  FUN_10001cf0(local_8,8,3,0x17,0,1000,3,0x5a);
  FUN_10001cf0(local_8,8,2,0x16,1,0x1e,5,0x46);
  FUN_10001cf0(local_8,8,1,0x14,1,100,5,0x46);
  FUN_10001cf0(local_8,8,2,0x15,1,100,5,0x50);
  FUN_10001cf0(local_8,0x15,2,0x15,0,300,3,0x1e);
  FUN_10001cf0(local_8,0x15,2,0x16,0,300,3,0x1e);
  FUN_10001cf0(local_8,0x15,2,8,0,300,3,0x1e);
  FUN_10001cf0(local_8,0x15,3,0x17,0,1000,3,0x5a);
  FUN_10001cf0(local_8,0x15,1,0x16,1,0x14,4,0x50);
  FUN_10001cf0(local_8,0x15,1,0x14,1,10,4,0x50);
  FUN_10001cf0(local_8,0x15,2,8,1,0x1e,4,0x50);
  FUN_10001cf0(local_8,0x15,2,0x15,1,100,4,0x50);
  FUN_10001cf0(local_8,0x14,2,0x14,0,500,3,0x50);
  FUN_10001cf0(local_8,0x14,2,0x16,0,500,3,0x50);
  FUN_10001cf0(local_8,0x14,2,0x15,0,500,3,0x50);
  FUN_10001cf0(local_8,0x14,3,0x17,0,1000,3,0x5a);
  FUN_10001cf0(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (char *)0x10001bb8;
  return;
}





char * 
FUN_10001c60(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
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
FUN_10001cf0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7)

{
  int iVar1;
  int *puVar2;
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
    FUN_10008700(0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = FUN_10001c60(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(char **)((int)local_14 + 8) = local_20;
  }
  else {
    FUN_10001cf0(*(void **)((int)this_ptr + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  return;
}





void  FUN_10001e10(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
LAB_10001eba:
          local_c = (unsigned int)*(byte *)((int)this_ptr + 5) * 100 + (unsigned int)*(byte *)((int)this_ptr + 6);
          goto LAB_10001efc;
        }
        pvVar1 = (void *)(unsigned int)*(byte *)((int)this_ptr + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(unsigned int)*(unsigned short *)((int)this_ptr + 3);
          if (pvVar4 < pvVar1) goto LAB_10001eba;
        }
      }
    }
  }
  if (*(int *)((int)this_ptr + 8) != 0) {
    uVar2 = (int)(short)param_4;
    local_8 = this_ptr;
    FUN_10001e10(*(void **)((int)this_ptr + 8),
                                 (int)(char)param_1,
                                 (int)(char)param_2,
                                 (int)(char)param_3,uVar2);
  }
LAB_10001efc:
  local_8 = (void *)0x10001f0c;
  return;
}





void  FUN_10001f60(int param_1)

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
      FUN_10001fe0(1);
    }
  }
  return;
}





void FUN_10001fe0(unsigned int param_1)

{
  void *in_ECX;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = in_ECX;
  FUN_10001f60((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10008650(local_8);
  }
  local_8 = (void *)0x1000202b;
  return;
}





void  FUN_10002050(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1 + 0x20);
  return;
}





unsigned int *  FUN_100020b0(void *this_ptr,unsigned int *param_1,byte param_2)

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
    if ((&DAT_1003bd60)[local_14] == param_2) {
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





void  FUN_10002160(void *this_ptr,int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_80 [16];
  int *local_40;
  char local_3c [18];
  char local_2a;
  int local_10;
  int local_c;
  void *local_8;
for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    *(int *)((int)this_ptr + local_c * 4) = 0;
  }
  local_8 = this_ptr;
  SelectUnitsInZone(param_1,0,0);
  SaveSelectedUnits(0,(int)local_8 + 0x20,0);
  local_10 = GetTotalAmount0((int)local_8 + 0x20);
  for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
    GetUnitInfo((int)local_8 + 0x20,local_c,local_3c);
    uVar1 = FUN_100022c0(local_2a);
    local_40 = (int *)((int)local_8 + (uVar1 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x10002268;
  return;
}





int FUN_100022c0(char param_1)

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
    if ((&DAT_1003bd60)[bVar1] == param_1) {
      local_10 = 8;
      local_c = bVar1;
    }
    bVar1 = local_10 + 1;
  }
  return (int)local_c;
}





void FUN_10002350(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002390();
  uStack_8 = 0x1000237a;
  return;
}





void FUN_10002390(void)

{
  int *puVar1;
  int iVar2;
  int *puVar3;
  char local_2c [36];
  int uStack_8;
FUN_10002050((int)local_2c);
  puVar3 = &DAT_1003dcd8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x100023cb;
  return;
}





void FUN_100023e0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002420();
  FUN_10002460();
  uStack_8 = 0x1000240f;
  return;
}





void FUN_10002420(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001950(&DAT_1003dcc8);
  uStack_8 = 0x1000244f;
  return;
}





void FUN_10002460(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10008cb0(0x100024b0);
  uStack_8 = 0x10002492;
  return;
}





void FUN_100024b0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_1003dd00 & 1) == 0) {
    DAT_1003dd00 = DAT_1003dd00 | 1;
    FUN_10001f60(0x1003dcc8);
  }
  uStack_8 = 0x100024fc;
  return;
}





void FUN_10002520(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  unsigned short local_54;
  short uStack_52;
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
  FUN_10002160(&DAT_1003dcd8,local_8);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)(&DAT_1003dcd8)[local_40]) {
      FUN_10001e10(&DAT_1003dcc8,
                                 (int)local_2a,1,
                                 (int)(&DAT_1003bd60)[local_40],
                                 ((&DAT_1003dcd8)[local_40] * 100) / local_10);
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
    FUN_10002160(&DAT_1003dcd8,local_8);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)(&DAT_1003dcd8)[local_48]) {
        uVar2 = ((&DAT_1003dcd8)[local_48] * 100) / local_10;
        FUN_10001e10(&DAT_1003dcc8,(int)local_2a,2,
                                   (int)(&DAT_1003bd60)[local_48],
                                   uVar2);
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
    FUN_10002160(&DAT_1003dcd8,local_8);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)(&DAT_1003dcd8)[local_50]) {
        uVar2 = ((&DAT_1003dcd8)[local_50] * 100) / local_10;
        FUN_10001e10(&DAT_1003dcc8,(int)local_2a,3,
                                   (int)(&DAT_1003bd60)[local_50],
                                   uVar2);
        local_54 = (int)uVar1;
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





void FUN_100029a0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100029e0();
  uStack_8 = 0x100029ca;
  return;
}







void FUN_100029e0(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
DAT_1003dcc0_ovl = local_c;
  DAT_1003dcc4_ovl = local_8;
  return;
}





void  FUN_10002a20(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10002a80(int param_1)

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





void  FUN_10002b10(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  int local_8c [16];
  int local_4c;
  long long local_48;
  long long local_40;
  long long local_38;
  long long local_30;
  long long local_28;
  long long local_20;
  long long local_18;
  long long local_10;
  int local_8;
*(int *)(param_1 + 0x18) = 0;
  local_8 = param_1;
  if (param_1 == -0x10) {
    UnitsCenter(0,0xfffffff0,700);
  }
  iVar3 = GetTotalAmount0(local_8);
  if (0 < iVar3) {
    UnitsCenter(local_8 + 8,local_8,1000);
    FUN_10002a80(local_8);
    if (cVar1 == '\0') {
      iVar3 = GetUnitsAmount0(local_8 + 8,0);
      if (iVar3 < 1) {
        SelectUnits(local_8,0);
        SelSendAndKill(1,local_8 + 0x10,*(char *)(local_8 + 0x18),0);
        goto switchD_10002c11_default;
      }
    }
    FUN_10002520(local_8);
    local_4c = (uVar2 & 0xffff) / 100 - 1;
    switch(local_4c) {
    case 0:
      SelectUnits(local_8,0);
      SetStandGround(1,1);
      break;
    case 1:
      SelectUnits(local_8,0);
      SelSendAndKill(1,local_8 + 0x10,*(char *)(local_8 + 0x18),0);
      break;
    case 2:
      AttackEnemyInZone(local_8,local_8 + 8,0);
      break;
    case 3:
      FUN_100016b0(local_8 + 8,1,0x14);
      local_10 = local_28;
      FUN_10001770(local_8 + 8,0);
      local_18 = local_30;
      FUN_10001830((int)local_10,*(int*)((char*)&local_10 + 4),(int)local_30,
                                    (int)((unsigned long long)local_30 >> 0x20),400);
      (*(short*)&local_20) = (short)local_38;
      *(short *)(local_8 + 8) = (short)local_20;
      *(short*)((char*)&local_20 + 4) = (short)((unsigned long long)local_38 >> 0x20);
      *(short *)(local_8 + 10) = *(short*)((char*)&local_20 + 4);
      local_20 = local_38;
      SelectUnits(local_8,0);
      SelSendTo(1,local_8 + 8,*(char *)(local_8 + 0x18),0);
      break;
    case 4:
      (*(int*)&local_10) = *(unsigned short *)(local_8 + 8) - 0x96;
      *(int*)((char*)&local_10 + 4) = *(unsigned short *)(local_8 + 10) - 0x96;
      FUN_10001770(local_8 + 8,0);
      local_18 = local_40;
      FUN_10001830((int)local_10,*(int*)((char*)&local_10 + 4),(int)local_40,
                                    (int)((unsigned long long)local_40 >> 0x20),800);
      (*(short*)&local_20) = (short)local_48;
      *(short *)(local_8 + 8) = (short)local_20;
      *(short*)((char*)&local_20 + 4) = (short)((unsigned long long)local_48 >> 0x20);
      *(short *)(local_8 + 10) = *(short*)((char*)&local_20 + 4);
      local_20 = local_48;
      SelectUnits(local_8,0);
      SelSendTo(1,local_8 + 8,*(char *)(local_8 + 0x18),0);
    }
  }
switchD_10002c11_default:
  return;
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
  int local_44 [15];
  int uStack_8;
FUN_10002a20(&DAT_1003deb8);
  FUN_10002a20(&DAT_1003ded8);
  FUN_10002a20(&DAT_1003def8);
  uStack_8 = 0x10003083;
  return;
}





void FUN_100030a0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100030e0();
  uStack_8 = 0x100030ca;
  return;
}





void FUN_100030e0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002a20(&DAT_1003e140);
  FUN_10002a20(&DAT_1003e160);
  uStack_8 = 0x10003119;
  return;
}





void FUN_10003130(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10003170();
  uStack_8 = 0x1000315a;
  return;
}





void FUN_10003170(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002a20(&DAT_1003df60);
  FUN_10002a20(&DAT_1003df80);
  FUN_10002a20(&DAT_1003dfa0);
  FUN_10002a20(&DAT_1003dfc0);
  FUN_10002a20(&DAT_1003dfe0);
  FUN_10002a20(&DAT_1003e000);
  uStack_8 = 0x100031d1;
  return;
}





void FUN_100031f0(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int local_54 [16];
  int local_14;
  char local_10 [8];
  int uStack_8;
SetPlayerName(0,"RUSSIA");
  SetPlayerName(1,"POLAND");
  for (local_14 = 0; local_14 < 0x28; local_14 = local_14 + 1) {
    FUN_10008f00(local_10,DAT_10038188);
    RegisterZone(&DAT_1003dd10 + local_14 * 8,local_10);
  }
  RegisterZone(&DAT_1003e190,DAT_10038184);
  RegisterZone(&DAT_1003e198,DAT_10038180);
  RegisterZone(&DAT_1003e1a0,DAT_1003817c);
  RegisterZone(&DAT_1003e1a8,"ZGusar");
  RegisterUnitType(&DAT_1003e020,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_1003e028,"Russki_Center(RU)");
  RegisterUnitType(&DAT_1003e030,"ruskaia_izba(RU)");
  RegisterUnitType(&DAT_1003e038,"Melnica_rus(RU)");
  RegisterUnitType(&DAT_1003e040,"Sclad3(RU)");
  RegisterUnitType(&DAT_1003e048,"shahta(RU)");
  RegisterUnitType(&DAT_1003e050,"Kuznica(RU)");
  RegisterUnitType(&DAT_1003e058,"Cerkov_RU(RU)");
  RegisterUnitType(&DAT_1003e060,"Bashnia_2(RU)");
  RegisterUnitType(&DAT_1003e068,"Rinok(RU)");
  RegisterUnitType(&DAT_1003e070,"Russki_Center(RU)");
  RegisterUnitType(&DAT_1003e078,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_1003e180,"WALL_KR(RU)");
  RegisterUnitType(&DAT_1003e188,"Poland_pikiner(PL)");
  RegisterFormation(&DAT_1003de50,"#LINE9PUS");
  RegisterVar(&DAT_1003e138,4);
  RegisterUnits(&DAT_1003de58,DAT_10038080);
  RegisterUnits(&DAT_1003de60,DAT_1003807c);
  RegisterUnits(&DAT_1003de68,DAT_10038078);
  RegisterUnits(&DAT_1003de70,DAT_10038074);
  RegisterUnits(&DAT_1003de78,DAT_10038070);
  RegisterUnits(&DAT_1003de80,DAT_1003806c);
  RegisterUnits(&DAT_1003de88,DAT_10038068);
  RegisterUnits(&DAT_1003de90,DAT_10038064);
  RegisterUnits(&DAT_1003de98,DAT_10038060);
  RegisterUnits(&DAT_1003dea0,DAT_1003805c);
  RegisterUnits(&DAT_1003dea8,DAT_10038058);
  RegisterUnits(&DAT_1003deb0,"GPersant");
  RegisterDynGroup(&DAT_1003e080);
  RegisterDynGroup(&DAT_1003e088);
  RegisterVar(&DAT_1003e080,8);
  RegisterVar(&DAT_1003e088,8);
  RegisterVar(&DAT_1003deb8,0x1d);
  RegisterVar(&DAT_1003ded8,0x1d);
  RegisterVar(&DAT_1003def8,0x1d);
  RegisterVar(&DAT_1003e140,0x1d);
  RegisterVar(&DAT_1003e160,0x1d);
  RegisterVar(&DAT_1003df60,0x1d);
  RegisterVar(&DAT_1003df80,0x1d);
  RegisterVar(&DAT_1003dfa0,0x1d);
  RegisterVar(&DAT_1003dfc0,0x1d);
  RegisterVar(&DAT_1003dfe0,0x1d);
  RegisterVar(&DAT_1003e000,0x1d);
  DVar1 = FUN_10008d70((int *)0x0);
  FUN_10008d20(DVar1);
  uStack_8 = 0x1000379d;
  return;
}





void __cdecl FUN_10003910(int param_1)

{
  int iVar1;
  int *puVar2;
  char local_38 [20];
  int local_24;
  int local_c;
  int local_8;
GetUnitInfo(param_1,0,local_38);
  local_c = local_24;
  return;
}





void __cdecl FUN_10003980(short *param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  short local_c [2];
  int local_8;
GetZoneCoor(param_2,&local_8,local_c);
  *param_1 = (short)local_8;
  param_1[1] = local_c[0];
  return;
}





void FUN_10003a00(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44;
  char local_40 [4];
  unsigned short local_3c;
  unsigned short uStack_3a;
  int local_14;
  unsigned int local_10;
  unsigned int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_1003e138 = GetDiff(0);
    if (DAT_1003e138 < 1) {
      InitialUpgrade("GPersant","Pik_rus(RU)ATTACK5");
      InitialUpgrade("GPersant","Pik_rus(RU)SHIELD4");
      InitialUpgrade("GPersant","Strelec(RU)ATTACK4");
      InitialUpgrade("GPersant","Strelec(RU)SHIELD4");
      InitialUpgrade("GPersant","Tiagoli_koval_rus(RU)ATTACK3");
      InitialUpgrade("GPersant","Tiagoli_koval_rus(RU)SHIELD4");
      InitialUpgrade("GPersant","Tiagoli_kozak(RU)ATTACK4");
      InitialUpgrade("GPersant","Tiagoli_kozak(RU)SHIELD6");
    }
    if (DAT_1003e138 < 2) {
      InitialUpgrade("GPersant","Pik_rus(RU)ATTACK5");
      InitialUpgrade("GPersant","Pik_rus(RU)SHIELD4");
      InitialUpgrade("GPersant","Strelec(RU)ATTACK4");
      InitialUpgrade("GPersant","Strelec(RU)SHIELD4");
      InitialUpgrade("GPersant","Tiagoli_koval_rus(RU)ATTACK3");
      InitialUpgrade("GPersant","Tiagoli_koval_rus(RU)SHIELD4");
      InitialUpgrade("GPersant","Tiagoli_kozak(RU)ATTACK4");
      InitialUpgrade("GPersant","Tiagoli_kozak(RU)SHIELD6");
    }
    if (DAT_1003e138 < 3) {
      InitialUpgrade("GPersant","Pik_rus(RU)ATTACK5");
      InitialUpgrade("GPersant","Pik_rus(RU)SHIELD4");
      InitialUpgrade("GPersant","Strelec(RU)ATTACK4");
      InitialUpgrade("GPersant","Strelec(RU)SHIELD4");
      InitialUpgrade("GPersant","Tiagoli_koval_rus(RU)ATTACK3");
      InitialUpgrade("GPersant","Tiagoli_koval_rus(RU)SHIELD4");
      InitialUpgrade("GPersant","Tiagoli_kozak(RU)ATTACK4");
      InitialUpgrade("GPersant","Tiagoli_kozak(RU)SHIELD6");
    }
    InitialUpgrade("GPersant","AKA24RU");
    SetResource(0,2,(3 - DAT_1003e138) * 2000 + 1000);
    SetResource(0,0,0);
    for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
      EnableUnit(0,&DAT_1003e020 + local_8 * 8,0);
    }
    SetTrigg(3,0);
    SetTrigg(4,0);
    RunTimer(1,2000);
    RunTimer(2,1000);
    RunTimer(3,2000);
    RunTimer(0x1e,100);
    SetTrigg(99,0);
  }
  uVar1 = TimerDoneFirst(0x1e);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE0");
    for (local_c = 0; (int)local_c < 0x28; local_c = local_c + 1) {
      SetLightSpot(&DAT_1003dd10 + local_c * 8,3,local_c & 0xff);
    }
    SetLightSpot(&DAT_1003e190,3,0x28);
    SetLightSpot(&DAT_1003e198,3,0x29);
    SetLightSpot(&DAT_1003e1a0,3,0x2a);
    RemoveGroup(&DAT_1003de58,&DAT_1003deb8);
    RemoveGroup(&DAT_1003de60,&DAT_1003ded8);
    RemoveGroup(&DAT_1003de68,&DAT_1003def8);
    RemoveGroup(&DAT_1003de70,&DAT_1003e140);
    RemoveGroup(&DAT_1003de78,&DAT_1003e160);
    RemoveGroup(&DAT_1003de80,&DAT_1003df60);
    RemoveGroup(&DAT_1003de88,&DAT_1003df80);
    RemoveGroup(&DAT_1003de90,&DAT_1003dfa0);
    RemoveGroup(&DAT_1003de98,&DAT_1003dfc0);
    RemoveGroup(&DAT_1003dea0,&DAT_1003dfe0);
    RemoveGroup(&DAT_1003dea8,&DAT_1003e000);
    UnitsCenter(&DAT_1003dec8,&DAT_1003deb8,1000);
    UnitsCenter(&DAT_1003dee8,&DAT_1003ded8,1000);
    UnitsCenter(&DAT_1003df08,&DAT_1003def8,1000);
    UnitsCenter(&DAT_1003e150,&DAT_1003e140,1000);
    UnitsCenter(&DAT_1003e170,&DAT_1003e160,1000);
    UnitsCenter(&DAT_1003df70,&DAT_1003df60,1000);
    UnitsCenter(&DAT_1003df90,&DAT_1003df60,1000);
    UnitsCenter(&DAT_1003dfb0,&DAT_1003df60,1000);
    UnitsCenter(&DAT_1003dfd0,&DAT_1003df60,1000);
    UnitsCenter(&DAT_1003dff0,&DAT_1003df60,1000);
    UnitsCenter(&DAT_1003e010,&DAT_1003df60,1000);
    FUN_10003980((short *)&DAT_1003df70,&DAT_1003de40);
    FUN_10003980((short *)&DAT_1003df90,&DAT_1003de40);
    FUN_10003980((short *)&DAT_1003dfb0,&DAT_1003de40);
    FUN_10003980((short *)&DAT_1003dfd0,&DAT_1003de30);
    FUN_10003980((short *)&DAT_1003dff0,&DAT_1003de30);
    FUN_10003980((short *)&DAT_1003e010,&DAT_1003de30);
    TakeStone(&DAT_1003deb0);
  }
  uVar1 = TimerDoneFirst(3);
  if ((uVar1 & 0xff) != 0) {
    FUN_10003980((short *)&DAT_1003dec8,&DAT_1003dda0);
    FUN_10003980((short *)&DAT_1003dee8,&DAT_1003dda0);
    FUN_10003980((short *)&DAT_1003df08,&DAT_1003ddb0);
    FUN_10003980((short *)&DAT_1003e150,&DAT_1003dda0);
    FUN_10003980((short *)&DAT_1003e170,&DAT_1003ddb0);
    SetTrigg(3,1);
    SetTrigg(4,1);
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(1);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(3);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = rand();
        FUN_10003980((short *)&DAT_1003df70,&DAT_1003dd10 + (iVar2 % 0x28) * 8);
        iVar2 = rand();
        FUN_10003980((short *)&DAT_1003df90,&DAT_1003dd10 + (iVar2 % 0x28) * 8);
        iVar2 = rand();
        FUN_10003980((short *)&DAT_1003dfb0,&DAT_1003dd10 + (iVar2 % 0x28) * 8);
        iVar2 = rand();
        FUN_10003980((short *)&DAT_1003dfd0,&DAT_1003dd10 + (iVar2 % 0x28) * 8);
        iVar2 = rand();
        FUN_10003980((short *)&DAT_1003dff0,&DAT_1003dd10 + (iVar2 % 0x28) * 8);
        iVar2 = rand();
        FUN_10003980((short *)&DAT_1003e010,&DAT_1003dd10 + (iVar2 % 0x28) * 8);
        RunTimer(1,300);
      }
    }
    SaveSelectedUnits(0,&DAT_1003e080,0);
    FUN_10002b10(0x1003deb8);
    FUN_10002b10(0x1003ded8);
    FUN_10002b10(0x1003def8);
    FUN_10002b10(0x1003e140);
    FUN_10002b10(0x1003e160);
    FUN_10002b10(0x1003df60);
    FUN_10002b10(0x1003df80);
    FUN_10002b10(0x1003dfa0);
    FUN_10002b10(0x1003dfc0);
    FUN_10002b10(0x1003dfe0);
    FUN_10002b10(0x1003e000);
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(100,0);
      ShowPage("#PAGE2");
      LooseGame();
    }
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      local_10 = (int)1;
      for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
        iVar2 = GetTopDst(&DAT_1003e198,&DAT_1003dd10 + local_14 * 0x10);
        if (iVar2 < 60000) {
          local_10 = local_10 & 0xffffff00;
          local_14 = 0xc;
        }
      }
      if ((local_10 & 0xff) != 0) {
        SelectUnitsType(&DAT_1003e180,0,0);
        SaveSelectedUnits(0,&DAT_1003e088,0);
        local_44 = 0;
        while ((local_10 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_1003e088);
          if (iVar2 <= local_44) break;
          GetUnitInfo(&DAT_1003e088,local_44,local_40);
          if (local_3c < uStack_3a) {
            local_10 = local_10 & 0xffffff00;
          }
          local_44 = local_44 + 1;
        }
      }
      if ((local_10 & 0xff) == 0) {
        RunTimer(2,1000);
      }
      else {
        SetTrigg(100,0);
        ShowPage("#PAGE1");
        ShowVictory();
      }
    }
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_1003df60);
      if (iVar2 == 0) {
        CreateObject0(&DAT_1003df60,&DAT_1003de50,&DAT_1003e188,1,&DAT_1003e1a8,0);
      }
      if (0 < DAT_1003e138) {
        iVar2 = GetTotalAmount0(&DAT_1003df80);
        if (iVar2 == 0) {
          CreateObject0(&DAT_1003df80,&DAT_1003de50,&DAT_1003e188,1,&DAT_1003e1a8,0);
        }
      }
      if (1 < DAT_1003e138) {
        iVar2 = GetTotalAmount0(&DAT_1003dfa0);
        if (iVar2 == 0) {
          CreateObject0(&DAT_1003dfa0,&DAT_1003de50,&DAT_1003e188,1,&DAT_1003e1a8,0);
        }
        iVar2 = GetTotalAmount0(&DAT_1003dfc0);
        if (iVar2 == 0) {
          CreateObject0(&DAT_1003dfc0,&DAT_1003de50,&DAT_1003e188,1,&DAT_1003e1a8,0);
        }
      }
      if (2 < DAT_1003e138) {
        iVar2 = GetTotalAmount0(&DAT_1003dfe0);
        if (iVar2 == 0) {
          CreateObject0(&DAT_1003dfe0,&DAT_1003de50,&DAT_1003e188,1,&DAT_1003e1a8,0);
        }
        iVar2 = GetTotalAmount0(&DAT_1003e000);
        if (iVar2 == 0) {
          CreateObject0(&DAT_1003e000,&DAT_1003de50,&DAT_1003e188,1,&DAT_1003e1a8,0);
        }
      }
    }
    ClearSelection(0);
    SelectUnits(&DAT_1003e080,0);
  }
  return;
}





void __cdecl FUN_10004c80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  unsigned int local_c;
  unsigned int local_8;
local_8 = 0;
  for (local_c = 0; (int)local_c < 8; local_c = local_c + 1) {
    iVar1 = GetUnitsByNation(param_1,local_c & 0xff);
    if (0 < iVar1) {
      local_8 = local_c;
      local_c = 8;
    }
  }
  return;
}





void  FUN_10004d20(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10004d80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10004d20(param_1);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}





void  FUN_10004df0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_10004e50(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_10004df0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10004eb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10004ee0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10004f40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_10004f80(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((int)this_ptr + 8,*(int *)((int)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10004fd8;
  return;
}





void  FUN_10005000(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10004df0(this_ptr);
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
  local_8 = (void *)0x100050d7;
  return;
}





void  FUN_10005120(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10005160(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_100051a0(int param_1)

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





void  FUN_10005250(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10005290(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  *(int *)((int)this_ptr + 0x1c) = param_2;
  *(int *)((int)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_100052f0(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10005390;
  return;
}





void  FUN_100053c0(int param_1)

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





void  FUN_10005450(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10004d20(this_ptr);
  SelChangeNation(*(char *)((int)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((int)local_8 + 0x10) = param_1;
  local_8 = (void *)0x100054a8;
  return;
}





int  FUN_100054d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10005500(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10004d20(this_ptr);
  SelSendTo(*(char *)((int)local_8 + 0x10),param_1,0,0);
  *(int *)((int)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000555c;
  return;
}





void  FUN_10005580(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10004d20(this_ptr);
  Patrol(*(char *)((int)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x100055d1;
  return;
}





void  FUN_100055f0(int param_1)

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





void  FUN_10005660(void *this_ptr,int param_1)

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
  local_8 = (void *)0x100056b3;
  return;
}





void  FUN_100056d0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10005710(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10004d20(param_1);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_10005780(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10004e50(param_1);
  if (cVar1 != '\0') {
    FUN_10005860(local_8);
    FUN_100053c0(local_8);
    if (iVar2 < 10) {
      FUN_10005500(local_8,*(int *)((int)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x100057df;
  return;
}





void  FUN_10005800(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10005846;
  return;
}





void  FUN_10005860(void *param_1)

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
  FUN_10004f80(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x100058bb;
  return;
}





void  FUN_100058e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10005920(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005970(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10005970(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10004ee0(param_1);
  return;
}





void  FUN_100059c0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x24) = param_1;
  *(int *)((int)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10005a10(void *param_1)

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
      (local_8 = param_1, FUN_10004e50(param_1), cVar1 != '\0')) &&
     (*(int *)((int)local_8 + 0x10) != 0)) {
    if (*(int *)((int)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_10004f80(local_8,600);
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
          FUN_10005450(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10004d80((int)local_8);
        }
        AddResource(0,*(char *)((int)local_8 + 0x24),*(int *)((int)local_8 + 0x28));
        FUN_100059c0(local_8,0,0);
      }
    }
    else {
      FUN_100053c0(local_8);
      if (iVar3 < 0x32) {
        FUN_10005d00(local_8);
      }
      FUN_100055f0((int)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_10005ee0(*(short **)((int)local_8 + 0x20));
        FUN_10006040(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10005c42;
  return;
}





void  FUN_10005d00(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10005450(param_1,6);
  FUN_10004d20(local_8);
  uVar5 = 0;
  uVar4 = 0;
  FUN_10004f80(local_8,100);
  SelSendTo(*(char *)((int)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10005710((int)local_8);
  local_8 = (void *)0x10005d6c;
  return;
}





void  FUN_10005d90(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005290(this_ptr,param_1,param_2,param_3);
  *(char *)((int)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10005dd5;
  return;
}





void  FUN_10005df0(void *param_1)

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
  FUN_10004f80(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10005e4b;
  return;
}





void  FUN_10005e70(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 4) = param_1;
  (&DAT_1003e2a4)[DAT_1003e2f4] = this_ptr;
  DAT_1003e2f4 = DAT_1003e2f4 + 1;
  return;
}





void __cdecl FUN_10005ee0(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1003e2a4;
  for (local_c = 0; local_c < DAT_1003e2f4; local_c = local_c + 1) {
    psVar1 = (short *)FUN_100060b0((&DAT_1003e2a4)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = (&DAT_1003e2a4)[local_c];
    }
  }
  return;
}





void  FUN_10005f80(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 8) = param_1;
  return;
}





void  FUN_10005fc0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10006000(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10006040(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100059c0(param_1,*(int *)((int)this_ptr + 0xc),*(int *)((int)this_ptr + 0x10));
  FUN_10005500(param_1,*(int *)((int)local_8 + 8));
  local_8 = (void *)0x1000608f;
  return;
}





int  FUN_100060b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_100060f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10006120(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100066f0((int)param_1);
  if ((0 < iVar2) && (*(int *)((int)local_8 + 0x1c) + 1 < *(int *)((int)local_8 + 0x20))) {
    if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10006760(local_8,*(int *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10006db0((int)local_8 + 0xc,
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10006760(local_8,*(int *)
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
  local_8 = (void *)0x10006322;
  return;
}





int FUN_100063b0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_100063e0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10006450(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_100064c0(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x10006531;
  return;
}





void  FUN_10006560(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_100066f0((int)this_ptr);
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
    FUN_100063e0(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10006661;
  return;
}





int  FUN_100066b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_100066f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_10006760(void *this_ptr,int param_1)

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
  FUN_100066f0((int)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100067c0;
  return;
}





void  FUN_100067e0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xc,param_1);
  FUN_10004c80((int)local_8 + 0xc);
  *(int *)((int)local_8 + 0x18) = uVar1;
  *(int *)((int)local_8 + 0x14) = 0;
  *(int *)((int)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x1000684f;
  return;
}





BOOL  FUN_10006880(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_100068d0(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10006880((int)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x1000696d;
  return;
}





void  FUN_100069a0(int param_1)

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





void  FUN_10006a50(int param_1)

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





void  FUN_10006af0(int param_1)

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





void  FUN_10006b70(int param_1)

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
      FUN_10006a50(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_100069a0(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10006af0(local_8);
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





void __cdecl FUN_10006d80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_1003e2f8 = param_1;
  return;
}





void __cdecl FUN_10006db0(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_1003e2f8 != (void *)0x0) {
    bVar1 = FUN_10006880((int)DAT_1003e2f8);
    if (bVar1) {
      FUN_100068d0(DAT_1003e2f8,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10006e09;
  return;
}





void  FUN_10006e30(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  FUN_10007230(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      FUN_10007190(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_1003e2fc,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_1003e300 == 0) {
        FUN_10007190(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_1003e2fc,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_1003e300,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_1003e300,0);
      }
    }
    else {
      FUN_10007190(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_1003e2fc,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10007060(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10007145;
  return;
}





void  FUN_10007190(int param_1)

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





void  FUN_10007230(int param_1)

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





int  FUN_100072a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_100072e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10007327;
  return;
}





void  FUN_10007340(void *param_1)

{
  char cVar1;
  int *puVar2;
  int iVar3;
  int uVar4;
  int local_18 [2];
  int local_10 [2];
  void *local_8;
local_8 = param_1;
  FUN_10007880((int)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((int)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      FUN_10007930(local_8,local_10);
      FUN_100076e0((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((int)local_8 + 0xc) = 2;
      }
      else {
        FUN_100077e0((int)local_8);
        if (cVar1 == '\0') {
          SelectUnits((int)local_8 + 0xd,0);
          SelSendTo(DAT_1003bd6c,(int)local_8 + 0x1d,*(char *)((int)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((int)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      FUN_10007930(local_8,local_18);
      FUN_100076e0((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((int)local_8 + 0xd,0);
        SelSendTo(DAT_1003bd6c,DAT_1003e304,*(char *)((int)local_8 + 8),0);
      }
      else {
        *(char *)((int)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x100074d9;
  return;
}







void  FUN_10007550(void *this_ptr,int param_1,int param_2,int param_3)

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
  FUN_10007930(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = (void *)piVar1[1];
  local_38 = (int)local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_100084e4(local_20,(int)((double)local_38 / (double)local_3c));
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_10038040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10008434(this_00,(int)(local_28));
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_10008384(*(int*)((char*)&local_28 + 4),(int)local_28);
  lVar5 = 0;
  local_14 = (void *)lVar5;
  FUN_100076e0((int)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((int)local_8 + 8) = local_2c + 0x80;
  FUN_10007340(local_8);
  return;
}





void FUN_100076e0(int param_1,int param_2,int param_3,int param_4)

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
GetUnitInfo(DAT_1003e308,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_1003e304,DAT_1003e308,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





void  FUN_100077e0(int param_1)

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





void  FUN_10007880(int param_1)

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





int  FUN_100078f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





void  FUN_10007930(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10007a15;
  return;
}





void  FUN_10007a60(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10007c90(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_1003e30c,local_8,DAT_1003bd70);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      FUN_10007c00(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_1003bd74,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_10007ba0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10007be4;
  return;
}





void  FUN_10007c00(int param_1)

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





void  FUN_10007c90(int param_1)

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
FUN_10007d00(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((int)this_ptr + 6) = param_1;
  *(int *)((int)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_10004c80(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10007d78;
  return;
}





void 
FUN_10007da0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  RegisterZone((int)local_8 + 0x1e,param_2);
  FUN_10007d00(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10007e22;
  return;
}





void  FUN_10007e50(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((int)local_8 + 0x1e,DAT_1003e310,(int)local_8 + 0x16,300);
  FUN_10007d00(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10007ee0;
  return;
}





void  FUN_10007f10(char *param_1)

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
      FUN_10008050(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10008120(local_8);
      SetTrigg(local_8[2],1);
    }
  }
  local_8 = (char *)0x1000800b;
  return;
}





void  FUN_10008050(char *param_1)

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
  local_8 = (char *)0x100080ea;
  return;
}





void  FUN_10008120(char *param_1)

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
  local_8 = (char *)0x100081ba;
  return;
}





void FUN_10008370(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10009c88((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000838d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10008420(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10009c88((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000843d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_100084d0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10009c88((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_100084ed((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_10008570(void)

{
  FUN_100085b0();
  return;
}





void FUN_100085a0(void)

{
  return;
}





void FUN_100085b0(void)

{
  return;
}





int __cdecl FUN_10008600(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_1003e32c;
  DAT_1003e32c = param_1;
  return uVar1;
}





void __cdecl FUN_10008650(void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000a6d0(9);
    if (((((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_10009390(2,0x100383fc,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000b260(param_1,*(int *)((int)param_1 + -0xc));
    FUN_1000a770(9);
  }
  return;
}





void __cdecl FUN_10008700(unsigned int param_1)

{
  FUN_1000a800(param_1,1);
  return;
}





int __cdecl
FUN_10008910(int *param_1,int param_2,int param_3,int param_4,
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
  
  local_28 = FUN_100089e0;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1000d4d0();
  ((int(*)())pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
  }
  return 0;
}





int __cdecl FUN_10008a70(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

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
      FUN_1000d750();
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
    FUN_1000d750();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_10008bd6(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003bdc4 = *(int *)(unaff_EBP + 8);
  DAT_1003bdc0 = in_EAX;
  DAT_1003bdc8 = unaff_EBP;
  return;
}





int __cdecl FUN_10008bf0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_1000d990();
  uVar1 = FUN_1000b6a0((int)DAT_1003fe98,2);
  if (uVar1 < (unsigned int)((int)DAT_1003fe94 + (4 - (int)DAT_1003fe98))) {
    iVar5 = 0x68;
    pcVar4 = "onexit.c";
    uVar1 = 2;
    iVar2 = FUN_1000b6a0((int)DAT_1003fe98,2);
    piVar3 = FUN_1000ac60(DAT_1003fe98,iVar2 + 0x10,uVar1,(int)pcVar4,iVar5);
    if (piVar3 == (int *)0x0) {
      FUN_1000d9a0();
      return 0;
    }
    DAT_1003fe94 = piVar3 + ((int)DAT_1003fe94 - (int)DAT_1003fe98 >> 2);
    DAT_1003fe98 = piVar3;
  }
  *DAT_1003fe94 = param_1;
  DAT_1003fe94 = DAT_1003fe94 + 1;
  FUN_1000d9a0();
  return param_1;
}





int __cdecl FUN_10008cb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10008bf0(param_1);
  return (iVar1 != 0) - 1;
}





void __cdecl FUN_10008d20(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000d4d0();
  pDVar1[5] = param_1;
  return;
}





int __cdecl FUN_10008f00(char *param_1,byte *param_2)

{
  void *pcVar1;
  int iVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_10009390(2,0x1003844c,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_10009390(2,0x1003844c,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000dad0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
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
  uStack_8 = 0x1000151f;
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
  uStack_8 = 0x1000165e;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
