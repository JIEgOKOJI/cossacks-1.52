#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_1000f210 = 0;
long long DAT_10011080 = 0;
char DAT_10011328[] = "mill";
char DAT_1001137c[] = "depo";
long long DAT_100148f8 = 0;
unsigned char DAT_10014f08[96] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10014f68[96] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10014fc8[96] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0xE4, 0x00, 0x00, 0x00, 0x4B, 0x30, 0x6A, 0x30, 0xB1, 0x30, 0xC4, 0x30, 0xCB, 0x30, 0xE8, 0x30, 0xF5, 0x30, 0xFC, 0x30, 0x06, 0x31, 0x10, 0x31, 0x17, 0x31, 0x28, 0x31, 0x2F, 0x31, 0x38, 0x31, 0x63, 0x31, 0x71, 0x31};
long long DAT_10015090 = 0;
unsigned char DAT_10015094[60] = {0};
long long DAT_100150d0 = 0;
long long DAT_100150d8 = 0;
long long DAT_100150e0 = 0;
unsigned char DAT_100150f0[368] = {0};
unsigned char DAT_10015260[368] = {0};
unsigned char DAT_100153d0[368] = {0};
unsigned char DAT_10015540[368] = {0};
long long DAT_100156b0 = 0;
long long DAT_100156b8 = 0;
long long DAT_100156c0 = 0;
unsigned char DAT_100156c8[176] = {0};
long long DAT_10015778 = 0;
long long DAT_10015780 = 0;
long long DAT_10015788 = 0;
long long DAT_10015790 = 0;
long long DAT_10015798 = 0;
unsigned char DAT_100157a0[664] = {0};
#define DAT_100157d9 (*(long long *)((char *)DAT_100157a0 + 0x39))
#define DAT_100157dd (*(long long *)((char *)DAT_100157a0 + 0x3d))
unsigned char DAT_10015a38[328] = {0};
unsigned char DAT_10015b80[96] = {0};
long long DAT_10015be0 = 0;
long long DAT_10015be8 = 0;
long long DAT_10015bf0 = 0;
long long DAT_10015bf8 = 0;
long long DAT_10015c00 = 0;
int *DAT_10015c08 = 0;
long long DAT_10015c18 = 0;
unsigned char DAT_10015c28[62504] = {0};
#define DAT_1001746d (*(long long *)((char *)DAT_10015c28 + 0x1845))
long long DAT_10025050 = 0;
long long DAT_10025058 = 0;
int DAT_10025060 = 0;
long long DAT_10025068 = 0;
unsigned char DAT_10025070[104] = {0};
unsigned char DAT_100250d8[120] = {0};
unsigned char DAT_10025150[120] = {0};
unsigned char DAT_100251c8[120] = {0};
unsigned char DAT_10025240[120] = {0};
unsigned char DAT_100252b8[120] = {0};
long long DAT_10025330 = 0;
long long DAT_10025338 = 0;
long long DAT_10025340 = 0;
long long DAT_10025348 = 0;
unsigned char DAT_10025350[936] = {0};
unsigned char DAT_100256f8[15600] = {0};
long long DAT_100293e8 = 0;
long long DAT_100293ec = 0;
long long DAT_100293f4 = 0;
int DAT_1002ab4c = 0;
int DAT_1002ab50 = 0;
int DAT_1000f210_ovl = 0;
int DAT_10011080_ovl = 2;
int DAT_100293ec_ovl = 0;
int DAT_100293f4_ovl = 0;

/* Stubs for missing internal functions */
int FUN_1000482d() { return 0; }
int FUN_10004b60() { return 0; }
int FUN_10004bb0() { return 0; }
int FUN_100050f1() { return 0; }
int FUN_100050fa() { return 0; }
int FUN_1000511d() { return 0; }
int FUN_1000544c() { return 0; }
int FUN_10005ab8() { return 0; }
int FUN_1000cc81() { return 0; }


