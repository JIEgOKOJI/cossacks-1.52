#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
long long DAT_1000f040 = 0;
int DAT_1000f048 = 10;
int DAT_1000f04c = 100;
int DAT_10010a20 = 0;
int DAT_10010a24 = 0;
int DAT_10010a28 = 0;
long long DAT_100139d0 = 0;
long long DAT_100139d8 = 0;
long long DAT_10013a08 = 0;
long long DAT_10013a10 = 0;
long long DAT_10013a58 = 0;
long long DAT_10013a61 = 0;
long long DAT_10013b4a = 0;
long long DAT_10013c28 = 0;
long long DAT_10013c30 = 0;
long long DAT_10013c38 = 0;
long long DAT_10013c40 = 0;
long long DAT_10013c48 = 0;
long long DAT_10013c50 = 0;
long long DAT_10013c58 = 0;
long long DAT_10013c60 = 0;
long long DAT_10013c68 = 0;
long long DAT_10013c70 = 0;
long long DAT_10013c78 = 0;
long long DAT_10013c80 = 0;
long long DAT_10013c88 = 0;
long long DAT_10013c90 = 0;
long long DAT_10013c98 = 0;
long long DAT_10013ca0 = 0;
long long DAT_10013ca8 = 0;
long long DAT_10013cb0 = 0;
long long DAT_10013cb8 = 0;
long long DAT_10013cc0 = 0;
long long DAT_10013cc8 = 0;
long long DAT_10013cd0 = 0;
long long DAT_10013d00 = 0;
long long DAT_10013d08 = 0;
long long DAT_10013d10 = 0;
long long DAT_10013d18 = 0;
long long DAT_10013d20 = 0;
long long DAT_10013d28 = 0;
long long DAT_10013d30 = 0;
long long DAT_10013d38 = 0;
long long DAT_10013d40 = 0;
long long DAT_10013d48 = 0;
long long DAT_10013d50 = 0;
long long DAT_10013d58 = 0;
long long DAT_10013d5c = 0;
int DAT_10013d61 = 0;
int DAT_10013d65 = 0;
long long DAT_10013d70 = 0;
long long DAT_10013d74 = 0;
int DAT_10013d79 = 0;
int DAT_10013d7d = 0;
long long DAT_10013d88 = 0;
long long DAT_10013d8c = 0;
int DAT_10013d91 = 0;
int DAT_10013d95 = 0;
long long DAT_10013da0 = 0;
long long DAT_10013da8 = 0;
long long DAT_10013db0 = 0;
long long DAT_10013db8 = 0;
long long DAT_10013e48 = 0;
long long DAT_10013e50 = 0;
long long DAT_10013e58 = 0;
int DAT_10013e64 = 0;
int DAT_10013e68 = 0;
int DAT_10013e6c = 0;
int DAT_10013e70 = 0;
int DAT_10013e74 = 0;
long long DAT_10013e94 = 0;
int DAT_10013d58_ovl = 0;
int DAT_10013d5c_ovl = 0;
int DAT_10013d70_ovl = 0;
int DAT_10013d74_ovl = 0;
int DAT_10013d88_ovl = 0;
int DAT_10013d8c_ovl = 0;
int DAT_10013e94_ovl = 0;

/* Stubs for missing internal functions */
int FUN_1000448f() { return 0; }
int FUN_1000476c() { return 0; }
int FUN_10004c53() { return 0; }
int FUN_10004e1c() { return 0; }
int FUN_100057cd() { return 0; }
int FUN_10005cff() { return 0; }
int FUN_10005d4f() { return 0; }


/* Forward declarations */
void  FUN_10002070(void *this_ptr,int param_1,char param_2);
int FUN_10002140(int param_1,int param_2);
void FUN_100021a0(int param_1,int param_2,int param_3,int param_4,int param_5);
BOOL FUN_100023b0(int param_1);
BOOL FUN_100023f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
int FUN_10002540(int param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7);
BOOL FUN_10002600(int param_1,int param_2,int param_3,int param_4);
void FUN_10002670(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_10002730(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5);
unsigned int FUN_100028b0(int param_1,int param_2);
void FUN_10002920(int param_1,int param_2);
void FUN_10002960(int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
            int param_6,int param_7,int param_8,unsigned int param_9);
void FUN_100029e0(int param_1,int param_2,unsigned short *param_3,int param_4,unsigned int param_5);
void FUN_10002b50(int param_1,unsigned int param_2);
int FUN_10002cd0(unsigned int param_1,int param_2,int param_3,int param_4);
void FUN_10002e30(int param_1,int param_2,int param_3,int *param_4,int param_5);
void  FUN_10002e70(int param_1);
void  FUN_10002ea0(void *this_ptr,int *param_1,unsigned int param_2,int *param_3);
int FUN_100030b0(int param_1,int param_2);
void  FUN_100030f0(void *this_ptr,char param_1);
int  FUN_100032b0(void *this_ptr,int param_1);
void FUN_10003300(int param_1,int param_2,char param_3);
void FUN_100042c0(int param_1,int param_2,char param_3);
void FUN_10004460(DWORD param_1);
void FUN_1000456b(int *param_1);
int FUN_100046b6(int *param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
int FUN_100047e1(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10004932(void);
void FUN_100049d5(void);
void FUN_100049ed(void);


void  FUN_10002070(void *this_ptr,int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = GetTotalAmount0(*(int *)this_ptr);
  if ((iVar2 != 0) && (param_1 != 0)) {
    cVar1 = TimerDone(*(char *)((int)this_ptr + 9));
    if (cVar1 != '\0') {
      RunTimer(*(char *)((int)this_ptr + 9),*(int *)((int)this_ptr + 0xd));
      if (param_2 != '\0') {
        CreateObject0(param_1,&DAT_10013d20,&DAT_10013e50,3,*(int *)((int)this_ptr + 4),0);
        return;
      }
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      if (uVar3 == 0) {
        CreateObject0(param_1,&DAT_10013d20,&DAT_10013cc8,3,*(int *)((int)this_ptr + 4),0);
      }
      else if (uVar3 == 1) {
        CreateObject0(param_1,&DAT_10013d20,&DAT_10013d00,3,*(int *)((int)this_ptr + 4),0);
        return;
      }
    }
  }
  return;
}





int __cdecl FUN_10002140(int param_1,int param_2)

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
        iVar3 = param_1 + iVar2 * 0x16;
        *(char *)(iVar3 + 9) = 0;
        *(int *)(iVar3 + 0x12) = 0xffff;
        *(int *)(iVar3 + 10) = 0;
        *(char *)(iVar3 + 8) = 1;
        return iVar3;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x16;
    } while (iVar2 < param_2);
  }
  return 0;
}





