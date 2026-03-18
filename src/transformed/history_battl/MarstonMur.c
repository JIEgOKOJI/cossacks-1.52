#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1001d4a0 = 0;
long long DAT_1001d4a8 = 0;
long long DAT_1001d4b0 = 0;
long long DAT_1001d4b8 = 0;
long long DAT_1001d4c0 = 0;
long long DAT_1001d4c8 = 0;
long long DAT_1001d4d0 = 0;
long long DAT_1001d4d8 = 0;
long long DAT_1001d4e0 = 0;
long long DAT_1001d4e8 = 0;

/* Forward declarations */
void FUN_100011b8(int param_1,char param_2,char param_3,char param_4);
void FUN_100012db(int param_1,char param_2,char param_3,char param_4);
void FUN_1000132b(int param_1);
void FUN_100013c3(int param_1,int param_2,char param_3);
void FUN_1000147b(int param_1,int param_2,int param_3);
void FUN_100014ed(char param_1,char param_2);
void FUN_10001588(void);
void FUN_10001622(void);
void FUN_10001638(void);
void FUN_10001683(void);

void OnInit();
void ProcessScenary();


void __cdecl FUN_100011b8(int param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  int local_38 [2];
  char local_30 [8];
  char local_28;
  int uStack_8;
  
  piVar2 = local_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = -0x33333334;
    piVar2 = piVar2 + 1;
  }
  SaveSelectedUnits((intptr_t)param_2,&DAT_1001d4a8,0);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,&DAT_1001d4a0,0);
  GetNUnits(&DAT_1001d4a0);
  local_38[0] = 0;
  for (local_38[1] = 0; local_38[1] < local_38[0]; local_38[1] = local_38[1] + 1) {
    GetUnitInfo(&DAT_1001d4a0,local_38[1],local_30);
    if (param_4 == '\0') {
      local_28 = param_3;
    }
    else {
      local_28 = local_28 + param_3;
    }
    SetUnitInfo(local_30);
  }
  SelectUnits1(param_2,&DAT_1001d4a8,0);
  uStack_8 = 0x100012d7;
  return;
}





void __cdecl FUN_100012db(int param_1,char param_2,char param_3,char param_4)

{
  unsigned int uVar1;
  
  uVar1 = UnitsCenter(&DAT_1001d4e8,param_1,0x4b0);
  if ((uVar1 & 0xff) != 0) {
    FUN_100011b8(&DAT_1001d4e8,param_2,param_3,param_4);
  }
  return;
}





void __cdecl FUN_1000132b(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_38 [2];
  char local_30 [8];
  char local_28;
  char local_27;
  int uStack_8;
  
  piVar2 = local_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = -0x33333334;
    piVar2 = piVar2 + 1;
  }
  GetNUnits(param_1);
  local_38[0] = 0;
  for (local_38[1] = 0; local_38[1] < local_38[0]; local_38[1] = local_38[1] + 1) {
    GetUnitInfo(param_1,local_38[1],local_30);
    local_28 = 0;
    local_27 = 0;
    SetUnitInfo(local_30);
  }
  uStack_8 = 0x100013bf;
  return;
}





void __cdecl FUN_100013c3(int param_1,int param_2,char param_3)

{
  unsigned int local_8;
  
  for (local_8 = 0; (intptr_t)local_8 < 8; local_8 = local_8 + 1) {
    SaveSelectedUnits(local_8 & 0xff,&DAT_1001d4a8,local_8 != 0);
    SelectUnits1(local_8 & 0xff,param_1,0);
    SaveSelectedUnits(local_8 & 0xff,param_2,param_3);
    SelectUnits1(local_8 & 0xff,&DAT_1001d4a8,0);
  }
  return;
}





void __cdecl FUN_1000147b(int param_1,int param_2,int param_3)

{
  int local_c;
  
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    GetUnitsAmount1(param_1 + local_c * 8,param_3);
  }
  return;
}





void __cdecl FUN_100014ed(char param_1,char param_2)

{
  int iVar1;
  int local_c;
  
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    iVar1 = GetUnitsAmount0(((unsigned char *)&DAT_1001d4b0) + local_c * 8,param_1);
    if (0 < iVar1) {
      GetUnitsAmount0(((unsigned char *)&DAT_1001d4b0) + local_c * 8,param_2);
    }
  }
  return;
}





void FUN_10001588(void)

{
  RegisterVisibleZone(&DAT_1001d4b0,"Zone0");
  RegisterVisibleZone(&DAT_1001d4b8,"Zone1");
  RegisterVisibleZone(&DAT_1001d4c0,"Zone2");
  RegisterVisibleZone(&DAT_1001d4c8,"Zone3");
  RegisterVisibleZone(&DAT_1001d4d0,"Zone4");
  return;
}





void FUN_10001622(void)

{
  ProcessScenary();
  FUN_10001588();
  return;
}





void FUN_10001638(void)

{
  FUN_10001622();
  InitialUpgrade("Army1","AKA31EN");
  InitialUpgrade("Army1","AKA33EN");
  return;
}





void FUN_10001683(void)

{
  int iVar1;
  
  FUN_100014ed(0,1);
  if (2 < iVar1) {
    OnInit(0,0x1001ba30);
  }
  GetTotalAmount0(&DAT_1001d4d8);
  if (iVar1 < 0x14) {
    OnInit(1,0x1001ba38);
  }
  GetTotalAmount0(&DAT_1001d4e0);
  if (iVar1 < 0x14) {
    OnInit(0,0x1001ba30);
  }
  return;
}






__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int param_2 = 0;
  int iVar1;
  
  iVar1 = GetMyNation();
  if (iVar1 == param_1) {
    ShowVictory();
  }
  else {
    LooseGame();
  }
  ShowPage(*(int *)(param_2 + iVar1 * 4));
  return;
}





void ProcessScenary(void)

{
  RegisterUnits(&DAT_1001d4d8,"Army0");
  RegisterUnits(&DAT_1001d4e0,"Army1");
  RegisterDynGroup(&DAT_1001d4a0);
  RegisterDynGroup(&DAT_1001d4a8);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
