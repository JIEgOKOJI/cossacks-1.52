#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int (*DAT_100303f0)() = 0;
int DAT_100303f4 = 0;
long long DAT_100303f8 = 0;
long long DAT_1003040c = 0;
long long DAT_10030420 = 0;
long long DAT_10030428 = 0;
long long DAT_10030430 = 0;
long long DAT_10030438 = 0;
long long DAT_10030440 = 0;
long long DAT_10030448 = 0;
long long DAT_10030450 = 0;
long long DAT_10030458 = 0;
int DAT_10030460 = 0;
int DAT_10030464 = 0;
int DAT_1003046c = 0;
int (*DAT_10030470)() = 0;
int (*DAT_10030480)() = 0;
int (*DAT_10030484)() = 0;
int (*DAT_1003048c)() = 0;
int (*DAT_10030498)() = 0;
int (*DAT_100304a4)() = 0;
int (*DAT_100304a8)() = 0;
int (*DAT_100304b8)() = 0;
int (*DAT_100304d4)() = 0;
int (*DAT_100304d8)() = 0;
int (*DAT_100304e0)() = 0;
int (*DAT_100304e4)() = 0;
int (*DAT_100304e8)() = 0;
int (*DAT_100304ec)() = 0;
int (*DAT_100304f0)() = 0;
int (*DAT_10030508)() = 0;
int (*DAT_10030510)() = 0;
int (*DAT_10030520)() = 0;
int (*DAT_10030538)() = 0;
int (*DAT_1003053c)() = 0;
int (*DAT_10030540)() = 0;
int (*DAT_10030550)() = 0;
int (*DAT_1003055c)() = 0;
int (*DAT_10030560)() = 0;
int (*DAT_10030574)() = 0;
int (*DAT_10030578)() = 0;
int (*DAT_1003057c)() = 0;
int (*DAT_10030584)() = 0;
int (*DAT_10030598)() = 0;
int (*DAT_1003059c)() = 0;
int (*DAT_100305a0)() = 0;
int (*DAT_100305a4)() = 0;
int (*DAT_100305a8)() = 0;
int (*DAT_100305ac)() = 0;
int (*DAT_100305b0)() = 0;
int (*DAT_100305b4)() = 0;
int (*DAT_100305b8)() = 0;
int (*DAT_100305bc)() = 0;
int (*DAT_100305c0)() = 0;

/* Stubs for missing internal functions */
int FUN_10003680() { return 0; }
int FUN_10003d20() { return 0; }


/* Forward declarations */
void FUN_100012a0(char param_1);
void FUN_100012f0(char param_1);
void FUN_10001340(char param_1);
void FUN_10001390(char param_1);
void FUN_100013e0(char param_1);
void FUN_10001430(char param_1);
void FUN_10001480(int param_1,int param_2,char param_3);
void FUN_100014e0(int param_1,int param_2,char param_3);
void FUN_10001540(char param_1,int param_2);
void FUN_100015a0(char param_1);
void FUN_10001600(char param_1,int param_2);
void FUN_10001660(int param_1);
void FUN_100016b0(char param_1);
void FUN_10001710(int param_1,int param_2);
void FUN_10001770(int param_1,int param_2,char param_3);
void FUN_100017d0(char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
void FUN_10001840(char param_1);
void FUN_10001890(char param_1,int param_2,int param_3);
void FUN_100018f0(int param_1,int param_2,char param_3,int param_4,
            char param_5,int param_6);
void FUN_10001960(char param_1);
void FUN_100019b0(void);
void FUN_10001a00(char param_1,int param_2,int param_3);
void FUN_10001a60(void);
void FUN_10001ab0(LPCSTR param_1);
void FUN_100025a0(void);
void FUN_100025f0(void);
void FUN_10002650(void);
void FUN_100026b0(void);
void FUN_10002700(void);
void FUN_10002760(int param_1,int param_2);
void FUN_100027c0(char param_1,char param_2,int param_3);
void FUN_10002830(void);
void FUN_10002890(void);
void FUN_10002a00(int param_1,int param_2);
void FUN_10002a70(int param_1,int param_2);
void FUN_10002ad0(int param_1,int param_2);
void FUN_10002b40(char param_1,char param_2);
void FUN_10002ba0(void);
void FUN_10002e70(int param_1,char param_2);
void FUN_10002ee0(int param_1);
void FUN_10002f40(int param_1,char param_2);
void FUN_10002fb0(char param_1,int param_2);
void FUN_10003010(char param_1);
void FUN_10003070(void);
void FUN_100030d0(char param_1);
void FUN_10003130(char param_1,char param_2);
int FUN_100031f0(char *param_1,byte *param_2);

void OnInit();
void ProcessScenary();


void __cdecl FUN_100012a0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100304d4)((int)param_1);
  uStack_8 = 0x100012db;
  return;
}





