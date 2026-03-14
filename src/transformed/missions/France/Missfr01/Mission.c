#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002d6dc[] = "F6";
char DAT_1002d6f0[] = "CEN";
char DAT_1002d6f4[] = "VOR";
char DAT_1002db30[] = "F9";
char DAT_1002dc48[] = "F2";
char DAT_1002dc54[] = "F1";
long long DAT_100323f0 = 0;
long long DAT_100323f8 = 0;
long long DAT_10032400 = 0;
long long DAT_10032408 = 0;
long long DAT_10032410 = 0;
long long DAT_10032418 = 0;
long long DAT_10032420 = 0;
long long DAT_10032428 = 0;
long long DAT_10032430 = 0;
long long DAT_10032438 = 0;
long long DAT_10032440 = 0;
long long DAT_10032448 = 0;
long long DAT_10032450 = 0;
long long DAT_10032458 = 0;
long long DAT_10032460 = 0;
long long DAT_10032468 = 0;
long long DAT_10032470 = 0;
long long DAT_10032478 = 0;
long long DAT_10032480 = 0;
long long DAT_10032488 = 0;
long long DAT_10032490 = 0;
long long DAT_10032498 = 0;
long long DAT_100324a0 = 0;
long long DAT_100324a8 = 0;
long long DAT_100324b0 = 0;
long long DAT_100324b8 = 0;
long long DAT_100324c0 = 0;
long long DAT_100324c8 = 0;
long long DAT_100324d0 = 0;
long long DAT_100324d8 = 0;
long long DAT_100324e0 = 0;
long long DAT_100324e8 = 0;
long long DAT_100324f0 = 0;
long long DAT_100324f8 = 0;
long long DAT_10032500 = 0;
long long DAT_10032508 = 0;
long long DAT_10032510 = 0;
long long DAT_10032518 = 0;
long long DAT_10032520 = 0;
long long DAT_10032528 = 0;
long long DAT_10032530 = 0;
long long DAT_10032538 = 0;
long long DAT_10032540 = 0;
long long DAT_10032548 = 0;
long long DAT_10032550 = 0;
long long DAT_10032558 = 0;
long long DAT_10032560 = 0;
long long DAT_10032568 = 0;
long long DAT_10032570 = 0;
long long DAT_10032578 = 0;
long long DAT_10032580 = 0;
long long DAT_10032588 = 0;
long long DAT_10032590 = 0;
long long DAT_10032598 = 0;
long long DAT_100325a0 = 0;
long long DAT_100325a8 = 0;
long long DAT_100325b0 = 0;
long long DAT_100325b8 = 0;
long long DAT_100325c0 = 0;
int (*DAT_100325c8)() = 0;
long long DAT_100325d0 = 0;
long long DAT_100325d8 = 0;
long long DAT_100325e0 = 0;
long long DAT_100325e8 = 0;
long long DAT_100325f0 = 0;
long long DAT_100325f8 = 0;
long long DAT_10032600 = 0;
long long DAT_10032608 = 0;
long long DAT_10032610 = 0;
long long DAT_10032618 = 0;
long long DAT_10032620 = 0;
long long DAT_10032628 = 0;
long long DAT_10032630 = 0;
long long DAT_10032638 = 0;
long long DAT_10032640 = 0;
long long DAT_10032648 = 0;
long long DAT_10032650 = 0;
long long DAT_10032658 = 0;
long long DAT_10032660 = 0;
long long DAT_10032668 = 0;
long long DAT_10032670 = 0;
long long DAT_10032678 = 0;
long long DAT_10032680 = 0;
long long DAT_10032688 = 0;
long long DAT_10032690 = 0;
long long DAT_10032698 = 0;
long long DAT_100326a0 = 0;
long long DAT_100326a8 = 0;
long long DAT_100326b0 = 0;
long long DAT_100326b8 = 0;
long long DAT_100326c0 = 0;
long long DAT_100326c8 = 0;
long long DAT_100326d0 = 0;
long long DAT_100326d8 = 0;
long long DAT_100326e0 = 0;
long long DAT_100326e8 = 0;
long long DAT_100326f0 = 0;
long long DAT_100326f8 = 0;
long long DAT_10032700 = 0;
long long DAT_10032708 = 0;
long long DAT_10032710 = 0;
long long DAT_10032718 = 0;
int DAT_10032720 = 0;
int (*DAT_10032724)() = 0;
int (*DAT_10032728)() = 0;
int (*DAT_10032734)() = 0;
int (*DAT_10032738)() = 0;
int (*DAT_10032740)() = 0;
int (*DAT_1003274c)() = 0;
int (*DAT_10032750)() = 0;
int (*DAT_10032758)() = 0;
int (*DAT_1003275c)() = 0;
int (*DAT_1003277c)() = 0;
int (*DAT_10032784)() = 0;
int (*DAT_10032788)() = 0;
int (*DAT_10032790)() = 0;
int (*DAT_10032794)() = 0;
int (*DAT_10032798)() = 0;
int (*DAT_1003279c)() = 0;
int (*DAT_100327a0)() = 0;
int (*DAT_100327a4)() = 0;
int (*DAT_100327a8)() = 0;
int (*DAT_100327ac)() = 0;
int (*DAT_100327b0)() = 0;
int (*DAT_100327b4)() = 0;
int (*DAT_100327b8)() = 0;
int (*DAT_100327bc)() = 0;
int (*DAT_100327c0)() = 0;
int (*DAT_100327c4)() = 0;
int (*DAT_100327c8)() = 0;
int (*DAT_100327dc)() = 0;
int (*DAT_100327e0)() = 0;
int (*DAT_100327e4)() = 0;
int (*DAT_100327e8)() = 0;
int (*DAT_100327ec)() = 0;
int (*DAT_100327f0)() = 0;
int (*DAT_100327f4)() = 0;
int (*DAT_10032800)() = 0;
int (*DAT_10032808)() = 0;
int (*DAT_10032810)() = 0;
int (*DAT_1003281c)() = 0;
int (*DAT_10032820)() = 0;
int (*DAT_10032834)() = 0;
int (*DAT_10032838)() = 0;

