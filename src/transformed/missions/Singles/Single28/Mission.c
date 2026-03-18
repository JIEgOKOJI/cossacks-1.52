#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
int DAT_1000c060 = 1;
long long DAT_1000c064 = 0;
long long DAT_1000c068 = 0;
long long DAT_1000c06c = 0;
long long DAT_1000c070 = 0;
long long DAT_1000c074 = 0;
long long DAT_1000c078 = 0;
long long DAT_1000c07c = 0;
long long DAT_1000c080 = 0;
long long DAT_1000c084 = 0;
long long DAT_1000c744 = 0;
char DAT_1000c748[] = "RESC";
char DAT_1000c750[] = "RESI";
char DAT_1000c758[] = "RESG";
char DAT_1000c760[] = "RESS";
char DAT_1000c768[] = "RESF";
char DAT_1000c770[] = "RESW";
char DAT_1000c780[] = "MIHALF";
char DAT_1000c7cc[] = "SITY";
char DAT_1000c7d4[] = "COAL";
char DAT_1000c7dc[] = "IRON";
char DAT_1000c7e4[] = "GOLD";
char DAT_1000c7f4[] = "FOOD";
char DAT_1000c7fc[] = "WOOD";
char DAT_1000c81c[] = "r";
long long DAT_1000f4b8 = 0;
int DAT_1000f78b = 0;
long long DAT_1000f7e8 = 0;
long long DAT_1000f7f0 = 0;
long long DAT_1000f7f8 = 0;
long long DAT_1000f800 = 0;
long long DAT_1000f808 = 0;
long long DAT_1000f810 = 0;
long long DAT_1000f818 = 0;
long long DAT_1000f820 = 0;
long long DAT_1000f828 = 0;
long long DAT_1000f830 = 0;
long long DAT_1000f838 = 0;
long long DAT_1000f840 = 0;
long long DAT_1000f848 = 0;
long long DAT_1000f850 = 0;
long long DAT_1000f858 = 0;
long long DAT_1000f860 = 0;
long long DAT_1000f868 = 0;
long long DAT_1000f870 = 0;
long long DAT_1000f878 = 0;
long long DAT_1000f880 = 0;
long long DAT_1000f888 = 0;
long long DAT_1000f890 = 0;
long long DAT_1000f898 = 0;
long long DAT_1000f8a0 = 0;
long long DAT_1000f8a8 = 0;
long long DAT_1000f8b0 = 0;
long long DAT_1000f8b8 = 0;
long long DAT_1000f8c0 = 0;
unsigned char DAT_1000f8c8[120] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1000f8d7 = 0;
long long DAT_1000f8e6 = 0;
long long DAT_1000f8f5 = 0;
long long DAT_1000f904 = 0;
long long DAT_1000f913 = 0;
long long DAT_1000f922 = 0;
long long DAT_1000f931 = 0;
long long DAT_1000f940 = 0;
long long DAT_1000f950 = 0;
long long DAT_1000f958 = 0;
long long DAT_1000f960 = 0;
long long DAT_1000f968 = 0;
long long DAT_1000f970 = 0;
long long DAT_1000f978 = 0;
int DAT_1000fc4b = 0;
long long DAT_1000fca8 = 0;
long long DAT_1000fcb0 = 0;
long long DAT_1000fcb8 = 0;
long long DAT_1000fcc0 = 0;
long long DAT_1000fcc8 = 0;
long long DAT_1000fcd0 = 0;
long long DAT_1000fcd8 = 0;
long long DAT_1000fce0 = 0;
long long DAT_1000fce8 = 0;
long long DAT_1000fcf0 = 0;
long long DAT_1000fcf8 = 0;
long long DAT_1000fd00 = 0;
long long DAT_1000fd08 = 0;
long long DAT_1000fd10 = 0;
long long DAT_1000fd18 = 0;
long long DAT_1000fd20 = 0;
long long DAT_1000fd28 = 0;
int DAT_1000fffb = 0;
long long DAT_10010058 = 0;
long long DAT_10010060 = 0;
long long DAT_10010068 = 0;
long long DAT_10010070 = 0;
long long DAT_10010078 = 0;
long long DAT_10010080 = 0;
long long DAT_10010088 = 0;
long long DAT_10010090 = 0;
long long DAT_10010098 = 0;
long long DAT_100100a0 = 0;
long long DAT_100100a8 = 0;
long long DAT_100100b0 = 0;
long long DAT_100100b8 = 0;
long long DAT_100100c0 = 0;
long long DAT_100100c8 = 0;
long long DAT_100100d0 = 0;
long long DAT_100100d8 = 0;
long long DAT_100100e0 = 0;
long long DAT_10010120 = 0;
long long DAT_10010128 = 0;
long long DAT_10010130 = 0;
long long DAT_10010138 = 0;
int DAT_1001040b = 0;
long long DAT_10010468 = 0;
int DAT_1001073b = 0;
long long DAT_10010798 = 0;
long long DAT_100107a0 = 0;
long long DAT_100107a8 = 0;
int DAT_10010a7b = 0;
long long DAT_10010ad8 = 0;
long long DAT_10010ae0 = 0;
long long DAT_10010ae8 = 0;
long long DAT_10010b28 = 0;
int DAT_10010dfb = 0;
long long DAT_10010e58 = 0;
int DAT_1001112b = 0;
long long DAT_10011188 = 0;
int DAT_1001145b = 0;
long long DAT_100114b8 = 0;
long long DAT_100114c0 = 0;
long long DAT_100114c8 = 0;
long long DAT_100114d0 = 0;
long long DAT_100114d8 = 0;
long long DAT_100114e0 = 0;
long long DAT_100114e8 = 0;
long long DAT_100114f0 = 0;
long long DAT_100114f8 = 0;
long long DAT_10011500 = 0;
long long DAT_10011508 = 0;
long long DAT_10011510 = 0;
long long DAT_10011518 = 0;
long long DAT_10011520 = 0;
long long DAT_10011528 = 0;
long long DAT_10011530 = 0;
long long DAT_10011538 = 0;
unsigned char DAT_10011540[800] = {0};
long long DAT_1001154f = 0;
long long DAT_1001155e = 0;
long long DAT_1001156d = 0;
long long DAT_1001157c = 0;
long long DAT_1001158b = 0;
int DAT_100115a0 = 0;
int DAT_100115a1 = 0;
int DAT_100115a2 = 0;
long long DAT_10011b60 = 0;

/* Stubs for missing internal functions */
int FUN_10005000() { return 0; }
int FUN_100055cb() { return 0; }
int FUN_10005848() { return 0; }
int FUN_1000589a() { return 0; }
int FUN_10005a25() { return 0; }
int FUN_10005b2e() { return 0; }
int FUN_10005c0a() { return 0; }
int FUN_10005e50() { return 0; }
int FUN_10006332() { return 0; }
int FUN_10006554() { return 0; }
int FUN_1000662c() { return 0; }
int FUN_1000679c() { return 0; }


/* Forward declarations */
void 
FUN_10001020(void *this_ptr,int param_1,int param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13);
void 
FUN_100011d0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void  FUN_10001220(int param_1);
void  FUN_100012d0(int param_1);
void  FUN_10001380(int param_1);
void  FUN_100014a0(int param_1);
int  FUN_10001580(int param_1);
void  FUN_100015c0(void *this_ptr,int param_1);
void  FUN_100016e0(int param_1);
int  FUN_10001870(int param_1);
int  FUN_100018a0(void *param_1);
void  FUN_10001940(void *param_1);
void  FUN_10001a70(void *param_1);
void  FUN_10001bc0(void *this_ptr,int param_1);
unsigned int  FUN_10001d00(void *param_1);
void  FUN_10001e90(void *this_ptr,int param_1);
void  FUN_10001ed0(void *this_ptr,int param_1);
void  FUN_10001f30(void *this_ptr,int param_1,void *param_2);
int  FUN_100022c0(void *this_ptr,int param_1);
int  FUN_10002330(void *this_ptr,int param_1);
void  FUN_100023a0(void *this_ptr,int param_1,int param_2);
void  FUN_10002450(void *this_ptr,int param_1,char param_2,char param_3);
int FUN_10002480(int param_1);
void 
FUN_100024a0(void *this_ptr,int param_1,char *param_2,int param_3,int param_4,
            int param_5);
