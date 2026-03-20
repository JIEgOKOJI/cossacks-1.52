#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_1000c070 = 0;
char DAT_1000c074[] = "x\xf2";
long long DAT_1000c078 = 0;
long long DAT_1000c474 = 0;
char DAT_1000c478[] = "RESC";
char DAT_1000c480[] = "RESI";
char DAT_1000c488[] = "RESG";
char DAT_1000c490[] = "RESS";
char DAT_1000c498[] = "RESF";
char DAT_1000c4a0[] = "RESW";
char DAT_1000c4b4[] = "SITY";
char DAT_1000c4bc[] = "COAL";
char DAT_1000c4c4[] = "IRON";
char DAT_1000c4cc[] = "GOLD";
char DAT_1000c4dc[] = "FOOD";
char DAT_1000c4e4[] = "WOOD";
long long DAT_1000c504 = 0;
long long DAT_1000f1a8 = 0;
long long DAT_1000f1b0 = 0;
long long DAT_1000f1b8 = 0;
long long DAT_1000f1c0 = 0;
long long DAT_1000f1c8 = 0;
long long DAT_1000f1d0 = 0;
unsigned char DAT_1000f1d8[120] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1000f1e7 = 0;
long long DAT_1000f1f6 = 0;
long long DAT_1000f208 = 0;
long long DAT_1000f210 = 0;
long long DAT_1000f218 = 0;
long long DAT_1000f220 = 0;
long long DAT_1000f228 = 0;
long long DAT_1000f230 = 0;
long long DAT_1000f238 = 0;
long long DAT_1000f240 = 0;
long long DAT_1000f248 = 0;
long long DAT_1000f250 = 0;
long long DAT_1000f258 = 0;
long long DAT_1000f260 = 0;
long long DAT_1000f268 = 0;
long long DAT_1000f278 = 0;
long long DAT_1000f573 = 0;
long long DAT_1000f5d0 = 0;
long long DAT_1000f5e0 = 0;
long long DAT_1000f5f0 = 0;
long long DAT_1000f5f8 = 0;
long long DAT_1000f608 = 0;
long long DAT_1000f618 = 0;
long long DAT_1000f913 = 0;
long long DAT_1000f970 = 0;
long long DAT_1000f9a0 = 0;
long long DAT_1000f9d0 = 0;
long long DAT_1000fa00 = 0;
long long DAT_1000fa30 = 0;
long long DAT_1000fa60 = 0;
long long DAT_1000fa70 = 0;
long long DAT_1000fa78 = 0;
long long DAT_1000fa90 = 0;
long long DAT_1000fa98 = 0;
long long DAT_1000faa0 = 0;
long long DAT_1000faa8 = 0;
long long DAT_1000fab0 = 0;
long long DAT_1000fab8 = 0;
long long DAT_1000fac0 = 0;
long long DAT_1000fac8 = 0;
long long DAT_1000fad0 = 0;
long long DAT_1000fad8 = 0;
long long DAT_1000fae0 = 0;
long long DAT_1000fae8 = 0;
long long DAT_1000faf0 = 0;
long long DAT_1000faf8 = 0;
long long DAT_1000fb00 = 0;
long long DAT_1000fdfb = 0;
long long DAT_1000fe58 = 0;
long long DAT_1000fe68 = 0;
long long DAT_1000fe70 = 0;
long long DAT_1000fe78 = 0;
long long DAT_1000fe80 = 0;
long long DAT_1000fe88 = 0;
unsigned char DAT_1000fe90[800] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x28, 0x01, 0x00, 0x00, 0x75, 0x31, 0x85, 0x31, 0x8A, 0x31, 0x8F, 0x31, 0x95, 0x31, 0x9B, 0x31, 0xA1, 0x31, 0xCC, 0x31, 0xDC, 0x31, 0xEC, 0x31, 0xD0, 0x32, 0x0D, 0x33, 0x21, 0x33, 0x3F, 0x33, 0x46, 0x33, 0x4E, 0x33, 0x61, 0x33, 0x96, 0x33, 0x9D, 0x33, 0xA5, 0x33, 0xC1, 0x33, 0xC8, 0x33, 0xD0, 0x33, 0x0B, 0x34, 0x28, 0x34, 0x2C, 0x34, 0x30, 0x34, 0x34, 0x34, 0x91, 0x34, 0x9D, 0x34, 0xA9, 0x34, 0xB5, 0x34, 0xBE, 0x34, 0xC4, 0x34, 0xCB, 0x34, 0xD8, 0x34, 0xDE, 0x34, 0x0E, 0x35, 0x1A, 0x35, 0x20, 0x35, 0x2C, 0x35, 0x38, 0x35, 0x3E, 0x35, 0x4E, 0x35, 0x55, 0x35, 0x5B, 0x35, 0x83, 0x35, 0x8F, 0x35, 0x9B, 0x35, 0xA1, 0x35, 0xA7, 0x35, 0xB3, 0x35, 0xB9, 0x35, 0xBF, 0x35, 0xD5, 0x35, 0xDB, 0x35, 0xF2, 0x35, 0xF9, 0x35, 0x03, 0x36, 0x23, 0x36, 0x40, 0x36, 0x47, 0x36, 0x62, 0x36, 0x69, 0x36, 0x7F, 0x36, 0x86, 0x36, 0xC6, 0x36, 0xCC, 0x36, 0xD3, 0x36, 0xE8, 0x36, 0x18, 0x37, 0x1F, 0x37, 0x32, 0x37, 0x8F, 0x37, 0x9C, 0x37, 0xA2, 0x37, 0xA8, 0x37, 0xB8, 0x37, 0xBC, 0x37, 0xC0, 0x37, 0xC4, 0x37, 0xC8, 0x37, 0xCC, 0x37, 0xD0, 0x37, 0xD4, 0x37, 0xD8, 0x37, 0xDC, 0x37, 0xE0, 0x37, 0xE4, 0x37, 0xF3, 0x37, 0xFA, 0x37, 0x01, 0x38, 0x0C, 0x38, 0x13, 0x38, 0x3C, 0x38, 0x4C, 0x38, 0x56, 0x38, 0x5B, 0x38, 0x61, 0x38, 0x6D, 0x38, 0x73, 0x38, 0x87, 0x38, 0xD1, 0x38, 0xF5, 0x38, 0xFC, 0x38, 0x07, 0x39, 0x0D, 0x39, 0x19, 0x39, 0x1F, 0x39, 0x38, 0x39, 0x46, 0x39, 0x4F, 0x39, 0x56, 0x39, 0x6B, 0x39, 0x9B, 0x39, 0xA2, 0x39, 0xB5, 0x39, 0x10, 0x3A, 0x14, 0x3A, 0x18, 0x3A, 0x1C, 0x3A, 0x20, 0x3A, 0x24, 0x3A, 0x28, 0x3A, 0x2C, 0x3A, 0x30, 0x3A, 0x34, 0x3A, 0x38, 0x3A, 0x3C, 0x3A, 0x60, 0x3A, 0x67, 0x3A, 0x8B, 0x3A, 0xD1, 0x3A, 0x12, 0x3D, 0x4A, 0x3D, 0x86, 0x3D, 0xAE, 0x3D, 0xD1, 0x3D, 0x1C, 0x3E, 0x5A, 0x3E, 0x80, 0x3E, 0x4A, 0x3F, 0x8E, 0x3F, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x9C, 0x01, 0x00, 0x00, 0x15, 0x30, 0x1C, 0x31, 0x5C, 0x31, 0x60, 0x31, 0x64, 0x31, 0x68, 0x31, 0x6C, 0x31, 0x70, 0x31, 0x8C, 0x31, 0xCC, 0x31, 0xD0, 0x31, 0xD4, 0x31, 0xD8, 0x31, 0xDC, 0x31, 0xE0, 0x31, 0x00, 0x32, 0x84, 0x32, 0x88, 0x32, 0x8C, 0x32, 0x90, 0x32, 0x94, 0x32, 0x98, 0x32, 0xFF, 0x32, 0x04, 0x33, 0x0B, 0x33, 0xFE, 0x33, 0x14, 0x34, 0x19, 0x34, 0x20, 0x34, 0x34, 0x34, 0x69, 0x34, 0x76, 0x34, 0x95, 0x34, 0xAB, 0x34, 0xF0, 0x34, 0x06, 0x35, 0x3C, 0x35, 0x56, 0x35, 0x60, 0x35, 0x78, 0x35, 0x8B, 0x35, 0xC9, 0x35, 0xD2, 0x35, 0xE9, 0x35, 0xF3, 0x35, 0xFE, 0x35, 0x05, 0x36, 0x17, 0x36, 0x36, 0x36, 0x40, 0x36, 0x68, 0x36, 0x6E, 0x36, 0x85, 0x36, 0xA9, 0x36, 0xC6, 0x36, 0xD5, 0x36, 0xF4, 0x36, 0x05, 0x37, 0x2B, 0x37, 0x3D, 0x37, 0x5E, 0x37, 0x68, 0x37, 0xAF, 0x37, 0xB9, 0x37};
long long DAT_1000fe9f = 0;
long long DAT_1000feae = 0;
long long DAT_1000febd = 0;
long long DAT_1000fecc = 0;
long long DAT_1000fedb = 0;
int DAT_1000fef0 = 0;
long long DAT_100104c0 = 0;
int DAT_1000f573_ovl = 0;
int DAT_1000f913_ovl = 0;
int DAT_1000fdfb_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10004120() { return 0; }
int FUN_100046eb() { return 0; }
int FUN_10004968() { return 0; }
int FUN_100049ba() { return 0; }
int FUN_10004b45() { return 0; }
int FUN_10004c4e() { return 0; }
int FUN_10004d2a() { return 0; }
int FUN_10004f70() { return 0; }
int FUN_10005452() { return 0; }
int FUN_10005674() { return 0; }
int FUN_1000574c() { return 0; }
int FUN_100058bc() { return 0; }


