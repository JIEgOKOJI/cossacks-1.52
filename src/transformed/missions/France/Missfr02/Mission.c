#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002b704[] = "Z51";
char DAT_1002b708[] = "Z50";
char DAT_1002b70c[] = "Z31";
char DAT_1002b710[] = "Z30";
char DAT_1002b714[] = "Z29";
char DAT_1002b718[] = "Z28";
char DAT_1002b71c[] = "Z27";
char DAT_1002b720[] = "Z26";
char DAT_1002b724[] = "Z25";
char DAT_1002b728[] = "Z24";
char DAT_1002b72c[] = "Z23";
char DAT_1002b730[] = "Z22";
char DAT_1002b734[] = "Z21";
char DAT_1002b738[] = "Z20";
char DAT_1002b73c[] = "Z19";
char DAT_1002b740[] = "Z18";
char DAT_1002b744[] = "Z17";
char DAT_1002b748[] = "Z16";
char DAT_1002b74c[] = "Z14";
char DAT_1002b750[] = "Z13";
char DAT_1002b754[] = "Z12";
char DAT_1002b758[] = "Z11";
char DAT_1002b75c[] = "Z10";
char DAT_1002b760[] = "Z9";
char DAT_1002b764[] = "Z8";
char DAT_1002b768[] = "Z7";
char DAT_1002b76c[] = "Z6";
char DAT_1002b770[] = "Z5";
char DAT_1002b774[] = "Z4";
char DAT_1002b778[] = "Z3";
char DAT_1002b77c[] = "Z2";
char DAT_1002b780[] = "Z1";
char DAT_1002b784[] = "G50";
char DAT_1002b788[] = "G16";
char DAT_1002b78c[] = "G15";
char DAT_1002b790[] = "G14";
char DAT_1002b794[] = "G13";
char DAT_1002b798[] = "G12";
char DAT_1002b79c[] = "G11";
char DAT_1002b7a0[] = "G10";
char DAT_1002b7a4[] = "G9";
char DAT_1002b7a8[] = "G8";
char DAT_1002b7ac[] = "G7";
char DAT_1002b7b0[] = "G6";
char DAT_1002b7b4[] = "G5";
char DAT_1002b7b8[] = "G4";
char DAT_1002b7bc[] = "G3";
char DAT_1002b7c0[] = "G2";
char DAT_1002b7c4[] = "G1";
char DAT_1002b7c8[] = "#P22";
char DAT_1002b7d0[] = "#P23";
char DAT_1002b7d8[] = "#P21";
char DAT_1002b7e0[] = "#P20";
char DAT_1002b7f0[] = "#P19";
char DAT_1002b7f8[] = "#P18";
char DAT_1002b800[] = "#P17";
char DAT_1002b808[] = "#P16";
char DAT_1002b810[] = "#P15";
char DAT_1002b820[] = "#P14";
char DAT_1002b828[] = "#P13";
char DAT_1002b830[] = "#P12";
char DAT_1002b840[] = "#P11";
char DAT_1002b848[] = "#P10";
char DAT_1002b858[] = "#P9";
char DAT_1002b85c[] = "#P8";
char DAT_1002b860[] = "#P7";
char DAT_1002b864[] = "#P6";
char DAT_1002b868[] = "#P5";
char DAT_1002b86c[] = "#P4";
char DAT_1002b870[] = "#P3";
char DAT_1002b874[] = "#P2";
char DAT_1002b888[] = "#P1";
int (*DAT_100303f0)() = 0;
long long DAT_100303f8 = 0;
long long DAT_10030400 = 0;
long long DAT_10030408 = 0;
long long DAT_10030410 = 0;
long long DAT_10030418 = 0;
long long DAT_10030420 = 0;
long long DAT_10030428 = 0;
long long DAT_10030430 = 0;
long long DAT_10030438 = 0;
long long DAT_10030440 = 0;
long long DAT_10030448 = 0;
long long DAT_10030450 = 0;
long long DAT_10030458 = 0;
long long DAT_10030460 = 0;
long long DAT_10030468 = 0;
long long DAT_10030470 = 0;
long long DAT_10030478 = 0;
long long DAT_10030480 = 0;
long long DAT_10030488 = 0;
long long DAT_10030490 = 0;
long long DAT_10030498 = 0;
long long DAT_100304a0 = 0;
long long DAT_100304a8 = 0;
long long DAT_100304b0 = 0;
long long DAT_100304b8 = 0;
long long DAT_100304c0 = 0;
long long DAT_100304c8 = 0;
long long DAT_100304d0 = 0;
long long DAT_100304d8 = 0;
long long DAT_100304e0 = 0;
long long DAT_100304e8 = 0;
long long DAT_100304f0 = 0;
long long DAT_100304f8 = 0;
long long DAT_10030500 = 0;
long long DAT_10030508 = 0;
long long DAT_10030510 = 0;
long long DAT_10030518 = 0;
long long DAT_10030520 = 0;
long long DAT_10030528 = 0;
long long DAT_10030530 = 0;
long long DAT_10030538 = 0;
long long DAT_10030540 = 0;
long long DAT_10030548 = 0;
long long DAT_10030550 = 0;
long long DAT_10030558 = 0;
long long DAT_10030560 = 0;
long long DAT_10030568 = 0;
long long DAT_10030570 = 0;
long long DAT_10030578 = 0;
int DAT_10030584 = 0;
int (*DAT_10030588)() = 0;
int (*DAT_10030598)() = 0;
int (*DAT_100305a4)() = 0;
int (*DAT_100305b0)() = 0;
int (*DAT_100305b4)() = 0;
int (*DAT_100305bc)() = 0;
int (*DAT_100305e0)() = 0;
int (*DAT_100305e8)() = 0;
int (*DAT_100305ec)() = 0;
int (*DAT_100305f4)() = 0;
int (*DAT_100305f8)() = 0;
int (*DAT_10030600)() = 0;
int (*DAT_10030608)() = 0;
int (*DAT_1003060c)() = 0;
int (*DAT_10030610)() = 0;
int (*DAT_10030618)() = 0;
int (*DAT_1003061c)() = 0;
int (*DAT_10030628)() = 0;
int (*DAT_10030640)() = 0;
int (*DAT_10030644)() = 0;
int (*DAT_1003064c)() = 0;
int (*DAT_10030650)() = 0;
int (*DAT_10030654)() = 0;
int (*DAT_10030680)() = 0;
int (*DAT_10030684)() = 0;
int (*DAT_1003068c)() = 0;
int (*DAT_1003069c)() = 0;
int (*DAT_100306a0)() = 0;

