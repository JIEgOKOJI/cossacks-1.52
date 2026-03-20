#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_10003f30 = 0;
long long DAT_10004b31 = 0;
long long DAT_1000e168 = 0;
int DAT_1000e19c = -1;
long long DAT_1000e1c8 = 0;
long long DAT_1000e1d8 = 0;
long long DAT_1000e210 = 0;
long long DAT_1000ea54 = 0;
long long DAT_1001020c = 0;
long long DAT_10010244 = 0;
long long DAT_10010318 = 0;
char DAT_100104a0[] = "OR";
char DAT_100104a4[] = "AND";
long long DAT_10010540 = 0;
long long DAT_10010544 = 0;
char DAT_1001054c[] = "#END";
int DAT_100105f4 = 0;
int DAT_100105f8 = 0;
int DAT_100105fc = 0;
int DAT_10010b18 = 268503842;
int DAT_10010d24 = 1;
long long DAT_100132c0 = 0;
int DAT_100132c8 = 0;
long long DAT_100132cc = 0;
int DAT_100132d4 = 0;
long long DAT_100132d8 = 0;
int DAT_100132e0 = 0;
int DAT_100132e4 = 0;
int *DAT_100132e8 = 0;
long long DAT_100132ec = 0;
long long DAT_10013300 = 0;
long long DAT_1002ca20 = 0;
int DAT_1002db4c = 0;
int DAT_1002db50 = 0;

/* Stubs for missing internal functions */
int FUN_100012f0() { return 0; }
int FUN_10001380() { return 0; }
int FUN_100015c0() { return 0; }
int FUN_10002510() { return 0; }
int FUN_100031c0() { return 0; }
int FUN_100047db() { return 0; }
int FUN_10004a07() { return 0; }
int FUN_10004d2a() { return 0; }
int FUN_10005e59() { return 0; }
int FUN_10005f5e() { return 0; }
int FUN_10005f9b() { return 0; }
int FUN_1000608c() { return 0; }
int FUN_100060b0() { return 0; }
int FUN_100064d7() { return 0; }
int FUN_100064e0() { return 0; }
int FUN_10006503() { return 0; }
int FUN_10006832() { return 0; }
int FUN_10006b3c() { return 0; }
int FUN_10006b9d() { return 0; }
int FUN_10006c88() { return 0; }
int FUN_10006ce9() { return 0; }
int FUN_10006e40() { return 0; }
int FUN_10006e92() { return 0; }
int FUN_1000701d() { return 0; }
int FUN_10007126() { return 0; }
int FUN_10007202() { return 0; }
int FUN_100074b3() { return 0; }
int FUN_100076d5() { return 0; }
int FUN_100077ad() { return 0; }
int FUN_1000791d() { return 0; }
int FUN_1000842c() { return 0; }
int FUN_100097ff() { return 0; }
int FUN_1000e190() { return 0; }


/* Forward declarations */
void FUN_10001010(void);
void FUN_10001020(void);
void FUN_10001050(void);
void FUN_10001060(void);
int FUN_10001340(unsigned int *param_1,int param_2);
void  FUN_100014a0(int *param_1);
void  FUN_10001960(int param_1);
BOOL  FUN_100019f0(int param_1);
void 
FUN_10001bb0(void *this_ptr,int param_1,char *param_2,int param_3,int param_4,
            int param_5);
byte  FUN_10002750(int param_1);
int  FUN_100027c0(int param_1);
void  FUN_10002810(void *param_1);
int  FUN_10002960(void *this_ptr,byte *param_1);
void  FUN_100029d0(void *this_ptr,int param_1);
void  FUN_10002a40(void *this_ptr,int param_1);
void  FUN_10002ab0(int param_1);
void  FUN_10002b10(void *this_ptr,int param_1);
void  FUN_10002b80(void *this_ptr,int param_1);
byte * FUN_10002bf0(int param_1,byte *param_2);
void  FUN_100030c0(int param_1);
void  FUN_10003100(int param_1);
int  FUN_10003140(void *this_ptr,char *param_1);
char *  FUN_100036d0(void *this_ptr,char *param_1);
void  FUN_100037f0(int param_1);
int *  FUN_10003830(int *param_1);
void *  FUN_100038d0(void *this_ptr,void *param_1,unsigned int param_2,unsigned int param_3);
void  FUN_10003ad0(void *this_ptr,char param_1);
void *  FUN_10003b20(void *this_ptr,int *param_1,unsigned int param_2);
void  FUN_10003bc0(void *this_ptr,int param_1);
int  FUN_10003be0(void *this_ptr,unsigned int param_1,char param_2);
int FUN_10003d00(void);
void FUN_10003d10(unsigned int param_1);
void FUN_10003d90(void);
void  FUN_10003e20(void *param_1);
int FUN_10003f40(byte *param_1,char *param_2);
int *  FUN_10004120(void *this_ptr,char *param_1,size_t param_2);
void  FUN_10004160(int *param_1);
int  FUN_10004170(void *this_ptr,char *param_1);
void  FUN_10004230(void *this_ptr,char *param_1,int *param_2,int *param_3);
int  FUN_10004320(void *this_ptr,void *param_1);
void *  FUN_10004590(void *this_ptr,unsigned int param_1,unsigned int param_2);
unsigned int  FUN_100046b0(void *this_ptr,unsigned int param_1,unsigned int param_2,byte *param_3,unsigned int param_4);
void  FUN_10004720(void *param_1);
void FUN_100047d0(int *param_1);
int * FUN_10004835(void);
void FUN_100048c3(void);
int *  FUN_10004900(void *this_ptr,byte param_1);
int * FUN_1000491c(void);
void FUN_10004979(void);
int *  FUN_100049ef(int *param_1);
void FUN_10004a61(void);
int *  FUN_10004ad7(int *param_1);
void FUN_10004b19(void);
void FUN_10004b25(void);
int FUN_10004b32(int param_1);
int FUN_10004bb0(int param_1);
void FUN_10004bf1(int param_1,int param_2,int param_3,int *param_4);
void FUN_10004c59(void);
void FUN_10004c71(int param_1,int param_2,int param_3,int *param_4);
int FUN_10004ccf(int *param_1);
void  FUN_10004ce5(int *param_1);
int *  FUN_10004d0e(void *this_ptr,byte param_1);
int FUN_10004db0(byte *param_1,byte *param_2);
unsigned int FUN_10004dee(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
unsigned int FUN_10004e1d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
int FUN_10004f05(char *param_1);
int FUN_10004f27(char *param_1);
int FUN_10005088(int *param_1,int param_2,DWORD param_3);
int FUN_100050b4(int *param_1,int param_2,DWORD param_3);
int * FUN_10005141(LPCSTR param_1,char *param_2,unsigned int param_3);
void FUN_10005172(LPCSTR param_1,char *param_2);
int FUN_100053f0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10005470(void);
void FUN_10005576(void);
int FUN_100055c8(char *param_1,byte *param_2);
void FUN_1000572e(char *param_1,byte *param_2);
int FUN_100057b0(byte *param_1,byte *param_2);
unsigned int  FUN_100057ee(void *this_ptr,int param_1);
unsigned int  FUN_1000581c(void *this_ptr,int param_1);
unsigned int  FUN_10005844(void *this_ptr,int param_1);
int * FUN_10005870(int *param_1,int *param_2,unsigned int param_3);
void FUN_10005ba5(int param_1,int param_2,int param_3,int *param_4);
void FUN_10005c0f(void);
unsigned int * FUN_10005c30(unsigned int *param_1,char *param_2);

void OnInit();
void ProcessScenary();


void FUN_10001010(void)

{
  FUN_100030c0(0x10013300);
  return;
}





void FUN_10001020(void)

{
  return;
}





void FUN_10001050(void)

{
  FUN_10003830(&DAT_100132ec);
  return;
}





void FUN_10001060(void)

{
  return;
}





int __cdecl FUN_10001340(unsigned int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x23523066;
  if (param_2 != 4 && -1 < param_2 + -4) {
    iVar2 = (param_2 - 5U >> 2) + 1;
    do {
      iVar1 = iVar1 + *param_1;
      *param_1 = *param_1 ^ 0x61352443;
      iVar2 = iVar2 + -1;
      param_1 = param_1 + 1;
    } while (iVar2 != 0);
  }
  return iVar1;
}





void  FUN_100014a0(int *param_1)

{
  int *puVar1;
  
  FUN_100047d0((int *)*param_1);
  FUN_100047d0((int *)param_1[3]);
  puVar1 = (int *)param_1[0x1200a];
  if (puVar1 != (int *)0x0) {
    FUN_10004160(puVar1);
    FUN_100047d0((int *)puVar1);
  }
  return;
}





void  FUN_10001960(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(unsigned int *)(param_1 + 0x4802c);
  if (uVar2 < *(unsigned int *)(param_1 + 0x48030)) {
    iVar4 = 0;
    while( 1 ) {
      while( 1 ) {
        while( 1 ) {
          iVar3 = FUN_100057b0((byte *)(iVar4 + uVar2),&DAT_10010318);
          iVar4 = iVar4 + iVar3;
          cVar1 = *(char *)(iVar4 + uVar2);
          if (cVar1 != '\r') break;
          iVar4 = iVar4 + 1;
          *(int *)(param_1 + 0x48024) = *(int *)(param_1 + 0x48024) + 1;
        }
        if (cVar1 != '\n') break;
        iVar4 = iVar4 + 1;
      }
      if (cVar1 != '%') break;
      iVar3 = FUN_10004db0((byte *)(iVar4 + uVar2),&DAT_1001020c);
      iVar4 = iVar4 + 1 + iVar3;
      *(int *)(param_1 + 0x48024) = *(int *)(param_1 + 0x48024) + 1;
    }
    *(int *)(param_1 + 0x4802c) = *(int *)(param_1 + 0x4802c) + iVar4;
  }
  return;
}





BOOL  FUN_100019f0(int param_1)

{
  char cVar1;
  char *_Source;
  char *pcVar2;
  unsigned int uVar3;
  int iVar4;
  BOOL bVar5;
  
  _Source = *(char **)(param_1 + 0x4802c);
  cVar1 = *_Source;
  while (cVar1 != ' ') {
    cVar1 = **(char **)(param_1 + 0x4802c);
    if ((((cVar1 == '\n') || (cVar1 == '\t')) || (cVar1 == '\r')) ||
       ((cVar1 == ',' || (cVar1 == ']')))) break;
    if (cVar1 == '(') {
      iVar4 = 0;
      *(char **)(param_1 + 0x4802c) = *(char **)(param_1 + 0x4802c) + 1;
LAB_10001a47:
      if (**(char **)(param_1 + 0x4802c) == ')') {
        if (iVar4 == 0) goto LAB_10001af2;
        iVar4 = iVar4 + -1;
        *(char **)(param_1 + 0x4802c) = *(char **)(param_1 + 0x4802c) + 1;
      }
      if (**(char **)(param_1 + 0x4802c) == '(') {
        iVar4 = iVar4 + 1;
        *(char **)(param_1 + 0x4802c) = *(char **)(param_1 + 0x4802c) + 1;
      }
      if (**(char **)(param_1 + 0x4802c) == '\"') {
        pcVar2 = *(char **)(param_1 + 0x4802c) + 1;
        *(char **)(param_1 + 0x4802c) = pcVar2;
        cVar1 = *pcVar2;
        while (cVar1 != '\"') {
          if (*(char **)(param_1 + 0x48030) < pcVar2) {
            FUN_100012f0("Syntax error in script. Action block ",*(int *)(param_1 + 8));
          }
          pcVar2 = (char *)(*(int *)(param_1 + 0x4802c) + 1);
          *(char **)(param_1 + 0x4802c) = pcVar2;
          cVar1 = *pcVar2;
        }
      }
      uVar3 = *(int *)(param_1 + 0x4802c) + 1;
      *(unsigned int *)(param_1 + 0x4802c) = uVar3;
      if (*(unsigned int *)(param_1 + 0x48030) < uVar3) {
        FUN_100012f0("Syntax error in script. Action block ",*(int *)(param_1 + 8));
      }
      goto LAB_10001a47;
    }
LAB_10001af2:
    if (**(char **)(param_1 + 0x4802c) == '\"') {
      pcVar2 = *(char **)(param_1 + 0x4802c) + 1;
      *(char **)(param_1 + 0x4802c) = pcVar2;
      cVar1 = *pcVar2;
      while (cVar1 != '\"') {
        if (*(char **)(param_1 + 0x48030) < pcVar2) {
          FUN_100012f0("Syntax error in script. Action block ",*(int *)(param_1 + 8));
        }
        pcVar2 = (char *)(*(int *)(param_1 + 0x4802c) + 1);
        *(char **)(param_1 + 0x4802c) = pcVar2;
        cVar1 = *pcVar2;
      }
    }
    pcVar2 = (char *)(*(int *)(param_1 + 0x4802c) + 1);
    *(char **)(param_1 + 0x4802c) = pcVar2;
    cVar1 = *pcVar2;
  }
  strncpy((char *)(param_1 + 0x48034),_Source,*(int *)(param_1 + 0x4802c) - (int)_Source);
  *(char *)((param_1 - (int)_Source) + 0x48034 + *(int *)(param_1 + 0x4802c)) = 0;
  FUN_10001960(param_1);
  bVar5 = **(char **)(param_1 + 0x4802c) == ',';
  if (bVar5) {
    *(char **)(param_1 + 0x4802c) = *(char **)(param_1 + 0x4802c) + 1;
    FUN_10001960(param_1);
  }
  return bVar5;
}





void 
FUN_10001bb0(void *this_ptr,int param_1,char *param_2,int param_3,int param_4,
            int param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = "";
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
  }
  pcVar2 = (char *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x48020) * 0x48 + 0x20);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x48020) * 0x48 + 0x40) = 5;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x48020) * 0x48 + 0x44) = param_5;
  *(int *)((intptr_t)this_ptr + 0x18) = *(int *)((intptr_t)this_ptr + 0x18) + 1;
  *(int *)((intptr_t)this_ptr + 0x48020) = *(int *)((intptr_t)this_ptr + 0x48020) + 1;
  if (param_2 != (char *)0x0) {
    cVar1 = param_2[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      param_2[-1] = cVar1 + -1;
      return;
    }
    FUN_100047d0(param_2 + -1);
  }
  return;
}