/* Forward declarations */
void 
FUN_10001020(void *this_ptr,int param_1,int param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13);
void 
FUN_10001210(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void  FUN_10001260(int param_1);
int  FUN_100012a0(int param_1);
void  FUN_100012e0(void *this_ptr,int param_1);
void  FUN_10001440(int param_1);
int  FUN_100015f0(int param_1);
int  FUN_10001620(void *param_1);
void  FUN_100016c0(void *param_1);
void  FUN_100017f0(void *param_1);
void  FUN_10001930(void *this_ptr,int param_1);
unsigned int  FUN_10001a40(void *param_1);
void  FUN_10001c20(void *this_ptr,int param_1);
void  FUN_10001c60(void *this_ptr,int param_1);
void  FUN_10001cc0(void *this_ptr,int param_1,void *param_2);
int  FUN_10002110(void *this_ptr,int param_1);
int  FUN_10002180(void *this_ptr,int param_1);
void  FUN_100021f0(void *this_ptr,int param_1,int param_2);
void  FUN_100022a0(void *this_ptr,int param_1,char param_2,char param_3);
int FUN_100022d0(int param_1);
void 
FUN_100022f0(void *this_ptr,int param_1,char *param_2,int param_3,char param_4,
            int param_5);
void 
FUN_10002370(void *this_ptr,char *param_1,int param_2,int param_3,int param_4);
void 
FUN_100023c0(void *this_ptr,int param_1,char param_2,char param_3,int param_4,
            char param_5);
BOOL  FUN_10002430(int param_1);
unsigned int  FUN_10002450(void *this_ptr,int param_1);
unsigned int  FUN_100025a0(void *this_ptr,int param_1);
int  FUN_10002780(void *this_ptr,int param_1);
void  FUN_100028c0(void *this_ptr,int param_1,int param_2);
int *  FUN_100029b0(void *this_ptr,int param_1);
void  FUN_100029d0(int param_1);
void  FUN_100029f0(void *this_ptr,int param_1);
void  FUN_10002a40(void *this_ptr,int param_1,int param_2);
void  FUN_10002a90(void *this_ptr,int param_1,int param_2);
void 
FUN_10002ae0(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void FUN_10003e60(int param_1,int param_2,int param_3);
void FUN_10003f50(int *param_1);
int FUN_10004060(byte *param_1,byte *param_2);
unsigned int * FUN_100040a0(unsigned int *param_1,char *param_2);
unsigned int FUN_1000419d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
unsigned int FUN_100041cc(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
int FUN_100042c2(char *param_1);
int FUN_100042e4(char *param_1);
int FUN_10004445(int *param_1,int param_2,DWORD param_3);
int FUN_10004471(int *param_1,int param_2,DWORD param_3);
int * FUN_100044fe(LPCSTR param_1,char *param_2,unsigned int param_3);
void FUN_1000452f(LPCSTR param_1,char *param_2);

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
  
  *(int *)((intptr_t)this_ptr + 0x323) = 100;
  *(int *)((intptr_t)this_ptr + 0x32b) = 100;
  *(int *)((intptr_t)this_ptr + 0x2d4) = param_8;
  *(int *)((intptr_t)this_ptr + 0x337) = 300;
  *(int *)((intptr_t)this_ptr + 0x333) = 300;
  *(int *)((intptr_t)this_ptr + 0x2f7) = param_2;
  *(int *)((intptr_t)this_ptr + 0x2dc) = param_10;
  *(int *)((intptr_t)this_ptr + 0x2fb) = param_4;
  *(int *)((intptr_t)this_ptr + 0x2e0) = param_11;
  *(int *)((intptr_t)this_ptr + 0x2d8) = param_9;
  *(int *)((intptr_t)this_ptr + 0x344) = param_13 * 0xf;
  *(int *)((intptr_t)this_ptr + 0x2e4) = param_12;
  *(int *)((intptr_t)this_ptr + 0x2d0) = param_7;
  *(char *)((intptr_t)this_ptr + 0x33b) = (char)param_5;
  uVar2 = -1;
  *(int *)((intptr_t)this_ptr + 0x327) = 200;
  *(int *)((intptr_t)this_ptr + 0x32f) = 500;
  *(char *)((intptr_t)this_ptr + 0x348) = 1;
  *(char *)((intptr_t)this_ptr + 0x349) = 1;
  *(int *)((intptr_t)this_ptr + 0x33c) = param_6;
  *(int *)((intptr_t)this_ptr + 0x34e) = 1;
  *(char *)((intptr_t)this_ptr + 0x352) = 1;
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
  pcVar5 = (char *)((intptr_t)this_ptr + 0x2e8);
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
  *(int *)((intptr_t)this_ptr + 0x2ff) = param_1;
  *(int *)((intptr_t)this_ptr + 0x30f) = 1000;
  *(int *)((intptr_t)this_ptr + 799) = 0;
  *(int *)((intptr_t)this_ptr + 0x31b) = 0;
  *(int *)((intptr_t)this_ptr + 0x317) = 0;
  *(int *)((intptr_t)this_ptr + 0x313) = 0;
  *(int *)((intptr_t)this_ptr + 0x30b) = 0;
  if (param_1 == 0) {
    return;
  }
  if (param_1 == 4) {
    return;
  }
  if (((param_6 == 0) || (param_6 == 1)) || (param_6 == 2)) {
    RegisterDynGroup((intptr_t)this_ptr + 0x303);
    CreateObject0(&DAT_1000faa0,&DAT_1000fe70,&DAT_1000f5f0,param_5,param_4,0);
    RemoveGroup(&DAT_1000faa0,(intptr_t)this_ptr + 0x303);
  }
  if (param_6 == 0) {
    TakeWood((intptr_t)this_ptr + 0x303);
  }
  else if (param_6 != 1) {
    if (param_6 != 2) {
      *(int *)((intptr_t)this_ptr + 0x340) = 0xf;
      return;
    }
    goto LAB_100011e3;
  }
  TakeFood((intptr_t)this_ptr + 0x303);
LAB_100011e3:
  TakeStone((intptr_t)this_ptr + 0x303);
  *(int *)((intptr_t)this_ptr + 0x340) = 0xf;
  return;
}





void 
FUN_10001210(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((intptr_t)this_ptr + 0x2d4) = param_3;
  *(int *)((intptr_t)this_ptr + 0x2d8) = param_4;
  *(int *)((intptr_t)this_ptr + 0x2dc) = param_5;
  *(int *)((intptr_t)this_ptr + 0x2e0) = param_6;
  *(int *)((intptr_t)this_ptr + 0x2e4) = param_7;
  *(int *)((intptr_t)this_ptr + 0x2d0) = param_2;
  *(int *)((intptr_t)this_ptr + 0x2fb) = param_1;
  return;
}





void  FUN_10001260(int param_1)

{
  *(int *)(param_1 + 0x327) = 200;
  *(int *)(param_1 + 0x323) = 100;
  *(int *)(param_1 + 0x32b) = 100;
  *(int *)(param_1 + 0x32f) = 500;
  *(int *)(param_1 + 0x337) = 300;
  *(int *)(param_1 + 0x333) = 300;
  return;
}





int  FUN_100012a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x33c);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    iVar1 = GetTotalAmount0(param_1 + 0x303);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x340);
    if (*(int *)(param_1 + 0x344) <= iVar1) {
      return *(int *)(param_1 + 0x344);
    }
  }
  return iVar1;
}





void  FUN_100012e0(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  if (*(int *)((intptr_t)this_ptr + 0x2ff) == 0) {
    return;
  }
  if (*(char *)((intptr_t)this_ptr + 0x349) == '\0') {
    return;
  }
  if ((*(char *)((intptr_t)this_ptr + 0x352) == '\0') ||
     (iVar1 = GetUnitsAmount2(*(int *)((intptr_t)this_ptr + 0x2fb),&DAT_1000fe68,param_1), iVar1 == 0)
     ) goto switchD_1000135e_default;
  iVar1 = *(int *)((intptr_t)this_ptr + 0x2ff);
  if (iVar1 == 1) {
    uVar2 = AskMultilineQuestion(9,"#PAGE1",0,"VI1_1|VI1_2|VI1_3|VI1_4");
    switch(uVar2) {
    case 0:
      goto switchD_1000135e_caseD_0;
    case 1:
      uVar2 = FUN_100015f0((intptr_t)this_ptr);
      *(char *)((intptr_t)this_ptr + 0x352) = (char)uVar2;
      break;
    case 2:
switchD_1000135e_caseD_2:
      uVar2 = FUN_10001620(this_ptr);
      *(char *)((intptr_t)this_ptr + 0x352) = (char)uVar2;
      break;
    case 3:
switchD_1000135e_caseD_3:
      *(char *)((intptr_t)this_ptr + 0x352) = 0;
    }
  }
  else {
    if ((iVar1 == 2) || (iVar1 == 3)) {
      iVar1 = AskMultilineQuestion(9,"#PAGE1",0,"VI1_1|VI1_3|VI1_4");
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          if (iVar1 != 2) goto switchD_1000135e_default;
          goto switchD_1000135e_caseD_3;
        }
        goto switchD_1000135e_caseD_2;
      }
    }
    else {
      if (iVar1 != 4) goto switchD_1000135e_default;
      iVar1 = AskMultilineQuestion(9,"#PAGE1",0,"VI1_11|VI1_3|VI1_12");
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          if (iVar1 == 2) {
            *(char *)((intptr_t)this_ptr + 0x352) = 0;
          }
          goto switchD_1000135e_default;
        }
        goto switchD_1000135e_caseD_2;
      }
    }
