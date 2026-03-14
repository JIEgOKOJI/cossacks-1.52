#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002c7f8[] = "Z21";
char DAT_1002c7fc[] = "Z51";
char DAT_1002c800[] = "Z13";
char DAT_1002c804[] = "Z12";
char DAT_1002c808[] = "Z11";
char DAT_1002c80c[] = "Z10";
char DAT_1002c810[] = "Z9";
char DAT_1002c814[] = "Z8";
char DAT_1002c818[] = "Z7";
char DAT_1002c81c[] = "Z6";
char DAT_1002c820[] = "Z5";
char DAT_1002c824[] = "Z4";
char DAT_1002c828[] = "Z3";
char DAT_1002c82c[] = "Z2";
char DAT_1002c830[] = "Z1";
char DAT_1002c834[] = "TOW";
char DAT_1002c838[] = "G14";
char DAT_1002c83c[] = "G13";
char DAT_1002c840[] = "G12";
char DAT_1002c844[] = "G11";
char DAT_1002c848[] = "G10";
char DAT_1002c84c[] = "G9";
char DAT_1002c850[] = "G8";
char DAT_1002c854[] = "G7";
char DAT_1002c858[] = "G6";
char DAT_1002c85c[] = "G5";
char DAT_1002c860[] = "G4";
char DAT_1002c864[] = "G3";
char DAT_1002c868[] = "G2";
char DAT_1002c86c[] = "G1";
char DAT_1002c870[] = "#P1";
char DAT_1002c87c[] = "#P2";
char DAT_1002c888[] = "#P3";
char DAT_1002c894[] = "#P4";
char DAT_1002c8a0[] = "#P5";
char DAT_1002c8ac[] = "#P6";
char DAT_1002c8c0[] = "#P7";
char DAT_1002c8cc[] = "#P8";
char DAT_1002c8d8[] = "#P9";
char DAT_1002c8e4[] = "#P10";
char DAT_1002c8f4[] = "#P11";
char DAT_1002c904[] = "#P12";
char DAT_1002c914[] = "#P13";
char DAT_1002c924[] = "#P14";
char DAT_1002c934[] = "#P15";
char DAT_1002c944[] = "#P16";
char DAT_1002c954[] = "#P17";
char DAT_1002c964[] = "#P18";
char DAT_1002c974[] = "#P19";
char DAT_1002c98c[] = "#P20";
char DAT_1002c99c[] = "#P21";
char DAT_1002c9ac[] = "#P22";
char DAT_1002c9bc[] = "#P23";
char DAT_1002c9cc[] = "#P24";
char DAT_1002c9dc[] = "#P25";
char DAT_1002c9ec[] = "#P26";
char DAT_1002c9fc[] = "Q3";
char DAT_1002ca10[] = "Q4";
int (*DAT_100313f0)() = 0;
long long DAT_100313f8 = 0;
long long DAT_10031400 = 0;
long long DAT_10031408 = 0;
long long DAT_10031410 = 0;
long long DAT_10031418 = 0;
long long DAT_10031420 = 0;
long long DAT_10031428 = 0;
long long DAT_10031430 = 0;
long long DAT_10031438 = 0;
long long DAT_10031440 = 0;
long long DAT_10031448 = 0;
long long DAT_10031450 = 0;
long long DAT_10031458 = 0;
long long DAT_10031460 = 0;
long long DAT_10031468 = 0;
long long DAT_10031470 = 0;
long long DAT_10031478 = 0;
long long DAT_10031480 = 0;
long long DAT_10031488 = 0;
long long DAT_10031490 = 0;
long long DAT_10031498 = 0;
long long DAT_100314a0 = 0;
long long DAT_100314a8 = 0;
long long DAT_100314b0 = 0;
long long DAT_100314b8 = 0;
long long DAT_100314c0 = 0;
long long DAT_100314c8 = 0;
long long DAT_100314d0 = 0;
long long DAT_100314d8 = 0;
long long DAT_100314e0 = 0;
int DAT_100314ec = 0;
int (*DAT_100314f0)() = 0;
int (*DAT_10031500)() = 0;
int (*DAT_1003150c)() = 0;
int (*DAT_10031538)() = 0;
int (*DAT_1003154c)() = 0;
int (*DAT_10031554)() = 0;
int (*DAT_10031558)() = 0;
int (*DAT_10031560)() = 0;
int (*DAT_10031564)() = 0;
int (*DAT_10031568)() = 0;
int (*DAT_1003156c)() = 0;
int (*DAT_10031570)() = 0;
int (*DAT_10031584)() = 0;
int (*DAT_10031588)() = 0;
int (*DAT_10031590)() = 0;
int (*DAT_10031594)() = 0;
int (*DAT_100315a0)() = 0;
int (*DAT_100315b8)() = 0;
int (*DAT_100315f8)() = 0;
int (*DAT_100315fc)() = 0;
int (*DAT_10031604)() = 0;
int (*DAT_10031614)() = 0;
int (*DAT_10031618)() = 0;
int (*DAT_1003161c)() = 0;
int (*DAT_10031620)() = 0;
int (*DAT_10031624)() = 0;
int (*DAT_10031628)() = 0;
int (*DAT_1003162c)() = 0;
int (*DAT_10031630)() = 0;
int (*DAT_10031634)() = 0;
int (*DAT_10031638)() = 0;