byte  FUN_10002750(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x4802c);
  cVar1 = *pcVar2;
  if ((cVar1 == '<') && (pcVar2[1] == '=')) {
    return 5;
  }
  if ((cVar1 == '>') && (pcVar2[1] == '=')) {
    return 6;
  }
  if ((cVar1 == '!') && (pcVar2[1] == '=')) {
    return 7;
  }
  if ((cVar1 == '=') && (pcVar2[1] == '=')) {
    return 8;
  }
  if (cVar1 == '<') {
    return 9;
  }
  return (cVar1 != '>') - 1U & 10;
}





int  FUN_100027c0(int param_1)

{
  int iVar1;
  
  iVar1 = strncmp(*(char **)(param_1 + 0x4802c),DAT_100104a4,3);
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = strncmp(*(char **)(param_1 + 0x4802c),DAT_100104a0,2);
  return (-(unsigned int)(iVar1 != 0) & -12) + 0xc;
}





void  FUN_10002810(void *param_1)

{
  char cVar1;
  byte bVar2;
  unsigned int uVar3;
  int extraout_var = 0;
  int iVar4;
  void *this_ptr;
  
  FUN_10001960((intptr_t)param_1);
  uVar3 = FUN_100057ee((void *)(int)**(char **)((intptr_t)param_1 + 0x4802c),
                       (int)**(char **)((intptr_t)param_1 + 0x4802c));
  if (((uVar3 == 0) && (**(char **)((intptr_t)param_1 + 0x4802c) != '_')) &&
     (uVar3 = FUN_1000581c(this_ptr,(int)**(char **)((intptr_t)param_1 + 0x4802c)), uVar3 == 0)) {
    cVar1 = **(char **)((intptr_t)param_1 + 0x4802c);
    if (cVar1 == '!') goto LAB_10002898;
    if (cVar1 != '(') {
      return;
    }
    *(char **)((intptr_t)param_1 + 0x4802c) = *(char **)((intptr_t)param_1 + 0x4802c) + 1;
    FUN_10001960((intptr_t)param_1);
    FUN_10002810(param_1);
    FUN_10001960((intptr_t)param_1);
    if (**(char **)((intptr_t)param_1 + 0x4802c) == ')') {
      *(char **)((intptr_t)param_1 + 0x4802c) = *(char **)((intptr_t)param_1 + 0x4802c) + 1;
    }
  }
  else {
LAB_10002898:
    if (**(char **)((intptr_t)param_1 + 0x4802c) == '!') {
      *(char **)((intptr_t)param_1 + 0x4802c) = *(char **)((intptr_t)param_1 + 0x4802c) + 1;
      FUN_10001960((intptr_t)param_1);
      if (**(char **)((intptr_t)param_1 + 0x4802c) == '(') {
        FUN_10002810(param_1);
        iVar4 = 0xd;
      }
      else {
        FUN_10002510(param_1);
        iVar4 = 0xd;
      }
    }
    else {
      FUN_10002510(param_1);
      FUN_10001960((intptr_t)param_1);
      bVar2 = FUN_10002750((intptr_t)param_1);
      iVar4 = (int)bVar2;
      if (iVar4 == 0) goto LAB_1000292a;
      while( 1 ) {
        cVar1 = **(char **)((intptr_t)param_1 + 0x4802c);
        if (((cVar1 != '!') && (cVar1 != '=')) && ((cVar1 != '<' && (cVar1 != '>')))) break;
        *(char **)((intptr_t)param_1 + 0x4802c) = *(char **)((intptr_t)param_1 + 0x4802c) + 1;
      }
      FUN_10001960((intptr_t)param_1);
      FUN_10002510(param_1);
    }
    FUN_100029d0(param_1,iVar4);
  }
  FUN_10001960((intptr_t)param_1);
LAB_1000292a:
  iVar4 = FUN_100027c0((intptr_t)param_1);
  if (iVar4 != 0) {
    *(int *)((intptr_t)param_1 + 0x4802c) = *(int *)((intptr_t)param_1 + 0x4802c) + 3;
    FUN_10001960((intptr_t)param_1);
    FUN_10002810(param_1);
    FUN_100029d0(param_1,iVar4);
  }
  return;
}