switchD_1000135e_caseD_0:
    FUN_10001440((intptr_t)this_ptr);
    *(char *)((intptr_t)this_ptr + 0x352) = 1;
  }
switchD_1000135e_default:
  if ((*(char *)((intptr_t)this_ptr + 0x352) == '\0') &&
     (iVar1 = GetUnitsAmount2(*(int *)((intptr_t)this_ptr + 0x2fb),&DAT_1000fe68,param_1), iVar1 == 0)
     ) {
    *(char *)((intptr_t)this_ptr + 0x352) = 1;
  }
  return;
}





void  FUN_10001440(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_100012a0(param_1);
  iVar1 = *(int *)(param_1 + 0x2ff);
  if (iVar1 == 1) {
    ShowPageParam("#PAGE11",param_1 + 0x2e8,
                  (int)((unsigned char *)&DAT_1000fe90) + *(int *)(param_1 + 0x33c) * 0xf,&DAT_1000fe90,
                  *(int *)(param_1 + 0x30b),&DAT_1000fe9f,*(int *)(param_1 + 0x30f),
                  &DAT_1000feae,*(int *)(param_1 + 0x313),&DAT_1000febd,
                  *(int *)(param_1 + 0x317),&DAT_1000fecc,*(int *)(param_1 + 0x31b),
                  &DAT_1000fedb,*(int *)(param_1 + 799),
                  (3 - *(int *)(param_1 + 0x34e)) * iVar2,*(int *)(param_1 + 0x34e) * iVar2,iVar2,
                  *(int *)(param_1 + 0x34a),iVar2);
    return;
  }
  if (iVar1 == 2) {
    ShowPageParam("#PAGE40",param_1 + 0x2e8,
                  (int)((unsigned char *)&DAT_1000fe90) + *(int *)(param_1 + 0x33c) * 0xf,&DAT_1000fe90,
                  *(int *)(param_1 + 0x30b),&DAT_1000fe9f,*(int *)(param_1 + 0x30f),
                  &DAT_1000feae,*(int *)(param_1 + 0x313),&DAT_1000febd,
                  *(int *)(param_1 + 0x317),&DAT_1000fecc,*(int *)(param_1 + 0x31b),
                  &DAT_1000fedb,*(int *)(param_1 + 799),*(int *)(param_1 + 0x34a),
                  iVar2);
    return;
  }
  if (iVar1 == 3) {
    ShowPageParam("#PAGE41",param_1 + 0x2e8,&DAT_1000fe90,*(int *)(param_1 + 0x30b),
                  &DAT_1000fe9f,*(int *)(param_1 + 0x30f),&DAT_1000feae,
                  *(int *)(param_1 + 0x313),&DAT_1000febd,*(int *)(param_1 + 0x317),
                  &DAT_1000fecc,*(int *)(param_1 + 0x31b),&DAT_1000fedb,
                  *(int *)(param_1 + 799));
    return;
  }
  if (iVar1 == 4) {
    ShowPageParam("#PAGE42",param_1 + 0x2e8);
  }
  return;
}





int  FUN_100015f0(int param_1)

{
  int uVar1;
  
  uVar1 = AskMultilineQuestion(9,"#PAGE12",0,"TPW1_0|TPW1_1|TPW1_2|TPW1_3");
  *(int *)(param_1 + 0x34e) = uVar1;
  return (int)1;
}





int  FUN_10001620(void *param_1)

{
  int iVar1;
  
LAB_1000162a:
  while ((iVar1 = *(int *)((intptr_t)param_1 + 0x2ff), iVar1 == 1 || (iVar1 == 4))) {
    iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_1|TR1_3|TR1_4");
    if (iVar1 == 0) {
LAB_100016a7:
      FUN_100016c0(param_1);
    }
    else {
      if (iVar1 == 1) goto LAB_1000169e;
      if (iVar1 == 2) {
        return 1;
      }
    }
  }
  if (iVar1 == 2) {
    iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_1|TR1_4");
    if (iVar1 == 0) goto LAB_100016a7;
  }
  else {
    if (iVar1 != 3) goto LAB_1000162a;
    iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_3|TR1_4");
    if (iVar1 == 0) {
LAB_1000169e:
      FUN_100017f0(param_1);
      goto LAB_1000162a;
    }
  }
  if (iVar1 == 1) {
    return 1;
  }
  goto LAB_1000162a;
}





void  FUN_100016c0(void *param_1)

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
  FUN_10001260((intptr_t)param_1);
  iVar2 = FUN_10002180(param_1,pvVar5);
  iVar3 = FUN_10002180(param_1,pvVar4);
  ShowPageParam("#PAGE131",(int)((unsigned char *)&DAT_1000fe90) + (int)pvVar5 * 0xf,100,
                (int)((unsigned char *)&DAT_1000fe90) + (int)pvVar4 * 0xf,(iVar2 * 100) / iVar3);
  return;
}





void  FUN_100017f0(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = AskMultilineQuestion(9,"#PAGE133",0,"NO1_1|NO1_2|NO1_3|NO1_4|NO1_5|NO1_6|NO1_7|NO1_8|NO1_9|NO1_10");
  iVar3 = AskMultilineQuestion(9,"#PAGE1331",0,"OD1_0|OD1_1|OD1_2");
  if (iVar3 == 0) {
    pvVar1 = (void *)((intptr_t)param_1 + iVar2 * 0x48);
    iVar2 = GetTotalAmount0(pvVar1);
    if (iVar2 != 0) {
      iVar2 = (int)((unsigned char *)&DAT_1000fe90) + *(int *)((int)pvVar1 + 0x11) * 0xf;
      iVar3 = (int)((unsigned char *)&DAT_1000fe90) + *(int *)((int)pvVar1 + 9) * 0xf;
      ShowPageParam("#PAGE7",(int)pvVar1 + 0x29,iVar3,iVar2,iVar3,
                    *(int *)((int)pvVar1 + 0xd),iVar2,*(int *)((int)pvVar1 + 0x15));
      return;
    }
    ShowPage("#PAGE8");
  }
  else {
    if (iVar3 == 1) {
      pvVar1 = (void *)((intptr_t)param_1 + iVar2 * 0x48);
      iVar3 = GetTotalAmount0(pvVar1);
      if (iVar3 == 0) {
        FUN_100022f0(pvVar1,*(int *)((intptr_t)param_1 + 0x2ff),(char *)((intptr_t)param_1 + 0x2e8),
                     *(int *)((intptr_t)param_1 + 0x2f7),*(char *)((intptr_t)param_1 + 0x33b),
                     *(int *)((intptr_t)param_1 + 0x2fb));
      }
      FUN_10001930(param_1,iVar2);
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





void  FUN_10001930(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = AskMultilineQuestion(9,"#PAGE4",0,*(int *)((intptr_t)this_ptr + 0x2d0));
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
  iVar1 = *(int *)((intptr_t)this_ptr + iVar1 * 4 + 0x2d4);
  FUN_10002370((void *)((intptr_t)this_ptr + param_1 * 0x48),(char *)(iVar1 + 0x2e8),
               *(int *)(iVar1 + 0x2f7),iVar4,iVar3);
  return;
}





unsigned int  FUN_10001a40(void *param_1)

{
  int in_EAX;
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  int *piVar6;
  void *pvVar7;
  int iVar8;
  unsigned int uStack_8;
  
  uVar1 = (int)*(char *)((intptr_t)param_1 + 0x349);
  if (*(char *)((intptr_t)param_1 + 0x349) != '\0') {
    iVar2 = GetUnitsAmount2(*(int *)((intptr_t)param_1 + 0x2fb),&DAT_1000fac0,7);
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
            if (*(int *)((intptr_t)param_1 + 0x2ff) == 4) {
              FUN_10001260((intptr_t)param_1);
              iVar3 = FUN_10002180(param_1,*(int *)((int)pvVar7 + 0x11));
              iVar2 = *(int *)((int)pvVar7 + 0x15);
              *(int *)((int)pvVar7 + 0x15) = 0;
              iVar8 = FUN_10002180(param_1,*(int *)((int)pvVar7 + 9));
              *(int *)((int)pvVar7 + 0xd) = (iVar3 * iVar2) / iVar8;
              *(int *)((int)pvVar7 + 0x40) = *(int *)((int)pvVar7 + 0x3c);
            }
            else {
              FUN_10001c20(param_1,(int)pvVar7);
              FUN_10001c60(param_1,(int)pvVar7);
            }
            FUN_10003e60(pvVar7,*(int *)((int)pvVar7 + 0x38),*(int *)((int)pvVar7 + 0x3c));
            return (int)1;
          }
        }
        iVar2 = iVar2 + 1;
        pvVar7 = (void *)((int)pvVar7 + 0x48);
      } while (iVar2 < 10);
      uStack_8 = 0;
      piVar6 = (int *)((intptr_t)param_1 + 0x2d4);
      do {
        if (*piVar6 != 0) {
          iVar3 = 0;
          iVar8 = 0;
          do {
            if (*(char *)(*piVar6 + 0x19 + iVar8) != '\0') {
              iVar4 = GetUnitsAmount1(*(int *)((intptr_t)param_1 + 0x2fb),*piVar6 + iVar8);
              if (iVar4 != 0) {
                iVar3 = iVar3 * 0x48;
                *(char *)(*(int *)((intptr_t)param_1 + uStack_8 * 4 + 0x2d4) + 0x19 + iVar3) = 0;
                if (*(int *)((intptr_t)param_1 + 0x2ff) == 3) {
                  pvVar7 = (void *)((intptr_t)param_1 + iVar2 * 0x48);
                  FUN_10001c20(param_1,(int)pvVar7);
                  FUN_10001c60(param_1,(int)pvVar7);
                }
                else {
                  pvVar7 = *(void **)((intptr_t)param_1 + uStack_8 * 4 + 0x2d4);
                  FUN_10001cc0(param_1,(int)((int)pvVar7 + iVar3),pvVar7);
                }
                iVar2 = *(int *)((intptr_t)param_1 + uStack_8 * 4 + 0x2d4);
                *(int *)(iVar2 + iVar3 + 0x40) = *(int *)(iVar2 + 0x38 + iVar3);
                iVar3 = *(int *)((intptr_t)param_1 + uStack_8 * 4 + 0x2d4) + iVar3;
                FUN_10003e60(iVar3,*(int *)(iVar3 + 0x3c),*(int *)(iVar3 + 0x38));
                return (int)1;
              }
            }
            iVar8 = iVar8 + 0x48;
            iVar3 = iVar3 + 1;
          } while (iVar8 < 0x2d0);
        }
        piVar6 = piVar6 + 1;
        uStack_8 = uStack_8 + 1;
      } while ((int)uStack_8 < 5);
      return uStack_8 & -256;
    }
  }
  return uVar1 & -256;
}