/* Forward declarations */
char FUN_10001000(unsigned int param_1,unsigned int param_2);
void FUN_100010e0(int param_1);
int FUN_10001120(int param_1);
void FUN_10001160(void);
void FUN_10001170(void);
int  FUN_100011a0(int param_1);
void  FUN_100011f0(void *this_ptr,int param_1);
void  FUN_10001200(void *this_ptr,int param_1);
void  FUN_10001210(void *this_ptr,int param_1);
void  FUN_100012a0(void *this_ptr,int param_1);
void  FUN_10001380(void *this_ptr,int param_1);
int  FUN_100013d0(intptr_t param_1);
void  FUN_10001430(void *this_ptr,int param_1);
void  FUN_10001440(void *this_ptr,int param_1,int param_2);
void  FUN_10001480(void *this_ptr,int param_1);
void  FUN_100014b0(void *this_ptr,int param_1);
int  FUN_100014e0(char *param_1);
BOOL  FUN_10001770(int param_1);
void  FUN_10001830(void *this_ptr,int param_1,int param_2);
int  FUN_10001840(void *this_ptr,int param_1);
char  FUN_10001870(char *param_1);
int 
FUN_100018f0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10001950(intptr_t param_1);
void  FUN_100019a0(intptr_t param_1);
int  FUN_10001a10(void *this_ptr,int param_1);
void  FUN_10001a50(char *param_1);
void  FUN_10001ae0(int param_1);
int  FUN_10001af0(void *this_ptr,int param_1);
int  FUN_10001b20(void *this_ptr,int param_1);
void FUN_10001bc0(void);
int *  FUN_10001c00(int *param_1);
int  FUN_10001c30(void *this_ptr,int param_1);
int  FUN_10001d00(void *this_ptr,int param_1);
void 
FUN_10001d50(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
BOOL  FUN_10001da0(int param_1);
int  FUN_10001dc0(int *param_1);
int *  FUN_10001e40(int *param_1);
int  FUN_10001e50(void *this_ptr,char param_1);
int  FUN_10001e90(void *this_ptr,int param_1);
void  FUN_10001ea0(void *this_ptr,int param_1);
void  FUN_10001ed0(void *this_ptr,int param_1);
void 
FUN_10001ee0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
void 
FUN_10001f10(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
int *  FUN_10001f40(int *param_1);
int  FUN_10001fc0(void *this_ptr,int param_1);
void  FUN_10001ff0(void *this_ptr,int param_1);
void  FUN_10002000(void *this_ptr,int *param_1);
void  FUN_10002020(void *this_ptr,int param_1);
int  FUN_10002030(int param_1);
int  FUN_10002090(int param_1);
int  FUN_100020e0(int param_1);
int  FUN_100021a0(int param_1);
void  FUN_10002250(void *this_ptr,int param_1);
void  FUN_10002260(int *param_1);
void 
FUN_10002590(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
unsigned int  FUN_10002600(int param_1);
unsigned int  FUN_10002650(int *param_1);
int *  FUN_100026f0(int *param_1);
void  FUN_10002710(void *this_ptr,int param_1);
void  FUN_10002720(int *param_1);
int  FUN_10002860(int param_1);
void  FUN_10002880(void *this_ptr,int param_1,int param_2);
BOOL  FUN_100028a0(void *this_ptr,int param_1,int param_2,int param_3);
BOOL  FUN_100029c0(void *this_ptr,int param_1,int param_2,int param_3);
void 
FUN_10002ae0(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void  FUN_10002b90(void *this_ptr,int param_1);
void  FUN_10002ba0(void *this_ptr,int param_1);
void  FUN_10002bb0(void *this_ptr,int param_1);
void  FUN_10002bc0(void *this_ptr,int param_1);
void  FUN_10002bd0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10002c00(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10002c30(void *this_ptr,int *param_1);
BOOL  FUN_10002c50(int param_1);
int  FUN_10002c70(int param_1);
int  FUN_10002d60(intptr_t param_1);
int  FUN_10002d70(int param_1);
void  FUN_10002da0(int param_1);
void  FUN_10002dd0(int *param_1);
void  FUN_10002e30(void *this_ptr,int *param_1,int *param_2);
void FUN_10003010(int param_1,int param_2);
void FUN_10003e10(void);
void FUN_10004680(void);
void FUN_10004698(void);
int FUN_100046f7(int param_1,int param_2);
int FUN_1000471c(int param_1);
int FUN_1000479a(int param_1);
void FUN_10004810(void);

void OnInit();
void ProcessScenary();


char __cdecl FUN_10001000(unsigned int param_1,unsigned int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return -0x40;
  }
  iVar3 = (param_1 ^ (intptr_t)param_1 >> 0x1f) - ((intptr_t)param_1 >> 0x1f);
  iVar1 = (param_2 ^ (intptr_t)param_2 >> 0x1f) - ((intptr_t)param_2 >> 0x1f);
  if (iVar1 < iVar3) {
    iVar1 = FUN_100046f7(iVar1 * 0x100,iVar3);
    cVar2 = ((long long *)&DAT_100148f8)[iVar1 * 2];
  }
  else {
    iVar1 = FUN_100046f7(iVar3 * 0x100,iVar1);
    cVar2 = '@' - ((long long *)&DAT_100148f8)[iVar1 * 2];
  }
  if ((intptr_t)param_1 < 0) {
    cVar2 = -0x80 - cVar2;
  }
  if ((intptr_t)param_2 < 0) {
    cVar2 = -cVar2;
  }
  return cVar2;
}






void __cdecl FUN_100010e0(int param_1)

{
  if (*(int *)(((unsigned char *)&DAT_10015094) + param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(((unsigned char *)&DAT_10015090) + param_1 * 8);
  }
  SaveSelectedUnits(param_1,((unsigned char *)&DAT_10015090) + param_1 * 8,0);
  ClearSelection(param_1);
  return;
}





int __cdecl FUN_10001120(int param_1)

{
  ClearSelection(param_1);
  SelectUnits(((unsigned char *)&DAT_10015090) + param_1 * 8,0);
  return 0;
}





void FUN_10001160(void)

{
  FUN_1000cc81();
  return;
}





void FUN_10001170(void)

{
  return;
}





int  FUN_100011a0(int param_1)

{
  RegisterDynGroup(param_1 + 4);
  RegisterDynGroup(param_1 + 0x34);
  RegisterDynGroup(param_1 + 0x3c);
  RegisterDynGroup(param_1 + 0x44);
  RegisterDynGroup(param_1 + 0x4c);
  *(int *)(param_1 + 0x54) = 1;
  *(int *)(param_1 + 0x58) = 4000;
  *(int *)(param_1 + 0x5c) = 0;
  RegisterDynGroup(param_1 + 0x60);
  return param_1;
}





void  FUN_100011f0(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x54) = param_1;
  return;
}





void  FUN_10001200(void *this_ptr,int param_1)

{
  *(int *)this_ptr = param_1;
  return;
}





void  FUN_10001210(void *this_ptr,int param_1)

{
  char local_8 [8];
  
  RegisterUnits(local_8,param_1);
  RemoveGroup(local_8,(intptr_t)this_ptr + 4);
  return;
}








void  FUN_100012a0(void *this_ptr,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x34);
  if ((((iVar2 != 0) || (iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x3c), iVar2 != 0)) ||
      (cVar1 = CheckProduction((intptr_t)this_ptr + 0xc), cVar1 == '\0')) &&
     (iVar2 = GetGlobalTime(), iVar2 <= *(int *)((intptr_t)this_ptr + 0x5c))) {
    return;
  }
  iVar2 = GetGlobalTime();
  *(int *)((intptr_t)this_ptr + 0x5c) = iVar2 + *(int *)((intptr_t)this_ptr + 0x58);
  iVar2 = GetUnitsByNation((intptr_t)this_ptr + 4,*(char *)this_ptr);
  iVar3 = (iVar2 + 1) * *(int *)((intptr_t)this_ptr + 0x54);
  iVar2 = iVar3 / 3;
  if (0 < iVar2) {
    do {
      ProduceUnitFast((intptr_t)this_ptr + 0xc,(intptr_t)this_ptr + 0x1c,(intptr_t)this_ptr + 0x34,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0 < iVar3) {
    do {
      ProduceUnitFast((intptr_t)this_ptr + 0xc,(intptr_t)this_ptr + 0x24,(intptr_t)this_ptr + 0x3c,0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar2 = GetDiff(0);
  *(int *)((intptr_t)this_ptr + 0x54) = *(int *)((intptr_t)this_ptr + 0x54) + iVar2 * param_1;
  return;
}





void  FUN_10001380(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  ClearSelection(*(char *)this_ptr);
  SelectUnits((intptr_t)this_ptr + 0x4c,0);
  SelectUnits((intptr_t)this_ptr + 0x44,1);
  uVar2 = 0;
  iVar1 = rand();
  SelSendAndKill(*(char *)this_ptr,param_1,iVar1,uVar2);
  return;
}





int  FUN_100013d0(intptr_t param_1)

{
  unsigned int uVar1;
  int uVar2;
  
  uVar1 = CheckProduction(param_1 + 0xc);
  if ((char)uVar1 != '\0') {
    RemoveGroup(param_1 + 0x34,param_1 + 0x44);
    RemoveGroup(param_1 + 0x3c,param_1 + 0x4c);
    return (int)1;
  }
  return uVar1 & -256;
}





void  FUN_10001430(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 1) = param_1;
  return;
}





void  FUN_10001440(void *this_ptr,int param_1,int param_2)

{
  RegisterUnits((intptr_t)this_ptr + 5,param_1);
  *(int *)((intptr_t)this_ptr + 0xd) = param_2;
  return;
}






void  FUN_10001480(void *this_ptr,int param_1)

{
  RegisterZone((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x166) * 8 + 0x22,param_1);
  *(int *)((intptr_t)this_ptr + 0x166) = *(int *)((intptr_t)this_ptr + 0x166) + 1;
  return;
}





void  FUN_100014b0(void *this_ptr,int param_1)

{
  RegisterUnits((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x166) * 8 + 0xc2,param_1);
  *(int *)((intptr_t)this_ptr + 0x166) = *(int *)((intptr_t)this_ptr + 0x166) + 1;
  return;
}







int  FUN_100014e0(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  BOOL bVar3;
  char cVar4;
  int iVar5;
  short extraout_var = 0;
  short extraout_var_00 = 0;
  long long lVar6;
  int uStack_6c;
  char auStack_58 [24];
  int iStack_40;
  char auStack_2c [24];
  int iStack_14;
  
  bVar3 = FUN_10001770((intptr_t)param_1);
  if (bVar3) {
    if (*(int *)(param_1 + 0x162) == *(int *)(param_1 + 0x166)) {
      return 0;
    }
    *param_1 = '\0';
    *(int *)(param_1 + 0x162) = *(int *)(param_1 + 0x162) + 1;
  }
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    if (*(int *)(param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc6) == 0x554e4954) {
      ClearSelection(param_1[1]);
      SelectUnits(param_1 + 5,0);
      SelAttackGroup(param_1[1],param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2);
      UnitsCenter(param_1 + 0x19,param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2,
                  (int)*(short *)(param_1 + 0xd));
      ClearSelection(param_1[1]);
      SelectUnits(param_1 + 0x11,0);
      SelSendAndKill(param_1[1],param_1 + 0x19,0,0);
      param_1[0x21] = '\0';
      return 0;
    }
    ClearSelection((intptr_t)param_1[1]);
    SelectUnits(param_1 + 5,0);
    SelectUnits(param_1 + 0x11,1);
    SelSendAndKill(param_1[1],param_1 + *(int *)(param_1 + 0x162) * 8 + 0x22,0,0);
    return 0;
  }
  if (*(int *)(param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc6) == 0x554e4954) {
    ClearSelection(param_1[1]);
    SelectUnits1(param_1[1],param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2,0);
    SelDie(param_1[1]);
    pcVar1 = param_1 + 5;
    SelectUnits(pcVar1,0);
    SelAttackGroup(param_1[1],param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2);
    if (param_1[0x21] == '\0') {
      pcVar2 = param_1 + 0x19;
      iVar5 = GetUnitsAmount1(pcVar2,param_1 + 0x11);
      if (0 < iVar5) {
        UnitsCenter(pcVar2,pcVar1,(int)*(short *)(param_1 + 0xd));
        ClearSelection(param_1[1]);
        SelectUnits(param_1 + 0x11,0);
        GetUnitInfo(param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2,0,auStack_58);
        GetUnitInfo(pcVar1,0,auStack_2c);
        FUN_10004810();
        lVar6 = 0;
        cVar4 = (char)lVar6;
        if ((double)(iStack_40 - iStack_14) < DAT_1000f210_ovl) {
          cVar4 = cVar4 + '\x7f';
        }
        uStack_6c = (int)cVar4;
        SelSendAndKill(param_1[1],pcVar2,uStack_6c,0);
        param_1[0x21] = '\x01';
      }
    }
  }
  return 0;
}





BOOL  FUN_10001770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc6 + *(int *)(param_1 + 0x162) * 8) == 0x554e4954) {
    iVar1 = GetTotalAmount0(param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2);
    return iVar1 < 1;
  }
  iVar1 = param_1 + 0x11;
  iVar2 = GetTotalAmount0(iVar1);
  iVar3 = GetTotalAmount0(iVar1);
  iVar4 = GetUnitsAmount1(param_1 + 0x22 + *(int *)(param_1 + 0x162) * 8,param_1 + 5);
  iVar1 = GetUnitsAmount1(param_1 + 0x22 + *(int *)(param_1 + 0x162) * 8,iVar1);
  return ((iVar3 + iVar2) * 8) / 10 < iVar4 + iVar1;
}





void  FUN_10001830(void *this_ptr,int param_1,int param_2)

{
  *(int *)this_ptr = param_1;
  *(int *)((intptr_t)this_ptr + 4) = param_2;
  return;
}





int  FUN_10001840(void *this_ptr,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((intptr_t)this_ptr + 0x59);
  if (iVar1 == 10) {
    return 0;
  }
  *(int *)((intptr_t)this_ptr + 0x59) = iVar1 + 1;
  RegisterUnits((intptr_t)this_ptr + iVar1 * 8 + 9,param_1);
  return 1;
}





char  FUN_10001870(char *param_1)

{
  int iVar1;
  int iVar2;
  char *puVar3;
  char auStack_8 [8];
  
  iVar2 = 0;
  puVar3 = param_1 + 9;
  do {
    if (*(int *)(puVar3 + 4) != 0x554e4954) break;
    iVar1 = GetTotalAmount0(puVar3);
    if (iVar1 != 0) {
      UnitsCenter(auStack_8,puVar3,*(short *)(param_1 + 4));
      iVar1 = GetUnitsAmount0(auStack_8,*param_1);
      if (iVar1 != 0) {
        param_1[8] = 1;
      }
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 8;
  } while (iVar2 < 10);
  return param_1[8];
}





int 
FUN_100018f0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((intptr_t)this_ptr + 0x140) == 0x14) {
    return 0;
  }
  iVar1 = *(int *)((intptr_t)this_ptr + 0x140) + 1;
  *(int *)((intptr_t)this_ptr + 0x140) = iVar1;
  RegisterZone((void *)((intptr_t)this_ptr + iVar1 * 8),param_1);
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x140) * 4 + 0xa0) = param_2;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x140) * 4 + 0xf0) = param_3;
  return 1;
}





void  FUN_10001950(intptr_t param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if (0 < iVar1) {
    puVar3 = (int *)(param_1 + 0xf0);
    iVar4 = param_1;
    do {
      SetLightSpot(iVar4,*puVar3,(int)*(char *)(puVar3 + -0x14))
      ;
      iVar1 = *(int *)(param_1 + 0x140);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar2 < iVar1);
  }
  return;
}





void  FUN_100019a0(intptr_t param_1)