int  FUN_10002960(void *this_ptr,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  BOOL bVar7;
  
  iVar4 = 0;
  if (0 < *(int *)((intptr_t)this_ptr + 0x48020)) {
    pbVar5 = (byte *)((intptr_t)this_ptr + 0x20);
    pbVar2 = param_1;
    pbVar6 = pbVar5;
LAB_10002979:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_1000299d;
          pbVar5 = pbVar5 + 2;
          pbVar2 = pbVar2 + 2;
          if (bVar1 != 0) goto LAB_10002979;
        }
        iVar3 = 0;
      }
      else {
LAB_1000299d:
        iVar3 = (1 - (unsigned int)bVar7) - (unsigned int)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      pbVar5 = pbVar6 + 0x48;
      pbVar2 = param_1;
      pbVar6 = pbVar5;
    } while (iVar4 < *(int *)((intptr_t)this_ptr + 0x48020));
  }
  return -1;
}





void  FUN_100029d0(void *this_ptr,int param_1)

{
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8004 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = param_1
  ;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8008 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8028 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8000 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 4;
  *(int *)((intptr_t)this_ptr + 0x1c) = *(int *)((intptr_t)this_ptr + 0x1c) + 1;
  return;
}





void  FUN_10002a40(void *this_ptr,int param_1)

{
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8004 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = param_1
  ;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8008 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8028 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8000 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 3;
  *(int *)((intptr_t)this_ptr + 0x1c) = *(int *)((intptr_t)this_ptr + 0x1c) + 1;
  return;
}





void  FUN_10002ab0(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x14) + 0x8004 + *(int *)(param_1 + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 0x8008 + *(int *)(param_1 + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 0x8028 + *(int *)(param_1 + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 0x8000 + *(int *)(param_1 + 0x1c) * 0x2c) = 8;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}





void  FUN_10002b10(void *this_ptr,int param_1)

{
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8004 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = param_1
  ;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8008 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8028 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8000 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 9;
  *(int *)((intptr_t)this_ptr + 0x1c) = *(int *)((intptr_t)this_ptr + 0x1c) + 1;
  return;
}





void  FUN_10002b80(void *this_ptr,int param_1)

{
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8004 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = param_1
  ;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8008 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8028 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 0;
  *(int *)(*(int *)((intptr_t)this_ptr + 0x14) + 0x8000 + *(int *)((intptr_t)this_ptr + 0x1c) * 0x2c) = 5;
  *(int *)((intptr_t)this_ptr + 0x1c) = *(int *)((intptr_t)this_ptr + 0x1c) + 1;
  return;
}





byte * __cdecl FUN_10002bf0(int param_1,byte *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    DAT_100132e4 = param_1;
    DAT_100132c8 = (void *)0x0;
    DAT_100132d4 = '\0';
  }
  if (DAT_100132d4 != '\0') {
    *(char *)(DAT_100132e4 + (int)DAT_100132c8) = DAT_100132d4;
    DAT_100132c8 = (void *)((int)DAT_100132c8 + 1);
  }
  DAT_100132e8 = (byte *)(DAT_100132e4 + (int)DAT_100132c8);
  iVar1 = FUN_100057b0(DAT_100132e8,param_2);
  DAT_100132c8 = (void *)((int)DAT_100132c8 + iVar1);
  DAT_100132e8 = (byte *)(DAT_100132e4 + (int)DAT_100132c8);
  iVar1 = 0;
  if (*DAT_100132e8 == 0x22) {
    do {
      iVar3 = iVar1;
      iVar1 = iVar3 + 1;
    } while (DAT_100132e8[iVar3 + 1] != 0x22);
    iVar3 = iVar3 + 2;
  }
  else {
    iVar3 = FUN_10004db0(DAT_100132e8,param_2);
  }
  DAT_100132c8 = (void *)((int)DAT_100132c8 + iVar3);
  if (((*(char *)(DAT_100132e4 + (int)DAT_100132c8) == '(') &&
      (*(char *)(DAT_100132e4 + 3 + (int)DAT_100132c8) == ')')) &&
     (uVar2 = FUN_1000581c(DAT_100132c8,(int)*(char *)(DAT_100132e4 + 1 + (int)DAT_100132c8)),
     uVar2 == 0)) {
    DAT_100132c8 = (void *)((int)DAT_100132c8 + 4);
    iVar1 = FUN_10004db0((byte *)(DAT_100132e4 + (int)DAT_100132c8),param_2);
    DAT_100132c8 = (void *)((int)DAT_100132c8 + iVar1);
  }
  DAT_100132d4 = *(char *)(DAT_100132e4 + (int)DAT_100132c8);
  *(char *)(DAT_100132e4 + (int)DAT_100132c8) = 0;
  return DAT_100132e8;
}





void  FUN_100030c0(int param_1)

{
  int *puVar1;
  int *puVar2;
  int iVar3;
  
  iVar3 = 0x400;
  puVar2 = (int *)(param_1 + 0x8024);
  puVar1 = (int *)(param_1 + 0x17004);
  do {
    puVar2[-9] = 6;
    *puVar1 = -1;
    *puVar2 = puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 0xb;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(int *)(param_1 + 0x17000) = 0;
  return;
}





void  FUN_10003100(int param_1)

{
  int iVar1;
  int *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x17000)) {
    puVar2 = (int *)(param_1 + 0x13000);
    do {
      FUN_100047d0((int *)*puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x17000));
  }
  return;
}





int  FUN_10003140(void *this_ptr,char *param_1)

{
  char cVar1;
  int uVar2;
  char *pcVar3;
  unsigned int uVar4;
  
  uVar4 = -1;
  pcVar3 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  if (*param_1 == '\"') {
    pcVar3 = malloc(uVar4 - 2);
    strncpy(pcVar3,param_1 + 1,uVar4 - 3);
    pcVar3[uVar4 - 3] = '\0';
  }
  else {
    pcVar3 = malloc(uVar4);
    strncpy(pcVar3,param_1,uVar4 - 1);
    pcVar3[uVar4 - 1] = '\0';
  }
  *(char **)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x17000) * 4 + 0x13000) = pcVar3;
  uVar2 = *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x17000) * 4 + 0x13000);
  *(int *)((intptr_t)this_ptr + 0x17000) = *(int *)((intptr_t)this_ptr + 0x17000) + 1;
  return uVar2;
}







char *  FUN_100036d0(void *this_ptr,char *param_1)

{
  char uVar1;
  int iVar2;
  int uVar3;
  char *puVar4;
  int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int *puVar9;
  
  uVar1 = *param_1;
  *(int *)((intptr_t)this_ptr + 4) = 0;
  *(char *)this_ptr = uVar1;
  *(int *)((intptr_t)this_ptr + 8) = 0;
  *(int *)((intptr_t)this_ptr + 0xc) = 0;
  uVar7 = *(unsigned int *)(param_1 + 8);
  if (this_ptr == param_1) {
    if (uVar7 != 0) {
      FUN_10004a07();
    }
    FUN_10003e20(this_ptr);
    iVar2 = *(int *)((intptr_t)this_ptr + 8) - uVar7;
    iVar8 = -1;
    if ((iVar2 == -1) || (iVar8 = iVar2, iVar2 != 0)) {
      puVar5 = (int *)(*(int *)((intptr_t)this_ptr + 4) + uVar7);
      FUN_10005870(puVar5,(int *)((int)puVar5 + iVar8),iVar2 - iVar8);
      uVar7 = *(int *)((intptr_t)this_ptr + 8) - iVar8;
      uVar3 = FUN_10003be0(this_ptr,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_10003bc0(this_ptr,uVar7);
      }
    }
    FUN_10003e20(this_ptr);
    return this_ptr;
  }
  if (uVar7 != 0) {
    puVar4 = *(char **)(param_1 + 4);
    if (puVar4 == (char *)0x0) {
      puVar4 = &DAT_1000e168;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      *(int *)((intptr_t)this_ptr + 4) = 0;
      *(int *)((intptr_t)this_ptr + 8) = 0;
      *(int *)((intptr_t)this_ptr + 0xc) = 0;
      puVar4 = *(char **)(param_1 + 4);
      if (puVar4 == (char *)0x0) {
        puVar4 = &DAT_1000e168;
      }
      *(char **)((intptr_t)this_ptr + 4) = puVar4;
      *(int *)((intptr_t)this_ptr + 8) = *(int *)(param_1 + 8);
      *(int *)((intptr_t)this_ptr + 0xc) = *(int *)(param_1 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return this_ptr;
    }
  }
  uVar3 = FUN_10003be0(this_ptr,uVar7,'\x01');
  if ((char)uVar3 != '\0') {
    puVar5 = (int *)&DAT_1000e168;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      puVar5 = *(int **)(param_1 + 4);
    }
    puVar9 = *(int **)((intptr_t)this_ptr + 4);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar9 = *(char *)puVar5;
      puVar5 = (int *)((int)puVar5 + 1);
      puVar9 = (int *)((int)puVar9 + 1);
    }
    FUN_10003bc0(this_ptr,uVar7);
  }
  return this_ptr;
}