void  FUN_10001c20(void *this_ptr,int param_1)

{
  FUN_100021f0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
  FUN_100021f0(this_ptr,*(int *)(param_1 + 0x11),*(int *)(param_1 + 0x15));
  *(int *)(param_1 + 0x15) = 0;
  *(int *)(param_1 + 0xd) = 0;
  return;
}





void  FUN_10001c60(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = FUN_10002110(this_ptr,*(int *)(param_1 + 9));
  if (499 < iVar1) {
    *(int *)(param_1 + 0xd) = 500;
    FUN_100021f0(this_ptr,*(int *)(param_1 + 9),-500);
    return;
  }
  uVar2 = FUN_10002110(this_ptr,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = uVar2;
  iVar1 = FUN_10002110(this_ptr,*(int *)(param_1 + 9));
  FUN_100021f0(this_ptr,*(int *)(param_1 + 9),-iVar1);
  return;
}





void  FUN_10001cc0(void *this_ptr,int param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  
  if (*(int *)((intptr_t)this_ptr + 0x2ff) != 0) goto LAB_1000201c;
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 1) {
    iVar2 = FUN_10002180(param_2,*(int *)(param_1 + 9));
    iVar2 = iVar2 * *(int *)(param_1 + 0xd);
    iVar3 = FUN_100022d0(*(int *)(param_1 + 0x11));
    iVar4 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar3);
    iVar3 = FUN_10002180(param_2,*(int *)(param_1 + 0x11));
    iVar4 = iVar4 * iVar3;
    if (iVar4 < iVar2) {
      iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
      uVar5 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2);
      *(int *)(param_1 + 0x15) = uVar5;
      uVar5 = 0;
      iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
      SetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2,uVar5);
      iVar2 = FUN_10002180(param_2,*(int *)(param_1 + 9));
      *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar4 / iVar2;
      iVar2 = FUN_10002180(param_2,*(int *)(param_1 + 9));
      iVar4 = iVar4 / iVar2;
      iVar2 = FUN_100022d0(*(int *)(param_1 + 9));
      AddResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2,iVar4);
      goto LAB_1000201c;
    }
    uVar5 = *(int *)(param_1 + 0xd);
    iVar3 = FUN_100022d0(*(int *)(param_1 + 9));
    AddResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar3,uVar5);
    *(int *)(param_1 + 0xd) = 0;
    iVar3 = FUN_10002180(param_2,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = iVar2 / iVar3;
    iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
    iVar2 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2);
    iVar2 = iVar2 - *(int *)(param_1 + 0x15);
LAB_10001fc8:
    iVar3 = FUN_100022d0(*(int *)(param_1 + 0x11));
    cVar1 = *(char *)((intptr_t)this_ptr + 0x33b);
  }
  else {
    if ((iVar2 != 2) && (iVar2 != 3)) {
      if (iVar2 == 4) {
        FUN_10001260((intptr_t)this_ptr);
        iVar2 = FUN_100022d0(*(int *)(param_1 + 9));
        iVar2 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2);
        iVar2 = iVar2 + *(int *)(param_1 + 0xd);
        iVar3 = FUN_100022d0(*(int *)(param_1 + 9));
        SetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar3,iVar2);
        *(int *)(param_1 + 0xd) = 0;
        iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
        iVar2 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2);
        if (iVar2 < 500) {
          iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
          uVar5 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2);
          *(int *)(param_1 + 0x15) = uVar5;
          uVar5 = 0;
          iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
          SetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2,uVar5);
        }
        else {
          *(int *)(param_1 + 0x15) = 500;
          iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
          iVar2 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2);
          iVar2 = iVar2 + -500;
          iVar3 = FUN_100022d0(*(int *)(param_1 + 0x11));
          SetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar3,iVar2);
        }
      }
      goto LAB_1000201c;
    }
    uVar5 = *(int *)(param_1 + 0xd);
    iVar2 = FUN_100022d0(*(int *)(param_1 + 9));
    AddResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2,uVar5);
    uVar5 = *(int *)(param_1 + 0x15);
    iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
    AddResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2,uVar5);
    *(int *)(param_1 + 0x15) = 0;
    *(int *)(param_1 + 0xd) = 0;
    iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
    iVar2 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2);
    if (499 < iVar2) {
      *(int *)(param_1 + 0x15) = 500;
      iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
      iVar2 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2);
      iVar2 = iVar2 + -500;
      goto LAB_10001fc8;
    }
    iVar2 = FUN_100022d0(*(int *)(param_1 + 0x11));
    uVar5 = GetResource(*(char *)((intptr_t)this_ptr + 0x33b) + -1,iVar2);
    *(int *)(param_1 + 0x15) = uVar5;
    iVar2 = 0;
    iVar3 = FUN_100022d0(*(int *)(param_1 + 0x11));
    cVar1 = *(char *)((intptr_t)this_ptr + 0x33b);
  }
  SetResource(cVar1 + -1,iVar3,iVar2);
LAB_1000201c:
  if ((*(int *)((intptr_t)this_ptr + 0x2ff) == 1) || (*(int *)((intptr_t)this_ptr + 0x2ff) == 2)) {
    iVar2 = FUN_10002180(this_ptr,*(int *)(param_1 + 9));
    iVar2 = iVar2 * *(int *)(param_1 + 0xd);
    iVar3 = FUN_10002110(this_ptr,*(int *)(param_1 + 0x11));
    iVar4 = FUN_10002180(this_ptr,*(int *)(param_1 + 0x11));
    iVar3 = iVar3 * iVar4;
    if (iVar2 - iVar3 == 0 || iVar2 < iVar3) {
      FUN_100021f0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
      *(int *)(param_1 + 0xd) = 0;
      iVar3 = FUN_10002180(this_ptr,*(int *)(param_1 + 0x11));
      *(int *)(param_1 + 0x15) = iVar2 / iVar3;
      FUN_100021f0(this_ptr,*(int *)(param_1 + 0x11),-(iVar2 / iVar3));
      return;
    }
    uVar5 = FUN_10002110(this_ptr,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = uVar5;
    iVar2 = FUN_10002110(this_ptr,*(int *)(param_1 + 0x11));
    FUN_100021f0(this_ptr,*(int *)(param_1 + 0x11),-iVar2);
    iVar2 = FUN_10002180(this_ptr,*(int *)(param_1 + 9));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar3 / iVar2;
    iVar2 = FUN_10002180(this_ptr,*(int *)(param_1 + 9));
    FUN_100021f0(this_ptr,*(int *)(param_1 + 9),iVar3 / iVar2);
  }
  return;
}





int  FUN_10002110(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((intptr_t)this_ptr + 0x30b);
  case 1:
    return *(int *)((intptr_t)this_ptr + 0x30f);
  case 2:
    return *(int *)((intptr_t)this_ptr + 0x313);
  case 3:
    return *(int *)((intptr_t)this_ptr + 0x317);
  case 4:
    return *(int *)((intptr_t)this_ptr + 0x31b);
  case 5:
    return *(int *)((intptr_t)this_ptr + 799);
  default:
    return 0;
  }
}





int  FUN_10002180(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((intptr_t)this_ptr + 0x323);
  case 1:
    return *(int *)((intptr_t)this_ptr + 0x327);
  case 2:
    return *(int *)((intptr_t)this_ptr + 0x32b);
  case 3:
    return *(int *)((intptr_t)this_ptr + 0x32f);
  case 4:
    return *(int *)((intptr_t)this_ptr + 0x333);
  case 5:
    return *(int *)((intptr_t)this_ptr + 0x337);
  default:
    return 0;
  }
}





void  FUN_100021f0(void *this_ptr,int param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((intptr_t)this_ptr + 0x30b) = *(int *)((intptr_t)this_ptr + 0x30b) + param_2;
    return;
  case 1:
    *(int *)((intptr_t)this_ptr + 0x30f) = *(int *)((intptr_t)this_ptr + 0x30f) + param_2;
    return;
  case 2:
    *(int *)((intptr_t)this_ptr + 0x313) = *(int *)((intptr_t)this_ptr + 0x313) + param_2;
    return;
  case 3:
    *(int *)((intptr_t)this_ptr + 0x317) = *(int *)((intptr_t)this_ptr + 0x317) + param_2;
    return;
  case 4:
    *(int *)((intptr_t)this_ptr + 0x31b) = *(int *)((intptr_t)this_ptr + 0x31b) + param_2;
    return;
  case 5:
    *(int *)((intptr_t)this_ptr + 799) = *(int *)((intptr_t)this_ptr + 799) + param_2;
  }
  return;
}





