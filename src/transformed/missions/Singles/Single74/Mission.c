#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
int this_ptr = 0;
char DAT_10010304[] = "gate";
long long DAT_100136e8 = 0;
long long DAT_10013cf8 = 0;
long long DAT_10013d00 = 0;
long long DAT_10013d08 = 0;
long long DAT_10013d78 = 0;
unsigned char DAT_10013d7c[60] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10013db8 = 0;
long long DAT_10013dc0 = 0;
long long DAT_10013dc8 = 0;
long long DAT_10013dd0 = 0;
long long DAT_10013dd8 = 0;
long long DAT_10013de0 = 0;
long long DAT_10013de8 = 0;
long long DAT_10013df0 = 0;
long long DAT_10013df8 = 0;
unsigned char DAT_10013e00[57] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10013e39 = 0;
unsigned char DAT_10013e3d[603] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0xE4, 0x02, 0x00, 0x00, 0x4B, 0x30, 0x6A, 0x30, 0xB5, 0x30, 0xD1, 0x30, 0xD8, 0x30, 0x01, 0x31, 0x08, 0x31, 0x31, 0x31, 0x38, 0x31, 0x61, 0x31, 0x68, 0x31, 0x91, 0x31, 0x98, 0x31, 0xC1, 0x31, 0xC8, 0x31, 0xF1, 0x31, 0xFB, 0x31, 0x23, 0x32, 0x28, 0x32, 0x2D, 0x32, 0x34, 0x32, 0x39, 0x32, 0x40, 0x32, 0x45, 0x32, 0x4C, 0x32, 0x51, 0x32, 0x58, 0x32, 0x5E, 0x32, 0x65, 0x32, 0x6E, 0x32, 0x75, 0x32, 0x7E, 0x32, 0x88, 0x32, 0x90, 0x32, 0x97, 0x32, 0xA7, 0x32, 0xAD, 0x32, 0xB2, 0x32, 0xB7, 0x32, 0xBF, 0x32, 0xC5, 0x32, 0xCF, 0x32, 0xD5, 0x32, 0xDB, 0x32, 0xE4, 0x32, 0xEA, 0x32, 0xEF, 0x32, 0xF4, 0x32, 0xFE, 0x32, 0x03, 0x33, 0x0A, 0x33, 0x10, 0x33, 0x15, 0x33, 0x1E, 0x33, 0x23, 0x33, 0x2C, 0x33, 0x31, 0x33, 0x36, 0x33, 0x3D, 0x33, 0x42, 0x33, 0x4A, 0x33, 0x51, 0x33, 0x5A, 0x33, 0x61, 0x33, 0x67, 0x33, 0x6C, 0x33, 0x71, 0x33, 0x7B, 0x33, 0x80, 0x33, 0x87, 0x33, 0x8C, 0x33, 0x93, 0x33};
long long DAT_10014098 = 0;
long long DAT_100140a0 = 0;
long long DAT_100140a8 = 0;
long long DAT_100140b0 = 0;
long long DAT_100140b8 = 0;
long long DAT_100140c0 = 0;
long long DAT_100140c8 = 0;
long long DAT_100140d0 = 0;
int *DAT_100140d8 = 0;
long long DAT_100140e0 = 0;
long long DAT_100140e8 = 0;
long long DAT_100140f0 = 0;
long long DAT_100140f8 = 0;
long long DAT_10014100 = 0;
long long DAT_10014108 = 0;
unsigned char DAT_10014110[6213] = {0};
unsigned char DAT_10015955[56291] = {0};
long long DAT_10023538 = 0;
long long DAT_10023540 = 0;
long long DAT_10023548 = 0;
long long DAT_10023550 = 0;
long long DAT_10023558 = 0;
long long DAT_10023560 = 0;
int DAT_10023568 = 0;
int DAT_1002356c = 0;
long long DAT_10023570 = 0;
long long DAT_10023578 = 0;
long long DAT_10023580 = 0;
long long DAT_10023588 = 0;
long long DAT_10023590 = 0;
long long DAT_10023608 = 0;
long long DAT_10023680 = 0;
long long DAT_100236f8 = 0;
long long DAT_10023700 = 0;
long long DAT_10023708 = 0;
long long DAT_10023710 = 0;
long long DAT_10023718 = 0;
long long DAT_10023720 = 0;
long long DAT_10023729 = 0;
long long DAT_10023730 = 0;
long long DAT_10023738 = 0;
long long DAT_10023740 = 0;
long long DAT_10023ae8 = 0;
int DAT_10023af0 = 0;
long long DAT_10023af8 = 0;
long long DAT_100277e8 = 0;
long long DAT_100277f0 = 0;
long long DAT_100277f8 = 0;
long long DAT_10027800 = 0;
long long DAT_10027808 = 0;
int DAT_1002780c = 0;
long long DAT_10027814 = 0;
int DAT_10028f6c = 0;
int DAT_10028f70 = 0;
int DAT_10027814_ovl = 0;

/* Stubs for missing internal functions */
int FUN_1000435f() { return 0; }
int FUN_100043af() { return 0; }
int FUN_10004b3e() { return 0; }
int FUN_10004b47() { return 0; }
int FUN_10004b6a() { return 0; }
int FUN_10004e99() { return 0; }
int FUN_1000b991() { return 0; }