void  FUN_100037f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(int *)(param_1 + 4) = 0;
  *(int *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = 0;
  return;
}





int *  FUN_10003830(int *param_1)

{
  int *puVar1;
  int *puVar2;
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  puVar1 = malloc(0x1004);
  local_4 = 0;
  if (puVar1 == (int *)0x0) {
    puVar2 = (int *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x100;
  }
  *param_1 = puVar2;
  param_1[2] = 0x100;
  param_1[1] = 0;
  return param_1;
}





void *  FUN_100038d0(void *this_ptr,void *param_1,unsigned int param_2,unsigned int param_3)

{
  char cVar1;
  int iVar2;
  int uVar3;
  char *puVar4;
  unsigned int uVar5;
  int *puVar6;
  unsigned int uVar7;
  int iVar8;
  int *puVar9;
  
  if (*(unsigned int *)((intptr_t)param_1 + 8) < param_2) {
    FUN_10004a07();
  }
  uVar7 = *(unsigned int *)((intptr_t)param_1 + 8) - param_2;
  if (param_3 < uVar7) {
    uVar7 = param_3;
  }
  if (this_ptr == param_1) {
    uVar7 = uVar7 + param_2;
    if (*(unsigned int *)((intptr_t)this_ptr + 8) < uVar7) {
      FUN_10004a07();
    }
    FUN_10003e20(this_ptr);
    iVar2 = *(int *)((intptr_t)this_ptr + 8) - uVar7;
    iVar8 = -1;
    if ((iVar2 == -1) || (iVar8 = iVar2, iVar2 != 0)) {
      puVar6 = (int *)(*(int *)((intptr_t)this_ptr + 4) + uVar7);
      FUN_10005870(puVar6,(int *)((int)puVar6 + iVar8),iVar2 - iVar8);
      uVar7 = *(int *)((intptr_t)this_ptr + 8) - iVar8;
      uVar3 = FUN_10003be0(this_ptr,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        *(unsigned int *)((intptr_t)this_ptr + 8) = uVar7;
        *(char *)(uVar7 + *(int *)((intptr_t)this_ptr + 4)) = 0;
      }
    }
    FUN_10003e20(this_ptr);
    uVar7 = *(unsigned int *)((intptr_t)this_ptr + 8);
    if (uVar7 < param_2) {
      param_2 = uVar7;
    }
    if (param_2 == 0) {
      return this_ptr;
    }
    FUN_10005870(*(int **)((intptr_t)this_ptr + 4),
                 (int *)((int)*(int **)((intptr_t)this_ptr + 4) + param_2),uVar7 - param_2);
    uVar7 = *(int *)((intptr_t)this_ptr + 8) - param_2;
    uVar3 = FUN_10003be0(this_ptr,uVar7,'\0');
    if ((char)uVar3 == '\0') {
      return this_ptr;
    }
    FUN_10003bc0(this_ptr,uVar7);
    return this_ptr;
  }
  if ((uVar7 != 0) && (uVar7 == *(unsigned int *)((intptr_t)param_1 + 8))) {
    puVar4 = *(char **)((intptr_t)param_1 + 4);
    if (puVar4 == (char *)0x0) {
      puVar4 = &DAT_1000e168;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      iVar8 = *(int *)((intptr_t)this_ptr + 4);
      if (iVar8 != 0) {
        cVar1 = *(char *)(iVar8 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_100047d0((char *)(iVar8 + -1));
        }
        else {
          *(char *)(iVar8 + -1) = cVar1 + -1;
        }
      }
      *(int *)((intptr_t)this_ptr + 4) = 0;
      *(int *)((intptr_t)this_ptr + 8) = 0;
      *(int *)((intptr_t)this_ptr + 0xc) = 0;
      puVar4 = *(char **)((intptr_t)param_1 + 4);
      if (puVar4 == (char *)0x0) {
        puVar4 = &DAT_1000e168;
      }
      *(char **)((intptr_t)this_ptr + 4) = puVar4;
      *(int *)((intptr_t)this_ptr + 8) = *(int *)((intptr_t)param_1 + 8);
      *(int *)((intptr_t)this_ptr + 0xc) = *(int *)((intptr_t)param_1 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return this_ptr;
    }
  }
  uVar5 = FUN_10003d00();
  if (uVar5 < uVar7) {
    FUN_100047db();
  }
  iVar8 = *(int *)((intptr_t)this_ptr + 4);
  if (((iVar8 == 0) || (cVar1 = *(char *)(iVar8 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar7 == 0) {
      FUN_10003ad0(this_ptr,'\x01');
      return this_ptr;
    }
    if ((*(unsigned int *)((intptr_t)this_ptr + 0xc) < 0x20) && (uVar7 <= *(unsigned int *)((intptr_t)this_ptr + 0xc)))
    goto LAB_10003a9a;
    FUN_10003ad0(this_ptr,'\x01');
  }
  else if (uVar7 == 0) {
    *(char *)(iVar8 + -1) = cVar1 + -1;
    FUN_10003ad0(this_ptr,'\0');
    return this_ptr;
  }
  FUN_10003d10(uVar7);
LAB_10003a9a:
  puVar4 = *(char **)((intptr_t)param_1 + 4);
  if (puVar4 == (char *)0x0) {
    puVar4 = &DAT_1000e168;
  }
  puVar6 = (int *)(puVar4 + param_2);
  puVar9 = *(int **)((intptr_t)this_ptr + 4);
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar9 = *(char *)puVar6;
    puVar6 = (int *)((int)puVar6 + 1);
    puVar9 = (int *)((int)puVar9 + 1);
  }
  *(unsigned int *)((intptr_t)this_ptr + 8) = uVar7;
  *(char *)(uVar7 + *(int *)((intptr_t)this_ptr + 4)) = 0;
  return this_ptr;
}





void  FUN_10003ad0(void *this_ptr,char param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != '\0') && (iVar2 = *(int *)((intptr_t)this_ptr + 4), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(int *)((intptr_t)this_ptr + 4) = 0;
  *(int *)((intptr_t)this_ptr + 8) = 0;
  *(int *)((intptr_t)this_ptr + 0xc) = 0;
  return;
}





void *  FUN_10003b20(void *this_ptr,int *param_1,unsigned int param_2)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  int *puVar4;
  
  if (-3 < param_2) {
    FUN_100047db();
  }
  iVar2 = *(int *)((intptr_t)this_ptr + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_2 == 0) {
      FUN_10003ad0(this_ptr,'\x01');
      return this_ptr;
    }
    if ((*(unsigned int *)((intptr_t)this_ptr + 0xc) < 0x20) && (param_2 <= *(unsigned int *)((intptr_t)this_ptr + 0xc)))
    goto LAB_10003b91;
    FUN_10003ad0(this_ptr,'\x01');
  }
  else if (param_2 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(int *)((intptr_t)this_ptr + 4) = 0;
    *(int *)((intptr_t)this_ptr + 8) = 0;
    *(int *)((intptr_t)this_ptr + 0xc) = 0;
    return this_ptr;
  }
  FUN_10003d10(param_2);
LAB_10003b91:
  puVar4 = *(int **)((intptr_t)this_ptr + 4);
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar4 = *(char *)param_1;
    param_1 = (int *)((intptr_t)param_1 + 1);
    puVar4 = (int *)((int)puVar4 + 1);
  }
  *(unsigned int *)((intptr_t)this_ptr + 8) = param_2;
  *(char *)(param_2 + *(int *)((intptr_t)this_ptr + 4)) = 0;
  return this_ptr;
}





void  FUN_10003bc0(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 8) = param_1;
  *(char *)(param_1 + *(int *)((intptr_t)this_ptr + 4)) = 0;
  return;
}





int  FUN_10003be0(void *this_ptr,unsigned int param_1,char param_2)

{
  char cVar1;
  int uVar6;
  char *pcVar2;
  unsigned int uVar3;
  int uVar4;
  char *puVar5;
  
  if (-3 < param_1) {
    FUN_100047db();
  }
  puVar5 = *(char **)((intptr_t)this_ptr + 4);
  uVar6 = (int)((unsigned int)puVar5 >> 8);
  if (((puVar5 == (char *)0x0) || (cVar1 = puVar5[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_1 == 0) {
      if (param_2 == '\0') {
        if (puVar5 != (char *)0x0) {
          *(int *)((intptr_t)this_ptr + 8) = 0;
          *puVar5 = 0;
        }
        return (unsigned int)uVar6 << 8;
      }
      uVar3 = 0;
      if (puVar5 != (char *)0x0) {
        cVar1 = puVar5[-1];
        pcVar2 = puVar5 + -1;
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *pcVar2 = cVar1 + -1;
          *(int *)((intptr_t)this_ptr + 4) = 0;
          *(int *)((intptr_t)this_ptr + 8) = 0;
          *(int *)((intptr_t)this_ptr + 0xc) = 0;
          return (unsigned int)pcVar2 & -256;
        }
        FUN_100047d0(pcVar2);
      }
      *(int *)((intptr_t)this_ptr + 4) = 0;
      *(int *)((intptr_t)this_ptr + 8) = 0;
      *(int *)((intptr_t)this_ptr + 0xc) = 0;
      return uVar3 & -256;
    }
    if (param_2 != '\0') {
      if ((0x1f < *(unsigned int *)((intptr_t)this_ptr + 0xc)) || (*(unsigned int *)((intptr_t)this_ptr + 0xc) < param_1)) {
        if (puVar5 != (char *)0x0) {
          cVar1 = puVar5[-1];
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            puVar5[-1] = cVar1 + -1;
            *(int *)((intptr_t)this_ptr + 4) = 0;
            *(int *)((intptr_t)this_ptr + 8) = 0;
            *(int *)((intptr_t)this_ptr + 0xc) = 0;
            FUN_10003d10(param_1);
            return (int)1;
          }
          FUN_100047d0(puVar5 + -1);
        }
        *(int *)((intptr_t)this_ptr + 4) = 0;
        *(int *)((intptr_t)this_ptr + 8) = 0;
        *(int *)((intptr_t)this_ptr + 0xc) = 0;
        FUN_10003d10(param_1);
        return (int)1;
      }
      goto LAB_10003cf0;
    }
    if (param_1 <= *(unsigned int *)((intptr_t)this_ptr + 0xc)) goto LAB_10003cf0;
  }
  else if (param_1 == 0) {
    puVar5[-1] = cVar1 + -1;
    *(int *)((intptr_t)this_ptr + 4) = 0;
    *(int *)((intptr_t)this_ptr + 8) = 0;
    *(int *)((intptr_t)this_ptr + 0xc) = 0;
    return (unsigned int)uVar6 << 8;
  }
  FUN_10003d10(param_1);
LAB_10003cf0:
  return (int)1;
}