/* Stubs for missing internal functions */
int FUN_100045a0() { return 0; }
int FUN_10004c40() { return 0; }


/* Forward declarations */
void FUN_10001230(char param_1);
void FUN_10001280(char param_1);
void FUN_100012d0(char param_1);
void FUN_10001320(char param_1);
void FUN_10001370(char param_1);
void FUN_100013c0(char param_1);
void FUN_10001410(int param_1,int param_2,char param_3);
void FUN_10001470(int param_1,int param_2,char param_3);
void FUN_100014d0(char param_1,int param_2);
void FUN_10001530(char param_1);
void FUN_10001590(char param_1,int param_2);
void FUN_100015f0(int param_1);
void FUN_10001640(char param_1);
void FUN_100016a0(int param_1,int param_2);
void FUN_10001700(int param_1,int param_2,char param_3);
void FUN_10001760(char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
void FUN_100017d0(char param_1);
void FUN_10001820(char param_1,int param_2,int param_3);
void FUN_10001880(int param_1,int param_2,char param_3,int param_4,
            char param_5,int param_6);
void FUN_100018f0(char param_1);
void FUN_10001940(void);
void FUN_10001990(LPCSTR param_1);
void FUN_10002460(void);
void FUN_100028f0(int param_1,int param_2);
void FUN_10002960(int param_1,int param_2);
void FUN_100029c0(char param_1,char param_2);
void FUN_10002a20(char param_1,char param_2);
void FUN_10002a80(void);
void FUN_10003e60(int param_1,char param_2);
void FUN_10003ec0(char param_1,int param_2,char param_3,char param_4);
void FUN_10003f30(char param_1,char param_2);
void FUN_10003f90(void);
void FUN_10003ff0(char param_1);
void FUN_10004050(int param_1,int param_2,char param_3);
int FUN_10004110(char *param_1,int param_2);


void __cdecl FUN_10001230(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031554)((int)param_1);
  uStack_8 = 0x1000126b;
  return;
}





void __cdecl FUN_10001280(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031558)((int)param_1);
  uStack_8 = 0x100012bb;
  return;
}





void __cdecl FUN_100012d0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100012d0(param_1);
  uStack_8 = 0x10001301;
  return;
}





void __cdecl FUN_10001320(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031560)((int)param_1);
  uStack_8 = 0x1000135b;
  return;
}





void __cdecl FUN_10001370(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031564)((int)param_1);
  uStack_8 = 0x100013ab;
  return;
}





void __cdecl FUN_100013c0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031568)((int)param_1);
  uStack_8 = 0x100013fb;
  return;
}





void __cdecl FUN_10001410(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003156c)(param_1,param_2,(int)param_3);
  uStack_8 = 0x10001453;
  return;
}





void __cdecl FUN_10001470(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031570)(param_1,param_2,(int)param_3);
  uStack_8 = 0x100014b3;
  return;
}





void __cdecl FUN_100014d0(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031588 != (void *)0x0) {
    (*DAT_10031588)(param_1,param_2);
  }
  uStack_8 = 0x10001518;
  return;
}





void __cdecl FUN_10001530(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100315a0 != (void *)0x0) {
    (*DAT_100315a0)((int)param_1);
  }
  uStack_8 = 0x10001574;
  return;
}





void __cdecl FUN_10001590(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100313f0)(param_1,param_2);
  uStack_8 = 0x100015cf;
  return;
}





