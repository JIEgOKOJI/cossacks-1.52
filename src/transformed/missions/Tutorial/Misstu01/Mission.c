#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002c7f8[] = "Z910";
char DAT_1002c800[] = "Z13";
char DAT_1002c804[] = "Z11";
char DAT_1002c808[] = "Z81";
char DAT_1002c80c[] = "Z7";
char DAT_1002c810[] = "Z51";
char DAT_1002c814[] = "Z6";
char DAT_1002c818[] = "Z5";
char DAT_1002c81c[] = "Z41";
char DAT_1002c820[] = "Z4";
char DAT_1002c824[] = "Z3";
char DAT_1002c828[] = "Z2";
char DAT_1002c82c[] = "Z1";
char DAT_1002c830[] = "Z12";
char DAT_1002c834[] = "G11";
char DAT_1002c838[] = "G10";
char DAT_1002c83c[] = "G9";
char DAT_1002c840[] = "G8";
char DAT_1002c844[] = "GB6";
char DAT_1002c848[] = "GB5";
char DAT_1002c84c[] = "GB4";
char DAT_1002c850[] = "GB3";
char DAT_1002c854[] = "GB2";
char DAT_1002c858[] = "GB1";
char DAT_1002c85c[] = "GZ";
char DAT_1002c860[] = "G6";
char DAT_1002c864[] = "G52";
char DAT_1002c868[] = "G51";
char DAT_1002c86c[] = "G5";
char DAT_1002c870[] = "G4";
char DAT_1002c874[] = "G3";
char DAT_1002c878[] = "G2";
char DAT_1002c87c[] = "G1";
char DAT_1002c880[] = "#P1";
char DAT_1002c88c[] = "#P2";
char DAT_1002c898[] = "#P3";
char DAT_1002c8a4[] = "#P4";
char DAT_1002c8b0[] = "#P5";
char DAT_1002c8bc[] = "#P6";
char DAT_1002c8c8[] = "#P7";
char DAT_1002c8d4[] = "#P8";
char DAT_1002c8e0[] = "#P9";
char DAT_1002c8ec[] = "#P10";
char DAT_1002c8fc[] = "#P11";
char DAT_1002c90c[] = "#P12";
char DAT_1002c91c[] = "#P13";
char DAT_1002c92c[] = "#P14";
char DAT_1002c93c[] = "#P15";
char DAT_1002c94c[] = "#P16";
char DAT_1002c95c[] = "#P17";
char DAT_1002c96c[] = "#P18";
char DAT_1002c97c[] = "#P19";
char DAT_1002c98c[] = "#P20";
char DAT_1002c99c[] = "#P21";
char DAT_1002c9ac[] = "#P22";
char DAT_1002c9bc[] = "#P23";
char DAT_1002c9cc[] = "#P24";
char DAT_1002c9dc[] = "#P25";
char DAT_1002c9ec[] = "#P26";
char DAT_1002c9fc[] = "#P27";
char DAT_1002ca0c[] = "#P28";
char DAT_1002ca1c[] = "#P29";
char DAT_1002ca2c[] = "#P30";
char DAT_1002ca3c[] = "#P31";
char DAT_1002ca4c[] = "#P32";
char DAT_1002ca5c[] = "#P33";
char DAT_1002ca6c[] = "#P34";
char DAT_1002ca7c[] = "#P35";
char DAT_1002ca8c[] = "#P36";
char DAT_1002ca9c[] = "Q3";
char DAT_1002caa0[] = "#P37";
char DAT_1002cab8[] = "#P38";
char DAT_1002cac8[] = "Q4";
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
long long DAT_100314e8 = 0;
long long DAT_100314f0 = 0;
long long DAT_100314f8 = 0;
int DAT_10031504 = 0;
int (*DAT_10031508)() = 0;
int (*DAT_10031518)() = 0;
int (*DAT_10031524)() = 0;
int (*DAT_10031550)() = 0;
int (*DAT_10031564)() = 0;
int (*DAT_1003156c)() = 0;
int (*DAT_10031570)() = 0;
int (*DAT_10031578)() = 0;
int (*DAT_1003157c)() = 0;
int (*DAT_10031580)() = 0;
int (*DAT_10031584)() = 0;
int (*DAT_10031588)() = 0;
int (*DAT_1003158c)() = 0;
int (*DAT_10031598)() = 0;
int (*DAT_100315a0)() = 0;
int (*DAT_100315a8)() = 0;
int (*DAT_100315ac)() = 0;
int (*DAT_100315b8)() = 0;
int (*DAT_100315d0)() = 0;
int (*DAT_10031610)() = 0;
int (*DAT_10031614)() = 0;
int (*DAT_1003161c)() = 0;
int (*DAT_1003162c)() = 0;
int (*DAT_10031630)() = 0;
int (*DAT_10031634)() = 0;
int (*DAT_10031638)() = 0;
int (*DAT_1003163c)() = 0;
int (*DAT_10031640)() = 0;
int (*DAT_10031644)() = 0;
int (*DAT_10031648)() = 0;
int (*DAT_1003164c)() = 0;
int (*DAT_10031650)() = 0;