{
  int iVar1;
  int iVar2;
  char *puVar3;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if (0 < iVar1) {
    puVar3 = (char *)(param_1 + 0xa0);
    do {
      ClearLightSpot((int)*puVar3);
      iVar1 = *(int *)(param_1 + 0x140);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar2 < iVar1);
  }
  return;
}






int  FUN_10001a10(void *this_ptr,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((intptr_t)this_ptr + 0xac);
  if (iVar1 == 0x14) {
    return 0;
  }
  *(int *)((intptr_t)this_ptr + 0xac) = iVar1 + 1;
  RegisterUnits((intptr_t)this_ptr + iVar1 * 8 + 0xc,param_1);
  return 1;
}





void  FUN_10001a50(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *puVar4;
  char local_8 [8];
  
  UnitsCenter(local_8,param_1 + 4,0x96);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xac)) {
    puVar4 = param_1 + 0xc;
    do {
      iVar1 = GetTotalAmount0(puVar4);
      iVar2 = GetUnitsAmount1(local_8,puVar4);
      if (iVar2 != iVar1) {
        ClearSelection(*param_1);
        SelectUnits(puVar4,0);
        SelSendTo(*param_1,local_8,0,0);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0xac));
  }
  return;
}





void  FUN_10001ae0(int param_1)

{
  *(int *)(param_1 + 800) = 0;
  return;
}





int  FUN_10001af0(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = *(int *)((intptr_t)this_ptr + 800);
  if (iVar1 == 100) {
    return 0;
  }
  *(int *)((intptr_t)this_ptr + 800) = iVar1 + 1;
  RegisterZone((void *)((intptr_t)this_ptr + iVar1 * 8),param_1);
  return (int)1;
}





int  FUN_10001b20(void *this_ptr,int param_1)

{
  return (int)(void *)((intptr_t)this_ptr + param_1 * 8);
}





void FUN_10001bc0(void)

{
  RegisterVar(&DAT_10015c28,0xf424);
  RegisterVar(&DAT_100157a0,0x294);
  RegisterVar(&DAT_100256f8,0x3cf0);
  RegisterVar(&DAT_100293e8,4);
  return;
}





int *  FUN_10001c00(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  *param_1 = 0;
  RegisterDynGroup(param_1 + 3);
  puVar2 = param_1 + 7;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}





int  FUN_10001c30(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char auStack_2c [20];
  int iStack_18;
  int iStack_14;
  
  iVar5 = 0;
  piVar6 = (int *)((intptr_t)this_ptr + 0x1c);
  piVar4 = piVar6;
  do {
    iVar1 = GetResource(0,iVar5);
    if (iVar1 < *piVar4) {
      ShowPage("#LittleMoney");
      return uVar3 & -256;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 6);
  iVar5 = 0;
  do {
    AddResource(0,iVar5,-*piVar6);
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 6);
  iVar5 = rand();
  CreateObject0((intptr_t)this_ptr + 0xc,&DAT_10015798,(intptr_t)this_ptr + 4,*(char *)this_ptr,param_1,iVar5);
  GetUnitInfo((intptr_t)this_ptr + 0xc,0,auStack_2c);
  iStack_18 = iStack_18 + 100;
  iStack_14 = iStack_14 + 100;
  SetUnitInfo(auStack_2c);
  return (int)1;
}





int  FUN_10001d00(void *this_ptr,int param_1)

{
  int uVar1;
  
  if (*(int *)this_ptr == param_1) {
    return 0;
  }
  FUN_100010e0(*(int *)this_ptr);
  SelectUnits((intptr_t)this_ptr + 0xc,0);
  SelChangeNation(*(char *)this_ptr,param_1);
  uVar1 = FUN_10001120(*(int *)this_ptr);
  *(int *)this_ptr = param_1;
  return uVar1;
}





void 
FUN_10001d50(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  *(int *)((intptr_t)this_ptr + 0x1c) = param_1;
  *(int *)((intptr_t)this_ptr + 0x20) = param_2;
  *(int *)((intptr_t)this_ptr + 0x24) = param_3;
  *(int *)((intptr_t)this_ptr + 0x28) = param_4;
  *(int *)((intptr_t)this_ptr + 0x2c) = param_5;
  *(int *)((intptr_t)this_ptr + 0x30) = param_6;
  return;
}






BOOL  FUN_10001da0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  return 0 < iVar1;
}





int  FUN_10001dc0(int *param_1)

{
  int *puVar1;
  unsigned int uVar2;
  short asStack_58 [22];
  short asStack_2c [22];
  
  puVar1 = ((unsigned char *)&DAT_10015090) + *param_1 * 8;
  if (*(int *)(((unsigned char *)&DAT_10015094) + *param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(puVar1);
  }
  SaveSelectedUnits((char)*param_1,puVar1,0);
  uVar2 = GetTotalAmount0(puVar1);
  if (uVar2 == 1) {
    GetUnitInfo(param_1 + 3,0,asStack_58);
    uVar2 = GetUnitInfo(puVar1,0,asStack_2c);
    if (asStack_58[0] == asStack_2c[0]) {
      return (int)1;
    }
  }
  return uVar2 & -256;
}





int *  FUN_10001e40(int *param_1)

{
  FUN_10001c00(param_1);
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





int  FUN_10001e50(void *this_ptr,char param_1)

{
  BOOL bVar1;
  int extraout_var = 0;
  unsigned int uVar2;
  int uVar3;
  
  bVar1 = FUN_10001da0((intptr_t)this_ptr);
  uVar2 = (int)bVar1;
  if (bVar1) {
    uVar2 = FUN_10001dc0(this_ptr);
    if ((char)uVar2 != '\0') {
      uVar3 = (int)(uVar2 >> 8);
      uVar2 = (intptr_t)param_1;
      if (param_1 != '\0') {
        uVar2 = (int)*(char *)((intptr_t)this_ptr + 0x34);
        if (*(char *)((intptr_t)this_ptr + 0x34) != '\0') {
          *(char *)((intptr_t)this_ptr + 0x34) = 0;
          return (int)1;
        }
        goto LAB_10001e84;
      }
    }
    *(char *)((intptr_t)this_ptr + 0x34) = 1;
  }
LAB_10001e84:
  return uVar2 & -256;
}





int  FUN_10001e90(void *this_ptr,int param_1)

{
  int uVar1;
  
  uVar1 = FUN_10001c30(this_ptr,param_1);
  return (int)1;
}





void  FUN_10001ea0(void *this_ptr,int param_1)

{
  RegisterUnits((intptr_t)this_ptr + 0xc,param_1);
  UnitsCenter((intptr_t)this_ptr + 0x34,(intptr_t)this_ptr + 0xc,400);
  return;
}





void  FUN_10001ed0(void *this_ptr,int param_1)

{
  FUN_10001af0((void *)((intptr_t)this_ptr + 0x7c),param_1);
  return;
}





void 
FUN_10001ee0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  *(int *)((intptr_t)this_ptr + 0x3c) = param_1;
  *(int *)((intptr_t)this_ptr + 0x40) = param_2;
  *(int *)((intptr_t)this_ptr + 0x44) = param_3;
  *(int *)((intptr_t)this_ptr + 0x48) = param_4;
  *(int *)((intptr_t)this_ptr + 0x4c) = param_5;
  *(int *)((intptr_t)this_ptr + 0x50) = param_6;
  return;
}





void 
FUN_10001f10(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  *(int *)((intptr_t)this_ptr + 0x54) = param_1;
  *(int *)((intptr_t)this_ptr + 0x58) = param_2;
  *(int *)((intptr_t)this_ptr + 0x5c) = param_3;
  *(int *)((intptr_t)this_ptr + 0x60) = param_4;
  *(int *)((intptr_t)this_ptr + 100) = param_5;
  *(int *)((intptr_t)this_ptr + 0x68) = param_6;
  return;
}





int *  FUN_10001f40(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  FUN_10001e40(param_1);
  FUN_10001c00((int *)((intptr_t)param_1 + 0x3d));
  FUN_10002860((intptr_t)param_1 + 0xa9);
  puVar2 = (int *)((intptr_t)param_1 + 0x3e5);
  iVar1 = 100;
  do {
    FUN_10001c00(puVar2);
    puVar2 = puVar2 + 0xd;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(int *)((intptr_t)param_1 + 0x185a) = 5;
  *(int *)((intptr_t)param_1 + 0x1835) = 0;
  *(char *)((intptr_t)param_1 + 0x184d) = 0;
  *(int *)((intptr_t)param_1 + 0x184e) = 0;
  *(int *)((intptr_t)param_1 + 0x1852) = 0;
  *(int *)((intptr_t)param_1 + 0x1856) = 0;
  *(int *)((intptr_t)param_1 + 0x185e) = 10;
  RegisterDynGroup((intptr_t)param_1 + 0x1862);
  return param_1;
}





int  FUN_10001fc0(void *this_ptr,int param_1)

{
  int uVar1;
  
  uVar1 = FUN_10001c30(this_ptr,param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *(char *)((intptr_t)this_ptr + 0x184d) = 1;
  *(int *)((intptr_t)this_ptr + 0x1845) = 0;
  *(int *)((intptr_t)this_ptr + 0x184e) = 0;
  return 1;
}





void  FUN_10001ff0(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x3e1) = param_1;
  return;
}





void  FUN_10002000(void *this_ptr,int *param_1)

{
  int iVar1;
  int *puVar2;
  
  puVar2 = (int *)((intptr_t)this_ptr + 0x3d);
  for (iVar1 = 0xe9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}





void  FUN_10002020(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x1841) = param_1;
  return;
}





int  FUN_10002030(int param_1)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x1835);
  if (0 < iVar2) {
    iVar4 = param_1 + 0x3f1;
    do {
      bVar1 = FUN_10001da0(iVar4 + -0xc);
      if (bVar1) {
        iVar2 = GetUnitsAmount1(param_1 + 0x1839,iVar4);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = *(int *)(param_1 + 0x1835);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x34;
    } while (iVar3 < iVar2);
  }
  return (int)1;
}





int  FUN_10002090(int param_1)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1835)) {
    iVar2 = param_1 + 0x3e5;
    do {
      bVar1 = FUN_10001da0(iVar2);
      if (bVar1) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar4 < *(int *)(param_1 + 0x1835));
    return iVar3;
  }
  return 0;
}