/* Stubs for missing internal functions */
int FUN_10005990() { return 0; }
int FUN_10006030() { return 0; }


/* Forward declarations */
void FUN_10001290(char param_1);
void FUN_100012e0(char param_1);
void FUN_10001330(char param_1);
void FUN_10001380(int param_1,int param_2,char param_3);
void FUN_100013e0(char param_1,int param_2);
void FUN_10001440(char param_1);
void FUN_100014a0(char param_1);
void FUN_10001500(LPCSTR param_1);
void FUN_10001e90(void);
void FUN_100027e0(int param_1,int param_2);
void FUN_10002850(int param_1,int param_2);
void FUN_100028c0(int param_1,int param_2);
void FUN_10002920(int param_1,int param_2);
void FUN_10002990(char param_1,char param_2);
void FUN_100029f0(void);
void FUN_10004930(int param_1,char param_2);
void FUN_100049a0(int param_1,int param_2);
void FUN_10004a10(int param_1);
void FUN_10004a70(int param_1,char param_2);
void FUN_10004ae0(int param_1,char param_2);
void FUN_10004b40(char param_1);
void FUN_10004ba0(char param_1);
void FUN_10004c00(char param_1);
void FUN_10004c60(char param_1,int param_2,char param_3,char param_4);
void FUN_10004cd0(char param_1,int param_2,char param_3,char param_4);
void FUN_10004d40(char param_1,int param_2,char param_3);
void FUN_10004db0(char param_1,char param_2);
void FUN_10004e10(char param_1,char param_2);
void FUN_10004e70(char param_1,char param_2);
void FUN_10004ed0(int param_1,int param_2);
void FUN_10004f30(void);
void FUN_10004f90(void);
void FUN_10004ff0(int param_1,int param_2);
void FUN_10005050(int param_1);
void FUN_100050b0(int param_1);
void FUN_10005110(char param_1,char param_2);
void FUN_10005180(char param_1,char param_2,int param_3);
void FUN_100051f0(char param_1,char param_2,int param_3);
void FUN_10005260(char param_1,int param_2);
void FUN_100052c0(char param_1);
void FUN_10005320(char param_1);
void FUN_10005380(char param_1);
void FUN_100053e0(char param_1,char param_2);
void FUN_10005440(int param_1,int param_2,char param_3);
int FUN_10005500(char *param_1,int param_2);


void __cdecl FUN_10001290(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10032788)((int)param_1);
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
(*DAT_10032790)((int)param_1);
  uStack_8 = 0x1000136b;
  return;
}





void __cdecl FUN_10001380(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10032794)(param_1,param_2,(int)param_3);
  uStack_8 = 0x100013c3;
  return;
}





void __cdecl FUN_100013e0(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327ac != (void *)0x0) {
    (*DAT_100327ac)(param_1,param_2);
  }
  uStack_8 = 0x10001428;
  return;
}





void __cdecl FUN_10001440(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327c4 != (void *)0x0) {
    (*DAT_100327c4)((int)param_1);
  }
  uStack_8 = 0x10001484;
  return;
}





void __cdecl FUN_100014a0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032838 != (void *)0x0) {
    (*DAT_10032838)((int)param_1);
  }
  uStack_8 = 0x100014e4;
  return;
}





void __cdecl FUN_10001500(LPCSTR param_1)

{
  int iVar1;
  int *puVar2;
  CHAR local_108 [256];
  int local_8;
local_8 = GetProcAddress(DAT_10032720,param_1);
  if (local_8 == 0) {
    FUN_10005500(local_108,0x1002d030);
    MessageBoxA((HWND)0x0,local_108,"DLL init error.",0);
  }
  return;
}