/* Stubs for missing internal functions */
int FUN_10003e30() { return 0; }
int FUN_100044d0() { return 0; }


/* Forward declarations */
void FUN_10001210(char param_1);
void FUN_10001260(char param_1);
void FUN_100012b0(char param_1);
void FUN_10001300(int param_1,int param_2,char param_3);
void FUN_10001360(char param_1,int param_2);
void FUN_100013c0(char param_1);
void FUN_10001420(char param_1,int param_2);
void FUN_10001480(int param_1);
void FUN_100014d0(char param_1);
void FUN_10001530(LPCSTR param_1);
void FUN_10001ef0(void);
void FUN_100023a0(int param_1,int param_2);
void FUN_10002410(int param_1,int param_2);
void FUN_10002470(char param_1,char param_2);
void FUN_100024d0(char param_1,char param_2);
void FUN_10002530(void);
void FUN_10003350(int param_1,char param_2);
void FUN_100033c0(int param_1,int param_2);
void FUN_10003430(int param_1);
void FUN_10003490(int param_1,char param_2);
void FUN_100034f0(char param_1);
void FUN_10003550(char param_1,int param_2,char param_3,char param_4);
void FUN_100035c0(char param_1,int param_2,char param_3,char param_4);
void FUN_10003630(char param_1,char param_2);
void FUN_10003690(void);
void FUN_100036f0(void);
void FUN_10003750(int param_1);
void FUN_100037b0(int param_1);
void FUN_10003810(char param_1,char param_2,int param_3);
void FUN_10003880(char param_1);
void FUN_100038e0(int param_1,int param_2,char param_3);
int FUN_100039a0(char *param_1,byte *param_2);