void __cdecl FUN_100021a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  char local_44 [20];
  int local_30;
  int local_2c;
  unsigned int local_18;
  unsigned int local_14;
  int local_10;
  unsigned int local_c;
  int local_8;
  
  iVar1 = param_1;
  iVar3 = GetTotalAmount0(param_1);
  iVar2 = param_4;
  iVar7 = param_3;
  if (((iVar3 != 0) && (param_3 != 0)) && (0 < param_4)) {
    if (*(char *)(iVar1 + 8) != '\0') {
      GetZoneCoor(param_3,&param_5,&param_1);
      GetUnitInfo(iVar1,0,local_44);
      uVar4 = local_2c - param_1;
      uVar5 = local_30 - param_5;
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      if ((int)uVar4 < 0) {
        uVar4 = -uVar4;
      }
      uVar6 = uVar5;
      if (uVar5 <= uVar4) {
        uVar6 = uVar4;
      }
      local_c = uVar6 + uVar5 + uVar4 >> 1;
      iVar7 = 1;
      local_10 = 0;
      if (1 < param_4) {
        local_8 = param_3 + 8;
        do {
          GetZoneCoor(local_8,&param_5,&param_1);
          local_14 = local_2c - param_1;
          local_18 = local_30 - param_5;
          uVar4 = local_18;
          if ((int)local_18 < 0) {
            uVar4 = -local_18;
          }
          uVar5 = local_14;
          if ((int)local_14 < 0) {
            uVar5 = -local_14;
          }
          uVar6 = uVar4;
          if (uVar4 <= uVar5) {
            uVar6 = uVar5;
          }
          if ((int)(uVar6 + uVar4 + uVar5 >> 1) < (int)local_c) {
            local_18 = local_2c - param_1;
            local_14 = local_30 - param_5;
            uVar4 = local_14;
            if ((int)local_14 < 0) {
              uVar4 = -local_14;
            }
            uVar5 = local_18;
            if ((int)local_18 < 0) {
              uVar5 = -local_18;
            }
            uVar6 = uVar4;
            if (uVar4 <= uVar5) {
              uVar6 = uVar5;
            }
            local_c = uVar6 + uVar4 + uVar5 >> 1;
            local_10 = iVar7;
          }
          iVar7 = iVar7 + 1;
          local_8 = local_8 + 8;
        } while (iVar7 < param_4);
      }
      *(char *)(iVar1 + 8) = 0;
      *(int *)(iVar1 + 10) = local_10;
      SelectUnits(iVar1,0);
      SelSendAndKill(param_2,param_3 + *(int *)(iVar1 + 10) * 8,0,0);
      return;
    }
    iVar3 = GetUnitsAmount1(param_3 + *(int *)(iVar1 + 10) * 8,iVar1);
    if (iVar3 != 0) {
      if ((char)param_5 == '\0') {
        iVar3 = *(int *)(iVar1 + 10);
        if (iVar3 == iVar2 + -1) {
          *(char *)(iVar1 + 9) = 0;
        }
        if (iVar3 == 0) {
          *(char *)(iVar1 + 9) = 1;
        }
        if ((*(char *)(iVar1 + 9) == '\0') ||
           (*(int *)(iVar1 + 10) = iVar3 + 1, *(char *)(iVar1 + 9) == '\0')) {
          *(int *)(iVar1 + 10) = *(int *)(iVar1 + 10) + -1;
        }
      }
      else {
        *(int *)(iVar1 + 10) = (*(int *)(iVar1 + 10) + 1) % iVar2;
      }
      SelectUnits(iVar1,0);
      SelSendAndKill(param_2,iVar7 + *(int *)(iVar1 + 10) * 8,0,0);
    }
  }
  return;
}





BOOL __cdecl FUN_100023b0(int param_1)

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





BOOL __cdecl
FUN_100023f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int local_3c;
  unsigned int local_38;
  short uStack_34;
  short uStack_32;
  unsigned int auStack_2c [5];
  short uStack_18;
  short uStack_14;
  
  iVar2 = 0;
  local_3c = 0xffff;
  local_38 = 0;
  uVar4 = 0;
  if (0 < param_6) {
    do {
      if (*(char *)(param_5 + iVar2) == '\x01') {
        ClearSelection(iVar2);
        iVar1 = param_3;
        iVar3 = param_2;
        if (0 < param_3) {
          do {
            SelectUnitsType(iVar3,iVar2,1);
            iVar1 = iVar1 + -1;
            iVar3 = iVar3 + 8;
          } while (iVar1 != 0);
        }
        FUN_100023b0(param_1);
        SaveSelectedUnits(iVar2,param_1,0);
        ClearSelection(iVar2);
        iVar1 = GetTotalAmount0(param_1);
        if (iVar1 != 0) {
          UnitsCenter(&uStack_34,param_1,100);
        }
        iVar3 = 0;
        iVar1 = GetTotalAmount0(param_1);
        if (0 < iVar1) {
          do {
            GetUnitInfo(param_1,iVar3,auStack_2c);
            uStack_34 = uStack_18;
            uStack_32 = uStack_14;
            iVar1 = GetTopDst(param_4,&uStack_34);
            if (iVar1 < local_3c) {
              local_3c = GetTopDst(param_4,&uStack_34);
              local_38 = auStack_2c[0] & 0xffff;
            }
            iVar3 = iVar3 + 1;
            iVar1 = GetTotalAmount0(param_1);
          } while (iVar3 < iVar1);
        }
      }
      iVar2 = iVar2 + 1;
      uVar4 = local_38;
    } while (iVar2 < param_6);
  }
  FUN_100023b0(param_1);
  if (uVar4 < 0xffff) {
    InsertUnitToGroup(0,param_1,uVar4);
  }
  return uVar4 < 0xffff;
}