void FUN_10001e90(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100028c0(&DAT_10032588,"ZONE3");
  FUN_100028c0(&DAT_10032590,"ZONE4");
  FUN_100028c0(&DAT_10032598,"ZONE5");
  FUN_100028c0(&DAT_100325a0,"ZONE6");
  FUN_100028c0(&DAT_100325a8,"ZONE7");
  FUN_100028c0(&DAT_100325b0,"ZONE8");
  FUN_100028c0(&DAT_10032580,"ZONE2");
  FUN_100028c0(&DAT_100325b0,"ZONE8");
  FUN_100028c0(&DAT_100325b8,"ZONE9");
  FUN_100028c0(&DAT_10032460,"ZONE10");
  FUN_100028c0(&DAT_10032458,"ZONE11");
  FUN_100028c0(&DAT_10032470,"ZONE12");
  FUN_100028c0(&DAT_10032468,"ZONE13");
  FUN_100028c0(&DAT_10032490,"ZONE14");
  FUN_100028c0(&DAT_10032480,"ZONE15");
  FUN_100028c0(&DAT_100324b0,"ZONE16");
  FUN_100028c0(&DAT_100324a0,"ZONE17");
  FUN_100028c0(&DAT_100324e0,"ZONE18");
  FUN_100028c0(&DAT_100324c8,"ZONE19");
  FUN_100028c0(&DAT_10032488,"ZONE20");
  FUN_100028c0(&DAT_10032478,"ZONE21");
  FUN_100028c0(&DAT_100324a8,"ZONE22");
  FUN_100028c0(&DAT_10032498,"ZONE23");
  FUN_100028c0(&DAT_100324d8,"ZONE24");
  FUN_100028c0(&DAT_100324c0,"ZONE25");
  FUN_100028c0(&DAT_100324f8,"ZONE26");
  FUN_100028c0(&DAT_100324e8,"ZONE27");
  FUN_100028c0(&DAT_10032518,"ZONE28");
  FUN_100028c0(&DAT_10032508,"ZONE29");
  FUN_100028c0(&DAT_100324d0,"ZONE30");
  FUN_100028c0(&DAT_100324b8,"ZONE31");
  FUN_100028c0(&DAT_100324f0,"ZONE32");
  FUN_100028c0(&DAT_10032548,"ZONE38");
  FUN_100028c0(&DAT_10032538,"ZONE39");
  FUN_100028c0(&DAT_10032510,"ZONE40");
  FUN_100028c0(&DAT_10032500,"ZONE41");
  FUN_100028c0(&DAT_100323f8,"ZONE41001");
  FUN_100028c0(&DAT_10032400,"ZONE41002");
  FUN_100028c0(&DAT_10032528,"ZONE42");
  FUN_100028c0(&DAT_10032520,"ZONE43");
  FUN_100028c0(&DAT_10032540,"ZONE44");
  FUN_100028c0(&DAT_10032530,"ZONE45");
  FUN_100028c0(&DAT_10032558,"ZONE46");
  FUN_100028c0(&DAT_10032550,"ZONE47");
  FUN_100028c0(&DAT_10032560,"ZONE48");
  FUN_100028c0(&DAT_100323f0,"ZNLIGHT");
  FUN_100027e0(&DAT_10032408,"GROUP1");
  FUN_100027e0(&DAT_10032418,"GROUP2");
  FUN_100027e0(&DAT_10032410,"GROUP3");
  FUN_100027e0(&DAT_10032420,"GROUP5");
  FUN_100027e0(&DAT_10032428,"GROUP9");
  FUN_100027e0(&DAT_100325e0,"GROUP10");
  FUN_100027e0(&DAT_10032640,"GROUP11");
  FUN_100027e0(&DAT_10032648,"GROUP12");
  FUN_100027e0(&DAT_10032630,"GROUP13");
  FUN_100027e0(&DAT_10032618,"GROUP15");
  FUN_100027e0(&DAT_10032628,"GROUP16");
  FUN_100027e0(&DAT_100325f0,"GROUP17");
  FUN_100027e0(&DAT_10032608,"GROUP18");
  FUN_100027e0(&DAT_100326d8,"GROUP19");
  FUN_100027e0(&DAT_10032638,"GROUP20");
  FUN_100027e0(&DAT_10032610,"GROUP21");
  FUN_100027e0(&DAT_10032620,"GROUP22");
  FUN_100027e0(&DAT_10032570,"GROUP22001");
  FUN_100027e0(&DAT_10032578,"GROUP22002");
  FUN_100027e0(&DAT_100325e8,"GROUP23");
  FUN_100027e0(&DAT_10032600,"GROUP24");
  FUN_100027e0(&DAT_100326e8,"GROUP26");
  FUN_100027e0(&DAT_100326b0,"GROUP27");
  FUN_100027e0(&DAT_100326c8,"GROUP28");
  FUN_100027e0(&DAT_10032690,"GROUP29");
  FUN_100027e0(&DAT_100325f8,"GROUP30");
  FUN_100027e0(&DAT_100326d0,"GROUP31");
  FUN_100027e0(&DAT_100326e0,"GROUP32");
  FUN_100027e0(&DAT_100326a8,"GROUP33");
  FUN_100027e0(&DAT_100326c0,"GROUP34");
  FUN_100027e0(&DAT_10032688,"GROUP35");
  FUN_100027e0(&DAT_100326a0,"GROUP36");
  FUN_100027e0(&DAT_10032660,"GROUP37");
  FUN_100027e0(&DAT_10032678,"GROUP38");
  FUN_100027e0(&DAT_10032710,"GROUP39");
  FUN_100027e0(&DAT_100326b8,"GROUP40");
  FUN_100027e0(&DAT_10032680,"GROUP41");
  FUN_100027e0(&DAT_10032698,"GROUP42");
  FUN_100027e0(&DAT_10032658,"GROUP43");
  FUN_100027e0(&DAT_10032670,"GROUP44");
  FUN_100027e0(&DAT_100325d8,"GROUP44005");
  FUN_100027e0(&DAT_10032708,"GROUP45");
  FUN_100027e0(&DAT_10032718,"GROUP46");
  FUN_100027e0(&DAT_100326f8,"GROUP47");
  FUN_100027e0(&DAT_10032700,"GROUP48");
  FUN_100027e0(&DAT_100326f0,"GROUP49");
  FUN_100027e0(&DAT_10032668,"GROUP50");
  FUN_100027e0(&DAT_100325c0,"GROUPPIZ");
  FUN_100027e0(&DAT_10032440,"GALL1U");
  FUN_100027e0(&DAT_10032430,"GALL1B");
  FUN_100027e0(&DAT_10032448,"GALL5U");
  FUN_100027e0(&DAT_10032438,"GALL5B");
  FUN_100027e0(&DAT_100325d0,DAT_1002d6f4);
  FUN_100027e0(&DAT_10032450,DAT_1002d6f0);
  FUN_10002920(&DAT_10032650,"Mortira(fr)");
  FUN_10002850(&DAT_10032568,DAT_1002d6dc);
  FUN_10002990(0,0x21);
  FUN_10002990(5,0x21);
  uStack_8 = 0x100025f9;
  return;
}





void __cdecl FUN_100027e0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032724 != (void *)0x0) {
    (*DAT_10032724)(param_1,param_2);
  }
  uStack_8 = 0x1000282c;
  return;
}





void __cdecl FUN_10002850(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032728 != (void *)0x0) {
    (*DAT_10032728)(param_1,param_2);
  }
  uStack_8 = 0x1000289c;
  return;
}





