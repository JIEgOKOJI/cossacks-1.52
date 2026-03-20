#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_1003a040 = 0;
long long DAT_1003a04c = 0;
long long DAT_1003a050 = 0;
char DAT_1003a284[] = "Z4";
char DAT_1003a288[] = "Z3";
char DAT_1003a28c[] = "Z2";
char DAT_1003a290[] = "Z1";
char DAT_1003a294[] = "Z5";
char DAT_1003a2d8[] = "G1";
long long DAT_1003dd60 = 0;
int DAT_1003ddcc = 4;
int DAT_1003ddd0 = 800;
int DAT_1003ddd4 = 2;
int DAT_1003de20 = 0;
int DAT_1003de24 = 0;
int DAT_1003de28 = 0;
long long DAT_1003fcf8 = 0;
long long DAT_1003fcfc = 0;
long long DAT_1003fd00 = 0;
long long DAT_1003fd10 = 0;
int DAT_1003fd38 = 0;
long long DAT_1003fd48 = 0;
long long DAT_1003fd50 = 0;
long long DAT_1003fd52 = 0;
int DAT_1003fd54 = 0;
unsigned char DAT_1003fd58[160] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1003fdf8 = 0;
long long DAT_1003fe00 = 0;
long long DAT_1003fe08 = 0;
long long DAT_1003fe10 = 0;
long long DAT_1003fe38 = 0;
long long DAT_1003fe60 = 0;
long long DAT_1003fe68 = 0;
long long DAT_1003fe70 = 0;
long long DAT_1003fe78 = 0;
long long DAT_1003fe80 = 0;
long long DAT_1003fe88 = 0;
long long DAT_1003fe90 = 0;
long long DAT_1003fe98 = 0;
long long DAT_1003fea0 = 0;
long long DAT_1003fea8 = 0;
long long DAT_1003feb0 = 0;
long long DAT_1003feb8 = 0;
long long DAT_1003fec0 = 0;
long long DAT_1003fed0 = 0;
long long DAT_1003fed8 = 0;
int DAT_1003ff88 = 0;
long long DAT_1003ff90 = 0;
long long DAT_1003ff98 = 0;
unsigned char DAT_1003ffa0[520] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x31, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x39, 0x04, 0x00, 0xB4, 0x34, 0x04, 0x00, 0x3C, 0x30, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x3F, 0x04, 0x00, 0x14, 0x33, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4A, 0x3A, 0x04, 0x00, 0x34, 0x3A, 0x04, 0x00, 0x00, 0x3F, 0x04, 0x00, 0xEE, 0x3E, 0x04, 0x00, 0xDA, 0x3E, 0x04, 0x00, 0xC0, 0x3E, 0x04, 0x00, 0xAE, 0x3E, 0x04, 0x00, 0x9C, 0x3E, 0x04, 0x00, 0x8C, 0x3E, 0x04, 0x00, 0x7C, 0x3E, 0x04, 0x00, 0x66, 0x3E, 0x04, 0x00, 0x50, 0x3E, 0x04, 0x00, 0x3E, 0x3E, 0x04, 0x00, 0x2C, 0x3E, 0x04, 0x00, 0x1C, 0x3E, 0x04, 0x00, 0x0A, 0x3E, 0x04, 0x00, 0xFA, 0x3D, 0x04, 0x00, 0xEA, 0x3D, 0x04, 0x00, 0xE2, 0x3D, 0x04, 0x00, 0xD0, 0x3D, 0x04, 0x00, 0xBE, 0x3D, 0x04, 0x00, 0xA8, 0x3D, 0x04, 0x00, 0x96, 0x3D, 0x04, 0x00, 0x8A, 0x3D, 0x04, 0x00, 0x80, 0x3D, 0x04, 0x00, 0x74, 0x3D, 0x04, 0x00, 0x58, 0x3D, 0x04, 0x00, 0x48, 0x3D, 0x04, 0x00, 0x2A, 0x3D, 0x04, 0x00, 0x1A, 0x3D, 0x04, 0x00, 0x0C, 0x3D, 0x04, 0x00, 0x00, 0x3D, 0x04, 0x00, 0xE8, 0x3C, 0x04, 0x00, 0xDA, 0x3C, 0x04, 0x00, 0xCE, 0x3C, 0x04, 0x00, 0xC0, 0x3C, 0x04, 0x00, 0xB2, 0x3C, 0x04, 0x00, 0x98, 0x3C, 0x04, 0x00, 0x80, 0x3C, 0x04, 0x00, 0x6A, 0x3C, 0x04, 0x00, 0x50, 0x3C, 0x04, 0x00, 0x36, 0x3C, 0x04, 0x00, 0x24, 0x3C, 0x04, 0x00, 0x16, 0x3C, 0x04, 0x00, 0x04, 0x3C, 0x04, 0x00, 0xF0, 0x3B, 0x04, 0x00, 0xDC, 0x3B, 0x04, 0x00, 0xC8, 0x3B, 0x04, 0x00, 0xB8, 0x3B, 0x04, 0x00, 0xAA, 0x3B, 0x04, 0x00, 0x9A, 0x3B, 0x04, 0x00, 0x90, 0x3B, 0x04, 0x00, 0x84, 0x3B, 0x04, 0x00, 0x76, 0x3B, 0x04, 0x00, 0x60, 0x3B, 0x04, 0x00, 0x50, 0x3B, 0x04, 0x00, 0x8C, 0x39, 0x04, 0x00, 0x98, 0x39, 0x04, 0x00, 0xB2, 0x39, 0x04, 0x00, 0xC2, 0x39, 0x04, 0x00, 0xD2, 0x39, 0x04, 0x00, 0xE4, 0x39, 0x04, 0x00, 0xF2, 0x39, 0x04, 0x00, 0x00, 0x3A, 0x04, 0x00, 0x10, 0x3A, 0x04, 0x00, 0x1C, 0x3A, 0x04, 0x00, 0x40, 0x3B, 0x04, 0x00, 0xCA, 0x3A, 0x04, 0x00, 0x5C, 0x3A, 0x04, 0x00, 0x6C, 0x3A, 0x04, 0x00, 0x84, 0x3A, 0x04, 0x00, 0x9A, 0x3A, 0x04, 0x00, 0xAE, 0x3A, 0x04, 0x00, 0xE2, 0x3A, 0x04, 0x00, 0xFA, 0x3A, 0x04, 0x00, 0x12, 0x3B, 0x04, 0x00, 0x20, 0x3B, 0x04, 0x00, 0x30, 0x3B, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_100404b8 = 0;
int DAT_10040638 = 0;
int DAT_10040688 = 0;
int DAT_1004068c = 0;
int DAT_10040690 = 0;
int DAT_10040694 = 0;
int DAT_10040698 = 0;
int DAT_1004069c = 0;
int DAT_100406a0 = 0;
int DAT_100406a4 = 0;
int DAT_100406c0 = 0;
long long DAT_100406c4 = 0;
int *DAT_100421f4 = 0;
int DAT_100421f8 = 0;
int DAT_1003a040_ovl = 776530087;
int DAT_1003a04c_ovl = 1065353216;
int DAT_1003a050_ovl = 1120403456;
int DAT_1003fcf8_ovl = 0;
int DAT_1003fcfc_ovl = 0;
int DAT_1003fd50_ovl = 0;
int DAT_1003fd52_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10009774() { return 0; }
int FUN_1000977d() { return 0; }
int FUN_10009824() { return 0; }
int FUN_1000982d() { return 0; }
int FUN_100098d4() { return 0; }
int FUN_100098dd() { return 0; }
int FUN_1000a680() { return 0; }
int FUN_1000af78() { return 0; }
int FUN_1000b9c0() { return 0; }
int FUN_1000ba60() { return 0; }
int FUN_1000baf0() { return 0; }
int FUN_1000bf50() { return 0; }
int FUN_1000c550() { return 0; }
int FUN_1000c990() { return 0; }
int FUN_1000ea40() { return 0; }
int FUN_1000ec80() { return 0; }
int FUN_1000ec90() { return 0; }