void __cdecl FUN_100012f0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100304d8)((int)param_1);
  uStack_8 = 0x1000132b;
  return;
}





void __cdecl FUN_10001340(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001340(param_1);
  uStack_8 = 0x10001371;
  return;
}





void __cdecl FUN_10001390(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100304e0)((int)param_1);
  uStack_8 = 0x100013cb;
  return;
}





void __cdecl FUN_100013e0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100304e4)((int)param_1);
  uStack_8 = 0x1000141b;
  return;
}





void __cdecl FUN_10001430(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100304e8)((int)param_1);
  uStack_8 = 0x1000146b;
  return;
}





void __cdecl FUN_10001480(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100304ec)(param_1,param_2,(int)param_3);
  uStack_8 = 0x100014c3;
  return;
}





void __cdecl FUN_100014e0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100304f0)(param_1,param_2,(int)param_3);
  uStack_8 = 0x10001523;
  return;
}





void __cdecl FUN_10001540(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030508 != (void *)0x0) {
    (*DAT_10030508)(param_1,param_2);
  }
  uStack_8 = 0x10001588;
  return;
}





void __cdecl FUN_100015a0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030520 != (void *)0x0) {
    (*DAT_10030520)((int)param_1);
  }
  uStack_8 = 0x100015e4;
  return;
}





void __cdecl FUN_10001600(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100303f0)(param_1,param_2);
  uStack_8 = 0x1000163f;
  return;
}





void __cdecl FUN_10001660(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_10030584)(param_1);
  uStack_8 = 0x1000169b;
  return;
}





void __cdecl FUN_100016b0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030598 != (void *)0x0) {
    (*DAT_10030598)((int)param_1);
  }
  uStack_8 = 0x100016f4;
  return;
}





void __cdecl FUN_10001710(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1003059c)(param_1,param_2);
  uStack_8 = 0x1000174f;
  return;
}





void __cdecl FUN_10001770(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305a0)(param_1,param_2,(int)param_3);
  uStack_8 = 0x100017b3;
  return;
}





void __cdecl
FUN_100017d0(char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305a4)(param_1,param_2,param_3,param_4,param_5,param_6);
  uStack_8 = 0x1000181f;
  return;
}





void __cdecl FUN_10001840(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305a8)((int)param_1);
  uStack_8 = 0x1000187b;
  return;
}





void __cdecl FUN_10001890(char param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305ac)(param_1,param_2,param_3);
  uStack_8 = 0x100018d3;
  return;
}





void __cdecl
FUN_100018f0(int param_1,int param_2,char param_3,int param_4,
            char param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305b0)(param_1,param_2,param_3,param_4,param_5,param_6);
  uStack_8 = 0x1000193f;
  return;
}





void __cdecl FUN_10001960(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305b4)((int)param_1);
  uStack_8 = 0x1000199b;
  return;
}





void FUN_100019b0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305b8)();
  uStack_8 = 0x100019e4;
  return;
}





void __cdecl FUN_10001a00(char param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305bc)(param_1,param_2,param_3);
  uStack_8 = 0x10001a43;
  return;
}





void FUN_10001a60(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100305c0)();
  uStack_8 = 0x10001a94;
  return;
}





void __cdecl FUN_10001ab0(LPCSTR param_1)

