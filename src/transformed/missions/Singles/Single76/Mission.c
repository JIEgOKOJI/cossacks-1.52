#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_10008030 = 0;
long long DAT_1000ac10 = 0;
long long DAT_1000ac18 = 0;
long long DAT_1000ac20 = 0;
long long DAT_1000ac28 = 0;
long long DAT_1000ac30 = 0;
long long DAT_1000ac38 = 0;
long long DAT_1000ac40 = 0;
long long DAT_1000ac48 = 0;
long long DAT_1000ac50 = 0;
long long DAT_1000ac58 = 0;
long long DAT_1000ac60 = 0;
long long DAT_1000ac68 = 0;
long long DAT_1000ac70 = 0;
long long DAT_1000ac78 = 0;
long long DAT_1000ac80 = 0;
long long DAT_1000ac88 = 0;
long long DAT_1000ac90 = 0;
long long DAT_1000ac98 = 0;
long long DAT_1000aca0 = 0;
long long DAT_1000aca8 = 0;
long long DAT_1000acb0 = 0;
long long DAT_1000acb8 = 0;
unsigned char DAT_1000acc0[48] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_1000acc8 (*(long long *)((char *)DAT_1000acc0 + 0x8))
#define DAT_1000acd0 (*(long long *)((char *)DAT_1000acc0 + 0x10))
#define DAT_1000acd8 (*(long long *)((char *)DAT_1000acc0 + 0x18))
#define DAT_1000ace0 (*(long long *)((char *)DAT_1000acc0 + 0x20))
#define DAT_1000ace8 (*(long long *)((char *)DAT_1000acc0 + 0x28))

/* Forward declarations */
BOOL FUN_100015f0(int param_1);
int FUN_10001630(int param_1,int param_2,int param_3,int param_4);
int FUN_10001790(int param_1,int param_2,int param_3,int param_4,int param_5);
int FUN_10001800(int param_1);
BOOL FUN_10001850(int param_1);
void FUN_100018c0(int param_1,int param_2);

void OnInit();
void ProcessScenary();


BOOL __cdecl FUN_100015f0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1);
  while (iVar1 != 0) {
    RemoveUnitFromGroup(param_1,0);
    iVar1 = GetTotalAmount0(param_1);
  }
  iVar1 = GetTotalAmount0(param_1);
  return (BOOL)('\x01' - (iVar1 != 0));
}





int __cdecl FUN_10001630(int param_1,int param_2,int param_3,int param_4)

{
  int extraout_var = 0;
  int uVar1;
  int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  char local_3d;
  int local_3c;
  int local_38;
  short uStack_34;
  short uStack_32;
  unsigned int auStack_2c [5];
  short uStack_18;
  short uStack_14;
  
  uVar3 = 0;
  local_38 = 0;
  local_3d = '\0';
  local_3c = 0;
  do {
    if (((long long *)&DAT_10008030)[local_3c] == '\x01') {
      ClearSelection(local_3c);
      iVar4 = param_3;
      iVar5 = param_2;
      if (0 < param_3) {
        do {
          SelectUnitsType(iVar5,local_3c,1);
          iVar4 = iVar4 + -1;
          iVar5 = iVar5 + 8;
        } while (iVar4 != 0);
      }
      FUN_100015f0(param_1);
      SaveSelectedUnits(local_3c,param_1,0);
      ClearSelection(local_3c);
      iVar4 = GetTotalAmount0(param_1);
      if (iVar4 != 0) {
        CreateZoneNearGroup(&uStack_34,param_4,param_1,100);
      }
      iVar5 = 0;
      iVar4 = GetTotalAmount0(param_1);
      if (0 < iVar4) {
        do {
          GetUnitInfo(param_1,iVar5,auStack_2c);
          uStack_34 = uStack_18;
          uStack_32 = uStack_14;
          if ((local_38 == 0) || (iVar4 = GetTopDst(param_4,&uStack_34), iVar4 < local_38)) {
            local_38 = GetTopDst(param_4,&uStack_34);
            uVar3 = auStack_2c[0] & 0xffff;
            local_3d = '\x01';
          }
          iVar5 = iVar5 + 1;
          iVar4 = GetTotalAmount0(param_1);
        } while (iVar5 < iVar4);
      }
    }
    local_3c = local_3c + 1;
  } while (local_3c < 8);
  FUN_100015f0(param_1);
  uVar2 = extraout_var;
  if (local_3d != '\0') {
    uVar1 = InsertUnitToGroup(0,param_1,uVar3);
    uVar2 = (int)((unsigned int)uVar1 >> 8);
  }
  return (intptr_t)local_3d;
}





