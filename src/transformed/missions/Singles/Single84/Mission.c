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
char DAT_1003a064[] = "GK";
char DAT_1003a068[] = "T5";
char DAT_1003a06c[] = "T4";
char DAT_1003a070[] = "T3";
char DAT_1003a074[] = "T2";
char DAT_1003a078[] = "T1";
char DAT_1003a090[] = "Z15";
char DAT_1003a094[] = "Z10";
char DAT_1003a098[] = "Z5";
char DAT_1003a09c[] = "Z14";
char DAT_1003a0a0[] = "Z9";
char DAT_1003a0a4[] = "Z4";
char DAT_1003a0a8[] = "Z13";
char DAT_1003a0ac[] = "Z8";
char DAT_1003a0b0[] = "Z3";
char DAT_1003a0b4[] = "Z12";
char DAT_1003a0b8[] = "Z7";
char DAT_1003a0bc[] = "Z2";
char DAT_1003a0c0[] = "Z11";
char DAT_1003a0c4[] = "Z6";
char DAT_1003a0c8[] = "Z1";
char DAT_1003a0cc[] = "SUXX";
char DAT_1003a290[] = "G00";
long long DAT_1003dd60 = 0;
int DAT_1003dd6c = 4;
int DAT_1003dd70 = 800;
int DAT_1003dd74 = 2;
int DAT_1003ddc0 = 0;
int DAT_1003ddc4 = 0;
int DAT_1003ddc8 = 0;
long long DAT_1003fcb0 = 0;
long long DAT_1003fcb4 = 0;
long long DAT_1003fcb8 = 0;
long long DAT_1003fcc8 = 0;
int DAT_1003fcf0 = 0;
unsigned char DAT_1003fd00[248] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1003fd18[248] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1003fd1d = 0;
long long DAT_1003fd1e = 0;
long long DAT_1003fd1f = 0;
long long DAT_1003fd3e = 0;
long long DAT_1003fd5d = 0;
long long DAT_1003fd7c = 0;
long long DAT_1003fd9b = 0;
long long DAT_1003fdba = 0;
long long DAT_1003fdd9 = 0;
long long DAT_1003fdf8 = 0;
long long DAT_1003fe17 = 0;
long long DAT_1003fe36 = 0;
long long DAT_1003fe55 = 0;
long long DAT_1003fe74 = 0;
long long DAT_1003fe93 = 0;
long long DAT_1003feb2 = 0;
long long DAT_1003fed1 = 0;
long long DAT_1003fef0 = 0;
long long DAT_1003ff0f = 0;
long long DAT_1003ff2e = 0;
long long DAT_1003ff50 = 0;
int DAT_1003ff52 = 0;
unsigned char DAT_1003ff58[584] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD4, 0x31, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD2, 0x38, 0x04, 0x00, 0x88, 0x34, 0x04, 0x00, 0x3C, 0x30, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x04, 0x00, 0xF0, 0x32, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x39, 0x04, 0x00, 0xB0, 0x39, 0x04, 0x00, 0x24, 0x3E, 0x04, 0x00, 0x12, 0x3E, 0x04, 0x00, 0x00, 0x3E, 0x04, 0x00, 0xEE, 0x3D, 0x04, 0x00, 0xD4, 0x3D, 0x04, 0x00, 0xC6, 0x3D, 0x04, 0x00, 0xB2, 0x3D, 0x04, 0x00, 0xA2, 0x3D, 0x04, 0x00, 0x8C, 0x3D, 0x04, 0x00, 0x76, 0x3D, 0x04, 0x00, 0x64, 0x3D, 0x04, 0x00, 0x52, 0x3D, 0x04, 0x00, 0x42, 0x3D, 0x04, 0x00, 0x32, 0x3D, 0x04, 0x00, 0x22, 0x3D, 0x04, 0x00, 0x12, 0x3D, 0x04, 0x00, 0x0A, 0x3D, 0x04, 0x00, 0xF8, 0x3C, 0x04, 0x00, 0xE6, 0x3C, 0x04, 0x00, 0xD0, 0x3C, 0x04, 0x00, 0xBE, 0x3C, 0x04, 0x00, 0xB2, 0x3C, 0x04, 0x00, 0xA8, 0x3C, 0x04, 0x00, 0x9C, 0x3C, 0x04, 0x00, 0x8A, 0x3C, 0x04, 0x00, 0x6E, 0x3C, 0x04, 0x00, 0x5E, 0x3C, 0x04, 0x00, 0x40, 0x3C, 0x04, 0x00, 0x30, 0x3C, 0x04, 0x00, 0x22, 0x3C, 0x04, 0x00, 0x16, 0x3C, 0x04, 0x00, 0xFE, 0x3B, 0x04, 0x00, 0xF0, 0x3B, 0x04, 0x00, 0xE4, 0x3B, 0x04, 0x00, 0xD6, 0x3B, 0x04, 0x00, 0xC8, 0x3B, 0x04, 0x00, 0xAE, 0x3B, 0x04, 0x00, 0x96, 0x3B, 0x04, 0x00, 0x80, 0x3B, 0x04, 0x00, 0x66, 0x3B, 0x04, 0x00, 0x4C, 0x3B, 0x04, 0x00, 0x3A, 0x3B, 0x04, 0x00, 0x2C, 0x3B, 0x04, 0x00, 0x1A, 0x3B, 0x04, 0x00, 0x06, 0x3B, 0x04, 0x00, 0xF2, 0x3A, 0x04, 0x00, 0xDE, 0x3A, 0x04, 0x00, 0xCE, 0x3A, 0x04, 0x00, 0xDC, 0x38, 0x04, 0x00, 0xE8, 0x38, 0x04, 0x00, 0xFA, 0x38, 0x04, 0x00, 0x08, 0x39, 0x04, 0x00, 0x16, 0x39, 0x04, 0x00, 0x26, 0x39, 0x04, 0x00, 0x32, 0x39, 0x04, 0x00, 0x4A, 0x39, 0x04, 0x00, 0x60, 0x39, 0x04, 0x00, 0x72, 0x39, 0x04, 0x00, 0x82, 0x39, 0x04, 0x00, 0x9A, 0x39, 0x04, 0x00, 0xC0, 0x3A, 0x04, 0x00, 0x56, 0x3A, 0x04, 0x00, 0xE0, 0x39, 0x04, 0x00, 0xF8, 0x39, 0x04, 0x00, 0x10, 0x3A, 0x04, 0x00, 0x28, 0x3A, 0x04, 0x00, 0x36, 0x3A, 0x04, 0x00, 0x46, 0x3A, 0x04, 0x00, 0x66, 0x3A, 0x04, 0x00, 0x76, 0x3A, 0x04, 0x00, 0x8C, 0x3A, 0x04, 0x00, 0x9A, 0x3A, 0x04, 0x00, 0xA6, 0x3A, 0x04, 0x00, 0xB0, 0x3A, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10040238 = 0;
long long DAT_10040240 = 0;
long long DAT_10040248 = 0;
long long DAT_10040250 = 0;
long long DAT_10040258 = 0;
long long DAT_10040260 = 0;
int DAT_10040262 = 0;
long long DAT_10040268 = 0;
long long DAT_10040270 = 0;
long long DAT_10040272 = 0;
long long DAT_10040278 = 0;
long long DAT_10040288 = 0;
long long DAT_10040290 = 0;
long long DAT_10040298 = 0;
long long DAT_100402a0 = 0;
long long DAT_100402a8 = 0;
long long DAT_100402b0 = 0;
long long DAT_100402b8 = 0;
long long DAT_100402c0 = 0;
long long DAT_100402c8 = 0;
long long DAT_100402d0 = 0;
unsigned char DAT_100402d8[256] = {0};
long long DAT_100402e0 = 0;
long long DAT_100402e8 = 0;
long long DAT_100402f0 = 0;
long long DAT_100402f8 = 0;
long long DAT_10040300 = 0;
long long DAT_10040308 = 0;
long long DAT_10040310 = 0;
long long DAT_10040318 = 0;
long long DAT_10040320 = 0;
long long DAT_10040328 = 0;
long long DAT_10040330 = 0;
long long DAT_10040338 = 0;
long long DAT_10040340 = 0;
long long DAT_10040348 = 0;
long long DAT_10040350 = 0;
long long DAT_10040358 = 0;
long long DAT_10040368 = 0;
long long DAT_10040378 = 0;
int DAT_100403e8 = 0;
int DAT_100403f0 = 0;
long long DAT_100403f8 = 0;
int DAT_100403fa = 0;
int DAT_1004056c = 0;
int DAT_100405bc = 0;
int DAT_100405c0 = 0;
int DAT_100405c4 = 0;
int DAT_100405c8 = 0;
int DAT_100405cc = 0;
int DAT_100405d0 = 0;
int DAT_100405d4 = 0;
int DAT_100405d8 = 0;
int DAT_100405f4 = 0;
long long DAT_100405f8 = 0;
int *DAT_10042134 = 0;
int DAT_10042138 = 0;
int DAT_1003a040_ovl = 776530087;
int DAT_1003a04c_ovl = 1065353216;
int DAT_1003a050_ovl = 1120403456;
int DAT_1003fcb0_ovl = 0;
int DAT_1003fcb4_ovl = 0;
int DAT_10040270_ovl = 0;
int DAT_10040272_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10009be4() { return 0; }
int FUN_10009bed() { return 0; }
int FUN_10009c94() { return 0; }
int FUN_10009c9d() { return 0; }
int FUN_10009d44() { return 0; }
int FUN_10009d4d() { return 0; }
int FUN_1000aa10() { return 0; }
int FUN_1000b308() { return 0; }
int FUN_1000bd50() { return 0; }
int FUN_1000bdf0() { return 0; }
int FUN_1000be80() { return 0; }
int FUN_1000c2e0() { return 0; }
int FUN_1000c8e0() { return 0; }
int FUN_1000cd20() { return 0; }
int FUN_1000edd0() { return 0; }
int FUN_1000f010() { return 0; }
int FUN_1000f020() { return 0; }
int FUN_1000f060() { return 0; }


