#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
long long DAT_10039040 = 0;
long long DAT_1003904c = 0;
long long DAT_10039050 = 0;
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
long long DAT_1003ece8 = 0;
long long DAT_1003ecf0 = 0;
long long DAT_1003ed40 = 0;
long long DAT_1003ed48 = 0;
int DAT_1003ed50 = 0;
int DAT_1003ed52 = 0;
long long DAT_1003ed54 = 0;
long long DAT_1003ed58 = 0;
long long DAT_1003ed60 = 0;
long long DAT_1003ed68 = 0;
long long DAT_1003ee18 = 0;
long long DAT_1003ee20 = 0;
long long DAT_1003ee28 = 0;
long long DAT_1003ee30 = 0;
unsigned char DAT_1003ee38[192] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1003ee48[192] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_1003f424 = 0;
int DAT_1003f474 = 0;
int DAT_1003f478 = 0;
int DAT_1003f47c = 0;
int DAT_1003f480 = 0;
int DAT_1003f484 = 0;
int DAT_1003f488 = 0;
int DAT_1003f48c = 0;
int DAT_1003f490 = 0;
int DAT_1003f4ac = 0;
long long DAT_1003f4b0 = 0;
int *DAT_10040ff4 = 0;
int DAT_10040ff8 = 0;
int DAT_10039040_ovl = 776530087;
int DAT_1003904c_ovl = 1065353216;
int DAT_10039050_ovl = 1120403456;
int DAT_1003ec88_ovl = 0;
int DAT_1003ec8c_ovl = 0;
int DAT_1003ed54_ovl = 0;