{
  int iVar1;
  int *puVar2;
  CHAR local_108 [256];
  int local_8;
local_8 = GetProcAddress(DAT_1003046c,param_1);
  if (local_8 == 0) {
    FUN_100031f0(local_108,(byte *)"DMCR.EXE does not contain function: %s");
    MessageBoxA((HWND)0x0,local_108,"DLL init error.",0);
  }
  return;
}





void FUN_100025a0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001a60();
  if (iVar1 == 0) {
    FUN_100025f0();
  }
  else {
    FUN_10002650();
  }
  uStack_8 = 0x100025da;
  return;
}





void FUN_100025f0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030538 != (void *)0x0) {
    (*DAT_10030538)();
  }
  uStack_8 = 0x1000262d;
  return;
}





void FUN_10002650(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003053c != (void *)0x0) {
    (*DAT_1003053c)();
  }
  uStack_8 = 0x1000268d;
  return;
}





void FUN_100026b0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001a60();
  if (iVar1 == 1) {
    FUN_100025f0();
  }
  else {
    FUN_10002650();
  }
  uStack_8 = 0x100026eb;
  return;
}





void FUN_10002700(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100027c0(0,5,0);
  FUN_10002760("TEXT1",100);
  uStack_8 = 0x10002742;
  return;
}





void __cdecl FUN_10002760(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030540 != (void *)0x0) {
    (*DAT_10030540)(param_1,param_2);
  }
  uStack_8 = 0x100027a8;
  return;
}





void __cdecl FUN_100027c0(char param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030550 != (void *)0x0) {
    (*DAT_10030550)(param_1,param_2,param_3);
  }
  uStack_8 = 0x1000280c;
  return;
}





void FUN_10002830(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100027c0(1,5,0);
  FUN_10002760("TEXT2",100);
  uStack_8 = 0x10002872;
  return;
}





void FUN_10002890(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002a70(&DAT_10030438,"Zone1");
  FUN_10002a70(&DAT_10030440,"Zone2");
  FUN_10002a70(&DAT_10030448,"Zone3");
  FUN_10002a70(&DAT_10030450,"Zone4");
  FUN_10002a70(&DAT_10030458,"Zone5");
  FUN_10002ad0(&DAT_10030430,"GRUZ_Z(UN)");
  FUN_10002a00(&DAT_10030420,"Group1");
  FUN_10002a00(&DAT_10030428,"Group2");
  FUN_10002b40(0,1);
  FUN_10002b40(1,2);
  FUN_10002b40(3,7);
  for (DAT_100303f4 = 0; DAT_100303f4 < 5; DAT_100303f4 = DAT_100303f4 + 1) {
    ((long long *)&DAT_100303f8)[DAT_100303f4] = 0;
    ((long long *)&DAT_1003040c)[DAT_100303f4] = 0;
  }
  uStack_8 = 0x100029af;
  return;
}





void __cdecl FUN_10002a00(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030470 != (void *)0x0) {
    (*DAT_10030470)(param_1,param_2);
  }
  uStack_8 = 0x10002a4c;
  return;
}





void __cdecl FUN_10002a70(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030480 != (void *)0x0) {
    (*DAT_10030480)(param_1,param_2);
  }
  uStack_8 = 0x10002ab8;
  return;
}





void __cdecl FUN_10002ad0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030484 != (void *)0x0) {
    (*DAT_10030484)(param_1,param_2);
  }
  uStack_8 = 0x10002b1c;
  return;
}





void __cdecl FUN_10002b40(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030510 != (void *)0x0) {
    (*DAT_10030510)(param_1,(int)param_2);
  }
  uStack_8 = 0x10002b88;
  return;
}





