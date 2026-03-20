#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
int DAT_1000b050 = 1;
long long DAT_1000b054 = 0;
long long DAT_1000b058 = 0;
long long DAT_1000b05c = 0;
char DAT_1000b060[] = "@\xeb";
long long DAT_1000b598 = 0;
char DAT_1000b59c[] = "RESC";
char DAT_1000b5a4[] = "RESI";
char DAT_1000b5ac[] = "RESG";
char DAT_1000b5b4[] = "RESS";
char DAT_1000b5bc[] = "RESF";
char DAT_1000b5c4[] = "RESW";
char DAT_1000b5cc[] = "SITY";
char DAT_1000b5d4[] = "OSLO";
char DAT_1000b5f0[] = "COAL";
char DAT_1000b5f8[] = "IRON";
char DAT_1000b600[] = "GOLD";
char DAT_1000b610[] = "FOOD";
char DAT_1000b618[] = "WOOD";
long long DAT_1000b638 = 0;
long long DAT_1000e2d8 = 0;
long long DAT_1000e318 = 0;
long long DAT_1000e358 = 0;
long long DAT_1000e360 = 0;
long long DAT_1000e368 = 0;
long long DAT_1000e370 = 0;
long long DAT_1000e378 = 0;
long long DAT_1000e380 = 0;
long long DAT_1000e388 = 0;
long long DAT_1000e390 = 0;
long long DAT_1000e398 = 0;
long long DAT_1000e3a0 = 0;
long long DAT_1000e3a8 = 0;
long long DAT_1000e3b0 = 0;
long long DAT_1000e3b8 = 0;
long long DAT_1000e3c0 = 0;
long long DAT_1000e3c8 = 0;
unsigned char DAT_1000e3d0[120] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1000e3df = 0;
long long DAT_1000e3ee = 0;
long long DAT_1000e3fd = 0;
long long DAT_1000e410 = 0;
long long DAT_1000e418 = 0;
long long DAT_1000e420 = 0;
int DAT_1000e428 = 0;
long long DAT_1000e430 = 0;
long long DAT_1000e438 = 0;
long long DAT_1000e440 = 0;
long long DAT_1000e448 = 0;
long long DAT_1000e450 = 0;
long long DAT_1000e458 = 0;
long long DAT_1000e460 = 0;
long long DAT_1000e468 = 0;
long long DAT_1000e470 = 0;
long long DAT_1000e478 = 0;
long long DAT_1000e480 = 0;
long long DAT_1000e488 = 0;
long long DAT_1000e490 = 0;
long long DAT_1000e498 = 0;
long long DAT_1000e4a0 = 0;
int DAT_1000e74b = 0;
long long DAT_1000e7a0 = 0;
long long DAT_1000e7a8 = 0;
long long DAT_1000e7b0 = 0;
long long DAT_1000eab0 = 0;
long long DAT_1000eab8 = 0;
long long DAT_1000eac0 = 0;
long long DAT_1000eac8 = 0;
long long DAT_1000ead0 = 0;
long long DAT_1000ead8 = 0;
long long DAT_1000eae0 = 0;
long long DAT_1000eae8 = 0;
long long DAT_1000eaf0 = 0;
long long DAT_1000eaf8 = 0;
long long DAT_1000eb00 = 0;
long long DAT_1000eb08 = 0;
long long DAT_1000eb10 = 0;
long long DAT_1000eb18 = 0;
long long DAT_1000eb20 = 0;
long long DAT_1000eb28 = 0;
long long DAT_1000eb30 = 0;
long long DAT_1000eb38 = 0;
long long DAT_1000eb40 = 0;
int DAT_1000edeb = 0;
long long DAT_1000ee40 = 0;
long long DAT_1000ee48 = 0;
long long DAT_1000ee50 = 0;
long long DAT_1000ee58 = 0;
long long DAT_1000ee60 = 0;
long long DAT_1000ee68 = 0;
long long DAT_1000ee70 = 0;
long long DAT_1000ee78 = 0;
long long DAT_1000ee80 = 0;
long long DAT_1000f180 = 0;
long long DAT_1000f188 = 0;
long long DAT_1000f190 = 0;
long long DAT_1000f198 = 0;
long long DAT_1000f1a0 = 0;
long long DAT_1000f1a8 = 0;
long long DAT_1000f1b0 = 0;
long long DAT_1000f1b8 = 0;
long long DAT_1000f1c0 = 0;
long long DAT_1000f1c8 = 0;
long long DAT_1000f1d0 = 0;
long long DAT_1000f1d8 = 0;
unsigned char DAT_1000f1e0[800] = {0};
long long DAT_1000f1ef = 0;
long long DAT_1000f1fe = 0;
long long DAT_1000f20d = 0;
long long DAT_1000f21c = 0;
long long DAT_1000f22b = 0;
long long DAT_1000f240 = 0;
long long DAT_1000f248 = 0;
long long DAT_1000f250 = 0;
long long DAT_1000f258 = 0;
int DAT_1000f264 = 0;
int DAT_1000f265 = 0;
int DAT_1000f266 = 0;
long long DAT_1000f840 = 0;

/* Stubs for missing internal functions */
int FUN_100045c0() { return 0; }
int FUN_10004b8b() { return 0; }
int FUN_10004e08() { return 0; }
int FUN_10004e5a() { return 0; }
int FUN_10004fe5() { return 0; }
int FUN_100050ee() { return 0; }
int FUN_100051ca() { return 0; }
int FUN_10005410() { return 0; }
int FUN_100058f2() { return 0; }
int FUN_10005b14() { return 0; }
int FUN_10005bec() { return 0; }
int FUN_10005d5c() { return 0; }