/* Stubs for missing internal functions */
int FUN_100093d4() { return 0; }
int FUN_100093dd() { return 0; }
int FUN_10009484() { return 0; }
int FUN_1000948d() { return 0; }
int FUN_10009534() { return 0; }
int FUN_1000953d() { return 0; }
int FUN_10009a30() { return 0; }
int FUN_10009dc0() { return 0; }
int FUN_1000a2e0() { return 0; }
int FUN_1000abd8() { return 0; }
int FUN_1000b620() { return 0; }
int FUN_1000b6c0() { return 0; }
int FUN_1000b750() { return 0; }
int FUN_1000bbb0() { return 0; }
int FUN_1000c1b0() { return 0; }
int FUN_1000c5f0() { return 0; }
int FUN_1000e420() { return 0; }
int FUN_1000e6a0() { return 0; }
int FUN_1000e8e0() { return 0; }
int FUN_1000e8f0() { return 0; }


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
void FUN_10003b20(int param_1);
void FUN_10003c90(int param_1);
void FUN_10003d30(int param_1);
void FUN_10003e00(int param_1);
void FUN_10003e60(int param_1);
void FUN_10003f90(int param_1);
void FUN_10004130(int param_1);
void FUN_10004290(int param_1);
void FUN_10004ca0(int param_1);
void FUN_10004d40(int param_1);
void FUN_10004de0(void);
void  FUN_10004e40(int param_1);
void  FUN_10004ea0(int param_1);
void  FUN_10004f10(int param_1);
void  FUN_10004f70(int param_1);
int  FUN_10004fd0(int param_1);
void  FUN_10005000(int param_1);
void  FUN_10005060(void *this_ptr,int param_1);
void  FUN_100050a0(void *this_ptr,int param_1);
void  FUN_10005120(void *this_ptr,int param_1,int param_2);
void  FUN_10005240(void *this_ptr,int param_1);
void  FUN_10005280(void *this_ptr,int param_1);
void  FUN_100052c0(int param_1);
void  FUN_10005370(void *this_ptr,int param_1);
void  FUN_100053b0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005410(void *this_ptr,int param_1);
void  FUN_100054e0(int param_1);
void  FUN_10005570(void *this_ptr,unsigned int param_1);
int  FUN_100055f0(int param_1);
void  FUN_10005620(void *this_ptr,int param_1);
void  FUN_100056a0(void *this_ptr,int param_1);
void  FUN_10005710(int param_1);
void  FUN_10005780(void *this_ptr,int param_1);
void  FUN_100057f0(void *this_ptr,int param_1);
void  FUN_10005830(int param_1);
void  FUN_100058a0(void *param_1);
void  FUN_10005920(void *this_ptr,int param_1);
void  FUN_10005980(void *param_1);
void  FUN_10005a00(void *this_ptr,int param_1);
void  FUN_10005a40(int param_1);
void  FUN_10005a90(int param_1);
void  FUN_10005ae0(void *this_ptr,int param_1,int param_2);
void  FUN_10005b30(void *param_1);
void  FUN_10005e20(void *param_1);
void  FUN_10005eb0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005f10(void *param_1);
void  FUN_10005f90(void *this_ptr,int param_1);
void FUN_10006000(short *param_1);
void  FUN_100060a0(void *this_ptr,int param_1);
void  FUN_100060e0(void *this_ptr,int param_1);
void  FUN_10006120(void *this_ptr,int param_1);
void  FUN_10006160(void *this_ptr,void *param_1);
int  FUN_100061d0(int param_1);
int  FUN_10006210(int param_1);
void  FUN_10006240(void *param_1);
int FUN_100064d0(void);
void  FUN_10006500(void *this_ptr,int param_1,int param_2);
void  FUN_10006570(void *this_ptr,int param_1);
void  FUN_100065e0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006680(void *this_ptr,int param_1,int param_2);
int  FUN_100067d0(int param_1);
void  FUN_10006810(int param_1);
void  FUN_10006880(void *this_ptr,int param_1);
void  FUN_10006900(void *this_ptr,int param_1,int param_2);
BOOL  FUN_100069a0(int param_1);
void  FUN_100069f0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006ac0(int param_1);
void  FUN_10006b70(int param_1);
void  FUN_10006c10(int param_1);
void  FUN_10006c90(int param_1);
void FUN_10006ea0(int param_1);
void FUN_10006ed0(int param_1,int param_2,int param_3);
void  FUN_10006f50(int param_1);
void  FUN_10007180(void *this_ptr,int *param_1);
void  FUN_100072b0(int param_1);
void  FUN_10007350(int param_1);
int  FUN_100073c0(int param_1);
void  FUN_10007400(void *this_ptr,int param_1);
void  FUN_10007460(void *param_1);
void  FUN_10007670(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_10007800(int param_1,int param_2,int param_3,int param_4);
void  FUN_10007900(int param_1);
void  FUN_100079a0(int param_1);
int  FUN_10007a10(int param_1);
void  FUN_10007a50(void *this_ptr,int *param_1);
void  FUN_10007b80(int param_1);
void  FUN_10007cc0(void *this_ptr,int param_1);
void  FUN_10007d20(int param_1);
void  FUN_10007db0(int param_1);
void 
FUN_10007e20(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10007ec0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10007f70(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10008030(char *param_1);
void  FUN_10008170(char *param_1);
void  FUN_10008240(char *param_1);
int  FUN_10008310(int param_1);
void  FUN_10008350(void *this_ptr,int param_1);
void  FUN_100083b0(void *this_ptr,int param_1);
void  FUN_10008430(void *this_ptr,int param_1);
void  FUN_10008520(void *this_ptr,int param_1,int param_2);
int  FUN_100085b0(int param_1);
void 
FUN_100085f0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5);
void  FUN_100086c0(int param_1);
void  FUN_10008800(int param_1);
int  FUN_100088c0(int param_1);
void  FUN_100088f0(void *this_ptr,int param_1);
void  FUN_10008970(void *param_1);
void  FUN_100089c0(void *this_ptr,unsigned int *param_1);
void  FUN_10008a40(void *this_ptr,int param_1);
void  FUN_10008ab0(void *this_ptr,int param_1,byte param_2);
void  FUN_10008b30(void *this_ptr,int param_1);
int  FUN_10008b80(int param_1);
void  FUN_10008bb0(int param_1);
void  FUN_10008c10(int param_1);
void  FUN_10008cb0(int param_1);
void  FUN_10008d10(int param_1);
void  FUN_10008d70(void *this_ptr,int param_1);
void  FUN_10008de0(void *this_ptr,int param_1);
void  FUN_10008e70(void *this_ptr,int param_1);
void  FUN_10008f00(void *this_ptr,char param_1);
void FUN_10008f40(void);
void FUN_10008f70(int param_1);
void  FUN_10009010(void *param_1);
void  FUN_10009100(int param_1);
void  FUN_10009180(int param_1);
void FUN_100093c0(void);
void FUN_10009470(void);
void FUN_10009520(void);
void FUN_100095c0(void);
void FUN_100095f0(void);
void FUN_10009600(void);
int FUN_10009650(int param_1);
void  FUN_100096a0(void *this_ptr,void *param_1);
void FUN_10009750(void *param_1);
int FUN_10009960(int *param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
int FUN_10009ac0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10009c26(void);
int FUN_10009c40(int param_1);
int FUN_10009d00(int param_1);
void FUN_10009d70(DWORD param_1);

void OnInit();
void ProcessScenary();


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
  fVar3 = (long double)FUN_10009534(local_2c);
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_10039040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_10009484(*(int*)((char*)&local_1c + 4));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_100093d4((int)local_1c);
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
    FUN_10009750((void *)0xc);
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
    FUN_100096a0(local_8,local_8);
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
    if (((long long *)&DAT_1003cd50)[bVar1] == param_1) {
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
  char local_2c [36];
  int uStack_8;
FUN_100026c0((int)local_2c);
  puVar3 = &DAT_1003eca0;
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
FUN_10001ad0(&DAT_1003ec90);
  uStack_8 = 0x10002abf;
  return;
}





void FUN_10002ad0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10009d00(0x10002b20);
  uStack_8 = 0x10002b02;
  return;
}





void FUN_10002b20(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_1003ecc8 & 1) == 0) {
    DAT_1003ecc8 = DAT_1003ecc8 | 1;
    FUN_100025d0(0x1003ec90);
  }
  uStack_8 = 0x10002b6c;
  return;
}