void  FUN_100022a0(void *this_ptr,int param_1,char param_2,char param_3)

{
  *(char *)((intptr_t)this_ptr + 0x348) = param_2;
  *(int *)((intptr_t)this_ptr + 0x344) = param_1 * 0xf;
  *(char *)((intptr_t)this_ptr + 0x349) = param_3;
  return;
}





int FUN_100022d0(int param_1)

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
FUN_100022f0(void *this_ptr,int param_1,char *param_2,int param_3,char param_4,
            int param_5)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  CreateObject0(this_ptr,&DAT_1000f1c8,&DAT_1000fac0,7,param_5,0);
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
  *(int *)((intptr_t)this_ptr + 0x44) = param_1;
  *(int *)((intptr_t)this_ptr + 0x38) = param_3;
  *(char *)((intptr_t)this_ptr + 8) = param_4;
  *(char *)((intptr_t)this_ptr + 0x19) = 0;
  *(int *)((intptr_t)this_ptr + 0x15) = 0;
  *(int *)((intptr_t)this_ptr + 0xd) = 0;
  return;
}





void 
FUN_10002370(void *this_ptr,char *param_1,int param_2,int param_3,int param_4)

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
  *(int *)((intptr_t)this_ptr + 0x15) = 0;
  *(int *)((intptr_t)this_ptr + 0x3c) = param_2;
  *(int *)((intptr_t)this_ptr + 0xd) = 0;
  *(int *)((intptr_t)this_ptr + 9) = param_3;
  *(int *)((intptr_t)this_ptr + 0x11) = param_4;
  return;
}





void 
FUN_100023c0(void *this_ptr,int param_1,char param_2,char param_3,int param_4,
            char param_5)

{
  int iVar1;
  
  *(int *)((intptr_t)this_ptr + 0x1d) = param_1;
  *(char *)((intptr_t)this_ptr + 0x2b) = param_5;
  *(char *)((intptr_t)this_ptr + 0x21) = param_3;
  *(char *)((intptr_t)this_ptr + 0x22) = param_2;
  *(char *)((intptr_t)this_ptr + 0x2c) = 0;
  *(char *)this_ptr = 1;
  *(int *)((intptr_t)this_ptr + 0x19) = 0;
  *(int *)((intptr_t)this_ptr + 0x23) = 1;
  *(int *)((intptr_t)this_ptr + 0x27) = 1;
  iVar1 = GetTotalAmount0((intptr_t)this_ptr + 1);
  if (iVar1 == 0) {
    CreateObject0((intptr_t)this_ptr + 1,&DAT_1000f1c8,&DAT_1000fad8,*(char *)((intptr_t)this_ptr + 0x21),
                  param_4,0);
  }
  return;
}





BOOL  FUN_10002430(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 1);
  return iVar1 != 0;
}





unsigned int  FUN_10002450(void *this_ptr,int param_1)

{
  char cVar1;
  int uVar2;
  unsigned int uVar3;
  char uVar4;
  
  uVar3 = *(unsigned int *)((intptr_t)this_ptr + 0x23);
  if (uVar3 == 1) {
    SelectUnits((intptr_t)this_ptr + 1,0);
    if ((*(int *)((intptr_t)this_ptr + 0x1d) == 0) || (*(int *)((intptr_t)this_ptr + 0x1d) == 2)) {
      if (*(int *)((intptr_t)this_ptr + 0x19) == 0) {
        SelSendTo(*(char *)((intptr_t)this_ptr + 0x21),&DAT_1000faf8,0,0);
        uVar4 = *(char *)((intptr_t)this_ptr + 0x21);
      }
      else {
        SelSendTo((int)*(char *)((intptr_t)this_ptr + 0x21),&DAT_1000faf0,0,0);
        uVar4 = *(char *)((intptr_t)this_ptr + 0x21);
      }
      SelSendTo(uVar4,param_1,0,2);
      uVar3 = *(int *)((intptr_t)this_ptr + 0x19) + 1U & -2147483647;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | -2) + 1;
      }
      *(unsigned int *)((intptr_t)this_ptr + 0x19) = uVar3;
    }
    if ((*(int *)((intptr_t)this_ptr + 0x1d) == 1) || (*(int *)((intptr_t)this_ptr + 0x1d) == 3)) {
      if (*(int *)((intptr_t)this_ptr + 0x19) == 0) {
        SelSendTo(*(char *)((intptr_t)this_ptr + 0x21),&DAT_1000fad0,0,0);
        uVar4 = *(char *)((intptr_t)this_ptr + 0x21);
      }
      else {
        SelSendTo(*(char *)((intptr_t)this_ptr + 0x21),&DAT_1000fae8,0,0);
        uVar4 = *(char *)((intptr_t)this_ptr + 0x21);
      }
      SelSendTo(uVar4,param_1,0,2);
      uVar3 = *(int *)((intptr_t)this_ptr + 0x19) + 1U & -2147483647;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | -2) + 1;
      }
      *(unsigned int *)((intptr_t)this_ptr + 0x19) = uVar3;
    }
    *(int *)((intptr_t)this_ptr + 0x23) = 0;
    ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
    return uVar3 & -256;
  }
  if (uVar3 == 0) {
    SelectUnits((intptr_t)this_ptr + 1,0);
    cVar1 = CheckLeaveAbility(*(char *)((intptr_t)this_ptr + 0x21));
    if (cVar1 != '\0') {
      *(int *)((intptr_t)this_ptr + 0x23) = 2;
      ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
      return (int)1;
    }
    ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
  }
  return uVar3 & -256;
}





unsigned int  FUN_100025a0(void *this_ptr,int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  
  uVar1 = *(unsigned int *)((intptr_t)this_ptr + 0x23);
  if ((uVar1 == 2) && (*(int *)((intptr_t)this_ptr + 0x27) == 1)) {
    SelectUnitsInZone(param_1,*(char *)((intptr_t)this_ptr + 0x22),0);
    SaveSelectedUnits(*(char *)((intptr_t)this_ptr + 0x22),(intptr_t)this_ptr + 9,0);
    SelChangeNation(*(char *)((intptr_t)this_ptr + 0x22),*(char *)((intptr_t)this_ptr + 0x21));
    ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
    SelectTypeOfUnitsInZone(param_1,&DAT_1000fac0,*(char *)((intptr_t)this_ptr + 0x21),0);
    SaveSelectedUnits(*(char *)((intptr_t)this_ptr + 0x21),(intptr_t)this_ptr + 0x11,0);
    SelectUnits((intptr_t)this_ptr + 1,0);
    SelectUnits((intptr_t)this_ptr + 0x11,1);
    SelectUnits((intptr_t)this_ptr + 9,1);
    SendUnitsToTransport(*(char *)((intptr_t)this_ptr + 0x21));
    ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
    *(int *)((intptr_t)this_ptr + 0x23) = 3;
  }
  else {
    if (uVar1 == 3) {
      SelectUnits((intptr_t)this_ptr + 1,0);
      iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x11);
      iVar3 = GetTotalAmount0((intptr_t)this_ptr + 9);
      iVar4 = GetNInside(*(char *)((intptr_t)this_ptr + 0x21));
      if (iVar4 != iVar2 + iVar3) {
        iVar2 = GetNInside(*(char *)((intptr_t)this_ptr + 0x21));
        if (iVar2 != 0x50) {
          ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
          return uVar1 & -256;
        }
      }
      *(int *)((intptr_t)this_ptr + 0x23) = 6;
      ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
      RunTimer(*(char *)((intptr_t)this_ptr + 0x2b),1000);
      return uVar1 & -256;
    }
    if (uVar1 == 6) {
      uVar1 = TimerDone(*(char *)((intptr_t)this_ptr + 0x2b));
      if ((char)uVar1 != '\0') {
        *(int *)((intptr_t)this_ptr + 0x23) = 1;
        *(int *)((intptr_t)this_ptr + 0x27) = 0;
        *(char *)this_ptr = 1;
        SelectUnits((intptr_t)this_ptr + 0x11,0);
        SelSendTo(*(char *)((intptr_t)this_ptr + 0x21),param_1,0,0);
        ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
        SelectUnits((intptr_t)this_ptr + 9,0);
        SelSendTo(*(char *)((intptr_t)this_ptr + 0x21),param_1,0,0);
        SelChangeNation(*(char *)((intptr_t)this_ptr + 0x21),*(char *)((intptr_t)this_ptr + 0x22));
        ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
        return (int)1;
      }
    }
  }
  return uVar1 & -256;
}





int  FUN_10002780(void *this_ptr,int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int uVar3;
  
  uVar1 = *(unsigned int *)((intptr_t)this_ptr + 0x23);
  if (uVar1 == 2) {
    if (*(int *)((intptr_t)this_ptr + 0x27) == 1) {
      return 1;
    }
    if (*(int *)((intptr_t)this_ptr + 0x27) == 0) {
      SelectUnits((intptr_t)this_ptr + 1,0);
      PushAllUnitsAway(*(char *)((intptr_t)this_ptr + 0x21));
      *(int *)((intptr_t)this_ptr + 0x23) = 4;
      RunTimer(*(char *)((intptr_t)this_ptr + 0x2b),800);
      return uVar1 & -256;
    }
  }
  if ((uVar1 == 4) && (uVar1 = TimerDone(*(char *)((intptr_t)this_ptr + 0x2b)), (char)uVar1 != '\0')) {
    *(int *)((intptr_t)this_ptr + 0x23) = 5;
    SelectUnits((intptr_t)this_ptr + 0x11,0);
    SelSendTo(7,param_1,0,0);
    RemoveGroup((intptr_t)this_ptr + 0x11,&DAT_1000fe58);
    RemoveGroup((intptr_t)this_ptr + 9,&DAT_1000fe58);
    RunTimer(*(char *)((intptr_t)this_ptr + 0x2b),1000);
    ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
  }
  if ((*(int *)((intptr_t)this_ptr + 0x23) == 5) &&
     (uVar1 = TimerDone(*(char *)((intptr_t)this_ptr + 0x2b)), (char)uVar1 != '\0')) {
    SelectUnits((intptr_t)this_ptr + 1,0);
    iVar2 = GetNInside(*(char *)((intptr_t)this_ptr + 0x21));
    if (iVar2 == 0) {
      *(int *)((intptr_t)this_ptr + 0x23) = 2;
      *(int *)((intptr_t)this_ptr + 0x27) = 1;
      ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
      return (int)1;
    }
    ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
  }
  return uVar1 & -256;
}