void __cdecl FUN_10001210(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305ec)((int)param_1);
  uStack_8 = 0x1000124b;
  return;
}





void __cdecl FUN_10001260(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001260(param_1);
  uStack_8 = 0x10001291;
  return;
}





void __cdecl FUN_100012b0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305f4)((int)param_1);
  uStack_8 = 0x100012eb;
  return;
}





void __cdecl FUN_10001300(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305f8)(param_1,param_2,(int)param_3);
  uStack_8 = 0x10001343;
  return;
}





void __cdecl FUN_10001360(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030610 != (void *)0x0) {
    (*DAT_10030610)(param_1,param_2);
  }
  uStack_8 = 0x100013a8;
  return;
}





void __cdecl FUN_100013c0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030628 != (void *)0x0) {
    (*DAT_10030628)((int)param_1);
  }
  uStack_8 = 0x10001404;
  return;
}





void __cdecl FUN_10001420(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100303f0)(param_1,param_2);
  uStack_8 = 0x1000145f;
  return;
}





void __cdecl FUN_10001480(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003068c)(param_1);
  uStack_8 = 0x100014bb;
  return;
}





void __cdecl FUN_100014d0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100306a0 != (void *)0x0) {
    (*DAT_100306a0)((int)param_1);
  }
  uStack_8 = 0x10001514;
  return;
}





void __cdecl FUN_10001530(LPCSTR param_1)

{
  int iVar1;
  int *puVar2;
  CHAR local_108 [256];
  int local_8;
local_8 = GetProcAddress(DAT_10030584,param_1);
  if (local_8 == 0) {
    FUN_100039a0(local_108,(byte *)"DMCR.EXE does not contain function: %s");
    MessageBoxA((HWND)0x0,local_108,"DLL init error.",0);
  }
  return;
}