int  FUN_100020e0(int param_1)

{
  int iVar1;
  int iVar2;
  int uVar3;
  int *piVar4;
  int *piVar5;
  int local_1c;
  int local_18 [6];
  
  iVar1 = FUN_10002090(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  local_1c = 100000;
  iVar1 = 0;
  piVar5 = local_18;
  piVar4 = (int *)(param_1 + 0x91);
  do {
    if (*piVar4 != 0) {
      iVar2 = GetResource(0,iVar1);
      iVar2 = iVar2 / *piVar4;
      *piVar5 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 <= local_1c) {
        local_1c = iVar2;
      }
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar1 < 6);
  iVar1 = FUN_10002090(param_1);
  if (iVar1 < local_1c) {
    local_1c = FUN_10002090(param_1);
  }
  *(int *)(param_1 + 0x184e) = local_1c;
  iVar1 = 0;
  piVar4 = (int *)(param_1 + 0x91);
  do {
    AddResource(0,iVar1,-(*piVar4 * *(int *)(param_1 + 0x184e)));
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar1 < 6);
  return (int)1;
}





int  FUN_100021a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x184e);
  iVar1 = FUN_10002090(param_1);
  if (iVar1 <= iVar2) {
    iVar2 = FUN_10002090(param_1);
  }
  piVar3 = (int *)(param_1 + 0x79);
  ShowPageParam("#MerchantSucsess",iVar2 * *piVar3,*(int *)(param_1 + 0x7d) * iVar2,
                *(int *)(param_1 + 0x81) * iVar2,*(int *)(param_1 + 0x85) * iVar2,
                *(int *)(param_1 + 0x89) * iVar2,*(int *)(param_1 + 0x8d) * iVar2);
  iVar1 = 0;
  do {
    AddResource(0,iVar1,*piVar3 * iVar2);
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 6);
  iVar2 = *(int *)(param_1 + 0x1856) + 1;
  *(int *)(param_1 + 0x184e) = 0;
  *(int *)(param_1 + 0x1856) = iVar2;
  return (int)1;
}





void  FUN_10002250(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x1852) = param_1;
  return;
}





void  FUN_10002260(int *param_1)

{
  int *piVar1;
  void *this_ptr;
  BOOL bVar2;
  int uVar3;
  int iVar4;
  int *piVar5;
  char uVar6;
  char uVar7;
  int iStack_4;
  
  if ((*(int *)((intptr_t)param_1 + 0x1845) == 4) && (bVar2 = FUN_10001da0((intptr_t)param_1), bVar2)) {
    *(int *)((intptr_t)param_1 + 0x1845) = 0;
  }
  bVar2 = FUN_10001da0((intptr_t)param_1);
  if ((!bVar2) && (*(int *)((intptr_t)param_1 + 0x1845) != 4)) {
    if (*(char *)((intptr_t)param_1 + 0x184d) != '\0') {
      ShowPage("#MerchantDie");
      *(char *)((intptr_t)param_1 + 0x184d) = 0;
      RemoveGroup(param_1 + 3,(intptr_t)param_1 + 0x1862);
    }
    ClearLightSpot(*(char *)((intptr_t)param_1 + 0x1852));
    return;
  }
  piVar1 = param_1 + 3;
  UnitsCenter((intptr_t)param_1 + 0x1839,piVar1,100);
  SetLightSpot((intptr_t)param_1 + 0x1839,1,*(char *)((intptr_t)param_1 + 0x1852));
  switch(*(int *)((intptr_t)param_1 + 0x1845)) {
  case 0:
    iVar4 = GetUnitsAmount1(((unsigned char *)&DAT_100157d9) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42,piVar1);
    if (iVar4 == 0) {
      FUN_100010e0(*(int *)((intptr_t)param_1 + 0x1841));
      SelectUnits(piVar1,0);
      uVar3 = 0;
      iVar4 = rand();
      SelSendTo(*(char *)((intptr_t)param_1 + 0x1841),
                ((unsigned char *)&DAT_100157d9) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42,iVar4,uVar3);
      FUN_10001120(*(int *)((intptr_t)param_1 + 0x1841));
    }
    break;
  case 1:
    iVar4 = GetUnitsAmount1((intptr_t)param_1 + 0x71,piVar1);
    if ((iVar4 != 0) && (uVar3 = FUN_10002030((intptr_t)param_1), (char)uVar3 != '\0')) {
      *(int *)((intptr_t)param_1 + 0x1845) = 2;
      iVar4 = GetGlobalTime();
      *(int *)((intptr_t)param_1 + 0x1849) = iVar4 + 500;
    }
    break;
  case 2:
    iVar4 = GetGlobalTime();
    if (*(int *)((intptr_t)param_1 + 0x1849) < iVar4) {
      *(int *)((intptr_t)param_1 + 0x1845) = 3;
      this_ptr = (void *)((intptr_t)param_1 + 0xa9);
      FUN_10001830(this_ptr,*(int *)(((unsigned char *)&DAT_100157d9) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42),
                   *(int *)(((unsigned char *)&DAT_100157dd) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42));
      FUN_100029c0(this_ptr,(intptr_t)param_1,*(int *)((intptr_t)param_1 + 0x1841),1);
      iStack_4 = 0;
      if (0 < *(int *)((intptr_t)param_1 + 0x1835)) {
        piVar5 = (int *)((intptr_t)param_1 + 0x3e5);
        do {
          bVar2 = FUN_10001da0((int)piVar5);
          if (bVar2) {
            FUN_100029c0(this_ptr,(int)piVar5,*piVar5,1);
          }
          iStack_4 = iStack_4 + 1;
          piVar5 = piVar5 + 0xd;
        } while (iStack_4 < *(int *)((intptr_t)param_1 + 0x1835));
      }
    }
    break;
  case 3:
    iVar4 = GetUnitsAmount1(((unsigned char *)&DAT_100157d9) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42,piVar1);
    if (iVar4 != 0) {
      FUN_100021a0((intptr_t)param_1);
      *(int *)((intptr_t)param_1 + 0x1845) = 0;
    }
    bVar2 = FUN_10001da0((int)(((unsigned char *)&DAT_100157a0) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42));
    if (!bVar2) {
      *(int *)((intptr_t)param_1 + 0x1845) = 0;
    }
  }
  FUN_100010e0(*param_1);
  FUN_100010e0(*(int *)((intptr_t)param_1 + 0x1841));
  SelectUnits(piVar1,0);
  iVar4 = GetUnitsAmount1(((unsigned char *)&DAT_100157d9) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42,piVar1);
  if ((((iVar4 == 0) || (*(int *)((intptr_t)param_1 + 0x1845) != 0)) &&
      (*(int *)((intptr_t)param_1 + 0x1845) != 5)) && (*(int *)((intptr_t)param_1 + 0x1845) != 6)) {
    uVar7 = *(char *)((intptr_t)param_1 + 0x1841);
    uVar6 = (char)*param_1;
  }
  else {
    uVar7 = (char)*param_1;
    uVar6 = *(char *)((intptr_t)param_1 + 0x1841);
  }
  SelChangeNation(uVar6,uVar7);
  FUN_10001120(*param_1);
  FUN_10001120(*(int *)((intptr_t)param_1 + 0x1841));
  return;
}





