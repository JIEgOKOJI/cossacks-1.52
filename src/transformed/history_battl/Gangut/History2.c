#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
int (*DAT_1002f3f0)() = 0;
int DAT_1002f3f4 = 0;
long long DAT_1002f3f8 = 0;
long long DAT_1002f40c = 0;
long long DAT_1002f420 = 0;
long long DAT_1002f428 = 0;
int DAT_1002f464 = 0;
int (*DAT_1002f468)() = 0;
int (*DAT_1002f484)() = 0;
int (*DAT_1002f49c)() = 0;
int (*DAT_1002f4b0)() = 0;
int (*DAT_1002f4cc)() = 0;
int (*DAT_1002f4d0)() = 0;
int (*DAT_1002f4d8)() = 0;
int (*DAT_1002f4dc)() = 0;
int (*DAT_1002f4e0)() = 0;
int (*DAT_1002f4e4)() = 0;
int (*DAT_1002f4e8)() = 0;
int (*DAT_1002f500)() = 0;
int (*DAT_1002f508)() = 0;
int (*DAT_1002f518)() = 0;
int (*DAT_1002f530)() = 0;
int (*DAT_1002f534)() = 0;
int (*DAT_1002f538)() = 0;
int (*DAT_1002f56c)() = 0;
int (*DAT_1002f570)() = 0;
int (*DAT_1002f574)() = 0;
int (*DAT_1002f57c)() = 0;
int (*DAT_1002f590)() = 0;
int (*DAT_1002f594)() = 0;
int (*DAT_1002f598)() = 0;
int (*DAT_1002f59c)() = 0;
int (*DAT_1002f5a0)() = 0;
int (*DAT_1002f5a4)() = 0;
int (*DAT_1002f5a8)() = 0;
int (*DAT_1002f5ac)() = 0;
int (*DAT_1002f5b0)() = 0;
int (*DAT_1002f5b4)() = 0;
int (*DAT_1002f5b8)() = 0;

/* Stubs for missing internal functions */
int FUN_10002e00() { return 0; }
int FUN_100034a0() { return 0; }


/* Forward declarations */
void FUN_10001170(int param_1,int param_2);
void FUN_100011d0(char param_1);
void FUN_10001220(char param_1);
void FUN_10001270(char param_1);
void FUN_100012c0(char param_1);
void FUN_10001310(char param_1);
void FUN_10001360(char param_1);
void FUN_100013b0(char param_1);
void FUN_10001400(int param_1,int param_2,char param_3);
void FUN_10001460(int param_1,int param_2,char param_3);
void FUN_100014c0(char param_1,int param_2);
void FUN_10001520(char param_1);
void FUN_10001580(char param_1,int param_2);
void FUN_100015e0(int param_1);
void FUN_10001630(char param_1);
void FUN_10001690(int param_1,int param_2);
void FUN_100016f0(int param_1,int param_2,char param_3);
void FUN_10001750(char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
void FUN_100017c0(char param_1);
void FUN_10001810(char param_1,int param_2,int param_3);
void FUN_10001870(int param_1,int param_2,char param_3,int param_4,
            char param_5,int param_6);
void FUN_100018e0(char param_1);
void FUN_10001930(void);
void FUN_10001980(char param_1,int param_2,int param_3);
int FUN_100019e0(void);
void FUN_10001a30(LPCSTR param_1);
void FUN_10002320(int param_1,int param_2);
int FUN_10002370(char param_1);
int FUN_10002400(void);
void FUN_10002520(void);
void FUN_10002570(void);
void FUN_100025d0(void);
void FUN_10002630(void);
void FUN_10002770(int param_1,int param_2);
void FUN_100027e0(char param_1,char param_2);
void FUN_10002830(char param_1,char param_2);
int FUN_100028b0(int param_1);
int FUN_10002970(char *param_1,int param_2);

void OnInit();
void ProcessScenary();


void __cdecl FUN_10001170(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f484 != (void *)0x0) {
    (*DAT_1002f484)(param_1,param_2);
  }
  uStack_8 = 0x100011b8;
  return;
}





