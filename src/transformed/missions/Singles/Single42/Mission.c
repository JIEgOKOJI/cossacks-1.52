#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
char DAT_1002d01c[] = "Z20";
char DAT_1002d020[] = "Z19";
char DAT_1002d024[] = "Z18";
char DAT_1002d028[] = "Z17";
char DAT_1002d02c[] = "Z16";
char DAT_1002d030[] = "Z15";
char DAT_1002d034[] = "Z14";
char DAT_1002d038[] = "Z13";
char DAT_1002d03c[] = "Z12";
char DAT_1002d040[] = "Z11";
char DAT_1002d044[] = "Z10";
char DAT_1002d048[] = "Z9";
char DAT_1002d04c[] = "Z8";
char DAT_1002d050[] = "Z7";
char DAT_1002d054[] = "Z6";
char DAT_1002d058[] = "Z5";
char DAT_1002d05c[] = "Z4";
char DAT_1002d060[] = "Z3";
char DAT_1002d064[] = "Z2";
char DAT_1002d068[] = "Z1";
int DAT_10030d44 = 0;
int DAT_10030d48 = 0;
int DAT_10030d4c = 0;
long long DAT_100326f0 = 0;
long long DAT_10032728 = 0;
long long DAT_10032760 = 0;
long long DAT_10032798 = 0;
long long DAT_100327d0 = 0;
long long DAT_10032808 = 0;
long long DAT_10032840 = 0;
long long DAT_10032848 = 0;
long long DAT_10032850 = 0;
long long DAT_10032858 = 0;
long long DAT_10032860 = 0;
long long DAT_10032868 = 0;
long long DAT_10032870 = 0;
long long DAT_10032878 = 0;
long long DAT_10032880 = 0;
long long DAT_10032888 = 0;
long long DAT_10032890 = 0;
long long DAT_10032898 = 0;
long long DAT_100328d0 = 0;
long long DAT_10032908 = 0;
long long DAT_10032910 = 0;
long long DAT_10032918 = 0;
long long DAT_10032920 = 0;
long long DAT_10032928 = 0;
long long DAT_10032930 = 0;
long long DAT_10032938 = 0;
long long DAT_10032940 = 0;
long long DAT_10032948 = 0;
long long DAT_10032950 = 0;
long long DAT_10032958 = 0;
int DAT_10032960 = 0;
int *DAT_10034514 = 0;
int DAT_10034518 = 0;

/* Stubs for missing internal functions */
int FUN_10003380() { return 0; }
int FUN_10003b00() { return 0; }
int FUN_10003ba0() { return 0; }
int FUN_10003c30() { return 0; }
int FUN_10004090() { return 0; }
int FUN_10004690() { return 0; }
int FUN_10004ad0() { return 0; }
int FUN_10006b80() { return 0; }
int FUN_10006dc0() { return 0; }
int FUN_10006dd0() { return 0; }


/* Forward declarations */
int  FUN_10001100(int param_1);
void  FUN_10001140(int *param_1);
void FUN_100011c0(void);
void  FUN_100011f0(void *this_ptr,int param_1);
int  FUN_10001230(int param_1);
int  FUN_10001270(int param_1);
void  FUN_100012b0(void *param_1);
int *  FUN_100013b0(void *this_ptr,int *param_1);
void FUN_10001400(void *param_1,int param_2,int param_3,int param_4);
void FUN_10001540(unsigned int param_1);
void FUN_100015b0(void *param_1);
void FUN_10001630(void);
void FUN_10001670(void);
void FUN_10001710(void);
void FUN_10001760(void);
void FUN_10001c10(void *param_1,int param_2,int param_3,int param_4,
            int param_5);
void  FUN_10002920(void *this_ptr,void *param_1);
void FUN_100029d0(void *param_1);
int FUN_10002d40(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10002ea6(void);
int FUN_10002ec0(int param_1);
int FUN_10002f80(int param_1);

void OnInit();
void ProcessScenary();


int  FUN_10001100(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = 0;
  return param_1;
}





void  FUN_10001140(int *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
puVar3 = param_1;
  for (iVar2 = 0xb; iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar3 = *(int *)0;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  uVar1 = GetGlobalTime();
  local_8[0xc] = uVar1;
  local_8[0xb] = 0;
  local_8 = (int *)0x10001199;
  return;
}





void FUN_100011c0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return;
}





void  FUN_100011f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x2c) = param_1;
  return;
}





int  FUN_10001230(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 0x2c);
}





int  FUN_10001270(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 0x30);
}





void  FUN_100012b0(void *param_1)