void 
FUN_10002590(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  void *this_00;
  int local_4;
  
  local_4 = 100;
  this_00 = (void *)((intptr_t)this_ptr + 0x3e5);
  do {
    RegisterUnitType(this_00,"GRUZ(UN)");
    FUN_10001d00(this_00,*(int *)((intptr_t)this_ptr + 0x1841));
    FUN_10001d50(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
    this_00 = (void *)((int)this_00 + 0x34);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}





unsigned int  FUN_10002600(int param_1)

{
  int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = *(unsigned int *)(param_1 + 0x1835);
  if (uVar3 != 100) {
    uVar1 = FUN_10001e90((void *)(param_1 + 0x3e5 + uVar3 * 0x34),param_1 + 0x1839);
    if ((char)uVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0x1835) + 1;
      *(int *)(param_1 + 0x1835) = iVar2;
      return (int)1;
    }
    ShowPage("#LittleMoney");
  }
  return uVar3 & -256;
}





unsigned int  FUN_10002650(int *param_1)

{
  void *this_ptr;
  BOOL bVar1;
  int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = *(unsigned int *)((intptr_t)param_1 + 0x1845);
  if (uVar3 == 0) {
    uVar2 = FUN_100020e0((intptr_t)param_1);
    if ((char)uVar2 != '\0') {
      this_ptr = (void *)((intptr_t)param_1 + 0xa9);
      *(int *)((intptr_t)param_1 + 0x1845) = 1;
      FUN_10002880(this_ptr,*(int *)((intptr_t)param_1 + 0x71),*(int *)((intptr_t)param_1 + 0x75));
      FUN_100028a0(this_ptr,(intptr_t)param_1,*param_1,1);
      iVar4 = *(int *)((intptr_t)param_1 + 0x1835);
      iVar5 = 0;
      if (0 < iVar4) {
        piVar6 = (int *)((intptr_t)param_1 + 0x3e5);
        do {
          bVar1 = FUN_10001da0((int)piVar6);
          if (bVar1) {
            FUN_100028a0(this_ptr,(int)piVar6,*piVar6,1);
          }
          iVar4 = *(int *)((intptr_t)param_1 + 0x1835);
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 0xd;
        } while (iVar5 < iVar4);
      }
      return (int)1;
    }
    ShowPage("#LittleMoney");
  }
  return uVar3 & -256;
}





int *  FUN_100026f0(int *param_1)

{
  FUN_10001e40(param_1);
  *(char *)((intptr_t)param_1 + 0x41) = 0;
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





void  FUN_10002710(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x35) = param_1;
  return;
}





void  FUN_10002720(int *param_1)

{
  int *piVar1;
  int iVar2;
  char uVar3;
  
  piVar1 = param_1 + 1;
  iVar2 = GetTotalAmount1(piVar1,(char)*param_1);
  if (iVar2 == 0) {
    uVar3 = (char)*param_1;
  }
  else {
    uVar3 = (char)*param_1;
  }
  EnableUnit(uVar3,piVar1,iVar2 == 0);
  iVar2 = GetReadyAmount(piVar1,(char)*param_1);
  if (iVar2 == 0) {
    if (*(char *)((intptr_t)param_1 + 0x41) != '\0') {
      *(char *)((intptr_t)param_1 + 0x41) = 0;
      *(int *)(((unsigned char *)&DAT_1001746d) + *(int *)((intptr_t)param_1 + 0x35) * 0x186a) = 5;
      ShowPage("#MarketLost");
      return;
    }
  }
  else {
    iVar2 = GetTotalAmount1(piVar1,(char)*param_1);
    if (iVar2 < 2) {
      if (*(char *)((intptr_t)param_1 + 0x41) == '\0') {
        *(char *)((intptr_t)param_1 + 0x41) = 1;
        *(int *)(((unsigned char *)&DAT_1001746d) + *(int *)((intptr_t)param_1 + 0x35) * 0x186a) = 0;
        ShowPage("#MarketBuilt");
        FUN_100010e0(*param_1);
        SelectUnitsType(piVar1,(char)*param_1,0);
        SaveSelectedUnits((char)*param_1,param_1 + 3,0);
        UnitsCenter((intptr_t)param_1 + 0x39,param_1 + 3,400);
        FUN_10001120(*param_1);
      }
      FUN_10001da0((int)(((unsigned char *)&DAT_10015c28) + *(int *)((intptr_t)param_1 + 0x35) * 0x186a));
    }
  }
  return;
}





int  FUN_10002860(int param_1)

{
  FUN_10001ae0(param_1 + 0x10);
  *(int *)(param_1 + 0x334) = 0;
  return param_1;
}





void  FUN_10002880(void *this_ptr,int param_1,int param_2)

{
  *(int *)((intptr_t)this_ptr + 8) = param_1;
  *(int *)((intptr_t)this_ptr + 0xc) = param_2;
  return;
}





BOOL  FUN_100028a0(void *this_ptr,int param_1,int param_2,int param_3)

{
  void *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_var = 0;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  int uVar7;
  int *piVar8;
  int iStack_8;
  int iStack_4;
  
  iVar5 = param_2;
  if ((char)param_3 != '\0') {
    FUN_100010e0(param_2);
    SelectUnits(param_1 + 0xc,0);
    this_00 = (void *)((intptr_t)this_ptr + 0x10);
    uVar7 = 0;
    iVar2 = rand();
    iVar3 = FUN_10001b20(this_00,0);
    SelSendTo(iVar5,iVar3,iVar2,uVar7);
    iVar2 = 1;
    if (1 < *(int *)((intptr_t)this_ptr + 0x330)) {
      do {
        piVar8 = &param_2;
        piVar6 = &iStack_4;
        iVar3 = FUN_10001b20(this_00,iVar2 + -1);
        GetZoneCoor(iVar3,piVar6,piVar8);
        piVar8 = &param_3;
        piVar6 = &iStack_8;
        iVar3 = FUN_10001b20(this_00,iVar2);
        GetZoneCoor(iVar3,piVar6,piVar8);
        cVar1 = FUN_10001000(iStack_8 - iStack_4,param_3 - param_2);
        uVar4 = (int)cVar1 & 0xffff;
        uVar7 = 2;
        iVar3 = FUN_10001b20(this_00,iVar2);
        SelSendTo(iVar5,iVar3,uVar4,uVar7);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((intptr_t)this_ptr + 0x330));
    }
    uVar7 = 2;
    iVar2 = rand();
    SelSendTo(iVar5,(intptr_t)this_ptr + 8,iVar2,uVar7);
    FUN_10001120(iVar5);
  }
  iVar5 = GetUnitsAmount1((intptr_t)this_ptr + 8,param_1 + 0xc);
  return iVar5 != 0;
}





BOOL  FUN_100029c0(void *this_ptr,int param_1,int param_2,int param_3)

{
  void *this_00;
  char cVar1;
  int iVar2;
  int extraout_var = 0;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int uVar7;
  int *piVar8;
  int uVar9;
  int *piVar10;
  int iStack_c;
  int iStack_8;
  void *local_4;
  
  iVar4 = param_2;
  local_4 = this_ptr;
  if ((char)param_3 != '\0') {
    FUN_100010e0(param_2);
    SelectUnits(param_1 + 0xc,0);
    iVar5 = *(int *)((intptr_t)this_ptr + 0x330) + -1;
    this_00 = (void *)((intptr_t)this_ptr + 0x10);
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = *(int *)((intptr_t)this_ptr + 0x330) - 2;
    iVar2 = FUN_10001b20(this_00,iVar5);
    SelSendTo(iVar4,iVar2,uVar7,uVar9);
    if (-1 < (int)uVar6) {
      do {
        piVar10 = &param_2;
        piVar8 = &iStack_8;
        iVar2 = FUN_10001b20(this_00,iVar5);
        GetZoneCoor(iVar2,piVar8,piVar10);
        piVar10 = &param_3;
        piVar8 = &iStack_c;
        iVar2 = FUN_10001b20(this_00,uVar6);
        GetZoneCoor(iVar2,piVar8,piVar10);
        cVar1 = FUN_10001000(iStack_c - iStack_8,param_3 - param_2);
        uVar3 = (int)cVar1 & 0xffff;
        uVar7 = 2;
        iVar2 = FUN_10001b20(this_00,uVar6);
        SelSendTo(iVar4,iVar2,uVar3,uVar7);
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1;
        this_ptr = local_4;
      } while (uVar6 < -2147483648);
    }
    uVar7 = 2;
    iVar2 = rand();
    SelSendTo(iVar4,this_ptr,iVar2,uVar7);
    FUN_10001120(iVar4);
  }
  iVar4 = GetUnitsAmount1(this_ptr,param_1 + 0xc);
  return iVar4 != 0;
}





void 
FUN_10002ae0(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  RegisterVar(this_ptr,0x74);
  *(int *)this_ptr = param_1;
  RegisterUnits((intptr_t)this_ptr + 4,param_2);
  if (param_3 != 0) {
    RegisterZone((intptr_t)this_ptr + 0xc,param_3);
    SetDestPoint((intptr_t)this_ptr + 4,(intptr_t)this_ptr + 0xc);
  }
  RegisterDynGroup((intptr_t)this_ptr + 0x14);
  RegisterDynGroup((intptr_t)this_ptr + 0x1c);
  RegisterDynGroup((intptr_t)this_ptr + 0x6c);
  *(int *)((intptr_t)this_ptr + 0x30) = 0;
  *(int *)((intptr_t)this_ptr + 0x34) = 0;
  *(int *)((intptr_t)this_ptr + 0x38) = 0x3c;
  *(int *)((intptr_t)this_ptr + 0x44) = 0;
  *(int *)((intptr_t)this_ptr + 0x48) = 0;
  *(int *)((intptr_t)this_ptr + 0x4c) = 0x78;
  *(int *)((intptr_t)this_ptr + 0x54) = 0;
  *(int *)((intptr_t)this_ptr + 0x50) = 1;
  *(int *)((intptr_t)this_ptr + 0x58) = 10;
  *(int *)((intptr_t)this_ptr + 0x5c) = 1;
  *(int *)((intptr_t)this_ptr + 0x60) = 0;
  *(int *)((intptr_t)this_ptr + 0x24) = param_4;
  return;
}





void  FUN_10002b90(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x50) = param_1;
  return;
}





void  FUN_10002ba0(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x58) = param_1;
  return;
}





void  FUN_10002bb0(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x5c) = param_1;
  return;
}





void  FUN_10002bc0(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x60) = param_1;
  return;
}





void  FUN_10002bd0(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((intptr_t)this_ptr + 0x28,param_1);
  *(int *)((intptr_t)this_ptr + 0x30) = param_2;
  *(int *)((intptr_t)this_ptr + 0x34) = param_3;
  return;
}





void  FUN_10002c00(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((intptr_t)this_ptr + 0x3c,param_1);
  *(int *)((intptr_t)this_ptr + 0x44) = param_2;
  *(int *)((intptr_t)this_ptr + 0x48) = param_3;
  return;
}





void  FUN_10002c30(void *this_ptr,int *param_1)

{
  *(int *)((intptr_t)this_ptr + 100) = *param_1;
  *(int *)((intptr_t)this_ptr + 0x68) = param_1[1];
  return;
}





BOOL  FUN_10002c50(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 4);
  return iVar1 != 0;
}





int  FUN_10002c70(int param_1)

{
  BOOL bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  unsigned int uVar6;
  int iVar7;
  
  iVar3 = GetTotalAmount0(param_1 + 0x1c);
  iVar7 = param_1 + 0x14;
  iVar4 = GetTotalAmount0(iVar7);
  if (*(int *)(param_1 + 0x24) < iVar4 + iVar3) {
    return -1;
  }
  bVar1 = FUN_10002c50(param_1);
  if (bVar1) {
    iVar3 = param_1 + 4;
    cVar2 = CheckProduction(iVar3);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      }
      else {
        *(int *)(param_1 + 0x54) = 0;
        iVar7 = param_1 + 0x1c;
      }
      iVar4 = GetGlobalTime();
      if (*(int *)(param_1 + 0x60) < iVar4) {
        uVar5 = GetGlobalTime();
        *(int *)(param_1 + 0x60) = uVar5;
        uVar6 = rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x34)) {
          ProduceUnitFast(iVar3,param_1 + 0x28,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x30);
        }
        uVar6 = rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x48)) {
          ProduceUnitFast(iVar3,param_1 + 0x3c,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x44);
        }
      }
    }
  }
  return 0;
}