/* Forward declarations */
int FUN_100015e0(int param_1);
int FUN_100016f0(int param_1,unsigned short param_2);
int FUN_10001840(int param_1,char param_2,char param_3);
int FUN_10001900(int param_1,char param_2);
int FUN_100019c0(int param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_10001ae0(char *param_1);
char * 
FUN_100022e0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void 
FUN_10002370(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
int  FUN_10002490(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
void  FUN_100025e0(intptr_t param_1);
int FUN_10002660(unsigned int param_1);
int  FUN_100026d0(int param_1);
unsigned int *  FUN_10002730(void *this_ptr,unsigned int *param_1,byte param_2);
void  FUN_100027e0(void *this_ptr,int param_1,char param_2);
int FUN_10002940(char param_1);
void FUN_100029d0(void);
void FUN_10002a10(void);
void FUN_10002a60(void);
void FUN_10002aa0(void);
void FUN_10002ae0(void);
void FUN_10002b30(void);
int FUN_10002ba0(int param_1,char param_2);
void FUN_10003060(void);
void FUN_100030a0(void);
int  FUN_10003140(int param_1);
void  FUN_100031d0(int param_1);
void FUN_100037f0(void);
void FUN_10003830(void);
void  FUN_10003880(int param_1);
void FUN_100038d0(int param_1,int param_2,int param_3,int *param_4);
void FUN_10003e30(void);
void FUN_10003f70(int param_1);
void FUN_100040e0(int param_1);
void FUN_100041a0(unsigned short *param_1,int param_2);
void FUN_10004310(void);
int FUN_100044b0(void *param_1);
void FUN_10004580(void);
void FUN_10004640(unsigned short *param_1,int param_2,int param_3);
void FUN_10004750(void);
int FUN_100051a0(int param_1);
void FUN_10005240(int param_1);
int FUN_100052e0(void);
void  FUN_100053a0(int param_1);
int  FUN_10005470(int param_1);
int  FUN_100054d0(int param_1);
void  FUN_10005560(void *this_ptr,int param_1);
int  FUN_100055a0(void *this_ptr,int param_1);
void  FUN_10005620(void *this_ptr,int param_1,int param_2);
void  FUN_10005740(void *this_ptr,int param_1);
void  FUN_10005780(void *this_ptr,int param_1);
void  FUN_100057c0(int param_1);
void  FUN_10005870(void *this_ptr,int param_1);
void  FUN_100058b0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005910(void *this_ptr,int param_1);
int  FUN_100059e0(int param_1);
void  FUN_10005a70(void *this_ptr,unsigned int param_1);
int  FUN_10005af0(int param_1);
void  FUN_10005b20(void *this_ptr,int param_1);
void  FUN_10005ba0(void *this_ptr,int param_1);
int  FUN_10005c10(int param_1);
void  FUN_10005c80(void *this_ptr,int param_1);
void  FUN_10005cf0(void *this_ptr,int param_1);
void  FUN_10005d30(int param_1);
void  FUN_10005da0(void *param_1);
void  FUN_10005e20(void *this_ptr,int param_1);
void  FUN_10005e80(void *param_1);
void  FUN_10005f00(void *this_ptr,int param_1);
void  FUN_10005f40(int param_1);
void  FUN_10005f90(int param_1);
void  FUN_10005fe0(void *this_ptr,int param_1,int param_2);
void  FUN_10006030(void *param_1);
void  FUN_10006320(void *param_1);
void  FUN_100063b0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006410(void *param_1);
void  FUN_10006490(void *this_ptr,int param_1);
int FUN_10006500(short *param_1);
void  FUN_100065a0(void *this_ptr,int param_1);
void  FUN_100065e0(void *this_ptr,int param_1);
void  FUN_10006620(void *this_ptr,int param_1);
void  FUN_10006660(void *this_ptr,void *param_1);
int  FUN_100066d0(int param_1);
int  FUN_10006710(int param_1);
void  FUN_10006740(void *param_1);
int FUN_100069d0(void);
void  FUN_10006a00(void *this_ptr,int param_1,int param_2);
void  FUN_10006a70(void *this_ptr,int param_1);
void  FUN_10006ae0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006b80(void *this_ptr,int param_1,int param_2);
int  FUN_10006cd0(int param_1);
int  FUN_10006d10(int param_1);
int  FUN_10006d80(void *this_ptr,int param_1);
void  FUN_10006e00(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10006ea0(int param_1);
void  FUN_10006ef0(void *this_ptr,int param_1,int param_2,int param_3);
int  FUN_10006fc0(int param_1);
void  FUN_10007070(int param_1);
void  FUN_10007110(int param_1);
void  FUN_10007190(int param_1);
void FUN_100073a0(int param_1);
void FUN_100073d0(int param_1,int param_2,int param_3);
void  FUN_10007450(int param_1);
void  FUN_10007680(void *this_ptr,int *param_1);
int  FUN_100077b0(int param_1);
int  FUN_10007850(int param_1);
int  FUN_100078c0(int param_1);
void  FUN_10007900(void *this_ptr,int param_1);
void  FUN_10007960(void *param_1);
void  FUN_10007b70(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_10007d00(int param_1,int param_2,int param_3,int param_4);
int  FUN_10007e00(int param_1);
int  FUN_10007ea0(int param_1);
int  FUN_10007f10(int param_1);
int  FUN_10007f50(void *this_ptr,int *param_1);
void  FUN_10008080(int param_1);
void  FUN_100081c0(void *this_ptr,int param_1);
int  FUN_10008220(int param_1);
int  FUN_100082b0(int param_1);
void 
FUN_10008320(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_100083c0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10008470(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10008530(char *param_1);
void  FUN_10008670(char *param_1);
void  FUN_10008740(char *param_1);
int  FUN_10008810(int param_1);
void  FUN_10008850(void *this_ptr,int param_1);
void  FUN_100088b0(void *this_ptr,int param_1);
int  FUN_10008930(void *this_ptr,int param_1);
void  FUN_10008a20(void *this_ptr,int param_1,int param_2);
int  FUN_10008ab0(int param_1);
void 
FUN_10008af0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5);
void  FUN_10008bc0(int param_1);
void  FUN_10008d00(int param_1);
int  FUN_10008dc0(int param_1);
int  FUN_10008df0(void *this_ptr,short param_1);
int  FUN_10008e60(void *param_1);
void  FUN_10008eb0(void *this_ptr,unsigned int *param_1);
void  FUN_10008f30(void *this_ptr,int param_1);
void  FUN_10008fa0(void *this_ptr,int param_1,byte param_2);
void  FUN_10009020(void *this_ptr,int param_1);
int  FUN_10009070(int param_1);
int  FUN_10009100(int param_1);
int  FUN_10009200(int param_1);
void  FUN_10009260(void *this_ptr,int param_1);
void  FUN_100092d0(void *this_ptr,int param_1);
int  FUN_10009360(void *this_ptr,int param_1);
void  FUN_100093f0(void *this_ptr,char param_1);
void  FUN_10009430(void *this_ptr,int param_1);
void FUN_10009470(int param_1);
void  FUN_10009510(int param_1);
void  FUN_10009570(int param_1);
void FUN_10009760(void);
void FUN_10009810(void);
void FUN_100098c0(void);
void FUN_10009960(void);
void FUN_10009990(void);
void FUN_100099a0(void);
int FUN_100099f0(int param_1);
void  FUN_10009a40(void *this_ptr,void *param_1);
int FUN_10009af0(void *param_1);
int FUN_10009e60(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10009fc6(void);
int FUN_10009fe0(int param_1);
int FUN_1000a0a0(int param_1);

void OnInit();
void ProcessScenary();


int __cdecl FUN_100015e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_88 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [20];
  int local_1c;
  int local_18;
  int uStack_8;
local_38 = 0;
  local_34 = 0;
  local_3c = GetTotalAmount0(param_1);
  if (0 < local_3c) {
    local_40 = 0;
    local_44 = 0;
    for (local_48 = 0; local_48 < local_3c; local_48 = local_48 + 1) {
      GetUnitInfo(param_1,local_48,local_30);
      local_40 = local_40 + local_1c;
      local_44 = local_44 + local_18;
    }
    local_38 = local_40 / local_3c;
    local_34 = local_44 / local_3c;
  }
  uStack_8 = 0x100016af;
  return 0;
}





int __cdecl FUN_100016f0(int param_1,unsigned short param_2)

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
  int local_34;
  char local_30 [18];
  unsigned short local_1e;
  short uStack_1c;
  short uStack_1a;
  int local_18;
  int uStack_8;
local_38 = 0;
  local_34 = 0;
  local_3c = GetTotalAmount0(param_1);
  local_40 = 0;
  if (0 < local_3c) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_3c; local_4c = local_4c + 1) {
      GetUnitInfo(param_1,local_4c,local_30);
      if ((local_1e & 0xff) == (param_2 & 0xff)) {
        local_44 = local_44 + (int)uStack_1c;
        local_48 = local_48 + local_18;
        local_40 = local_40 + 1;
      }
    }
    if (0 < local_40) {
      local_38 = local_44 / local_40;
      local_34 = local_48 / local_40;
    }
  }
  uStack_8 = 0x100017ee;
  return 0;
}





int __cdecl FUN_10001840(int param_1,char param_2,char param_3)

{
  int iVar1;
  int extraout_EDX = 0;
  int *puVar2;
  int local_54 [16];
  long long local_14;
  char local_c [4];
  int uStack_8;
RegisterDynGroup(local_c);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,local_c,0);
  local_14 = FUN_100016f0(local_c,(unsigned short)(intptr_t)param_3);
  uStack_8 = 0x100018cf;
  return 0;
}





int __cdecl FUN_10001900(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  long long local_14;
  char local_c [4];
  int uStack_8;
RegisterDynGroup(local_c);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,local_c,0);
  local_14 = FUN_100015e0(local_c);
  uStack_8 = 0x1000198b;
  return 0;
}







int __cdecl FUN_100019c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *puVar2;
  long double fVar3;
  long long lVar4;
  int local_80 [16];
  double local_40;
  double local_38;
  int local_30;
  void *local_2c;
  int local_28;
  int local_24;
  int local_20;
  long long local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
local_8 = param_3;
  local_c = param_4;
  local_10 = param_1;
  local_14 = param_2;
  local_2c = (void *)(param_2 - param_4);
  local_30 = param_1 - param_3;
  fVar3 = (long double)FUN_100098d4(local_2c,(int)((double)(intptr_t)local_2c / (double)local_30));
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_1003a040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_10009824(*(int*)((char*)&local_1c + 4),(int)(local_1c));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_10009774((void *)local_1c,(int)(void *)local_1c);
  lVar4 = 0;
  local_24 = (int)lVar4;
  return 0;
}





