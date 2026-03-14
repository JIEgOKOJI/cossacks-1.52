#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
char DAT_1002b068[] = "Z16";
char DAT_1002b06c[] = "Z15";
char DAT_1002b070[] = "Z14";
char DAT_1002b074[] = "Z13";
char DAT_1002b078[] = "Z12";
char DAT_1002b07c[] = "Z11";
char DAT_1002b080[] = "Z10";
char DAT_1002b084[] = "Z9";
char DAT_1002b088[] = "Z8";
char DAT_1002b08c[] = "Z7";
char DAT_1002b090[] = "Z6";
char DAT_1002b094[] = "Z5";
char DAT_1002b098[] = "Z4";
char DAT_1002b09c[] = "Z3";
char DAT_1002b0a0[] = "Z2";
char DAT_1002b0a4[] = "Z1";
char DAT_1002b0b4[] = "SUXX";
long long DAT_100303e0 = 0;
long long DAT_100304f8 = 0;
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
long long DAT_10030590 = 0;
long long DAT_10030598 = 0;
long long DAT_100305a0 = 0;
long long DAT_100305a8 = 0;
long long DAT_100305b8 = 0;
long long DAT_100305c8 = 0;
long long DAT_100305d8 = 0;
int DAT_10030638 = 0;
long long DAT_10030640 = 0;
long long DAT_10030648 = 0;
long long DAT_10030670 = 0;

