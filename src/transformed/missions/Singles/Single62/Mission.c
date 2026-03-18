#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
int this_ptr = 0;
int DAT_1000b040 = 2000;
long long DAT_1000b044 = 0;
long long DAT_1000b048 = 0;
long long DAT_1000b04c = 0;
long long DAT_1000b050 = 0;
long long DAT_1000b054 = 0;
long long DAT_1000b66c = 0;
char DAT_1000b670[] = "RESC";
char DAT_1000b678[] = "RESI";
char DAT_1000b680[] = "RESG";
char DAT_1000b688[] = "RESS";
char DAT_1000b690[] = "RESF";
char DAT_1000b698[] = "RESW";
char DAT_1000b6c8[] = "COAL";
char DAT_1000b6d0[] = "IRON";
char DAT_1000b6d8[] = "GOLD";
char DAT_1000b6e8[] = "FOOD";
char DAT_1000b6f0[] = "WOOD";
char DAT_1000b710[] = "r";
long long DAT_1000e3b8 = 0;
long long DAT_1000e3c0 = 0;
long long DAT_1000e3c8 = 0;
long long DAT_1000e6c3 = 0;
long long DAT_1000e720 = 0;
long long DAT_1000e728 = 0;
long long DAT_1000e730 = 0;
long long DAT_1000e738 = 0;
long long DAT_1000e740 = 0;
long long DAT_1000ea3b = 0;
long long DAT_1000ea98 = 0;
long long DAT_1000eaa0 = 0;
long long DAT_1000eaa8 = 0;
long long DAT_1000eab0 = 0;
long long DAT_1000eab8 = 0;
long long DAT_1000eac0 = 0;
long long DAT_1000eac8 = 0;
unsigned char DAT_1000ead0[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1000eae4 = 0;
long long DAT_1000eaf8 = 0;
long long DAT_1000eb0c = 0;
long long DAT_1000eb20 = 0;
long long DAT_1000eb38 = 0;
long long DAT_1000eb40 = 0;
long long DAT_1000eb48 = 0;
long long DAT_1000eb50 = 0;
long long DAT_1000eb58 = 0;
long long DAT_1000eb60 = 0;
long long DAT_1000eb68 = 0;
long long DAT_1000eb70 = 0;
long long DAT_1000eb78 = 0;
long long DAT_1000eb80 = 0;
long long DAT_1000eb88 = 0;
long long DAT_1000eb90 = 0;
long long DAT_1000eb98 = 0;
long long DAT_1000eba0 = 0;
long long DAT_1000eba8 = 0;
long long DAT_1000eea3 = 0;
long long DAT_1000ef00 = 0;
long long DAT_1000ef08 = 0;
long long DAT_1000ef10 = 0;
long long DAT_1000ef18 = 0;
long long DAT_1000ef20 = 0;
long long DAT_1000ef28 = 0;
long long DAT_1000ef30 = 0;
long long DAT_1000ef38 = 0;
long long DAT_1000ef40 = 0;
long long DAT_1000ef48 = 0;
long long DAT_1000ef50 = 0;
long long DAT_1000ef58 = 0;
long long DAT_1000ef60 = 0;
long long DAT_1000f25b = 0;
long long DAT_1000f2b8 = 0;
long long DAT_1000f2c0 = 0;
long long DAT_1000f2c8 = 0;
long long DAT_1000f2d0 = 0;
long long DAT_1000f2d8 = 0;
long long DAT_1000f2e0 = 0;
long long DAT_1000f2e8 = 0;
long long DAT_1000f2f0 = 0;
long long DAT_1000f2f8 = 0;
long long DAT_1000f300 = 0;
long long DAT_1000f308 = 0;
long long DAT_1000f310 = 0;
long long DAT_1000f318 = 0;
long long DAT_1000f320 = 0;
long long DAT_1000f328 = 0;
long long DAT_1000f330 = 0;
long long DAT_1000f338 = 0;
long long DAT_1000f340 = 0;
long long DAT_1000f63b = 0;
long long DAT_1000f698 = 0;
long long DAT_1000f6a0 = 0;
long long DAT_1000f6a8 = 0;
long long DAT_1000f6b0 = 0;
long long DAT_1000f6b8 = 0;
long long DAT_1000f6c0 = 0;
long long DAT_1000f6c8 = 0;
long long DAT_1000f6d0 = 0;
long long DAT_1000f6d8 = 0;
long long DAT_1000f6e0 = 0;
long long DAT_1000f6e8 = 0;
long long DAT_1000f6f0 = 0;
long long DAT_1000f6f8 = 0;
long long DAT_1000f700 = 0;
long long DAT_1000f708 = 0;
long long DAT_1000f710 = 0;
long long DAT_1000f718 = 0;
long long DAT_1000f720 = 0;
unsigned char DAT_1000f728[800] = {0};
long long DAT_1000f73c = 0;
long long DAT_1000f750 = 0;
long long DAT_1000f764 = 0;
long long DAT_1000f778 = 0;
long long DAT_1000f78c = 0;
long long DAT_1000f7a0 = 0;
long long DAT_1000f7a8 = 0;
long long DAT_1000f7b0 = 0;
int DAT_1000f7bc = 0;
long long DAT_1000fd80 = 0;
int DAT_1000e6c3_ovl = 0;
int DAT_1000ea3b_ovl = 0;
int DAT_1000eea3_ovl = 0;
int DAT_1000f25b_ovl = 0;
int DAT_1000f63b_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10003bf0() { return 0; }
int FUN_100041bb() { return 0; }
int FUN_10004438() { return 0; }
int FUN_1000448a() { return 0; }
int FUN_10004615() { return 0; }
int FUN_1000471e() { return 0; }
int FUN_100047fa() { return 0; }
int FUN_10004a40() { return 0; }
int FUN_10004f22() { return 0; }
int FUN_10005144() { return 0; }
int FUN_1000521c() { return 0; }
int FUN_1000538c() { return 0; }


/* Forward declarations */
void 
FUN_10001020(void *this_ptr,int param_1,int param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13);
void 
FUN_10001200(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void  FUN_10001250(int param_1);
void  FUN_10001270(int param_1);
void  FUN_10001330(int param_1);
void  FUN_100014c0(int param_1);
void  FUN_100015c0(void *this_ptr,int param_1);
void  FUN_100016e0(int param_1);
int  FUN_10001790(int param_1);
int  FUN_100017c0(void *param_1);
void  FUN_10001810(void *param_1);
void  FUN_10001940(void *param_1);
void  FUN_10001a80(void *this_ptr,int param_1);
unsigned int  FUN_10001b90(void *param_1);
void  FUN_10001ce0(void *this_ptr,int param_1);
void  FUN_10001d20(void *this_ptr,int param_1);
void  FUN_10001d90(void *this_ptr,int param_1,void *param_2);
int  FUN_10001ff0(void *this_ptr,int param_1);
int  FUN_10002060(void *this_ptr,int param_1);
void  FUN_100020d0(void *this_ptr,int param_1,int param_2);
void  FUN_10002180(void *this_ptr,int param_1,char param_2,char param_3);
int FUN_100021b0(int param_1);
void 
FUN_100021d0(void *this_ptr,int param_1,char *param_2,int param_3,int param_4,
            int param_5);
void 
FUN_10002240(void *this_ptr,char *param_1,int param_2,int param_3,int param_4);
void FUN_100037a0(int param_1,int param_2,int param_3,int param_4);
void FUN_100037f0(int param_1,int param_2,int param_3);
void FUN_10003a20(int *param_1);
int FUN_10003b30(byte *param_1,byte *param_2);
unsigned int * FUN_10003b70(unsigned int *param_1,char *param_2);
unsigned int FUN_10003c6d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
unsigned int FUN_10003c9c(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
int FUN_10003d92(char *param_1);
int FUN_10003db4(char *param_1);
int FUN_10003f15(int *param_1,int param_2,DWORD param_3);
int FUN_10003f41(int *param_1,int param_2,DWORD param_3);
int * FUN_10003fce(LPCSTR param_1,char *param_2,unsigned int param_3);
void FUN_10003fff(LPCSTR param_1,char *param_2);

void OnInit();
void ProcessScenary();


void 
FUN_10001020(void *this_ptr,int param_1,int param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(int *)((int)this_ptr + 0x323) = 100;
  *(int *)((int)this_ptr + 0x32b) = 100;
  *(int *)((int)this_ptr + 0x2d4) = param_8;
  *(int *)((int)this_ptr + 0x337) = 300;
  *(int *)((int)this_ptr + 0x333) = 300;
  *(int *)((int)this_ptr + 0x2f7) = param_2;
  *(int *)((int)this_ptr + 0x2dc) = param_10;
  *(int *)((int)this_ptr + 0x2fb) = param_4;
  *(int *)((int)this_ptr + 0x2e0) = param_11;
  *(int *)((int)this_ptr + 0x2d8) = param_9;
  *(int *)((int)this_ptr + 0x344) = param_13 * 0xf;
  *(int *)((int)this_ptr + 0x2e4) = param_12;
  *(int *)((int)this_ptr + 0x2d0) = param_7;
  *(char *)((int)this_ptr + 0x33b) = (char)param_5;
  uVar2 = -1;
  *(int *)((int)this_ptr + 0x327) = 200;
  *(int *)((int)this_ptr + 0x32f) = 500;
  *(char *)((int)this_ptr + 0x348) = 1;
  *(char *)((int)this_ptr + 0x349) = 1;
  *(int *)((int)this_ptr + 0x33c) = param_6;
  *(int *)((int)this_ptr + 0x34e) = 1;
  *(char *)((int)this_ptr + 0x352) = 1;
  do {
    pcVar4 = param_3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this_ptr + 0x2e8);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(int *)pcVar5 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(int *)((int)this_ptr + 0x2ff) = param_1;
  *(int *)((int)this_ptr + 0x30f) = 2000;
  *(int *)((int)this_ptr + 799) = 0;
  *(int *)((int)this_ptr + 0x31b) = 0;
  *(int *)((int)this_ptr + 0x317) = 0;
  *(int *)((int)this_ptr + 0x313) = 0;
  *(int *)((int)this_ptr + 0x30b) = 0;
  if (param_1 == 0) {
    return;
  }
  if (((param_6 == 0) || (param_6 == 1)) || (param_6 == 2)) {
    RegisterDynGroup((int)this_ptr + 0x303);
    CreateObject0(&DAT_1000f2b8,&DAT_1000f700,&DAT_1000ef38,param_5,param_4,0);
    RemoveGroup(&DAT_1000f2b8,(int)this_ptr + 0x303);
  }
  if (param_6 == 0) {
    TakeWood((int)this_ptr + 0x303);
  }
  else if (param_6 != 1) {
    if (param_6 != 2) {
      *(int *)((int)this_ptr + 0x340) = 0xf;
      return;
    }
    goto LAB_100011da;
  }
  TakeFood((int)this_ptr + 0x303);
LAB_100011da:
  TakeStone((int)this_ptr + 0x303);
  *(int *)((int)this_ptr + 0x340) = 0xf;
  return;
}





void 
FUN_10001200(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((int)this_ptr + 0x2d4) = param_3;
  *(int *)((int)this_ptr + 0x2d8) = param_4;
  *(int *)((int)this_ptr + 0x2dc) = param_5;
  *(int *)((int)this_ptr + 0x2e0) = param_6;
  *(int *)((int)this_ptr + 0x2e4) = param_7;
  *(int *)((int)this_ptr + 0x2d0) = param_2;
  *(int *)((int)this_ptr + 0x2fb) = param_1;
  return;
}





void  FUN_10001250(int param_1)

{
  if (*(int *)(param_1 + 0x2ff) == 1) {
    FUN_10001330(param_1);
    FUN_100014c0(param_1);
  }
  return;
}





void  FUN_10001270(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 100;
  *(int *)(param_1 + 0x337) = 300;
  *(int *)(param_1 + 0x333) = 300;
  *(int *)(param_1 + 0x323) = 100;
  *(int *)(param_1 + 0x32b) = 100;
  *(int *)(param_1 + 0x327) = 200;
  *(int *)(param_1 + 0x32f) = 500;
  if (*(int *)(param_1 + 0x2ff) == 1) {
    iVar2 = 0xc;
    do {
      if (iVar1 < *(int *)(param_1 + 0x30b)) {
        *(int *)(param_1 + 0x323) = *(int *)(param_1 + 0x323) + -8;
      }
      if (iVar1 < *(int *)(param_1 + 0x313)) {
        *(int *)(param_1 + 0x32b) = *(int *)(param_1 + 0x32b) + -8;
      }
      if (iVar1 < *(int *)(param_1 + 0x30f)) {
        *(int *)(param_1 + 0x327) = *(int *)(param_1 + 0x327) + -0x10;
      }
      if (iVar1 < *(int *)(param_1 + 0x31b)) {
        *(int *)(param_1 + 0x333) = *(int *)(param_1 + 0x333) + -0x18;
      }
      if (iVar1 < *(int *)(param_1 + 799)) {
        *(int *)(param_1 + 0x337) = *(int *)(param_1 + 0x337) + -0x18;
      }
      if (iVar1 < *(int *)(param_1 + 0x317)) {
        *(int *)(param_1 + 0x32f) = *(int *)(param_1 + 0x32f) + -0x28;
      }
      iVar1 = iVar1 * 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}





void  FUN_10001330(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetTotalAmount0(param_1);
  iVar2 = 0;
  *(int *)(param_1 + 0x340) = iVar1;
  if (0 < iVar1) {
    do {
      if (*(char *)(param_1 + 0x348) == '\0') break;
      if ((0 < *(int *)(param_1 + 0x34a)) &&
         ((((4 < *(int *)(param_1 + 0x30b) || (4 < *(int *)(param_1 + 0x313))) ||
           (4 < *(int *)(param_1 + 0x317))) ||
          ((4 < *(int *)(param_1 + 799) || (4 < *(int *)(param_1 + 0x31b))))))) {
        switch(*(int *)(param_1 + 0x33c)) {
        case 0:
          *(int *)(param_1 + 0x30b) = *(int *)(param_1 + 0x30b) + 0x19;
          break;
        case 1:
          *(int *)(param_1 + 0x30f) = *(int *)(param_1 + 0x30f) + 0x14;
          break;
        case 2:
          *(int *)(param_1 + 0x313) = *(int *)(param_1 + 0x313) + 0x19;
          break;
        case 3:
          *(int *)(param_1 + 0x317) = *(int *)(param_1 + 0x317) + 5;
          break;
        case 4:
          *(int *)(param_1 + 0x31b) = *(int *)(param_1 + 0x31b) + 0xf;
          break;
        case 5:
          *(int *)(param_1 + 799) = *(int *)(param_1 + 799) + 0xf;
        }
        if (*(int *)(param_1 + 0x30b) < 5) {
          if (*(int *)(param_1 + 0x313) < 5) {
            if (*(int *)(param_1 + 0x317) < 5) {
              if (*(int *)(param_1 + 0x31b) < 5) {
                if (4 < *(int *)(param_1 + 799)) {
                  *(int *)(param_1 + 799) = *(int *)(param_1 + 799) + -3;
                }
              }
              else {
                *(int *)(param_1 + 0x31b) = *(int *)(param_1 + 0x31b) + -3;
              }
            }
            else {
              *(int *)(param_1 + 0x317) = *(int *)(param_1 + 0x317) + -2;
            }
          }
          else {
            *(int *)(param_1 + 0x313) = *(int *)(param_1 + 0x313) + -5;
          }
        }
        else {
          *(int *)(param_1 + 0x30b) = *(int *)(param_1 + 0x30b) + -5;
        }
        *(int *)(param_1 + 0x34a) = *(int *)(param_1 + 0x34a) + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = *(int *)(param_1 + 0x34e) * iVar1;
  *(int *)(param_1 + 0x34a) = *(int *)(param_1 + 0x34a) + (3 - *(int *)(param_1 + 0x34e)) * iVar1;
  AddResource((int)*(char *)(param_1 + 0x33b) + -1,1,iVar2);
  FUN_10001270(param_1);
  return;
}





void  FUN_100014c0(int param_1)

{
  int iVar1;
  int uVar2;
  
  if (*(int *)(param_1 + 0x34a) < 0x3e9) {
    return;
  }
  iVar1 = GetTotalAmount0(param_1);
  if (*(int *)(param_1 + 0x344) <= iVar1) {
    return;
  }
  uVar2 = GetTotalAmount0(param_1);
  *(int *)(param_1 + 0x340) = uVar2;
  iVar1 = *(int *)(param_1 + 0x33c);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) goto LAB_1000157f;
  CreateObject0(&DAT_1000f2b8,&DAT_1000eab0,&DAT_1000ef38,*(char *)(param_1 + 0x33b),
                *(int *)(param_1 + 0x2fb),0);
  iVar1 = *(int *)(param_1 + 0x33c);
  if (iVar1 == 0) {
    TakeWood(&DAT_1000f2b8);
LAB_1000154e:
    TakeFood(&DAT_1000f2b8);
LAB_1000155c:
    TakeStone(&DAT_1000f2b8);
  }
  else {
    if (iVar1 == 1) goto LAB_1000154e;
    if (iVar1 == 2) goto LAB_1000155c;
  }
  RemoveGroup(&DAT_1000f2b8,param_1 + 0x303);
LAB_1000157f:
  *(int *)(param_1 + 0x34a) = *(int *)(param_1 + 0x34a) + -1000;
  *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 1;
  return;
}






void  FUN_100015c0(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  if ((*(int *)((int)this_ptr + 0x2ff) != 0) && (*(char *)((int)this_ptr + 0x349) != '\0')) {
    if ((*(char *)((int)this_ptr + 0x352) != '\0') &&
       (((iVar1 = GetUnitsAmount2(*(int *)((int)this_ptr + 0x2fb),&DAT_1000f6d8,param_1),
         iVar1 != 0 ||
         (iVar1 = GetUnitsAmount2(*(int *)((int)this_ptr + 0x2fb),&DAT_1000f6d0,param_1),
         iVar1 != 0)) && (*(int *)((int)this_ptr + 0x2ff) == 1)))) {
      uVar2 = AskMultilineQuestion(9,"#PAGE1",0,"VI1_1|VI1_2|VI1_3|VI1_4");
      switch(uVar2) {
      case 0:
        FUN_100016e0((int)this_ptr);
        *(char *)((int)this_ptr + 0x352) = 1;
        break;
      case 1:
        uVar2 = FUN_10001790((int)this_ptr);
        *(char *)((int)this_ptr + 0x352) = (char)uVar2;
        break;
      case 2:
        uVar2 = FUN_100017c0(this_ptr);
        *(char *)((int)this_ptr + 0x352) = (char)uVar2;
        break;
      case 3:
        *(char *)((int)this_ptr + 0x352) = 0;
      }
    }
    if (((*(char *)((int)this_ptr + 0x352) == '\0') &&
        (iVar1 = GetUnitsAmount2(*(int *)((int)this_ptr + 0x2fb),&DAT_1000f6d8,param_1),
        iVar1 == 0)) &&
       (iVar1 = GetUnitsAmount2(*(int *)((int)this_ptr + 0x2fb),&DAT_1000f6d0,param_1),
       iVar1 == 0)) {
      *(char *)((int)this_ptr + 0x352) = 1;
    }
  }
  return;
}





void  FUN_100016e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2ff) == 1) {
    iVar1 = GetTotalAmount0(param_1);
    ShowPageParam("#PAGE11",param_1 + 0x2e8,((unsigned char *)&DAT_1000f728) + *(int *)(param_1 + 0x33c) * 5,
                  &DAT_1000f728,*(int *)(param_1 + 0x30b),&DAT_1000f73c,
                  *(int *)(param_1 + 0x30f),&DAT_1000f750,*(int *)(param_1 + 0x313),
                  &DAT_1000f764,*(int *)(param_1 + 0x317),&DAT_1000f778,
                  *(int *)(param_1 + 0x31b),&DAT_1000f78c,*(int *)(param_1 + 799),
                  (3 - *(int *)(param_1 + 0x34e)) * iVar1,*(int *)(param_1 + 0x34e) * iVar1,iVar1,
                  *(int *)(param_1 + 0x34a),iVar1);
  }
  return;
}





int  FUN_10001790(int param_1)

{
  int uVar1;
  
  uVar1 = AskMultilineQuestion(9,"#PAGE12",0,"TPW1_0|TPW1_1|TPW1_2|TPW1_3");
  *(int *)(param_1 + 0x34e) = uVar1;
  return (int)1;
}





int  FUN_100017c0(void *param_1)

{
  int iVar1;
  
  do {
    while( 1 ) {
      while( 1 ) {
        do {
        } while (*(int *)((intptr_t)param_1 + 0x2ff) != 1);
        iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_1|TR1_3|TR1_4");
        if (iVar1 != 0) break;
        FUN_10001810(param_1);
      }
      if (iVar1 != 1) break;
      FUN_10001940(param_1);
    }
  } while (iVar1 != 2);
  return 1;
}





void  FUN_10001810(void *param_1)

{
  int uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  
  uVar1 = AskMultilineQuestion(9,"#PAGE5",0,"R1|R2|R3|R4|R5|R6");
  pvVar5 = param_1;
  switch(uVar1) {
  case 0:
    pvVar5 = (void *)0x0;
    break;
  case 1:
    pvVar5 = (void *)0x1;
    break;
  case 2:
    pvVar5 = (void *)0x2;
    break;
  case 3:
    pvVar5 = (void *)0x3;
    break;
  case 4:
    pvVar5 = (void *)0x4;
    break;
  case 5:
    pvVar5 = (void *)0x5;
  }
  uVar1 = AskMultilineQuestion(9,"#PAGE6",0,"R1|R2|R3|R4|R5|R6");
  pvVar4 = param_1;
  switch(uVar1) {
  case 0:
    pvVar4 = (void *)0x0;
    break;
  case 1:
    pvVar4 = (void *)0x1;
    break;
  case 2:
    pvVar4 = (void *)0x2;
    break;
  case 3:
    pvVar4 = (void *)0x3;
    break;
  case 4:
    pvVar4 = (void *)0x4;
    break;
  case 5:
    pvVar4 = (void *)0x5;
  }
  FUN_10001270((intptr_t)param_1);
  iVar2 = FUN_10002060(param_1,pvVar5);
  iVar3 = FUN_10002060(param_1,pvVar4);
  ShowPageParam("#PAGE131",((unsigned char *)&DAT_1000f728) + (int)pvVar5 * 5,100,
                ((unsigned char *)&DAT_1000f728) + (int)pvVar4 * 5,(iVar2 * 100) / iVar3);
  return;
}





void  FUN_10001940(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX = 0;
  
  iVar2 = AskMultilineQuestion(9,"#PAGE133",0,"NO1_1|NO1_2|NO1_3|NO1_4|NO1_5|NO1_6|NO1_7|NO1_8|NO1_9|NO1_10");
  iVar3 = AskMultilineQuestion(9,"#PAGE1331",0,"OD1_0|OD1_1|OD1_2");
  if (iVar3 == 0) {
    pvVar1 = (void *)((intptr_t)param_1 + iVar2 * 0x48);
    iVar2 = GetTotalAmount0(pvVar1);
    if (iVar2 != 0) {
      ShowPageParam("#PAGE7",(int)pvVar1 + 0x29,
                    ((unsigned char *)&DAT_1000f728) + *(int *)((int)pvVar1 + 9) * 5,
                    ((unsigned char *)&DAT_1000f728) + *(int *)((int)pvVar1 + 0x11) * 5,
                    ((unsigned char *)&DAT_1000f728) + *(int *)((int)pvVar1 + 9) * 5,*(int *)((int)pvVar1 + 0xd)
                    ,((unsigned char *)&DAT_1000f728) + *(int *)((int)pvVar1 + 0x11) * 5,
                    *(int *)((int)pvVar1 + 0x15));
      return;
    }
    ShowPage("#PAGE8");
  }
  else {
    if (iVar3 == 1) {
      pvVar1 = (void *)((intptr_t)param_1 + iVar2 * 0x48);
      iVar3 = GetTotalAmount0(pvVar1);
      if (iVar3 == 0) {
        FUN_100021d0(pvVar1,*(int *)((intptr_t)param_1 + 0x2ff),(char *)((intptr_t)param_1 + 0x2e8),
                     *(int *)((intptr_t)param_1 + 0x2f7),
                     (int)*(char *)((intptr_t)param_1 + 0x33b)
                     ,*(int *)((intptr_t)param_1 + 0x2fb));
      }
      FUN_10001a80(param_1,iVar2);
      return;
    }
    if (iVar3 == 2) {
      pvVar1 = (void *)((intptr_t)param_1 + iVar2 * 0x48);
      iVar2 = GetTotalAmount0(pvVar1);
      if (iVar2 != 0) {
        SelectUnits(pvVar1,0);
        SelDie(*(char *)((int)pvVar1 + 8));
        ShowPage("#PAGE3");
        return;
      }
      ShowPage("#PAGE2");
      return;
    }
  }
  return;
}





void  FUN_10001a80(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = AskMultilineQuestion(9,"#PAGE4",0,*(int *)((int)this_ptr + 0x2d0));
  uVar2 = AskMultilineQuestion(9,"#PAGE5",0,"R1|R2|R3|R4|R5|R6");
  iVar4 = param_1;
  switch(uVar2) {
  case 0:
    iVar4 = 0;
    break;
  case 1:
    iVar4 = 1;
    break;
  case 2:
    iVar4 = 2;
    break;
  case 3:
    iVar4 = 3;
    break;
  case 4:
    iVar4 = 4;
    break;
  case 5:
    iVar4 = 5;
  }
  uVar2 = AskMultilineQuestion(9,"#PAGE6",0,"R1|R2|R3|R4|R5|R6");
  iVar3 = param_1;
  switch(uVar2) {
  case 0:
    iVar3 = 0;
    break;
  case 1:
    iVar3 = 1;
    break;
  case 2:
    iVar3 = 2;
    break;
  case 3:
    iVar3 = 3;
    break;
  case 4:
    iVar3 = 4;
    break;
  case 5:
    iVar3 = 5;
  }
  iVar1 = *(int *)((int)this_ptr + iVar1 * 4 + 0x2d4);
  FUN_10002240((void *)((int)this_ptr + param_1 * 0x48),(char *)(iVar1 + 0x2e8),
               *(int *)(iVar1 + 0x2f7),iVar4,iVar3);
  return;
}





unsigned int  FUN_10001b90(void *param_1)

{
  int in_EAX;
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  void *pvVar7;
  int *piVar8;
  unsigned int uStack_4;
  int uVar6;
  
  uVar6 = (int)((unsigned int)in_EAX >> 8);
  uVar1 = (int)*(char *)((intptr_t)param_1 + 0x349);
  if (*(char *)((intptr_t)param_1 + 0x349) != '\0') {
    iVar2 = GetUnitsAmount2(*(int *)((intptr_t)param_1 + 0x2fb),&DAT_1000f300,
                            (int)*(char *)((intptr_t)param_1 + 0x33b));
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = 0;
      pvVar7 = param_1;
      do {
        if (*(char *)((int)pvVar7 + 0x19) == '\0') {
          iVar3 = GetUnitsAmount1(*(int *)((intptr_t)param_1 + 0x2fb),pvVar7);
          if (iVar3 != 0) {
            pvVar7 = (void *)((intptr_t)param_1 + iVar2 * 0x48);
            *(char *)((int)pvVar7 + 0x19) = 1;
            FUN_10001ce0(param_1,(int)pvVar7);
            FUN_10001d20(param_1,(int)pvVar7);
            FUN_100037f0(pvVar7,*(int *)((int)pvVar7 + 0x38),
                                 *(int *)((int)pvVar7 + 0x3c));
            return (int)1;
          }
        }
        iVar2 = iVar2 + 1;
        pvVar7 = (void *)((int)pvVar7 + 0x48);
      } while (iVar2 < 10);
      uStack_4 = 0;
      piVar8 = (int *)((intptr_t)param_1 + 0x2d4);
      do {
        if (*piVar8 != 0) {
          iVar2 = 0;
          iVar3 = 0;
          do {
            if (*(char *)(*piVar8 + iVar3 + 0x19) != '\0') {
              iVar4 = GetUnitsAmount1(*(int *)((intptr_t)param_1 + 0x2fb),*piVar8 + iVar3);
              if (iVar4 != 0) {
                iVar2 = iVar2 * 0x48;
                *(char *)(*(int *)((intptr_t)param_1 + uStack_4 * 4 + 0x2d4) + 0x19 + iVar2) = 0;
                pvVar7 = *(void **)((intptr_t)param_1 + uStack_4 * 4 + 0x2d4);
                FUN_10001d90(param_1,(int)((int)pvVar7 + iVar2),pvVar7);
                iVar4 = *(int *)((intptr_t)param_1 + uStack_4 * 4 + 0x2d4);
                iVar3 = iVar4 + iVar2;
                FUN_100037f0(iVar3,*(int *)(iVar3 + 0x3c),
                                     *(int *)(iVar4 + 0x38 + iVar2));
                return (int)1;
              }
            }
            iVar3 = iVar3 + 0x48;
            iVar2 = iVar2 + 1;
          } while (iVar3 < 0x2d0);
        }
        piVar8 = piVar8 + 1;
        uStack_4 = uStack_4 + 1;
      } while ((int)uStack_4 < 5);
      return uStack_4 & -256;
    }
  }
  return uVar1 & -256;
}





void  FUN_10001ce0(void *this_ptr,int param_1)

{
  FUN_100020d0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
  FUN_100020d0(this_ptr,*(int *)(param_1 + 0x11),*(int *)(param_1 + 0x15));
  *(int *)(param_1 + 0x15) = 0;
  *(int *)(param_1 + 0xd) = 0;
  return;
}





void  FUN_10001d20(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = FUN_10001ff0(this_ptr,*(int *)(param_1 + 9));
  if (DAT_1000b040 <= iVar1) {
    *(int *)(param_1 + 0xd) = DAT_1000b040;
    FUN_100020d0(this_ptr,*(int *)(param_1 + 9),-DAT_1000b040);
    return;
  }
  uVar2 = FUN_10001ff0(this_ptr,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = uVar2;
  iVar1 = FUN_10001ff0(this_ptr,*(int *)(param_1 + 9));
  FUN_100020d0(this_ptr,*(int *)(param_1 + 9),-iVar1);
  return;
}





void  FUN_10001d90(void *this_ptr,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  if (*(int *)((int)this_ptr + 0x2ff) != 0) {
    iVar1 = FUN_10002060(this_ptr,*(int *)(param_1 + 9));
    iVar1 = iVar1 * *(int *)(param_1 + 0xd);
    iVar2 = FUN_10001ff0(this_ptr,*(int *)(param_1 + 0x11));
    iVar3 = FUN_10002060(this_ptr,*(int *)(param_1 + 0x11));
    iVar2 = iVar2 * iVar3;
    if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
      FUN_100020d0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
      *(int *)(param_1 + 0xd) = 0;
      iVar2 = FUN_10002060(this_ptr,*(int *)(param_1 + 0x11));
      *(int *)(param_1 + 0x15) = iVar1 / iVar2;
      FUN_100020d0(this_ptr,*(int *)(param_1 + 0x11),-(iVar1 / iVar2));
      return;
    }
    uVar4 = FUN_10001ff0(this_ptr,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = uVar4;
    iVar1 = FUN_10001ff0(this_ptr,*(int *)(param_1 + 0x11));
    FUN_100020d0(this_ptr,*(int *)(param_1 + 0x11),-iVar1);
    iVar1 = FUN_10002060(this_ptr,*(int *)(param_1 + 9));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar2 / iVar1;
    iVar1 = FUN_10002060(this_ptr,*(int *)(param_1 + 9));
    FUN_100020d0(this_ptr,*(int *)(param_1 + 9),iVar2 / iVar1);
    return;
  }
  iVar1 = FUN_10002060(param_2,*(int *)(param_1 + 9));
  iVar1 = iVar1 * *(int *)(param_1 + 0xd);
  iVar2 = FUN_100021b0(*(int *)(param_1 + 0x11));
  iVar3 = GetResource(*(char *)((int)this_ptr + 0x33b) + -1,iVar2);
  iVar2 = FUN_10002060(param_2,*(int *)(param_1 + 0x11));
  iVar3 = iVar3 * iVar2;
  if (iVar1 <= iVar3) {
    uVar4 = *(int *)(param_1 + 0xd);
    iVar2 = FUN_100021b0(*(int *)(param_1 + 9));
    AddResource(*(char *)((int)this_ptr + 0x33b) + -1,iVar2,uVar4);
    *(int *)(param_1 + 0xd) = 0;
    iVar2 = FUN_10002060(param_2,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = iVar1 / iVar2;
    iVar1 = FUN_100021b0(*(int *)(param_1 + 0x11));
    iVar1 = GetResource(*(char *)((int)this_ptr + 0x33b) + -1,iVar1);
    iVar1 = iVar1 - *(int *)(param_1 + 0x15);
    iVar2 = FUN_100021b0(*(int *)(param_1 + 0x11));
    SetResource(*(char *)((int)this_ptr + 0x33b) + -1,iVar2,iVar1);
    return;
  }
  iVar1 = FUN_100021b0(*(int *)(param_1 + 0x11));
  uVar4 = GetResource(*(char *)((int)this_ptr + 0x33b) + -1,iVar1);
  *(int *)(param_1 + 0x15) = uVar4;
  uVar4 = 0;
  iVar1 = FUN_100021b0(*(int *)(param_1 + 0x11));
  SetResource(*(char *)((int)this_ptr + 0x33b) + -1,iVar1,uVar4);
  iVar1 = FUN_10002060(param_2,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar3 / iVar1;
  iVar1 = FUN_10002060(param_2,*(int *)(param_1 + 9));
  iVar3 = iVar3 / iVar1;
  iVar1 = FUN_100021b0(*(int *)(param_1 + 9));
  AddResource(*(char *)((int)this_ptr + 0x33b) + -1,iVar1,iVar3);
  return;
}





int  FUN_10001ff0(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((int)this_ptr + 0x30b);
  case 1:
    return *(int *)((int)this_ptr + 0x30f);
  case 2:
    return *(int *)((int)this_ptr + 0x313);
  case 3:
    return *(int *)((int)this_ptr + 0x317);
  case 4:
    return *(int *)((int)this_ptr + 0x31b);
  case 5:
    return *(int *)((int)this_ptr + 799);
  default:
    return 0;
  }
}





int  FUN_10002060(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((int)this_ptr + 0x323);
  case 1:
    return *(int *)((int)this_ptr + 0x327);
  case 2:
    return *(int *)((int)this_ptr + 0x32b);
  case 3:
    return *(int *)((int)this_ptr + 0x32f);
  case 4:
    return *(int *)((int)this_ptr + 0x333);
  case 5:
    return *(int *)((int)this_ptr + 0x337);
  default:
    return 0;
  }
}





void  FUN_100020d0(void *this_ptr,int param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((int)this_ptr + 0x30b) = *(int *)((int)this_ptr + 0x30b) + param_2;
    return;
  case 1:
    *(int *)((int)this_ptr + 0x30f) = *(int *)((int)this_ptr + 0x30f) + param_2;
    return;
  case 2:
    *(int *)((int)this_ptr + 0x313) = *(int *)((int)this_ptr + 0x313) + param_2;
    return;
  case 3:
    *(int *)((int)this_ptr + 0x317) = *(int *)((int)this_ptr + 0x317) + param_2;
    return;
  case 4:
    *(int *)((int)this_ptr + 0x31b) = *(int *)((int)this_ptr + 0x31b) + param_2;
    return;
  case 5:
    *(int *)((int)this_ptr + 799) = *(int *)((int)this_ptr + 799) + param_2;
  }
  return;
}





void  FUN_10002180(void *this_ptr,int param_1,char param_2,char param_3)

{
  *(char *)((int)this_ptr + 0x348) = param_2;
  *(int *)((int)this_ptr + 0x344) = param_1 * 0xf;
  *(char *)((int)this_ptr + 0x349) = param_3;
  return;
}





int FUN_100021b0(int param_1)

{
  if (param_1 == 3) {
    return 1;
  }
  if (param_1 == 1) {
    param_1 = 3;
  }
  return param_1;
}





void 
FUN_100021d0(void *this_ptr,int param_1,char *param_2,int param_3,int param_4,
            int param_5)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  CreateObject0(this_ptr,&DAT_1000eab0,&DAT_1000f300,param_4,param_5,0);
  uVar2 = -1;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this_ptr + 0x1a);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(int *)pcVar5 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(int *)((int)this_ptr + 0x44) = param_1;
  *(int *)((int)this_ptr + 0x38) = param_3;
  *(char *)((int)this_ptr + 8) = (char)param_4;
  *(char *)((int)this_ptr + 0x19) = 0;
  *(int *)((int)this_ptr + 0x15) = 0;
  *(int *)((int)this_ptr + 0xd) = 0;
  return;
}





void 
FUN_10002240(void *this_ptr,char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = -1;
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this_ptr + 0x29);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(int *)pcVar5 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(int *)((int)this_ptr + 0x15) = 0;
  *(int *)((int)this_ptr + 0x3c) = param_2;
  *(int *)((int)this_ptr + 0xd) = 0;
  *(int *)((int)this_ptr + 9) = param_3;
  *(int *)((int)this_ptr + 0x11) = param_4;
  return;
}





