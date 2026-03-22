#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdarg.h>

/* 64-bit pointer side-tables: on 64-bit, pointers don't fit in the
   original 4-byte struct slots without overlapping adjacent fields.
   We store them separately and keep the int slots for non-pointer data. */
static char *_sctx_script_data;      /* ScriptCtx offset 0x00 */
static char *_sctx_funclist_data;    /* ScriptCtx offset 0x0C */
static char *_sctx_exec_buffer;     /* ScriptCtx offset 0x14 */
static void *_sctx_searcher_ptr;    /* ScriptCtx offset 0x48028 */
static char *_sctx_script_cur;      /* ScriptCtx offset 0x4802C */
static char *_sctx_script_end;      /* ScriptCtx offset 0x48030 */
#define MAX_SCRIPT_VARS 2560
static intptr_t _sctx_var_values[MAX_SCRIPT_VARS]; /* var entry +0x44 */
#define MAX_SCRIPT_STRINGS 4096
static char *_sctx_strings[MAX_SCRIPT_STRINGS]; /* string pool at offset 0x13000 */

/* Exec entry side tables for pointer fields that don't fit in 4-byte int slots.
   Entry stride is 0x2C (11 ints). Max ~1024 entries. */
#define MAX_EXEC_ENTRIES 1024
static intptr_t _exec_func_ptrs[MAX_EXEC_ENTRIES];  /* piVar3[1]: function pointer */
static intptr_t _exec_jump_ptrs[MAX_EXEC_ENTRIES];   /* piVar3[10]: jump target */
static intptr_t _exec_times_ptrs[MAX_EXEC_ENTRIES];  /* piVar3[9]: times counter ptr */

/* StrBuf — refcounted string buffer. On 32-bit the data pointer at +4
   fits in 4 bytes, but on 64-bit it's 8 bytes and would overlap the
   int length at +8.  Using a proper struct fixes the layout. */
typedef struct {
    char flag;
    char _sb_pad[sizeof(void*) - 1]; /* align data to pointer size */
    char *data;      /* +4 on 32-bit, +8 on 64-bit */
    int  length;     /* +8 on 32-bit, +16 on 64-bit */
    int  capacity;   /* +12 on 32-bit, +20 on 64-bit */
} _SB;
#define SB(p) ((_SB*)(p))

/* Searcher — text scanner with cursor. On 32-bit: data+4, error+4, cursor+4 = 12 bytes.
   On 64-bit: data(8) + error(4) + pad(4) + cursor(8) = 24 bytes. */
typedef struct {
    char *data;      /* +0: malloc'd copy of script text */
    int   error;     /* +4 on 32-bit, +8 on 64-bit: error flag */
    char *cursor;    /* +8 on 32-bit, +16 on 64-bit: current read position */
} _Srch;
#define SRCH(p) ((_Srch*)(p))

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
long long DAT_1000eca8 = 0;
long long DAT_1000ed18 = 0;
long long DAT_1000edd0 = 0;
char DAT_10010194[] = "INT";
char DAT_100101a0[] = "WORD";
char DAT_100101a8[] = "BYTE";
char DAT_100101b0[] = "BOOL";
char DAT_1001020c[] = "\n\r";
char DAT_10010244[] = "r";
char DAT_10010288[] = "rb";
char DAT_1001029c[] = "VOID";
char DAT_100102e0[] = "%s";
char DAT_100102e4[] = "%s%s";
char DAT_10010318[] = " \t";
char DAT_10010350[] = "#";
char DAT_100103b0[] = "IF";
char DAT_100103b4[] = "%d";
char DAT_10010410[] = "ELSE";
char DAT_1001049c[] = "Var";
char DAT_100104a0[] = "OR";
char DAT_100104a4[] = "AND";
char DAT_100104f8[] = "( ";
int DAT_10010500 = 168373280;
int DAT_10010504 = 4008232;
char DAT_10010540[] = "\n\r";
char DAT_10010544[] = "\r\n";
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
intptr_t DAT_100132e4 = 0;
byte *DAT_100132e8 = 0;
int DAT_100132ec = 0;
int DAT_100132f0 = 0;
int DAT_100132f4 = 0;
/* Side-table: 64-bit pointer for player list base (was packed into DAT_100132ec on 32-bit) */
static char *_playerlist_data = NULL;
/* Exec buffer: originally a single long long, but the code treats it as
   a ~100KB contiguous block accessed via offsets up to 0x19004+.
   Must be large enough for all exec entry tables. */
int DAT_10013300[0x1A000/4] = {0};
unsigned char DAT_1002c330[1776] = {0};
long long DAT_1002ca20 = 0;
int DAT_1002db4c = 0;
int DAT_1002db50 = 0;
int DAT_100132f8 = 0;
char DAT_1002a304[4096] = {0};
char DAT_1002b304[4096] = {0};

/* TODO: original RegisterVar/RegisterDynGroup arguments lost in Ghidra decompilation.
   Using dummy handles to prevent NULL pointer crashes. Variable names unknown. */
static int _oninit_var[6];
static int _oninit_grp[2];

/* Stubs for missing internal functions */
int FUN_10004d2a(FILE *f) { return fclose(f); }
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
void FUN_100012f0(char *param_1,int param_2);
int FUN_10001340(unsigned int *param_1,int param_2);
int *  FUN_10001380(void *this_ptr,char *param_1,LPCSTR param_2);
void  FUN_100014a0(int *param_1);
int FUN_100014e0(char *param_1);
void  FUN_100015c0(void *this_ptr,char *param_1);
void  FUN_100016a0(intptr_t param_1);
void  FUN_10001960(intptr_t param_1);
BOOL  FUN_100019f0(intptr_t param_1);
void 
FUN_10001bb0(void *this_ptr,int param_1,char *param_2,int param_3,int param_4,
            int param_5);
void  FUN_10001c40(void *param_1);
void  FUN_10002040(char *param_1);
void  FUN_10002330(char *param_1);
void  FUN_10002510(void *param_1);
byte  FUN_10002750(intptr_t param_1);
int  FUN_100027c0(intptr_t param_1);
void  FUN_10002810(void *param_1);
int  FUN_10002960(void *this_ptr,byte *param_1);
void  FUN_100029d0(void *this_ptr,int param_1);
void  FUN_10002a40(void *this_ptr,int param_1);
void  FUN_10002ab0(intptr_t param_1);
void  FUN_10002b10(void *this_ptr,int param_1);
void  FUN_10002b80(void *this_ptr,int param_1);
byte * FUN_10002bf0(intptr_t param_1,byte *param_2);
void  FUN_10002d20(void *this_ptr,byte *param_1);
void  FUN_100030c0(intptr_t param_1);
void  FUN_10003100(int param_1);
int  FUN_10003140(void *this_ptr,char *param_1);
void  FUN_100031c0(int *param_1);
char *  FUN_100036d0(void *this_ptr,char *param_1);
void  FUN_100037f0(int param_1);
int *  FUN_10003830(int *param_1);
void *  FUN_100038d0(void *this_ptr,void *param_1,unsigned int param_2,unsigned int param_3);
void  FUN_10003ad0(void *this_ptr,char param_1);
void *  FUN_10003b20(void *this_ptr,int *param_1,unsigned int param_2);
void  FUN_10003bc0(void *this_ptr,int param_1);
int  FUN_10003be0(void *this_ptr,unsigned int param_1,char param_2);
int FUN_10003d00(void);
int FUN_10003d10(void *strbuf, unsigned int param_1);
void  FUN_10003e20(void *param_1);
int FUN_10003f40(byte *param_1,char *param_2);
int *  FUN_10004120(void *this_ptr,char *param_1,size_t param_2);
void  FUN_10004160(int *param_1);
int  FUN_10004170(void *this_ptr,char *param_1);
void  FUN_10004230(void *this_ptr,char *param_1,char **param_2,char **param_3);
int  FUN_10004320(void *this_ptr,void *param_1);
void *  FUN_10004590(void *this_ptr,unsigned int param_1,unsigned int param_2);
unsigned int  FUN_100046b0(void *this_ptr,unsigned int param_1,unsigned int param_2,byte *param_3,unsigned int param_4);
void  FUN_10004720(void *param_1);
int FUN_100047d0(int *param_1);
void FUN_100047db(void);
int * FUN_10004835(void);
void FUN_100048a6(void);
void FUN_100048c3(void);
int *  FUN_10004900(void *this_ptr,byte param_1);
int * FUN_1000491c(void);
void FUN_10004979(void);
void FUN_100049b6(void);
int *  FUN_100049ef(int *param_1);
void FUN_10004a07(void);
void FUN_10004a61(void);
void FUN_10004a9e(void);
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
unsigned int FUN_10004dee(char *param_1,unsigned int param_2,unsigned int param_3,void *param_4);
unsigned int FUN_10004e1d(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
int FUN_10004f05(void *param_1);
int FUN_10004f27(char *param_1);
int FUN_10005088(void *param_1,int param_2,DWORD param_3);
int FUN_100050b4(int *param_1,int param_2,DWORD param_3);
FILE * FUN_10005141(LPCSTR param_1,char *param_2,unsigned int param_3);
FILE * FUN_10005172(LPCSTR param_1,char *param_2);
int FUN_100053f0(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10005470(void);
void FUN_10005576(void);
int FUN_100055c8(char *param_1,byte *param_2, ...);
int FUN_1000572e(char *param_1,byte *param_2, ...);
int FUN_100057b0(byte *param_1,byte *param_2);
unsigned int  FUN_100057ee(void *this_ptr,int param_1);
unsigned int  FUN_1000581c(void *this_ptr,int param_1);
unsigned int  FUN_10005844(void *this_ptr,int param_1);
int * FUN_10005870(int *param_1,int *param_2,unsigned int param_3);
void FUN_10005ba5(int param_1,int param_2,int param_3,int *param_4);
void FUN_10005c0f(void);
unsigned int * FUN_10005c30(unsigned int *param_1,char *param_2);

__declspec(dllexport) void OnInit();
__declspec(dllexport) void ProcessScenary();


void FUN_10001010(void)

{
  FUN_100030c0((intptr_t)&DAT_10013300);
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





void FUN_100012f0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)((unsigned char *)&DAT_1002c330) - (intptr_t)param_1] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_100055c8(&DAT_1002c330,(byte *)"%s %d");
  param_1 = &DAT_1002c330;
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





int *  FUN_10001380(void *this_ptr,char *param_1,LPCSTR param_2)

{
  FILE *pFVar1;
  unsigned int uVar2;
  char *pcVar3;
  
  *(int *)this_ptr = 0;
  _sctx_script_data = NULL;
  *(int *)((intptr_t)this_ptr + 4) = 0;
  *(int *)((intptr_t)this_ptr + 0xc) = 0;
  _sctx_funclist_data = NULL;
  *(int *)((intptr_t)this_ptr + 0x10) = 0;
  fprintf(stderr, "  FUN_10001380: opening script '%s'\n", param_1);
  pFVar1 = (FILE *)FUN_10005172(param_1,DAT_10010288);
  fprintf(stderr, "  FUN_10001380: script fopen=%p\n", pFVar1);
  if (pFVar1 == (FILE *)0x0) {
    return 0;
  }
  FUN_10005088((int *)pFVar1,0,2);
  uVar2 = FUN_10004f05((char *)pFVar1);
  FUN_10005088((int *)pFVar1,0,0);
  pcVar3 = malloc(uVar2 + 1);
  _sctx_script_data = pcVar3;
  *(unsigned int *)((intptr_t)this_ptr + 4) = uVar2;
  FUN_10004dee(pcVar3,uVar2,1,(int *)pFVar1);
  FUN_10001340((unsigned int *)_sctx_script_data,*(int *)((intptr_t)this_ptr + 4));
  *(_sctx_script_data + uVar2) = 0;
  FUN_10004d2a(pFVar1);
  fprintf(stderr, "  FUN_10001380: opening funclist '%s'\n", param_2);
  pFVar1 = (FILE *)FUN_10005172(param_2,DAT_10010288);
  fprintf(stderr, "  FUN_10001380: funclist fopen=%p\n", pFVar1);
  if (pFVar1 == (FILE *)0x0) {
    return 0;
  }
  FUN_10005088((int *)pFVar1,0,2);
  uVar2 = FUN_10004f05((char *)pFVar1);
  FUN_10005088((int *)pFVar1,0,0);
  pcVar3 = malloc(uVar2 + 1);
  _sctx_funclist_data = pcVar3;
  *(unsigned int *)((intptr_t)this_ptr + 0x10) = uVar2;
  FUN_10004dee(pcVar3,uVar2,1,(int *)pFVar1);
  FUN_10001340((unsigned int *)_sctx_funclist_data,*(int *)((intptr_t)this_ptr + 0x10));
  *(_sctx_funclist_data + uVar2) = 10;
  FUN_10004d2a(pFVar1);
  *(int *)((intptr_t)this_ptr + 0x48020) = 0;
  return this_ptr;
}





void  FUN_100014a0(int *param_1)

{
  int *puVar1;
  
  FUN_100047d0((int *)_sctx_script_data);
  _sctx_script_data = NULL;
  FUN_100047d0((int *)_sctx_funclist_data);
  _sctx_funclist_data = NULL;
  puVar1 = (int *)_sctx_searcher_ptr;
  if (puVar1 != (int *)0x0) {
    FUN_10004160(puVar1);
    FUN_100047d0((int *)puVar1);
    _sctx_searcher_ptr = NULL;
  }
  return;
}





int FUN_100014e0(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  BOOL bVar4;
  
  iVar1 = 5;
  bVar4 = 1;
  pcVar2 = param_1;
  pcVar3 = DAT_1001029c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0;
  }
  iVar1 = 5;
  bVar4 = 1;
  pcVar2 = param_1;
  pcVar3 = DAT_100101b0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 1;
  }
  iVar1 = 5;
  bVar4 = 1;
  pcVar2 = param_1;
  pcVar3 = DAT_100101a8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 2;
  }
  iVar1 = 5;
  bVar4 = 1;
  pcVar2 = param_1;
  pcVar3 = DAT_100101a0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 3;
  }
  iVar1 = 8;
  bVar4 = 1;
  pcVar2 = param_1;
  pcVar3 = "GAMEOBJ";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 4;
  }
  iVar1 = 4;
  bVar4 = 1;
  pcVar2 = param_1;
  pcVar3 = DAT_10010194;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 5;
  }
  iVar1 = 7;
  bVar4 = 1;
  pcVar2 = "STRING";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *param_1 == *pcVar2;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar4);
  if (bVar4) {
    return 6;
  }
  param_1 = "Illegal type.";
}





