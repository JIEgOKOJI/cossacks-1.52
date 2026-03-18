#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
long long DAT_10039040 = 0;
long long DAT_1003904c = 0;
long long DAT_10039050 = 0;
char DAT_10039194[] = "A%d";
char DAT_10039198[] = "Dip4";
char DAT_100391a0[] = "Dip3";
char DAT_100391a8[] = "Dip2";
char DAT_100391b0[] = "Dip1";
char DAT_10039218[] = "Z15";
char DAT_1003921c[] = "Z10";
char DAT_10039220[] = "Z5";
char DAT_10039224[] = "Z14";
char DAT_10039228[] = "Z9";
char DAT_1003922c[] = "Z4";
char DAT_10039230[] = "Z13";
char DAT_10039234[] = "Z8";
char DAT_10039238[] = "Z3";
char DAT_1003923c[] = "Z12";
char DAT_10039240[] = "Z7";
char DAT_10039244[] = "Z2";
char DAT_10039248[] = "Z11";
char DAT_1003924c[] = "Z6";
char DAT_10039250[] = "Z1";
long long DAT_10039280 = 0;
long long DAT_10039290 = 0;
long long DAT_100392a0 = 0;
long long DAT_1003cd50 = 0;
int DAT_1003cdb0 = 4;
int DAT_1003cdb4 = 800;
int DAT_1003cdb8 = 2;
int DAT_1003ce00 = 0;
int DAT_1003ce04 = 0;
int DAT_1003ce08 = 0;
long long DAT_1003ed00 = 0;
long long DAT_1003ed04 = 0;
long long DAT_1003ed08 = 0;
long long DAT_1003ed18 = 0;
int DAT_1003ed40 = 0;
long long DAT_1003ed50 = 0;
long long DAT_1003ed58 = 0;
long long DAT_1003ed60 = 0;
unsigned char DAT_1003ed68[136] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1003edf0 = 0;
long long DAT_1003ee00 = 0;
long long DAT_1003ee08 = 0;
int DAT_1003ee10 = 0;
int DAT_1003ee11 = 0;
long long DAT_1003ee18 = 0;
long long DAT_1003ee28 = 0;
long long DAT_1003ee30 = 0;
int DAT_1003ee38 = 0;
int DAT_1003ee39 = 0;
long long DAT_1003ee40 = 0;
long long DAT_1003ee50 = 0;
long long DAT_1003ee58 = 0;
int DAT_1003ee60 = 0;
int DAT_1003ee61 = 0;
long long DAT_1003ee68 = 0;
long long DAT_1003ee78 = 0;
long long DAT_1003ee80 = 0;
int DAT_1003ee88 = 0;
int DAT_1003ee89 = 0;
long long DAT_1003ee90 = 0;
long long DAT_1003ee98 = 0;
long long DAT_1003eea0 = 0;
long long DAT_1003eea8 = 0;
long long DAT_1003eeb0 = 0;
long long DAT_1003eeb8 = 0;
long long DAT_1003eec0 = 0;
long long DAT_1003eec8 = 0;
long long DAT_1003eed0 = 0;
long long DAT_1003eed8 = 0;
long long DAT_1003eee0 = 0;
long long DAT_1003eee8 = 0;
long long DAT_1003eef0 = 0;
long long DAT_1003eef8 = 0;
long long DAT_1003ef00 = 0;
long long DAT_1003ef08 = 0;
long long DAT_1003ef10 = 0;
long long DAT_1003ef18 = 0;
long long DAT_1003ef20 = 0;
long long DAT_1003ef28 = 0;
long long DAT_1003ef38 = 0;
long long DAT_1003ef48 = 0;
long long DAT_1003efa8 = 0;
int DAT_1003efc0 = 0;
long long DAT_1003efc8 = 0;
long long DAT_1003efd0 = 0;
int DAT_1003efd8 = 0;
long long DAT_1003efe0 = 0;
int DAT_1003efec = 0;
int DAT_1003f078 = 0;
int DAT_1003f0c8 = 0;
int DAT_1003f0cc = 0;
int DAT_1003f0d0 = 0;
int DAT_1003f0d4 = 0;
int DAT_1003f0d8 = 0;
int DAT_1003f0dc = 0;
int DAT_1003f0e0 = 0;
int DAT_1003f0e4 = 0;
int DAT_1003f100 = 0;
long long DAT_1003f104 = 0;
int *DAT_10040c54 = 0;
int DAT_10040c58 = 0;
int DAT_10039040_ovl = 776530087;
int DAT_1003904c_ovl = 1065353216;
int DAT_10039050_ovl = 1120403456;
int DAT_10039280_ovl = 776530087;
int DAT_10039290_ovl = 1202590843;
int DAT_100392a0_ovl = 776530087;
int DAT_1003ed00_ovl = 0;
int DAT_1003ed04_ovl = 0;

/* Stubs for missing internal functions */
int FUN_100094b4() { return 0; }
int FUN_100094bd() { return 0; }
int FUN_10009564() { return 0; }
int FUN_1000956d() { return 0; }
int FUN_10009614() { return 0; }
int FUN_1000961d() { return 0; }
int FUN_10009b10() { return 0; }
int FUN_10009fa0() { return 0; }
int FUN_1000a4c0() { return 0; }
int FUN_1000adb8() { return 0; }
int FUN_1000b800() { return 0; }
int FUN_1000b8a0() { return 0; }
int FUN_1000b930() { return 0; }
int FUN_1000bd90() { return 0; }
int FUN_1000c390() { return 0; }
int FUN_1000c7d0() { return 0; }
int FUN_1000e600() { return 0; }
int FUN_1000e880() { return 0; }
int FUN_1000eac0() { return 0; }
int FUN_1000ead0() { return 0; }
int FUN_1000eb10() { return 0; }


