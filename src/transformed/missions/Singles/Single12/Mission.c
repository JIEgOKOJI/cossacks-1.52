#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
long long DAT_1000a040 = 0;
long long DAT_1000a044 = 0;
char DAT_1000a29c[] = "V01";
char DAT_1000a2a0[] = "V02";
long long DAT_1000a2b0 = 0;
char DAT_1000a2b4[] = "RESC";
char DAT_1000a2bc[] = "RESI";
char DAT_1000a2c4[] = "RESG";
char DAT_1000a2cc[] = "RESS";
char DAT_1000a2d4[] = "RESF";
char DAT_1000a2dc[] = "RESW";
char DAT_1000a2e4[] = "SITY";
char DAT_1000a2ec[] = "YORK";
char DAT_1000a2f4[] = "COAL";
char DAT_1000a2fc[] = "IRON";
char DAT_1000a304[] = "GOLD";
char DAT_1000a314[] = "FOOD";
char DAT_1000a31c[] = "WOOD";
char DAT_1000a33c[] = "r";
long long DAT_1000cfd8 = 0;
long long DAT_1000cfe0 = 0;
long long DAT_1000cfe8 = 0;
long long DAT_1000cff0 = 0;
long long DAT_1000cff8 = 0;
int DAT_1000d2a3 = 0;
long long DAT_1000d2f8 = 0;
long long DAT_1000d300 = 0;
long long DAT_1000d30f = 0;
long long DAT_1000d320 = 0;
long long DAT_1000d328 = 0;
long long DAT_1000d330 = 0;
long long DAT_1000d338 = 0;
long long DAT_1000d348 = 0;
long long DAT_1000d350 = 0;
long long DAT_1000d358 = 0;
long long DAT_1000d360 = 0;
long long DAT_1000d368 = 0;
long long DAT_1000d370 = 0;
long long DAT_1000d378 = 0;
long long DAT_1000d380 = 0;
int DAT_1000d62b = 0;
long long DAT_1000d680 = 0;
long long DAT_1000d688 = 0;
long long DAT_1000d690 = 0;
long long DAT_1000d698 = 0;
long long DAT_1000d6a0 = 0;
long long DAT_1000d6a8 = 0;
long long DAT_1000d6b0 = 0;
long long DAT_1000d6b8 = 0;
long long DAT_1000d6c8 = 0;
long long DAT_1000d6d7 = 0;
long long DAT_1000d6e6 = 0;
long long DAT_1000d6f5 = 0;
long long DAT_1000d704 = 0;
long long DAT_1000d713 = 0;
int DAT_1000d728 = 0;
long long DAT_1000dd00 = 0;

/* Stubs for missing internal functions */
int FUN_10002d60() { return 0; }
int FUN_1000332b() { return 0; }
int FUN_100035a8() { return 0; }
int FUN_100035fa() { return 0; }
int FUN_10003785() { return 0; }
int FUN_1000388e() { return 0; }
int FUN_1000396a() { return 0; }
int FUN_10003bb0() { return 0; }
int FUN_10004092() { return 0; }
int FUN_100042b4() { return 0; }
int FUN_1000438c() { return 0; }
int FUN_100044fc() { return 0; }


