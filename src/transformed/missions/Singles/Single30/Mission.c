#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
long long DAT_1003001c = 0;
long long DAT_10030020 = 0;
long long DAT_10030024 = 0;
long long DAT_10030028 = 0;
char DAT_100301d0[] = "ZG15";
char DAT_100301e4[] = "ZG14";
char DAT_100301f8[] = "ZG13";
char DAT_10030224[] = "ZG24";
char DAT_10030238[] = "ZG23";
char DAT_1003024c[] = "ZG22";
char DAT_10030290[] = "Z4";
char DAT_10030294[] = "Z3";
char DAT_10030298[] = "Z2";
char DAT_1003029c[] = "Z1";
char DAT_100302a0[] = "ZG12";
char DAT_100302b4[] = "GK";
long long DAT_10035778 = 0;
long long DAT_10035798 = 0;
long long DAT_100357a0 = 0;
long long DAT_100357c0 = 0;
unsigned char DAT_100357c8[256] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10035cc8 = 0;
long long DAT_10035d00 = 0;
long long DAT_10035d38 = 0;
long long DAT_10035d40 = 0;
long long DAT_10035d60 = 0;
long long DAT_10035d68 = 0;
long long DAT_10035d70 = 0;
long long DAT_10035d78 = 0;
long long DAT_10035d98 = 0;
long long DAT_10035da0 = 0;
long long DAT_10035da8 = 0;
long long DAT_10035db0 = 0;
long long DAT_10035db8 = 0;
long long DAT_10035dc0 = 0;
long long DAT_10035dc8 = 0;
long long DAT_10035df8 = 0;
int DAT_10035e00 = 0;
int DAT_10035e04 = 0;
long long DAT_10035e08 = 0;
long long DAT_10035e40 = 0;
long long DAT_10035e60 = 0;
long long DAT_10035e80 = 0;
long long DAT_10035eb8 = 0;
unsigned char DAT_10035ef0[512] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x91, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBE, 0x97, 0x03, 0x00, 0x3C, 0x94, 0x03, 0x00, 0x3C, 0x90, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEA, 0x9C, 0x03, 0x00, 0xB4, 0x92, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x98, 0x03, 0x00, 0xDA, 0x98, 0x03, 0x00, 0xD0, 0x9C, 0x03, 0x00, 0xBE, 0x9C, 0x03, 0x00, 0xAC, 0x9C, 0x03, 0x00, 0x9A, 0x9C, 0x03, 0x00, 0x80, 0x9C, 0x03, 0x00, 0x72, 0x9C, 0x03, 0x00, 0x5E, 0x9C, 0x03, 0x00, 0x4E, 0x9C, 0x03, 0x00, 0x38, 0x9C, 0x03, 0x00, 0x22, 0x9C, 0x03, 0x00, 0x10, 0x9C, 0x03, 0x00, 0xFE, 0x9B, 0x03, 0x00, 0xEE, 0x9B, 0x03, 0x00, 0xE2, 0x9B, 0x03, 0x00, 0xD2, 0x9B, 0x03, 0x00, 0xC2, 0x9B, 0x03, 0x00, 0xB2, 0x9B, 0x03, 0x00, 0xAA, 0x9B, 0x03, 0x00, 0x98, 0x9B, 0x03, 0x00, 0x86, 0x9B, 0x03, 0x00, 0x70, 0x9B, 0x03, 0x00, 0x64, 0x9B, 0x03, 0x00, 0x5A, 0x9B, 0x03, 0x00, 0x4E, 0x9B, 0x03, 0x00, 0x3E, 0x9B, 0x03, 0x00, 0x30, 0x9B, 0x03, 0x00, 0x24, 0x9B, 0x03, 0x00, 0x08, 0x9B, 0x03, 0x00, 0xF8, 0x9A, 0x03, 0x00, 0xDC, 0x9A, 0x03, 0x00, 0xC4, 0x9A, 0x03, 0x00, 0xAC, 0x9A, 0x03, 0x00, 0x9A, 0x9A, 0x03, 0x00, 0x82, 0x9A, 0x03, 0x00, 0x74, 0x9A, 0x03, 0x00, 0x68, 0x9A, 0x03, 0x00, 0x5A, 0x9A, 0x03, 0x00, 0x4C, 0x9A, 0x03, 0x00, 0x32, 0x9A, 0x03, 0x00, 0xC8, 0x97, 0x03, 0x00, 0xDA, 0x97, 0x03, 0x00, 0xE8, 0x97, 0x03, 0x00, 0xF6, 0x97, 0x03, 0x00};
long long DAT_10035ef8 = 0;
long long DAT_10035f40 = 0;
long long DAT_10035f80 = 0;
long long DAT_10035fa0 = 0;
long long DAT_10035fb8 = 0;
int DAT_100360a0 = 0;
int DAT_100360a4 = 0;
int DAT_100360a8 = 0;
int DAT_100360ac = 0;
long long DAT_100360b0 = 0;
long long DAT_100360d0 = 0;
long long DAT_100360f0 = 0;
long long DAT_10036128 = 0;
long long DAT_10036150 = 0;
long long DAT_10036178 = 0;
long long DAT_100361a0 = 0;
long long DAT_100361c8 = 0;
long long DAT_100361f0 = 0;
long long DAT_10036218 = 0;
long long DAT_10036240 = 0;
long long DAT_10036268 = 0;
int DAT_100364d4 = 0;
long long DAT_100364d8 = 0;
int DAT_1003001c_ovl = 1092616192;
int DAT_10030020_ovl = 1101004800;
int DAT_10030024_ovl = 1112014848;
int DAT_10030028_ovl = 1120403456;

