#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
char DAT_1000b088[] = "G9";
char DAT_1000b08c[] = "G8";
char DAT_1000b090[] = "G7";
char DAT_1000b094[] = "G4";
char DAT_1000b098[] = "G3";
char DAT_1000b09c[] = "G1";
char DAT_1000b15c[] = "ZA3";
char DAT_1000b160[] = "ZA2";
char DAT_1000b164[] = "ZA1";
char DAT_1000b294[] = "ZW41";
char DAT_1000b29c[] = "ZW40";
char DAT_1000b2a4[] = "ZW20";
char DAT_1000b2ac[] = "ZW39";
char DAT_1000b2b4[] = "ZW19";
char DAT_1000b2bc[] = "ZW38";
char DAT_1000b2c4[] = "ZW18";
char DAT_1000b2cc[] = "ZW37";
char DAT_1000b2d4[] = "ZW17";
char DAT_1000b2dc[] = "ZW36";
char DAT_1000b2e4[] = "ZW16";
char DAT_1000b2ec[] = "ZW35";
char DAT_1000b2f4[] = "ZW15";
char DAT_1000b2fc[] = "ZW34";
char DAT_1000b304[] = "ZW14";
char DAT_1000b30c[] = "ZW33";
char DAT_1000b314[] = "ZW13";
char DAT_1000b31c[] = "ZW32";
char DAT_1000b324[] = "ZW12";
char DAT_1000b32c[] = "ZW31";
char DAT_1000b334[] = "ZW11";
char DAT_1000b33c[] = "ZW30";
char DAT_1000b344[] = "ZW10";
char DAT_1000b34c[] = "ZW29";
char DAT_1000b354[] = "ZW09";
char DAT_1000b35c[] = "ZW28";
char DAT_1000b364[] = "ZW08";
char DAT_1000b36c[] = "ZW27";
char DAT_1000b374[] = "ZW07";
char DAT_1000b37c[] = "ZW26";
char DAT_1000b384[] = "ZW06";
char DAT_1000b38c[] = "ZW25";
char DAT_1000b394[] = "ZW05";
char DAT_1000b39c[] = "ZW24";
char DAT_1000b3a4[] = "ZW04";
char DAT_1000b3ac[] = "ZW23";
char DAT_1000b3b4[] = "ZW03";
char DAT_1000b3bc[] = "ZW22";
char DAT_1000b3c4[] = "ZW02";
char DAT_1000b3cc[] = "ZW21";
char DAT_1000b3d4[] = "ZW01";
long long DAT_1000df50 = 0;
long long DAT_1000df58 = 0;
unsigned char DAT_1000df60[112] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000df68[112] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1000df6c = 0;
long long DAT_1000df6d = 0;
long long DAT_1000e338 = 0;
long long DAT_1000e340 = 0;
long long DAT_1000e348 = 0;
long long DAT_1000e350 = 0;
long long DAT_1000e358 = 0;
long long DAT_1000e380 = 0;
long long DAT_1000e388 = 0;
long long DAT_1000e390 = 0;
long long DAT_1000e398 = 0;
long long DAT_1000e3a0 = 0;
long long DAT_1000e3a8 = 0;
long long DAT_1000e3b0 = 0;
long long DAT_1000e3b8 = 0;
long long DAT_1000e3c0 = 0;
long long DAT_1000e3c8 = 0;
long long DAT_1000e3d0 = 0;
long long DAT_1000e3d8 = 0;
long long DAT_1000e3e0 = 0;
long long DAT_1000e408 = 0;
long long DAT_1000e430 = 0;
long long DAT_1000e438 = 0;
long long DAT_1000e440 = 0;
long long DAT_1000e468 = 0;
long long DAT_1000e470 = 0;
long long DAT_1000e478 = 0;
long long DAT_1000e480 = 0;
long long DAT_1000e488 = 0;
long long DAT_1000e490 = 0;
long long DAT_1000e498 = 0;
long long DAT_1000e4a0 = 0;
long long DAT_1000e4a8 = 0;
long long DAT_1000e4b0 = 0;
long long DAT_1000e4b8 = 0;
long long DAT_1000e4c0 = 0;
long long DAT_1000e4c8 = 0;
long long DAT_1000e4d0 = 0;
long long DAT_1000e4d8 = 0;
long long DAT_1000e4e0 = 0;
long long DAT_1000e4e8 = 0;
long long DAT_1000e4f0 = 0;
long long DAT_1000e4f8 = 0;
long long DAT_1000e500 = 0;
long long DAT_1000e508 = 0;
long long DAT_1000e510 = 0;
long long DAT_1000e518 = 0;
long long DAT_1000e520 = 0;
long long DAT_1000e528 = 0;
long long DAT_1000e530 = 0;
unsigned char DAT_1000e538[112] = {0};
unsigned char DAT_1000e540[112] = {0};
long long DAT_1000e544 = 0;
long long DAT_1000e545 = 0;
long long DAT_1000e728 = 0;
long long DAT_1000e750 = 0;
long long DAT_1000e758 = 0;
long long DAT_1000e760 = 0;
long long DAT_1000e768 = 0;
long long DAT_1000e770 = 0;
long long DAT_1000e778 = 0;
long long DAT_1000e780 = 0;
long long DAT_1000e788 = 0;
long long DAT_1000e790 = 0;
long long DAT_1000e798 = 0;
long long DAT_1000e7a0 = 0;
long long DAT_1000e7a8 = 0;
long long DAT_1000e7b0 = 0;
long long DAT_1000e7b8 = 0;
long long DAT_1000e7c0 = 0;
long long DAT_1000e7c8 = 0;
long long DAT_1000e7d0 = 0;
long long DAT_1000e7d8 = 0;
long long DAT_1000e7e0 = 0;
long long DAT_1000e7e8 = 0;
long long DAT_1000e7f0 = 0;
long long DAT_1000e7f8 = 0;
long long DAT_1000e800 = 0;
long long DAT_1000e808 = 0;
long long DAT_1000e810 = 0;
long long DAT_1000e818 = 0;
long long DAT_1000e820 = 0;
long long DAT_1000e828 = 0;
long long DAT_1000e830 = 0;
long long DAT_1000e838 = 0;
long long DAT_1000e840 = 0;
long long DAT_1000e848 = 0;
long long DAT_1000e850 = 0;
long long DAT_1000e858 = 0;
long long DAT_1000e860 = 0;
long long DAT_1000e868 = 0;
long long DAT_1000e870 = 0;
long long DAT_1000e878 = 0;
long long DAT_1000e880 = 0;
long long DAT_1000e888 = 0;
long long DAT_1000e890 = 0;
long long DAT_1000e898 = 0;
long long DAT_1000e8a0 = 0;
long long DAT_1000e8a8 = 0;
long long DAT_1000e8b0 = 0;
long long DAT_1000e8b8 = 0;
long long DAT_1000e8c0 = 0;
long long DAT_1000e8c8 = 0;
long long DAT_1000e8d0 = 0;
long long DAT_1000e8d8 = 0;
long long DAT_1000e900 = 0;
long long DAT_1000e928 = 0;
long long DAT_1000e930 = 0;
long long DAT_1000e938 = 0;
long long DAT_1000e940 = 0;
long long DAT_1000e948 = 0;
long long DAT_1000e950 = 0;
long long DAT_1000e958 = 0;
long long DAT_1000e960 = 0;
long long DAT_1000e968 = 0;
long long DAT_1000e970 = 0;
long long DAT_1000e978 = 0;
long long DAT_1000e980 = 0;
long long DAT_1000e988 = 0;
long long DAT_1000e990 = 0;
long long DAT_1000e998 = 0;
long long DAT_1000e9a0 = 0;
long long DAT_1000e9a8 = 0;
long long DAT_1000e9b0 = 0;
long long DAT_1000e9b8 = 0;
long long DAT_1000e9c0 = 0;
long long DAT_1000e9c8 = 0;
long long DAT_1000e9d0 = 0;
long long DAT_1000e9d8 = 0;
long long DAT_1000ea00 = 0;
long long DAT_1000ea08 = 0;
long long DAT_1000ea10 = 0;
long long DAT_1000ea18 = 0;
long long DAT_1000ea20 = 0;
long long DAT_1000ea28 = 0;
long long DAT_1000ea30 = 0;
long long DAT_1000ea58 = 0;
long long DAT_1000ea60 = 0;
long long DAT_1000ea68 = 0;
long long DAT_1000ea70 = 0;
long long DAT_1000ea78 = 0;
long long DAT_1000ea80 = 0;
long long DAT_1000ea88 = 0;
int DAT_1000eab4 = 0;

