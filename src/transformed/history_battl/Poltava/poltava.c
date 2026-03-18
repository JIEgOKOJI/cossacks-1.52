#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
int DAT_1002f3e0 = 0;
long long DAT_1002f3e4 = 0;
long long DAT_1002f3f8 = 0;
long long DAT_1002f410 = 0;
long long DAT_1002f418 = 0;
long long DAT_1002f420 = 0;
long long DAT_1002f428 = 0;
long long DAT_1002f430 = 0;
long long DAT_1002f438 = 0;
long long DAT_1002f440 = 0;
int DAT_1002f448 = 0;
int DAT_1002f44c = 0;

/* Forward declarations */
void FUN_100010b0(void);
void FUN_10001130(void);

void OnInit();
void ProcessScenary();


void FUN_100010b0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = GetMyNation();
  if (iVar1 == 0) {
    ShowVictory();
  }
  else {
    LooseGame();
  }
  uStack_8 = 0x10001108;
  return;
}





void FUN_10001130(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = GetMyNation();
  if (iVar1 == 1) {
    ShowVictory();
  }
  else {
    LooseGame();
  }
  uStack_8 = 0x10001189;
  return;
}






void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterVisibleZone(&DAT_1002f420,"Zone1");
  RegisterVisibleZone(&DAT_1002f428,"Zone2");
  RegisterVisibleZone(&DAT_1002f430,"Zone3");
  RegisterVisibleZone(&DAT_1002f438,"Zone4");
  RegisterVisibleZone(&DAT_1002f440,"Zone5");
  RegisterUnits(&DAT_1002f410,"Group1");
  RegisterUnits(&DAT_1002f418,"Group2");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(3,7);
  InitialUpgrade("Group2","Pikiner_Shvec(SV)ATTACK");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)ATTACK3");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)ATTACK4");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)ATTACK5");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)ATTACK6");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)ATTACK7");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)SHIELD");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)SHIELD3");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)SHIELD4");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)SHIELD5");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)SHIELD6");
  InitialUpgrade("Group2","Pikiner_Shvec(SV)SHIELD7");
  InitialUpgrade("Group2","Mushketer(SV)ATTACK");
  InitialUpgrade("Group2","Mushketer(SV)ATTACK3");
  InitialUpgrade("Group2","Mushketer(SV)ATTACK4");
  InitialUpgrade("Group2","Mushketer(SV)ATTACK5");
  InitialUpgrade("Group2","Mushketer(SV)ATTACK6");
  InitialUpgrade("Group2","Mushketer(SV)ATTACK7");
  InitialUpgrade("Group2","Mushketer(SV)SHIELD");
  InitialUpgrade("Group2","Mushketer(SV)SHIELD3");
  InitialUpgrade("Group2","Mushketer(SV)SHIELD4");
  InitialUpgrade("Group2","Mushketer(SV)SHIELD5");
  InitialUpgrade("Group2","Mushketer(SV)SHIELD6");
  InitialUpgrade("Group2","Mushketer(SV)SHIELD7");
  InitialUpgrade("Group2","Grenader(SV)ATTACK");
  InitialUpgrade("Group2","Grenader(SV)ATTACK3");
  InitialUpgrade("Group2","Grenader(SV)ATTACK4");
  InitialUpgrade("Group2","Grenader(SV)ATTACK5");
  InitialUpgrade("Group2","Grenader(SV)ATTACK6");
  InitialUpgrade("Group2","Grenader(SV)ATTACK7");
  InitialUpgrade("Group2","Grenader(SV)SHIELD");
  InitialUpgrade("Group2","Grenader(SV)SHIELD3");
  InitialUpgrade("Group2","Grenader(SV)SHIELD4");
  InitialUpgrade("Group2","Grenader(SV)SHIELD5");
  InitialUpgrade("Group2","Grenader(SV)SHIELD6");
  InitialUpgrade("Group2","Grenader(SV)SHIELD7");
  InitialUpgrade("Group2","Kirasir(SV)ATTACK");
  InitialUpgrade("Group2","Kirasir(SV)ATTACK3");
  InitialUpgrade("Group2","Kirasir(SV)ATTACK4");
  InitialUpgrade("Group2","Kirasir(SV)ATTACK5");
  InitialUpgrade("Group2","Kirasir(SV)ATTACK6");
  InitialUpgrade("Group2","Kirasir(SV)ATTACK7");
  InitialUpgrade("Group2","Kirasir(SV)SHIELD");
  InitialUpgrade("Group2","Kirasir(SV)SHIELD3");
  InitialUpgrade("Group2","Kirasir(SV)SHIELD4");
  InitialUpgrade("Group2","Kirasir(SV)SHIELD5");
  InitialUpgrade("Group2","Kirasir(SV)SHIELD6");
  InitialUpgrade("Group2","Kirasir(SV)SHIELD7");
  InitialUpgrade("Group2","Dragun_18(SV)ATTACK");
  InitialUpgrade("Group2","Dragun_18(SV)ATTACK3");
  InitialUpgrade("Group2","Dragun_18(SV)ATTACK4");
  InitialUpgrade("Group2","Dragun_18(SV)ATTACK5");
  InitialUpgrade("Group2","Dragun_18(SV)ATTACK6");
  InitialUpgrade("Group2","Dragun_18(SV)ATTACK7");
  InitialUpgrade("Group2","Dragun_18(SV)SHIELD");
  InitialUpgrade("Group2","Dragun_18(SV)SHIELD3");
  InitialUpgrade("Group2","Dragun_18(SV)SHIELD4");
  InitialUpgrade("Group2","Dragun_18(SV)SHIELD5");
  InitialUpgrade("Group2","Dragun_18(SV)SHIELD6");
  InitialUpgrade("Group2","Dragun_18(SV)SHIELD7");
  InitialUpgrade("Group2","AKA01SV");
  InitialUpgrade("Group2","AKA02SV");
  InitialUpgrade("Group2","AKA03SV");
  InitialUpgrade("Group2","AKA04SV");
  InitialUpgrade("Group2","AKA05SV");
  InitialUpgrade("Group2","AKA06SV");
  InitialUpgrade("Group2","AKA07SV");
  InitialUpgrade("Group2","AKA08SV");
  InitialUpgrade("Group2","AKA09SV");
  InitialUpgrade("Group2","AKA10SV");
  InitialUpgrade("Group2","AKA11SV");
  InitialUpgrade("Group2","AKA12SV");
  InitialUpgrade("Group2","AKA13SV");
  InitialUpgrade("Group2","AKA14SV");
  InitialUpgrade("Group2","AKA15SV");
  InitialUpgrade("Group2","AKA16SV");
  InitialUpgrade("Group2","AKA17SV");
  InitialUpgrade("Group2","AKA18SV");
  InitialUpgrade("Group2","AKA19SV");
  InitialUpgrade("Group2","AKA20SV");
  InitialUpgrade("Group2","AKA21SV");
  InitialUpgrade("Group2","AKA22SV");
  InitialUpgrade("Group2","AKA23SV");
  InitialUpgrade("Group2","AKA24SV");
  InitialUpgrade("Group2","AKA26SV");
  InitialUpgrade("Group2","AKA27SV");
  InitialUpgrade("Group2","AKA28SV");
  InitialUpgrade("Group2","AKA29SV");
  InitialUpgrade("Group2","AKA30SV");
  InitialUpgrade("Group2","AKA31SV");
  InitialUpgrade("Group2","AKA32SV");
  InitialUpgrade("Group2","AKA33SV");
  InitialUpgrade("Group2","AKA34SV");
  InitialUpgrade("Group2","AKA35SV");
  InitialUpgrade("Group2","AKA36SV");
  InitialUpgrade("Group2","KUZ01SV");
  InitialUpgrade("Group2","KUZ02SV");
  InitialUpgrade("Group2","KUZ03SV");
  InitialUpgrade("Group2","KUZ04SV");
  InitialUpgrade("Group2","KUZ05SV");
  InitialUpgrade("Group2","KUZ06SV");
  SetLightSpot(&DAT_1002f420,0,1);
  SetLightSpot(&DAT_1002f428,0,2);
  SetLightSpot(&DAT_1002f430,0,3);
  SetLightSpot(&DAT_1002f438,0,4);
  SetLightSpot(&DAT_1002f440,0,5);
  for (DAT_1002f3e0 = 0; DAT_1002f3e0 < 5; DAT_1002f3e0 = DAT_1002f3e0 + 1) {
    ((long long *)&DAT_1002f3e4)[DAT_1002f3e0] = 0;
    ((long long *)&DAT_1002f3f8)[DAT_1002f3e0] = 0;
  }
  uStack_8 = 0x10001eb4;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