{
  int iVar1;
  int *puVar2;
  int auStackY_9c [9];
  int uStackY_78;
  int local_64 [16];
  int local_24;
  int *local_20;
  int local_1c;
  void *local_18;
  void *local_14;
  void *local_10;
  char *puStack_c;
  int local_8;
  
  local_8 = -1;
while (iVar1 = FUN_10001230((intptr_t)local_18), iVar1 != 0) {
    local_18 = (void *)FUN_10001230((intptr_t)local_18);
  }
  uStackY_78 = 0x10001308;
  FUN_100029d0((void *)0x34);
  local_8 = 0;
  if (local_20 == (int *)0x0) {
    local_24 = 0;
  }
  else {
    puVar2 = auStackY_9c;
    for (iVar1 = 0xb; iVar1 != 0
        ; iVar1 = iVar1 + -1) {
      *puVar2 = *(int *)0;
      puVar2 = puVar2 + 1;
    }
    FUN_10001140(local_20);
  }
  local_1c = local_24;
  local_8 = -1;
  uStackY_78 = 0x10001357;
  FUN_100011f0(local_18,local_24);
  return;
}





int *  FUN_100013b0(void *this_ptr,int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
puVar2 = param_1;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(int *)this_ptr;
    this_ptr = (int *)((intptr_t)this_ptr + 4);
    puVar2 = puVar2 + 1;
  }
  return param_1;
}





void __cdecl FUN_10001400(void *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int uVar3;
  int iVar4;
  int *puVar5;
  int local_6c;
  void *local_68;
  void *local_64;
  int local_60 [11];
  int local_34 [5];
  int local_20;
  int local_1c;
  void *local_8;
iVar4 = FUN_10001230((intptr_t)param_1);
  if (iVar4 != 0) {
    local_8 = (void *)FUN_10001230((intptr_t)param_1);
    iVar4 = FUN_10001270((intptr_t)local_8);
    iVar1 = GetGlobalTime();
    if (iVar4 < iVar1 - param_2) {
      puVar2 = FUN_100013b0(local_8,local_60);
      puVar5 = local_34;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      local_20 = param_3;
      local_1c = param_4;
      SetUnitInfo(local_34);
      uVar3 = FUN_10001230((intptr_t)local_8);
      FUN_100011f0(param_1,uVar3);
      local_68 = local_8;
      local_64 = local_8;
      if (local_8 == (void *)0x0) {
        local_6c = 0;
      }
      else {
        FUN_10001540(1);
      }
      FUN_10001400(param_1,param_2,param_3,param_4);
    }
  }
  local_8 = (void *)0x100014f8;
  return;
}





void FUN_10001540(unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
FUN_100011c0();
  if ((param_1 & 1) != 0) {
    FUN_10002920(local_8,local_8);
  }
  local_8 = (void *)0x1000158b;
  return;
}





void __cdecl FUN_100015b0(void *param_1)

{
  int iVar1;
  int *puVar2;
  int *puVar3;
  int auStack_7c [9];
  int uStack_58;
  char *puStack_54;
  int local_44 [15];
  int uStack_8;
  uStack_58 = 0x100015e0;
  SetUnitInfo(0);
  puStack_54 = (char *)0x100015ea;
  puVar3 = auStack_7c;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_100012b0(param_1);
  uStack_8 = 0x1000160e;
  return;
}





void FUN_10001630(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001670();
  FUN_10001710();
  uStack_8 = 0x1000165f;
  return;
}





void FUN_10001670(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001100(0x10032898);
  FUN_10001100(0x100328d0);
  FUN_10001100(0x100326f0);
  FUN_10001100(0x10032728);
  FUN_10001100(0x10032760);
  FUN_10001100(0x10032798);
  FUN_10001100(0x100327d0);
  FUN_10001100(0x10032808);
  uStack_8 = 0x100016e5;
  return;
}





void FUN_10001710(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002f80(0x10001760);
  uStack_8 = 0x10001742;
  return;
}





void FUN_10001760(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100011c0();
  FUN_100011c0();
  FUN_100011c0();
  FUN_100011c0();
  FUN_100011c0();
  FUN_100011c0();
  FUN_100011c0();
  FUN_100011c0();
  uStack_8 = 0x100017d5;
  return;
}





void __cdecl
FUN_10001c10(void *param_1,int param_2,int param_3,int param_4,
            int param_5)