void  FUN_100015c0(void *this_ptr,char *param_1)

{
  char cVar1;
  int *piVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *local_10;
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  local_10 = this_ptr;
  fprintf(stderr, "  FUN_100015c0: _sctx_script_data=%p _sctx_funclist_data=%p\n", _sctx_script_data, _sctx_funclist_data);
  if (_sctx_script_data == NULL) {
    param_1 = "No script.";
  }
  if (_sctx_funclist_data == NULL) {
    local_10 = "No functions table.";
  }
  fprintf(stderr, "  FUN_100015c0: writing this_ptr offsets\n");
  *(int *)((intptr_t)this_ptr + 0x48024) = 0;
  *(int *)((intptr_t)this_ptr + 0x1c) = 0;
  *(int *)((intptr_t)this_ptr + 0x18) = 0;
  _sctx_exec_buffer = param_1;
  fprintf(stderr, "  FUN_100015c0: malloc searcher\n");
  param_1 = malloc(sizeof(_Srch));
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (param_1 != (char *)0x0 && _sctx_script_data != NULL) {
    uVar3 = -1;
    pcVar4 = _sctx_script_data;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    piVar2 = FUN_10004120(param_1,_sctx_script_data,~uVar3 - 1);
  }
  local_4 = -1;
  _sctx_searcher_ptr = piVar2;
  fprintf(stderr, "  FUN_100015c0: calling FUN_100016a0\n");
  FUN_100016a0((intptr_t)this_ptr);
  fprintf(stderr, "  FUN_100015c0: FUN_100016a0 done, calling FUN_10001c40\n");
  _sctx_script_cur = _sctx_script_data;
  _sctx_script_end = _sctx_script_data + *(int *)((intptr_t)this_ptr + 4);
  FUN_10001c40(this_ptr);
  fprintf(stderr, "  FUN_100015c0: FUN_10001c40 done, calling FUN_10002040\n");
  FUN_10002040(this_ptr);
  fprintf(stderr, "  FUN_100015c0: done\n");
  return;
}