/* Forward declarations */
void FUN_10001760(int param_1,char param_2,char param_3);
void FUN_10001820(int param_1,char param_2);
void FUN_100018e0(int param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_10001a00(char *param_1);
char * 
FUN_10002200(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void 
FUN_10002290(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void  FUN_100023b0(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
void  FUN_10002500(int param_1);
void FUN_10002580(unsigned int param_1);
void  FUN_100025f0(int param_1);
unsigned int *  FUN_10002650(void *this_ptr,unsigned int *param_1,byte param_2);
void  FUN_10002700(void *this_ptr,int param_1,char param_2);
int FUN_10002860(char param_1);
void FUN_100028f0(void);
void FUN_10002930(void);
void FUN_10002980(void);
void FUN_100029c0(void);
void FUN_10002a00(void);
void FUN_10002a50(void);
void FUN_10002ac0(int param_1,char param_2);
void FUN_10002f80(void);
void FUN_10002fc0(void);
void  FUN_10003000(int param_1);
void  FUN_10003060(int param_1);
void  FUN_100030f0(int param_1);
void FUN_10003710(void);
void FUN_10003e70(int param_1,int param_2,int param_3,char param_4);
void FUN_10003f70(int param_1);
void FUN_10004030(int param_1);
void FUN_100040b0(unsigned short *param_1,int param_2,char param_3);
void FUN_10004240(int param_1);
void FUN_100043d0(void *param_1,unsigned short *param_2);
void FUN_100045b0(int param_1);
void FUN_10004870(char param_1,int param_2,int param_3);
void FUN_10004a80(void);
void FUN_100056f0(int param_1);
void FUN_10005790(int param_1);
void FUN_10005830(void);
void  FUN_10005890(int param_1);
void  FUN_100058f0(int param_1);
void  FUN_10005960(int param_1);
void  FUN_100059c0(int param_1);
int  FUN_10005a20(int param_1);
void  FUN_10005a50(int param_1);
void  FUN_10005ab0(void *this_ptr,int param_1);
void  FUN_10005af0(void *this_ptr,int param_1);
void  FUN_10005b70(void *this_ptr,int param_1,int param_2);
void  FUN_10005c90(void *this_ptr,int param_1);
void  FUN_10005cd0(void *this_ptr,int param_1);
void  FUN_10005d10(int param_1);
void  FUN_10005dc0(void *this_ptr,int param_1);
void  FUN_10005e00(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005e60(void *this_ptr,int param_1);
void  FUN_10005f30(int param_1);
void  FUN_10005fc0(void *this_ptr,unsigned int param_1);
int  FUN_10006040(int param_1);
void  FUN_10006070(void *this_ptr,int param_1);
void  FUN_100060f0(void *this_ptr,int param_1);
void  FUN_10006160(int param_1);
void  FUN_100061d0(void *this_ptr,int param_1);
void  FUN_10006240(void *this_ptr,int param_1);
void  FUN_10006280(int param_1);
void  FUN_100062f0(void *param_1);
void  FUN_10006370(void *this_ptr,int param_1);
void  FUN_100063d0(void *param_1);
void  FUN_10006450(void *this_ptr,int param_1);
void  FUN_10006490(int param_1);
void  FUN_100064e0(int param_1);
void  FUN_10006530(void *this_ptr,int param_1,int param_2);
void  FUN_10006580(void *param_1);
void  FUN_10006870(void *param_1);
void  FUN_10006900(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006960(void *param_1);
void  FUN_100069e0(void *this_ptr,int param_1);
void FUN_10006a50(short *param_1);
void  FUN_10006af0(void *this_ptr,int param_1);
void  FUN_10006b30(void *this_ptr,int param_1);
void  FUN_10006b70(void *this_ptr,int param_1);
void  FUN_10006bb0(void *this_ptr,void *param_1);
int  FUN_10006c20(int param_1);
int  FUN_10006c60(int param_1);
void  FUN_10006c90(void *param_1);
int FUN_10006f20(void);
void  FUN_10006f50(void *this_ptr,int param_1,int param_2);
void  FUN_10006fc0(void *this_ptr,int param_1);
void  FUN_10007030(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100070d0(void *this_ptr,int param_1,int param_2);
int  FUN_10007220(int param_1);
void  FUN_10007260(int param_1);
void  FUN_100072d0(void *this_ptr,int param_1);
void  FUN_10007350(void *this_ptr,int param_1,int param_2);
BOOL  FUN_100073f0(int param_1);
void  FUN_10007440(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10007510(int param_1);
void  FUN_100075c0(int param_1);
void  FUN_10007660(int param_1);
void  FUN_100076e0(int param_1);
void FUN_100078f0(int param_1);
void FUN_10007920(int param_1,int param_2,int param_3);
void  FUN_100079a0(int param_1);
void  FUN_10007bd0(void *this_ptr,int *param_1);
void  FUN_10007d00(int param_1);
void  FUN_10007da0(int param_1);
int  FUN_10007e10(int param_1);
void  FUN_10007e50(void *this_ptr,int param_1);
void  FUN_10007eb0(void *param_1);
void  FUN_100080c0(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_10008250(int param_1,int param_2,int param_3,int param_4);
void  FUN_10008350(int param_1);
void  FUN_100083f0(int param_1);
int  FUN_10008460(int param_1);
void  FUN_100084a0(void *this_ptr,int *param_1);
void  FUN_100085d0(int param_1);
void  FUN_10008710(void *this_ptr,int param_1);
void  FUN_10008770(int param_1);
void  FUN_10008800(int param_1);
void 
FUN_10008870(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10008910(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_100089c0(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10008a80(char *param_1);
void  FUN_10008bc0(char *param_1);
void  FUN_10008c90(char *param_1);
int  FUN_10008d60(int param_1);
void  FUN_10008da0(void *this_ptr,int param_1);
void  FUN_10008e00(void *this_ptr,int param_1);
void  FUN_10008e80(void *this_ptr,int param_1);
void  FUN_10008f70(void *this_ptr,int param_1,int param_2);
int  FUN_10009000(int param_1);
void 
FUN_10009040(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5);
void  FUN_10009110(int param_1);
void  FUN_10009250(int param_1);
void FUN_100094a0(void);
void FUN_10009550(void);
void FUN_10009600(void);
void FUN_100096a0(void);
void FUN_100096d0(void);
void FUN_100096e0(void);
int FUN_10009730(int param_1);
void FUN_10009780(void *param_1);
void FUN_10009830(void *param_1);
int FUN_10009a40(int *param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
int FUN_10009ba0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10009d06(void);
int FUN_10009d20(int param_1);
int FUN_10009de0(int param_1);
int FUN_10009e50(char *param_1,byte *param_2);
void FUN_10009f50(DWORD param_1);

void OnInit();
void ProcessScenary();


void __cdecl FUN_10001760(int param_1,char param_2,char param_3)

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
  uStack_8 = 0x100017ef;
  return;
}





void __cdecl FUN_10001820(int param_1,char param_2)

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
  uStack_8 = 0x100018ab;
  return;
}







void __cdecl FUN_100018e0(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  fVar3 = (long double)FUN_10009614(local_2c,(int)((double)(int)local_2c / (double)local_30));
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_10039040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_10009564(*(int*)((char*)&local_1c + 4),(int)(local_1c));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_100094b4((void *)local_1c,(int)(void *)local_1c);
  lVar4 = 0;
  local_24 = (int)lVar4;
  return;
}





void  FUN_10001a00(char *param_1)

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
  FUN_10002290(param_1,8,3,0x15,0,200,3,0x50);
  FUN_10002290(local_8,8,3,0x18,0,200,3,0x50);
  FUN_10002290(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002290(local_8,8,2,8,0,0x5a,3,0x32);
  FUN_10002290(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002290(local_8,8,2,0x16,0,0x1e,3,0x32);
  FUN_10002290(local_8,8,3,0x17,0,1000,3,0x5a);
  FUN_10002290(local_8,8,3,0xf,0,1000,3,0x5a);
  FUN_10002290(local_8,0x15,2,0xf,0,300,3,0x1e);
  FUN_10002290(local_8,0x15,2,0x14,0,300,3,0x1e);
  FUN_10002290(local_8,0x15,2,0x15,0,300,3,0x1e);
  FUN_10002290(local_8,0x15,2,0x18,0,300,3,0x1e);
  FUN_10002290(local_8,0x15,2,0x16,0,300,3,0x1e);
  FUN_10002290(local_8,0x15,2,0xb,0,300,3,0x1e);
  FUN_10002290(local_8,0x15,2,8,0,300,3,0x1e);
  FUN_10002290(local_8,0x15,3,0x17,0,1000,3,0x5a);
  FUN_10002290(local_8,0x15,2,10,0,500,3,0x1e);
  FUN_10002290(local_8,0x15,1,0x16,1,0x14,4,0x50);
  FUN_10002290(local_8,0x15,1,0x14,1,10,4,0x50);
  FUN_10002290(local_8,0x15,2,8,1,0x1e,4,0x50);
  FUN_10002290(local_8,0x15,2,0x15,1,100,4,0x50);
  FUN_10002290(local_8,0x14,2,0x14,0,500,3,0x50);
  FUN_10002290(local_8,0x14,2,0x16,0,500,3,0x50);
  FUN_10002290(local_8,0x14,2,0x15,0,500,3,0x50);
  FUN_10002290(local_8,0x14,3,0x17,0,1000,3,0x5a);
  FUN_10002290(local_8,0xf,2,0x15,0,300,3,0x50);
  FUN_10002290(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002290(local_8,0xf,2,8,0,300,3,0x32);
  FUN_10002290(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002290(local_8,0xf,2,0x16,0,300,3,0x32);
  FUN_10002290(local_8,0xf,2,0x17,0,300,3,0x5a);
  FUN_10002290(local_8,0xf,2,0xf,0,300,3,0x5a);
  FUN_10002290(local_8,0xf,2,0x18,0,300,3,0x1e);
  FUN_10002290(local_8,0xb,2,0x15,0,300,3,0x50);
  FUN_10002290(local_8,0xb,2,0x18,0,300,3,0x50);
  FUN_10002290(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002290(local_8,0xb,2,8,0,300,3,0x32);
  FUN_10002290(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002290(local_8,0xb,2,0x16,0,300,3,0x32);
  FUN_10002290(local_8,0xb,2,0x17,0,300,3,0x5a);
  FUN_10002290(local_8,0xb,2,0xf,0,300,3,0x5a);
  FUN_10002290(local_8,0xb,2,0xb,0,300,3,0x1e);
  FUN_10002290(local_8,0xb,2,10,0,500,3,0x1e);
  FUN_10002290(local_8,0x18,2,0x15,0,300,3,0x50);
  FUN_10002290(local_8,0x18,2,0x18,0,300,3,0x50);
  FUN_10002290(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002290(local_8,0x18,2,8,0,300,3,0x32);
  FUN_10002290(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002290(local_8,0x18,2,0x16,0,300,3,0x32);
  FUN_10002290(local_8,0x18,2,0x17,0,300,3,0x5a);
  FUN_10002290(local_8,0x18,2,0xf,0,300,3,0x5a);
  FUN_10002290(local_8,0x16,2,0x15,0,500,3,0x50);
  FUN_10002290(local_8,0x16,2,0x18,0,500,3,0x50);
  FUN_10002290(local_8,0x16,2,0x14,0,500,3,0x32);
  FUN_10002290(local_8,0x16,2,8,0,500,3,0x32);
  FUN_10002290(local_8,0x16,2,0xb,0,500,3,0x32);
  FUN_10002290(local_8,0x16,2,0x16,0,500,3,0x32);
  FUN_10002290(local_8,0x16,2,0x17,0,500,3,0x5a);
  FUN_10002290(local_8,0x16,2,0xf,0,500,3,0x5a);
  FUN_10002290(local_8,0x16,2,0xb,0,500,3,0x1e);
  FUN_10002290(local_8,0x16,2,10,0,500,2,0x1e);
  FUN_10002290(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (char *)0x1000205c;
  return;
}





char * 
FUN_10002200(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
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
FUN_10002290(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
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
    FUN_10009830((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = FUN_10002200(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(char **)((int)local_14 + 8) = local_20;
  }
  else {
    FUN_10002290(*(void **)((int)this_ptr + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  return;
}





void  FUN_100023b0(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
LAB_1000245a:
          local_c = (unsigned int)*(byte *)((int)this_ptr + 5) * 100 + (unsigned int)*(byte *)((int)this_ptr + 6);
          goto LAB_1000249c;
        }
        pvVar1 = (void *)(unsigned int)*(byte *)((int)this_ptr + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(unsigned int)*(unsigned short *)((int)this_ptr + 3);
          if (pvVar4 < pvVar1) goto LAB_1000245a;
        }
      }
    }
  }
  if (*(int *)((int)this_ptr + 8) != 0) {
    uVar2 = (int)(short)param_4;
    local_8 = this_ptr;
    FUN_100023b0(*(void **)((int)this_ptr + 8),
                                 (int)(char)param_1,
                                 (int)(char)param_2,
                                 (int)(char)param_3,uVar2);
  }
LAB_1000249c:
  local_8 = (void *)0x100024ac;
  return;
}





void  FUN_10002500(int param_1)

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
      FUN_10002580(1);
    }
  }
  return;
}





void FUN_10002580(unsigned int param_1)

{
  void *in_ECX;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = in_ECX;
  FUN_10002500((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10009780(local_8);
  }
  local_8 = (void *)0x100025cb;
  return;
}





void  FUN_100025f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1 + 0x20);
  return;
}





unsigned int *  FUN_10002650(void *this_ptr,unsigned int *param_1,byte param_2)

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





void  FUN_10002700(void *this_ptr,int param_1,char param_2)

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
    uVar2 = FUN_10002860(local_2a);
    local_40 = (int *)((int)local_8 + (uVar2 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x1000280c;
  return;
}





int FUN_10002860(char param_1)

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
  return (int)local_c;
}





void FUN_100028f0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002930();
  uStack_8 = 0x1000291a;
  return;
}





void FUN_10002930(void)

{
  int *puVar1;
  int iVar2;
  int *puVar3;
  char local_2c [36];
  int uStack_8;
FUN_100025f0((int)local_2c);
  puVar3 = &DAT_1003ed18;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x1000296b;
  return;
}





void FUN_10002980(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100029c0();
  FUN_10002a00();
  uStack_8 = 0x100029af;
  return;
}





void FUN_100029c0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001a00(&DAT_1003ed08);
  uStack_8 = 0x100029ef;
  return;
}





void FUN_10002a00(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10009de0(0x10002a50);
  uStack_8 = 0x10002a32;
  return;
}





void FUN_10002a50(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_1003ed40 & 1) == 0) {
    DAT_1003ed40 = DAT_1003ed40 | 1;
    FUN_10002500(0x1003ed08);
  }
  uStack_8 = 0x10002a9c;
  return;
}







void FUN_10002ac0(int param_1,char param_2)

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
local_c = local_c & 0xffff0000;
  local_10 = GetTotalAmount0(param_1);
  GetUnitInfo(param_1,0,local_3c);
  UnitsCenter(local_8,param_1,500);
  FUN_10002700(&DAT_1003ed18,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)((long long *)&DAT_1003ed18)[local_40]) {
      uVar2 = (((long long *)&DAT_1003ed18)[local_40] * 100) / local_10;
      FUN_100023b0(&DAT_1003ed08,(int)local_2a,1,
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
    FUN_10002700(&DAT_1003ed18,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)((long long *)&DAT_1003ed18)[local_48]) {
        uVar2 = (((long long *)&DAT_1003ed18)[local_48] * 100) / local_10;
        FUN_100023b0(&DAT_1003ed08,(int)local_2a,2,
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
    FUN_10002700(&DAT_1003ed18,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)((long long *)&DAT_1003ed18)[local_50]) {
        local_54 = ((float)(int)((long long *)&DAT_1003ed18)[local_50] * DAT_10039050_ovl) / (float)local_10;
        if (local_54 < DAT_1003904c_ovl) {
          local_54 = 1.0;
        }
        lVar5 = 0;
        FUN_100023b0(&DAT_1003ed08,(int)local_2a,
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
  return;
}





void FUN_10002f80(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002fc0();
  uStack_8 = 0x10002faa;
  return;
}







void FUN_10002fc0(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
DAT_1003ed00_ovl = local_c;
  DAT_1003ed04_ovl = local_8;
  return;
}





void  FUN_10003000(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10003060(int param_1)

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





void  FUN_100030f0(int param_1)

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
    FUN_10003060(local_8);
    if (cVar1 == '\0') {
      iVar3 = GetUnitsAmount0(local_8 + 8,*(char *)(local_8 + 0x1e));
      if (iVar3 < 4) {
        SelectUnits(local_8,0);
        SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,
                       *(char *)(local_8 + 0x18),0);
        goto LAB_10003562;
      }
    }
    FUN_10002ac0(local_8,*(char *)(local_8 + 0x1e));
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
      FUN_10001760(local_8 + 8,*(char *)(local_8 + 0x1d),0x14);
      local_10 = local_28;
      if ((int)local_28 == 0) {
        FUN_10001760(local_8 + 8,*(char *)(local_8 + 0x1d),0xf);
        local_10 = local_30;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        FUN_10001760(local_8 + 8,*(char *)(local_8 + 0x1d),0xb);
        local_10 = local_38;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        FUN_10001760(local_8 + 8,*(char *)(local_8 + 0x1d),0x16);
        local_10 = local_40;
      }
      FUN_10001820(local_8 + 8,*(char *)(local_8 + 0x1e));
      local_18 = local_48;
      FUN_100018e0((int)local_10,*(int*)((char*)&local_10 + 4),(int)local_48,
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
      FUN_10001820(local_8 + 8,0);
      local_18 = local_58;
      FUN_100018e0((int)local_10,*(int*)((char*)&local_10 + 4),(int)local_58,
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
LAB_10003562:
  return;
}





void FUN_10003710(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int local_50 [16];
  char local_10 [8];
  int local_8;
DVar1 = FUN_10009fa0((int *)0x0);
  FUN_10009f50(DVar1);
  SetPlayerName(0,"UKRAINE");
  SetPlayerName(1,"BANDITS");
  SetPlayerName(2,"BANDITS");
  SetPlayerName(3,"BANDITS");
  SetPlayerName(4,"BANDITS");
  RegisterZone(&DAT_1003ee90,DAT_10039250);
  RegisterZone(&DAT_1003eeb8,DAT_1003924c);
  RegisterZone(&DAT_1003ef18,DAT_10039248);
  RegisterZone(&DAT_1003ee98,DAT_10039244);
  RegisterZone(&DAT_1003eec0,DAT_10039240);
  RegisterZone(&DAT_1003ef20,DAT_1003923c);
  RegisterZone(&DAT_1003eea0,DAT_10039238);
  RegisterZone(&DAT_1003eec8,DAT_10039234);
  RegisterZone(&DAT_1003ef28,DAT_10039230);
  RegisterZone(&DAT_1003eea8,DAT_1003922c);
  RegisterZone(&DAT_1003eed0,DAT_10039228);
  RegisterZone(&DAT_1003ef38,DAT_10039224);
  RegisterZone(&DAT_1003eeb0,DAT_10039220);
  RegisterZone(&DAT_1003ef10,DAT_1003921c);
  RegisterZone(&DAT_1003ef48,DAT_10039218);
  for (local_8 = 0; local_8 < 0x11; local_8 = local_8 + 1) {
    RegisterUnitType(((unsigned char *)&DAT_1003ed68) + local_8 * 8,(((int*)0))[local_8]);
  }
  RegisterUnitType(&DAT_1003ed60,"Strelec_Algir_DIP(UA)");
  RegisterUnitType(&DAT_1003efe0,"Rundashir_Avstria_DIP(UA)");
  RegisterUnitType(&DAT_1003efd0,"Pehota_turki_DIP(UA)");
  RegisterFormation(&DAT_1003efc8,"#ODIN");
  RegisterDynGroup(&DAT_1003ef08);
  RegisterDynGroup(&DAT_1003ed50);
  RegisterDynGroup(&DAT_1003ed58);
  RegisterVar(&DAT_1003ef08,8);
  RegisterVar(&DAT_1003ed50,8);
  RegisterVar(&DAT_1003ed58,8);
  RegisterUnits(&DAT_1003eee0,DAT_100391b0);
  RegisterUnits(&DAT_1003eee8,DAT_100391a8);
  RegisterUnits(&DAT_1003eef0,DAT_100391a0);
  RegisterUnits(&DAT_1003eef8,DAT_10039198);
  for (local_8 = 0; local_8 < 0x13; local_8 = local_8 + 1) {
    FUN_10009e50(local_10,DAT_10039194);
  }
  RegisterDynGroup(&DAT_1003ef00);
  RegisterVar(&DAT_1003ef00,8);
  RegisterDynGroup(&DAT_1003edf0);
  DAT_1003ee10 = 1;
  RegisterDynGroup(&DAT_1003ee18);
  DAT_1003ee38 = 2;
  RegisterDynGroup(&DAT_1003ee40);
  DAT_1003ee60 = 3;
  RegisterDynGroup(&DAT_1003ee68);
  DAT_1003ee88 = 4;
  RegisterDynGroup(&DAT_1003ee08);
  RegisterDynGroup(&DAT_1003ee30);
  RegisterDynGroup(&DAT_1003ee58);
  RegisterDynGroup(&DAT_1003ee80);
  RegisterVar(&DAT_1003efc0,4);
  RegisterVar(&DAT_1003efd8,4);
  RegisterVar(&DAT_1003edf0,0x26);
  RegisterVar(&DAT_1003ee18,0x26);
  RegisterVar(&DAT_1003ee40,0x26);
  RegisterVar(&DAT_1003ee68,0x26);
  return;
}





void __cdecl FUN_10003e70(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
  
  iVar1 = -0x33333334;
local_8 = 0;
  while (local_8 < param_3) {
    CreateObject0(param_1,&DAT_1003efc8,&DAT_1003ed60,(int)param_4,
                  param_2,0);
    CreateObject0(param_1,&DAT_1003efc8,&DAT_1003efe0,param_4,param_2,0);
    CreateObject0(param_1,&DAT_1003efc8,&DAT_1003efd0,param_4,param_2,0);
    iVar1 = local_8 + 1;
    local_8 = iVar1;
  }
  return;
}





void __cdecl FUN_10003f70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
ClearSelection(0);
  for (local_8 = 1; local_8 < 0x11; local_8 = local_8 + 1) {
    SelectUnitsType(((unsigned char *)&DAT_1003ed68) + local_8 * 8,0,1);
  }
  SaveSelectedUnits(0,param_1,0);
  return;
}





void __cdecl FUN_10004030(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SelectUnitsType(&DAT_1003ed68,0,0);
  SaveSelectedUnits(0,param_1,0);
  uStack_8 = 0x1000408a;
  return;
}





void __cdecl FUN_100040b0(unsigned short *param_1,int param_2,char param_3)

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
    FUN_10003f70(param_2);
  }
  else {
    FUN_10004030(param_2);
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
      FUN_10005830();
      if (local_54 < local_10) {
        local_c = local_44[0] & 0xffff;
        local_10 = local_54;
      }
    }
    FUN_10005790(param_2);
    InsertUnitToGroup(0,param_2,local_c);
  }
  return;
}





void __cdecl FUN_10004240(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
SelectUnits(param_1,0);
  SelCenter(param_1 + 8,*(char *)(param_1 + 0x20),600);
  FUN_100040b0((unsigned short *)(param_1 + 8),&DAT_1003ed58,'\0');
  UnitsCenter(param_1 + 0x10,&DAT_1003ed58,300);
  local_8 = GetTopDst(param_1 + 0x10,param_1 + 8);
  FUN_10005830();
  if (local_8 * 0x2c - local_c != 0 && local_c <= local_8 * 0x2c) {
    FUN_100040b0((unsigned short *)(param_1 + 8),&DAT_1003ed58,'\x01');
  }
  SelAttackGroup(*(char *)(param_1 + 0x20),&DAT_1003ed58);
  return;
}







void __cdecl FUN_100043d0(void *param_1,unsigned short *param_2)

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
  local_10 = (unsigned int)*(unsigned short *)((int)param_1 + 0x10);
  local_14 = (void *)(unsigned int)*(unsigned short *)((int)param_1 + 0x12);
  local_28 = (int)local_14 - local_c;
  local_2c = local_10 - local_8;
  fVar3 = (long double)FUN_10009614(local_14,(int)((double)local_28 / (double)local_2c));
  local_1c = (double)fVar3;
  if ((int)(local_10 - local_8) < 0) {
    local_1c = DAT_10039040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_34 = local_1c - DAT_100392a0_ovl;
  local_38 = rand();
  local_38 = local_38 % 0x65;
  local_1c = (double)local_38 * DAT_10039290_ovl * DAT_10039280_ovl + local_34;
  FUN_10009564((void *)0x65,(int)(local_1c));
  lVar4 = 0;
  *(short *)((int)param_1 + 0x10) = (short)lVar4;
  FUN_100094b4(param_1,(*(int*)&local_1c));
  lVar4 = 0;
  *(short *)((int)param_1 + 0x12) = (short)lVar4;
  local_24 = local_20 + 0x80;
  *(int *)((int)param_1 + 0x22) = local_24;
  SelectUnits(param_1,0);
  SelSendAndKill();
  return;
}





void __cdecl FUN_100045b0(int param_1)

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
        FUN_10004240(param_1);
      }
    }
    else {
      SelectUnitsInZone(param_1 + 8,0,0);
      SelCenter(&DAT_1003eed8,0,100);
      SaveSelectedUnits(0,param_1 + 0x18,0);
      local_8 = GetTopDst(param_1 + 8,&DAT_1003eed8);
      FUN_10005830();
      if (local_8 * 0x23 - local_c != 0 && local_c <= local_8 * 0x23) {
        FUN_100040b0((unsigned short *)(param_1 + 8),param_1 + 0x18,'\x01');
      }
      SelSendAndKill(*(char *)(param_1 + 0x20),param_1 + 8,*(char *)(param_1 + 0x22),0);
      SelAttackGroup(*(char *)(param_1 + 0x20),param_1 + 0x18);
    }
  }
  return;
}





void __cdecl FUN_10004870(char param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg((int)param_1);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(param_2,0);
    if (0 < iVar2) {
      FUN_10003e70(&DAT_1003ef08,param_3,DAT_1003efd8 + DAT_1003efc0 + 3 + DAT_1003efec,
                         param_1);
      SetTrigg(param_1,0);
    }
  }
  uVar1 = Trigg(param_1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(param_2,0);
    if (0 < iVar2) {
      SelectUnitsInZone(param_2,0,0);
      SaveSelectedUnits(0,&DAT_1003ef08,0);
      SelectUnitsInZone(param_2,param_1,0);
      SelAttackGroup(param_1,&DAT_1003ef08);
    }
  }
  uVar1 = Trigg(param_1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(param_2,0);
    if (iVar2 == 0) {
      SetTrigg(param_1,1);
    }
  }
  uStack_8 = 0x10004a11;
  return;
}





void FUN_10004a80(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  unsigned int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_1003efc0 = GetDiff(0);
    ChangeFriends(1,0x1e);
    ChangeFriends(2,0x1e);
    ChangeFriends(3,0x1e);
    ChangeFriends(4,0x1e);
    SetResource(0,3,DAT_1003efc0 * -3000 + 11000);
    SetResource(0,1,DAT_1003efc0 * -3000 + 11000);
    SetResource(0,0,DAT_1003efc0 * -30000 + 110000);
    SetResource(0,2,DAT_1003efc0 * -3000 + 11000);
    SetResource(0,5,DAT_1003efc0 * -3000 + 11000);
    SetResource(0,4,DAT_1003efc0 * -3000 + 11000);
    DAT_1003efd8 = -(4 - DAT_1003efc0);
    RunTimer(5,100);
    RunTimer(0x1e,0x32);
    SetTrigg(99,0);
  }
  uVar1 = TimerDoneFirst(0x1e);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE0");
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetAmountOfWarriors(0);
    DAT_1003efec = (iVar2 + -0x6b) / (7 - DAT_1003efc0);
    SaveSelectedUnits(0,&DAT_1003ef00,0);
    local_8 = local_8 & 0xffffff00;
    uVar1 = TimerIsEmpty(1);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_1003edf0);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_1003eee0);
        if (0 < iVar2) {
          FUN_10003e70(&DAT_1003ef08,&DAT_1003ee90,DAT_1003efd8 + DAT_1003efc0 + DAT_1003efec,
                             1);
          local_8 = (int)1;
          RunTimer(1,(4 - DAT_1003efc0) * 500);
        }
      }
    }
    uVar1 = TimerIsEmpty(2);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_1003ee18);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_1003eee8);
        if (0 < iVar2) {
          FUN_10003e70(&DAT_1003ef08,&DAT_1003ee98,DAT_1003efd8 + DAT_1003efc0 + DAT_1003efec,
                             2);
          local_8 = (int)1;
          RunTimer(2,(4 - DAT_1003efc0) * 500);
        }
      }
    }
    uVar1 = TimerIsEmpty(3);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_1003ee40);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_1003eef0);
        if (0 < iVar2) {
          FUN_10003e70(&DAT_1003ef08,&DAT_1003eea0,DAT_1003efd8 + DAT_1003efc0 + DAT_1003efec,
                             3);
          local_8 = (int)1;
          RunTimer(3,(4 - DAT_1003efc0) * 500);
        }
      }
    }
    uVar1 = TimerIsEmpty(4);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_1003ee68);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_1003eef8);
        if (0 < iVar2) {
          FUN_10003e70(&DAT_1003ef08,&DAT_1003eea8,DAT_1003efd8 + DAT_1003efc0 + DAT_1003efec,
                             4);
          local_8 = (int)1;
          RunTimer(4,(4 - DAT_1003efc0) * 500);
        }
      }
    }
    if ((local_8 & 0xff) != 0) {
      DAT_1003efd8 = DAT_1003efd8 + 1;
    }
    uVar1 = TimerDoneFirst(1);
    if ((uVar1 & 0xff) != 0) {
      SelectUnitsInZone(&DAT_1003eeb0,1,0);
      SelCenter(&DAT_1003ee00,DAT_1003ee10,800);
      SaveSelectedUnits(1,&DAT_1003edf0,0);
      FUN_100043d0(&DAT_1003edf0,(unsigned short *)&DAT_1003efa8);
      DAT_1003ee11 = 1;
      FreeTimer(1);
    }
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      SelectUnitsInZone(&DAT_1003eeb8,2,0);
      SelCenter(&DAT_1003ee28,DAT_1003ee38,800);
      SaveSelectedUnits(2,&DAT_1003ee18,0);
      FUN_100043d0(&DAT_1003ee18,(unsigned short *)&DAT_1003efa8);
      DAT_1003ee39 = 1;
      FreeTimer(2);
    }
    uVar1 = TimerDoneFirst(3);
    if ((uVar1 & 0xff) != 0) {
      SelectUnitsInZone(&DAT_1003eec0,3,0);
      SelCenter(&DAT_1003ee50,DAT_1003ee60,800);
      SaveSelectedUnits(3,&DAT_1003ee40,0);
      FUN_100043d0(&DAT_1003ee40,(unsigned short *)&DAT_1003efa8);
      DAT_1003ee61 = 1;
      FreeTimer(3);
    }
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) != 0) {
      SelectUnitsInZone(&DAT_1003eec8,4,0);
      SelCenter(&DAT_1003ee78,DAT_1003ee88,800);
      SaveSelectedUnits(4,&DAT_1003ee68,0);
      FUN_100043d0(&DAT_1003ee68,(unsigned short *)&DAT_1003efa8);
      DAT_1003ee89 = 1;
      FreeTimer(4);
    }
    uVar1 = TimerDoneFirst(5);
    if ((uVar1 & 0xff) != 0) {
      FUN_10003f70(&DAT_1003ed50);
      UnitsCenter(&DAT_1003efa8,&DAT_1003ed50,1000);
      FUN_100045b0(0x1003edf0);
      FUN_100045b0(0x1003ee18);
      FUN_100045b0(0x1003ee40);
      FUN_100045b0(0x1003ee68);
      uVar1 = NationIsErased(0);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(100,0);
        LooseGame();
      }
      iVar2 = GetTotalAmount0(&DAT_1003eee0);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_1003eee8);
        if (iVar2 < 1) {
          iVar2 = GetTotalAmount0(&DAT_1003eef0);
          if (iVar2 < 1) {
            iVar2 = GetTotalAmount0(&DAT_1003eef8);
            if (iVar2 < 1) {
              SetTrigg(100,0);
              ShowVictory();
            }
          }
        }
      }
      RunTimer(5,0xf);
    }
    FUN_10004870(1,&DAT_1003eeb0,&DAT_1003ee90);
    FUN_10004870(2,&DAT_1003eeb8,&DAT_1003ee98);
    FUN_10004870(3,&DAT_1003eec0,&DAT_1003eea0);
    FUN_10004870(4,&DAT_1003eec8,&DAT_1003eea8);
    ClearSelection(0);
    SelectUnits(&DAT_1003ef00,0);
  }
  return;
}