void 
FUN_10002510(void *this_ptr,char *param_1,int param_2,int param_3,int param_4);
void 
FUN_10002560(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void 
FUN_10002630(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void  FUN_10002780(void *this_ptr,int param_1,int param_2);
void FUN_10004540(int param_1,int param_2,int param_3);
void FUN_10004e30(int *param_1);
int FUN_10004f40(byte *param_1,byte *param_2);
unsigned int * FUN_10004f80(unsigned int *param_1,char *param_2);
unsigned int FUN_1000507d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
unsigned int FUN_100050ac(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
int FUN_100051a2(char *param_1);
int FUN_100051c4(char *param_1);
int FUN_10005325(int *param_1,int param_2,DWORD param_3);
int FUN_10005351(int *param_1,int param_2,DWORD param_3);
int * FUN_100053de(LPCSTR param_1,char *param_2,unsigned int param_3);
void FUN_1000540f(LPCSTR param_1,char *param_2);

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
  
  *(int *)((int)this_ptr + 0x2cf) = param_2;
  *(int *)((int)this_ptr + 0x2b4) = param_10;
  *(int *)((int)this_ptr + 0x2d3) = param_4;
  *(int *)((int)this_ptr + 0x2ac) = param_8;
  *(int *)((int)this_ptr + 0x2b8) = param_11;
  *(int *)((int)this_ptr + 0x2b0) = param_9;
  *(int *)((int)this_ptr + 0x31c) = param_13 * 0xf;
  *(int *)((int)this_ptr + 700) = param_12;
  *(int *)((int)this_ptr + 0x2a8) = param_7;
  *(char *)((int)this_ptr + 0x313) = (char)param_5;
  uVar2 = -1;
  *(char *)((int)this_ptr + 800) = 1;
  *(char *)((int)this_ptr + 0x321) = 1;
  *(int *)((int)this_ptr + 0x314) = param_6;
  *(int *)((int)this_ptr + 0x326) = 1;
  *(char *)((int)this_ptr + 0x32a) = 1;
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
  pcVar5 = (char *)((int)this_ptr + 0x2c0);
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
  *(int *)((int)this_ptr + 0x2d7) = param_1;
  *(int *)((int)this_ptr + 0x2e7) = 1000;
  *(int *)((int)this_ptr + 0x2f7) = 0;
  *(int *)((int)this_ptr + 0x2f3) = 0;
  *(int *)((int)this_ptr + 0x2ef) = 0;
  *(int *)((int)this_ptr + 0x2eb) = 0;
  *(int *)((int)this_ptr + 0x2e3) = 0;
  if (param_1 == 0) {
    return;
  }
  if (((param_6 == 0) || (param_6 == 1)) || (param_6 == 2)) {
    RegisterDynGroup((int)this_ptr + 0x2db);
    CreateObject0(&DAT_100100a8,&DAT_100114b8,&DAT_1000fd18,param_5,param_4,0);
    RemoveGroup(&DAT_100100a8,(int)this_ptr + 0x2db);
  }
  if (param_6 == 0) {
    TakeWood((int)this_ptr + 0x2db);
  }
  else if (param_6 != 1) {
    if (param_6 != 2) {
      *(int *)((int)this_ptr + 0x318) = 0xf;
      return;
    }
    goto LAB_100011a4;
  }
  TakeFood((int)this_ptr + 0x2db);
LAB_100011a4:
  TakeStone((int)this_ptr + 0x2db);
  *(int *)((int)this_ptr + 0x318) = 0xf;
  return;
}





void 
FUN_100011d0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((int)this_ptr + 0x2ac) = param_3;
  *(int *)((int)this_ptr + 0x2b0) = param_4;
  *(int *)((int)this_ptr + 0x2b4) = param_5;
  *(int *)((int)this_ptr + 0x2b8) = param_6;
  *(int *)((int)this_ptr + 700) = param_7;
  *(int *)((int)this_ptr + 0x2a8) = param_2;
  *(int *)((int)this_ptr + 0x2d3) = param_1;
  return;
}





void  FUN_10001220(int param_1)

{
  if ((*(int *)(param_1 + 0x2d7) != 0) && (*(int *)(param_1 + 0x2d7) != 3)) {
    FUN_10001380(param_1);
    FUN_100014a0(param_1);
  }
  if (*(int *)(param_1 + 0x2d7) == 3) {
    if (3 < *(int *)(param_1 + 0x2e3)) {
      *(int *)(param_1 + 0x2e3) = *(int *)(param_1 + 0x2e3) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2e7)) {
      *(int *)(param_1 + 0x2e7) = *(int *)(param_1 + 0x2e7) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2eb)) {
      *(int *)(param_1 + 0x2eb) = *(int *)(param_1 + 0x2eb) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2f7)) {
      *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2f3)) {
      *(int *)(param_1 + 0x2f3) = *(int *)(param_1 + 0x2f3) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2ef)) {
      *(int *)(param_1 + 0x2ef) = *(int *)(param_1 + 0x2ef) + -2;
    }
  }
  return;
}





void  FUN_100012d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 100;
  *(int *)(param_1 + 0x30f) = 300;
  *(int *)(param_1 + 0x30b) = 300;
  *(int *)(param_1 + 0x2fb) = 100;
  *(int *)(param_1 + 0x303) = 100;
  *(int *)(param_1 + 0x2ff) = 200;
  *(int *)(param_1 + 0x307) = 500;
  iVar2 = 0xc;
  do {
    if (iVar1 < *(int *)(param_1 + 0x2e3)) {
      *(int *)(param_1 + 0x2fb) = *(int *)(param_1 + 0x2fb) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 0x2eb)) {
      *(int *)(param_1 + 0x303) = *(int *)(param_1 + 0x303) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 0x2e7)) {
      *(int *)(param_1 + 0x2ff) = *(int *)(param_1 + 0x2ff) + -0x10;
    }
    if (iVar1 < *(int *)(param_1 + 0x2f3)) {
      *(int *)(param_1 + 0x30b) = *(int *)(param_1 + 0x30b) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2f7)) {
      *(int *)(param_1 + 0x30f) = *(int *)(param_1 + 0x30f) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2ef)) {
      *(int *)(param_1 + 0x307) = *(int *)(param_1 + 0x307) + -0x28;
    }
    iVar1 = iVar1 * 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}





void  FUN_10001380(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10001580(param_1);
  iVar2 = 0;
  *(int *)(param_1 + 0x318) = iVar1;
  if (0 < iVar1) {
    do {
      if (*(char *)(param_1 + 800) == '\0') break;
      if ((0 < *(int *)(param_1 + 0x322)) && (4 < *(int *)(param_1 + 0x2e7))) {
        switch(*(int *)(param_1 + 0x314)) {
        case 0:
          *(int *)(param_1 + 0x2e3) = *(int *)(param_1 + 0x2e3) + 0x19;
          break;
        case 1:
          *(int *)(param_1 + 0x2e7) = *(int *)(param_1 + 0x2e7) + 0x14;
          break;
        case 2:
          *(int *)(param_1 + 0x2eb) = *(int *)(param_1 + 0x2eb) + 0x19;
          break;
        case 3:
          *(int *)(param_1 + 0x2ef) = *(int *)(param_1 + 0x2ef) + 5;
          break;
        case 4:
          *(int *)(param_1 + 0x2f3) = *(int *)(param_1 + 0x2f3) + 0xf;
          break;
        case 5:
          *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + 0xf;
        }
        *(int *)(param_1 + 0x2e7) = *(int *)(param_1 + 0x2e7) + -5;
        *(int *)(param_1 + 0x322) = *(int *)(param_1 + 0x322) + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (*(int *)(param_1 + 0x2d7) != 2) {
    *(int *)(param_1 + 0x322) = *(int *)(param_1 + 0x322) + (3 - *(int *)(param_1 + 0x326)) * iVar1;
    AddResource(*(char *)(param_1 + 0x313) + -1,1,*(int *)(param_1 + 0x326) * iVar1);
    FUN_100012d0(param_1);
    return;
  }
  *(int *)(param_1 + 0x322) = *(int *)(param_1 + 0x322) + iVar1;
  FUN_100012d0(param_1);
  return;
}





void  FUN_100014a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x322) < 0x3e9) {
    return;
  }
  iVar1 = FUN_10001580(param_1);
  if (*(int *)(param_1 + 0x31c) <= iVar1) {
    return;
  }
  iVar1 = FUN_10001580(param_1);
  *(int *)(param_1 + 0x318) = iVar1;
  iVar1 = *(int *)(param_1 + 0x314);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) goto LAB_1000155f;
  CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_1000fd18,*(char *)(param_1 + 0x313),
                *(int *)(param_1 + 0x2d3),0);
  iVar1 = *(int *)(param_1 + 0x314);
  if (iVar1 == 0) {
    TakeWood(&DAT_100100a8);
LAB_1000152e:
    TakeFood(&DAT_100100a8);
LAB_1000153c:
    TakeStone(&DAT_100100a8);
  }
  else {
    if (iVar1 == 1) goto LAB_1000152e;
    if (iVar1 == 2) goto LAB_1000153c;
  }
  RemoveGroup(&DAT_100100a8,param_1 + 0x2db);
LAB_1000155f:
  *(int *)(param_1 + 0x322) = *(int *)(param_1 + 0x322) + -1000;
  *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
  return;
}





int  FUN_10001580(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x314);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    iVar1 = GetTotalAmount0(param_1 + 0x2db);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x318);
    if (*(int *)(param_1 + 0x31c) <= iVar1) {
      return *(int *)(param_1 + 0x31c);
    }
  }
  return iVar1;
}





void  FUN_100015c0(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  if (*(int *)((int)this_ptr + 0x2d7) == 0) {
    return;
  }
  if (*(char *)((int)this_ptr + 0x321) == '\0') {
    return;
  }
  if ((*(char *)((int)this_ptr + 0x32a) == '\0') ||
     (iVar1 = GetUnitsAmount2(*(int *)((int)this_ptr + 0x2d3),&DAT_10010ae0,param_1), iVar1 == 0)
     ) goto switchD_1000163a_default;
  iVar1 = *(int *)((int)this_ptr + 0x2d7);
  if (iVar1 == 1) {
    uVar2 = AskMultilineQuestion(9,"#PAGE1",0,"VI1_1|VI1_2|VI1_3|VI1_4");
    switch(uVar2) {
    case 0:
      goto switchD_1000163a_caseD_0;
    case 1:
      uVar2 = FUN_10001870((int)this_ptr);
      *(char *)((int)this_ptr + 0x32a) = (char)uVar2;
      break;
    case 2:
switchD_1000163a_caseD_2:
      uVar2 = FUN_100018a0(this_ptr);
      *(char *)((int)this_ptr + 0x32a) = (char)uVar2;
      break;
    case 3:
switchD_1000163a_caseD_3:
      *(char *)((int)this_ptr + 0x32a) = 0;
    }
  }
  else {
    if ((iVar1 != 2) && (iVar1 != 3)) goto switchD_1000163a_default;
    iVar1 = AskMultilineQuestion(9,"#PAGE1",0,"VI1_1|VI1_3|VI1_4");
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 != 2) goto switchD_1000163a_default;
        goto switchD_1000163a_caseD_3;
      }
      goto switchD_1000163a_caseD_2;
    }
