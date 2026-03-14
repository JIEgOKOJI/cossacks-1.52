#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int DAT_1001da40 = 2;
long long DAT_1001f400 = 0;
long long DAT_1001f408 = 0;
long long DAT_1001f410 = 0;
long long DAT_1001f418 = 0;
long long DAT_1001f420 = 0;
long long DAT_1001f428 = 0;
long long DAT_1001f430 = 0;
long long DAT_1001f438 = 0;
long long DAT_1001f440 = 0;
long long DAT_1001f448 = 0;
long long DAT_1001f450 = 0;
long long DAT_1001f458 = 0;
int DAT_1001f460 = 0;
long long DAT_1001f468 = 0;
long long DAT_1001f470 = 0;
long long DAT_1001f478 = 0;
long long DAT_1001f480 = 0;
long long DAT_1001f488 = 0;
long long DAT_1001f490 = 0;
long long DAT_1001f498 = 0;
long long DAT_1001f4a0 = 0;
long long DAT_1001f4a8 = 0;
long long DAT_1001f4b0 = 0;
long long DAT_1001f4b8 = 0;
long long DAT_1001f4c0 = 0;
long long DAT_1001f4c8 = 0;
long long DAT_1001f4d0 = 0;
long long DAT_1001f4d8 = 0;
long long DAT_1001f4e0 = 0;
long long DAT_1001f4e8 = 0;
long long DAT_1001f4f0 = 0;
long long DAT_1001f4f8 = 0;
long long DAT_1001f500 = 0;
long long DAT_1001f508 = 0;
long long DAT_1001f510 = 0;
long long DAT_1001f518 = 0;
long long DAT_1001f520 = 0;
long long DAT_1001f528 = 0;
long long DAT_1001f530 = 0;
long long DAT_1001f538 = 0;
long long DAT_1001f540 = 0;
long long DAT_1001f548 = 0;
long long DAT_1001f550 = 0;
long long DAT_1001f558 = 0;
long long DAT_1001f560 = 0;

/* Forward declarations */
void FUN_10001270(int param_1,char param_2,char param_3,char param_4);
void FUN_100013e0(int param_1,char param_2,char param_3,char param_4);
void FUN_10001470(int param_1);
void FUN_10001530(int param_1,int param_2,char param_3);
void FUN_10001630(int param_1,int param_2,int param_3);
void FUN_100016d0(char param_1,char param_2);
void FUN_100017a0(void);
void FUN_10001890(void);
void FUN_100018d0(int param_1);
void FUN_10001960(void);
void FUN_100019e0(int param_1);
void FUN_10001a30(void);
void FUN_10002050(void);


void __cdecl FUN_10001270(int param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_78 [16];
  int local_38;
  char local_34 [8];
  char local_2c;
  int local_8;
SaveSelectedUnits((int)param_2,&DAT_1001f418,0);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,&DAT_1001f408,0);
  local_8 = GetNUnits(&DAT_1001f408);
  for (local_38 = 0; local_38 < local_8; local_38 = local_38 + 1) {
    GetUnitInfo(&DAT_1001f408,local_38,local_34);
    if (param_4 == '\0') {
      local_2c = param_3;
    }
    else {
      local_2c = local_2c + param_3;
    }
    SetUnitInfo(local_34);
  }
  SelectUnits1(param_2,&DAT_1001f418,0);
  return;
}





void __cdecl FUN_100013e0(int param_1,char param_2,char param_3,char param_4)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = UnitsCenter(&DAT_1001f4e0,param_1,0x4b0);
  if ((uVar1 & 0xff) != 0) {
    FUN_10001270(&DAT_1001f4e0,param_2,param_3,param_4);
  }
  uStack_8 = 0x10001447;
  return;
}





void __cdecl FUN_10001470(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_78 [16];
  int local_38;
  char local_34 [8];
  char local_2c;
  char local_2b;
  int local_8;
local_8 = GetNUnits(param_1);
  for (local_38 = 0; local_38 < local_8; local_38 = local_38 + 1) {
    GetUnitInfo(param_1,local_38,local_34);
    local_2c = 0;
    local_2b = 0;
    SetUnitInfo(local_34);
  }
  return;
}





void __cdecl FUN_10001530(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
for (local_8 = 0; (int)local_8 < 8; local_8 = local_8 + 1) {
    SaveSelectedUnits(local_8 & 0xff,&DAT_1001f418,local_8 != 0);
    SelectUnits1(local_8 & 0xff,param_1,0);
    SaveSelectedUnits(local_8 & 0xff,param_2,param_3);
    SelectUnits1(local_8 & 0xff,&DAT_1001f418,0);
  }
  return;
}





void __cdecl FUN_10001630(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = 0;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    iVar1 = GetUnitsAmount1(param_1 + local_c * 8,param_3);
    local_8 = local_8 + iVar1;
  }
  return;
}





void __cdecl FUN_100016d0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = 0;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    iVar1 = GetUnitsAmount0(&DAT_1001f468 + local_c * 8,param_1);
    if (0 < iVar1) {
      iVar1 = GetUnitsAmount0(&DAT_1001f468 + local_c * 8,param_2);
      if (iVar1 == 0) {
        local_8 = local_8 + 1;
      }
    }
  }
  return;
}