/* Stubs for missing internal functions */
int FUN_10005120() { return 0; }
int FUN_100057c0() { return 0; }


/* Forward declarations */
void FUN_10001240(char param_1);
void FUN_10001290(char param_1);
void FUN_100012e0(char param_1);
void FUN_10001330(char param_1);
void FUN_10001380(char param_1);
void FUN_100013d0(char param_1);
void FUN_10001420(int param_1,int param_2,char param_3);
void FUN_10001480(int param_1,int param_2,char param_3);
void FUN_100014e0(char param_1,int param_2);
void FUN_10001540(char param_1);
void FUN_100015a0(char param_1,int param_2);
void FUN_10001600(int param_1);
void FUN_10001650(char param_1);
void FUN_100016b0(int param_1,int param_2);
void FUN_10001710(int param_1,int param_2,char param_3);
void FUN_10001770(char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
void FUN_100017e0(char param_1);
void FUN_10001830(char param_1,int param_2,int param_3);
void FUN_10001890(int param_1,int param_2,char param_3,int param_4,
            char param_5,int param_6);
void FUN_10001900(char param_1);
void FUN_10001950(void);
void FUN_100019a0(LPCSTR param_1);
void FUN_10002470(void);
void FUN_10002b10(int param_1,int param_2);
void FUN_10002b80(int param_1,int param_2);
void FUN_10002be0(char param_1,char param_2);
void FUN_10002c40(char param_1,char param_2);
void FUN_10002ca0(void);
void FUN_10004980(int param_1,char param_2);
void FUN_100049e0(char param_1);
void FUN_10004a40(char param_1,int param_2,char param_3,char param_4);
void FUN_10004ab0(char param_1,char param_2);
void FUN_10004b10(void);
void FUN_10004b70(char param_1);
void FUN_10004bd0(int param_1,int param_2,char param_3);
int FUN_10004c90(char *param_1,byte *param_2);

void OnInit();
void ProcessScenary();


void __cdecl FUN_10001240(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003156c)((intptr_t)param_1);
  uStack_8 = 0x1000127b;
  return;
}





void __cdecl FUN_10001290(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031570)((intptr_t)param_1);
  uStack_8 = 0x100012cb;
  return;
}





void __cdecl FUN_100012e0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100012e0(param_1);
  uStack_8 = 0x10001311;
  return;
}





void __cdecl FUN_10001330(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031578)((intptr_t)param_1);
  uStack_8 = 0x1000136b;
  return;
}





void __cdecl FUN_10001380(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003157c)((intptr_t)param_1);
  uStack_8 = 0x100013bb;
  return;
}





void __cdecl FUN_100013d0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031580)((intptr_t)param_1);
  uStack_8 = 0x1000140b;
  return;
}





void __cdecl FUN_10001420(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031584)(param_1,param_2,(intptr_t)param_3);
  uStack_8 = 0x10001463;
  return;
}





void __cdecl FUN_10001480(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031588)(param_1,param_2,(intptr_t)param_3);
  uStack_8 = 0x100014c3;
  return;
}





void __cdecl FUN_100014e0(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100315a0 != (void *)0x0) {
    (*DAT_100315a0)(param_1,param_2);
  }
  uStack_8 = 0x10001528;
  return;
}





void __cdecl FUN_10001540(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100315b8 != (void *)0x0) {
    (*DAT_100315b8)((intptr_t)param_1);
  }
  uStack_8 = 0x10001584;
  return;
}





void __cdecl FUN_100015a0(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100313f0)(param_1,param_2);
  uStack_8 = 0x100015df;
  return;
}





void __cdecl FUN_10001600(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003161c)(param_1);
  uStack_8 = 0x1000163b;
  return;
}





void __cdecl FUN_10001650(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031630 != (void *)0x0) {
    (*DAT_10031630)((intptr_t)param_1);
  }
  uStack_8 = 0x10001694;
  return;
}





void __cdecl FUN_100016b0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031634)(param_1,param_2);
  uStack_8 = 0x100016ef;
  return;
}





void __cdecl FUN_10001710(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031638)(param_1,param_2,(intptr_t)param_3);
  uStack_8 = 0x10001753;
  return;
}





void __cdecl
FUN_10001770(char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003163c)(param_1,param_2,param_3,param_4,param_5,param_6);
  uStack_8 = 0x100017bf;
  return;
}





void __cdecl FUN_100017e0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031640)((intptr_t)param_1);
  uStack_8 = 0x1000181b;
  return;
}





void __cdecl FUN_10001830(char param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031644)(param_1,param_2,param_3);
  uStack_8 = 0x10001873;
  return;
}





