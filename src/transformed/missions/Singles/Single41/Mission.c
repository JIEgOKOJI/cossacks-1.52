#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
int this_ptr = 0;
char DAT_1002a03c[] = "Z13";
char DAT_1002a040[] = "Z12";
char DAT_1002a044[] = "Z11";
char DAT_1002a048[] = "Z10";
char DAT_1002a04c[] = "Z9";
char DAT_1002a050[] = "Z8";
char DAT_1002a054[] = "Z7";
char DAT_1002a058[] = "Z6";
char DAT_1002a05c[] = "Z5";
char DAT_1002a060[] = "Z4";
char DAT_1002a064[] = "Z3";
char DAT_1002a068[] = "Z2";
char DAT_1002a06c[] = "Z1";
long long DAT_1002f3e0 = 0;
long long DAT_1002f3e8 = 0;
long long DAT_1002f3f8 = 0;
long long DAT_1002f420 = 0;
long long DAT_1002f448 = 0;
long long DAT_1002f470 = 0;
long long DAT_1002f478 = 0;
long long DAT_1002f4a0 = 0;
long long DAT_1002f4a8 = 0;
long long DAT_1002f4b0 = 0;
long long DAT_1002f4b8 = 0;
long long DAT_1002f4c0 = 0;
long long DAT_1002f4c8 = 0;
long long DAT_1002f4d0 = 0;
long long DAT_1002f4d8 = 0;
long long DAT_1002f4e0 = 0;
long long DAT_1002f4e8 = 0;
long long DAT_1002f4f0 = 0;
long long DAT_1002f4f8 = 0;
long long DAT_1002f500 = 0;
long long DAT_1002f508 = 0;
int DAT_1002f598 = 0;
int DAT_1002f59c = 0;
long long DAT_1002f5a0 = 0;
long long DAT_1002f5a8 = 0;