/* Forward declarations */
void 
FUN_10001020(void *this_ptr,char param_1,int param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13);
void 
FUN_100011d0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void  FUN_10001220(int param_1);
void  FUN_10001240(int param_1);
void  FUN_100012f0(int param_1);
void  FUN_100013f0(int param_1);
int  FUN_100014d0(int param_1);
void  FUN_10001510(void *this_ptr,int param_1);
void  FUN_100015f0(int param_1);
int  FUN_10001690(int param_1);
int  FUN_100016c0(void *param_1);
void  FUN_10001710(void *param_1);
void  FUN_10001840(void *param_1);
void  FUN_10001980(void *this_ptr,int param_1);
unsigned int  FUN_10001ac0(void *param_1);
void  FUN_10001c10(void *this_ptr,int param_1);
void  FUN_10001c50(void *this_ptr,int param_1);
void  FUN_10001cb0(void *this_ptr,int param_1,void *param_2);
int  FUN_10001f10(void *this_ptr,int param_1);
int  FUN_10001f80(void *this_ptr,int param_1);
void  FUN_10001ff0(void *this_ptr,int param_1,int param_2);
void  FUN_100020a0(void *this_ptr,int param_1,char param_2,char param_3);
int FUN_100020d0(int param_1);
void 
FUN_100020f0(void *this_ptr,char *param_1,int param_2,int param_3,int param_4);
void 
FUN_10002160(void *this_ptr,char *param_1,int param_2,int param_3,int param_4);
void 
FUN_100021b0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void 
FUN_10002280(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void  FUN_100023d0(void *this_ptr,int param_1,int param_2);
void FUN_10003a10(int param_1,int param_2,int param_3);
void FUN_100043f0(int *param_1);
int FUN_10004500(byte *param_1,byte *param_2);
unsigned int * FUN_10004540(unsigned int *param_1,char *param_2);
unsigned int FUN_1000463d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
unsigned int FUN_1000466c(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
int FUN_10004762(char *param_1);
int FUN_10004784(char *param_1);
int FUN_100048e5(int *param_1,int param_2,DWORD param_3);
int FUN_10004911(int *param_1,int param_2,DWORD param_3);
int * FUN_1000499e(LPCSTR param_1,char *param_2,unsigned int param_3);
void FUN_100049cf(LPCSTR param_1,char *param_2);

void OnInit();
void ProcessScenary();


void 
FUN_10001020(void *this_ptr,char param_1,int param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(int *)((intptr_t)this_ptr + 0x2a7) = param_2;
  *(int *)((intptr_t)this_ptr + 0x28c) = param_10;
  *(int *)((intptr_t)this_ptr + 0x2ab) = param_4;
  *(int *)((intptr_t)this_ptr + 0x284) = param_8;
  *(int *)((intptr_t)this_ptr + 0x290) = param_11;
  *(int *)((intptr_t)this_ptr + 0x288) = param_9;
  *(int *)((intptr_t)this_ptr + 0x2f1) = param_13 * 0xf;
  *(int *)((intptr_t)this_ptr + 0x280) = param_7;
  *(int *)((intptr_t)this_ptr + 0x294) = param_12;
  *(char *)((intptr_t)this_ptr + 0x2e8) = (char)param_5;
  *(int *)((intptr_t)this_ptr + 0x2e9) = param_6;
  uVar2 = -1;
  *(char *)((intptr_t)this_ptr + 0x2f5) = 1;
  *(char *)((intptr_t)this_ptr + 0x2f6) = 1;
  *(int *)((intptr_t)this_ptr + 0x2fb) = 1;
  *(char *)((intptr_t)this_ptr + 0x2ff) = 1;
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
  pcVar5 = (char *)((intptr_t)this_ptr + 0x298);
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
  *(char *)((intptr_t)this_ptr + 0x2af) = param_1;
  *(int *)((intptr_t)this_ptr + 700) = 1000;
  *(int *)((intptr_t)this_ptr + 0x2cc) = 0;
  *(int *)((intptr_t)this_ptr + 0x2c8) = 0;
  *(int *)((intptr_t)this_ptr + 0x2c4) = 0;
  *(int *)((intptr_t)this_ptr + 0x2c0) = 0;
  *(int *)((intptr_t)this_ptr + 0x2b8) = 0;
  if (param_1 != '\0') {
    return;
  }
  if (((param_6 == 0) || (param_6 == 1)) || (param_6 == 2)) {
    RegisterDynGroup((intptr_t)this_ptr + 0x2b0);
    CreateObject0(&DAT_1000e7a8,&DAT_1000ee78,&DAT_1000e440,param_5,param_4,0);
    RemoveGroup(&DAT_1000e7a8,(intptr_t)this_ptr + 0x2b0);
  }
  if (param_6 == 0) {
    TakeWood((intptr_t)this_ptr + 0x2b0);
  }
  else if (param_6 != 1) {
    if (param_6 != 2) {
      *(int *)((intptr_t)this_ptr + 0x2ed) = 0xf;
      return;
    }
    goto LAB_100011a6;
  }
  TakeFood((intptr_t)this_ptr + 0x2b0);
LAB_100011a6:
  TakeStone((intptr_t)this_ptr + 0x2b0);
  *(int *)((intptr_t)this_ptr + 0x2ed) = 0xf;
  return;
}





void 
FUN_100011d0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((intptr_t)this_ptr + 0x284) = param_3;
  *(int *)((intptr_t)this_ptr + 0x288) = param_4;
  *(int *)((intptr_t)this_ptr + 0x28c) = param_5;
  *(int *)((intptr_t)this_ptr + 0x290) = param_6;
  *(int *)((intptr_t)this_ptr + 0x294) = param_7;
  *(int *)((intptr_t)this_ptr + 0x280) = param_2;
  *(int *)((intptr_t)this_ptr + 0x2ab) = param_1;
  return;
}





void  FUN_10001220(int param_1)

{
  if (*(char *)(param_1 + 0x2af) == '\0') {
    FUN_100012f0(param_1);
    FUN_100013f0(param_1);
  }
  return;
}





void  FUN_10001240(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 100;
  *(int *)(param_1 + 0x2e4) = 300;
  *(int *)(param_1 + 0x2e0) = 300;
  *(int *)(param_1 + 0x2d0) = 100;
  *(int *)(param_1 + 0x2d8) = 100;
  *(int *)(param_1 + 0x2d4) = 200;
  *(int *)(param_1 + 0x2dc) = 500;
  iVar2 = 0xc;
  do {
    if (iVar1 < *(int *)(param_1 + 0x2b8)) {
      *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 0x2c0)) {
      *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 700)) {
      *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + -0x10;
    }
    if (iVar1 < *(int *)(param_1 + 0x2c8)) {
      *(int *)(param_1 + 0x2e0) = *(int *)(param_1 + 0x2e0) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2cc)) {
      *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2c4)) {
      *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + -0x28;
    }
    iVar1 = iVar1 * 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}





void  FUN_100012f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100014d0(param_1);
  iVar2 = 0;
  *(int *)(param_1 + 0x2ed) = iVar1;
  if (0 < iVar1) {
    do {
      if (*(char *)(param_1 + 0x2f5) == '\0') break;
      if ((0 < *(int *)(param_1 + 0x2f7)) && (4 < *(int *)(param_1 + 700))) {
        switch(*(int *)(param_1 + 0x2e9)) {
        case 0:
          *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 0x19;
          break;
        case 1:
          *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 0x14;
          break;
        case 2:
          *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 0x19;
          break;
        case 3:
          *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 5;
          break;
        case 4:
          *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0xf;
          break;
        case 5:
          *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + 0xf;
        }
        *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + -5;
        *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + (3 - *(int *)(param_1 + 0x2fb)) * iVar1;
  AddResource(*(char *)(param_1 + 0x2e8) + -1,1,*(int *)(param_1 + 0x2fb) * iVar1);
  FUN_10001240(param_1);
  return;
}





void  FUN_100013f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2f7) < 0x3e9) {
    return;
  }
  iVar1 = FUN_100014d0(param_1);
  if (*(int *)(param_1 + 0x2f1) <= iVar1) {
    return;
  }
  iVar1 = FUN_100014d0(param_1);
  *(int *)(param_1 + 0x2ed) = iVar1;
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) goto LAB_100014af;
  CreateObject0(&DAT_1000e7a8,&DAT_1000e390,&DAT_1000e440,*(char *)(param_1 + 0x2e8),
                *(int *)(param_1 + 0x2ab),0);
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (iVar1 == 0) {
    TakeWood(&DAT_1000e7a8);
LAB_1000147e:
    TakeFood(&DAT_1000e7a8);
LAB_1000148c:
    TakeStone(&DAT_1000e7a8);
  }
  else {
    if (iVar1 == 1) goto LAB_1000147e;
    if (iVar1 == 2) goto LAB_1000148c;
  }
  RemoveGroup(&DAT_1000e7a8,param_1 + 0x2b0);
LAB_100014af:
  *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + -1000;
  *(int *)(param_1 + 0x2ed) = *(int *)(param_1 + 0x2ed) + 1;
  return;
}





int  FUN_100014d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    iVar1 = GetTotalAmount0(param_1 + 0x2b0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2ed);
    if (*(int *)(param_1 + 0x2f1) <= iVar1) {
      return *(int *)(param_1 + 0x2f1);
    }
  }
  return iVar1;
}





void  FUN_10001510(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  if ((*(char *)((intptr_t)this_ptr + 0x2af) == '\0') && (*(char *)((intptr_t)this_ptr + 0x2f6) != '\0')) {
    if ((*(char *)((intptr_t)this_ptr + 0x2ff) != '\0') &&
       (iVar1 = GetUnitsAmount2(*(int *)((intptr_t)this_ptr + 0x2ab),&DAT_1000ee50,param_1),
       iVar1 != 0)) {
      uVar2 = AskMultilineQuestion(9,"#PAGE1",0,"VI1_1|VI1_2|VI1_3|VI1_4");
      switch(uVar2) {
      case 0:
        FUN_100015f0((intptr_t)this_ptr);
        *(char *)((intptr_t)this_ptr + 0x2ff) = 1;
        break;
      case 1:
        uVar2 = FUN_10001690((intptr_t)this_ptr);
        *(char *)((intptr_t)this_ptr + 0x2ff) = (char)uVar2;
        break;
      case 2:
        uVar2 = FUN_100016c0(this_ptr);
        *(char *)((intptr_t)this_ptr + 0x2ff) = (char)uVar2;
        break;
      case 3:
        *(char *)((intptr_t)this_ptr + 0x2ff) = 0;
      }
    }
    if ((*(char *)((intptr_t)this_ptr + 0x2ff) == '\0') &&
       (iVar1 = GetUnitsAmount2(*(int *)((intptr_t)this_ptr + 0x2ab),&DAT_1000ee50,param_1),
       iVar1 == 0)) {
      *(char *)((intptr_t)this_ptr + 0x2ff) = 1;
    }
  }
  return;
}