void __cdecl FUN_100015f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031604)(param_1);
  uStack_8 = 0x1000162b;
  return;
}





void __cdecl FUN_10001640(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031618 != (void *)0x0) {
    (*DAT_10031618)((int)param_1);
  }
  uStack_8 = 0x10001684;
  return;
}





void __cdecl FUN_100016a0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003161c)(param_1,param_2);
  uStack_8 = 0x100016df;
  return;
}





void __cdecl FUN_10001700(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031620)(param_1,param_2,(int)param_3);
  uStack_8 = 0x10001743;
  return;
}





void __cdecl
FUN_10001760(char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031624)(param_1,param_2,param_3,param_4,param_5,param_6);
  uStack_8 = 0x100017af;
  return;
}





void __cdecl FUN_100017d0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031628)((int)param_1);
  uStack_8 = 0x1000180b;
  return;
}





void __cdecl FUN_10001820(char param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003162c)(param_1,param_2,param_3);
  uStack_8 = 0x10001863;
  return;
}





void __cdecl
FUN_10001880(int param_1,int param_2,char param_3,int param_4,
            char param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031630)(param_1,param_2,param_3,param_4,param_5,param_6);
  uStack_8 = 0x100018cf;
  return;
}





void __cdecl FUN_100018f0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031634)((int)param_1);
  uStack_8 = 0x1000192b;
  return;
}





void FUN_10001940(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031638)();
  uStack_8 = 0x10001974;
  return;
}





void __cdecl FUN_10001990(LPCSTR param_1)

{
  int iVar1;
  int *puVar2;
  CHAR local_108 [256];
  int local_8;
local_8 = GetProcAddress(DAT_100314ec,param_1);
  if (local_8 == 0) {
    FUN_10004110(local_108,0x1002c030);
    MessageBoxA((HWND)0x0,local_108,"DLL init error.",0);
  }
  return;
}





void FUN_10002460(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100028f0(&DAT_100313f8,DAT_1002c86c);
  FUN_100028f0(&DAT_10031400,DAT_1002c868);
  FUN_100028f0(&DAT_10031408,DAT_1002c864);
  FUN_100028f0(&DAT_10031410,DAT_1002c860);
  FUN_100028f0(&DAT_10031418,DAT_1002c85c);
  FUN_100028f0(&DAT_10031420,DAT_1002c858);
  FUN_100028f0(&DAT_10031428,DAT_1002c854);
  FUN_100028f0(&DAT_10031430,DAT_1002c850);
  FUN_100028f0(&DAT_10031438,DAT_1002c84c);
  FUN_100028f0(&DAT_10031440,DAT_1002c848);
  FUN_100028f0(&DAT_10031448,DAT_1002c844);
  FUN_100028f0(&DAT_10031450,DAT_1002c840);
  FUN_100028f0(&DAT_10031458,DAT_1002c83c);
  FUN_100028f0(&DAT_10031460,DAT_1002c838);
  FUN_100028f0(&DAT_100314e0,DAT_1002c834);
  FUN_10002960(&DAT_10031468,DAT_1002c830);
  FUN_10002960(&DAT_10031470,DAT_1002c82c);
  FUN_10002960(&DAT_10031478,DAT_1002c828);
  FUN_10002960(&DAT_10031480,DAT_1002c824);
  FUN_10002960(&DAT_10031488,DAT_1002c820);
  FUN_10002960(&DAT_10031490,DAT_1002c81c);
  FUN_10002960(&DAT_10031498,DAT_1002c818);
  FUN_10002960(&DAT_100314a0,DAT_1002c814);
  FUN_10002960(&DAT_100314a8,DAT_1002c810);
  FUN_10002960(&DAT_100314b0,DAT_1002c80c);
  FUN_10002960(&DAT_100314b8,DAT_1002c808);
  FUN_10002960(&DAT_100314c0,DAT_1002c804);
  FUN_10002960(&DAT_100314c8,DAT_1002c800);
  FUN_10002960(&DAT_100314d8,DAT_1002c7fc);
  FUN_10002960(&DAT_100314d0,DAT_1002c7f8);
  FUN_100029c0(0,0x21);
  FUN_100029c0(5,0x21);
  FUN_10002a20(2,0);
  FUN_10002a20(3,0);
  FUN_10002a20(4,0);
  FUN_10002a20(5,0);
  FUN_10002a20(6,0);
  FUN_10002a20(7,0);
  FUN_10002a20(8,0);
  FUN_10002a20(9,0);
  FUN_10002a20(10,0);
  FUN_10002a20(0xb,0);
  FUN_10002a20(0xc,0);
  FUN_10002a20(0xd,0);
  FUN_10002a20(0xe,0);
  FUN_10002a20(0xf,0);
  FUN_10002a20(0x10,0);
  FUN_10002a20(0x11,0);
  FUN_10002a20(0x12,0);
  FUN_10002a20(0x13,0);
  FUN_10002a20(0x14,0);
  FUN_10002a20(0x15,0);
  FUN_10002a20(0x16,0);
  FUN_10002a20(0x17,0);
  FUN_10002a20(0x18,0);
  FUN_10002a20(0x19,0);
  FUN_10002a20(0x1a,0);
  FUN_10002a20(0x1b,0);
  FUN_100015f0(&DAT_100314d8);
  uStack_8 = 0x100027fe;
  return;
}