void __cdecl FUN_100028c0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032734 != (void *)0x0) {
    (*DAT_10032734)(param_1,param_2);
  }
  uStack_8 = 0x10002908;
  return;
}





void __cdecl FUN_10002920(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032738 != (void *)0x0) {
    (*DAT_10032738)(param_1,param_2);
  }
  uStack_8 = 0x1000296c;
  return;
}





void __cdecl FUN_10002990(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327b4 != (void *)0x0) {
    (*DAT_100327b4)(param_1,(int)param_2);
  }
  uStack_8 = 0x100029d8;
  return;
}





void FUN_100029f0(void)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
FUN_10005380(1);
  if ((cVar1 != '\0') && (FUN_100049a0(&DAT_100325b8,&DAT_100325f0), 0 < iVar2)) {
    FUN_100053e0(1,0);
    FUN_10004ff0(DAT_1002dc54,0x96);
  }
  FUN_10005380(2);
  if ((cVar1 != '\0') && (FUN_100049a0(&DAT_10032460,&DAT_100325f0), 0 < iVar2)) {
    FUN_100053e0(2,0);
    FUN_10004ff0(DAT_1002dc54,0x96);
  }
  FUN_10005380(3);
  if ((cVar1 != '\0') && (FUN_100049a0(&DAT_10032458,&DAT_100325f0), 0 < iVar2)) {
    FUN_100053e0(3,0);
    FUN_10005050("#PAGE3");
  }
  FUN_10005380(4);
  if ((cVar1 != '\0') && (FUN_100049a0(&DAT_10032580,&DAT_100325f0), 0 < iVar2)) {
    FUN_100053e0(4,0);
    FUN_10004ff0(DAT_1002dc48,0x96);
  }
  FUN_10005380(5);
  if (cVar1 != '\0') {
    FUN_100053e0(5,0);
    FUN_10004ae0(&DAT_10032428,0);
    FUN_10004ba0(1);
  }
  FUN_10005380(6);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_10032640), iVar2 < 2)) {
    FUN_100053e0(6,0);
    FUN_10005050("#PAGE31");
  }
  FUN_10005380(7);
  if (cVar1 != '\0') {
    FUN_100053e0(7,0);
    FUN_10004ae0(&DAT_10032408,0);
    FUN_10004e70(7,0);
  }
  FUN_10005380(8);
  if ((cVar1 != '\0') && (FUN_100049a0(&DAT_10032588,&DAT_100325f0), 0 < iVar2)) {
    FUN_100053e0(8,0);
    FUN_100050b0("#PAGE4");
    if (cVar1 == '\0') {
      FUN_10004ae0(&DAT_10032408,0);
      FUN_10004e70(7,1);
    }
    else {
      FUN_10005180(0,1,0xffffffce);
      FUN_10004ae0(&DAT_10032408,0);
      FUN_10004e70(7,1);
      FUN_10004db0(7,0);
    }
  }
  FUN_10005380(9);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_10032640), iVar2 < 1)) {
    FUN_100053e0(9,0);
    FUN_10004ae0(&DAT_10032648,0);
    FUN_10004db0(1,0);
  }
  FUN_10005380(10);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100325b0,0), 0 < iVar2)) {
    FUN_100053e0(10,0);
    FUN_10005050("#PAGE32");
  }
  FUN_10005380(0xb);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_10032470,0), 0 < iVar2)) {
    FUN_100053e0(0xb,0);
    FUN_10004ae0(&DAT_10032618,0);
    FUN_10004db0(1,0);
    FUN_10005380(0xc);
    if ((cVar1 != '\0') && (FUN_10004a10(&DAT_10032618), 0 < iVar2)) {
      FUN_100053e0(0xc,0);
      FUN_10005050("#PAGE33");
      FUN_10004a10(&DAT_10032628);
      if (iVar2 < 0x12) {
        FUN_10005180(0,1,100);
        FUN_10004ed0(&DAT_10032568,0x96);
      }
    }
  }
  FUN_10005380(0xb);
  if ((((cVar1 == '\0') && (FUN_10005380(0xc), cVar1 == '\0')) &&
      (FUN_10005380(0xd), cVar1 != '\0')) &&
     (FUN_10004a10(&DAT_10032628), iVar2 < 0xe)) {
    FUN_10005180(0,1,100);
    FUN_10004ed0(&DAT_10032568,0x96);
    FUN_100053e0(0xd,0);
  }
  FUN_10005380(0xe);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100325a8,0), 0 < iVar2)) {
    FUN_100053e0(0xe,0);
    FUN_10004ae0(&DAT_100325e0,0);
    FUN_10004db0(1,0);
    FUN_10005050("#PAGE5");
    FUN_10005180(0,1,100);
  }
  FUN_10005380(0xf);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_10032468,0), 0 < iVar2)) {
    FUN_100053e0(0xf,0);
    FUN_10005050("#PAGE34");
  }
  FUN_10005380(0x10);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100325a0,0), 0 < iVar2)) {
    FUN_100053e0(0x10,0);
    FUN_10005050("#PAGE35");
  }
  FUN_10005380(0x11);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_10032490,0), 0 < iVar2)) {
    FUN_100053e0(0x11,0);
    FUN_10005050("#PAGE6");
    FUN_10004ae0(&DAT_10032608,0);
    FUN_10004cd0(1,&DAT_10032580,0x40,0);
    FUN_10004cd0(1,&DAT_100325b0,0x30,2);
    FUN_10004cd0(1,&DAT_10032490,0x30,2);
  }
  FUN_10005380(0x12);
  if ((cVar1 != '\0') && (FUN_100049a0(&DAT_10032590,&DAT_100325f0), 0 < iVar2)) {
    FUN_100053e0(0x12,0);
    FUN_10005050("#PAGE7");
  }
  FUN_10005380(0x13);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_10032598,0), 0 < iVar2)) {
    FUN_100053e0(0x13,0);
    FUN_10004ae0(&DAT_10032420,0);
    FUN_10004cd0(1,&DAT_10032598,0xc0,0);
  }
  FUN_10005380(0x14);
  if (cVar1 != '\0') {
    FUN_100053e0(0x14,0);
    FUN_10004ae0(&DAT_100326d8,0);
    FUN_10004db0(1,5);
  }
  FUN_10005380(0x15);
  if ((cVar1 != '\0') && (FUN_100049a0(&DAT_10032480,&DAT_10032418), 0 < iVar2)) {
    FUN_100053e0(0x15,0);
    FUN_10005050("#PAGE8");
    FUN_10004ae0(&DAT_10032418,0);
    FUN_10004db0(0,5);
    FUN_10004ae0(&DAT_10032418,0);
    FUN_10004c60(5,&DAT_10032480,0,0);
    FUN_10005180(0,1,100);
  }
  FUN_10005380(0x16);
  if (cVar1 != '\0') {
    FUN_100053e0(0x16,0);
    FUN_10004ae0(&DAT_10032638,0);
    FUN_10004ba0(5);
  }
  FUN_10005380(0x17);
  if ((cVar1 != '\0') && (FUN_10004a70(&DAT_10032650,0), iVar2 != 0)) {
    FUN_100053e0(0x17,0);
    FUN_100053e0(0xf,0);
  }
  FUN_10005380(0x18);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_10032480,0), 0 < iVar2)) {
    FUN_100053e0(0x18,0);
    FUN_10005050("#PAGE9");
  }
  FUN_10005380(0x19);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324b0,0), 0 < iVar2)) {
    FUN_100053e0(0x19,0);
    FUN_100050b0("#PAGE10");
    if (cVar1 == '\0') {
      FUN_10004ae0(&DAT_10032610,0);
      FUN_10004e10(1,0);
      FUN_10004e70(7,1);
    }
    else {
      FUN_10004ae0(&DAT_10032610,0);
      FUN_10005180(0,1,0xffffff6a);
      FUN_10004e70(7,1);
      FUN_10004db0(1,0);
    }
  }
  FUN_10005380(0x1a);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324a0,0), 0 < iVar2)) {
    FUN_100053e0(0x1a,0);
    FUN_10005050("#PAGE11");
    FUN_10004ae0(&DAT_100326e8,0);
    FUN_10004ba0(5);
    FUN_10005440(&DAT_100324e0,8,1);
  }
  FUN_10005380(0x1b);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324a8,0), 0 < iVar2)) {
    FUN_100053e0(0x1b,0);
    FUN_10004ae0(&DAT_100326c8,0);
    FUN_100013e0(1,&DAT_10032570);
    FUN_10004ae0(&DAT_100325f8,0);
    FUN_100013e0(1,&DAT_10032578);
    FUN_10004ae0(&DAT_10032690,0);
    FUN_100013e0(1,&DAT_100326e0);
    FUN_10004ae0(&DAT_100326b0,0);
    FUN_10004d40(1,&DAT_100324a8,0x40);
    FUN_10005260(0x1f,0x20);
  }
  FUN_100052c0(0x1f);
  if (cVar1 != '\0') {
    FUN_10004ae0(&DAT_100326c8,0);
    FUN_100013e0(1,&DAT_10032570);
    FUN_10004ae0(&DAT_100325f8,0);
    FUN_100013e0(1,&DAT_10032578);
    FUN_10004ae0(&DAT_10032690,0);
    FUN_100013e0(1,&DAT_100326e0);
    FUN_10004ae0(&DAT_100326b0,0);
    FUN_10005260(0x1f,400);
  }
  FUN_10005380(0x1c);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_10032620), iVar2 < 0x61)) {
    FUN_100053e0(0x1c,0);
    FUN_10004ae0(&DAT_100325e8,0);
    FUN_10004ae0(&DAT_10032600,1);
    FUN_10004cd0(1,&DAT_100324e0,2,0);
  }
  FUN_10005380(0x1d);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_100326e0), iVar2 < 1)) {
    FUN_100053e0(0x1d,0);
    FUN_10005050("#PAGE12");
    FUN_100014a0(1);
  }
  FUN_10005380(0x1e);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324c8,0), 0 < iVar2)) {
    FUN_100053e0(0x1e,0);
    FUN_10004ae0(&DAT_100326d0,0);
    FUN_10004db0(5,0);
    FUN_10005050("#PAGE13");
  }
  FUN_10005380(0x1f);
  if ((cVar1 != '\0') &&
     (((FUN_10004930(&DAT_10032478,0), iVar2 != 0 ||
       (FUN_10004930(&DAT_10032488,0), iVar2 != 0)) ||
      (FUN_10004930(&DAT_10032498,0), iVar2 != 0)))) {
    FUN_100053e0(0x1f,0);
    FUN_10005050("#PAGE14");
  }
  FUN_10005380(0x20);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324d8,0), 0 < iVar2)) {
    FUN_100053e0(0x20,0);
    FUN_10004ae0(&DAT_10032410,0);
    FUN_10004d40(1,&DAT_100324d8,0x6e);
  }
  FUN_10005380(0x21);
  if (cVar1 != '\0') {
    FUN_100053e0(0x21,0);
    FUN_10004ae0(&DAT_100326e0,0);
    FUN_10001440(5);
    FUN_10004ae0(&DAT_100326a8,0);
    FUN_10001440(1);
  }
  FUN_10005380(0x22);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324c0,0), 0 < iVar2)) {
    FUN_100053e0(0x22,0);
    FUN_10005050("#PAGE15");
    FUN_10005180(0,1,0xfa);
  }
  FUN_10005380(0x23);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324f8,0), 0 < iVar2)) {
    FUN_100053e0(0x23,0);
    FUN_10004ae0(&DAT_100326a8,0);
    FUN_10004cd0(1,&DAT_100324f8,2,0);
  }
  FUN_10005380(0x24);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324e8,0), 0 < iVar2)) {
    FUN_100053e0(0x24,0);
    FUN_100050b0("#PAGE16");
    if (cVar1 == '\0') {
      FUN_10004ae0(&DAT_100326c0,0);
      FUN_10004d40(1,&DAT_100324e8,0x80);
    }
    else {
      FUN_10005180(0,1,0xffffec78);
      FUN_10004ae0(&DAT_100326c0,0);
      FUN_10004c60(1,&DAT_10032518,0xe6,0);
      FUN_10005380(0x7e);
      if ((cVar1 != '\0') && (FUN_10005110(0,1), iVar2 < 1)) {
        FUN_100053e0(0x7e,0);
        FUN_10005050("#PAGE36");
        FUN_10005180(0,1,0x32);
      }
    }
  }
  FUN_10005380(0x25);
  if (cVar1 != '\0') {
    FUN_100053e0(0x25,0);
    FUN_10004ae0(&DAT_100326a0,0);
    FUN_10004ba0(5);
  }
  FUN_10005380(0x26);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324f0,0), 0 < iVar2)) {
    FUN_100053e0(0x26,0);
    FUN_10004ae0(&DAT_10032688,0);
    FUN_10004db0(5,0);
  }
  FUN_10005380(0x27);
  if (cVar1 != '\0') {
    FUN_100053e0(0x27,0);
    FUN_10004ae0(&DAT_10032660,0);
    FUN_10001440(5);
  }
  FUN_10005380(0x28);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324b8,0), 0 < iVar2)) {
    FUN_10005380(0x29);
    if (cVar1 != '\0') {
      FUN_100053e0(0x29,0);
      FUN_10005050("#PAGE17");
    }
    FUN_100053e0(0x28,0);
    FUN_100050b0("#PAGE18");
    if (cVar1 == '\0') {
      FUN_10005260(0x1e,0xfa);
    }
    else {
      FUN_10005110(0,1);
      if (iVar2 < 1000) {
        FUN_10005050("#PAGE19");
        FUN_10005260(0x1d,0x96);
      }
      else {
        FUN_10005180(0,1,0xfffffc18);
        FUN_10004ae0(&DAT_10032678,0);
        FUN_10004c60(7,&DAT_100324d0,0xe6,0);
        FUN_10004ae0(&DAT_10032668,0);
        FUN_10004ba0(5);
        FUN_10005320(0x1d);
        FUN_10005320(0x1e);
        FUN_100053e0(0x28,0);
      }
    }
  }
  FUN_10005380(0x2a);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_100324d0,7), 5 < iVar2)) {
    FUN_100053e0(0x2a,0);
    FUN_10004ae0(&DAT_10032678,0);
    FUN_10004d40(7,&DAT_10032508,0x80);
  }
  FUN_100052c0(0x1e);
  if (cVar1 != '\0') {
    FUN_10005260(0x1e,0xfa);
    FUN_100053e0(0x28,1);
  }
  FUN_100052c0(0x1d);
  if (cVar1 != '\0') {
    FUN_10005260(0x1d,0x96);
    FUN_100053e0(0x28,1);
  }
  FUN_10005380(0x2b);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_10032548,0), 0 < iVar2)) {
    FUN_100053e0(0x2b,0);
    FUN_10005050("#PAGE20");
    FUN_10005440(&DAT_100323f0,1,5);
  }
  FUN_10005380(0x2c);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_10032520,0), 0 < iVar2)) {
    FUN_100053e0(0x2c,0);
    FUN_10005050("#PAGE21");
    FUN_10004ae0(&DAT_10032718,0);
    FUN_10004db0(7,0);
  }
  FUN_10005380(0x7f);
  if ((cVar1 != '\0') &&
     (((FUN_100049a0(&DAT_10032500,&DAT_10032718), iVar2 != 0 ||
       (FUN_100049a0(&DAT_100323f8,&DAT_10032718), iVar2 != 0)) ||
      (FUN_100049a0(&DAT_10032400,&DAT_10032718), iVar2 != 0)))) {
    FUN_100053e0(0x7f,0);
    FUN_10005050("#PAGE22");
    FUN_10004ae0(&DAT_10032718,0);
    FUN_10004db0(0,5);
    FUN_10004ae0(&DAT_10032718,0);
    FUN_10004c60(5,&DAT_10032510,0,0);
  }
  FUN_100049a0(&DAT_10032538,&DAT_10032718);
  if (iVar2 != 0) {
    FUN_10004ae0(&DAT_10032718,0);
    FUN_10004c60(0,&DAT_10032510,0x2d,0);
    FUN_10004ff0(DAT_1002db30,100);
  }
  FUN_10005380(0x2d);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_100326f8), iVar2 < 0x30)) {
    FUN_100053e0(0x2d,0);
    FUN_10004ae0(&DAT_10032658,0);
    FUN_10004d40(1,&DAT_10032528,0xc0);
    FUN_10004ae0(&DAT_10032708,0);
    FUN_10004ba0(1);
    FUN_10004ae0(&DAT_100325d8,0);
    FUN_10004ba0(1);
    FUN_10004ae0(&DAT_10032698,0);
    FUN_10005260(0x19,0xa0);
  }
  FUN_100052c0(0x19);
  if (cVar1 != '\0') {
    FUN_10004c60(1,&DAT_10032540,0x5a,0);
  }
  FUN_10005380(0x2e);
  if ((cVar1 != '\0') && (FUN_10004930(&DAT_10032540,0), 0 < iVar2)) {
    FUN_100053e0(0x2e,0);
    FUN_10004ae0(&DAT_100325d8,0);
    FUN_10004c00(1);
  }
  FUN_10005380(0x2f);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_10032700), iVar2 < 0x15)) {
    FUN_100053e0(0x2f,0);
    FUN_10004ae0(&DAT_10032670,0);
    FUN_10004ba0(1);
    FUN_10004ae0(&DAT_10032698,0);
    FUN_10004ae0(&DAT_10032680,1);
    FUN_10005260(0x18,0xa0);
  }
  FUN_100052c0(0x18);
  if (cVar1 != '\0') {
    FUN_10004ae0(&DAT_10032698,0);
    FUN_10004ae0(&DAT_10032680,1);
    FUN_10004c60(1,&DAT_10032530,0,0);
  }
  FUN_10005380(0x30);
  if (((cVar1 != '\0') && (FUN_10004a10(&DAT_10032680), iVar2 < 5)) &&
     (FUN_10004a10(&DAT_10032698), iVar2 < 5)) {
    FUN_100053e0(0x30,0);
    FUN_10004ae0(&DAT_100326f0,0);
    FUN_10004ba0(5);
    FUN_10005050("#PAGE23");
    FUN_10005180(0,1,500);
  }
  FUN_10005380(0x31);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_10032718), iVar2 < 1)) {
    FUN_100053e0(0x31,0);
    FUN_10005050("#PAGE24");
    FUN_10004f90();
  }
  FUN_10005380(0x32);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_10032630), iVar2 < 1)) {
    FUN_100053e0(0x32,0);
    FUN_10005050("#PAGE25");
    FUN_10004f90();
  }
  FUN_10005380(0x33);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_100326b8), iVar2 < 0x12)) {
    FUN_100053e0(0x33,0);
    FUN_10005050("#PAGE26");
    FUN_10004ae0(&DAT_10032710,0);
    FUN_10004c60(5,&DAT_10032558,0,0);
  }
  FUN_10005380(0x34);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_10032710), iVar2 < 1)) {
    FUN_100053e0(0x34,0);
    FUN_10005050("#PAGE27");
    FUN_10004f90();
  }
  FUN_10005380(0x35);
  if (((cVar1 != '\0') && (FUN_100049a0(&DAT_10032550,&DAT_10032718), iVar2 != 0)) ||
     (FUN_100049a0(&DAT_10032560,&DAT_10032718), iVar2 != 0)) {
    FUN_100053e0(0x35,0);
    FUN_10005050("#PAGE28");
    FUN_10004f90();
  }
  FUN_10005380(0x37);
  if ((cVar1 != '\0') && (FUN_100049a0(&DAT_10032550,&DAT_100326d0), 0 < iVar2)) {
    FUN_100053e0(0x37,0);
    FUN_10004ae0(&DAT_100326d0,0);
    FUN_10004db0(0,5);
    FUN_10004ae0(&DAT_100326d0,0);
    FUN_10004c60(5,&DAT_100324e0,0,0);
    FUN_10005050("#PAGE30");
  }
  FUN_10005380(0x38);
  if ((cVar1 != '\0') && (FUN_10004a10(&DAT_10032618), iVar2 < 1)) {
    FUN_100053e0(0x38,0);
    FUN_10005050("#PAGE37");
    FUN_10004f90();
  }
  FUN_10005380(0x36);
  if ((cVar1 != '\0') && (FUN_100049a0(&DAT_10032558,&DAT_10032710), iVar2 != 0)) {
    FUN_100053e0(0x36,0);
    FUN_10005050("#PAGE29");
    FUN_10004ae0(&DAT_100325c0,0);
    FUN_10004db0(5,0);
    FUN_10005180(0,3,0xabf41c01);
    FUN_10005180(0,3,5000);
    FUN_10005180(0,0,0xabf41c01);
    FUN_10005180(0,0,2000);
    FUN_10005180(0,2,0xabf41c01);
    FUN_10005180(0,2,1000);
    FUN_10005180(0,4,0xabf41c01);
    FUN_10005180(0,4,1000);
    FUN_10005180(0,5,0xabf41c01);
    FUN_10005180(0,5,1000);
    FUN_10005180(0,1,0xabf41c01);
    FUN_10005180(0,1,1000);
    FUN_100051f0(1,3,25000);
    FUN_100051f0(1,0,2000);
    FUN_100051f0(1,2,10000);
    FUN_100051f0(1,4,2000);
    FUN_100051f0(1,5,5000);
    FUN_100051f0(1,1,1000);
    FUN_10004ae0(&DAT_10032440,0);
    FUN_10004ae0(&DAT_10032430,1);
    FUN_10004ae0(&DAT_100325d0,1);
    FUN_10004b40(1);
    FUN_10004ae0(&DAT_10032450,1);
    FUN_10004b40(1);
    FUN_10004ae0(&DAT_10032448,0);
    FUN_10004ae0(&DAT_10032438,1);
    FUN_10004b40(5);
    FUN_10005260(0x11,2000);
  }
  FUN_100052c0(0x11);
  if (cVar1 != '\0') {
    FUN_10004f30();
  }
  uStack_8 = 0x100042e0;
  return;
}