void FUN_10002b90(int param_1,char param_2)

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
  FUN_100027d0(&DAT_1003eca0,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)((long long *)&DAT_1003eca0)[local_40]) {
      uVar2 = (((long long *)&DAT_1003eca0)[local_40] * 100) / local_10;
      FUN_10002480(&DAT_1003ec90,(int)local_2a,1,
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
    FUN_100027d0(&DAT_1003eca0,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)((long long *)&DAT_1003eca0)[local_48]) {
        uVar2 = (((long long *)&DAT_1003eca0)[local_48] * 100) / local_10;
        FUN_10002480(&DAT_1003ec90,(int)local_2a,2,
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
    FUN_100027d0(&DAT_1003eca0,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)((long long *)&DAT_1003eca0)[local_50]) {
        local_54 = ((float)(int)((long long *)&DAT_1003eca0)[local_50] * DAT_10039050_ovl) / (float)local_10;
        if (local_54 < DAT_1003904c_ovl) {
          local_54 = 1.0;
        }
        lVar5 = 0;
        FUN_10002480(&DAT_1003ec90,(int)local_2a,
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
DAT_1003ec88_ovl = local_c;
  DAT_1003ec8c_ovl = local_8;
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
DVar1 = FUN_10009dc0((int *)0x0);
  FUN_10009d70(DVar1);
  SetPlayerName(0,"HOLLAND");
  SetPlayerName(1,"ENGLAND");
  SetPlayerName(2,"ENGLAND");
  for (local_8 = 0; local_8 < 0x32; local_8 = local_8 + 1) {
    RegisterDynGroup(((unsigned char *)&DAT_1003ee38) + local_8 * 0x18);
    RegisterDynGroup(((unsigned char *)&DAT_1003ee48) + local_8 * 0x18);
    RegisterVar(((unsigned char *)&DAT_1003ee38) + local_8 * 0x18,0x18);
  }
  RegisterUnitType(&DAT_1003ed48,"Fregat(HO)");
  RegisterUnitType(&DAT_1003ed40,"GALERA(HO)");
  RegisterUnitType(&DAT_1003ed58,"Center_Holland(HO)");
  RegisterUnitType(&DAT_1003ee20,"Melnica(HO)");
  RegisterUnitType(&DAT_1003ee30,"shahta(HO)");
  RegisterUnitType(&DAT_1003ecf0,"Fregat(en)");
  RegisterUnitType(&DAT_1003ecd8,"Linkor(en)");
  RegisterUnitType(&DAT_1003ece8,"Krestian_Sved(en)");
  RegisterDynGroup(&DAT_1003ed68);
  RegisterVar(&DAT_1003ed68,8);
  RegisterFormation(&DAT_1003ee28,"#ODIN");
  DAT_1003ed50 = 0;
  DAT_1003ed52 = 0;
  DAT_1003ed54_ovl = 0x40000000;
  RegisterDynGroup(&DAT_1003ed60);
  RegisterVar(&DAT_1003ed60,8);
  RegisterVar(&DAT_1003ee18,4);
  return;
}





void __cdecl FUN_10003b20(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_80 [16];
  int local_40;
  int local_3c;
  unsigned int local_38;
  int local_34;
  unsigned int local_30;
  unsigned short uStack_2c;
  unsigned short local_2a;
  int uStack_8;
local_34 = GetTotalAmount0(param_1);
  if (0 < local_34) {
    local_38 = 0;
    GetUnitInfo(param_1,0,&local_30);
    local_3c = (unsigned int)local_2a - (unsigned int)uStack_2c;
    for (local_40 = 1; local_40 < local_34; local_40 = local_40 + 1) {
      GetUnitInfo(param_1,local_40,&local_30);
      if (local_3c < (int)((unsigned int)local_2a - (unsigned int)uStack_2c)) {
        local_3c = (unsigned int)local_2a - (unsigned int)uStack_2c;
        local_38 = local_30 & 0xffff;
      }
    }
    FUN_10004d40(param_1);
    InsertUnitToGroup(0,param_1,local_38);
  }
  uStack_8 = 0x10003c41;
  return;
}





void __cdecl FUN_10003c90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
local_8 = local_8 & 0xffffff00;
  UnitsCenter(param_1 + 8,param_1,3000);
  GetUnitsAmount0(param_1 + 8,0);
  return;
}





void __cdecl FUN_10003d30(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SelectUnitsInZone(param_1 + 8,0,0);
  SaveSelectedUnits(0,param_1 + 0x10,0);
  FUN_10003b20(param_1 + 0x10);
  SelectUnits(param_1,0);
  SelAttackGroup(1,param_1 + 0x10);
  uStack_8 = 0x10003dd1;
  return;
}





void __cdecl FUN_10003e00(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
FUN_10003c90(param_1);
  if (cVar1 != '\0') {
    FUN_10003d30(param_1);
  }
  uStack_8 = 0x10003e46;
  return;
}





void __cdecl FUN_10003e60(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int local_44 [15];
  int uStack_8;
FUN_10003c90(param_1);
  if (cVar1 == '\0') {
    UnitsCenter(param_1 + 8,param_1,400);
    iVar2 = rand();
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (0x5dc - (short)(iVar2 % 3000));
    iVar2 = rand();
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (0x5dc - (short)(iVar2 % 3000));
    SelectUnits(param_1,0);
    uVar4 = 0;
    iVar2 = rand();
    SelSendAndKill(1,param_1 + 8,iVar2 % 0xff,uVar4);
  }
  uStack_8 = 0x10003f4d;
  return;
}





void __cdecl FUN_10003f90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
for (local_8 = 0; local_8 < param_1 / 2; local_8 = local_8 + 1) {
    iVar1 = rand();
    DAT_1003ed50 = (short)(iVar1 % 3000) + 700;
    iVar1 = rand();
    DAT_1003ed52 = (short)(iVar1 % 2000) + 800;
    iVar1 = rand();
    CreateObject0(&DAT_1003ed68,&DAT_1003ee28,&DAT_1003ed48,0,&DAT_1003ed50,iVar1 % 0xff);
  }
  for (local_8 = 0; local_8 < param_1 / 2; local_8 = local_8 + 1) {
    iVar1 = rand();
    DAT_1003ed50 = (short)(iVar1 % 3000) + 700;
    iVar1 = rand();
    DAT_1003ed52 = (short)(iVar1 % 2000) + 800;
    iVar1 = rand();
    CreateObject0(&DAT_1003ed68,&DAT_1003ee28,&DAT_1003ed40,0,&DAT_1003ed50,iVar1 % 0xff);
  }
  return;
}





void __cdecl FUN_10004130(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
iVar1 = rand();
  DAT_1003ed50 = (short)(iVar1 % 15000) + 500;
  iVar1 = rand();
  DAT_1003ed52 = (short)(iVar1 % 15000) + 500;
  if (param_1 < 0x2711) {
    iVar1 = rand();
    DAT_1003ed50 = (short)(iVar1 % 2000) + 13000;
  }
  else {
    iVar1 = rand();
    DAT_1003ed52 = (short)(iVar1 % 4000) + 11000;
  }
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    iVar1 = rand();
    CreateObject0(&DAT_1003ed68,&DAT_1003ee28,&DAT_1003ece8,2,&DAT_1003ed50,iVar1 % 0xff);
  }
  StartAI(2,"ENGLAND.0",0,0,0,DAT_1003ee18);
  return;
}