void __cdecl FUN_100028f0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100314f0 != (void *)0x0) {
    (*DAT_100314f0)(param_1,param_2);
  }
  uStack_8 = 0x1000293c;
  return;
}





void __cdecl FUN_10002960(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031500 != (void *)0x0) {
    (*DAT_10031500)(param_1,param_2);
  }
  uStack_8 = 0x100029a8;
  return;
}





void __cdecl FUN_100029c0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031590 != (void *)0x0) {
    (*DAT_10031590)(param_1,(int)param_2);
  }
  uStack_8 = 0x10002a08;
  return;
}





void __cdecl FUN_10002a20(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100315fc != (void *)0x0) {
    (*DAT_100315fc)(param_1,(int)param_2);
  }
  uStack_8 = 0x10002a68;
  return;
}





void FUN_10002a80(void)

{
  char cVar1;
  byte bVar2;
  unsigned int uVar3;
  int iVar4;
  int *puVar5;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
FUN_100018f0(1);
  FUN_10003ff0(0x1b);
  if (cVar1 != '\0') {
    FUN_10002a20(0x1b,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,"#P26_2",0,"#P26_3",0,DAT_1002ca10);
    if (local_8 == 0) {
      FUN_10003f90();
    }
  }
  FUN_10003ff0(0x1a);
  if (cVar1 != '\0') {
    FUN_10002a20(0x1a,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c9ec,0,"#P26_1",0,DAT_1002c9fc);
    if (local_c == 0) {
      FUN_10002a20(0x1b,1);
    }
  }
  FUN_10003ff0(0x19);
  if (cVar1 != '\0') {
    FUN_10002a20(0x19,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c9dc,0,"#P25_1",0,DAT_1002c9fc);
    if (local_10 == 0) {
      FUN_10002a20(0x1a,1);
    }
  }
  FUN_10003ff0(0x18);
  if (cVar1 != '\0') {
    FUN_10002a20(0x18,0);
    FUN_100015f0(&DAT_100314c0);
    FUN_10001880(0xc,DAT_1002c9cc,0,"#P24_1",0,DAT_1002c9fc);
    if (local_14 == 1) {
      FUN_10002a20(0x19,1);
    }
    if (local_14 == 0) {
      FUN_10004050(&DAT_100314c8,8,1);
      FUN_10003e60(&DAT_10031460,0);
      FUN_10003f30(5,0);
      FUN_10002a20(0xff,0x22);
    }
  }
  FUN_10003ff0(0x17);
  if (cVar1 != '\0') {
    FUN_10002a20(0x17,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c9bc,0,"#P23_1",0,DAT_1002c9fc);
    if (local_18 == 0) {
      FUN_10002a20(0x18,1);
    }
  }
  FUN_10003ff0(0x16);
  if (cVar1 != '\0') {
    FUN_10002a20(0x16,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c9ac,0,"#P22_1",0,DAT_1002c9fc);
    if (local_1c == 0) {
      FUN_10002a20(0x17,1);
    }
  }
  FUN_10003ff0(0x15);
  if (cVar1 != '\0') {
    FUN_10002a20(0x15,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c99c,0,"#P21_1",0,DAT_1002c9fc);
    if (local_20 == 0) {
      FUN_10002a20(0x16,1);
    }
  }
  FUN_10003ff0(0x14);
  if (cVar1 != '\0') {
    FUN_10002a20(0x14,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c98c,0,"#P20_1",0,DAT_1002c9fc);
    if (local_24 == 0) {
      FUN_10002a20(0x15,1);
    }
  }
  FUN_10003ff0(0x13);
  if (cVar1 != '\0') {
    FUN_10002a20(0x13,0);
    FUN_100015f0(&DAT_100314b8);
    FUN_10001880(0xc,DAT_1002c974,0,"#P19_1",0,"Q1|Q2");
    if (local_28 == 1) {
      FUN_10002a20(0x14,1);
    }
    if (local_28 == 0) {
      FUN_10002a20(0xff,0x1d);
      FUN_10003e60(&DAT_10031458,0);
      FUN_10003f30(5,0);
    }
  }
  FUN_10003ff0(0x12);
  if (cVar1 != '\0') {
    FUN_10002a20(0x12,0);
    FUN_100015f0(&DAT_100314b0);
    FUN_10001880(0xc,DAT_1002c964,0,"#P18_1",0,"Q1|Q2");
    if (local_2c == 1) {
      FUN_10002a20(0x13,1);
    }
    if (local_2c == 0) {
      FUN_10002a20(0xff,0x1c);
    }
  }
  FUN_10003ff0(0x11);
  if (cVar1 != '\0') {
    FUN_10002a20(0x11,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c954,0,"#P17_1",0,DAT_1002c9fc);
    if (local_30 == 0) {
      FUN_10002a20(0x12,1);
    }
  }
  FUN_10003ff0(0x10);
  if (cVar1 != '\0') {
    FUN_10002a20(0x10,0);
    FUN_100015f0(&DAT_100314a8);
    FUN_10001880(0xc,DAT_1002c944,0,"#P16_1",0,"Q1|Q2");
    if (local_34 == 1) {
      FUN_10002a20(0x11,1);
    }
    if (local_34 == 0) {
      FUN_10003e60(&DAT_10031440,0);
      FUN_10003f30(5,0);
      FUN_10002a20(0xff,0x1a);
      FUN_10003e60(&DAT_10031448,0);
      FUN_10003ec0(1,&DAT_100314a8,0,0);
    }
  }
  FUN_10003ff0(0xf);
  if (cVar1 != '\0') {
    FUN_10002a20(0xf,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c934,0,"#P15_1",0,DAT_1002c9fc);
    if (local_38 == 0) {
      FUN_10002a20(0x10,1);
    }
  }
  FUN_10003ff0(0xe);
  if (cVar1 != '\0') {
    FUN_10002a20(0xe,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c924,0,"#P14_1",0,DAT_1002c9fc);
    if (local_3c == 0) {
      FUN_10002a20(0xf,1);
    }
  }
  FUN_10003ff0(0xd);
  if (cVar1 != '\0') {
    FUN_10002a20(0xd,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c914,0,"#P13_1",0,DAT_1002c9fc);
    if (local_40 == 0) {
      FUN_10002a20(0xe,1);
    }
  }
  FUN_10003ff0(0xc);
  if (cVar1 != '\0') {
    FUN_10002a20(0xc,0);
    FUN_100015f0(&DAT_100314a0);
    FUN_10001880(0xc,DAT_1002c904,0,"#P12_1",0,"Q1|Q2");
    if (local_44 == 1) {
      FUN_10002a20(0xd,1);
    }
    if (local_44 == 0) {
      FUN_10002a20(0xff,0x16);
      FUN_10003e60(&DAT_10031438,0);
      FUN_10003f30(5,0);
      FUN_10003e60(&DAT_100314e0,0);
      FUN_10003f30(5,1);
    }
  }
  FUN_10003ff0(0xb);
  if (cVar1 != '\0') {
    FUN_10002a20(0xb,0);
    FUN_100015f0(&DAT_10031498);
    FUN_10001880(0xc,DAT_1002c8f4,0,"#P11_1",0,"Q1|Q2");
    if (local_48 == 1) {
      FUN_10002a20(0xc,1);
    }
    if (local_48 == 0) {
      FUN_10003e60(&DAT_10031430,0);
      FUN_10003f30(5,0);
      FUN_10002a20(0xff,0x15);
    }
  }
  FUN_10003ff0(10);
  if (cVar1 != '\0') {
    FUN_10002a20(10,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c8e4,0,"#P10_1",0,DAT_1002c9fc);
    if (local_4c == 0) {
      FUN_10002a20(0xb,1);
    }
  }
  FUN_10003ff0(9);
  if (cVar1 != '\0') {
    FUN_10002a20(9,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c8d8,0,"#P9_1",0,DAT_1002c9fc);
    if (local_50 == 0) {
      FUN_10002a20(10,1);
    }
  }
  FUN_10003ff0(8);
  if (cVar1 != '\0') {
    FUN_10002a20(8,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c8cc,0,"#P8_1",0,DAT_1002c9fc);
    if (local_54 == 0) {
      FUN_10002a20(9,1);
    }
  }
  FUN_10003ff0(7);
  if (cVar1 != '\0') {
    FUN_10002a20(7,0);
    FUN_100015f0(&DAT_100314d8);
    FUN_10001880(0xc,DAT_1002c8c0,0,"#P7_1",0,DAT_1002c9fc);
    if (local_58 == 0) {
      FUN_10002a20(8,1);
    }
  }
  FUN_10003ff0(6);
  if (cVar1 != '\0') {
    FUN_10002a20(6,0);
    FUN_100015f0(&DAT_10031490);
    FUN_10001880(0xc,DAT_1002c8ac,0,"#P6_1",0,"Q5|Q2");
    if (local_5c == 1) {
      FUN_10002a20(7,1);
    }
    if (local_5c == 0) {
      FUN_10003e60(&DAT_10031428,0);
      FUN_10003f30(5,0);
      FUN_10002a20(0xff,0x10);
    }
  }
  FUN_10003ff0(5);
  if (cVar1 != '\0') {
    FUN_10002a20(5,0);
    FUN_100015f0(&DAT_10031488);
    FUN_10001880(0xc,DAT_1002c8a0,0,"#P5_1",0,"Q5|Q2");
    if (local_60 == 1) {
      FUN_10002a20(6,1);
    }
    if (local_60 == 0) {
      FUN_10003e60(&DAT_10031420,0);
      FUN_10003f30(5,0);
      FUN_10002a20(0xff,0xf);
    }
  }
  FUN_10003ff0(4);
  if (cVar1 != '\0') {
    FUN_10002a20(4,0);
    FUN_100015f0(&DAT_10031480);
    FUN_10001880(0xc,DAT_1002c894,0,"#P4_1",0,"Q5|Q2");
    if (local_64 == 1) {
      FUN_10002a20(5,1);
    }
    if (local_64 == 0) {
      FUN_10003e60(&DAT_10031418,0);
      FUN_10003f30(5,0);
      FUN_10002a20(0xff,0xe);
    }
  }
  FUN_10003ff0(3);
  if (cVar1 != '\0') {
    FUN_10002a20(3,0);
    FUN_100015f0(&DAT_10031478);
    FUN_10001880(0xc,DAT_1002c888,0,"#P3_1",0,"Q5|Q2");
    if (local_68 == 1) {
      FUN_10002a20(4,1);
    }
    if (local_68 == 0) {
      FUN_10003e60(&DAT_10031410,0);
      FUN_10003f30(5,0);
      FUN_10002a20(0xff,0xd);
    }
  }
  FUN_10003ff0(2);
  if (cVar1 != '\0') {
    FUN_10002a20(2,0);
    FUN_100015f0(&DAT_100314d0);
    FUN_10001880(0xc,DAT_1002c87c,0,"#P2_1",0,"Q1|Q2");
    if (local_6c == 1) {
      FUN_10002a20(3,1);
    }
    if (local_6c == 0) {
      FUN_10004050(&DAT_100314d0,8,2);
      FUN_10003e60(&DAT_10031400,0);
      FUN_10003ec0(1,&DAT_10031470,0,0);
      FUN_10002a20(0xff,0xc);
    }
  }
  FUN_10003ff0(1);
  if (cVar1 != '\0') {
    FUN_10002a20(1,0);
    FUN_100015f0(&DAT_10031468);
    FUN_10001880(0xc,DAT_1002c870,0,"#P1_1",0,"Q1|Q2");
    if (local_70 == 1) {
      FUN_10002a20(2,1);
    }
    if (local_70 == 0) {
      FUN_10002a20(0xff,0xb);
    }
  }
  FUN_10003ff0(0xff);
  if ((10 < bVar2) && (FUN_10001940(), cVar1 != '\0')) {
    FUN_10003ff0(0xff);
    local_74 = (uVar3 & 0xff) - 0xb;
    switch(local_74) {
    case 0:
      FUN_10002a20(2,1);
      break;
    case 1:
      FUN_10002a20(3,1);
      break;
    case 2:
      FUN_10002a20(4,1);
      break;
    case 3:
      FUN_10002a20(5,1);
      break;
    case 4:
      FUN_10002a20(6,1);
      break;
    case 5:
      FUN_10002a20(7,1);
      break;
    case 6:
      FUN_10002a20(8,1);
      break;
    case 7:
      FUN_10002a20(9,1);
      break;
    case 8:
      FUN_10002a20(10,1);
      break;
    case 9:
      FUN_10002a20(0xb,1);
      break;
    case 10:
      FUN_10002a20(0xc,1);
      break;
    case 0xb:
      FUN_10002a20(0xd,1);
      break;
    case 0xc:
      FUN_10002a20(0xe,1);
      break;
    case 0xd:
      FUN_10002a20(0xf,1);
      break;
    case 0xe:
      FUN_10002a20(0x10,1);
      break;
    case 0xf:
      FUN_10002a20(0x11,1);
      break;
    case 0x10:
      FUN_10002a20(0x12,1);
      break;
    case 0x11:
      FUN_10002a20(0x13,1);
      break;
    case 0x12:
      FUN_10002a20(0x14,1);
      break;
    case 0x13:
      FUN_10002a20(0x15,1);
      break;
    case 0x14:
      FUN_10002a20(0x16,1);
      break;
    case 0x15:
      FUN_10002a20(0x17,1);
      break;
    case 0x16:
      FUN_10002a20(0x18,1);
      break;
    case 0x17:
      FUN_10002a20(0x19,1);
      break;
    case 0x18:
      FUN_10002a20(0x1a,1);
      break;
    case 0x19:
      FUN_10002a20(0x1b,1);
      break;
    case 0x1a:
      FUN_10002a20(0x1c,1);
      break;
    case 0x1b:
      FUN_10002a20(0x1d,1);
      break;
    case 0x1c:
      FUN_10002a20(0x1e,1);
      break;
    case 0x1d:
      FUN_10002a20(0x1f,1);
      break;
    case 0x1e:
      FUN_10002a20(0x20,1);
      break;
    case 0x1f:
      FUN_10002a20(0x21,1);
      break;
    case 0x20:
      FUN_10002a20(0x22,1);
      break;
    case 0x21:
      FUN_10002a20(0x23,1);
      break;
    case 0x22:
      FUN_10002a20(0x24,1);
      break;
    case 0x23:
      FUN_10002a20(0x25,1);
      break;
    case 0x24:
      FUN_10002a20(0x26,1);
    }
  }
  return;
}