void __cdecl
FUN_100037a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = GetUnitsAmount2(param_1,param_4,param_3);
  if (iVar1 != 0) {
    SelectTypeOfUnitsInZone(param_1,param_4,param_3,0);
    SelSendTo(param_3,param_2,0,0);
    ClearSelection(param_3);
  }
  return;
}





void __cdecl FUN_100037f0(int param_1,int param_2,int param_3)

{
  SelectUnits(param_1,0);
  switch(param_2) {
  case 0:
    if (param_3 == 3) {
      SelSendTo(1,&DAT_1000f718,0,0);
      SelSendTo(1,&DAT_1000f7a0,0,2);
      return;
    }
    break;
  case 1:
    if (param_3 == 3) {
      SelSendTo(1,&DAT_1000eb78,0x50,0);
      SelSendTo(1,&DAT_1000eb88,0x80,2);
      SelSendTo(1,&DAT_1000eb90,0x80,2);
      SelSendTo(1,&DAT_1000f7a0,0,2);
      return;
    }
    if (param_3 == 4) {
      SelSendTo(1,&DAT_1000eb60,0,0);
      SelSendTo(1,&DAT_1000f708,0,2);
      return;
    }
    break;
  case 2:
    if (param_3 == 4) {
      SelSendTo(1,&DAT_1000f6b0,0x80,0);
      SelSendTo(1,&DAT_1000f6b8,0x80,2);
      SelSendTo(1,&DAT_1000f6c0,0x80,2);
      SelSendTo(1,&DAT_1000f708,0,2);
      return;
    }
    break;
  case 3:
    if (param_3 == 0) {
      SelSendTo(1,&DAT_1000f718,0x80,0);
      SelSendTo(1,&DAT_1000f2d8,0,2);
      return;
    }
    if (param_3 == 1) {
      SelSendTo(1,&DAT_1000eb90,0,0);
      SelSendTo(1,&DAT_1000eb88,0xf0,2);
      SelSendTo(1,&DAT_1000eb78,0xc0,2);
      SelSendTo(1,&DAT_1000eb68,0,2);
      return;
    }
    break;
  case 4:
    if (param_3 == 1) {
      SelSendTo(1,&DAT_1000eb60,0xa0,0);
      SelSendTo(1,&DAT_1000eb68,0,2);
      return;
    }
    if (param_3 == 2) {
      SelSendTo(1,&DAT_1000f6c0,0,0);
      SelSendTo(1,&DAT_1000f6b8,0,2);
      SelSendTo(1,&DAT_1000f6b0,0xf0,2);
      SelSendTo(1,&DAT_1000f6f8,0,2);
    }
  }
  return;
}





