#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_1000e040 = 0;
int DAT_1000e048 = 20;
int DAT_1000f6c4 = 0;
int DAT_1000f6c8 = 0;
int DAT_1000f6cc = 0;
long long DAT_10012670 = 0;
long long DAT_10012678 = 0;
long long DAT_10012680 = 0;
long long DAT_10012688 = 0;
long long DAT_10012690 = 0;
long long DAT_10012698 = 0;
long long DAT_100126a0 = 0;
long long DAT_100126a8 = 0;
long long DAT_100126b0 = 0;
long long DAT_100126b8 = 0;
long long DAT_100126c0 = 0;
long long DAT_100126c8 = 0;
long long DAT_100126d0 = 0;
long long DAT_100126d8 = 0;
long long DAT_100126e0 = 0;
long long DAT_100126e8 = 0;
long long DAT_100126f0 = 0;
long long DAT_100126f8 = 0;
long long DAT_10012700 = 0;
long long DAT_10012708 = 0;
long long DAT_10012710 = 0;
long long DAT_10012718 = 0;
long long DAT_10012720 = 0;
long long DAT_10012728 = 0;
long long DAT_10012730 = 0;
long long DAT_10012738 = 0;
long long DAT_10012740 = 0;
long long DAT_10012748 = 0;
long long DAT_10012750 = 0;
long long DAT_10012758 = 0;
long long DAT_10012760 = 0;
long long DAT_10012768 = 0;
long long DAT_10012770 = 0;
long long DAT_10012778 = 0;
long long DAT_10012780 = 0;
long long DAT_10012788 = 0;
long long DAT_10012790 = 0;
long long DAT_10012798 = 0;
long long DAT_100127a0 = 0;
long long DAT_100127a8 = 0;
long long DAT_100127b0 = 0;
long long DAT_100127b8 = 0;
long long DAT_100127c0 = 0;
unsigned char DAT_100127c8[24] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_100127cc (*(long long *)((char *)DAT_100127c8 + 0x4))
int DAT_100127d0 = 0;
#define DAT_100127d1 (*(long long *)((char *)DAT_100127c8 + 0x9))
int DAT_100127d5 = 0;
unsigned char DAT_100127e0[24] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_100127e4 (*(long long *)((char *)DAT_100127e0 + 0x4))
int DAT_100127e8 = 0;
#define DAT_100127e9 (*(long long *)((char *)DAT_100127e0 + 0x9))
int DAT_100127ed = 0;
unsigned char DAT_100127f8[24] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_100127fc (*(long long *)((char *)DAT_100127f8 + 0x4))
int DAT_10012800 = 0;
#define DAT_10012801 (*(long long *)((char *)DAT_100127f8 + 0x9))
int DAT_10012805 = 0;
int DAT_10012810 = 0;
long long DAT_10012814 = 0;
int DAT_10012818 = 0;
long long DAT_10012819 = 0;
int DAT_1001281d = 0;
int DAT_10012828 = 0;
long long DAT_1001282c = 0;
int DAT_10012830 = 0;
long long DAT_10012831 = 0;
int DAT_10012835 = 0;
unsigned char DAT_10012840[464] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_10012849 (*(long long *)((char *)DAT_10012840 + 0x9))
#define DAT_10012882 (*(long long *)((char *)DAT_10012840 + 0x42))
#define DAT_10012948 (*(long long *)((char *)DAT_10012840 + 0x108))
long long DAT_10012a10 = 0;
long long DAT_10012ae0 = 0;
long long DAT_10012ae8 = 0;
long long DAT_10012af0 = 0;
int DAT_10012afc = 0;
int DAT_10012b00 = 0;
int DAT_10012b04 = 0;
long long DAT_10012b24 = 0;
int DAT_100127c8_ovl = 0;
int DAT_100127cc_ovl = 0;
int DAT_100127d1_ovl = 0;
int DAT_100127e0_ovl = 0;
int DAT_100127e4_ovl = 0;
int DAT_100127e9_ovl = 0;
int DAT_100127f8_ovl = 0;
int DAT_100127fc_ovl = 0;
int DAT_10012801_ovl = 0;
int DAT_10012814_ovl = 0;
int DAT_10012819_ovl = 0;
int DAT_1001282c_ovl = 0;
int DAT_10012831_ovl = 0;
int DAT_10012b24_ovl = 0;

/* Stubs for missing internal functions */
int FUN_100042bc() { return 0; }
int FUN_10004c6d() { return 0; }
int FUN_1000519f() { return 0; }
int FUN_100051ef() { return 0; }


/* Forward declarations */
void  FUN_10001de0(void *this_ptr,int param_1,char param_2);
int FUN_10001eb0(intptr_t param_1,int param_2);
void FUN_10001f00(int param_1,int param_2,int param_3,int param_4,int param_5);
BOOL FUN_10002110(int param_1);
void FUN_10002150(int param_1,int param_2,unsigned short *param_3,int param_4,unsigned int param_5);
void FUN_100022c0(int param_1,unsigned int param_2);
int FUN_10002440(unsigned int param_1,int param_2,int param_3,int param_4);
void FUN_100025a0(int param_1,int param_2,int param_3,int *param_4,int param_5);
void  FUN_100025e0(int param_1);
void  FUN_10002610(void *this_ptr,int *param_1,unsigned int param_2,int *param_3);
void FUN_10002820(int param_1,int param_2,char param_3);
void FUN_100037e0(intptr_t param_1,int param_2,char param_3);
void FUN_10003a0b(int *param_1);
int FUN_10003c81(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10003dd2(void);
void FUN_10003e75(void);
void FUN_10003e8d(void);

void OnInit();
void ProcessScenary();


void  FUN_10001de0(void *this_ptr,int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = GetTotalAmount0(*(int *)this_ptr);
  if ((iVar2 != 0) && (param_1 != 0)) {
    cVar1 = TimerDone(*(char *)((intptr_t)this_ptr + 9));
    if (cVar1 != '\0') {
      RunTimer(*(char *)((intptr_t)this_ptr + 9),*(int *)((intptr_t)this_ptr + 0xd));
      if (param_2 != '\0') {
        CreateObject0(param_1,&DAT_10012758,&DAT_10012768,1,*(int *)((intptr_t)this_ptr + 4),0);
        return;
      }
      uVar3 = rand();
      uVar3 = uVar3 & -2147483647;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | -2) + 1;
      }
      if (uVar3 == 0) {
        CreateObject0(param_1,&DAT_10012758,&DAT_10012770,1,*(int *)((intptr_t)this_ptr + 4),0);
      }
      else if (uVar3 == 1) {
        CreateObject0(param_1,&DAT_10012758,&DAT_10012760,1,*(int *)((intptr_t)this_ptr + 4),0);
        return;
      }
    }
  }
  return;
}





int __cdecl FUN_10001eb0(intptr_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < param_2) {
    do {
      iVar1 = GetTotalAmount0(iVar3);
      if (iVar1 == 0) {
        return param_1 + iVar2 * 0x16;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x16;
    } while (iVar2 < param_2);
  }
  return 0;
}