/* Forward declarations */
void  FUN_100026e0(void *this_ptr,int param_1);
void 
FUN_100026f0(void *this_ptr,char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,char param_7);
unsigned int  FUN_10002770(int param_1);
void  FUN_100027c0(int param_1);
void  FUN_10002880(int param_1);
void  FUN_10002910(int param_1);
void  FUN_100029f0(int param_1);
void  FUN_10002b40(void *this_ptr,char param_1);
void FUN_10002b70(int param_1,int param_2,int param_3);
BOOL FUN_10002bc0(int param_1);
void FUN_10002be0(int param_1,int param_2);

void OnInit();
void ProcessScenary();


void  FUN_100026e0(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x16) = param_1;
  return;
}





void 
FUN_100026f0(void *this_ptr,char param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,char param_7)

{
  int *puVar1;
  int iVar2;
  
  *(char *)((intptr_t)this_ptr + 0x14) = param_1;
  *(int *)((intptr_t)this_ptr + 0x10) = param_2;
  RegisterZone(this_ptr,param_3);
  RegisterZone((intptr_t)this_ptr + 8,param_4);
  *(int *)((intptr_t)this_ptr + 0x1a) = param_5;
  iVar2 = *(int *)((intptr_t)this_ptr + 0x16);
  *(int *)((intptr_t)this_ptr + 0x1e) = param_6;
  *(char *)((intptr_t)this_ptr + 0x15) = param_7;
  if (iVar2 < iVar2 + 7) {
    puVar1 = (int *)(((unsigned char *)&DAT_1000df68) + iVar2 * 0xe);
    do {
      iVar2 = iVar2 + 1;
      *(char *)(puVar1 + 1) = *(char *)((intptr_t)this_ptr + 0x14);
      *puVar1 = param_2;
      *(char *)((int)puVar1 + 5) = 0;
      puVar1 = (int *)((int)puVar1 + 0xe);
    } while (iVar2 < *(int *)((intptr_t)this_ptr + 0x16) + 7);
  }
  return;
}





unsigned int  FUN_10002770(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x16);
  uVar1 = iVar2 + 7;
  if (iVar2 < (int)uVar1) {
    puVar3 = ((unsigned char *)&DAT_1000df60) + iVar2 * 0xe;
    do {
      uVar1 = GetTotalAmount0(puVar3);
      if (uVar1 == 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0xe;
    } while (iVar2 < *(int *)(param_1 + 0x16) + 7);
  }
  return uVar1 & -256;
}





void  FUN_100027c0(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  
  uVar2 = FUN_10002770(param_1);
  if (((char)uVar2 != '\0') && (cVar1 = TimerDone(*(char *)(param_1 + 0x15)), cVar1 != '\0'))
  {
    iVar4 = *(int *)(param_1 + 0x16);
    puVar5 = ((unsigned char *)&DAT_1000df60) + iVar4 * 0xe;
    iVar3 = GetTotalAmount0(puVar5);
    for (; (iVar3 != 0 && (iVar4 < *(int *)(param_1 + 0x16) + 7)); iVar4 = iVar4 + 1) {
      puVar5 = puVar5 + 0xe;
      iVar3 = GetTotalAmount0(puVar5);
    }
    iVar4 = iVar4 * 0xe;
    CreateObject0(((unsigned char *)&DAT_1000df60) + iVar4,&DAT_1000ea80,&DAT_1000e3d8,*(char *)(param_1 + 0x14),
                  param_1,0);
    ((long long *)&DAT_1000df6c)[iVar4] = *(char *)(param_1 + 0x14);
    ((long long *)&DAT_1000df6d)[iVar4] = 0;
    RunTimer(*(char *)(param_1 + 0x15),500);
  }
  return;
}





void  FUN_10002880(int param_1)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  int *puVar5;
  
  iVar2 = GetUnitsAmount2(param_1,&DAT_1000e3d8,*(char *)(param_1 + 0x14));
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x16);
    bVar1 = 1;
    puVar5 = ((unsigned char *)&DAT_1000df60) + iVar2 * 0xe;
    do {
      if (*(int *)(param_1 + 0x16) + 7 <= iVar2) {
        return;
      }
      iVar3 = GetUnitsAmount1(param_1,puVar5);
      if ((iVar3 != 0) && (puVar5[0xd] == '\0')) {
        puVar5[0xd] = 1;
        SelectUnits(puVar5,0);
        FUN_10002be0(*(int *)(param_1 + 0x1a),
                     (int)*(char *)(param_1 + 0x14));
        ClearSelection(*(char *)(param_1 + 0x14));
        bVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 0xe;
    } while (bVar1);
  }
  return;
}





void  FUN_10002910(int param_1)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX = 0;
  int *puVar4;
  
  iVar2 = GetUnitsAmount2(param_1 + 8,&DAT_1000e3d8,*(char *)(param_1 + 0x14));
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x16);
    bVar1 = 1;
    puVar4 = ((unsigned char *)&DAT_1000df60) + iVar2 * 0xe;
    do {
      if (*(int *)(param_1 + 0x16) + 7 <= iVar2) {
        return;
      }
      iVar3 = GetUnitsAmount1(param_1 + 8,puVar4);
      if ((iVar3 != 0) && (puVar4[0xd] != '\0')) {
        puVar4[0xd] = 0;
        iVar3 = GetDiff(0);
        AddResource(*(char *)(param_1 + 0x14) + -1,
                    (int)*(char *)(param_1 + 0x10),
                    (iVar3 + 5) * 100);
        SelectUnits(puVar4,0);
        FUN_10002be0(*(int *)(param_1 + 0x1e),
                     (int)*(char *)(param_1 + 0x14));
        ClearSelection(*(char *)(param_1 + 0x14));
        bVar1 = 0;
      }
      puVar4 = puVar4 + 0xe;
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
  return;
}