void  FUN_100016a0(intptr_t param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int uVar4;
  FARPROC pFVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *_Str1;
  size_t sVar10;
  char *local_31c;
  HMODULE local_318;
  HMODULE local_314;
  int local_310;
  int local_30c;
  char local_308 [40];
  char local_2e0 [32];
  char local_2c0 [32];
  char local_2a0 [32];
  char local_280 [128];
  char local_200 [512];
  
  local_314 = GetModuleHandleA("CMS_Start.dll");
  local_318 = GetModuleHandleA("dmcr.exe");
  fprintf(stderr, "  FUN_100016a0: CMS_Start=%p dmcr=%p\n", local_314, local_318);
  _Str1 = _sctx_funclist_data;
  pcVar8 = _Str1 + *(int *)(param_1 + 0x10);
  local_31c = pcVar8;
  fprintf(stderr, "  FUN_100016a0: funclist=%p size=%d end=%p\n", _Str1, *(int *)(param_1 + 0x10), pcVar8);
  fprintf(stderr, "  FUN_100016a0: funclist first 200 chars: '%.200s'\n", _Str1);
  if (_Str1 < pcVar8) {
    do {
      iVar3 = strncmp(_Str1,"CONST ",6);
      if (iVar3 == 0) {
        iVar3 = FUN_1000572e(_Str1,(byte *)"%s%s%d", local_2e0, local_2a0, &local_30c);
        if (iVar3 != 3) {
          fprintf(stderr, "  FUN_100016a0: Error in CONST declaration\n");
          /* local_31c was for exception; don't corrupt end pointer */
        }
        pcVar6 = local_2a0;
        *(int *)(param_1 + 0x40 + *(int *)(param_1 + 0x48020) * 0x48) = 3;
        pcVar7 = (char *)(param_1 + 0x20 + *(int *)(param_1 + 0x48020) * 0x48);
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *pcVar7 = cVar2;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        _sctx_var_values[*(int *)(param_1 + 0x48020)] = local_30c;
LAB_10001910:
        *(int *)(param_1 + 0x48020) = *(int *)(param_1 + 0x48020) + 1;
      }
      else {
        sVar10 = 0;
        cVar2 = *_Str1;
        while ((cVar2 != '(' && (cVar2 != '\n'))) {
          iVar3 = sVar10 + 1;
          sVar10 = sVar10 + 1;
          cVar2 = _Str1[iVar3];
        }
        if (_Str1[sVar10] != '\n') {
          strncpy(local_280,_Str1,sVar10);
          local_280[sVar10] = '\0';
          fprintf(stderr, "  FUN_100016a0: parsing func line, local_280='%s'\n", local_280);
          iVar3 = FUN_1000572e(local_280,DAT_100102e4, local_2e0, local_308);
          fprintf(stderr, "  FUN_100016a0: sscanf returned %d, local_2e0='%s' local_308='%s'\n", iVar3, local_2e0, local_308);
          if (iVar3 == 1) {
            iVar3 = 0;
            do {
              pcVar8 = local_2e0 + iVar3;
              local_308[iVar3] = *pcVar8;
              iVar3 = iVar3 + 1;
            } while (*pcVar8 != '\0');
            iVar3 = 0;
            do {
              cVar2 = (DAT_1001029c)[iVar3];
              local_2e0[iVar3] = cVar2;
              iVar3 = iVar3 + 1;
            } while (cVar2 != '\0');
          }
          pcVar7 = local_308;
          *(int *)(param_1 + 0x40 + *(int *)(param_1 + 0x48020) * 0x48) = 7;
          pcVar8 = (char *)(param_1 + 0x20 + *(int *)(param_1 + 0x48020) * 0x48);
          do {
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            *pcVar8 = cVar2;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          uVar4 = FUN_100014e0(local_2e0);
          _Str1 = _Str1 + sVar10 + 1;
          sVar10 = 0;
          *(int *)(param_1 + (*(int *)(param_1 + 0x48020) + 1) * 0x48) = uVar4;
          cVar2 = *_Str1;
          while ((cVar2 != ')' && (cVar2 != '\n'))) {
            iVar3 = sVar10 + 1;
            sVar10 = sVar10 + 1;
            cVar2 = _Str1[iVar3];
          }
          strncpy(local_200,_Str1,sVar10);
          local_200[sVar10] = '\0';
          iVar3 = 0;
          iVar9 = 0;
          iVar1 = 1;
          cVar2 = local_200[0];
          while ((cVar2 != '\0' && (iVar1 != 0))) {
            local_310 = FUN_1000572e(local_200 + iVar3,DAT_100102e0, local_2c0);
            do {
              pcVar8 = local_200 + iVar3;
              if (*pcVar8 == '\0') break;
              iVar3 = iVar3 + 1;
            } while (*pcVar8 != ',');
            if (local_310 != 0) {
              uVar4 = FUN_100014e0(local_2c0);
              iVar1 = iVar9 + *(int *)(param_1 + 0x48020) * 0x12;
              iVar9 = iVar9 + 1;
              *(int *)(param_1 + 0x50 + iVar1 * 4) = uVar4;
            }
            cVar2 = local_200[iVar3];
            iVar1 = local_310;
          }
          *(int *)(param_1 + 0x4c + *(int *)(param_1 + 0x48020) * 0x48) = iVar9;
          pFVar5 = GetProcAddress(local_318,local_308);
          if ((pFVar5 == (FARPROC)0x0) &&
             (pFVar5 = GetProcAddress(local_314,local_308), pFVar5 == (FARPROC)0x0)) {
            fprintf(stderr, "  FUN_100016a0: WARN: symbol '%s' not found\n", local_308);
            /* local_31c = local_308; -- REMOVED: was for __CxxThrowException_8 only; corrupts end pointer */
          }
          _sctx_var_values[*(int *)(param_1 + 0x48020)] = (intptr_t)pFVar5;
          fprintf(stderr, "  FUN_100016a0: func[%d]='%s' addr=%p nargs=%d\n", *(int *)(param_1 + 0x48020), local_308, pFVar5, iVar9);
          pcVar8 = local_31c;
          goto LAB_10001910;
        }
      }
      do {
        cVar2 = *_Str1;
        _Str1 = _Str1 + 1;
      } while (cVar2 != '\n');
    } while (_Str1 < pcVar8);
  }
  return;
}





void  FUN_10001960(intptr_t param_1)

{
  char cVar1;
  int iVar3;
  int iVar4;
  
  if (_sctx_script_cur < _sctx_script_end) {
    iVar4 = 0;
    while( 1 ) {
      while( 1 ) {
        while( 1 ) {
          iVar3 = FUN_100057b0((byte *)(_sctx_script_cur + iVar4),&DAT_10010318);
          iVar4 = iVar4 + iVar3;
          cVar1 = *(_sctx_script_cur + iVar4);
          if (cVar1 != '\r') break;
          iVar4 = iVar4 + 1;
          *(int *)(param_1 + 0x48024) = *(int *)(param_1 + 0x48024) + 1;
        }
        if (cVar1 != '\n') break;
        iVar4 = iVar4 + 1;
      }
      if (cVar1 != '%') break;
      iVar3 = FUN_10004db0((byte *)(_sctx_script_cur + iVar4),&DAT_1001020c);
      iVar4 = iVar4 + 1 + iVar3;
      *(int *)(param_1 + 0x48024) = *(int *)(param_1 + 0x48024) + 1;
    }
    _sctx_script_cur = _sctx_script_cur + iVar4;
  }
  return;
}





BOOL  FUN_100019f0(intptr_t param_1)

{
  char cVar1;
  char *_Source;
  char *pcVar2;
  int iVar4;
  BOOL bVar5;
  
  _Source = _sctx_script_cur;
  cVar1 = *_Source;
  while (cVar1 != ' ') {
    cVar1 = *_sctx_script_cur;
    if ((((cVar1 == '\n') || (cVar1 == '\t')) || (cVar1 == '\r')) ||
       ((cVar1 == ',' || (cVar1 == ']')))) break;
    if (cVar1 == '(') {
      iVar4 = 0;
      _sctx_script_cur = _sctx_script_cur + 1;
LAB_10001a47:
      if (*_sctx_script_cur == ')') {
        if (iVar4 == 0) goto LAB_10001af2;
        iVar4 = iVar4 + -1;
        _sctx_script_cur = _sctx_script_cur + 1;
      }
      if (*_sctx_script_cur == '(') {
        iVar4 = iVar4 + 1;
        _sctx_script_cur = _sctx_script_cur + 1;
      }
      if (*_sctx_script_cur == '\"') {
        pcVar2 = _sctx_script_cur + 1;
        _sctx_script_cur = pcVar2;
        cVar1 = *pcVar2;
        while (cVar1 != '\"') {
          if (_sctx_script_end < pcVar2) {
            FUN_100012f0("Syntax error in script. Action block ",*(int *)(param_1 + 8));
          }
          pcVar2 = _sctx_script_cur + 1;
          _sctx_script_cur = pcVar2;
          cVar1 = *pcVar2;
        }
      }
      _sctx_script_cur = _sctx_script_cur + 1;
      if (_sctx_script_end < _sctx_script_cur) {
        FUN_100012f0("Syntax error in script. Action block ",*(int *)(param_1 + 8));
      }
      goto LAB_10001a47;
    }
LAB_10001af2:
    if (*_sctx_script_cur == '\"') {
      pcVar2 = _sctx_script_cur + 1;
      _sctx_script_cur = pcVar2;
      cVar1 = *pcVar2;
      while (cVar1 != '\"') {
        if (_sctx_script_end < pcVar2) {
          FUN_100012f0("Syntax error in script. Action block ",*(int *)(param_1 + 8));
        }
        pcVar2 = _sctx_script_cur + 1;
        _sctx_script_cur = pcVar2;
        cVar1 = *pcVar2;
      }
    }
    pcVar2 = _sctx_script_cur + 1;
    _sctx_script_cur = pcVar2;
    cVar1 = *pcVar2;
  }
  strncpy((char *)(param_1 + 0x48034),_Source,_sctx_script_cur - _Source);
  *(char *)(param_1 + 0x48034 + (_sctx_script_cur - _Source)) = 0;
  FUN_10001960(param_1);
  bVar5 = *_sctx_script_cur == ',';
  if (bVar5) {
    _sctx_script_cur = _sctx_script_cur + 1;
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
  _sctx_var_values[*(int *)((intptr_t)this_ptr + 0x48020)] = param_5;
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





void  FUN_10001c40(void *param_1)

{
  unsigned int uVar1;
  char cVar2;
  int iVar3;
  int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  char *pcVar7;
  int *puVar8;
  int in_stack_ffffffa4;
  char *in_stack_ffffffa8;
  char *pcVar9;
  int uVar10;
  char *pcVar11;
  char *local_34;
  char *local_30;
  _SB sb_2c;   /* StrBuf: was local_2c[4], local_28, local_24 */
  _SB sb_1c;   /* StrBuf: was local_1c[4], local_18, local_14, local_10 */
  void *local_c;
  char *puStack_8;
  unsigned int local_4;
  
  local_4 = -1;
  FUN_10003ad0(&sb_2c,'\0');
  pcVar7 = _sctx_exec_buffer;
  local_4 = 0;
  local_34 = pcVar7;
  fprintf(stderr, "  FUN_10001c40: searching UNITS\n");
  FUN_10004170(_sctx_searcher_ptr,"UNITS");
  fprintf(stderr, "  FUN_10001c40: UNITS found, iterating\n");
  while (iVar3 = FUN_10004320(_sctx_searcher_ptr,&sb_2c), iVar3 == 2) {
    pcVar11 = pcVar7 + *(int *)((intptr_t)param_1 + 0x18) * 8;
    fprintf(stderr, "  FUN_10001c40: RegisterUnits(%p, '%s')\n", pcVar11, sb_2c.data ? sb_2c.data : "(null)");
    RegisterUnits(pcVar11, sb_2c.data);
    FUN_10001bb0(param_1, 0, sb_2c.data, 0, 0, (intptr_t)pcVar11);
    sb_2c.data = NULL; sb_2c.length = 0; sb_2c.capacity = 0;
  }
  fprintf(stderr, "  FUN_10001c40: searching ZONES\n");
  FUN_10004170(_sctx_searcher_ptr,"ZONES");
  while (iVar3 = FUN_10004320(_sctx_searcher_ptr,&sb_2c), iVar3 == 2) {
    pcVar11 = pcVar7 + *(int *)((intptr_t)param_1 + 0x18) * 8;
    RegisterZone(pcVar11, sb_2c.data);
    FUN_10001bb0(param_1, 0, sb_2c.data, 0, 0, (intptr_t)pcVar11);
    sb_2c.data = NULL; sb_2c.length = 0; sb_2c.capacity = 0;
  }
  fprintf(stderr, "  FUN_10001c40: ZONES done, searching UNITTYPES\n");
  FUN_10004170(_sctx_searcher_ptr,"UNITTYPES");
  while (iVar3 = FUN_10004320(_sctx_searcher_ptr,&sb_2c), iVar3 == 2) {
    pcVar11 = pcVar7 + *(int *)((intptr_t)param_1 + 0x18) * 8;
    RegisterUnitType(pcVar11, sb_2c.data);
    FUN_10001bb0(param_1, 0, sb_2c.data, 0, 0, (intptr_t)pcVar11);
    sb_2c.data = NULL; sb_2c.length = 0; sb_2c.capacity = 0;
  }
  fprintf(stderr, "  FUN_10001c40: UNITTYPES done, searching PLAYERS\n");
  FUN_10004170(_sctx_searcher_ptr,"PLAYERS");
  fprintf(stderr, "  FUN_10001c40: PLAYERS search done, _playerlist_data=%p DAT_100132f4=%d\n", _playerlist_data, DAT_100132f4);
  DAT_100132f0 = 0;
  while (iVar3 = FUN_10004320(_sctx_searcher_ptr,&sb_2c), iVar3 == 2) {
    fprintf(stderr, "  FUN_10001c40: PLAYER[%d] name='%s'\n", DAT_100132f0, sb_2c.data ? sb_2c.data : "(null)");
    SetPlayerName(DAT_100132f0, sb_2c.data);
    fprintf(stderr, "  FUN_10001c40: SetPlayerName done\n");
    if (DAT_100132f0 == DAT_100132f4) {
      local_34 = "List is overfilled.";
    }
    fprintf(stderr, "  FUN_10001c40: calling FUN_100038d0 dst=%p\n", (void *)((intptr_t)_playerlist_data + DAT_100132f0 * (int)sizeof(_SB)));
    FUN_100038d0((void *)((intptr_t)_playerlist_data + DAT_100132f0 * (int)sizeof(_SB)),&sb_2c,0,-1);
    fprintf(stderr, "  FUN_10001c40: FUN_100038d0 done\n");
    DAT_100132f0 = DAT_100132f0 + 1;
  }
  fprintf(stderr, "  FUN_10001c40: PLAYERS loop done, count=%d\n", DAT_100132f0);
  fprintf(stderr, "  FUN_10001c40: PLAYERS done, searching FORMATIONS\n");
  FUN_10004170(_sctx_searcher_ptr,"FORMATIONS");
  do {
    iVar3 = FUN_10004320(_sctx_searcher_ptr,&sb_2c);
    if (iVar3 != 2) {
      FUN_10004170(_sctx_searcher_ptr,"DYNGROUPS");
      while (iVar3 = FUN_10004320(_sctx_searcher_ptr,&sb_2c), iVar3 == 2) {
        pcVar7 = local_34 + *(int *)((intptr_t)param_1 + 0x18) * 8;
        RegisterDynGroup(pcVar7);
        RegisterVar(pcVar7, sb_2c.data);
        FUN_10001bb0(param_1, 0, sb_2c.data, 0, 0, (intptr_t)pcVar7);
        sb_2c.data = NULL; sb_2c.length = 0; sb_2c.capacity = 0;
      }
      if (sb_2c.data != NULL) {
        cVar2 = sb_2c.data[-1];
        if ((cVar2 != '\0') && (cVar2 != -1)) {
          sb_2c.data[-1] = cVar2 + -1;
          return;
        }
        FUN_100047d0((int *)(sb_2c.data - 1));
      }
      return;
    }
    uVar5 = -1;
    local_30 = pcVar7 + *(int *)((intptr_t)param_1 + 0x18) * 8;
    pcVar7 = &DAT_10010350;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    sb_1c.data = NULL;
    sb_1c.length = 0;
    sb_1c.capacity = 0;
    FUN_10003b20(&sb_1c,(int *)&DAT_10010350,~uVar5 - 1);
    local_4 = (int)1;
    uVar5 = -1;
    if ((unsigned int)sb_2c.length != (unsigned int)-1) {
      uVar5 = (unsigned int)sb_2c.length;
    }
    if (-(unsigned int)sb_1c.length - 1 <= uVar5) {
      FUN_100047db();
    }
    if (uVar5 != 0) {
      uVar1 = (unsigned int)sb_1c.length + uVar5;
      uVar10 = FUN_10003be0(&sb_1c,uVar1,'\0');
      if ((char)uVar10 != '\0') {
        puVar4 = (int *)sb_2c.data;
        if (sb_2c.data == NULL) {
          puVar4 = (int *)&DAT_1000e168;
        }
        puVar8 = (int *)(sb_1c.data + (unsigned int)sb_1c.length);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar8 = *(char *)puVar4;
          puVar4 = (int *)((intptr_t)puVar4 + 1);
          puVar8 = (int *)((intptr_t)puVar8 + 1);
        }
        sb_1c.data[uVar1] = 0;
        sb_1c.length = uVar1;
      }
    }
    pcVar7 = local_30;
    RegisterFormation(local_30, sb_1c.data);
    FUN_10001bb0(param_1, 0, sb_2c.data, 0, 0, (intptr_t)pcVar7);
    sb_2c.data = NULL; sb_2c.length = 0; sb_2c.capacity = 0;
    local_4 = local_4 & -256;
    if (sb_1c.data != NULL) {
      cVar2 = sb_1c.data[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_100047d0((int *)(sb_1c.data - 1));
      }
      else {
        sb_1c.data[-1] = cVar2 + -1;
      }
    }
    sb_1c.data = NULL;
    sb_1c.length = 0;
    sb_1c.capacity = 0;
    pcVar7 = local_34;
  } while( 1 );
}





void  FUN_10002040(char *param_1)

{
  char *_Str1;
  void *this_ptr;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  char *local_8;
  int local_4;
  char *_exec_buf;
  
  *(int *)(param_1 + 8) = 0;
  fprintf(stderr, "  FUN_10002040: enter, searching SCRIPT\n");
  FUN_10004230(_sctx_searcher_ptr,"SCRIPT",&_sctx_script_cur,
               &_sctx_script_end);
  fprintf(stderr, "  FUN_10002040: SCRIPT found, cur=%p end=%p\n", _sctx_script_cur, _sctx_script_end);
  _exec_buf = _sctx_exec_buffer;
  if (_sctx_script_cur < _sctx_script_end) {
    local_8 = (char *)0x18004;
    iVar3 = local_4;
    do {
      FUN_10001960((intptr_t)param_1);
      fprintf(stderr, "  FUN_10002040: loop top, cur='%.20s'\n", _sctx_script_cur);
      iVar2 = strncmp(_sctx_script_cur,"CONDITION",9);
      if (iVar2 == 0) {
        _sctx_script_cur = _sctx_script_cur + 9;
        FUN_10001960((intptr_t)param_1);
        fprintf(stderr, "  FUN_10002040: after CONDITION, cur='%.20s'\n", _sctx_script_cur);
        iVar3 = strncmp(_sctx_script_cur,"ACTION",6);
        if (iVar3 == 0) {
          fprintf(stderr, "  FUN_10002040: CONDITION then ACTION -> return\n");
          return;
        }
        iVar3 = strncmp(_sctx_script_cur,"TIMES",5);
        if (iVar3 == 0) {
          fprintf(stderr, "  FUN_10002040: CONDITION then TIMES -> return\n");
          return;
        }
        if (_sctx_script_end <= _sctx_script_cur) {
          return;
        }
        iVar3 = strncmp(_sctx_script_cur,"ALWAYS",6);
        if (iVar3 == 0) {
          _sctx_script_cur = _sctx_script_cur + 6;
          FUN_10001960((intptr_t)param_1);
          fprintf(stderr, "  FUN_10002040: calling FUN_10002ab0 (ALWAYS)\n");
          FUN_10002ab0((intptr_t)param_1);
          fprintf(stderr, "  FUN_10002040: FUN_10002ab0 done\n");
        }
        else {
          fprintf(stderr, "  FUN_10002040: calling FUN_10002810\n");
          FUN_10002810(param_1);
          fprintf(stderr, "  FUN_10002040: FUN_10002810 done\n");
        }
        iVar3 = *(int *)(param_1 + 0x1c) + -1;
        fprintf(stderr, "  FUN_10002040: iVar3=%d condCount=%d\n", iVar3, *(int *)(param_1 + 8));
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      FUN_10001960((intptr_t)param_1);
      fprintf(stderr, "  FUN_10002040: checking TIMES, cur='%.20s'\n", _sctx_script_cur);
      iVar2 = strncmp(_sctx_script_cur,"TIMES",5);
      if (iVar2 == 0) {
        _sctx_script_cur = _sctx_script_cur + 5;
        FUN_10001960((intptr_t)param_1);
        iVar2 = FUN_1000572e(_sctx_script_cur,DAT_100103b4, &local_4);
        if (iVar2 != 1) {
          local_8 = "Incorrect TIMES value.";
        }
        uVar4 = FUN_1000581c(_sctx_script_cur,(int)*_sctx_script_cur);
        this_ptr = extraout_ECX;
        while (uVar4 != 0) {
          _sctx_script_cur = _sctx_script_cur + 1;
          uVar4 = FUN_1000581c(this_ptr,(int)*_sctx_script_cur);
          this_ptr = extraout_ECX_00;
        }
        *(int *)((intptr_t)_exec_buf + 0x17004 + iVar3 * 4) = local_4;
        *(int *)(local_8 + (intptr_t)_exec_buf) = iVar3;
        local_8 = local_8 + 4;
      }
      else {
        fprintf(stderr, "  FUN_10002040: no TIMES, writing exec_buf[0x17004+%d*4]=-1\n", iVar3);
        *(int *)((intptr_t)_exec_buf + 0x17004 + iVar3 * 4) = -1;
      }
      FUN_10001960((intptr_t)param_1);
      fprintf(stderr, "  FUN_10002040: checking ACTION, cur='%.20s'\n", _sctx_script_cur);
      iVar2 = strncmp(_sctx_script_cur,"ACTION",6);
      if (iVar2 == 0) {
        _sctx_script_cur = _sctx_script_cur + 6;
        FUN_10001960((intptr_t)param_1);
        fprintf(stderr, "  FUN_10002040: entering ACTION loop\n");
        while (((_Str1 = _sctx_script_cur, _Str1 < _sctx_script_end && (*_Str1 != '\0'))
               && (iVar2 = strncmp(_Str1,"CONDITION",9), iVar2 != 0))) {
          fprintf(stderr, "  FUN_10002040: ACTION item, cur='%.30s'\n", _sctx_script_cur);
          FUN_100019f0((intptr_t)param_1);
          fprintf(stderr, "  FUN_10002040: FUN_100019f0 done, token='%.30s'\n", param_1 + 0x48034);
          iVar2 = strncmp(param_1 + 0x48034,DAT_100103b0,2);
          if (iVar2 == 0) {
            FUN_10002330(param_1);
            FUN_10001960((intptr_t)param_1);
            if (*_sctx_script_cur == ',') {
              _sctx_script_cur = _sctx_script_cur + 1;
            }
          }
          else {
            FUN_10002d20(param_1,(byte *)(param_1 + 0x48034));
            if (*(int *)((intptr_t)_exec_buf + 0x7fd4 + *(int *)(param_1 + 0x1c) * 0x2c) != 10)
            {
              *(int *)((intptr_t)_exec_buf + 0x7fd4 + *(int *)(param_1 + 0x1c) * 0x2c) =
                   2;
            }
          }
          FUN_10001960((intptr_t)param_1);
          iVar2 = strncmp(_sctx_script_cur,"CONDITION",9);
          if ((iVar2 == 0) || (_sctx_script_end <= _sctx_script_cur)) break;
        }
        _exec_jump_ptrs[iVar3] =
             (intptr_t)_exec_buf + 0x8000 + *(int *)(param_1 + 0x1c) * 0x2c;
      }
      else {
        FUN_100012f0(_sctx_script_cur,0);
      }
    } while (_sctx_script_cur < _sctx_script_end);
  }
  return;
}





void  FUN_10002330(char *param_1)

{
  int iVar1;
  BOOL bVar2;
  int iVar3;
  int iVar4;
  char *local_4;
  char *_exec_buf;
  
  local_4 = param_1;
  _exec_buf = _sctx_exec_buffer;
  FUN_10001960((intptr_t)param_1);
  iVar3 = strncmp(_sctx_script_cur,"ALWAYS",6);
  if (iVar3 == 0) {
    _sctx_script_cur = _sctx_script_cur + 6;
    FUN_10001960((intptr_t)param_1);
    FUN_10002ab0((intptr_t)param_1);
  }
  else {
    FUN_10002810(param_1);
  }
  FUN_10001960((intptr_t)param_1);
  iVar3 = *(int *)(param_1 + 0x1c) + -1;
  if (*_sctx_script_cur != '[') {
    local_4 = "Incorrect IF construction. No [ bracket.";
  }
  _sctx_script_cur = _sctx_script_cur + 1;
  FUN_10001960((intptr_t)param_1);
  if (*_sctx_script_cur != ']') {
    do {
      bVar2 = FUN_100019f0((intptr_t)param_1);
      FUN_10002d20(param_1,(byte *)(param_1 + 0x48034));
      *(int *)((intptr_t)_exec_buf + 0x7fd4 + *(int *)(param_1 + 0x1c) * 0x2c) = 2;
    } while (bVar2);
  }
  _sctx_script_cur = _sctx_script_cur + 1;
  FUN_10001960((intptr_t)param_1);
  iVar1 = *(int *)(param_1 + 0x1c);
  _exec_jump_ptrs[iVar3] =
       (intptr_t)_exec_buf + 0x8000 + iVar1 * 0x2c;
  *(int *)((intptr_t)_exec_buf + 0x17004 + iVar3 * 4) = -1;
  iVar4 = strncmp(_sctx_script_cur,DAT_10010410,4);
  if (iVar4 == 0) {
    _sctx_script_cur = _sctx_script_cur + 4;
    FUN_10001960((intptr_t)param_1);
    if (*_sctx_script_cur != '[') {
      local_4 = "Incorrect ELSE construction. No [ bracket.";
    }
    _sctx_script_cur = _sctx_script_cur + 1;
    FUN_10001960((intptr_t)param_1);
    do {
      bVar2 = FUN_100019f0((intptr_t)param_1);
      FUN_10002d20(param_1,(byte *)(param_1 + 0x48034));
      *(int *)((intptr_t)_exec_buf + 0x7fd4 + *(int *)(param_1 + 0x1c) * 0x2c) = 2;
    } while (bVar2);
    _sctx_script_cur = _sctx_script_cur + 1;
    FUN_10001960((intptr_t)param_1);
    _exec_jump_ptrs[iVar1 - 1] =
         (intptr_t)_exec_buf + 0x8000 + *(int *)(param_1 + 0x1c) * 0x2c;
    *(int *)((intptr_t)_exec_buf + 0x17004 + iVar3 * 4) = -1;
  }
  return;
}





void  FUN_10002510(void *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  void *pvVar4;
  void *this_ptr;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  char *pcVar5;
  size_t _Count;
  size_t sVar6;
  int local_28;
  byte local_24 [36]; /* was local_24[4] + apcStack_20[8]; combined into one 36-byte buffer */
  
  _Count = 0;
  uVar2 = FUN_100057ee((void *)(int)*_sctx_script_cur,
                       (int)*_sctx_script_cur);
  if ((uVar2 != 0) || (*_sctx_script_cur == '_')) {
    for (; (pvVar4 = (void *)(int)*(_sctx_script_cur + _Count),
           uVar2 = FUN_100057ee(pvVar4,(int)(intptr_t)pvVar4), uVar2 != 0 ||
           ((uVar2 = FUN_1000581c(this_ptr,(int)*(_sctx_script_cur + _Count)),
            uVar2 != 0 || (*(_sctx_script_cur + _Count) == '_'))));
        _Count = _Count + 1) {
    }
    strncpy((char *)local_24,_sctx_script_cur,_Count);
    local_24[_Count] = 0;
    iVar3 = strncmp((char *)local_24,DAT_1001049c,3);
    if ((iVar3 == 0) && (uVar2 = FUN_1000581c(this_00,(int)(char)local_24[3]), uVar2 != 0)) {
      FUN_1000572e((char *)(local_24 + 3),DAT_100103b4, &local_28);
      FUN_10002b10(param_1,local_28);
      _sctx_script_cur = _sctx_script_cur + _Count;
      return;
    }
    iVar3 = FUN_10002960(param_1,local_24);
    if (iVar3 == -1) {
      FUN_100012f0("Undefined function, variable or constant name in line ",
                   *(int *)((intptr_t)param_1 + 0x48024));
    }
    iVar1 = *(int *)((intptr_t)param_1 + iVar3 * 0x48 + 0x40);
    if (iVar1 == 7) {
      pcVar5 = _sctx_script_cur;
      if (pcVar5[_Count] == '(') {
        do {
          sVar6 = _Count;
          _Count = sVar6 + 1;
        } while (pcVar5[sVar6] != ')');
        strncpy((char *)((intptr_t)param_1 + 0x48034),pcVar5,_Count);
        *(char *)(sVar6 + 0x48035 + (intptr_t)param_1) = 0;
        _sctx_script_cur = _sctx_script_cur + _Count;
        FUN_10002d20(param_1,(byte *)((intptr_t)param_1 + 0x48034));
        return;
      }
      /* error: "Incorrect function call. No (." — dead store in original binary */
    }
    if (iVar1 == 3) {
      FUN_10002a40(param_1,(int)_sctx_var_values[iVar3]);
      _sctx_script_cur = _sctx_script_cur + _Count;
      return;
    }
    if (iVar1 == 5) {
      FUN_10002b80(param_1,(int)_sctx_var_values[iVar3]);
      _sctx_script_cur = _sctx_script_cur + _Count;
      return;
    }
  }
  uVar2 = FUN_1000581c(_sctx_script_cur,(int)*_sctx_script_cur);
  if (uVar2 != 0) {
    FUN_1000572e(_sctx_script_cur,DAT_100103b4, &local_28);
    FUN_10002a40(param_1,local_28);
    uVar2 = FUN_1000581c((void *)(int)*_sctx_script_cur,
                         (int)*_sctx_script_cur);
    pvVar4 = extraout_ECX;
    while (uVar2 != 0) {
      _sctx_script_cur = _sctx_script_cur + 1;
      uVar2 = FUN_1000581c(pvVar4,(int)*_sctx_script_cur);
      pvVar4 = extraout_ECX_00;
    }
  }
  return;
}





byte  FUN_10002750(intptr_t param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = _sctx_script_cur;
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





int  FUN_100027c0(intptr_t param_1)

{
  int iVar1;
  
  iVar1 = strncmp(_sctx_script_cur,DAT_100104a4,3);
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = strncmp(_sctx_script_cur,DAT_100104a0,2);
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
  uVar3 = FUN_100057ee((void *)(int)*_sctx_script_cur,
                       (int)*_sctx_script_cur);
  if (((uVar3 == 0) && (*_sctx_script_cur != '_')) &&
     (uVar3 = FUN_1000581c(this_ptr,(int)*_sctx_script_cur), uVar3 == 0)) {
    cVar1 = *_sctx_script_cur;
    if (cVar1 == '!') goto LAB_10002898;
    if (cVar1 != '(') {
      return;
    }
    _sctx_script_cur = _sctx_script_cur + 1;
    FUN_10001960((intptr_t)param_1);
    FUN_10002810(param_1);
    FUN_10001960((intptr_t)param_1);
    if (*_sctx_script_cur == ')') {
      _sctx_script_cur = _sctx_script_cur + 1;
    }
  }
  else {
LAB_10002898:
    if (*_sctx_script_cur == '!') {
      _sctx_script_cur = _sctx_script_cur + 1;
      FUN_10001960((intptr_t)param_1);
      if (*_sctx_script_cur == '(') {
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
        cVar1 = *_sctx_script_cur;
        if (((cVar1 != '!') && (cVar1 != '=')) && ((cVar1 != '<' && (cVar1 != '>')))) break;
        _sctx_script_cur = _sctx_script_cur + 1;
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
    _sctx_script_cur = _sctx_script_cur + 3;
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
  char *_eb = _sctx_exec_buffer;
  int _c2 = *(int *)((intptr_t)this_ptr + 0x1c);
  *(int *)((intptr_t)_eb + 0x8004 + _c2 * 0x2c) = param_1;
  *(int *)((intptr_t)_eb + 0x8008 + _c2 * 0x2c) = 0;
  _exec_jump_ptrs[_c2] = 0;
  *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) = 4;
  *(int *)((intptr_t)this_ptr + 0x1c) = _c2 + 1;
  return;
}





void  FUN_10002a40(void *this_ptr,int param_1)

{
  char *_eb = _sctx_exec_buffer;
  int _c2 = *(int *)((intptr_t)this_ptr + 0x1c);
  *(int *)((intptr_t)_eb + 0x8004 + _c2 * 0x2c) = param_1;
  *(int *)((intptr_t)_eb + 0x8008 + _c2 * 0x2c) = 0;
  _exec_jump_ptrs[_c2] = 0;
  *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) = 3;
  *(int *)((intptr_t)this_ptr + 0x1c) = _c2 + 1;
  return;
}





void  FUN_10002ab0(intptr_t param_1)

{
  char *_eb = _sctx_exec_buffer;
  int _c2 = *(int *)(param_1 + 0x1c);
  *(int *)((intptr_t)_eb + 0x8004 + _c2 * 0x2c) = 0;
  *(int *)((intptr_t)_eb + 0x8008 + _c2 * 0x2c) = 0;
  _exec_jump_ptrs[_c2] = 0;
  *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) = 8;
  *(int *)(param_1 + 0x1c) = _c2 + 1;
  return;
}





void  FUN_10002b10(void *this_ptr,int param_1)

{
  char *_eb = _sctx_exec_buffer;
  int _c2 = *(int *)((intptr_t)this_ptr + 0x1c);
  *(int *)((intptr_t)_eb + 0x8004 + _c2 * 0x2c) = param_1;
  *(int *)((intptr_t)_eb + 0x8008 + _c2 * 0x2c) = 0;
  _exec_jump_ptrs[_c2] = 0;
  *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) = 9;
  *(int *)((intptr_t)this_ptr + 0x1c) = _c2 + 1;
  return;
}





void  FUN_10002b80(void *this_ptr,int param_1)

{
  char *_eb = _sctx_exec_buffer;
  int _c2 = *(int *)((intptr_t)this_ptr + 0x1c);
  *(int *)((intptr_t)_eb + 0x8004 + _c2 * 0x2c) = param_1;
  *(int *)((intptr_t)_eb + 0x8008 + _c2 * 0x2c) = 0;
  _exec_jump_ptrs[_c2] = 0;
  *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) = 5;
  *(int *)((intptr_t)this_ptr + 0x1c) = _c2 + 1;
  return;
}





byte * __cdecl FUN_10002bf0(intptr_t param_1,byte *param_2)

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
    *(char *)(DAT_100132e4 + (intptr_t)DAT_100132c8) = DAT_100132d4;
    DAT_100132c8 = (void *)((intptr_t)DAT_100132c8 + 1);
  }
  DAT_100132e8 = (byte *)(DAT_100132e4 + (intptr_t)DAT_100132c8);
  iVar1 = FUN_100057b0(DAT_100132e8,param_2);
  DAT_100132c8 = (void *)((intptr_t)DAT_100132c8 + iVar1);
  DAT_100132e8 = (byte *)(DAT_100132e4 + (intptr_t)DAT_100132c8);
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
  DAT_100132c8 = (void *)((intptr_t)DAT_100132c8 + iVar3);
  if (((*(char *)(DAT_100132e4 + (intptr_t)DAT_100132c8) == '(') &&
      (*(char *)(DAT_100132e4 + 3 + (intptr_t)DAT_100132c8) == ')')) &&
     (uVar2 = FUN_1000581c(DAT_100132c8,(int)*(char *)(DAT_100132e4 + 1 + (intptr_t)DAT_100132c8)),
     uVar2 == 0)) {
    DAT_100132c8 = (void *)((intptr_t)DAT_100132c8 + 4);
    iVar1 = FUN_10004db0((byte *)(DAT_100132e4 + (intptr_t)DAT_100132c8),param_2);
    DAT_100132c8 = (void *)((intptr_t)DAT_100132c8 + iVar1);
  }
  DAT_100132d4 = *(char *)(DAT_100132e4 + (intptr_t)DAT_100132c8);
  *(char *)(DAT_100132e4 + (intptr_t)DAT_100132c8) = 0;
  return DAT_100132e8;
}