void  FUN_10001ae0(char *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  char *local_8;
*param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  *(int *)(param_1 + 8) = 0;
  local_8 = param_1;
  FUN_10002370(param_1,8,3,0x15,0,200,3,0x50);
  FUN_10002370(local_8,8,3,0x18,0,200,3,0x50);
  FUN_10002370(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002370(local_8,8,2,8,0,0x5a,3,0x32);
  FUN_10002370(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002370(local_8,8,2,0x16,0,0x1e,3,0x32);
  FUN_10002370(local_8,8,3,0x17,0,1000,3,0x5a);
  FUN_10002370(local_8,8,3,0xf,0,1000,3,0x5a);
  FUN_10002370(local_8,0x15,2,0xf,0,300,3,0x1e);
  FUN_10002370(local_8,0x15,2,0x14,0,300,3,0x1e);
  FUN_10002370(local_8,0x15,2,0x15,0,300,3,0x1e);
  FUN_10002370(local_8,0x15,2,0x18,0,300,3,0x1e);
  FUN_10002370(local_8,0x15,2,0x16,0,300,3,0x1e);
  FUN_10002370(local_8,0x15,2,0xb,0,300,3,0x1e);
  FUN_10002370(local_8,0x15,2,8,0,300,3,0x1e);
  FUN_10002370(local_8,0x15,3,0x17,0,1000,3,0x5a);
  FUN_10002370(local_8,0x15,2,10,0,500,3,0x1e);
  FUN_10002370(local_8,0x15,1,0x16,1,0x14,4,0x50);
  FUN_10002370(local_8,0x15,1,0x14,1,10,4,0x50);
  FUN_10002370(local_8,0x15,2,8,1,0x1e,4,0x50);
  FUN_10002370(local_8,0x15,2,0x15,1,100,4,0x50);
  FUN_10002370(local_8,0x14,2,0x14,0,500,3,0x50);
  FUN_10002370(local_8,0x14,2,0x16,0,500,3,0x50);
  FUN_10002370(local_8,0x14,2,0x15,0,500,3,0x50);
  FUN_10002370(local_8,0x14,3,0x17,0,1000,3,0x5a);
  FUN_10002370(local_8,0xf,2,0x15,0,300,3,0x50);
  FUN_10002370(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002370(local_8,0xf,2,8,0,300,3,0x32);
  FUN_10002370(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002370(local_8,0xf,2,0x16,0,300,3,0x32);
  FUN_10002370(local_8,0xf,2,0x17,0,300,3,0x5a);
  FUN_10002370(local_8,0xf,2,0xf,0,300,3,0x5a);
  FUN_10002370(local_8,0xf,2,0x18,0,300,3,0x1e);
  FUN_10002370(local_8,0xb,2,0x15,0,300,3,0x50);
  FUN_10002370(local_8,0xb,2,0x18,0,300,3,0x50);
  FUN_10002370(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002370(local_8,0xb,2,8,0,300,3,0x32);
  FUN_10002370(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002370(local_8,0xb,2,0x16,0,300,3,0x32);
  FUN_10002370(local_8,0xb,2,0x17,0,300,3,0x5a);
  FUN_10002370(local_8,0xb,2,0xf,0,300,3,0x5a);
  FUN_10002370(local_8,0xb,2,0xb,0,300,3,0x1e);
  FUN_10002370(local_8,0xb,2,10,0,500,3,0x1e);
  FUN_10002370(local_8,0x18,2,0x15,0,300,3,0x50);
  FUN_10002370(local_8,0x18,2,0x18,0,300,3,0x50);
  FUN_10002370(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002370(local_8,0x18,2,8,0,300,3,0x32);
  FUN_10002370(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002370(local_8,0x18,2,0x16,0,300,3,0x32);
  FUN_10002370(local_8,0x18,2,0x17,0,300,3,0x5a);
  FUN_10002370(local_8,0x18,2,0xf,0,300,3,0x5a);
  FUN_10002370(local_8,0x16,2,0x15,0,500,3,0x50);
  FUN_10002370(local_8,0x16,2,0x18,0,500,3,0x50);
  FUN_10002370(local_8,0x16,2,0x14,0,500,3,0x32);
  FUN_10002370(local_8,0x16,2,8,0,500,3,0x32);
  FUN_10002370(local_8,0x16,2,0xb,0,500,3,0x32);
  FUN_10002370(local_8,0x16,2,0x16,0,500,3,0x32);
  FUN_10002370(local_8,0x16,2,0x17,0,500,3,0x5a);
  FUN_10002370(local_8,0x16,2,0xf,0,500,3,0x5a);
  FUN_10002370(local_8,0x16,2,0xb,0,500,3,0x1e);
  FUN_10002370(local_8,0x16,2,10,0,500,2,0x1e);
  FUN_10002370(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (char *)0x1000213c;
  return;
}





char * 
FUN_100022e0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)this_ptr = param_1;
  *(char *)((intptr_t)this_ptr + 1) = param_2;
  *(char *)((intptr_t)this_ptr + 2) = param_3;
  *(short *)((intptr_t)this_ptr + 3) = param_5;
  *(char *)((intptr_t)this_ptr + 5) = param_6;
  *(char *)((intptr_t)this_ptr + 6) = param_7;
  *(char *)((intptr_t)this_ptr + 7) = param_4;
  *(int *)((intptr_t)this_ptr + 8) = 0;
  return this_ptr;
}





void 
FUN_10002370(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7)

{
  int iVar1;
  int *puVar2;
  int local_60 [16];
  char *local_20;
  void *local_1c;
  char *local_18;
  void *local_14;
  void *local_10;
  char *puStack_c;
  int local_8;
  
  local_8 = -1;
local_14 = this_ptr;
  if (*(int *)((intptr_t)this_ptr + 8) == 0) {
    local_1c = (void *)FUN_10009af0((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = FUN_100022e0(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(char **)((intptr_t)local_14 + 8) = local_20;
  }
  else {
    FUN_10002370(*(void **)((intptr_t)this_ptr + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  return;
}





int  FUN_10002490(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  void *pvVar1;
  unsigned int uVar2;
  int iVar3;
  void *pvVar4;
  int *puVar5;
  int local_4c [16];
  int local_c;
  void *local_8;
local_c = 0;
  pvVar4 = (void *)(unsigned int)*(byte *)this_ptr;
  pvVar1 = this_ptr;
  if (pvVar4 == (void *)(param_1 & 0xff)) {
    pvVar4 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 1);
    if (pvVar4 == (void *)(param_2 & 0xff)) {
      pvVar4 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 2);
      if (pvVar4 == (void *)(param_3 & 0xff)) {
        pvVar4 = (void *)0x0;
        if ((*(char *)((intptr_t)this_ptr + 7) != '\0') &&
           (pvVar4 = (void *)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 3), pvVar4 < (void *)(param_4 & 0xffff)))
        {
LAB_1000253a:
          local_c = (unsigned int)*(byte *)((intptr_t)this_ptr + 5) * 100 + (unsigned int)*(byte *)((intptr_t)this_ptr + 6);
          goto LAB_1000257c;
        }
        pvVar1 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 3);
          if (pvVar4 < pvVar1) goto LAB_1000253a;
        }
      }
    }
  }
  if (*(int *)((intptr_t)this_ptr + 8) != 0) {
    uVar2 = (int)(short)param_4;
    local_8 = this_ptr;
    local_c = FUN_10002490(*(void **)((intptr_t)this_ptr + 8),
                                 (int)(char)param_1,
                                 (int)(char)param_2,
                                 (int)(char)param_3,uVar2);
  }
LAB_1000257c:
  local_8 = (void *)0x1000258c;
  return 0;
}





void  FUN_100025e0(intptr_t param_1)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
if (*(int *)(param_1 + 8) != 0) {
    local_10 = *(int *)(param_1 + 8);
    local_c = local_10;
    if (local_10 == 0) {
      local_14 = 0;
    }
    else {
      local_8 = param_1;
      local_14 = FUN_10002660(1);
    }
  }
  return;
}





int FUN_10002660(unsigned int param_1)

{
  void *in_ECX;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = in_ECX;
  FUN_100025e0((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10009a40(local_8,local_8);
  }
  local_8 = (void *)0x100026ab;
  return 0;
}





int  FUN_100026d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1 + 0x20);
  return 0;
}





unsigned int *  FUN_10002730(void *this_ptr,unsigned int *param_1,byte param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_54 [16];
  int local_14;
  unsigned int local_10;
  char uStack_c;
local_10 = (unsigned int)param_2;
  uStack_c = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if (((long long *)&DAT_1003dd60)[local_14] == param_2) {
      uVar1 = *(int *)((intptr_t)this_ptr + local_14 * 4);
      *(int*)((char*)&local_10 + 1) = (int)uVar1;
      uStack_c = (char)((unsigned int)uVar1 >> 0x18);
      local_14 = 8;
    }
  }
  *param_1 = local_10;
  *(char *)(param_1 + 1) = uStack_c;
  return param_1;
}





void  FUN_100027e0(void *this_ptr,int param_1,char param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  int local_80 [16];
  int *local_40;
  char local_3c [18];
  char local_2a;
  int local_10;
  int local_c;
  void *local_8;
  
  iVar1 = -0x33333334;
local_c = 0;
  while (local_c < 8) {
    *(int *)((intptr_t)this_ptr + local_c * 4) = 0;
    iVar1 = local_c + 1;
    local_c = iVar1;
  }
  local_8 = this_ptr;
  SelectUnitsInZone(param_1,(intptr_t)param_2,0);
  SaveSelectedUnits(param_2,(intptr_t)local_8 + 0x20,0);
  local_10 = GetTotalAmount0((intptr_t)local_8 + 0x20);
  for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
    GetUnitInfo((intptr_t)local_8 + 0x20,local_c,local_3c);
    uVar2 = FUN_10002940(local_2a);
    local_40 = (int *)((intptr_t)local_8 + (uVar2 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x100028ec;
  return;
}





int FUN_10002940(char param_1)

{
  byte bVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_50 [16];
  byte local_10;
  byte local_c;
  
  uVar2 = 0xcccccc;
local_c = 0;
  bVar1 = 0;
  while (bVar1 < 8) {
    uVar2 = 0;
    local_10 = bVar1;
    if (((long long *)&DAT_1003dd60)[bVar1] == param_1) {
      local_10 = 8;
      local_c = bVar1;
    }
    bVar1 = local_10 + 1;
  }
  return (intptr_t)local_c;
}





void FUN_100029d0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002a10();
  uStack_8 = 0x100029fa;
  return;
}





void FUN_10002a10(void)

{
  int *puVar1;
  int iVar2;
  int *puVar3;
  char local_2c [36];
  int uStack_8;
puVar1 = (int *)FUN_100026d0((intptr_t)local_2c);
  puVar3 = &DAT_1003fd10;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x10002a4b;
  return;
}





void FUN_10002a60(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002aa0();
  FUN_10002ae0();
  uStack_8 = 0x10002a8f;
  return;
}





void FUN_10002aa0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001ae0(&DAT_1003fd00);
  uStack_8 = 0x10002acf;
  return;
}





void FUN_10002ae0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_1000a0a0(0x10002b30);
  uStack_8 = 0x10002b12;
  return;
}





void FUN_10002b30(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_1003fd38 & 1) == 0) {
    DAT_1003fd38 = DAT_1003fd38 | 1;
    FUN_100025e0((intptr_t)&DAT_1003fd00);
  }
  uStack_8 = 0x10002b7c;
  return;
}







int FUN_10002ba0(int param_1,char param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int extraout_ECX = 0;
  int *puVar4;
  long long lVar5;
  unsigned short local_58;
  short uStack_56;
  float local_54;
  int local_50;
  unsigned short local_4c;
  short uStack_4a;
  int local_48;
  unsigned short local_44;
  short uStack_42;
  int local_40;
  char local_3c [18];
  char local_2a;
  int local_10;
  unsigned int local_c;
  int local_8;
local_c = local_c & -65536;
  local_10 = GetTotalAmount0(param_1);
  GetUnitInfo(param_1,0,local_3c);
  UnitsCenter(local_8,param_1,500);
  FUN_100027e0(&DAT_1003fd10,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)((long long *)&DAT_1003fd10)[local_40]) {
      uVar2 = (((long long *)&DAT_1003fd10)[local_40] * 100) / local_10;
      uVar1 = FUN_10002490(&DAT_1003fd00,(intptr_t)local_2a,1,
                                 (int)((long long *)&DAT_1003dd60)[local_40],uVar2);
      local_44 = (int)uVar1;
      if ((local_c & 0xffff) / 100 < uVar1 / 100) {
        local_c = (int)uVar1;
      }
      if (uVar1 / 100 == (local_c & 0xffff) / 100) {
        local_c = (int)(short)(((local_c & 0xffff) + (unsigned int)uVar1) / 2);
      }
    }
  }
  if ((local_c & 0xffff) == 0) {
    UnitsCenter(local_8,param_1,1000);
    FUN_100027e0(&DAT_1003fd10,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)((long long *)&DAT_1003fd10)[local_48]) {
        uVar2 = (((long long *)&DAT_1003fd10)[local_48] * 100) / local_10;
        uVar1 = FUN_10002490(&DAT_1003fd00,(intptr_t)local_2a,2,
                                   (int)((long long *)&DAT_1003dd60)[local_48],uVar2);
        local_4c = (int)uVar1;
        if ((local_c & 0xffff) / 100 < uVar1 / 100) {
          local_c = (int)uVar1;
        }
        if (uVar1 / 100 == (local_c & 0xffff) / 100) {
          local_c = (int)(short)(((local_c & 0xffff) + (unsigned int)uVar1) / 2);
        }
      }
    }
  }
  if ((local_c & 0xffff) == 0) {
    UnitsCenter(local_8,param_1,2000);
    FUN_100027e0(&DAT_1003fd10,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)((long long *)&DAT_1003fd10)[local_50]) {
        local_54 = ((float)(int)((long long *)&DAT_1003fd10)[local_50] * DAT_1003a050_ovl) / (float)local_10;
        if (local_54 < DAT_1003a04c_ovl) {
          local_54 = 1.0;
        }
        lVar5 = 0;
        uVar1 = FUN_10002490(&DAT_1003fd00,(intptr_t)local_2a,
                                   3,(int)((long long *)&DAT_1003dd60)[local_50],(unsigned int)lVar5);
        local_58 = (int)uVar1;
        if ((local_c & 0xffff) / 100 < uVar1 / 100) {
          local_c = (int)uVar1;
        }
        if (uVar1 / 100 == (local_c & 0xffff) / 100) {
          local_c = (int)(short)(((local_c & 0xffff) + (unsigned int)uVar1) / 2);
        }
      }
    }
  }
  return 0;
}