void  FUN_100028c0(void *this_ptr,int param_1,int param_2)

{
  BOOL bVar1;
  int extraout_var = 0;
  int iVar2;
  int uVar3;
  
  bVar1 = FUN_10002430((intptr_t)this_ptr);
  if (bVar1) {
    iVar2 = GetUnitsAmount2(param_1,&DAT_1000f1a8,
                            (int)*(char *)((intptr_t)this_ptr + 0x22));
    if (iVar2 != 0) {
      iVar2 = GetUnitsAmount2(param_2,&DAT_1000f1a8,*(char *)((intptr_t)this_ptr + 0x22));
      if (iVar2 != 0) goto LAB_10002994;
    }
    if (*(char *)((intptr_t)this_ptr + 0x2c) == '\0') {
      uVar3 = FUN_10002450(this_ptr,param_1);
      if ((char)uVar3 != '\0') {
        *(char *)((intptr_t)this_ptr + 0x2c) = 1;
      }
    }
    if (*(char *)((intptr_t)this_ptr + 0x2c) == '\x01') {
      uVar3 = FUN_10002780(this_ptr,param_1);
      if ((char)uVar3 != '\0') {
        *(char *)((intptr_t)this_ptr + 0x2c) = 2;
      }
    }
    if (*(char *)((intptr_t)this_ptr + 0x2c) == '\x02') {
      uVar3 = FUN_100025a0(this_ptr,param_1);
      if ((char)uVar3 != '\0') {
        *(char *)((intptr_t)this_ptr + 0x2c) = 3;
      }
    }
    if (*(char *)((intptr_t)this_ptr + 0x2c) == '\x03') {
      uVar3 = FUN_10002450(this_ptr,param_2);
      if ((char)uVar3 != '\0') {
        *(char *)((intptr_t)this_ptr + 0x2c) = 4;
      }
    }
    if (*(char *)((intptr_t)this_ptr + 0x2c) == '\x04') {
      uVar3 = FUN_10002780(this_ptr,param_2);
      if ((char)uVar3 != '\0') {
        *(char *)((intptr_t)this_ptr + 0x2c) = 5;
      }
    }
    if (*(char *)((intptr_t)this_ptr + 0x2c) == '\x05') {
      uVar3 = FUN_100025a0(this_ptr,param_2);
      if ((char)uVar3 != '\0') {
        *(char *)((intptr_t)this_ptr + 0x2c) = 0;
      }
    }
  }
LAB_10002994:
  ClearSelection(*(char *)((intptr_t)this_ptr + 0x21));
  return;
}





int *  FUN_100029b0(void *this_ptr,int param_1)

{
  RegisterDynGroup((intptr_t)this_ptr + 4);
  *(int *)this_ptr = param_1;
  return this_ptr;
}





void  FUN_100029d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 1) {
    iVar1 = GetTotalAmount0(param_1 + 4);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xc) = 0;
    }
  }
  return;
}





void  FUN_100029f0(void *this_ptr,int param_1)

{
  int iVar1;
  
  if (*(int *)((intptr_t)this_ptr + 0xc) == 0) {
    iVar1 = GetDiff(0);
    ProduceUnitFast(param_1,&DAT_1000fa70,(intptr_t)this_ptr + 4,(10 - iVar1) * 1000);
    *(int *)((intptr_t)this_ptr + 0xc) = 1;
  }
  return;
}





void  FUN_10002a40(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((intptr_t)this_ptr + 0xc) == 1) {
    iVar1 = GetUnitsAmount1(param_1,(intptr_t)this_ptr + 4);
    if (iVar1 != 0) {
      SelectUnits((intptr_t)this_ptr + 4,0);
      SelSendTo(*(char *)this_ptr,param_2,0,0);
      *(int *)((intptr_t)this_ptr + 0xc) = 2;
    }
  }
  return;
}





void  FUN_10002a90(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((intptr_t)this_ptr + 0xc) == 2) {
    iVar1 = GetUnitsAmount1(param_1,(intptr_t)this_ptr + 4);
    if (iVar1 != 0) {
      SelectUnits((intptr_t)this_ptr + 4,0);
      Patrol(*(char *)this_ptr,param_2,0);
      *(int *)((intptr_t)this_ptr + 0xc) = 3;
    }
  }
  return;
}





void 
FUN_10002ae0(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  FUN_100029d0((intptr_t)this_ptr);
  FUN_100029f0(this_ptr,param_1);
  FUN_10002a40(this_ptr,param_2,param_3);
  FUN_10002a90(this_ptr,param_3,param_4);
  return;
}





void __cdecl FUN_10003e60(int param_1,int param_2,int param_3)

{
  SelectUnits(param_1,0);
  if (param_2 == 0) {
    if (param_3 == 1) {
      SelSendTo(7,&DAT_1000f230,0,0);
      SelSendTo(7,&DAT_1000f228,0,2);
      SelSendTo(7,&DAT_1000f220,0,2);
      SelSendTo(7,&DAT_1000f1d0,0,2);
      return;
    }
    if (param_3 == 2) {
      SelSendTo(7,&DAT_1000f258,0,0);
      SelSendTo(7,&DAT_1000f250,0,2);
      SelSendTo(7,&DAT_1000f1c0,0,2);
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) {
      SelSendTo(7,&DAT_1000f210,0,0);
      return;
    }
  }
  else if ((param_2 == 2) && (param_3 == 0)) {
    SelSendTo(7,&DAT_1000f248,0,0);
    return;
  }
  return;
}





void __cdecl FUN_10003f50(int *param_1)

{
  FUN_100046eb(param_1);
  return;
}





int __cdecl FUN_10004060(byte *param_1,byte *param_2)

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





unsigned int * __cdecl FUN_100040a0(unsigned int *param_1,char *param_2)

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





unsigned int __cdecl FUN_1000419d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned int uVar1;
  
  FUN_10004968((unsigned int)param_4);
  uVar1 = FUN_100041cc(param_1,param_2,param_3,param_4);
  FUN_100049ba((unsigned int)param_4);
  return uVar1;
}