void __cdecl FUN_10001f00(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  char local_40 [20];
  int local_2c;
  int local_28;
  unsigned int local_14;
  unsigned int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  iVar4 = GetTotalAmount0(param_1);
  iVar3 = param_4;
  iVar2 = param_3;
  if (((iVar4 != 0) && (param_3 != 0)) && (0 < param_4)) {
    local_c = 0;
    if (*(char *)(iVar1 + 8) != '\0') {
      GetZoneCoor(param_3,&param_5,&param_1);
      GetUnitInfo(iVar1,0,local_40);
      uVar5 = local_28 - param_1;
      local_10 = local_2c - param_5;
      uVar6 = local_10;
      if ((intptr_t)local_10 < 0) {
        uVar6 = -local_10;
      }
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      uVar8 = uVar6;
      if (uVar6 <= uVar5) {
        uVar8 = uVar5;
      }
      uVar6 = uVar8 + uVar6 + uVar5 >> 1;
      local_8 = 1;
      if (1 < param_4) {
        do {
          GetZoneCoor(param_3,&param_5,&param_1);
          local_10 = local_28 - param_1;
          local_14 = local_2c - param_5;
          uVar5 = local_14;
          if ((intptr_t)local_14 < 0) {
            uVar5 = -local_14;
          }
          uVar8 = local_10;
          if ((intptr_t)local_10 < 0) {
            uVar8 = -local_10;
          }
          uVar7 = uVar5;
          if (uVar5 <= uVar8) {
            uVar7 = uVar8;
          }
          if (uVar7 + uVar5 + uVar8 >> 1 < uVar6) {
            local_14 = local_28 - param_1;
            local_10 = local_2c - param_5;
            uVar6 = local_10;
            if ((intptr_t)local_10 < 0) {
              uVar6 = -local_10;
            }
            uVar5 = local_14;
            if ((intptr_t)local_14 < 0) {
              uVar5 = -local_14;
            }
            uVar8 = uVar6;
            if (uVar6 <= uVar5) {
              uVar8 = uVar5;
            }
            uVar6 = uVar8 + uVar6 + uVar5 >> 1;
            local_c = local_8;
          }
          local_8 = local_8 + 1;
        } while (local_8 < param_4);
      }
      *(char *)(iVar1 + 8) = 0;
      *(int *)(iVar1 + 10) = local_c;
      SelectUnits(iVar1,0);
      SelSendAndKill(param_2,param_3 + *(int *)(iVar1 + 10) * 8,0,0);
      return;
    }
    iVar4 = GetUnitsAmount1(param_3 + *(int *)(iVar1 + 10) * 8,iVar1);
    if (iVar4 != 0) {
      if ((char)param_5 == '\0') {
        iVar4 = *(int *)(iVar1 + 10);
        if (iVar4 == iVar3 + -1) {
          *(char *)(iVar1 + 9) = 0;
        }
        if (iVar4 == 0) {
          *(char *)(iVar1 + 9) = 1;
        }
        if ((*(char *)(iVar1 + 9) == '\0') ||
           (*(int *)(iVar1 + 10) = iVar4 + 1, *(char *)(iVar1 + 9) == '\0')) {
          *(int *)(iVar1 + 10) = *(int *)(iVar1 + 10) + -1;
        }
      }
      else {
        *(int *)(iVar1 + 10) = (*(int *)(iVar1 + 10) + 1) % iVar3;
      }
      SelectUnits(iVar1,0);
      SelSendAndKill(param_2,iVar2 + *(int *)(iVar1 + 10) * 8,0,0);
    }
  }
  return;
}





BOOL __cdecl FUN_10002110(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1);
  while (iVar1 != 0) {
    RemoveUnitFromGroup(param_1,0);
    iVar1 = GetTotalAmount0(param_1);
  }
  iVar1 = GetTotalAmount0(param_1);
  return (BOOL)('\x01' - (iVar1 != 0));
}