{
  int iVar1;
  int *puVar2;
  int *puVar3;
  int auStack_b8 [8];
  int uStack_98;
  int local_38;
  int local_34 [11];
  int local_8;
local_8 = GetUnitsAmount0(0,0);
  if (0 < local_8) {
    SaveSelectedUnits(0,0,0);
    SelectUnitsInZone(0,0,0);
    SaveSelectedUnits(0,0,0);
    SetStandGround(0,0);
    SelChangeNation(0,0);
    SelectUnits(0,0);
    for (local_38 = 0; local_38 < local_8; local_38 = local_38 + 1) {
      GetUnitInfo(0,0,0);
      puVar2 = local_34;
      puVar3 = auStack_b8;
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_100015b0(param_1);
    }
  }
  uStack_98 = 0x10001d58;
  FUN_10001400(param_1,600,param_4,param_5);
  iVar1 = GetUnitsAmount0(0,0);
  if (0 < iVar1) {
    SelectUnitsInZone(0,0,0);
    uStack_98 = 0x10001da3;
    SelSendTo(0,0,0,0);
  }
  iVar1 = GetUnitsAmount0(0,0);
  if (0 < iVar1) {
    SelectUnitsInZone(0,0,0);
    SetStandGround(0,0);
    SelChangeNation(0,0);
  }
  return;
}