switchD_1000163a_caseD_0:
    FUN_100016e0((int)this_ptr);
    *(char *)((int)this_ptr + 0x32a) = 1;
  }
switchD_1000163a_default:
  if ((*(char *)((int)this_ptr + 0x32a) == '\0') &&
     (iVar1 = GetUnitsAmount2(*(int *)((int)this_ptr + 0x2d3),&DAT_10010ae0,param_1), iVar1 == 0)
     ) {
    *(char *)((int)this_ptr + 0x32a) = 1;
  }
  return;
}





void  FUN_100016e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_10001580(param_1);
  iVar1 = *(int *)(param_1 + 0x2d7);
  if (iVar1 == 1) {
    ShowPageParam("#PAGE11",param_1 + 0x2c0,
                  (int)((unsigned char *)&DAT_10011540) + *(int *)(param_1 + 0x314) * 0xf,&DAT_10011540,
                  *(int *)(param_1 + 0x2e3),&DAT_1001154f,*(int *)(param_1 + 0x2e7),
                  &DAT_1001155e,*(int *)(param_1 + 0x2eb),&DAT_1001156d,
                  *(int *)(param_1 + 0x2ef),&DAT_1001157c,*(int *)(param_1 + 0x2f3),
                  &DAT_1001158b,*(int *)(param_1 + 0x2f7),
                  (3 - *(int *)(param_1 + 0x326)) * iVar2,*(int *)(param_1 + 0x326) * iVar2,iVar2,
                  *(int *)(param_1 + 0x322),iVar2);
    return;
  }
  if (iVar1 == 2) {
    ShowPageParam("#PAGE40",param_1 + 0x2c0,
                  (int)((unsigned char *)&DAT_10011540) + *(int *)(param_1 + 0x314) * 0xf,&DAT_10011540,
                  *(int *)(param_1 + 0x2e3),&DAT_1001154f,*(int *)(param_1 + 0x2e7),
                  &DAT_1001155e,*(int *)(param_1 + 0x2eb),&DAT_1001156d,
                  *(int *)(param_1 + 0x2ef),&DAT_1001157c,*(int *)(param_1 + 0x2f3),
                  &DAT_1001158b,*(int *)(param_1 + 0x2f7),*(int *)(param_1 + 0x322),
                  iVar2);
    return;
  }
  if (iVar1 == 3) {
    ShowPageParam("#PAGE41",param_1 + 0x2c0,&DAT_10011540,*(int *)(param_1 + 0x2e3),
                  &DAT_1001154f,*(int *)(param_1 + 0x2e7),&DAT_1001155e,
                  *(int *)(param_1 + 0x2eb),&DAT_1001156d,*(int *)(param_1 + 0x2ef),
                  &DAT_1001157c,*(int *)(param_1 + 0x2f3),&DAT_1001158b,
                  *(int *)(param_1 + 0x2f7));
  }
  return;
}





int  FUN_10001870(int param_1)

{
  int uVar1;
  
  uVar1 = AskMultilineQuestion(9,"#PAGE12",0,"TPW1_0|TPW1_1|TPW1_2|TPW1_3");
  *(int *)(param_1 + 0x326) = uVar1;
  return (int)1;
}





int  FUN_100018a0(void *param_1)

{
  int iVar1;
  
LAB_100018aa:
  while (iVar1 = *(int *)((intptr_t)param_1 + 0x2d7), iVar1 == 1) {
    iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_1|TR1_3|TR1_4");
    if (iVar1 == 0) {
LAB_100018f7:
      FUN_10001940(param_1);
    }
    else {
      if (iVar1 == 1) goto LAB_10001922;
      if (iVar1 == 2) {
        return 1;
      }
    }
  }
  if (iVar1 == 2) {
    iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_1|TR1_4");
    if (iVar1 == 0) goto LAB_100018f7;
  }
  else {
    if (iVar1 != 3) goto LAB_100018aa;
    iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_3|TR1_4");
    if (iVar1 == 0) {
LAB_10001922:
      FUN_10001a70(param_1);
      goto LAB_100018aa;
    }
  }
  if (iVar1 == 1) {
    return 1;
  }
  goto LAB_100018aa;
}





void  FUN_10001940(void *param_1)

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
  FUN_100012d0((intptr_t)param_1);
  iVar2 = FUN_10002330(param_1,pvVar5);
  iVar3 = FUN_10002330(param_1,pvVar4);
  ShowPageParam("#PAGE131",(int)((unsigned char *)&DAT_10011540) + (int)pvVar5 * 0xf,100,
                (int)((unsigned char *)&DAT_10011540) + (int)pvVar4 * 0xf,(iVar2 * 100) / iVar3);
  return;
}