int FUN_10003d00(void)

{
  return -3;
}





void FUN_10003d10(unsigned int param_1)

{
  unsigned int uVar1;
  void *pvStack_10;
  char *puStack_c;
  int local_8;
  
  uVar1 = param_1 | 0x1f;
  if (-3 < (param_1 | 0x1f)) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 + 2;
  local_8 = 0;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  malloc(uVar1);
  FUN_10003d90();
  return;
}





void FUN_10003d90(void)

{
  char cVar1;
  int iVar2;
  char *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int unaff_EBX;
  int unaff_EBP;
  unsigned int unaff_ESI;
  int *puVar6;
  int *puVar7;
  
  uVar5 = *(unsigned int *)(unaff_EBX + 8);
  if (uVar5 != 0) {
    if (unaff_ESI < uVar5) {
      uVar5 = unaff_ESI;
    }
    puVar6 = *(int **)(unaff_EBX + 4);
    puVar7 = (int *)(*(int *)(unaff_EBP + 8) + 1);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar7 = *(char *)puVar6;
      puVar6 = (int *)((int)puVar6 + 1);
      puVar7 = (int *)((int)puVar7 + 1);
    }
    unaff_ESI = *(unsigned int *)(unaff_EBP + -0x14);
  }
  iVar2 = *(int *)(unaff_EBX + 4);
  uVar5 = *(unsigned int *)(unaff_EBX + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  puVar3 = *(char **)(unaff_EBP + 8);
  *(int *)(unaff_EBX + 8) = 0;
  *(char **)(unaff_EBX + 4) = puVar3 + 1;
  *puVar3 = 0;
  *(unsigned int *)(unaff_EBX + 0xc) = unaff_ESI;
  if (uVar5 <= unaff_ESI) {
    unaff_ESI = uVar5;
  }
  *(unsigned int *)(unaff_EBX + 8) = unaff_ESI;
  *(char *)(unaff_ESI + *(int *)(unaff_EBX + 4)) = 0;
  return;
}





void  FUN_10003e20(void *param_1)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = *(char **)((intptr_t)param_1 + 4);
  if (pcVar5 == (char *)0x0) {
    return;
  }
  cVar1 = pcVar5[-1];
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == -1) {
    return;
  }
  uVar3 = -1;
  pcVar5[-1] = cVar1 + -1;
  *(int *)((intptr_t)param_1 + 4) = 0;
  *(int *)((intptr_t)param_1 + 8) = 0;
  *(int *)((intptr_t)param_1 + 0xc) = 0;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (-3 < uVar3) {
    FUN_100047db();
  }
  iVar2 = *(int *)((intptr_t)param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_10003ad0(param_1,'\x01');
      return;
    }
    if ((*(unsigned int *)((intptr_t)param_1 + 0xc) < 0x20) && (uVar3 <= *(unsigned int *)((intptr_t)param_1 + 0xc)))
    goto LAB_10003ece;
    FUN_10003ad0(param_1,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_10003ad0(param_1,'\0');
    return;
  }
  FUN_10003d10(uVar3);
LAB_10003ece:
  pcVar6 = *(char **)((intptr_t)param_1 + 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(int *)pcVar6 = *(int *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(unsigned int *)((intptr_t)param_1 + 8) = uVar3;
  *(char *)(uVar3 + *(int *)((intptr_t)param_1 + 4)) = 0;
  return;
}







int __cdecl FUN_10003f40(byte *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  int uVar3;
  char *pcVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  char *pcVar8;
  char local_424 [4];
  char *local_420;
  unsigned int local_41c;
  int local_418;
  char local_411;
  size_t local_410;
  char local_40c [1024];
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  if (param_1 == (byte *)0x0) {
    return -1;
  }
  sVar2 = FUN_10004db0(param_1,&DAT_10010544);
  if (0x400 < (int)sVar2) {
    return -1;
  }
  local_410 = sVar2;
  strncpy(local_40c,(char *)param_1,sVar2);
  local_424[0] = local_411;
  uVar6 = -1;
  local_40c[sVar2] = '\0';
  local_420 = (char *)0x0;
  pcVar4 = local_40c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  local_41c = 0;
  local_418 = 0;
  uVar3 = FUN_10003be0(local_424,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar4 = local_40c;
    pcVar8 = local_420;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(int *)pcVar8 = *(int *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_420[uVar6] = '\0';
    local_41c = uVar6;
  }
  uVar6 = local_41c;
  local_4 = 0;
  if (param_2 == local_424) {
    FUN_10004590(param_2,local_41c,-1);
    FUN_10004590(param_2,0,0);
  }
  else {
    if (local_41c != 0) {
      pcVar4 = local_420;
      if (local_420 == (char *)0x0) {
        pcVar4 = "";
      }
      if ((byte)pcVar4[-1] < 0xfe) {
        FUN_10003ad0(param_2,'\x01');
        pcVar4 = local_420;
        if (local_420 == (char *)0x0) {
          pcVar4 = "";
        }
        *(char **)(param_2 + 4) = pcVar4;
        *(unsigned int *)(param_2 + 8) = local_41c;
        *(int *)(param_2 + 0xc) = local_418;
        pcVar4[-1] = pcVar4[-1] + '\x01';
        goto LAB_100040c4;
      }
    }
    uVar3 = FUN_10003be0(param_2,local_41c,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar4 = local_420;
      if (local_420 == (char *)0x0) {
        pcVar4 = "";
      }
      pcVar8 = *(char **)(param_2 + 4);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(int *)pcVar8 = *(int *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar8 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_10003bc0(param_2,uVar6);
    }
  }
LAB_100040c4:
  if (local_420 != (char *)0x0) {
    cVar1 = local_420[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0(local_420 + -1);
    }
    else {
      local_420[-1] = cVar1 + -1;
    }
  }
  sVar2 = local_410;
  iVar5 = FUN_100057b0(param_1 + local_410,&DAT_10010540);
  return iVar5 + sVar2;
}





int *  FUN_10004120(void *this_ptr,char *param_1,size_t param_2)

{
  char *_Dest;
  
  _Dest = malloc(param_2 + 1);
  *(char **)this_ptr = _Dest;
  strncpy(_Dest,param_1,param_2);
  *(char *)(param_2 + *(int *)this_ptr) = 0;
  *(int *)((intptr_t)this_ptr + 4) = 0;
  *(int *)((intptr_t)this_ptr + 8) = 0;
  return this_ptr;
}





void  FUN_10004160(int *param_1)

{
  FUN_100047d0((int *)*param_1);
  return;
}





int  FUN_10004170(void *this_ptr,char *param_1)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  char local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  puVar2 = FUN_10005c30(*(unsigned int **)this_ptr,param_1);
  if (puVar2 == (unsigned int *)0x0) {
    *(int *)((intptr_t)this_ptr + 4) = 1;
    return 1;
  }
  *(unsigned int **)((intptr_t)this_ptr + 8) = puVar2;
  local_1c[0] = *(char*)((char*)&param_1 + 0);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  iVar3 = FUN_10003f40((byte *)puVar2,local_1c);
  *(int *)((intptr_t)this_ptr + 8) = *(int *)((intptr_t)this_ptr + 8) + iVar3;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  return 0;
}





void  FUN_10004230(void *this_ptr,char *param_1,int *param_2,int *param_3)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  char local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  puVar2 = FUN_10005c30(*(unsigned int **)this_ptr,param_1);
  if (puVar2 == (unsigned int *)0x0) {
    *(int *)((intptr_t)this_ptr + 4) = 1;
    return;
  }
  local_18 = 0;
  local_1c[0] = *(char*)((char*)&param_1 + 0);
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  iVar3 = FUN_10003f40((byte *)puVar2,local_1c);
  puVar4 = FUN_10005c30((unsigned int *)((int)puVar2 + iVar3),DAT_1001054c);
  if (puVar4 == (unsigned int *)0x0) {
    *(int *)((intptr_t)this_ptr + 4) = 1;
  }
  else {
    *param_2 = (unsigned int *)((int)puVar2 + iVar3);
    *param_3 = puVar4;
  }
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      return;
    }
    FUN_100047d0((char *)(local_18 + -1));
  }
  return;
}