void FUN_10001ef0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100023a0(&DAT_100303f8,DAT_1002b7c4);
  FUN_100023a0(&DAT_10030400,DAT_1002b7c0);
  FUN_100023a0(&DAT_10030408,DAT_1002b7bc);
  FUN_100023a0(&DAT_10030410,DAT_1002b7b8);
  FUN_100023a0(&DAT_10030418,DAT_1002b7b4);
  FUN_100023a0(&DAT_10030420,DAT_1002b7b0);
  FUN_100023a0(&DAT_10030428,DAT_1002b7ac);
  FUN_100023a0(&DAT_10030430,DAT_1002b7a8);
  FUN_100023a0(&DAT_10030438,DAT_1002b7a4);
  FUN_100023a0(&DAT_10030440,DAT_1002b7a0);
  FUN_100023a0(&DAT_10030448,DAT_1002b79c);
  FUN_100023a0(&DAT_10030450,DAT_1002b798);
  FUN_100023a0(&DAT_10030458,DAT_1002b794);
  FUN_100023a0(&DAT_10030460,DAT_1002b790);
  FUN_100023a0(&DAT_10030468,DAT_1002b78c);
  FUN_100023a0(&DAT_10030470,DAT_1002b788);
  FUN_100023a0(&DAT_10030478,DAT_1002b784);
  FUN_10002410(&DAT_10030480,DAT_1002b780);
  FUN_10002410(&DAT_10030488,DAT_1002b77c);
  FUN_10002410(&DAT_10030490,DAT_1002b778);
  FUN_10002410(&DAT_10030498,DAT_1002b774);
  FUN_10002410(&DAT_100304a0,DAT_1002b770);
  FUN_10002410(&DAT_100304a8,DAT_1002b76c);
  FUN_10002410(&DAT_100304b0,DAT_1002b768);
  FUN_10002410(&DAT_100304b8,DAT_1002b764);
  FUN_10002410(&DAT_100304c0,DAT_1002b760);
  FUN_10002410(&DAT_100304c8,DAT_1002b75c);
  FUN_10002410(&DAT_100304d0,DAT_1002b758);
  FUN_10002410(&DAT_100304d8,DAT_1002b754);
  FUN_10002410(&DAT_100304e0,DAT_1002b750);
  FUN_10002410(&DAT_100304f0,DAT_1002b74c);
  FUN_10002410(&DAT_10030508,DAT_1002b748);
  FUN_10002410(&DAT_10030518,DAT_1002b744);
  FUN_10002410(&DAT_10030528,DAT_1002b740);
  FUN_10002410(&DAT_10030540,DAT_1002b73c);
  FUN_10002410(&DAT_100304e8,DAT_1002b738);
  FUN_10002410(&DAT_100304f8,DAT_1002b734);
  FUN_10002410(&DAT_10030500,DAT_1002b730);
  FUN_10002410(&DAT_10030510,DAT_1002b72c);
  FUN_10002410(&DAT_10030520,DAT_1002b728);
  FUN_10002410(&DAT_10030538,DAT_1002b724);
  FUN_10002410(&DAT_10030550,DAT_1002b720);
  FUN_10002410(&DAT_10030558,DAT_1002b71c);
  FUN_10002410(&DAT_10030560,DAT_1002b718);
  FUN_10002410(&DAT_10030568,DAT_1002b714);
  FUN_10002410(&DAT_10030530,DAT_1002b710);
  FUN_10002410(&DAT_10030548,DAT_1002b70c);
  FUN_10002410(&DAT_10030570,DAT_1002b708);
  FUN_10002410(&DAT_10030578,DAT_1002b704);
  FUN_10002470(0,0x21);
  FUN_10002470(5,0x21);
  FUN_100024d0(0x18,0);
  uStack_8 = 0x100022ab;
  return;
}





void __cdecl FUN_100023a0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030588 != (void *)0x0) {
    (*DAT_10030588)(param_1,param_2);
  }
  uStack_8 = 0x100023ec;
  return;
}





void __cdecl FUN_10002410(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030598 != (void *)0x0) {
    (*DAT_10030598)(param_1,param_2);
  }
  uStack_8 = 0x10002458;
  return;
}





void __cdecl FUN_10002470(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030618 != (void *)0x0) {
    (*DAT_10030618)(param_1,(int)param_2);
  }
  uStack_8 = 0x100024b8;
  return;
}





void __cdecl FUN_100024d0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030684 != (void *)0x0) {
    (*DAT_10030684)(param_1,(int)param_2);
  }
  uStack_8 = 0x10002518;
  return;
}