int  FUN_10002d60(intptr_t param_1)

{
  GetTotalAmount0(param_1 + 0x14);
  return 0;
}





int  FUN_10002d70(int param_1)

{
  BOOL bVar1;
  int iVar2;
  
  bVar1 = FUN_10002c50(param_1);
  if (bVar1) {
    iVar2 = GetTotalAmount0(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x58) <= iVar2) {
      return 1;
    }
  }
  return 0;
}





void  FUN_10002da0(int param_1)

{
  GetNUnits(param_1 + 0x1c);
  RemoveGroup(param_1 + 0x1c,param_1 + 0x6c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
  return;
}





void  FUN_10002dd0(int *param_1)

{
  BOOL bVar1;
  int uVar2;
  int iVar3;
  
  bVar1 = FUN_10002c50((intptr_t)param_1);
  if (bVar1) {
    FUN_10002c70((intptr_t)param_1);
    uVar2 = FUN_10002d70((intptr_t)param_1);
    if ((char)uVar2 != '\0') {
      FUN_100010e0(*param_1);
      SelectUnits(param_1 + 7,0);
      uVar2 = 0;
      iVar3 = rand();
      SelSendAndKill((char)*param_1,param_1 + 0x19,iVar3,uVar2);
      FUN_10001120(*param_1);
      FUN_10002da0((intptr_t)param_1);
    }
  }
  return;
}





void  FUN_10002e30(void *this_ptr,int *param_1,int *param_2)

{
  int uVar1;
  unsigned int uVar2;
  
  uVar1 = FUN_10002d70((intptr_t)this_ptr);
  if ((char)uVar1 != '\0') {
    uVar2 = rand();
    if ((uVar2 & 0xff) < 0xa0) {
      FUN_10002c30(this_ptr,param_1);
      FUN_10002dd0(this_ptr);
      return;
    }
    FUN_10002c30(this_ptr,param_2);
  }
  FUN_10002dd0(this_ptr);
  return;
}





void __cdecl FUN_10003010(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    SetResource(param_1,iVar1,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}





void FUN_10003e10(void)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  do {
    while( 1 ) {
      RefreshScreen();
      iVar2 = AskMultilineQuestion
                        (9,"#MerchantMainMenu",0,
                         "V02_MerchMain_0|V02_MerchMain_1|V02_MerchMain_2");
      RefreshScreen();
      if (iVar2 == 0) break;
      if (iVar2 == 1) {
        iVar2 = FUN_10002090((int)DAT_10015c08);
        if (iVar2 == 0) {
          ShowPage("#KaravanEmpty");
        }
        else {
          uVar3 = FUN_10002650(DAT_10015c08);
          if ((char)uVar3 != '\0') {
            return;
          }
          ShowPage("#LittleMoney");
        }
      }
      else if (1 < iVar2) {
        return;
      }
    }
LAB_10003e89:
    do {
      iVar2 = FUN_10002090((int)DAT_10015c08);
      RefreshScreen();
      iVar4 = AskMultilineQuestion
                        (9,"#MerchantInfoMenu",0,
                         "V02_MerchInfo_0|V02_MerchInfo_1|V02_MerchInfo_2");
      RefreshScreen();
      if (iVar4 == 0) {
        ShowPageParam("#Buiznes",iVar2,*(int *)((int)DAT_10015c08 + 0x401),
                      *(int *)((int)DAT_10015c08 + 0x405),
                      *(int *)((int)DAT_10015c08 + 0x409),
                      *(int *)((int)DAT_10015c08 + 0x40d),
                      *(int *)((int)DAT_10015c08 + 0x411),
                      *(int *)((int)DAT_10015c08 + 0x415),
                      *(int *)((int)DAT_10015c08 + 0x91) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x95) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x99) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x9d) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0xa1) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0xa5) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x79) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x7d) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x81) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x85) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x89) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x8d) * iVar2);
      }
      else if (iVar4 == 1) {
        if (iVar2 < 10) {
          cVar1 = AskQuestion("#MakeOboz");
          if (cVar1 != '\0') {
            FUN_10002600((int)DAT_10015c08);
          }
        }
        else {
          ShowPage("#TooManyOboz");
        }
        goto LAB_10003e89;
      }
    } while (iVar4 < 2);
  } while( 1 );
}







void FUN_10004680(void)

{
  void *extraout_ECX;
  
  FUN_10004698();
  DAT_100293f4_ovl = FUN_10004bb0();
  FUN_10004b60(extraout_ECX);
  return;
}





void FUN_10004698(void)

{
  return;
}





int __cdecl FUN_100046f7(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}