void __cdecl FUN_10004290(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  unsigned int local_8;
for (local_8 = 0; (int)local_8 < param_1; local_8 = local_8 + 1) {
    iVar2 = rand();
    DAT_1003ed52 = (short)(iVar2 % 0x251c) + 300;
    if (DAT_1003ed52 < 5000) {
      iVar2 = rand();
      DAT_1003ed50 = (short)(iVar2 % 3000) + 7000;
    }
    else {
      iVar2 = rand();
      DAT_1003ed50 = (short)(iVar2 % 8000) + 100;
    }
    if (15000 < (unsigned int)DAT_1003ed52 + (unsigned int)DAT_1003ed50) {
      DAT_1003ed52 = DAT_1003ed52 - 1000;
      DAT_1003ed50 = DAT_1003ed50 - 1000;
    }
    uVar1 = local_8 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (uVar1 == 0) {
      iVar2 = rand();
      CreateObject0(((unsigned char *)&DAT_1003ee38) + local_8 * 0x18,&DAT_1003ee28,&DAT_1003ecd8,1,&DAT_1003ed50,
                    iVar2 % 0xff);
    }
    else {
      iVar2 = rand();
      CreateObject0(((unsigned char *)&DAT_1003ee38) + local_8 * 0x18,&DAT_1003ee28,&DAT_1003ecf0,1,&DAT_1003ed50,
                    iVar2 % 0xff);
    }
  }
  return;
}





