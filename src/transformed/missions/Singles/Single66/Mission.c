#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
char DAT_1003301c[] = "R%d";
char DAT_10033020[] = "s%d";
char DAT_10033044[] = "Gb2";
char DAT_10033048[] = "Gb1";
char DAT_1003304c[] = "GG";
char DAT_10033050[] = "GS";
char DAT_1003305c[] = "Z%d";
char DAT_10033060[] = "Z36";
char DAT_10033064[] = "Z35";
char DAT_10033068[] = "Z3";
char DAT_1003306c[] = "Z2";
char DAT_10033070[] = "Z1";
long long DAT_100331e0 = 0;
int DAT_10036a30 = 4;
int DAT_10036a34 = 800;
int DAT_10036a38 = 2;
unsigned char DAT_10038968[160] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10038978[160] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_10038a08 = 0;
int DAT_10038a0c = 0;
unsigned char DAT_10038a10[24] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10038a28[296] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10038a34 = 0;
unsigned char DAT_10038e00[248] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10038ef8 = 0;
long long DAT_10038f00 = 0;
long long DAT_10038f28 = 0;
long long DAT_10038f50 = 0;
long long DAT_10038f78 = 0;
long long DAT_10038f80 = 0;
long long DAT_10038f88 = 0;
long long DAT_10038f90 = 0;
long long DAT_10038f98 = 0;
long long DAT_10038fd0 = 0;
long long DAT_10038fd8 = 0;
long long DAT_10038fe0 = 0;
long long DAT_10039090 = 0;
long long DAT_10039098 = 0;
int DAT_100390a0 = 0;
int DAT_100390a8 = 0;
int DAT_1003921c = 0;
int DAT_1003926c = 0;
int DAT_10039270 = 0;
int DAT_10039274 = 0;
int DAT_10039278 = 0;
int DAT_1003927c = 0;
int DAT_10039280 = 0;
int DAT_10039284 = 0;
int DAT_10039288 = 0;
int DAT_100392a4 = 0;
long long DAT_100392a8 = 0;
int DAT_100331e0_ovl = 776530087;
int DAT_10036a30_ovl = 4;

/* Stubs for missing internal functions */
int FUN_100064c4() { return 0; }
int FUN_100064cd() { return 0; }
int FUN_10006574() { return 0; }
int FUN_1000657d() { return 0; }
int FUN_10006624() { return 0; }
int FUN_1000662d() { return 0; }
int FUN_10006a40() { return 0; }
int FUN_10007390() { return 0; }
int FUN_10008f08() { return 0; }