int  FUN_10004320(void *this_ptr,void *param_1)

{
  char cVar1;
  int iVar2;
  int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *puVar6;
  char *pcVar7;
  int *puVar8;
  char local_1c [4];
  char *local_18;
  unsigned int local_14;
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  local_1c[0] = *(char*)((char*)&param_1 + 0);
  FUN_10003ad0(local_1c,'\0');
  local_4 = 0;
  do {
    iVar2 = FUN_10003f40(*(byte **)((intptr_t)this_ptr + 8),local_1c);
    if (iVar2 == -1) {
      local_4 = -1;
      FUN_10003ad0(local_1c,'\x01');
      return 4;
    }
    uVar4 = -1;
    pcVar7 = DAT_1001054c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = FUN_100046b0(local_1c,0,local_14,DAT_1001054c,~uVar4 - 1);
    if (uVar4 == 0) {
      uVar4 = -1;
      pcVar7 = (char *)&DAT_100132c0;
      goto code_r0x1000442d;
    }
    *(int *)((intptr_t)this_ptr + 8) = *(int *)((intptr_t)this_ptr + 8) + iVar2;
  } while (local_14 == 0);
  if (local_18 != (char *)0x0) {
    FUN_10004720(local_1c);
    if (*local_18 == '#') {
      FUN_10004720(local_1c);
      pcVar7 = local_18;
      FUN_10004720(local_1c);
      if (pcVar7 == (char *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (int)pcVar7 - (intptr_t)local_18;
      }
      FUN_10004590(local_1c,uVar4,1);
      FUN_100038d0(param_1,local_1c,0,-1);
      local_4 = -1;
      FUN_10003ad0(local_1c,'\x01');
      return 1;
    }
    if ((local_18[-1] != '\0') && (local_18[-1] != -1)) {
      FUN_10003be0(local_1c,local_14,'\0');
    }
    if (local_18 != (char *)0x0) {
      local_18[-1] = -1;
      pcVar7 = local_18 + local_14;
      goto LAB_10004510;
    }
  }
  pcVar7 = (char *)0x0;
LAB_10004510:
  cVar1 = pcVar7[-1];
  while (cVar1 == ' ') {
    FUN_10004720(local_1c);
    FUN_10004590(local_1c,(int)(pcVar7 + -1) - (intptr_t)local_18,1);
    cVar1 = pcVar7[-1];
  }
  FUN_100038d0(param_1,local_1c,0,-1);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  return 2;
  while( 1 ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\0') break;
code_r0x1000442d:
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_10003be0(param_1,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar6 = &DAT_100132c0;
    puVar8 = *(int **)((intptr_t)param_1 + 4);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar8 = *(char *)puVar6;
      puVar6 = (int *)((int)puVar6 + 1);
      puVar8 = (int *)((int)puVar8 + 1);
    }
    FUN_10003bc0(param_1,uVar4);
  }
  local_4 = -1;
  FUN_10003ad0(local_1c,'\x01');
  return 0;
}





void *  FUN_10004590(void *this_ptr,unsigned int param_1,unsigned int param_2)

{
  char cVar1;
  char *puVar2;
  int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (*(unsigned int *)((intptr_t)this_ptr + 8) < param_1) {
    FUN_10004a07();
  }
  pcVar7 = *(char **)((intptr_t)this_ptr + 4);
  if (((pcVar7 != (char *)0x0) && (cVar1 = pcVar7[-1], cVar1 != '\0')) && (cVar1 != -1)) {
    pcVar7[-1] = cVar1 + -1;
    uVar4 = -1;
    *(int *)((intptr_t)this_ptr + 4) = 0;
    *(int *)((intptr_t)this_ptr + 8) = 0;
    *(int *)((intptr_t)this_ptr + 0xc) = 0;
    pcVar8 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar3 = FUN_10003be0(this_ptr,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar8 = *(char **)((intptr_t)this_ptr + 4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(int *)pcVar8 = *(int *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_10003bc0(this_ptr,uVar4);
    }
  }
  uVar4 = *(int *)((intptr_t)this_ptr + 8) - param_1;
  if (uVar4 < param_2) {
    param_2 = uVar4;
  }
  if (param_2 == 0) {
    return this_ptr;
  }
  puVar6 = (int *)(*(int *)((intptr_t)this_ptr + 4) + param_1);
  FUN_10005870(puVar6,(int *)((int)puVar6 + param_2),uVar4 - param_2);
  uVar4 = *(int *)((intptr_t)this_ptr + 8) - param_2;
  if (-3 < uVar4) {
    FUN_100047db();
  }
  puVar2 = *(char **)((intptr_t)this_ptr + 4);
  if (((puVar2 == (char *)0x0) || (cVar1 = puVar2[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      if (puVar2 == (char *)0x0) {
        return this_ptr;
      }
      *(int *)((intptr_t)this_ptr + 8) = 0;
      *puVar2 = 0;
      return this_ptr;
    }
    if (uVar4 <= *(unsigned int *)((intptr_t)this_ptr + 0xc)) goto LAB_10004697;
  }
  else if (uVar4 == 0) {
    puVar2[-1] = cVar1 + -1;
    FUN_10003ad0(this_ptr,'\0');
    return this_ptr;
  }
  FUN_10003d10(uVar4);
LAB_10004697:
  *(unsigned int *)((intptr_t)this_ptr + 8) = uVar4;
  *(char *)(uVar4 + *(int *)((intptr_t)this_ptr + 4)) = 0;
  return this_ptr;
}





unsigned int  FUN_100046b0(void *this_ptr,unsigned int param_1,unsigned int param_2,byte *param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  byte *pbVar3;
  BOOL bVar4;
  BOOL bVar5;
  
  if (*(unsigned int *)((intptr_t)this_ptr + 8) < param_1) {
    FUN_10004a07();
  }
  uVar1 = *(int *)((intptr_t)this_ptr + 8) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar1 = param_2;
  if (param_4 <= param_2) {
    uVar1 = param_4;
  }
  if (*(int *)((intptr_t)this_ptr + 4) == 0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)(*(int *)((intptr_t)this_ptr + 4) + param_1);
  }
  bVar4 = 0;
  uVar2 = 0;
  bVar5 = 1;
  do {
    if (uVar1 == 0) break;
    uVar1 = uVar1 - 1;
    bVar4 = *pbVar3 < *param_3;
    bVar5 = *pbVar3 == *param_3;
    pbVar3 = pbVar3 + 1;
    param_3 = param_3 + 1;
  } while (bVar5);
  if (!bVar5) {
    uVar2 = (1 - (unsigned int)bVar4) - (unsigned int)(bVar4 != 0);
  }
  if (uVar2 == 0) {
    if (param_2 < param_4) {
      return -1;
    }
    uVar2 = (unsigned int)(param_2 != param_4);
  }
  return uVar2;
}





void  FUN_10004720(void *param_1)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  
  if (((*(int *)((intptr_t)param_1 + 4) == 0) ||
      (cVar1 = *(char *)(*(int *)((intptr_t)param_1 + 4) + -1), cVar1 == '\0')) || (cVar1 == -1))
  goto LAB_10004789;
  uVar2 = *(unsigned int *)((intptr_t)param_1 + 8);
  if (-3 < uVar2) {
    FUN_100047db();
  }
  iVar3 = *(int *)((intptr_t)param_1 + 4);
  if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (iVar3 != 0) {
        FUN_10003bc0(param_1,0);
      }
      goto LAB_10004789;
    }
    if (uVar2 <= *(unsigned int *)((intptr_t)param_1 + 0xc)) goto LAB_10004789;
  }
  else if (uVar2 == 0) {
    *(char *)(iVar3 + -1) = cVar1 + -1;
    *(int *)((intptr_t)param_1 + 4) = 0;
    *(int *)((intptr_t)param_1 + 8) = 0;
    *(int *)((intptr_t)param_1 + 0xc) = 0;
    goto LAB_10004789;
  }
  FUN_10003d10(uVar2);
LAB_10004789:
  if (*(int *)((intptr_t)param_1 + 4) != 0) {
    *(char *)(*(int *)((intptr_t)param_1 + 4) + -1) = 0xff;
  }
  return;
}





void __cdecl FUN_100047d0(int *param_1)

{
  FUN_10005e59(param_1);
  return;
}





int * FUN_10004835(void)

{
  int *this_ptr;
  char *puVar1;
  int *this_00;
  int unaff_EBP;
  
  FUN_1000608c();
  *(int **)(unaff_EBP + -0x14) = this_00;
  *(int **)(unaff_EBP + -0x10) = &DAT_100132c0;
  FUN_10005f5e(this_00,(int *)(unaff_EBP + -0x10));
  puVar1 = *(char **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -4) = 0;
  this_ptr = this_00 + 3;
  *(char *)this_ptr = *puVar1;
  FUN_10003ad0(this_ptr,'\0');
  FUN_100038d0(this_ptr,puVar1,0,DAT_1000e19c);
  *this_00 = &FUN_1000e190;
  return this_00;
}





void FUN_100048c3(void)

{
  int *this_ptr;
  int unaff_EBP;
  
  FUN_1000608c();
  *(int **)(unaff_EBP + -0x10) = this_ptr;
  *(int ***)this_ptr = &FUN_1000e190;
  *(int *)(unaff_EBP + -4) = 0;
  FUN_10003ad0(this_ptr + 0xc,'\x01');
  *(int *)(unaff_EBP + -4) = -1;
  ((void)0);
  return;
}





int *  FUN_10004900(void *this_ptr,byte param_1)

{
  FUN_100048c3();
  if ((param_1 & 1) != 0) {
    FUN_100047d0(this_ptr);
  }
  return this_ptr;
}





int * FUN_1000491c(void)

{
  int *this_ptr;
  char uVar1;
  int iVar2;
  int *this_00;
  int unaff_EBP;
  
  FUN_1000608c();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int **)(unaff_EBP + -0x10) = this_00;
  FUN_10005f9b(this_00,iVar2);
  uVar1 = *(char *)(iVar2 + 0xc);
  *(int *)(unaff_EBP + -4) = 0;
  this_ptr = this_00 + 3;
  *(char *)this_ptr = uVar1;
  FUN_10003ad0(this_ptr,'\0');
  FUN_100038d0(this_ptr,(void *)(iVar2 + 0xc),0,DAT_1000e19c);
  *this_00 = &FUN_1000e190;
  return this_00;
}