void __cdecl FUN_10003a20(int *param_1)

{
  FUN_100041bb(param_1);
  return;
}





int __cdecl FUN_10003b30(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( 1 ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(unsigned int)bVar1 >> 3] = abStack_28[(int)(unsigned int)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(unsigned int)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}





unsigned int * __cdecl FUN_10003b70(unsigned int *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  char cVar6;
  unsigned int uVar7;
  char *pcVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((unsigned int)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (unsigned int *)((intptr_t)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (unsigned int *)0x0;
      }
    }
    while( 1 ) {
      while( 1 ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ (int)(int)cVar3;
        uVar7 = uVar5 ^ -1 ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ -1 ^ uVar9 + 0x7efefeff) & -2130640640) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & -2130640640) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (unsigned int *)0x0;
          }
          if ((uVar5 + 0x7efefeff & -2147483648) == 0) {
            return (unsigned int *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (unsigned int *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (unsigned int *)((intptr_t)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (unsigned int *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (unsigned int *)((intptr_t)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (unsigned int *)((intptr_t)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (unsigned int *)0x0;
      }
    }
    return (unsigned int *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (unsigned int *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (unsigned int *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (unsigned int *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( 1 );
}





unsigned int __cdecl FUN_10003c6d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned int uVar1;
  
  FUN_10004438((unsigned int)param_4);
  uVar1 = FUN_10003c9c(param_1,param_2,param_3,param_4);
  FUN_1000448a((unsigned int)param_4);
  return uVar1;
}





unsigned int __cdecl FUN_10003c9c(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  unsigned int uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  piVar1 = param_4;
  pcVar6 = (char *)(param_2 * param_3);
  if (pcVar6 == (char *)0x0) {
    param_3 = 0;
  }
  else {
    pcVar5 = param_1;
    param_1 = pcVar6;
    if ((*(unsigned short *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((*(unsigned short *)(piVar1 + 3) & 0x10c) == 0) ||
         (pcVar2 = (char *)piVar1[1], pcVar2 == (char *)0x0)) {
        if (param_1 < param_4) {
          uVar4 = FUN_1000471e(piVar1);
          if (uVar4 == -1) goto LAB_10003d78;
          *pcVar5 = (char)uVar4;
          param_4 = (int *)piVar1[6];
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + -1;
        }
        else {
          pcVar2 = param_1;
          if (param_4 != (int *)0x0) {
            pcVar2 = param_1 + -((unsigned int)param_1 % (unsigned int)param_4);
          }
          iVar3 = FUN_100047fa(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_10003d78:
            return (unsigned int)((int)pcVar6 - (intptr_t)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10003d78;
          }
          param_1 = param_1 + -iVar3;
          pcVar5 = pcVar5 + iVar3;
        }
      }
      else {
        pcVar7 = param_1;
        if (pcVar2 <= param_1) {
          pcVar7 = pcVar2;
        }
        FUN_10004a40((int *)pcVar5,(int *)*piVar1,(unsigned int)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}





int __cdecl FUN_10003d92(char *param_1)

{
  int iVar1;
  
  FUN_10004438((unsigned int)param_1);
  iVar1 = FUN_10003db4(param_1);
  FUN_1000448a((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10003db4(char *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  byte bVar3;
  DWORD *pDVar4;
  char *pcVar5;
  DWORD DVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  DWORD local_8;
  
  pcVar8 = param_1;
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 4) < 0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  local_8 = FUN_10005144(uVar1,0,1);
  if ((intptr_t)local_8 < 0) {
LAB_10003e42:
    local_c = -1;
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0xc);
    if ((uVar2 & 0x108) == 0) {
      return local_8 - *(int *)(param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar7 = *(char **)(param_1 + 8);
    local_c = (int)pcVar5 - (int)pcVar7;
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0x80) == 0) {
        pDVar4 = FUN_10004f22();
        *pDVar4 = 0x16;
        goto LAB_10003e42;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)(((long long *)&DAT_1000fd80)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
        for (; pcVar9 < pcVar5; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_c = local_c + 1;
          }
        }
      }
    }
    if (local_8 != 0) {
      if ((param_1[0xc] & 1U) != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_c = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)(param_1 + 4) - (int)pcVar7);
          iVar10 = (uVar1 & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + ((long long *)&DAT_1000fd80)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_10005144(uVar1,0,2);
            if (DVar6 == local_8) {
              pcVar7 = *(char **)(param_1 + 8);
              pcVar9 = pcVar5 + (int)pcVar7;
              param_1 = pcVar5;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar3 = pcVar8[0xd] & 0x20;
            }
            else {
              FUN_10005144(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(unsigned int *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(unsigned int *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + ((long long *)&DAT_1000fd80)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar8;
            }
            pcVar5 = param_1;
            if (bVar3 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_8 = local_8 - (intptr_t)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}





int __cdecl FUN_10003f15(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10004438((unsigned int)param_1);
  iVar1 = FUN_10003f41(param_1,param_2,param_3);
  FUN_1000448a((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10003f41(int *param_1,int param_2,DWORD param_3)

{
  unsigned int uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10004f22();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & -17;
    if (param_3 == 1) {
      iVar2 = FUN_10003db4((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10004615(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & -4;
    }
    DVar3 = FUN_10005144(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != -1) - 1;
  }
  return iVar2;
}





int * __cdecl FUN_10003fce(LPCSTR param_1,char *param_2,unsigned int param_3)

{
  int *puVar1;
  int *puVar2;
  
  puVar1 = FUN_1000538c();
  if (puVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = FUN_1000521c(param_1,param_2,param_3,puVar1);
  FUN_1000448a((unsigned int)puVar1);
  return puVar2;
}





void __cdecl FUN_10003fff(LPCSTR param_1,char *param_2)

{
  FUN_10003fce(param_1,param_2,0x40);
  return;
}







void OnInit(void)

{
                    
  RegisterFormation(&DAT_1000eab0,"#ALONE");
  RegisterFormation(&DAT_1000f700,"#LINE15PUS");
  RegisterUnitType(&DAT_1000f300,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_1000ef38,"Kreposnoi_portugal(sp)");
  RegisterUnitType(&DAT_1000f6d8,"Gusar_evro(sp)");
  RegisterUnitType(&DAT_1000f6d0,"Gusar_evro(PO)");
  RegisterDynGroup(&DAT_1000f2b8);
  RegisterVar(&DAT_1000f2b8,8);
  RegisterVar(&DAT_1000ef60,0x353);
  RegisterVar(&DAT_1000eba8,0x353);
  RegisterVar(&DAT_1000e740,0x353);
  RegisterVar(&DAT_1000e3c8,0x353);
  RegisterVar(&DAT_1000f340,0x353);
  RegisterVar(&DAT_1000b040,4);
  RegisterZone(&DAT_1000f2d8,"ZOrsera");
  RegisterZone(&DAT_1000eb68,"ZAlkaras");
  RegisterZone(&DAT_1000f6f8,"ZBalasote");
  RegisterZone(&DAT_1000f7a0,"ZSpainTrade");
  RegisterZone(&DAT_1000f708,"ZPortugalTrade");
  RegisterUnits(&DAT_1000eb48,"GOrseraTrade");
  RegisterUnits(&DAT_1000f6f0,"GOrseraLive");
  RegisterUnits(&DAT_1000f2e8,"GOrseraProduce");
  RegisterUnits(&DAT_1000f328,"GAlkarasTrade");
  RegisterUnits(&DAT_1000ef50,"GAlkarasLive");
  RegisterUnits(&DAT_1000f6e8,"GAlkarasProduce");
  RegisterUnits(&DAT_1000f318,"GBalasoteTrade");
  RegisterUnits(&DAT_1000eac0,"GBalasoteLive");
  RegisterUnits(&DAT_1000f6a0,"GBalasoteProduce");
  RegisterUnits(&DAT_1000f720,"GSpainTrade");
  RegisterUnits(&DAT_1000eb40,"GPortugalTrade");
  DAT_1000f25b_ovl = &DAT_1000f7a0;
  DAT_1000eea3_ovl = &DAT_1000f708;
  DAT_1000ea3b_ovl = &DAT_1000f2d8;
  DAT_1000e6c3_ovl = &DAT_1000eb68;
  DAT_1000f63b_ovl = &DAT_1000f6f8;
  RegisterVar(((int*)0),0x14);
  SetPlayerName(2,"SPAIN");
  SetPlayerName(3,"ENGLAND");
  SetPlayerName(4,"FRANCE");
  SetPlayerName(6,"TURKISH");
  RegisterUnitType(&DAT_1000f2d0,"Rinok(sp)");
  RegisterUnitType(&DAT_1000ef40,"Rinok(PO)");
  RegisterUnitType(&DAT_1000f2e0,"Rinok_Turki(TU)");
  RegisterUnitType(&DAT_1000eb98,"Melnica(sp)");
  RegisterUnitType(&DAT_1000eb80,"Melnica(PO)");
  RegisterUnitType(&DAT_1000f6e0,"Kreposnoi_portugal(sp)");
  RegisterUnitType(&DAT_1000f698,"Kreposnoi_portugal(PO)");
  RegisterUnitType(&DAT_1000f6c8,"Lodka(sp)");
  RegisterUnitType(&DAT_1000f6a8,"Lodka(PO)");
  RegisterUnitType(&DAT_1000eab8,"Port(TU)");
  RegisterUpgrade(&DAT_1000f310,"Melnica(sp)GETRES");
  RegisterUpgrade(&DAT_1000f2c0,"Melnica(sp)GETRES2");
  RegisterUpgrade(&DAT_1000ef48,"AKA01SP");
  RegisterUpgrade(&DAT_1000ef18,"AKA02SP");
  RegisterUpgrade(&DAT_1000eb70,"AKA03SP");
  RegisterUpgrade(&DAT_1000eb50,"AKA04SP");
  RegisterUpgrade(&DAT_1000eac8,"KUZ01SP");
  RegisterUpgrade(&DAT_1000f320,"Melnica(PO)GETRES");
  RegisterUpgrade(&DAT_1000f2c8,"Melnica(PO)GETRES2");
  RegisterUpgrade(&DAT_1000ef58,"AKA01PO");
  RegisterUpgrade(&DAT_1000ef28,"AKA02PO");
  RegisterUpgrade(&DAT_1000eba0,"AKA03PO");
  RegisterUpgrade(&DAT_1000eb58,"AKA04PO");
  RegisterUpgrade(&DAT_1000eb38,"KUZ01PO");
  RegisterUpgrade(&DAT_1000eaa0,"AKA08SP");
  RegisterUpgrade(&DAT_1000f308,"AKA23SP");
  RegisterUpgrade(&DAT_1000f338,"AKA24SP");
  RegisterUpgrade(&DAT_1000ea98,"AKA08PO");
  RegisterUpgrade(&DAT_1000f2f8,"AKA23PO");
  RegisterUpgrade(&DAT_1000f330,"AKA24PO");
  RegisterUnits(&DAT_1000f720,"GSpainTrade");
  RegisterUnits(&DAT_1000eb40,"GPortugalTrade");
  RegisterZone(&DAT_1000f7a0,"ZSpainTrade");
  RegisterZone(&DAT_1000f708,"ZPortugalTrade");
  RegisterZone(&DAT_1000f2f0,"ZAlert");
  RegisterZone(&DAT_1000e730,"ZAlert1");
  RegisterZone(&DAT_1000e728,"ZAlert2");
  RegisterZone(&DAT_1000e720,"ZAlert3");
  RegisterZone(&DAT_1000e738,"ZAlert4");
  RegisterZone(&DAT_1000f718,"Z0_3Way01");
  RegisterZone(&DAT_1000eb90,"Z1_3Way01");
  RegisterZone(&DAT_1000eb88,"Z1_3Way02");
  RegisterZone(&DAT_1000eb78,"Z1_3Way03");
  RegisterZone(&DAT_1000eb60,"Z1_4Way01");
  RegisterZone(&DAT_1000f6c0,"Z2_4Way01");
  RegisterZone(&DAT_1000f6b8,"Z2_4Way02");
  RegisterZone(&DAT_1000f6b0,"Z2_4Way03");
  RegisterUnits(&DAT_1000ef00,"GPiasant");
  RegisterUnits(&DAT_1000ef30,"GWorota");
  RegisterDynGroup(&DAT_1000eaa8);
  RegisterVar(&DAT_1000eaa8,8);
  RegisterZone(&DAT_1000e3c0,"ZGetMoney01");
  RegisterZone(&DAT_1000e3b8,"ZGetMoney02");
  RegisterZone(&DAT_1000ef20,"ZAttack01");
  RegisterZone(&DAT_1000ef08,"ZAttack02");
  RegisterZone(&DAT_1000ef10,"ZAttack03");
  RegisterUnits(&DAT_1000f7b0,"GBashni");
  RegisterUnits(&DAT_1000f7a8,"G18_VEC");
  RegisterDynGroup(&DAT_1000f710);
  RegisterVar(&DAT_1000f710,8);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  FILE *pFVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  size_t sVar5;
  int iVar6;
  int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  void *pcVar13;
  char uVar14;
  char uVar15;
  char *pcVar16;
  
                    
  if (DAT_1000f7bc == '\0') {
    DAT_1000f7bc = '\x01';
    FUN_10003fff("Missions//miss_vic.txt",DAT_1000b710);
    if (pFVar2 == (FILE *)0x0) {
      uVar8 = -1;
      pcVar16 = DAT_1000b6f0;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f728;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = DAT_1000b6e8;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f73c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = "STONE";
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f750;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = DAT_1000b6d8;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f764;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = DAT_1000b6d0;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f778;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = DAT_1000b6c8;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f78c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = "ORSERA";
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000ead0;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = "ALKARAS";
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000eae4;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = "BALASOTE";
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000eaf8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = "SPAIN";
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000eb0c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = -1;
      pcVar16 = "PORTUGAL";
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000eb20;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar12 = *(int *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      FUN_10003f15((int *)pFVar2,0,2);
      uVar8 = FUN_10003d92((char *)pFVar2);
      puVar3 = malloc(uVar8 + 1);
      FUN_10003f15((int *)pFVar2,0,0);
      FUN_10003c6d((char *)puVar3,1,uVar8,(int *)pFVar2);
      FUN_10003bf0(pFVar2);
      iVar11 = 0;
      iVar6 = 0;
      do {
        if (iVar6 == 0) {
          pcVar16 = DAT_1000b698;
LAB_10002b0a:
          puVar4 = FUN_10003b70(puVar3,pcVar16);
          iVar11 = (int)puVar4 - (int)puVar3;
        }
        else {
          if (iVar6 == 1) {
            pcVar16 = DAT_1000b690;
            goto LAB_10002b0a;
          }
          if (iVar6 == 2) {
            pcVar16 = DAT_1000b688;
            goto LAB_10002b0a;
          }
          if (iVar6 == 3) {
            pcVar16 = DAT_1000b680;
            goto LAB_10002b0a;
          }
          if (iVar6 == 4) {
            pcVar16 = DAT_1000b678;
            goto LAB_10002b0a;
          }
          if (iVar6 == 5) {
            pcVar16 = DAT_1000b670;
            goto LAB_10002b0a;
          }
        }
        iVar11 = iVar11 + 5;
        sVar5 = FUN_10003b30((byte *)(iVar11 + (int)puVar3),&DAT_1000b66c);
        iVar10 = iVar6 * 0x14;
        strncpy((char *)(((unsigned char *)&DAT_1000f728) + iVar6 * 5),(char *)(iVar11 + (int)puVar3),sVar5);
        iVar6 = iVar6 + 1;
        *(char *)((int)((unsigned char *)&DAT_1000f728) + sVar5 + iVar10) = 0;
      } while (iVar6 < 6);
      iVar6 = 0;
      do {
        if (iVar6 == 0) {
          pcVar16 = "ORSERA";
LAB_10002b9d:
          puVar4 = FUN_10003b70(puVar3,pcVar16);
          iVar11 = (int)puVar4 - (int)puVar3;
        }
        else {
          if (iVar6 == 1) {
            pcVar16 = "ALKARAS";
            goto LAB_10002b9d;
          }
          if (iVar6 == 2) {
            pcVar16 = "BALASOTE";
            goto LAB_10002b9d;
          }
          if (iVar6 == 3) {
            pcVar16 = "SPAIN";
            goto LAB_10002b9d;
          }
          if (iVar6 == 4) {
            pcVar16 = "PORTUGAL";
            goto LAB_10002b9d;
          }
        }
        iVar11 = iVar11 + 10;
        sVar5 = FUN_10003b30((byte *)(iVar11 + (int)puVar3),&DAT_1000b66c);
        iVar10 = iVar6 * 0x14;
        strncpy((char *)(((unsigned char *)&DAT_1000ead0) + iVar6 * 5),(char *)(iVar11 + (int)puVar3),sVar5);
        iVar6 = iVar6 + 1;
        *(char *)((int)((unsigned char *)&DAT_1000ead0) + sVar5 + iVar10) = 0;
      } while (iVar6 < 5);
      FUN_10003a20((int *)puVar3);
    }
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    SetResource(0,0,5000);
    SetResource(0,3,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    iVar6 = GetDiff(0);
    SetResource(0,4,(5 - iVar6) * 1000);
    iVar6 = GetDiff(0);
    SetResource(0,5,(5 - iVar6) * 1000);
    SetResource(2,0,5000);
    SetResource(2,3,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    SetResource(3,0,5000);
    SetResource(3,3,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,4,5000);
    SetResource(3,5,5000);
    ChangeFriends(0,3);
    ChangeFriends(2,0xc);
    ChangeFriends(5,0x28);
    EnableUnit(0,&DAT_1000f2d0,0);
    EnableUnit(0,&DAT_1000ef40,0);
    EnableUnit(0,&DAT_1000f2e0,0);
    EnableUnit(0,&DAT_1000eb98,0);
    EnableUnit(0,&DAT_1000eb80,0);
    EnableUnit(0,&DAT_1000f6c8,0);
    EnableUnit(0,&DAT_1000f6a8,0);
    EnableUnit(0,&DAT_1000eab8,0);
    DisableUpgrade(0,&DAT_1000f310);
    DisableUpgrade(0,&DAT_1000f2c0);
    DisableUpgrade(0,&DAT_1000ef48);
    DisableUpgrade(0,&DAT_1000ef18);
    DisableUpgrade(0,&DAT_1000eb70);
    DisableUpgrade(0,&DAT_1000eb50);
    DisableUpgrade(0,&DAT_1000eac8);
    DisableUpgrade(0,&DAT_1000f320);
    DisableUpgrade(0,&DAT_1000f2c8);
    DisableUpgrade(0,&DAT_1000ef58);
    DisableUpgrade(0,&DAT_1000ef28);
    DisableUpgrade(0,&DAT_1000eba0);
    DisableUpgrade(0,&DAT_1000eb58);
    DisableUpgrade(0,&DAT_1000eb38);
    iVar6 = GetDiff(0);
    if (1 < iVar6) {
      DisableUpgrade(0,&DAT_1000f338);
      DisableUpgrade(0,&DAT_1000f330);
      iVar6 = GetDiff(0);
      if (iVar6 == 3) {
        DisableUpgrade(0,&DAT_1000eaa0);
        DisableUpgrade(0,&DAT_1000f308);
        DisableUpgrade(0,&DAT_1000ea98);
        DisableUpgrade(0,&DAT_1000f2f8);
      }
    }
    InitialUpgrade("GOrseraTrade","KUZ01SP");
    InitialUpgrade("GOrseraTrade","AKA04SP");
    uVar7 = GetDiff(0);
    StartAI(2,"ENGLAND.0",2,1,1,uVar7);
    uVar7 = GetDiff(0);
    StartAI(3,"FRANCE.0",2,1,1,uVar7);
    FUN_10001020(&DAT_1000e740,1,0,(char *)&DAT_1000ead0,&DAT_1000f2d8,1,1,"V14_3",
                 &DAT_1000ef60,0,0,0,0,3);
    FUN_10001020(&DAT_1000e3c8,1,1,(char *)&DAT_1000eae4,&DAT_1000eb68,1,1,"V14_3|V14_4",
                 &DAT_1000ef60,&DAT_1000eba8,0,0,0,5);
    FUN_10001020(&DAT_1000f340,1,2,(char *)&DAT_1000eaf8,&DAT_1000f6f8,1,1,"V14_4",
                 &DAT_1000eba8,0,0,0,0,3);
    FUN_10001020(&DAT_1000ef60,0,3,(char *)&DAT_1000eb0c,&DAT_1000f7a0,1,1,"V14_0|V14_1",
                 &DAT_1000e740,&DAT_1000e3c8,0,0,0,0);
    FUN_10001020(&DAT_1000eba8,0,4,(char *)&DAT_1000eb20,&DAT_1000f708,1,1,"V14_1|V14_2",
                 &DAT_1000e3c8,&DAT_1000f340,0,0,0,0);
    RunTimer(10,0x32);
    RunTimer(0xb,0x32);
    RunTimer(0xc,0x32);
    RunTimer(0xd,0x32);
    RunTimer(0xe,0x32);
    RunTimer(1,100);
    SetTrigg(3,0);
    SelectUnits(&DAT_1000ef30,0);
    SelOpenGates(0);
    ClearSelection(0);
    TakeStone(&DAT_1000ef00);
    iVar6 = GetDiff(0);
    if (0 < iVar6) {
      InitialUpgrade("Bashni","Bashnia_3(TU)PAUSE");
      InitialUpgrade("Bashni","Bashnia_3(TU)PAUSE3");
      DAT_1000b040 = DAT_1000b040 + -100;
    }
    iVar6 = GetDiff(0);
    if (1 < iVar6) {
      InitialUpgrade("Bashni","Bashnia_3(TU)PAUSE4");
      InitialUpgrade("Bashni","Bashnia_3(TU)PAUSE5");
      DAT_1000b040 = DAT_1000b040 + -200;
    }
    iVar6 = GetDiff(0);
    if (iVar6 == 3) {
      InitialUpgrade("Bashni","Bashnia_3(TU)PAUSE6");
      InitialUpgrade("Bashni","Bashnia_3(TU)PAUSE7");
      DAT_1000b040 = DAT_1000b040 + -200;
    }
    ShowPage("#PAGE23");
    EnableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x43);
  }
  SaveSelectedUnits(0,&DAT_1000f710,0);
  FUN_100037a0(&DAT_1000e730,&DAT_1000f2f0,0,&DAT_1000f6e0);
  FUN_100037a0(&DAT_1000e728,&DAT_1000f2f0,0,&DAT_1000f6e0);
  FUN_100037a0(&DAT_1000e720,&DAT_1000f2f0,0,&DAT_1000f6e0);
  FUN_100037a0(&DAT_1000e738,&DAT_1000f2f0,0,&DAT_1000f6e0);
  FUN_100037a0(&DAT_1000e730,&DAT_1000f2f0,0,&DAT_1000f698);
  FUN_100037a0(&DAT_1000e728,&DAT_1000f2f0,0,&DAT_1000f698);
  FUN_100037a0(&DAT_1000e720,&DAT_1000f2f0,0,&DAT_1000f698);
  FUN_100037a0(&DAT_1000e738,&DAT_1000f2f0,0,&DAT_1000f698);
  SelectUnits(&DAT_1000f710,0);
  FUN_10001200(&DAT_1000e740,&DAT_1000f2d8,"V14_3",&DAT_1000ef60,0,0,0,0);
  FUN_10001200(&DAT_1000e3c8,&DAT_1000eb68,"V14_3|V14_4",&DAT_1000ef60,&DAT_1000eba8,0,0,0)
  ;
  FUN_10001200(&DAT_1000f340,&DAT_1000f6f8,"V14_4",&DAT_1000eba8,0,0,0,0);
  FUN_10001200(&DAT_1000ef60,&DAT_1000f7a0,"V14_0|V14_1",&DAT_1000e740,&DAT_1000e3c8,0,0,0)
  ;
  FUN_10001200(&DAT_1000eba8,&DAT_1000f708,"V14_1|V14_2",&DAT_1000e3c8,&DAT_1000f340,0,0,0)
  ;
  FUN_10001250(0x1000e740);
  FUN_10001250(0x1000e3c8);
  FUN_10001250(0x1000f340);
  iVar6 = GetTotalAmount0(&DAT_1000eb48);
  uVar14 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000f2e8);
  uVar15 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000f6f0);
  FUN_10002180(&DAT_1000e740,iVar6,uVar15,uVar14);
  iVar6 = GetTotalAmount0(&DAT_1000f328);
  uVar15 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000f6e8);
  uVar14 = iVar6 < 3;
  iVar6 = GetTotalAmount0(&DAT_1000ef50);
  FUN_10002180(&DAT_1000e3c8,iVar6,uVar14,uVar15);
  iVar6 = GetTotalAmount0(&DAT_1000f318);
  uVar14 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000f6a0);
  uVar15 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000eac0);
  FUN_10002180(&DAT_1000f340,iVar6,uVar15,uVar14);
  iVar6 = GetTotalAmount0(&DAT_1000f720);
  FUN_10002180(&DAT_1000ef60,0,0,iVar6 == 1);
  iVar6 = GetTotalAmount0(&DAT_1000eb40);
  FUN_10002180(&DAT_1000eba8,0,0,iVar6 == 1);
  FUN_100015c0(&DAT_1000e740,0);
  FUN_100015c0(&DAT_1000e3c8,0);
  FUN_100015c0(&DAT_1000f340,0);
  cVar1 = TimerDone(10);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000e740), (char)uVar7 != '\0')) {
    RunTimer(10,100);
  }
  cVar1 = TimerDone(0xb);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000e3c8), (char)uVar7 != '\0')) {
    RunTimer(0xb,100);
  }
  cVar1 = TimerDone(0xc);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000f340), (char)uVar7 != '\0')) {
    RunTimer(0xc,100);
  }
  cVar1 = TimerDone(0xd);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000ef60), (char)uVar7 != '\0')) {
    RunTimer(0xd,100);
  }
  cVar1 = TimerDone(0xe);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000eba8), (char)uVar7 != '\0')) {
    RunTimer(0xe,100);
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE21");
    LooseGame();
  }
  cVar1 = NationIsErased(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE22");
    SetTrigg(4,0);
    SetTrigg(5,0);
    ShowVictory();
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE24");
    SetTrigg(4,0);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage("#PAGE25");
    SetTrigg(5,0);
  }
  iVar6 = GetTotalAmount0(&DAT_1000f7b0);
  if (iVar6 != 0) {
    cVar1 = TimerDone(1);
    if (cVar1 != '\0') {
      cVar1 = Trigg(3);
      if (((cVar1 == '\0') && (cVar1 = Trigg(2), cVar1 != '\0')) &&
         ((iVar6 = GetUnitsAmount0(&DAT_1000e3c0,0), iVar6 != 0 ||
          (iVar6 = GetUnitsAmount0(&DAT_1000e3b8,0), iVar6 != 0)))) {
        SetTrigg(2,0);
        cVar1 = AskQuestion("#PAGE550");
        if (cVar1 != '\0') {
          iVar6 = GetResource(0,1);
          if (iVar6 < 0x18704) {
            ShowPage("#PAGE552");
          }
          else {
            ChangeFriends(5,0x2a);
            ShowPage("#PAGE551");
            iVar6 = GetResource(0,1);
            SetResource(0,1,iVar6 + -100000);
            SetTrigg(3,0);
            iVar6 = GetDiff(0);
            RunTimer(1,iVar6 * -8000 + 50000);
          }
        }
      }
      cVar1 = Trigg(2);
      if (((cVar1 == '\0') && (iVar6 = GetUnitsAmount0(&DAT_1000e3c0,0), iVar6 == 0)) &&
         (iVar6 = GetUnitsAmount0(&DAT_1000e3b8,0), iVar6 == 0)) {
        SetTrigg(2,0);
      }
    }
    cVar1 = Trigg(3);
    if ((cVar1 != '\0') &&
       (((iVar6 = GetUnitsAmount0(&DAT_1000ef20,0), iVar6 != 0 ||
         (iVar6 = GetUnitsAmount0(&DAT_1000ef08,0), iVar6 != 0)) ||
        (iVar6 = GetUnitsAmount0(&DAT_1000ef10,0), iVar6 != 0)))) {
      ShowPage("#PAGE553");
      ChangeFriends(5,0x28);
      RunTimer(1,10);
      SetTrigg(3,0);
    }
  }
  cVar1 = Trigg(6);
  if (((cVar1 != '\0') && (iVar6 = GetTotalAmount0(&DAT_1000f7a8), iVar6 == 0)) &&
     (iVar6 = GetTotalAmount0(&DAT_1000f720), iVar6 != 0)) {
    SetTrigg(6,0);
    InitialUpgrade("GSpainTrade","AKA25SP");
    ShowPage("#PAGE554");
    iVar6 = GetDiff(0);
    if (iVar6 < 3) {
      InitialUpgrade("GSpainTrade","MAINSP");
      InitialUpgrade("GSpainTrade","MAINPO");
      ShowPage("#PAGE555");
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