/* Forward declarations */
char FUN_10001000(unsigned int param_1,unsigned int param_2);
void FUN_10001a50(int param_1);
void FUN_10001a90(int param_1);
void FUN_100023d0(void);
void FUN_100027e0(void);
void FUN_100027f0(void);
void 
FUN_10002860(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void  FUN_10002910(void *this_ptr,int param_1);
void  FUN_10002950(void *this_ptr,int param_1);
void  FUN_10002960(void *this_ptr,int param_1);
void  FUN_10002970(void *this_ptr,int param_1);
void  FUN_10002980(void *this_ptr,int param_1);
void  FUN_10002990(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100029c0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100029f0(void *this_ptr,int *param_1);
BOOL  FUN_10002a10(int param_1);
int  FUN_10002a30(int param_1);
int  FUN_10002b30(int param_1);
void  FUN_10002b60(int param_1);
void  FUN_10002b90(int *param_1);
void  FUN_10002bf0(void *this_ptr,int *param_1);
void  FUN_10002c10(void *this_ptr,int *param_1,int *param_2);
void  FUN_10002c60(int param_1);
int  FUN_10002c70(void *this_ptr,int param_1);
int  FUN_10002ca0(void *this_ptr,int param_1);
void FUN_10002d40(void);
int *  FUN_10002d80(int *param_1);
int  FUN_10002db0(void *this_ptr,int param_1);
int  FUN_10002e80(void *this_ptr,int param_1);
void 
FUN_10002ed0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
BOOL  FUN_10002f20(int param_1);
int  FUN_10002f40(int *param_1);
int *  FUN_10002fc0(int *param_1);
int  FUN_10002fd0(void *this_ptr,char param_1);
int  FUN_10003010(void *this_ptr,int param_1);
void  FUN_10003020(void *this_ptr,int param_1);
void  FUN_10003050(void *this_ptr,int param_1);
void 
FUN_10003060(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
void 
FUN_10003090(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
int *  FUN_100030c0(int *param_1);
int  FUN_10003160(int *param_1);
void  FUN_100032c0(void *this_ptr,int param_1);
void  FUN_100032d0(void *this_ptr,int *param_1);
void  FUN_100032f0(void *this_ptr,int param_1);
int  FUN_10003300(int param_1);
int  FUN_10003360(int param_1);
void  FUN_100033b0(void *this_ptr,int param_1);
int  FUN_10003430(int param_1);
int  FUN_100034f0(int param_1);
void  FUN_100035a0(void *this_ptr,int param_1);
void  FUN_100035b0(int *param_1);
void 
FUN_100038e0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
unsigned int  FUN_10003950(int param_1);
unsigned int  FUN_100039a0(int *param_1);
int *  FUN_10003a40(int *param_1);
void  FUN_10003a60(void *this_ptr,int param_1);
void  FUN_10003a70(int *param_1);
int  FUN_10003bb0(int param_1);
void  FUN_10003bd0(void *this_ptr,int param_1,int param_2);
void  FUN_10003be0(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10003c00(void *this_ptr,int param_1,int param_2,int param_3);
BOOL  FUN_10003d20(void *this_ptr,int param_1,int param_2,int param_3);
int *  FUN_10003e40(void *this_ptr,int param_1,int param_2);
void  FUN_10003e80(void *this_ptr,int param_1);
void  FUN_10003ed0(void *this_ptr,int *param_1);
void  FUN_10003f00(void *this_ptr,int *param_1);
void  FUN_10003f30(char *param_1);
void FUN_10003f50(void);
void FUN_10003f68(void);
int FUN_10003fc7(int param_1,int param_2);
int FUN_100040f7(int param_1);
int FUN_10004175(int param_1);

void OnInit();
void ProcessScenary();


char __cdecl FUN_10001000(unsigned int param_1,unsigned int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return -0x40;
  }
  iVar3 = (param_1 ^ (intptr_t)param_1 >> 0x1f) - ((intptr_t)param_1 >> 0x1f);
  iVar1 = (param_2 ^ (intptr_t)param_2 >> 0x1f) - ((intptr_t)param_2 >> 0x1f);
  if (iVar1 < iVar3) {
    iVar1 = FUN_10003fc7(iVar1 * 0x100,iVar3);
    cVar2 = ((long long *)&DAT_100136e8)[iVar1 * 2];
  }
  else {
    iVar1 = FUN_10003fc7(iVar3 * 0x100,iVar1);
    cVar2 = '@' - ((long long *)&DAT_100136e8)[iVar1 * 2];
  }
  if ((intptr_t)param_1 < 0) {
    cVar2 = -0x80 - cVar2;
  }
  if ((intptr_t)param_2 < 0) {
    cVar2 = -cVar2;
  }
  return cVar2;
}





void __cdecl FUN_10001a50(int param_1)

{
  if (*(int *)(((unsigned char *)&DAT_10013d7c) + param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(((unsigned char *)&DAT_10013d78) + param_1 * 8);
  }
  SaveSelectedUnits(param_1,((unsigned char *)&DAT_10013d78) + param_1 * 8,0);
  ClearSelection(param_1);
  return;
}





void __cdecl FUN_10001a90(int param_1)

{
  ClearSelection(param_1);
  SelectUnits(((unsigned char *)&DAT_10013d78) + param_1 * 8,0);
  return;
}





void FUN_100023d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  void *pcVar5;
  
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) {
    iVar2 = GetResource(DAT_10013d08 & 0xff,1);
    iVar2 = iVar2 + -5000;
    if (iVar2 < 1) {
      ShowPage("#negold");
    }
    else {
      cVar1 = AskQuestion("#Uhodim");
      if (cVar1 != '\0') {
        SetTrigg(7,0);
        *(int *)((int)DAT_100140d8 + 0x1845) = 6;
        iVar3 = FUN_10003360((int)DAT_100140d8);
        while (iVar3 < 0xf) {
          FUN_10003950((int)DAT_100140d8);
          iVar3 = FUN_10003360((int)DAT_100140d8);
        }
        iVar3 = FUN_10003360((int)DAT_100140d8);
        DAT_1002780c = iVar2 / iVar3;
        AddResource((int)(char)DAT_10013d08,1,-iVar2);
        FUN_100033b0(DAT_100140d8,DAT_10013d08);
      }
    }
  }
  cVar1 = Trigg(7);
  do {
    if (cVar1 != '\0') {
      return;
    }
LAB_100024df:
    while( 1 ) {
      RefreshScreen();
      iVar2 = AskMultilineQuestion
                        (9,"#MerchantMainMenu",0,
                         "V02_MerchMain_0|V02_MerchMain_1|V02_MerchMain_2");
      RefreshScreen();
      if (iVar2 != 0) break;
LAB_10002670:
      do {
        iVar2 = FUN_10003360((int)DAT_100140d8);
        RefreshScreen();
        iVar3 = AskMultilineQuestion
                          (9,"#MerchantInfoMenu",0,
                           "V02_MerchInfo_0|V02_MerchInfo_1|V02_MerchInfo_2");
        RefreshScreen();
        if (iVar3 == 0) {
          ShowPageParam("#Buiznes",iVar2,*(int *)((int)DAT_100140d8 + 0x401),
                        *(int *)((int)DAT_100140d8 + 0x405),
                        *(int *)((int)DAT_100140d8 + 0x409),
                        *(int *)((int)DAT_100140d8 + 0x40d),
                        *(int *)((int)DAT_100140d8 + 0x411),
                        *(int *)((int)DAT_100140d8 + 0x415),
                        *(int *)((int)DAT_100140d8 + 0x91) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x95) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x99) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x9d) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0xa1) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0xa5) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x79) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x7d) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x81) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x85) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x89) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x8d) * iVar2);
        }
        else if (iVar3 == 1) {
          if (iVar2 < 10) {
            cVar1 = AskQuestion("#MakeOboz");
            if (cVar1 != '\0') {
              FUN_10003950((int)DAT_100140d8);
            }
          }
          else {
            ShowPage("#TooManyOboz");
          }
          goto LAB_10002670;
        }
      } while (iVar3 < 2);
    }
    if (iVar2 != 1) {
      if (1 < iVar2) {
        return;
      }
      goto LAB_100024df;
    }
    iVar2 = FUN_10003360((int)DAT_100140d8);
    if (iVar2 == 0) {
      ShowPage("#KaravanEmpty");
      goto LAB_100024df;
    }
    cVar1 = Trigg(1);
    if ((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) {
      ShowPageParam("#bayband0",DAT_1002356c);
      cVar1 = AskQuestion("#bayband1");
      if (cVar1 != '\0') {
        iVar2 = GetResource(0,1);
        if (DAT_1002356c < iVar2) {
          SetTrigg(2,0);
          RunTimer(0,DAT_10023af0);
          ShowPage("#bayband2");
          AddResource(0,1,-DAT_1002356c);
          FUN_10001a50(DAT_100236f8);
          SelectUnits(&DAT_100277e8,0);
          SelectUnits(&DAT_10023708,1);
          SelectUnits(&DAT_10023538,1);
          SelChangeNation(DAT_100236f8 & 0xff,DAT_10023720 & 0xff);
          FUN_10001a90(DAT_100236f8);
          FUN_10002910(&DAT_10023590,DAT_10023720);
          FUN_10002910(&DAT_10023608,DAT_10023720);
          FUN_10002910(&DAT_10023680,DAT_10023720);
        }
        else {
          cVar1 = AskQuestion("#no_bayband");
          if (cVar1 != '\0') {
            return;
          }
        }
      }
    }
    uVar4 = FUN_100039a0(DAT_100140d8);
    cVar1 = (char)uVar4;
  } while( 1 );
}





void FUN_100027e0(void)

{
  FUN_1000b991();
  return;
}





void FUN_100027f0(void)

{
  return;
}






void 
FUN_10002860(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  RegisterVar(this_ptr,0x74);
  *(int *)this_ptr = param_1;
  RegisterUnits((int)this_ptr + 4,param_2);
  if (param_3 != 0) {
    RegisterZone((int)this_ptr + 0xc,param_3);
    SetDestPoint((int)this_ptr + 4,(int)this_ptr + 0xc);
  }
  RegisterDynGroup((int)this_ptr + 0x14);
  RegisterDynGroup((int)this_ptr + 0x1c);
  RegisterDynGroup((int)this_ptr + 0x6c);
  *(int *)((int)this_ptr + 0x30) = 0;
  *(int *)((int)this_ptr + 0x34) = 0;
  *(int *)((int)this_ptr + 0x38) = 0x3c;
  *(int *)((int)this_ptr + 0x44) = 0;
  *(int *)((int)this_ptr + 0x48) = 0;
  *(int *)((int)this_ptr + 0x4c) = 0x78;
  *(int *)((int)this_ptr + 0x54) = 0;
  *(int *)((int)this_ptr + 0x50) = 1;
  *(int *)((int)this_ptr + 0x58) = 10;
  *(int *)((int)this_ptr + 0x5c) = 1;
  *(int *)((int)this_ptr + 0x60) = 0;
  *(int *)((int)this_ptr + 0x24) = param_4;
  return;
}





void  FUN_10002910(void *this_ptr,int param_1)

{
  FUN_10001a50(*(int *)this_ptr);
  SelectUnits((int)this_ptr + 0x14,0);
  SelChangeNation(*(char *)this_ptr,param_1);
  FUN_10001a90(*(int *)this_ptr);
  *(int *)this_ptr = param_1;
  return;
}





void  FUN_10002950(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x50) = param_1;
  return;
}





void  FUN_10002960(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x58) = param_1;
  return;
}





void  FUN_10002970(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x5c) = param_1;
  return;
}





void  FUN_10002980(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x60) = param_1;
  return;
}





void  FUN_10002990(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((int)this_ptr + 0x28,param_1);
  *(int *)((int)this_ptr + 0x30) = param_2;
  *(int *)((int)this_ptr + 0x34) = param_3;
  return;
}





void  FUN_100029c0(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((int)this_ptr + 0x3c,param_1);
  *(int *)((int)this_ptr + 0x44) = param_2;
  *(int *)((int)this_ptr + 0x48) = param_3;
  return;
}





void  FUN_100029f0(void *this_ptr,int *param_1)

{
  *(int *)((int)this_ptr + 100) = *param_1;
  *(int *)((int)this_ptr + 0x68) = param_1[1];
  return;
}





BOOL  FUN_10002a10(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 4);
  return iVar1 != 0;
}