void  FUN_100015f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100014d0(param_1);
  ShowPageParam("#PAGE11",param_1 + 0x298,
                (int)((unsigned char *)&DAT_1000f1e0) + *(int *)(param_1 + 0x2e9) * 0xf,&DAT_1000f1e0,
                *(int *)(param_1 + 0x2b8),&DAT_1000f1ef,*(int *)(param_1 + 700),
                &DAT_1000f1fe,*(int *)(param_1 + 0x2c0),&DAT_1000f20d,
                *(int *)(param_1 + 0x2c4),&DAT_1000f21c,*(int *)(param_1 + 0x2c8),
                &DAT_1000f22b,*(int *)(param_1 + 0x2cc),
                (3 - *(int *)(param_1 + 0x2fb)) * iVar1,*(int *)(param_1 + 0x2fb) * iVar1,iVar1,
                *(int *)(param_1 + 0x2f7),iVar1);
  return;
}





int  FUN_10001690(int param_1)

{
  int uVar1;
  
  uVar1 = AskMultilineQuestion(9,"#PAGE12",0,"TPW1_0|TPW1_1|TPW1_2|TPW1_3");
  *(int *)(param_1 + 0x2fb) = uVar1;
  return (int)1;
}





int  FUN_100016c0(void *param_1)

{
  int iVar1;
  
  do {
    while( 1 ) {
      while (iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_1|TR1_3|TR1_4"),
            iVar1 == 0) {
        FUN_10001710(param_1);
      }
      if (iVar1 != 1) break;
      FUN_10001840(param_1);
    }
  } while (iVar1 != 2);
  return 1;
}





void  FUN_10001710(void *param_1)

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
  FUN_10001240((intptr_t)param_1);
  iVar2 = FUN_10001f80(param_1,pvVar5);
  iVar3 = FUN_10001f80(param_1,pvVar4);
  ShowPageParam("#PAGE131",(int)((unsigned char *)&DAT_1000f1e0) + (int)pvVar5 * 0xf,100,
                (int)((unsigned char *)&DAT_1000f1e0) + (int)pvVar4 * 0xf,(iVar2 * 100) / iVar3);
  return;
}





void  FUN_10001840(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = AskMultilineQuestion(9,"#PAGE133",0,"NO1_1|NO1_2|NO1_3|NO1_4|NO1_5|NO1_6|NO1_7|NO1_8|NO1_9|NO1_10");
  iVar2 = AskMultilineQuestion(9,"#PAGE1331",0,"OD1_0|OD1_1|OD1_2");
  if (iVar2 == 0) {
    pvVar3 = (void *)(iVar1 * 0x40 + (intptr_t)param_1);
    iVar1 = GetTotalAmount0(pvVar3);
    if (iVar1 != 0) {
      iVar1 = (int)((unsigned char *)&DAT_1000f1e0) + *(int *)((int)pvVar3 + 0x11) * 0xf;
      iVar2 = (int)((unsigned char *)&DAT_1000f1e0) + *(int *)((int)pvVar3 + 9) * 0xf;
      ShowPageParam("#PAGE7",(int)pvVar3 + 0x29,iVar2,iVar1,iVar2,
                    *(int *)((int)pvVar3 + 0xd),iVar1,*(int *)((int)pvVar3 + 0x15));
      return;
    }
    ShowPage("#PAGE8");
  }
  else {
    if (iVar2 == 1) {
      pvVar3 = (void *)(iVar1 * 0x40 + (intptr_t)param_1);
      iVar2 = GetTotalAmount0(pvVar3);
      if (iVar2 == 0) {
        FUN_100020f0(pvVar3,(char *)((intptr_t)param_1 + 0x298),*(int *)((intptr_t)param_1 + 0x2a7),
                     (unsigned int)*(byte *)((intptr_t)param_1 + 0x2e8),*(int *)((intptr_t)param_1 + 0x2ab));
      }
      FUN_10001980(param_1,iVar1);
      return;
    }
    if (iVar2 == 2) {
      pvVar3 = (void *)(iVar1 * 0x40 + (intptr_t)param_1);
      iVar1 = GetTotalAmount0(pvVar3);
      if (iVar1 != 0) {
        SelectUnits(pvVar3,0);
        SelDie(*(char *)((int)pvVar3 + 8));
        ShowPage("#PAGE3");
        return;
      }
      ShowPage("#PAGE2");
      return;
    }
  }
  return;
}





void  FUN_10001980(void *this_ptr,int param_1)

{
  void *this_00;
  int iVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = AskMultilineQuestion(9,"#PAGE4",0,*(int *)((intptr_t)this_ptr + 0x280));
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
  iVar1 = *(int *)((intptr_t)this_ptr + iVar1 * 4 + 0x284);
  this_00 = (void *)(param_1 * 0x40 + (intptr_t)this_ptr);
  FUN_10002160(this_00,(char *)(iVar1 + 0x298),*(int *)(iVar1 + 0x2a7),iVar4,iVar3);
  SelectUnits(this_00,0);
  SelSendTo(*(char *)((int)this_00 + 8),*(int *)((intptr_t)this_ptr + 0x2ab),0,0);
  *(char *)((int)this_00 + 0x19) = 0;
  return;
}





unsigned int  FUN_10001ac0(void *param_1)

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
  uVar1 = (int)*(char *)((intptr_t)param_1 + 0x2f6);
  if (*(char *)((intptr_t)param_1 + 0x2f6) != '\0') {
    iVar2 = GetUnitsAmount2(*(int *)((intptr_t)param_1 + 0x2ab),&DAT_1000eab8,
                            (int)*(char *)((intptr_t)param_1 + 0x2e8));
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = 0;
      pvVar7 = param_1;
      do {
        if (*(char *)((int)pvVar7 + 0x19) == '\0') {
          iVar3 = GetUnitsAmount1(*(int *)((intptr_t)param_1 + 0x2ab),pvVar7);
          if (iVar3 != 0) {
            pvVar7 = (void *)(iVar2 * 0x40 + (intptr_t)param_1);
            *(char *)((int)pvVar7 + 0x19) = 1;
            FUN_10001c10(param_1,(int)pvVar7);
            FUN_10001c50(param_1,(int)pvVar7);
            FUN_10003a10((int)pvVar7,*(int *)((int)pvVar7 + 0x38),
                                 *(int *)((int)pvVar7 + 0x3c));
            return (int)1;
          }
        }
        iVar2 = iVar2 + 1;
        pvVar7 = (void *)((int)pvVar7 + 0x40);
      } while (iVar2 < 10);
      uStack_4 = 0;
      piVar8 = (int *)((intptr_t)param_1 + 0x284);
      do {
        if (*piVar8 != 0) {
          iVar2 = 0;
          iVar3 = 0;
          do {
            if (*(char *)(iVar3 + 0x19 + *piVar8) != '\0') {
              iVar4 = GetUnitsAmount1(*(int *)((intptr_t)param_1 + 0x2ab),iVar3 + *piVar8);
              if (iVar4 != 0) {
                iVar2 = iVar2 * 0x40;
                *(char *)(*(int *)((intptr_t)param_1 + uStack_4 * 4 + 0x284) + 0x19 + iVar2) = 0;
                pvVar7 = *(void **)((intptr_t)param_1 + uStack_4 * 4 + 0x284);
                FUN_10001cb0(param_1,(int)(iVar2 + (int)pvVar7),pvVar7);
                iVar2 = *(int *)((intptr_t)param_1 + uStack_4 * 4 + 0x284) + iVar2;
                FUN_10003a10(iVar2,*(int *)(iVar2 + 0x3c),*(int *)(iVar2 + 0x38));
                return (int)1;
              }
            }
            iVar3 = iVar3 + 0x40;
            iVar2 = iVar2 + 1;
          } while (iVar3 < 0x280);
        }
        piVar8 = piVar8 + 1;
        uStack_4 = uStack_4 + 1;
      } while ((int)uStack_4 < 5);
      return uStack_4 & -256;
    }
  }
  return uVar1 & -256;
}





void  FUN_10001c10(void *this_ptr,int param_1)