int __cdecl
FUN_10002540(int param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  BOOL bVar1;
  int iVar2;
  int extraout_var;
  unsigned int uVar3;
  int uVar4;
  char auStack_8 [8];
  
  iVar2 = GetTotalAmount0(param_4);
  if (iVar2 == 0) {
    return 0;
  }
  UnitsCenter(auStack_8,param_4,100);
  FUN_100023b0(param_1);
  bVar1 = FUN_100023f0(param_1,param_2,param_3,auStack_8,param_6,param_7);
  uVar3 = (int)bVar1;
  if (bVar1) {
    FUN_10002920(param_4,param_1);
    uVar3 = FUN_100028b0(param_4,param_1);
    if (iVar2 * 0x23 < (int)uVar3) {
      SelectUnits(param_4,0);
      SelSendAndKill(param_5,auStack_8,0,0);
      SelAttackGroup(param_5,param_1);
      return (int)1;
    }
  }
  return uVar3 & 0xffffff00;
}





BOOL __cdecl FUN_10002600(int param_1,int param_2,int param_3,int param_4)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  char auStack_8 [8];
  
  bVar1 = 0;
  iVar2 = GetTotalAmount0(param_1);
  if (iVar2 != 0) {
    UnitsCenter(auStack_8,param_1,600);
    iVar2 = 0;
    if (0 < param_4) {
      do {
        if ((*(char *)(iVar2 + param_3) == '\x01') &&
           ((bVar1 || (iVar3 = GetUnitsAmount0(auStack_8,iVar2), iVar3 != 0)))) {
          bVar1 = 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
  }
  return !bVar1;
}





void __cdecl
FUN_10002670(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char local_8 [8];
  
  UnitsCenter(local_8,param_1,1000);
  FUN_100023b0(param_3);
  iVar1 = GetTotalAmount0(param_3);
  for (iVar2 = 0; (iVar1 == 0 && (iVar2 < param_5)); iVar2 = iVar2 + 1) {
    if ((*(char *)(iVar2 + param_4) == '\x01') &&
       (iVar1 = GetUnitsAmount0(local_8,iVar2), iVar1 != 0)) {
      SelectUnitsInZone(local_8,iVar2,0);
      SaveSelectedUnits(iVar2,param_3,0);
      SelectUnits(param_1,0);
      SelSendAndKill(param_2,local_8,0,0);
      SelAttackGroup(param_2,param_3);
    }
    iVar1 = GetTotalAmount0(param_3);
  }
  return;
}





void __cdecl
FUN_10002730(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int local_44 [5];
  unsigned int local_30;
  unsigned int local_2c;
  unsigned short local_18;
  unsigned short uStack_16;
  short local_10;
  short local_e;
  unsigned int local_8;
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    ClearSelection(param_4);
    SelectUnitsType(param_5,param_4,0);
    FUN_100023b0(param_3);
    SaveSelectedUnits(param_4,param_3,0);
    ClearSelection(param_4);
    iVar1 = GetTotalAmount0(param_3);
    if (iVar1 != 0) {
      param_4 = 100000;
      param_5 = 0xffff;
      UnitsCenter(&local_18,param_1,0x32);
      UnitsCenter(&local_10,param_1,0x32);
      iVar5 = 0;
      iVar1 = GetTotalAmount0(param_3);
      if (0 < iVar1) {
        do {
          GetUnitInfo(param_3,iVar5,local_44);
          local_e = (short)local_2c;
          uVar4 = (unsigned int)uStack_16 - (local_2c & 0xffff);
          local_10 = (short)local_30;
          local_8 = (unsigned int)local_18 - (local_30 & 0xffff);
          uVar2 = local_8;
          if ((int)local_8 < 0) {
            uVar2 = -local_8;
          }
          if ((int)uVar4 < 0) {
            uVar4 = -uVar4;
          }
          uVar3 = uVar2;
          if (uVar2 <= uVar4) {
            uVar3 = uVar4;
          }
          uVar2 = uVar3 + uVar2 + uVar4 >> 1;
          if (uVar2 < param_4) {
            param_5 = local_44[0] & 0xffff;
            param_4 = uVar2;
          }
          iVar5 = iVar5 + 1;
          iVar1 = GetTotalAmount0(param_3);
        } while (iVar5 < iVar1);
      }
      FUN_100023b0(param_3);
      if (param_5 < 0xffff) {
        InsertUnitToGroup(0,param_3,param_5);
      }
      SelectUnits(param_1,0);
      SelSendAndKill(param_2,&local_10,0,0);
      SelAttackGroup(param_2,param_3);
    }
  }
  return;
}





unsigned int __cdecl FUN_100028b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char local_30 [20];
  int local_1c;
  int local_18;
  
  GetUnitInfo(param_1,0,local_30);
  iVar2 = local_18;
  iVar1 = local_1c;
  GetUnitInfo(param_2,0,local_30);
  uVar3 = local_18 - iVar2;
  uVar5 = local_1c - iVar1;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
  }
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  uVar4 = uVar5;
  if (uVar5 <= uVar3) {
    uVar4 = uVar3;
  }
  return uVar4 + uVar5 + uVar3 >> 1;
}





void __cdecl FUN_10002920(int param_1,int param_2)

{
  char auStack_10 [8];
  char local_8 [8];
  
  UnitsCenter(local_8,param_1,0x32);
  UnitsCenter(auStack_10,param_2,0x32);
  GetTopDst(local_8,auStack_10);
  return;
}





void __cdecl
FUN_10002960(int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
            int param_6,int param_7,int param_8,unsigned int param_9)