int  FUN_10002a30(int param_1)

{
  BOOL bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  unsigned int uVar6;
  int iVar7;
  
  iVar3 = GetTotalAmount0(param_1 + 0x1c);
  iVar7 = param_1 + 0x14;
  iVar4 = GetTotalAmount0(iVar7);
  if (*(int *)(param_1 + 0x24) < iVar4 + iVar3) {
    return -1;
  }
  bVar1 = FUN_10002a10(param_1);
  if (bVar1) {
    iVar3 = param_1 + 4;
    cVar2 = CheckProduction(iVar3);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      }
      else {
        *(int *)(param_1 + 0x54) = 0;
        iVar7 = param_1 + 0x1c;
      }
      iVar4 = GetGlobalTime();
      if (*(int *)(param_1 + 0x60) < iVar4) {
        uVar5 = GetGlobalTime();
        *(int *)(param_1 + 0x60) = uVar5;
        uVar6 = rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x34)) {
          ProduceUnitFast(iVar3,param_1 + 0x28,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x30);
        }
        uVar6 = rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x48)) {
          ProduceUnitFast(iVar3,param_1 + 0x3c,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x44);
        }
      }
    }
  }
  return 0;
}






int  FUN_10002b30(int param_1)

{
  BOOL bVar1;
  int iVar2;
  
  bVar1 = FUN_10002a10(param_1);
  if (bVar1) {
    iVar2 = GetTotalAmount0(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x58) <= iVar2) {
      return 1;
    }
  }
  return 0;
}





void  FUN_10002b60(int param_1)

{
  GetNUnits(param_1 + 0x1c);
  RemoveGroup(param_1 + 0x1c,param_1 + 0x6c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
  return;
}





void  FUN_10002b90(int *param_1)

{
  BOOL bVar1;
  int uVar2;
  int iVar3;
  
  bVar1 = FUN_10002a10((intptr_t)param_1);
  if (bVar1) {
    FUN_10002a30((intptr_t)param_1);
    uVar2 = FUN_10002b30((intptr_t)param_1);
    if ((char)uVar2 != '\0') {
      FUN_10001a50(*param_1);
      SelectUnits(param_1 + 7,0);
      uVar2 = 0;
      iVar3 = rand();
      SelSendAndKill((char)*param_1,param_1 + 0x19,iVar3,uVar2);
      FUN_10001a90(*param_1);
      FUN_10002b60((intptr_t)param_1);
    }
  }
  return;
}





void  FUN_10002bf0(void *this_ptr,int *param_1)

{
  FUN_100029f0(this_ptr,param_1);
  FUN_10002b90(this_ptr);
  return;
}





void  FUN_10002c10(void *this_ptr,int *param_1,int *param_2)

{
  int uVar1;
  unsigned int uVar2;
  
  uVar1 = FUN_10002b30((int)this_ptr);
  if ((char)uVar1 != '\0') {
    uVar2 = rand();
    if ((uVar2 & 0xff) < 0xa0) {
      FUN_100029f0(this_ptr,param_1);
      FUN_10002b90(this_ptr);
      return;
    }
    FUN_100029f0(this_ptr,param_2);
  }
  FUN_10002b90(this_ptr);
  return;
}





void  FUN_10002c60(int param_1)

{
  *(int *)(param_1 + 800) = 0;
  return;
}





int  FUN_10002c70(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = *(int *)((int)this_ptr + 800);
  if (iVar1 == 100) {
    return 0;
  }
  *(int *)((int)this_ptr + 800) = iVar1 + 1;
  RegisterZone((void *)((int)this_ptr + iVar1 * 8),param_1);
  return (int)1;
}





int  FUN_10002ca0(void *this_ptr,int param_1)

{
  return (int)(void *)((int)this_ptr + param_1 * 8);
}





void FUN_10002d40(void)

{
  RegisterVar(&DAT_10014110,0xf424);
  RegisterVar(&DAT_10013e00,0x294);
  RegisterVar(&DAT_10023af8,0x3cf0);
  RegisterVar(&DAT_10027808,4);
  return;
}





int *  FUN_10002d80(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  *param_1 = 0;
  RegisterDynGroup(param_1 + 3);
  puVar2 = param_1 + 7;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}





int  FUN_10002db0(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char auStack_2c [20];
  int iStack_18;
  int iStack_14;
  
  iVar5 = 0;
  piVar6 = (int *)((int)this_ptr + 0x1c);
  piVar4 = piVar6;
  do {
    iVar1 = GetResource(0,iVar5);
    if (iVar1 < *piVar4) {
      ShowPage("#LittleMoney");
      return uVar3 & -256;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 6);
  iVar5 = 0;
  do {
    AddResource(0,iVar5,-*piVar6);
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 6);
  iVar5 = rand();
  CreateObject0((int)this_ptr + 0xc,&DAT_10013df8,(int)this_ptr + 4,*(char *)this_ptr,param_1,iVar5);
  GetUnitInfo((int)this_ptr + 0xc,0,auStack_2c);
  iStack_18 = iStack_18 + 100;
  iStack_14 = iStack_14 + 100;
  SetUnitInfo(auStack_2c);
  return (int)1;
}





int  FUN_10002e80(void *this_ptr,int param_1)

{
  int uVar1;
  
  if (*(int *)this_ptr == param_1) {
    return 0;
  }
  FUN_10001a50(*(int *)this_ptr);
  SelectUnits((int)this_ptr + 0xc,0);
  SelChangeNation(*(char *)this_ptr,param_1);
  FUN_10001a90(*(int *)this_ptr);
  *(int *)this_ptr = param_1;
  return uVar1;
}





void 
FUN_10002ed0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  *(int *)((int)this_ptr + 0x1c) = param_1;
  *(int *)((int)this_ptr + 0x20) = param_2;
  *(int *)((int)this_ptr + 0x24) = param_3;
  *(int *)((int)this_ptr + 0x28) = param_4;
  *(int *)((int)this_ptr + 0x2c) = param_5;
  *(int *)((int)this_ptr + 0x30) = param_6;
  return;
}






BOOL  FUN_10002f20(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  return 0 < iVar1;
}





int  FUN_10002f40(int *param_1)

{
  int *puVar1;
  unsigned int uVar2;
  short asStack_58 [22];
  short asStack_2c [22];
  
  puVar1 = ((unsigned char *)&DAT_10013d78) + *param_1 * 8;
  if (*(int *)(((unsigned char *)&DAT_10013d7c) + *param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(puVar1);
  }
  SaveSelectedUnits((char)*param_1,puVar1,0);
  uVar2 = GetTotalAmount0(puVar1);
  if (uVar2 == 1) {
    GetUnitInfo(param_1 + 3,0,asStack_58);
    uVar2 = GetUnitInfo(puVar1,0,asStack_2c);
    if (asStack_58[0] == asStack_2c[0]) {
      return (int)1;
    }
  }
  return uVar2 & -256;
}





int *  FUN_10002fc0(int *param_1)

{
  FUN_10002d80(param_1);
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





int  FUN_10002fd0(void *this_ptr,char param_1)

{
  BOOL bVar1;
  int extraout_var;
  unsigned int uVar2;
  int uVar3;
  
  bVar1 = FUN_10002f20((int)this_ptr);
  uVar2 = (int)bVar1;
  if (bVar1) {
    uVar2 = FUN_10002f40(this_ptr);
    if ((char)uVar2 != '\0') {
      uVar3 = (int)(uVar2 >> 8);
      uVar2 = (intptr_t)param_1;
      if (param_1 != '\0') {
        uVar2 = (int)*(char *)((int)this_ptr + 0x34);
        if (*(char *)((int)this_ptr + 0x34) != '\0') {
          *(char *)((int)this_ptr + 0x34) = 0;
          return (int)1;
        }
        goto LAB_10003004;
      }
    }
    *(char *)((int)this_ptr + 0x34) = 1;
  }
LAB_10003004:
  return uVar2 & -256;
}





int  FUN_10003010(void *this_ptr,int param_1)

{
  int uVar1;
  
  uVar1 = FUN_10002db0(this_ptr,param_1);
  return (int)1;
}





void  FUN_10003020(void *this_ptr,int param_1)

{
  RegisterUnits((int)this_ptr + 0xc,param_1);
  UnitsCenter((int)this_ptr + 0x34,(int)this_ptr + 0xc,400);
  return;
}





void  FUN_10003050(void *this_ptr,int param_1)

{
  FUN_10002c70((void *)((int)this_ptr + 0x7c),param_1);
  return;
}





void 
FUN_10003060(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  *(int *)((int)this_ptr + 0x3c) = param_1;
  *(int *)((int)this_ptr + 0x40) = param_2;
  *(int *)((int)this_ptr + 0x44) = param_3;
  *(int *)((int)this_ptr + 0x48) = param_4;
  *(int *)((int)this_ptr + 0x4c) = param_5;
  *(int *)((int)this_ptr + 0x50) = param_6;
  return;
}





void 
FUN_10003090(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  *(int *)((int)this_ptr + 0x54) = param_1;
  *(int *)((int)this_ptr + 0x58) = param_2;
  *(int *)((int)this_ptr + 0x5c) = param_3;
  *(int *)((int)this_ptr + 0x60) = param_4;
  *(int *)((int)this_ptr + 100) = param_5;
  *(int *)((int)this_ptr + 0x68) = param_6;
  return;
}





int *  FUN_100030c0(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  FUN_10002fc0(param_1);
  FUN_10002d80((int *)((intptr_t)param_1 + 0x3d));
  FUN_10003bb0((intptr_t)param_1 + 0xa9);
  puVar2 = (int *)((intptr_t)param_1 + 0x3e5);
  iVar1 = 100;
  do {
    FUN_10002d80(puVar2);
    puVar2 = puVar2 + 0xd;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(int *)((intptr_t)param_1 + 0x185a) = 5;
  *(int *)((intptr_t)param_1 + 0x1835) = 0;
  *(char *)((intptr_t)param_1 + 0x184d) = 0;
  *(int *)((intptr_t)param_1 + 0x184e) = 0;
  *(int *)((intptr_t)param_1 + 0x1852) = 0;
  *(int *)((intptr_t)param_1 + 0x1856) = 0;
  *(int *)((intptr_t)param_1 + 0x185e) = 10;
  RegisterDynGroup((intptr_t)param_1 + 0x1862);
  return param_1;
}






int  FUN_10003160(int *param_1)

{
  int iVar1;
  int iVar2;
  int uVar3;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  char auStack_3c [8];
  char auStack_34 [8];
  unsigned int auStack_2c [11];
  
  iVar6 = 0;
  piVar5 = param_1 + 7;
  do {
    iVar2 = GetResource(0,iVar6);
    iVar1 = *piVar5;
    if (iVar2 < iVar1) {
      ShowPage("#LittleMoney");
      return uVar4 & -256;
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar6 < 6);
  iVar6 = GetReadyAmount((intptr_t)param_1 + 0x35,(int)(char)*param_1);
  if (iVar6 != 0) {
    iVar6 = 0;
    piVar5 = param_1 + 7;
    do {
      AddResource(0,iVar6,-*piVar5);
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 6);
    RegisterDynGroup(auStack_3c);
    RegisterDynGroup(auStack_34);
    FUN_10001a50(*param_1);
    SelectUnitsType((intptr_t)param_1 + 0x35,(char)*param_1,0);
    SaveSelectedUnits((char)*param_1,auStack_3c,0);
    FUN_10001a50(*param_1);
    GetUnitInfo(auStack_3c,0,auStack_2c);
    InsertUnitToGroup(0,auStack_34,auStack_2c[0] & 0xffff);
    EnableUnit((char)*param_1,param_1 + 1,1);
    ProduceUnitFast(auStack_34,param_1 + 1,param_1 + 3,0);
    *(int *)((intptr_t)param_1 + 0x1845) = 4;
    *(char *)((intptr_t)param_1 + 0x184d) = 1;
    *(int *)((intptr_t)param_1 + 0x184e) = 0;
    return (int)1;
  }
  ShowPage("#NeedHall");
  return uVar4 & -256;
}





void  FUN_100032c0(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x3e1) = param_1;
  return;
}





void  FUN_100032d0(void *this_ptr,int *param_1)

{
  int iVar1;
  int *puVar2;
  
  puVar2 = (int *)((int)this_ptr + 0x3d);
  for (iVar1 = 0xe9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}





void  FUN_100032f0(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x1841) = param_1;
  return;
}





int  FUN_10003300(int param_1)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x1835);
  if (0 < iVar2) {
    iVar4 = param_1 + 0x3f1;
    do {
      bVar1 = FUN_10002f20(iVar4 + -0xc);
      if (bVar1) {
        iVar2 = GetUnitsAmount1(param_1 + 0x1839,iVar4);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = *(int *)(param_1 + 0x1835);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x34;
    } while (iVar3 < iVar2);
  }
  return (int)1;
}





int  FUN_10003360(int param_1)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1835)) {
    iVar2 = param_1 + 0x3e5;
    do {
      bVar1 = FUN_10002f20(iVar2);
      if (bVar1) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar4 < *(int *)(param_1 + 0x1835));
    return iVar3;
  }
  return 0;
}