void  FUN_10001a70(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX = 0;
  
  iVar2 = AskMultilineQuestion(9,"#PAGE133",0,"NO1_1|NO1_2|NO1_3|NO1_4|NO1_5|NO1_6|NO1_7|NO1_8|NO1_9|NO1_10");
  iVar3 = AskMultilineQuestion(9,"#PAGE1331",0,"OD1_0|OD1_1|OD1_2");
  if (iVar3 == 0) {
    pvVar1 = (void *)((intptr_t)param_1 + iVar2 * 0x44);
    iVar2 = GetTotalAmount0(pvVar1);
    if (iVar2 != 0) {
      iVar2 = (int)((unsigned char *)&DAT_10011540) + *(int *)((int)pvVar1 + 0x11) * 0xf;
      iVar3 = (int)((unsigned char *)&DAT_10011540) + *(int *)((int)pvVar1 + 9) * 0xf;
      ShowPageParam("#PAGE7",(int)pvVar1 + 0x29,iVar3,iVar2,iVar3,
                    *(int *)((int)pvVar1 + 0xd),iVar2,*(int *)((int)pvVar1 + 0x15));
      return;
    }
    ShowPage("#PAGE8");
  }
  else {
    if (iVar3 == 1) {
      pvVar1 = (void *)((intptr_t)param_1 + iVar2 * 0x44);
      iVar3 = GetTotalAmount0(pvVar1);
      if (iVar3 == 0) {
        FUN_100024a0(pvVar1,*(int *)((intptr_t)param_1 + 0x2d7),(char *)((intptr_t)param_1 + 0x2c0),
                     *(int *)((intptr_t)param_1 + 0x2cf),
                     (int)*(char *)((intptr_t)param_1 + 0x313)
                     ,*(int *)((intptr_t)param_1 + 0x2d3));
      }
      FUN_10001bc0(param_1,iVar2);
      return;
    }
    if (iVar3 == 2) {
      pvVar1 = (void *)((intptr_t)param_1 + iVar2 * 0x44);
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





void  FUN_10001bc0(void *this_ptr,int param_1)

{
  void *this_00;
  int iVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = AskMultilineQuestion(9,"#PAGE4",0,*(int *)((int)this_ptr + 0x2a8));
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
  iVar1 = *(int *)((int)this_ptr + iVar1 * 4 + 0x2ac);
  this_00 = (void *)((int)this_ptr + param_1 * 0x44);
  FUN_10002510(this_00,(char *)(iVar1 + 0x2c0),*(int *)(iVar1 + 0x2cf),iVar4,iVar3);
  SelectUnits(this_00,0);
  SelSendTo(*(char *)((int)this_00 + 8),*(int *)((int)this_ptr + 0x2d3),0,0);
  *(char *)((int)this_00 + 0x19) = 0;
  return;
}





unsigned int  FUN_10001d00(void *param_1)

{
  int in_EAX;
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  unsigned int uStack_8;
  int uVar6;
  
  uVar6 = (int)((unsigned int)in_EAX >> 8);
  uVar1 = (int)*(char *)((intptr_t)param_1 + 0x321);
  if (*(char *)((intptr_t)param_1 + 0x321) != '\0') {
    iVar2 = GetUnitsAmount2(*(int *)((intptr_t)param_1 + 0x2d3),&DAT_100100d8,
                            (int)*(char *)((intptr_t)param_1 + 0x313));
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = 0;
      pvVar8 = param_1;
      do {
        if (*(char *)((int)pvVar8 + 0x19) == '\0') {
          iVar3 = GetUnitsAmount1(*(int *)((intptr_t)param_1 + 0x2d3),pvVar8);
          if (iVar3 != 0) {
            pvVar8 = (void *)((intptr_t)param_1 + iVar2 * 0x44);
            *(char *)((int)pvVar8 + 0x19) = 1;
            FUN_10001e90(param_1,(int)pvVar8);
            FUN_10001ed0(param_1,(int)pvVar8);
            FUN_10004540((int)pvVar8,*(int *)((int)pvVar8 + 0x38),
                                 *(int *)((int)pvVar8 + 0x3c));
            return (int)1;
          }
        }
        iVar2 = iVar2 + 1;
        pvVar8 = (void *)((int)pvVar8 + 0x44);
      } while (iVar2 < 10);
      uStack_8 = 0;
      piVar7 = (int *)((intptr_t)param_1 + 0x2ac);
      do {
        if (*piVar7 != 0) {
          iVar3 = 0;
          iVar9 = 0;
          do {
            if (*(char *)(*piVar7 + iVar9 + 0x19) != '\0') {
              iVar4 = GetUnitsAmount1(*(int *)((intptr_t)param_1 + 0x2d3),*piVar7 + iVar9);
              if (iVar4 != 0) {
                iVar3 = iVar3 * 0x44;
                *(char *)(*(int *)((intptr_t)param_1 + uStack_8 * 4 + 0x2ac) + 0x19 + iVar3) = 0;
                if (*(int *)((intptr_t)param_1 + 0x2d7) == 3) {
                  pvVar8 = (void *)((intptr_t)param_1 + iVar2 * 0x44);
                  FUN_10001e90(param_1,(int)pvVar8);
                  FUN_10001ed0(param_1,(int)pvVar8);
                }
                else {
                  pvVar8 = *(void **)((intptr_t)param_1 + uStack_8 * 4 + 0x2ac);
                  FUN_10001f30(param_1,(int)(iVar3 + (int)pvVar8),pvVar8);
                }
                iVar3 = *(int *)((intptr_t)param_1 + uStack_8 * 4 + 0x2ac) + iVar3;
                FUN_10004540(iVar3,*(int *)(iVar3 + 0x3c),*(int *)(iVar3 + 0x38));
                return (int)1;
              }
            }
            iVar9 = iVar9 + 0x44;
            iVar3 = iVar3 + 1;
          } while (iVar9 < 0x2a8);
        }
        piVar7 = piVar7 + 1;
        uStack_8 = uStack_8 + 1;
      } while ((int)uStack_8 < 5);
      return uStack_8 & -256;
    }
  }
  return uVar1 & -256;
}





void  FUN_10001e90(void *this_ptr,int param_1)

{
  FUN_100023a0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
  FUN_100023a0(this_ptr,*(int *)(param_1 + 0x11),*(int *)(param_1 + 0x15));
  *(int *)(param_1 + 0x15) = 0;
  *(int *)(param_1 + 0xd) = 0;
  return;
}





void  FUN_10001ed0(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = FUN_100022c0(this_ptr,*(int *)(param_1 + 9));
  if (299 < iVar1) {
    *(int *)(param_1 + 0xd) = 300;
    FUN_100023a0(this_ptr,*(int *)(param_1 + 9),-300);
    return;
  }
  uVar2 = FUN_100022c0(this_ptr,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = uVar2;
  iVar1 = FUN_100022c0(this_ptr,*(int *)(param_1 + 9));
  FUN_100023a0(this_ptr,*(int *)(param_1 + 9),-iVar1);
  return;
}





void  FUN_10001f30(void *this_ptr,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar1 = *(int *)((int)this_ptr + 0x2d7);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 1) {
      iVar1 = FUN_10002330(param_2,*(int *)(param_1 + 9));
      iVar1 = iVar1 * *(int *)(param_1 + 0xd);
      iVar2 = FUN_10002480(*(int *)(param_1 + 0x11));
      iVar3 = GetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar2);
      iVar2 = FUN_10002330(param_2,*(int *)(param_1 + 0x11));
      iVar3 = iVar3 * iVar2;
      if (iVar1 <= iVar3) {
        uVar4 = *(int *)(param_1 + 0xd);
        iVar2 = FUN_10002480(*(int *)(param_1 + 9));
        AddResource(*(char *)((int)this_ptr + 0x313) + -1,iVar2,uVar4);
        *(int *)(param_1 + 0xd) = 0;
        iVar2 = FUN_10002330(param_2,*(int *)(param_1 + 0x11));
        *(int *)(param_1 + 0x15) = iVar1 / iVar2;
        iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
        iVar1 = GetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1);
        iVar1 = iVar1 - *(int *)(param_1 + 0x15);
        iVar2 = FUN_10002480(*(int *)(param_1 + 0x11));
        SetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar2,iVar1);
        return;
      }
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      uVar4 = GetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1);
      *(int *)(param_1 + 0x15) = uVar4;
      uVar4 = 0;
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      SetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1,uVar4);
      iVar1 = FUN_10002330(param_2,*(int *)(param_1 + 9));
      *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar3 / iVar1;
      iVar1 = FUN_10002330(param_2,*(int *)(param_1 + 9));
      iVar3 = iVar3 / iVar1;
      iVar1 = FUN_10002480(*(int *)(param_1 + 9));
      AddResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1,iVar3);
      return;
    }
    if ((iVar1 == 2) || (iVar1 == 3)) {
      uVar4 = *(int *)(param_1 + 0xd);
      iVar1 = FUN_10002480(*(int *)(param_1 + 9));
      AddResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1,uVar4);
      uVar4 = *(int *)(param_1 + 0x15);
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      AddResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1,uVar4);
      *(int *)(param_1 + 0x15) = 0;
      *(int *)(param_1 + 0xd) = 0;
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      iVar1 = GetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1);
      if (299 < iVar1) {
        *(int *)(param_1 + 0x15) = 300;
        iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
        iVar1 = GetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1);
        iVar1 = iVar1 + -300;
        iVar2 = FUN_10002480(*(int *)(param_1 + 0x11));
        SetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar2,iVar1);
        return;
      }
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      uVar4 = GetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1);
      *(int *)(param_1 + 0x15) = uVar4;
      uVar4 = 0;
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      SetResource(*(char *)((int)this_ptr + 0x313) + -1,iVar1,uVar4);
      return;
    }
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    iVar1 = FUN_10002330(this_ptr,*(int *)(param_1 + 9));
    iVar1 = iVar1 * *(int *)(param_1 + 0xd);
    iVar2 = FUN_10002330(this_ptr,*(int *)(param_1 + 0x11));
    iVar3 = FUN_100022c0(this_ptr,*(int *)(param_1 + 0x11));
    iVar2 = iVar2 * iVar3;
    if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
      FUN_100023a0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
      *(int *)(param_1 + 0xd) = 0;
      iVar2 = FUN_10002330(this_ptr,*(int *)(param_1 + 0x11));
      *(int *)(param_1 + 0x15) = iVar1 / iVar2;
      FUN_100023a0(this_ptr,*(int *)(param_1 + 0x11),-(iVar1 / iVar2));
      return;
    }
    uVar4 = FUN_100022c0(this_ptr,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = uVar4;
    iVar1 = FUN_100022c0(this_ptr,*(int *)(param_1 + 0x11));
    FUN_100023a0(this_ptr,*(int *)(param_1 + 0x11),-iVar1);
    iVar1 = FUN_10002330(this_ptr,*(int *)(param_1 + 9));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar2 / iVar1;
    iVar1 = FUN_10002330(this_ptr,*(int *)(param_1 + 9));
    FUN_100023a0(this_ptr,*(int *)(param_1 + 9),iVar2 / iVar1);
  }
  return;
}





int  FUN_100022c0(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((int)this_ptr + 0x2e3);
  case 1:
    return *(int *)((int)this_ptr + 0x2e7);
  case 2:
    return *(int *)((int)this_ptr + 0x2eb);
  case 3:
    return *(int *)((int)this_ptr + 0x2ef);
  case 4:
    return *(int *)((int)this_ptr + 0x2f3);
  case 5:
    return *(int *)((int)this_ptr + 0x2f7);
  default:
    return 0;
  }
}





int  FUN_10002330(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((int)this_ptr + 0x2fb);
  case 1:
    return *(int *)((int)this_ptr + 0x2ff);
  case 2:
    return *(int *)((int)this_ptr + 0x303);
  case 3:
    return *(int *)((int)this_ptr + 0x307);
  case 4:
    return *(int *)((int)this_ptr + 0x30b);
  case 5:
    return *(int *)((int)this_ptr + 0x30f);
  default:
    return 0;
  }
}





void  FUN_100023a0(void *this_ptr,int param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((int)this_ptr + 0x2e3) = *(int *)((int)this_ptr + 0x2e3) + param_2;
    return;
  case 1:
    *(int *)((int)this_ptr + 0x2e7) = *(int *)((int)this_ptr + 0x2e7) + param_2;
    return;
  case 2:
    *(int *)((int)this_ptr + 0x2eb) = *(int *)((int)this_ptr + 0x2eb) + param_2;
    return;
  case 3:
    *(int *)((int)this_ptr + 0x2ef) = *(int *)((int)this_ptr + 0x2ef) + param_2;
    return;
  case 4:
    *(int *)((int)this_ptr + 0x2f3) = *(int *)((int)this_ptr + 0x2f3) + param_2;
    return;
  case 5:
    *(int *)((int)this_ptr + 0x2f7) = *(int *)((int)this_ptr + 0x2f7) + param_2;
  }
  return;
}





void  FUN_10002450(void *this_ptr,int param_1,char param_2,char param_3)

{
  *(char *)((int)this_ptr + 800) = param_2;
  *(int *)((int)this_ptr + 0x31c) = param_1 * 0xf;
  *(char *)((int)this_ptr + 0x321) = param_3;
  return;
}





int FUN_10002480(int param_1)

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
FUN_100024a0(void *this_ptr,int param_1,char *param_2,int param_3,int param_4,
            int param_5)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  CreateObject0(this_ptr,&DAT_1000f890,&DAT_100100d8,param_4,param_5,0);
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
  *(int *)((int)this_ptr + 0x40) = param_1;
  *(int *)((int)this_ptr + 0x38) = param_3;
  *(char *)((int)this_ptr + 8) = (char)param_4;
  *(char *)((int)this_ptr + 0x19) = 0;
  *(int *)((int)this_ptr + 0x15) = 0;
  *(int *)((int)this_ptr + 0xd) = 0;
  return;
}