void __cdecl FUN_100011d0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f4b0)((intptr_t)param_1);
  uStack_8 = 0x1000120b;
  return;
}





void __cdecl FUN_10001220(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f4cc)((intptr_t)param_1);
  uStack_8 = 0x1000125b;
  return;
}





void __cdecl FUN_10001270(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f4d0)((intptr_t)param_1);
  uStack_8 = 0x100012ab;
  return;
}





void __cdecl FUN_100012c0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100012c0(param_1);
  uStack_8 = 0x100012f1;
  return;
}





void __cdecl FUN_10001310(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f4d8)((intptr_t)param_1);
  uStack_8 = 0x1000134b;
  return;
}





void __cdecl FUN_10001360(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f4dc)((intptr_t)param_1);
  uStack_8 = 0x1000139b;
  return;
}





void __cdecl FUN_100013b0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f4e0)((intptr_t)param_1);
  uStack_8 = 0x100013eb;
  return;
}





void __cdecl FUN_10001400(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f4e4)(param_1,param_2,(intptr_t)param_3);
  uStack_8 = 0x10001443;
  return;
}





void __cdecl FUN_10001460(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f4e8)(param_1,param_2,(intptr_t)param_3);
  uStack_8 = 0x100014a3;
  return;
}





void __cdecl FUN_100014c0(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f500 != (void *)0x0) {
    (*DAT_1002f500)(param_1,param_2);
  }
  uStack_8 = 0x10001508;
  return;
}





void __cdecl FUN_10001520(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f518 != (void *)0x0) {
    (*DAT_1002f518)((intptr_t)param_1);
  }
  uStack_8 = 0x10001564;
  return;
}





void __cdecl FUN_10001580(char param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f3f0)(param_1,param_2);
  uStack_8 = 0x100015bf;
  return;
}





void __cdecl FUN_100015e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f57c)(param_1);
  uStack_8 = 0x1000161b;
  return;
}





void __cdecl FUN_10001630(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f590 != (void *)0x0) {
    (*DAT_1002f590)((intptr_t)param_1);
  }
  uStack_8 = 0x10001674;
  return;
}





void __cdecl FUN_10001690(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f594)(param_1,param_2);
  uStack_8 = 0x100016cf;
  return;
}





void __cdecl FUN_100016f0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f598)(param_1,param_2,(intptr_t)param_3);
  uStack_8 = 0x10001733;
  return;
}





void __cdecl
FUN_10001750(char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f59c)(param_1,param_2,param_3,param_4,param_5,param_6);
  uStack_8 = 0x1000179f;
  return;
}





void __cdecl FUN_100017c0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f5a0)((intptr_t)param_1);
  uStack_8 = 0x100017fb;
  return;
}





void __cdecl FUN_10001810(char param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f5a4)(param_1,param_2,param_3);
  uStack_8 = 0x10001853;
  return;
}





void __cdecl
FUN_10001870(int param_1,int param_2,char param_3,int param_4,
            char param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f5a8)(param_1,param_2,param_3,param_4,param_5,param_6);
  uStack_8 = 0x100018bf;
  return;
}





void __cdecl FUN_100018e0(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f5ac)((intptr_t)param_1);
  uStack_8 = 0x1000191b;
  return;
}





void FUN_10001930(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f5b0)();
  uStack_8 = 0x10001964;
  return;
}





void __cdecl FUN_10001980(char param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f5b4)(param_1,param_2,param_3);
  uStack_8 = 0x100019c3;
  return;
}





int FUN_100019e0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
(*DAT_1002f5b8)();
  uStack_8 = 0x10001a14;
  return 0;
}





void __cdecl FUN_10001a30(LPCSTR param_1)

{
  int iVar1;
  int *puVar2;
  CHAR local_108 [256];
  int local_8;
local_8 = GetProcAddress(DAT_1002f464,param_1);
  if (local_8 == 0) {
    FUN_10002970(local_108,0x1002a030);
    MessageBoxA((HWND)0x0,local_108,"DLL init error.",0);
  }
  return;
}