void FUN_10002530(void)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
FUN_10003880(1);
  if (cVar1 != '\0') {
    FUN_100024d0(1,0);
    FUN_10003750("#P101");
  }
  FUN_10003880(2);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030480,0);
    if (iVar2 != 0) {
      FUN_100024d0(2,0);
      FUN_10003750(DAT_1002b888);
    }
  }
  FUN_10003880(3);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030488,0);
    if (iVar2 != 0) {
      FUN_100024d0(3,0);
      FUN_10003750(DAT_1002b888);
    }
  }
  FUN_10003880(4);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030490,0);
    if (iVar2 != 0) {
      FUN_100024d0(4,0);
      FUN_10003490(&DAT_100303f8,0);
      FUN_100034f0(5);
      FUN_10003750("#P102");
    }
  }
  FUN_10003880(5);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030498,0);
    if (iVar2 != 0) {
      FUN_100024d0(5,0);
      FUN_10003750("#P103");
      FUN_10003490(&DAT_10030400,0);
      FUN_10003630(5,0);
    }
  }
  FUN_10003880(6);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_100304a0,0);
    if (iVar2 != 0) {
      FUN_100024d0(6,0);
      FUN_10003490(&DAT_10030478,0);
      FUN_100034f0(5);
      FUN_10003750(DAT_1002b874);
    }
  }
  FUN_10003880(7);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_100304a8,0);
    if (iVar2 != 0) {
      FUN_100024d0(7,0);
      FUN_10003750(DAT_1002b870);
    }
  }
  FUN_10003880(8);
  if (cVar1 != '\0') {
    FUN_100033c0(&DAT_100304a8,&DAT_10030408);
    if (iVar2 != 0) {
      FUN_100024d0(8,0);
      FUN_10003490(&DAT_10030420,0);
      FUN_10003630(5,0);
      FUN_10003750(DAT_1002b86c);
      FUN_10003490(&DAT_10030418,0);
      FUN_10003550(1,&DAT_100304e8,0,0);
      FUN_100038e0(&DAT_100304a8,8,1);
      FUN_100038e0(&DAT_10030570,8,1);
      FUN_100038e0(&DAT_10030578,8,1);
    }
  }
  FUN_10003880(9);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_100304b0,0);
    if (iVar2 != 0) {
      FUN_100024d0(9,0);
      FUN_10003750(DAT_1002b888);
    }
  }
  FUN_10003880(10);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_100304b8,0);
    if (iVar2 != 0) {
      FUN_100024d0(10,0);
      FUN_10003490(&DAT_10030410,0);
      FUN_10003630(5,0);
      FUN_10003750(DAT_1002b868);
    }
  }
  FUN_10003880(0xb);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_100304c8,0);
    if (iVar2 != 0) {
      FUN_100024d0(0xb,0);
      FUN_10003490(&DAT_10030428,0);
      FUN_10003630(5,0);
      FUN_10003750(DAT_1002b864);
    }
  }
  FUN_10003880(0xc);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_100304d0,0);
    if (iVar2 != 0) {
      FUN_100024d0(0xc,0);
      FUN_10003490(&DAT_10030430,0);
      FUN_10003630(5,0);
      FUN_10003750(DAT_1002b860);
    }
  }
  FUN_10003880(0xd);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_100304d8,0);
    if (iVar2 != 0) {
      FUN_100024d0(0xd,0);
      FUN_100037b0(DAT_1002b85c);
      if (cVar1 != '\0') {
        FUN_10003810(0,1,0xffffffce);
        FUN_10003490(&DAT_10030438,0);
        FUN_100034f0(5);
      }
    }
  }
  FUN_10003880(0xe);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_100304e0,0);
    if (iVar2 != 0) {
      FUN_100024d0(0xe,0);
      FUN_100037b0(DAT_1002b858);
      if (cVar1 == '\0') {
        FUN_10003750("#P104");
        FUN_10003490(&DAT_10030440,0);
        FUN_10003630(0,5);
        FUN_10003490(&DAT_10030440,0);
        FUN_10003550(5,&DAT_100304f0,0,0);
      }
      else {
        FUN_10003810(0,1,0xffffff9c);
      }
    }
  }
  FUN_10003880(0xf);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030508,0);
    if (iVar2 != 0) {
      FUN_100024d0(0xf,0);
      FUN_10003490(&DAT_10030450,0);
      FUN_100035c0(1,&DAT_10030508,0,0x7d);
    }
  }
  FUN_10003880(0x10);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030518,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x10,0);
      FUN_10003490(&DAT_10030450,0);
      FUN_10003630(1,0);
      FUN_10003750(DAT_1002b848);
    }
  }
  FUN_10003880(0x11);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030528,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x11,0);
      FUN_10003490(&DAT_10030458,0);
      FUN_10003550(5,&DAT_10030528,0x7d,0);
    }
  }
  FUN_10003880(0x12);
  if (cVar1 != '\0') {
    FUN_100033c0(&DAT_10030540,&DAT_10030458);
    if (iVar2 != 0) {
      FUN_100024d0(0x12,0);
      FUN_100037b0(DAT_1002b840);
      if (cVar1 == '\0') {
        FUN_10003750(DAT_1002b830);
      }
      else {
        FUN_10003810(0,1,0xffffff06);
        FUN_10003750("#P105");
        FUN_10003490(&DAT_10030458,0);
        FUN_10003630(5,0);
      }
    }
  }
  FUN_10003880(0x13);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_100304f8,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x13,0);
      FUN_100037b0(DAT_1002b828);
      if (cVar1 != '\0') {
        FUN_10003810(0,1,0xffffff06);
      }
    }
  }
  FUN_10003880(0x14);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030500,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x14,0);
      FUN_10003750(DAT_1002b820);
    }
  }
  FUN_10003880(0x1e);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030510,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x1e,0);
      FUN_10003750("#P1401");
    }
  }
  FUN_10003880(0x15);
  if (cVar1 != '\0') {
    FUN_100024d0(0x15,0);
    FUN_10003490(&DAT_10030460,0);
    FUN_100034f0(5);
  }
  FUN_10003880(0x16);
  if (cVar1 != '\0') {
    FUN_100033c0(&DAT_10030520,&DAT_10030450);
    if (0 < iVar2) {
      FUN_100024d0(0x16,0);
      FUN_100037b0(DAT_1002b810);
      if (cVar1 == '\0') {
        FUN_100024d0(0x18,1);
      }
      else {
        FUN_10003810(0,1,5000);
        FUN_10003490(&DAT_10030450,0);
        FUN_10003630(0,5);
      }
    }
  }
  FUN_10003880(0x17);
  if (cVar1 != '\0') {
    FUN_100033c0(&DAT_10030538,&DAT_10030450);
    if (0 < iVar2) {
      FUN_100024d0(0x17,0);
      FUN_100037b0(DAT_1002b808);
      if (cVar1 != '\0') {
        FUN_10003880(0x18);
        if (cVar1 == '\0') {
          FUN_10003750(DAT_1002b800);
        }
        else {
          FUN_10003810(0,1,25000);
          FUN_10003490(&DAT_10030450,0);
          FUN_10003630(0,5);
        }
      }
    }
  }
  FUN_10003880(0x19);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030550,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x19,0);
      FUN_10003750(DAT_1002b7f8);
    }
  }
  FUN_10003880(0x1a);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030558,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x1a,0);
      FUN_10003490(&DAT_10030468,0);
      FUN_100035c0(1,&DAT_10030560,0,0);
    }
  }
  FUN_10003880(0x1b);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030568,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x1b,0);
      FUN_100037b0(DAT_1002b7f0);
      if (cVar1 == '\0') {
        FUN_10003750("#P111");
      }
      else {
        FUN_10003810(0,3,0xfff85ee0);
      }
    }
  }
  FUN_10003880(0x1c);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030530,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x1c,0);
      FUN_10003750(DAT_1002b7e0);
      FUN_10003490(&DAT_10030470,0);
      FUN_100034f0(5);
    }
  }
  FUN_10003880(0x1d);
  if (cVar1 != '\0') {
    FUN_10003350(&DAT_10030548,0);
    if (iVar2 != 0) {
      FUN_100024d0(0x1d,0);
      FUN_10003750(DAT_1002b7d8);
      FUN_10003690();
    }
  }
  FUN_10003880(0x23);
  if (cVar1 != '\0') {
    FUN_100024d0(0x23,0);
    FUN_10001480(&DAT_100304f0);
  }
  FUN_10003880(0x24);
  if (cVar1 != '\0') {
    FUN_10003430(&DAT_10030420);
    if (iVar2 < 1) {
      FUN_100024d0(0x24,0);
      FUN_10003750(DAT_1002b7d0);
      FUN_100036f0();
    }
  }
  FUN_10003880(0x25);
  if (cVar1 != '\0') {
    FUN_10003430(&DAT_10030408);
    if (iVar2 < 1) {
      FUN_100024d0(0x25,0);
      FUN_10003750(DAT_1002b7c8);
      FUN_100036f0();
    }
  }
  uStack_8 = 0x10003077;
  return;
}