{
  FUN_10001ff0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
  FUN_10001ff0(this_ptr,*(int *)(param_1 + 0x11),*(int *)(param_1 + 0x15));
  *(int *)(param_1 + 0x15) = 0;
  *(int *)(param_1 + 0xd) = 0;
  return;
}





void  FUN_10001c50(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = FUN_10001f10(this_ptr,*(int *)(param_1 + 9));
  if (299 < iVar1) {
    *(int *)(param_1 + 0xd) = 300;
    FUN_10001ff0(this_ptr,*(int *)(param_1 + 9),-300);
    return;
  }
  uVar2 = FUN_10001f10(this_ptr,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = uVar2;
  iVar1 = FUN_10001f10(this_ptr,*(int *)(param_1 + 9));
  FUN_10001ff0(this_ptr,*(int *)(param_1 + 9),-iVar1);
  return;
}





void  FUN_10001cb0(void *this_ptr,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  if (*(char *)((intptr_t)this_ptr + 0x2af) == '\0') {
    iVar1 = FUN_10001f80(this_ptr,*(int *)(param_1 + 9));
    iVar1 = iVar1 * *(int *)(param_1 + 0xd);
    iVar2 = FUN_10001f80(this_ptr,*(int *)(param_1 + 0x11));
    iVar3 = FUN_10001f10(this_ptr,*(int *)(param_1 + 0x11));
    iVar2 = iVar2 * iVar3;
    if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
      FUN_10001ff0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
      *(int *)(param_1 + 0xd) = 0;
      iVar2 = FUN_10001f80(this_ptr,*(int *)(param_1 + 0x11));
      *(int *)(param_1 + 0x15) = iVar1 / iVar2;
      FUN_10001ff0(this_ptr,*(int *)(param_1 + 0x11),-(iVar1 / iVar2));
      return;
    }
    uVar4 = FUN_10001f10(this_ptr,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = uVar4;
    iVar1 = FUN_10001f10(this_ptr,*(int *)(param_1 + 0x11));
    FUN_10001ff0(this_ptr,*(int *)(param_1 + 0x11),-iVar1);
    iVar1 = FUN_10001f80(this_ptr,*(int *)(param_1 + 9));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar2 / iVar1;
    iVar1 = FUN_10001f80(this_ptr,*(int *)(param_1 + 9));
    FUN_10001ff0(this_ptr,*(int *)(param_1 + 9),iVar2 / iVar1);
    return;
  }
  iVar1 = FUN_10001f80(param_2,*(int *)(param_1 + 9));
  iVar1 = iVar1 * *(int *)(param_1 + 0xd);
  iVar2 = FUN_100020d0(*(int *)(param_1 + 0x11));
  iVar3 = GetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar2);
  iVar2 = FUN_10001f80(param_2,*(int *)(param_1 + 0x11));
  iVar3 = iVar3 * iVar2;
  if (iVar1 <= iVar3) {
    uVar4 = *(int *)(param_1 + 0xd);
    iVar2 = FUN_100020d0(*(int *)(param_1 + 9));
    AddResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar2,uVar4);
    *(int *)(param_1 + 0xd) = 0;
    iVar2 = FUN_10001f80(param_2,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = iVar1 / iVar2;
    iVar1 = FUN_100020d0(*(int *)(param_1 + 0x11));
    iVar1 = GetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar1);
    iVar1 = iVar1 - *(int *)(param_1 + 0x15);
    iVar2 = FUN_100020d0(*(int *)(param_1 + 0x11));
    SetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar2,iVar1);
    return;
  }
  iVar1 = FUN_100020d0(*(int *)(param_1 + 0x11));
  uVar4 = GetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar1);
  *(int *)(param_1 + 0x15) = uVar4;
  uVar4 = 0;
  iVar1 = FUN_100020d0(*(int *)(param_1 + 0x11));
  SetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar1,uVar4);
  iVar1 = FUN_10001f80(param_2,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar3 / iVar1;
  iVar1 = FUN_10001f80(param_2,*(int *)(param_1 + 9));
  iVar3 = iVar3 / iVar1;
  iVar1 = FUN_100020d0(*(int *)(param_1 + 9));
  AddResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar1,iVar3);
  return;
}





int  FUN_10001f10(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((intptr_t)this_ptr + 0x2b8);
  case 1:
    return *(int *)((intptr_t)this_ptr + 700);
  case 2:
    return *(int *)((intptr_t)this_ptr + 0x2c0);
  case 3:
    return *(int *)((intptr_t)this_ptr + 0x2c4);
  case 4:
    return *(int *)((intptr_t)this_ptr + 0x2c8);
  case 5:
    return *(int *)((intptr_t)this_ptr + 0x2cc);
  default:
    return 0;
  }
}





int  FUN_10001f80(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((intptr_t)this_ptr + 0x2d0);
  case 1:
    return *(int *)((intptr_t)this_ptr + 0x2d4);
  case 2:
    return *(int *)((intptr_t)this_ptr + 0x2d8);
  case 3:
    return *(int *)((intptr_t)this_ptr + 0x2dc);
  case 4:
    return *(int *)((intptr_t)this_ptr + 0x2e0);
  case 5:
    return *(int *)((intptr_t)this_ptr + 0x2e4);
  default:
    return 0;
  }
}





void  FUN_10001ff0(void *this_ptr,int param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((intptr_t)this_ptr + 0x2b8) = *(int *)((intptr_t)this_ptr + 0x2b8) + param_2;
    return;
  case 1:
    *(int *)((intptr_t)this_ptr + 700) = *(int *)((intptr_t)this_ptr + 700) + param_2;
    return;
  case 2:
    *(int *)((intptr_t)this_ptr + 0x2c0) = *(int *)((intptr_t)this_ptr + 0x2c0) + param_2;
    return;
  case 3:
    *(int *)((intptr_t)this_ptr + 0x2c4) = *(int *)((intptr_t)this_ptr + 0x2c4) + param_2;
    return;
  case 4:
    *(int *)((intptr_t)this_ptr + 0x2c8) = *(int *)((intptr_t)this_ptr + 0x2c8) + param_2;
    return;
  case 5:
    *(int *)((intptr_t)this_ptr + 0x2cc) = *(int *)((intptr_t)this_ptr + 0x2cc) + param_2;
  }
  return;
}





void  FUN_100020a0(void *this_ptr,int param_1,char param_2,char param_3)

{
  *(char *)((intptr_t)this_ptr + 0x2f5) = param_2;
  *(int *)((intptr_t)this_ptr + 0x2f1) = param_1 * 0xf;
  *(char *)((intptr_t)this_ptr + 0x2f6) = param_3;
  return;
}





int FUN_100020d0(int param_1)

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
FUN_100020f0(void *this_ptr,char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  CreateObject0(this_ptr,&DAT_1000e390,&DAT_1000eab8,param_3,param_4,0);
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
  pcVar5 = (char *)((intptr_t)this_ptr + 0x1a);
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
  *(int *)((intptr_t)this_ptr + 0x38) = param_2;
  *(char *)((intptr_t)this_ptr + 8) = (char)param_3;
  *(char *)((intptr_t)this_ptr + 0x19) = 0;
  *(int *)((intptr_t)this_ptr + 0x15) = 0;
  *(int *)((intptr_t)this_ptr + 0xd) = 0;
  return;
}





void 
FUN_10002160(void *this_ptr,char *param_1,int param_2,int param_3,int param_4)

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
  pcVar5 = (char *)((intptr_t)this_ptr + 0x29);
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
  *(char *)((intptr_t)this_ptr + 0x19) = 0;
  *(int *)((intptr_t)this_ptr + 0x3c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x15) = 0;
  *(int *)((intptr_t)this_ptr + 0xd) = 0;
  *(int *)((intptr_t)this_ptr + 9) = param_3;
  *(int *)((intptr_t)this_ptr + 0x11) = param_4;
  return;
}