void FUN_100017a0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterVisibleZone(&DAT_1001f468,"Zone0");
  RegisterVisibleZone(&DAT_1001f470,"Zone1");
  RegisterVisibleZone(&DAT_1001f478,"Zone2");
  RegisterVisibleZone(&DAT_1001f480,"Zone3");
  RegisterVisibleZone(&DAT_1001f488,"Zone4");
  uStack_8 = 0x10001851;
  return;
}





void FUN_10001890(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
ProcessScenary();
  FUN_100017a0();
  uStack_8 = 0x100018bf;
  return;
}





void __cdecl FUN_100018d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SelectUnits1(3,param_1,0);
  SelChangeNation(3,1);
  FUN_10001530(param_1,&DAT_1001f490,1);
  uStack_8 = 0x10001938;
  return;
}





void FUN_10001960(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = 0;
  while ((local_8 < 3 && (FUN_100019e0(&DAT_1001f448 + local_8 * 8), iVar1 < 1))) {
    local_8 = local_8 + 1;
  }
  return;
}





void __cdecl FUN_100019e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount0(param_1);
  uStack_8 = 0x10001a1b;
  return;
}





void FUN_10001a30(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
RegisterVar(&DAT_1001da40,2);
  RegisterVar(&DAT_1001f460,2);
  ProcessScenary();
  RegisterUnits(&DAT_1001f4b8,"flagman0");
  RegisterUnits(&DAT_1001f4c0,"flagman1");
  RegisterDynGroup(&DAT_1001f4c8);
  RegisterUnits(&DAT_1001f440,"TKCrew");
  RegisterUnits(&DAT_1001f400,"KMCrew");
  RegisterUnits(&DAT_1001f438,"TKStaff");
  RegisterUnits(&DAT_1001f430,"KMStaff");
  RegisterUnits(&DAT_1001f448,"scout0");
  RegisterUnits(&DAT_1001f450,"scout1");
  RegisterUnits(&DAT_1001f458,"scout2");
  RegisterUnits(&DAT_1001f420,"reinforcment0");
  RegisterUnits(&DAT_1001f428,"reinforcment1");
  RegisterDynGroup(&DAT_1001f490);
  RegisterUnits(&DAT_1001f558,"bosonogie");
  RegisterZone(&DAT_1001f530,"TyrguKukul1");
  RegisterZone(&DAT_1001f538,"TyrguKukul2");
  RegisterZone(&DAT_1001f540,"TyrguKukul3");
  RegisterZone(&DAT_1001f4e8,"KrynguMeilor0");
  RegisterZone(&DAT_1001f4f0,"KrynguMeilor1");
  RegisterZone(&DAT_1001f4f8,"KrynguMeilor2");
  RegisterZone(&DAT_1001f500,"KrynguMeilor3");
  RegisterZone(&DAT_1001f508,"KrynguMeilor4");
  RegisterZone(&DAT_1001f510,"KrynguMeilor5");
  RegisterZone(&DAT_1001f518,"KrynguMeilor6");
  RegisterVisibleZone(&DAT_1001f498,"ZTKStaff");
  RegisterVisibleZone(&DAT_1001f4d8,"ZKMStaff");
  RegisterUnitType(&DAT_1001f4d0,"Flagonosec(UN)");
  RegisterFormation(&DAT_1001f548,"#ALONE");
  RegisterString(&DAT_1001f520,"RNK_P_Scout");
  RegisterString(&DAT_1001f410,"RNK_P_TK");
  RegisterString(&DAT_1001f4b0,"RNK_P_KM");
  RegisterString(&DAT_1001f528,"RNK_R_KM");
  RegisterString(&DAT_1001f550,"RNK_R_F");
  SetPlayerName(3,"RNK_NN_UsufPasha");
  ChangeFriends(1,8);
  InitialUpgrade("Army0","AKA31AU");
  InitialUpgrade("Army0","AKA33AU");
  InitialUpgrade("Army0","AKA31RU");
  InitialUpgrade("Army0","AKA33RU");
  iVar1 = GetMyNation();
  if (iVar1 == 1) {
    for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
      SetLightSpot(&DAT_1001f4e8 + local_8 * 8,2,local_8 & 0xff);
    }
  }
  return;
}