void __cdecl FUN_10003350(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100305b0 != (void *)0x0) {
    (*DAT_100305b0)(param_1,(int)param_2);
  }
  uStack_8 = 0x1000339c;
  return;
}





void __cdecl FUN_100033c0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100305b4 != (void *)0x0) {
    (*DAT_100305b4)(param_1,param_2);
  }
  uStack_8 = 0x1000340c;
  return;
}





void __cdecl FUN_10003430(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100305bc != (void *)0x0) {
    (*DAT_100305bc)(param_1);
  }
  uStack_8 = 0x10003478;
  return;
}





void __cdecl FUN_10003490(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100305e0 != (void *)0x0) {
    (*DAT_100305e0)(param_1,(int)param_2);
  }
  uStack_8 = 0x100034d8;
  return;
}





void __cdecl FUN_100034f0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030600 != (void *)0x0) {
    (*DAT_10030600)((int)param_1);
  }
  uStack_8 = 0x10003538;
  return;
}





void __cdecl
FUN_10003550(char param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030608 != (void *)0x0) {
    (*DAT_10030608)((int)param_1,param_2,param_3,(int)param_4);
  }
  uStack_8 = 0x100035a4;
  return;
}





void __cdecl
FUN_100035c0(char param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003060c != (void *)0x0) {
    (*DAT_1003060c)((int)param_1,param_2,param_3,(int)param_4);
  }
  uStack_8 = 0x10003614;
  return;
}