/* Forward declarations */
void 
FUN_10001020(void *this_ptr,char param_1,int param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13);
void 
FUN_100011c0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void  FUN_10001210(int param_1);
void  FUN_10001230(int param_1);
void  FUN_100012e0(int param_1);
void  FUN_100013e0(int param_1);
int  FUN_100014c0(int param_1);
void  FUN_10001500(void *this_ptr,int param_1);
void  FUN_100015e0(int param_1);
int  FUN_10001680(int param_1);
int  FUN_100016b0(void *param_1);
void  FUN_10001700(void *param_1);
void  FUN_10001830(void *param_1);
void  FUN_10001970(void *this_ptr,int param_1);
unsigned int  FUN_10001ab0(void *param_1);
void  FUN_10001be0(void *this_ptr,int param_1);
void  FUN_10001c20(void *this_ptr,int param_1);
void  FUN_10001c80(void *this_ptr,int param_1,void *param_2);
int  FUN_10001ee0(void *this_ptr,int param_1);
int  FUN_10001f50(void *this_ptr,int param_1);
void  FUN_10001fc0(void *this_ptr,int param_1,int param_2);
void  FUN_10002070(void *this_ptr,int param_1,char param_2);
int FUN_10002090(int param_1);
void 
FUN_100020b0(void *this_ptr,char *param_1,int param_2,int param_3,int param_4);
void 
FUN_10002120(void *this_ptr,char *param_1,int param_2,int param_3,int param_4);
void FUN_10002af0(int param_1,int param_2);
void FUN_10002b90(int *param_1);
int FUN_10002ca0(byte *param_1,byte *param_2);
unsigned int * FUN_10002ce0(unsigned int *param_1,char *param_2);
unsigned int FUN_10002ddd(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
unsigned int FUN_10002e0c(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
int FUN_10002f02(char *param_1);
int FUN_10002f24(char *param_1);
int FUN_10003085(int *param_1,int param_2,DWORD param_3);
int FUN_100030b1(int *param_1,int param_2,DWORD param_3);
int * FUN_1000313e(LPCSTR param_1,char *param_2,unsigned int param_3);
void FUN_1000316f(LPCSTR param_1,char *param_2);


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
  
  *(int *)((int)this_ptr + 0x2a7) = param_2;
  *(int *)((int)this_ptr + 0x28c) = param_10;
  *(int *)((int)this_ptr + 0x2ab) = param_4;
  *(int *)((int)this_ptr + 0x284) = param_8;
  *(int *)((int)this_ptr + 0x288) = param_9;
  *(int *)((int)this_ptr + 0x290) = param_11;
  *(int *)((int)this_ptr + 0x294) = param_12;
  *(int *)((int)this_ptr + 0x280) = param_7;
  *(int *)((int)this_ptr + 0x2f1) = param_13 * 0xf;
  *(char *)((int)this_ptr + 0x2e8) = (char)param_5;
  uVar2 = 0xffffffff;
  *(char *)((int)this_ptr + 0x2f5) = 1;
  *(int *)((int)this_ptr + 0x2e9) = param_6;
  *(int *)((int)this_ptr + 0x2fa) = 1;
  *(char *)((int)this_ptr + 0x2fe) = 1;
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
  pcVar5 = (char *)((int)this_ptr + 0x298);
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
  *(char *)((int)this_ptr + 0x2af) = param_1;
  *(int *)((int)this_ptr + 700) = 300;
  *(int *)((int)this_ptr + 0x2cc) = 0;
  *(int *)((int)this_ptr + 0x2c8) = 0;
  *(int *)((int)this_ptr + 0x2c4) = 0;
  *(int *)((int)this_ptr + 0x2c0) = 0;
  *(int *)((int)this_ptr + 0x2b8) = 0;
  if (param_1 != '\0') {
    return;
  }
  if (((param_6 == 0) || (param_6 == 1)) || (param_6 == 2)) {
    RegisterDynGroup((int)this_ptr + 0x2b0);
    CreateObject0(&DAT_1000d350,&DAT_1000d6b8,&DAT_1000d330,param_5,param_4,0);
    RemoveGroup(&DAT_1000d350,(int)this_ptr + 0x2b0);
  }
  if (param_6 == 0) {
    TakeWood((int)this_ptr + 0x2b0);
  }
  else if (param_6 != 1) {
    if (param_6 != 2) {
      *(int *)((int)this_ptr + 0x2ed) = 0xf;
      return;
    }
    goto LAB_1000119e;
  }
  TakeFood((int)this_ptr + 0x2b0);
LAB_1000119e:
  TakeStone((int)this_ptr + 0x2b0);
  *(int *)((int)this_ptr + 0x2ed) = 0xf;
  return;
}





void 
FUN_100011c0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((int)this_ptr + 0x284) = param_3;
  *(int *)((int)this_ptr + 0x288) = param_4;
  *(int *)((int)this_ptr + 0x28c) = param_5;
  *(int *)((int)this_ptr + 0x290) = param_6;
  *(int *)((int)this_ptr + 0x294) = param_7;
  *(int *)((int)this_ptr + 0x280) = param_2;
  *(int *)((int)this_ptr + 0x2ab) = param_1;
  return;
}





void  FUN_10001210(int param_1)

{
  if (*(char *)(param_1 + 0x2af) == '\0') {
    FUN_100012e0(param_1);
    FUN_100013e0(param_1);
  }
  return;
}





void  FUN_10001230(int param_1)

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





void  FUN_100012e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100014c0(param_1);
  iVar2 = 0;
  *(int *)(param_1 + 0x2ed) = iVar1;
  if (0 < iVar1) {
    do {
      if (*(char *)(param_1 + 0x2f5) == '\0') break;
      if ((0 < *(int *)(param_1 + 0x2f6)) && (4 < *(int *)(param_1 + 700))) {
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
        *(int *)(param_1 + 0x2f6) = *(int *)(param_1 + 0x2f6) + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(int *)(param_1 + 0x2f6) = *(int *)(param_1 + 0x2f6) + (3 - *(int *)(param_1 + 0x2fa)) * iVar1;
  AddResource(*(char *)(param_1 + 0x2e8) + -1,1,*(int *)(param_1 + 0x2fa) * iVar1);
  FUN_10001230(param_1);
  return;
}





void  FUN_100013e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2f6) < 0x3e9) {
    return;
  }
  iVar1 = FUN_100014c0(param_1);
  if (*(int *)(param_1 + 0x2f1) <= iVar1) {
    return;
  }
  iVar1 = FUN_100014c0(param_1);
  *(int *)(param_1 + 0x2ed) = iVar1;
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) goto LAB_1000149f;
  CreateObject0(&DAT_1000d350,&DAT_1000d2f8,&DAT_1000d330,*(char *)(param_1 + 0x2e8),
                *(int *)(param_1 + 0x2ab),0);
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (iVar1 == 0) {
    TakeWood(&DAT_1000d350);
LAB_1000146e:
    TakeFood(&DAT_1000d350);
LAB_1000147c:
    TakeStone(&DAT_1000d350);
  }
  else {
    if (iVar1 == 1) goto LAB_1000146e;
    if (iVar1 == 2) goto LAB_1000147c;
  }
  RemoveGroup(&DAT_1000d350,param_1 + 0x2b0);