void 
FUN_100021b0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((intptr_t)this_ptr + 8) = param_5;
  *(int *)this_ptr = param_4;
  *(int *)((intptr_t)this_ptr + 4) = 0;
  *(int *)((intptr_t)this_ptr + 0xc) = param_6;
  *(int *)((intptr_t)this_ptr + 0x10) = param_7;
  *(char *)((intptr_t)this_ptr + 0x14) = 0;
  CreateObject0(&DAT_1000e7a8,&DAT_1000e390,&DAT_1000ee68,param_4,param_1,0);
  RemoveGroup(&DAT_1000e7a8,(intptr_t)this_ptr + 0x15);
  CreateObject0(&DAT_1000e7a8,&DAT_1000e390,&DAT_1000ee68,param_4,param_2,0);
  RemoveGroup(&DAT_1000e7a8,(intptr_t)this_ptr + 0x1d);
  CreateObject0(&DAT_1000e7a8,&DAT_1000e390,&DAT_1000ee68,param_4,param_3,0);
  RemoveGroup(&DAT_1000e7a8,(intptr_t)this_ptr + 0x25);
  RunTimer(*(char *)((intptr_t)this_ptr + 0xc),10);
  RunTimer(*(char *)((intptr_t)this_ptr + 0x10),param_5);
  return;
}





void 
FUN_10002280(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(char *)((intptr_t)this_ptr + 0xc));
  if ((cVar1 != '\0') && (*(int *)((intptr_t)this_ptr + 4) != 0)) {
    RunTimer(*(char *)((intptr_t)this_ptr + 0xc),0x14);
    *(int *)((intptr_t)this_ptr + 4) = *(int *)((intptr_t)this_ptr + 4) + -1;
    iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x15);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000e7a8,&DAT_1000e390,&DAT_1000e488,*(char *)this_ptr,param_1,0);
      SelectUnits(&DAT_1000e7a8,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_1000e7a8,(intptr_t)this_ptr + 0x2d);
    }
    iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x1d);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000e7a8,&DAT_1000e390,&DAT_1000e488,*(char *)this_ptr,param_2,0);
      SelectUnits(&DAT_1000e7a8,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_1000e7a8,(intptr_t)this_ptr + 0x2d);
    }
    iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x25);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000e7a8,&DAT_1000e390,&DAT_1000e430,*(char *)this_ptr,param_3,0);
      SelectUnits(&DAT_1000e7a8,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_1000e7a8,(intptr_t)this_ptr + 0x35);
    }
  }
  return;
}





void  FUN_100023d0(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(char *)((intptr_t)this_ptr + 0x10));
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x2d);
    if (iVar2 < 0x33) {
      iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x35);
      if (iVar2 < 0x15) {
        *(int *)((intptr_t)this_ptr + 4) = param_1;
        *(char *)((intptr_t)this_ptr + 0x14) = 1;
        SelectUnits((intptr_t)this_ptr + 0x2d,0);
        SelectUnits((intptr_t)this_ptr + 0x35,1);
        SelSendAndKill(*(char *)this_ptr,param_2,0,0);
        RunTimer(*(char *)((intptr_t)this_ptr + 0x10),*(int *)((intptr_t)this_ptr + 8));
      }
    }
  }
  return;
}





void __cdecl FUN_10003a10(int param_1,int param_2,int param_3)

{
  int *puVar1;
  int uVar2;
  
  SelectUnits(param_1,0);
  switch(param_2) {
  case 0:
    if (param_3 == 2) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1b0,0x70,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1b8,0x70,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c0,0x60,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1a8,0x80,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1a0,0x80,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f198,0x80,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f190,0x60,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f188,0x70,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f180,0x60,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a0,0x60,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a8,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b0,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b8,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3c0,0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e378,0x10,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e380,0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e388,0x10,2);
      uVar2 = 0x3c;
      puVar1 = 0;
      goto LAB_10004237;
    }
    if (param_3 != 3) goto switchD_10003a33_caseD_1;
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1b0,0x70,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1b8,0x70,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c0,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c8,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1d0,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1d8,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb00,0xe0,2);
    uVar2 = 0x3c;
    goto LAB_100043b9;
  case 1:
switchD_10003a33_caseD_1:
    if (param_3 == 2) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000eaf8,0x50,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000eaf0,0x70,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000eae8,0x60,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000eae0,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000ead8,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a0,0x60,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a8,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b0,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b8,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3c0,0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e378,0x10,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e380,0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000e388,0x10,2);
      uVar2 = 0x3c;
      puVar1 = 0;
      goto LAB_10004118;
    }
    if (param_3 == 3) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb18,0xf0,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb10,0xfa,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb08,0xf0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb00,0xe0,2);
      SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0x3c,2);
      return;
    }
    break;
  case 2:
    goto switchD_10003a33_caseD_2;
  case 3:
    break;
  default:
    goto switchD_10003a33_default;
  }
  if (param_3 == 0) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb00,0x60,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1d8,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1d0,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c8,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c0,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1b8,0xf0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1b0,0xfa,2);
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0xa0,2);
    return;
  }
  if (param_3 == 1) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb00,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb08,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb10,0x78,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb18,0x60,2);
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0,2);
    return;
  }
  if (param_3 == 2) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb00,0x60,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1d8,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1d0,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c8,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c0,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1a8,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1a0,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f198,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f190,0x60,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f188,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f180,0x70,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a0,0x60,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a8,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b0,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b8,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3c0,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e378,0x10,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e380,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e388,0x10,2);
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0xa0,2);
    return;
  }
switchD_10003a33_caseD_2:
  if (param_3 == 0) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e388,0x90,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e380,0x90,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e378,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3c0,0xa0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b8,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b0,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a8,0xd0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a0,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f180,0xf0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f188,0xf0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f190,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f198,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1a0,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1a8,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c0,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1b8,0xf0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1b0,0xf0,2);
    uVar2 = 0xa0;
    puVar1 = 0;
LAB_10004118:
    SelSendTo(*(char *)(param_1 + 8),*(int *)(puVar1 + 0x2ab),uVar2,2);
    return;
  }
  if (param_3 == 1) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e388,0x90,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e380,0x90,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e378,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3c0,0xa0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b8,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b0,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a8,0xd0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a0,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000ead8,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eae0,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eae8,0xf0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eaf0,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eaf8,0xb0,2);
    uVar2 = 0;
    puVar1 = 0;
LAB_10004237:
    SelSendTo(*(char *)(param_1 + 8),*(int *)(puVar1 + 0x2ab),uVar2,2);
    return;
  }
  if (param_3 == 3) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e388,0x90,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e380,0x90,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e378,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3c0,0xa0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b8,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3b0,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a8,0xd0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000e3a0,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f180,0xf0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f188,0xf0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f190,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f198,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1a0,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1a8,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c0,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1c8,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1d0,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f1d8,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000eb00,0xe0,2);
    uVar2 = 0xa0;
LAB_100043b9:
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),uVar2,2);
  }
switchD_10003a33_default:
  return;
}





void __cdecl FUN_100043f0(int *param_1)

{
  FUN_10004b8b(param_1);
  return;
}





int __cdecl FUN_10004500(byte *param_1,byte *param_2)

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





unsigned int * __cdecl FUN_10004540(unsigned int *param_1,char *param_2)

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





unsigned int __cdecl FUN_1000463d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned int uVar1;
  
  FUN_10004e08((unsigned int)param_4);
  uVar1 = FUN_1000466c(param_1,param_2,param_3,param_4);
  FUN_10004e5a((unsigned int)param_4);
  return uVar1;
}