/* Forward declarations */
void FUN_100010d0(int param_1);
void 
FUN_10001170(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_10001210(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_100012c0(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10001380(char *param_1);
void  FUN_100014c0(char *param_1);
void  FUN_10001590(char *param_1);

void OnInit();
void ProcessScenary();


void __cdecl FUN_100010d0(int param_1)

{
  int iVar1;
  int *puVar2;
  unsigned int local_c;
  unsigned int local_8;
local_8 = 0;
  for (local_c = 0; (intptr_t)local_c < 8; local_c = local_c + 1) {
    iVar1 = GetUnitsByNation(param_1,local_c & 0xff);
    if (0 < iVar1) {
      local_8 = local_c;
      local_c = 8;
    }
  }
  return;
}





void 
FUN_10001170(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((int)this_ptr + 6) = param_1;
  *(int *)((int)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_100010d0(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x100011e8;
  return;
}





void 
FUN_10001210(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  RegisterZone((intptr_t)local_8 + 0x1e,param_2);
  FUN_10001170(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10001292;
  return;
}





void  FUN_100012c0(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((intptr_t)local_8 + 0x1e,&DAT_1002f4a8,(intptr_t)local_8 + 0x16,300);
  FUN_10001170(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x1000134f;
  return;
}





void  FUN_10001380(char *param_1)

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
      FUN_100014c0(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10001590(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  local_8 = (char *)0x1000147b;
  return;
}





void  FUN_100014c0(char *param_1)

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
  local_8 = (char *)0x1000155a;
  return;
}





void  FUN_10001590(char *param_1)

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
  local_8 = (char *)0x1000162a;
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetPlayerName(0,"ENGLAND");
  SetPlayerName(1,"FRANCE");
  SetPlayerName(2,"FRANCE");
  SetPlayerName(3,"FRANCE");
  SetPlayerName(4,"SPAIN");
  RegisterUnits(&DAT_1002f470,"GGates1");
  RegisterUnits(&DAT_1002f3e8,"GSpain1");
  RegisterUnitType(&DAT_1002f5a8,"PERES_KOR(en)");
  RegisterFormation(&DAT_1002f4a0,"#ODIN");
  RegisterDynGroup(&DAT_1002f5a0);
  RegisterDynGroup(&DAT_1002f3e0);
  RegisterVar(&DAT_1002f59c,4);
  RegisterZone(&DAT_1002f4a8,DAT_1002a06c);
  RegisterZone(&DAT_1002f4b0,DAT_1002a068);
  RegisterZone(&DAT_1002f4b8,DAT_1002a064);
  RegisterZone(&DAT_1002f4c0,DAT_1002a060);
  RegisterZone(&DAT_1002f4c8,DAT_1002a05c);
  RegisterZone(&DAT_1002f4d0,DAT_1002a058);
  RegisterZone(&DAT_1002f4d8,DAT_1002a054);
  RegisterZone(&DAT_1002f4e0,DAT_1002a050);
  RegisterZone(&DAT_1002f4e8,DAT_1002a04c);
  RegisterZone(&DAT_1002f4f0,DAT_1002a048);
  RegisterZone(&DAT_1002f4f8,DAT_1002a044);
  RegisterZone(&DAT_1002f500,DAT_1002a040);
  RegisterZone(&DAT_1002f508,DAT_1002a03c);
  FUN_100012c0(&DAT_1002f3f8,"GGate1",0,0x5b);
  FUN_100012c0(&DAT_1002f420,"GGate2",0,0x5c);
  FUN_100012c0(&DAT_1002f448,"GGate3",0,0x5d);
  FUN_100012c0(&DAT_1002f478,"GGate4",0,0x5e);
  uStack_8 = 0x10001971;
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
    DAT_1002f598 = GetDiff(0);
    SetResource(0,3,DAT_1002f598 * -3000 + 10000);
    SetResource(0,1,DAT_1002f598 * -3000 + 10000);
    SetResource(0,0,DAT_1002f598 * -3000 + 10000);
    SetResource(0,2,DAT_1002f598 * -3000 + 10000);
    SetResource(0,5,DAT_1002f598 * -3000 + 10000);
    SetResource(0,4,DAT_1002f598 * -3000 + 10000);
    SetResource(1,3,3000);
    SetResource(1,1,3000);
    SetResource(1,0,3000);
    SetResource(1,2,3000);
    SetResource(1,5,3000);
    SetResource(1,4,3000);
    SetResource(2,3,3000);
    SetResource(2,1,3000);
    SetResource(2,0,3000);
    SetResource(2,2,3000);
    SetResource(2,5,3000);
    SetResource(2,4,3000);
    SetLightSpot(&DAT_1002f4f8,1,1);
    if (0 < DAT_1002f598) {
      InitialUpgrade("GTower1","Bashnia(fr)PAUSE");
    }
    if (1 < DAT_1002f598) {
      InitialUpgrade("GTower1","Bashnia(fr)PAUSE1");
    }
    if (2 < DAT_1002f598) {
      InitialUpgrade("GTower1","Bashnia(fr)PAUSE2");
    }
    ShowPage("#PAGE0");
    SelectUnits(&DAT_1002f470,0);
    SelOpenGates(3);
    ChangeFriends(1,0xe);
    ChangeFriends(2,0xe);
    ChangeFriends(0,0x11);
    StartAI(1,"FRANCE.0",0,0,0,DAT_1002f598);
    StartAI(2,"FRANCE.0",2,0,0,DAT_1002f598);
    DAT_1002f59c = 0;
    SetTrigg(99,0);
    RunTimer(1,14000);
  }
  FUN_10001380(&DAT_1002f3f8);
  FUN_10001380(&DAT_1002f420);
  FUN_10001380(&DAT_1002f448);
  FUN_10001380(&DAT_1002f478);
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE1");
    SetLightSpot(&DAT_1002f500,2,1);
  }
  uVar1 = TimerDone(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(1);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002f500,0);
      if (0 < iVar2) {
        uVar1 = AskQuestion("#PAGE2");
        if ((uVar1 & 0xff) != 0) {
          SelectUnits(&DAT_1002f3e8,0);
          SelSendTo(4,&DAT_1002f508,0,0);
          SetTrigg(4,0);
        }
        SetTrigg(1,0);
      }
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002f500,0);
      if (iVar2 == 0) {
        SetTrigg(1,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetTotalAmount0(&DAT_1002f3e8);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_1002f3e8,&DAT_1002f508,1);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f4f8,0);
    if (0 < iVar2) {
      uVar1 = AskQuestion("#PAGE3");
      if ((uVar1 & 0xff) != 0) {
        CreateObject0(&DAT_1002f5a0,&DAT_1002f4a0,&DAT_1002f5a8,4,&DAT_1002f4a8,0xc0);
        SelectUnits(&DAT_1002f5a0,0);
        SaveSelectedUnits(4,&DAT_1002f3e0,0);
        SelSendTo(4,&DAT_1002f4d0,0,0);
        CreateObject0(&DAT_1002f5a0,&DAT_1002f4a0,&DAT_1002f5a8,4,&DAT_1002f4b0,0xc0);
        SelectUnits(&DAT_1002f5a0,0);
        SaveSelectedUnits(4,&DAT_1002f3e0,1);
        SelSendTo(4,&DAT_1002f4d8,0,0);
        CreateObject0(&DAT_1002f5a0,&DAT_1002f4a0,&DAT_1002f5a8,4,&DAT_1002f4b8,0xc0);
        SelectUnits(&DAT_1002f5a0,0);
        SaveSelectedUnits(4,&DAT_1002f3e0,1);
        SelSendTo(4,&DAT_1002f4e0,0,0);
        CreateObject0(&DAT_1002f5a0,&DAT_1002f4a0,&DAT_1002f5a8,4,&DAT_1002f4c0,0xc0);
        SelectUnits(&DAT_1002f5a0,0);
        SaveSelectedUnits(4,&DAT_1002f3e0,1);
        SelSendTo(4,&DAT_1002f4e8,0,0);
        CreateObject0(&DAT_1002f5a0,&DAT_1002f4a0,&DAT_1002f5a8,4,&DAT_1002f4c8,0xc0);
        SelectUnits(&DAT_1002f5a0,0);
        SaveSelectedUnits(4,&DAT_1002f3e0,1);
        SelSendTo(4,&DAT_1002f4f0,0,0);
        SetTrigg(3,0);
      }
      SetTrigg(2,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002f4f8,0);
      if (iVar2 == 0) {
        SetTrigg(2,0);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f4d0,&DAT_1002f3e0);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_1002f4d0,4,0);
      SelErase(4);
      DAT_1002f59c = DAT_1002f59c + 1;
    }
    iVar2 = GetUnitsAmount1(&DAT_1002f4d8,&DAT_1002f3e0);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_1002f4d8,4,0);
      SelErase(4);
      DAT_1002f59c = DAT_1002f59c + 1;
    }
    iVar2 = GetUnitsAmount1(&DAT_1002f4e0,&DAT_1002f3e0);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_1002f4e0,4,0);
      SelErase(4);
      DAT_1002f59c = DAT_1002f59c + 1;
    }
    iVar2 = GetUnitsAmount1(&DAT_1002f4e8,&DAT_1002f3e0);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_1002f4e8,4,0);
      SelErase(4);
      DAT_1002f59c = DAT_1002f59c + 1;
    }
    iVar2 = GetUnitsAmount1(&DAT_1002f4f0,&DAT_1002f3e0);
    if (0 < iVar2) {
      SelectUnitsInZone(&DAT_1002f4f0,4,0);
      SelErase(4);
      DAT_1002f59c = DAT_1002f59c + 1;
    }
    iVar2 = GetTotalAmount0(&DAT_1002f3e0);
    if (DAT_1002f59c + iVar2 < 5) {
      LooseGame();
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) == 0) goto LAB_100026e9;
  uVar1 = NationIsErased(0);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x62,0);
    LooseGame();
  }
  uVar1 = NationIsErased(1);
  if ((uVar1 & 0xff) == 0) {
LAB_100026bb:
    if (DAT_1002f59c != 5) goto LAB_100026e9;
  }
  else {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) == 0) goto LAB_100026bb;
  }
  SetTrigg(0x62,0);
  ShowVictory();
LAB_100026e9:
  uStack_8 = 0x100026f6;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