void FUN_10003060(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100030a0();
  uStack_8 = 0x1000308a;
  return;
}







void FUN_100030a0(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
DAT_1003fcf8_ovl = local_c;
  DAT_1003fcfc_ovl = local_8;
  return;
}






int  FUN_10003140(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(param_1 + 0x10,param_1);
  iVar1 = GetTotalAmount0(local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return 0;
}





void  FUN_100031d0(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  BOOL bVar5;
  int local_64;
  long long local_60;
  long long local_58;
  long long local_50;
  long long local_48;
  long long local_40;
  long long local_38;
  long long local_30;
  long long local_28;
  long long local_20;
  long long local_18;
  long long local_10;
  int local_8;
local_8 = param_1;
  if (param_1 == -0x10) {
    UnitsCenter(0,-16,1000);
  }
  iVar3 = GetTotalAmount0(local_8);
  if (0 < iVar3) {
    UnitsCenter(local_8 + 8,local_8,1000);
    cVar1 = FUN_10003140(local_8);
    if (cVar1 == '\0') {
      iVar3 = GetUnitsAmount0(local_8 + 8,*(char *)(local_8 + 0x1e));
      if (iVar3 < 4) {
        SelectUnits(local_8,0);
        SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,
                       *(char *)(local_8 + 0x18),0);
        goto LAB_10003642;
      }
    }
    uVar2 = FUN_10002ba0(local_8,*(char *)(local_8 + 0x1e));
    local_64 = (uVar2 & 0xffff) / 100 - 1;
    switch(local_64) {
    case 0:
      SelectUnits(local_8,0);
      SetStandGround(*(char *)(local_8 + 0x1d),1);
      break;
    case 1:
      SelectUnits(local_8,0);
      SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,*(char *)(local_8 + 0x18),
                     0);
      break;
    case 2:
      AttackEnemyInZone(local_8,local_8 + 8,
                        (int)*(char *)(local_8 + 0x1e));
      break;
    case 3:
      local_28 = FUN_10001840(local_8 + 8,*(char *)(local_8 + 0x1d),0x14);
      local_10 = local_28;
      if ((intptr_t)local_28 == 0) {
        local_30 = FUN_10001840(local_8 + 8,*(char *)(local_8 + 0x1d),0xf);
        local_10 = local_30;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        local_38 = FUN_10001840(local_8 + 8,*(char *)(local_8 + 0x1d),0xb);
        local_10 = local_38;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        local_40 = FUN_10001840(local_8 + 8,*(char *)(local_8 + 0x1d),0x16);
        local_10 = local_40;
      }
      local_48 = FUN_10001900(local_8 + 8,*(char *)(local_8 + 0x1e));
      local_18 = local_48;
      local_50 = FUN_100019c0((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_48,
                                    (int)((unsigned long long)local_48 >> 0x20),400);
      (*(short*)&local_20) = (short)local_50;
      *(short *)(local_8 + 8) = (short)local_20;
      *(short*)((char*)&local_20 + 4) = (short)((unsigned long long)local_50 >> 0x20);
      *(short *)(local_8 + 10) = *(short*)((char*)&local_20 + 4);
      local_20 = local_50;
      SelectUnits(local_8,0);
      SelSendTo(*(char *)(local_8 + 0x1d),local_8 + 8,*(char *)(local_8 + 0x18),0);
      break;
    case 4:
      (*(int*)&local_10) = *(unsigned short *)(local_8 + 8) - 0x96;
      *(int*)((char*)&local_10 + 4) = *(unsigned short *)(local_8 + 10) - 0x96;
      local_58 = FUN_10001900(local_8 + 8,0);
      local_18 = local_58;
      local_60 = FUN_100019c0((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_58,
                                    (int)((unsigned long long)local_58 >> 0x20),800);
      (*(short*)&local_20) = (short)local_60;
      *(short *)(local_8 + 8) = (short)local_20;
      *(short*)((char*)&local_20 + 4) = (short)((unsigned long long)local_60 >> 0x20);
      *(short *)(local_8 + 10) = *(short*)((char*)&local_20 + 4);
      local_20 = local_60;
      SelectUnits(local_8,0);
      SelSendTo(*(char *)(local_8 + 0x1d),local_8 + 8,*(char *)(local_8 + 0x18),0);
      break;
    default:
      SelectUnits(local_8,0);
      SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,*(char *)(local_8 + 0x18),
                     0);
    }
  }
LAB_10003642:
  return;
}