void __cdecl
FUN_10001890(int param_1,int param_2,char param_3,int param_4,
            char param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031648)(param_1,param_2,param_3,param_4,param_5,param_6);
  uStack_8 = 0x100018df;
  return;
}





void __cdecl FUN_10001900(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003164c)((intptr_t)param_1);
  uStack_8 = 0x1000193b;
  return;
}





void FUN_10001950(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031650)();
  uStack_8 = 0x10001984;
  return;
}





void __cdecl FUN_100019a0(LPCSTR param_1)

{
  int iVar1;
  int *puVar2;
  CHAR local_108 [256];
  int local_8;
local_8 = GetProcAddress(DAT_10031504,param_1);
  if (local_8 == 0) {
    FUN_10004c90(local_108,(byte *)"DMCR.EXE does not contain function: %s");
    MessageBoxA((HWND)0x0,local_108,"DLL init error.",0);
  }
  return;
}





void FUN_10002470(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002b10(&DAT_10031400,DAT_1002c87c);
  FUN_10002b10(&DAT_10031408,DAT_1002c878);
  FUN_10002b10(&DAT_10031410,DAT_1002c874);
  FUN_10002b10(&DAT_10031418,DAT_1002c870);
  FUN_10002b10(&DAT_10031420,DAT_1002c86c);
  FUN_10002b10(&DAT_10031458,DAT_1002c868);
  FUN_10002b10(&DAT_10031460,DAT_1002c864);
  FUN_10002b10(&DAT_10031428,DAT_1002c860);
  FUN_10002b10(&DAT_10031440,DAT_1002c85c);
  FUN_10002b10(&DAT_100314a0,DAT_1002c858);
  FUN_10002b10(&DAT_100314a8,DAT_1002c854);
  FUN_10002b10(&DAT_100314b0,DAT_1002c850);
  FUN_10002b10(&DAT_100314b8,DAT_1002c84c);
  FUN_10002b10(&DAT_100314c0,DAT_1002c848);
  FUN_10002b10(&DAT_100314c8,DAT_1002c844);
  FUN_10002b10(&DAT_10031430,DAT_1002c840);
  FUN_10002b10(&DAT_10031438,DAT_1002c83c);
  FUN_10002b10(&DAT_10031448,DAT_1002c838);
  FUN_10002b10(&DAT_10031450,DAT_1002c834);
  FUN_10002b80(&DAT_100314d8,DAT_1002c830);
  FUN_10002b80(&DAT_10031468,DAT_1002c82c);
  FUN_10002b80(&DAT_10031470,DAT_1002c828);
  FUN_10002b80(&DAT_10031478,DAT_1002c824);
  FUN_10002b80(&DAT_10031480,DAT_1002c820);
  FUN_10002b80(&DAT_100314e8,DAT_1002c81c);
  FUN_10002b80(&DAT_10031488,DAT_1002c818);
  FUN_10002b80(&DAT_10031490,DAT_1002c814);
  FUN_10002b80(&DAT_100314f0,DAT_1002c810);
  FUN_10002b80(&DAT_10031498,DAT_1002c80c);
  FUN_10002b80(&DAT_100314f8,DAT_1002c808);
  FUN_10002b80(&DAT_100314d0,DAT_1002c804);
  FUN_10002b80(&DAT_100314e0,DAT_1002c800);
  FUN_10002b80(&DAT_100313f8,DAT_1002c7f8);
  FUN_10002be0(0,0x21);
  FUN_10002be0(5,0x21);
  FUN_10002c40(2,0);
  FUN_10002c40(3,0);
  FUN_10002c40(4,0);
  FUN_10002c40(5,0);
  FUN_10002c40(6,0);
  FUN_10002c40(7,0);
  FUN_10002c40(8,0);
  FUN_10002c40(9,0);
  FUN_10002c40(10,0);
  FUN_10002c40(0xb,0);
  FUN_10002c40(0xc,0);
  FUN_10002c40(0xd,0);
  FUN_10002c40(0xe,0);
  FUN_10002c40(0xf,0);
  FUN_10002c40(0x10,0);
  FUN_10002c40(0x11,0);
  FUN_10002c40(0x12,0);
  FUN_10002c40(0x13,0);
  FUN_10002c40(0x14,0);
  FUN_10002c40(0x15,0);
  FUN_10002c40(0x16,0);
  FUN_10002c40(0x17,0);
  FUN_10002c40(0x18,0);
  FUN_10002c40(0x19,0);
  FUN_10002c40(0x1a,0);
  FUN_10002c40(0x1b,0);
  FUN_10002c40(0x1c,0);
  FUN_10002c40(0x1d,0);
  FUN_10002c40(0x1e,0);
  FUN_10002c40(0x1f,0);
  FUN_10002c40(0x20,0);
  FUN_10002c40(0x21,0);
  FUN_10002c40(0x22,0);
  FUN_10002c40(0x23,0);
  FUN_10002c40(0x24,0);
  FUN_10002c40(0x25,0);
  FUN_10002c40(0x26,0);
  FUN_10002c40(0x27,0);
  FUN_10002c40(0x28,0);
  FUN_10002c40(0x29,0);
  FUN_10002c40(0x2a,0);
  FUN_10002c40(0x2b,0);
  FUN_10002c40(0x2c,0);
  FUN_10002c40(0x2d,0);
  FUN_10002c40(0x2e,0);
  FUN_10002c40(0x2f,0);
  FUN_10002c40(0x30,0);
  FUN_10002c40(0x31,0);
  FUN_10002c40(0x32,0);
  FUN_10002c40(0x33,0);
  FUN_10002c40(0x34,0);
  FUN_10002c40(0x35,0);
  FUN_10002c40(0x36,0);
  FUN_10002c40(0x37,0);
  FUN_10002c40(0x38,0);
  FUN_10002c40(0x39,0);
  FUN_10002c40(0x3a,0);
  FUN_10002c40(0x3b,0);
  uStack_8 = 0x100029b7;
  return;
}