void  FUN_100029f0(int param_1)

{
  char uVar1;
  char uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int iVar6;
  int *puVar7;
  
  iVar6 = *(int *)(param_1 + 0x16);
  if (iVar6 < iVar6 + 7) {
    puVar7 = ((unsigned char *)&DAT_1000df60) + iVar6 * 0xe;
    do {
      iVar3 = GetTotalAmount0(puVar7);
      if ((iVar3 != 0) &&
         (iVar3 = GetUnitsByNation(puVar7,*(char *)(param_1 + 0x14)), iVar3 == 0)) {
        SaveSelectedUnits(0,&DAT_1000e968,0);
        SelectUnits(puVar7,0);
        iVar3 = 0;
        for (puVar5 = &DAT_1000e538;
            (iVar4 = GetTotalAmount0(puVar5), iVar4 != 0 && ((int)puVar5 < 0x1000e723));
            puVar5 = puVar5 + 0xe) {
          iVar3 = iVar3 + 1;
        }
        if (iVar3 < 0x23) {
          CreateZoneNearGroup(&DAT_1000e780,&DAT_1000e930,puVar7,1);
          SelErase(0);
          iVar3 = iVar3 * 0xe;
          CreateObject0(((unsigned char *)&DAT_1000e538) + iVar3,&DAT_1000ea80,&DAT_1000e768,0,&DAT_1000e780,0);
          uVar1 = puVar7[0xd];
          uVar2 = puVar7[0xc];
          *(int *)((int)((unsigned char *)&DAT_1000e540) + iVar3) = *(int *)(puVar7 + 8);
          ((long long *)&DAT_1000e545)[iVar3] = uVar1;
          ((long long *)&DAT_1000e544)[iVar3] = uVar2;
          DAT_1000eab4 = DAT_1000eab4 + 1;
        }
        else {
          SelDie(0);
        }
        SelectUnits(&DAT_1000e968,0);
        puVar7[0xc] = 0;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 0xe;
    } while (iVar6 < *(int *)(param_1 + 0x16) + 7);
  }
  return;
}





void  FUN_10002b40(void *this_ptr,char param_1)

{
  FUN_100029f0((intptr_t)this_ptr);
  if (param_1 != '\0') {
    FUN_100027c0((intptr_t)this_ptr);
    FUN_10002880((intptr_t)this_ptr);
    FUN_10002910((intptr_t)this_ptr);
  }
  return;
}





void __cdecl FUN_10002b70(int param_1,int param_2,int param_3)

{
  SelectTypeOfUnitsInZone(param_2,param_1,2,0);
  SelSendAndKill(2,param_3,0,0);
  SelectTypeOfUnitsInZone(param_3,param_1,2,0);
  SelSendAndKill(2,param_2,0,0);
  return;
}





BOOL __cdecl FUN_10002bc0(int param_1)

{
  int iVar1;
  
  iVar1 = GetUnitsByNation(param_1,3);
  return iVar1 != 0;
}





void __cdecl FUN_10002be0(int param_1,int param_2)

{
  int *puVar1;
  int uVar2;
  int uVar3;
  
  switch(param_1) {
  case 1:
    SelSendTo(param_2,&DAT_1000e830,0x30,0);
    SelSendTo(param_2,&DAT_1000e848,0x30,2);
    SelSendTo(param_2,&DAT_1000e858,0x20,2);
    SelSendTo(param_2,&DAT_1000e850,0,2);
    SelSendTo(param_2,&DAT_1000e7e8,0x10,2);
    SelSendTo(param_2,&DAT_1000e810,10,2);
    SelSendTo(param_2,&DAT_1000e820,0x10,2);
    SelSendTo(param_2,&DAT_1000e478,0x90,2);
    return;
  case 2:
    SelSendTo(param_2,&DAT_1000e820,0x82,0);
    SelSendTo(param_2,&DAT_1000e810,0x82,2);
    SelSendTo(param_2,&DAT_1000e7e8,0x82,2);
    SelSendTo(param_2,&DAT_1000e850,0x80,2);
    SelSendTo(param_2,&DAT_1000e858,0xa0,2);
    SelSendTo(param_2,&DAT_1000e848,0xb0,2);
    SelSendTo(param_2,&DAT_1000e830,0xb0,2);
    SelSendTo(param_2,&DAT_1000e930,0x40,2);
    return;
  case 3:
    SelSendTo(param_2,&DAT_1000e850,0,0);
    SelSendTo(param_2,&DAT_1000e7e8,0x10,2);
    SelSendTo(param_2,&DAT_1000e810,10,2);
    SelSendTo(param_2,&DAT_1000e820,0x10,2);
    SelSendTo(param_2,&DAT_1000e478,0x90,2);
    return;
  case 4:
    SelSendTo(param_2,&DAT_1000e820,0x82,0);
    SelSendTo(param_2,&DAT_1000e810,0x82,2);
    SelSendTo(param_2,&DAT_1000e7e8,0x82,2);
    SelSendTo(param_2,&DAT_1000e850,0x80,2);
    SelSendTo(param_2,&DAT_1000e468,0xe0,2);
    return;
  case 5:
    SelSendTo(param_2,&DAT_1000e7c8,0x30,0);
    SelSendTo(param_2,&DAT_1000e7d8,0x40,2);
    SelSendTo(param_2,&DAT_1000e7f0,0x30,2);
    SelSendTo(param_2,&DAT_1000e800,0x32,2);
    SelSendTo(param_2,&DAT_1000e7a8,0x30,2);
    SelSendTo(param_2,&DAT_1000e7c0,0,2);
    SelSendTo(param_2,&DAT_1000e7d0,0xf0,2);
    SelSendTo(param_2,&DAT_1000e7e0,0,2);
    SelSendTo(param_2,&DAT_1000e488,0x60,2);
    return;
  case 6:
    SelSendTo(param_2,&DAT_1000e7e0,0x70,0);
    SelSendTo(param_2,&DAT_1000e7d0,0x70,2);
    SelSendTo(param_2,&DAT_1000e7c0,0x82,2);
    SelSendTo(param_2,&DAT_1000e7a8,0xbe,2);
    SelSendTo(param_2,&DAT_1000e800,0xb0,2);
    SelSendTo(param_2,&DAT_1000e7f0,0xb0,2);
    SelSendTo(param_2,&DAT_1000e7d8,0xa0,2);
    SelSendTo(param_2,&DAT_1000e7c8,0xbe,2);
    SelSendTo(param_2,&DAT_1000e960,0x40,2);
    return;
  case 7:
    SelSendTo(param_2,&DAT_1000e7b0,0xf0,0);
    SelSendTo(param_2,&DAT_1000e7b8,0xf0,2);
    SelSendTo(param_2,&DAT_1000e790,0xe0,2);
    SelSendTo(param_2,&DAT_1000e798,0xc0,2);
    SelSendTo(param_2,&DAT_1000e7a0,0xd0,2);
    SelSendTo(param_2,&DAT_1000e8b8,0xe0,2);
    SelSendTo(param_2,&DAT_1000e488,0x60,2);
    return;
  case 8:
    SelSendTo(param_2,&DAT_1000e8b8,0x50,0);
    SelSendTo(param_2,&DAT_1000e7a0,0x40,2);
    SelSendTo(param_2,&DAT_1000e798,0x40,2);
    SelSendTo(param_2,&DAT_1000e790,0x60,2);
    SelSendTo(param_2,&DAT_1000e7b8,0x70,2);
    SelSendTo(param_2,&DAT_1000e7b0,0x70,2);
    SelSendTo(param_2,&DAT_1000ea08,0xe0,2);
    return;
  case 9:
    uVar3 = 0;
    uVar2 = 0xe0;
    puVar1 = &DAT_1000e790;
    break;
  case 10:
    SelSendTo(param_2,&DAT_1000e8b8,0x50,0);
    SelSendTo(param_2,&DAT_1000e7a0,0x40,2);
    SelSendTo(param_2,&DAT_1000e798,0x40,2);
    SelSendTo(param_2,&DAT_1000e790,0x60,2);
    SelSendTo(param_2,&DAT_1000ea10,0xc0,2);
    return;
  case 0xb:
    SelSendTo(param_2,&DAT_1000e7f8,0xb0,0);
    SelSendTo(param_2,&DAT_1000e808,0xb0,2);
    SelSendTo(param_2,&DAT_1000e818,0xb0,2);
    SelSendTo(param_2,&DAT_1000e828,0xb0,2);
    uVar3 = 2;
    uVar2 = 0xb0;
    puVar1 = &DAT_1000e840;
    break;
  case 0xc:
    SelSendTo(param_2,&DAT_1000e8b8,0x50,2);
    SelSendTo(param_2,&DAT_1000e7a0,0x40,2);
    SelSendTo(param_2,&DAT_1000e798,0x40,2);
    SelSendTo(param_2,&DAT_1000e840,0x30,2);
    SelSendTo(param_2,&DAT_1000e828,0x30,2);
    SelSendTo(param_2,&DAT_1000e818,0x30,2);
    SelSendTo(param_2,&DAT_1000e808,0x30,2);
    SelSendTo(param_2,&DAT_1000e7f8,0x30,2);
    SelSendTo(param_2,&DAT_1000e750,0xa0,2);
    return;
  case 0xd:
    SelSendTo(param_2,&DAT_1000e898,0x10,0);
    SelSendTo(param_2,&DAT_1000e8d0,0xf0,2);
    SelSendTo(param_2,&DAT_1000e8c8,0xf0,2);
    SelSendTo(param_2,&DAT_1000e770,0x80,2);
    return;
  case 0xe:
    SelSendTo(param_2,&DAT_1000e8c8,0x70,0);
    SelSendTo(param_2,&DAT_1000e8d0,0x70,2);
    SelSendTo(param_2,&DAT_1000e898,0x80,2);
    SelSendTo(param_2,&DAT_1000e480,0x10,2);
    return;
  case 0xf:
    SelSendTo(param_2,&DAT_1000e888,0x40,0);
    SelSendTo(param_2,&DAT_1000e878,0x30,2);
    SelSendTo(param_2,&DAT_1000e868,0x50,2);
    SelSendTo(param_2,&DAT_1000e470,0xe0,2);
    return;
  case 0x10:
    SelSendTo(param_2,&DAT_1000e868,0xe0,0);
    SelSendTo(param_2,&DAT_1000e878,0xb0,2);
    SelSendTo(param_2,&DAT_1000e888,0xa0,2);
    SelSendTo(param_2,&DAT_1000e430,0x20,2);
    return;
  case 0x11:
    SelSendTo(param_2,&DAT_1000e870,0x60,0);
    SelSendTo(param_2,&DAT_1000e860,0x50,2);
    SelSendTo(param_2,&DAT_1000e838,0x60,2);
    SelSendTo(param_2,&DAT_1000e8a0,0x70,2);
    SelSendTo(param_2,&DAT_1000e868,0x50,2);
    SelSendTo(param_2,&DAT_1000e470,0xe0,2);
    return;
  case 0x12:
    SelSendTo(param_2,&DAT_1000e868,0xe0,0);
    SelSendTo(param_2,&DAT_1000e8a0,0xf0,2);
    SelSendTo(param_2,&DAT_1000e838,0xf0,2);
    SelSendTo(param_2,&DAT_1000e860,0xd0,2);
    SelSendTo(param_2,&DAT_1000e870,0xc0,2);
    SelSendTo(param_2,&DAT_1000ea60,0x40,2);
    return;
  case 0x13:
    SelSendTo(param_2,&DAT_1000e8c0,0x50,0);
    SelSendTo(param_2,&DAT_1000e8b0,0x70,2);
    SelSendTo(param_2,&DAT_1000e8a8,0x70,2);
    SelSendTo(param_2,&DAT_1000e890,0x40,2);
    SelSendTo(param_2,&DAT_1000e880,0x50,2);
    SelSendTo(param_2,&DAT_1000e838,0x60,2);
    SelSendTo(param_2,&DAT_1000e8a0,0x70,2);
    SelSendTo(param_2,&DAT_1000e868,0x50,2);
    SelSendTo(param_2,&DAT_1000e470,0xe0,2);
    return;
  case 0x14:
    SelSendTo(param_2,&DAT_1000e868,0xe0,0);
    SelSendTo(param_2,&DAT_1000e8a0,0xf0,2);
    SelSendTo(param_2,&DAT_1000e838,0xf0,2);
    SelSendTo(param_2,&DAT_1000e880,0xc0,2);
    SelSendTo(param_2,&DAT_1000e890,0xd0,2);
    SelSendTo(param_2,&DAT_1000e8a8,0xf0,2);
    SelSendTo(param_2,&DAT_1000e8b0,0xf0,2);
    SelSendTo(param_2,&DAT_1000e8c0,0xd0,2);
    SelSendTo(param_2,&DAT_1000e980,0x40,2);
  default:
    return;
  }
  SelSendTo(param_2,puVar1,uVar2,uVar3);
  SelSendTo(param_2,&DAT_1000e798,0xc0,2);
  SelSendTo(param_2,&DAT_1000e7a0,0xd0,2);
  SelSendTo(param_2,&DAT_1000e8b8,0xe0,2);
  SelSendTo(param_2,&DAT_1000e488,0x60,2);
  return;
}





void OnInit(void)

{
  int *puVar1;
  int *puStack_4;
  
                    
  RegisterUpgrade(&DAT_1000e928,"Pushka(TU)COST");
  RegisterUpgrade(&DAT_1000e940,"Pushka(TU)BUILD");
  RegisterUpgrade(&DAT_1000ea18,"Mortira(TU)COST");
  RegisterUpgrade(&DAT_1000ea68,"Mortira(TU)BUILD");
  RegisterUnits(&DAT_1000e388,"GGate1");
  RegisterUnits(&DAT_1000e380,"GGate2");
  RegisterUnits(&DAT_1000e398,"GGate3");
  RegisterUnits(&DAT_1000e390,"GGate4");
  RegisterUnits(&DAT_1000e3a8,"GGate5");
  RegisterUnits(&DAT_1000e3a0,"GGate6");
  RegisterUnits(&DAT_1000e3b8,"GGate7");
  RegisterUnits(&DAT_1000e3b0,"GGate8");
  RegisterUnits(&DAT_1000ea78,"GSityGate");
  RegisterZone(&DAT_1000e930,"ZGoldNW");
  RegisterZone(&DAT_1000e960,"ZWoodW");
  RegisterZone(&DAT_1000ea08,"ZCoalSW");
  RegisterZone(&DAT_1000e468,"ZIronW");
  RegisterZone(&DAT_1000ea10,"ZFoodSW");
  RegisterZone(&DAT_1000e430,"ZFoodN");
  RegisterZone(&DAT_1000e750,"ZGoldS");
  RegisterZone(&DAT_1000ea60,"ZIronNE");
  RegisterZone(&DAT_1000e980,"ZCoalNE");
  RegisterZone(&DAT_1000e770,"ZStoneE");
  RegisterZone(&DAT_1000e478,"ZBayNW");
  RegisterZone(&DAT_1000e470,"ZBayNE");
  RegisterZone(&DAT_1000e480,"ZBaySE");
  RegisterZone(&DAT_1000e488,"ZBaySW");
  RegisterZone(&DAT_1000e790,DAT_1000b3d4);
  RegisterZone(&DAT_1000e810,DAT_1000b3cc);
  RegisterZone(&DAT_1000e798,DAT_1000b3c4);
  RegisterZone(&DAT_1000e820,DAT_1000b3bc);
  RegisterZone(&DAT_1000e7a0,DAT_1000b3b4);
  RegisterZone(&DAT_1000e830,DAT_1000b3ac);
  RegisterZone(&DAT_1000e7b0,DAT_1000b3a4);
  RegisterZone(&DAT_1000e848,DAT_1000b39c);
  RegisterZone(&DAT_1000e7b8,DAT_1000b394);
  RegisterZone(&DAT_1000e858,DAT_1000b38c);
  RegisterZone(&DAT_1000e7c8,DAT_1000b384);
  RegisterZone(&DAT_1000e868,DAT_1000b37c);
  RegisterZone(&DAT_1000e7d8,DAT_1000b374);
  RegisterZone(&DAT_1000e878,DAT_1000b36c);
  RegisterZone(&DAT_1000e7f0,DAT_1000b364);
  RegisterZone(&DAT_1000e888,DAT_1000b35c);
  RegisterZone(&DAT_1000e800,DAT_1000b354);
  RegisterZone(&DAT_1000e8a0,DAT_1000b34c);
  RegisterZone(&DAT_1000e7a8,DAT_1000b344);
  RegisterZone(&DAT_1000e838,DAT_1000b33c);
  RegisterZone(&DAT_1000e7c0,DAT_1000b334);
  RegisterZone(&DAT_1000e860,DAT_1000b32c);
  RegisterZone(&DAT_1000e7d0,DAT_1000b324);
  RegisterZone(&DAT_1000e870,DAT_1000b31c);
  RegisterZone(&DAT_1000e7e0,DAT_1000b314);
  RegisterZone(&DAT_1000e880,DAT_1000b30c);
  RegisterZone(&DAT_1000e7f8,DAT_1000b304);
  RegisterZone(&DAT_1000e890,DAT_1000b2fc);
  RegisterZone(&DAT_1000e808,DAT_1000b2f4);
  RegisterZone(&DAT_1000e8a8,DAT_1000b2ec);
  RegisterZone(&DAT_1000e818,DAT_1000b2e4);
  RegisterZone(&DAT_1000e8b0,DAT_1000b2dc);
  RegisterZone(&DAT_1000e828,DAT_1000b2d4);
  RegisterZone(&DAT_1000e8c0,DAT_1000b2cc);
  RegisterZone(&DAT_1000e840,DAT_1000b2c4);
  RegisterZone(&DAT_1000e8c8,DAT_1000b2bc);
  RegisterZone(&DAT_1000e850,DAT_1000b2b4);
  RegisterZone(&DAT_1000e8d0,DAT_1000b2ac);
  RegisterZone(&DAT_1000e7e8,DAT_1000b2a4);
  RegisterZone(&DAT_1000e898,DAT_1000b29c);
  RegisterZone(&DAT_1000e8b8,DAT_1000b294);
  RegisterFormation(&DAT_1000ea80,"#ALONE");
  RegisterUnitType(&DAT_1000e3d8,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_1000e768,"GRUZ(UN)");
  puVar1 = &DAT_1000df60;
  do {
    RegisterDynGroup(puVar1);
    puVar1 = puVar1 + 0xe;
  } while ((int)puVar1 < 0x1000e334);
  RegisterVar(&DAT_1000df60,0x3d4);
  RegisterVar(&DAT_1000e358,0x22);
  RegisterVar(&DAT_1000e728,0x22);
  RegisterVar(&DAT_1000e3e0,0x22);
  RegisterVar(&DAT_1000ea88,0x22);
  RegisterVar(&DAT_1000e408,0x22);
  RegisterVar(&DAT_1000ea30,0x22);
  RegisterVar(&DAT_1000e900,0x22);
  RegisterVar(&DAT_1000e8d8,0x22);
  RegisterVar(&DAT_1000e440,0x22);
  RegisterVar(&DAT_1000e9d8,0x22);
  FUN_100026f0(&DAT_1000e358,3,1,"ZGoldNW","ZBayNW",1,2,1);
  FUN_100026f0(&DAT_1000e728,3,0,"ZWoodW","ZBaySW",5,6,2);
  FUN_100026f0(&DAT_1000e3e0,3,5,"ZCoalSW","ZBaySW",7,8,3);
  FUN_100026f0(&DAT_1000ea88,3,4,"ZIronW","ZBayNW",3,4,4);
  FUN_100026f0(&DAT_1000e408,3,3,"ZFoodSW","ZBaySW",9,10,5);
  FUN_100026f0(&DAT_1000ea30,3,3,"ZFoodN","ZBayNE",0xf,0x10,6);
  FUN_100026f0(&DAT_1000e900,3,1,"ZGoldS","ZBaySW",0xb,0xc,7);
  FUN_100026f0(&DAT_1000e8d8,3,4,"ZIronNE","ZBayNE",0x11,0x12,8);
  FUN_100026f0(&DAT_1000e440,3,5,"ZCoalNE","ZBayNE",0x13,0x14,9);
  FUN_100026f0(&DAT_1000e9d8,3,2,"ZStoneE","ZBaySE",0xe,0xd,10);
  puStack_4 = &DAT_1000e538;
  do {
    RegisterDynGroup(puStack_4);
    puStack_4 = puStack_4 + 0xe;
  } while ((int)puStack_4 < 0x1000e722);
  RegisterVar(&DAT_1000e538,0x1ea);
  RegisterZone(&DAT_1000e788,"ZSell");
  RegisterZone(&DAT_1000e350,"ZClear");
  RegisterUnitType(&DAT_1000ea20,"Kreposnoi_evro(PL)");
  RegisterDynGroup(&DAT_1000e968);
  RegisterVar(&DAT_1000e968,8);
  RegisterDynGroup(&DAT_1000e348);
  RegisterVar(&DAT_1000e348,8);
  RegisterUnits(&DAT_1000e438,"GWood1");
  RegisterUnits(&DAT_1000e3d0,"GStone1");
  RegisterUnits(&DAT_1000e950,"GFood1");
  RegisterUnits(&DAT_1000e958,"GFood2");
  RegisterUnitType(&DAT_1000e938,"Poland_pikiner(PL)");
  RegisterUnitType(&DAT_1000ea70,"Reitor_Polsha(PL)");
  RegisterZone(&DAT_1000e4c0,"ZP1_1");
  RegisterZone(&DAT_1000e4e8,"ZP2_1");
  RegisterZone(&DAT_1000e510,"ZP3_1");
  RegisterZone(&DAT_1000e4c8,"ZP1_2");
  RegisterZone(&DAT_1000e4f0,"ZP2_2");
  RegisterZone(&DAT_1000e518,"ZP3_2");
  RegisterZone(&DAT_1000e4d0,"ZP1_3");
  RegisterZone(&DAT_1000e4f8,"ZP2_3");
  RegisterZone(&DAT_1000e520,"ZP3_3");
  RegisterZone(&DAT_1000e4d8,"ZP1_4");
  RegisterZone(&DAT_1000e500,"ZP2_4");
  RegisterZone(&DAT_1000e528,"ZP3_4");
  RegisterZone(&DAT_1000e4e0,"ZP1_5");
  RegisterZone(&DAT_1000e508,"ZP2_5");
  RegisterZone(&DAT_1000e530,"ZP3_5");
  RegisterUnits(&DAT_1000df50,"GKon1");
  RegisterUnits(&DAT_1000df58,"GKon2");
  RegisterZone(&DAT_1000e338,"ZKon1");
  RegisterZone(&DAT_1000e340,"ZKon2");
  RegisterZone(&DAT_1000ea58,"ZAttack");
  RegisterZone(&DAT_1000e9a0,DAT_1000b164);
  RegisterZone(&DAT_1000e9b0,DAT_1000b160);
  RegisterZone(&DAT_1000e9c0,DAT_1000b15c);
  RegisterUnitType(&DAT_1000e970,"Center_Poland(PL)");
  RegisterUnitType(&DAT_1000e978,"Melnica(PL)");
  RegisterUnitType(&DAT_1000e988,"Konushnia_Swesair(PL)");
  RegisterUnitType(&DAT_1000e990,"akademia_E(PL)");
  RegisterUnitType(&DAT_1000e998,"Rinok(PL)");
  RegisterUnitType(&DAT_1000e9a8,"WALL_UKR(PL)");
  RegisterUnitType(&DAT_1000e9b8,"WALL_EV(PL)");
  RegisterUnitType(&DAT_1000e9c8,"Bashnia(PL)");
  RegisterUnitType(&DAT_1000e9d0,"Krestian_Turki(TU)");
  RegisterUnitType(&DAT_1000e3c0,"Pushka(TU)");
  RegisterUnitType(&DAT_1000e3c8,"Mortira(TU)");
  RegisterUnits(&DAT_1000ea28,"GLoseGame");
  RegisterUnits(&DAT_1000ea00,"GFort");
  RegisterVar(&DAT_1000eab4,4);
  RegisterUnits(&DAT_1000e490,DAT_1000b09c);
  RegisterUnits(&DAT_1000e498,DAT_1000b098);
  RegisterUnits(&DAT_1000e4a0,DAT_1000b094);
  RegisterUnits(&DAT_1000e4a8,DAT_1000b090);
  RegisterUnits(&DAT_1000e4b0,DAT_1000b08c);
  RegisterUnits(&DAT_1000e4b8,DAT_1000b088);
  RegisterUnits(&DAT_1000e760,"GNormal");
  RegisterUnits(&DAT_1000e948,"GHard");
  ChangeFriends(0,3);
  ChangeFriends(2,0xc);
  SetPlayerName(1,"SLAVER");
  SetPlayerName(2,"FORTRESS");
  SetPlayerName(3,"GUILD");
  RegisterUnits(&DAT_1000e758,"GGetInfo");
  RegisterDynGroup(&DAT_1000e778);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  BOOL bVar2;
  int iVar3;
  int uVar4;
  DWORD DVar5;
  unsigned int uVar6;
  int iVar7;
  void *pcVar8;
  int *puVar9;
  void *pcVar10;
  int iStack_30;
  unsigned int auStack_2c [11];
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    InitialUpgrade("GGate1","KUZ01PL");
    InitialUpgrade("GGate1","AKA05PL");
    iVar3 = GetDiff(0);
    if ((iVar3 == 2) || (iVar3 = GetDiff(0), iVar3 == 3)) {
      InitialUpgrade("GKon1","KUZ03PL");
    }
    EnableUnit(0,&DAT_1000e970,0);
    EnableUnit(0,&DAT_1000e9b8,0);
    EnableUnit(0,&DAT_1000e978,0);
    EnableUnit(0,&DAT_1000e9c8,0);
    EnableUnit(0,&DAT_1000e988,0);
    EnableUnit(0,&DAT_1000e9d0,0);
    EnableUnit(0,&DAT_1000e990,0);
    EnableUnit(0,&DAT_1000e3c0,0);
    EnableUnit(0,&DAT_1000e998,0);
    EnableUnit(0,&DAT_1000e3c8,0);
    EnableUnit(0,&DAT_1000e9a8,0);
    iVar3 = GetDiff(0);
    if (iVar3 == 1) {
      SelectUnits(&DAT_1000e760,0);
      SelErase(0);
      ClearSelection(0);
    }
    iVar3 = GetDiff(0);
    if ((iVar3 == 2) || (iVar3 = GetDiff(0), iVar3 == 3)) {
      SelectUnits(&DAT_1000e948,0);
      SelErase(0);
      ClearSelection(0);
    }
    iVar3 = GetDiff(0);
    SetResource(0,0,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,3,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,2,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,1,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,4,(5 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,5,(5 - iVar3) * 1000);
    SetResource(2,0,5000);
    SetResource(2,3,100000);
    SetResource(2,2,500000);
    iVar3 = GetDiff(0);
    SetResource(2,1,(iVar3 + 5) * 1000);
    iVar3 = GetDiff(0);
    SetResource(2,4,(iVar3 + 5) * 1000);
    iVar3 = GetDiff(0);
    SetResource(2,5,(iVar3 + 5) * 1000);
    SelectUnits(&DAT_1000e388,0);
    SelectUnits(&DAT_1000e380,1);
    SelectUnits(&DAT_1000e398,1);
    SelectUnits(&DAT_1000e390,1);
    SelectUnits(&DAT_1000e3a8,1);
    SelectUnits(&DAT_1000e3a0,1);
    SelectUnits(&DAT_1000e3b8,1);
    SelectUnits(&DAT_1000e3b0,1);
    SelOpenGates(3);
    ClearSelection(3);
    SelectUnits(&DAT_1000ea78,0);
    SelOpenGates(2);
    ClearSelection(2);
    TakeWood(&DAT_1000e438);
    TakeStone(&DAT_1000e3d0);
    TakeFood(&DAT_1000e950);
    TakeFood(&DAT_1000e958);
    RunTimer(1,300);
    RunTimer(2,300);
    RunTimer(3,300);
    RunTimer(4,300);
    RunTimer(5,300);
    RunTimer(6,300);
    RunTimer(7,300);
    RunTimer(8,300);
    RunTimer(9,300);
    RunTimer(10,300);
    iVar3 = GetDiff(0);
    RunTimer(0xb,(8 - iVar3) * 1000);
    uVar4 = GetDiff(0);
    switch(uVar4) {
    case 0:
      SetLightSpot(&DAT_1000e930,1,1);
      SetLightSpot(&DAT_1000e468,1,4);
    case 1:
      SetLightSpot(&DAT_1000e960,1,2);
      SetLightSpot(&DAT_1000ea60,1,8);
      SetLightSpot(&DAT_1000e430,1,6);
      SetLightSpot(&DAT_1000e478,1,0xb);
      SetLightSpot(&DAT_1000e470,1,0xc);
      SetLightSpot(&DAT_1000e480,1,0xd);
      SetLightSpot(&DAT_1000e488,1,0xe);
    case 2:
      SetLightSpot(&DAT_1000ea08,1,3);
      SetLightSpot(&DAT_1000ea10,1,5);
      SetLightSpot(&DAT_1000e980,1,9);
    case 3:
      SetLightSpot(&DAT_1000e750,1,7);
      SetLightSpot(&DAT_1000e770,1,10);
    default:
      EnableMission(0x41);
      EnableMission(0x42);
      EnableMission(0x43);
      EnableMission(0x44);
      EnableMission(0x45);
      EnableMission(0x46);
      EnableMission(0x47);
      EnableMission(0x48);
      EnableMission(0x4b);
      EnableMission(0x4c);
      EnableMission(0x4d);
      ShowPage("#PAGE1801");
      ShowPage("#PAGE1811");
      ShowPage("#PAGE1821");
      DisableUpgrade(0,&DAT_1000e928);
      DisableUpgrade(0,&DAT_1000e940);
      DisableUpgrade(0,&DAT_1000ea18);
      DisableUpgrade(0,&DAT_1000ea68);
    }
  }
  bVar2 = FUN_10002bc0(&DAT_1000e490);
  FUN_10002b40(&DAT_1000e358,bVar2);
  bVar2 = FUN_10002bc0(&DAT_1000e438);
  FUN_10002b40(&DAT_1000e728,bVar2);
  bVar2 = FUN_10002bc0(&DAT_1000e498);
  FUN_10002b40(&DAT_1000e3e0,bVar2);
  bVar2 = FUN_10002bc0(&DAT_1000e4a0);
  FUN_10002b40(&DAT_1000ea88,bVar2);
  bVar2 = FUN_10002bc0(&DAT_1000e950);
  FUN_10002b40(&DAT_1000e408,bVar2);
  bVar2 = FUN_10002bc0(&DAT_1000e958);
  FUN_10002b40(&DAT_1000ea30,bVar2);
  bVar2 = FUN_10002bc0(&DAT_1000e4a8);
  FUN_10002b40(&DAT_1000e900,bVar2);
  bVar2 = FUN_10002bc0(&DAT_1000e4b0);
  FUN_10002b40(&DAT_1000e8d8,bVar2);
  bVar2 = FUN_10002bc0(&DAT_1000e4b8);
  FUN_10002b40(&DAT_1000e440,bVar2);
  bVar2 = FUN_10002bc0(&DAT_1000e3d0);
  FUN_10002b40(&DAT_1000e9d8,bVar2);
  iVar3 = GetUnitsAmount2(&DAT_1000e788,&DAT_1000e768,0);
  if (iVar3 != 0) {
    iStack_30 = 0;
    iVar3 = GetUnitsAmount1(&DAT_1000e788,&DAT_1000e538);
    if (iVar3 == 0) {
      puVar9 = &DAT_1000e538;
      do {
        if (0x1000e722 < (int)puVar9) break;
        puVar9 = puVar9 + 0xe;
        iStack_30 = iStack_30 + 1;
        iVar3 = GetUnitsAmount1(&DAT_1000e788,puVar9);
      } while (iVar3 == 0);
      if (0x22 < iStack_30) goto LAB_100020e7;
    }
    iStack_30 = iStack_30 * 0xe;
    if (((long long *)&DAT_1000e545)[iStack_30] != '\0') {
      iVar3 = GetDiff(0);
      AddResource(0,(int)*(char *)((int)((unsigned char *)&DAT_1000e540) + iStack_30),(10 - iVar3) * 0x32);
    }
    AddResource(0,1,100);
    SaveSelectedUnits(0,&DAT_1000e968,0);
    ClearSelection(0);
    SelectUnits(((unsigned char *)&DAT_1000e538) + iStack_30,0);
    SelSendTo(0,&DAT_1000e350,0,0);
    SelChangeNation(0,1);
    ClearSelection(0);
    SelectUnits(&DAT_1000e968,0);
  }
LAB_100020e7:
  iVar3 = GetUnitsAmount0(&DAT_1000e350,1);
  if (iVar3 != 0) {
    SelectTypeOfUnitsInZone(&DAT_1000e350,&DAT_1000e768,1,0);
    SelectTypeOfUnitsInZone(&DAT_1000e350,&DAT_1000ea20,1,1);
    SelErase(1);
    ClearSelection(1);
  }
  iVar3 = GetUnitsAmount2(&DAT_1000e788,&DAT_1000ea20,0);
  if (iVar3 != 0) {
    SaveSelectedUnits(0,&DAT_1000e968,0);
    ClearSelection(0);
    SelectTypeOfUnitsInZone(&DAT_1000e788,&DAT_1000ea20,0,0);
    SaveSelectedUnits(0,&DAT_1000e348,0);
    iVar3 = GetTotalAmount0(&DAT_1000e348);
    AddResource(0,1,iVar3 * 300);
    SelSendTo(0,&DAT_1000e350,0,0);
    SelChangeNation(0,1);
    ClearSelection(1);
    SelectUnits(&DAT_1000e968,0);
  }
  FUN_10002b70(&DAT_1000e938,&DAT_1000e500,&DAT_1000e4e8);
  FUN_10002b70(&DAT_1000e938,&DAT_1000e510,&DAT_1000e520);
  FUN_10002b70(&DAT_1000e938,&DAT_1000e518,&DAT_1000e530);
  FUN_10002b70(&DAT_1000e938,&DAT_1000e4c0,&DAT_1000e4d0);
  FUN_10002b70(&DAT_1000ea70,&DAT_1000e4e8,&DAT_1000e4f8);
  FUN_10002b70(&DAT_1000ea70,&DAT_1000e4f0,&DAT_1000e508);
  FUN_10002b70(&DAT_1000ea70,&DAT_1000e510,&DAT_1000e528);
  FUN_10002b70(&DAT_1000ea70,&DAT_1000e4c0,&DAT_1000e4d8);
  FUN_10002b70(&DAT_1000ea70,&DAT_1000e4c8,&DAT_1000e4e0);
  cVar1 = CheckProduction(&DAT_1000df50);
  if (cVar1 != '\0') {
    ProduceUnit(&DAT_1000df50,&DAT_1000e938,&DAT_1000e968);
  }
  cVar1 = CheckProduction(&DAT_1000df58);
  if (cVar1 != '\0') {
    ProduceUnit(&DAT_1000df58,&DAT_1000ea70,&DAT_1000e968);
  }
  iVar3 = GetUnitsAmount2(&DAT_1000e338,&DAT_1000e938,2);
  if (iVar3 != 0) {
    SelectTypeOfUnitsInZone(&DAT_1000e338,&DAT_1000e938,2,0);
    DVar5 = time(NULL);
    srand(DVar5);
    iVar3 = rand();
    switch(iVar3 % 6) {
    case 1:
      puVar9 = &DAT_1000e4e8;
      break;
    case 2:
      puVar9 = &DAT_1000e510;
      break;
    case 3:
      puVar9 = &DAT_1000e518;
      break;
    case 4:
      puVar9 = &DAT_1000e4c0;
      break;
    default:
      puVar9 = &DAT_1000ea58;
    }
    SelSendAndKill(2,puVar9,0,0);
    ClearSelection(2);
  }
  iVar3 = GetUnitsAmount2(&DAT_1000e340,&DAT_1000ea70,2);
  if (iVar3 != 0) {
    SelectTypeOfUnitsInZone(&DAT_1000e340,&DAT_1000ea70,2,0);
    DVar5 = time(NULL);
    srand(DVar5);
    uVar6 = rand();
    uVar6 = uVar6 & -2147483641;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | -8) + 1;
    }
    switch(uVar6) {
    case 1:
      puVar9 = &DAT_1000e4e8;
      break;
    case 2:
      puVar9 = &DAT_1000e510;
      break;
    case 3:
      puVar9 = &DAT_1000e4f0;
      break;
    case 4:
      puVar9 = &DAT_1000e4c0;
      break;
    case 5:
      puVar9 = &DAT_1000e4c8;
      break;
    default:
      puVar9 = &DAT_1000ea58;
    }
    SelSendAndKill(2,puVar9,0,0);
    ClearSelection(2);
  }
  cVar1 = TimerDone(0xb);
  if (cVar1 != '\0') {
    SelectUnitsInZone(&DAT_1000ea58,2,0);
    SelSendAndKill(2,&DAT_1000e9a0,0,0);
    SelSendAndKill(2,&DAT_1000e9b0,0,2);
    SelSendAndKill(2,&DAT_1000e9c0,0,2);
    ClearSelection(2);
    iVar3 = GetDiff(0);
    RunTimer(0xb,(8 - iVar3) * 1000);
  }
  iVar3 = GetUnitsByNation(&DAT_1000ea28,0);
  iVar7 = GetDiff(0);
  if ((iVar3 <= iVar7 + 1) || (cVar1 = NationIsErased(0), pcVar10 = (void*)&ShowPage, cVar1 != '\0'))
  {
    ShowPage("#PAGE1802");
    LooseGame();
  }
  iVar3 = GetTotalAmount0(&DAT_1000ea00);
  if (iVar3 < 0x15) {
    ShowPage("#PAGE1803");
    SetTrigg(0xc,0);
  }
  iVar3 = GetUnitsByNation(&DAT_1000e490,3);
  if ((((((iVar3 == 0) && (iVar3 = GetUnitsByNation(&DAT_1000e498,3), iVar3 == 0)) &&
        (iVar3 = GetUnitsByNation(&DAT_1000e4a0,3), iVar3 == 0)) &&
       ((iVar3 = GetUnitsByNation(&DAT_1000e4a8,3), iVar3 == 0 &&
        (iVar3 = GetUnitsByNation(&DAT_1000e4b0,3), iVar3 == 0)))) &&
      ((iVar3 = GetUnitsByNation(&DAT_1000e4b8,3), iVar3 == 0 &&
       ((iVar3 = GetUnitsByNation(&DAT_1000e438,3), iVar3 == 0 &&
        (iVar3 = GetUnitsByNation(&DAT_1000e3d0,3), iVar3 == 0)))))) &&
     ((iVar3 = GetUnitsByNation(&DAT_1000e950,3), iVar3 == 0 &&
      (iVar3 = GetUnitsByNation(&DAT_1000e958,3), iVar3 == 0)))) {
    ShowPage("#PAGE1804");
    SetTrigg(0xc,0);
  }
  if (499 < DAT_1000eab4) {
    ShowPage("#PAGE1805");
    SetTrigg(0xc,0);
  }
  cVar1 = Trigg(0xc);
  if (cVar1 == '\0') {
    ShowVictory();
  }
  iVar3 = GetTotalAmount0(&DAT_1000e758);
  if (iVar3 != 0) {
    SaveSelectedUnits(0,&DAT_1000e778,0);
    iVar3 = GetTotalAmount0(&DAT_1000e778);
    if (iVar3 == 1) {
      GetUnitInfo(&DAT_1000e758,0,auStack_2c);
      uVar6 = auStack_2c[0] & 0xffff;
      GetUnitInfo(&DAT_1000e778,0,auStack_2c);
      if (uVar6 == (auStack_2c[0] & 0xffff)) {
        ShowPageParam("#PAGE1806",DAT_1000eab4);
        ClearSelection(0);
      }
    }
  }
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