void FUN_10002050(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
uVar1 = Trigg(0x3c);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x3c,0);
    DAT_1001f460 = GetTotalAmount0(&DAT_1001f558);
  }
  uVar1 = Trigg(0);
  if ((uVar1 & 0xff) == 0) {
LAB_10002104:
    uVar1 = TimerDoneFirst(0);
    if ((uVar1 & 0xff) != 0) goto LAB_10002121;
  }
  else {
    FUN_10001630(0x1001f530,3,&DAT_1001f490);
    if (iVar2 < 1) {
      FUN_10001630(0x1001f530,3,&DAT_1001f4a0);
      if (iVar2 < 1) goto LAB_10002104;
    }
LAB_10002121:
    SetTrigg(0,0);
    iVar2 = GetMyNation();
    if (iVar2 == 1) {
      HINT(&DAT_1001f410,100);
      ShowAlarm(&DAT_1001f498);
    }
    FUN_100018d0(&DAT_1001f440);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    FUN_10001630(0x1001f4e8,7,&DAT_1001f4a0);
    if (iVar2 < 1) {
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetTotalAmount0(&DAT_1001f558);
        if (DAT_1001f460 == iVar2) goto LAB_10002294;
      }
    }
    SetTrigg(1,0);
    SetTrigg(2,0);
    SetTrigg(0x14,0);
    iVar2 = GetMyNation();
    if (iVar2 == 1) {
      HINT(&DAT_1001f528,100);
      ShowAlarm(&DAT_1001f4d8);
    }
    FUN_100018d0(&DAT_1001f400);
  }
LAB_10002294:
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    FUN_10001630(0x1001f4e8,7,&DAT_1001f490);
    if (0 < iVar2) {
      SetTrigg(2,0);
      iVar2 = GetMyNation();
      if (iVar2 == 1) {
        HINT(&DAT_1001f4b0,100);
        ShowAlarm(&DAT_1001f4d8);
      }
      FUN_100018d0(&DAT_1001f420);
    }
  }
  local_8 = 0;
  do {
    if (2 < local_8) {
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetUnitsAmount0(&DAT_1001f498,1);
        if (iVar2 == 0) {
          iVar2 = GetUnitsAmount0(&DAT_1001f498,0);
          if (0 < iVar2) {
            iVar2 = GetTotalAmount0(&DAT_1001f438);
            if (iVar2 == 0) {
              SetTrigg(10,0);
              iVar2 = GetMyNation();
              if (iVar2 == 1) {
                HINT(&DAT_1001f550,100);
                ShowAlarm(&DAT_1001f498);
              }
              CreateObject0(&DAT_1001f4c8,&DAT_1001f548,&DAT_1001f4d0,0,&DAT_1001f498,0x28);
              DAT_1001da40 = DAT_1001da40 + 2;
            }
          }
        }
      }
      uVar1 = Trigg(0x14);
      if ((uVar1 & 0xff) != 0) {
        FUN_100019e0(&DAT_1001f420);
        if (iVar2 < 0x32) {
          SetTrigg(0x14,0);
          iVar2 = GetMyNation();
          if (iVar2 == 1) {
            HINT(&DAT_1001f528,100);
            ShowAlarm(&DAT_1001f4d8);
          }
          FUN_100018d0(&DAT_1001f428);
        }
      }
      FUN_10001470(&DAT_1001f4a0);
      FUN_10001470(&DAT_1001f4a8);
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        FUN_100013e0(&DAT_1001f4b8 + local_8 * 8,0,(char)DAT_1001da40,'\x01');
      }
      iVar2 = GetTotalAmount0(&DAT_1001f438);
      if (iVar2 < 1) {
        FUN_10001270(&DAT_1001f498,1,'\0','\0');
      }
      else {
        FUN_10001270(&DAT_1001f498,1,'\x04','\0');
      }
      iVar2 = GetTotalAmount0(&DAT_1001f430);
      if (iVar2 < 1) {
        FUN_10001270(&DAT_1001f4d8,1,'\0','\0');
      }
      else {
        FUN_10001270(&DAT_1001f4d8,1,'\x04','\0');
      }
      iVar2 = GetUnitsAmount1(&DAT_1001f4d8,&DAT_1001f4a8);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount0(&DAT_1001f430);
        if (iVar2 == 0) {
          OnInit(0,0x1001da30);
        }
      }
      FUN_100019e0(&DAT_1001f4a8);
      if (iVar2 < 0x14) {
        OnInit(0,0x1001da30);
      }
      FUN_100019e0(&DAT_1001f4a0);
      if (iVar2 < 0x14) {
        OnInit(1,0x1001da38);
      }
      return;
    }
    uVar1 = UnitsCenter(&DAT_1001f560,&DAT_1001f448 + local_8 * 8,0x4b0);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_1001f560,0);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount1(&DAT_1001f560,&DAT_1001f490);
        if (iVar2 < 1) goto LAB_10002339;
      }
      iVar2 = GetMyNation();
      if (iVar2 == 1) {
        HINT(&DAT_1001f520,100);
        ShowAlarm(&DAT_1001f560);
      }
      RemoveGroup(&DAT_1001f448 + local_8 * 8,&DAT_1001f490);
    }
LAB_10002339:
    local_8 = local_8 + 1;
  } while( 1 );
}





__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int param_2 = 0;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = GetMyNation();
  if (local_8 == param_1) {
    ShowVictory();
  }
  else {
    LooseGame();
  }
  ShowPage(*(int *)(param_2 + local_8 * 4));
  return;
}





void ProcessScenary(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_1001f4a0,"Army0");
  RegisterUnits(&DAT_1001f4a8,"Army1");
  RegisterDynGroup(&DAT_1001f408);
  RegisterDynGroup(&DAT_1001f418);
  uStack_8 = 0x1000123b;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