void  FUN_10002d20(void *this_ptr,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  unsigned int uVar4;
  int uVar5;
  void *this_00;
  byte *pbVar6;
  int iVar7;
  char *local_238;
  char local_231;
  int local_230;
  _SB sb_22c;  /* was local_22c, local_228, local_224, local_220 */
  int local_21c;
  int local_218;
  char *local_214;
  int local_210;
  char local_20c [256];
  char local_10c [256];
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  local_21c = DAT_10010500;
  local_218 = DAT_10010504;
  fprintf(stderr, "  FUN_10002d20: tokenizing param_1=%p\n", param_1);
  pbVar2 = FUN_10002bf0((intptr_t)param_1,(byte *)&local_21c);
  fprintf(stderr, "  FUN_10002d20: token='%s'\n", pbVar2);
  iVar3 = FUN_10004db0(param_1,DAT_100104f8);
  param_1[iVar3] = 0;
  local_230 = -1;
  iVar3 = strncmp((char *)pbVar2,DAT_1001049c,3);
  if (iVar3 == 0) {
    uVar4 = FUN_1000581c(this_00,(int)(char)pbVar2[3]);
    if (uVar4 != 0) {
      FUN_1000572e((char *)(pbVar2 + 3),DAT_100103b4, &local_21c);
      pbVar2 = FUN_10002bf0(0,(byte *)&local_21c);
    }
  }
  iVar3 = FUN_10002960(this_ptr,pbVar2);
  fprintf(stderr, "  FUN_10002d20: lookup '%s' -> idx=%d\n", pbVar2, iVar3);
  if (iVar3 == -1) {
    fprintf(stderr, "  FUN_10002d20: ERROR unknown function '%s', skipping\n", pbVar2);
    return;  /* On Win32 __CxxThrowException_8 would throw; we just skip */
  }
  sb_22c.data = (char *)0x0;
  sb_22c.flag = local_231;
  sb_22c.length = 0;
  sb_22c.capacity = 0;
  uVar4 = -1;
  pbVar6 = pbVar2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  local_238 = (char *)(~uVar4 - 1);
  uVar5 = FUN_10003be0((char *)&sb_22c,(unsigned int)local_238,'\x01');
  if ((char)uVar5 != '\0') {
    pbVar6 = (byte *)sb_22c.data;
    for (uVar4 = (unsigned int)local_238 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(int *)pbVar6 = *(int *)pbVar2;
      pbVar2 = pbVar2 + 4;
      pbVar6 = pbVar6 + 4;
    }
    for (uVar4 = (unsigned int)local_238 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar6 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      pbVar6 = pbVar6 + 1;
    }
    sb_22c.length = (int)(intptr_t)local_238;
    sb_22c.data[(intptr_t)local_238] = 0;
  }
  iVar7 = 0;
  local_238 = (char *)((intptr_t)this_ptr + iVar3 * 0x48);
  local_4 = 0;
  {
  char *_eb = _sctx_exec_buffer;
  int _c2 = *(int *)((intptr_t)this_ptr + 0x1c);
  fprintf(stderr, "  FUN_10002d20: _eb=%p _c2=%d iVar3=%d local_238=%p\n", _eb, _c2, iVar3, local_238);
  /* Store FARPROC in exec side table */
  _exec_func_ptrs[_c2] = _sctx_var_values[iVar3];
  *(int *)((intptr_t)_eb + 0x8008 + _c2 * 0x2c) =
       *(int *)(local_238 + 0x4c);
  _exec_jump_ptrs[_c2] = 0;
  int _switch_val = *(int *)((intptr_t)this_ptr + (iVar3 * 9 + 9) * 8);
  fprintf(stderr, "  FUN_10002d20: switch val=%d nargs=%d\n", _switch_val, *(int *)(local_238 + 0x4c));
  switch(_switch_val) {
  default:
    *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) = 2;
    break;
  case 1:
  case 2:
    *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) = 0;
    break;
  case 5:
    *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) = 1;
  }
  if (local_230 != -1) {
    *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) = 10;
    *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) =
         *(int *)((intptr_t)_eb + 0x8000 + _c2 * 0x2c) +
         local_230;
  }
  if (0 < *(int *)(local_238 + 0x4c)) {
    do {
      pbVar2 = FUN_10002bf0(0,(byte *)&local_21c);
      if (*pbVar2 == 0) {
        FUN_100055c8(local_10c,(byte *)"Too little arguments in call of function %s.");
        local_214 = local_10c;
      }
      iVar3 = FUN_10002960(this_ptr,pbVar2);
      if (iVar3 == -1) {
        iVar3 = FUN_1000572e((char *)pbVar2,DAT_100103b4, &local_210);
        if (iVar3 == 1) {
          *(int *)
           ((intptr_t)_eb + (iVar7 + (_c2 + 0x2e9) * 0xb) * 4) =
               local_210;
        }
        else if (*pbVar2 == 0x27) {
          *(int *)((intptr_t)_eb +
                  ((_c2 + 0x2e9) * 0xb + iVar7) * 4) = (int)(char)pbVar2[1];
        }
        else {
          uVar5 = FUN_10003140((void *)_eb,(char *)pbVar2);
          *(int *)
           ((intptr_t)_eb + ((_c2 + 0x2e9) * 0xb + iVar7) * 4) =
               uVar5;
        }
      }
      else {
        *(int *)
         ((intptr_t)_eb + ((_c2 + 0x2e9) * 0xb + iVar7) * 4) =
             (int)_sctx_var_values[iVar3];
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(local_238 + 0x4c));
  }
  *(int *)((intptr_t)this_ptr + 0x1c) = _c2 + 1;
  }
  if (sb_22c.data != (char *)0x0) {
    bVar1 = (byte)sb_22c.data[-1];
    if ((bVar1 == 0) || (bVar1 == 0xff)) {
      FUN_100047d0(sb_22c.data + -1);
    }
    else {
      sb_22c.data[-1] = (char)(bVar1 - 1);
    }
  }
  return;
}