/* Forward declarations */
void  FUN_10001290(void *param_1);
void  FUN_10001520(int param_1);
void  FUN_100015a0(void *this_ptr,int param_1,int param_2);
void  FUN_10001610(void *this_ptr,int param_1);
void  FUN_10001680(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10001720(void *this_ptr,int param_1,int param_2);
int  FUN_10001870(int param_1);
void  FUN_100018b0(int param_1);
void  FUN_10001920(void *this_ptr,int param_1);
void  FUN_100019a0(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10001a60(int param_1);
void  FUN_10001ab0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10001b80(int param_1);
void  FUN_10001c30(int param_1);
void  FUN_10001cd0(int param_1);
void  FUN_10001d50(int param_1);
int  FUN_10001ff0(int param_1);
void 
FUN_10002030(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_100020d0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10002180(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10002240(char *param_1);
void  FUN_10002380(char *param_1);
void  FUN_10002450(char *param_1);
void FUN_10002520(void);
void FUN_100028e0(void);


void  FUN_10001290(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100018b0((int)param_1);
  if ((0 < iVar2) && (*(int *)((int)local_8 + 0x1c) + 1 < *(int *)((int)local_8 + 0x20))) {
    if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10001920(local_8,*(int *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        ProcessScenary((int)local_8 + 0xc,
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10001920(local_8,*(int *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
      ;
      if (cVar1 != '\0') {
        *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + 1;
        SelectUnits((int)local_8 + 0xc,0);
        SelSendTo(*(char *)((int)local_8 + 0x24),
                  *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),0,0);
      }
    }
    else if ((*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x34) == 2) ||
            (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x34) == 1)) {
      SelectUnits((int)local_8 + 0xc,0);
      *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + 1;
      SelSendTo(*(char *)((int)local_8 + 0x24),
                *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),0,2);
    }
    else if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x34) == 0) {
      SelectUnits((int)local_8 + 0xc,0);
      *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + 1;
      SelSendTo(*(char *)((int)local_8 + 0x24),
                *(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),0,0);
    }
  }
  local_8 = (void *)0x10001492;
  return;
}





void  FUN_10001520(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  CreateZoneNearGroup(param_1 + 0x14,&DAT_10030520,param_1 + 0xc,300);
  return;
}





void  FUN_100015a0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10001610(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10001680(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  RegisterDynGroup((int)this_ptr + 0xc);
  *local_8 = param_1;
  local_8[1] = param_2;
  local_8[7] = 0;
  local_8[8] = 0;
  local_8[9] = param_3;
  local_8 = (int *)0x100016f1;
  return;
}





void  FUN_10001720(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_100018b0((int)this_ptr);
  if (iVar2 == 0) {
    ClearSelection(*(char *)(local_8 + 9));
    for (local_c = 0; uVar1 = (int)((unsigned int)local_c >> 8), local_c < param_2;
        local_c = local_c + 1) {
      CreateObject0(local_8 + 3,local_8[1],*local_8,(int)*(char *)(local_8 + 9),
                    param_1,0);
      SelectUnits(local_8 + 3,1);
    }
    SaveSelectedUnits((int)*(char *)(local_8 + 9),local_8 + 3,0);
    local_8[8] = 0;
    FUN_100015a0(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10001821;
  return;
}





int  FUN_10001870(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_100018b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_10001920(void *this_ptr,int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  iVar2 = GetUnitsAmount1(param_1,(int)this_ptr + 0xc);
  FUN_100018b0((int)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10001980;
  return;
}





void  FUN_100019a0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xc,param_1);
  OnInit((int)local_8 + 0xc);
  *(int *)((int)local_8 + 0x18) = uVar1;
  *(int *)((int)local_8 + 0x14) = 0;
  *(int *)((int)local_8 + 0x1c) = param_2;
  RunTimer(*(char *)((int)local_8 + 0x1c),10);
  local_8 = (void *)0x10001a2a;
  return;
}





BOOL  FUN_10001a60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10001ab0(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10001a60((int)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x10001b4d;
  return;
}





void  FUN_10001b80(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  local_c = 0;
  iVar2 = GetTotalAmount0(*(int *)(local_8 + 8));
  iVar1 = GetNInside(*(char *)(local_8 + 0x18));
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10001c30(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  SelectUnits(*(int *)(local_8 + 8),1);
  SendUnitsToTransport(*(char *)(local_8 + 0x18));
  return;
}





void  FUN_10001cd0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  PushAllUnitsAway(*(char *)(local_8 + 0x18));
  return;
}





void  FUN_10001d50(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = param_1;
  uVar2 = TimerDoneFirst(*(char *)(param_1 + 0x1c));
  if ((uVar2 & 0xff) != 0) {
    iVar3 = GetTotalAmount0(local_8 + 0xc);
    if (0 < iVar3) {
      local_c = *(int *)(local_8 + 0x14) + -1;
      switch(local_c) {
      case 0:
        SelectUnits(local_8 + 0xc,0);
        uVar2 = CheckLeaveAbility(*(char *)(local_8 + 0x18));
        if ((uVar2 & 0xff) != 0) {
          FUN_10001c30(local_8);
          *(int *)(local_8 + 0x14) = 2;
        }
        break;
      case 1:
        FUN_10001b80(local_8);
        if (cVar1 != '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
          *(int *)(local_8 + 0x14) = 3;
        }
        break;
      case 2:
        SelectUnits(local_8 + 0xc,0);
        uVar2 = CheckLeaveAbility(*(char *)(local_8 + 0x18));
        if ((uVar2 & 0xff) != 0) {
          FUN_10001cd0(local_8);
          *(int *)(local_8 + 0x14) = 4;
        }
        break;
      case 3:
        SelectUnits(local_8 + 0xc,0);
        iVar3 = GetNInside(*(char *)(local_8 + 0x18));
        if (iVar3 == 0) {
          *(int *)(local_8 + 0x14) = 0;
        }
      }
    }
    RunTimer(*(char *)(local_8 + 0x1c),300);
  }
  return;
}





int  FUN_10001ff0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void 
FUN_10002030(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((int)this_ptr + 6) = param_1;
  *(int *)((int)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  OnInit(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x100020a8;
  return;
}





void 
FUN_100020d0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  RegisterZone((int)local_8 + 0x1e,param_2);
  FUN_10002030(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10002152;
  return;
}





void  FUN_10002180(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((int)local_8 + 0x1e,&DAT_10030520,(int)local_8 + 0x16,600);
  FUN_10002030(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x1000220f;
  return;
}





void  FUN_10002240(char *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
local_8 = param_1;
  uVar1 = Trigg(param_1[2]);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (0 < iVar2) {
      FUN_10002380(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10002450(local_8);
      SetTrigg(local_8[2],1);
    }
  }
  local_8 = (char *)0x1000233b;
  return;
}





void  FUN_10002380(char *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  char *local_8;
local_8 = param_1;
  SaveSelectedUnits(*param_1,param_1 + 0xe,0);
  SelectUnits(*(int *)(local_8 + 6),0);
  SelOpenGates(local_8[1]);
  SelectUnits(local_8 + 0xe,0);
  local_8 = (char *)0x1000241a;
  return;
}





void  FUN_10002450(char *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  char *local_8;
local_8 = param_1;
  SaveSelectedUnits(*param_1,param_1 + 0xe,0);
  SelectUnits(*(int *)(local_8 + 6),0);
  SelCloseGates(local_8[1]);
  SelectUnits(local_8 + 0xe,0);
  local_8 = (char *)0x100024ea;
  return;
}





void FUN_10002520(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetPlayerName(0,"PRUSSIA");
  SetPlayerName(1,"RUSSIA");
  SetPlayerName(2,DAT_1002b0b4);
  SetPlayerName(3,"PORTUGAL");
  RegisterZone(&DAT_10030520,DAT_1002b0a4);
  RegisterZone(&DAT_10030528,DAT_1002b0a0);
  RegisterZone(&DAT_10030530,DAT_1002b09c);
  RegisterZone(&DAT_10030538,DAT_1002b098);
  RegisterZone(&DAT_10030540,DAT_1002b094);
  RegisterZone(&DAT_10030548,DAT_1002b090);
  RegisterZone(&DAT_10030550,DAT_1002b08c);
  RegisterZone(&DAT_10030558,DAT_1002b088);
  RegisterZone(&DAT_10030560,DAT_1002b084);
  RegisterZone(&DAT_10030590,DAT_1002b080);
  RegisterZone(&DAT_10030598,DAT_1002b07c);
  RegisterZone(&DAT_100305a0,DAT_1002b078);
  RegisterZone(&DAT_100305a8,DAT_1002b074);
  RegisterZone(&DAT_100305b8,DAT_1002b070);
  RegisterZone(&DAT_100305c8,DAT_1002b06c);
  RegisterZone(&DAT_100305d8,DAT_1002b068);
  RegisterVar(&DAT_10030638,4);
  RegisterUnitType(&DAT_10030640,"Tiagoli_koval_rus(RU)");
  RegisterFormation(&DAT_10030518,"#ODIN");
  FUN_10001680(&DAT_100303e0,&DAT_10030640,&DAT_10030518,6);
  FUN_100019a0(&DAT_100304f8,"GTransport",9);
  FUN_10002180(&DAT_10030568,"GGate",6,0x62);
  FUN_10002180(&DAT_10030648,"GGates",0,0x61);
  FUN_10002180(&DAT_10030670,"GGate2",0,0x60);
  uStack_8 = 0x1000281a;
  return;
}





void FUN_100028e0(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *puVar7;
  int uVar8;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_10030638 = GetDiff(0);
    SetResource(0,3,DAT_10030638 * -3000 + 10000);
    SetResource(0,1,DAT_10030638 * -3000 + 10000);
    SetResource(0,0,DAT_10030638 * -3000 + 10000);
    SetResource(0,2,DAT_10030638 * -3000 + 10000);
    SetResource(0,5,DAT_10030638 * -3000 + 10000);
    SetResource(0,4,DAT_10030638 * -3000 + 10000);
    SetResource(1,3,3000);
    SetResource(1,1,3000);
    SetResource(1,0,3000);
    SetResource(1,2,3000);
    SetResource(1,5,3000);
    SetResource(1,4,3000);
    SetLightSpot(&DAT_100305c8,1,1);
    SetLightSpot(&DAT_10030520,1,2);
    SetLightSpot(&DAT_10030560,1,3);
    SetLightSpot(&DAT_10030538,1,4);
    ShowPage("#PAGE0");
    ChangeFriends(0,5);
    ChangeFriends(6,0x4a);
    StartAI(1,"RUSSIA.0",0,0,0,DAT_10030638);
    RunTimer(2,7000);
    SetTrigg(99,0);
  }
  FUN_10001290(&DAT_100303e0);
  FUN_10001d50(0x100304f8);
  FUN_10002240(&DAT_10030568);
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    FUN_10002240(&DAT_10030648);
    FUN_10002240(&DAT_10030670);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    uVar8 = 0;
    iVar6 = FUN_10001ff0(0x100304f8);
    SelectUnits(iVar6,uVar8);
    DoNotUseSelInAI(1);
    FUN_10001720(&DAT_100303e0,&DAT_10030550,4);
    uVar8 = 0;
    iVar6 = FUN_10001870(0x100303e0);
    SelectUnits(iVar6,uVar8);
    DoNotUseSelInAI(1);
    FUN_10001610(&DAT_100303e0,&DAT_10030548);
    FUN_10001610(&DAT_100303e0,&DAT_10030540);
    FUN_10001610(&DAT_100303e0,&DAT_10030538);
    FUN_10001610(&DAT_100303e0,&DAT_10030530);
    FUN_10001610(&DAT_100303e0,&DAT_10030528);
    FUN_100015a0(&DAT_100303e0,&DAT_10030520,1);
    FUN_100015a0(&DAT_100303e0,&DAT_10030558,0);
    FUN_10001610(&DAT_100303e0,&DAT_10030560);
    RunTimer(2,0x157c);
    SetTrigg(1,0);
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(1,1);
    }
  }
  iVar6 = GetUnitsAmount2(&DAT_10030560,&DAT_10030640,6);
  if (0 < iVar6) {
    SelectTypeOfUnitsInZone(&DAT_10030560,&DAT_10030640,6,0);
    SelErase(6);
    RunTimer(1,7000);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0xc,0);
    uVar8 = 0;
    iVar6 = FUN_10001870(0x100303e0);
    SelectUnits(iVar6,uVar8);
    SelDie(6);
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) == 0) {
      ChangeFriends(0,9);
    }
    else {
      ChangeFriends(0,0xd);
    }
  }
  iVar6 = GetUnitsAmount0(&DAT_100305c8,0);
  if (0 < iVar6) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = AskQuestion("#PAGE1");
        if ((uVar1 & 0xff) != 0) {
          iVar6 = GetResource(0,1);
          if (iVar6 < 5000) {
            ShowPage("#PAGE2");
          }
          else {
            AddResource(0,1,0xffffec78);
            RunTimer(5,10000);
            SetTrigg(2,0);
          }
        }
        SetTrigg(3,0);
      }
    }
  }
  uVar1 = TimerDoneFirst(5);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE3");
    SetTrigg(3,1);
    SetTrigg(2,1);
    RunTimer(6,5000);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerIsEmpty(6);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) != 0) {
        iVar6 = GetUnitsAmount0(&DAT_10030590,0);
        iVar2 = GetUnitsAmount0(&DAT_10030598,0);
        iVar3 = GetUnitsAmount0(&DAT_100305a0,0);
        iVar4 = GetUnitsAmount0(&DAT_100305a8,0);
        iVar5 = GetUnitsAmount0(&DAT_100305b8,0);
        if (0xf < iVar6 + iVar2 + iVar3 + iVar4 + iVar5) {
          ShowPage("#PAGE3");
          RunTimer(6,5000);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) != 0) {
        iVar6 = GetUnitsAmount0(&DAT_10030590,0);
        iVar2 = GetUnitsAmount0(&DAT_10030598,0);
        iVar3 = GetUnitsAmount0(&DAT_100305a0,0);
        iVar4 = GetUnitsAmount0(&DAT_100305a8,0);
        iVar5 = GetUnitsAmount0(&DAT_100305b8,0);
        if (0xf < iVar6 + iVar2 + iVar3 + iVar4 + iVar5) {
          ShowPage("#PAGE4");
          ChangeFriends(0,1);
          SetTrigg(4,0);
        }
      }
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetUnitsAmount0(&DAT_100305c8,0);
    if (iVar6 < 1) {
      SetTrigg(3,1);
    }
  }
  uVar1 = NationIsErased(1);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(1);
    FreeTimer(2);
    FreeTimer(3);
    FreeTimer(4);
    FreeTimer(5);
    FreeTimer(6);
    FreeTimer(9);
    ShowVictory();
  }
  uVar1 = NationIsErased(0);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(1);
    FreeTimer(2);
    FreeTimer(3);
    FreeTimer(4);
    FreeTimer(5);
    FreeTimer(6);
    FreeTimer(9);
    LooseGame();
  }
  uStack_8 = 0x10003494;
  return;
}





__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_4c [16];
  unsigned int local_c;
  unsigned int local_8;
local_8 = 0;
  for (local_c = 0; (int)local_c < 8; local_c = local_c + 1) {
    iVar1 = GetUnitsByNation(param_1,local_c & 0xff);
    if (0 < iVar1) {
      local_8 = local_c;
      local_c = 8;
    }
  }
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int param_2 = 0;
  int param_3 = 0;
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
bVar1 = FUN_10001a60(0x100304f8);
  if (bVar1) {
    FUN_10001ab0(&DAT_100304f8,param_1,param_2,param_3);
  }
  uStack_8 = 0x1000126e;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