void  FUN_100033b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this_ptr + 0x3e5);
  puVar2 = (int *)((int)this_ptr + 0x3e5);
  FUN_10001a50(iVar1);
  iVar3 = 0;
  if (0 < *(int *)((int)this_ptr + 0x1835)) {
    do {
      SelectUnits(puVar2 + 3,1);
      *puVar2 = param_1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0xd;
    } while (iVar3 < *(int *)((int)this_ptr + 0x1835));
  }
  SelChangeNation(iVar1,param_1);
  FUN_10001a90(iVar1);
  return;
}





int  FUN_10003430(int param_1)

{
  int iVar1;
  int iVar2;
  int uVar3;
  int *piVar4;
  int *piVar5;
  int local_1c;
  int local_18 [6];
  
  iVar1 = FUN_10003360(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  local_1c = 100000;
  iVar1 = 0;
  piVar5 = local_18;
  piVar4 = (int *)(param_1 + 0x91);
  do {
    if (*piVar4 != 0) {
      iVar2 = GetResource(0,iVar1);
      iVar2 = iVar2 / *piVar4;
      *piVar5 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 <= local_1c) {
        local_1c = iVar2;
      }
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar1 < 6);
  iVar1 = FUN_10003360(param_1);
  if (iVar1 < local_1c) {
    local_1c = FUN_10003360(param_1);
  }
  *(int *)(param_1 + 0x184e) = local_1c;
  iVar1 = 0;
  piVar4 = (int *)(param_1 + 0x91);
  do {
    AddResource(0,iVar1,-(*piVar4 * *(int *)(param_1 + 0x184e)));
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar1 < 6);
  return (int)1;
}





int  FUN_100034f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x184e);
  iVar1 = FUN_10003360(param_1);
  if (iVar1 <= iVar2) {
    iVar2 = FUN_10003360(param_1);
  }
  piVar3 = (int *)(param_1 + 0x79);
  ShowPageParam("#MerchantSucsess",iVar2 * *piVar3,*(int *)(param_1 + 0x7d) * iVar2,
                *(int *)(param_1 + 0x81) * iVar2,*(int *)(param_1 + 0x85) * iVar2,
                *(int *)(param_1 + 0x89) * iVar2,*(int *)(param_1 + 0x8d) * iVar2);
  iVar1 = 0;
  do {
    AddResource(0,iVar1,*piVar3 * iVar2);
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 6);
  iVar2 = *(int *)(param_1 + 0x1856) + 1;
  *(int *)(param_1 + 0x184e) = 0;
  *(int *)(param_1 + 0x1856) = iVar2;
  return (int)1;
}





void  FUN_100035a0(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x1852) = param_1;
  return;
}





void  FUN_100035b0(int *param_1)