void FUN_10004979(void)

{
  int *this_ptr;
  int unaff_EBP;
  
  FUN_1000608c();
  *(int **)(unaff_EBP + -0x10) = this_ptr;
  *(int ***)this_ptr = &FUN_1000e190;
  *(int *)(unaff_EBP + -4) = 0;
  FUN_10003ad0(this_ptr + 0xc,'\x01');
  *(int *)(unaff_EBP + -4) = -1;
  ((void)0);
  return;
}





int *  FUN_100049ef(int *param_1)

{
  FUN_1000491c();
  *param_1 = ((int*)0);
  return param_1;
}





void FUN_10004a61(void)

{
  int *this_ptr;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  
  FUN_1000608c();
  *(int **)(unaff_EBP + -0x10) = this_ptr;
  *(int ***)this_ptr = &FUN_1000e190;
  *(int *)(unaff_EBP + -4) = 0;
  FUN_10003ad0(this_ptr + 0xc,'\x01');
  *(int *)(unaff_EBP + -4) = -1;
  ((void)0);
  *unaff_FS_OFFSET = *(int *)(unaff_EBP + -0xc);
  return;
}





int *  FUN_10004ad7(int *param_1)

{
  FUN_1000491c();
  *param_1 = ((int*)0);
  return param_1;
}





void FUN_10004b19(void)

{
  FUN_10004bb0(&DAT_10003f30);
  return;
}





void FUN_10004b25(void)

{
  FUN_10004bb0(&DAT_10004b31);
  return;
}





int __cdecl FUN_10004b32(int param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_100064d7();
  pbVar1 = (byte *)FUN_10006832(DAT_1002db50);
  if (pbVar1 < DAT_1002db4c + (4 - (int)DAT_1002db50)) {
    SVar2 = FUN_10006832(DAT_1002db50);
    pbVar1 = FUN_10006503(DAT_1002db50,(unsigned int *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10004ba7;
    }
    DAT_1002db4c = pbVar1 + ((int)DAT_1002db4c - (int)DAT_1002db50 >> 2) * 4;
    DAT_1002db50 = pbVar1;
  }
  *(int *)DAT_1002db4c = param_1;
  DAT_1002db4c = DAT_1002db4c + 4;
LAB_10004ba7:
  FUN_100064e0();
  return param_1;
}





int __cdecl FUN_10004bb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10004b32(param_1);
  return (iVar1 != 0) - 1;
}





void FUN_10004bf1(int param_1,int param_2,int param_3,int *param_4)

{
  void *local_14;
  char *puStack_10;
  int *puStack_c;
  int local_8;
  
  puStack_c = &DAT_1000e1c8;
  local_8 = 0;
  while( 1 ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    ((int(*)())param_4)();
  }
  local_8 = -1;
  FUN_10004c59();
  return;
}





void FUN_10004c59(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_10004c71(*(int *)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + 0x10),*(int **)(unaff_EBP + 0x14));
  }
  return;
}





void FUN_10004c71(int param_1,int param_2,int param_3,int *param_4)

{
  void *local_14;
  char *puStack_10;
  int *puStack_c;
  int local_8;
  
  puStack_c = &DAT_1000e1d8;
  local_8 = 0;
  while( 1 ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    ((int(*)())param_4)();
  }
  return;
}





int __cdecl FUN_10004ccf(int *param_1)

{
  int uVar1;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_10006b3c();
  return uVar1;
}





void  FUN_10004ce5(int *param_1)

{
  *param_1 = ((int*)0);
  FUN_10006c88(0x1b);
  if ((int *)param_1[1] != (int *)0x0) {
    FUN_10005e59((int *)param_1[1]);
  }
  FUN_10006ce9(0x1b);
  return;
}





int *  FUN_10004d0e(void *this_ptr,byte param_1)

{
  FUN_10004ce5(this_ptr);
  if ((param_1 & 1) != 0) {
    FUN_100047d0(this_ptr);
  }
  return this_ptr;
}





int __cdecl FUN_10004db0(byte *param_1,byte *param_2)

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





unsigned int __cdecl FUN_10004dee(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned int uVar1;
  
  FUN_10006e40((unsigned int)param_4);
  uVar1 = FUN_10004e1d(param_1,param_2,param_3,param_4);
  FUN_10006e92((unsigned int)param_4);
  return uVar1;
}