unsigned int __cdecl FUN_1000466c(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

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
          uVar4 = FUN_100050ee(piVar1);
          if (uVar4 == -1) goto LAB_10004748;
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
          iVar3 = FUN_100051ca(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_10004748:
            return (unsigned int)((int)pcVar6 - (intptr_t)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10004748;
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
        FUN_10005410((int *)pcVar5,(int *)*piVar1,(unsigned int)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}





int __cdecl FUN_10004762(char *param_1)

{
  int iVar1;
  
  FUN_10004e08((unsigned int)param_1);
  iVar1 = FUN_10004784(param_1);
  FUN_10004e5a((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10004784(char *param_1)

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
  local_8 = FUN_10005b14(uVar1,0,1);
  if ((intptr_t)local_8 < 0) {
LAB_10004812:
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
        pDVar4 = FUN_100058f2();
        *pDVar4 = 0x16;
        goto LAB_10004812;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)(((long long *)&DAT_1000f840)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
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
          if ((*(byte *)(iVar10 + 4 + ((long long *)&DAT_1000f840)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_10005b14(uVar1,0,2);
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
              FUN_10005b14(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(unsigned int *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(unsigned int *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + ((long long *)&DAT_1000f840)[(int)uVar1 >> 5]) & 4;
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





int __cdecl FUN_100048e5(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10004e08((unsigned int)param_1);
  iVar1 = FUN_10004911(param_1,param_2,param_3);
  FUN_10004e5a((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10004911(int *param_1,int param_2,DWORD param_3)

{
  unsigned int uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_100058f2();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & -17;
    if (param_3 == 1) {
      iVar2 = FUN_10004784((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10004fe5(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & -4;
    }
    DVar3 = FUN_10005b14(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != -1) - 1;
  }
  return iVar2;
}





int * __cdecl FUN_1000499e(LPCSTR param_1,char *param_2,unsigned int param_3)

{
  int *puVar1;
  int *puVar2;
  
  puVar1 = FUN_10005d5c();
  if (puVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = FUN_10005bec(param_1,param_2,param_3,puVar1);
  FUN_10004e5a((unsigned int)puVar1);
  return puVar2;
}





void __cdecl FUN_100049cf(LPCSTR param_1,char *param_2)

{
  FUN_1000499e(param_1,param_2,0x40);
  return;
}





void OnInit(void)

{
                    
  RegisterFormation(&DAT_1000e390,"#ALONE");
  RegisterFormation(&DAT_1000ee78,"#LINE15PUS");
  RegisterUnitType(&DAT_1000eab8,"GRUZ(UN)");
  RegisterUnitType(&DAT_1000e440,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_1000ee50,"Gusar_evro(en)");
  RegisterUnitType(&DAT_1000ee68,"URTA(UN)");
  RegisterUnitType(&DAT_1000e488,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_1000e430,"Strelec_Algir(AL)");
  RegisterDynGroup(&DAT_1000e7a8);
  RegisterVar(&DAT_1000e7a8,8);
  RegisterVar(&DAT_1000b050,1);
  RegisterVar(&DAT_1000f264,1);
  RegisterVar(&DAT_1000f265,1);
  RegisterVar(&DAT_1000e4a0,0x300);
  RegisterZone(&DAT_1000e398,"ZVarshava");
  RegisterUnits(&DAT_1000e358,"GVarshavaLive");
  RegisterUnits(&DAT_1000eac0,"GVarshavaProduce");
  RegisterUnits(&DAT_1000f248,"GVarshavaTrade");
  RegisterZone(&DAT_1000eab0,"ZVarshavaTolk");
  RegisterZone(&DAT_1000f1b0,"ZVRazv1");
  RegisterZone(&DAT_1000f1b8,"ZVRazv2");
  RegisterZone(&DAT_1000f1c0,"ZVRazv3");
  RegisterZone(&DAT_1000f1c8,"ZVRazv4");
  RegisterZone(&DAT_1000f1d0,"ZVRazv5");
  RegisterZone(&DAT_1000f1d8,"ZVRazv6");
  DAT_1000e74b = &DAT_1000e398;
  RegisterVar(&DAT_1000ee80,0x300);
  RegisterZone(&DAT_1000e438,"ZGonover");
  RegisterUnits(&DAT_1000e410,"GGonoverLive");
  RegisterUnits(&DAT_1000e3c8,"GGonoverProduce");
  RegisterUnits(&DAT_1000e418,"GGonoverTrade");
  RegisterZone(&DAT_1000e420,"ZGonoverTolk");
  RegisterZone(&DAT_1000eb18,"ZGRazv1");
  RegisterZone(&DAT_1000eb10,"ZGRazv2");
  RegisterZone(&DAT_1000eb08,"ZGRazv3");
  RegisterZone(&DAT_1000eb00,"ZGRazv4");
  DAT_1000e74b = &DAT_1000e398;
  RegisterVar(&DAT_1000e7b0,0x300);
  RegisterZone(&DAT_1000e448,"ZOslo");
  RegisterUnits(&DAT_1000f258,"GOsloLive");
  RegisterUnits(&DAT_1000e370,"GOsloProduce");
  RegisterUnits(&DAT_1000e7a0,"GOsloTrade");
  RegisterZone(&DAT_1000f240,"ZOsloTolk");
  RegisterZone(&DAT_1000e388,"ZORazv1");
  RegisterZone(&DAT_1000e380,"ZORazv2");
  RegisterZone(&DAT_1000e378,"ZORazv3");
  RegisterZone(&DAT_1000e3c0,"ZORazv4");
  RegisterZone(&DAT_1000e3b8,"ZORazv5");
  RegisterZone(&DAT_1000e3b0,"ZORazv6");
  RegisterZone(&DAT_1000e3a8,"ZORazv7");
  RegisterZone(&DAT_1000e3a0,"ZORazv8");
  RegisterZone(&DAT_1000f180,"ZOVRazv1");
  RegisterZone(&DAT_1000f188,"ZOVRazv2");
  RegisterZone(&DAT_1000f190,"ZOVRazv3");
  RegisterZone(&DAT_1000f198,"ZOVRazv4");
  RegisterZone(&DAT_1000f1a0,"ZOVRazv5");
  RegisterZone(&DAT_1000f1a8,"ZOVRazv6");
  RegisterZone(&DAT_1000ead8,"ZOGRazv1");
  RegisterZone(&DAT_1000eae0,"ZOGRazv2");
  RegisterZone(&DAT_1000eae8,"ZOGRazv3");
  RegisterZone(&DAT_1000eaf0,"ZOGRazv4");
  RegisterZone(&DAT_1000eaf8,"ZOGRazv5");
  DAT_1000e74b = &DAT_1000e398;
  RegisterVar(&DAT_1000eb40,0x300);
  RegisterZone(&DAT_1000eac8,"ZSity");
  DAT_1000edeb = &DAT_1000eac8;
  RegisterVar(((int*)0),0x10);
  RegisterVar(&DAT_1000e318,0x3d);
  RegisterZone(&DAT_1000eb30,"ZLagVT1");
  RegisterZone(&DAT_1000eb28,"ZLagVT2");
  RegisterZone(&DAT_1000eb20,"ZLagVT3");
  RegisterZone(&DAT_1000ee48,"ZLagVU1");
  RegisterZone(&DAT_1000ee40,"ZLagVU2");
  RegisterZone(&DAT_1000eb38,"ZLagVU3");
  RegisterZone(&DAT_1000e498,"ZVSbor");
  RegisterVar(&DAT_1000e2d8,0x3d);
  RegisterZone(&DAT_1000e480,"ZLagGT1");
  RegisterZone(&DAT_1000e478,"ZLagGT2");
  RegisterZone(&DAT_1000e470,"ZLagGT3");
  RegisterZone(&DAT_1000e468,"ZLagGU1");
  RegisterZone(&DAT_1000e460,"ZLagGU2");
  RegisterZone(&DAT_1000e458,"ZLagGU3");
  RegisterZone(&DAT_1000e490,"ZGSbor");
  RegisterZone(&DAT_1000e360,"ZPolitika");
  RegisterUnits(&DAT_1000ee70,"GPolCen");
  RegisterDynGroup(&DAT_1000ead0);
  RegisterVar(&DAT_1000ead0,8);
  RegisterVar(&DAT_1000e428,4);
  RegisterUnitType(&DAT_1000ee58,"WALL_UKR(en)");
  RegisterUnitType(&DAT_1000f250,"WALL_EV(en)");
  RegisterUpgrade(&DAT_1000e368,"AKA24EN");
  RegisterUpgrade(&DAT_1000e450,"AKA23EN");
  RegisterUpgrade(&DAT_1000ee60,"AKA08EN");
  SetPlayerName(1,"VILLAGE");
  SetPlayerName(2,"AUSTRIA");
  SetPlayerName(3,"SVEDEN");
  SetPlayerName(4,"VILLAGE");
  SetPlayerName(5,"ROBBERS");
  return;
}





void ProcessScenary(void)

{
  int iVar1;
  char cVar2;
  FILE *pFVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  size_t sVar6;
  int iVar7;
  int uVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  void *pcVar12;
  char *pcVar13;
  char uVar14;
  char uVar15;
  int *puVar16;
  int uVar17;
  char *pcVar18;
  unsigned int auStack_2c [11];
  
                    
  if (DAT_1000f266 == '\0') {
    DAT_1000f266 = '\x01';
    FUN_100049cf("Missions//miss_vic.txt",&DAT_1000b638);
    if (pFVar3 == (FILE *)0x0) {
      uVar10 = -1;
      pcVar18 = DAT_1000b618;
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000f1e0;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar10 = -1;
      pcVar18 = DAT_1000b610;
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000f1ef;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar10 = -1;
      pcVar18 = "STONE";
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000f1fe;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar10 = -1;
      pcVar18 = DAT_1000b600;
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000f20d;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar10 = -1;
      pcVar18 = DAT_1000b5f8;
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000f21c;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar10 = -1;
      pcVar18 = DAT_1000b5f0;
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000f22b;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar10 = -1;
      pcVar18 = "VARSHAVA";
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000e3d0;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar10 = -1;
      pcVar18 = "GANOVER";
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000e3df;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar10 = -1;
      pcVar18 = DAT_1000b5d4;
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000e3ee;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar10 = -1;
      pcVar18 = DAT_1000b5cc;
      do {
        pcVar13 = pcVar18;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar18 + 1;
        cVar2 = *pcVar18;
        pcVar18 = pcVar13;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar18 = pcVar13 + -uVar10;
      pcVar13 = (char *)&DAT_1000e3fd;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar13 = *(int *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      FUN_100048e5((int *)pFVar3,0,2);
      uVar10 = FUN_10004762((char *)pFVar3);
      puVar4 = malloc(uVar10 + 1);
      FUN_100048e5((int *)pFVar3,0,0);
      FUN_1000463d((char *)puVar4,1,uVar10,(int *)pFVar3);
      FUN_100045c0(pFVar3);
      iVar9 = 0;
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar18 = DAT_1000b5c4;
LAB_10002cb7:
          puVar5 = FUN_10004540(puVar4,pcVar18);
          iVar9 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar18 = DAT_1000b5bc;
            goto LAB_10002cb7;
          }
          if (iVar7 == 2) {
            pcVar18 = DAT_1000b5b4;
            goto LAB_10002cb7;
          }
          if (iVar7 == 3) {
            pcVar18 = DAT_1000b5ac;
            goto LAB_10002cb7;
          }
          if (iVar7 == 4) {
            pcVar18 = DAT_1000b5a4;
            goto LAB_10002cb7;
          }
          if (iVar7 == 5) {
            pcVar18 = DAT_1000b59c;
            goto LAB_10002cb7;
          }
        }
        iVar9 = iVar9 + 5;
        sVar6 = FUN_10004500((byte *)(iVar9 + (int)puVar4),&DAT_1000b598);
        iVar1 = iVar7 * 0xf;
        strncpy((char *)((int)((unsigned char *)&DAT_1000f1e0) + iVar1),(char *)(iVar9 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(char *)((int)((unsigned char *)&DAT_1000f1e0) + sVar6 + iVar1) = 0;
      } while (iVar7 < 6);
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar18 = "VARSHAVA";
LAB_10002d3d:
          puVar5 = FUN_10004540(puVar4,pcVar18);
          iVar9 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar18 = "GANOVER";
            goto LAB_10002d3d;
          }
          if (iVar7 == 2) {
            pcVar18 = DAT_1000b5d4;
            goto LAB_10002d3d;
          }
          if (iVar7 == 3) {
            pcVar18 = DAT_1000b5cc;
            goto LAB_10002d3d;
          }
        }
        iVar9 = iVar9 + 10;
        sVar6 = FUN_10004500((byte *)(iVar9 + (int)puVar4),&DAT_1000b598);
        iVar1 = iVar7 * 0xf;
        strncpy((char *)((int)((unsigned char *)&DAT_1000e3d0) + iVar1),(char *)(iVar9 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(char *)((int)((unsigned char *)&DAT_1000e3d0) + sVar6 + iVar1) = 0;
      } while (iVar7 < 4);
      FUN_100043f0((int *)puVar4);
    }
  }
  cVar2 = Trigg(1);
  if (cVar2 != '\0') {
    SetTrigg(1,0);
    ChangeFriends(0,3);
    ChangeFriends(1,3);
    ChangeFriends(2,4);
    ChangeFriends(3,8);
    ChangeFriends(4,0xff);
    ChangeFriends(5,0x2c);
    RunTimer(1,200);
    RunTimer(2,0x32);
    RunTimer(3,0x32);
    RunTimer(4,0x32);
    RunTimer(5,0x32);
    RunTimer(6,0x14);
    EnableUnit(0,&DAT_1000ee58,0);
    EnableUnit(0,&DAT_1000f250,0);
    DisableUpgrade(0,&DAT_1000e368);
    DisableUpgrade(0,&DAT_1000e450);
    DisableUpgrade(0,&DAT_1000ee60);
    SetResource(0,0,5000);
    SetResource(0,3,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    iVar7 = GetDiff(0);
    SetResource(0,4,(5 - iVar7) * 1000);
    iVar7 = GetDiff(0);
    SetResource(0,5,(5 - iVar7) * 1000);
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
    uVar8 = GetDiff(0);
    StartAI(2,"AUSTRIA.0",1,1,1,uVar8);
    uVar8 = GetDiff(0);
    StartAI(3,"SVEDEN.0",2,1,1,uVar8);
    FUN_10001020(&DAT_1000e4a0,'\0',0,(char *)&DAT_1000e3d0,&DAT_1000e398,1,5,"V11_4",
                 &DAT_1000eb40,&DAT_1000e7b0,0,0,0,2);
    FUN_10001020(&DAT_1000ee80,'\0',1,(char *)&DAT_1000e3df,&DAT_1000e438,1,4,"V11_4",
                 &DAT_1000eb40,&DAT_1000e7b0,0,0,0,3);
    FUN_10001020(&DAT_1000e7b0,'\0',2,(char *)&DAT_1000e3ee,&DAT_1000e448,1,3,
                 "V11_1|V11_2|V11_4",&DAT_1000e4a0,&DAT_1000ee80,&DAT_1000eb40,0,0,2);
    FUN_10001020(&DAT_1000eb40,'\x01',3,(char *)&DAT_1000e3fd,&DAT_1000eac8,1,3,
                 "V11_1|V11_2|V11_3",&DAT_1000e4a0,&DAT_1000ee80,&DAT_1000e7b0,0,0,0);
    ShowPage("#PAGE23");
    SetLightSpot(&DAT_1000e398,2,1);
    SetLightSpot(&DAT_1000e438,2,2);
    EnableMission(0x41);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x47);
    EnableMission(0x45);
    EnableMission(0x46);
    GetUnitInfo(&DAT_1000ee70,0,auStack_2c);
    DAT_1000e428 = auStack_2c[0] & 0xffff;
    DAT_1000b050 = '\0';
  }
  FUN_100011d0(&DAT_1000e4a0,&DAT_1000e398,"V11_4",&DAT_1000eb40,&DAT_1000e7b0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_1000f248);
  uVar14 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000eac0);
  uVar15 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000e358);
  FUN_100020a0(&DAT_1000e4a0,iVar7,uVar15,uVar14);
  FUN_100011d0(&DAT_1000ee80,&DAT_1000e438,"V11_4",&DAT_1000eb40,&DAT_1000e7b0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_1000e418);
  uVar14 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000e3c8);
  uVar15 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000e410);
  FUN_100020a0(&DAT_1000ee80,iVar7,uVar15,uVar14);
  FUN_100011d0(&DAT_1000e7b0,&DAT_1000e448,"V11_1|V11_2|V11_4",&DAT_1000e4a0,&DAT_1000ee80,
               &DAT_1000eb40,0,0);
  iVar7 = GetTotalAmount0(&DAT_1000e7a0);
  uVar14 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000e370);
  uVar15 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000f258);
  FUN_100020a0(&DAT_1000e7b0,iVar7,uVar15,uVar14);
  FUN_100011d0(&DAT_1000eb40,&DAT_1000eac8,"V11_1|V11_2|V11_3",&DAT_1000e4a0,&DAT_1000ee80,
               &DAT_1000e7b0,0,0);
  FUN_10001510(&DAT_1000e4a0,0);
  FUN_10001510(&DAT_1000ee80,0);
  FUN_10001510(&DAT_1000e7b0,0);
  cVar2 = TimerDone(2);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001ac0(&DAT_1000e4a0), (char)uVar8 != '\0')) {
    RunTimer(2,100);
  }
  cVar2 = TimerDone(3);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001ac0(&DAT_1000ee80), (char)uVar8 != '\0')) {
    RunTimer(3,100);
  }
  cVar2 = Trigg(5);
  if (((cVar2 == '\0') && (cVar2 = TimerDone(4), cVar2 != '\0')) &&
     (uVar8 = FUN_10001ac0(&DAT_1000e7b0), (char)uVar8 != '\0')) {
    RunTimer(4,100);
  }
  cVar2 = TimerDone(5);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001ac0(&DAT_1000eb40), (char)uVar8 != '\0')) {
    RunTimer(5,100);
  }
  puVar16 = &DAT_1000e398;
  iVar7 = GetDiff(0);
  FUN_100023d0(&DAT_1000e318,iVar7 * 3 + 5,puVar16);
  puVar16 = &DAT_1000e438;
  iVar7 = GetDiff(0);
  FUN_100023d0(&DAT_1000e2d8,iVar7 * 3 + 5,puVar16);
  FUN_10002280(&DAT_1000e318,&DAT_1000ee48,&DAT_1000ee40,&DAT_1000eb38,&DAT_1000e498);
  FUN_10002280(&DAT_1000e2d8,&DAT_1000e468,&DAT_1000e460,&DAT_1000e458,&DAT_1000e490);
  cVar2 = TimerDone(1);
  if (cVar2 != '\0') {
    FUN_10001220(0x1000e4a0);
    FUN_10001220(0x1000ee80);
    FUN_10001220(0x1000e7b0);
    iVar7 = GetDiff(0);
    RunTimer(1,(iVar7 + 4) * 0x32);
  }
  cVar2 = Trigg(2);
  if ((cVar2 != '\0') &&
     (iVar7 = GetUnitsAmount2(&DAT_1000eab0,&DAT_1000ee50,0), pcVar12 = (void*)&ShowPage, iVar7 != 0))
  {
    SetTrigg(2,0);
    ShowPage("#PAGE9");
    EnableMission(0x44);
    uVar17 = 0xb;
    uVar8 = 10;
    iVar7 = GetDiff(0);
    FUN_100021b0(&DAT_1000e318,&DAT_1000eb30,&DAT_1000eb28,&DAT_1000eb20,5,(5 - iVar7) * 1000,uVar8,
                 uVar17);
  }
  cVar2 = Trigg(3);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000e420,&DAT_1000ee50,0), iVar7 != 0)) {
    SetTrigg(3,0);
    ShowPage("#PAGE10");
    EnableMission(0x43);
    uVar17 = 0x15;
    uVar8 = 0x14;
    iVar7 = GetDiff(0);
    FUN_100021b0(&DAT_1000e2d8,&DAT_1000e480,&DAT_1000e478,&DAT_1000e470,5,(5 - iVar7) * 1000,uVar8,
                 uVar17);
  }
  cVar2 = Trigg(5);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000f240,&DAT_1000ee50,0), iVar7 != 0)) {
    SetTrigg(5,0);
    ShowPage("#PAGE24");
    EnableMission(0x47);
  }
  cVar2 = Trigg(4);
  if (((cVar2 != '\0') && (cVar2 = Trigg(2), cVar2 == '\0')) && (cVar2 = Trigg(3), cVar2 == '\0')) {
    SetTrigg(4,0);
    DisableMission(0x41);
    EnableMission(0x42);
  }
  cVar2 = NationIsErased(0);
  if (cVar2 != '\0') {
    ShowPage("#PAGE21");
    LooseGame();
  }
  cVar2 = NationIsErased(2);
  if ((cVar2 != '\0') && (cVar2 = NationIsErased(3), cVar2 != '\0')) {
    ShowPage("#PAGE22");
    ShowVictory();
  }
  iVar7 = GetResource(0,0);
  if (70000 < iVar7) {
    SetResource(0,0,70000);
  }
  iVar7 = GetResource(0,3);
  if (70000 < iVar7) {
    SetResource(0,3,70000);
  }
  iVar7 = GetResource(0,2);
  if (70000 < iVar7) {
    SetResource(0,2,70000);
  }
  iVar7 = GetResource(0,1);
  if (70000 < iVar7) {
    SetResource(0,1,70000);
  }
  iVar7 = GetResource(0,4);
  if (70000 < iVar7) {
    SetResource(0,4,70000);
  }
  iVar7 = GetResource(0,5);
  if (70000 < iVar7) {
    SetResource(0,5,70000);
  }
  SaveSelectedUnits(0,&DAT_1000ead0,0);
  iVar7 = GetTotalAmount0(&DAT_1000ead0);
  if ((iVar7 == 1) &&
     (GetUnitInfo(&DAT_1000ead0,0,auStack_2c), (auStack_2c[0] & 0xffff) == DAT_1000e428)) {
    DAT_1000b050 = '\x01';
    ClearSelection(0);
  }
  if (DAT_1000b050 == '\0') goto LAB_100039a9;
  if (DAT_1000f265 == '\0') {
    if (DAT_1000f264 != '\0') {
      pcVar18 = "#PAGE27";
      goto LAB_10003731;
    }
    iVar7 = AskMultilineQuestion(9,"#PAGE25",0,"P11_1|P11_2");
    if (iVar7 == 0) {
      iVar7 = GetDiff(0);
      ShowPageParam("#PAGE28",iVar7 * 3000 + 10000);
      cVar2 = AskQuestion("#PAGE29");
      if (cVar2 != '\0') {
        iVar7 = GetDiff(0);
        iVar9 = GetResource(0,1);
        if (iVar9 < iVar7 * 3000 + 10000) {
LAB_10003992:
          ShowPage("#PAGE30");
        }
        else {
          ShowPage("#PAGE32");
          iVar7 = GetDiff(0);
          RunTimer(6,(0x14 - iVar7) * 500);
          SetTrigg(6,0);
          iVar7 = GetDiff(0);
          iVar9 = GetResource(0,1);
          SetResource(0,1,iVar7 * -3000 + -11000 + iVar9);
          ChangeFriends(2,5);
          DAT_1000f264 = '\x01';
          DAT_1000f265 = '\0';
          ShowPage("#PAGE32");
        }
      }
    }
    else if (iVar7 == 1) {
      iVar7 = GetDiff(0);
      ShowPageParam("#PAGE28",iVar7 * 3000 + 10000);
      cVar2 = AskQuestion("#PAGE29");
      if (cVar2 != '\0') {
        iVar7 = GetDiff(0);
        iVar9 = GetResource(0,1);
        if (iVar9 < iVar7 * 3000 + 10000) goto LAB_10003992;
        ShowPage("#PAGE32");
        iVar7 = GetDiff(0);
        RunTimer(6,(0x14 - iVar7) * 500);
        SetTrigg(6,0);
        iVar7 = GetDiff(0);
        iVar9 = GetResource(0,1);
        SetResource(0,1,iVar7 * -3000 + -11000 + iVar9);
        ChangeFriends(3,9);
        DAT_1000f264 = '\0';
        DAT_1000f265 = '\x01';
        ShowPage("#PAGE32");
      }
    }
  }
  else {
    pcVar18 = "#PAGE26";
LAB_10003731:
    cVar2 = AskQuestion(pcVar18);
    if (cVar2 != '\0') {
      ChangeFriends(0,3);
      ChangeFriends(1,3);
      ChangeFriends(2,4);
      ChangeFriends(3,8);
      ChangeFriends(4,0xff);
      ChangeFriends(5,0x2c);
      ShowPage("#PAGE34");
      SetTrigg(6,0);
      DAT_1000f264 = '\0';
      DAT_1000f265 = '\0';
    }
  }
  DAT_1000b050 = '\0';
LAB_100039a9:
  cVar2 = TimerDoneFirst(6);
  if ((cVar2 != '\0') && (cVar2 = Trigg(6), cVar2 == '\0')) {
    ShowPage("#PAGE34");
    DAT_1000f264 = '\0';
    DAT_1000f265 = '\0';
    ChangeFriends(0,3);
    ChangeFriends(1,3);
    ChangeFriends(2,4);
    ChangeFriends(3,8);
    ChangeFriends(4,0xff);
    ChangeFriends(5,0x2c);
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