{
  int *piVar1;
  void *this_ptr;
  BOOL bVar2;
  int uVar3;
  int iVar4;
  int *piVar5;
  char uVar6;
  char uVar7;
  int iStack_4;
  
  if ((*(int *)((intptr_t)param_1 + 0x1845) == 4) && (bVar2 = FUN_10002f20((intptr_t)param_1), bVar2)) {
    *(int *)((intptr_t)param_1 + 0x1845) = 0;
  }
  bVar2 = FUN_10002f20((intptr_t)param_1);
  if ((!bVar2) && (*(int *)((intptr_t)param_1 + 0x1845) != 4)) {
    if (*(char *)((intptr_t)param_1 + 0x184d) != '\0') {
      ShowPage("#MerchantDie");
      *(char *)((intptr_t)param_1 + 0x184d) = 0;
      RemoveGroup(param_1 + 3,(intptr_t)param_1 + 0x1862);
    }
    ClearLightSpot(*(char *)((intptr_t)param_1 + 0x1852));
    return;
  }
  piVar1 = param_1 + 3;
  UnitsCenter((intptr_t)param_1 + 0x1839,piVar1,100);
  SetLightSpot((intptr_t)param_1 + 0x1839,1,*(char *)((intptr_t)param_1 + 0x1852));
  switch(*(int *)((intptr_t)param_1 + 0x1845)) {
  case 0:
    iVar4 = GetUnitsAmount1(((unsigned char *)&DAT_10013e39) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42,piVar1);
    if (iVar4 == 0) {
      FUN_10001a50(*(int *)((intptr_t)param_1 + 0x1841));
      SelectUnits(piVar1,0);
      uVar3 = 0;
      iVar4 = rand();
      SelSendTo(*(char *)((intptr_t)param_1 + 0x1841),
                ((unsigned char *)&DAT_10013e39) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42,iVar4,uVar3);
      FUN_10001a90(*(int *)((intptr_t)param_1 + 0x1841));
    }
    break;
  case 1:
    iVar4 = GetUnitsAmount1((intptr_t)param_1 + 0x71,piVar1);
    if ((iVar4 != 0) && (uVar3 = FUN_10003300((intptr_t)param_1), (char)uVar3 != '\0')) {
      *(int *)((intptr_t)param_1 + 0x1845) = 2;
      iVar4 = GetGlobalTime();
      *(int *)((intptr_t)param_1 + 0x1849) = iVar4 + 500;
    }
    break;
  case 2:
    iVar4 = GetGlobalTime();
    if (*(int *)((intptr_t)param_1 + 0x1849) < iVar4) {
      *(int *)((intptr_t)param_1 + 0x1845) = 3;
      this_ptr = (void *)((intptr_t)param_1 + 0xa9);
      FUN_10003bd0(this_ptr,*(int *)(((unsigned char *)&DAT_10013e39) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42),
                   *(int *)(((unsigned char *)&DAT_10013e3d) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42));
      FUN_10003d20(this_ptr,(intptr_t)param_1,*(int *)((intptr_t)param_1 + 0x1841),1);
      iStack_4 = 0;
      if (0 < *(int *)((intptr_t)param_1 + 0x1835)) {
        piVar5 = (int *)((intptr_t)param_1 + 0x3e5);
        do {
          bVar2 = FUN_10002f20((int)piVar5);
          if (bVar2) {
            FUN_10003d20(this_ptr,(int)piVar5,*piVar5,1);
          }
          iStack_4 = iStack_4 + 1;
          piVar5 = piVar5 + 0xd;
        } while (iStack_4 < *(int *)((intptr_t)param_1 + 0x1835));
      }
    }
    break;
  case 3:
    iVar4 = GetUnitsAmount1(((unsigned char *)&DAT_10013e39) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42,piVar1);
    if (iVar4 != 0) {
      FUN_100034f0((intptr_t)param_1);
      *(int *)((intptr_t)param_1 + 0x1845) = 0;
    }
    bVar2 = FUN_10002f20((int)(((unsigned char *)&DAT_10013e00) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42));
    if (!bVar2) {
      *(int *)((intptr_t)param_1 + 0x1845) = 0;
    }
  }
  FUN_10001a50(*param_1);
  FUN_10001a50(*(int *)((intptr_t)param_1 + 0x1841));
  SelectUnits(piVar1,0);
  iVar4 = GetUnitsAmount1(((unsigned char *)&DAT_10013e39) + *(int *)((intptr_t)param_1 + 0x3e1) * 0x42,piVar1);
  if ((((iVar4 == 0) || (*(int *)((intptr_t)param_1 + 0x1845) != 0)) &&
      (*(int *)((intptr_t)param_1 + 0x1845) != 5)) && (*(int *)((intptr_t)param_1 + 0x1845) != 6)) {
    uVar7 = *(char *)((intptr_t)param_1 + 0x1841);
    uVar6 = (char)*param_1;
  }
  else {
    uVar7 = (char)*param_1;
    uVar6 = *(char *)((intptr_t)param_1 + 0x1841);
  }
  SelChangeNation(uVar6,uVar7);
  FUN_10001a90(*param_1);
  FUN_10001a90(*(int *)((intptr_t)param_1 + 0x1841));
  return;
}





void 
FUN_100038e0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  void *this_00;
  int local_4;
  
  local_4 = 100;
  this_00 = (void *)((int)this_ptr + 0x3e5);
  do {
    RegisterUnitType(this_00,"GRUZ(UN)");
    FUN_10002e80(this_00,*(int *)((int)this_ptr + 0x1841));
    FUN_10002ed0(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
    this_00 = (void *)((int)this_00 + 0x34);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}





unsigned int  FUN_10003950(int param_1)

{
  int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = *(unsigned int *)(param_1 + 0x1835);
  if (uVar3 != 100) {
    uVar1 = FUN_10003010((void *)(param_1 + 0x3e5 + uVar3 * 0x34),param_1 + 0x1839);
    if ((char)uVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0x1835) + 1;
      *(int *)(param_1 + 0x1835) = iVar2;
      return (int)1;
    }
    ShowPage("#LittleMoney");
  }
  return uVar3 & -256;
}





unsigned int  FUN_100039a0(int *param_1)

{
  void *this_ptr;
  BOOL bVar1;
  int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = *(unsigned int *)((intptr_t)param_1 + 0x1845);
  if (uVar3 == 0) {
    uVar2 = FUN_10003430((intptr_t)param_1);
    if ((char)uVar2 != '\0') {
      this_ptr = (void *)((intptr_t)param_1 + 0xa9);
      *(int *)((intptr_t)param_1 + 0x1845) = 1;
      FUN_10003be0(this_ptr,*(int *)((intptr_t)param_1 + 0x71),*(int *)((intptr_t)param_1 + 0x75));
      FUN_10003c00(this_ptr,(intptr_t)param_1,*param_1,1);
      iVar4 = *(int *)((intptr_t)param_1 + 0x1835);
      iVar5 = 0;
      if (0 < iVar4) {
        piVar6 = (int *)((intptr_t)param_1 + 0x3e5);
        do {
          bVar1 = FUN_10002f20((int)piVar6);
          if (bVar1) {
            FUN_10003c00(this_ptr,(int)piVar6,*piVar6,1);
          }
          iVar4 = *(int *)((intptr_t)param_1 + 0x1835);
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 0xd;
        } while (iVar5 < iVar4);
      }
      return (int)1;
    }
    ShowPage("#LittleMoney");
  }
  return uVar3 & -256;
}





int *  FUN_10003a40(int *param_1)

{
  FUN_10002fc0(param_1);
  *(char *)((intptr_t)param_1 + 0x41) = 0;
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





void  FUN_10003a60(void *this_ptr,int param_1)

{
  *(int *)((int)this_ptr + 0x35) = param_1;
  return;
}





void  FUN_10003a70(int *param_1)

{
  int *piVar1;
  int iVar2;
  char uVar3;
  
  piVar1 = param_1 + 1;
  iVar2 = GetTotalAmount1(piVar1,(char)*param_1);
  if (iVar2 == 0) {
    uVar3 = (char)*param_1;
  }
  else {
    uVar3 = (char)*param_1;
  }
  EnableUnit(uVar3,piVar1,iVar2 == 0);
  iVar2 = GetReadyAmount(piVar1,(char)*param_1);
  if (iVar2 == 0) {
    if (*(char *)((intptr_t)param_1 + 0x41) != '\0') {
      *(char *)((intptr_t)param_1 + 0x41) = 0;
      *(int *)(((unsigned char *)&DAT_10015955) + *(int *)((intptr_t)param_1 + 0x35) * 0x186a) = 5;
      ShowPage("#MarketLost");
      return;
    }
  }
  else {
    iVar2 = GetTotalAmount1(piVar1,(char)*param_1);
    if (iVar2 < 2) {
      if (*(char *)((intptr_t)param_1 + 0x41) == '\0') {
        *(char *)((intptr_t)param_1 + 0x41) = 1;
        *(int *)(((unsigned char *)&DAT_10015955) + *(int *)((intptr_t)param_1 + 0x35) * 0x186a) = 0;
        ShowPage("#MarketBuilt");
        FUN_10001a50(*param_1);
        SelectUnitsType(piVar1,(char)*param_1,0);
        SaveSelectedUnits((char)*param_1,param_1 + 3,0);
        UnitsCenter((intptr_t)param_1 + 0x39,param_1 + 3,400);
        FUN_10001a90(*param_1);
      }
      FUN_10002f20((int)(((unsigned char *)&DAT_10014110) + *(int *)((intptr_t)param_1 + 0x35) * 0x186a));
    }
  }
  return;
}





int  FUN_10003bb0(int param_1)

{
  FUN_10002c60(param_1 + 0x10);
  *(int *)(param_1 + 0x334) = 0;
  return param_1;
}





void  FUN_10003bd0(void *this_ptr,int param_1,int param_2)

{
  *(int *)this_ptr = param_1;
  *(int *)((int)this_ptr + 4) = param_2;
  return;
}





void  FUN_10003be0(void *this_ptr,int param_1,int param_2)

{
  *(int *)((int)this_ptr + 8) = param_1;
  *(int *)((int)this_ptr + 0xc) = param_2;
  return;
}





BOOL  FUN_10003c00(void *this_ptr,int param_1,int param_2,int param_3)

{
  void *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_var;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  int uVar7;
  int *piVar8;
  int iStack_8;
  int iStack_4;
  
  iVar5 = param_2;
  if ((char)param_3 != '\0') {
    FUN_10001a50(param_2);
    SelectUnits(param_1 + 0xc,0);
    this_00 = (void *)((int)this_ptr + 0x10);
    uVar7 = 0;
    iVar2 = rand();
    iVar3 = FUN_10002ca0(this_00,0);
    SelSendTo(iVar5,iVar3,iVar2,uVar7);
    iVar2 = 1;
    if (1 < *(int *)((int)this_ptr + 0x330)) {
      do {
        piVar8 = &param_2;
        piVar6 = &iStack_4;
        iVar3 = FUN_10002ca0(this_00,iVar2 + -1);
        GetZoneCoor(iVar3,piVar6,piVar8);
        piVar8 = &param_3;
        piVar6 = &iStack_8;
        iVar3 = FUN_10002ca0(this_00,iVar2);
        GetZoneCoor(iVar3,piVar6,piVar8);
        cVar1 = FUN_10001000(iStack_8 - iStack_4,param_3 - param_2);
        uVar4 = (int)cVar1 & 0xffff;
        uVar7 = 2;
        iVar3 = FUN_10002ca0(this_00,iVar2);
        SelSendTo(iVar5,iVar3,uVar4,uVar7);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this_ptr + 0x330));
    }
    uVar7 = 2;
    iVar2 = rand();
    SelSendTo(iVar5,(int)this_ptr + 8,iVar2,uVar7);
    FUN_10001a90(iVar5);
  }
  iVar5 = GetUnitsAmount1((int)this_ptr + 8,param_1 + 0xc);
  return iVar5 != 0;
}