unsigned int __cdecl FUN_10004e1d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

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
          uVar4 = FUN_10007126(piVar1);
          if (uVar4 == -1) goto LAB_10004ef9;
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
          iVar3 = FUN_10007202(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_10004ef9:
            return (unsigned int)((int)pcVar6 - (intptr_t)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10004ef9;
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
        FUN_100060b0((int *)pcVar5,(int *)*piVar1,(unsigned int)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}





int __cdecl FUN_10004f05(char *param_1)

{
  int iVar1;
  
  FUN_10006e40((unsigned int)param_1);
  iVar1 = FUN_10004f27(param_1);
  FUN_10006e92((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10004f27(char *param_1)

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
  local_8 = FUN_100076d5(uVar1,0,1);
  if ((intptr_t)local_8 < 0) {
LAB_10004fb5:
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
        pDVar4 = FUN_100074b3();
        *pDVar4 = 0x16;
        goto LAB_10004fb5;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)(((long long *)&DAT_1002ca20)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
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
          if ((*(byte *)(iVar10 + 4 + ((long long *)&DAT_1002ca20)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_100076d5(uVar1,0,2);
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
              FUN_100076d5(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(unsigned int *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(unsigned int *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + ((long long *)&DAT_1002ca20)[(int)uVar1 >> 5]) & 4;
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





int __cdecl FUN_10005088(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10006e40((unsigned int)param_1);
  iVar1 = FUN_100050b4(param_1,param_2,param_3);
  FUN_10006e92((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_100050b4(int *param_1,int param_2,DWORD param_3)

{
  unsigned int uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_100074b3();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & -17;
    if (param_3 == 1) {
      iVar2 = FUN_10004f27((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_1000701d(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & -4;
    }
    DVar3 = FUN_100076d5(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != -1) - 1;
  }
  return iVar2;
}





int * __cdecl FUN_10005141(LPCSTR param_1,char *param_2,unsigned int param_3)

{
  int *puVar1;
  int *puVar2;
  
  puVar1 = FUN_1000791d();
  if (puVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = FUN_100077ad(param_1,param_2,param_3,puVar1);
  FUN_10006e92((unsigned int)puVar1);
  return puVar2;
}





void __cdecl FUN_10005172(LPCSTR param_1,char *param_2)

{
  FUN_10005141(param_1,param_2,0x40);
  return;
}





int __cdecl FUN_100053f0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar5 = *(unsigned int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == -1) {
      FUN_10006b9d();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == -1)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(unsigned int *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_10006b9d();
  }
  return iVar1 + uVar5 * 0x14;
}







void FUN_10005470(void)

{
  unsigned int in_EAX;
  char *puVar1;
  int unaff_retaddr;
  
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(int *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}





void FUN_10005576(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_100105f8 = *(int *)(unaff_EBP + 8);
  DAT_100105f4 = in_EAX;
  DAT_100105fc = unaff_EBP;
  return;
}





int __cdecl FUN_100055c8(char *param_1,byte *param_2)

{
  int iVar1;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000842c(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}





void __cdecl FUN_1000572e(char *param_1,byte *param_2)

{
  void *this_ptr;
  char *local_24;
  size_t local_20;
  char *local_1c;
  int local_18;
  
  local_18 = 0x49;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = strlen(param_1);
  return;
}





int __cdecl FUN_100057b0(byte *param_1,byte *param_2)

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
  } while ((abStack_28[(int)(unsigned int)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0);
  return iVar2;
}





unsigned int  FUN_100057ee(void *this_ptr,int param_1)

{
  unsigned int uVar1;
  
  if (1 < DAT_10010d24) {
    uVar1 = FUN_100097ff(this_ptr,param_1,0x103);
    return uVar1;
  }
  return *(unsigned short *)(DAT_10010b18 + param_1 * 2) & 0x103;
}





unsigned int  FUN_1000581c(void *this_ptr,int param_1)

{
  unsigned int uVar1;
  
  if (1 < DAT_10010d24) {
    uVar1 = FUN_100097ff(this_ptr,param_1,4);
    return uVar1;
  }
  return *(byte *)(DAT_10010b18 + param_1 * 2) & 4;
}





unsigned int  FUN_10005844(void *this_ptr,int param_1)

{
  unsigned int uVar1;
  
  if (1 < DAT_10010d24) {
    uVar1 = FUN_100097ff(this_ptr,param_1,8);
    return uVar1;
  }
  return *(byte *)(DAT_10010b18 + param_1 * 2) & 8;
}





int * __cdecl FUN_10005870(int *param_1,int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *puVar3;
  int *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (int *)(param_3 + (intptr_t)param_2))) {
    puVar3 = (int *)((param_3 - 4) + (intptr_t)param_2);
    puVar4 = (int *)((param_3 - 4) + (intptr_t)param_1);
    if (((unsigned int)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10005a27_caseD_2;
        case 3:
          goto switchD_10005a27_caseD_3;
        }
        goto switchD_10005a27_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005a27_caseD_0;
      case 1:
        goto switchD_10005a27_caseD_1;
      case 2:
        goto switchD_10005a27_caseD_2;
      case 3:
        goto switchD_10005a27_caseD_3;
      default:
        uVar1 = param_3 - ((unsigned int)puVar4 & 3);
        switch((unsigned int)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(char *)((int)puVar4 + 3) = *(char *)((int)puVar3 + 3);
          puVar3 = (int *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (int *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10005a27_caseD_2;
            case 3:
              goto switchD_10005a27_caseD_3;
            }
            goto switchD_10005a27_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(char *)((int)puVar4 + 3) = *(char *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(char *)((int)puVar4 + 2) = *(char *)((int)puVar3 + 2);
          puVar3 = (int *)((int)puVar3 + -2);
          puVar4 = (int *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10005a27_caseD_2;
            case 3:
              goto switchD_10005a27_caseD_3;
            }
            goto switchD_10005a27_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(char *)((int)puVar4 + 3) = *(char *)((int)puVar3 + 3);
          *(char *)((int)puVar4 + 2) = *(char *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(char *)((int)puVar4 + 1) = *(char *)((int)puVar3 + 1);
          puVar3 = (int *)((int)puVar3 + -3);
          puVar4 = (int *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10005a27_caseD_2;
            case 3:
              goto switchD_10005a27_caseD_3;
            }
            goto switchD_10005a27_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10005a27_caseD_1:
      *(char *)((int)puVar4 + 3) = *(char *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005a27_caseD_2:
      *(char *)((int)puVar4 + 3) = *(char *)((int)puVar3 + 3);
      *(char *)((int)puVar4 + 2) = *(char *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005a27_caseD_3:
      *(char *)((int)puVar4 + 3) = *(char *)((int)puVar3 + 3);
      *(char *)((int)puVar4 + 2) = *(char *)((int)puVar3 + 2);
      *(char *)((int)puVar4 + 1) = *(char *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005a27_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((unsigned int)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_100058a5_caseD_2;
      case 3:
        goto switchD_100058a5_caseD_3;
      }
      goto switchD_100058a5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100058a5_caseD_0;
    case 1:
      goto switchD_100058a5_caseD_1;
    case 2:
      goto switchD_100058a5_caseD_2;
    case 3:
      goto switchD_100058a5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((unsigned int)param_1 & 3);
      switch((unsigned int)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(char *)param_1 = *(char *)param_2;
        *(char *)((intptr_t)param_1 + 1) = *(char *)((intptr_t)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(char *)((intptr_t)param_1 + 2) = *(char *)((intptr_t)param_2 + 2);
        param_2 = (int *)((intptr_t)param_2 + 3);
        puVar3 = (int *)((intptr_t)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100058a5_caseD_2;
          case 3:
            goto switchD_100058a5_caseD_3;
          }
          goto switchD_100058a5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(char *)param_1 = *(char *)param_2;
        uVar1 = uVar1 >> 2;
        *(char *)((intptr_t)param_1 + 1) = *(char *)((intptr_t)param_2 + 1);
        param_2 = (int *)((intptr_t)param_2 + 2);
        puVar3 = (int *)((intptr_t)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100058a5_caseD_2;
          case 3:
            goto switchD_100058a5_caseD_3;
          }
          goto switchD_100058a5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(char *)param_1 = *(char *)param_2;
        param_2 = (int *)((intptr_t)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (int *)((intptr_t)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100058a5_caseD_2;
          case 3:
            goto switchD_100058a5_caseD_3;
          }
          goto switchD_100058a5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_100058a5_caseD_1:
    *(char *)puVar3 = *(char *)param_2;
    return param_1;
  case 2:
switchD_100058a5_caseD_2:
    *(char *)puVar3 = *(char *)param_2;
    *(char *)((int)puVar3 + 1) = *(char *)((intptr_t)param_2 + 1);
    return param_1;
  case 3:
switchD_100058a5_caseD_3:
    *(char *)puVar3 = *(char *)param_2;
    *(char *)((int)puVar3 + 1) = *(char *)((intptr_t)param_2 + 1);
    *(char *)((int)puVar3 + 2) = *(char *)((intptr_t)param_2 + 2);
    return param_1;
  }
switchD_100058a5_caseD_0:
  return param_1;
}





void FUN_10005ba5(int param_1,int param_2,int param_3,int *param_4)

{
  int local_20;
  void *local_14;
  char *puStack_10;
  int *puStack_c;
  int local_8;
  
  puStack_c = &DAT_1000e210;
  local_8 = 0;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    ((int(*)())param_4)();
  }
  local_8 = -1;
  FUN_10005c0f();
  return;
}





void FUN_10005c0f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    FUN_10004c71(*(int *)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + -0x1c),*(int **)(unaff_EBP + 0x18));
  }
  return;
}





unsigned int * __cdecl FUN_10005c30(unsigned int *param_1,char *param_2)

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





void OnInit(void)

{
  FILE *pFVar1;
  unsigned int uVar2;
  int iVar3;
  char cVar4;
  int auStackY_48558 [73997];
  byte local_124 [200];
  int uStackY_5c;
  byte *pbVar5;
  byte *pbVar6;
  void *local_10;
  char *puStack_c;
  unsigned int local_8;
  
                    
  local_8 = -1;
  FUN_10005470();
  local_8 = 0;
  FUN_10005172("UserMissions\\start.dat",&DAT_10010244);
  if (pFVar1 == (FILE *)0x0) {
                    
  }
  FUN_10005088((int *)pFVar1,0,2);
  uVar2 = FUN_10004f05((char *)pFVar1);
  FUN_10005088((int *)pFVar1,0,0);
  FUN_10004dee((char *)local_124,uVar2,1,(int *)pFVar1);
  pbVar5 = local_124;
  pbVar6 = &DAT_1001020c;
  local_124[uVar2] = 0;
  iVar3 = FUN_10004db0(pbVar5,pbVar6);
  local_124[iVar3] = 0;
  uStackY_5c = 0x10001170;
  FUN_10004d2a(pFVar1);
  FUN_10001380(auStackY_48558,(char *)local_124,"UserMissions\\funclist.sce");
  local_8 = (int)1;
  FUN_100015c0(auStackY_48558,&DAT_10013300);
  RegisterVar(0,0);
  RegisterVar(0,0);
  RegisterDynGroup(0);
  RegisterVar(0,0);
  RegisterDynGroup(0);
  RegisterVar(0,0);
  for (cVar4 = 'A'; cVar4 < '['; cVar4 = cVar4 + '\x01') {
    DisableMission(0);
  }
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    ((long long *)&DAT_100132d8)[iVar3] = 0xff;
  }
  RegisterVar(0,0);
  DAT_100132e0 = 1;
  local_8 = local_8 & -256;
  FUN_100014a0(auStackY_48558);
  return;
}





void ProcessScenary(void)

{
  int in_EAX;
  int uVar1;
  int extraout_var = 0;
  int iVar2;
  
                    
  uVar1 = (int)((unsigned int)in_EAX >> 8);
  if (DAT_100132e0 != '\0') {
    iVar2 = 0;
    do {
      ChangeFriends(iVar2,(int)((long long *)&DAT_100132d8)[iVar2]);
      iVar2 = iVar2 + 1;
      uVar1 = extraout_var;
    } while (iVar2 < 8);
    DAT_100132e0 = '\0';
  }
  SaveSelectedUnits(0,&DAT_100132cc,0);
  FUN_100031c0((int *)&DAT_10013300);
  iVar2 = GetTotalAmount0(&DAT_100132cc);
  if (0 < iVar2) {
    SelectUnits(&DAT_100132cc,0);
    return;
  }
  ClearSelection(0);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