void FUN_100037f0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10003830();
  uStack_8 = 0x1000381a;
  return;
}





void FUN_10003830(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
  uStack_8 = 0x10003868;
  return;
}





void  FUN_10003880(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10008dc0(param_1);
  return;
}





void FUN_100038d0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
while (param_3 = param_3 + -1, -1 < param_3) {
    ((int(*)())param_4)();
  }
  uStack_8 = 0x1000391e;
  return;
}





void FUN_10003e30(void)

{
  char cVar1;
  unsigned int uVar2;
  int uVar3;
  int iVar4;
  int *puVar5;
  int *puVar6;
  int *puVar7;
  int uVar8;
  int *puVar9;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  unsigned int local_8;
local_8 = local_8 & -256;
  while ((local_8 & 0xff) < 0x14) {
    cVar1 = FUN_10009200(((unsigned char *)&DAT_1003ffa0) + (local_8 & 0xff) * 0x41);
    if (cVar1 == '\0') {
      uVar2 = rand();
      uVar2 = uVar2 & -2147483645;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | -4) + 1;
      }
      local_c = (int)(char)uVar2;
      uVar2 = rand();
      uVar2 = uVar2 & -2147483645;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | -4) + 1;
      }
      local_10 = (int)(char)uVar2;
      iVar4 = rand();
      iVar4 = iVar4 % 0xff;
      puVar9 = ((unsigned char *)&DAT_1003fdf8) + (local_10 & 0xff) * 8;
      uVar8 = 1;
      puVar7 = ((unsigned char *)&DAT_1003fea8) + (local_c & 0xff) * 8;
      puVar6 = &DAT_1003fed0;
      uVar3 = FUN_10009070(((unsigned char *)&DAT_1003ffa0) + (local_8 & 0xff) * 0x41);
      CreateObject0(uVar3,puVar6,puVar7,uVar8,puVar9,iVar4);
      local_8 = (int)0x14;
    }
    local_8 = (int)(char)local_8 + '\x01';
  }
  return;
}





void __cdecl FUN_10003f70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_80 [16];
  int local_40;
  int local_3c;
  unsigned int local_38;
  int local_34;
  unsigned int local_30;
  unsigned short uStack_2c;
  unsigned short local_2a;
  int uStack_8;
local_34 = GetTotalAmount0(param_1);
  if (0 < local_34) {
    local_38 = 0;
    GetUnitInfo(param_1,0,&local_30);
    local_3c = (unsigned int)local_2a - (unsigned int)uStack_2c;
    for (local_40 = 1; local_40 < local_34; local_40 = local_40 + 1) {
      GetUnitInfo(param_1,local_40,&local_30);
      if (local_3c < (int)((unsigned int)local_2a - (unsigned int)uStack_2c)) {
        local_3c = (unsigned int)local_2a - (unsigned int)uStack_2c;
        local_38 = local_30 & 0xffff;
      }
    }
    FUN_10005240(param_1);
    InsertUnitToGroup(0,param_1,local_38);
  }
  uStack_8 = 0x10004091;
  return;
}





void __cdecl FUN_100040e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
ClearSelection(0);
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    SelectUnitsType(((unsigned char *)&DAT_1003fd58) + local_8 * 8,0,1);
  }
  SaveSelectedUnits(0,param_1,0);
  return;
}





void __cdecl FUN_100041a0(unsigned short *param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  unsigned int local_44 [5];
  int local_30;
  int local_2c;
  unsigned int local_18;
  unsigned int local_14;
  int local_10;
  unsigned int local_c;
  int local_8;
FUN_100040e0(param_2);
  local_8 = GetTotalAmount0(param_2);
  local_c = 0;
  local_10 = 0xfffa;
  local_14 = (unsigned int)*param_1;
  local_18 = (unsigned int)param_1[1];
  if (0 < local_8) {
    for (local_48 = 0; local_48 < local_8; local_48 = local_48 + 1) {
      GetUnitInfo(param_2,local_48,local_44);
      local_4c = local_30 - local_14;
      local_50 = local_2c - local_18;
      local_54 = FUN_100052e0();
      if (local_54 < local_10) {
        local_c = local_44[0] & 0xffff;
        local_10 = local_54;
      }
    }
    FUN_10005240(param_2);
    InsertUnitToGroup(0,param_2,local_c);
  }
  return;
}





void FUN_10004310(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int uVar5;
  int local_50 [16];
  int local_10;
  unsigned int local_c;
  unsigned int local_8;
ClearSelection(1);
  iVar3 = GetUnitsAmount0(&DAT_1003fd50,1);
  local_8 = (int)0 < iVar3;
  local_c = local_c & -256;
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    cVar1 = FUN_10009200(((unsigned char *)&DAT_1003ffa0) + local_10 * 0x41);
    if (cVar1 != '\0') {
      if ((local_8 & 0xff) == 0) {
        uVar5 = 1;
        uVar2 = FUN_10009070(((unsigned char *)&DAT_1003ffa0) + local_10 * 0x41);
        SelectUnits(uVar2,uVar5);
      }
      else {
        cVar1 = FUN_10009360(((unsigned char *)&DAT_1003ffa0) + local_10 * 0x41,&DAT_1003fd50);
        if (cVar1 != '\0') {
          uVar5 = 1;
          uVar2 = FUN_10009070(((unsigned char *)&DAT_1003ffa0) + local_10 * 0x41);
          SelectUnits(uVar2,uVar5);
        }
      }
      local_c = (int)1;
    }
  }
  if ((local_c & 0xff) != 0) {
    SelCenter(&DAT_1003fd50,1,2000);
  }
  return;
}





int __cdecl FUN_100044b0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  unsigned int local_8;
local_8 = local_8 & -256;
  uVar4 = 0;
  uVar1 = FUN_10008df0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    uVar5 = 0;
    uVar4 = 0;
    uVar1 = FUN_10008df0(param_1,2000);
    SelectUnitsInZone(uVar1,uVar4,uVar5);
    SaveSelectedUnits(0,&DAT_1003fd48,0);
    FUN_10003f70(&DAT_1003fd48);
  }
  return 0;
}





void FUN_10004580(void)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    cVar1 = FUN_10009200(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41);
    if (cVar1 != '\0') {
      cVar1 = FUN_10009360(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41,&DAT_1003fd50);
      if (cVar1 == '\0') {
        FUN_10009020(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41,&DAT_1003fd50);
      }
    }
  }
  return;
}







void __cdecl FUN_10004640(unsigned short *param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  long double fVar3;
  long long lVar4;
  int local_64 [16];
  void *local_24;
  int local_20;
  double local_1c;
  int local_14;
  int local_10;
  unsigned int local_c;
  unsigned int local_8;
local_8 = (unsigned int)*param_1;
  local_c = (unsigned int)param_1[1];
  local_10 = param_2;
  local_14 = param_3;
  local_20 = param_3 - local_c;
  local_24 = (void *)(param_2 - local_8);
  fVar3 = (long double)FUN_100098d4(local_24,(int)((double)local_20 / (double)(intptr_t)local_24));
  local_1c = (double)fVar3;
  if ((int)(local_10 - local_8) < 0) {
    local_1c = DAT_1003a040_ovl + local_1c;
  }
  FUN_10009824((*(int*)&local_1c),(int)(*(int*)&local_1c));
  lVar4 = 0;
  *param_1 = (unsigned short)lVar4;
  FUN_10009774((*(int*)&local_1c),(int)(*(int*)&local_1c));
  lVar4 = 0;
  param_1[1] = (unsigned short)lVar4;
  return;
}





void FUN_10004750(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_88 [16];
  int local_48;
  unsigned short *local_44;
  int local_40;
  char local_3c [20];
  int local_28;
  int local_24;
  int local_10;
  int local_c;
  unsigned int local_8;
local_8 = local_8 & -256;
  local_c = 0;
  while ((local_c < 0x14 && ((local_8 & 0xff) == 0))) {
    cVar1 = FUN_10009200(((unsigned char *)&DAT_1003ffa0) + local_c * 0x41);
    if ((cVar1 != '\0') &&
       (cVar1 = FUN_100044b0(((unsigned char *)&DAT_1003ffa0) + local_c * 0x41), cVar1 != '\0')) {
      local_8 = (int)1;
    }
    local_c = local_c + 1;
  }
  if ((DAT_100404b8 != '\0') && ((local_8 & 0xff) != 0)) {
    DAT_100404b8 = '\0';
    for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
      cVar1 = FUN_10009200(((unsigned char *)&DAT_1003ffa0) + local_10 * 0x41);
      if (cVar1 != '\0') {
        uVar2 = FUN_10008e60(((unsigned char *)&DAT_1003ffa0) + local_10 * 0x41);
        FUN_10009020(((unsigned char *)&DAT_1003ffa0) + local_10 * 0x41,uVar2);
        FUN_10009510((int)(((unsigned char *)&DAT_1003ffa0) + local_10 * 0x41));
      }
    }
  }
  if ((local_8 & 0xff) == 0) {
    DAT_100404b8 = '\x01';
    FUN_100041a0((unsigned short *)&DAT_1003fd50,&DAT_1003fd48);
    GetUnitInfo(&DAT_1003fd48,0,local_3c);
    for (local_40 = 0; local_40 < 0x14; local_40 = local_40 + 1) {
      cVar1 = FUN_10009200(((unsigned char *)&DAT_1003ffa0) + local_40 * 0x41);
      if (cVar1 != '\0') {
        local_44 = (unsigned short *)FUN_10008e60(((unsigned char *)&DAT_1003ffa0) + local_40 * 0x41);
        local_48 = FUN_100052e0();
        if (5000 < local_48) {
          FUN_10004640(local_44,local_28,local_24);
          FUN_10009020(((unsigned char *)&DAT_1003ffa0) + local_40 * 0x41,local_44);
        }
      }
    }
  }
  else {
    FUN_10004310();
  }
  return;
}