void __cdecl FUN_10004930(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003274c != (void *)0x0) {
    (*DAT_1003274c)(param_1,(int)param_2);
  }
  uStack_8 = 0x1000497c;
  return;
}





void __cdecl FUN_100049a0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032750 != (void *)0x0) {
    (*DAT_10032750)(param_1,param_2);
  }
  uStack_8 = 0x100049ec;
  return;
}





void __cdecl FUN_10004a10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032758 != (void *)0x0) {
    (*DAT_10032758)(param_1);
  }
  uStack_8 = 0x10004a58;
  return;
}





void __cdecl FUN_10004a70(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003275c != (void *)0x0) {
    (*DAT_1003275c)(param_1,(int)param_2);
  }
  uStack_8 = 0x10004abc;
  return;
}





void __cdecl FUN_10004ae0(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003277c != (void *)0x0) {
    (*DAT_1003277c)(param_1,(int)param_2);
  }
  uStack_8 = 0x10004b28;
  return;
}





void __cdecl FUN_10004b40(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032798 != (void *)0x0) {
    (*DAT_10032798)((int)param_1);
  }
  uStack_8 = 0x10004b88;
  return;
}





void __cdecl FUN_10004ba0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003279c != (void *)0x0) {
    (*DAT_1003279c)((int)param_1);
  }
  uStack_8 = 0x10004be8;
  return;
}





