#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_10009030 = 0;
char DAT_100091e8[] = "ZP10";
char DAT_100091f0[] = "ZP9";
char DAT_100091f4[] = "ZP8";
char DAT_100091f8[] = "ZP7";
char DAT_100091fc[] = "ZP6";
char DAT_10009200[] = "ZP5";
char DAT_10009204[] = "ZP4";
char DAT_10009208[] = "ZP3";
char DAT_1000920c[] = "ZP2";
char DAT_10009210[] = "ZP1";
long long DAT_1000bcc0 = 0;
long long DAT_1000bcc8 = 0;
long long DAT_1000bcd0 = 0;
long long DAT_1000bcd8 = 0;
long long DAT_1000bce0 = 0;
long long DAT_1000bce8 = 0;
long long DAT_1000bcf0 = 0;
long long DAT_1000bcf8 = 0;
long long DAT_1000bd00 = 0;
long long DAT_1000bd08 = 0;
long long DAT_1000bd10 = 0;
long long DAT_1000bd18 = 0;
long long DAT_1000bd20 = 0;
long long DAT_1000bd28 = 0;
long long DAT_1000bd30 = 0;
long long DAT_1000bd38 = 0;
long long DAT_1000bd40 = 0;
long long DAT_1000bd48 = 0;
long long DAT_1000bd50 = 0;
long long DAT_1000bd58 = 0;
long long DAT_1000bd60 = 0;
long long DAT_1000bd68 = 0;
unsigned char DAT_1000bd70[72] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1000be18 = 0;
long long DAT_1000be20 = 0;
long long DAT_1000be28 = 0;
long long DAT_1000be30 = 0;
long long DAT_1000be38 = 0;
long long DAT_1000be40 = 0;
long long DAT_1000be48 = 0;
long long DAT_1000be50 = 0;
long long DAT_1000be58 = 0;
long long DAT_1000be60 = 0;
long long DAT_1000be68 = 0;
long long DAT_1000be70 = 0;
long long DAT_1000be78 = 0;
long long DAT_1000be80 = 0;
long long DAT_1000be88 = 0;
long long DAT_1000be90 = 0;
long long DAT_1000be98 = 0;
long long DAT_1000bea0 = 0;
long long DAT_1000bea8 = 0;
long long DAT_1000beb0 = 0;
long long DAT_1000beb8 = 0;
long long DAT_1000bec0 = 0;
long long DAT_1000bec8 = 0;
long long DAT_1000bed0 = 0;

/* Stubs for missing internal functions */
int FUN_10001b7f() { return 0; }
int FUN_10001e89() { return 0; }


/* Forward declarations */
BOOL FUN_100017b0(int param_1);
void FUN_100017f0(int param_1,int param_2);
int FUN_10001820(int param_1,int param_2);
int FUN_10001860(int param_1,int param_2,int param_3,int param_4);
int FUN_100019c0(int param_1,int param_2,int param_3,int param_4,int param_5);
int FUN_10001a30(int param_1);
BOOL FUN_10001a80(int param_1);
void FUN_10001af0(int param_1,int param_2);
void FUN_10001b50(DWORD param_1);

void OnInit();
void ProcessScenary();


BOOL __cdecl FUN_100017b0(int param_1)

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





void __cdecl FUN_100017f0(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckProduction(param_1);
  if (cVar1 != '\0') {
    ProduceUnit(param_1,&DAT_1000bcc0,param_2);
  }
  return;
}





int __cdecl FUN_10001820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = GetTotalAmount0(param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 9;
    } while (iVar2 < param_2);
  }
  return iVar2;
}





int __cdecl FUN_10001860(int param_1,int param_2,int param_3,int param_4)

{
  int extraout_var;
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
    if (((long long *)&DAT_10009030)[local_3c] == '\x01') {
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
      FUN_100017b0(param_1);
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
  FUN_100017b0(param_1);
  uVar2 = extraout_var;
  if (local_3d != '\0') {
    uVar1 = InsertUnitToGroup(0,param_1,uVar3);
    uVar2 = (int)((unsigned int)uVar1 >> 8);
  }
  return (int)local_3d;
}





int __cdecl
FUN_100019c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  int uVar3;
  char auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    UnitsCenter(auStack_8,param_4,100);
    uVar2 = FUN_10001860(param_1,param_2,param_3,auStack_8);
    if ((char)uVar2 != '\0') {
      SelectUnits(param_4,0);
      SelAttackGroup(param_5,param_1);
      return (int)1;
    }
  }
  return uVar2 & 0xffffff00;
}





int __cdecl FUN_10001a30(int param_1)

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
  return uVar3 & 0xffffff00;
}





BOOL __cdecl FUN_10001a80(int param_1)

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
      if ((((long long *)&DAT_10009030)[iVar2] == '\x01') &&
         ((bVar1 || (iVar3 = GetUnitsAmount0(auStack_8,iVar2), iVar3 != 0)))) {
        bVar1 = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  return !bVar1;
}