LAB_1000149f:
  *(int *)(param_1 + 0x2f6) = *(int *)(param_1 + 0x2f6) + -1000;
  *(int *)(param_1 + 0x2ed) = *(int *)(param_1 + 0x2ed) + 1;
  return;
}





int  FUN_100014c0(int param_1)

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





void  FUN_10001500(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  if (*(char *)((int)this_ptr + 0x2af) == '\0') {
    if ((*(char *)((int)this_ptr + 0x2fe) != '\0') &&
       (iVar1 = GetUnitsAmount2(*(int *)((int)this_ptr + 0x2ab),&DAT_1000d680,param_1),
       iVar1 != 0)) {
      uVar2 = AskMultilineQuestion(9,"#PAGE1",0,"VI1_1|VI1_2|VI1_3|VI1_4");
      switch(uVar2) {
      case 0:
        FUN_100015e0((int)this_ptr);
        *(char *)((int)this_ptr + 0x2fe) = 1;
        break;
      case 1:
        uVar2 = FUN_10001680((int)this_ptr);
        *(char *)((int)this_ptr + 0x2fe) = (char)uVar2;
        break;
      case 2:
        uVar2 = FUN_100016b0(this_ptr);
        *(char *)((int)this_ptr + 0x2fe) = (char)uVar2;
        break;
      case 3:
        *(char *)((int)this_ptr + 0x2fe) = 0;
      }
    }
    if ((*(char *)((int)this_ptr + 0x2fe) == '\0') &&
       (iVar1 = GetUnitsAmount2(*(int *)((int)this_ptr + 0x2ab),&DAT_1000d680,param_1),
       iVar1 == 0)) {
      *(char *)((int)this_ptr + 0x2fe) = 1;
    }
  }
  return;
}





void  FUN_100015e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100014c0(param_1);
  ShowPageParam("#PAGE11",param_1 + 0x298,
                (int)&DAT_1000d6c8 + *(int *)(param_1 + 0x2e9) * 0xf,&DAT_1000d6c8,
                *(int *)(param_1 + 0x2b8),&DAT_1000d6d7,*(int *)(param_1 + 700),
                &DAT_1000d6e6,*(int *)(param_1 + 0x2c0),&DAT_1000d6f5,
                *(int *)(param_1 + 0x2c4),&DAT_1000d704,*(int *)(param_1 + 0x2c8),
                &DAT_1000d713,*(int *)(param_1 + 0x2cc),
                (3 - *(int *)(param_1 + 0x2fa)) * iVar1,*(int *)(param_1 + 0x2fa) * iVar1,iVar1,
                *(int *)(param_1 + 0x2f6),iVar1);
  return;
}





int  FUN_10001680(int param_1)

{
  int uVar1;
  
  uVar1 = AskMultilineQuestion(9,"#PAGE12",0,"TPW1_0|TPW1_1|TPW1_2|TPW1_3");
  *(int *)(param_1 + 0x2fa) = uVar1;
  return (int)1;
}





int  FUN_100016b0(void *param_1)

{
  int iVar1;
  
  do {
    while( 1 ) {
      while (iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_1|TR1_3|TR1_4"),
            iVar1 == 0) {
        FUN_10001700(param_1);
      }
      if (iVar1 != 1) break;
      FUN_10001830(param_1);
    }
  } while (iVar1 != 2);
  return 1;
}





void  FUN_10001700(void *param_1)

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
  FUN_10001230((int)param_1);
  iVar2 = FUN_10001f50(param_1,pvVar5);
  iVar3 = FUN_10001f50(param_1,pvVar4);
  ShowPageParam("#PAGE131",(int)&DAT_1000d6c8 + (int)pvVar5 * 0xf,100,
                (int)&DAT_1000d6c8 + (int)pvVar4 * 0xf,(iVar2 * 100) / iVar3);
  return;
}