void FUN_10002ba0(void)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
FUN_100030d0(0xff);
  if (cVar1 != '\0') {
    FUN_10002fb0(0,100);
    FUN_10003130(0xff,0);
  }
  FUN_10003010(0);
  if (cVar1 != '\0') {
    for (DAT_100303f4 = 0; DAT_100303f4 < 5; DAT_100303f4 = DAT_100303f4 + 1) {
      FUN_10002e70(((unsigned char *)&DAT_10030438) + DAT_100303f4 * 8,0);
      if ((0 < iVar2) &&
         (FUN_10002e70(((unsigned char *)&DAT_10030438) + DAT_100303f4 * 8,1), iVar2 == 0)) {
        ((long long *)&DAT_100303f8)[DAT_100303f4] = 1;
        ((long long *)&DAT_1003040c)[DAT_100303f4] = 0;
      }
      FUN_10002e70(((unsigned char *)&DAT_10030438) + DAT_100303f4 * 8,1);
      if ((0 < iVar2) &&
         (FUN_10002e70(((unsigned char *)&DAT_10030438) + DAT_100303f4 * 8,0), iVar2 == 0)) {
        ((long long *)&DAT_100303f8)[DAT_100303f4] = 0;
        ((long long *)&DAT_1003040c)[DAT_100303f4] = 1;
      }
    }
    DAT_10030460 = 0;
    DAT_10030464 = 0;
    for (DAT_100303f4 = 0; DAT_100303f4 < 5; DAT_100303f4 = DAT_100303f4 + 1) {
      DAT_10030460 = DAT_10030460 + ((long long *)&DAT_100303f8)[DAT_100303f4];
      DAT_10030464 = DAT_10030464 + ((long long *)&DAT_1003040c)[DAT_100303f4];
    }
    if ((DAT_10030460 < 3) && (2 < DAT_10030464)) {
      FUN_100026b0();
    }
    FUN_10003070();
    if (50000 < iVar2) {
      FUN_100025a0();
    }
    FUN_10002ee0(&DAT_10030420);
    if (iVar2 == 0) {
      FUN_100026b0();
    }
    FUN_10002ee0(&DAT_10030428);
    if (iVar2 == 0) {
      FUN_100025a0();
    }
    FUN_10002f40(&DAT_10030430,0);
    if (iVar2 == 0) {
      FUN_10002700();
    }
    FUN_10002f40(&DAT_10030430,1);
    if (iVar2 == 0) {
      FUN_10002830();
    }
  }
  uStack_8 = 0x10002dd9;
  return;
}





void __cdecl FUN_10002e70(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030498 != (void *)0x0) {
    (*DAT_10030498)(param_1,(int)param_2);
  }
  uStack_8 = 0x10002ebc;
  return;
}





void __cdecl FUN_10002ee0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100304a4 != (void *)0x0) {
    (*DAT_100304a4)(param_1);
  }
  uStack_8 = 0x10002f28;
  return;
}





void __cdecl FUN_10002f40(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_100304a8 != (void *)0x0) {
    (*DAT_100304a8)(param_1,(int)param_2);
  }
  uStack_8 = 0x10002f8c;
  return;
}





void __cdecl FUN_10002fb0(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003055c != (void *)0x0) {
    (*DAT_1003055c)(param_1,param_2);
  }
  uStack_8 = 0x10002ff8;
  return;
}





void __cdecl FUN_10003010(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030560 != (void *)0x0) {
    (*DAT_10030560)((int)param_1);
  }
  uStack_8 = 0x10003058;
  return;
}





void FUN_10003070(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030574 != (void *)0x0) {
    (*DAT_10030574)();
  }
  uStack_8 = 0x100030b1;
  return;
}





void __cdecl FUN_100030d0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_10030578 != (void *)0x0) {
    (*DAT_10030578)((int)param_1);
  }
  uStack_8 = 0x10003118;
  return;
}





void __cdecl FUN_10003130(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1003057c != (void *)0x0) {
    (*DAT_1003057c)(param_1,(int)param_2);
  }
  uStack_8 = 0x10003178;
  return;
}





int __cdecl FUN_100031f0(char *param_1,byte *param_2)

{
  void *pcVar1;
  int iVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_10003680(2,0x1002b974,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_10003680(2,0x1002b974,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10003d20(0,(int *)&local_24);
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
if (DAT_1003048c != (void *)0x0) {
    (*DAT_1003048c)(param_1,param_2);
  }
  uStack_8 = 0x10001238;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_100304b8)((int)param_1);
  uStack_8 = 0x1000128b;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