void __cdecl FUN_10003630(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003061c != (void *)0x0) {
    (*DAT_1003061c)(param_1,(int)param_2);
  }
  uStack_8 = 0x10003678;
  return;
}





void FUN_10003690(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030640 != (void *)0x0) {
    (*DAT_10030640)();
  }
  uStack_8 = 0x100036cd;
  return;
}





void FUN_100036f0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030644 != (void *)0x0) {
    (*DAT_10030644)();
  }
  uStack_8 = 0x1000372d;
  return;
}





void __cdecl FUN_10003750(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003064c != (void *)0x0) {
    (*DAT_1003064c)(param_1);
  }
  uStack_8 = 0x10003794;
  return;
}





void __cdecl FUN_100037b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030650 != (void *)0x0) {
    (*DAT_10030650)(param_1);
  }
  uStack_8 = 0x100037f8;
  return;
}





void __cdecl FUN_10003810(char param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030654 != (void *)0x0) {
    (*DAT_10030654)(param_1,param_2,param_3);
  }
  uStack_8 = 0x1000385c;
  return;
}





void __cdecl FUN_10003880(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030680 != (void *)0x0) {
    (*DAT_10030680)((int)param_1);
  }
  uStack_8 = 0x100038c8;
  return;
}





void __cdecl FUN_100038e0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003069c != (void *)0x0) {
    (*DAT_1003069c)(param_1,param_2,(int)param_3);
  }
  uStack_8 = 0x1000392c;
  return;
}





int __cdecl FUN_100039a0(char *param_1,byte *param_2)

{
  void *pcVar1;
  int iVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_10003e30(2,0x1002b994,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_10003e30(2,0x1002b994,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100044d0(0,(int *)&local_24);
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
if (DAT_100305a4 != (void *)0x0) {
    (*DAT_100305a4)(param_1,param_2);
  }
  uStack_8 = 0x100011a8;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305e8)((int)param_1);
  uStack_8 = 0x100011fb;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