void 
FUN_10002510(void *this_ptr,char *param_1,int param_2,int param_3,int param_4)

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
  *(char *)((int)this_ptr + 0x19) = 0;
  *(int *)((int)this_ptr + 0x3c) = param_2;
  *(int *)((int)this_ptr + 0x15) = 0;
  *(int *)((int)this_ptr + 0xd) = 0;
  *(int *)((int)this_ptr + 9) = param_3;
  *(int *)((int)this_ptr + 0x11) = param_4;
  return;
}





void 
FUN_10002560(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((int)this_ptr + 8) = param_5;
  *(int *)this_ptr = param_4;
  *(int *)((int)this_ptr + 4) = 0;
  *(int *)((int)this_ptr + 0xc) = param_6;
  *(int *)((int)this_ptr + 0x10) = param_7;
  *(char *)((int)this_ptr + 0x14) = 0;
  CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_10010ad8,param_4,param_1,0);
  RemoveGroup(&DAT_100100a8,(int)this_ptr + 0x15);
  CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_10010ad8,param_4,param_2,0);
  RemoveGroup(&DAT_100100a8,(int)this_ptr + 0x1d);
  CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_10010ad8,param_4,param_3,0);
  RemoveGroup(&DAT_100100a8,(int)this_ptr + 0x25);
  RunTimer(*(char *)((int)this_ptr + 0xc),10);
  RunTimer(*(char *)((int)this_ptr + 0x10),param_5);
  return;
}





void 
FUN_10002630(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(char *)((int)this_ptr + 0xc));
  if ((cVar1 != '\0') && (*(int *)((int)this_ptr + 4) != 0)) {
    RunTimer(*(char *)((int)this_ptr + 0xc),0x14);
    *(int *)((int)this_ptr + 4) = *(int *)((int)this_ptr + 4) + -1;
    iVar2 = GetTotalAmount0((int)this_ptr + 0x15);
    if (iVar2 != 0) {
      CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_100100a0,*(char *)this_ptr,param_1,0);
      SelectUnits(&DAT_100100a8,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_100100a8,(int)this_ptr + 0x2d);
    }
    iVar2 = GetTotalAmount0((int)this_ptr + 0x1d);
    if (iVar2 != 0) {
      CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_100100a0,*(char *)this_ptr,param_2,0);
      SelectUnits(&DAT_100100a8,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_100100a8,(int)this_ptr + 0x2d);
    }
    iVar2 = GetTotalAmount0((int)this_ptr + 0x25);
    if (iVar2 != 0) {
      CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_1000fcc8,*(char *)this_ptr,param_3,0);
      SelectUnits(&DAT_100100a8,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_100100a8,(int)this_ptr + 0x35);
    }
  }
  return;
}





void  FUN_10002780(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(char *)((int)this_ptr + 0x10));
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0((int)this_ptr + 0x2d);
    if (iVar2 < 0x33) {
      iVar2 = GetTotalAmount0((int)this_ptr + 0x35);
      if (iVar2 < 0x15) {
        *(int *)((int)this_ptr + 4) = param_1;
        *(char *)((int)this_ptr + 0x14) = 1;
        SelectUnits((int)this_ptr + 0x2d,0);
        SelectUnits((int)this_ptr + 0x35,1);
        SelSendAndKill(*(char *)this_ptr,param_2,0,0);
        RunTimer(*(char *)((int)this_ptr + 0x10),*(int *)((int)this_ptr + 8));
      }
    }
  }
  return;
}





void __cdecl FUN_10004540(int param_1,int param_2,int param_3)

{
  int *puVar1;
  int uVar2;
  
  SelectUnits(param_1,0);
  switch(param_2) {
  case 0:
    if (param_3 == 1) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011530,0xc0,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011538,0xc0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011520,0xc0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011528,0xd0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011510,0xf0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011518,0xc0,2);
      SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),0x3c,2);
      return;
    }
    if (param_3 == 2) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f860,0x40,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f848,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f858,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f828,0x20,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f838,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f820,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),0x3c,2);
      return;
    }
    if (param_3 == 6) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011530,0xc0,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011538,0xc0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011520,0xc0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011528,0xd0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011510,0xf0,2);
      SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),0x3c,2);
      return;
    }
    if (param_3 == 8) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f860,0x40,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f848,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f858,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f828,0x20,2);
      uVar2 = 0x3c;
      puVar1 = 0;
      goto LAB_10004d7a;
    }
  case 1:
    if (param_3 == 0) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011518,0x50,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011510,0x70,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011528,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011520,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011538,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011530,0x40,2);
      uVar2 = 0x3c;
LAB_100047d7:
      SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),uVar2,2);
      return;
    }
    break;
  case 2:
    if (param_3 == 0) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f820,0xc0,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f838,0x81,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f828,0xa0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f858,0xc0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f848,0xe0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000f860,0xc0,2);
      uVar2 = 0xa0;
      goto LAB_100047d7;
    }
    break;
  case 3:
    break;
  case 4:
    goto switchD_10004563_caseD_4;
  case 5:
    goto switchD_10004563_caseD_5;
  case 6:
    goto switchD_10004563_caseD_6;
  case 7:
    goto switchD_10004563_caseD_7;
  case 8:
    goto switchD_10004563_caseD_8;
  default:
    goto switchD_10004563_default;
  }
  if (param_3 == 5) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8c0,0x40,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8b8,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8b0,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8a8,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8a0,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f898,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),0xa0,2);
    return;
  }
switchD_10004563_caseD_4:
  if (param_3 == 7) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f880,0x80,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f878,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f870,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f868,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),0xa0,2);
    return;
  }
switchD_10004563_caseD_5:
  if (param_3 == 3) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f898,0,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8a0,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8a8,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8b0,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8b8,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f8c0,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),0xa0,2);
    return;
  }
  if (param_3 == 6) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010058,0x80,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010060,0x70,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010090,0x50,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010098,0x50,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010080,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010088,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010070,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010078,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010068,0x80,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f950,0x80,2);
    puVar1 = 0;
  }
  else {
switchD_10004563_caseD_6:
    if (param_3 == 0) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011510,0x70,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011528,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011520,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011538,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_10011530,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),0xa0,2);
      return;
    }
    if (param_3 != 5) {
switchD_10004563_caseD_7:
      if (param_3 == 4) {
        SelSendTo(*(char *)(param_1 + 8),&DAT_1000f868,0,0);
        SelSendTo(*(char *)(param_1 + 8),&DAT_1000f870,0,2);
        SelSendTo(*(char *)(param_1 + 8),&DAT_1000f878,0,2);
        SelSendTo(*(char *)(param_1 + 8),&DAT_1000f880,0,2);
        uVar2 = 0xa0;
        puVar1 = 0;
      }
      else {
        if (param_3 == 8) {
          SelSendTo(*(char *)(param_1 + 8),&DAT_1000fcb0,0x80,0);
          SelSendTo(*(char *)(param_1 + 8),&DAT_1000fca8,0xc0,2);
          SelSendTo(*(char *)(param_1 + 8),&DAT_1000fcc0,0xc0,2);
          SelSendTo(*(char *)(param_1 + 8),&DAT_1000fcb8,0x80,2);
          SelSendTo(*(char *)(param_1 + 8),&DAT_1000f970,0x80,2);
          SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),0xa0,2);
          return;
        }
switchD_10004563_caseD_8:
        if (param_3 != 0) {
          if (param_3 == 7) {
            SelSendTo(*(char *)(param_1 + 8),&DAT_1000f970,0,0);
            SelSendTo(*(char *)(param_1 + 8),&DAT_1000fcb8,0,2);
            SelSendTo(*(char *)(param_1 + 8),&DAT_1000fcc0,0x40,2);
            SelSendTo(*(char *)(param_1 + 8),&DAT_1000fca8,0x40,2);
            SelSendTo(*(char *)(param_1 + 8),&DAT_1000fcb0,0,2);
            SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2d3),0xa0,2)
            ;
          }
switchD_10004563_default:
          return;
        }
        SelSendTo(*(char *)(param_1 + 8),&DAT_1000f828,0xa0,0);
        SelSendTo(*(char *)(param_1 + 8),&DAT_1000f858,0xc0,2);
        SelSendTo(*(char *)(param_1 + 8),&DAT_1000f848,0xe0,2);
        SelSendTo(*(char *)(param_1 + 8),&DAT_1000f860,0xc0,2);
        uVar2 = 0xa0;
        puVar1 = 0;
      }
LAB_10004d7a:
      SelSendTo(*(char *)(param_1 + 8),*(int *)(puVar1 + 0x2d3),uVar2,2);
      return;
    }
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000f950,0,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010068,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010078,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010070,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010088,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010080,0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010098,0xd0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010090,0xd0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010060,0xf0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_10010058,0,2);
    puVar1 = 0;
  }
  SelSendTo(*(char *)(param_1 + 8),*(int *)(puVar1 + 0x2d3),0xa0,2);
  return;
}





void __cdecl FUN_10004e30(int *param_1)

{
  FUN_100055cb(param_1);
  return;
}





int __cdecl FUN_10004f40(byte *param_1,byte *param_2)

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





unsigned int * __cdecl FUN_10004f80(unsigned int *param_1,char *param_2)

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





unsigned int __cdecl FUN_1000507d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned int uVar1;
  
  FUN_10005848((unsigned int)param_4);
  uVar1 = FUN_100050ac(param_1,param_2,param_3,param_4);
  FUN_1000589a((unsigned int)param_4);
  return uVar1;
}