BOOL  FUN_10003d20(void *this_ptr,int param_1,int param_2,int param_3)

{
  void *this_00;
  char cVar1;
  int iVar2;
  int extraout_var;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int uVar7;
  int *piVar8;
  int uVar9;
  int *piVar10;
  int iStack_c;
  int iStack_8;
  void *local_4;
  
  iVar4 = param_2;
  local_4 = this_ptr;
  if ((char)param_3 != '\0') {
    FUN_10001a50(param_2);
    SelectUnits(param_1 + 0xc,0);
    iVar5 = *(int *)((int)this_ptr + 0x330) + -1;
    this_00 = (void *)((int)this_ptr + 0x10);
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = *(int *)((int)this_ptr + 0x330) - 2;
    iVar2 = FUN_10002ca0(this_00,iVar5);
    SelSendTo(iVar4,iVar2,uVar7,uVar9);
    if (-1 < (int)uVar6) {
      do {
        piVar10 = &param_2;
        piVar8 = &iStack_8;
        iVar2 = FUN_10002ca0(this_00,iVar5);
        GetZoneCoor(iVar2,piVar8,piVar10);
        piVar10 = &param_3;
        piVar8 = &iStack_c;
        iVar2 = FUN_10002ca0(this_00,uVar6);
        GetZoneCoor(iVar2,piVar8,piVar10);
        cVar1 = FUN_10001000(iStack_c - iStack_8,param_3 - param_2);
        uVar3 = (int)cVar1 & 0xffff;
        uVar7 = 2;
        iVar2 = FUN_10002ca0(this_00,uVar6);
        SelSendTo(iVar4,iVar2,uVar3,uVar7);
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1;
        this_ptr = local_4;
      } while (uVar6 < -2147483648);
    }
    uVar7 = 2;
    iVar2 = rand();
    SelSendTo(iVar4,this_ptr,iVar2,uVar7);
    FUN_10001a90(iVar4);
  }
  iVar4 = GetUnitsAmount1(this_ptr,param_1 + 0xc);
  return iVar4 != 0;
}





int *  FUN_10003e40(void *this_ptr,int param_1,int param_2)

{
  RegisterVar(this_ptr,5);
  *(int *)this_ptr = param_1;
  *(char *)((int)this_ptr + 4) = '\x01' << ((byte)param_1 & 0x1f);
  if (param_2 != 0) {
    SetPlayerName(param_1,param_2);
  }
  return this_ptr;
}





void  FUN_10003e80(void *this_ptr,int param_1)

{
  SetResource(*(char *)this_ptr,3,param_1);
  SetResource(*(char *)this_ptr,0,param_1);
  SetResource(*(char *)this_ptr,2,param_1);
  SetResource(*(char *)this_ptr,1,param_1);
  SetResource(*(char *)this_ptr,4,param_1);
  SetResource(*(char *)this_ptr,5,param_1);
  return;
}





void  FUN_10003ed0(void *this_ptr,int *param_1)

{
  int uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  bVar2 = *(byte *)((int)this_ptr + 4) | '\x01' << ((byte)uVar1 & 0x1f);
  *(byte *)((int)this_ptr + 4) = bVar2;
  ChangeFriends(*(char *)this_ptr,(int)bVar2);
  return;
}





void  FUN_10003f00(void *this_ptr,int *param_1)

{
  int uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  bVar2 = *(byte *)((int)this_ptr + 4) & ~('\x01' << ((byte)uVar1 & 0x1f));
  *(byte *)((int)this_ptr + 4) = bVar2;
  ChangeFriends(*(char *)this_ptr,(int)bVar2);
  return;
}





void  FUN_10003f30(char *param_1)

{
  param_1[4] = 0xff;
  ChangeFriends(*param_1,0xff);
  return;
}







void FUN_10003f50(void)

{
  void *extraout_ECX;
  
  FUN_10003f68();
  DAT_10027814_ovl = FUN_100043af();
  FUN_1000435f(extraout_ECX);
  return;
}





void FUN_10003f68(void)

{
  return;
}





int __cdecl FUN_10003fc7(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}