int __cdecl FUN_1000471c(int param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_100050f1();
  pbVar1 = (byte *)FUN_1000544c(DAT_1002ab50);
  if (pbVar1 < DAT_1002ab4c + (4 - (int)DAT_1002ab50)) {
    SVar2 = FUN_1000544c(DAT_1002ab50);
    pbVar1 = FUN_1000511d(DAT_1002ab50,(unsigned int *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10004791;
    }
    DAT_1002ab4c = pbVar1 + ((int)DAT_1002ab4c - (int)DAT_1002ab50 >> 2) * 4;
    DAT_1002ab50 = pbVar1;
  }
  *(int *)DAT_1002ab4c = param_1;
  DAT_1002ab4c = DAT_1002ab4c + 4;
LAB_10004791:
  FUN_100050fa();
  return param_1;
}





int __cdecl FUN_1000479a(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000471c(param_1);
  return (iVar1 != 0) - 1;
}





void FUN_10004810(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10005ab8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000482d((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void OnInit(void)

{
  int iVar1;
  DWORD DVar2;
  int uVar3;
  
                    
  RegisterUnits(&DAT_10025338,"del_diff_more_2");
  RegisterUnits(&DAT_10025340,"del_diff_more_1");
  RegisterUnits(&DAT_10015788,"del_diff_less_2");
  RegisterUnits(&DAT_10015790,"del_diff_less_3");
  iVar1 = GetDiff(0);
  ClearSelection(5);
  if (iVar1 < 2) {
    SelectUnits(&DAT_10015788,1);
  }
  SelErase(5);
  ClearSelection(0);
  if (iVar1 < 3) {
    SelectUnits(&DAT_10015790,1);
  }
  SelErase(0);
  DVar2 = time(NULL);
  srand(DVar2);
  RegisterDynGroup(&DAT_100156c0);
  RegisterZone(&DAT_10015780,"Z_way0");
  RegisterZone(&DAT_10015778,"Z_way1");
  RegisterZone(&DAT_10015bf8,"Z_gold");
  RegisterZone(&DAT_10025068,"Z_iron");
  RegisterZone(&DAT_100150d8,"Z_coal");
  RegisterZone(&DAT_10025058,"z_stone0");
  RegisterZone(&DAT_10025050,"z_stone1");
  RegisterUnitType(&DAT_10015be8,"shahta(SV)");
  RegisterUnitType(&DAT_10025330,"shahta_FE(SV)");
  RegisterUnitType(&DAT_10015be0,"shahta_UG(SV)");
  RegisterUnitType(&DAT_10025348,"Rinok(SV)");
  RegisterUnits(&DAT_10015c00,"commander");
  RegisterVar(&DAT_10025070,0x68);
  FUN_10001200(&DAT_10025070,5);
  RegisterUnits(&DAT_10025070,"5_band0_barrack");
  FUN_10001210(&DAT_10025070,"5_band0_house0");
  FUN_10001210(&DAT_10025070,"5_band0_house1");
  FUN_10001210(&DAT_10025070,"5_band0_house2");
  RegisterUnitType(&DAT_10025070,"Strelec_Algir_DIP(fr)");
  RegisterUnitType(&DAT_10025070,"Rundashir_Avstria_DIP(fr)");
  iVar1 = GetDiff(0);
  FUN_100011f0(&DAT_10025070,iVar1 * 2 + 1);
  RegisterVar(&DAT_100250d8,0x74);
  FUN_10002ae0(&DAT_100250d8,5,"5_band1_barrack",0,100);
  uVar3 = 200;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_100250d8,"Rundashir_Avstria_DIP(fr)",(4 - iVar1) * 0x4b,uVar3);
  uVar3 = 0xaa;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_100250d8,"Strelec_Algir_DIP(fr)",(4 - iVar1) * 0x1e,uVar3);
  iVar1 = GetDiff(0);
  FUN_10002ba0(&DAT_100250d8,iVar1 / 2 + 4);
  iVar1 = GetDiff(0);
  FUN_10002bb0(&DAT_100250d8,iVar1 + 1);
  FUN_10002bc0(&DAT_100250d8,2000);
  RegisterVar(&DAT_10025150,0x74);
  FUN_10002ae0(&DAT_10025150,5,"band2_barrack",0,100);
  uVar3 = 0xe6;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_10025150,"Rundashir_Avstria_DIP(sp)",(4 - iVar1) * 0x32,uVar3);
  uVar3 = 0x78;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_10025150,"Strelec_Algir_DIP(sp)",(4 - iVar1) * 0x19,uVar3);
  iVar1 = GetDiff(0);
  FUN_10002ba0(&DAT_10025150,iVar1 + 6);
  uVar3 = GetDiff(0);
  FUN_10002bb0(&DAT_10025150,uVar3);
  FUN_10002bc0(&DAT_10025150,10000);
  RegisterVar(&DAT_100251c8,0x74);
  FUN_10002ae0(&DAT_100251c8,5,"band3_barrack",0,100);
  uVar3 = 0xe6;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_100251c8,"Rundashir_Avstria_DIP(PL)",(4 - iVar1) * 100,uVar3);
  uVar3 = 0x78;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_100251c8,"Strelec_Algir_DIP(PL)",(4 - iVar1) * 0x28,uVar3);
  FUN_10002ba0(&DAT_100251c8,0xe);
  uVar3 = GetDiff(0);
  FUN_10002bb0(&DAT_100251c8,uVar3);
  FUN_10002bc0(&DAT_100251c8,2000);
  RegisterVar(&DAT_10025240,0x74);
  FUN_10002ae0(&DAT_10025240,5,"band4_barrack",0,100);
  uVar3 = 0xe6;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_10025240,"Rundashir_Avstria_DIP(BA)",(4 - iVar1) * 0x32,uVar3);
  uVar3 = 0x78;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_10025240,"Strelec_Algir_DIP(BA)",(4 - iVar1) * 0x19,uVar3);
  iVar1 = GetDiff(0);
  FUN_10002ba0(&DAT_10025240,iVar1 * 2 + 5);
  iVar1 = GetDiff(0);
  FUN_10002bb0(&DAT_10025240,iVar1 / 2);
  FUN_10002bc0(&DAT_10025240,2000);
  RegisterVar(&DAT_100252b8,0x74);
  FUN_10002ae0(&DAT_100252b8,5,"band5_barrack",0,100);
  uVar3 = 0xe6;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_100252b8,"Rundashir_Avstria_DIP(fr)",(4 - iVar1) * 0x46,uVar3);
  uVar3 = 0x78;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_100252b8,"Strelec_Algir_DIP(fr)",(4 - iVar1) * 0x23,uVar3);
  FUN_10002ba0(&DAT_100252b8,7);
  iVar1 = GetDiff(0);
  FUN_10002bb0(&DAT_100252b8,iVar1 / 2);
  FUN_10002bc0(&DAT_100252b8,2000);
  RegisterVar(&DAT_100150f0,0x16a);
  FUN_10001430(&DAT_100150f0,5);
  FUN_10001440(&DAT_100150f0,"5_assault0_destr",600);
  RegisterUnits(&DAT_100150f0,"5_assault0_guard");
  FUN_100014b0(&DAT_100150f0,"3_tower0");
  FUN_100014b0(&DAT_100150f0,DAT_1001137c);
  FUN_100014b0(&DAT_100150f0,"forge");
  FUN_100014b0(&DAT_100150f0,"barrack");
  FUN_100014b0(&DAT_100150f0,"stable");
  FUN_100014b0(&DAT_100150f0,"sklad");
  FUN_100014b0(&DAT_100150f0,"market");
  FUN_100014b0(&DAT_100150f0,"academy");
  FUN_100014b0(&DAT_100150f0,"center");
  FUN_100014b0(&DAT_100150f0,"church");
  FUN_100014b0(&DAT_100150f0,"diplomatic");
  FUN_100014b0(&DAT_100150f0,DAT_10011328);
  FUN_10001480(&DAT_100150f0,"Z_gold");
  RegisterVar(&DAT_10015260,0x16a);
  FUN_10001430(&DAT_10015260,5);
  FUN_10001440(&DAT_10015260,"5_assault1_destr",600);
  RegisterUnits(&DAT_10015260,"5_assault1_guard");
  FUN_100014b0(&DAT_10015260,"3_coal0");
  FUN_100014b0(&DAT_10015260,"3_coal1");
  FUN_100014b0(&DAT_10015260,"3_coal2");
  FUN_100014b0(&DAT_10015260,"stable");
  FUN_100014b0(&DAT_10015260,DAT_1001137c);
  FUN_100014b0(&DAT_10015260,"forge");
  FUN_100014b0(&DAT_10015260,"sklad");
  FUN_100014b0(&DAT_10015260,"market");
  FUN_100014b0(&DAT_10015260,DAT_10011328);
  FUN_100014b0(&DAT_10015260,"barrack");
  FUN_100014b0(&DAT_10015260,"academy");
  FUN_100014b0(&DAT_10015260,"center");
  FUN_100014b0(&DAT_10015260,"church");
  FUN_100014b0(&DAT_10015260,"diplomatic");
  FUN_10001480(&DAT_10015260,"Z_coal");
  RegisterVar(&DAT_100153d0,0x16a);
  FUN_10001430(&DAT_100153d0,5);
  FUN_10001440(&DAT_100153d0,"5_assault2_destr",600);
  RegisterUnits(&DAT_100153d0,"5_assault2_guard");
  FUN_100014b0(&DAT_100153d0,"3_gold0");
  FUN_100014b0(&DAT_100153d0,"barrack");
  FUN_100014b0(&DAT_100153d0,DAT_1001137c);
  FUN_100014b0(&DAT_100153d0,"forge");
  FUN_100014b0(&DAT_100153d0,"stable");
  FUN_100014b0(&DAT_100153d0,"sklad");
  FUN_100014b0(&DAT_100153d0,"market");
  FUN_100014b0(&DAT_100153d0,"academy");
  FUN_100014b0(&DAT_100153d0,"center");
  FUN_100014b0(&DAT_100153d0,"church");
  FUN_100014b0(&DAT_100153d0,"diplomatic");
  FUN_100014b0(&DAT_100153d0,DAT_10011328);
  FUN_10001480(&DAT_100153d0,"Z_way0");
  RegisterVar(&DAT_10015540,0x16a);
  FUN_10001430(&DAT_10015540,5);
  FUN_10001440(&DAT_10015540,"5_assault3_destr",600);
  RegisterUnits(&DAT_10015540,"5_assault3_guard");
  FUN_100014b0(&DAT_10015540,"3_iron0");
  FUN_100014b0(&DAT_10015540,"3_iron1");
  FUN_100014b0(&DAT_10015540,"3_iron2");
  FUN_100014b0(&DAT_10015540,"diplomatic");
  FUN_100014b0(&DAT_10015540,"center");
  FUN_100014b0(&DAT_10015540,"church");
  FUN_100014b0(&DAT_10015540,"market");
  FUN_100014b0(&DAT_10015540,"academy");
  FUN_100014b0(&DAT_10015540,"barrack");
  FUN_100014b0(&DAT_10015540,"forge");
  FUN_100014b0(&DAT_10015540,DAT_1001137c);
  FUN_100014b0(&DAT_10015540,"stable");
  FUN_100014b0(&DAT_10015540,"sklad");
  FUN_100014b0(&DAT_10015540,DAT_10011328);
  FUN_10001480(&DAT_10015540,"Z_iron");
  RegisterVar(&DAT_10014f68,0x5d);
  FUN_10001830(&DAT_10014f68,0,0x6a4);
  FUN_10001840(&DAT_10014f68,"allert0_0");
  FUN_10001840(&DAT_10014f68,"alert0_2");
  FUN_10001840(&DAT_10014f68,"alert0_3");
  FUN_10001840(&DAT_10014f68,"alert0_4");
  FUN_10001840(&DAT_10014f68,"alert0_5");
  FUN_10001840(&DAT_10014f68,"alert0_6");
  FUN_10001840(&DAT_10014f68,"alert0_7");
  RegisterVar(&DAT_10015a38,0x144);
  FUN_100018f0(&DAT_10015a38,"light0_0",0,1);
  FUN_100018f0(&DAT_10015a38,"light0_1",1,1);
  FUN_100018f0(&DAT_10015a38,"light0_3",3,1);
  FUN_100018f0(&DAT_10015a38,"light0_4",4,1);
  FUN_100018f0(&DAT_10015a38,"light0_5",5,1);
  FUN_100018f0(&DAT_10015a38,"light0_6",6,1);
  FUN_100018f0(&DAT_10015a38,"light0_7",7,3);
  RegisterVar(&DAT_100156c8,0xb0);
  FUN_10001200(&DAT_100156c8,3);
  RegisterUnits(&DAT_100156c8,"commander");
  FUN_10001a10(&DAT_100156c8,"messager");
  RegisterVar(&DAT_10014f08,0x5d);
  FUN_10001830(&DAT_10014f08,0,0x708);
  FUN_10001840(&DAT_10014f08,"messager");
  RegisterVar(&DAT_10014fc8,0x5d);
  FUN_10001830(&DAT_10014fc8,0,300);
  FUN_10001840(&DAT_10014fc8,"messager");
  RegisterVar(&DAT_10015b80,0x5d);
  FUN_10001830(&DAT_10015b80,0,1000);
  FUN_10001840(&DAT_10015b80,"tran_mill");
  FUN_10001840(&DAT_10015b80,"center");
  FUN_10001840(&DAT_10015b80,"church");
  FUN_10001840(&DAT_10015b80,"market");
  FUN_10001840(&DAT_10015b80,"academy");
  FUN_10001bc0();
  RegisterVar(&DAT_10025350,0x3a4);
  FUN_10001ea0(&DAT_10025350,"4_Market");
  FUN_10001ee0(&DAT_10025350,0,800,0,0,0,0);
  FUN_10001f10(&DAT_10025350,0,0,0,800,0x96,0x96);
  FUN_10001ed0(&DAT_10025350,"trip0_1");
  FUN_10001ed0(&DAT_10025350,"trip0_2");
  FUN_10001ed0(&DAT_10025350,"trip0_3");
  FUN_10001ed0(&DAT_10025350,"trip0_4");
  FUN_10001ed0(&DAT_10025350,"trip0_5");
  FUN_10001ed0(&DAT_10025350,"trip0_6");
  FUN_10001ed0(&DAT_10025350,"trip0_7");
  FUN_10001ed0(&DAT_10025350,"trip0_8");
  FUN_10001ed0(&DAT_10025350,"trip0_9");
  FUN_10001ed0(&DAT_10025350,"trip0_10");
  FUN_10001ed0(&DAT_10025350,"trip0_11");
  FUN_10001ed0(&DAT_10025350,"trip0_12");
  DAT_10025060 = &DAT_100157a0;
  RegisterUnitType(&DAT_100157a0,"Rinok(SV)");
  FUN_10002710(DAT_10025060,0);
  DAT_10015c08 = &DAT_10015c28;
  RegisterUnitType(&DAT_10015c28,"KUPEC(UN)");
  FUN_10002020(DAT_10015c08,3);
  FUN_10001ff0(DAT_10015c08,0);
  FUN_10002590(DAT_10015c08,0,10,0,200,100,0);
  FUN_10002000(DAT_10015c08,(int *)&DAT_10025350);
  FUN_10001d50(DAT_10015c08,0,500,0,200,500,0);
  FUN_10002250(DAT_10015c08,10);
  RegisterUnits(&DAT_100156b8,"transfer");
  RegisterUnits(&DAT_100150d0,"peasant");
  RegisterUnits(&DAT_100156b0,"tran_pike");
  RegisterUnits(&DAT_10015bf0,DAT_10011328);
  ChangeFriends(2,0x24);
  ChangeFriends(3,5);
  ChangeFriends(4,5);
  SetPlayerName(2,"HOLLAND");
  SetPlayerName(3,"SVEDES");
  SetPlayerName(4,"NEIRBORG");
  SetPlayerName(5,"ROBBERS");
  RegisterUpgrade(&DAT_100150e0,"AKA24SV");
  DisableUpgrade(0,&DAT_100150e0);
  RegisterZone(&DAT_10015c18,"Z_iron");
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  BOOL bVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  unsigned int uVar6;
  void *pcVar7;
  int *puVar8;
  
                    
  iVar3 = GetDiff(0);
  SaveSelectedUnits(0,&DAT_100156c0,0);
  ClearSelection(5);
  SelectUnitsType(&DAT_10015be8,5,0);
  SelectUnitsType(&DAT_10025330,5,1);
  SelectUnitsType(&DAT_10015be0,5,1);
  SelDie(5);
  cVar1 = Trigg(0);
  if (cVar1 != '\0') {
    SetTrigg(0,0);
    iVar4 = GetDiff(0);
    FUN_10003010(DAT_100293ec_ovl,(5 - iVar4) * 1000);
    iVar4 = GetDiff(0);
    FUN_10003010(DAT_10011080_ovl,(iVar4 + 4) * 1000);
    StartAI(2,"DENMARK.0",0,2,2,-1);
    ShowPage("#Entry0");
    DisableMission(0x52);
    iVar4 = GetDiff(0);
    if (0 < iVar4) {
      DisableMission(0x45);
      DisableMission(0x54);
    }
    iVar4 = GetDiff(0);
    if (1 < iVar4) {
      DisableMission(0x59);
    }
    DisableMission(0x55);
    DisableMission(0x49);
    iVar4 = GetDiff(0);
    ClearSelection(3);
    if (1 < iVar4) {
      SelectUnits(&DAT_10025340,1);
    }
    if (2 < iVar4) {
      SelectUnits(&DAT_10025338,1);
    }
    SelErase(3);
  }
  cVar1 = FUN_10001870(&DAT_10014f68);
  if (cVar1 != '\0') {
    cVar1 = Trigg(1);
    if (cVar1 != '\0') {
      SetTrigg(1,0);
      ShowPage("#Allert0");
      FUN_10001950((intptr_t)&DAT_10015a38);
      RunTimer(1,6000);
    }
    FUN_100014e0(&DAT_100150f0);
    FUN_100014e0(&DAT_10015260);
    FUN_100014e0(&DAT_100153d0);
    FUN_100014e0(&DAT_10015540);
    cVar1 = TimerDone(1);
    if ((cVar1 != '\0') && (uVar5 = FUN_100013d0((intptr_t)&DAT_10025070), (char)uVar5 != '\0')) {
      iVar4 = GetDiff(0);
      RunTimer(1,(0xc - iVar4) * 500);
      FUN_100012a0(&DAT_10025070,1);
      uVar6 = rand();
      if ((uVar6 & 1) == 0) {
        puVar8 = &DAT_10015780;
      }
      else {
        puVar8 = &DAT_10025068;
      }
      FUN_10001380(&DAT_10025070,puVar8);
    }
  }
  FUN_10002b90(&DAT_100250d8,1);
  iVar4 = FUN_10002d60((intptr_t)&DAT_100250d8);
  if (iVar4 < 0x14) {
    FUN_10002b90(&DAT_100250d8,4);
  }
  iVar4 = FUN_10002d60((intptr_t)&DAT_100250d8);
  if (0x32 < iVar4) {
    FUN_10002b90(&DAT_100250d8,0);
  }
  FUN_10002e30(&DAT_100250d8,(int *)&DAT_10015bf8,(int *)&DAT_10025058);
  FUN_10002b90(&DAT_10025150,1);
  iVar4 = FUN_10002d60((intptr_t)&DAT_10025150);
  if (iVar4 < 0x14) {
    FUN_10002b90(&DAT_10025150,4);
  }
  iVar4 = FUN_10002d60((intptr_t)&DAT_10025150);
  if (0x32 < iVar4) {
    FUN_10002b90(&DAT_10025150,0);
  }
  if (0 < iVar3) {
    FUN_10002e30(&DAT_10025150,(int *)&DAT_10015bf8,(int *)&DAT_10025068);
  }
  FUN_10002b90(&DAT_100251c8,1);
  iVar4 = FUN_10002d60((intptr_t)&DAT_100251c8);
  if (iVar4 < 0x14) {
    FUN_10002b90(&DAT_100251c8,4);
  }
  iVar4 = FUN_10002d60((intptr_t)&DAT_100251c8);
  if (0x3c < iVar4) {
    FUN_10002b90(&DAT_100251c8,0);
  }
  FUN_10002e30(&DAT_100251c8,(int *)&DAT_10015780,(int *)&DAT_10025050);
  FUN_10002b90(&DAT_10025240,1);
  iVar4 = FUN_10002d60((intptr_t)&DAT_10025240);
  if (iVar4 < 0x14) {
    FUN_10002b90(&DAT_10025240,4);
  }
  iVar4 = FUN_10002d60((intptr_t)&DAT_10025240);
  if (0x46 < iVar4) {
    FUN_10002b90(&DAT_10025240,0);
  }
  if (0 < iVar3) {
    FUN_10002e30(&DAT_10025240,(int *)&DAT_10015bf8,(int *)&DAT_10025058);
  }
  FUN_10002b90(&DAT_100252b8,1);
  iVar3 = FUN_10002d60((intptr_t)&DAT_100252b8);
  if (iVar3 < 10) {
    FUN_10002b90(&DAT_100252b8,4);
  }
  iVar3 = FUN_10002d60((intptr_t)&DAT_100252b8);
  if (0x28 < iVar3) {
    FUN_10002b90(&DAT_100252b8,0);
  }
  FUN_10002e30(&DAT_100252b8,(int *)&DAT_100150d8,(int *)&DAT_10025050);
  FUN_10002720(DAT_10025060);
  bVar2 = FUN_10001da0((int)(((unsigned char *)&DAT_10015c28) + *(int *)((int)DAT_10025060 + 0x35) * 0x186a));
  uVar5 = FUN_10001e50(DAT_10025060,!bVar2);
  if ((char)uVar5 != '\0') {
    ShowPageParam("#MerchantPrice",DAT_10015c08[7],DAT_10015c08[8],DAT_10015c08[9],
                  DAT_10015c08[10],DAT_10015c08[0xb],DAT_10015c08[0xc]);
    cVar1 = AskQuestion("#MarketMainMenu");
    if ((cVar1 != '\0') &&
       (uVar5 = FUN_10001fc0(((unsigned char *)&DAT_10015c28) + *(int *)((int)DAT_10025060 + 0x35) * 0x186a,
                             (int)DAT_10025060 + 0x39), pcVar7 = (void*)&ShowPage, (char)uVar5 == '\0'
       )) {
      ShowPage("#LittleMoney");
    }
  }
  uVar5 = FUN_10001e50(DAT_10015c08,'\x01');
  if ((char)uVar5 != '\0') {
    if (*(int *)((int)DAT_10015c08 + 0x1845) == 0) {
      FUN_10003e10();
    }
    else {
      cVar1 = AskQuestion("#CancelTrading");
      if (cVar1 != '\0') {
        *(int *)((int)DAT_10015c08 + 0x1845) = 0;
      }
    }
  }
  FUN_10002260(DAT_10015c08);
  cVar1 = FUN_10001870(&DAT_10014f08);
  if (cVar1 != '\0') {
    cVar1 = FUN_10001870(&DAT_10015b80);
    if (cVar1 == '\0') {
      FUN_10001a50(&DAT_100156c8);
    }
    cVar1 = FUN_10001870(&DAT_10014fc8);
    if ((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 != '\0')) {
      SetTrigg(2,0);
      ShowPage("#Allert1");
      ShowPage("#Allert1.0");
    }
  }
  cVar1 = FUN_10001870(&DAT_10015b80);
  if ((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#Trans");
    ShowPage("#Target0");
    ClearSelection(3);
    SelectUnits(&DAT_100156b8,0);
    SelectUnits(&DAT_100150d0,1);
    SelectUnits(&DAT_100156b0,1);
    SelectUnits(&DAT_10015bf0,1);
    SelectUnits(&DAT_10025340,1);
    SelectUnits(&DAT_10025338,1);
    SelChangeNation(3,0);
    FUN_100019a0((intptr_t)&DAT_10015a38);
    uVar5 = GetGlobalTime();
    FUN_10002bc0(&DAT_10025150,uVar5);
    uVar5 = GetGlobalTime();
    FUN_10002bc0(&DAT_10025240,uVar5);
    DisableMission(0x57);
    DisableMission(0x54);
    EnableMission(0x49);
    iVar3 = GetDiff(0);
    if (iVar3 < 2) {
      EnableMission(0x45);
      EnableMission(0x55);
      EnableMission(0x52);
    }
  }
  cVar1 = NationIsErased(DAT_100293ec_ovl & 0xff);
  if (cVar1 != '\0') {
    ShowPage("#Defeat");
    LooseGame();
  }
  cVar1 = NationIsErased(DAT_10011080_ovl & 0xff);
  if (cVar1 != '\0') {
    ShowPage("#Victory");
    ShowVictory();
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