void  FUN_10002920(void *this_ptr,void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_10003b00(this_ptr,9);
    if (((((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((intptr_t)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((intptr_t)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_10003380(2,0x1002d1c0,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_10004690(param_1,*(int *)((intptr_t)param_1 + -0xc));
    FUN_10003ba0(9);
  }
  return;
}





void __cdecl FUN_100029d0(void *param_1)

{
  FUN_10003c30(param_1,1);
  return;
}





int __cdecl FUN_10002d40(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = *(unsigned int *)(param_1 + 0xc);
  uVar5 = uVar6;
  uVar4 = uVar6;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar6 == -1) {
      FUN_10006b80();
    }
    uVar6 = uVar6 - 1;
    iVar1 = iVar2 + uVar6 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 = uVar3, uVar6 == -1)) {
      param_2 = param_2 + -1;
      uVar5 = uVar6;
      uVar4 = uVar3;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(unsigned int *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    FUN_10006b80();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_10002ea6(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_10030d48 = *(int *)(unaff_EBP + 8);
  DAT_10030d44 = in_EAX;
  DAT_10030d4c = unaff_EBP;
  return;
}





int __cdecl FUN_10002ec0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *this_ptr;
  void *this_00;
  void *this_01;
  unsigned int uVar4;
  char *pcVar5;
  int iVar6;
  
  FUN_10006dc0();
  pvVar1 = (void *)FUN_10004ad0(this_ptr,(int)DAT_10034518,2);
  this_00 = (void *)((int)DAT_10034514 + (4 - (int)DAT_10034518));
  if (pvVar1 < this_00) {
    iVar6 = 0x68;
    pcVar5 = "onexit.c";
    uVar4 = 2;
    iVar2 = FUN_10004ad0(this_00,(int)DAT_10034518,2);
    piVar3 = FUN_10004090(this_01,DAT_10034518,(void *)(iVar2 + 0x10),uVar4,(int)pcVar5,iVar6);
    if (piVar3 == (int *)0x0) {
      FUN_10006dd0();
      return 0;
    }
    DAT_10034514 = piVar3 + ((int)DAT_10034514 - (int)DAT_10034518 >> 2);
    DAT_10034518 = piVar3;
  }
  *DAT_10034514 = param_1;
  DAT_10034514 = DAT_10034514 + 1;
  FUN_10006dd0();
  return param_1;
}





int __cdecl FUN_10002f80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10002ec0(param_1);
  return (iVar1 != 0) - 1;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetPlayerName(0,"RUSSIA");
  SetPlayerName(1,"RUSSIA");
  SetPlayerName(2,"SPAIN");
  SetPlayerName(3,"VENECIA");
  SetPlayerName(4,"POLAND");
  SetPlayerName(5,"FRANCE");
  RegisterZone(&DAT_10032840,DAT_1002d068);
  RegisterZone(&DAT_10032848,DAT_1002d064);
  RegisterZone(&DAT_10032850,DAT_1002d060);
  RegisterZone(&DAT_10032858,DAT_1002d05c);
  RegisterZone(&DAT_10032860,DAT_1002d058);
  RegisterZone(&DAT_10032868,DAT_1002d054);
  RegisterZone(&DAT_10032870,DAT_1002d050);
  RegisterZone(&DAT_10032878,DAT_1002d04c);
  RegisterZone(&DAT_10032880,DAT_1002d048);
  RegisterZone(&DAT_10032908,DAT_1002d044);
  RegisterZone(&DAT_10032910,DAT_1002d040);
  RegisterZone(&DAT_10032918,DAT_1002d03c);
  RegisterZone(&DAT_10032920,DAT_1002d038);
  RegisterZone(&DAT_10032930,DAT_1002d034);
  RegisterZone(&DAT_10032938,DAT_1002d030);
  RegisterZone(&DAT_10032940,DAT_1002d02c);
  RegisterZone(&DAT_10032948,DAT_1002d028);
  RegisterZone(&DAT_10032950,DAT_1002d024);
  RegisterZone(&DAT_10032958,DAT_1002d020);
  RegisterZone(&DAT_10032928,DAT_1002d01c);
  RegisterVar(&DAT_10032960,4);
  RegisterDynGroup(&DAT_10032890);
  RegisterDynGroup(&DAT_10032888);
  uStack_8 = 0x10001b32;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_10032960 = GetDiff(0);
    SetResource(0,3,DAT_10032960 * -3000 + 10000);
    SetResource(0,1,DAT_10032960 * -3000 + 10000);
    SetResource(0,0,DAT_10032960 * -3000 + 10000);
    SetResource(0,2,DAT_10032960 * -3000 + 10000);
    SetResource(0,5,DAT_10032960 * -3000 + 10000);
    SetResource(0,4,DAT_10032960 * -3000 + 10000);
    SetResource(2,3,3000);
    SetResource(2,1,3000);
    SetResource(2,0,3000);
    SetResource(2,2,3000);
    SetResource(2,5,3000);
    SetResource(2,4,3000);
    SetResource(3,3,3000);
    SetResource(3,1,3000);
    SetResource(3,0,3000);
    SetResource(3,2,3000);
    SetResource(3,5,3000);
    SetResource(3,4,3000);
    SetResource(4,3,3000);
    SetResource(4,1,3000);
    SetResource(4,0,3000);
    SetResource(4,2,3000);
    SetResource(4,5,3000);
    SetResource(4,4,3000);
    SetResource(5,3,3000);
    SetResource(5,1,3000);
    SetResource(5,0,3000);
    SetResource(5,2,3000);
    SetResource(5,5,3000);
    SetResource(5,4,3000);
    SetLightSpot(&DAT_10032940,1,1);
    SetLightSpot(&DAT_10032858,1,2);
    SetLightSpot(&DAT_10032878,1,3);
    SetLightSpot(&DAT_10032918,1,4);
    SetLightSpot(&DAT_10032948,1,5);
    SetLightSpot(&DAT_10032950,1,6);
    SetLightSpot(&DAT_10032958,1,7);
    SetLightSpot(&DAT_10032928,1,8);
    ChangeFriends(2,0x3c);
    ChangeFriends(3,0x3c);
    ChangeFriends(4,0x3c);
    ChangeFriends(5,0x3c);
    ChangeFriends(1,3);
    StartAI(2,"SPAIN.0",0,0,0,DAT_10032960);
    StartAI(3,"VENECIA.0",0,0,0,DAT_10032960);
    StartAI(4,"POLAND.0",0,0,0,DAT_10032960);
    StartAI(5,"FRANCE.0",0,0,0,DAT_10032960);
    ShowPage("#PAGE0");
    SetTrigg(99,0);
  }
  FUN_10001c10(&DAT_10032898,&DAT_10032840,&DAT_10032850,0x2837,0x1c79);
  FUN_10001c10(&DAT_100328d0,&DAT_10032848,&DAT_10032858,0x3945,0x1dc0);
  FUN_10001c10(&DAT_100326f0,&DAT_10032870,&DAT_10032878,8000,0x378c);
  FUN_10001c10(&DAT_10032728,&DAT_10032860,&DAT_10032868,0x1fba,0x23e9);
  FUN_10001c10(&DAT_10032760,&DAT_10032910,&DAT_10032918,0x6a1,0x1cf0);
  FUN_10001c10(&DAT_10032798,&DAT_10032880,&DAT_10032908,0x17c1,0x1d0c);
  FUN_10001c10(&DAT_100327d0,&DAT_10032938,&DAT_10032940,0x1f78,0x6a6);
  FUN_10001c10(&DAT_10032808,&DAT_10032920,&DAT_10032930,0x2008,0x157c);
  uVar1 = NationIsErased(0);
  if ((uVar1 & 0xff) != 0) {
    LooseGame();
  }
  uVar1 = NationIsErased(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(4);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = NationIsErased(5);
        if ((uVar1 & 0xff) != 0) {
          ShowVictory();
        }
      }
    }
  }
  uStack_8 = 0x10002651;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