int __cdecl FUN_100040f7(int param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_10004b3e();
  pbVar1 = (byte *)FUN_10004e99(DAT_10028f70);
  if (pbVar1 < DAT_10028f6c + (4 - (int)DAT_10028f70)) {
    SVar2 = FUN_10004e99(DAT_10028f70);
    pbVar1 = FUN_10004b6a(DAT_10028f70,(unsigned int *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_1000416c;
    }
    DAT_10028f6c = pbVar1 + ((int)DAT_10028f6c - (int)DAT_10028f70 >> 2) * 4;
    DAT_10028f70 = pbVar1;
  }
  *(int *)DAT_10028f6c = param_1;
  DAT_10028f6c = DAT_10028f6c + 4;
LAB_1000416c:
  FUN_10004b47();
  return param_1;
}





int __cdecl FUN_10004175(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100040f7(param_1);
  return (iVar1 != 0) - 1;
}





void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  unsigned int uVar3;
  int uVar4;
  
                    
  DVar1 = time(NULL);
  srand(DVar1);
  RegisterUnitType(&DAT_10014100,"Bashnia(sp)");
  RegisterUnitType(&DAT_10013db8,"Bashnia(fr)");
  RegisterUnitType(&DAT_100140b0,"WALL_EV(sp)");
  RegisterUnitType(&DAT_10023730,"WALL_EV(fr)");
  EnableUnit((char)DAT_10013d08,&DAT_10014100,0);
  EnableUnit((char)DAT_10013d08,&DAT_10013db8,0);
  EnableUnit((char)DAT_10013d08,&DAT_100140b0,0);
  EnableUnit((char)DAT_10013d08,&DAT_10023730,0);
  RunTimer(4,1000);
  RegisterUnits(&DAT_10023718,"allies_guard0");
  ClearSelection(DAT_10014108);
  SelectUnits(&DAT_10023718,0);
  SetStandGround(DAT_10014108,1);
  RegisterUpgrade(&DAT_100140c0,"AKA25SP");
  RegisterUpgrade(&DAT_100140e0,"AKA25FR");
  DisableUpgrade((char)DAT_10013d08,&DAT_100140c0);
  DisableUpgrade((char)DAT_10013d08,&DAT_100140e0);
  RegisterZone(&DAT_10013df0,"z_eng_contact");
  RegisterZone(&DAT_100140f8,"z_eng_count");
  RegisterVar(&DAT_1002780c,4);
  RegisterVar(&DAT_10023710,8);
  RegisterDynGroup(&DAT_10023710);
  RegisterUnits(&DAT_10014098,"fleet");
  RegisterUnits(&DAT_10013cf8,"fleet_patrol");
  RegisterZone(&DAT_10023700,"z_patrol");
  RegisterZone(&DAT_10023560,"z_patrol0");
  RegisterVar(&DAT_10023588,8);
  RegisterUnits(&DAT_100140a8,"fleet_die_0");
  RegisterUnits(&DAT_100140b8,"fleet_die_1");
  ClearSelection(DAT_10013de8);
  ClearSelection(DAT_100236f8 & 0xff);
  iVar2 = GetDiff(0);
  if (iVar2 < 2) {
    SelectUnits(&DAT_100140b8,1);
  }
  iVar2 = GetDiff(0);
  if (iVar2 == 0) {
    SelectUnits(&DAT_100140a8,1);
  }
  SelErase(DAT_10013de8);
  SelErase(DAT_100236f8 & 0xff);
  RegisterUnitType(&DAT_10013dc8,"PorE(sp)");
  RegisterUnitType(&DAT_10023580,"PorE(fr)");
  RegisterUnits(&DAT_10023738,DAT_10010304);
  SelectUnits(&DAT_10023738,0);
  SelOpenGates(DAT_10014108);
  FUN_10003ed0(&DAT_10023720,&DAT_10013d08);
  FUN_10003ed0(&DAT_10013de8,&DAT_100236f8);
  FUN_10003ed0(&DAT_10023729,&DAT_100236f8);
  FUN_10003ed0(&DAT_100140a0,&DAT_100236f8);
  FUN_10003f30(&DAT_10014108);
  FUN_10003f00(&DAT_10014108,&DAT_100236f8);
  RegisterZone(&DAT_10013dc0,"z_king");
  RegisterZone(&DAT_10013de0,"z_france");
  RegisterZone(&DAT_10013d00,"z_spn");
  RegisterZone(&DAT_100140e8,"z_mine0");
  RegisterZone(&DAT_100140f0,"z_mine1");
  RegisterZone(&DAT_100140c8,"z_mine2");
  RegisterZone(&DAT_100140d0,"z_mine3");
  RegisterZone(&DAT_10023558,"z_stone0");
  RegisterZone(&DAT_10023550,"z_stone1");
  RegisterZone(&DAT_10023548,"z_stone2");
  RegisterZone(&DAT_10023540,"z_stone3");
  RegisterZone(&DAT_10013dd8,"z_forest0");
  RegisterZone(&DAT_10013dd0,"z_forest1");
  RegisterUnitType(&DAT_10023ae8,"Kazarma_1_SP(sp)");
  RegisterUnits(&DAT_100277e8,"band0_build");
  RegisterUnits(&DAT_10023708,"band1_build");
  RegisterUnits(&DAT_10023538,"band2_build");
  RegisterVar(&DAT_10023590,0x74);
  RegisterVar(&DAT_10023608,0x74);
  RegisterVar(&DAT_10023680,0x74);
  FUN_10002860(&DAT_10023590,DAT_100236f8,"band0_barrack",0,100);
  uVar4 = 200;
  iVar2 = GetDiff(0);
  FUN_10002990(&DAT_10023590,"Pehota_turki_DIP(fr)",(4 - iVar2) * 0x4b,uVar4);
  uVar4 = 0xaa;
  iVar2 = GetDiff(0);
  FUN_100029c0(&DAT_10023590,"Strelec_Algir_DIP(fr)",(4 - iVar2) * 0x32,uVar4);
  iVar2 = GetDiff(0);
  FUN_10002960(&DAT_10023590,iVar2 + 6);
  FUN_10002970(&DAT_10023590,2);
  FUN_10002980(&DAT_10023590,5000);
  FUN_10002860(&DAT_10023608,5,"band1_barrack",0,100);
  uVar4 = 200;
  iVar2 = GetDiff(0);
  FUN_10002990(&DAT_10023608,"Rundashir_Avstria_DIP(sp)",(4 - iVar2) * 0x4b,uVar4);
  uVar4 = 0xaa;
  iVar2 = GetDiff(0);
  FUN_100029c0(&DAT_10023608,"Strelec_Algir_DIP(sp)",(4 - iVar2) * 0x32,uVar4);
  iVar2 = GetDiff(0);
  FUN_10002960(&DAT_10023608,iVar2 + 5);
  FUN_10002970(&DAT_10023608,2);
  FUN_10002980(&DAT_10023608,5000);
  FUN_10002860(&DAT_10023680,DAT_100236f8,"band2_barrack",0,100);
  uVar4 = 200;
  iVar2 = GetDiff(0);
  FUN_10002990(&DAT_10023680,"Pehota_turki_DIP(sp)",(4 - iVar2) * 0x4b,uVar4);
  uVar4 = 0xaa;
  iVar2 = GetDiff(0);
  FUN_100029c0(&DAT_10023680,"Strelec_Algir_DIP(sp)",(4 - iVar2) * 0x32,uVar4);
  iVar2 = GetDiff(0);
  FUN_10002960(&DAT_10023680,iVar2 + 5);
  FUN_10002970(&DAT_10023680,2);
  FUN_10002980(&DAT_10023680,5000);
  FUN_10002d40();
  RegisterVar(&DAT_10023740,0x3a4);
  FUN_10003020(&DAT_10023740,"dealer");
  FUN_10003060(&DAT_10023740,0,0,0,0x640,800,800);
  FUN_10003090(&DAT_10023740,0,800,0,0,0,0);
  FUN_10003050(&DAT_10023740,"trip0_0");
  FUN_10003050(&DAT_10023740,"trip0_1");
  FUN_10003050(&DAT_10023740,"trip0_2");
  FUN_10003050(&DAT_10023740,"trip0_2_0");
  FUN_10003050(&DAT_10023740,"trip0_3");
  FUN_10003050(&DAT_10023740,"trip0_4");
  FUN_10003050(&DAT_10023740,"trip0_5");
  FUN_10003050(&DAT_10023740,"trip0_6");
  FUN_10003050(&DAT_10023740,"trip0_7");
  FUN_10003050(&DAT_10023740,"trip0_8");
  FUN_10003050(&DAT_10023740,"trip0_9");
  FUN_10003050(&DAT_10023740,"trip0_10");
  FUN_10003050(&DAT_10023740,"trip0_11");
  FUN_10003050(&DAT_10023740,"trip0_12");
  FUN_10003050(&DAT_10023740,"trip0_13");
  DAT_10023568 = &DAT_10013e00;
  RegisterUnitType(&DAT_10013e00,"Rinok(sp)");
  FUN_10003a60(DAT_10023568,0);
  DAT_100140d8 = &DAT_10014110;
  RegisterUnitType(&DAT_10014110,"KUPEC(UN)");
  RegisterUnitType(DAT_100140d8,"Center_Spain(sp)");
  FUN_100032f0(DAT_100140d8,6);
  FUN_100032c0(DAT_100140d8,0);
  FUN_100038e0(DAT_100140d8,0,10,0,200,100,0);
  FUN_100032d0(DAT_100140d8,(int *)&DAT_10023740);
  FUN_10002ed0(DAT_100140d8,0,500,0,200,500,0);
  FUN_100035a0(DAT_100140d8,0);
  *(int *)(DAT_100140d8 + 0x185a) = 1;
  uVar3 = rand();
  *(unsigned int *)(DAT_100140d8 + 0x185e) = (uVar3 & 3) + 3;
  RegisterUnits(&DAT_100277f0,"king_dipcenter");
  RegisterUnits(&DAT_10023570,"king_b18");
  RegisterUnits(&DAT_100277f8,"gren0");
  RegisterUnits(&DAT_10027800,"gren1");
  RegisterVar(&DAT_1002356c,4);
  RegisterVar(&DAT_10023af0,4);
  iVar2 = GetDiff(0);
  DAT_10023af0 = 8000;
  DAT_1002356c = (iVar2 + 1) * 2000;
  SetTrigg(1,0);
  SetTrigg(2,0);
  SetTrigg(3,0);
  SetTrigg(4,0);
  SetTrigg(5,0);
  SetTrigg(6,0);
  SetTrigg(7,0);
  SetTrigg(8,0);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  BOOL bVar2;
  int iVar3;
  void *pcVar4;
  void *pcVar5;
  int uVar6;
  
                    
  cVar1 = NationIsErased(DAT_10013d08 & 0xff);
  if (cVar1 != '\0') {
    ShowPage("#nation_defeat");
    LooseGame();
  }
  cVar1 = NationIsErased(DAT_10023729);
  if (((cVar1 != '\0') && (cVar1 = NationIsErased(DAT_10013de8), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(DAT_100140a0), cVar1 != '\0')) {
    ShowPage("#nation_victory");
    ShowVictory();
  }
  cVar1 = Trigg(3);
  if (cVar1 != '\0') {
    FUN_10001a50(DAT_10013d08);
    SelectUnitsType(&DAT_10013dc8,DAT_10013d08 & 0xff,0);
    SaveSelectedUnits(DAT_10013d08 & 0xff,&DAT_10023710,0);
    FUN_10001a90(DAT_10013d08);
    cVar1 = Trigg(5);
    if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10023710), iVar3 != 0)) {
      ClearSelection(DAT_10013de8);
      SelectUnits(&DAT_10014098,0);
      SelAttackGroup(DAT_10013de8,&DAT_10023710);
      UnitsCenter(&DAT_10023578,&DAT_10023710,2000);
      ClearSelection(DAT_10013de8);
      SelectUnits(&DAT_100277f8,0);
      SelectUnits(&DAT_10027800,1);
      uVar6 = 0;
      iVar3 = rand();
      SelSendAndKill(DAT_10013de8,&DAT_10023578,iVar3,uVar6);
    }
  }
  cVar1 = Trigg(5);
  if (cVar1 == '\0') {
    iVar3 = GetReadyAmount(&DAT_10013dc8,DAT_10013d08 & 0xff);
    if (iVar3 != 0) {
      SetTrigg(5,0);
      ShowPage("#NeedContact");
      ShowPage("#king_ata_port");
      SetLightSpot(&DAT_100140f8,2,1);
      AddResource(DAT_10013de8,4,7000);
      AddResource(DAT_10013de8,5,7000);
    }
  }
  cVar1 = Trigg(6);
  if ((cVar1 == '\0') && (cVar1 = Trigg(5), cVar1 != '\0')) {
    iVar3 = GetUnitsAmount0(&DAT_10013df0,DAT_10013d08 & 0xff);
    if (iVar3 != 0) {
      SetTrigg(6,0);
      ShowPage("#FirstContact0");
      ShowPage("#FirstContact1");
      ShowPage("#FirstContact2");
      DisableMission(0x45);
      EnableMission(0x52);
      EnableMission(0x54);
    }
  }
  cVar1 = Trigg(6);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount2(&DAT_100140f8,(int)DAT_100140d8 + 0x3e9,DAT_10013d08 & 0xff);
    cVar1 = Trigg(8);
    if ((cVar1 == '\0') && (0 < iVar3)) {
      SetTrigg(8,0);
      ShowPage("#gold_unload0");
      RunTimer(1,4000);
      RunTimer(2,1000);
    }
    cVar1 = TimerDone(2);
    if (cVar1 != '\0') {
      ShowPage("#gold_unload1");
      RunTimer(2,10000);
    }
    cVar1 = Trigg(8);
    if ((cVar1 != '\0') && (50000 < DAT_1002780c * iVar3)) {
      ShowPageParam("#gold_victory",DAT_1002780c * iVar3);
      ShowVictory();
    }
    cVar1 = TimerDone(1);
    if (cVar1 != '\0') {
      ShowPage("#gold_defeat");
      ShowPage("#gold_defeat1");
      RunTimer(1,10000);
      RunTimer(3,0x96);
      FUN_10003f00(&DAT_10014108,&DAT_10013d08);
    }
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      LooseGame();
    }
  }
  cVar1 = Trigg(0);
  if (cVar1 != '\0') {
    SetTrigg(0,0);
    ShowPage("#Entry");
    DisableMission(0x49);
    DisableMission(0x45);
    DisableMission(0x52);
    DisableMission(0x54);
    DisableMission(0x59);
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      DisableMission(0x41);
      DisableMission(0x4c);
    }
    iVar3 = GetDiff(0);
    if (1 < iVar3) {
      DisableMission(0x53);
    }
    DisableMission(0x44);
    iVar3 = GetDiff(0);
    if (0 < iVar3) {
      DisableMission(0x46);
    }
    DisableMission(0x5a);
    DisableMission(0x58);
    EnableUnit(DAT_10013d08 & 0xff,&DAT_10013dc8,0);
    EnableUnit(DAT_10013d08 & 0xff,&DAT_10023580,0);
    SelectUnits(&DAT_10014098,0);
    SelectUnits(&DAT_10013cf8,1);
    SelectUnits(&DAT_100277f8,1);
    SelectUnits(&DAT_10027800,1);
    DoNotUseSelInAI(DAT_10013de8);
    FUN_10003e80(&DAT_10013d08,700);
    SetResource(DAT_10013d08 & 0xff,1,100000);
    FUN_10003e80(&DAT_10013de8,8000);
    SetResource(DAT_10013de8,1,100000);
    iVar3 = GetDiff(0);
    FUN_10003e80(&DAT_10023729,(iVar3 + 1) * 2000);
    iVar3 = GetDiff(0);
    FUN_10003e80(&DAT_100140a0,(iVar3 + 1) * 2000);
    uVar6 = GetDiff(0);
    StartAI(DAT_10013de8,"SPAIN.0",0,0,0,uVar6);
    uVar6 = GetDiff(0);
    StartAI(DAT_10023729,"SPAIN.0",0,0,0,uVar6);
    uVar6 = GetDiff(0);
    StartAI(DAT_100140a0,"FRANCE.0",0,0,0,uVar6);
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') && (iVar3 = GetTotalAmount1(&DAT_10023ae8,0), iVar3 != 0)) {
    SetTrigg(4,0);
    FUN_10002980(&DAT_10023590,0);
    FUN_10002980(&DAT_10023608,0);
    FUN_10002980(&DAT_10023680,0);
  }
  FUN_10002950(&DAT_10023590,0);
  FUN_10002950(&DAT_10023608,0);
  FUN_10002950(&DAT_10023680,0);
  iVar3 = GetTotalAmount0(0x10023590);
  if (iVar3 < 0x50) {
    FUN_10002950(&DAT_10023590,2);
  }
  iVar3 = GetTotalAmount0(0x10023608);
  if (iVar3 < 0x4b) {
    FUN_10002950(&DAT_10023608,2);
  }
  iVar3 = GetTotalAmount0(0x10023680);
  if (iVar3 < 0x55) {
    FUN_10002950(&DAT_10023680,2);
  }
  cVar1 = Trigg(2);
  if (cVar1 == '\0') {
    FUN_10002c10(&DAT_10023590,(int *)&DAT_100140e8,(int *)&DAT_10013dd8);
    FUN_10002c10(&DAT_10023608,(int *)&DAT_10013dd0,(int *)&DAT_100140e8);
    FUN_10002c10(&DAT_10023680,(int *)&DAT_10023558,(int *)&DAT_10013dd0);
  }
  else {
    FUN_10002bf0(&DAT_10023590,(int *)&DAT_10013d00);
    FUN_10002bf0(&DAT_10023608,(int *)&DAT_10013de0);
    FUN_10002bf0(&DAT_10023680,(int *)&DAT_10013dc0);
  }
  cVar1 = Trigg(1);
  if (((cVar1 == '\0') && (iVar3 = GetGlobalTime(), pcVar5 = (void*)&EnableMission, 1000 < iVar3)) &&
     (*(int *)((int)DAT_100140d8 + 0x1856) == *(int *)((int)DAT_100140d8 + 0x185a))) {
    SetTrigg(1,0);
    ShowPage("#bandnews");
    DisableMission(0x57);
    EnableMission(0x49);
    iVar3 = GetDiff(0);
    if (iVar3 < 2) {
      EnableMission(0x44);
      EnableMission(0x5a);
    }
    else {
      EnableMission(0x5a);
    }
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#bayband3");
    DAT_1002356c = (DAT_1002356c * 3) / 2;
    DAT_10023af0 = (DAT_10023af0 * 5) / 6;
    FUN_10001a50(DAT_10023720);
    SelectUnits(&DAT_100277e8,0);
    SelectUnits(&DAT_10023708,1);
    SelectUnits(&DAT_10023538,1);
    SelChangeNation(DAT_10023720 & 0xff,DAT_100236f8 & 0xff);
    FUN_10001a90(DAT_10023720);
    FUN_10002910(&DAT_10023590,DAT_100236f8);
    FUN_10002910(&DAT_10023608,DAT_100236f8);
    FUN_10002910(&DAT_10023680,DAT_100236f8);
  }
  cVar1 = Trigg(3);
  if (((cVar1 == '\0') && (iVar3 = GetGlobalTime(), 2000 < iVar3)) &&
     (*(int *)((int)DAT_100140d8 + 0x1856) == *(int *)((int)DAT_100140d8 + 0x185e))) {
    SetTrigg(3,0);
    ShowPage("#eng_news0");
    EnableUnit(DAT_10013d08 & 0xff,&DAT_10013dc8,1);
    DisableMission(0x5a);
    EnableMission(0x58);
    EnableMission(0x45);
  }
  FUN_10003a70(DAT_10023568);
  bVar2 = FUN_10002f20((int)DAT_100140d8);
  if ((bVar2) || (*(int *)((int)DAT_100140d8 + 0x1845) == 4)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  uVar6 = FUN_10002fd0(DAT_10023568,cVar1);
  if ((char)uVar6 != '\0') {
    ShowPageParam("#MerchantPrice",DAT_100140d8[7],DAT_100140d8[8],DAT_100140d8[9],
                  DAT_100140d8[10],DAT_100140d8[0xb],DAT_100140d8[0xc]);
    cVar1 = AskQuestion("#MarketMainMenu");
    if (cVar1 != '\0') {
      FUN_10003160((int *)(((unsigned char *)&DAT_10014110) + *(int *)((int)DAT_10023568 + 0x35) * 0x186a));
    }
  }
  uVar6 = FUN_10002fd0(DAT_100140d8,'\x01');
  if (((char)uVar6 != '\0') && (*(int *)((int)DAT_100140d8 + 0x1845) == 0)) {
    FUN_100023d0();
  }
  FUN_100035b0(DAT_100140d8);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