void __cdecl FUN_10004ca0(int param_1)

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





void __cdecl FUN_10004d40(int param_1)

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
  uStack_8 = 0x10004db4;
  return;
}





void FUN_10004de0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x10004e29;
  return;
}





void  FUN_10004e40(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10004ea0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10004e40(param_1);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}





void  FUN_10004f10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_10004f70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_10004f10(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10004fd0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10005000(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10005060(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_100050a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((int)this_ptr + 8,*(int *)((int)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x100050f8;
  return;
}





void  FUN_10005120(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10004f10(this_ptr);
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
  local_8 = (void *)0x100051f7;
  return;
}





void  FUN_10005240(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10005280(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_100052c0(int param_1)

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





void  FUN_10005370(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_100053b0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  *(int *)((int)this_ptr + 0x1c) = param_2;
  *(int *)((int)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10005410(void *this_ptr,int param_1)

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
  local_8 = (void *)0x100054b0;
  return;
}





void  FUN_100054e0(int param_1)

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





void  FUN_10005570(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10004e40(this_ptr);
  SelChangeNation(*(char *)((int)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((int)local_8 + 0x10) = param_1;
  local_8 = (void *)0x100055c8;
  return;
}





int  FUN_100055f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10005620(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10004e40(this_ptr);
  SelSendTo(*(char *)((int)local_8 + 0x10),param_1,0,0);
  *(int *)((int)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000567c;
  return;
}





void  FUN_100056a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10004e40(this_ptr);
  Patrol(*(char *)((int)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x100056f1;
  return;
}





void  FUN_10005710(int param_1)

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





void  FUN_10005780(void *this_ptr,int param_1)

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
  local_8 = (void *)0x100057d3;
  return;
}





void  FUN_100057f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10005830(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10004e40(param_1);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_100058a0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10004f70(param_1);
  if (cVar1 != '\0') {
    FUN_10005980(local_8);
    FUN_100054e0(local_8);
    if (iVar2 < 10) {
      FUN_10005620(local_8,*(int *)((int)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x100058ff;
  return;
}





void  FUN_10005920(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10005966;
  return;
}





void  FUN_10005980(void *param_1)

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
  FUN_100050a0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x100059db;
  return;
}





void  FUN_10005a00(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10005a40(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005a90(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10005a90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005000(param_1);
  return;
}





void  FUN_10005ae0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x24) = param_1;
  *(int *)((int)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10005b30(void *param_1)

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
      (local_8 = param_1, FUN_10004f70(param_1), cVar1 != '\0')) &&
     (*(int *)((int)local_8 + 0x10) != 0)) {
    if (*(int *)((int)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_100050a0(local_8,600);
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
          FUN_10005570(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10004ea0((int)local_8);
        }
        AddResource(0,*(char *)((int)local_8 + 0x24),*(int *)((int)local_8 + 0x28));
        FUN_10005ae0(local_8,0,0);
      }
    }
    else {
      FUN_100054e0(local_8);
      if (iVar3 < 0x32) {
        FUN_10005e20(local_8);
      }
      FUN_10005710((int)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_10006000(*(short **)((int)local_8 + 0x20));
        FUN_10006160(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10005d62;
  return;
}





void  FUN_10005e20(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10005570(param_1,6);
  FUN_10004e40(local_8);
  uVar5 = 0;
  uVar4 = 0;
  FUN_100050a0(local_8,100);
  SelSendTo(*(char *)((int)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10005830((int)local_8);
  local_8 = (void *)0x10005e8c;
  return;
}





void  FUN_10005eb0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100053b0(this_ptr,param_1,param_2,param_3);
  *(char *)((int)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10005ef5;
  return;
}





void  FUN_10005f10(void *param_1)

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
  FUN_100050a0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10005f6b;
  return;
}





void  FUN_10005f90(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 4) = param_1;
  ((long long *)&DAT_1003f424)[DAT_1003f474] = this_ptr;
  DAT_1003f474 = DAT_1003f474 + 1;
  return;
}





void __cdecl FUN_10006000(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1003f424;
  for (local_c = 0; local_c < DAT_1003f474; local_c = local_c + 1) {
    psVar1 = (short *)FUN_100061d0(((long long *)&DAT_1003f424)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_1003f424)[local_c];
    }
  }
  return;
}





void  FUN_100060a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 8) = param_1;
  return;
}





void  FUN_100060e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10006120(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10006160(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005ae0(param_1,*(int *)((int)this_ptr + 0xc),*(int *)((int)this_ptr + 0x10));
  FUN_10005620(param_1,*(int *)((int)local_8 + 8));
  local_8 = (void *)0x100061af;
  return;
}





int  FUN_100061d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10006210(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10006240(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10006810((int)param_1);
  if ((0 < iVar2) && (*(int *)((int)local_8 + 0x1c) + 1 < *(int *)((int)local_8 + 0x20))) {
    if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10006880(local_8,*(int *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10006ed0((int)local_8 + 0xc,
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10006880(local_8,*(int *)
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
  local_8 = (void *)0x10006442;
  return;
}





int FUN_100064d0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_10006500(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10006570(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_100065e0(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x10006651;
  return;
}





void  FUN_10006680(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_10006810((int)this_ptr);
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
    FUN_10006500(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10006781;
  return;
}





int  FUN_100067d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10006810(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_10006880(void *this_ptr,int param_1)

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
  FUN_10006810((int)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100068e0;
  return;
}





void  FUN_10006900(void *this_ptr,int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xc,param_1);
  FUN_10004ca0((int)local_8 + 0xc);
  *(unsigned int *)((int)local_8 + 0x18) = uVar1 & 0xff;
  *(int *)((int)local_8 + 0x14) = 0;
  *(int *)((int)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10006974;
  return;
}





BOOL  FUN_100069a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_100069f0(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_100069a0((int)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x10006a8d;
  return;
}





void  FUN_10006ac0(int param_1)

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





void  FUN_10006b70(int param_1)

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





void  FUN_10006c10(int param_1)

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





void  FUN_10006c90(int param_1)

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
      FUN_10006b70(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_10006ac0(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10006c10(local_8);
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





void __cdecl FUN_10006ea0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_1003f478 = param_1;
  return;
}





void __cdecl FUN_10006ed0(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_1003f478 != (void *)0x0) {
    bVar1 = FUN_100069a0((int)DAT_1003f478);
    if (bVar1) {
      FUN_100069f0(DAT_1003f478,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10006f29;
  return;
}





void  FUN_10006f50(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  FUN_10007350(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      FUN_100072b0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_1003f47c,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_1003f480 == 0) {
        FUN_100072b0(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_1003f47c,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_1003f480,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_1003f480,0);
      }
    }
    else {
      FUN_100072b0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_1003f47c,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10007180(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10007265;
  return;
}





void  FUN_100072b0(int param_1)

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





void  FUN_10007350(int param_1)

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





int  FUN_100073c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10007400(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10007447;
  return;
}





void  FUN_10007460(void *param_1)

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
  FUN_100079a0((int)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((int)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      FUN_10007a50(local_8,local_10);
      FUN_10007800((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((int)local_8 + 0xc) = 2;
      }
      else {
        FUN_10007900((int)local_8);
        if (cVar1 == '\0') {
          SelectUnits((int)local_8 + 0xd,0);
          SelSendTo(DAT_1003cd5c,(int)local_8 + 0x1d,*(char *)((int)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((int)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      FUN_10007a50(local_8,local_18);
      FUN_10007800((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((int)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((int)local_8 + 0xd,0);
        SelSendTo(DAT_1003cd5c,DAT_1003f484,*(char *)((int)local_8 + 8),0);
      }
      else {
        *(char *)((int)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x100075f9;
  return;
}







void  FUN_10007670(void *this_ptr,int param_1,int param_2,int param_3)

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
  FUN_10007a50(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = piVar1[1];
  local_38 = local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_10009534(local_20);
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_10039040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10009484(extraout_ECX);
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_100093d4(*(int*)((char*)&local_28 + 4));
  lVar5 = 0;
  local_14 = (int)lVar5;
  FUN_10007800((int)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((int)local_8 + 8) = local_2c + 0x80;
  FUN_10007460(local_8);
  local_8 = (void *)0x100077a1;
  return;
}





void FUN_10007800(int param_1,int param_2,int param_3,int param_4)

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
GetUnitInfo(DAT_1003f488,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_1003f484,DAT_1003f488,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





void  FUN_10007900(int param_1)

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





void  FUN_100079a0(int param_1)

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





int  FUN_10007a10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





void  FUN_10007a50(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10007b35;
  return;
}





void  FUN_10007b80(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10007db0(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_1003f48c,local_8,DAT_1003cd60);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      FUN_10007d20(local_8);
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





void  FUN_10007cc0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10007d04;
  return;
}





void  FUN_10007d20(int param_1)

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





void  FUN_10007db0(int param_1)

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
FUN_10007e20(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((int)this_ptr + 6) = param_1;
  *(int *)((int)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_10004ca0(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10007e98;
  return;
}





void 
FUN_10007ec0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  RegisterZone((int)local_8 + 0x1e,param_2);
  FUN_10007e20(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10007f42;
  return;
}





void  FUN_10007f70(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((int)local_8 + 0x1e,DAT_1003f490,(int)local_8 + 0x16,300);
  FUN_10007e20(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10008000;
  return;
}





void  FUN_10008030(char *param_1)

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
      FUN_10008170(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10008240(local_8);
      SetTrigg(local_8[2],1);
    }
  }
  local_8 = (char *)0x1000812b;
  return;
}





void  FUN_10008170(char *param_1)

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
  local_8 = (char *)0x1000820a;
  return;
}





void  FUN_10008240(char *param_1)

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
  local_8 = (char *)0x100082da;
  return;
}





int  FUN_10008310(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = 0xffffffff;
  return param_1;
}





void  FUN_10008350(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x30,param_1);
  local_8 = (void *)0x10008397;
  return;
}





void  FUN_100083b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup((int)this_ptr + 0x30);
  RemoveGroup(param_1,(int)local_8 + 0x30);
  local_8 = (void *)0x10008410;
  return;
}





void  FUN_10008430(void *this_ptr,int param_1)

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
  local_8 = (unsigned short *)0x100084e2;
  return;
}





void  FUN_10008520(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  FUN_10008430(this_ptr,param_1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(param_2,param_1);
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10008588;
  return;
}





int  FUN_100085b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0x30;
}





void 
FUN_100085f0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
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
  local_8 = (void *)0x10008685;
  return;
}





void  FUN_100086c0(int param_1)

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





void  FUN_10008800(int param_1)

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
    iVar1 = FUN_100085b0(local_8);
    iVar1 = GetUnitsAmount1(local_14,iVar1);
    if (0 < iVar1) {
      FUN_100086c0(local_8);
      local_c = 1;
    }
  }
  return;
}





int  FUN_100088c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100088f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10008bb0(this_ptr);
  SelCenter((int)local_8 + 8,*(char *)((int)local_8 + 0x3c),param_1);
  local_8 = (void *)0x1000894c;
  return;
}





void  FUN_10008970(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100088f0(param_1,300);
  local_8 = (void *)0x100089a7;
  return;
}





void  FUN_100089c0(void *this_ptr,unsigned int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10008970(this_ptr);
  local_10 = (unsigned int)*(unsigned short *)((int)local_8 + 8);
  local_c = (unsigned int)*(unsigned short *)((int)local_8 + 10);
  *param_1 = local_10;
  param_1[1] = local_c;
  local_8 = (void *)0x10008a1b;
  return;
}





void  FUN_10008a40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10008bb0(this_ptr);
  SelSendAndKill(*(char *)((int)local_8 + 0x3c),param_1,0,0);
  local_8 = (void *)0x10008a93;
  return;
}





void  FUN_10008ab0(void *this_ptr,int param_1,byte param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10008bb0(this_ptr);
  uVar1 = (unsigned int)param_2;
  iVar2 = rand();
  SelSendTo(*(char *)((int)local_8 + 0x3c),param_1,iVar2 % 0xff,uVar1);
  local_8 = (void *)0x10008b11;
  return;
}





void  FUN_10008b30(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10008ab0(this_ptr,param_1,0);
  local_8 = (void *)0x10008b68;
  return;
}





int  FUN_10008b80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10008bb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10008c10(int param_1)

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





void  FUN_10008cb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_10008d10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_10008cb0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10008d70(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  FUN_10008c10(local_8);
  *(char *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10008dc2;
  return;
}





void  FUN_10008de0(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup(this_ptr);
  RemoveGroup(param_1,local_8);
  FUN_10008c10(local_8);
  *(char *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10008e48;
  return;
}





void  FUN_10008e70(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10008edb;
  return;
}





void  FUN_10008f00(void *this_ptr,char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)((int)this_ptr + 0x3c) = param_1;
  return;
}





void FUN_10008f40(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return;
}





void FUN_10008f70(int param_1)

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
    uVar1 = FUN_10008b80(local_8);
    SelectUnits(uVar1,uVar4);
    SelAttackGroup(1,param_1);
  }
  return;
}





void  FUN_10009010(void *param_1)

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
  FUN_10008d10(param_1);
  if (cVar1 != '\0') {
    uVar5 = 0;
    FUN_100088f0(local_8,3000);
    iVar3 = GetUnitsAmount0(uVar2,uVar5);
    if (0 < iVar3) {
      uVar6 = 0;
      uVar5 = 0;
      FUN_100088f0(local_8,3000);
      SelectUnitsInZone(uVar2,uVar5,uVar6);
      SaveSelectedUnits(0,(int)local_8 + 0x3d,0);
      FUN_10008f70((int)local_8 + 0x3d);
    }
  }
  local_8 = (void *)0x100090c1;
  return;
}





void  FUN_10009100(int param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  uVar1 = FUN_10008b80(param_1);
  RegisterDynGroup(uVar1);
  RegisterDynGroup(local_8 + 0x3d);
  return;
}





void  FUN_10009180(int param_1)

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





void FUN_100093c0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000abd8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_100093dd((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10009470(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000abd8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000948d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10009520(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000abd8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000953d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_100095c0(void)

{
  FUN_10009600();
  return;
}





void FUN_100095f0(void)

{
  return;
}





void FUN_10009600(void)

{
  return;
}





int __cdecl FUN_10009650(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_1003f4ac;
  DAT_1003f4ac = param_1;
  return uVar1;
}





void  FUN_100096a0(void *this_ptr,void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000b620(this_ptr,9);
    if (((((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000a2e0(2,0x10039268,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000c1b0(param_1,*(int *)((int)param_1 + -0xc));
    FUN_1000b6c0(9);
  }
  return;
}





void __cdecl FUN_10009750(void *param_1)

{
  FUN_1000b750(param_1,1);
  return;
}





int __cdecl
FUN_10009960(int *param_1,int param_2,int param_3,int param_4,
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
  
  local_28 = FUN_10009a30;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1000e420();
  ((int(*)())pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
  }
  return 0;
}





int __cdecl FUN_10009ac0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

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
      FUN_1000e6a0();
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
    FUN_1000e6a0();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_10009c26(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003cdb4 = *(int *)(unaff_EBP + 8);
  DAT_1003cdb0 = in_EAX;
  DAT_1003cdb8 = unaff_EBP;
  return;
}





int __cdecl FUN_10009c40(int param_1)

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
  
  FUN_1000e8e0();
  pvVar1 = (void *)FUN_1000c5f0(this_ptr,(int)DAT_10040ff8,2);
  this_00 = (void *)((int)DAT_10040ff4 + (4 - (int)DAT_10040ff8));
  if (pvVar1 < this_00) {
    iVar6 = 0x68;
    pcVar5 = "onexit.c";
    uVar4 = 2;
    iVar2 = FUN_1000c5f0(this_00,(int)DAT_10040ff8,2);
    piVar3 = FUN_1000bbb0(this_01,DAT_10040ff8,(void *)(iVar2 + 0x10),uVar4,(int)pcVar5,iVar6);
    if (piVar3 == (int *)0x0) {
      FUN_1000e8f0();
      return 0;
    }
    DAT_10040ff4 = piVar3 + ((int)DAT_10040ff4 - (int)DAT_10040ff8 >> 2);
    DAT_10040ff8 = piVar3;
  }
  *DAT_10040ff4 = param_1;
  DAT_10040ff4 = DAT_10040ff4 + 1;
  FUN_1000e8f0();
  return param_1;
}





int __cdecl FUN_10009d00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009c40(param_1);
  return (iVar1 != 0) - 1;
}





void __cdecl FUN_10009d70(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000e420();
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
