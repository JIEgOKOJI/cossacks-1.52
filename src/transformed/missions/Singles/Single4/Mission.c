#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_10008170 = 0;
long long DAT_10008178 = 0;
char DAT_100090dc[] = "Zf21";
char DAT_100090e4[] = "Zf2";
char DAT_100090e8[] = "Zf11";
char DAT_100090f0[] = "Zf1";
char DAT_10009114[] = "Zvis";
char DAT_1000912c[] = "Zp5";
char DAT_10009130[] = "Zp4";
char DAT_10009134[] = "Zp3";
char DAT_10009138[] = "Zp2";
char DAT_1000913c[] = "Zp1";
char DAT_10009140[] = "Gb";
long long DAT_10009e80 = 0;
long long DAT_10009e88 = 0;
long long DAT_10009e90 = 0;
long long DAT_10009e98 = 0;
long long DAT_10009ea0 = 0;
long long DAT_10009ea8 = 0;
long long DAT_10009eb0 = 0;
long long DAT_10009eb8 = 0;
long long DAT_10009ec0 = 0;
long long DAT_10009ec8 = 0;
long long DAT_10009ed0 = 0;
long long DAT_10009ed8 = 0;
long long DAT_10009ee0 = 0;
long long DAT_10009ee8 = 0;
long long DAT_10009ef0 = 0;
long long DAT_10009ef8 = 0;
long long DAT_10009f00 = 0;
long long DAT_10009f08 = 0;
long long DAT_10009f10 = 0;
long long DAT_10009f18 = 0;
long long DAT_10009f20 = 0;
long long DAT_10009f28 = 0;
long long DAT_10009f30 = 0;
long long DAT_10009f38 = 0;
long long DAT_10009f40 = 0;
long long DAT_10009f50 = 0;
long long DAT_10009f58 = 0;
long long DAT_10009f60 = 0;
long long DAT_10009f68 = 0;
long long DAT_10009f70 = 0;
long long DAT_10009f78 = 0;
long long DAT_10009f80 = 0;
long long DAT_10009f88 = 0;
long long DAT_10009f90 = 0;
long long DAT_10009f98 = 0;
long long DAT_10009fa0 = 0;
long long DAT_10009fa8 = 0;
long long DAT_10009fb8 = 0;
int DAT_10008170_ovl = -1065151889;
int DAT_10008178_ovl = 0;
int DAT_10009fb8_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10001e2f() { return 0; }
int FUN_100020b4() { return 0; }
int FUN_1000220d() { return 0; }
int FUN_10002314() { return 0; }
int FUN_10002364() { return 0; }