void __cdecl FUN_10004c00(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327a0 != (void *)0x0) {
    (*DAT_100327a0)((int)param_1);
  }
  uStack_8 = 0x10004c48;
  return;
}





void __cdecl
FUN_10004c60(char param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327a4 != (void *)0x0) {
    (*DAT_100327a4)((int)param_1,param_2,param_3,(int)param_4);
  }
  uStack_8 = 0x10004cb4;
  return;
}





void __cdecl
FUN_10004cd0(char param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327a8 != (void *)0x0) {
    (*DAT_100327a8)((int)param_1,param_2,param_3,(int)param_4);
  }
  uStack_8 = 0x10004d24;
  return;
}





void __cdecl FUN_10004d40(char param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327b0 != (void *)0x0) {
    (*DAT_100327b0)(param_1,param_2,(int)param_3);
  }
  uStack_8 = 0x10004d90;
  return;
}





void __cdecl FUN_10004db0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327b8 != (void *)0x0) {
    (*DAT_100327b8)(param_1,(int)param_2);
  }
  uStack_8 = 0x10004df8;
  return;
}





void __cdecl FUN_10004e10(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327bc != (void *)0x0) {
    (*DAT_100327bc)(param_1,(int)param_2);
  }
  uStack_8 = 0x10004e58;
  return;
}