{
  BOOL bVar1;
  int uVar2;
  
  bVar1 = FUN_10002600(param_1,param_2,param_5,param_6);
  if (bVar1) {
    uVar2 = FUN_10002540(param_3,param_7,param_8,param_1,param_2,param_5,param_6);
    if ((char)uVar2 == '\0') {
      FUN_10002730(param_1,param_2,param_3,param_4,param_9);
      return;
    }
  }
  else {
    FUN_10002670(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}





void __cdecl FUN_100029e0(int param_1,int param_2,unsigned short *param_3,int param_4,unsigned int param_5)

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
  
  local_8 = 0xffffffff;
  ClearSelection(param_2);
  uVar3 = param_5;
  if (0 < (int)param_5) {
    do {
      SelectUnitsType(param_4,param_2,1);
      param_4 = param_4 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_100023b0(param_1);
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
      if ((int)param_5 < 0) {
        uVar4 = -param_5;
      }
      uVar2 = uVar3;
      if (uVar3 <= uVar4) {
        uVar2 = uVar4;
      }
      if (uVar2 + uVar3 + uVar4 >> 1 <= (*(unsigned int *)(param_3 + 2) & 0xffffff)) {
        param_5 = local_4c[0] & 0xffff;
        FUN_10002ea0(local_20,local_18,1,&param_5);
      }
      param_2 = param_2 + 1;
      iVar1 = GetTotalAmount0(param_1);
    } while (param_2 < iVar1);
  }
  FUN_100023b0(param_1);
  puVar5 = local_1c;
  if (local_1c != local_18) {
    do {
      InsertUnitToGroup(0,param_1,*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_18);
  }
  FUN_1000456b((int *)local_1c);
  return;
}





void __cdecl FUN_10002b50(int param_1,unsigned int param_2)

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
      if ((int)local_8 < 0) {
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
          if ((int)local_c < 0) {
            uVar5 = -local_c;
          }
          uVar6 = local_8;
          if ((int)local_8 < 0) {
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
            if ((int)local_c < 0) {
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
        FUN_100023b0(iVar1);
        InsertUnitToGroup(0,iVar1,uVar3);
      }
    }
  }
  return;
}





int __cdecl FUN_10002cd0(unsigned int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  unsigned short auStack_34 [4];
  unsigned int auStack_2c [11];
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  UnitsCenter(auStack_34,param_1,*(short *)(param_1 + 0xe));
  FUN_100029e0(param_2,param_4,auStack_34,0x10013a10,9);
  iVar1 = GetTotalAmount0(param_2);
  if (iVar1 != 0) {
    FUN_10002b50(param_2,param_1);
    SelectUnits(param_1,0);
    GetUnitInfo(param_2,0,auStack_2c);
    FUN_10002e30(auStack_34,param_1,param_3,(int *)(param_1 + 0x12),auStack_2c[0] & 0xffff);
    SelAttackGroup(param_3,param_2);
    *(char *)(param_1 + 8) = 1;
    FUN_100023b0(param_2);
    return (int)1;
  }
  FUN_100029e0(param_2,param_4,auStack_34,0x10013dc0,0x12);
  iVar1 = GetTotalAmount0(param_2);
  if (iVar1 != 0) {
    FUN_10002b50(param_2,param_1);
    SelectUnits(param_1,0);
    GetUnitInfo(param_1,0,auStack_2c);
    FUN_10002e30(auStack_34,param_2,param_3,(int *)(param_1 + 0x12),auStack_2c[0] & 0xffff);
    SelAttackGroup(param_3,param_2);
    *(char *)(param_1 + 8) = 1;
    FUN_100023b0(param_2);
    return (int)1;
  }
  *(int *)(param_1 + 0x12) = 0xffff;
  FUN_100023b0(param_2);
  return (unsigned int)extraout_var_01 << 8;
}





void __cdecl
FUN_10002e30(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  if (param_5 != *param_4) {
    *param_4 = param_5;
    SelectUnits(param_2,0);
    SelSendAndKill(param_3,param_1,0,0);
  }
  return;
}





void  FUN_10002e70(int param_1)

{
  FUN_1000456b(*(int **)(param_1 + 4));
  *(int *)(param_1 + 4) = 0;
  *(int *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = 0;
  return;
}





void  FUN_10002ea0(void *this_ptr,int *param_1,unsigned int param_2,int *param_3)

{
  int *puVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int *puVar5;
  unsigned int uVar6;
  int *puVar7;
  
  puVar7 = *(int **)((int)this_ptr + 8);
  if (param_2 <= (unsigned int)(*(int *)((int)this_ptr + 0xc) - (int)puVar7 >> 2)) {
    if ((unsigned int)((int)puVar7 - (int)param_1 >> 2) < param_2) {
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
      puVar7 = *(int **)((int)this_ptr + 8);
      for (iVar2 = param_2 - ((int)puVar7 - (int)param_1 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar7 != (int *)0x0) {
          *puVar7 = *param_3;
        }
        puVar7 = puVar7 + 1;
      }
      puVar7 = *(int **)((int)this_ptr + 8);
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(unsigned int *)((int)this_ptr + 8) = *(int *)((int)this_ptr + 8) + param_2 * 4;
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
      puVar7 = *(int **)((int)this_ptr + 8);
      for (puVar5 = puVar7 + -param_2; param_1 != puVar5; puVar5 = puVar5 + -1) {
        puVar7 = puVar7 + -1;
        *puVar7 = puVar5[-1];
      }
      puVar7 = param_1 + param_2;
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)((int)this_ptr + 8) = *(int *)((int)this_ptr + 8) + param_2 * 4;
    }
    return;
  }
  iVar2 = *(int *)((int)this_ptr + 4);
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
  for (puVar7 = *(int **)((int)this_ptr + 4); uVar6 = param_2, puVar1 = puVar5, puVar7 != param_1
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
  puVar1 = *(int **)((int)this_ptr + 8);
  puVar7 = puVar5 + param_2;
  if (param_1 != puVar1) {
    puVar5 = (int *)((int)puVar7 + (param_2 * -4 - (int)puVar5) + (int)param_1);
    do {
      if (puVar7 != (int *)0x0) {
        *puVar7 = *puVar5;
      }
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar1);
  }
  FUN_1000456b(*(int **)((int)this_ptr + 4));
  *(int **)((int)this_ptr + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)((int)this_ptr + 4);
  if (iVar2 == 0) {
    *(int **)((int)this_ptr + 4) = puVar4;
    *(int **)((int)this_ptr + 8) = puVar4 + param_2;
    return;
  }
  *(int **)((int)this_ptr + 4) = puVar4;
  *(int **)((int)this_ptr + 8) = puVar4 + (*(int *)((int)this_ptr + 8) - iVar2 >> 2) + param_2;
  return;
}





int __cdecl FUN_100030b0(int param_1,int param_2)

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
        return param_1 + iVar2 * 8;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < param_2);
  }
  return 0;
}