void __cdecl FUN_10002150(int param_1,int param_2,unsigned short *param_3,int param_4,unsigned int param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *puVar5;
  unsigned int local_4c [5];
  int local_38;
  int local_34;
  char local_20 [4];
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  char *puStack_c;
  int local_8;
  
  local_8 = -1;
  ClearSelection(param_2);
  uVar3 = param_5;
  if (0 < (intptr_t)param_5) {
    do {
      SelectUnitsType(param_4,param_2,1);
      param_4 = param_4 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_10002110(param_1);
  SaveSelectedUnits(param_2,param_1,0);
  ClearSelection(param_2);
  local_1c = (int *)0x0;
  local_20[0] = *(char*)((char*)&param_2 + 3);
  local_18 = (int *)0x0;
  local_14 = 0;
  local_8 = 0;
  param_2 = 0;
  iVar1 = GetTotalAmount0(param_1);
  if (0 < iVar1) {
    do {
      GetUnitInfo(param_1,param_2,local_4c);
      param_5 = (unsigned int)param_3[1] - local_34;
      uVar3 = (unsigned int)*param_3 - local_38;
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      uVar4 = param_5;
      if ((intptr_t)param_5 < 0) {
        uVar4 = -param_5;
      }
      uVar2 = uVar3;
      if (uVar3 <= uVar4) {
        uVar2 = uVar4;
      }
      if (uVar2 + uVar3 + uVar4 >> 1 <= (*(unsigned int *)(param_3 + 2) & 0xffffff)) {
        param_5 = local_4c[0] & 0xffff;
        FUN_10002610(local_20,local_18,1,&param_5);
      }
      param_2 = param_2 + 1;
      iVar1 = GetTotalAmount0(param_1);
    } while (param_2 < iVar1);
  }
  FUN_10002110(param_1);
  puVar5 = local_1c;
  if (local_1c != local_18) {
    do {
      InsertUnitToGroup(0,param_1,*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_18);
  }
  FUN_10003a0b((int *)local_1c);
  return;
}





void __cdecl FUN_100022c0(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  char local_64 [20];
  int local_50;
  int local_4c;
  unsigned int local_38 [5];
  int local_24;
  int local_20;
  unsigned int local_c;
  unsigned int local_8;
  
  iVar1 = param_1;
  iVar2 = GetTotalAmount0(param_1);
  if (iVar2 != 0) {
    iVar2 = GetTotalAmount0(param_2);
    if (iVar2 == 1) {
      GetUnitInfo(param_1,0,local_38);
      GetUnitInfo(param_2,0,local_64);
      uVar5 = local_20 - local_4c;
      local_8 = local_24 - local_50;
      uVar3 = local_8;
      if ((intptr_t)local_8 < 0) {
        uVar3 = -local_8;
      }
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      uVar6 = uVar3;
      if (uVar3 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2 = uVar6 + uVar3 + uVar5 >> 1;
      uVar3 = local_38[0] & 0xffff;
      iVar2 = GetTotalAmount0(param_1);
      param_1 = 1;
      if (1 < iVar2) {
        do {
          GetUnitInfo(iVar1,param_1,local_38);
          local_8 = local_20 - local_4c;
          local_c = local_24 - local_50;
          uVar5 = local_c;
          if ((intptr_t)local_c < 0) {
            uVar5 = -local_c;
          }
          uVar6 = local_8;
          if ((intptr_t)local_8 < 0) {
            uVar6 = -local_8;
          }
          uVar4 = uVar5;
          if (uVar5 <= uVar6) {
            uVar4 = uVar6;
          }
          if (uVar4 + uVar5 + uVar6 >> 1 < param_2) {
            uVar5 = local_20 - local_4c;
            local_c = local_24 - local_50;
            uVar3 = local_c;
            if ((intptr_t)local_c < 0) {
              uVar3 = -local_c;
            }
            if ((int)uVar5 < 0) {
              uVar5 = -uVar5;
            }
            uVar6 = uVar3;
            if (uVar3 <= uVar5) {
              uVar6 = uVar5;
            }
            param_2 = uVar6 + uVar3 + uVar5 >> 1;
            uVar3 = local_38[0] & 0xffff;
          }
          param_1 = param_1 + 1;
          iVar2 = GetTotalAmount0(iVar1);
        } while (param_1 < iVar2);
      }
      if (uVar3 < 0xffff) {
        FUN_10002110(iVar1);
        InsertUnitToGroup(0,iVar1,uVar3);
      }
    }
  }
  return;
}





int __cdecl FUN_10002440(unsigned int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_var = 0;
  int extraout_var_00 = 0;
  int extraout_var_01 = 0;
  unsigned short auStack_34 [4];
  unsigned int auStack_2c [11];
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  UnitsCenter(auStack_34,param_1,*(short *)(param_1 + 0xe));
  FUN_10002150(param_2,param_4,auStack_34,(intptr_t)&DAT_10012a10,9);
  iVar1 = GetTotalAmount0(param_2);
  if (iVar1 != 0) {
    FUN_100022c0(param_2,param_1);
    SelectUnits(param_1,0);
    GetUnitInfo(param_2,0,auStack_2c);
    FUN_100025a0(auStack_34,param_1,param_3,(int *)(param_1 + 0x12),auStack_2c[0] & 0xffff);
    SelAttackGroup(param_3,param_2);
    *(char *)(param_1 + 8) = 1;
    FUN_10002110(param_2);
    return (int)1;
  }
  FUN_10002150(param_2,param_4,auStack_34,0x10012a58,0x12);
  iVar1 = GetTotalAmount0(param_2);
  if (iVar1 != 0) {
    FUN_100022c0(param_2,param_1);
    SelectUnits(param_1,0);
    GetUnitInfo(param_1,0,auStack_2c);
    FUN_100025a0(auStack_34,param_2,param_3,(int *)(param_1 + 0x12),auStack_2c[0] & 0xffff);
    SelAttackGroup(param_3,param_2);
    *(char *)(param_1 + 8) = 1;
    FUN_10002110(param_2);
    return (int)1;
  }
  *(int *)(param_1 + 0x12) = 0xffff;
  FUN_10002110(param_2);
  return (unsigned int)extraout_var_01 << 8;
}





void __cdecl
FUN_100025a0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  if (param_5 != *param_4) {
    *param_4 = param_5;
    SelectUnits(param_2,0);
    SelSendAndKill(param_3,param_1,0,0);
  }
  return;
}





void  FUN_100025e0(int param_1)

{
  FUN_10003a0b(*(int **)(param_1 + 4));
  *(int *)(param_1 + 4) = 0;
  *(int *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = 0;
  return;
}





void  FUN_10002610(void *this_ptr,int *param_1,unsigned int param_2,int *param_3)

{
  int *puVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int *puVar5;
  unsigned int uVar6;
  int *puVar7;
  
  puVar7 = *(int **)((intptr_t)this_ptr + 8);
  if (param_2 <= (unsigned int)(*(int *)((intptr_t)this_ptr + 0xc) - (int)puVar7 >> 2)) {
    if ((unsigned int)((int)puVar7 - (intptr_t)param_1 >> 2) < param_2) {
      puVar5 = param_1 + param_2;
      if (param_1 != puVar7) {
        puVar4 = puVar5 + -param_2;
        do {
          if (puVar5 != (int *)0x0) {
            *puVar5 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar4 != puVar7);
      }
      puVar7 = *(int **)((intptr_t)this_ptr + 8);
      for (iVar2 = param_2 - ((int)puVar7 - (intptr_t)param_1 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar7 != (int *)0x0) {
          *puVar7 = *param_3;
        }
        puVar7 = puVar7 + 1;
      }
      puVar7 = *(int **)((intptr_t)this_ptr + 8);
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(unsigned int *)((intptr_t)this_ptr + 8) = *(int *)((intptr_t)this_ptr + 8) + param_2 * 4;
      return;
    }
    if (param_2 != 0) {
      puVar5 = puVar7;
      for (puVar4 = puVar7 + -param_2; puVar4 != puVar7; puVar4 = puVar4 + 1) {
        if (puVar5 != (int *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      puVar7 = *(int **)((intptr_t)this_ptr + 8);
      for (puVar5 = puVar7 + -param_2; param_1 != puVar5; puVar5 = puVar5 + -1) {
        puVar7 = puVar7 + -1;
        *puVar7 = puVar5[-1];
      }
      puVar7 = param_1 + param_2;
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)((intptr_t)this_ptr + 8) = *(int *)((intptr_t)this_ptr + 8) + param_2 * 4;
    }
    return;
  }
  iVar2 = *(int *)((intptr_t)this_ptr + 4);
  if ((iVar2 == 0) || (uVar6 = (int)puVar7 - iVar2 >> 2, uVar6 <= param_2)) {
    uVar6 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar7 - iVar2 >> 2;
  }
  iVar2 = iVar2 + uVar6;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = malloc(iVar3 * 4);
  puVar5 = puVar4;
  for (puVar7 = *(int **)((intptr_t)this_ptr + 4); uVar6 = param_2, puVar1 = puVar5, puVar7 != param_1
      ; puVar7 = puVar7 + 1) {
    if (puVar5 != (int *)0x0) {
      *puVar5 = *puVar7;
    }
    puVar5 = puVar5 + 1;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (puVar1 != (int *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(int **)((intptr_t)this_ptr + 8);
  puVar7 = puVar5 + param_2;
  if (param_1 != puVar1) {
    puVar5 = (int *)((int)puVar7 + (param_2 * -4 - (int)puVar5) + (intptr_t)param_1);
    do {
      if (puVar7 != (int *)0x0) {
        *puVar7 = *puVar5;
      }
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar1);
  }
  FUN_10003a0b(*(int **)((intptr_t)this_ptr + 4));
  *(int **)((intptr_t)this_ptr + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)((intptr_t)this_ptr + 4);
  if (iVar2 == 0) {
    *(int **)((intptr_t)this_ptr + 4) = puVar4;
    *(int **)((intptr_t)this_ptr + 8) = puVar4 + param_2;
    return;
  }
  *(int **)((intptr_t)this_ptr + 4) = puVar4;
  *(int **)((intptr_t)this_ptr + 8) = puVar4 + (*(int *)((intptr_t)this_ptr + 8) - iVar2 >> 2) + param_2;
  return;
}





void __cdecl FUN_10002820(int param_1,int param_2,char param_3)

{
  switch(param_3) {
  case 1:
    RegisterUnitType(param_1,"Europ(BA)");
    RegisterUnitType(param_1 + 8,"Dom_Prussia(BA)");
    RegisterUnitType(param_1 + 0x10,"Melnica(BA)");
    RegisterUnitType(param_1 + 0x18,"Sclad1(BA)");
    RegisterUnitType(param_1 + 0x20,"shahta(BA)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(BA)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(BA)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(BA)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_Swesair(BA)");
    RegisterUnitType(param_1 + 0x48,"Cercov_Poland(BA)");
    RegisterUnitType(param_1 + 0x50,"akademia_E(BA)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus(BA)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_evro(BA)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(BA)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(BA)");
    RegisterUnitType(param_1 + 0x78,"Rinok(BA)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(BA)");
    RegisterUnitType(param_1 + 0x88,"PorE(BA)");
    return;
  case 2:
    RegisterUnitType(param_1,"Europ(DA)");
    RegisterUnitType(param_1 + 8,"Dom_Prussia(DA)");
    RegisterUnitType(param_1 + 0x10,"Melnica(DA)");
    RegisterUnitType(param_1 + 0x18,"Sclad1(DA)");
    RegisterUnitType(param_1 + 0x20,"shahta(DA)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(DA)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(DA)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(DA)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_Swesair(DA)");
    RegisterUnitType(param_1 + 0x48,"Cercov_Poland(DA)");
    RegisterUnitType(param_1 + 0x50,"akademia_E(DA)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus(DA)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_evro(DA)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(DA)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(DA)");
    RegisterUnitType(param_1 + 0x78,"Rinok(DA)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(DA)");
    RegisterUnitType(param_1 + 0x88,"PorE(DA)");
    return;
  case 3:
    RegisterUnitType(param_1,"Center_Austria(au)");
    RegisterUnitType(param_1 + 8,"Dom_Austria(au)");
    RegisterUnitType(param_1 + 0x10,"Melnica(au)");
    RegisterUnitType(param_1 + 0x18,"Sclad1(au)");
    RegisterUnitType(param_1 + 0x20,"shahta(au)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(au)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(au)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(au)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_Swesair(au)");
    RegisterUnitType(param_1 + 0x48,"Cercov_Poland(au)");
    RegisterUnitType(param_1 + 0x50,"akademia_E(au)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus(au)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_evro(au)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(au)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(au)");
    RegisterUnitType(param_1 + 0x78,"Rinok(au)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(au)");
    RegisterUnitType(param_1 + 0x88,"PorE(au)");
    return;
  case 4:
    RegisterUnitType(param_1,"Center_Algir(AL)");
    RegisterUnitType(param_1 + 8,"Dom_Algir(AL)");
    RegisterUnitType(param_1 + 0x10,"Rinok_Turki(AL)");
    RegisterUnitType(param_1 + 0x18,"Sclad4(AL)");
    RegisterUnitType(param_1 + 0x20,"shahta(AL)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(AL)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(AL)");
    RegisterUnitType(param_1 + 0x38,"Kuznia_Turki(AL)");
    RegisterUnitType(param_1 + 0x40,"Mechet_Turki(AL)");
    RegisterUnitType(param_1 + 0x48,"Minaret(AL)");
    RegisterUnitType(param_1 + 0x50,"Diplomatic_Turki(AL)");
    RegisterUnitType(param_1 + 0x58,"Barack_Turki(AL)");
    RegisterUnitType(param_1 + 0x60,"Konushnia_Turki(AL)");
    RegisterUnitType(param_1 + 0x68,"Art_Depo_Turki(AL)");
    RegisterUnitType(param_1 + 0x70,"Bashnia_3(AL)");
    RegisterUnitType(param_1 + 0x78,"Port(AL)");
    return;
  case 5:
    RegisterUnitType(param_1,"Center_British(en)");
    RegisterUnitType(param_1 + 8,"Dom_English(en)");
    RegisterUnitType(param_1 + 0x10,"Melnica(en)");
    RegisterUnitType(param_1 + 0x18,"Sclad1(en)");
    RegisterUnitType(param_1 + 0x20,"shahta(en)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(en)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(en)");
    RegisterUnitType(param_1 + 0x38,"Kuznica_BR(en)");
    RegisterUnitType(param_1 + 0x40,"konushnia_BR(en)");
    RegisterUnitType(param_1 + 0x48,"Cerkov_BR(en)");
    RegisterUnitType(param_1 + 0x50,"akademia_BR(en)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus_BR(en)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_1_BR(en)");
    RegisterUnitType(param_1 + 0x68,"Kazarma_BR(en)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo_BR(en)");
    RegisterUnitType(param_1 + 0x78,"Rinok(en)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(en)");
    RegisterUnitType(param_1 + 0x88,"PorE(en)");
    return;
  case 6:
    RegisterUnitType(param_1,"Center_France(fr)");
    RegisterUnitType(param_1 + 8,"Dom_France(fr)");
    RegisterUnitType(param_1 + 0x10,"Melnica(fr)");
    RegisterUnitType(param_1 + 0x18,"Sclad2(fr)");
    RegisterUnitType(param_1 + 0x20,"shahta(fr)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(fr)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(fr)");
    RegisterUnitType(param_1 + 0x38,"Kuznica_FR(fr)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_FR(fr)");
    RegisterUnitType(param_1 + 0x48,"NotrDam(fr)");
    RegisterUnitType(param_1 + 0x50,"akademia_FR(fr)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus_FR(fr)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_1_FR(fr)");
    RegisterUnitType(param_1 + 0x68,"Kazarma_FR(fr)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo_FR(fr)");
    RegisterUnitType(param_1 + 0x78,"Rinok(fr)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(fr)");
    RegisterUnitType(param_1 + 0x88,"PorE(fr)");
    return;
  case 7:
    RegisterUnitType(param_1,"Europ(GE)");
    RegisterUnitType(param_1 + 8,"Dom_Prussia(GE)");
    RegisterUnitType(param_1 + 0x10,"Melnica(GE)");
    RegisterUnitType(param_1 + 0x18,"Sclad1(GE)");
    RegisterUnitType(param_1 + 0x20,"shahta(GE)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(GE)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(GE)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(GE)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_Swesair(GE)");
    RegisterUnitType(param_1 + 0x48,"Cercov_Poland(GE)");
    RegisterUnitType(param_1 + 0x50,"akademia_E(GE)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus(GE)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_evro(GE)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(GE)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(GE)");
    RegisterUnitType(param_1 + 0x78,"Rinok(GE)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(GE)");
    RegisterUnitType(param_1 + 0x88,"PorE(GE)");
    return;
  case 8:
    RegisterUnitType(param_1,"Center_Holland(HO)");
    RegisterUnitType(param_1 + 8,"Euro_dom(HO)");
    RegisterUnitType(param_1 + 0x10,"Melnica(HO)");
    RegisterUnitType(param_1 + 0x18,"Sclad1(HO)");
    RegisterUnitType(param_1 + 0x20,"shahta(HO)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(HO)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(HO)");
    RegisterUnitType(param_1 + 0x38,"Kuznica_HO(HO)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_HO(HO)");
    RegisterUnitType(param_1 + 0x48,"Cercov_HO(HO)");
    RegisterUnitType(param_1 + 0x50,"akademia_HO(HO)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus_HO(HO)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_1_HO(HO)");
    RegisterUnitType(param_1 + 0x68,"Kazarma_2_HO(HO)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo_HO(HO)");
    RegisterUnitType(param_1 + 0x78,"Rinok(HO)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(HO)");
    RegisterUnitType(param_1 + 0x88,"PorE(HO)");
    return;
  case 9:
    RegisterUnitType(param_1,"Center_Piemont(PI)");
    RegisterUnitType(param_1 + 8,"Dom_Piemont(PI)");
    RegisterUnitType(param_1 + 0x10,"Melnica(PI)");
    RegisterUnitType(param_1 + 0x18,"Sclad2(PI)");
    RegisterUnitType(param_1 + 0x20,"shahta(PI)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(PI)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(PI)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(PI)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_Swesair(PI)");
    RegisterUnitType(param_1 + 0x48,"Kostel(PI)");
    RegisterUnitType(param_1 + 0x50,"akademia_E(PI)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus(PI)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_evro(PI)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(PI)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(PI)");
    RegisterUnitType(param_1 + 0x78,"Rinok(PI)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(PI)");
    RegisterUnitType(param_1 + 0x88,"PorE(PI)");
    return;
  case 10:
    RegisterUnitType(param_1,"Center_Poland(PL)");
    RegisterUnitType(param_1 + 8,"Dom_Poland(PL)");
    RegisterUnitType(param_1 + 0x10,"Melnica(PL)");
    RegisterUnitType(param_1 + 0x18,"Sclad2(PL)");
    RegisterUnitType(param_1 + 0x20,"shahta(PL)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(PL)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(PL)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(PL)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_Swesair(PL)");
    RegisterUnitType(param_1 + 0x48,"Cercov_Poland(PL)");
    RegisterUnitType(param_1 + 0x50,"akademia_E(PL)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus(PL)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_evro(PL)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(PL)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(PL)");
    RegisterUnitType(param_1 + 0x78,"Rinok(PL)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(PL)");
    RegisterUnitType(param_1 + 0x88,"PorE(PL)");
    return;
  case 0xb:
    RegisterUnitType(param_1,"Center_Portugal(PO)");
    RegisterUnitType(param_1 + 8,"Dom_Portugal(PO)");
    RegisterUnitType(param_1 + 0x10,"Melnica(PO)");
    RegisterUnitType(param_1 + 0x18,"Sclad2(PO)");
    RegisterUnitType(param_1 + 0x20,"shahta(PO)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(PO)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(PO)");
    RegisterUnitType(param_1 + 0x38,"Kuznica_PO(PO)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_PO(PO)");
    RegisterUnitType(param_1 + 0x48,"Cercov_PO(PO)");
    RegisterUnitType(param_1 + 0x50,"akademia_PO(PO)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus_PO(PO)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_1_PO(PO)");
    RegisterUnitType(param_1 + 0x68,"Kazarma_2_PO(PO)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo_PO(PO)");
    RegisterUnitType(param_1 + 0x78,"Rinok(PO)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(PO)");
    RegisterUnitType(param_1 + 0x88,"PorPO(PO)");
    return;
  case 0xc:
    RegisterUnitType(param_1,"Russki_Center(RU)");
    RegisterUnitType(param_1 + 8,"ruskaia_izba(RU)");
    RegisterUnitType(param_1 + 0x10,"Melnica_rus(RU)");
    RegisterUnitType(param_1 + 0x18,"Sclad3(RU)");
    RegisterUnitType(param_1 + 0x20,"shahta(RU)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(RU)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(RU)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(RU)");
    RegisterUnitType(param_1 + 0x40,"konushnia(RU)");
    RegisterUnitType(param_1 + 0x48,"Cerkov_RU(RU)");
    RegisterUnitType(param_1 + 0x50,"akademia_RU(RU)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus_RU(RU)");
    RegisterUnitType(param_1 + 0x60,"Rus_Strel_Dom(RU)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(RU)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(RU)");
    RegisterUnitType(param_1 + 0x78,"Rinok(RU)");
    RegisterUnitType(param_1 + 0x80,"Bashnia_2(RU)");
    RegisterUnitType(param_1 + 0x88,"PorR(RU)");
    return;
  case 0xd:
    RegisterUnitType(param_1,"Center_Sacson(SA)");
    RegisterUnitType(param_1 + 8,"Dom_Saksona(SA)");
    RegisterUnitType(param_1 + 0x10,"Melnica(SA)");
    RegisterUnitType(param_1 + 0x18,"Sclad1(SA)");
    RegisterUnitType(param_1 + 0x20,"shahta(SA)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(SA)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(SA)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(SA)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_Swesair(SA)");
    RegisterUnitType(param_1 + 0x48,"Cercov_Poland(SA)");
    RegisterUnitType(param_1 + 0x50,"akademia_E(SA)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus(SA)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_evro(SA)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(SA)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(SA)");
    RegisterUnitType(param_1 + 0x78,"Rinok(SA)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(SA)");
    RegisterUnitType(param_1 + 0x88,"PorE(SA)");
    return;
  case 0xe:
    RegisterUnitType(param_1,"Center_Spain(sp)");
    RegisterUnitType(param_1 + 8,"Dom_Ispain(sp)");
    RegisterUnitType(param_1 + 0x10,"Melnica(sp)");
    RegisterUnitType(param_1 + 0x18,"Sclad2(sp)");
    RegisterUnitType(param_1 + 0x20,"shahta(sp)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(sp)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(sp)");
    RegisterUnitType(param_1 + 0x38,"Kuznica_SP(sp)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_SP(sp)");
    RegisterUnitType(param_1 + 0x48,"Cercov_SP(sp)");
    RegisterUnitType(param_1 + 0x50,"akademia_SP(sp)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus_SP(sp)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_1_SP(sp)");
    RegisterUnitType(param_1 + 0x68,"Kazarma_SP(sp)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo_SP(sp)");
    RegisterUnitType(param_1 + 0x78,"Rinok(sp)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(sp)");
    RegisterUnitType(param_1 + 0x88,"PorE(sp)");
    return;
  case 0xf:
    RegisterUnitType(param_1,"Center_Swesair(SV)");
    RegisterUnitType(param_1 + 8,"Dom_Swisair(SV)");
    RegisterUnitType(param_1 + 0x10,"Melnica(SV)");
    RegisterUnitType(param_1 + 0x18,"Sclad1(SV)");
    RegisterUnitType(param_1 + 0x20,"shahta(SV)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(SV)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(SV)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(SV)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_Swesair(SV)");
    RegisterUnitType(param_1 + 0x48,"Kostel(SV)");
    RegisterUnitType(param_1 + 0x50,"akademia_E(SV)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus(SV)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_evro(SV)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(SV)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(SV)");
    RegisterUnitType(param_1 + 0x78,"Rinok(SV)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(SV)");
    RegisterUnitType(param_1 + 0x88,"PorE(SV)");
    return;
  case 0x10:
    RegisterUnitType(param_1,"Center_Turki(TU)");
    RegisterUnitType(param_1 + 8,"Dom_Turki(TU)");
    RegisterUnitType(param_1 + 0x10,"Rinok_Turki(TU)");
    RegisterUnitType(param_1 + 0x18,"Sclad4(TU)");
    RegisterUnitType(param_1 + 0x20,"shahta(TU)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(TU)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(TU)");
    RegisterUnitType(param_1 + 0x38,"Kuznia_Turki(TU)");
    RegisterUnitType(param_1 + 0x40,"Mechet_Turki(TU)");
    RegisterUnitType(param_1 + 0x48,"Minaret(TU)");
    RegisterUnitType(param_1 + 0x50,"Diplomatic_Turki(TU)");
    RegisterUnitType(param_1 + 0x58,"Barack_Turki(TU)");
    RegisterUnitType(param_1 + 0x60,"Konushnia_Turki(TU)");
    RegisterUnitType(param_1 + 0x68,"Art_Depo_Turki(TU)");
    RegisterUnitType(param_1 + 0x70,"Bashnia_3(TU)");
    RegisterUnitType(param_1 + 0x78,"Port(TU)");
    return;
  case 0x11:
    RegisterUnitType(param_1,"CenterUR(UA)");
    RegisterUnitType(param_1 + 8,"Ukrainska_hata(UA)");
    RegisterUnitType(param_1 + 0x10,"Melnica_rus(UA)");
    RegisterUnitType(param_1 + 0x18,"Sclad3(UA)");
    RegisterUnitType(param_1 + 0x20,"shahta(UA)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(UA)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(UA)");
    RegisterUnitType(param_1 + 0x38,"Kuznica_ua(UA)");
    RegisterUnitType(param_1 + 0x40,"konushnia_ua(UA)");
    RegisterUnitType(param_1 + 0x48,"Cerkov_UA(UA)");
    RegisterUnitType(param_1 + 0x50,"akademia_UA(UA)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus_UA(UA)");
    RegisterUnitType(param_1 + 0x60,"Rinok(UA)");
    RegisterUnitType(param_1 + 0x68,"Strelcovaia_Izba(UA)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo_UA(UA)");
    RegisterUnitType(param_1 + 0x78,"Poru(UA)");
    return;
  case 0x12:
    RegisterUnitType(param_1,"Center_Venecia(VE)");
    RegisterUnitType(param_1 + 8,"Dom_Venecia(VE)");
    RegisterUnitType(param_1 + 0x10,"Melnica(VE)");
    RegisterUnitType(param_1 + 0x18,"Sclad2(VE)");
    RegisterUnitType(param_1 + 0x20,"shahta(VE)");
    RegisterUnitType(param_1 + 0x28,"shahta_FE(VE)");
    RegisterUnitType(param_1 + 0x30,"shahta_UG(VE)");
    RegisterUnitType(param_1 + 0x38,"Kuznica(VE)");
    RegisterUnitType(param_1 + 0x40,"Konushnia_Swesair(VE)");
    RegisterUnitType(param_1 + 0x48,"Kostel(VE)");
    RegisterUnitType(param_1 + 0x50,"akademia_E(VE)");
    RegisterUnitType(param_1 + 0x58,"Dip_korpus(VE)");
    RegisterUnitType(param_1 + 0x60,"Kazarma_evro(VE)");
    RegisterUnitType(param_1 + 0x68,"Kazarma(VE)");
    RegisterUnitType(param_1 + 0x70,"artileri_depo(VE)");
    RegisterUnitType(param_1 + 0x78,"Rinok(VE)");
    RegisterUnitType(param_1 + 0x80,"Bashnia(VE)");
    RegisterUnitType(param_1 + 0x88,"PorE(VE)");
  }
  return;
}





void __cdecl FUN_100037e0(intptr_t param_1,int param_2,char param_3)

{
  if (param_3 == '\x01') {
    if (param_2 == 9) {
      RegisterUnitType(param_1,"Yahta(BA)");
      RegisterUnitType(param_1 + 8,"Linkor(BA)");
      RegisterUnitType(param_1 + 0x10,"PERES_KOR(BA)");
      RegisterUnitType(param_1 + 0x18,"Fregat(BA)");
      RegisterUnitType(param_1 + 0x20,"GALERA(BA)");
      RegisterUnitType(param_1 + 0x28,"Victoria(BA)");
      RegisterUnitType(param_1 + 0x30,"FregatNEW(BA)");
      RegisterUnitType(param_1 + 0x38,"KECH(BA)");
      RegisterUnitType(param_1 + 0x40,"KUTTER(BA)");
    }
  }
  else if ((param_3 == '\x0e') && (param_2 == 9)) {
    RegisterUnitType(param_1,"Yahta(sp)");
    RegisterUnitType(param_1 + 8,"Linkor(sp)");
    RegisterUnitType(param_1 + 0x10,"PERES_KOR(sp)");
    RegisterUnitType(param_1 + 0x18,"Fregat(sp)");
    RegisterUnitType(param_1 + 0x20,"GALERA(sp)");
    RegisterUnitType(param_1 + 0x28,"Victoria(sp)");
    RegisterUnitType(param_1 + 0x30,"FregatNEW(sp)");
    RegisterUnitType(param_1 + 0x38,"KECH(sp)");
    RegisterUnitType(param_1 + 0x40,"KUTTER(sp)");
    return;
  }
  return;
}





void __cdecl FUN_10003a0b(int *param_1)

{
  FUN_100042bc(param_1);
  return;
}





int __cdecl FUN_10003c81(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar5 = *(unsigned int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == -1) {
      FUN_10004c6d();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == -1)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(unsigned int *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_10004c6d();
  }
  return iVar1 + uVar5 * 0x14;
}





void FUN_10003dd2(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1000f6c8 = *(int *)(unaff_EBP + 8);
  DAT_1000f6c4 = in_EAX;
  DAT_1000f6cc = unaff_EBP;
  return;
}







void FUN_10003e75(void)

{
  void *extraout_ECX;
  
  FUN_10003e8d();
  DAT_10012b24_ovl = FUN_100051ef();
  FUN_1000519f(extraout_ECX);
  return;
}





void FUN_10003e8d(void)

{
  return;
}





void OnInit(void)

{
  DWORD DVar1;
  char *puVar2;
  
                    
  RegisterVar(&DAT_1000e040,8);
  RegisterDynGroup(&DAT_10012af0);
  RegisterVar(&DAT_10012af0,8);
  RegisterDynGroup(&DAT_10012ae8);
  RegisterVar(&DAT_10012ae8,8);
  RegisterVar(&DAT_10012840,0x1ce);
  puVar2 = &DAT_10012849;
  do {
    RegisterDynGroup(puVar2 + -9);
    puVar2[-1] = 1;
    *puVar2 = 1;
    *(int *)(puVar2 + 5) = 0x640;
    *(int *)(puVar2 + 9) = 0xffff;
    *(int *)(puVar2 + 1) = 0;
    puVar2 = puVar2 + 0x16;
  } while ((int)puVar2 < 0x10012a17);
  FUN_10002820(0x10012a58,0x12,0xe);
  FUN_100037e0((intptr_t)&DAT_10012a10,9,'\x0e');
  RegisterFormation(&DAT_10012758,"#ALONE");
  RegisterUnitType(&DAT_10012770,"Fregat(PO)");
  RegisterUnitType(&DAT_10012768,"FregatNEW(PO)");
  RegisterUnitType(&DAT_10012760,"Yahta(PO)");
  RegisterUnits(&DAT_100127c0,"GPortCentW");
  RegisterUnits(&DAT_100127b0,"GPortCentN");
  RegisterUnits(&DAT_100127a0,"GPortCentE");
  RegisterUnits(&DAT_10012790,"GPortWest");
  RegisterUnits(&DAT_10012780,"GPortEast");
  RegisterZone(&DAT_100127b8,"ZPortCentW");
  RegisterZone(&DAT_100127a8,"ZPortCentN");
  RegisterZone(&DAT_10012798,"ZPortCentE");
  RegisterZone(&DAT_10012788,"ZPortWest");
  RegisterZone(&DAT_10012778,"ZPortEest");
  RegisterVar(&DAT_10012828,0x11);
  RegisterVar(&DAT_10012810,0x11);
  RegisterVar(&DAT_100127f8,0x11);
  RegisterVar(&DAT_100127c8,0x11);
  RegisterVar(&DAT_100127e0,0x11);
  RegisterDynGroup(&DAT_10012750);
  RegisterVar(&DAT_10012750,8);
  RegisterVar(&DAT_10012afc,4);
  RegisterVar(&DAT_10012b00,4);
  RegisterZone(&DAT_10012720,"ZAEnemy1");
  RegisterZone(&DAT_10012728,"ZAEnemy2");
  RegisterZone(&DAT_10012730,"ZAEnemy3");
  RegisterZone(&DAT_10012738,"ZAEnemy4");
  RegisterZone(&DAT_10012740,"ZAEnemy5");
  RegisterZone(&DAT_10012748,"ZAEnemy6");
  RegisterZone(&DAT_10012700,"ZGWest1");
  RegisterZone(&DAT_10012708,"ZGWest2");
  RegisterZone(&DAT_10012710,"ZGWest3");
  RegisterZone(&DAT_10012718,"ZGWest4");
  RegisterZone(&DAT_100126e8,"ZGEest1");
  RegisterZone(&DAT_100126f0,"ZGEest2");
  RegisterZone(&DAT_100126f8,"ZGEest3");
  RegisterZone(&DAT_100126d0,"ZGCenter1");
  RegisterZone(&DAT_100126d8,"ZGCenter2");
  RegisterZone(&DAT_100126e0,"ZGCenter3");
  RegisterZone(&DAT_100126b8,"ZGBack1");
  RegisterZone(&DAT_100126c0,"ZGBack2");
  RegisterZone(&DAT_100126c8,"ZGBack3");
  RegisterVar(&DAT_10012b04,4);
  RegisterDynGroup(&DAT_100126b0);
  RegisterDynGroup(&DAT_100126a8);
  RegisterUnits(&DAT_100126a0,"GMineW1");
  RegisterUnits(&DAT_10012698,"GMineW2");
  RegisterUnits(&DAT_10012690,"GMineW3");
  RegisterUnits(&DAT_10012688,"GMineE1");
  RegisterUnits(&DAT_10012680,"GMineE2");
  RegisterUnits(&DAT_10012678,"GMineE3");
  RegisterUnitType(&DAT_10012670,"PorPO(PO)");
  RegisterVar(&DAT_1000e048,4);
  SetPlayerName(1,"PORTUGAL");
  DVar1 = time(NULL);
  srand(DVar1);
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *puVar6;
  int iVar7;
  unsigned int uVar8;
  void *pcVar9;
  char local_6c [20];
  int local_58;
  int local_54;
  char local_40 [4];
  unsigned short local_3c;
  unsigned short uStack_3a;
  int local_2c;
  int local_28;
  unsigned int local_14;
  unsigned int local_10;
  int local_c;
  char local_5;
  
                    
  DAT_10012828 = &DAT_10012790;
  DAT_1001282c_ovl = &DAT_10012788;
  DAT_10012810 = &DAT_10012780;
  DAT_10012814_ovl = &DAT_10012778;
  DAT_100127f8_ovl = &DAT_100127c0;
  DAT_100127fc_ovl = &DAT_100127b8;
  DAT_100127e0_ovl = &DAT_100127a0;
  DAT_100127e4_ovl = &DAT_10012798;
  DAT_100127c8_ovl = &DAT_100127b0;
  DAT_100127cc_ovl = &DAT_100127a8;
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    DAT_10012830 = 1;
    DAT_10012831_ovl = 10;
    DAT_10012835 = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    DAT_10012818 = 1;
    DAT_10012819_ovl = 0xb;
    DAT_1001281d = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    DAT_10012800 = 1;
    DAT_10012801_ovl = 0xc;
    DAT_10012805 = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    DAT_100127e8 = 1;
    DAT_100127e9_ovl = 0xd;
    DAT_100127ed = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    DAT_100127d0 = 1;
    DAT_100127d1_ovl = 0xe;
    DAT_100127d5 = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    SetResource(0,0,(8 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,3,(5 - iVar2) * 2000);
    iVar2 = GetDiff(0);
    SetResource(0,2,(8 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,1,(5 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,4,(6 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,5,(6 - iVar2) * 1000);
    RunTimer(DAT_10012831_ovl & 0xff,DAT_10012835);
    RunTimer(DAT_10012819_ovl & 0xff,DAT_1001281d);
    RunTimer(DAT_10012801_ovl & 0xff,DAT_10012805);
    RunTimer(DAT_100127e9_ovl & 0xff,DAT_100127ed);
    RunTimer(DAT_100127d1_ovl & 0xff,DAT_100127d5);
    iVar2 = GetDiff(0);
    ShowPageParam("#PAGE2401",iVar2 * -0x14 + 0x96);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    uVar3 = GetDiff(0);
    switch(uVar3) {
    case 0:
      uVar3 = 0x44;
      break;
    case 1:
      uVar3 = 0x45;
      break;
    case 2:
      uVar3 = 0x46;
      break;
    case 3:
      uVar3 = 0x47;
      break;
    default:
      goto switchD_10001625_default;
    }
    EnableMission(uVar3);
  }
switchD_10001625_default:
  DAT_10012b04 = (DAT_10012b04 + 1) % 3;
  SaveSelectedUnits(0,&DAT_10012ae8,0);
  if (DAT_10012b04 == 0) {
    puVar6 = &DAT_10012948;
    do {
      if (0x10012a0d < (int)puVar6) break;
      iVar2 = FUN_10002440((unsigned int)puVar6,(intptr_t)&DAT_10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)puVar6,1,(intptr_t)&DAT_10012720,6,0);
      }
      puVar6 = puVar6 + 0x16;
    } while (DAT_10012b04 == 0);
  }
  if (DAT_10012b04 == 1) {
    puVar6 = &DAT_10012882;
    do {
      if (0x100128c3 < (int)puVar6) break;
      iVar2 = FUN_10002440((unsigned int)(puVar6 + -0x42),(intptr_t)&DAT_10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)(puVar6 + -0x42),1,(intptr_t)&DAT_10012700,4,1);
      }
      iVar2 = FUN_10002440((unsigned int)puVar6,(intptr_t)&DAT_10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)puVar6,1,(intptr_t)&DAT_100126e8,3,0);
      }
      iVar2 = FUN_10002440((unsigned int)(puVar6 + 0x42),(intptr_t)&DAT_10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)(puVar6 + 0x42),1,(intptr_t)&DAT_100126d0,3,0);
      }
      iVar2 = FUN_10002440((unsigned int)(puVar6 + 0x84),(intptr_t)&DAT_10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)(puVar6 + 0x84),1,(intptr_t)&DAT_100126b8,3,0);
      }
      puVar6 = puVar6 + 0x16;
    } while (DAT_10012b04 == 1);
  }
  ClearSelection(0);
  SelectUnits(&DAT_10012ae8,0);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0((intptr_t)&DAT_10012840,3);
  FUN_10001de0(&DAT_10012828,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0((intptr_t)&DAT_10012882,3);
  FUN_10001de0(&DAT_10012810,iVar2,cVar1);
  cVar1 = '\x01';
  iVar2 = FUN_10001eb0(0x100128c4,2);
  FUN_10001de0(&DAT_100127f8,iVar2,cVar1);
  cVar1 = '\x01';
  iVar2 = FUN_10001eb0(0x100128f0,2);
  FUN_10001de0(&DAT_100127c8,iVar2,cVar1);
  cVar1 = '\x01';
  iVar2 = FUN_10001eb0(0x1001291c,2);
  FUN_10001de0(&DAT_100127e0,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0((intptr_t)&DAT_10012948,3);
  FUN_10001de0(&DAT_100127f8,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0(0x1001298a,3);
  FUN_10001de0(&DAT_100127c8,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0(0x100129cc,3);
  FUN_10001de0(&DAT_100127e0,iVar2,cVar1);
  SaveSelectedUnits(0,&DAT_10012ae8,0);
  if (DAT_10012b04 == 2) {
    ClearSelection(0);
    SelectUnitsType(&DAT_10012ae0,0,0);
    SaveSelectedUnits(0,&DAT_100126a8,0);
    iVar2 = GetTotalAmount0(&DAT_100126a8);
    if (iVar2 != 0) {
      ClearSelection(0);
      puVar6 = &DAT_10012a10;
      do {
        SelectUnitsType(puVar6,0,1);
        puVar6 = puVar6 + 8;
      } while ((int)puVar6 < 0x10012a58);
      SaveSelectedUnits(0,&DAT_100126b0,0);
      iVar2 = GetTotalAmount0(&DAT_100126b0);
      if (iVar2 != 0) {
        iVar7 = 0;
        local_c = 0;
        iVar2 = GetTotalAmount0(&DAT_100126b0);
        if (0 < iVar2) {
          do {
            GetUnitInfo(&DAT_100126b0,iVar7,local_40);
            iVar7 = 0;
            local_5 = '\0';
            iVar2 = GetTotalAmount0(&DAT_100126a8);
            if (0 < iVar2) {
              do {
                if (local_5 != '\0') break;
                GetUnitInfo(&DAT_100126a8,iVar7,local_6c);
                local_10 = local_54 - local_28;
                local_14 = local_58 - local_2c;
                uVar4 = local_14;
                if ((intptr_t)local_14 < 0) {
                  uVar4 = -local_14;
                }
                uVar8 = local_10;
                if ((intptr_t)local_10 < 0) {
                  uVar8 = -local_10;
                }
                uVar5 = uVar4;
                if (uVar4 <= uVar8) {
                  uVar5 = uVar8;
                }
                if (uVar5 + uVar4 + uVar8 >> 1 < 600) {
                  if ((unsigned int)uStack_3a < local_3c + 0x32) {
                    local_3c = uStack_3a;
                  }
                  else {
                    local_3c = local_3c + 0x32;
                  }
                  SetUnitInfo(local_40);
                  local_5 = '\x01';
                }
                iVar7 = iVar7 + 1;
                iVar2 = GetTotalAmount0(&DAT_100126a8);
              } while (iVar7 < iVar2);
            }
            iVar7 = local_c + 1;
            local_c = iVar7;
            iVar2 = GetTotalAmount0(&DAT_100126b0);
          } while (iVar7 < iVar2);
        }
      }
    }
  }
  ClearSelection(0);
  SelectUnits(&DAT_10012ae8,0);
  ClearSelection(1);
  SelectUnits1(1,&DAT_100126a0,0);
  SelectUnits1(1,&DAT_10012698,1);
  SelectUnits1(1,&DAT_10012690,1);
  SelectUnits1(1,DAT_10012828,1);
  SaveSelectedUnits(1,&DAT_10012ae8,0);
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10012ae8), iVar2 == 0)) {
    SetTrigg(2,0);
    iVar2 = GetDiff(0);
    DAT_10012835 = DAT_10012835 + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_1001281d = DAT_1001281d + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_10012805 = DAT_10012805 + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_100127ed = DAT_100127ed + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_100127d5 = DAT_100127d5 + (iVar2 + 7) * 100;
    ShowPage("#PAGE2402");
  }
  ClearSelection(1);
  SelectUnits1(1,&DAT_10012688,0);
  SelectUnits1(1,&DAT_10012680,1);
  SelectUnits1(1,&DAT_10012678,1);
  SelectUnits1(1,DAT_10012810,1);
  SaveSelectedUnits(1,&DAT_10012ae8,0);
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10012ae8), iVar2 == 0)) {
    SetTrigg(3,0);
    iVar2 = GetDiff(0);
    DAT_10012835 = DAT_10012835 + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_1001281d = DAT_1001281d + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_10012805 = DAT_10012805 + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_100127ed = DAT_100127ed + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_100127d5 = DAT_100127d5 + (iVar2 + 7) * 100;
    ShowPage("#PAGE2403");
  }
  SaveSelectedUnits(0,&DAT_10012ae8,0);
  GetTotalAmount0(&DAT_10012750);
  iVar2 = GetTotalAmount0(&DAT_10012750);
  if (DAT_10012afc != iVar2 && -1 < DAT_10012afc - iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10012750);
    DAT_10012b00 = DAT_10012b00 + (DAT_10012afc - iVar2);
  }
  ClearSelection(0);
  puVar6 = &DAT_10012a10;
  do {
    SelectUnitsType(puVar6,0,1);
    puVar6 = puVar6 + 8;
  } while ((int)puVar6 < 0x10012a58);
  SaveSelectedUnits(0,&DAT_10012750,0);
  DAT_10012afc = GetTotalAmount0(&DAT_10012750);
  ClearSelection(0);
  SelectUnits(&DAT_10012ae8,0);
  if (DAT_1000e048 < DAT_10012b00) {
    DAT_1000e048 = DAT_1000e048 + 0x14;
    ShowPageParam("#PAGE2406",DAT_10012b00);
  }
  ClearSelection(1);
  SelectUnitsType(&DAT_10012670,1,0);
  SaveSelectedUnits(1,&DAT_10012ae8,0);
  iVar2 = GetTotalAmount0(&DAT_10012ae8);
  if (iVar2 == 0) {
    ShowPage("#PAGE2404");
    ShowVictory();
  }
  iVar2 = GetDiff(0);
  if (iVar2 * -0x14 + 0x96 < DAT_10012b00) {
    ShowPageParam("#PAGE2405",DAT_10012b00);
    LooseGame();
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