void __cdecl FUN_10004e70(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100327c0)(param_1,(int)param_2);
  uStack_8 = 0x10004eaf;
  return;
}





void __cdecl FUN_10004ed0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327c8 != (void *)0x0) {
    (*DAT_100327c8)(param_1,param_2);
  }
  uStack_8 = 0x10004f18;
  return;
}





void FUN_10004f30(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327dc != (void *)0x0) {
    (*DAT_100327dc)();
  }
  uStack_8 = 0x10004f6d;
  return;
}





void FUN_10004f90(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327e0 != (void *)0x0) {
    (*DAT_100327e0)();
  }
  uStack_8 = 0x10004fcd;
  return;
}





void __cdecl FUN_10004ff0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327e4 != (void *)0x0) {
    (*DAT_100327e4)(param_1,param_2);
  }
  uStack_8 = 0x10005038;
  return;
}





void __cdecl FUN_10005050(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327e8 != (void *)0x0) {
    (*DAT_100327e8)(param_1);
  }
  uStack_8 = 0x10005094;
  return;
}





void __cdecl FUN_100050b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327ec != (void *)0x0) {
    (*DAT_100327ec)(param_1);
  }
  uStack_8 = 0x100050f8;
  return;
}





void __cdecl FUN_10005110(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100325c8 != (void *)0x0) {
    (*DAT_100325c8)(param_1,(int)param_2);
  }
  uStack_8 = 0x1000515c;
  return;
}