/* Forward declarations */
void FUN_100013f0(void);
void FUN_100018d0(int param_1);
void FUN_10002bc0(int param_1);
void  FUN_10002cc0(int param_1);
void  FUN_10002d90(int param_1);
int  FUN_10002df0(int param_1);
void  FUN_10002e80(void *this_ptr,int param_1);
void  FUN_10002ec0(void *this_ptr,int param_1);
void  FUN_10002f40(void *this_ptr,int param_1,int param_2);
void  FUN_10003060(void *this_ptr,int param_1);
void  FUN_100030a0(void *this_ptr,int param_1);
void  FUN_100030e0(int param_1);
void  FUN_10003190(void *this_ptr,int param_1);
void  FUN_100031d0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10003230(void *this_ptr,int param_1);
void  FUN_10003300(int param_1);
void  FUN_10003390(void *this_ptr,unsigned int param_1);
int  FUN_10003410(int param_1);
void  FUN_10003440(void *this_ptr,int param_1);
void  FUN_100034c0(void *this_ptr,int param_1);
void  FUN_10003530(int param_1);
void  FUN_100035a0(void *this_ptr,int param_1);
void  FUN_10003610(void *this_ptr,int param_1);
void  FUN_10003650(int param_1);
void  FUN_100036c0(void *param_1);
void  FUN_10003740(void *this_ptr,int param_1);
void  FUN_100037a0(void *param_1);
void  FUN_10003820(void *this_ptr,int param_1);
void  FUN_10003860(int param_1);
void  FUN_100038b0(int param_1);
void  FUN_10003900(void *this_ptr,int param_1,int param_2);
void  FUN_10003950(void *param_1);
void  FUN_10003c40(void *param_1);
void  FUN_10003cd0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10003d30(void *param_1);
void  FUN_10003db0(void *this_ptr,int param_1);
void FUN_10003e20(short *param_1);
void  FUN_10003ec0(void *this_ptr,int param_1);
void  FUN_10003f00(void *this_ptr,int param_1);
void  FUN_10003f40(void *this_ptr,int param_1);
void  FUN_10003f80(void *this_ptr,void *param_1);
int  FUN_10003ff0(int param_1);
int  FUN_10004030(int param_1);
void  FUN_10004060(void *param_1);
int FUN_100042f0(void);
void  FUN_10004320(void *this_ptr,int param_1,int param_2);
void  FUN_10004390(void *this_ptr,int param_1);
void  FUN_10004400(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100044a0(void *this_ptr,int param_1,int param_2);
int  FUN_100045f0(int param_1);
void  FUN_10004630(int param_1);
void  FUN_100046a0(void *this_ptr,int param_1);
void  FUN_10004720(void *this_ptr,int param_1,int param_2);
BOOL  FUN_100047c0(int param_1);
void  FUN_10004810(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100048e0(int param_1);
void  FUN_10004990(int param_1);
void  FUN_10004a30(int param_1);
void  FUN_10004ab0(int param_1);
void FUN_10004cc0(int param_1);
void FUN_10004cf0(int param_1,int param_2,int param_3);
void  FUN_10004d70(int param_1);
void  FUN_10004fa0(void *this_ptr,int *param_1);
void  FUN_100050d0(int param_1);
void  FUN_10005170(int param_1);
int  FUN_100051e0(int param_1);
void  FUN_10005220(void *this_ptr,int param_1);
void  FUN_10005280(void *param_1);
void  FUN_10005490(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_10005620(int param_1,int param_2,int param_3,int param_4);
void  FUN_10005720(int param_1);
void  FUN_100057c0(int param_1);
int  FUN_10005830(int param_1);
void  FUN_10005870(void *this_ptr,int *param_1);
void  FUN_100059a0(int param_1);
void  FUN_10005ae0(void *this_ptr,int param_1);
void  FUN_10005b40(int param_1);
void  FUN_10005bd0(int param_1);
void 
FUN_10005c40(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10005ce0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10005d90(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10005e50(char *param_1);
void  FUN_10005f90(char *param_1);
void  FUN_10006060(char *param_1);
int FUN_100062d0(char *param_1,byte *param_2);
void FUN_100063d0(void);
void FUN_10006400(void);
void FUN_10006410(void);
int FUN_10006460(int param_1);
void FUN_100064b0(void);
void FUN_10006560(void);
void FUN_10006610(void);

void OnInit();
void ProcessScenary();


void FUN_100013f0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
rand();
  return;
}





void __cdecl FUN_100018d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_78 [16];
  char local_38 [20];
  int local_24;
  int local_c;
  int local_8;
GetUnitInfo(param_1,0,local_38);
  local_c = local_24;
  return;
}





void __cdecl FUN_10002bc0(int param_1)

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
  return;
}






void  FUN_10002cc0(int param_1)

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






void  FUN_10002d90(int param_1)

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





int  FUN_10002df0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}






void  FUN_10002e80(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_10002ec0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((intptr_t)this_ptr + 8,*(int *)((intptr_t)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10002f18;
  return;
}





void  FUN_10002f40(void *this_ptr,int param_1,int param_2)

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
  local_8 = (void *)0x10003017;
  return;
}





void  FUN_10003060(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_100030a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_100030e0(int param_1)

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





void  FUN_10003190(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_100031d0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  *(int *)((intptr_t)this_ptr + 0x1c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10003230(void *this_ptr,int param_1)

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
  local_8 = (void *)0x100032d0;
  return;
}





void  FUN_10003300(int param_1)

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





void  FUN_10003390(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelChangeNation(*(char *)((intptr_t)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((intptr_t)local_8 + 0x10) = param_1;
  local_8 = (void *)0x100033e8;
  return;
}





int  FUN_10003410(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10003440(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),param_1,0,0);
  *(int *)((intptr_t)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000349c;
  return;
}





void  FUN_100034c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  Patrol(*(char *)((intptr_t)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x10003511;
  return;
}





void  FUN_10003530(int param_1)

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





void  FUN_100035a0(void *this_ptr,int param_1)

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
  local_8 = (void *)0x100035f3;
  return;
}





void  FUN_10003610(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10003650(int param_1)

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





void  FUN_100036c0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10002d90(param_1);
  if (cVar1 != '\0') {
    FUN_100037a0(local_8);
    FUN_10003300(local_8);
    if (iVar2 < 10) {
      FUN_10003440(local_8,*(int *)((intptr_t)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x1000371f;
  return;
}





void  FUN_10003740(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10003786;
  return;
}





void  FUN_100037a0(void *param_1)

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
  FUN_10002ec0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x100037fb;
  return;
}





void  FUN_10003820(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10003860(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100038b0(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_100038b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10003900(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x24) = param_1;
  *(int *)((intptr_t)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10003950(void *param_1)

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
      (local_8 = param_1, FUN_10002d90(param_1), cVar1 != '\0')) &&
     (*(int *)((intptr_t)local_8 + 0x10) != 0)) {
    if (*(int *)((intptr_t)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_10002ec0(local_8,600);
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
          FUN_10003390(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10002cc0((intptr_t)local_8);
        }
        AddResource(0,*(char *)((intptr_t)local_8 + 0x24),*(int *)((intptr_t)local_8 + 0x28));
        FUN_10003900(local_8,0,0);
      }
    }
    else {
      FUN_10003300(local_8);
      if (iVar3 < 0x32) {
        FUN_10003c40(local_8);
      }
      FUN_10003530((intptr_t)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_10003e20(*(short **)((intptr_t)local_8 + 0x20));
        FUN_10003f80(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10003b82;
  return;
}





void  FUN_10003c40(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10003390(param_1,6);
  SelectUnits(local_8,0);
  uVar5 = 0;
  uVar4 = 0;
  FUN_10002ec0(local_8,100);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10003650((intptr_t)local_8);
  local_8 = (void *)0x10003cac;
  return;
}





void  FUN_10003cd0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100031d0(this_ptr,param_1,param_2,param_3);
  *(char *)((intptr_t)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10003d15;
  return;
}





void  FUN_10003d30(void *param_1)

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
  FUN_10002ec0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10003d8b;
  return;
}





void  FUN_10003db0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 4) = param_1;
  ((long long *)&DAT_1003921c)[DAT_1003926c] = this_ptr;
  DAT_1003926c = DAT_1003926c + 1;
  return;
}





void __cdecl FUN_10003e20(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1003921c;
  for (local_c = 0; local_c < DAT_1003926c; local_c = local_c + 1) {
    psVar1 = (short *)FUN_10003ff0(((long long *)&DAT_1003921c)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_1003921c)[local_c];
    }
  }
  return;
}





void  FUN_10003ec0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 8) = param_1;
  return;
}





void  FUN_10003f00(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10003f40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10003f80(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003900(param_1,*(int *)((intptr_t)this_ptr + 0xc),*(int *)((intptr_t)this_ptr + 0x10));
  FUN_10003440(param_1,*(int *)((intptr_t)local_8 + 8));
  local_8 = (void *)0x10003fcf;
  return;
}





int  FUN_10003ff0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10004030(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10004060(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10004630((intptr_t)param_1);
  if ((0 < iVar2) && (*(int *)((intptr_t)local_8 + 0x1c) + 1 < *(int *)((intptr_t)local_8 + 0x20))) {
    if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_100046a0(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10004cf0((intptr_t)local_8 + 0xc,
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_100046a0(local_8,*(int *)
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
  local_8 = (void *)0x10004262;
  return;
}





int FUN_100042f0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_10004320(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10004390(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10004400(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x10004471;
  return;
}





void  FUN_100044a0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_10004630((intptr_t)this_ptr);
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
    FUN_10004320(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x100045a1;
  return;
}





int  FUN_100045f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10004630(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_100046a0(void *this_ptr,int param_1)

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
  FUN_10004630((intptr_t)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10004700;
  return;
}





void  FUN_10004720(void *this_ptr,int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xc,param_1);
  FUN_10002bc0((intptr_t)local_8 + 0xc);
  *(unsigned int *)((intptr_t)local_8 + 0x18) = uVar1 & 0xff;
  *(int *)((intptr_t)local_8 + 0x14) = 0;
  *(int *)((intptr_t)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10004794;
  return;
}





BOOL  FUN_100047c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10004810(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_100047c0((intptr_t)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x100048ad;
  return;
}





void  FUN_100048e0(int param_1)

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





void  FUN_10004990(int param_1)

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





void  FUN_10004a30(int param_1)

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





void  FUN_10004ab0(int param_1)

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
      FUN_10004990(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_100048e0(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10004a30(local_8);
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





void __cdecl FUN_10004cc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_10039270 = param_1;
  return;
}





void __cdecl FUN_10004cf0(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_10039270 != (void *)0x0) {
    bVar1 = FUN_100047c0((int)DAT_10039270);
    if (bVar1) {
      FUN_10004810(DAT_10039270,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10004d49;
  return;
}





void  FUN_10004d70(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  FUN_10005170(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      FUN_100050d0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_10039274,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_10039278 == 0) {
        FUN_100050d0(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_10039274,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_10039278,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_10039278,0);
      }
    }
    else {
      FUN_100050d0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_10039274,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10004fa0(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10005085;
  return;
}





void  FUN_100050d0(int param_1)

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





void  FUN_10005170(int param_1)

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





int  FUN_100051e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10005220(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10005267;
  return;
}





void  FUN_10005280(void *param_1)

{
  char cVar1;
  int *puVar2;
  int iVar3;
  int uVar4;
  int local_18 [2];
  int local_10 [2];
  void *local_8;
local_8 = param_1;
  FUN_100057c0((intptr_t)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      FUN_10005870(local_8,local_10);
      FUN_10005620((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((intptr_t)local_8 + 0xc) = 2;
      }
      else {
        FUN_10005720((intptr_t)local_8);
        if (cVar1 == '\0') {
          SelectUnits((intptr_t)local_8 + 0xd,0);
          SelSendTo(DAT_10036a30,(intptr_t)local_8 + 0x1d,*(char *)((intptr_t)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      FUN_10005870(local_8,local_18);
      FUN_10005620((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((intptr_t)local_8 + 0xd,0);
        SelSendTo(DAT_10036a30,DAT_1003927c,*(char *)((intptr_t)local_8 + 8),0);
      }
      else {
        *(char *)((intptr_t)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x10005419;
  return;
}







void  FUN_10005490(void *this_ptr,int param_1,int param_2,int param_3)

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
  FUN_10005870(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = (void *)piVar1[1];
  local_38 = (intptr_t)local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_10006624(local_20,(int)((double)local_38 / (double)local_3c));
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_100331e0_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10006574(this_00,(int)(local_28));
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_100064c4(*(int*)((char*)&local_28 + 4),(intptr_t)local_28);
  lVar5 = 0;
  local_14 = (void *)lVar5;
  FUN_10005620((intptr_t)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((intptr_t)local_8 + 8) = local_2c + 0x80;
  FUN_10005280(local_8);
  return;
}





void FUN_10005620(int param_1,int param_2,int param_3,int param_4)

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
GetUnitInfo(DAT_10039280,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_1003927c,DAT_10039280,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





void  FUN_10005720(int param_1)

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





void  FUN_100057c0(int param_1)

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





int  FUN_10005830(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





void  FUN_10005870(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10005955;
  return;
}





void  FUN_100059a0(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005bd0(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_10039284,local_8,DAT_10036a34);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      FUN_10005b40(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_10036a38,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_10005ae0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10005b24;
  return;
}





void  FUN_10005b40(int param_1)

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





void  FUN_10005bd0(int param_1)

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
FUN_10005c40(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((intptr_t)this_ptr + 6) = param_1;
  *(int *)((intptr_t)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_10002bc0(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10005cb8;
  return;
}





void 
FUN_10005ce0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  RegisterZone((intptr_t)local_8 + 0x1e,param_2);
  FUN_10005c40(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10005d62;
  return;
}





void  FUN_10005d90(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((intptr_t)local_8 + 0x1e,DAT_10039288,(intptr_t)local_8 + 0x16,300);
  FUN_10005c40(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10005e20;
  return;
}





void  FUN_10005e50(char *param_1)

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
      FUN_10005f90(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10006060(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  local_8 = (char *)0x10005f4b;
  return;
}





void  FUN_10005f90(char *param_1)

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
  local_8 = (char *)0x1000602a;
  return;
}





void  FUN_10006060(char *param_1)

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
  local_8 = (char *)0x100060fa;
  return;
}





int __cdecl FUN_100062d0(char *param_1,byte *param_2)

{
  void *pcVar1;
  int iVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_10006a40(2,0x100332ec,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_10006a40(2,0x100332ec,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10007390(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}







void FUN_100063d0(void)

{
  FUN_10006410();
  return;
}





void FUN_10006400(void)

{
  return;
}





void FUN_10006410(void)

{
  return;
}





int __cdecl FUN_10006460(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_100392a4;
  DAT_100392a4 = param_1;
  return uVar1;
}





void FUN_100064b0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10008f08((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_100064cd((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10006560(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10008f08((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000657d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10006610(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10008f08((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000662d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_14;
  char local_10 [8];
  int uStack_8;
DAT_100390a8 = 1;
  SetPlayerName(0,"ALJERIANS");
  SetPlayerName(2,"TURKEY");
  SetPlayerName(3,"ALJERIANS");
  SetPlayerName(4,"TURKEY");
  RegisterZone(&DAT_10038f88,DAT_10033070);
  RegisterZone(&DAT_10038f90,DAT_1003306c);
  RegisterZone(&DAT_10038f98,DAT_10033068);
  RegisterZone(&DAT_10039090,DAT_10033064);
  RegisterZone(&DAT_10039098,DAT_10033060);
  for (local_14 = 0; local_14 < 0x1f; local_14 = local_14 + 1) {
    FUN_100062d0(local_10,DAT_1003305c);
    RegisterZone(((unsigned char *)&DAT_10038e00) + local_14 * 8,local_10);
  }
  RegisterVar(&DAT_100390a0,4);
  RegisterUnits(&DAT_10038ef8,"point");
  RegisterUnits(&DAT_10038f80,DAT_10033050);
  RegisterUnits(&DAT_10038f78,DAT_1003304c);
  RegisterUnits(&DAT_10038fd8,DAT_10033048);
  RegisterUnits(&DAT_10038fe0,DAT_10033044);
  RegisterUnits(&DAT_10038fd0,"Gate5");
  DAT_10039288 = &DAT_10038f88;
  FUN_10005d90(&DAT_10038f00,"Gate1",0,0x29);
  FUN_10005d90(&DAT_10038f28,"Gate2",0,0x2a);
  FUN_10005d90(&DAT_10038f50,"Gate3",0,0x2b);
  DAT_1003927c = &DAT_10038e00;
  DAT_10036a30_ovl = 4;
  DAT_10039280 = &DAT_10038ef8;
  for (local_14 = 0; local_14 < 0x18; local_14 = local_14 + 1) {
    FUN_100062d0(local_10,DAT_10033020);
    FUN_10005220(((unsigned char *)&DAT_10038a28) + local_14 * 0x25,local_10);
    RegisterVar(((unsigned char *)&DAT_10038a28) + local_14 * 0x25,0x25);
  }
  DAT_10039284 = &DAT_10038f88;
  DAT_10036a34 = 3000;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    FUN_100062d0(local_10,DAT_1003301c);
    FUN_10005ae0(((unsigned char *)&DAT_10038968) + local_14 * 0x14,local_10);
    RegisterVar(((unsigned char *)&DAT_10038968) + local_14 * 0x14,0x14);
  }
  RegisterVar(&DAT_10038a10,0x18);
  uStack_8 = 0x100017dd;
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *puVar6;
  long long uVar7;
  int uVar8;
  int local_78 [16];
  int local_38 [2];
  long long local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
if (DAT_100390a8 != '\0') {
    SetTrigg(7,0);
    RunTimer(0x18,0x32);
    DAT_100390a8 = '\0';
  }
  uVar2 = TimerDoneFirst(0x18);
  if ((uVar2 & 0xff) != 0) {
    SetTrigg(7,0);
  }
  uVar2 = Trigg(99);
  if ((uVar2 & 0xff) != 0) {
    for (local_8 = 0; local_8 < 0x18; local_8 = local_8 + 1) {
      ((long long *)&DAT_10038a34)[local_8 * 0x25] = 0;
      ((long long *)&DAT_10038a10)[local_8] = 0xff;
    }
    DAT_100390a0 = GetDiff(0);
    SetLightSpot(&DAT_10038f90,3,1);
    ChangeFriends(0,9);
    ChangeFriends(4,0x1d);
    RunTimer(2,200);
    RunTimer(3,200);
    RunTimer(4,200);
    RunTimer(7,800);
    RunTimer(0x1e,100);
    SetTrigg(99,0);
  }
  uVar2 = TimerDoneFirst(0x1e);
  if ((uVar2 & 0xff) != 0) {
    if (DAT_100390a0 < 1) {
      InitialUpgrade(DAT_10033050,"Pikiner_turki(AL)ATTACK4");
      InitialUpgrade(DAT_10033050,"Pikiner_turki(AL)SHIELD4");
      InitialUpgrade(DAT_10033050,"Pehota_turki(AL)ATTACK4");
      InitialUpgrade(DAT_10033050,"Pehota_turki(AL)SHIELD4");
      InitialUpgrade(DAT_10033050,"Mameluk(AL)ATTACK4");
      InitialUpgrade(DAT_10033050,"Mameluk(AL)SHIELD4");
    }
    if (DAT_100390a0 < 2) {
      InitialUpgrade(DAT_10033050,"Pikiner_turki(AL)ATTACK4");
      InitialUpgrade(DAT_10033050,"Pikiner_turki(AL)SHIELD4");
      InitialUpgrade(DAT_10033050,"Pehota_turki(AL)ATTACK4");
      InitialUpgrade(DAT_10033050,"Pehota_turki(AL)SHIELD4");
      InitialUpgrade(DAT_10033050,"Mameluk(AL)ATTACK4");
      InitialUpgrade(DAT_10033050,"Mameluk(AL)SHIELD4");
    }
    if (DAT_100390a0 < 3) {
      InitialUpgrade(DAT_10033050,"Pikiner_turki(AL)ATTACK4");
      InitialUpgrade(DAT_10033050,"Pikiner_turki(AL)SHIELD4");
      InitialUpgrade(DAT_10033050,"Pehota_turki(AL)ATTACK4");
      InitialUpgrade(DAT_10033050,"Pehota_turki(AL)SHIELD4");
      InitialUpgrade(DAT_10033050,"Mameluk(AL)ATTACK4");
      InitialUpgrade(DAT_10033050,"Mameluk(AL)SHIELD4");
    }
    SelectUnits(&DAT_10038fd8,0);
    SelSendTo(0,&DAT_10039090,0xc3,0);
    SelSendTo(0,&DAT_10039098,0x40,0);
    SelectUnits(&DAT_10038fe0,0);
    SelSendTo(0,&DAT_10039090,0xc3,0);
    SelSendTo(0,&DAT_10038f88,0x40,0);
    SelectUnits(&DAT_10038f80,0);
    ShowPage("#PAGE0");
  }
  uVar2 = Trigg(7);
  if ((uVar2 & 0xff) == 0) goto LAB_100027fa;
  FUN_10005e50(&DAT_10038f00);
  FUN_10005e50(&DAT_10038f28);
  FUN_10005e50(&DAT_10038f50);
  uVar2 = Trigg(2);
  if ((uVar2 & 0xff) != 0) {
    iVar5 = GetUnitsAmount1(&DAT_10038f88,&DAT_10038f80);
    if (0 < iVar5) {
      uVar2 = AskQuestion("#PAGE1");
      if ((uVar2 & 0xff) == 0) {
        for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
          ((long long *)&DAT_10038a34)[local_10 * 0x25] = 1;
          ((long long *)&DAT_10038a10)[local_10] = (char)local_10;
        }
        SetTrigg(3,0);
      }
      else {
        for (local_c = 0; local_c < 0x18; local_c = local_c + 1) {
          ((long long *)&DAT_10038a34)[local_c * 0x25] = 1;
          ((long long *)&DAT_10038a10)[local_c] = (char)local_c;
        }
      }
      SetTrigg(2,0);
    }
  }
  uVar2 = Trigg(3);
  if ((uVar2 & 0xff) == 2) {
    iVar5 = GetUnitsAmount1(&DAT_10038f88,&DAT_10038f80);
    if (0 < iVar5) {
      for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
        ((long long *)&DAT_10038a34)[(local_14 + 0xc) * 0x25] = 1;
        ((long long *)&DAT_10038a10)[local_14] = (char)local_14 + '\f';
      }
      SetTrigg(3,0);
    }
  }
  uVar2 = Trigg(2);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = TimerDoneFirst(2);
    if ((uVar2 & 0xff) != 0) {
      FUN_100018d0(&DAT_10038f80);
      local_18 = 0;
      local_30 = uVar7;
      while( 1 ) {
        DAT_10038a0c = (int)((unsigned long long)uVar7 >> 0x20);
        DAT_10038a08 = (int)uVar7;
        if (0x17 < local_18) break;
        if (((long long *)&DAT_10038a10)[local_18] != -1) {
          FUN_100057c0((int)(((unsigned char *)&DAT_10038a28) +
                                          (unsigned int)(byte)((long long *)&DAT_10038a10)[local_18] * 0x25));
          uVar7 = (int)DAT_10038a08;
          if (cVar1 != '\0') {
            if (((long long *)&DAT_10038a34)[(unsigned int)(byte)((long long *)&DAT_10038a10)[local_18] * 0x25] == '\x01') {
              FUN_10005490(((unsigned char *)&DAT_10038a28) + (unsigned int)(byte)((long long *)&DAT_10038a10)[local_18] * 0x25,
                                 DAT_10038a08,DAT_10038a0c,0x46);
              FUN_10005870(((unsigned char *)&DAT_10038a28) +
                                                 (unsigned int)(byte)((long long *)&DAT_10038a10)[local_18] * 0x25,
                                                 local_38);
              DAT_10038a08 = *piVar3;
              DAT_10038a0c = piVar3[1];
            }
            else {
              FUN_10005280(((unsigned char *)&DAT_10038a28) + (unsigned int)(byte)((long long *)&DAT_10038a10)[local_18] * 0x25);
            }
            iVar5 = FUN_10005830((int)(((unsigned char *)&DAT_10038a28) +
                                            (unsigned int)(byte)((long long *)&DAT_10038a10)[local_18] * 0x25));
            iVar5 = GetUnitsAmount1(&DAT_10038f90,iVar5);
            iVar4 = FUN_10005830((int)(((unsigned char *)&DAT_10038a28) +
                                            (unsigned int)(byte)((long long *)&DAT_10038a10)[local_18] * 0x25));
            iVar4 = GetTotalAmount0(iVar4);
            uVar7 = (int)DAT_10038a08;
            if (iVar5 == iVar4) {
              ((long long *)&DAT_10038a34)[(unsigned int)(byte)((long long *)&DAT_10038a10)[local_18] * 0x25] = 3;
              uVar8 = 0;
              iVar5 = FUN_10005830((int)(((unsigned char *)&DAT_10038a28) +
                                              (unsigned int)(byte)((long long *)&DAT_10038a10)[local_18] * 0x25));
              SelectUnits(iVar5,uVar8);
              SelSendTo(4,&DAT_10038f98,0,0);
              uVar7 = (int)DAT_10038a08;
            }
          }
        }
        local_18 = local_18 + 1;
      }
      RunTimer(2,0x14);
    }
  }
  uVar2 = TimerDoneFirst(3);
  if ((uVar2 & 0xff) != 0) {
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
      FUN_100013f0();
      *(int *)(((unsigned char *)&DAT_10038978) + local_1c * 0x14) = uVar8;
    }
    RunTimer(3,2000);
  }
  uVar2 = TimerDoneFirst(4);
  if ((uVar2 & 0xff) != 0) {
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      FUN_100059a0((int)(((unsigned char *)&DAT_10038968) + local_20 * 0x14));
    }
    RunTimer(4,100);
  }
  uVar2 = Trigg(8);
  if ((uVar2 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10038f90,4);
    if (iVar5 < 1) {
      iVar5 = GetUnitsAmount0(&DAT_10038f90,0);
      if (iVar5 < 1) goto LAB_10002379;
    }
    SelectUnits(&DAT_10038fd0,0);
    SelOpenGates(3);
    SetTrigg(8,0);
  }
LAB_10002379:
  uVar2 = Trigg(8);
  if ((uVar2 & 0xff) == 0) {
    iVar5 = GetUnitsAmount0(&DAT_10038f90,4);
    if (iVar5 < 1) {
      iVar5 = GetUnitsAmount0(&DAT_10038f90,0);
      if (iVar5 < 1) {
        SelectUnits(&DAT_10038fd0,0);
        SelCloseGates(3);
        SetTrigg(8,0);
      }
    }
  }
  uVar2 = Trigg(3);
  if ((uVar2 & 0xff) == 0) {
    iVar5 = GetUnitsAmount0(&DAT_10038f98,4);
    if (0x28 < iVar5) {
      SetTrigg(3,0);
      ShowPage("#PAGE2");
    }
  }
  uVar2 = TimerDoneFirst(7);
  if ((uVar2 & 0xff) != 0) {
    RunTimer(7,300);
    local_24 = 0;
    for (local_28 = 0; local_28 < 0x18; local_28 = local_28 + 1) {
      if (((long long *)&DAT_10038a34)[local_28 * 0x25] == '\x03') {
        iVar5 = FUN_10005830((int)(((unsigned char *)&DAT_10038a28) + local_28 * 0x25));
        iVar5 = GetTotalAmount0(iVar5);
        local_24 = local_24 + iVar5;
      }
    }
    if ((3 - DAT_100390a0) * -8 + 0x5f < local_24) {
      ShowPageParam("#PAGE4",local_24);
      ShowVictory();
      FreeTimer(1);
      FreeTimer(2);
      FreeTimer(3);
      FreeTimer(4);
      FreeTimer(4);
      FreeTimer(6);
      FreeTimer(7);
      SetTrigg(7,0);
    }
    iVar5 = GetUnitsAmount0(&DAT_10038e00,4);
    if ((3 - DAT_100390a0) * 4 < iVar5) {
      uVar8 = GetUnitsAmount0(&DAT_10038e00,4);
      ShowPageParam("#PAGE3",uVar8);
      LooseGame();
      FreeTimer(1);
      FreeTimer(2);
      FreeTimer(3);
      FreeTimer(4);
      FreeTimer(4);
      FreeTimer(6);
      FreeTimer(7);
      SetTrigg(7,0);
    }
    iVar5 = GetTotalAmount0(&DAT_10038f80);
    if (iVar5 < 1) {
      ShowPage("#PAGE5");
      LooseGame();
      FreeTimer(1);
      FreeTimer(2);
      FreeTimer(3);
      FreeTimer(4);
      FreeTimer(4);
      FreeTimer(6);
      FreeTimer(7);
      SetTrigg(7,0);
    }
  }
LAB_100027fa:
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