void  FUN_100030f0(void *this_ptr,char param_1)

{
  switch(param_1) {
  case 0:
    RegisterUnitType(this_ptr,"Rundashir_Avstria_DIP(au)");
    RegisterUnitType((int)this_ptr + 8,"Pehota_turki_DIP(au)");
    RegisterUnitType((int)this_ptr + 0x10,"Strelec_Algir_DIP(au)");
    RegisterUnitType((int)this_ptr + 0x18,"Grenader_DIP(au)");
    RegisterUnitType((int)this_ptr + 0x20,"Kozak_loshad_DIP(au)");
    RegisterUnitType((int)this_ptr + 0x28,"Dragun_18_DIP(au)");
    return;
  case 1:
    RegisterUnitType(this_ptr,"Rundashir_Avstria_DIP(GE)");
    RegisterUnitType((int)this_ptr + 8,"Pehota_turki_DIP(GE)");
    RegisterUnitType((int)this_ptr + 0x10,"Strelec_Algir_DIP(GE)");
    RegisterUnitType((int)this_ptr + 0x18,"Grenader_DIP(GE)");
    RegisterUnitType((int)this_ptr + 0x20,"Kozak_loshad_DIP(GE)");
    RegisterUnitType((int)this_ptr + 0x28,"Dragun_18_DIP(GE)");
    return;
  case 2:
    RegisterUnitType(this_ptr,"Rundashir_Avstria_DIP(SA)");
    RegisterUnitType((int)this_ptr + 8,"Pehota_turki_DIP(SA)");
    RegisterUnitType((int)this_ptr + 0x10,"Strelec_Algir_DIP(SA)");
    RegisterUnitType((int)this_ptr + 0x18,"Grenader_DIP(SA)");
    RegisterUnitType((int)this_ptr + 0x20,"Kozak_loshad_DIP(SA)");
    RegisterUnitType((int)this_ptr + 0x28,"Dragun_18_DIP(SA)");
    return;
  case 3:
    RegisterUnitType(this_ptr,"Rundashir_Avstria_DIP(PO)");
    RegisterUnitType((int)this_ptr + 8,"Pehota_turki_DIP(PO)");
    RegisterUnitType((int)this_ptr + 0x10,"Strelec_Algir_DIP(PO)");
    RegisterUnitType((int)this_ptr + 0x18,"Grenader_DIP(PO)");
    RegisterUnitType((int)this_ptr + 0x20,"Kozak_loshad_DIP(PO)");
    RegisterUnitType((int)this_ptr + 0x28,"Dragun_18_DIP(PO)");
    return;
  case 4:
    RegisterUnitType(this_ptr,"Rundashir_Avstria_DIP(SV)");
    RegisterUnitType((int)this_ptr + 8,"Pehota_turki_DIP(SV)");
    RegisterUnitType((int)this_ptr + 0x10,"Strelec_Algir_DIP(SV)");
    RegisterUnitType((int)this_ptr + 0x18,"Grenader_DIP(SV)");
    RegisterUnitType((int)this_ptr + 0x20,"Kozak_loshad_DIP(SV)");
    RegisterUnitType((int)this_ptr + 0x28,"Dragun_18_DIP(SV)");
  }
  return;
}





int  FUN_100032b0(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    break;
  case 1:
    return (int)this_ptr + 8;
  case 2:
    return (int)this_ptr + 0x10;
  case 3:
    return (int)this_ptr + 0x18;
  case 4:
    return (int)this_ptr + 0x28;
  case 5:
    return (int)this_ptr + 0x20;
  default:
    this_ptr = (void *)0x0;
  }
  return (int)this_ptr;
}





void __cdecl FUN_10003300(int param_1,int param_2,char param_3)

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