void __cdecl FUN_10002b10(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031508 != (void *)0x0) {
    (*DAT_10031508)(param_1,param_2);
  }
  uStack_8 = 0x10002b5c;
  return;
}





void __cdecl FUN_10002b80(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031518 != (void *)0x0) {
    (*DAT_10031518)(param_1,param_2);
  }
  uStack_8 = 0x10002bc8;
  return;
}





void __cdecl FUN_10002be0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100315a8 != (void *)0x0) {
    (*DAT_100315a8)(param_1,(intptr_t)param_2);
  }
  uStack_8 = 0x10002c28;
  return;
}





void __cdecl FUN_10002c40(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031614 != (void *)0x0) {
    (*DAT_10031614)(param_1,(intptr_t)param_2);
  }
  uStack_8 = 0x10002c88;
  return;
}





void FUN_10002ca0(void)

{
  char cVar1;
  byte bVar2;
  unsigned int uVar3;
  int iVar4;
  int *puVar5;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
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
FUN_10001900(1);
  FUN_10004b70(0x26);
  if (cVar1 != '\0') {
    FUN_10002c40(0x26,0);
    FUN_10001600(&DAT_100313f8);
    FUN_10001890(8,DAT_1002cab8,0,"#P38_1",0,DAT_1002cac8);
    if (local_8 == 0) {
      FUN_10004b10();
    }
  }
  FUN_10004b70(0x25);
  if (cVar1 != '\0') {
    FUN_10002c40(0x25,0);
    FUN_10001600(&DAT_100313f8);
    FUN_10001890(8,DAT_1002caa0,0,"#P37_1",0,"Q1|Q2");
    if (local_c == 1) {
      FUN_10002c40(0x26,1);
    }
    if (local_c == 0) {
      FUN_10002c40(0xff,0x2f);
    }
  }
  FUN_10004b70(0x24);
  if (cVar1 != '\0') {
    FUN_10002c40(0x24,0);
    FUN_10001600(&DAT_100313f8);
    FUN_10001890(8,DAT_1002ca8c,0,"#P36_1",0,DAT_1002ca9c);
    if (local_10 == 1) {
      FUN_10002c40(0x25,1);
    }
    if (local_10 == 0) {
      FUN_10002c40(0xff,0x2e);
    }
  }
  FUN_10004b70(0x23);
  if (cVar1 != '\0') {
    FUN_10002c40(0x23,0);
    FUN_10001600(&DAT_100314e0);
    FUN_10001890(8,DAT_1002ca7c,0,"#P35_1",0,"Q1|Q2");
    if (local_14 == 1) {
      FUN_10002c40(0x24,1);
    }
    if (local_14 == 0) {
      FUN_10002c40(0xff,0x2d);
      FUN_10004980(&DAT_10031450,0);
      FUN_10004ab0(5,0);
    }
  }
  FUN_10004b70(0x22);
  if (cVar1 != '\0') {
    FUN_10002c40(0x22,0);
    FUN_10001600(&DAT_100314e0);
    FUN_10001890(8,DAT_1002ca6c,0,"#P34_1",0,"Q1|Q2");
    if (local_18 == 1) {
      FUN_10002c40(0x23,1);
    }
    if (local_18 == 0) {
      FUN_10004980(&DAT_10031450,0);
      FUN_10004ab0(5,0);
      FUN_10002c40(0xff,0x2c);
    }
  }
  FUN_10004b70(0x21);
  if (cVar1 != '\0') {
    FUN_10002c40(0x21,0);
    FUN_10001600(&DAT_100313f8);
    FUN_10001890(8,DAT_1002ca5c,0,"#P33_1",0,"Q1|Q2");
    if (local_1c == 1) {
      FUN_10002c40(0x22,1);
    }
    if (local_1c == 0) {
      FUN_10004980(&DAT_10031448,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_10031438,0);
      FUN_10004ab0(5,0);
      FUN_10002c40(0xff,0x2b);
    }
  }
  FUN_10004b70(0x20);
  if (cVar1 != '\0') {
    FUN_10002c40(0x20,0);
    FUN_10001600(&DAT_100314f8);
    FUN_10001890(8,DAT_1002ca4c,0,"#P32_1",0,"Q1|Q2");
    if (local_20 == 1) {
      FUN_10002c40(0x21,1);
    }
    if (local_20 == 0) {
      FUN_10004980(&DAT_10031430,0);
      FUN_10004ab0(5,0);
      FUN_10002c40(0xff,0x2a);
    }
  }
  FUN_10004b70(0x1f);
  if (cVar1 != '\0') {
    FUN_10002c40(0x1f,0);
    FUN_10001600(&DAT_10031488);
    FUN_10001890(8,DAT_1002ca3c,0,"#P31_1",0,DAT_1002ca9c);
    if (local_24 == 0) {
      FUN_10002c40(0x20,1);
    }
  }
  FUN_10004b70(0x1e);
  if (cVar1 != '\0') {
    FUN_10002c40(0x1e,0);
    FUN_10001600(&DAT_10031488);
    FUN_10001890(8,DAT_1002ca2c,0,"#P30_1",0,DAT_1002ca9c);
    if (local_28 == 0) {
      FUN_10002c40(0x1f,1);
    }
  }
  FUN_10004b70(0x1d);
  if (cVar1 != '\0') {
    FUN_10002c40(0x1d,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(8,DAT_1002ca1c,0,"#P29_1",0,"Q1|Q2");
    if (local_2c == 1) {
      FUN_10002c40(0x1e,1);
      FUN_10004980(&DAT_100314b8,0);
      FUN_10004ab0(5,0);
    }
    if (local_2c == 0) {
      FUN_10004980(&DAT_100314b8,0);
      FUN_10004ab0(5,0);
      FUN_10002c40(0xff,0x27);
    }
  }
  FUN_10004b70(0x1c);
  if (cVar1 != '\0') {
    FUN_10002c40(0x1c,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(8,DAT_1002ca0c,0,"#P28_1",0,DAT_1002ca9c);
    if (local_30 == 0) {
      FUN_10002c40(0x1d,1);
    }
  }
  FUN_10004b70(0x1b);
  if (cVar1 != '\0') {
    FUN_10002c40(0x1b,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(8,DAT_1002c9fc,0,"#P27_1",0,DAT_1002ca9c);
    if (local_34 == 0) {
      FUN_10002c40(0x1c,1);
    }
  }
  FUN_10004b70(0x1a);
  if (cVar1 != '\0') {
    FUN_10002c40(0x1a,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(8,DAT_1002c9ec,0,"#P26_1",0,DAT_1002ca9c);
    if (local_38 == 0) {
      FUN_10002c40(0x1b,1);
    }
  }
  FUN_10004b70(0x19);
  if (cVar1 != '\0') {
    FUN_10002c40(0x19,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(8,DAT_1002c9dc,0,"#P25_1",0,DAT_1002ca9c);
    if (local_3c == 0) {
      FUN_10002c40(0x1a,1);
    }
  }
  FUN_10004b70(0x18);
  if (cVar1 != '\0') {
    FUN_10002c40(0x18,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(0xc,DAT_1002c9cc,0,"#P24_1",0,DAT_1002ca9c);
    if (local_40 == 0) {
      FUN_10002c40(0x19,1);
    }
  }
  FUN_10004b70(0x17);
  if (cVar1 != '\0') {
    FUN_10002c40(0x17,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(8,DAT_1002c9bc,0,"#P23_1",0,"Q1|Q2");
    if (local_44 == 1) {
      FUN_10004980(&DAT_100314a8,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_100314b0,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_100314c0,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_100314c8,0);
      FUN_10004ab0(5,0);
      FUN_10002c40(0x18,1);
    }
    if (local_44 == 0) {
      FUN_10004980(&DAT_100314a8,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_100314b0,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_100314c0,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_100314c8,0);
      FUN_10004ab0(5,0);
      FUN_10002c40(0xff,0x21);
    }
  }
  FUN_10004b70(0x16);
  if (cVar1 != '\0') {
    FUN_10002c40(0x16,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(8,DAT_1002c9ac,0,"#P22_1",0,"Q1|Q2");
    if (local_48 == 1) {
      FUN_10002c40(0x17,1);
    }
    if (local_48 == 0) {
      FUN_10002c40(0xff,0x20);
    }
  }
  FUN_10004b70(0x15);
  if (cVar1 != '\0') {
    FUN_10002c40(0x15,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(8,DAT_1002c99c,0,"#P21_1",0,"Q1|Q2");
    if (local_4c == 1) {
      FUN_10002c40(0x16,1);
    }
    if (local_4c == 0) {
      FUN_10002c40(0xff,0x1f);
    }
  }
  FUN_10004b70(0x14);
  if (cVar1 != '\0') {
    FUN_10002c40(0x14,0);
    FUN_10001600(&DAT_100314d0);
    FUN_10001890(8,DAT_1002c98c,0,"#P20_1",0,"Q1|Q2");
    if (local_50 == 1) {
      FUN_10004980(&DAT_100314a0,0);
      FUN_10004ab0(5,0);
      FUN_10002c40(0x15,1);
    }
    if (local_50 == 0) {
      FUN_10002c40(0xff,0x1e);
      FUN_10004980(&DAT_100314a0,0);
      FUN_10004ab0(5,0);
    }
  }
  FUN_10004b70(0x13);
  if (cVar1 != '\0') {
    FUN_10002c40(0x13,0);
    FUN_10001600(&DAT_10031498);
    FUN_10001890(8,DAT_1002c97c,0,"#P19_1",0,"Q1|Q2");
    if (local_54 == 1) {
      FUN_10002c40(0x14,1);
    }
    if (local_54 == 0) {
      FUN_10002c40(0xff,0x1d);
      FUN_10004980(&DAT_10031428,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_10031440,0);
      FUN_10004ab0(5,1);
    }
  }
  FUN_10004b70(0x12);
  if (cVar1 != '\0') {
    FUN_10002c40(0x12,0);
    FUN_10001600(&DAT_10031488);
    FUN_10001890(8,DAT_1002c96c,0,"#P18_1",0,DAT_1002ca9c);
    if (local_58 == 0) {
      FUN_10002c40(0x13,1);
    }
  }
  FUN_10004b70(0x11);
  if (cVar1 != '\0') {
    FUN_10002c40(0x11,0);
    FUN_10001600(&DAT_100314f0);
    FUN_10001890(8,DAT_1002c95c,0,"#P17_1",0,"Q1|Q2");
    if (local_5c == 1) {
      FUN_10002c40(0x12,1);
    }
    if (local_5c == 0) {
      FUN_10002c40(0xff,0x1b);
      FUN_10004980(&DAT_10031458,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_10031460,0);
      FUN_10004ab0(5,0);
      FUN_10004980(&DAT_10031460,0);
      FUN_100049e0(0);
    }
  }
  FUN_10004b70(0x10);
  if (cVar1 != '\0') {
    FUN_10002c40(0x10,0);
    FUN_10001600(&DAT_10031490);
    FUN_10001890(8,DAT_1002c94c,0,"#P16_1",0,"Q1|Q2");
    if (local_60 == 1) {
      FUN_10002c40(0x11,1);
    }
    if (local_60 == 0) {
      FUN_10004980(&DAT_10031420,0);
      FUN_10004ab0(5,0);
      FUN_10002c40(0xff,0x1a);
    }
  }
  FUN_10004b70(0xf);
  if (cVar1 != '\0') {
    FUN_10002c40(0xf,0);
    FUN_10001600(&DAT_10031488);
    FUN_10001890(8,DAT_1002c93c,0,"#P15_1",0,DAT_1002ca9c);
    if (local_64 == 0) {
      FUN_10002c40(0x10,1);
    }
  }
  FUN_10004b70(0xe);
  if (cVar1 != '\0') {
    FUN_10002c40(0xe,0);
    FUN_10001600(&DAT_10031488);
    FUN_10001890(8,DAT_1002c92c,0,"#P14_1",0,"Q1|Q2");
    if (local_68 == 1) {
      FUN_10002c40(0xf,1);
    }
    if (local_68 == 0) {
      FUN_10002c40(0xff,0x18);
      FUN_10004980(&DAT_10031418,0);
      FUN_10004ab0(5,0);
    }
  }
  FUN_10004b70(0xd);
  if (cVar1 != '\0') {
    FUN_10002c40(0xd,0);
    FUN_10001600(&DAT_100314d8);
    FUN_10001890(8,DAT_1002c91c,0,"#P13_1",0,DAT_1002ca9c);
    if (local_6c == 0) {
      FUN_10002c40(0xe,1);
    }
  }
  FUN_10004b70(0xc);
  if (cVar1 != '\0') {
    FUN_10002c40(0xc,0);
    FUN_10001600(&DAT_10031480);
    FUN_10001890(8,DAT_1002c90c,0,"#P12_1",0,"Q1|Q2");
    if (local_70 == 1) {
      FUN_10002c40(0xd,1);
    }
    if (local_70 == 0) {
      FUN_10002c40(0xff,0x16);
      FUN_10004bd0(&DAT_10031480,6,1);
      FUN_10004980(&DAT_10031410,0);
      FUN_10004a40(5,&DAT_100314e8,0,0);
    }
  }
  FUN_10004b70(0xb);
  if (cVar1 != '\0') {
    FUN_10002c40(0xb,0);
    FUN_10001600(&DAT_100314d8);
    FUN_10001890(8,DAT_1002c8fc,0,"#P11_1",0,"Q1|Q2");
    if (local_74 == 1) {
      FUN_10002c40(0xc,1);
    }
    if (local_74 == 0) {
      FUN_10002c40(0xff,0x15);
    }
  }
  FUN_10004b70(10);
  if (cVar1 != '\0') {
    FUN_10002c40(10,0);
    FUN_10001600(&DAT_100314d8);
    FUN_10001890(8,DAT_1002c8ec,0,"#P10_1",0,"Q1|Q2");
    if (local_78 == 1) {
      FUN_10002c40(0xb,1);
    }
    if (local_78 == 0) {
      FUN_10002c40(0xff,0x14);
    }
  }
  FUN_10004b70(9);
  if (cVar1 != '\0') {
    FUN_10002c40(9,0);
    FUN_10001600(&DAT_10031478);
    FUN_10001890(8,DAT_1002c8e0,0,"#P9_1",0,"Q1|Q2");
    if (local_7c == 1) {
      FUN_10002c40(10,1);
    }
    if (local_7c == 0) {
      FUN_10002c40(0xff,0x13);
      FUN_10004980(&DAT_10031400,0);
      FUN_10004ab0(5,0);
    }
  }
  FUN_10004b70(8);
  if (cVar1 != '\0') {
    FUN_10002c40(8,0);
    FUN_10001600(&DAT_10031470);
    FUN_10001890(8,DAT_1002c8d4,0,"#P8_1",0,"Q1|Q2");
    if (local_80 == 1) {
      FUN_10002c40(9,1);
    }
    if (local_80 == 0) {
      FUN_10002c40(0xff,0x12);
      FUN_10004980(&DAT_10031400,0);
      FUN_10004ab0(5,0);
    }
  }
  FUN_10004b70(7);
  if (cVar1 != '\0') {
    FUN_10002c40(7,0);
    FUN_10001600(&DAT_10031470);
    FUN_10001890(8,DAT_1002c8c8,0,"#P7_1",0,"Q1|Q2");
    if (local_84 == 1) {
      FUN_10002c40(8,1);
    }
    if (local_84 == 0) {
      FUN_10002c40(0xff,0x11);
      FUN_10004980(&DAT_10031400,0);
      FUN_10004ab0(5,0);
    }
  }
  FUN_10004b70(6);
  if (cVar1 != '\0') {
    FUN_10002c40(6,0);
    FUN_10001600(&DAT_10031468);
    FUN_10001890(8,DAT_1002c8bc,0,"#P6_1",0,"Q1|Q2");
    if (local_88 == 1) {
      FUN_10002c40(7,1);
    }
    if (local_88 == 0) {
      FUN_10002c40(0xff,0x10);
    }
  }
  FUN_10004b70(5);
  if (cVar1 != '\0') {
    FUN_10002c40(5,0);
    FUN_10001600(&DAT_10031468);
    FUN_10001890(8,DAT_1002c8b0,0,"#P5_1",0,"Q1|Q2");
    if (local_8c == 1) {
      FUN_10002c40(6,1);
    }
    if (local_8c == 0) {
      FUN_10002c40(0xff,0xf);
    }
  }
  FUN_10004b70(4);
  if (cVar1 != '\0') {
    FUN_10002c40(4,0);
    FUN_10001600(&DAT_100314d8);
    FUN_10001890(8,DAT_1002c8a4,0,"#P4_1",0,"Q1|Q2");
    if (local_90 == 1) {
      FUN_10002c40(5,1);
    }
    if (local_90 == 0) {
      FUN_10002c40(0xff,0xe);
    }
  }
  FUN_10004b70(3);
  if (cVar1 != '\0') {
    FUN_10002c40(3,0);
    FUN_10001600(&DAT_100314d8);
    FUN_10001890(8,DAT_1002c898,0,"#P3_1",0,"Q1|Q2");
    if (local_94 == 1) {
      FUN_10002c40(4,1);
    }
    if (local_94 == 0) {
      FUN_10002c40(0xff,0xd);
    }
  }
  FUN_10004b70(2);
  if (cVar1 != '\0') {
    FUN_10002c40(2,0);
    FUN_10001600(&DAT_100314d8);
    FUN_10001890(8,DAT_1002c88c,0,"#P2_1",0,"Q1|Q2");
    if (local_98 == 1) {
      FUN_10002c40(3,1);
    }
    if (local_98 == 0) {
      FUN_10002c40(0xff,0xc);
    }
  }
  FUN_10004b70(1);
  if (cVar1 != '\0') {
    FUN_10002c40(1,0);
    FUN_10001600(&DAT_100314d8);
    FUN_10001890(8,DAT_1002c880,0,"#P1_1",0,"Q1|Q2");
    if (local_9c == 1) {
      FUN_10002c40(2,1);
    }
    if (local_9c == 0) {
      FUN_10002c40(0xff,0xb);
    }
  }
  FUN_10004b70(0xff);
  if ((10 < bVar2) && (FUN_10001950(), cVar1 != '\0')) {
    FUN_10004b70(0xff);
    local_a0 = (uVar3 & 0xff) - 0xb;
    switch(local_a0) {
    case 0:
      FUN_10002c40(2,1);
      break;
    case 1:
      FUN_10002c40(3,1);
      break;
    case 2:
      FUN_10002c40(4,1);
      break;
    case 3:
      FUN_10002c40(5,1);
      break;
    case 4:
      FUN_10002c40(6,1);
      break;
    case 5:
      FUN_10002c40(7,1);
      break;
    case 6:
      FUN_10002c40(8,1);
      break;
    case 7:
      FUN_10002c40(9,1);
      break;
    case 8:
      FUN_10002c40(10,1);
      break;
    case 9:
      FUN_10002c40(0xb,1);
      break;
    case 10:
      FUN_10002c40(0xc,1);
      break;
    case 0xb:
      FUN_10002c40(0xd,1);
      break;
    case 0xc:
      FUN_10002c40(0xe,1);
      break;
    case 0xd:
      FUN_10002c40(0xf,1);
      break;
    case 0xe:
      FUN_10002c40(0x10,1);
      break;
    case 0xf:
      FUN_10002c40(0x11,1);
      break;
    case 0x10:
      FUN_10002c40(0x12,1);
      break;
    case 0x11:
      FUN_10002c40(0x13,1);
      break;
    case 0x12:
      FUN_10002c40(0x14,1);
      break;
    case 0x13:
      FUN_10002c40(0x15,1);
      break;
    case 0x14:
      FUN_10002c40(0x16,1);
      break;
    case 0x15:
      FUN_10002c40(0x17,1);
      break;
    case 0x16:
      FUN_10002c40(0x18,1);
      break;
    case 0x17:
      FUN_10002c40(0x19,1);
      break;
    case 0x18:
      FUN_10002c40(0x1a,1);
      break;
    case 0x19:
      FUN_10002c40(0x1b,1);
      break;
    case 0x1a:
      FUN_10002c40(0x1c,1);
      break;
    case 0x1b:
      FUN_10002c40(0x1d,1);
      break;
    case 0x1c:
      FUN_10002c40(0x1e,1);
      break;
    case 0x1d:
      FUN_10002c40(0x1f,1);
      break;
    case 0x1e:
      FUN_10002c40(0x20,1);
      break;
    case 0x1f:
      FUN_10002c40(0x21,1);
      break;
    case 0x20:
      FUN_10002c40(0x22,1);
      break;
    case 0x21:
      FUN_10002c40(0x23,1);
      break;
    case 0x22:
      FUN_10002c40(0x24,1);
      break;
    case 0x23:
      FUN_10002c40(0x25,1);
      break;
    case 0x24:
      FUN_10002c40(0x26,1);
    }
  }
  return;
}





void __cdecl FUN_10004980(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031564 != (void *)0x0) {
    (*DAT_10031564)(param_1,(intptr_t)param_2);
  }
  uStack_8 = 0x100049c8;
  return;
}





void __cdecl FUN_100049e0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003158c != (void *)0x0) {
    (*DAT_1003158c)((intptr_t)param_1);
  }
  uStack_8 = 0x10004a28;
  return;
}





void __cdecl
FUN_10004a40(char param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031598 != (void *)0x0) {
    (*DAT_10031598)((intptr_t)param_1,param_2,param_3,(intptr_t)param_4);
  }
  uStack_8 = 0x10004a94;
  return;
}





void __cdecl FUN_10004ab0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100315ac != (void *)0x0) {
    (*DAT_100315ac)(param_1,(intptr_t)param_2);
  }
  uStack_8 = 0x10004af8;
  return;
}





void FUN_10004b10(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100315d0 != (void *)0x0) {
    (*DAT_100315d0)();
  }
  uStack_8 = 0x10004b4d;
  return;
}





void __cdecl FUN_10004b70(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10031610 != (void *)0x0) {
    (*DAT_10031610)((intptr_t)param_1);
  }
  uStack_8 = 0x10004bb8;
  return;
}





void __cdecl FUN_10004bd0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003162c != (void *)0x0) {
    (*DAT_1003162c)(param_1,param_2,(intptr_t)param_3);
  }
  uStack_8 = 0x10004c1c;
  return;
}





int __cdecl FUN_10004c90(char *param_1,byte *param_2)

{
  void *pcVar1;
  int iVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_10005120(2,0x1002cbcc,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_10005120(2,0x1002cbcc,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100057c0(0,(int *)&local_24);
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
if (DAT_10031524 != (void *)0x0) {
    (*DAT_10031524)(param_1,param_2);
  }
  uStack_8 = 0x100011d8;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10031550)((intptr_t)param_1);
  uStack_8 = 0x1000122b;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