void __cdecl FUN_10002320(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f538 != (void *)0x0) {
    (*DAT_1002f538)(param_1,param_2);
  }
  uStack_8 = 0x10002368;
  return;
}





int __cdecl FUN_10002370(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f570 != (void *)0x0) {
    (*DAT_1002f570)((intptr_t)param_1);
  }
  uStack_8 = 0x100023b8;
  return 0;
}





int FUN_10002400(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f56c != (void *)0x0) {
    (*DAT_1002f56c)();
  }
  uStack_8 = 0x10002441;
  return 0;
}





void FUN_10002520(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = FUN_100019e0();
  if (iVar1 == 0) {
    FUN_10002570();
  }
  else {
    FUN_100025d0();
  }
  uStack_8 = 0x1000255a;
  return;
}





void FUN_10002570(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f530 != (void *)0x0) {
    (*DAT_1002f530)();
  }
  uStack_8 = 0x100025ad;
  return;
}





void FUN_100025d0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f534 != (void *)0x0) {
    (*DAT_1002f534)();
  }
  uStack_8 = 0x1000260d;
  return;
}





void FUN_10002630(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = FUN_100019e0();
  if (iVar1 == 1) {
    FUN_10002570();
  }
  else {
    FUN_100025d0();
  }
  uStack_8 = 0x1000266b;
  return;
}





void __cdecl FUN_10002770(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f468 != (void *)0x0) {
    (*DAT_1002f468)(param_1,param_2);
  }
  uStack_8 = 0x100027bc;
  return;
}





void __cdecl FUN_100027e0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f508 != (void *)0x0) {
    (*DAT_1002f508)(param_1,(intptr_t)param_2);
  }
  uStack_8 = 0x10002828;
  return;
}





void __cdecl FUN_10002830(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f574 != (void *)0x0) {
    (*DAT_1002f574)(param_1,(intptr_t)param_2);
  }
  uStack_8 = 0x10002878;
  return;
}





int __cdecl FUN_100028b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (DAT_1002f49c != (void *)0x0) {
    (*DAT_1002f49c)(param_1);
  }
  uStack_8 = 0x100028f8;
  return 0;
}





int __cdecl FUN_10002970(char *param_1,int param_2)

{
  void *pcVar1;
  int iVar2;
  int uVar3;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_10002e00(2,0x1002a92c,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  if ((param_2 == 0) &&
     (iVar2 = FUN_10002e00(2,0x1002a92c,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100034a0(0,(int *)&local_24);
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
  int local_44 [15];
  int uStack_8;
FUN_10002770(&DAT_1002f420,"Group1");
  FUN_10002770(&DAT_1002f428,"Group2");
  FUN_100027e0(0,1);
  FUN_100027e0(1,2);
  FUN_100027e0(3,7);
  for (DAT_1002f3f4 = 0; DAT_1002f3f4 < 5; DAT_1002f3f4 = DAT_1002f3f4 + 1) {
    ((long long *)&DAT_1002f3f8)[DAT_1002f3f4] = 0;
    ((long long *)&DAT_1002f40c)[DAT_1002f3f4] = 0;
  }
  uStack_8 = 0x10002733;
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
cVar1 = FUN_10002370(10);
  if (cVar1 != '\0') {
    iVar2 = FUN_10002400();
    if (38000 < iVar2) {
      FUN_10002830(10,0);
      FUN_10002320("TEXT7",100);
    }
  }
  iVar2 = FUN_10002400();
  if (40000 < iVar2) {
    FUN_10002630();
  }
  iVar2 = FUN_100028b0(&DAT_1002f420);
  if (iVar2 == 0) {
    FUN_10002630();
  }
  iVar2 = FUN_100028b0(&DAT_1002f428);
  if (iVar2 == 0) {
    FUN_10002520();
  }
  uStack_8 = 0x100024ec;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