void __cdecl FUN_10005180(char param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327f0 != (void *)0x0) {
    (*DAT_100327f0)(param_1,param_2,param_3);
  }
  uStack_8 = 0x100051cc;
  return;
}





void __cdecl FUN_100051f0(char param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100327f4 != (void *)0x0) {
    (*DAT_100327f4)(param_1,param_2,param_3);
  }
  uStack_8 = 0x1000523c;
  return;
}





void __cdecl FUN_10005260(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032800 != (void *)0x0) {
    (*DAT_10032800)(param_1,param_2);
  }
  uStack_8 = 0x100052a8;
  return;
}





void __cdecl FUN_100052c0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032808 != (void *)0x0) {
    (*DAT_10032808)((int)param_1);
  }
  uStack_8 = 0x10005308;
  return;
}





void __cdecl FUN_10005320(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032810 != (void *)0x0) {
    (*DAT_10032810)((int)param_1);
  }
  uStack_8 = 0x10005364;
  return;
}





void __cdecl FUN_10005380(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003281c != (void *)0x0) {
    (*DAT_1003281c)((int)param_1);
  }
  uStack_8 = 0x100053c8;
  return;
}





void __cdecl FUN_100053e0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032820 != (void *)0x0) {
    (*DAT_10032820)(param_1,(int)param_2);
  }
  uStack_8 = 0x10005428;
  return;
}





void __cdecl FUN_10005440(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10032834 != (void *)0x0) {
    (*DAT_10032834)(param_1,param_2,(int)param_3);
  }
  uStack_8 = 0x1000548c;
  return;
}





int __cdecl FUN_10005500(char *param_1,int param_2)

{
  void *pcVar1;
  int iVar2;
  int uVar3;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_10005990(2,0x1002dd58,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  if ((param_2 == 0) &&
     (iVar2 = FUN_10005990(2,0x1002dd58,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10006030(0,(int *)&local_24);
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
if (DAT_10032740 != (void *)0x0) {
    (*DAT_10032740)(param_1,param_2);
  }
  uStack_8 = 0x10001228;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10032784)((int)param_1);
  uStack_8 = 0x1000127b;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