void  FUN_10001830(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = AskMultilineQuestion(9,"#PAGE133",0,"NO1_1|NO1_2|NO1_3|NO1_4|NO1_5|NO1_6|NO1_7|NO1_8|NO1_9|NO1_10");
  iVar2 = AskMultilineQuestion(9,"#PAGE1331",0,"OD1_0|OD1_1|OD1_2");
  if (iVar2 == 0) {
    pvVar3 = (void *)(iVar1 * 0x40 + (int)param_1);
    iVar1 = GetTotalAmount0(pvVar3);
    if (iVar1 != 0) {
      iVar1 = (int)&DAT_1000d6c8 + *(int *)((int)pvVar3 + 0x11) * 0xf;
      iVar2 = (int)&DAT_1000d6c8 + *(int *)((int)pvVar3 + 9) * 0xf;
      ShowPageParam("#PAGE7",(int)pvVar3 + 0x29,iVar2,iVar1,iVar2,
                    *(int *)((int)pvVar3 + 0xd),iVar1,*(int *)((int)pvVar3 + 0x15));
      return;
    }
    ShowPage("#PAGE8");
  }
  else {
    if (iVar2 == 1) {
      pvVar3 = (void *)(iVar1 * 0x40 + (int)param_1);
      iVar2 = GetTotalAmount0(pvVar3);
      if (iVar2 == 0) {
        FUN_100020b0(pvVar3,(char *)((int)param_1 + 0x298),*(int *)((int)param_1 + 0x2a7),
                     (unsigned int)*(byte *)((int)param_1 + 0x2e8),*(int *)((int)param_1 + 0x2ab));
      }
      FUN_10001970(param_1,iVar1);
      return;
    }
    if (iVar2 == 2) {
      pvVar3 = (void *)(iVar1 * 0x40 + (int)param_1);
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





void  FUN_10001970(void *this_ptr,int param_1)

{
  void *this_00;
  int iVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = AskMultilineQuestion(9,"#PAGE4",0,*(int *)((int)this_ptr + 0x280));
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
  iVar1 = *(int *)((int)this_ptr + iVar1 * 4 + 0x284);
  this_00 = (void *)(param_1 * 0x40 + (int)this_ptr);
  FUN_10002120(this_00,(char *)(iVar1 + 0x298),*(int *)(iVar1 + 0x2a7),iVar4,iVar3);
  SelectUnits(this_00,0);
  SelSendTo(*(char *)((int)this_00 + 8),*(int *)((int)this_ptr + 0x2ab),0,0);
  *(char *)((int)this_00 + 0x19) = 0;
  return;
}





unsigned int  FUN_10001ab0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  void *pvVar5;
  int *piVar6;
  unsigned int uStack_4;
  
  iVar1 = GetUnitsAmount2(*(int *)((int)param_1 + 0x2ab),&DAT_1000d358,
                          *(char *)((int)param_1 + 0x2e8));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  pvVar5 = param_1;
  do {
    if (*(char *)((int)pvVar5 + 0x19) == '\0') {
      iVar2 = GetUnitsAmount1(*(int *)((int)param_1 + 0x2ab),pvVar5);
      if (iVar2 != 0) {
        pvVar5 = (void *)(iVar1 * 0x40 + (int)param_1);
        *(char *)((int)pvVar5 + 0x19) = 1;
        FUN_10001be0(param_1,(int)pvVar5);
        FUN_10001c20(param_1,(int)pvVar5);
        FUN_10002af0((int)pvVar5,*(int *)((int)pvVar5 + 0x3c));
        return (int)1;
      }
    }
    iVar1 = iVar1 + 1;
    pvVar5 = (void *)((int)pvVar5 + 0x40);
  } while (iVar1 < 10);
  uStack_4 = 0;
  piVar6 = (int *)((int)param_1 + 0x284);
  do {
    if (*piVar6 != 0) {
      iVar1 = 0;
      iVar2 = 0;
      do {
        if (*(char *)(*piVar6 + 0x19 + iVar2) != '\0') {
          iVar3 = GetUnitsAmount1(*(int *)((int)param_1 + 0x2ab),*piVar6 + iVar2);
          if (iVar3 != 0) {
            iVar1 = iVar1 * 0x40;
            *(char *)(*(int *)((int)param_1 + uStack_4 * 4 + 0x284) + 0x19 + iVar1) = 0;
            pvVar5 = *(void **)((int)param_1 + uStack_4 * 4 + 0x284);
            FUN_10001c80(param_1,(int)(iVar1 + (int)pvVar5),pvVar5);
            iVar2 = *(int *)((int)param_1 + uStack_4 * 4 + 0x284);
            FUN_10002af0(iVar2 + iVar1,*(int *)(iVar2 + 0x38 + iVar1));
            return (int)1;
          }
        }
        iVar2 = iVar2 + 0x40;
        iVar1 = iVar1 + 1;
      } while (iVar2 < 0x280);
    }
    piVar6 = piVar6 + 1;
    uStack_4 = uStack_4 + 1;
  } while ((int)uStack_4 < 5);
  return uStack_4 & 0xffffff00;
}





void  FUN_10001be0(void *this_ptr,int param_1)

{
  FUN_10001fc0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
  FUN_10001fc0(this_ptr,*(int *)(param_1 + 0x11),*(int *)(param_1 + 0x15));
  *(int *)(param_1 + 0x15) = 0;
  *(int *)(param_1 + 0xd) = 0;
  return;
}





void  FUN_10001c20(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = FUN_10001ee0(this_ptr,*(int *)(param_1 + 9));
  if (99 < iVar1) {
    *(int *)(param_1 + 0xd) = 100;
    FUN_10001fc0(this_ptr,*(int *)(param_1 + 9),-100);
    return;
  }
  uVar2 = FUN_10001ee0(this_ptr,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = uVar2;
  iVar1 = FUN_10001ee0(this_ptr,*(int *)(param_1 + 9));
  FUN_10001fc0(this_ptr,*(int *)(param_1 + 9),-iVar1);
  return;
}





void  FUN_10001c80(void *this_ptr,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  if (*(char *)((int)this_ptr + 0x2af) == '\0') {
    iVar1 = FUN_10001f50(this_ptr,*(int *)(param_1 + 9));
    iVar1 = iVar1 * *(int *)(param_1 + 0xd);
    iVar2 = FUN_10001f50(this_ptr,*(int *)(param_1 + 0x11));
    iVar3 = FUN_10001ee0(this_ptr,*(int *)(param_1 + 0x11));
    iVar2 = iVar2 * iVar3;
    if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
      FUN_10001fc0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
      *(int *)(param_1 + 0xd) = 0;
      iVar2 = FUN_10001f50(this_ptr,*(int *)(param_1 + 0x11));
      *(int *)(param_1 + 0x15) = iVar1 / iVar2;
      FUN_10001fc0(this_ptr,*(int *)(param_1 + 0x11),-(iVar1 / iVar2));
      return;
    }
    uVar4 = FUN_10001ee0(this_ptr,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = uVar4;
    iVar1 = FUN_10001ee0(this_ptr,*(int *)(param_1 + 0x11));
    FUN_10001fc0(this_ptr,*(int *)(param_1 + 0x11),-iVar1);
    iVar1 = FUN_10001f50(this_ptr,*(int *)(param_1 + 9));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar2 / iVar1;
    iVar1 = FUN_10001f50(this_ptr,*(int *)(param_1 + 9));
    FUN_10001fc0(this_ptr,*(int *)(param_1 + 9),iVar2 / iVar1);
    return;
  }
  iVar1 = FUN_10001f50(param_2,*(int *)(param_1 + 9));
  iVar1 = iVar1 * *(int *)(param_1 + 0xd);
  iVar2 = FUN_10002090(*(int *)(param_1 + 0x11));
  iVar3 = GetResource(*(char *)((int)this_ptr + 0x2e8) + -1,iVar2);
  iVar2 = FUN_10001f50(param_2,*(int *)(param_1 + 0x11));
  iVar3 = iVar3 * iVar2;
  if (iVar1 <= iVar3) {
    uVar4 = *(int *)(param_1 + 0xd);
    iVar2 = FUN_10002090(*(int *)(param_1 + 9));
    AddResource(*(char *)((int)this_ptr + 0x2e8) + -1,iVar2,uVar4);
    *(int *)(param_1 + 0xd) = 0;
    iVar2 = FUN_10001f50(param_2,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = iVar1 / iVar2;
    iVar1 = FUN_10002090(*(int *)(param_1 + 0x11));
    iVar1 = GetResource(*(char *)((int)this_ptr + 0x2e8) + -1,iVar1);
    iVar1 = iVar1 - *(int *)(param_1 + 0x15);
    iVar2 = FUN_10002090(*(int *)(param_1 + 0x11));
    SetResource(*(char *)((int)this_ptr + 0x2e8) + -1,iVar2,iVar1);
    return;
  }
  iVar1 = FUN_10002090(*(int *)(param_1 + 0x11));
  uVar4 = GetResource(*(char *)((int)this_ptr + 0x2e8) + -1,iVar1);
  *(int *)(param_1 + 0x15) = uVar4;
  uVar4 = 0;
  iVar1 = FUN_10002090(*(int *)(param_1 + 0x11));
  SetResource(*(char *)((int)this_ptr + 0x2e8) + -1,iVar1,uVar4);
  iVar1 = FUN_10001f50(param_2,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar3 / iVar1;
  iVar1 = FUN_10001f50(param_2,*(int *)(param_1 + 9));
  iVar3 = iVar3 / iVar1;
  iVar1 = FUN_10002090(*(int *)(param_1 + 9));
  AddResource(*(char *)((int)this_ptr + 0x2e8) + -1,iVar1,iVar3);
  return;
}





int  FUN_10001ee0(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((int)this_ptr + 0x2b8);
  case 1:
    return *(int *)((int)this_ptr + 700);
  case 2:
    return *(int *)((int)this_ptr + 0x2c0);
  case 3:
    return *(int *)((int)this_ptr + 0x2c4);
  case 4:
    return *(int *)((int)this_ptr + 0x2c8);
  case 5:
    return *(int *)((int)this_ptr + 0x2cc);
  default:
    return 0;
  }
}





int  FUN_10001f50(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((int)this_ptr + 0x2d0);
  case 1:
    return *(int *)((int)this_ptr + 0x2d4);
  case 2:
    return *(int *)((int)this_ptr + 0x2d8);
  case 3:
    return *(int *)((int)this_ptr + 0x2dc);
  case 4:
    return *(int *)((int)this_ptr + 0x2e0);
  case 5:
    return *(int *)((int)this_ptr + 0x2e4);
  default:
    return 0;
  }
}





void  FUN_10001fc0(void *this_ptr,int param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((int)this_ptr + 0x2b8) = *(int *)((int)this_ptr + 0x2b8) + param_2;
    return;
  case 1:
    *(int *)((int)this_ptr + 700) = *(int *)((int)this_ptr + 700) + param_2;
    return;
  case 2:
    *(int *)((int)this_ptr + 0x2c0) = *(int *)((int)this_ptr + 0x2c0) + param_2;
    return;
  case 3:
    *(int *)((int)this_ptr + 0x2c4) = *(int *)((int)this_ptr + 0x2c4) + param_2;
    return;
  case 4:
    *(int *)((int)this_ptr + 0x2c8) = *(int *)((int)this_ptr + 0x2c8) + param_2;
    return;
  case 5:
    *(int *)((int)this_ptr + 0x2cc) = *(int *)((int)this_ptr + 0x2cc) + param_2;
  }
  return;
}





void  FUN_10002070(void *this_ptr,int param_1,char param_2)

{
  *(char *)((int)this_ptr + 0x2f5) = param_2;
  *(int *)((int)this_ptr + 0x2f1) = param_1 * 0xf;
  return;
}





int FUN_10002090(int param_1)

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
FUN_100020b0(void *this_ptr,char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  CreateObject0(this_ptr,&DAT_1000d2f8,&DAT_1000d358,param_3,param_4,0);
  uVar2 = 0xffffffff;
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
  *(int *)((int)this_ptr + 0x38) = param_2;
  *(char *)((int)this_ptr + 8) = (char)param_3;
  *(char *)((int)this_ptr + 0x19) = 0;
  *(int *)((int)this_ptr + 0x15) = 0;
  *(int *)((int)this_ptr + 0xd) = 0;
  return;
}





void 
FUN_10002120(void *this_ptr,char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
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
  *(char *)((int)this_ptr + 0x19) = 0;
  *(int *)((int)this_ptr + 0x3c) = param_2;
  *(int *)((int)this_ptr + 0x15) = 0;
  *(int *)((int)this_ptr + 0xd) = 0;
  *(int *)((int)this_ptr + 9) = param_3;
  *(int *)((int)this_ptr + 0x11) = param_4;
  return;
}





void __cdecl FUN_10002af0(int param_1,int param_2)

{
  SelectUnits(param_1,0);
  if (param_2 != 0) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d370,0,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d378,0x28,2);
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0x96,2);
    return;
  }
  SelSendTo(*(char *)(param_1 + 8),&DAT_1000d378,0x78,0);
  SelSendTo(*(char *)(param_1 + 8),&DAT_1000d370,0x96,2);
  SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0,2);
  return;
}