void  FUN_100030c0(intptr_t param_1)

{
  int iVar3;
  
  iVar3 = 0;
  do {
    /* cmd_type at +0x8000 = 6 (END marker) */
    *(int *)(param_1 + 0x8000 + iVar3 * 0x2c) = 6;
    /* times value at +0x17004 = -1 */
    *(int *)(param_1 + 0x17004 + iVar3 * 4) = -1;
    /* times ptr (piVar3[9]) — store in side table */
    _exec_times_ptrs[iVar3] = (intptr_t)(param_1 + 0x17004 + iVar3 * 4);
    /* jump target (piVar3[10]) — clear */
    _exec_jump_ptrs[iVar3] = 0;
    _exec_func_ptrs[iVar3] = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x400);
  *(int *)(param_1 + 0x17000) = 0;
  return;
}





void  FUN_10003100(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x17000)) {
    do {
      FUN_100047d0((int *)_sctx_strings[iVar1]);
      iVar1 = iVar1 + 1;
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
  { int _idx = *(int *)((intptr_t)this_ptr + 0x17000);
    _sctx_strings[_idx] = pcVar3;
    *(int *)((intptr_t)this_ptr + 0x17000) = _idx + 1;
  }
  return (int)(intptr_t)pcVar3;
}





void  FUN_100031c0(int *param_1)

{
  char *puVar1;
  unsigned int uVar2;
  int *piVar3;
  int *_piBase;
  unsigned int unaff_ESI;
  int iVar4;
  unsigned int unaff_EDI;
  int iVar5;
  unsigned int *puVar6;
  BOOL bVar7;
  int *local_c;
  int *local_8;
  int _eidx;
  
  iVar4 = 0;
  if (0 < DAT_100132f0) {
    iVar5 = 0;
    local_8 = param_1;
    do {
      if ((iVar5 < 0) || (DAT_100132f0 <= iVar4)) {
        local_c = (int *)"List index when taking elem is out of bounds.";
      }
      puVar1 = ((_SB *)(_playerlist_data + iVar5))->data;
      if (puVar1 == (char *)0x0) {
        puVar1 = &DAT_1000e168;
      }
      SetPlayerName(iVar4,puVar1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + (int)sizeof(_SB);
      param_1 = local_8;
    } while (iVar4 < DAT_100132f0);
  }
  _piBase = param_1 + 0x2000;
  piVar3 = _piBase;
  local_c = param_1 + 0x6401;
  local_8 = piVar3;
  #define EXEC_IDX(p) ((int)((p) - _piBase) / 11)
  do {
    while( 1 ) {
      while( 1 ) {
        while( 1 ) {
          if ((char)*piVar3 == '\x06') {
            return;
          }
          _eidx = EXEC_IDX(piVar3);
          if ((char)*piVar3 == '\0') {
            for (uVar2 = piVar3[2] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            }
            uVar2 = ((int(*)())_exec_func_ptrs[_eidx])();
            unaff_EDI = uVar2 & 1;
            goto LAB_100033f5;
          }
          if ((char)*piVar3 < '\n') break;
          puVar6 = (unsigned int *)(piVar3 + piVar3[2] + 2);
          for (uVar2 = piVar3[2] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            unaff_EDI = *puVar6;
            puVar6 = puVar6 + -1;
          }
          iVar4 = ((int(*)())_exec_func_ptrs[_eidx])();
          local_c[*piVar3 + -10] = iVar4;
          piVar3 = piVar3 + 0xb;
        }
        if ((char)*piVar3 != '\x01') break;
        _eidx = EXEC_IDX(piVar3);
        for (uVar2 = piVar3[2] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        }
        unaff_EDI = ((int(*)())_exec_func_ptrs[_eidx])();
        piVar3 = piVar3 + 0xb;
      }
      if ((char)*piVar3 != '\x02') break;
      _eidx = EXEC_IDX(piVar3);
      puVar6 = (unsigned int *)(piVar3 + piVar3[2] + 2);
      for (uVar2 = piVar3[2] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        unaff_EDI = *puVar6;
        puVar6 = puVar6 + -1;
      }
      ((int(*)())_exec_func_ptrs[_eidx])();
      if (_exec_jump_ptrs[_eidx] == 0) {
LAB_10003425:
        piVar3 = piVar3 + 0xb;
      }
      else {
        piVar3 = (int *)_exec_jump_ptrs[_eidx];
      }
    }
    _eidx = EXEC_IDX(piVar3);
    if ((char)*piVar3 == '\b') {
LAB_100033f5:
      if (_exec_jump_ptrs[_eidx] == 0) goto LAB_10003425;
      if (unaff_EDI == 0) {
LAB_10003412:
        piVar3 = (int *)_exec_jump_ptrs[_eidx];
      }
      else {
        iVar4 = *(int *)_exec_times_ptrs[_eidx];
        if (iVar4 != -1) {
          if (iVar4 < 1) goto LAB_10003412;
          *(int *)_exec_times_ptrs[_eidx] = iVar4 + -1;
        }
        piVar3 = piVar3 + 0xb;
      }
    }
    else if ((char)*piVar3 == '\x03') {
      unaff_EDI = piVar3[1];
      piVar3 = piVar3 + 0xb;
    }
    else {
      if ((char)*piVar3 != '\t') {
        if ((char)*piVar3 != '\x04') goto LAB_10003425;
        if ((char)piVar3[1] == '\r') {
          unaff_EDI = unaff_EDI ^ 1;
        }
        else if ((char)piVar3[1] == '\f') {
          unaff_ESI = unaff_ESI | unaff_EDI;
        }
        else if ((char)piVar3[1] == '\v') {
          unaff_ESI = unaff_ESI & unaff_EDI;
        }
        else if ((char)piVar3[1] == '\b') {
          bVar7 = unaff_ESI != unaff_EDI;
          unaff_ESI = 1;
          if (bVar7) {
            unaff_ESI = 0;
          }
        }
        else if ((char)piVar3[1] == '\n') {
          bVar7 = (int)unaff_ESI <= (int)unaff_EDI;
          unaff_ESI = 1;
          if (bVar7) {
            unaff_ESI = 0;
          }
        }
        else if ((char)piVar3[1] == '\t') {
          bVar7 = (int)unaff_EDI <= (int)unaff_ESI;
          unaff_ESI = 1;
          if (bVar7) {
            unaff_ESI = 0;
          }
        }
        else if ((char)piVar3[1] == '\a') {
          bVar7 = unaff_ESI == unaff_EDI;
          unaff_ESI = 1;
          if (bVar7) {
            unaff_ESI = 0;
          }
        }
        else if ((char)piVar3[1] < '\x06') {
          if ('\x05' < (char)piVar3[1]) goto LAB_10003425;
          bVar7 = unaff_ESI != unaff_EDI;
          unaff_ESI = 1;
          if (bVar7) {
            unaff_ESI = 0;
          }
        }
        else {
          bVar7 = unaff_ESI != unaff_EDI;
          unaff_ESI = 1;
          if (bVar7) {
            unaff_ESI = 0;
          }
        }
        goto LAB_100033f5;
      }
      unaff_EDI = local_c[piVar3[1]];
      piVar3 = piVar3 + 0xb;
    }
  } while( 1 );
}







char *  FUN_100036d0(void *this_ptr,char *param_1)

{
  _SB *sb = SB(this_ptr);
  _SB *src = SB(param_1);
  char uVar1;
  int uVar3;
  char *puVar4;
  int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar2;
  int iVar8;
  int *puVar9;
  
  uVar1 = *param_1;
  sb->data = NULL;
  sb->flag = uVar1;
  sb->length = 0;
  sb->capacity = 0;
  uVar7 = src->length;
  if (this_ptr == (void *)param_1) {
    if (uVar7 != 0) {
      FUN_10004a07();
    }
    FUN_10003e20(this_ptr);
    iVar2 = sb->length - uVar7;
    iVar8 = -1;
    if ((iVar2 == -1) || (iVar8 = iVar2, iVar2 != 0)) {
      puVar5 = (int *)(sb->data + uVar7);
      FUN_10005870(puVar5,(int *)((intptr_t)puVar5 + iVar8),iVar2 - iVar8);
      uVar7 = sb->length - iVar8;
      uVar3 = FUN_10003be0(this_ptr,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_10003bc0(this_ptr,uVar7);
      }
    }
    FUN_10003e20(this_ptr);
    return this_ptr;
  }
  if (uVar7 != 0) {
    puVar4 = src->data;
    if (puVar4 == (char *)0x0) {
      puVar4 = &DAT_1000e168;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      sb->data = NULL;
      sb->length = 0;
      sb->capacity = 0;
      puVar4 = src->data;
      if (puVar4 == (char *)0x0) {
        puVar4 = &DAT_1000e168;
      }
      sb->data = puVar4;
      sb->length = src->length;
      sb->capacity = src->capacity;
      puVar4[-1] = puVar4[-1] + '\x01';
      return this_ptr;
    }
  }
  uVar3 = FUN_10003be0(this_ptr,uVar7,'\x01');
  if ((char)uVar3 != '\0') {
    puVar5 = (int *)&DAT_1000e168;
    if (src->data != NULL) {
      puVar5 = (int *)src->data;
    }
    puVar9 = (int *)sb->data;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar9 = *(char *)puVar5;
      puVar5 = (int *)((intptr_t)puVar5 + 1);
      puVar9 = (int *)((intptr_t)puVar9 + 1);
    }
    FUN_10003bc0(this_ptr,uVar7);
  }
  return this_ptr;
}





void  FUN_100037f0(int param_1)

{
  _SB *sb = SB(param_1);
  char cVar1;
  
  if (sb->data != NULL) {
    cVar1 = sb->data[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0((int *)(sb->data - 1));
    }
    else {
      sb->data[-1] = cVar1 - 1;
    }
  }
  sb->data = NULL;
  sb->length = 0;
  sb->capacity = 0;
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
  puVar1 = calloc(1, 0x100 * sizeof(_SB) + 4);
  local_4 = 0;
  if (puVar1 == (int *)0x0) {
    puVar2 = (int *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x100;
  }
  _playerlist_data = (char *)puVar2;
  *param_1 = (int)(intptr_t)puVar2;
  param_1[2] = 0x100;
  param_1[1] = 0;
  return param_1;
}





void *  FUN_100038d0(void *this_ptr,void *param_1,unsigned int param_2,unsigned int param_3)

{
  _SB *sb = SB(this_ptr);
  _SB *src = SB(param_1);
  char cVar1;
  int uVar3;
  char *puVar4;
  unsigned int uVar5;
  int *puVar6;
  unsigned int uVar7;
  int iVar2;
  int iVar8;
  int *puVar9;
  
  if ((unsigned int)src->length < param_2) {
    FUN_10004a07();
  }
  uVar7 = (unsigned int)src->length - param_2;
  if (param_3 < uVar7) {
    uVar7 = param_3;
  }
  if (this_ptr == param_1) {
    uVar7 = uVar7 + param_2;
    if ((unsigned int)sb->length < uVar7) {
      FUN_10004a07();
    }
    FUN_10003e20(this_ptr);
    iVar2 = sb->length - uVar7;
    iVar8 = -1;
    if ((iVar2 == -1) || (iVar8 = iVar2, iVar2 != 0)) {
      puVar6 = (int *)(sb->data + uVar7);
      FUN_10005870(puVar6,(int *)((intptr_t)puVar6 + iVar8),iVar2 - iVar8);
      uVar7 = sb->length - iVar8;
      uVar3 = FUN_10003be0(this_ptr,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        sb->length = uVar7;
        sb->data[uVar7] = 0;
      }
    }
    FUN_10003e20(this_ptr);
    uVar7 = (unsigned int)sb->length;
    if (uVar7 < param_2) {
      param_2 = uVar7;
    }
    if (param_2 == 0) {
      return this_ptr;
    }
    FUN_10005870((int *)sb->data,
                 (int *)(sb->data + param_2),uVar7 - param_2);
    uVar7 = sb->length - param_2;
    uVar3 = FUN_10003be0(this_ptr,uVar7,'\0');
    if ((char)uVar3 == '\0') {
      return this_ptr;
    }
    FUN_10003bc0(this_ptr,uVar7);
    return this_ptr;
  }
  if ((uVar7 != 0) && (uVar7 == (unsigned int)src->length)) {
    puVar4 = src->data;
    if (puVar4 == (char *)0x0) {
      puVar4 = &DAT_1000e168;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      puVar4 = sb->data;
      if (puVar4 != NULL) {
        cVar1 = puVar4[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_100047d0((int *)(puVar4 - 1));
        }
        else {
          puVar4[-1] = cVar1 - 1;
        }
      }
      sb->data = NULL;
      sb->length = 0;
      sb->capacity = 0;
      puVar4 = src->data;
      if (puVar4 == (char *)0x0) {
        puVar4 = &DAT_1000e168;
      }
      sb->data = puVar4;
      sb->length = src->length;
      sb->capacity = src->capacity;
      puVar4[-1] = puVar4[-1] + '\x01';
      return this_ptr;
    }
  }
  uVar5 = FUN_10003d00();
  if (uVar5 < uVar7) {
    FUN_100047db();
  }
  puVar4 = sb->data;
  if (((puVar4 == NULL) || (cVar1 = puVar4[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar7 == 0) {
      FUN_10003ad0(this_ptr,'\x01');
      return this_ptr;
    }
    if (((unsigned int)sb->capacity < 0x20) && (uVar7 <= (unsigned int)sb->capacity))
    goto LAB_10003a9a;
    FUN_10003ad0(this_ptr,'\x01');
  }
  else if (uVar7 == 0) {
    puVar4[-1] = cVar1 + -1;
    FUN_10003ad0(this_ptr,'\0');
    return this_ptr;
  }
  FUN_10003d10(this_ptr, uVar7);
LAB_10003a9a:
  puVar4 = src->data;
  if (puVar4 == (char *)0x0) {
    puVar4 = &DAT_1000e168;
  }
  puVar6 = (int *)(puVar4 + param_2);
  puVar9 = (int *)sb->data;
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar9 = *(char *)puVar6;
    puVar6 = (int *)((intptr_t)puVar6 + 1);
    puVar9 = (int *)((intptr_t)puVar9 + 1);
  }
  sb->length = uVar7;
  sb->data[uVar7] = 0;
  return this_ptr;
}





void  FUN_10003ad0(void *this_ptr,char param_1)

{
  _SB *sb = SB(this_ptr);
  char cVar1;
  
  if ((param_1 != '\0') && (sb->data != NULL)) {
    cVar1 = sb->data[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0((int *)(sb->data - 1));
    }
    else {
      sb->data[-1] = cVar1 - 1;
    }
  }
  sb->data = NULL;
  sb->length = 0;
  sb->capacity = 0;
  return;
}





void *  FUN_10003b20(void *this_ptr,int *param_1,unsigned int param_2)

{
  _SB *sb = SB(this_ptr);
  char cVar1;
  unsigned int uVar3;
  int *puVar4;
  
  if (-3 < param_2) {
    FUN_100047db();
  }
  if (((sb->data == NULL) || (cVar1 = sb->data[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_2 == 0) {
      FUN_10003ad0(this_ptr,'\x01');
      return this_ptr;
    }
    if (((unsigned int)sb->capacity < 0x20) && (param_2 <= (unsigned int)sb->capacity))
    goto LAB_10003b91;
    FUN_10003ad0(this_ptr,'\x01');
  }
  else if (param_2 == 0) {
    sb->data[-1] = cVar1 - 1;
    sb->data = NULL;
    sb->length = 0;
    sb->capacity = 0;
    return this_ptr;
  }
  FUN_10003d10(this_ptr, param_2);
LAB_10003b91:
  puVar4 = (int *)sb->data;
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar4 = *(char *)param_1;
    param_1 = (int *)((intptr_t)param_1 + 1);
    puVar4 = (int *)((intptr_t)puVar4 + 1);
  }
  sb->length = param_2;
  sb->data[param_2] = 0;
  return this_ptr;
}





void  FUN_10003bc0(void *this_ptr,int param_1)

{
  _SB *sb = SB(this_ptr);
  sb->length = param_1;
  sb->data[param_1] = 0;
  return;
}





int  FUN_10003be0(void *this_ptr,unsigned int param_1,char param_2)

{
  _SB *sb = SB(this_ptr);
  char cVar1;
  int uVar6;
  char *pcVar2;
  unsigned int uVar3;
  int uVar4;
  char *puVar5;
  
  if (-3 < param_1) {
    FUN_100047db();
  }
  puVar5 = sb->data;
  uVar6 = (int)((uintptr_t)puVar5 >> 8);
  if (((puVar5 == (char *)0x0) || (cVar1 = puVar5[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_1 == 0) {
      if (param_2 == '\0') {
        if (puVar5 != (char *)0x0) {
          sb->length = 0;
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
          sb->data = NULL;
          sb->length = 0;
          sb->capacity = 0;
          return (unsigned int)(uintptr_t)pcVar2 & -256;
        }
        uVar3 = FUN_100047d0((int *)pcVar2);
      }
      sb->data = NULL;
      sb->length = 0;
      sb->capacity = 0;
      return uVar3 & -256;
    }
    if (param_2 != '\0') {
      if ((0x1f < (unsigned int)sb->capacity) || ((unsigned int)sb->capacity < param_1)) {
        if (puVar5 != (char *)0x0) {
          cVar1 = puVar5[-1];
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            puVar5[-1] = cVar1 + -1;
            sb->data = NULL;
            sb->length = 0;
            sb->capacity = 0;
            uVar4 = FUN_10003d10(this_ptr, param_1);
            return (int)1;
          }
          FUN_100047d0((int *)(puVar5 - 1));
        }
        sb->data = NULL;
        sb->length = 0;
        sb->capacity = 0;
        uVar4 = FUN_10003d10(this_ptr, param_1);
        return (int)1;
      }
      goto LAB_10003cf0;
    }
    if (param_1 <= (unsigned int)sb->capacity) goto LAB_10003cf0;
  }
  else if (param_1 == 0) {
    puVar5[-1] = cVar1 + -1;
    sb->data = NULL;
    sb->length = 0;
    sb->capacity = 0;
    return (unsigned int)uVar6 << 8;
  }
  puVar5 = (char *)FUN_10003d10(this_ptr, param_1);
LAB_10003cf0:
  return (int)1;
}





int FUN_10003d00(void)

{
  return -3;
}





/* StrBuf::_realloc — allocate new buffer, copy old data, free old, update _SB.
   Merged FUN_10003d10 + FUN_10003d90 (the latter was a broken decompilation
   artifact using unaff_EBX/EBP — it was the tail of this function). */
int FUN_10003d10(void *strbuf, unsigned int param_1)

{
  _SB *sb = SB(strbuf);
  unsigned int newcap;
  unsigned int copylen;
  char *newbuf;
  char *oldbuf;
  char cVar1;

  newcap = param_1 | 0x1f;
  if (-3 < (int)newcap) {
    newcap = param_1;
  }
  newcap = newcap + 2;
  if ((int)newcap < 0) {
    newcap = 0;
  }
  newbuf = (char *)malloc(newcap);
  if (newbuf == NULL) return 0;

  /* copy old data into new buffer (after refcount byte) */
  copylen = sb->length;
  if (copylen > newcap - 2) copylen = newcap - 2;
  if (copylen != 0 && sb->data != NULL) {
    memcpy(newbuf + 1, sb->data, copylen);
  }

  /* free old buffer */
  oldbuf = sb->data;
  if (oldbuf != NULL) {
    cVar1 = oldbuf[-1];
    if (cVar1 == '\0' || cVar1 == (char)-1) {
      FUN_100047d0((int *)(oldbuf - 1));
    } else {
      oldbuf[-1] = cVar1 - 1;
    }
  }

  /* install new buffer */
  *newbuf = 0; /* refcount = 0 */
  sb->data = newbuf + 1;
  sb->capacity = newcap - 2;
  if (sb->length > sb->capacity) sb->length = sb->capacity;
  sb->data[sb->length] = '\0';
  return 0;
}





void  FUN_10003e20(void *param_1)

{
  _SB *sb = SB(param_1);
  char cVar1;
  unsigned int uVar3;
  unsigned int uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = sb->data;
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
  sb->data = NULL;
  sb->length = 0;
  sb->capacity = 0;
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
  if (((sb->data == NULL) || (cVar1 = sb->data[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_10003ad0(param_1,'\x01');
      return;
    }
    if (((unsigned int)sb->capacity < 0x20) && (uVar3 <= (unsigned int)sb->capacity))
    goto LAB_10003ece;
    FUN_10003ad0(param_1,'\x01');
  }
  else if (uVar3 == 0) {
    sb->data[-1] = cVar1 + -1;
    FUN_10003ad0(param_1,'\0');
    return;
  }
  FUN_10003d10(param_1, uVar3);
LAB_10003ece:
  pcVar6 = sb->data;
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
  sb->length = uVar3;
  sb->data[uVar3] = 0;
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
  _SB sb_424;  /* was local_424, local_420, local_41c, local_418 */
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
  sb_424.flag = local_411;
  uVar6 = -1;
  local_40c[sVar2] = '\0';
  sb_424.data = (char *)0x0;
  pcVar4 = local_40c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  sb_424.length = 0;
  sb_424.capacity = 0;
  uVar3 = FUN_10003be0((char *)&sb_424,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar4 = local_40c;
    pcVar8 = sb_424.data;
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
    sb_424.data[uVar6] = '\0';
    sb_424.length = uVar6;
  }
  uVar6 = sb_424.length;
  local_4 = 0;
  { _SB *dst = SB(param_2);
  if (param_2 == (char *)&sb_424) {
    FUN_10004590(param_2,sb_424.length,-1);
    FUN_10004590(param_2,0,0);
  }
  else {
    if (sb_424.length != 0) {
      pcVar4 = sb_424.data;
      if (sb_424.data == (char *)0x0) {
        pcVar4 = "";
      }
      if ((byte)pcVar4[-1] < 0xfe) {
        FUN_10003ad0(param_2,'\x01');
        pcVar4 = sb_424.data;
        if (sb_424.data == (char *)0x0) {
          pcVar4 = "";
        }
        dst->data = pcVar4;
        dst->length = sb_424.length;
        dst->capacity = sb_424.capacity;
        pcVar4[-1] = pcVar4[-1] + '\x01';
        goto LAB_100040c4;
      }
    }
    uVar3 = FUN_10003be0(param_2,sb_424.length,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar4 = sb_424.data;
      if (sb_424.data == (char *)0x0) {
        pcVar4 = "";
      }
      pcVar8 = dst->data;
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
  }
LAB_100040c4:
  if (sb_424.data != (char *)0x0) {
    cVar1 = sb_424.data[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0(sb_424.data + -1);
    }
    else {
      sb_424.data[-1] = cVar1 + -1;
    }
  }
  sVar2 = local_410;
  iVar5 = FUN_100057b0(param_1 + local_410,&DAT_10010540);
  return iVar5 + sVar2;
}





int *  FUN_10004120(void *this_ptr,char *param_1,size_t param_2)

{
  _Srch *s = SRCH(this_ptr);
  char *_Dest;
  
  _Dest = malloc(param_2 + 1);
  s->data = _Dest;
  strncpy(_Dest,param_1,param_2);
  _Dest[param_2] = 0;
  s->error = 0;
  s->cursor = NULL;
  return this_ptr;
}





void  FUN_10004160(int *param_1)

{
  FUN_100047d0((int *)SRCH(param_1)->data);
  return;
}





int  FUN_10004170(void *this_ptr,char *param_1)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  _SB sb_1c;  /* was local_1c, local_18, local_14, local_10 */
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  puVar2 = FUN_10005c30((unsigned int *)SRCH(this_ptr)->data,param_1);
  if (puVar2 == (unsigned int *)0x0) {
    SRCH(this_ptr)->error = 1;
    return 1;
  }
  SRCH(this_ptr)->cursor = (char *)puVar2;
  sb_1c.flag = *(char*)((char*)&param_1 + 0);
  sb_1c.data = NULL;
  sb_1c.length = 0;
  sb_1c.capacity = 0;
  local_4 = 0;
  iVar3 = FUN_10003f40((byte *)puVar2,(char *)&sb_1c);
  SRCH(this_ptr)->cursor = SRCH(this_ptr)->cursor + iVar3;
  if (sb_1c.data != NULL) {
    cVar1 = sb_1c.data[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0((int *)(sb_1c.data - 1));
    }
    else {
      sb_1c.data[-1] = cVar1 - 1;
    }
  }
  return 0;
}





void  FUN_10004230(void *this_ptr,char *param_1,char **param_2,char **param_3)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  _SB sb_1c;  /* was local_1c, local_18, local_14, local_10 */
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  puVar2 = FUN_10005c30((unsigned int *)SRCH(this_ptr)->data,param_1);
  if (puVar2 == (unsigned int *)0x0) {
    SRCH(this_ptr)->error = 1;
    return;
  }
  sb_1c.data = NULL;
  sb_1c.flag = *(char*)((char*)&param_1 + 0);
  sb_1c.length = 0;
  sb_1c.capacity = 0;
  local_4 = 0;
  iVar3 = FUN_10003f40((byte *)puVar2,(char *)&sb_1c);
  puVar4 = FUN_10005c30((unsigned int *)((intptr_t)puVar2 + iVar3),DAT_1001054c);
  if (puVar4 == (unsigned int *)0x0) {
    SRCH(this_ptr)->error = 1;
  }
  else {
    *param_2 = (char *)((intptr_t)puVar2 + iVar3);
    *param_3 = (char *)puVar4;
  }
  if (sb_1c.data != NULL) {
    cVar1 = sb_1c.data[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      sb_1c.data[-1] = cVar1 - 1;
      return;
    }
    FUN_100047d0((int *)(sb_1c.data - 1));
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
  _SB sb_1c;  /* was local_1c, local_18, local_14 */
  void *local_c;
  char *puStack_8;
  int local_4;
  
  local_4 = -1;
  sb_1c.flag = *(char*)((char*)&param_1 + 0);
  sb_1c.data = NULL;
  sb_1c.length = 0;
  sb_1c.capacity = 0;
  FUN_10003ad0((char *)&sb_1c,'\0');
  local_4 = 0;
  do {
    iVar2 = FUN_10003f40((byte *)SRCH(this_ptr)->cursor,(char *)&sb_1c);
    if (iVar2 == -1) {
      local_4 = -1;
      FUN_10003ad0((char *)&sb_1c,'\x01');
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
    uVar4 = FUN_100046b0((char *)&sb_1c,0,sb_1c.length,DAT_1001054c,~uVar4 - 1);
    if (uVar4 == 0) {
      uVar4 = -1;
      pcVar7 = (char *)&DAT_100132c0;
      goto code_r0x1000442d;
    }
    SRCH(this_ptr)->cursor = SRCH(this_ptr)->cursor + iVar2;
  } while (sb_1c.length == 0);
  if (sb_1c.data != (char *)0x0) {
    FUN_10004720((char *)&sb_1c);
    if (*sb_1c.data == '#') {
      FUN_10004720((char *)&sb_1c);
      pcVar7 = sb_1c.data;
      FUN_10004720((char *)&sb_1c);
      if (pcVar7 == (char *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (intptr_t)pcVar7 - (intptr_t)sb_1c.data;
      }
      FUN_10004590((char *)&sb_1c,uVar4,1);
      FUN_100038d0(param_1,(char *)&sb_1c,0,-1);
      local_4 = -1;
      FUN_10003ad0((char *)&sb_1c,'\x01');
      return 1;
    }
    if ((sb_1c.data[-1] != '\0') && (sb_1c.data[-1] != -1)) {
      FUN_10003be0((char *)&sb_1c,sb_1c.length,'\0');
    }
    if (sb_1c.data != (char *)0x0) {
      sb_1c.data[-1] = -1;
      pcVar7 = sb_1c.data + sb_1c.length;
      goto LAB_10004510;
    }
  }
  pcVar7 = (char *)0x0;
LAB_10004510:
  cVar1 = pcVar7[-1];
  while (cVar1 == ' ') {
    FUN_10004720((char *)&sb_1c);
    FUN_10004590((char *)&sb_1c,(intptr_t)(pcVar7 - 1) - (intptr_t)sb_1c.data,1);
    cVar1 = pcVar7[-1];
  }
  FUN_100038d0(param_1,(char *)&sb_1c,0,-1);
  if (sb_1c.data != (char *)0x0) {
    cVar1 = sb_1c.data[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100047d0(sb_1c.data + -1);
    }
    else {
      sb_1c.data[-1] = cVar1 + -1;
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
    puVar8 = (int *)SB(param_1)->data;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar8 = *(char *)puVar6;
      puVar6 = (int *)((intptr_t)puVar6 + 1);
      puVar8 = (int *)((intptr_t)puVar8 + 1);
    }
    FUN_10003bc0(param_1,uVar4);
  }
  local_4 = -1;
  FUN_10003ad0((char *)&sb_1c,'\x01');
  return 0;
}





void *  FUN_10004590(void *this_ptr,unsigned int param_1,unsigned int param_2)

{
  _SB *sb = SB(this_ptr);
  char cVar1;
  char *puVar2;
  int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((unsigned int)sb->length < param_1) {
    FUN_10004a07();
  }
  pcVar7 = sb->data;
  if (((pcVar7 != (char *)0x0) && (cVar1 = pcVar7[-1], cVar1 != '\0')) && (cVar1 != -1)) {
    pcVar7[-1] = cVar1 + -1;
    uVar4 = -1;
    sb->data = NULL;
    sb->length = 0;
    sb->capacity = 0;
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
      pcVar8 = sb->data;
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
  uVar4 = sb->length - param_1;
  if (uVar4 < param_2) {
    param_2 = uVar4;
  }
  if (param_2 == 0) {
    return this_ptr;
  }
  puVar6 = (int *)(sb->data + param_1);
  FUN_10005870(puVar6,(int *)((intptr_t)puVar6 + param_2),uVar4 - param_2);
  uVar4 = sb->length - param_2;
  if (-3 < uVar4) {
    FUN_100047db();
  }
  puVar2 = sb->data;
  if (((puVar2 == (char *)0x0) || (cVar1 = puVar2[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      if (puVar2 == (char *)0x0) {
        return this_ptr;
      }
      sb->length = 0;
      *puVar2 = 0;
      return this_ptr;
    }
    if (uVar4 <= (unsigned int)sb->capacity) goto LAB_10004697;
  }
  else if (uVar4 == 0) {
    puVar2[-1] = cVar1 + -1;
    FUN_10003ad0(this_ptr,'\0');
    return this_ptr;
  }
  FUN_10003d10(this_ptr, uVar4);
LAB_10004697:
  sb->length = uVar4;
  sb->data[uVar4] = 0;
  return this_ptr;
}





unsigned int  FUN_100046b0(void *this_ptr,unsigned int param_1,unsigned int param_2,byte *param_3,unsigned int param_4)

{
  _SB *sb = SB(this_ptr);
  unsigned int uVar1;
  unsigned int uVar2;
  byte *pbVar3;
  BOOL bVar4;
  BOOL bVar5;
  
  if ((unsigned int)sb->length < param_1) {
    FUN_10004a07();
  }
  uVar1 = sb->length - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar1 = param_2;
  if (param_4 <= param_2) {
    uVar1 = param_4;
  }
  if (sb->data == NULL) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)(sb->data + param_1);
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
  _SB *sb = SB(param_1);
  char cVar1;
  unsigned int uVar2;
  
  if (((sb->data == NULL) ||
      (cVar1 = sb->data[-1], cVar1 == '\0')) || (cVar1 == -1))
  goto LAB_10004789;
  uVar2 = (unsigned int)sb->length;
  if (-3 < uVar2) {
    FUN_100047db();
  }
  if (((sb->data == NULL) || (cVar1 = sb->data[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (sb->data != NULL) {
        FUN_10003bc0(param_1,0);
      }
      goto LAB_10004789;
    }
    if (uVar2 <= (unsigned int)sb->capacity) goto LAB_10004789;
  }
  else if (uVar2 == 0) {
    sb->data[-1] = cVar1 - 1;
    sb->data = NULL;
    sb->length = 0;
    sb->capacity = 0;
    goto LAB_10004789;
  }
  FUN_10003d10(param_1, uVar2);
LAB_10004789:
  if (sb->data != NULL) {
    sb->data[-1] = (char)0xff;
  }
  return;
}





int __cdecl FUN_100047d0(int *param_1)

{
  free(param_1);
  return 0;
}





void FUN_100047db(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_1000608c();
  *(char *)(unaff_EBP + -0x20) = *(char *)(unaff_EBP + -0xd);
  FUN_10003ad0((void *)(unaff_EBP + -0x20),'\0');
  sVar1 = strlen("string too long");
  FUN_10003b20((void *)(unaff_EBP + -0x20),(int *)"string too long",sVar1);
  *(int *)(unaff_EBP + -4) = 0;
  FUN_10004835();
  *(int ***)(unaff_EBP + -0x3c) = ((int*)0);
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





void FUN_100048a6(void)

{
  char local_20 [28];
  
  FUN_1000491c();
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





void FUN_100049b6(void)

{
  int local_20 [7];
  
  FUN_100049ef(local_20);
}





int *  FUN_100049ef(int *param_1)

{
  FUN_1000491c();
  *param_1 = ((int*)0);
  return param_1;
}





void FUN_10004a07(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_1000608c();
  *(char *)(unaff_EBP + -0x20) = *(char *)(unaff_EBP + -0xd);
  FUN_10003ad0((void *)(unaff_EBP + -0x20),'\0');
  sVar1 = strlen("invalid string position");
  FUN_10003b20((void *)(unaff_EBP + -0x20),(int *)"invalid string position",sVar1);
  *(int *)(unaff_EBP + -4) = 0;
  FUN_10004835();
  *(int ***)(unaff_EBP + -0x3c) = ((int*)0);
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





void FUN_10004a9e(void)

{
  int local_20 [7];
  
  FUN_10004ad7(local_20);
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
  if (pbVar1 < DAT_1002db4c + (4 - (intptr_t)DAT_1002db50)) {
    SVar2 = FUN_10006832(DAT_1002db50);
    pbVar1 = FUN_10006503(DAT_1002db50,(unsigned int *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10004ba7;
    }
    DAT_1002db4c = pbVar1 + ((intptr_t)DAT_1002db4c - (intptr_t)DAT_1002db50 >> 2) * 4;
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





unsigned int __cdecl FUN_10004dee(char *param_1,unsigned int param_2,unsigned int param_3,void *param_4)

{
  return fread(param_1, param_2, param_3, (FILE *)param_4);
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
            return (unsigned int)((intptr_t)pcVar6 - (intptr_t)param_1) / param_2;
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
        param_1 = param_1 + -(intptr_t)pcVar7;
        piVar1[1] = piVar1[1] - (intptr_t)pcVar7;
        *piVar1 = (intptr_t)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (intptr_t)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}





int __cdecl FUN_10004f05(void *param_1)

{
  return ftell((FILE *)param_1);
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
    local_c = (intptr_t)pcVar5 - (intptr_t)pcVar7;
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





int __cdecl FUN_10005088(void *param_1,int param_2,DWORD param_3)

{
  return fseek((FILE *)param_1, param_2, param_3);
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





FILE * __cdecl FUN_10005141(LPCSTR param_1,char *param_2,unsigned int param_3)

{
  return fopen(param_1, param_2);
}





FILE * __cdecl FUN_10005172(LPCSTR param_1,char *param_2)

{
  return fopen(param_1, param_2);
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





int __cdecl FUN_100055c8(char *param_1,byte *param_2, ...)

{
  va_list args;
  va_start(args, param_2);
  int result = vsprintf(param_1, (const char *)param_2, args);
  va_end(args);
  return result;
}





int __cdecl FUN_1000572e(char *param_1,byte *param_2, ...)

{
  va_list args;
  va_start(args, param_2);
  int result = vsscanf(param_1, (const char *)param_2, args);
  va_end(args);
  return result;
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
  return isalpha(param_1) ? 0x103 : 0;
}





unsigned int  FUN_1000581c(void *this_ptr,int param_1)

{
  return isdigit(param_1) ? 4 : 0;
}





unsigned int  FUN_10005844(void *this_ptr,int param_1)

{
  return isspace(param_1) ? 8 : 0;
}





int * __cdecl FUN_10005870(int *param_1,int *param_2,unsigned int param_3)

{
  memmove(param_1, param_2, param_3);
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
  /* Original was hand-optimized strstr with 32-bit pointer arithmetic.
     Replace with standard strstr to avoid 64-bit pointer truncation. */
  return (unsigned int *)strstr((const char *)param_1, param_2);
}





__declspec(dllexport) void OnInit(void)

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
  fprintf(stderr, "CMS_Start OnInit: enter\n");
  FUN_10001010(); /* init exec buffer — was auto-called by CRT on Win32 */
  FUN_10001050(); /* init player list — was auto-called by CRT on Win32 */
  FUN_10005470();
  fprintf(stderr, "CMS_Start OnInit: FUN_10005470 done\n");
  local_8 = 0;
  pFVar1 = (FILE *)FUN_10005172("UserMissions/start.dat",DAT_10010244);
  fprintf(stderr, "CMS_Start OnInit: fopen=%p\n", pFVar1);
  if (pFVar1 == (FILE *)0x0) {
    fprintf(stderr, "CMS_Start OnInit: start.dat not found, returning\n");
    return;
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
#ifndef _WIN32
  /* Convert backslashes from Windows paths to forward slashes for macOS/Linux */
  { char *_p = (char *)local_124; while (*_p) { if (*_p == '\\') *_p = '/'; _p++; } }
#endif
  uStackY_5c = 0x10001170;
  FUN_10004d2a(pFVar1);
  fprintf(stderr, "CMS_Start OnInit: calling FUN_10001380 (init script ctx)\n");
  fprintf(stderr, "CMS_Start OnInit: script path from start.dat='%s'\n", (char *)local_124);
  FUN_10001380(auStackY_48558,(char *)local_124,"UserMissions/funclist.sce");
  fprintf(stderr, "CMS_Start OnInit: FUN_10001380 done\n");
  local_8 = (int)1;
  fprintf(stderr, "CMS_Start OnInit: calling FUN_100015c0 (compile/exec)\n");
  FUN_100015c0(auStackY_48558,&DAT_10013300);
  fprintf(stderr, "CMS_Start OnInit: FUN_100015c0 done\n");
  RegisterVar(&_oninit_var[0], "");
  fprintf(stderr, "CMS_Start OnInit: RegisterVar calls done\n");
  RegisterVar(&_oninit_var[1], "");
  RegisterDynGroup(&_oninit_grp[0]);
  RegisterVar(&_oninit_var[2], "");
  RegisterDynGroup(&_oninit_grp[1]);
  RegisterVar(&_oninit_var[3], "");
  for (cVar4 = 'A'; cVar4 < '['; cVar4 = cVar4 + '\x01') {
    DisableMission(cVar4);
  }
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    ((long long *)&DAT_100132d8)[iVar3] = 0xff;
  }
  RegisterVar(&_oninit_var[4], "");
  DAT_100132e0 = 1;
  local_8 = local_8 & -256;
  FUN_100014a0(auStackY_48558);
  return;
}





__declspec(dllexport) void ProcessScenary(void)

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


/* Exported script functions resolved via GetProcAddress/dlsym from funclist.sce */

__declspec(dllexport) void RunTimerEx(int nat, int time, int id) {
    RunTimer(nat, time);
}

__declspec(dllexport) void ChangeFriendsEx(int nat, int mask) {
    ((long long *)&DAT_100132d8)[nat] = mask;
    DAT_100132e0 = 1;
}

__declspec(dllexport) void ShowPageEx(char *text) {
    ShowPage(text);
}

__declspec(dllexport) void AskQuestionEx(char *text) {
    AskQuestion(text);
}

__declspec(dllexport) void DisableMissionEx(int id) {
    DisableMission(id);
}

__declspec(dllexport) void EnableMissionEx(int id) {
    EnableMission(id);
}

__declspec(dllexport) void AskMultilineQuestionEx(char *text) {
    AskQuestion(text);
}

__declspec(dllexport) int CheckGroupLeaveAbility(int group) {
    return GetNInside(group) > 0 ? 1 : 0;
}

__declspec(dllexport) int GetGroupNInside(int group) {
    return GetNInside(group);
}

__declspec(dllexport) void CompleteMission(int id) {
    EnableMission(id);
}

__declspec(dllexport) void SubResource(int nat, int res, int amount) {
    AddResource(nat, res, -amount);
}

__declspec(dllexport) void PreserveTrigger(int id) {
    (void)id;
}

__declspec(dllexport) void StartAIEx(int nat, int ai_id, int p2, int p3, int p4, int p5) {
    StartAI(nat, ai_id, p2, p3, p4, p5);
}


BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