for (DAT_1002f3e0 = 0; DAT_1002f3e0 < 5; DAT_1002f3e0 = DAT_1002f3e0 + 1) {
    iVar2 = GetUnitsAmount0(((unsigned char *)&DAT_1002f420) + DAT_1002f3e0 * 8,0);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(((unsigned char *)&DAT_1002f420) + DAT_1002f3e0 * 8,1);
      if (iVar2 == 0) {
        ((long long *)&DAT_1002f3e4)[DAT_1002f3e0] = 1;
        ((long long *)&DAT_1002f3f8)[DAT_1002f3e0] = 0;
      }
    }
    iVar2 = GetUnitsAmount0(((unsigned char *)&DAT_1002f420) + DAT_1002f3e0 * 8,1);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(((unsigned char *)&DAT_1002f420) + DAT_1002f3e0 * 8,0);
      if (iVar2 == 0) {
        ((long long *)&DAT_1002f3e4)[DAT_1002f3e0] = 0;
        ((long long *)&DAT_1002f3f8)[DAT_1002f3e0] = 1;
      }
    }
  }
  DAT_1002f448 = 0;
  DAT_1002f44c = 0;
  for (DAT_1002f3e0 = 0; DAT_1002f3e0 < 5; DAT_1002f3e0 = DAT_1002f3e0 + 1) {
    DAT_1002f448 = DAT_1002f448 + ((long long *)&DAT_1002f3e4)[DAT_1002f3e0];
    DAT_1002f44c = DAT_1002f44c + ((long long *)&DAT_1002f3f8)[DAT_1002f3e0];
  }
  if ((DAT_1002f448 < 3) && (2 < DAT_1002f44c)) {
    FUN_10001130();
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (48000 < iVar2) {
      SetTrigg(10,0);
      ShowCentralText("TEXT7",0x96);
    }
  }
  iVar2 = GetGlobalTime();
  if (50000 < iVar2) {
    FUN_100010b0();
  }
  uVar1 = Trigg(0xf);
  if (((uVar1 & 0xff) != 0) && (iVar2 = GetTotalAmount0(&DAT_1002f410), iVar2 < 0x14)) {
    SetTrigg(0xf,0);
    iVar2 = GetMyNation();
    if (iVar2 == 1) {
      ShowCentralText("TEXT8",100);
    }
  }
  uVar1 = Trigg(0x10);
  if (((uVar1 & 0xff) != 0) && (iVar2 = GetTotalAmount0(&DAT_1002f418), iVar2 < 0x14)) {
    SetTrigg(0x10,0);
    iVar2 = GetMyNation();
    if (iVar2 == 0) {
      ShowCentralText("TEXT8",100);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1002f410);
  if (iVar2 == 0) {
    FUN_10001130();
  }
  iVar2 = GetTotalAmount0(&DAT_1002f418);
  if (iVar2 == 0) {
    FUN_100010b0();
  }
  uStack_8 = 0x1000253a;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