/* Stubs for missing internal functions */
int FUN_10004860() { return 0; }
int FUN_10005700() { return 0; }


/* Forward declarations */
void FUN_100013b0(void);
void FUN_100014e0(void);
void FUN_10001580(char param_1);
void FUN_10001780(void *param_1);
void FUN_10001ab0(int *param_1);
void 
FUN_10001bb0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10001c50(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10001d00(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10001dc0(char *param_1);
void  FUN_10001f00(char *param_1);
void  FUN_10001fd0(char *param_1);
void 
FUN_100020a0(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void  FUN_10002170(int param_1);
void  FUN_100021f0(int param_1);
void  FUN_10002270(int param_1);
int  FUN_10002390(int param_1);
void  FUN_100023d0(int param_1);
void  FUN_10002450(void *this_ptr,int param_1);
int  FUN_10002490(int param_1);
void  FUN_100024d0(int param_1);
void  FUN_10002540(void *this_ptr,int param_1);
void  FUN_10002580(int *param_1);
void  FUN_100025f0(void *this_ptr,int param_1);
void  FUN_10002690(int param_1);
void  FUN_10002ab0(int param_1);
int  FUN_10002bd0(int param_1);
int  FUN_10002c10(int param_1);
void  FUN_10002c50(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10002cf0(void *this_ptr,int param_1);
void  FUN_10002d70(void *this_ptr,int param_1);
int  FUN_10002e00(int param_1);
void FUN_10002e30(void);
void FUN_100035a0(void);
void FUN_10004320(void);
void FUN_10004350(void);
void FUN_10004360(void);
int FUN_100043b0(int param_1);
int FUN_100043d0(char *param_1,byte *param_2);

void OnInit();
void ProcessScenary();


void FUN_100013b0(void)

{
  int iVar1;
  int *puVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
local_8 = 0;
  local_c = 0;
  local_10 = 0;
  do {
    if (5 < local_10) {
      return;
    }
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      iVar1 = GetUnitsAmount0(((unsigned char *)&DAT_10035ef0) + local_14 * 8 + local_10 * 0x40,0);
      if (iVar1 < 1) {
        iVar1 = GetUnitsAmount0(((unsigned char *)&DAT_10035ef0) + local_14 * 8 + local_10 * 0x40,1);
        if (0 < iVar1) goto LAB_1000145c;
      }
      else {
LAB_1000145c:
        local_8 = local_10;
        local_c = local_14;
        local_14 = 6;
        local_10 = 8;
      }
    }
    local_10 = local_10 + 1;
  } while( 1 );
}





void FUN_100014e0(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = &DAT_100357c8;
  for (local_c = 0; local_c < 0x28; local_c = local_c + 1) {
    FUN_100024d0((int)(((unsigned char *)&DAT_100357c8) + local_c * 0x20));
    if (iVar1 == 0) {
      local_8 = ((unsigned char *)&DAT_100357c8) + local_c * 0x20;
      local_c = 0x28;
    }
  }
  local_8 = (int *)0x10001554;
  return;
}





void __cdecl FUN_10001580(char param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
uVar1 = Trigg((int)param_1);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetResource(3,1);
    if (2000 < iVar2) {
      FUN_10002c50(&DAT_100360f0,0,2,&DAT_10035d60);
      FUN_10002c50(&DAT_10035cc8,0,2,&DAT_10035d60);
      FUN_10002c50(&DAT_100360f0,1,2,&DAT_10035d60);
      FUN_10002c50(&DAT_10035cc8,1,2,&DAT_10035d60);
      FUN_10002c50(&DAT_10035eb8,0,2,&DAT_10035d60);
      FUN_10002c50(&DAT_10035eb8,1,2,&DAT_10035d60);
      AddResource(3,1,0xfffff830);
      SetTrigg(param_1,0);
    }
  }
  uVar1 = Trigg(param_1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsByNation(&DAT_10035d60,2);
    if (iVar2 == 0x18) {
      FUN_100014e0();
      FUN_100025f0(local_8,&DAT_10035d60);
      FUN_10002540(local_8,&DAT_10035ef8);
      FUN_10002450(local_8,5);
      SetTrigg(param_1,1);
    }
  }
  local_8 = (void *)0x1000170f;
  return;
}







void __cdecl FUN_10001780(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  for (local_20 = 0; local_20 < 0x28; local_20 = local_20 + 1) {
    FUN_100024d0((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
    local_8 = local_8 + iVar1;
    iVar1 = FUN_10002490((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
    if (iVar1 == 1) {
      FUN_100024d0((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
      local_c = local_c + iVar1;
    }
    iVar1 = FUN_10002490((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
    if (iVar1 == 2) {
      FUN_100024d0((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
      local_10 = local_10 + iVar1;
    }
    iVar1 = FUN_10002490((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
    if (iVar1 == 4) {
      iVar1 = FUN_10002c10((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
      if (iVar1 == DAT_100360a4) {
        FUN_100024d0((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
        local_14 = local_14 + iVar1;
      }
      iVar1 = FUN_10002c10((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
      if (iVar1 == DAT_100360a8) {
        FUN_100024d0((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
        local_18 = local_18 + iVar1;
      }
      iVar1 = FUN_10002c10((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
      if (iVar1 == DAT_100360ac) {
        FUN_100024d0((int)(((unsigned char *)&DAT_100357c8) + local_20 * 0x20));
        local_1c = local_1c + iVar1;
      }
    }
  }
  if (DAT_10030024_ovl <= ((float)local_c / (float)local_8) * DAT_10030028_ovl) {
    if (DAT_10030020_ovl <= ((float)local_10 / (float)local_8) * DAT_10030028_ovl) {
      if (DAT_1003001c_ovl <= ((float)local_14 / (float)local_8) * DAT_10030028_ovl) {
        if (DAT_1003001c_ovl <= ((float)local_18 / (float)local_8) * DAT_10030028_ovl) {
          if (((float)local_1c / (float)local_8) * DAT_10030028_ovl < DAT_1003001c_ovl) {
            FUN_10002450(param_1,4);
            FUN_10002540(param_1,DAT_100360ac);
          }
        }
        else {
          FUN_10002450(param_1,4);
          FUN_10002540(param_1,DAT_100360a8);
        }
      }
      else {
        FUN_10002450(param_1,4);
        FUN_10002540(param_1,DAT_100360a4);
      }
    }
    else {
      FUN_10002450(param_1,2);
    }
  }
  else {
    FUN_10002450(param_1,1);
  }
  return;
}





void __cdecl FUN_10001ab0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int local_4c [16];
  int *local_c;
  int local_8;
FUN_100024d0((int)param_1);
  if (0 < iVar3) {
    FUN_10002ab0((int)param_1);
    if (cVar1 != '\0') {
      for (local_8 = 0; local_8 < 0x28; local_8 = local_8 + 1) {
        local_c = ((unsigned char *)&DAT_100357c8) + local_8 * 0x20;
        FUN_100024d0((int)local_c);
        if ((0 < iVar3) && (param_1 != local_c)) {
          FUN_10002ab0((int)local_c);
          if (cVar1 != '\0') {
            iVar3 = FUN_10002490((int)param_1);
            iVar2 = FUN_10002490((int)local_c);
            if (iVar3 == iVar2) {
              iVar3 = FUN_10002bd0((int)local_c);
              FUN_100025f0(param_1,iVar3);
              FUN_10002450(local_c,0);
            }
          }
        }
      }
    }
  }
  return;
}





void 
FUN_10001bb0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((int)this_ptr + 6) = param_1;
  *(int *)((int)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  OnInit(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10001c28;
  return;
}





void 
FUN_10001c50(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  RegisterZone((int)local_8 + 0x1e,param_2);
  FUN_10001bb0(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10001cd2;
  return;
}





void  FUN_10001d00(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((int)local_8 + 0x1e,&DAT_10035d38,(int)local_8 + 0x16,300);
  FUN_10001bb0(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10001d8f;
  return;
}





void  FUN_10001dc0(char *param_1)

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
      FUN_10001f00(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10001fd0(local_8);
      SetTrigg(local_8[2],1);
    }
  }
  local_8 = (char *)0x10001ebb;
  return;
}





void  FUN_10001f00(char *param_1)

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
  local_8 = (char *)0x10001f9a;
  return;
}





void  FUN_10001fd0(char *param_1)

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
  local_8 = (char *)0x1000206a;
  return;
}





void 
FUN_100020a0(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x14,param_1);
  OnInit(local_8 + 5);
  local_8[1] = uVar1;
  local_8[2] = param_4;
  local_8[3] = param_3;
  local_8[4] = param_2;
  uVar1 = GetUnitsByNation(local_8 + 5,*(char *)(local_8 + 1));
  *local_8 = uVar1;
  local_8 = (int *)0x1000213c;
  return;
}





void  FUN_10002170(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0x14,*(char *)(param_1 + 4));
  return;
}





void  FUN_100021f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetUnitsByNation(param_1 + 0x14,*(char *)(param_1 + 4));
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10002270(int param_1)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_4c [16];
  unsigned int local_c;
  int local_8;
local_8 = param_1;
  FUN_100021f0(param_1);
  if (cVar1 != '\0') {
    for (local_c = 0; (int)local_c < 8; local_c = local_c + 1) {
      iVar3 = GetUnitsByNation(local_8 + 0x14,local_c & 0xff);
      if ((0 < iVar3) && (local_c != *(unsigned int *)(local_8 + 4))) {
        SelectUnits1(2,local_8 + 0x14,0);
        SelDie(2);
      }
    }
    FUN_10002170(local_8);
    AddResource(*(char *)(local_8 + 0x10),*(char *)(local_8 + 0xc),uVar2);
  }
  return;
}





int  FUN_10002390(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0x14;
}





void  FUN_100023d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1 + 8);
  *(int *)(local_8 + 0x10) = 0;
  *(int *)(local_8 + 0x14) = 2;
  *(int *)(local_8 + 0x18) = 0;
  return;
}





void  FUN_10002450(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





int  FUN_10002490(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 0x10);
}





void  FUN_100024d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 8,*(char *)(param_1 + 0x14));
  return;
}





void  FUN_10002540(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 4) = param_1;
  return;
}





void  FUN_10002580(int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = param_1;
  FUN_100024d0((int)param_1);
  local_c = *local_8 - local_c;
  FUN_100024d0((int)local_8);
  *local_8 = iVar1;
  local_8 = (int *)0x100025cc;
  return;
}





void  FUN_100025f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  iVar1 = GetUnitsByNation(param_1,*(char *)((int)this_ptr + 0x14));
  *local_8 = *local_8 + iVar1;
  RemoveGroup(param_1,local_8 + 2);
  local_8 = (int *)0x10002660;
  return;
}





void  FUN_10002690(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = param_1;
  FUN_100024d0(param_1);
  if (iVar2 < 1) {
    *(int *)(local_8 + 0x10) = 0;
  }
  else {
    local_c = *(int *)(local_8 + 0x10) + -1;
    switch(local_c) {
    case 0:
      iVar2 = GetUnitsAmount1(DAT_10035e00,local_8 + 8);
      if (iVar2 < 1) {
        SelectUnits(local_8 + 8,0);
        SelSendAndKill(2,DAT_10035e00,0,0);
      }
      else {
        iVar2 = GetUnitsAmount0(DAT_10035e00,0);
        if (iVar2 < 1) {
          iVar2 = GetUnitsAmount0(DAT_10035e00,1);
          if (0 < iVar2) {
            AttackEnemyInZone(local_8 + 8,DAT_10035e00,1);
          }
        }
        else {
          AttackEnemyInZone(local_8 + 8,DAT_10035e00,0);
        }
      }
      break;
    case 1:
      iVar2 = GetUnitsAmount1(DAT_10035e04,local_8 + 8);
      if (iVar2 < 1) {
        SelectUnits(local_8 + 8,0);
        SelSendAndKill(*(char *)(local_8 + 0x14),DAT_10035e04,0,0);
      }
      else {
        iVar2 = GetUnitsAmount0(DAT_10035e04,0);
        if (iVar2 < 1) {
          iVar2 = GetUnitsAmount0(DAT_10035e04,1);
          if (0 < iVar2) {
            AttackEnemyInZone(local_8 + 8,DAT_10035e04,1);
          }
        }
        else {
          AttackEnemyInZone(local_8 + 8,DAT_10035e04,0);
        }
      }
      break;
    case 2:
      SelectUnits(local_8 + 8,0);
      SelSendTo(*(char *)(local_8 + 0x14),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x10) = 0;
      break;
    case 3:
      SelectUnits(local_8 + 8,0);
      SelSendTo(*(char *)(local_8 + 0x14),*(int *)(local_8 + 4),0,0);
      break;
    case 4:
      SelectUnits(local_8 + 8,0);
      SelSendTo(*(char *)(local_8 + 0x14),*(int *)(local_8 + 4),0,0);
      FUN_10002ab0(local_8);
      if (cVar1 != '\0') {
        *(int *)(local_8 + 0x10) = 0;
      }
    }
  }
  return;
}





void  FUN_10002ab0(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(*(int *)(param_1 + 4),param_1 + 8);
  FUN_100024d0(local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  if (*(int *)(local_8 + 0x10) == 1) {
    iVar2 = GetUnitsAmount1(DAT_10035e00,local_8 + 8);
    FUN_100024d0(local_8);
    if (iVar2 == iVar1) {
      local_c = 1;
    }
  }
  if (*(int *)(local_8 + 0x10) == 2) {
    iVar2 = GetUnitsAmount1(DAT_10035e04,local_8 + 8);
    FUN_100024d0(local_8);
    if (iVar2 == iVar1) {
      local_c = 1;
    }
  }
  return;
}





int  FUN_10002bd0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 8;
}





int  FUN_10002c10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





void  FUN_10002c50(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    ProduceUnitFast(local_8,(int)local_8 + param_1 * 8 + 8,param_3,
                    *(int *)((int)local_8 + 0x30));
  }
  local_8 = (void *)0x10002cc2;
  return;
}





void  FUN_10002cf0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
*(int *)((int)this_ptr + 0x2c) = 0;
  *(int *)((int)this_ptr + 0x30) = 400;
  local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10002d48;
  return;
}





void  FUN_10002d70(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
if (*(int *)((int)this_ptr + 0x2c) < 4) {
    local_8 = this_ptr;
    RegisterUnitType((int)this_ptr + *(int *)((int)this_ptr + 0x2c) * 8 + 8,param_1);
    *(int *)((int)local_8 + 0x2c) = *(int *)((int)local_8 + 0x2c) + 1;
  }
  local_8 = (void *)0x10002dd6;
  return;
}





int  FUN_10002e00(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void FUN_10002e30(void)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int *puVar4;
  int local_18;
  char local_14 [12];
  int local_8;
SetPlayerName(0,"AUSTRIANS");
  SetPlayerName(1,"AUSTRIANS");
  SetPlayerName(2,"PRUSSIA");
  RegisterVar(&DAT_100360a0,4);
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    RegisterVar(((unsigned char *)&DAT_100357c8) + local_8 * 0x20,0x20);
  }
  RegisterUnits(&DAT_10035d98,DAT_100302b4);
  RegisterUnits(&DAT_100357c0,"GStable");
  RegisterZone(&DAT_10035d38,DAT_100302a0);
  RegisterZone(&DAT_10035db0,DAT_1003029c);
  RegisterZone(&DAT_10035db8,DAT_10030298);
  RegisterZone(&DAT_10035dc0,DAT_10030294);
  RegisterZone(&DAT_10035dc8,DAT_10030290);
  RegisterDynGroup(&DAT_10035d60);
  RegisterDynGroup(&DAT_10035d68);
  RegisterDynGroup(&DAT_10035d70);
  RegisterDynGroup(&DAT_10035798);
  RegisterDynGroup(&DAT_10035df8);
  RegisterUnitType(&DAT_10035da0,"Kreposnoi_pruss(au)");
  RegisterUnitType(&DAT_10035da8,"Kreposnoi_pruss(GE)");
  FUN_10001d00(&DAT_10036240,"GGate21",2,1);
  FUN_10001c50(&DAT_10036268,"GGate22",DAT_1003024c,2,2);
  FUN_10001c50(&DAT_100361f0,"GGate23",DAT_10030238,2,3);
  FUN_10001c50(&DAT_10036218,"GGate24",DAT_10030224,2,4);
  FUN_10001d00(&DAT_100361a0,"GGate11",0,5);
  FUN_10001c50(&DAT_100361c8,"GGate12",DAT_100302a0,0,6);
  FUN_10001c50(&DAT_10036150,"GGate13",DAT_100301f8,0,7);
  FUN_10001c50(&DAT_10036178,"GGate14",DAT_100301e4,0,8);
  FUN_10001c50(&DAT_10036128,"GGate15",DAT_100301d0,0,9);
  FUN_100020a0(&DAT_10035e40,"GVIron",3,1,4);
  FUN_100020a0(&DAT_100357a0,"GCoal2",3,1,2);
  FUN_100020a0(&DAT_100360b0,"GPersant2",3,1,4);
  FUN_100020a0(&DAT_10035778,"GCity2",3,1,6);
  FUN_10002cf0(&DAT_100360f0,"GStable2");
  FUN_10002d70(&DAT_100360f0,"Konni_Ricar(GE)");
  FUN_10002d70(&DAT_100360f0,"Dragun(GE)");
  FUN_10002cf0(&DAT_10035cc8,"GBarracks2");
  FUN_10002d70(&DAT_10035cc8,"Pikiner_evro(GE)");
  FUN_10002d70(&DAT_10035cc8,"Mushketer_ev(GE)");
  FUN_10002cf0(&DAT_10035eb8,"GDip2");
  FUN_10002d70(&DAT_10035eb8,"Grenader_DIP(GE)");
  FUN_10002d70(&DAT_10035eb8,"Strelec_Algir_DIP(GE)");
  FUN_10002cf0(&DAT_10035e08,"GStable1");
  FUN_10002d70(&DAT_10035e08,"Konni_Ricar(au)");
  FUN_10002d70(&DAT_10035e08,"Dragun(au)");
  FUN_10002cf0(&DAT_10035d00,"GBarracks1");
  FUN_10002d70(&DAT_10035d00,"Pikiner_evro(au)");
  FUN_10002d70(&DAT_10035d00,"Mushketer_avstr(au)");
  FUN_100020a0(&DAT_100360d0,"GPersant1",0,3,10);
  FUN_100020a0(&DAT_10035d40,"GMCoal1",0,5,3);
  FUN_100020a0(&DAT_10035d78,"GMIron1",0,4,3);
  FUN_10002cf0(&DAT_10035e80,"GDip1");
  FUN_10002d70(&DAT_10035e80,"Grenader_DIP(au)");
  FUN_10002d70(&DAT_10035e80,"Strelec_Algir_DIP(au)");
  puVar4 = &DAT_10035db0;
  uVar1 = FUN_10002e00(&DAT_10035e08);
  SetDestPoint(uVar1,puVar4);
  puVar4 = &DAT_10035db0;
  uVar1 = FUN_10002e00(&DAT_10035d00);
  SetDestPoint(uVar1,puVar4);
  puVar4 = &DAT_10035db0;
  uVar1 = FUN_10002e00(&DAT_10035e80);
  SetDestPoint(uVar1,puVar4);
  ChangeFriends(0,3);
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      FUN_100043d0(local_14,(byte *)"%02d%02d");
      RegisterZone(((unsigned char *)&DAT_10035ef0) + local_18 * 8 + local_8 * 0x40,local_14);
    }
  }
  for (local_8 = 0; local_8 < 0x28; local_8 = local_8 + 1) {
    FUN_100023d0((int)(((unsigned char *)&DAT_100357c8) + local_8 * 0x20));
  }
  FUN_100023d0(0x10035e60);
  DAT_100360a4 = &DAT_10035f40;
  DAT_100360a8 = &DAT_10035f80;
  DAT_100360ac = &DAT_10035fb8;
  return;
}





void FUN_100035a0(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_100360a0 = GetDiff(0);
    SetResource(0,3,DAT_100360a0 * -3000 + 10000);
    SetResource(0,1,DAT_100360a0 * -3000 + 10000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,DAT_100360a0 * -300 + 1000);
    SetResource(0,4,DAT_100360a0 * -300 + 1000);
    SetResource(3,3,0);
    SetResource(3,1,DAT_100360a0 * 500);
    SetResource(3,0,0);
    SetResource(3,2,0);
    SetResource(3,5,0);
    SetResource(3,4,0);
    SetLightSpot(&DAT_10035db8,1,1);
    SelectUnits(&DAT_10035d98,0);
    SetTrigg(99,0);
    iVar2 = FUN_10002390(0x100360b0);
    TakeFood(iVar2);
    iVar2 = FUN_10002390(0x100360d0);
    TakeFood(iVar2);
    SetLightSpot(&DAT_10035db0,1,1);
    SetLightSpot(&DAT_10035db8,1,2);
    SetLightSpot(&DAT_10035fa0,1,3);
    ShowPage("#PAGE0");
  }
  SaveSelectedUnits(0,&DAT_10035798,0);
  iVar2 = GetUnitsAmount0(&DAT_10035db0,1);
  if (0 < iVar2) {
    SelectUnitsInZone(&DAT_10035db0,1,0);
    SelChangeNation(1,0);
    SaveSelectedUnits(0,&DAT_10035798,0);
    SelectUnitsInZone(&DAT_10035db0,0,0);
    SaveSelectedUnits(0,&DAT_10035d70,0);
    FUN_100025f0(&DAT_10035e60,&DAT_10035d70);
    ClearSelection(0);
    SelectUnits(&DAT_10035798,0);
  }
  SelectUnitsType(&DAT_10035da8,0,0);
  SelDie(0);
  SelectUnitsType(&DAT_10035da0,2,0);
  SelDie(2);
  ClearSelection(0);
  SelectUnits(&DAT_10035798,0);
  for (local_8 = 0; local_8 < 0x28; local_8 = local_8 + 1) {
    FUN_10002580((int *)(((unsigned char *)&DAT_100357c8) + local_8 * 0x20));
    AddResource(0,1,iVar2 * 100);
    iVar2 = FUN_10002490((int)(((unsigned char *)&DAT_100357c8) + local_8 * 0x20));
    if (iVar2 == 0) {
      FUN_100024d0((int)(((unsigned char *)&DAT_100357c8) + local_8 * 0x20));
      if (0 < iVar2) {
        FUN_10001780(((unsigned char *)&DAT_100357c8) + local_8 * 0x20);
      }
    }
    else {
      FUN_10002690((int)(((unsigned char *)&DAT_100357c8) + local_8 * 0x20));
    }
    FUN_10001ab0(((unsigned char *)&DAT_100357c8) + local_8 * 0x20);
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10035db0,&DAT_10035d98);
    if (0 < iVar2) {
      local_c = AskMultilineQuestion(7,"#PAGE1",0,"FM7_0|FM7_1|FM7_2|FM7_3|FM7_4|FM7_5|FM_non");
      switch(local_c) {
      case 0:
        iVar2 = GetResource(0,1);
        if (iVar2 < 500) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,0xfffffe0c);
          FUN_10002c50(&DAT_10035d00,0,5,&DAT_10035d68);
        }
        break;
      case 1:
        iVar2 = GetResource(0,1);
        if (iVar2 < 700) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,0xfffffd44);
          FUN_10002c50(&DAT_10035d00,1,5,&DAT_10035d68);
        }
        break;
      case 2:
        iVar2 = GetResource(0,1);
        if (iVar2 < 2000) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,0xfffff830);
          FUN_10002c50(&DAT_10035e08,0,5,&DAT_10035d68);
        }
        break;
      case 3:
        iVar2 = GetResource(0,1);
        if (iVar2 < 3000) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,0xfffff448);
          FUN_10002c50(&DAT_10035e08,1,5,&DAT_10035d68);
        }
        break;
      case 4:
        iVar2 = GetResource(0,1);
        if (iVar2 < 300) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,0xfffffed4);
          FUN_10002c50(&DAT_10035e80,1,10,&DAT_10035d68);
        }
        break;
      case 5:
        iVar2 = GetResource(0,1);
        if (iVar2 < 500) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,0xfffffe0c);
          FUN_10002c50(&DAT_10035e80,0,10,&DAT_10035d68);
        }
        break;
      case 6:
        SetTrigg(0xb,0);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount1(&DAT_10035db0,&DAT_10035d98);
    if (iVar2 == 0) {
      SetTrigg(0xb,1);
    }
  }
  ProcessScenary();
  FUN_100013b0();
  FUN_10001dc0(&DAT_10036240);
  FUN_10001dc0(&DAT_10036268);
  FUN_10001dc0(&DAT_100361f0);
  FUN_10001dc0(&DAT_10036218);
  FUN_10001dc0(&DAT_100361a0);
  FUN_10001dc0(&DAT_100361c8);
  FUN_10001dc0(&DAT_10036150);
  FUN_10001dc0(&DAT_10036178);
  FUN_10001dc0(&DAT_10036128);
  FUN_10002270(0x10035e40);
  FUN_10002270(0x100357a0);
  FUN_10002270(0x100360b0);
  FUN_10002270(0x10035778);
  FUN_10002270(0x100360d0);
  FUN_10002270(0x10035d40);
  FUN_10002270(0x10035d78);
  FUN_10001580(10);
  FUN_10002580((int *)&DAT_10035e60);
  AddResource(3,1,iVar2 * 0x1e * (DAT_100360a0 + 1));
  uVar1 = NationIsErased(2);
  if ((uVar1 & 0xff) != 0) {
    ShowVictory();
  }
  uVar1 = NationIsErased(1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetTotalAmount0(&DAT_10035d98);
    if (0 < iVar2) goto LAB_10003f3e;
  }
  LooseGame();
LAB_10003f3e:
  return;
}







void FUN_10004320(void)

{
  FUN_10004360();
  return;
}





void FUN_10004350(void)

{
  return;
}





void FUN_10004360(void)

{
  return;
}





int __cdecl FUN_100043b0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_100364d4;
  DAT_100364d4 = param_1;
  return uVar1;
}





int __cdecl FUN_100043d0(char *param_1,byte *param_2)

{
  void *pcVar1;
  int iVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_10004860(2,0x1003041c,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_10004860(2,0x1003041c,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10005700(0,(int *)&local_24);
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





void ProcessScenary(void)

{
  int iVar1;
  int *puVar2;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
local_8 = 0;
  local_c = 0;
  local_10 = 0;
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      local_1c = GetUnitsAmount0(((unsigned char *)&DAT_10035ef0) + local_18 * 8 + local_14 * 0x40,0);
      iVar1 = GetUnitsAmount0(((unsigned char *)&DAT_10035ef0) + local_18 * 8 + local_14 * 0x40,1);
      local_1c = local_1c + iVar1 / 2;
      if (local_8 < local_1c) {
        local_c = local_14;
        local_10 = local_18;
        local_8 = local_1c;
      }
    }
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