int __cdecl
FUN_10001790(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  int uVar3;
  char auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    UnitsCenter(auStack_8,param_4,100);
    uVar2 = FUN_10001630(param_1,param_2,param_3,auStack_8);
    if ((char)uVar2 != '\0') {
      SelectUnits(param_4,0);
      SelAttackGroup(param_5,param_1);
      return (int)1;
    }
  }
  return uVar2 & -256;
}





int __cdecl FUN_10001800(int param_1)

{
  int iVar1;
  int uVar2;
  unsigned int uVar3;
  char auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    UnitsCenter(auStack_8,param_1,100);
    SetLightSpot(auStack_8,1,1);
    return (int)1;
  }
  ClearLightSpot(1);
  return uVar3 & -256;
}





BOOL __cdecl FUN_10001850(int param_1)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  char auStack_8 [8];
  
  bVar1 = 0;
  iVar2 = GetTotalAmount0(param_1);
  if (iVar2 != 0) {
    UnitsCenter(auStack_8,param_1,500);
    iVar2 = 0;
    do {
      if ((((long long *)&DAT_10008030)[iVar2] == '\x01') &&
         ((bVar1 || (iVar3 = GetUnitsAmount0(auStack_8,iVar2), iVar3 != 0)))) {
        bVar1 = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  return !bVar1;
}





void __cdecl FUN_100018c0(int param_1,int param_2)

{
  int iVar1;
  char auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    iVar1 = GetTotalAmount0(param_2);
    if (iVar1 != 0) {
      UnitsCenter(auStack_8,param_2,500);
      SelectUnits(param_1,0);
      SelSendAndKill(1,auStack_8,0,0);
    }
  }
  return;
}





void OnInit(void)

{
                    
  RegisterDynGroup(&DAT_1000ac70);
  RegisterVar(&DAT_1000ac70,8);
  RegisterDynGroup(&DAT_1000ac20);
  RegisterVar(&DAT_1000ac20,8);
  RegisterVar(&DAT_10008030,8);
  RegisterZone(&DAT_1000ac90,"ZStart");
  RegisterUnits(&DAT_1000ac10,"GForCreate");
  RegisterDynGroup(&DAT_1000ac78);
  RegisterVar(&DAT_1000ac78,8);
  RegisterFormation(&DAT_1000ac18,"#LINE10PUS");
  RegisterUnitType(&DAT_1000ac60,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_1000ac68,"Krestian_Turki(TU)");
  RegisterUnitType(&DAT_1000ac28,"Kreposnoi_pruss(DA)");
  RegisterUnitType(&DAT_1000ac58,"Kreposnoi_pruss(GE)");
  RegisterVar(&DAT_1000acc0,0x30);
  RegisterUnitType(&DAT_1000acc0,"shahta(au)");
  RegisterUnitType(&DAT_1000acc8,"shahta_FE(au)");
  RegisterUnitType(&DAT_1000acd0,"shahta_UG(au)");
  RegisterUnitType(&DAT_1000acd8,"shahta(PL)");
  RegisterUnitType(&DAT_1000ace0,"shahta_FE(PL)");
  RegisterUnitType(&DAT_1000ace8,"shahta_UG(PL)");
  RegisterUnits(&DAT_1000ac80,"GComCent");
  RegisterZone(&DAT_1000ac88,"ZComCent");
  RegisterZone(&DAT_1000ac98,"ZCreate1");
  RegisterZone(&DAT_1000aca0,"ZCreate2");
  RegisterZone(&DAT_1000aca8,"ZCreate3");
  RegisterZone(&DAT_1000acb0,"ZCreate4");
  RegisterZone(&DAT_1000acb8,"ZCreate5");
  RegisterFormation(&DAT_1000ac48,"#LINE10PUS");
  RegisterFormation(&DAT_1000ac40,"#LINE15PUS");
  RegisterFormation(&DAT_1000ac38,"#LINE20PUS");
  RegisterFormation(&DAT_1000ac30,"#LINE25PUS");
  RegisterUnitType(&DAT_1000ac50,"Mushketer_DA(DA)");
  SetPlayerName(1,"DENMARK");
  SetPlayerName(2,"POALND");
  SetPlayerName(3,"AUSTRIAN");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  BOOL bVar2;
  int iVar3;
  int uVar4;
  DWORD DVar5;
  int iVar6;
  void *pcVar7;
  void *pcVar8;
  int *puVar9;
  
                    
  cVar1 = Trigg(2);
  if (cVar1 == '\0') goto LAB_1000139c;
  SetTrigg(2,0);
  iVar6 = 0;
  do {
    iVar3 = GetDiff(0);
    SetResource(0,iVar6,(10 - iVar3) * 500);
    SetResource(2,iVar6,5000);
    SetResource(3,iVar6,5000);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  uVar4 = AskMultilineQuestion(9,"#PAGE2001",0,"M20_01|M20_02|M20_03|M20_04");
  switch(uVar4) {
  case 0:
    puVar9 = &DAT_1000ac60;
    break;
  case 1:
    puVar9 = &DAT_1000ac68;
    break;
  case 2:
    puVar9 = &DAT_1000ac28;
    break;
  case 3:
    puVar9 = &DAT_1000ac58;
    break;
  default:
    goto switchD_1000128a_default;
  }
  CreateObject0(&DAT_1000ac78,&DAT_1000ac18,puVar9,0,&DAT_1000ac90,0xc0);
switchD_1000128a_default:
  SelectUnits(&DAT_1000ac10,0);
  SelErase(4);
  ClearSelection(4);
  ChangeFriends(0,3);
  ChangeFriends(2,0xc);
  uVar4 = GetDiff(0);
  StartAI(2,"POLAND.0",0,1,1,uVar4);
  uVar4 = GetDiff(0);
  StartAI(3,"AUSTRIA.0",0,1,1,uVar4);
  iVar6 = GetDiff(0);
  RunTimer(1,(iVar6 + 10) * 1000);
  EnableMission(0x41);
  EnableMission(0x42);
  EnableMission(0x43);
  EnableMission(0x44);
  DisableMission(0x45);
  DisableMission(0x46);
  DisableMission(0x47);
  EnableMission(0x48);
  EnableMission(0x4c);
  DisableMission(0x4d);
  DisableMission(0x4e);
LAB_1000139c:
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') &&
      (iVar6 = GetUnitsAmount0(&DAT_1000ac88,0), pcVar7 = (void*)&SetTrigg, iVar6 != 0)) &&
     (iVar6 = GetTotalAmount0(&DAT_1000ac80), pcVar7 = (void*)&SetTrigg, iVar6 != 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE2002");
    SetLightSpot(&DAT_1000ac88,1,4);
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
    EnableMission(0x4d);
  }
  cVar1 = TimerDone(1);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 == '\0')) &&
     ((iVar6 = GetTotalAmount0(&DAT_1000ac70), iVar6 == 0 &&
      (iVar6 = GetTotalAmount0(&DAT_1000ac80), iVar6 != 0)))) {
    iVar6 = GetDiff(0);
    RunTimer(1,(iVar6 + 10) * 500);
    DVar5 = time(NULL);
    srand(DVar5);
    uVar4 = 0x40;
    iVar6 = rand();
// FIXME(decompiler):     iVar6 = GetDiff(0);
    CreateObject0(&DAT_1000ac70,((unsigned char *)&DAT_1000ac30) + iVar6 * 8,0,0,0,0);
  }
  bVar2 = FUN_10001850(&DAT_1000ac70);
  if ((bVar2) && (iVar6 = GetTotalAmount0(&DAT_1000ac80), iVar6 != 0)) {
    FUN_10001790(&DAT_1000ac20,(intptr_t)&DAT_1000acc0,6,&DAT_1000ac70,1);
    SetTrigg(3,0);
  }
  else {
    cVar1 = Trigg(3);
    if (cVar1 != '\0') {
      FUN_100018c0(&DAT_1000ac70,&DAT_1000ac20);
      SetTrigg(3,0);
    }
  }
  FUN_10001800(&DAT_1000ac70);
  iVar6 = GetTotalAmount0(&DAT_1000ac80);
  if ((iVar6 == 0) && (cVar1 = Trigg(5), pcVar8 = (void*)&ShowPage, cVar1 != '\0')) {
    SetTrigg(5,0);
    ShowPage("#PAGE2003");
    DisableMission(0x44);
    DisableMission(0x46);
    DisableMission(0x4d);
    EnableMission(0x45);
    EnableMission(0x47);
    EnableMission(0x4e);
  }
  cVar1 = NationIsErased(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage("#PAGE2004");
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE2005");
    LooseGame();
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