void __cdecl FUN_10003e60(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003154c != (void *)0x0) {
    (*DAT_1003154c)(param_1,(int)param_2);
  }
  uStack_8 = 0x10003ea8;
  return;
}





void __cdecl
FUN_10003ec0(char param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031584 != (void *)0x0) {
    (*DAT_10031584)((int)param_1,param_2,param_3,(int)param_4);
  }
  uStack_8 = 0x10003f14;
  return;
}





void __cdecl FUN_10003f30(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031594 != (void *)0x0) {
    (*DAT_10031594)(param_1,(int)param_2);
  }
  uStack_8 = 0x10003f78;
  return;
}





void FUN_10003f90(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100315b8 != (void *)0x0) {
    (*DAT_100315b8)();
  }
  uStack_8 = 0x10003fcd;
  return;
}





void __cdecl FUN_10003ff0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100315f8 != (void *)0x0) {
    (*DAT_100315f8)((int)param_1);
  }
  uStack_8 = 0x10004038;
  return;
}





void __cdecl FUN_10004050(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031614 != (void *)0x0) {
    (*DAT_10031614)(param_1,param_2,(int)param_3);
  }
  uStack_8 = 0x1000409c;
  return;
}





int __cdecl FUN_10004110(char *param_1,int param_2)

{
  void *pcVar1;
  int iVar2;
  int uVar3;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_100045a0(2,0x1002cb14,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  if ((param_2 == 0) &&
     (iVar2 = FUN_100045a0(2,0x1002cb14,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10004c40(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}





__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int param_2 = 0;
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003150c != (void *)0x0) {
    (*DAT_1003150c)(param_1,param_2);
  }
  uStack_8 = 0x100011c8;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031538)((int)param_1);
  uStack_8 = 0x1000121b;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