void __cdecl FUN_100042c0(int param_1,int param_2,char param_3)

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
  else if (param_3 == '\r') {
    if (param_2 == 9) {
      RegisterUnitType(param_1,"Yahta(SA)");
      RegisterUnitType(param_1 + 8,"Linkor(SA)");
      RegisterUnitType(param_1 + 0x10,"PERES_KOR(SA)");
      RegisterUnitType(param_1 + 0x18,"Fregat(SA)");
      RegisterUnitType(param_1 + 0x20,"GALERA(SA)");
      RegisterUnitType(param_1 + 0x28,"Victoria(SA)");
      RegisterUnitType(param_1 + 0x30,"FregatNEW(SA)");
      RegisterUnitType(param_1 + 0x38,"KECH(SA)");
      RegisterUnitType(param_1 + 0x40,"KUTTER(SA)");
      return;
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





void __cdecl FUN_10004460(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004c53();
  pDVar1[5] = param_1;
  return;
}





void __cdecl FUN_1000456b(int *param_1)

{
  FUN_10004e1c(param_1);
  return;
}





int __cdecl
FUN_100046b6(int *param_1,int param_2,int param_3,int param_4,
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
  
  local_28 = FUN_1000476c;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10004c53();
  ((int(*)())pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
  }
  return 0;
}





int __cdecl FUN_100047e1(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

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
    if (uVar5 == 0xffffffff) {
      FUN_100057cd();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(unsigned int *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_100057cd();
  }
  return iVar1 + uVar5 * 0x14;
}





void FUN_10004932(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_10010a24 = *(int *)(unaff_EBP + 8);
  DAT_10010a20 = in_EAX;
  DAT_10010a28 = unaff_EBP;
  return;
}







void FUN_100049d5(void)

{
  void *extraout_ECX;
  
  FUN_100049ed();
  DAT_10013e94_ovl = FUN_10005d4f();
  FUN_10005cff(extraout_ECX);
  return;
}





void FUN_100049ed(void)

{
  return;
}





void OnInit(void)

{
  DWORD DVar1;
  char *puVar2;
  int *puVar3;
  
                    
  RegisterVar(&DAT_1000f040,8);
  RegisterDynGroup(&DAT_10013cc0);
  RegisterVar(&DAT_10013cc0,8);
  RegisterDynGroup(&DAT_10013d08);
  RegisterVar(&DAT_10013d08,8);
  RegisterVar(&DAT_10013a58,0x1ce);
  puVar2 = &DAT_10013a61;
  do {
    RegisterDynGroup(puVar2 + -9);
    puVar2[-1] = 1;
    *puVar2 = 1;
    *(int *)(puVar2 + 5) = 0x640;
    *(int *)(puVar2 + 9) = 0xffff;
    *(int *)(puVar2 + 1) = 0;
    puVar2 = puVar2 + 0x16;
  } while ((int)puVar2 < 0x10013c2f);
  FUN_10003300(0x10013dc0,0x12,0xd);
  FUN_100042c0(0x10013a10,9,'\r');
  RegisterFormation(&DAT_10013d20,"#ALONE");
  RegisterUnitType(&DAT_10013cc8,"Fregat(SV)");
  RegisterUnitType(&DAT_10013e50,"FregatNEW(SV)");
  RegisterUnitType(&DAT_10013d00,"KECH(SV)");
  RegisterUnits(&DAT_10013c90,"GPort1");
  RegisterUnits(&DAT_10013ca0,"GPort2");
  RegisterUnits(&DAT_10013c98,"GPort3");
  RegisterZone(&DAT_10013da0,"ZPort1");
  RegisterZone(&DAT_10013db0,"ZPort2");
  RegisterZone(&DAT_10013da8,"ZPort3");
  RegisterVar(&DAT_10013d58,0x11);
  RegisterVar(&DAT_10013d70,0x11);
  RegisterVar(&DAT_10013d88,0x11);
  RegisterDynGroup(&DAT_10013e58);
  RegisterVar(&DAT_10013e58,8);
  RegisterVar(&DAT_10013e6c,4);
  RegisterVar(&DAT_10013e70,4);
  RegisterZone(&DAT_10013c40,"ZAttack1");
  RegisterZone(&DAT_10013c48,"ZAttack2");
  RegisterZone(&DAT_10013c50,"ZAttack3");
  RegisterZone(&DAT_10013c58,"ZAttack4");
  RegisterZone(&DAT_10013c60,"ZAttack5");
  RegisterZone(&DAT_10013c68,"ZAttack6");
  RegisterZone(&DAT_10013c70,"ZAttack7");
  RegisterZone(&DAT_10013c78,"ZAttack8");
  RegisterVar(&DAT_10013e64,4);
  RegisterDynGroup(&DAT_100139d0);
  RegisterDynGroup(&DAT_10013d18);
  RegisterDynGroup(&DAT_10013db8);
  RegisterDynGroup(&DAT_10013c38);
  RegisterDynGroup(&DAT_10013c30);
  RegisterVar(&DAT_10013db8,8);
  RegisterVar(&DAT_10013c38,8);
  RegisterVar(&DAT_10013c30,8);
  RegisterVar(&DAT_10013e74,4);
  RegisterVar(&DAT_1000f04c,4);
  FUN_100030f0(&DAT_100139d8,4);
  puVar3 = &DAT_10013cd0;
  do {
    RegisterDynGroup(puVar3);
    puVar3 = puVar3 + 8;
  } while ((int)puVar3 < 0x10013d00);
  RegisterVar(&DAT_10013cd0,0x30);
  RegisterUnitType(&DAT_10013d50,"Grenader(SV)");
  RegisterUnitType(&DAT_10013d28,"WALL_UKR(SA)");
  RegisterUnitType(&DAT_10013d30,"WALL_EV(SA)");
  RegisterUnitType(&DAT_10013d38,"WALL_UKR(SV)");
  RegisterUnitType(&DAT_10013d40,"WALL_EV(SV)");
  RegisterUnits(&DAT_10013a08,"GSweedenDip");
  RegisterUnits(&DAT_10013c88,"GBarack18_01");
  RegisterUnits(&DAT_10013c80,"GBarack18_02");
  RegisterVar(&DAT_10013e68,4);
  RegisterVar(&DAT_1000f048,4);
  RegisterDynGroup(&DAT_10013e58);
  RegisterVar(&DAT_10013e58,8);
  RegisterVar(&DAT_10013e6c,4);
  RegisterVar(&DAT_10013e70,4);
  RegisterUnits(&DAT_10013ca8,"GNEFort");
  RegisterUnits(&DAT_10013c28,"GSeeFort");
  RegisterUnits(&DAT_10013cb8,"GSeeUnits");
  RegisterUnits(&DAT_10013d10,"GFood");
  RegisterUnits(&DAT_10013d48,"GWood");
  RegisterUnits(&DAT_10013cb0,"GStone");
  SetPlayerName(1,"SVEDEN");
  SetPlayerName(3,"ROBBERS");
  ChangeFriends(1,0xe);
  DVar1 = FUN_1000448f((int *)0x0);
  FUN_10004460(DVar1);
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  void *pcVar7;
  int *puVar8;
  int iVar9;
  void *pcVar10;
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
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    EnableUnit(0,&DAT_10013d30,0);
    EnableUnit(0,&DAT_10013d38,0);
    EnableUnit(0,&DAT_10013d40,0);
    iVar2 = GetDiff(0);
    SetResource(0,0,(8 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,3,(8 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,2,(8 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,1,(8 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,4,(8 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,5,(8 - iVar2) * 1000);
    SetResource(1,0,5000);
    SetResource(1,3,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,4,5000);
    SetResource(1,5,5000);
    uVar3 = GetDiff(0);
    StartAI(1,"SVEDEN.0",0,1,1,uVar3);
    SetTrigg(2,0);
    SetTrigg(3,0);
    SetTrigg(4,0);
    RunTimer(DAT_10013d61,DAT_10013d65);
    RunTimer(DAT_10013d79,DAT_10013d7d);
    RunTimer(DAT_10013d91,DAT_10013d95);
    iVar2 = GetDiff(0);
    RunTimer(1,(8 - iVar2) * 1000);
    RunTimer(2,500);
    RunTimer(3,500);
    RunTimer(4,500);
    RunTimer(5,2000);
    ShowPage("#PAGE2501");
    EnableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x43);
    EnableMission(0x44);
    EnableMission(0x4c);
    EnableMission(0x4d);
    EnableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
    iVar2 = GetDiff(0);
    DAT_10013e74 = iVar2 * 3 + 5;
    iVar2 = GetDiff(0);
    DAT_1000f04c = (0xf - iVar2) * 100;
    uVar3 = GetDiff(0);
    switch(uVar3) {
    case 0:
      DAT_10013e68 = 100;
      break;
    case 1:
      DAT_10013e68 = 0x3c;
      break;
    case 2:
      DAT_10013e68 = 0x28;
      break;
    case 3:
      DAT_10013e68 = 0x1e;
    }
    TakeFood(&DAT_10013d10);
    TakeWood(&DAT_10013d48);
    TakeStone(&DAT_10013cb0);
  }
  DAT_10013e64 = (DAT_10013e64 + 1) % 3;
  SaveSelectedUnits(0,&DAT_10013d08,0);
  DAT_10013d58_ovl = &DAT_10013c90;
  DAT_10013d5c_ovl = &DAT_10013da0;
  DAT_10013d70_ovl = &DAT_10013ca0;
  cVar1 = '\0';
  DAT_10013d74_ovl = &DAT_10013db0;
  DAT_10013d88_ovl = &DAT_10013c98;
  DAT_10013d8c_ovl = &DAT_10013da8;
  iVar2 = FUN_10002140(0x10013a58,7);
  FUN_10002070(&DAT_10013d58,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10002140(0x10013af2,7);
  FUN_10002070(&DAT_10013d70,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10002140(0x10013b8c,7);
  FUN_10002070(&DAT_10013d88,iVar2,cVar1);
  if (DAT_10013e64 == 0) {
    puVar8 = &DAT_10013a58;
    do {
      if (0x10013b49 < (int)puVar8) break;
      iVar2 = FUN_10002cd0((unsigned int)puVar8,0x10013cc0,3,0);
      if ((char)iVar2 == '\0') {
        FUN_100021a0((int)puVar8,3,0x10013c40,8,0);
      }
      puVar8 = puVar8 + 0x16;
    } while (DAT_10013e64 == 0);
  }
  if (DAT_10013e64 == 1) {
    puVar8 = &DAT_10013b4a;
    do {
      if (0x10013c25 < (int)puVar8) break;
      iVar2 = FUN_10002cd0((unsigned int)puVar8,0x10013cc0,3,0);
      if ((char)iVar2 == '\0') {
        FUN_100021a0((int)puVar8,3,0x10013c40,8,0);
      }
      puVar8 = puVar8 + 0x16;
    } while (DAT_10013e64 == 1);
  }
  if (DAT_10013e64 == 2) {
    ClearSelection(0);
    SelectUnitsType(&DAT_10013e48,0,0);
    SaveSelectedUnits(0,&DAT_10013d18,0);
    iVar2 = GetTotalAmount0(&DAT_10013d18);
    if (iVar2 != 0) {
      ClearSelection(0);
      puVar8 = &DAT_10013a10;
      do {
        SelectUnitsType(puVar8,0,1);
        puVar8 = puVar8 + 8;
      } while ((int)puVar8 < 0x10013a58);
      SaveSelectedUnits(0,&DAT_100139d0,0);
      iVar2 = GetTotalAmount0(&DAT_100139d0);
      if (iVar2 != 0) {
        local_c = 0;
        iVar2 = GetTotalAmount0(&DAT_100139d0);
        if (0 < iVar2) {
          do {
            GetUnitInfo(&DAT_100139d0,local_c,local_40);
            iVar9 = 0;
            local_5 = '\0';
            iVar2 = GetTotalAmount0(&DAT_10013d18);
            if (0 < iVar2) {
              do {
                if (local_5 != '\0') break;
                GetUnitInfo(&DAT_10013d18,iVar9,local_6c);
                local_10 = local_54 - local_28;
                local_14 = local_58 - local_2c;
                uVar4 = local_14;
                if ((int)local_14 < 0) {
                  uVar4 = -local_14;
                }
                uVar6 = local_10;
                if ((int)local_10 < 0) {
                  uVar6 = -local_10;
                }
                uVar5 = uVar4;
                if (uVar4 <= uVar6) {
                  uVar5 = uVar6;
                }
                if (uVar5 + uVar4 + uVar6 >> 1 < 1000) {
                  if ((unsigned int)uStack_3a < local_3c + 0x32) {
                    local_3c = uStack_3a;
                  }
                  else {
                    local_3c = local_3c + 0x32;
                  }
                  SetUnitInfo(local_40);
                  local_5 = '\x01';
                }
                iVar9 = iVar9 + 1;
                iVar2 = GetTotalAmount0(&DAT_10013d18);
              } while (iVar9 < iVar2);
            }
            iVar9 = local_c + 1;
            local_c = iVar9;
            iVar2 = GetTotalAmount0(&DAT_100139d0);
          } while (iVar9 < iVar2);
        }
      }
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10013a08);
  if ((iVar2 != 0) && (cVar1 = TimerDone(1), pcVar10 = (void*)&SetTrigg, cVar1 != '\0')) {
    cVar1 = TimerDone(2);
    if ((cVar1 != '\0') &&
       (iVar2 = FUN_100030b0(0x10013cd0,2), pcVar10 = (void*)&SetTrigg, iVar2 != 0)) {
      SetTrigg(2,1);
    }
    cVar1 = Trigg(2);
    if (cVar1 != '\0') {
      cVar1 = CheckProduction(&DAT_10013a08);
      if (cVar1 != '\0') {
        puVar8 = &DAT_10013db8;
        uVar4 = rand();
        uVar4 = uVar4 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        iVar2 = FUN_100032b0(&DAT_100139d8,uVar4);
        ProduceUnit(&DAT_10013a08,iVar2,puVar8);
      }
      iVar2 = GetTotalAmount0(&DAT_10013db8);
      if (DAT_10013e74 <= iVar2) {
        iVar2 = FUN_100030b0(0x10013cd0,2);
        RemoveGroup(&DAT_10013db8,iVar2);
        RunTimer(2,DAT_1000f04c);
        SetTrigg(2,0);
      }
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10013c88);
  if ((iVar2 != 0) && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    cVar1 = TimerDone(3);
    if ((cVar1 != '\0') && (iVar2 = FUN_100030b0(0x10013ce0,2), iVar2 != 0)) {
      SetTrigg(3,1);
    }
    cVar1 = Trigg(3);
    if (cVar1 != '\0') {
      cVar1 = CheckProduction(&DAT_10013c88);
      if (cVar1 != '\0') {
        ProduceUnit(&DAT_10013c88,&DAT_10013d50,&DAT_10013c38);
      }
      iVar2 = GetTotalAmount0(&DAT_10013c38);
      if (DAT_10013e74 <= iVar2) {
        iVar2 = FUN_100030b0(0x10013ce0,2);
        RemoveGroup(&DAT_10013c38,iVar2);
        RunTimer(3,DAT_1000f04c);
        SetTrigg(3,0);
      }
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10013c80);
  if ((iVar2 != 0) && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    cVar1 = TimerDone(4);
    if ((cVar1 != '\0') && (iVar2 = FUN_100030b0(0x10013cf0,2), iVar2 != 0)) {
      SetTrigg(4,1);
    }
    cVar1 = Trigg(4);
    if (cVar1 != '\0') {
      cVar1 = CheckProduction(&DAT_10013c80);
      if (cVar1 != '\0') {
        ProduceUnit(&DAT_10013c80,&DAT_10013d50,&DAT_10013c30);
      }
      iVar2 = GetTotalAmount0(&DAT_10013c30);
      if (DAT_10013e74 <= iVar2) {
        iVar2 = FUN_100030b0(0x10013cf0,2);
        RemoveGroup(&DAT_10013c30,iVar2);
        RunTimer(4,DAT_1000f04c);
        SetTrigg(4,0);
      }
    }
  }
  if (DAT_10013e64 == 2) {
    puVar8 = &DAT_10013cd0;
    do {
      if (0x10013cff < (int)puVar8) break;
      FUN_10002960(puVar8,3,&DAT_10013cc0,0,0x1000f040,8,0x10013dc0,0x12,0x10013d28);
      puVar8 = puVar8 + 8;
    } while (DAT_10013e64 == 2);
  }
  cVar1 = TimerDoneFirst(5);
  if (cVar1 != '\0') {
    ShowPage("#PAGE2502");
  }
  if ((2 < DAT_10013e70) && (cVar1 = Trigg(5), cVar1 != '\0')) {
    SetTrigg(5,0);
    ShowPage("#PAGE2506");
  }
  if ((7 < DAT_10013e70) && (cVar1 = Trigg(6), cVar1 != '\0')) {
    SetTrigg(6,0);
    ShowPageParam("#PAGE2507",DAT_10013e68);
    uVar3 = GetDiff(0);
    switch(uVar3) {
    case 0:
      uVar3 = 0x45;
      break;
    case 1:
      uVar3 = 0x46;
      break;
    case 2:
      uVar3 = 0x47;
      break;
    case 3:
      uVar3 = 0x48;
      break;
    default:
      goto switchD_10001dd0_default;
    }
    EnableMission(uVar3);
  }
switchD_10001dd0_default:
  cVar1 = Trigg(7);
  if (((cVar1 != '\0') &&
      (((iVar2 = GetUnitsByNation(&DAT_10013c28,3), pcVar7 = (void*)&GetTotalAmount0, iVar2 != 0 ||
        (iVar2 = GetTotalAmount0(&DAT_10013cb8), iVar2 != 0)) &&
       (iVar2 = GetTotalAmount0(&DAT_10013ca8), iVar2 == 0)))) &&
     (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(7,0);
    ShowPage("#PAGE2505");
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10013ca8), iVar2 == 0)) &&
     (cVar1 = NationIsErased(1), cVar1 == '\0')) {
    SetTrigg(8,0);
    ShowPage("#PAGE2503");
  }
  cVar1 = Trigg(9);
  if (((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10013ca8), iVar2 != 0)) {
    SetTrigg(9,0);
    ShowPage("#PAGE2504");
  }
  iVar2 = GetTotalAmount0(&DAT_10013e58);
  if (DAT_10013e6c != iVar2 && -1 < DAT_10013e6c - iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10013e58);
    DAT_10013e70 = DAT_10013e70 + (DAT_10013e6c - iVar2);
  }
  ClearSelection(0);
  puVar8 = &DAT_10013a10;
  do {
    SelectUnitsType(puVar8,0,1);
    puVar8 = puVar8 + 8;
  } while ((int)puVar8 < 0x10013a58);
  SaveSelectedUnits(0,&DAT_10013e58,0);
  DAT_10013e6c = GetTotalAmount0(&DAT_10013e58);
  if ((DAT_1000f048 <= DAT_10013e70) && (DAT_1000f048 < DAT_10013e68 + -5)) {
    DAT_1000f048 = DAT_1000f048 + 10;
    ShowPageParam("#PAGE2510",DAT_10013e70);
  }
  iVar2 = GetUnitsByNation(&DAT_10013c28,3);
  if ((((iVar2 == 0) && (iVar2 = GetTotalAmount0(&DAT_10013cb8), iVar2 == 0)) &&
      (cVar1 = NationIsErased(1), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10013ca8), iVar2 == 0)) {
    ShowPage("#PAGE2508");
    ShowVictory();
  }
  if (DAT_10013e68 <= DAT_10013e70) {
    ShowPageParam("#PAGE2509",DAT_10013e70);
    LooseGame();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE2511");
    LooseGame();
  }
  ClearSelection(0);
  SelectUnits(&DAT_10013d08,0);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