int __cdecl FUN_100051a0(int param_1)

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
  return 0;
}





void __cdecl FUN_10005240(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
while( 1 ) {
    iVar1 = GetTotalAmount0(param_1);
    if (iVar1 == 0) break;
    RemoveUnitFromGroup(param_1,0);
  }
  GetTotalAmount0(param_1);
  uStack_8 = 0x100052b4;
  return;
}





int FUN_100052e0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x10005329;
  return 0;
}






void  FUN_100053a0(int param_1)

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






int  FUN_10005470(int param_1)

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
  return 0;
}





int  FUN_100054d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}






void  FUN_10005560(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x14) = param_1;
  return;
}





int  FUN_100055a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((intptr_t)this_ptr + 8,*(int *)((intptr_t)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x100055f8;
  return 0;
}





void  FUN_10005620(void *this_ptr,int param_1,int param_2)

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
  local_8 = (void *)0x100056f7;
  return;
}





void  FUN_10005740(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10005780(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_100057c0(int param_1)

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





void  FUN_10005870(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_100058b0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  *(int *)((intptr_t)this_ptr + 0x1c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10005910(void *this_ptr,int param_1)

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
  local_8 = (void *)0x100059b0;
  return;
}





int  FUN_100059e0(int param_1)

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
  return 0;
}





void  FUN_10005a70(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelChangeNation(*(char *)((intptr_t)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((intptr_t)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10005ac8;
  return;
}





int  FUN_10005af0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10005b20(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),param_1,0,0);
  *(int *)((intptr_t)local_8 + 0x20) = param_1;
  local_8 = (void *)0x10005b7c;
  return;
}





void  FUN_10005ba0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  Patrol(*(char *)((intptr_t)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x10005bf1;
  return;
}





int  FUN_10005c10(int param_1)

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
  return 0;
}





void  FUN_10005c80(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10005cd3;
  return;
}





void  FUN_10005cf0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10005d30(int param_1)

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





void  FUN_10005da0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  cVar1 = FUN_10005470(param_1);
  if (cVar1 != '\0') {
    FUN_10005e80(local_8);
    iVar2 = FUN_100059e0(local_8);
    if (iVar2 < 10) {
      FUN_10005b20(local_8,*(int *)((intptr_t)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x10005dff;
  return;
}





void  FUN_10005e20(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10005e66;
  return;
}





void  FUN_10005e80(void *param_1)

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
  uVar1 = FUN_100055a0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10005edb;
  return;
}





void  FUN_10005f00(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10005f40(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10005f90(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10005f90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10005fe0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x24) = param_1;
  *(int *)((intptr_t)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10006030(void *param_1)

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
      (local_8 = param_1, cVar1 = FUN_10005470(param_1), cVar1 != '\0')) &&
     (*(int *)((intptr_t)local_8 + 0x10) != 0)) {
    if (*(int *)((intptr_t)local_8 + 0x10) == 6) {
      uVar6 = 0;
      uVar2 = FUN_100055a0(local_8,600);
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
          FUN_10005a70(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_100053a0((intptr_t)local_8);
        }
        AddResource(0,*(char *)((intptr_t)local_8 + 0x24),*(int *)((intptr_t)local_8 + 0x28));
        FUN_10005fe0(local_8,0,0);
      }
    }
    else {
      iVar3 = FUN_100059e0(local_8);
      if (iVar3 < 0x32) {
        FUN_10006320(local_8);
      }
      cVar1 = FUN_10005c10((intptr_t)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        this_ptr = (void *)FUN_10006500(*(short **)((intptr_t)local_8 + 0x20));
        FUN_10006660(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10006262;
  return;
}





void  FUN_10006320(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10005a70(param_1,6);
  SelectUnits(local_8,0);
  uVar5 = 0;
  uVar4 = 0;
  uVar1 = FUN_100055a0(local_8,100);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10005d30((intptr_t)local_8);
  local_8 = (void *)0x1000638c;
  return;
}





void  FUN_100063b0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100058b0(this_ptr,param_1,param_2,param_3);
  *(char *)((intptr_t)local_8 + 0x2c) = 1;
  local_8 = (void *)0x100063f5;
  return;
}





void  FUN_10006410(void *param_1)

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
  uVar1 = FUN_100055a0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000646b;
  return;
}





void  FUN_10006490(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 4) = param_1;
  ((long long *)&DAT_10040638)[DAT_10040688] = this_ptr;
  DAT_10040688 = DAT_10040688 + 1;
  return;
}





int __cdecl FUN_10006500(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_10040638;
  for (local_c = 0; local_c < DAT_10040688; local_c = local_c + 1) {
    psVar1 = (short *)FUN_100066d0(((long long *)&DAT_10040638)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_10040638)[local_c];
    }
  }
  return 0;
}





void  FUN_100065a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 8) = param_1;
  return;
}





void  FUN_100065e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10006620(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10006660(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005fe0(param_1,*(int *)((intptr_t)this_ptr + 0xc),*(int *)((intptr_t)this_ptr + 0x10));
  FUN_10005b20(param_1,*(int *)((intptr_t)local_8 + 8));
  local_8 = (void *)0x100066af;
  return;
}





int  FUN_100066d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10006710(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10006740(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  iVar2 = FUN_10006d10((intptr_t)param_1);
  if ((0 < iVar2) && (*(int *)((intptr_t)local_8 + 0x1c) + 1 < *(int *)((intptr_t)local_8 + 0x20))) {
    if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      cVar1 = FUN_10006d80(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_100073d0((intptr_t)local_8 + 0xc,
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      cVar1 = FUN_10006d80(local_8,*(int *)
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
  local_8 = (void *)0x10006942;
  return;
}





int FUN_100069d0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_10006a00(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10006a70(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10006ae0(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x10006b51;
  return;
}





void  FUN_10006b80(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  iVar2 = FUN_10006d10((intptr_t)this_ptr);
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
    FUN_10006a00(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10006c81;
  return;
}





int  FUN_10006cd0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





int  FUN_10006d10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return 0;
}





int  FUN_10006d80(void *this_ptr,int param_1)

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
  iVar1 = FUN_10006d10((intptr_t)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10006de0;
  return 0;
}





void  FUN_10006e00(void *this_ptr,int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xc,param_1);
  uVar1 = FUN_100051a0((intptr_t)local_8 + 0xc);
  *(unsigned int *)((intptr_t)local_8 + 0x18) = uVar1 & 0xff;
  *(int *)((intptr_t)local_8 + 0x14) = 0;
  *(int *)((intptr_t)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10006e74;
  return;
}





BOOL  FUN_10006ea0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10006ef0(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10006ea0((intptr_t)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x10006f8d;
  return;
}





int  FUN_10006fc0(int param_1)

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
  return 0;
}





void  FUN_10007070(int param_1)

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





void  FUN_10007110(int param_1)

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





void  FUN_10007190(int param_1)

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
      FUN_10007070(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    cVar1 = FUN_10006fc0(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10007110(local_8);
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





void __cdecl FUN_100073a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_1004068c = param_1;
  return;
}





void __cdecl FUN_100073d0(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_1004068c != (void *)0x0) {
    bVar1 = FUN_10006ea0((int)DAT_1004068c);
    if (bVar1) {
      FUN_10006ef0(DAT_1004068c,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10007429;
  return;
}





void  FUN_10007450(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  cVar1 = FUN_10007850(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      cVar1 = FUN_100077b0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_10040690,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_10040694 == 0) {
        cVar1 = FUN_100077b0(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_10040690,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_10040694,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_10040694,0);
      }
    }
    else {
      cVar1 = FUN_100077b0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_10040690,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10007680(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10007765;
  return;
}





int  FUN_100077b0(int param_1)

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
  return 0;
}





int  FUN_10007850(int param_1)

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
  return 0;
}





int  FUN_100078c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10007900(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10007947;
  return;
}





void  FUN_10007960(void *param_1)

{
  char cVar1;
  int *puVar2;
  int iVar3;
  int uVar4;
  int local_58 [16];
  int local_18 [2];
  int local_10 [2];
  void *local_8;
local_8 = param_1;
  cVar1 = FUN_10007ea0((intptr_t)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      puVar2 = (int *)FUN_10007f50(local_8,local_10);
      FUN_10007d00((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((intptr_t)local_8 + 0xc) = 2;
      }
      else {
        cVar1 = FUN_10007e00((intptr_t)local_8);
        if (cVar1 == '\0') {
          SelectUnits((intptr_t)local_8 + 0xd,0);
          SelSendTo(DAT_1003ddcc,(intptr_t)local_8 + 0x1d,*(char *)((intptr_t)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      puVar2 = (int *)FUN_10007f50(local_8,local_18);
      FUN_10007d00((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((intptr_t)local_8 + 0xd,0);
        SelSendTo(DAT_1003ddcc,DAT_10040698,*(char *)((intptr_t)local_8 + 8),0);
      }
      else {
        *(char *)((intptr_t)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x10007af9;
  return;
}







void  FUN_10007b70(void *this_ptr,int param_1,int param_2,int param_3)

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
  piVar1 = (int *)FUN_10007f50(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = (void *)piVar1[1];
  local_38 = (intptr_t)local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_100098d4(local_20,(int)((double)local_38 / (double)local_3c));
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_1003a040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10009824(this_00,(int)(local_28));
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_10009774(*(int*)((char*)&local_28 + 4),(intptr_t)local_28);
  lVar5 = 0;
  local_14 = (void *)lVar5;
  FUN_10007d00((intptr_t)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((intptr_t)local_8 + 8) = local_2c + 0x80;
  FUN_10007960(local_8);
  return;
}





void FUN_10007d00(int param_1,int param_2,int param_3,int param_4)

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
GetUnitInfo(DAT_1004069c,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_10040698,DAT_1004069c,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





int  FUN_10007e00(int param_1)

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
  return 0;
}





int  FUN_10007ea0(int param_1)

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
  return 0;
}





int  FUN_10007f10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





int  FUN_10007f50(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10008035;
  return 0;
}





void  FUN_10008080(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  cVar1 = FUN_100082b0(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_100406a0,local_8,DAT_1003ddd0);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      cVar1 = FUN_10008220(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_1003ddd4,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_100081c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10008204;
  return;
}





int  FUN_10008220(int param_1)

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
  return 0;
}





int  FUN_100082b0(int param_1)

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
  return 0;
}





void 
FUN_10008320(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((intptr_t)this_ptr + 6) = param_1;
  *(int *)((intptr_t)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  uVar1 = FUN_100051a0(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10008398;
  return;
}





void 
FUN_100083c0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  RegisterZone((intptr_t)local_8 + 0x1e,param_2);
  FUN_10008320(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10008442;
  return;
}





void  FUN_10008470(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((intptr_t)local_8 + 0x1e,DAT_100406a4,(intptr_t)local_8 + 0x16,300);
  FUN_10008320(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10008500;
  return;
}





void  FUN_10008530(char *param_1)

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
      FUN_10008670(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10008740(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  local_8 = (char *)0x1000862b;
  return;
}





void  FUN_10008670(char *param_1)

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
  local_8 = (char *)0x1000870a;
  return;
}





void  FUN_10008740(char *param_1)

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
  local_8 = (char *)0x100087da;
  return;
}





int  FUN_10008810(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = -1;
  return param_1;
}





void  FUN_10008850(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x30,param_1);
  local_8 = (void *)0x10008897;
  return;
}





void  FUN_100088b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup((intptr_t)this_ptr + 0x30);
  RemoveGroup(param_1,(intptr_t)local_8 + 0x30);
  local_8 = (void *)0x10008910;
  return;
}





int  FUN_10008930(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  unsigned short *local_8;
local_c = 0;
  local_8 = this_ptr;
  if (*(int *)((intptr_t)this_ptr + 0x2c) == -1) {
    GetUnitInfo((intptr_t)this_ptr + 0x30,0,this_ptr);
    *(unsigned int *)(local_8 + 0x16) = (unsigned int)*local_8;
  }
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 == 1) {
    GetUnitInfo(param_1,0,local_8);
    if ((unsigned int)*local_8 == *(unsigned int *)(local_8 + 0x16)) {
      local_c = 1;
    }
  }
  local_8 = (unsigned short *)0x100089e2;
  return 0;
}





void  FUN_10008a20(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  cVar1 = FUN_10008930(this_ptr,param_1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(param_2,param_1);
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10008a88;
  return;
}





int  FUN_10008ab0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0x30;
}





void 
FUN_10008af0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  char local_10 [8];
  void *local_8;
*(int *)((intptr_t)this_ptr + 0x45) = param_1;
  *(char *)((intptr_t)this_ptr + 0x38) = param_2;
  *(int *)((intptr_t)this_ptr + 0x39) = param_3;
  *(int *)((intptr_t)this_ptr + 0x3d) = param_4;
  *(int *)((intptr_t)this_ptr + 0x41) = param_5;
  local_8 = this_ptr;
  UnitsCenter(local_10,*(int *)((intptr_t)this_ptr + 0x45),500);
  SelSendTo(0,local_10,0,0);
  local_8 = (void *)0x10008b85;
  return;
}





void  FUN_10008bc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  short local_10;
  short local_e;
  int local_8;
local_8 = param_1;
  SelectUnits(*(int *)(param_1 + 0x45),0);
  UnitsCenter(&local_10,*(int *)(local_8 + 0x45),700);
  if (*(int *)(local_8 + 0x39) != 0) {
    local_10 = local_10 + *(short *)(local_8 + 0x39);
  }
  if (*(int *)(local_8 + 0x3d) != 0) {
    local_e = *(short *)(local_8 + 0x3d);
  }
  if (*(char *)(local_8 + 0x38) == '\0') {
    SelSendTo(3,&local_10,*(char *)(local_8 + 0x41),0);
  }
  if (*(char *)(local_8 + 0x38) == '\x01') {
    SelSendAndKill(3,&local_10,*(char *)(local_8 + 0x41),0);
  }
  *(int *)(local_8 + 0x45) = 0;
  return;
}





void  FUN_10008d00(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  char local_14 [8];
  char local_c;
  int local_8;
local_c = 0;
  if (*(int *)(param_1 + 0x45) != 0) {
    local_8 = param_1;
    UnitsCenter(local_14,*(int *)(param_1 + 0x45),500);
    iVar1 = FUN_10008ab0(local_8);
    iVar1 = GetUnitsAmount1(local_14,iVar1);
    if (0 < iVar1) {
      FUN_10008bc0(local_8);
      local_c = 1;
    }
  }
  return;
}





int  FUN_10008dc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





int  FUN_10008df0(void *this_ptr,short param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  UnitsCenter((intptr_t)this_ptr + 8,this_ptr,(intptr_t)param_1);
  local_8 = (void *)0x10008e42;
  return 0;
}





int  FUN_10008e60(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10008df0(param_1,300);
  local_8 = (void *)0x10008e97;
  return 0;
}





void  FUN_10008eb0(void *this_ptr,unsigned int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10008e60(this_ptr);
  local_10 = (unsigned int)*(unsigned short *)((intptr_t)local_8 + 8);
  local_c = (unsigned int)*(unsigned short *)((intptr_t)local_8 + 10);
  *param_1 = local_10;
  param_1[1] = local_c;
  local_8 = (void *)0x10008f0b;
  return;
}





void  FUN_10008f30(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelSendAndKill(*(char *)((intptr_t)local_8 + 0x3c),param_1,0,0);
  local_8 = (void *)0x10008f83;
  return;
}





void  FUN_10008fa0(void *this_ptr,int param_1,byte param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  uVar1 = (unsigned int)param_2;
  iVar2 = rand();
  SelSendTo(*(char *)((intptr_t)local_8 + 0x3c),param_1,iVar2 % 0xff,uVar1);
  local_8 = (void *)0x10009001;
  return;
}





void  FUN_10009020(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10008fa0(this_ptr,param_1,0);
  local_8 = (void *)0x10009058;
  return;
}





int  FUN_10009070(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}






int  FUN_10009100(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  char local_c;
  int local_8;
local_c = 0;
  local_10 = local_10 & -256;
  local_8 = param_1;
  while ((local_10 & 0xff) < 8) {
    iVar1 = GetUnitsByNation(local_8,local_10 & 0xff);
    if (0 < iVar1) {
      local_c = (char)local_10;
      local_10 = (int)8;
    }
    local_10 = (int)(char)local_10 + '\x01';
  }
  return 0;
}






int  FUN_10009200(int param_1)

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
  return 0;
}





void  FUN_10009260(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  uVar1 = FUN_10009100(local_8);
  *(char *)((intptr_t)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x100092b2;
  return;
}





void  FUN_100092d0(void *this_ptr,int param_1)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup(this_ptr);
  RemoveGroup(param_1,local_8);
  uVar1 = FUN_10009100(local_8);
  *(char *)((intptr_t)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10009338;
  return;
}





int  FUN_10009360(void *this_ptr,int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  iVar2 = GetTotalAmount0(this_ptr);
  iVar1 = GetUnitsAmount1(param_1,local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100093cb;
  return 0;
}





void  FUN_100093f0(void *this_ptr,char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)((intptr_t)this_ptr + 0x3c) = param_1;
  return;
}





void  FUN_10009430(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x3d) = param_1;
  return;
}





void FUN_10009470(int param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int local_48 [16];
  int local_8;
iVar2 = GetTotalAmount0(param_1);
  if (0 < iVar2) {
    uVar4 = 0;
    uVar1 = FUN_10009070(local_8);
    SelectUnits(uVar1,uVar4);
    SelAttackGroup(1,param_1);
  }
  return;
}





void  FUN_10009510(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
if (*(int *)(param_1 + 0x3d) != 0) {
    local_8 = param_1;
    FUN_10009470(*(int *)(param_1 + 0x3d));
  }
  return;
}





void  FUN_10009570(int param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  uVar1 = FUN_10009070(param_1);
  RegisterDynGroup(uVar1);
  return;
}





void FUN_10009760(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000af78((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000977d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10009810(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000af78((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000982d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_100098c0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000af78((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_100098dd((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_10009960(void)

{
  FUN_100099a0();
  return;
}





void FUN_10009990(void)

{
  return;
}





void FUN_100099a0(void)

{
  return;
}





int __cdecl FUN_100099f0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_100406c0;
  DAT_100406c0 = param_1;
  return uVar1;
}





void  FUN_10009a40(void *this_ptr,void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000b9c0(this_ptr,9);
    if (((((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((intptr_t)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((intptr_t)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000a680(2,0x1003a440,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000c550(param_1,*(int *)((intptr_t)param_1 + -0xc));
    FUN_1000ba60(9);
  }
  return;
}





int __cdecl FUN_10009af0(void *param_1)

{
  FUN_1000baf0(param_1,1);
  return 0;
}





int __cdecl FUN_10009e60(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = *(unsigned int *)(param_1 + 0xc);
  uVar5 = uVar6;
  uVar4 = uVar6;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar6 == -1) {
      FUN_1000ea40();
    }
    uVar6 = uVar6 - 1;
    iVar1 = iVar2 + uVar6 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 = uVar3, uVar6 == -1)) {
      param_2 = param_2 + -1;
      uVar5 = uVar6;
      uVar4 = uVar3;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(unsigned int *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    FUN_1000ea40();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_10009fc6(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003de24 = *(int *)(unaff_EBP + 8);
  DAT_1003de20 = in_EAX;
  DAT_1003de28 = unaff_EBP;
  return;
}





int __cdecl FUN_10009fe0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *this_ptr;
  void *this_00;
  void *this_01;
  unsigned int uVar4;
  char *pcVar5;
  int iVar6;
  
  FUN_1000ec80();
  pvVar1 = (void *)FUN_1000c990(this_ptr,(int)DAT_100421f8,2);
  this_00 = (void *)((int)DAT_100421f4 + (4 - (int)DAT_100421f8));
  if (pvVar1 < this_00) {
    iVar6 = 0x68;
    pcVar5 = "onexit.c";
    uVar4 = 2;
    iVar2 = FUN_1000c990(this_00,(int)DAT_100421f8,2);
    piVar3 = FUN_1000bf50(this_01,DAT_100421f8,(void *)(iVar2 + 0x10),uVar4,(int)pcVar5,iVar6);
    if (piVar3 == (int *)0x0) {
      FUN_1000ec90();
      return 0;
    }
    DAT_100421f4 = piVar3 + ((int)DAT_100421f4 - (int)DAT_100421f8 >> 2);
    DAT_100421f8 = piVar3;
  }
  *DAT_100421f4 = param_1;
  DAT_100421f4 = DAT_100421f4 + 1;
  FUN_1000ec90();
  return param_1;
}





int __cdecl FUN_1000a0a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009fe0(param_1);
  return (iVar1 != 0) - 1;
}





void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
DVar1 = time(NULL);
  srand(DVar1);
  SetPlayerName(0,"RUSSIA");
  SetPlayerName(1,"BAVARIA");
  RegisterZone(&DAT_1003fe38,DAT_1003a294);
  RegisterZone(&DAT_1003fdf8,DAT_1003a290);
  RegisterZone(&DAT_1003fe00,DAT_1003a28c);
  RegisterZone(&DAT_1003fe08,DAT_1003a288);
  RegisterZone(&DAT_1003fe10,DAT_1003a284);
  RegisterFormation(&DAT_1003fed0,"#ODIN");
  RegisterUnitType(&DAT_1003ff98,"FregatNEW(BA)");
  RegisterUnitType(&DAT_1003fea8,"Fregat(BA)");
  RegisterUnitType(&DAT_1003feb0,"KECH(BA)");
  RegisterUnitType(&DAT_1003feb8,"Linkor(BA)");
  RegisterUnitType(&DAT_1003fec0,"FregatNEW(BA)");
  RegisterUnitType(&DAT_1003fe60,"Yahta(RU)");
  RegisterUnitType(&DAT_1003fe68,"Linkor(RU)");
  RegisterUnitType(&DAT_1003fe70,"PERES_KOR(RU)");
  RegisterUnitType(&DAT_1003fe78,"Fregat(RU)");
  RegisterUnitType(&DAT_1003fe80,"GALERA(RU)");
  RegisterUnitType(&DAT_1003fe88,"FregatNEW(RU)");
  RegisterUnitType(&DAT_1003fe90,"KECH(RU)");
  RegisterUnitType(&DAT_1003fe98,"KUTTER(RU)");
  RegisterUnitType(&DAT_1003fea0,"Victoria(RU)");
  RegisterUnitType(&DAT_1003ff90,"Melnica_rus(RU)");
  RegisterDynGroup(&DAT_1003fd48);
  RegisterDynGroup(&DAT_1003fed8);
  RegisterVar(&DAT_1003fd48,8);
  RegisterVar(&DAT_1003fed8,8);
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    RegisterUnitType(((unsigned char *)&DAT_1003fd58) + local_8 * 8,(((int*)0))[local_8]);
  }
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    FUN_10009570(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41);
    FUN_10009430(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41,&DAT_1003fd48);
    FUN_100093f0(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41,1);
    RegisterVar(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41,0x41);
  }
  RegisterVar(&DAT_1003ff88,4);
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  int local_50 [16];
  int local_10;
  int local_c;
  int local_8;
uVar2 = Trigg(99);
  if ((uVar2 & 0xff) != 0) {
    DAT_1003ff88 = GetDiff(0);
    SetResource(0,3,DAT_1003ff88 * -3000 + 14000);
    SetResource(0,1,DAT_1003ff88 * -3000 + 14000);
    SetResource(0,0,DAT_1003ff88 * -3000 + 14000);
    SetResource(0,2,DAT_1003ff88 * -3000 + 14000);
    SetResource(0,5,DAT_1003ff88 * -3000 + 14000);
    SetResource(0,4,DAT_1003ff88 * -3000 + 14000);
    DAT_1003fd50_ovl = 3000;
    DAT_1003fd52_ovl = 3000;
    DAT_1003fd54 = 0x40000064;
    RunTimer(1,100);
    RunTimer(2,0x32);
    RunTimer(3,0x14);
    RunTimer(5,(4 - DAT_1003ff88) * 2000);
    EnableUnit(0,&DAT_1003ff90,0);
    RunTimer(0x1e,0x96);
    SetTrigg(99,0);
  }
  uVar2 = TimerDoneFirst(0x1e);
  if ((uVar2 & 0xff) != 0) {
    ShowPage("#PAGE0");
    if (DAT_1003ff88 < 2) {
      SetLightSpot(&DAT_1003fe38,6,1);
    }
  }
  uVar2 = TimerDoneFirst(5);
  if ((uVar2 & 0xff) != 0) {
    if (0 < DAT_1003ff88) {
      FUN_10003e30();
    }
    if (1 < DAT_1003ff88) {
      FUN_10003e30();
      InitialUpgrade(DAT_1003a2d8,"AKA17BA");
    }
    if (2 < DAT_1003ff88) {
      FUN_10003e30();
      InitialUpgrade(DAT_1003a2d8,"AKA20BA");
    }
    FUN_10004310();
    RunTimer(4,(3 - DAT_1003ff88) * 3000 + 5000);
  }
  uVar2 = Trigg(100);
  if ((uVar2 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_1003fed8,0);
    uVar2 = TimerDoneFirst(1);
    if ((uVar2 & 0xff) != 0) {
      FUN_10004750();
      RunTimer(1,0x32);
    }
    uVar2 = TimerDoneFirst(2);
    if ((uVar2 & 0xff) != 0) {
      FUN_10004310();
      RunTimer(2,100);
    }
    uVar2 = TimerDoneFirst(3);
    if ((uVar2 & 0xff) != 0) {
      for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
        cVar1 = FUN_10009200(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41);
        if ((cVar1 != '\0') &&
           (cVar1 = FUN_10009360(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41,&DAT_1003fd50), cVar1 != '\0')
           ) {
          FUN_10009510((int)(((unsigned char *)&DAT_1003ffa0) + local_8 * 0x41));
        }
      }
      RunTimer(3,0x32);
    }
    uVar2 = TimerDoneFirst(4);
    if ((uVar2 & 0xff) != 0) {
      FUN_10003e30();
      FUN_10004310();
      local_c = 0;
      for (local_10 = 0; local_10 < 9; local_10 = local_10 + 1) {
        iVar3 = GetReadyAmount(((unsigned char *)&DAT_1003fe60) + local_10 * 8,0);
        local_c = local_c + iVar3;
      }
      local_c = (4 - DAT_1003ff88) * 3000 - local_c * 10 * DAT_1003ff88;
      if (local_c < 1) {
        local_c = 10;
      }
      RunTimer(4,local_c);
    }
    uVar2 = NationIsErased(1);
    if ((uVar2 & 0xff) != 0) {
      ShowPage("#PAGE2");
      ShowVictory();
      SetTrigg(100,0);
    }
    iVar3 = GetReadyAmount(&DAT_1003fd58,0);
    if (iVar3 == 0) {
      ShowPage("#PAGE1");
      LooseGame();
      SetTrigg(100,0);
    }
    ClearSelection(0);
    SelectUnits(&DAT_1003fed8,0);
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