void __cdecl FUN_10001af0(int param_1,int param_2)

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





void __cdecl FUN_10001b50(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10001e89();
  pDVar1[5] = param_1;
  return;
}





void OnInit(void)

{
  DWORD DVar1;
  int *puVar2;
  
                    
  RegisterVar(&DAT_10009030,8);
  puVar2 = &DAT_1000bd70;
  do {
    RegisterDynGroup(puVar2);
    puVar2 = puVar2 + 9;
  } while ((int)puVar2 < 0x1000be12);
  RegisterVar(&DAT_1000bd70,0xa2);
  RegisterUnitType(&DAT_1000bcc0,"GALERA(fr)");
  RegisterDynGroup(&DAT_1000bd68);
  RegisterDynGroup(&DAT_1000bd60);
  RegisterVar(&DAT_1000bd68,8);
  RegisterVar(&DAT_1000bd60,8);
  RegisterUnits(&DAT_1000bd50,"GPort1");
  RegisterUnits(&DAT_1000bd58,"GPort2");
  RegisterZone(&DAT_1000bcc8,DAT_10009210);
  RegisterZone(&DAT_1000bcd0,DAT_1000920c);
  RegisterZone(&DAT_1000bcd8,DAT_10009208);
  RegisterZone(&DAT_1000bce0,DAT_10009204);
  RegisterZone(&DAT_1000bce8,DAT_10009200);
  RegisterZone(&DAT_1000bcf0,DAT_100091fc);
  RegisterZone(&DAT_1000bcf8,DAT_100091f8);
  RegisterZone(&DAT_1000bd00,DAT_100091f4);
  RegisterZone(&DAT_1000bd08,DAT_100091f0);
  RegisterZone(&DAT_1000bd10,DAT_100091e8);
  RegisterDynGroup(&DAT_1000bd48);
  RegisterVar(&DAT_1000bd48,8);
  RegisterFormation(&DAT_1000bd38,"#LINE6PUS");
  RegisterFormation(&DAT_1000bd30,"#LINE8PUS");
  RegisterFormation(&DAT_1000bd28,"#LINE12PUS");
  RegisterFormation(&DAT_1000bd20,"#LINE16PUS");
  RegisterUnitType(&DAT_1000bd40,"Grenader(fr)");
  RegisterZone(&DAT_1000be18,"ZCreate1");
  RegisterZone(&DAT_1000be20,"ZCreate2");
  RegisterZone(&DAT_1000be28,"ZCreate3");
  RegisterZone(&DAT_1000be30,"ZCreate4");
  RegisterDynGroup(&DAT_1000bd18);
  RegisterVar(&DAT_1000bd18,8);
  RegisterUnitType(&DAT_1000be38,"shahta(GE)");
  RegisterUnitType(&DAT_1000be40,"shahta_FE(GE)");
  RegisterUnitType(&DAT_1000be48,"shahta_UG(GE)");
  RegisterUnitType(&DAT_1000be50,"Kuznica(GE)");
  RegisterUnitType(&DAT_1000be58,"akademia_E(GE)");
  RegisterUnitType(&DAT_1000be60,"Dip_korpus(GE)");
  RegisterUnitType(&DAT_1000be68,"artileri_depo(GE)");
  RegisterUnitType(&DAT_1000be70,"Rinok(GE)");
  RegisterUnitType(&DAT_1000be78,"Europ(GE)");
  RegisterUnitType(&DAT_1000be80,"Dom_Prussia(GE)");
  RegisterUnitType(&DAT_1000be88,"shahta(BA)");
  RegisterUnitType(&DAT_1000be90,"shahta_FE(BA)");
  RegisterUnitType(&DAT_1000be98,"shahta_UG(BA)");
  RegisterUnitType(&DAT_1000bea0,"Kuznica(BA)");
  RegisterUnitType(&DAT_1000bea8,"akademia_E(BA)");
  RegisterUnitType(&DAT_1000beb0,"Dip_korpus(BA)");
  RegisterUnitType(&DAT_1000beb8,"artileri_depo(BA)");
  RegisterUnitType(&DAT_1000bec0,"Rinok(BA)");
  RegisterUnitType(&DAT_1000bec8,"Europ(BA)");
  RegisterUnitType(&DAT_1000bed0,"Dom_Prussia(BA)");
  ChangeFriends(0,3);
  ChangeFriends(2,0x1c);
  SetPlayerName(1,"FRANCE");
  SetPlayerName(2,"PRUSSIA");
  SetPlayerName(3,"BAVARIA");
  DVar1 = FUN_10001b7f((int *)0x0);
  FUN_10001b50(DVar1);
  EnableMission(0x41);
  EnableMission(0x42);
  EnableMission(0x44);
  EnableMission(0x45);
  DisableMission(0x43);
  DisableMission(0x46);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  BOOL bVar2;
  int uVar3;
  unsigned int uVar4;
  void *pcVar5;
  int iVar6;
  int *puVar7;
  void *pcVar8;
  void *pcVar9;
  int uVar10;
  
                    
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    SetTrigg(2,0);
    iVar6 = 0;
    do {
      SetResource(0,iVar6,5000);
      SetResource(2,iVar6,5000);
      SetResource(3,iVar6,5000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    uVar3 = GetDiff(0);
    switch(uVar3) {
    case 0:
      InitialUpgrade("GPort1","AKA17FR");
    case 1:
      InitialUpgrade("GPort1","AKA27FR");
    case 2:
      InitialUpgrade("GPort1","AKA30FR");
      InitialUpgrade("GPort1","AKA16FR");
    case 3:
      InitialUpgrade("GPort1","AKA28FR");
      InitialUpgrade("GPort1","AKA20FR");
    default:
      uVar3 = GetDiff(0);
      StartAI(2,"GERMAN.0",2,1,1,uVar3);
      uVar3 = GetDiff(0);
      StartAI(3,"BAVARIA.0",2,1,1,uVar3);
      RunTimer(1,500);
      iVar6 = GetDiff(0);
      RunTimer(2,(iVar6 + 10) * 0x5dc);
      ShowPage("#PAGE2201");
    }
  }
  iVar6 = FUN_10001820(0x1000bd70,0x12);
  if (iVar6 < 0x12) {
    iVar6 = GetTotalAmount0(&DAT_1000bd68);
    if (iVar6 == 0) {
      FUN_100017f0(&DAT_1000bd50,&DAT_1000bd68);
    }
    else {
      iVar6 = FUN_10001820(0x1000bd70,0x12);
      RemoveGroup(&DAT_1000bd68,((unsigned char *)&DAT_1000bd70) + iVar6 * 9);
    }
  }
  iVar6 = FUN_10001820(0x1000bd70,0x12);
  if (iVar6 < 0x12) {
    iVar6 = GetTotalAmount0(&DAT_1000bd60);
    if (iVar6 == 0) {
      FUN_100017f0(&DAT_1000bd58,&DAT_1000bd60);
    }
    else {
      iVar6 = FUN_10001820(0x1000bd70,0x12);
      RemoveGroup(&DAT_1000bd60,((unsigned char *)&DAT_1000bd70) + iVar6 * 9);
    }
  }
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    RunTimer(1,3000);
    puVar7 = &DAT_1000bd70;
    do {
      SelectUnits(puVar7,0);
      uVar10 = 0;
      uVar3 = 0;
      iVar6 = rand();
      SelSendAndKill(1,((unsigned char *)&DAT_1000bcc8) + (iVar6 % 10) * 8,uVar3,uVar10);
      puVar7 = puVar7 + 9;
    } while ((int)puVar7 < 0x1000be12);
  }
  cVar1 = TimerDone(2);
  if ((cVar1 != '\0') && (iVar6 = GetTotalAmount0(&DAT_1000bd48), iVar6 == 0)) {
    cVar1 = Trigg(4);
    if (cVar1 != '\0') {
      SetTrigg(4,0);
      ShowPage("#PAGE2202");
    }
    uVar3 = 0x40;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
// FIXME(decompiler):     iVar6 = GetDiff(0,&DAT_1000bd40,1,((unsigned char *)&DAT_1000be18) + uVar4 * 8,uVar3);
    CreateObject0(&DAT_1000bd48,((unsigned char *)&DAT_1000bd20) + iVar6 * 8);
  }
  iVar6 = GetTotalAmount0(&DAT_1000bd48);
  if ((iVar6 == 0) && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    iVar6 = GetDiff(0);
    RunTimer(2,(iVar6 + 8) * 1000);
  }
  bVar2 = FUN_10001a80(&DAT_1000bd48);
  if (bVar2) {
    FUN_100019c0(&DAT_1000bd18,0x1000be38,0x14,&DAT_1000bd48,1);
    SetTrigg(3,1);
  }
  else {
    cVar1 = Trigg(3);
    if (cVar1 != '\0') {
      FUN_10001af0(&DAT_1000bd48,&DAT_1000bd18);
      SetTrigg(3,0);
    }
  }
  FUN_10001a30(&DAT_1000bd48);
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE2206");
    LooseGame();
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(5,0);
    DisableMission(0x42);
    EnableMission(0x43);
    ShowPage("#PAGE2203");
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    SetTrigg(5,0);
    DisableMission(0x44);
    EnableMission(0x46);
    ShowPage("#PAGE2204");
  }
  cVar1 = NationIsErased(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    DisableMission(0x42);
    EnableMission(0x43);
    DisableMission(0x44);
    EnableMission(0x46);
    ShowPage("#PAGE2205");
    ShowVictory();
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