void __cdecl FUN_10002b90(int *param_1)

{
  FUN_1000332b(param_1);
  return;
}





int __cdecl FUN_10002ca0(byte *param_1,byte *param_2)

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





unsigned int * __cdecl FUN_10002ce0(unsigned int *param_1,char *param_2)

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
      param_1 = (unsigned int *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (unsigned int *)0x0;
      }
    }
    while( 1 ) {
      while( 1 ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ (int)(int)cVar3;
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (unsigned int *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
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
        return (unsigned int *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (unsigned int *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (unsigned int *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (unsigned int *)((int)param_1 + 3);
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





unsigned int __cdecl FUN_10002ddd(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned int uVar1;
  
  FUN_100035a8((unsigned int)param_4);
  uVar1 = FUN_10002e0c(param_1,param_2,param_3,param_4);
  FUN_100035fa((unsigned int)param_4);
  return uVar1;
}





unsigned int __cdecl FUN_10002e0c(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

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
          uVar4 = FUN_1000388e(piVar1);
          if (uVar4 == 0xffffffff) goto LAB_10002ee8;
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
          iVar3 = FUN_1000396a(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_10002ee8:
            return (unsigned int)((int)pcVar6 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10002ee8;
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
        FUN_10003bb0((int *)pcVar5,(int *)*piVar1,(unsigned int)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}





int __cdecl FUN_10002f02(char *param_1)

{
  int iVar1;
  
  FUN_100035a8((unsigned int)param_1);
  iVar1 = FUN_10002f24(param_1);
  FUN_100035fa((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10002f24(char *param_1)

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
  local_8 = FUN_100042b4(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_10002fb2:
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
        pDVar4 = FUN_10004092();
        *pDVar4 = 0x16;
        goto LAB_10002fb2;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_1000dd00)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
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
          if ((*(byte *)(iVar10 + 4 + (&DAT_1000dd00)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_100042b4(uVar1,0,2);
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
              FUN_100042b4(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(unsigned int *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(unsigned int *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_1000dd00)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar8;
            }
            pcVar5 = param_1;
            if (bVar3 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}





int __cdecl FUN_10003085(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_100035a8((unsigned int)param_1);
  iVar1 = FUN_100030b1(param_1,param_2,param_3);
  FUN_100035fa((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_100030b1(int *param_1,int param_2,DWORD param_3)

{
  unsigned int uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10004092();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_10002f24((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10003785(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_100042b4(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}





int * __cdecl FUN_1000313e(LPCSTR param_1,char *param_2,unsigned int param_3)

{
  int *puVar1;
  int *puVar2;
  
  puVar1 = FUN_100044fc();
  if (puVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = FUN_1000438c(param_1,param_2,param_3,puVar1);
  FUN_100035fa((unsigned int)puVar1);
  return puVar2;
}





void __cdecl FUN_1000316f(LPCSTR param_1,char *param_2)

{
  FUN_1000313e(param_1,param_2,0x40);
  return;
}





void OnInit(void)

{
                    
  RegisterFormation(&DAT_1000d2f8,"#ALONE");
  RegisterFormation(&DAT_1000d6b8,"#LINE15PUS");
  RegisterUnitType(&DAT_1000d358,"GRUZ(UN)");
  RegisterUnitType(&DAT_1000d330,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_1000d680,"Gusar_evro(en)");
  RegisterDynGroup(&DAT_1000d350);
  RegisterVar(&DAT_1000d350,8);
  RegisterVar(&DAT_1000cff8,0x2ff);
  RegisterZone(&DAT_1000cfe0,"ZLondon");
  DAT_1000d2a3 = &DAT_1000cfe0;
  RegisterUnits(&DAT_1000d348,"GPopulation00");
  RegisterUnits(&DAT_1000d698,"GProduce00");
  RegisterVar(&DAT_1000d380,0x2ff);
  RegisterZone(&DAT_1000d368,"ZSity");
  DAT_1000d62b = &DAT_1000d368;
  RegisterVar(((int*)0),8);
  RegisterUnits(&DAT_1000d360,"GLondonVorota");
  RegisterUnits(&DAT_1000cfd8,"GGiveWood");
  RegisterZone(&DAT_1000d320,"ZGiveWood");
  RegisterZone(&DAT_1000d370,"ZRazv01");
  RegisterZone(&DAT_1000d378,"ZRazv02");
  RegisterZone(&DAT_1000d688,"ZTolk");
  RegisterUpgrade(&DAT_1000cfe8,"AKA24EN");
  RegisterUpgrade(&DAT_1000cff0,"AKA24FR");
  RegisterUpgrade(&DAT_1000d338,"AKA23EN");
  RegisterUpgrade(&DAT_1000d328,"AKA23FR");
  RegisterUpgrade(&DAT_1000d690,"AKA08EN");
  RegisterUpgrade(&DAT_1000d6a8,"AKA08FR");
  RegisterUpgrade(&DAT_1000d6a0,"MAINEN");
  RegisterUpgrade(&DAT_1000d6b0,"MAINFR");
  ChangeFriends(0,3);
  SetPlayerName(1,"VILLAGE");
  SetPlayerName(2,"FRANCE");
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
  int uVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  char *pcVar12;
  void *pcVar13;
  char uVar14;
  char *pcVar15;
  
                    
  if (DAT_1000d728 == '\0') {
    DAT_1000d728 = '\x01';
    FUN_1000316f("Missions//miss_vic.txt",DAT_1000a33c);
    if (pFVar3 == (FILE *)0x0) {
      uVar9 = 0xffffffff;
      pcVar15 = DAT_1000a31c;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d6c8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = DAT_1000a314;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d6d7;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = "STONE";
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d6e6;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = DAT_1000a304;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d6f5;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = DAT_1000a2fc;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d704;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = DAT_1000a2f4;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d713;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = DAT_1000a2ec;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d300;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = DAT_1000a2e4;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d30f;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      FUN_10003085((int *)pFVar3,0,2);
      uVar9 = FUN_10002f02((char *)pFVar3);
      puVar4 = malloc(uVar9 + 1);
      FUN_10003085((int *)pFVar3,0,0);
      FUN_10002ddd((char *)puVar4,1,uVar9,(int *)pFVar3);
      FUN_10002d60(pFVar3);
      iVar11 = 0;
      iVar8 = 0;
      do {
        if (iVar8 == 0) {
          pcVar15 = DAT_1000a2dc;
LAB_1000258f:
          puVar5 = FUN_10002ce0(puVar4,pcVar15);
          iVar11 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar8 == 1) {
            pcVar15 = DAT_1000a2d4;
            goto LAB_1000258f;
          }
          if (iVar8 == 2) {
            pcVar15 = DAT_1000a2cc;
            goto LAB_1000258f;
          }
          if (iVar8 == 3) {
            pcVar15 = DAT_1000a2c4;
            goto LAB_1000258f;
          }
          if (iVar8 == 4) {
            pcVar15 = DAT_1000a2bc;
            goto LAB_1000258f;
          }
          if (iVar8 == 5) {
            pcVar15 = DAT_1000a2b4;
            goto LAB_1000258f;
          }
        }
        iVar11 = iVar11 + 5;
        sVar6 = FUN_10002ca0((byte *)(iVar11 + (int)puVar4),&DAT_1000a2b0);
        iVar1 = iVar8 * 0xf;
        strncpy((char *)((int)&DAT_1000d6c8 + iVar1),(char *)(iVar11 + (int)puVar4),sVar6);
        iVar8 = iVar8 + 1;
        *(char *)((int)&DAT_1000d6c8 + sVar6 + iVar1) = 0;
      } while (iVar8 < 6);
      iVar8 = 0;
      do {
        if (iVar8 == 0) {
          pcVar15 = DAT_1000a2ec;
LAB_100025fe:
          puVar5 = FUN_10002ce0(puVar4,pcVar15);
          iVar11 = (int)puVar5 - (int)puVar4;
        }
        else if (iVar8 == 1) {
          pcVar15 = DAT_1000a2e4;
          goto LAB_100025fe;
        }
        iVar11 = iVar11 + 10;
        sVar6 = FUN_10002ca0((byte *)(iVar11 + (int)puVar4),&DAT_1000a2b0);
        iVar1 = iVar8 * 0xf;
        strncpy((char *)((int)&DAT_1000d300 + iVar1),(char *)(iVar11 + (int)puVar4),sVar6);
        iVar8 = iVar8 + 1;
        *(char *)((int)&DAT_1000d300 + sVar6 + iVar1) = 0;
      } while (iVar8 < 2);
      FUN_10002b90((int *)puVar4);
    }
  }
  cVar2 = Trigg(1);
  if (cVar2 != '\0') {
    SetTrigg(1,0);
    RunTimer(1,200);
    EnableMission(0x41);
    EnableMission(0x44);
    DisableMission(0x42);
    DisableMission(0x43);
    SelectUnits(&DAT_1000d360,0);
    SelOpenGates(1);
    SetResource(0,0,5000);
    SetResource(0,3,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    SetResource(0,4,5000);
    SetResource(0,5,5000);
    SetResource(2,0,5000);
    SetResource(2,3,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    DisableUpgrade(0,&DAT_1000cfe8);
    DisableUpgrade(0,&DAT_1000cff0);
    DisableUpgrade(0,&DAT_1000d338);
    DisableUpgrade(0,&DAT_1000d328);
    DisableUpgrade(0,&DAT_1000d690);
    DisableUpgrade(0,&DAT_1000d6a8);
    DisableUpgrade(0,&DAT_1000d6a0);
    DisableUpgrade(0,&DAT_1000d6b0);
    uVar7 = GetDiff(0);
    StartAI(2,"FRANCE.0",2,1,1,uVar7);
    FUN_10001020(&DAT_1000cff8,'\0',0,(char *)&DAT_1000d300,&DAT_1000cfe0,1,4,DAT_1000a2a0,
                 &DAT_1000d380,0,0,0,0,3);
    FUN_10001020(&DAT_1000d380,'\x01',1,(char *)&DAT_1000d30f,&DAT_1000d368,1,3,DAT_1000a29c,
                 &DAT_1000cff8,0,0,0,0,0);
    ShowPage("#PAGE23");
    RunTimer(2,10);
    RunTimer(3,10);
  }
  FUN_100011c0(&DAT_1000cff8,&DAT_1000cfe0,DAT_1000a2a0,&DAT_1000d380,0,0,0,0);
  iVar8 = GetTotalAmount0(&DAT_1000d698);
  uVar14 = iVar8 == 2;
  iVar8 = GetTotalAmount0(&DAT_1000d348);
  FUN_10002070(&DAT_1000cff8,iVar8,uVar14);
  FUN_100011c0(&DAT_1000d380,&DAT_1000d368,DAT_1000a29c,&DAT_1000cff8,0,0,0,0);
  FUN_10001500(&DAT_1000cff8,0);
  FUN_10001500(&DAT_1000d380,0);
  cVar2 = TimerDone(2);
  if ((cVar2 != '\0') && (uVar7 = FUN_10001ab0(&DAT_1000cff8), (char)uVar7 != '\0')) {
    RunTimer(2,100);
  }
  cVar2 = TimerDone(2);
  if ((cVar2 != '\0') && (uVar7 = FUN_10001ab0(&DAT_1000d380), (char)uVar7 != '\0')) {
    RunTimer(3,100);
  }
  cVar2 = TimerDone(1);
  if (cVar2 != '\0') {
    FUN_10001210(0x1000cff8);
    FUN_10001210(0x1000d380);
    iVar8 = GetDiff(0);
    RunTimer(1,(iVar8 + 3) * 100);
  }
  cVar2 = Trigg(2);
  if ((cVar2 != '\0') &&
     (iVar8 = GetUnitsAmount0(&DAT_1000d688,0), pcVar13 = (void*)&ShowPage, iVar8 != 0)) {
    SetTrigg(2,0);
    ShowPage("#PAGE9");
    EnableMission(0x42);
    EnableMission(0x44);
    DisableMission(0x41);
    EnableMission(0x43);
  }
  cVar2 = Trigg(3);
  if ((cVar2 != '\0') && (iVar8 = GetUnitsAmount0(&DAT_1000d320,0), iVar8 != 0)) {
    ShowPage("#PAGE24");
    EnableUpgrade(0,&DAT_1000d690);
    SetTrigg(3,0);
  }
  cVar2 = NationIsErased(0);
  if (cVar2 != '\0') {
    ShowPage("#PAGE21");
    LooseGame();
  }
  cVar2 = NationIsErased(2);
  if (cVar2 != '\0') {
    ShowPage("#PAGE22");
    ShowVictory();
  }
  iVar8 = GetResource(0,0);
  if (70000 < iVar8) {
    SetResource(0,0,70000);
  }
  iVar8 = GetResource(0,3);
  if (70000 < iVar8) {
    SetResource(0,3,70000);
  }
  iVar8 = GetResource(0,2);
  if (70000 < iVar8) {
    SetResource(0,2,70000);
  }
  iVar8 = GetResource(0,1);
  if (70000 < iVar8) {
    SetResource(0,1,70000);
  }
  iVar8 = GetResource(0,4);
  if (70000 < iVar8) {
    SetResource(0,4,70000);
  }
  iVar8 = GetResource(0,5);
  if (70000 < iVar8) {
    SetResource(0,5,70000);
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