unsigned int __cdecl FUN_100041cc(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

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
          uVar4 = FUN_10004c4e(piVar1);
          if (uVar4 == -1) goto LAB_100042a8;
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
          iVar3 = FUN_10004d2a(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_100042a8:
            return (unsigned int)((int)pcVar6 - (intptr_t)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_100042a8;
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
        FUN_10004f70((int *)pcVar5,(int *)*piVar1,(unsigned int)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}





int __cdecl FUN_100042c2(char *param_1)

{
  int iVar1;
  
  FUN_10004968((unsigned int)param_1);
  iVar1 = FUN_100042e4(param_1);
  FUN_100049ba((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_100042e4(char *param_1)

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
  local_8 = FUN_10005674(uVar1,0,1);
  if ((intptr_t)local_8 < 0) {
LAB_10004372:
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
        pDVar4 = FUN_10005452();
        *pDVar4 = 0x16;
        goto LAB_10004372;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)(((long long *)&DAT_100104c0)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
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
          if ((*(byte *)(iVar10 + 4 + ((long long *)&DAT_100104c0)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_10005674(uVar1,0,2);
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
              FUN_10005674(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(unsigned int *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(unsigned int *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + ((long long *)&DAT_100104c0)[(int)uVar1 >> 5]) & 4;
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





int __cdecl FUN_10004445(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10004968((unsigned int)param_1);
  iVar1 = FUN_10004471(param_1,param_2,param_3);
  FUN_100049ba((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10004471(int *param_1,int param_2,DWORD param_3)

{
  unsigned int uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10005452();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & -17;
    if (param_3 == 1) {
      iVar2 = FUN_100042e4((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10004b45(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & -4;
    }
    DVar3 = FUN_10005674(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != -1) - 1;
  }
  return iVar2;
}





int * __cdecl FUN_100044fe(LPCSTR param_1,char *param_2,unsigned int param_3)

{
  int *puVar1;
  int *puVar2;
  
  puVar1 = FUN_100058bc();
  if (puVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = FUN_1000574c(param_1,param_2,param_3,puVar1);
  FUN_100049ba((unsigned int)puVar1);
  return puVar2;
}





void __cdecl FUN_1000452f(LPCSTR param_1,char *param_2)

{
  FUN_100044fe(param_1,param_2,0x40);
  return;
}







void OnInit(void)

{
                    
  RegisterDynGroup(&DAT_1000f1b0);
  RegisterVar(&DAT_1000f1b0,8);
  RegisterDynGroup(&DAT_1000fe58);
  RegisterUnitType(&DAT_1000fad8,"PERES_KOR(AL)");
  RegisterFormation(&DAT_1000f1c8,"#ALONE");
  RegisterFormation(&DAT_1000fe70,"#LINE15PUS");
  RegisterUnitType(&DAT_1000fac0,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_1000f5f0,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_1000fe68,"Mameluk(AL)");
  RegisterUnitType(&DAT_1000fa70,"YahtaTU(TU)");
  RegisterUnitType(&DAT_1000fab8,"Lodka(AL)");
  RegisterDynGroup(&DAT_1000faa0);
  RegisterVar(&DAT_1000faa0,8);
  RegisterUnits(&DAT_1000f260,"GWorker");
  RegisterUnitType(&DAT_1000f1a8,"Krestian_Turki(AL)");
  RegisterZone(&DAT_1000fe78,"ZCreateParom2");
  RegisterZone(&DAT_1000f1c0,"ZTrans0to2");
  RegisterZone(&DAT_1000f248,"ZTrans2to0");
  RegisterZone(&DAT_1000fe80,"ZCreateParom1");
  RegisterZone(&DAT_1000f1d0,"ZTrans0to1");
  RegisterZone(&DAT_1000f210,"ZTrans1to0");
  RegisterUnitType(&DAT_1000faa8,"Rinok_Turki(AL)");
  RegisterUnitType(&DAT_1000fa90,"PERES_KOR(AL)");
  RegisterUpgrade(&DAT_1000f1b8,"AKA08AL");
  RegisterUpgrade(&DAT_1000f240,"AKA23AL");
  RegisterUpgrade(&DAT_1000f208,"AKA24AL");
  RegisterZone(&DAT_1000fa98,"ZCreate_Patrol");
  RegisterZone(&DAT_1000fad0,"ZPatrol_01");
  RegisterZone(&DAT_1000fae8,"ZPatrol_02");
  RegisterZone(&DAT_1000fae0,"ZPatrol_03");
  RegisterZone(&DAT_1000faf8,"ZPatrol_04");
  RegisterZone(&DAT_1000faf0,"ZPatrol_05");
  RegisterUnits(&DAT_1000fab0,"GRazb_Port");
  SetPlayerName(1,"PORTUGALIA");
  SetPlayerName(2,"SPAIN");
  SetPlayerName(3,"ENGLAND");
  SetPlayerName(4,"FRANCE");
  SetPlayerName(5,"ROBBERS");
  SetPlayerName(7,"TRAIDERS");
  RegisterVar(&DAT_1000fa30,0x2d);
  RegisterVar(&DAT_1000fa00,0x2d);
  RegisterVar(&DAT_1000f9d0,0x2d);
  RegisterVar(&DAT_1000f9a0,0x2d);
  RegisterVar(&DAT_1000f970,0x2d);
  RegisterVar(&DAT_1000f5d0,0x10);
  RegisterVar(&DAT_1000f5e0,0x10);
  RegisterVar(&DAT_1000f5f8,0x10);
  RegisterVar(&DAT_1000f608,0x10);
  RegisterVar(&DAT_1000fa60,0x10);
  RegisterVar(&DAT_1000fa78,0x10);
  RegisterZone(&DAT_1000f258,"ZR0_2_01");
  RegisterZone(&DAT_1000f250,"ZR0_2_02");
  RegisterZone(&DAT_1000f230,"ZR0_1_01");
  RegisterZone(&DAT_1000f228,"ZR0_1_02");
  RegisterZone(&DAT_1000f220,"ZR0_1_03");
  RegisterZone(&DAT_1000f268,"ZR2_0_01");
  RegisterZone(&DAT_1000f238,"ZR1_0_01");
  RegisterZone(&DAT_1000fac8,"ZSity");
  RegisterUnits(&DAT_1000fe88,"GSpainTrade");
  RegisterUnits(&DAT_1000f218,"GPortugalTrade");
  RegisterVar(&DAT_1000f618,0x353);
  RegisterVar(&DAT_1000f278,0x353);
  RegisterVar(&DAT_1000fb00,0x353);
  DAT_1000f913_ovl = &DAT_1000f268;
  DAT_1000f573_ovl = &DAT_1000f238;
  DAT_1000fdfb_ovl = &DAT_1000fac8;
  RegisterVar(((int*)0),0xc);
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
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  char *pcVar12;
  int *puVar13;
  char *pcVar14;
  
                    
  if (DAT_1000fef0 == '\0') {
    DAT_1000fef0 = '\x01';
    FUN_1000452f("Missions//miss_vic.txt",&DAT_1000c504);
    if (pFVar3 == (FILE *)0x0) {
      uVar9 = -1;
      pcVar14 = DAT_1000c4e4;
      do {
        pcVar12 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000fe90;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = -1;
      pcVar14 = DAT_1000c4dc;
      do {
        pcVar12 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000fe9f;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = -1;
      pcVar14 = "STONE";
      do {
        pcVar12 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000feae;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = -1;
      pcVar14 = DAT_1000c4cc;
      do {
        pcVar12 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000febd;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = -1;
      pcVar14 = DAT_1000c4c4;
      do {
        pcVar12 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000fecc;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = -1;
      pcVar14 = DAT_1000c4bc;
      do {
        pcVar12 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000fedb;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = -1;
      pcVar14 = DAT_1000c4b4;
      do {
        pcVar12 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000f1d8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = -1;
      pcVar14 = "PORTUGAL";
      do {
        pcVar12 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000f1e7;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = -1;
      pcVar14 = "SPAIN";
      do {
        pcVar12 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000f1f6;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar12 = *(int *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      FUN_10004445((int *)pFVar3,0,2);
      uVar9 = FUN_100042c2((char *)pFVar3);
      puVar4 = malloc(uVar9 + 1);
      FUN_10004445((int *)pFVar3,0,0);
      FUN_1000419d((char *)puVar4,1,uVar9,(int *)pFVar3);
      FUN_10004120(pFVar3);
      iVar11 = 0;
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar14 = DAT_1000c4a0;
LAB_10003312:
          puVar5 = FUN_100040a0(puVar4,pcVar14);
          iVar11 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar14 = DAT_1000c498;
            goto LAB_10003312;
          }
          if (iVar7 == 2) {
            pcVar14 = DAT_1000c490;
            goto LAB_10003312;
          }
          if (iVar7 == 3) {
            pcVar14 = DAT_1000c488;
            goto LAB_10003312;
          }
          if (iVar7 == 4) {
            pcVar14 = DAT_1000c480;
            goto LAB_10003312;
          }
          if (iVar7 == 5) {
            pcVar14 = DAT_1000c478;
            goto LAB_10003312;
          }
        }
        iVar11 = iVar11 + 5;
        sVar6 = FUN_10004060((byte *)(iVar11 + (int)puVar4),&DAT_1000c474);
        iVar1 = iVar7 * 0xf;
        strncpy((char *)((int)((unsigned char *)&DAT_1000fe90) + iVar1),(char *)(iVar11 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(char *)((int)((unsigned char *)&DAT_1000fe90) + sVar6 + iVar1) = 0;
      } while (iVar7 < 6);
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar14 = DAT_1000c4b4;
LAB_1000338d:
          puVar5 = FUN_100040a0(puVar4,pcVar14);
          iVar11 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar14 = "PORTUGAL";
            goto LAB_1000338d;
          }
          if (iVar7 == 2) {
            pcVar14 = "SPAIN";
            goto LAB_1000338d;
          }
        }
        iVar11 = iVar11 + 10;
        sVar6 = FUN_10004060((byte *)(iVar11 + (int)puVar4),&DAT_1000c474);
        iVar1 = iVar7 * 0xf;
        strncpy((char *)((int)((unsigned char *)&DAT_1000f1d8) + iVar1),(char *)(iVar11 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(char *)((int)((unsigned char *)&DAT_1000f1d8) + sVar6 + iVar1) = 0;
      } while (iVar7 < 3);
      FUN_10003f50((int *)puVar4);
    }
  }
  cVar2 = Trigg(0);
  if (cVar2 != '\0') {
    SetTrigg(0,0);
    SetResource(0,0,5000);
    SetResource(0,3,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    iVar7 = GetDiff(0);
    SetResource(0,4,(5 - iVar7) * 1000);
    iVar7 = GetDiff(0);
    SetResource(0,5,(5 - iVar7) * 1000);
    SetResource(1,0,5000);
    SetResource(1,3,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,4,5000);
    SetResource(1,5,5000);
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
    SetResource(4,0,5000);
    SetResource(4,3,5000);
    SetResource(4,2,5000);
    SetResource(4,1,5000);
    SetResource(4,4,5000);
    SetResource(4,5,5000);
    SetResource(6,0,10000000);
    SetResource(6,3,10000000);
    SetResource(6,2,10000000);
    SetResource(6,1,10000000);
    SetResource(6,4,10000000);
    SetResource(6,5,10000000);
    SetResource(8,0,10000000);
    SetResource(8,3,10000000);
    SetResource(8,2,10000000);
    SetResource(8,1,10000000);
    SetResource(8,4,10000000);
    SetResource(8,5,10000000);
    EnableUnit(0,&DAT_1000faa8,0);
    EnableUnit(0,&DAT_1000fa90,0);
    EnableUnit(0,&DAT_1000fab8,0);
    DisableUpgrade(0,&DAT_1000f1b8);
    DisableUpgrade(0,&DAT_1000f240);
    DisableUpgrade(0,&DAT_1000f208);
    ChangeFriends(0,7);
    ChangeFriends(1,6);
    ChangeFriends(2,6);
    ChangeFriends(3,0x18);
    ChangeFriends(4,0x18);
    ChangeFriends(5,0x38);
    ChangeFriends(7,0xa7);
    uVar8 = GetDiff(0);
    StartAI(1,"PORTUGALIA.0",1,1,1,uVar8);
    uVar8 = GetDiff(0);
    StartAI(2,"SPAIN.0",1,1,1,uVar8);
    uVar8 = GetDiff(0);
    StartAI(3,"ENGLAND.0",0,1,1,uVar8);
    uVar8 = GetDiff(0);
    StartAI(4,"FRANCE.0",2,1,1,uVar8);
    TakeStone(&DAT_1000f260);
    FUN_10001020(&DAT_1000fb00,0,0,(char *)&DAT_1000f1d8,&DAT_1000fac8,1,3,
                 "V12_1|V12_2|V12_6|V12_8",&DAT_1000f278,&DAT_1000f618,0,0,0,0);
    FUN_10001020(&DAT_1000f278,4,1,(char *)&DAT_1000f1e7,&DAT_1000f238,1,3,"V13_0",
                 &DAT_1000fb00,0,0,0,0,0);
    FUN_10001020(&DAT_1000f618,4,2,(char *)&DAT_1000f1f6,&DAT_1000f268,1,3,"V12_0",
                 &DAT_1000fb00,0,0,0,0,0);
    RunTimer(5,100);
    RunTimer(6,100);
    RunTimer(7,100);
    RunTimer(8,100);
    RunTimer(9,100);
    RunTimer(10,0x1e);
    RunTimer(0xb,0x1e);
    RunTimer(0xc,0x1e);
    RunTimer(1,5000);
    SetLightSpot(&DAT_1000f248,3,1);
    SetLightSpot(&DAT_1000f1c0,3,2);
    SetLightSpot(&DAT_1000f210,3,3);
    SetLightSpot(&DAT_1000f1d0,3,4);
    SetLightSpot(&DAT_1000fad0,3,5);
    SetLightSpot(&DAT_1000fae8,3,6);
    SetLightSpot(&DAT_1000fae0,3,7);
    SetLightSpot(&DAT_1000faf8,3,8);
    SetLightSpot(&DAT_1000faf0,3,9);
    EnableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x43);
    ShowPage("#PAGE23");
  }
  iVar7 = GetUnitsAmount2(&DAT_1000f1c0,&DAT_1000f1a8,0);
  if (iVar7 != 0) {
    SelectTypeOfUnitsInZone(&DAT_1000f1c0,&DAT_1000f1a8,0,0);
    SelSendTo(0,&DAT_1000fac8,0,0);
  }
  iVar7 = GetUnitsAmount2(&DAT_1000f1d0,&DAT_1000f1a8,0);
  if (iVar7 != 0) {
    SelectTypeOfUnitsInZone(&DAT_1000f1d0,&DAT_1000f1a8,0,0);
    SelSendTo(0,&DAT_1000fac8,0,0);
  }
  cVar2 = Trigg(1);
  if (cVar2 != '\0') {
    SetTrigg(1,0);
    FUN_100023c0(&DAT_1000f9a0,0,0,7,&DAT_1000fe78,5);
    FUN_100023c0(&DAT_1000fa30,1,0,7,&DAT_1000fe80,6);
  }
  cVar2 = TimerDoneFirst(1);
  if ((cVar2 != '\0') && (cVar2 = Trigg(9), cVar2 != '\0')) {
    SetTrigg(5,0);
    FUN_100023c0(&DAT_1000f970,2,0,7,&DAT_1000fe78,7);
    FUN_100023c0(&DAT_1000fa00,3,0,7,&DAT_1000fe80,8);
    SetTrigg(9,0);
    RunTimer(2,5000);
  }
  cVar2 = TimerDoneFirst(2);
  if ((cVar2 != '\0') && (cVar2 = Trigg(10), cVar2 != '\0')) {
    FUN_100023c0(&DAT_1000f9d0,4,0,7,&DAT_1000fe80,9);
    SetTrigg(10,0);
  }
  FUN_100028c0(&DAT_1000f9a0,&DAT_1000f248,&DAT_1000f1c0);
  FUN_100028c0(&DAT_1000fa30,&DAT_1000f210,&DAT_1000f1d0);
  cVar2 = Trigg(9);
  if (cVar2 == '\0') {
    FUN_100028c0(&DAT_1000f970,&DAT_1000f248,&DAT_1000f1c0);
    FUN_100028c0(&DAT_1000fa00,&DAT_1000f210,&DAT_1000f1d0);
  }
  cVar2 = Trigg(10);
  if (cVar2 == '\0') {
    FUN_100028c0(&DAT_1000f9d0,&DAT_1000f210,&DAT_1000f1d0);
  }
  FUN_10001210(&DAT_1000fb00,&DAT_1000fac8,"V12_1|V12_2|V12_6|V12_8",&DAT_1000f278,
               &DAT_1000f618,0,0,0);
  FUN_10001210(&DAT_1000f278,&DAT_1000f238,"V13_0",&DAT_1000fb00,0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_1000f218);
  FUN_100022a0(&DAT_1000f278,3,1,iVar7 == 1);
  FUN_10001210(&DAT_1000f618,&DAT_1000f268,"V13_0",&DAT_1000fb00,0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_1000fe88);
  FUN_100022a0(&DAT_1000f618,3,1,iVar7 == 1);
  FUN_100012e0(&DAT_1000f278,0);
  FUN_100012e0(&DAT_1000f618,0);
  cVar2 = TimerDone(10);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001a40(&DAT_1000fb00), (char)uVar8 != '\0')) {
    RunTimer(10,100);
  }
  cVar2 = TimerDone(0xb);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001a40(&DAT_1000f278), (char)uVar8 != '\0')) {
    RunTimer(0xb,100);
  }
  cVar2 = TimerDone(0xc);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001a40(&DAT_1000f618), (char)uVar8 != '\0')) {
    RunTimer(0xc,100);
  }
  cVar2 = NationIsErased(0);
  if (cVar2 != '\0') {
    ShowPage("#PAGE21");
    LooseGame();
  }
  cVar2 = NationIsErased(3);
  if ((cVar2 != '\0') && (cVar2 = NationIsErased(4), cVar2 != '\0')) {
    ShowPage("#PAGE22");
    ShowVictory();
  }
  iVar7 = GetUnitsAmount2(&DAT_1000f248,&DAT_1000fac0,7);
  if (iVar7 != 0) {
    puVar13 = &DAT_1000f618;
    do {
      if ((*(int *)(puVar13 + 0x40) == 2) &&
         (iVar7 = GetUnitsAmount1(&DAT_1000f248,puVar13), iVar7 != 0)) {
        *(int *)(puVar13 + 0x40) = 10;
        SelectUnits(puVar13,0);
        SelSendTo(7,&DAT_1000f268,0,0);
      }
      puVar13 = puVar13 + 0x48;
    } while ((int)puVar13 < 0x1000f8e8);
  }
  iVar7 = GetUnitsAmount2(&DAT_1000f1c0,&DAT_1000fac0,7);
  if (iVar7 != 0) {
    puVar13 = &DAT_1000f618;
    do {
      if ((*(int *)(puVar13 + 0x40) == 0) &&
         (iVar7 = GetUnitsAmount1(&DAT_1000f1c0,puVar13), iVar7 != 0)) {
        *(int *)(puVar13 + 0x40) = 10;
        SelectUnits(puVar13,0);
        SelSendTo(7,&DAT_1000f250,0,0);
        SelSendTo(7,&DAT_1000f258,0,2);
        SelSendTo(7,&DAT_1000fac8,0,2);
      }
      puVar13 = puVar13 + 0x48;
    } while ((int)puVar13 < 0x1000f8e8);
  }
  iVar7 = GetUnitsAmount2(&DAT_1000f210,&DAT_1000fac0,7);
  if (iVar7 != 0) {
    puVar13 = &DAT_1000f278;
    do {
      if ((*(int *)(puVar13 + 0x40) == 1) &&
         (iVar7 = GetUnitsAmount1(&DAT_1000f210,puVar13), iVar7 != 0)) {
        *(int *)(puVar13 + 0x40) = 10;
        SelectUnits(puVar13,0);
        SelSendTo(7,&DAT_1000f238,0,0);
      }
      puVar13 = puVar13 + 0x48;
    } while ((int)puVar13 < 0x1000f548);
  }
  iVar7 = GetUnitsAmount2(&DAT_1000f1d0,&DAT_1000fac0,7);
  if (iVar7 != 0) {
    puVar13 = &DAT_1000f278;
    do {
      if ((*(int *)(puVar13 + 0x40) == 0) &&
         (iVar7 = GetUnitsAmount1(&DAT_1000f1d0,puVar13), iVar7 != 0)) {
        *(int *)(puVar13 + 0x40) = 10;
        SelectUnits(puVar13,0);
        SelSendTo(7,&DAT_1000f220,0,0);
        SelSendTo(7,&DAT_1000f228,0,2);
        SelSendTo(7,&DAT_1000f230,0,2);
        SelSendTo(7,&DAT_1000fac8,0,2);
      }
      puVar13 = puVar13 + 0x48;
    } while ((int)puVar13 < 0x1000f548);
  }
  FUN_10002ae0(&DAT_1000f5d0,&DAT_1000fab0,&DAT_1000fa98,&DAT_1000fad0,&DAT_1000fae8);
  FUN_10002ae0(&DAT_1000f5e0,&DAT_1000fab0,&DAT_1000fa98,&DAT_1000fae8,&DAT_1000fad0);
  FUN_10002ae0(&DAT_1000f5f8,&DAT_1000fab0,&DAT_1000fa98,&DAT_1000faf8,&DAT_1000faf0);
  FUN_10002ae0(&DAT_1000f608,&DAT_1000fab0,&DAT_1000fa98,&DAT_1000faf0,&DAT_1000faf8);
  FUN_10002ae0(&DAT_1000fa60,&DAT_1000fab0,&DAT_1000fa98,&DAT_1000fae0,&DAT_1000faf8);
  FUN_10002ae0(&DAT_1000fa78,&DAT_1000fab0,&DAT_1000fa98,&DAT_1000fad0,&DAT_1000fae0);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