/* Forward declarations */
void FUN_100014d0(int param_1);
void FUN_100015e0(int param_1,unsigned short param_2);
void FUN_10001730(int param_1,char param_2,char param_3);
void FUN_100017f0(int param_1,char param_2);
void FUN_100018b0(int param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_100019d0(char *param_1);
char * 
FUN_100021d0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void 
FUN_10002260(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void  FUN_10002380(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
void  FUN_100024d0(intptr_t param_1);
void FUN_10002550(unsigned int param_1);
void  FUN_100025c0(int param_1);
unsigned int *  FUN_10002620(void *this_ptr,unsigned int *param_1,byte param_2);
void  FUN_100026d0(void *this_ptr,int param_1,char param_2);
int FUN_10002830(char param_1);
void FUN_100028c0(void);
void FUN_10002900(void);
void FUN_10002950(void);
void FUN_10002990(void);
void FUN_100029d0(void);
void FUN_10002a20(void);
void FUN_10002a90(int param_1,char param_2);
void FUN_10002f50(void);
void FUN_10002f90(void);
void  FUN_10003030(int param_1);
void  FUN_100030c0(intptr_t param_1);
void FUN_100036e0(void);
void FUN_10003720(void);
void FUN_10003770(int param_1,int param_2,int param_3,int *param_4);
void FUN_100037e0(void);
void FUN_10003820(void);
void  FUN_10003870(int param_1);
void FUN_10003e60(intptr_t param_1,unsigned short *param_2);
void FUN_10004040(void *param_1);
void FUN_10005e50(int param_1);
void FUN_10005ef0(int param_1);
void FUN_10005f90(void);
void  FUN_10006050(int param_1);
void  FUN_10006120(int param_1);
int  FUN_10006180(int param_1);
void  FUN_10006210(void *this_ptr,int param_1);
void  FUN_10006250(void *this_ptr,int param_1);
void  FUN_100062d0(void *this_ptr,int param_1,int param_2);
void  FUN_100063f0(void *this_ptr,int param_1);
void  FUN_10006430(void *this_ptr,int param_1);
void  FUN_10006470(int param_1);
void  FUN_10006520(void *this_ptr,int param_1);
void  FUN_10006560(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100065c0(void *this_ptr,int param_1);
void  FUN_10006690(int param_1);
void  FUN_10006720(void *this_ptr,unsigned int param_1);
int  FUN_100067a0(int param_1);
void  FUN_100067d0(void *this_ptr,int param_1);
void  FUN_10006850(void *this_ptr,int param_1);
void  FUN_100068c0(int param_1);
void  FUN_10006930(void *this_ptr,int param_1);
void  FUN_100069a0(void *this_ptr,int param_1);
void  FUN_100069e0(int param_1);
void  FUN_10006a50(void *param_1);
void  FUN_10006ad0(void *this_ptr,int param_1);
void  FUN_10006b30(void *param_1);
void  FUN_10006bb0(void *this_ptr,int param_1);
void  FUN_10006bf0(int param_1);
void  FUN_10006c40(int param_1);
void  FUN_10006c90(void *this_ptr,int param_1,int param_2);
void  FUN_10006ce0(void *param_1);
void  FUN_10006fd0(void *param_1);
void  FUN_10007060(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100070c0(void *param_1);
void  FUN_10007140(void *this_ptr,int param_1);
void FUN_100071b0(short *param_1);
void  FUN_10007250(void *this_ptr,int param_1);
void  FUN_10007290(void *this_ptr,int param_1);
void  FUN_100072d0(void *this_ptr,int param_1);
void  FUN_10007310(void *this_ptr,void *param_1);
int  FUN_10007380(int param_1);
int  FUN_100073c0(int param_1);
void  FUN_100073f0(void *param_1);
int FUN_10007680(void);
void  FUN_100076b0(void *this_ptr,int param_1,int param_2);
void  FUN_10007720(void *this_ptr,int param_1);
void  FUN_10007790(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10007830(void *this_ptr,int param_1,int param_2);
int  FUN_10007980(int param_1);
void  FUN_100079c0(int param_1);
void  FUN_10007a30(void *this_ptr,int param_1);
void  FUN_10007ab0(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10007b50(int param_1);
void  FUN_10007ba0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10007c70(int param_1);
void  FUN_10007d20(int param_1);
void  FUN_10007dc0(int param_1);
void  FUN_10007e40(int param_1);
void FUN_10008050(int param_1);
void FUN_10008080(int param_1,int param_2,int param_3);
void  FUN_10008100(int param_1);
void  FUN_10008330(void *this_ptr,int *param_1);
void  FUN_10008460(int param_1);
void  FUN_10008500(int param_1);
int  FUN_10008570(int param_1);
void  FUN_100085b0(void *this_ptr,int param_1);
void  FUN_10008610(void *param_1);
void  FUN_10008820(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_100089b0(int param_1,int param_2,int param_3,int param_4);
void  FUN_10008ab0(int param_1);
void  FUN_10008b50(int param_1);
int  FUN_10008bc0(int param_1);
void  FUN_10008c00(void *this_ptr,int *param_1);
void  FUN_10008d30(int param_1);
void  FUN_10008e70(void *this_ptr,int param_1);
void  FUN_10008ed0(int param_1);
void  FUN_10008f60(int param_1);
void 
FUN_10008fd0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10009070(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10009120(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_100091e0(char *param_1);
void  FUN_10009320(char *param_1);
void  FUN_100093f0(char *param_1);
int  FUN_100094c0(int param_1);
void  FUN_10009500(void *this_ptr,int param_1);
void  FUN_10009560(void *this_ptr,int param_1);
void  FUN_100095e0(void *this_ptr,int param_1);
void  FUN_100096d0(void *this_ptr,int param_1,int param_2);
int  FUN_10009760(int param_1);
void 
FUN_100097a0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5);
void  FUN_10009870(int param_1);
void  FUN_100099b0(int param_1);
void FUN_10009bd0(void);
void FUN_10009c80(void);
void FUN_10009d30(void);
void FUN_10009dd0(void);
void FUN_10009e00(void);
void FUN_10009e10(void);
int FUN_10009e60(int param_1);
void  FUN_10009eb0(void *this_ptr,void *param_1);
void FUN_10009f60(void *param_1);
int FUN_1000a2d0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_1000a436(void);
int FUN_1000a450(int param_1);
int FUN_1000a510(int param_1);
int FUN_1000a580(char *param_1,int param_2);

void OnInit();
void ProcessScenary();


void __cdecl FUN_100014d0(int param_1)

{
  int iVar1;
  int *puVar2;
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
  uStack_8 = 0x1000159f;
  return;
}





void __cdecl FUN_100015e0(int param_1,unsigned short param_2)

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
  uStack_8 = 0x100016de;
  return;
}





void __cdecl FUN_10001730(int param_1,char param_2,char param_3)

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
  FUN_100015e0(local_c,(unsigned short)(intptr_t)param_3);
  uStack_8 = 0x100017bf;
  return;
}





void __cdecl FUN_100017f0(int param_1,char param_2)

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
  FUN_100014d0(local_c);
  uStack_8 = 0x1000187b;
  return;
}







void __cdecl FUN_100018b0(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  fVar3 = (long double)FUN_10009d44(local_2c,(int)((double)(intptr_t)local_2c / (double)local_30));
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_1003a040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_10009c94(*(int*)((char*)&local_1c + 4),(int)(local_1c));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_10009be4((void *)local_1c,(int)(void *)local_1c);
  lVar4 = 0;
  local_24 = (int)lVar4;
  return;
}





void  FUN_100019d0(char *param_1)

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
  FUN_10002260(param_1,8,3,0x15,0,200,3,0x50);
  FUN_10002260(local_8,8,3,0x18,0,200,3,0x50);
  FUN_10002260(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002260(local_8,8,2,8,0,0x5a,3,0x32);
  FUN_10002260(local_8,8,2,0x14,0,100,3,0x32);
  FUN_10002260(local_8,8,2,0x16,0,0x1e,3,0x32);
  FUN_10002260(local_8,8,3,0x17,0,1000,3,0x5a);
  FUN_10002260(local_8,8,3,0xf,0,1000,3,0x5a);
  FUN_10002260(local_8,0x15,2,0xf,0,300,3,0x1e);
  FUN_10002260(local_8,0x15,2,0x14,0,300,3,0x1e);
  FUN_10002260(local_8,0x15,2,0x15,0,300,3,0x1e);
  FUN_10002260(local_8,0x15,2,0x18,0,300,3,0x1e);
  FUN_10002260(local_8,0x15,2,0x16,0,300,3,0x1e);
  FUN_10002260(local_8,0x15,2,0xb,0,300,3,0x1e);
  FUN_10002260(local_8,0x15,2,8,0,300,3,0x1e);
  FUN_10002260(local_8,0x15,3,0x17,0,1000,3,0x5a);
  FUN_10002260(local_8,0x15,2,10,0,500,3,0x1e);
  FUN_10002260(local_8,0x15,1,0x16,1,0x14,4,0x50);
  FUN_10002260(local_8,0x15,1,0x14,1,10,4,0x50);
  FUN_10002260(local_8,0x15,2,8,1,0x1e,4,0x50);
  FUN_10002260(local_8,0x15,2,0x15,1,100,4,0x50);
  FUN_10002260(local_8,0x14,2,0x14,0,500,3,0x50);
  FUN_10002260(local_8,0x14,2,0x16,0,500,3,0x50);
  FUN_10002260(local_8,0x14,2,0x15,0,500,3,0x50);
  FUN_10002260(local_8,0x14,3,0x17,0,1000,3,0x5a);
  FUN_10002260(local_8,0xf,2,0x15,0,300,3,0x50);
  FUN_10002260(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002260(local_8,0xf,2,8,0,300,3,0x32);
  FUN_10002260(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_10002260(local_8,0xf,2,0x16,0,300,3,0x32);
  FUN_10002260(local_8,0xf,2,0x17,0,300,3,0x5a);
  FUN_10002260(local_8,0xf,2,0xf,0,300,3,0x5a);
  FUN_10002260(local_8,0xf,2,0x18,0,300,3,0x1e);
  FUN_10002260(local_8,0xb,2,0x15,0,300,3,0x50);
  FUN_10002260(local_8,0xb,2,0x18,0,300,3,0x50);
  FUN_10002260(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002260(local_8,0xb,2,8,0,300,3,0x32);
  FUN_10002260(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_10002260(local_8,0xb,2,0x16,0,300,3,0x32);
  FUN_10002260(local_8,0xb,2,0x17,0,300,3,0x5a);
  FUN_10002260(local_8,0xb,2,0xf,0,300,3,0x5a);
  FUN_10002260(local_8,0xb,2,0xb,0,300,3,0x1e);
  FUN_10002260(local_8,0xb,2,10,0,500,3,0x1e);
  FUN_10002260(local_8,0x18,2,0x15,0,300,3,0x50);
  FUN_10002260(local_8,0x18,2,0x18,0,300,3,0x50);
  FUN_10002260(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002260(local_8,0x18,2,8,0,300,3,0x32);
  FUN_10002260(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_10002260(local_8,0x18,2,0x16,0,300,3,0x32);
  FUN_10002260(local_8,0x18,2,0x17,0,300,3,0x5a);
  FUN_10002260(local_8,0x18,2,0xf,0,300,3,0x5a);
  FUN_10002260(local_8,0x16,2,0x15,0,500,3,0x50);
  FUN_10002260(local_8,0x16,2,0x18,0,500,3,0x50);
  FUN_10002260(local_8,0x16,2,0x14,0,500,3,0x32);
  FUN_10002260(local_8,0x16,2,8,0,500,3,0x32);
  FUN_10002260(local_8,0x16,2,0xb,0,500,3,0x32);
  FUN_10002260(local_8,0x16,2,0x16,0,500,3,0x32);
  FUN_10002260(local_8,0x16,2,0x17,0,500,3,0x5a);
  FUN_10002260(local_8,0x16,2,0xf,0,500,3,0x5a);
  FUN_10002260(local_8,0x16,2,0xb,0,500,3,0x1e);
  FUN_10002260(local_8,0x16,2,10,0,500,2,0x1e);
  FUN_10002260(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (char *)0x1000202c;
  return;
}





char * 
FUN_100021d0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
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
FUN_10002260(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
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
    FUN_10009f60((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = FUN_100021d0(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(char **)((intptr_t)local_14 + 8) = local_20;
  }
  else {
    FUN_10002260(*(void **)((intptr_t)this_ptr + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  return;
}





void  FUN_10002380(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
LAB_1000242a:
          local_c = (unsigned int)*(byte *)((intptr_t)this_ptr + 5) * 100 + (unsigned int)*(byte *)((intptr_t)this_ptr + 6);
          goto LAB_1000246c;
        }
        pvVar1 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 3);
          if (pvVar4 < pvVar1) goto LAB_1000242a;
        }
      }
    }
  }
  if (*(int *)((intptr_t)this_ptr + 8) != 0) {
    uVar2 = (int)(short)param_4;
    local_8 = this_ptr;
    FUN_10002380(*(void **)((intptr_t)this_ptr + 8),
                                 (int)(char)param_1,
                                 (int)(char)param_2,
                                 (int)(char)param_3,uVar2);
  }
LAB_1000246c:
  local_8 = (void *)0x1000247c;
  return;
}





void  FUN_100024d0(intptr_t param_1)

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
      FUN_10002550(1);
    }
  }
  return;
}





void FUN_10002550(unsigned int param_1)

{
  void *in_ECX;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = in_ECX;
  FUN_100024d0((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10009eb0(local_8,local_8);
  }
  local_8 = (void *)0x1000259b;
  return;
}





void  FUN_100025c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1 + 0x20);
  return;
}





unsigned int *  FUN_10002620(void *this_ptr,unsigned int *param_1,byte param_2)

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





void  FUN_100026d0(void *this_ptr,int param_1,char param_2)

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
    uVar2 = FUN_10002830(local_2a);
    local_40 = (int *)((intptr_t)local_8 + (uVar2 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x100027dc;
  return;
}





int FUN_10002830(char param_1)

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





void FUN_100028c0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002900();
  uStack_8 = 0x100028ea;
  return;
}





void FUN_10002900(void)

{
  int *puVar1;
  int iVar2;
  int *puVar3;
  int local_6c [16];
  char local_2c [36];
  int uStack_8;
FUN_100025c0((intptr_t)local_2c);
  puVar3 = &DAT_1003fcc8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x1000293b;
  return;
}





void FUN_10002950(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002990();
  FUN_100029d0();
  uStack_8 = 0x1000297f;
  return;
}





void FUN_10002990(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100019d0(&DAT_1003fcb8);
  uStack_8 = 0x100029bf;
  return;
}





void FUN_100029d0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_1000a510(0x10002a20);
  uStack_8 = 0x10002a02;
  return;
}





void FUN_10002a20(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_1003fcf0 & 1) == 0) {
    DAT_1003fcf0 = DAT_1003fcf0 | 1;
    FUN_100024d0((intptr_t)&DAT_1003fcb8);
  }
  uStack_8 = 0x10002a6c;
  return;
}







void FUN_10002a90(int param_1,char param_2)

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
  FUN_100026d0(&DAT_1003fcc8,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)((long long *)&DAT_1003fcc8)[local_40]) {
      uVar2 = (((long long *)&DAT_1003fcc8)[local_40] * 100) / local_10;
      FUN_10002380(&DAT_1003fcb8,(intptr_t)local_2a,1,
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
    FUN_100026d0(&DAT_1003fcc8,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)((long long *)&DAT_1003fcc8)[local_48]) {
        uVar2 = (((long long *)&DAT_1003fcc8)[local_48] * 100) / local_10;
        FUN_10002380(&DAT_1003fcb8,(intptr_t)local_2a,2,
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
    FUN_100026d0(&DAT_1003fcc8,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)((long long *)&DAT_1003fcc8)[local_50]) {
        local_54 = ((float)(int)((long long *)&DAT_1003fcc8)[local_50] * DAT_1003a050_ovl) / (float)local_10;
        if (local_54 < DAT_1003a04c_ovl) {
          local_54 = 1.0;
        }
        lVar5 = 0;
        FUN_10002380(&DAT_1003fcb8,(intptr_t)local_2a,
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
  return;
}





void FUN_10002f50(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002f90();
  uStack_8 = 0x10002f7a;
  return;
}







void FUN_10002f90(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
DAT_1003fcb0_ovl = local_c;
  DAT_1003fcb4_ovl = local_8;
  return;
}






void  FUN_10003030(int param_1)

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
  return;
}





void  FUN_100030c0(intptr_t param_1)

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
    FUN_10003030(local_8);
    if (cVar1 == '\0') {
      iVar3 = GetUnitsAmount0(local_8 + 8,*(char *)(local_8 + 0x1e));
      if (iVar3 < 5) {
        SelectUnits(local_8,0);
        SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,
                       *(char *)(local_8 + 0x18),0);
        goto LAB_10003532;
      }
    }
    FUN_10002a90(local_8,*(char *)(local_8 + 0x1e));
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
      FUN_10001730(local_8 + 8,*(char *)(local_8 + 0x1d),0x14);
      local_10 = local_28;
      if ((intptr_t)local_28 == 0) {
        FUN_10001730(local_8 + 8,*(char *)(local_8 + 0x1d),0xf);
        local_10 = local_30;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        FUN_10001730(local_8 + 8,*(char *)(local_8 + 0x1d),0xb);
        local_10 = local_38;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        FUN_10001730(local_8 + 8,*(char *)(local_8 + 0x1d),0x16);
        local_10 = local_40;
      }
      FUN_100017f0(local_8 + 8,*(char *)(local_8 + 0x1e));
      local_18 = local_48;
      FUN_100018b0((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_48,
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
      FUN_100017f0(local_8 + 8,0);
      local_18 = local_58;
      FUN_100018b0((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_58,
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
LAB_10003532:
  return;
}





void FUN_100036e0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10003720();
  uStack_8 = 0x1000370a;
  return;
}





void FUN_10003720(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
  uStack_8 = 0x10003758;
  return;
}





void FUN_10003770(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
while (param_3 = param_3 + -1, -1 < param_3) {
    ((int(*)())param_4)();
  }
  uStack_8 = 0x100037be;
  return;
}





void FUN_100037e0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10003820();
  uStack_8 = 0x1000380a;
  return;
}





void FUN_10003820(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
  uStack_8 = 0x10003858;
  return;
}





void  FUN_10003870(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100094c0(param_1);
  return;
}







void __cdecl FUN_10003e60(intptr_t param_1,unsigned short *param_2)

{
  int iVar1;
  int *puVar2;
  long double fVar3;
  long long lVar4;
  double local_44;
  int local_3c;
  double local_38;
  int local_30;
  int local_2c;
  void *local_28;
  int local_24;
  int local_20;
  double local_1c;
  unsigned int local_14;
  unsigned int local_10;
  unsigned int local_c;
  unsigned int local_8;
UnitsCenter(param_1 + 0x10,param_1,500);
  local_8 = (unsigned int)*param_2;
  local_c = (unsigned int)param_2[1];
  local_10 = (unsigned int)*(unsigned short *)(param_1 + 0x10);
  local_14 = (unsigned int)*(unsigned short *)(param_1 + 0x12);
  local_28 = (void *)(local_14 - local_c);
  local_2c = local_10 - local_8;
  fVar3 = (long double)FUN_10009d44(local_28,(int)((double)(intptr_t)local_28 / (double)local_2c));
  local_1c = (double)fVar3;
  if ((int)(local_10 - local_8) < 0) {
    local_1c = DAT_1003a040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  FUN_10005f90();
  local_30 = -(local_24 / 5 + 100);
  local_38 = (double)local_30;
  FUN_10009c94((void *)0x5,(int)(local_1c));
  lVar4 = 0;
  *(short *)(param_1 + 0x10) = (short)lVar4;
  local_3c = -(local_24 / 5 + 100);
  local_44 = (double)local_3c;
  FUN_10009be4((void *)0x5,(*(int*)&local_1c));
  lVar4 = 0;
  *(short *)(param_1 + 0x12) = (short)lVar4;
  *(int *)(param_1 + 0x18) = local_20 + 0x80;
  return;
}





void __cdecl FUN_10004040(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_6c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1c;
  unsigned int local_18;
  int local_14;
  unsigned int local_10;
  unsigned int local_c;
  unsigned int local_8;
local_8 = (int)1;
  local_c = local_c & -256;
  local_10 = local_10 & -256;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = AskMultilineQuestion(7,"#PAGE1",0,"FM18_1|FM18_2|FM18_3|FM18_break");
  switch(local_20) {
  case 0:
    local_c = local_c & -256;
    break;
  case 1:
    local_c = (int)1;
    break;
  case 2:
    local_c = (int)2;
    break;
  case 3:
    local_8 = local_8 & -256;
  }
  if ((local_8 & 0xff) != 0) {
    local_24 = AskMultilineQuestion(7,"#PAGE2",0,"FM18_5|FM18_6|FM18_7|FM18_8|FM18_break");
    switch(local_24) {
    case 0:
      local_10 = (unsigned int)*(int*)((char*)&local_10 + 1) << 8;
      break;
    case 1:
      local_10 = (int)1;
      break;
    case 2:
      local_10 = (int)3;
      break;
    case 3:
      local_10 = (int)2;
      break;
    case 4:
      local_8 = local_8 & -256;
    }
  }
  if ((local_8 & 0xff) != 0) {
    local_28 = AskMultilineQuestion(7,"#PAGE2",0,"FM18_9|FM18_10|FM18_11|FM18_12|FM18_13|FM18_break");
    switch(local_28) {
    case 0:
      local_1c = 1;
      local_2c = AskMultilineQuestion(7,"#PAGE2",0,"FM18_14|FM18_15|FM18_16|FM18_break");
      switch(local_2c) {
      case 0:
        local_14 = 3000;
        SelectUnits(&DAT_1003fd00,0);
        SelectUnits(&DAT_1003fd1f,1);
        SelectUnits(&DAT_1003fd3e,1);
        SelectUnits(&DAT_1003fd5d,1);
        SelCenter(&DAT_1003ff50,1,1000);
        local_18 = (unsigned int)DAT_1003ff52;
        break;
      case 1:
        local_14 = 3000;
        SelectUnits(&DAT_1003fd7c,0);
        SelectUnits(&DAT_1003fd9b,1);
        SelectUnits(&DAT_1003fdba,1);
        SelectUnits(&DAT_1003fdd9,1);
        SelectUnits(&DAT_1003fdf8,1);
        SelCenter(&DAT_1003ff50,1,1000);
        local_18 = (unsigned int)DAT_1003ff52;
        break;
      case 2:
        local_14 = 3000;
        SelectUnits(&DAT_1003fe17,0);
        SelectUnits(&DAT_1003fe36,1);
        SelectUnits(&DAT_1003fe55,1);
        SelectUnits(&DAT_1003fe74,1);
        SelectUnits(&DAT_1003fe93,1);
        SelCenter(&DAT_1003ff50,1,1000);
        local_18 = (unsigned int)DAT_1003ff52;
        break;
      case 3:
        local_8 = local_8 & -256;
      }
      break;
    case 1:
      local_14 = -1200;
      break;
    case 2:
      SelectUnits(&DAT_100402d8,0);
      SelectUnits(&DAT_100402e0,1);
      SelectUnits(&DAT_100402e8,1);
      SelectUnits(&DAT_100402f0,1);
      SelCenter(&DAT_10040260,3,1000);
      local_1c = 1;
      local_18 = (unsigned int)DAT_10040262;
      break;
    case 3:
      SelectUnits(&DAT_100402f8,0);
      SelectUnits(&DAT_10040300,1);
      SelectUnits(&DAT_10040308,1);
      SelectUnits(&DAT_10040310,1);
      SelCenter(&DAT_1003ff50,3,1000);
      local_1c = 1;
      local_18 = (unsigned int)DAT_1003ff52;
      break;
    case 4:
      SelectUnits(&DAT_10040318,0);
      SelectUnits(&DAT_10040320,1);
      SelectUnits(&DAT_10040328,1);
      SelectUnits(&DAT_10040330,1);
      SelCenter(&DAT_100403f8,3,1000);
      local_1c = 1;
      local_18 = (unsigned int)DAT_100403fa;
      break;
    case 5:
      local_8 = local_8 & -256;
    }
  }
  if ((local_8 & 0xff) != 0) {
    FUN_100097a0(param_1,((unsigned char *)&DAT_100402d8) + (local_10 & 0xff) * 8 + (local_c & 0xff) * 0x20,
                       local_1c,local_14,local_18,0x10);
  }
  return;
}





void __cdecl FUN_10005e50(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  unsigned int local_c;
  unsigned int local_8;
local_8 = 0;
  for (local_c = 0; (intptr_t)local_c < 8; local_c = local_c + 1) {
    iVar1 = GetUnitsByNation(param_1,local_c & 0xff);
    if (0 < iVar1) {
      local_8 = local_c;
      local_c = 8;
    }
  }
  return;
}





void __cdecl FUN_10005ef0(int param_1)

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
  uStack_8 = 0x10005f64;
  return;
}





void FUN_10005f90(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x10005fd9;
  return;
}






void  FUN_10006050(int param_1)

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






void  FUN_10006120(int param_1)

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
  return;
}





int  FUN_10006180(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}






void  FUN_10006210(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_10006250(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((intptr_t)this_ptr + 8,*(int *)((intptr_t)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x100062a8;
  return;
}





void  FUN_100062d0(void *this_ptr,int param_1,int param_2)

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
  local_8 = (void *)0x100063a7;
  return;
}





void  FUN_100063f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10006430(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10006470(int param_1)

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





void  FUN_10006520(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10006560(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  *(int *)((intptr_t)this_ptr + 0x1c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_100065c0(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10006660;
  return;
}





void  FUN_10006690(int param_1)

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
  return;
}





void  FUN_10006720(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelChangeNation(*(char *)((intptr_t)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((intptr_t)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10006778;
  return;
}





int  FUN_100067a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100067d0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),param_1,0,0);
  *(int *)((intptr_t)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000682c;
  return;
}





void  FUN_10006850(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  Patrol(*(char *)((intptr_t)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x100068a1;
  return;
}





void  FUN_100068c0(int param_1)

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
  return;
}





void  FUN_10006930(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10006983;
  return;
}





void  FUN_100069a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_100069e0(int param_1)

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





void  FUN_10006a50(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10006120(param_1);
  if (cVar1 != '\0') {
    FUN_10006b30(local_8);
    FUN_10006690(local_8);
    if (iVar2 < 10) {
      FUN_100067d0(local_8,*(int *)((intptr_t)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x10006aaf;
  return;
}





void  FUN_10006ad0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10006b16;
  return;
}





void  FUN_10006b30(void *param_1)

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
  FUN_10006250(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10006b8b;
  return;
}





void  FUN_10006bb0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10006bf0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10006c40(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10006c40(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10006c90(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x24) = param_1;
  *(int *)((intptr_t)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10006ce0(void *param_1)

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
      (local_8 = param_1, FUN_10006120(param_1), cVar1 != '\0')) &&
     (*(int *)((intptr_t)local_8 + 0x10) != 0)) {
    if (*(int *)((intptr_t)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_10006250(local_8,600);
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
          FUN_10006720(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10006050((intptr_t)local_8);
        }
        AddResource(0,*(char *)((intptr_t)local_8 + 0x24),*(int *)((intptr_t)local_8 + 0x28));
        FUN_10006c90(local_8,0,0);
      }
    }
    else {
      FUN_10006690(local_8);
      if (iVar3 < 0x32) {
        FUN_10006fd0(local_8);
      }
      FUN_100068c0((intptr_t)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_100071b0(*(short **)((intptr_t)local_8 + 0x20));
        FUN_10007310(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10006f12;
  return;
}





void  FUN_10006fd0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10006720(param_1,6);
  SelectUnits(local_8,0);
  uVar5 = 0;
  uVar4 = 0;
  FUN_10006250(local_8,100);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_100069e0((intptr_t)local_8);
  local_8 = (void *)0x1000703c;
  return;
}





void  FUN_10007060(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10006560(this_ptr,param_1,param_2,param_3);
  *(char *)((intptr_t)local_8 + 0x2c) = 1;
  local_8 = (void *)0x100070a5;
  return;
}





void  FUN_100070c0(void *param_1)

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
  FUN_10006250(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000711b;
  return;
}





void  FUN_10007140(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 4) = param_1;
  ((long long *)&DAT_1004056c)[DAT_100405bc] = this_ptr;
  DAT_100405bc = DAT_100405bc + 1;
  return;
}





void __cdecl FUN_100071b0(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1004056c;
  for (local_c = 0; local_c < DAT_100405bc; local_c = local_c + 1) {
    psVar1 = (short *)FUN_10007380(((long long *)&DAT_1004056c)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_1004056c)[local_c];
    }
  }
  return;
}





void  FUN_10007250(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 8) = param_1;
  return;
}





void  FUN_10007290(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_100072d0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10007310(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10006c90(param_1,*(int *)((intptr_t)this_ptr + 0xc),*(int *)((intptr_t)this_ptr + 0x10));
  FUN_100067d0(param_1,*(int *)((intptr_t)local_8 + 8));
  local_8 = (void *)0x1000735f;
  return;
}





int  FUN_10007380(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_100073c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100073f0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100079c0((intptr_t)param_1);
  if ((0 < iVar2) && (*(int *)((intptr_t)local_8 + 0x1c) + 1 < *(int *)((intptr_t)local_8 + 0x20))) {
    if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10007a30(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10008080((intptr_t)local_8 + 0xc,
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10007a30(local_8,*(int *)
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
  local_8 = (void *)0x100075f2;
  return;
}





int FUN_10007680(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_100076b0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10007720(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10007790(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x10007801;
  return;
}





void  FUN_10007830(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_100079c0((intptr_t)this_ptr);
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
    FUN_100076b0(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10007931;
  return;
}





int  FUN_10007980(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_100079c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_10007a30(void *this_ptr,int param_1)

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
  FUN_100079c0((intptr_t)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10007a90;
  return;
}





void  FUN_10007ab0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xc,param_1);
  FUN_10005e50((intptr_t)local_8 + 0xc);
  *(int *)((intptr_t)local_8 + 0x18) = uVar1;
  *(int *)((intptr_t)local_8 + 0x14) = 0;
  *(int *)((intptr_t)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10007b1f;
  return;
}





BOOL  FUN_10007b50(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10007ba0(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10007b50((intptr_t)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x10007c3d;
  return;
}





void  FUN_10007c70(int param_1)

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
  return;
}





void  FUN_10007d20(int param_1)

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





void  FUN_10007dc0(int param_1)

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





void  FUN_10007e40(int param_1)

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
      FUN_10007d20(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_10007c70(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10007dc0(local_8);
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





void __cdecl FUN_10008050(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_100405c0 = param_1;
  return;
}





void __cdecl FUN_10008080(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_100405c0 != (void *)0x0) {
    bVar1 = FUN_10007b50((int)DAT_100405c0);
    if (bVar1) {
      FUN_10007ba0(DAT_100405c0,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x100080d9;
  return;
}





void  FUN_10008100(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  FUN_10008500(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      FUN_10008460(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_100405c4,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_100405c8 == 0) {
        FUN_10008460(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_100405c4,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_100405c8,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_100405c8,0);
      }
    }
    else {
      FUN_10008460(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_100405c4,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10008330(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10008415;
  return;
}





void  FUN_10008460(int param_1)

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
  return;
}





void  FUN_10008500(int param_1)

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
  return;
}





int  FUN_10008570(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_100085b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xd,param_1);
  local_8 = (void *)0x100085f7;
  return;
}





void  FUN_10008610(void *param_1)

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
  FUN_10008b50((intptr_t)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      FUN_10008c00(local_8,local_10);
      FUN_100089b0((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((intptr_t)local_8 + 0xc) = 2;
      }
      else {
        FUN_10008ab0((intptr_t)local_8);
        if (cVar1 == '\0') {
          SelectUnits((intptr_t)local_8 + 0xd,0);
          SelSendTo(DAT_1003dd6c,(intptr_t)local_8 + 0x1d,*(char *)((intptr_t)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      FUN_10008c00(local_8,local_18);
      FUN_100089b0((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((intptr_t)local_8 + 0xd,0);
        SelSendTo(DAT_1003dd6c,DAT_100405cc,*(char *)((intptr_t)local_8 + 8),0);
      }
      else {
        *(char *)((intptr_t)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x100087a9;
  return;
}







void  FUN_10008820(void *this_ptr,int param_1,int param_2,int param_3)

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
  FUN_10008c00(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = (void *)piVar1[1];
  local_38 = (intptr_t)local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_10009d44(local_20,(int)((double)local_38 / (double)local_3c));
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_1003a040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10009c94(this_00,(int)(local_28));
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_10009be4(*(int*)((char*)&local_28 + 4),(intptr_t)local_28);
  lVar5 = 0;
  local_14 = (void *)lVar5;
  FUN_100089b0((intptr_t)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((intptr_t)local_8 + 8) = local_2c + 0x80;
  FUN_10008610(local_8);
  return;
}





void FUN_100089b0(int param_1,int param_2,int param_3,int param_4)

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
GetUnitInfo(DAT_100405d0,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_100405cc,DAT_100405d0,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





void  FUN_10008ab0(int param_1)

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
  return;
}





void  FUN_10008b50(int param_1)

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
  return;
}





int  FUN_10008bc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





void  FUN_10008c00(void *this_ptr,int *param_1)

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
  local_8 = (void *)0x10008ce5;
  return;
}





void  FUN_10008d30(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10008f60(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_100405d4,local_8,DAT_1003dd70);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      FUN_10008ed0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_1003dd74,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_10008e70(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10008eb4;
  return;
}





void  FUN_10008ed0(int param_1)

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
  return;
}





void  FUN_10008f60(int param_1)

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
  return;
}





void 
FUN_10008fd0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((intptr_t)this_ptr + 6) = param_1;
  *(int *)((intptr_t)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_10005e50(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x10009048;
  return;
}





void 
FUN_10009070(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  RegisterZone((intptr_t)local_8 + 0x1e,param_2);
  FUN_10008fd0(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x100090f2;
  return;
}





void  FUN_10009120(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((intptr_t)local_8 + 0x1e,DAT_100405d8,(intptr_t)local_8 + 0x16,300);
  FUN_10008fd0(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x100091b0;
  return;
}





void  FUN_100091e0(char *param_1)

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
      FUN_10009320(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_100093f0(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  local_8 = (char *)0x100092db;
  return;
}





void  FUN_10009320(char *param_1)

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
  local_8 = (char *)0x100093ba;
  return;
}





void  FUN_100093f0(char *param_1)

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
  local_8 = (char *)0x1000948a;
  return;
}





int  FUN_100094c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = -1;
  return param_1;
}





void  FUN_10009500(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x30,param_1);
  local_8 = (void *)0x10009547;
  return;
}





void  FUN_10009560(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup((intptr_t)this_ptr + 0x30);
  RemoveGroup(param_1,(intptr_t)local_8 + 0x30);
  local_8 = (void *)0x100095c0;
  return;
}





void  FUN_100095e0(void *this_ptr,int param_1)

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
  local_8 = (unsigned short *)0x10009692;
  return;
}





void  FUN_100096d0(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  FUN_100095e0(this_ptr,param_1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(param_2,param_1);
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10009738;
  return;
}





int  FUN_10009760(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0x30;
}





void 
FUN_100097a0(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
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
  local_8 = (void *)0x10009835;
  return;
}





void  FUN_10009870(int param_1)

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





void  FUN_100099b0(int param_1)

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
    iVar1 = FUN_10009760(local_8);
    iVar1 = GetUnitsAmount1(local_14,iVar1);
    if (0 < iVar1) {
      FUN_10009870(local_8);
      local_c = 1;
    }
  }
  return;
}





void FUN_10009bd0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000b308((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_10009bed((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10009c80(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000b308((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_10009c9d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10009d30(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000b308((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_10009d4d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_10009dd0(void)

{
  FUN_10009e10();
  return;
}





void FUN_10009e00(void)

{
  return;
}





void FUN_10009e10(void)

{
  return;
}





int __cdecl FUN_10009e60(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_100405f4;
  DAT_100405f4 = param_1;
  return uVar1;
}





void  FUN_10009eb0(void *this_ptr,void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000bd50(this_ptr,9);
    if (((((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((intptr_t)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((intptr_t)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000aa10(2,0x1003a3f8,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000c8e0(param_1,*(int *)((intptr_t)param_1 + -0xc));
    FUN_1000bdf0(9);
  }
  return;
}





void __cdecl FUN_10009f60(void *param_1)

{
  FUN_1000be80(param_1,1);
  return;
}





int __cdecl FUN_1000a2d0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

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
      FUN_1000edd0();
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
    FUN_1000edd0();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_1000a436(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003ddc4 = *(int *)(unaff_EBP + 8);
  DAT_1003ddc0 = in_EAX;
  DAT_1003ddc8 = unaff_EBP;
  return;
}





int __cdecl FUN_1000a450(int param_1)

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
  
  FUN_1000f010();
  pvVar1 = (void *)FUN_1000cd20(this_ptr,(int)DAT_10042138,2);
  this_00 = (void *)((int)DAT_10042134 + (4 - (int)DAT_10042138));
  if (pvVar1 < this_00) {
    iVar6 = 0x68;
    pcVar5 = "onexit.c";
    uVar4 = 2;
    iVar2 = FUN_1000cd20(this_00,(int)DAT_10042138,2);
    piVar3 = FUN_1000c2e0(this_01,DAT_10042138,(void *)(iVar2 + 0x10),uVar4,(int)pcVar5,iVar6);
    if (piVar3 == (int *)0x0) {
      FUN_1000f020();
      return 0;
    }
    DAT_10042134 = piVar3 + ((int)DAT_10042134 - (int)DAT_10042138 >> 2);
    DAT_10042138 = piVar3;
  }
  *DAT_10042134 = param_1;
  DAT_10042134 = DAT_10042134 + 1;
  FUN_1000f020();
  return param_1;
}





int __cdecl FUN_1000a510(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000a450(param_1);
  return (iVar1 != 0) - 1;
}





int __cdecl FUN_1000a580(char *param_1,int param_2)

{
  void *pcVar1;
  int iVar2;
  int uVar3;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_1000aa10(2,0x1003a448,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  if ((param_2 == 0) &&
     (iVar2 = FUN_1000aa10(2,0x1003a448,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000f060(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  int local_14;
  int local_10;
  char local_c [4];
  int uStack_8;
SetPlayerName(0,"AUSTRIANS");
  SetPlayerName(3,"AUSTRIANS");
  SetPlayerName(1,DAT_1003a0cc);
  RegisterZone(&DAT_10040288,DAT_1003a0c8);
  RegisterZone(&DAT_100402b0,DAT_1003a0c4);
  RegisterZone(&DAT_10040348,DAT_1003a0c0);
  RegisterZone(&DAT_10040290,DAT_1003a0bc);
  RegisterZone(&DAT_100402b8,DAT_1003a0b8);
  RegisterZone(&DAT_10040350,DAT_1003a0b4);
  RegisterZone(&DAT_10040298,DAT_1003a0b0);
  RegisterZone(&DAT_100402c0,DAT_1003a0ac);
  RegisterZone(&DAT_10040358,DAT_1003a0a8);
  RegisterZone(&DAT_100402a0,DAT_1003a0a4);
  RegisterZone(&DAT_100402c8,DAT_1003a0a0);
  RegisterZone(&DAT_10040368,DAT_1003a09c);
  RegisterZone(&DAT_100402a8,DAT_1003a098);
  RegisterZone(&DAT_10040340,DAT_1003a094);
  RegisterZone(&DAT_10040378,DAT_1003a090);
  for (local_10 = 0; local_10 < 0x13; local_10 = local_10 + 1) {
    FUN_1000a580(local_c,0x1003a08c);
    RegisterUnits(((unsigned char *)&DAT_1003fd00) + local_10 * 0x1f,local_c);
    ((long long *)&DAT_1003fd1d)[local_10 * 0x1f] = 1;
    *(int *)(((unsigned char *)&DAT_1003fd18) + local_10 * 0x1f) = 0x80;
    ((long long *)&DAT_1003fd1e)[local_10 * 0x1f] = 3;
  }
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    FUN_1000a580(local_c,0x1003a084);
    FUN_10009500(((unsigned char *)&DAT_1003ff58) + local_10 * 0x49,local_c);
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      FUN_1000a580(local_c,0x1003a07c);
      RegisterUnits(((unsigned char *)&DAT_100402d8) + local_14 * 8 + local_10 * 0x20,local_c);
    }
  }
  RegisterUnits(&DAT_10040238,DAT_1003a078);
  RegisterUnits(&DAT_10040240,DAT_1003a074);
  RegisterUnits(&DAT_10040248,DAT_1003a070);
  RegisterUnits(&DAT_10040250,DAT_1003a06c);
  RegisterUnits(&DAT_10040258,DAT_1003a068);
  RegisterUnits(&DAT_10040278,DAT_1003a064);
  RegisterUnits(&DAT_10040268,"Ships");
  RegisterUnits(&DAT_100402d0,"Gbild");
  RegisterDynGroup(&DAT_10040338);
  RegisterVar(&DAT_10040338,8);
  RegisterVar(&DAT_100403f0,4);
  uStack_8 = 0x10003d37;
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  int uVar5;
  int local_64 [16];
  char local_21;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
uVar2 = Trigg(99);
  if ((uVar2 & 0xff) != 0) {
    ChangeFriends(0,9);
    DAT_100403f0 = GetDiff(0);
    InitialUpgrade(DAT_1003a290,"Mushketer(au)ATTACK5");
    InitialUpgrade(DAT_1003a290,"Mushketer(au)SHIELD6");
    InitialUpgrade(DAT_1003a290,"Kirasir(au)ATTACK6");
    InitialUpgrade(DAT_1003a290,"Kirasir(au)SHIELD4");
    InitialUpgrade(DAT_1003a290,"Gusar_evro(au)ATTACK7");
    InitialUpgrade(DAT_1003a290,"Gusar_evro(au)SHIELD7");
    InitialUpgrade(DAT_1003a290,"Dragun_18(au)ATTACK7");
    InitialUpgrade(DAT_1003a290,"Dragun_18(au)SHIELD5");
    InitialUpgrade(DAT_1003a290,"AKA31AU");
    if (DAT_100403f0 < 1) {
      InitialUpgrade(DAT_1003a290,"Mushketer(au)ATTACK5");
      InitialUpgrade(DAT_1003a290,"Mushketer(au)SHIELD6");
      InitialUpgrade(DAT_1003a290,"Kirasir(au)ATTACK6");
      InitialUpgrade(DAT_1003a290,"Kirasir(au)SHIELD4");
      InitialUpgrade(DAT_1003a290,"Gusar_evro(au)ATTACK7");
      InitialUpgrade(DAT_1003a290,"Gusar_evro(au)SHIELD7");
      InitialUpgrade(DAT_1003a290,"Dragun_18(au)ATTACK7");
      InitialUpgrade(DAT_1003a290,"Dragun_18(au)SHIELD5");
      InitialUpgrade(DAT_1003a290,"AKA31AU");
    }
    if (DAT_100403f0 < 2) {
      InitialUpgrade(DAT_1003a290,"Mushketer(au)ATTACK5");
      InitialUpgrade(DAT_1003a290,"Mushketer(au)SHIELD6");
      InitialUpgrade(DAT_1003a290,"Kirasir(au)ATTACK6");
      InitialUpgrade(DAT_1003a290,"Kirasir(au)SHIELD4");
      InitialUpgrade(DAT_1003a290,"Gusar_evro(au)ATTACK7");
      InitialUpgrade(DAT_1003a290,"Gusar_evro(au)SHIELD7");
      InitialUpgrade(DAT_1003a290,"Dragun_18(au)ATTACK7");
      InitialUpgrade(DAT_1003a290,"Dragun_18(au)SHIELD5");
      InitialUpgrade(DAT_1003a290,"AKA31AU");
    }
    if (DAT_100403f0 < 3) {
      InitialUpgrade(DAT_1003a290,"Mushketer(au)ATTACK5");
      InitialUpgrade(DAT_1003a290,"Mushketer(au)SHIELD6");
      InitialUpgrade(DAT_1003a290,"Kirasir(au)ATTACK6");
      InitialUpgrade(DAT_1003a290,"Kirasir(au)SHIELD4");
      InitialUpgrade(DAT_1003a290,"Gusar_evro(au)ATTACK7");
      InitialUpgrade(DAT_1003a290,"Gusar_evro(au)SHIELD7");
      InitialUpgrade(DAT_1003a290,"Dragun_18(au)ATTACK7");
      InitialUpgrade(DAT_1003a290,"Dragun_18(au)SHIELD5");
    }
    SetTrigg(0x1d,0);
    RunTimer(0x1b,100);
    RunTimer(1,1000);
    RunTimer(2,0x1e);
    RunTimer(0x1e,0x32);
    SetTrigg(99,0);
  }
  uVar2 = TimerDoneFirst(0x1e);
  if ((uVar2 & 0xff) != 0) {
    ShowPage("#PAGE0");
    SelectUnits(&DAT_10040238,0);
    SelSendTo(1,&DAT_10040288,0,0);
    SelectUnits(&DAT_10040240,0);
    SelSendTo(1,&DAT_10040290,0,0);
    SelectUnits(&DAT_10040248,0);
    SelSendTo(1,&DAT_10040298,0,0);
    SelectUnits(&DAT_10040250,0);
    SelSendTo(1,&DAT_100402a0,0,0);
    SelectUnits(&DAT_10040258,0);
    SelSendTo(1,&DAT_100402a8,0,0);
    RunTimer(0x1d,10);
    UnitsCenter(&DAT_10040270,&DAT_10040238,300);
    local_8 = 1;
    for (local_c = 1; local_c < 8; local_c = local_c + 1) {
      for (local_10 = 1; local_10 < 8; local_10 = local_10 + 1) {
        iVar3 = local_c * 2000 + -500;
        DAT_10040270_ovl = (short)iVar3;
        DAT_10040272_ovl = (short)local_10 * 2000 + -500;
        local_21 = (char)local_8;
        uVar5 = (int)(char)local_8;
        local_8 = local_8 + 1;
        SetLightSpot(&DAT_10040270,4,uVar5);
      }
    }
  }
  uVar2 = TimerDoneFirst(0x1d);
  if ((uVar2 & 0xff) != 0) {
    SelectUnits(&DAT_10040238,0);
    SelectUnits(&DAT_1003feb2,1);
    SendUnitsToTransport(1);
    SelectUnits(&DAT_10040240,0);
    SelectUnits(&DAT_1003fed1,1);
    SendUnitsToTransport(1);
    SelectUnits(&DAT_10040248,0);
    SelectUnits(&DAT_1003fef0,1);
    SendUnitsToTransport(1);
    SelectUnits(&DAT_10040250,0);
    SelectUnits(&DAT_1003ff0f,1);
    SendUnitsToTransport(1);
    SelectUnits(&DAT_10040258,0);
    SelectUnits(&DAT_1003ff2e,1);
    SendUnitsToTransport(1);
    SetTrigg(0x1d,0);
    SelectUnits(&DAT_10040268,0);
    SelSendAndKill(1,&DAT_100402b0,0x80,0);
    SelAttackGroup(1,&DAT_100402d0);
  }
  uVar2 = TimerDoneFirst(0x1b);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = Trigg(0x1d);
    if (9 < (uVar2 & 0xff)) {
      uVar2 = Trigg(0x1d);
      if ((uVar2 & 0xff) < 0xe) {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          SelectUnits(((unsigned char *)&DAT_10040238) + local_14 * 8,0);
          uVar2 = CheckLeaveAbility(1);
          if ((uVar2 & 0xff) != 0) {
            iVar3 = GetNInside(1);
            if (iVar3 == 0x50) {
              PushAllUnitsAway(1);
              uVar2 = Trigg(0x1d);
              SetTrigg(0x1d,0);
            }
            iVar3 = GetNInside(1);
            if (iVar3 == 0) {
              SelSendTo(1,&DAT_100402a8,0,0);
            }
          }
          uVar2 = CheckLeaveAbility(1);
          if ((uVar2 & 0xff) == 0) {
            iVar3 = GetNInside(1);
            if (iVar3 == 0) {
              SelDie(1);
            }
          }
        }
      }
    }
    uVar2 = Trigg(0x1d);
    if (4 < (uVar2 & 0xff)) {
      uVar2 = Trigg(0x1d);
      if ((uVar2 & 0xff) < 10) {
        for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
          SelectUnits(((unsigned char *)&DAT_10040238) + local_18 * 8,0);
          uVar2 = CheckLeaveAbility(1);
          if ((uVar2 & 0xff) != 0) {
            iVar3 = GetNInside(1);
            if (iVar3 == 0x50) {
              SelSendTo(1,&DAT_100402b8,0,0);
              SelSendTo(1,&DAT_100402b8,0,0);
              uVar2 = Trigg(0x1d);
              SetTrigg(0x1d,0);
            }
          }
        }
      }
    }
    RunTimer(0x1b,100);
  }
  uVar2 = Trigg(100);
  if ((uVar2 & 0xff) == 0) goto LAB_100059b1;
  SaveSelectedUnits(0,&DAT_10040338,0);
  UnitsCenter(&DAT_100403e8,&DAT_10040278,400);
  for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
    FUN_100096d0(((unsigned char *)&DAT_1003ff58) + local_1c * 0x49,&DAT_10040338,&DAT_100403e8);
    if (cVar1 != '\0') {
      FUN_10004040(((unsigned char *)&DAT_1003ff58) + local_1c * 0x49);
      FUN_10005ef0(&DAT_10040338);
    }
    FUN_100099b0((int)(((unsigned char *)&DAT_1003ff58) + local_1c * 0x49));
    if (cVar1 != '\0') {
      DAT_100403e8 = DAT_100403e8 + 100;
      uVar5 = 0;
      iVar3 = FUN_10009760((int)(((unsigned char *)&DAT_1003ff58) + local_1c * 0x49));
      SelectUnits(iVar3,uVar5);
      SelSendTo(0,&DAT_100403e8,0x80,0);
    }
  }
  uVar2 = TimerDoneFirst(2);
  if ((uVar2 & 0xff) != 0) {
    for (local_20 = 0; local_20 < 0xe; local_20 = local_20 + 1) {
      FUN_100030c0((int)(((unsigned char *)&DAT_1003fd00) + local_20 * 0x1f));
    }
    uVar2 = Trigg(0x1d);
    if (10 < (uVar2 & 0xff)) {
      FUN_100030c0((intptr_t)&DAT_1003feb2);
      FUN_100030c0((intptr_t)&DAT_1003fed1);
      FUN_100030c0((intptr_t)&DAT_1003fef0);
      FUN_100030c0((intptr_t)&DAT_1003ff0f);
      FUN_100030c0((intptr_t)&DAT_1003ff2e);
    }
    RunTimer(2,0x1e);
  }
  uVar2 = TimerDoneFirst(1);
  if ((uVar2 & 0xff) != 0) {
    SelectUnits(&DAT_100402d8,0);
    SelectUnits(&DAT_100402e0,1);
    SelectUnits(&DAT_100402e8,1);
    SelectUnits(&DAT_100402f0,1);
    SelCenter(&DAT_10040260,3,1000);
    SelectUnits(&DAT_100402f8,0);
    SelectUnits(&DAT_10040300,1);
    SelectUnits(&DAT_10040308,1);
    SelectUnits(&DAT_10040310,1);
    SelCenter(&DAT_1003ff50,3,1000);
    SelectUnits(&DAT_10040318,0);
    SelectUnits(&DAT_10040320,1);
    SelectUnits(&DAT_10040328,1);
    SelectUnits(&DAT_10040330,1);
    SelCenter(&DAT_100403f8,3,1000);
    FUN_10003e60((intptr_t)&DAT_1003fd00,(unsigned short *)&DAT_10040260);
    FUN_10003e60((intptr_t)&DAT_1003fd1f,(unsigned short *)&DAT_10040260);
    FUN_10003e60((intptr_t)&DAT_1003fd3e,(unsigned short *)&DAT_10040260);
    FUN_10003e60((intptr_t)&DAT_1003fd5d,(unsigned short *)&DAT_10040260);
    FUN_10003e60((intptr_t)&DAT_1003fd7c,(unsigned short *)&DAT_1003ff50);
    FUN_10003e60((intptr_t)&DAT_1003fd9b,(unsigned short *)&DAT_1003ff50);
    FUN_10003e60((intptr_t)&DAT_1003fdba,(unsigned short *)&DAT_1003ff50);
    FUN_10003e60((intptr_t)&DAT_1003fdd9,(unsigned short *)&DAT_1003ff50);
    FUN_10003e60((intptr_t)&DAT_1003fdf8,(unsigned short *)&DAT_1003ff50);
    FUN_10003e60((intptr_t)&DAT_1003fe17,(unsigned short *)&DAT_100403f8);
    FUN_10003e60((intptr_t)&DAT_1003fe36,(unsigned short *)&DAT_100403f8);
    FUN_10003e60((intptr_t)&DAT_1003fe55,(unsigned short *)&DAT_100403f8);
    FUN_10003e60((intptr_t)&DAT_1003fe74,(unsigned short *)&DAT_100403f8);
    FUN_10003e60((intptr_t)&DAT_1003fe93,(unsigned short *)&DAT_100403f8);
    FUN_10003e60((intptr_t)&DAT_1003feb2,(unsigned short *)&DAT_10040260);
    FUN_10003e60((intptr_t)&DAT_1003fed1,(unsigned short *)&DAT_10040260);
    FUN_10003e60((intptr_t)&DAT_1003fef0,(unsigned short *)&DAT_10040260);
    FUN_10003e60((intptr_t)&DAT_1003ff0f,(unsigned short *)&DAT_10040260);
    FUN_10003e60((intptr_t)&DAT_1003ff2e,(unsigned short *)&DAT_10040260);
    RunTimer(1,600);
  }
  uVar2 = Trigg(100);
  if ((uVar2 & 0xff) != 0) {
    iVar3 = GetAmountOfWarriors(1);
    if (iVar3 < 0x1e) {
      iVar3 = GetAmountOfWarriors(3);
      if (iVar3 < 0x65) goto LAB_100058a2;
    }
    else {
LAB_100058a2:
      iVar3 = GetAmountOfWarriors(1);
      if (1 < iVar3) goto LAB_100058f7;
    }
    ShowPage("#PAGE3");
    SetTrigg(100,0);
    ShowVictory();
  }
LAB_100058f7:
  uVar2 = Trigg(100);
  if ((uVar2 & 0xff) != 0) {
    iVar3 = GetAmountOfWarriors(3);
    if (iVar3 < 0xaa) {
      iVar3 = GetAmountOfWarriors(1);
      if (100 < iVar3) {
        ShowPage("#PAGE4");
        SetTrigg(100,0);
        LooseGame();
      }
    }
  }
  ClearSelection(0);
  SelectUnits(&DAT_10040338,0);
LAB_100059b1:
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