/* Forward declarations */
int FUN_10001000(void);
BOOL FUN_10001050(int param_1);
void FUN_10001090(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_10001d70(LPVOID param_1);
void FUN_10001d89(DWORD param_1);
void FUN_10001db8(void);
void FUN_10001dd0(void);


int FUN_10001000(void)

{
  int uVar1;
  
  uVar1 = GetDiff(0);
  switch(uVar1) {
  case 0:
    return 25000;
  case 1:
    return 15000;
  case 2:
    return 10000;
  case 3:
    return 6000;
  default:
    return 100;
  }
}





BOOL __cdecl FUN_10001050(int param_1)

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







void __cdecl
FUN_10001090(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  char extraout_ST0;
  long long lVar6;
  int uVar7;
  short uStack_34;
  short uStack_32;
  int uStack_30;
  unsigned int auStack_2c [11];
  
  iVar1 = GetTotalAmount0(param_1);
  if (param_3 < iVar1) {
    puVar2 = (unsigned int *)(iVar1 - param_3);
  }
  else {
    puVar2 = (unsigned int *)0x0;
  }
  uStack_30 = 0x4000000a;
  uStack_34 = 0;
  uStack_32 = 0;
  if (puVar2 != (unsigned int *)0x0) {
    ClearSelection(param_2);
    SelectUnits(param_1,0);
    SaveSelectedUnits(param_2,param_5,0);
    param_1 = puVar2;
    if (0 < (int)puVar2) {
      do {
        iVar1 = GetTotalAmount0(param_5);
        iVar3 = rand();
        RemoveUnitFromGroup(param_5,iVar3 % iVar1);
        param_1 = (unsigned int *)((int)param_1 + -1);
      } while (param_1 != (unsigned int *)0x0);
    }
  }
  iVar1 = GetTotalAmount0(param_5);
  puVar2 = malloc(iVar1 * 4);
  iVar3 = 0;
  param_1 = puVar2;
  if (0 < iVar1) {
    do {
      GetUnitInfo(param_5,iVar3,auStack_2c);
      *param_1 = auStack_2c[0] & 0xffff;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_10001050(param_5);
  puVar5 = puVar2;
  if (0 < iVar1) {
    do {
      InsertUnitToGroup(0,param_5,*puVar5);
      GetUnitInfo(param_5,0,auStack_2c);
      uVar4 = rand();
      uVar4 = uVar4 & 0x800000ff;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffff00) + 1;
      }
      cos((long double)(int)uVar4 * (long double)DAT_10008178_ovl * (long double)DAT_10008170_ovl);
      lVar6 = 0;
      sin(extraout_ST0);
      uStack_34 = (short)lVar6;
      lVar6 = 0;
      uStack_32 = (short)lVar6;
      ClearSelection(param_2);
      SelectUnits(param_5,0);
      uVar7 = 0;
      iVar3 = rand();
      SelSendAndKill(param_2,&uStack_34,iVar3 % 0xfa,uVar7);
      FUN_10001050(param_5);
      iVar1 = iVar1 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar1 != 0);
  }
  FUN_10001d70(puVar2);
  return;
}





void __cdecl FUN_10001d70(LPVOID param_1)

{
  FUN_100020b4(param_1);
  return;
}





void __cdecl FUN_10001d89(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000220d();
  pDVar1[5] = param_1;
  return;
}







void FUN_10001db8(void)

{
  void *extraout_ECX;
  
  FUN_10001dd0();
  DAT_10009fb8_ovl = FUN_10002364();
  FUN_10002314(extraout_ECX);
  return;
}





void FUN_10001dd0(void)

{
  return;
}





void OnInit(void)

{
  DWORD DVar1;
  
                    
  RegisterUnits(&DAT_10009ec8,DAT_10009140);
  RegisterZone(&DAT_10009f70,DAT_1000913c);
  RegisterZone(&DAT_10009f78,DAT_10009138);
  RegisterZone(&DAT_10009f80,DAT_10009134);
  RegisterZone(&DAT_10009f88,DAT_10009130);
  RegisterZone(&DAT_10009f90,DAT_1000912c);
  RegisterZone(&DAT_10009ed8,"Zrinok");
  RegisterZone(&DAT_10009fa0,"Zlag1");
  RegisterZone(&DAT_10009ec0,DAT_10009114);
  RegisterZone(&DAT_10009ef0,"Zpyt1");
  RegisterZone(&DAT_10009ef8,"Zpyt2");
  RegisterZone(&DAT_10009f00,"Zpyt3");
  RegisterZone(&DAT_10009f08,"Zpyt4");
  RegisterZone(&DAT_10009f58,DAT_100090f0);
  RegisterZone(&DAT_10009f28,DAT_100090e8);
  RegisterZone(&DAT_10009f60,DAT_100090e4);
  RegisterZone(&DAT_10009f30,DAT_100090dc);
  RegisterUnitType(&DAT_10009ee0,"PorPO(PO)");
  RegisterUnitType(&DAT_10009e88,"GRUZ(UN)");
  RegisterUnitType(&DAT_10009f50,"Fregat(PO)");
  RegisterUnitType(&DAT_10009e90,"Fregat(HO)");
  RegisterUnitType(&DAT_10009f98,"Pikiner_evro(PO)");
  RegisterUnitType(&DAT_10009f20,"Strelec_Algir_DIP(DIP)");
  RegisterUnitType(&DAT_10009ed0,"Pehota_turki_DIP(DIP)");
  RegisterFormation(&DAT_10009ea8,"#ALONE");
  RegisterFormation(&DAT_10009ea0,"#LINEMORB14");
  RegisterFormation(&DAT_10009eb0,"#SQUARE36");
  SetPlayerName(1,"HOLLAND");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(2,"HOLLAND");
  SetPlayerName(5,"NATIVES");
  RegisterDynGroup(&DAT_10009f10);
  RegisterVar(&DAT_10009f10,8);
  RegisterDynGroup(&DAT_10009f40);
  RegisterVar(&DAT_10009f40,8);
  RegisterDynGroup(&DAT_10009f38);
  RegisterVar(&DAT_10009f38,8);
  RegisterDynGroup(&DAT_10009e80);
  RegisterVar(&DAT_10009e80,8);
  RegisterDynGroup(&DAT_10009eb8);
  RegisterVar(&DAT_10009eb8,8);
  RegisterDynGroup(&DAT_10009ee8);
  RegisterVar(&DAT_10009ee8,8);
  RegisterDynGroup(&DAT_10009f68);
  RegisterVar(&DAT_10009f68,8);
  RegisterDynGroup(&DAT_10009f18);
  RegisterVar(&DAT_10009f18,8);
  RegisterDynGroup(&DAT_10009e98);
  RegisterVar(&DAT_10009e98,8);
  RegisterDynGroup(&DAT_10009fa8);
  RegisterVar(&DAT_10009fa8,8);
  DVar1 = FUN_10001e2f((int *)0x0);
  FUN_10001d89(DVar1);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  void *pcVar4;
  void *pcVar5;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    RunTimer(1,2000);
    iVar2 = FUN_10001000();
    RunTimer(2,iVar2 + 2000);
    iVar2 = FUN_10001000();
    RunTimer(3,iVar2 + 5000);
    iVar2 = FUN_10001000();
    RunTimer(4,iVar2 + 10000);
    RunTimer(5,100);
    ChangeFriends(5,0x26);
    ChangeFriends(2,0x26);
    ChangeFriends(1,0x26);
    ChangeFriends(0,0x11);
    ChangeFriends(4,0x11);
    SetResource(1,3,10000);
    SetResource(1,1,5000);
    SetResource(1,4,10000);
    SetResource(1,5,10000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,8000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,"HOLLAND.0",1,1,1,1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,6000);
      SetResource(0,1,6000);
      SetResource(0,4,6000);
      SetResource(0,5,6000);
      SetResource(0,0,6000);
      SetResource(0,2,6000);
      StartAI(1,"HOLLAND.0",1,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,"HOLLAND.0",1,1,1,3);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,4000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(1,"HOLLAND.0",1,1,1,3);
    }
  }
  cVar1 = TimerDone(5);
  if (cVar1 != '\0') {
    RunTimer(5,1000);
    FUN_10001090((unsigned int *)&DAT_10009ec8,5,0x32,1000,&DAT_10009fa8);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage("#PAGE3");
    ShowVictory();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage("#PAGE4");
    LooseGame();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(3,0);
    SetTrigg(4,1);
    SetTrigg(5,1);
    CreateObject0(&DAT_10009f10,&DAT_10009ea8,&DAT_10009f50,4,&DAT_10009f70,0x60);
    SelectUnits(&DAT_10009f10,0);
    SelSendTo(4,&DAT_10009f78,0x60,0);
    SelSendTo(4,&DAT_10009f80,0x40,2);
    ClearSelection(4);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10009f80,&DAT_10009f10), iVar2 != 0)) {
    SetTrigg(4,0);
    SetTrigg(6,1);
    ShowPage("#PAGE5");
    CreateObject0(&DAT_10009e80,&DAT_10009ea8,&DAT_10009e88,0,&DAT_10009ec0,0x80);
    CreateObject0(&DAT_10009ee8,&DAT_10009ea0,&DAT_10009f98,0,&DAT_10009ec0,0x80);
    SelectUnits(&DAT_10009f10,0);
    SelSendTo(4,&DAT_10009f88,0x30,0);
    SelSendTo(4,&DAT_10009f90,0x20,2);
    SetStartPoint(&DAT_10009ec0);
    RemoveGroup(&DAT_10009e80,&DAT_10009eb8);
    ClearSelection(4);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10009f90,&DAT_10009f10), iVar2 != 0)) {
    SetTrigg(5,0);
    SetTrigg(3,1);
    SelectUnits(&DAT_10009f10,0);
    SelErase(4);
    RunTimer(1,5000);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10009ed8,&DAT_10009eb8), iVar2 != 0)) {
    SetTrigg(6,0);
    ShowPage("#PAGE6");
    AddResource(0,1,3000);
    SelectUnits(&DAT_10009eb8,0);
    SelErase(0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(7,0);
    SetTrigg(8,1);
    uVar3 = FUN_10001000();
    RunTimer(2,uVar3);
    CreateObject0(&DAT_10009f68,&DAT_10009eb0,&DAT_10009f20,5,&DAT_10009fa0,0x80);
    CreateObject0(&DAT_10009e98,&DAT_10009eb0,&DAT_10009ed0,5,&DAT_10009fa0,0x80);
    SelectUnits(&DAT_10009f68,0);
    SelectUnits(&DAT_10009e98,1);
    SelSendAndKill(5,&DAT_10009ef0,0x40,0);
    SelSendAndKill(5,&DAT_10009ef8,0x40,2);
    SelSendAndKill(5,&DAT_10009f00,0xe0,2);
    SelSendAndKill(5,&DAT_10009f08,0x60,2);
    RemoveGroup(&DAT_10009f68,&DAT_10009f18);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(8,0);
    SetTrigg(7,1);
  }
  iVar2 = GetUnitsAmount1(&DAT_10009ef8,&DAT_10009f18);
  if (iVar2 != 0) {
    AttackBuildingsInZone(&DAT_10009f18,&DAT_10009ef8,0);
  }
  iVar2 = GetUnitsAmount1(&DAT_10009f00,&DAT_10009f18);
  if (iVar2 != 0) {
    AttackBuildingsInZone(&DAT_10009f18,&DAT_10009f00,0);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10009fa0,5), iVar2 == 0)) {
    SetTrigg(9,0);
    ShowPage("#PAGE7");
    SetTrigg(7,0);
    SetTrigg(8,0);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(10,0);
    SetTrigg(0xb,1);
    iVar2 = FUN_10001000();
    RunTimer(3,iVar2 + 5000);
    CreateObject0(&DAT_10009f40,&DAT_10009ea8,&DAT_10009e90,2,&DAT_10009f58,0x60);
    SelectUnits(&DAT_10009f40,0);
    SelSendAndKill(2,&DAT_10009f28,0x40,0);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(0xb,0);
    SetTrigg(10,1);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
    SetTrigg(0xc,0);
    SetTrigg(0xd,1);
    iVar2 = FUN_10001000();
    RunTimer(4,iVar2 + 5000);
    CreateObject0(&DAT_10009f38,&DAT_10009ea8,&DAT_10009e90,2,&DAT_10009f60,0xe0);
    SelectUnits(&DAT_10009f38,0);
    SelSendAndKill(2,&DAT_10009f30,0xc0,0);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
    SetTrigg(0xd,0);
    SetTrigg(0xc,1);
  }
  iVar2 = GetUnitsAmount1(&DAT_10009f28,&DAT_10009f40);
  if (iVar2 != 0) {
    AttackBuildingsInZone(&DAT_10009f40,&DAT_10009f28,0);
  }
  iVar2 = GetUnitsAmount1(&DAT_10009f30,&DAT_10009f38);
  if (iVar2 != 0) {
    AttackBuildingsInZone(&DAT_10009f38,&DAT_10009f30,0);
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