void __cdecl FUN_100056f0(int param_1)

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





void __cdecl FUN_10005790(int param_1)

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
  uStack_8 = 0x10005804;
  return;
}





void FUN_10005830(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x10005879;
  return;
}





void  FUN_10005890(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_100058f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005890(param_1);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}





void  FUN_10005960(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_100059c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_10005960(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10005a20(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10005a50(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10005ab0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_10005af0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((int)this_ptr + 8,*(int *)((int)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10005b48;
  return;
}





void  FUN_10005b70(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10005960(this_ptr);
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
  local_8 = (void *)0x10005c47;
  return;
}





void  FUN_10005c90(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10005cd0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10005d10(int param_1)

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





void  FUN_10005dc0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10005e00(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  *(int *)((int)this_ptr + 0x1c) = param_2;
  *(int *)((int)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10005e60(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10005f00;
  return;
}





void  FUN_10005f30(int param_1)

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





void  FUN_10005fc0(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005890(this_ptr);
  SelChangeNation(*(char *)((int)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((int)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10006018;
  return;
}





int  FUN_10006040(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10006070(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005890(this_ptr);
  SelSendTo(*(char *)((int)local_8 + 0x10),param_1,0,0);
  *(int *)((int)local_8 + 0x20) = param_1;
  local_8 = (void *)0x100060cc;
  return;
}





void  FUN_100060f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005890(this_ptr);
  Patrol(*(char *)((int)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x10006141;
  return;
}





void  FUN_10006160(int param_1)

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





void  FUN_100061d0(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10006223;
  return;
}





void  FUN_10006240(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10006280(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005890(param_1);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_100062f0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100059c0(param_1);
  if (cVar1 != '\0') {
    FUN_100063d0(local_8);
    FUN_10005f30(local_8);
    if (iVar2 < 10) {
      FUN_10006070(local_8,*(int *)((int)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x1000634f;
  return;
}





void  FUN_10006370(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x100063b6;
  return;
}





void  FUN_100063d0(void *param_1)

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
  FUN_10005af0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000642b;
  return;
}





void  FUN_10006450(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10006490(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100064e0(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_100064e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005a50(param_1);
  return;
}





void  FUN_10006530(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x24) = param_1;
  *(int *)((int)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10006580(void *param_1)

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
      (local_8 = param_1, FUN_100059c0(param_1), cVar1 != '\0')) &&
     (*(int *)((int)local_8 + 0x10) != 0)) {
    if (*(int *)((int)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_10005af0(local_8,600);
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
          FUN_10005fc0(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_100058f0((int)local_8);
        }
        AddResource(0,*(char *)((int)local_8 + 0x24),*(int *)((int)local_8 + 0x28));
        FUN_10006530(local_8,0,0);
      }
    }
    else {
      FUN_10005f30(local_8);
      if (iVar3 < 0x32) {
        FUN_10006870(local_8);
      }
      FUN_10006160((int)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_10006a50(*(short **)((int)local_8 + 0x20));
        FUN_10006bb0(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x100067b2;
  return;
}





void  FUN_10006870(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10005fc0(param_1,6);
  FUN_10005890(local_8);
  uVar5 = 0;
  uVar4 = 0;
  FUN_10005af0(local_8,100);
  SelSendTo(*(char *)((int)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10006280((int)local_8);
  local_8 = (void *)0x100068dc;
  return;
}





void  FUN_10006900(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005e00(this_ptr,param_1,param_2,param_3);
  *(char *)((int)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10006945;
  return;
}





void  FUN_10006960(void *param_1)

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
  FUN_10005af0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x100069bb;
  return;
}





void  FUN_100069e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 4) = param_1;
  ((long long *)&DAT_1003f078)[DAT_1003f0c8] = this_ptr;
  DAT_1003f0c8 = DAT_1003f0c8 + 1;
  return;
}





void __cdecl FUN_10006a50(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1003f078;
  for (local_c = 0; local_c < DAT_1003f0c8; local_c = local_c + 1) {
    psVar1 = (short *)FUN_10006c20(((long long *)&DAT_1003f078)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_1003f078)[local_c];
    }
  }
  return;
}





void  FUN_10006af0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 8) = param_1;
  return;
}





void  FUN_10006b30(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10006b70(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10006bb0(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10006530(param_1,*(int *)((int)this_ptr + 0xc),*(int *)((int)this_ptr + 0x10));
  FUN_10006070(param_1,*(int *)((int)local_8 + 8));
  local_8 = (void *)0x10006bff;
  return;
}





int  FUN_10006c20(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10006c60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10006c90(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10007260((int)param_1);
  if ((0 < iVar2) && (*(int *)((int)local_8 + 0x1c) + 1 < *(int *)((int)local_8 + 0x20))) {
    if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_100072d0(local_8,*(int *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10007920((int)local_8 + 0xc,
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_100072d0(local_8,*(int *)
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
  local_8 = (void *)0x10006e92;
  return;
}





int FUN_10006f20(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_10006f50(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10006fc0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10007030(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x100070a1;
  return;
}





void  FUN_100070d0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_10007260((int)this_ptr);
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
    FUN_10006f50(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x100071d1;
  return;
}





int  FUN_10007220(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10007260(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_100072d0(void *this_ptr,int param_1)

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
  FUN_10007260((int)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10007330;
  return;
}





void  FUN_10007350(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xc,param_1);
  FUN_100056f0((int)local_8 + 0xc);
  *(int *)((int)local_8 + 0x18) = uVar1;
  *(int *)((int)local_8 + 0x14) = 0;
  *(int *)((int)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x100073bf;
  return;
}





BOOL  FUN_100073f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10007440(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_100073f0((int)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x100074dd;
  return;
}





void  FUN_10007510(int param_1)

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





void  FUN_100075c0(int param_1)

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





void  FUN_10007660(int param_1)

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





void  FUN_100076e0(int param_1)

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
      FUN_100075c0(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_10007510(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10007660(local_8);
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





void __cdecl FUN_100078f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_1003f0cc = param_1;
  return;
}





void __cdecl FUN_10007920(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_1003f0cc != (void *)0x0) {
    bVar1 = FUN_100073f0((int)DAT_1003f0cc);
    if (bVar1) {
      FUN_10007440(DAT_1003f0cc,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10007979;
  return;
}





void  FUN_100079a0(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  FUN_10007da0(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      FUN_10007d00(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_1003f0d0,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_1003f0d4 == 0) {
        FUN_10007d00(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_1003f0d0,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_1003f0d4,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_1003f0d4,0);
      }
    }
    else {
      FUN_10007d00(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_1003f0d0,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10007bd0(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10007cb5;
  return;
}





void  FUN_10007d00(int param_1)

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





void  FUN_10007da0(int param_1)

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





int  FUN_10007e10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10007e50(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10007e97;
  return;
}





void  FUN_10007eb0(void *param_1)

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
  FUN_100083f0((int)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((int)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      FUN_100084a0(local_8,local_10);
      FUN_10008250((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((int)local_8 + 0xc) = 2;
      }
      else {
        FUN_10008350((int)local_8);
        if (cVar1 == '\0') {
          SelectUnits((int)local_8 + 0xd,0);
          SelSendTo(DAT_1003cdb0,(int)local_8 + 0x1d,*(char *)((int)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((int)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      FUN_100084a0(local_8,local_18);
      FUN_10008250((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((int)local_8 + 0xd,0);
        SelSendTo(DAT_1003cdb0,DAT_1003f0d8,*(char *)((int)local_8 + 8),0);
      }
      else {
        *(char *)((int)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x10008049;
  return;
}







void  FUN_100080c0(void *this_ptr,int param_1,int param_2,int param_3)

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
  FUN_100084a0(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = (void *)piVar1[1];
  local_38 = (int)local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_10009614(local_20,(int)((double)local_38 / (double)local_3c));
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_10039040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10009564(this_00,(int)(local_28));
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_100094b4(*(int*)((char*)&local_28 + 4),(int)local_28);
  lVar5 = 0;
  local_14 = (void *)lVar5;
  FUN_10008250((int)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((int)local_8 + 8) = local_2c + 0x80;
  FUN_10007eb0(local_8);
  return;
}





void FUN_10008250(int param_1,int param_2,int param_3,int param_4)

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
GetUnitInfo(DAT_1003f0dc,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_1003f0d8,DAT_1003f0dc,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





void  FUN_10008350(int param_1)

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





void  FUN_100083f0(int param_1)

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





int  FUN_10008460(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





void  FUN_100084a0(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10008585;
  return;
}





void  FUN_100085d0(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10008800(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_1003f0e0,local_8,DAT_1003cdb4);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      FUN_10008770(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_1003cdb8,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_10008710(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10008754;
  return;
}





void  FUN_10008770(int param_1)

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





void  FUN_10008800(int param_1)

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
FUN_10008870(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((int)this_ptr + 6) = param_1;
  *(int *)((int)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_100056f0(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x100088e8;
  return;
}





void 
FUN_10008910(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  RegisterZone((int)local_8 + 0x1e,param_2);
  FUN_10008870(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10008992;
  return;
}





void  FUN_100089c0(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((int)local_8 + 0x1e,DAT_1003f0e4,(int)local_8 + 0x16,300);
  FUN_10008870(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10008a50;
  return;
}





void  FUN_10008a80(char *param_1)

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
      FUN_10008bc0(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10008c90(local_8);
      SetTrigg(local_8[2],1);
    }
  }
  local_8 = (char *)0x10008b7b;
  return;
}





void  FUN_10008bc0(char *param_1)

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
  local_8 = (char *)0x10008c5a;
  return;
}





void  FUN_10008c90(char *param_1)

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
  local_8 = (char *)0x10008d2a;
  return;
}





int  FUN_10008d60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = 0xffffffff;
  return param_1;
}





void  FUN_10008da0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x30,param_1);
  local_8 = (void *)0x10008de7;
  return;
}





void  FUN_10008e00(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup((int)this_ptr + 0x30);
  RemoveGroup(param_1,(int)local_8 + 0x30);
  local_8 = (void *)0x10008e60;
  return;
}





void  FUN_10008e80(void *this_ptr,int param_1)

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
  local_8 = (unsigned short *)0x10008f32;
  return;
}





void  FUN_10008f70(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  FUN_10008e80(this_ptr,param_1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(param_2,param_1);
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10008fd8;
  return;
}





int  FUN_10009000(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0x30;
}





void 
FUN_10009040(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
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
  local_8 = (void *)0x100090d5;
  return;
}





void  FUN_10009110(int param_1)

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





void  FUN_10009250(int param_1)

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
    iVar1 = FUN_10009000(local_8);
    iVar1 = GetUnitsAmount1(local_14,iVar1);
    if (0 < iVar1) {
      FUN_10009110(local_8);
      local_c = 1;
    }
  }
  return;
}





void FUN_100094a0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000adb8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_100094bd((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10009550(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000adb8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000956d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10009600(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000adb8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000961d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_100096a0(void)

{
  FUN_100096e0();
  return;
}





void FUN_100096d0(void)

{
  return;
}





void FUN_100096e0(void)

{
  return;
}





int __cdecl FUN_10009730(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_1003f100;
  DAT_1003f100 = param_1;
  return uVar1;
}





void __cdecl FUN_10009780(void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000b800(9);
    if (((((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000a4c0(2,0x10039404,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000c390(param_1,*(int *)((int)param_1 + -0xc));
    FUN_1000b8a0(9);
  }
  return;
}





void __cdecl FUN_10009830(void *param_1)

{
  FUN_1000b930(param_1,1);
  return;
}





int __cdecl
FUN_10009a40(int *param_1,int param_2,int param_3,int param_4,
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
  
  local_28 = FUN_10009b10;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1000e600();
  ((int(*)())pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
  }
  return 0;
}





int __cdecl FUN_10009ba0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

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
      FUN_1000e880();
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
    FUN_1000e880();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_10009d06(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003ce04 = *(int *)(unaff_EBP + 8);
  DAT_1003ce00 = in_EAX;
  DAT_1003ce08 = unaff_EBP;
  return;
}





int __cdecl FUN_10009d20(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_1000eac0();
  uVar1 = FUN_1000c7d0((int)DAT_10040c58,2);
  if (uVar1 < (unsigned int)((int)DAT_10040c54 + (4 - (int)DAT_10040c58))) {
    iVar5 = 0x68;
    pcVar4 = "onexit.c";
    uVar1 = 2;
    iVar2 = FUN_1000c7d0((int)DAT_10040c58,2);
    piVar3 = FUN_1000bd90(DAT_10040c58,(void *)(iVar2 + 0x10),uVar1,(int)pcVar4,iVar5);
    if (piVar3 == (int *)0x0) {
      FUN_1000ead0();
      return 0;
    }
    DAT_10040c54 = piVar3 + ((int)DAT_10040c54 - (int)DAT_10040c58 >> 2);
    DAT_10040c58 = piVar3;
  }
  *DAT_10040c54 = param_1;
  DAT_10040c54 = DAT_10040c54 + 1;
  FUN_1000ead0();
  return param_1;
}





int __cdecl FUN_10009de0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009d20(param_1);
  return (iVar1 != 0) - 1;
}





int __cdecl FUN_10009e50(char *param_1,byte *param_2)

{
  void *pcVar1;
  int iVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_1000a4c0(2,0x10039454,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_1000a4c0(2,0x10039454,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000eb10(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}





void __cdecl FUN_10009f50(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000e600();
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
  uStack_8 = 0x100015cf;
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
  uStack_8 = 0x1000170e;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