unsigned int __cdecl FUN_100050ac(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

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
          uVar4 = FUN_10005b2e(piVar1);
          if (uVar4 == -1) goto LAB_10005188;
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
          iVar3 = FUN_10005c0a(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_10005188:
            return (unsigned int)((int)pcVar6 - (intptr_t)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10005188;
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
        FUN_10005e50((int *)pcVar5,(int *)*piVar1,(unsigned int)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}





int __cdecl FUN_100051a2(char *param_1)

{
  int iVar1;
  
  FUN_10005848((unsigned int)param_1);
  iVar1 = FUN_100051c4(param_1);
  FUN_1000589a((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_100051c4(char *param_1)

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
  local_8 = FUN_10006554(uVar1,0,1);
  if ((intptr_t)local_8 < 0) {
LAB_10005252:
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
        pDVar4 = FUN_10006332();
        *pDVar4 = 0x16;
        goto LAB_10005252;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)(((long long *)&DAT_10011b60)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
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
          if ((*(byte *)(iVar10 + 4 + ((long long *)&DAT_10011b60)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_10006554(uVar1,0,2);
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
              FUN_10006554(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(unsigned int *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(unsigned int *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + ((long long *)&DAT_10011b60)[(int)uVar1 >> 5]) & 4;
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





int __cdecl FUN_10005325(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10005848((unsigned int)param_1);
  iVar1 = FUN_10005351(param_1,param_2,param_3);
  FUN_1000589a((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10005351(int *param_1,int param_2,DWORD param_3)

{
  unsigned int uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10006332();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & -17;
    if (param_3 == 1) {
      iVar2 = FUN_100051c4((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10005a25(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & -4;
    }
    DVar3 = FUN_10006554(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != -1) - 1;
  }
  return iVar2;
}





int * __cdecl FUN_100053de(LPCSTR param_1,char *param_2,unsigned int param_3)

{
  int *puVar1;
  int *puVar2;
  
  puVar1 = FUN_1000679c();
  if (puVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = FUN_1000662c(param_1,param_2,param_3,puVar1);
  FUN_1000589a((unsigned int)puVar1);
  return puVar2;
}





void __cdecl FUN_1000540f(LPCSTR param_1,char *param_2)

{
  FUN_100053de(param_1,param_2,0x40);
  return;
}





void OnInit(void)

{
                    
  RegisterFormation(&DAT_1000f890,"#ALONE");
  RegisterFormation(&DAT_100114b8,"#LINE15PUS");
  RegisterUnitType(&DAT_100100d8,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_1000fd18,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_10010ae0,"Gusar_evro(RU)");
  RegisterUnitType(&DAT_10010ad8,"URTA(UN)");
  RegisterUnitType(&DAT_100100a0,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_1000fcc8,"Strelec_Algir(AL)");
  RegisterDynGroup(&DAT_100100a8);
  RegisterVar(&DAT_100100a8,8);
  RegisterVar(&DAT_1000c060,1);
  RegisterVar(&DAT_100115a0,1);
  RegisterVar(&DAT_100115a1,1);
  RegisterVar(&DAT_1000fd28,0x32b);
  RegisterZone(&DAT_1000fcf8,"ZGelpazar");
  RegisterUnits(&DAT_1000fd08,"GGelpazarLive");
  RegisterUnits(&DAT_100107a0,"GGelpazarProduse");
  RegisterUnits(&DAT_100114e0,"GGelpazarTrade");
  RegisterZone(&DAT_1000f968,"ZGelpazarTolk");
  RegisterZone(&DAT_10011518,"ZG_S_1");
  RegisterZone(&DAT_10011510,"ZG_S_2");
  RegisterZone(&DAT_10011528,"ZG_S_3");
  RegisterZone(&DAT_10011520,"ZG_S_4");
  RegisterZone(&DAT_10011538,"ZG_S_5");
  RegisterZone(&DAT_10011530,"ZG_S_6");
  DAT_1000fffb = &DAT_1000fcf8;
  RegisterVar(&DAT_1000f978,0x32b);
  RegisterZone(&DAT_100100b0,"ZSarikaya");
  RegisterUnits(&DAT_100114f8,"GSarikayaLive");
  RegisterUnits(&DAT_1000f800,"GSarikayaProduse");
  RegisterUnits(&DAT_100100b8,"GSarikayaTrade");
  RegisterZone(&DAT_100100d0,"ZSarikayaTolk");
  RegisterZone(&DAT_1000f820,"ZS_S_1");
  RegisterZone(&DAT_1000f838,"ZS_S_2");
  RegisterZone(&DAT_1000f828,"ZS_S_3");
  RegisterZone(&DAT_1000f858,"ZS_S_4");
  RegisterZone(&DAT_1000f848,"ZS_S_5");
  RegisterZone(&DAT_1000f860,"ZS_S_6");
  DAT_1000fc4b = &DAT_100100b0;
  RegisterVar(&DAT_10010b28,0x32b);
  RegisterZone(&DAT_1000fd20,"ZNalihan");
  RegisterZone(&DAT_1000fd10,"ZNalihanTolk");
  RegisterZone(&DAT_1000f8c0,"ZN_P1_1");
  RegisterZone(&DAT_1000f8b8,"ZN_P1_2");
  RegisterZone(&DAT_1000f8b0,"ZN_P1_3");
  RegisterZone(&DAT_1000f8a8,"ZN_P1_4");
  RegisterZone(&DAT_1000f8a0,"ZN_P1_5");
  RegisterZone(&DAT_1000f898,"ZN_P1_6");
  DAT_10010dfb = &DAT_1000fd20;
  RegisterVar(&DAT_1000f4b8,0x32b);
  RegisterZone(&DAT_1000f7e8,"ZMihalichik");
  RegisterZone(&DAT_10010798,"ZMihalichikTolk");
  RegisterZone(&DAT_1000f880,"ZM_P1_1");
  RegisterZone(&DAT_1000f878,"ZM_P1_2");
  RegisterZone(&DAT_1000f870,"ZM_P1_3");
  RegisterZone(&DAT_1000f868,"ZM_P1_4");
  DAT_1000f78b = &DAT_1000f7e8;
  RegisterVar(&DAT_10010468,0x32b);
  RegisterZone(&DAT_100100c0,"ZNalihanPost1");
  RegisterZone(&DAT_1000fcf0,"ZNPost1Tolk");
  RegisterZone(&DAT_10010058,"ZN_P1_P2_1");
  RegisterZone(&DAT_10010060,"ZN_P1_P2_2");
  RegisterZone(&DAT_10010090,"ZN_P1_P2_3");
  RegisterZone(&DAT_10010098,"ZN_P1_P2_4");
  RegisterZone(&DAT_10010080,"ZN_P1_P2_5");
  RegisterZone(&DAT_10010088,"ZN_P1_P2_6");
  RegisterZone(&DAT_10010070,"ZN_P1_P2_7");
  RegisterZone(&DAT_10010078,"ZN_P1_P2_8");
  RegisterZone(&DAT_10010068,"ZN_P1_P2_9");
  RegisterZone(&DAT_1000f950,"ZN_P1_P2_10");
  DAT_1001073b = &DAT_100100c0;
  RegisterVar(&DAT_10010138,0x32b);
  RegisterZone(&DAT_100100c8,"ZNalihanPost2");
  RegisterZone(&DAT_100114d0,"ZNPost2Tolk");
  DAT_1001040b = &DAT_100100c8;
  RegisterVar(&DAT_10010e58,0x32b);
  RegisterZone(&DAT_10010130,"ZMihalichikPost1");
  RegisterZone(&DAT_1000f7f0,"ZMPost1Tolk");
  RegisterZone(&DAT_1000fcb0,"ZM_P1_P2_1");
  RegisterZone(&DAT_1000fca8,"ZM_P1_P2_2");
  RegisterZone(&DAT_1000fcc0,"ZM_P1_P2_3");
  RegisterZone(&DAT_1000fcb8,"ZM_P1_P2_4");
  RegisterZone(&DAT_1000f970,"ZM_P1_P2_5");
  DAT_1001112b = &DAT_10010130;
  RegisterVar(&DAT_10011188,0x32b);
  RegisterZone(&DAT_10010128,"ZMihalichikPost2");
  RegisterZone(&DAT_1000f960,"ZMPost2Tolk");
  DAT_1001145b = &DAT_10010128;
  RegisterVar(&DAT_100107a8,0x32b);
  RegisterZone(&DAT_10010120,"ZSity");
  DAT_10010a7b = &DAT_10010120;
  RegisterVar(((int*)0),0x24);
  RegisterVar(&DAT_100100e0,0x3d);
  RegisterZone(&DAT_1000f818,"ZG_L_Tent1");
  RegisterZone(&DAT_1000f810,"ZG_L_Tent2");
  RegisterZone(&DAT_1000f808,"ZG_L_Tent3");
  RegisterZone(&DAT_100114f0,"ZG_L_Unit1");
  RegisterZone(&DAT_100114e8,"ZG_L_Unit2");
  RegisterZone(&DAT_100114d8,"ZG_L_Unit3");
  RegisterZone(&DAT_100114c8,"ZG_Sbor");
  RegisterVar(&DAT_10010ae8,0x3d);
  RegisterZone(&DAT_1000fcd0,"ZS_L_Tent1");
  RegisterZone(&DAT_1000fcd8,"ZS_L_Tent2");
  RegisterZone(&DAT_1000fce0,"ZS_L_Tent3");
  RegisterZone(&DAT_1000f830,"ZS_L_Unit1");
  RegisterZone(&DAT_1000f840,"ZS_L_Unit2");
  RegisterZone(&DAT_1000f850,"ZS_L_Unit3");
  RegisterZone(&DAT_10011508,"ZS_Sbor");
  RegisterZone(&DAT_1000f7f8,"ZPolitika");
  RegisterUnits(&DAT_1000fd00,"GCommandCenter");
  RegisterUnitType(&DAT_1000f958,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_10011500,"WALL_KR(RU)");
  RegisterUpgrade(&DAT_1000f888,"AKA24RU");
  RegisterUpgrade(&DAT_1000fce8,"AKA23RU");
  RegisterUpgrade(&DAT_100114c0,"AKA08RU");
  SetPlayerName(1,"VILLAGE");
  SetPlayerName(2,"ALGERIA");
  SetPlayerName(3,"TURKEY");
  SetPlayerName(4,"FREE TRADERS");
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
  char *pcVar12;
  char uVar13;
  char uVar14;
  int *puVar15;
  int uVar16;
  char *pcVar17;
  
                    
  if (DAT_100115a2 == '\0') {
    DAT_100115a2 = '\x01';
    FUN_1000540f("Missions//miss_vic.txt",DAT_1000c81c);
    if (pFVar3 == (FILE *)0x0) {
      uVar10 = -1;
      pcVar17 = DAT_1000c7fc;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_10011540;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = DAT_1000c7f4;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001154f;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = "STONE";
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001155e;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = DAT_1000c7e4;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001156d;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = DAT_1000c7dc;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001157c;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = DAT_1000c7d4;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001158b;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = DAT_1000c7cc;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f8c8;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = "GELPAZAR";
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f8d7;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = "SARIKAYA";
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f8e6;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = "NALIHAN";
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f8f5;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = "MIHALCHIK";
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f904;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = "NALIHANF";
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f913;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = "NALIHANS";
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f922;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = DAT_1000c780;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f931;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = -1;
      pcVar17 = "MIHALS";
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f940;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(int *)pcVar12 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      FUN_10005325((int *)pFVar3,0,2);
      uVar10 = FUN_100051a2((char *)pFVar3);
      puVar4 = malloc(uVar10 + 1);
      FUN_10005325((int *)pFVar3,0,0);
      FUN_1000507d((char *)puVar4,1,uVar10,(int *)pFVar3);
      FUN_10005000(pFVar3);
      iVar9 = 0;
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar17 = DAT_1000c770;
LAB_1000336a:
          puVar5 = FUN_10004f80(puVar4,pcVar17);
          iVar9 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar17 = DAT_1000c768;
            goto LAB_1000336a;
          }
          if (iVar7 == 2) {
            pcVar17 = DAT_1000c760;
            goto LAB_1000336a;
          }
          if (iVar7 == 3) {
            pcVar17 = DAT_1000c758;
            goto LAB_1000336a;
          }
          if (iVar7 == 4) {
            pcVar17 = DAT_1000c750;
            goto LAB_1000336a;
          }
          if (iVar7 == 5) {
            pcVar17 = DAT_1000c748;
            goto LAB_1000336a;
          }
        }
        iVar9 = iVar9 + 5;
        sVar6 = FUN_10004f40((byte *)(iVar9 + (int)puVar4),&DAT_1000c744);
        iVar1 = iVar7 * 0xf;
        strncpy((char *)((int)((unsigned char *)&DAT_10011540) + iVar1),(char *)(iVar9 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(char *)((int)((unsigned char *)&DAT_10011540) + sVar6 + iVar1) = 0;
      } while (iVar7 < 6);
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar17 = DAT_1000c7cc;
LAB_1000342c:
          puVar5 = FUN_10004f80(puVar4,pcVar17);
          iVar9 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar17 = "GELPAZAR";
            goto LAB_1000342c;
          }
          if (iVar7 == 2) {
            pcVar17 = "SARIKAYA";
            goto LAB_1000342c;
          }
          if (iVar7 == 3) {
            pcVar17 = "NALIHAN";
            goto LAB_1000342c;
          }
          if (iVar7 == 4) {
            pcVar17 = "MIHALCHIK";
            goto LAB_1000342c;
          }
          if (iVar7 == 5) {
            pcVar17 = "NALIHANF";
            goto LAB_1000342c;
          }
          if (iVar7 == 6) {
            pcVar17 = "NALIHANS";
            goto LAB_1000342c;
          }
          if (iVar7 == 7) {
            pcVar17 = DAT_1000c780;
            goto LAB_1000342c;
          }
          if (iVar7 == 8) {
            pcVar17 = "MIHALS";
            goto LAB_1000342c;
          }
        }
        iVar9 = iVar9 + 10;
        sVar6 = FUN_10004f40((byte *)(iVar9 + (int)puVar4),&DAT_1000c744);
        iVar1 = iVar7 * 0xf;
        strncpy((char *)((int)((unsigned char *)&DAT_1000f8c8) + iVar1),(char *)(iVar9 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(char *)((int)((unsigned char *)&DAT_1000f8c8) + sVar6 + iVar1) = 0;
      } while (iVar7 < 9);
      FUN_10004e30((int *)puVar4);
    }
  }
  cVar2 = Trigg(1);
  if (cVar2 != '\0') {
    SetTrigg(1,0);
    ChangeFriends(0,1);
    ChangeFriends(1,3);
    ChangeFriends(2,4);
    ChangeFriends(3,8);
    ChangeFriends(4,0x3f);
    ChangeFriends(5,0x1c);
    ChangeFriends(6,0x40);
    ChangeFriends(7,0x80);
    RunTimer(1,200);
    RunTimer(6,0x14);
    RunTimer(10,0x14);
    RunTimer(0xb,0x14);
    RunTimer(0xc,0x14);
    RunTimer(0xd,0x14);
    RunTimer(0xe,0x14);
    RunTimer(0xf,0x14);
    RunTimer(0x10,0x14);
    RunTimer(0x11,0x14);
    RunTimer(0x12,0x14);
    EnableUnit(0,&DAT_1000f958,0);
    EnableUnit(0,&DAT_10011500,0);
    DisableUpgrade(0,&DAT_1000f888);
    DisableUpgrade(0,&DAT_1000fce8);
    DisableUpgrade(0,&DAT_100114c0);
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
    StartAI(2,"ALGIR.0",1,1,1,uVar8);
    uVar8 = GetDiff(0);
    StartAI(3,"TURKISH.0",1,1,1,uVar8);
    FUN_10001020(&DAT_100107a8,0,0,(char *)&DAT_1000f8c8,&DAT_10010120,1,3,
                 "V12_1|V12_2|V12_6|V12_8",&DAT_1000fd28,&DAT_1000f978,&DAT_10010138,
                 &DAT_10011188,0,0);
    FUN_10001020(&DAT_1000fd28,1,1,(char *)&DAT_1000f8d7,&DAT_1000fcf8,1,4,"V12_0",
                 &DAT_100107a8,0,0,0,0,3);
    FUN_10001020(&DAT_1000f978,1,2,(char *)&DAT_1000f8e6,&DAT_100100b0,1,5,"V12_0",
                 &DAT_100107a8,0,0,0,0,3);
    FUN_10001020(&DAT_10010b28,2,3,(char *)&DAT_1000f8f5,&DAT_1000fd20,1,3,"V12_5",
                 &DAT_10010468,0,0,0,0,3);
    FUN_10001020(&DAT_1000f4b8,2,4,(char *)&DAT_1000f904,&DAT_1000f7e8,1,3,"V12_7",
                 &DAT_10010e58,0,0,0,0,3);
    FUN_10001020(&DAT_10010468,3,5,(char *)&DAT_1000f913,&DAT_100100c0,1,3,"V12_3|V12_6",
                 &DAT_10010b28,&DAT_10010138,0,0,0,0);
    FUN_10001020(&DAT_10010138,3,6,(char *)&DAT_1000f922,&DAT_100100c8,1,3,"V12_6|V12_0",
                 &DAT_10010468,&DAT_100107a8,0,0,0,0);
    FUN_10001020(&DAT_10010e58,3,7,(char *)&DAT_1000f931,&DAT_10010130,1,3,"V12_4|V12_8",
                 &DAT_1000f4b8,&DAT_10011188,0,0,0,0);
    FUN_10001020(&DAT_10011188,3,8,(char *)&DAT_1000f940,&DAT_10010128,1,3,"V12_7|V12_0",
                 &DAT_10010e58,&DAT_100107a8,0,0,0,0);
    ShowPage("#PAGE23");
    SetLightSpot(&DAT_1000fcf8,2,1);
    SetLightSpot(&DAT_100100b0,2,2);
    DisableMission(0x41);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
  }
  FUN_100011d0(&DAT_100107a8,&DAT_10010120,"V12_1|V12_2|V12_6|V12_8",&DAT_1000fd28,
               &DAT_1000f978,&DAT_10010138,&DAT_10011188,0);
  FUN_100011d0(&DAT_1000fd28,&DAT_1000fcf8,"V12_0",&DAT_100107a8,0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_100114e0);
  uVar13 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_100107a0);
  uVar14 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000fd08);
  FUN_10002450(&DAT_1000fd28,iVar7,uVar14,uVar13);
  FUN_100011d0(&DAT_1000f978,&DAT_100100b0,"V12_0",&DAT_100107a8,0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_100100b8);
  uVar13 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000f800);
  uVar14 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_100114f8);
  FUN_10002450(&DAT_1000f978,iVar7,uVar14,uVar13);
  FUN_100011d0(&DAT_10010b28,&DAT_1000fd20,"V12_5",&DAT_10010468,0,0,0,0);
  FUN_10002450(&DAT_10010b28,3,1,1);
  FUN_100011d0(&DAT_1000f4b8,&DAT_1000f7e8,"V12_7",&DAT_10010e58,0,0,0,0);
  FUN_10002450(&DAT_1000f4b8,3,1,1);
  FUN_100011d0(&DAT_10010468,&DAT_100100c0,"V12_3|V12_6",&DAT_10010b28,&DAT_10010138,0,0,0)
  ;
  FUN_10002450(&DAT_10010468,0,1,1);
  FUN_100011d0(&DAT_10010138,&DAT_100100c8,"V12_6|V12_0",&DAT_10010468,&DAT_100107a8,0,0,0)
  ;
  FUN_10002450(&DAT_10010138,0,1,1);
  FUN_100011d0(&DAT_10010e58,&DAT_10010130,"V12_4|V12_8",&DAT_1000f4b8,&DAT_10011188,0,0,0)
  ;
  iVar7 = GetTotalAmount0(&DAT_100114e0);
  uVar13 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_100107a0);
  uVar14 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000fd08);
  FUN_10002450(&DAT_10010e58,iVar7,uVar14,uVar13);
  FUN_100011d0(&DAT_10011188,&DAT_10010128,"V12_7|V12_0",&DAT_10010e58,&DAT_100107a8,0,0,0)
  ;
  FUN_10002450(&DAT_10011188,0,1,1);
  FUN_100015c0(&DAT_1000fd28,0);
  FUN_100015c0(&DAT_1000f978,0);
  FUN_100015c0(&DAT_10010b28,0);
  FUN_100015c0(&DAT_1000f4b8,0);
  FUN_100015c0(&DAT_10010468,0);
  FUN_100015c0(&DAT_10010138,0);
  FUN_100015c0(&DAT_10010e58,0);
  FUN_100015c0(&DAT_10011188,0);
  cVar2 = TimerDone(10);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_100107a8), (char)uVar8 != '\0')) {
    RunTimer(10,100);
  }
  cVar2 = TimerDone(0xb);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_1000fd28), (char)uVar8 != '\0')) {
    RunTimer(0xb,100);
  }
  cVar2 = TimerDone(0xc);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_1000f978), (char)uVar8 != '\0')) {
    RunTimer(0xc,100);
  }
  cVar2 = TimerDone(0xd);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10010b28), (char)uVar8 != '\0')) {
    RunTimer(0xd,100);
  }
  cVar2 = TimerDone(0xe);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_1000f4b8), (char)uVar8 != '\0')) {
    RunTimer(0xe,100);
  }
  cVar2 = TimerDone(0xf);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10010468), (char)uVar8 != '\0')) {
    RunTimer(0xf,100);
  }
  cVar2 = TimerDone(0x10);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10010138), (char)uVar8 != '\0')) {
    RunTimer(0x10,100);
  }
  cVar2 = TimerDone(0x11);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10010e58), (char)uVar8 != '\0')) {
    RunTimer(0x11,100);
  }
  cVar2 = TimerDone(0x12);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10011188), (char)uVar8 != '\0')) {
    RunTimer(0x12,100);
  }
  puVar15 = &DAT_1000fcf8;
  iVar7 = GetDiff(0);
  FUN_10002780(&DAT_100100e0,iVar7 * 3 + 5,puVar15);
  puVar15 = &DAT_100100b0;
  iVar7 = GetDiff(0);
  FUN_10002780(&DAT_10010ae8,iVar7 * 3 + 5,puVar15);
  FUN_10002630(&DAT_100100e0,&DAT_100114f0,&DAT_100114e8,&DAT_100114d8,&DAT_100114c8);
  FUN_10002630(&DAT_10010ae8,&DAT_1000f830,&DAT_1000f840,&DAT_1000f850,&DAT_10011508);
  cVar2 = TimerDone(1);
  if (cVar2 != '\0') {
    FUN_10001220(0x1000fd28);
    FUN_10001220(0x1000f978);
    FUN_10001220(0x10010b28);
    FUN_10001220(0x1000f4b8);
    FUN_10001220(0x10010468);
    FUN_10001220(0x10010138);
    FUN_10001220(0x10010e58);
    FUN_10001220(0x10011188);
    iVar7 = GetDiff(0);
    RunTimer(1,(iVar7 + 4) * 0x32);
  }
  cVar2 = Trigg(0xb);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000f968,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xb,0);
    ShowPage("#PAGE9");
    EnableMission(0x43);
    uVar16 = 0x15;
    uVar8 = 0x14;
    iVar7 = GetDiff(0);
    FUN_10002560(&DAT_100100e0,&DAT_1000f818,&DAT_1000f810,&DAT_1000f808,5,(5 - iVar7) * 1000,uVar8,
                 uVar16);
  }
  cVar2 = Trigg(0xc);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_100100d0,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xc,0);
    ShowPage("#PAGE10");
    EnableMission(0x44);
    uVar16 = 0x17;
    uVar8 = 0x16;
    iVar7 = GetDiff(0);
    FUN_10002560(&DAT_10010ae8,&DAT_1000fcd0,&DAT_1000fcd8,&DAT_1000fce0,5,(5 - iVar7) * 1000,uVar8,
                 uVar16);
  }
  cVar2 = Trigg(0xd);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000fd10,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xd,0);
    ShowPage("#PAGE24");
    EnableMission(0x41);
  }
  cVar2 = Trigg(0xe);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_10010798,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xe,0);
    ShowPage("#PAGE35");
    EnableMission(0x41);
  }
  cVar2 = Trigg(0xf);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000fcf0,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xf,0);
    ShowPageParam("#PAGE36",&DAT_1000f913);
    EnableMission(0x42);
  }
  cVar2 = Trigg(0x10);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_100114d0,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0x10,0);
    ShowPageParam("#PAGE36",&DAT_1000f922);
    EnableMission(0x42);
  }
  cVar2 = Trigg(0x11);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000f7f0,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0x11,0);
    ShowPageParam("#PAGE36",&DAT_1000f931);
    EnableMission(0x42);
  }
  cVar2 = Trigg(0x12);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000f960,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0x12,0);
    ShowPageParam("#PAGE36",&DAT_1000f940);
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
  iVar7 = GetTotalAmount0(&DAT_1000fd00);
  if (iVar7 == 0) {
LAB_100044c1:
    if (DAT_1000c060 != '\0') goto LAB_100044ea;
  }
  else {
    if (DAT_1000c060 == '\0') goto LAB_100044ca;
    iVar7 = GetUnitsAmount2(&DAT_1000f7f8,&DAT_10010ae0,0);
    if (iVar7 == 0) goto LAB_100044c1;
    if (DAT_100115a0 == '\0') {
      if (DAT_100115a1 != '\0') {
        pcVar17 = "#PAGE26";
        goto LAB_10004251;
      }
      iVar7 = AskMultilineQuestion(9,"#PAGE25",0,"P12_1|P12_2");
      if (iVar7 == 0) {
        iVar7 = GetDiff(0);
        ShowPageParam("#PAGE28",(iVar7 + 5) * 1000);
        cVar2 = AskQuestion("#PAGE29");
        if (cVar2 != '\0') {
          iVar7 = GetDiff(0);
          iVar9 = GetResource(0,1);
          if ((iVar7 + 5) * 1000 <= iVar9) {
            ShowPage("#PAGE32");
            iVar7 = GetDiff(0);
            RunTimer(6,(0x14 - iVar7) * 500);
            SetTrigg(6,0);
            iVar7 = GetDiff(0);
            iVar9 = GetResource(0,1);
            SetResource(0,1,iVar9 + (iVar7 + 5) * -1000);
            ChangeFriends(2,5);
            DAT_100115a0 = '\x01';
            DAT_100115a1 = '\0';
            ShowPage("#PAGE32");
            DAT_1000c060 = '\0';
            goto LAB_100044ca;
          }
LAB_100044aa:
          ShowPage("#PAGE30");
        }
      }
      else if (iVar7 == 1) {
        iVar7 = GetDiff(0);
        ShowPageParam("#PAGE28",(iVar7 + 5) * 1000);
        cVar2 = AskQuestion("#PAGE29");
        if (cVar2 != '\0') {
          iVar7 = GetDiff(0);
          iVar9 = GetResource(0,1);
          if (iVar9 < (iVar7 + 5) * 1000) goto LAB_100044aa;
          ShowPage("#PAGE32");
          iVar7 = GetDiff(0);
          RunTimer(6,(0x14 - iVar7) * 500);
          SetTrigg(6,0);
          iVar7 = GetDiff(0);
          iVar9 = GetResource(0,1);
          SetResource(0,1,iVar9 + (iVar7 + 5) * -1000);
          ChangeFriends(3,9);
          DAT_100115a0 = '\0';
          DAT_100115a1 = '\x01';
          ShowPage("#PAGE32");
          DAT_1000c060 = '\0';
          goto LAB_100044ca;
        }
      }
    }
    else {
      pcVar17 = "#PAGE27";
LAB_10004251:
      cVar2 = AskQuestion(pcVar17);
      if (cVar2 != '\0') {
        ChangeFriends(2,4);
        ChangeFriends(3,8);
        ShowPage("#PAGE34");
        SetTrigg(6,0);
        DAT_100115a1 = '\0';
        DAT_100115a0 = '\0';
        DAT_1000c060 = '\0';
        goto LAB_100044ca;
      }
    }
    DAT_1000c060 = '\0';
  }
LAB_100044ca:
  iVar7 = GetUnitsAmount2(&DAT_1000f7f8,&DAT_10010ae0,0);
  if (iVar7 == 0) {
    DAT_1000c060 = '\x01';
  }
LAB_100044ea:
  cVar2 = TimerDoneFirst(6);
  if ((cVar2 != '\0') && (cVar2 = Trigg(6), cVar2 == '\0')) {
    ShowPage("#PAGE34");
    DAT_100115a0 = '\0';
    DAT_100115a1 = '\0';
    ChangeFriends(2,4);
    ChangeFriends(3,8);
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
