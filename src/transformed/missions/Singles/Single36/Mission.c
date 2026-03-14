#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006090[] = "GCom";
char DAT_1000613c[] = "GA3";
char DAT_10006140[] = "GA2";
char DAT_10006144[] = "GA1";
char DAT_10006148[] = "GK3";
char DAT_1000614c[] = "GK2";
char DAT_10006150[] = "GK1";
char DAT_10006154[] = "GB0";
char DAT_10006158[] = "GP1";
char DAT_1000615c[] = "GP0";
char DAT_10006160[] = "ZA32";
char DAT_10006168[] = "ZA31";
char DAT_10006170[] = "ZA3";
char DAT_10006174[] = "ZA2";
char DAT_10006178[] = "ZA1";
char DAT_1000617c[] = "ZX3";
char DAT_10006180[] = "ZX2";
char DAT_10006184[] = "ZX1";
char DAT_10006190[] = "ZP2";
char DAT_10006194[] = "ZP1";
char DAT_10006198[] = "ZP0";
char DAT_1000619c[] = "Z3";
char DAT_100061a0[] = "Z2";
char DAT_100061a4[] = "Z1";
int DAT_10006820 = 0;
long long DAT_10006828 = 0;
long long DAT_10006830 = 0;
long long DAT_10006838 = 0;
long long DAT_10006840 = 0;
long long DAT_10006848 = 0;
int DAT_10006850 = 0;
long long DAT_10006858 = 0;
long long DAT_10006860 = 0;
long long DAT_10006868 = 0;
long long DAT_10006870 = 0;
long long DAT_10006878 = 0;
long long DAT_10006880 = 0;
long long DAT_10006888 = 0;
long long DAT_10006890 = 0;
long long DAT_10006898 = 0;
long long DAT_100068a0 = 0;
int DAT_100068a8 = 0;
int DAT_100068ac = 0;
int DAT_100068b0 = 0;
int DAT_100068b4 = 0;
long long DAT_100068b8 = 0;
int DAT_100068c0 = 0;
int DAT_100068c4 = 0;
long long DAT_100068c8 = 0;
long long DAT_100068d0 = 0;
long long DAT_100068d8 = 0;
long long DAT_100068e0 = 0;
long long DAT_100068e8 = 0;
long long DAT_100068f0 = 0;
long long DAT_100068f8 = 0;
long long DAT_10006900 = 0;
long long DAT_10006908 = 0;
long long DAT_10006910 = 0;
long long DAT_10006918 = 0;
long long DAT_10006928 = 0;
long long DAT_10006930 = 0;
int DAT_10006938 = 0;
int DAT_1000693c = 0;
long long DAT_10006940 = 0;
long long DAT_10006948 = 0;
long long DAT_10006950 = 0;
long long DAT_10006958 = 0;
long long DAT_10006960 = 0;
long long DAT_10006968 = 0;
long long DAT_10006970 = 0;
long long DAT_10006978 = 0;
long long DAT_10006980 = 0;
long long DAT_10006988 = 0;
long long DAT_10006990 = 0;
long long DAT_10006998 = 0;
long long DAT_100069a0 = 0;
long long DAT_100069a8 = 0;

/* Forward declarations */
void FUN_10001012(void);
int FUN_1000108c(int param_1);
int FUN_100010aa(int param_1,int param_2,int param_3,int param_4);
void FUN_100010db(int param_1,int param_2);
int FUN_100010f3(int param_1,int param_2,int param_3,int param_4);
int FUN_1000111a(int param_1,int param_2,int param_3);


void FUN_10001012(void)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = Trigg(0x14);
  if (cVar1 == '\0') {
    pcVar2 = "#PAGE20B";
  }
  else {
    pcVar2 = "#PAGE20A";
  }
  ShowPage(pcVar2);
  InitialUpgrade(DAT_10006090,"Gusar_evro(RU)ATTACK");
  InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD");
  InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD");
  RegisterUpgrade(&DAT_10006998,"Gusar_evro(RU)ATTACK3");
  RegisterUpgrade(&DAT_10006988,"Gusar_evro(RU)SHIELD3");
  DisableUpgrade(0,&DAT_10006998);
  DisableUpgrade(0,&DAT_10006988);
  return;
}





int __cdecl FUN_1000108c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = GetUnitsByNation(param_1,iVar2);
    if (0 < iVar1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return iVar2;
}





int __cdecl
FUN_100010aa(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_1000108c(param_1);
  SelectUnits(param_1,0);
  SelSendAndKill(iVar1,param_2,param_3,param_4);
  return iVar1;
}





void __cdecl FUN_100010db(int param_1,int param_2)

{
  FUN_100010aa(param_1,param_2,200,0);
  return;
}





int __cdecl
FUN_100010f3(int param_1,int param_2,int param_3,int param_4)

{
  CreateObject0(param_1,&DAT_100068b8,param_2,param_4,param_3,0x80);
  return param_4;
}





int __cdecl FUN_1000111a(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1000108c(param_1);
  iVar2 = 0;
  if (0 < DAT_10006938) {
    do {
      FUN_100010f3(&DAT_10006878,param_2,param_3,iVar1);
      RemoveGroup(&DAT_10006878,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_10006938);
  }
  return iVar1;
}





void OnInit(void)

{
                    
  RegisterVar(&DAT_10006850,4);
  RegisterVar(&DAT_10006938,4);
  RegisterVar(&DAT_1000693c,4);
  RegisterVar(&DAT_10006820,4);
  SetPlayerName(1,"ENEMY");
  SetPlayerName(2,"ENEMY");
  SetPlayerName(3,"ENEMY");
  SetPlayerName(4,"ALLIES");
  RegisterZone(&DAT_100068a8,DAT_100061a4);
  RegisterZone(&DAT_100068b0,DAT_100061a0);
  RegisterZone(&DAT_100068c0,DAT_1000619c);
  RegisterZone(&DAT_10006958,DAT_10006198);
  RegisterZone(&DAT_10006960,DAT_10006194);
  RegisterZone(&DAT_10006968,DAT_10006190);
  RegisterZone(&DAT_10006990,"ZAttack");
  RegisterZone(&DAT_10006970,DAT_10006184);
  RegisterZone(&DAT_10006978,DAT_10006180);
  RegisterZone(&DAT_10006980,DAT_1000617c);
  RegisterZone(&DAT_10006940,DAT_10006178);
  RegisterZone(&DAT_10006948,DAT_10006174);
  RegisterZone(&DAT_10006950,DAT_10006170);
  RegisterZone(&DAT_10006858,DAT_10006168);
  RegisterZone(&DAT_10006860,DAT_10006160);
  RegisterUnits(&DAT_10006918,DAT_1000615c);
  RegisterUnits(&DAT_10006928,DAT_10006158);
  RegisterUnits(&DAT_100068e8,DAT_10006154);
  RegisterUnits(&DAT_10006870,DAT_10006090);
  RegisterUnits(&DAT_100068f8,DAT_10006150);
  RegisterUnits(&DAT_10006900,DAT_1000614c);
  RegisterUnits(&DAT_10006908,DAT_10006148);
  RegisterUnits(&DAT_100068d0,DAT_10006144);
  RegisterUnits(&DAT_100068d8,DAT_10006140);
  RegisterUnits(&DAT_100068e0,DAT_1000613c);
  RegisterDynGroup(&DAT_10006878);
  RegisterDynGroup(&DAT_10006880);
  RegisterDynGroup(&DAT_10006888);
  RegisterDynGroup(&DAT_10006890);
  RegisterDynGroup(&DAT_10006898);
  RegisterDynGroup(&DAT_100068c8);
  RegisterDynGroup(&DAT_100068f0);
  RegisterDynGroup(&DAT_10006828);
  RegisterDynGroup(&DAT_10006868);
  RegisterDynGroup(&DAT_10006930);
  RegisterDynGroup(&DAT_10006848);
  RegisterVar(&DAT_10006878,8);
  RegisterVar(&DAT_10006880,8);
  RegisterVar(&DAT_10006888,8);
  RegisterVar(&DAT_10006890,8);
  RegisterVar(&DAT_10006898,8);
  RegisterVar(&DAT_100068f0,8);
  RegisterVar(&DAT_10006828,8);
  RegisterVar(&DAT_10006868,8);
  RegisterVar(&DAT_10006930,8);
  RegisterVar(&DAT_10006848,8);
  RegisterUnitType(&DAT_10006830,"Krestian_Turki(TU)");
  RegisterUnitType(&DAT_10006838,"Kreposnoi_evro(PL)");
  RegisterUnitType(&DAT_100069a8,"Gusar_NEW(GE)");
  RegisterUnitType(&DAT_10006840,"Poland_pikiner(PL)");
  RegisterUnitType(&DAT_10006910,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_100069a0,"Tatarin(TU)");
  RegisterUnitType(&DAT_100068a0,"Strelec_Algir_DIP(TU)");
  RegisterFormation(&DAT_100068b8,"#ALONE");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pcVar6;
  void *pcVar7;
  char *pcVar8;
  int iStack_c;
  int uStack_8;
  int uStack_4;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    DAT_10006850 = GetDiff(0);
    DAT_10006938 = DAT_10006850 * 5 + 10;
    DAT_10006820 = 1;
    DAT_1000693c = 1;
    TakeFood(&DAT_10006918);
    InitialUpgrade(DAT_1000615c,"AKA01RU");
    InitialUpgrade(DAT_1000615c,"AKA02RU");
    InitialUpgrade(DAT_1000615c,"AKA03RU");
    InitialUpgrade(DAT_1000615c,"AKA04RU");
    InitialUpgrade(DAT_10006090,"MAINRU");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)ATTACK");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)ATTACK3");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)ATTACK4");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)ATTACK5");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)ATTACK6");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)ATTACK7");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)ATTACK7");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD3");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD3");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD4");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD5");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD6");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD7");
    InitialUpgrade(DAT_10006090,"Gusar_evro(RU)SHIELD7");
    InitialUpgrade(DAT_10006090,"Tiagoli_koval_rus(RU)ATTACK");
    InitialUpgrade(DAT_10006090,"Tiagoli_koval_rus(RU)SHIELD");
    InitialUpgrade(DAT_10006090,"Tiagoli_kozak(RU)ATTACK");
    InitialUpgrade(DAT_10006090,"Tiagoli_kozak(RU)ATTACK3");
    InitialUpgrade(DAT_10006090,"Tiagoli_kozak(RU)SHIELD");
    InitialUpgrade(DAT_10006090,"Tiagoli_kozak(RU)SHIELD3");
    InitialUpgrade(DAT_10006140,"MAINPL");
    InitialUpgrade(DAT_10006144,"MAINTU");
    InitialUpgrade(DAT_10006144,"KUZ03TU");
    ChangeFriends(1,0xe);
    ChangeFriends(2,0xe);
    ChangeFriends(3,0xe);
    ChangeFriends(4,0x11);
    SetResource(0,0,(4 - DAT_10006850) * 10000);
    uVar2 = GetResource(0,0);
    SetResource(0,3,uVar2);
    uVar2 = GetResource(0,0);
    SetResource(0,2,uVar2);
    uVar2 = GetResource(0,0);
    SetResource(0,1,uVar2);
    uVar2 = GetResource(0,0);
    SetResource(0,4,uVar2);
    uVar2 = GetResource(0,0);
    SetResource(0,5,uVar2);
    iVar3 = GetResource(0,0);
    SetResource(2,0,iVar3 + (4 - DAT_10006850) * 50000);
    uVar2 = GetResource(2,0);
    SetResource(2,3,uVar2);
    uVar2 = GetResource(2,0);
    SetResource(2,2,uVar2);
    uVar2 = GetResource(2,0);
    SetResource(2,1,uVar2);
    uVar2 = GetResource(2,0);
    SetResource(2,4,uVar2);
    uVar2 = GetResource(2,0);
    SetResource(2,5,uVar2);
    iVar3 = GetResource(0,0);
    SetResource(1,0,(iVar3 + (4 - DAT_10006850) * 50000) * 2);
    uVar2 = GetResource(1,0);
    SetResource(1,3,uVar2);
    uVar2 = GetResource(1,0);
    SetResource(1,2,uVar2);
    uVar2 = GetResource(1,0);
    SetResource(1,1,uVar2);
    uVar2 = GetResource(1,0);
    SetResource(1,4,uVar2);
    uVar2 = GetResource(1,0);
    SetResource(1,5,uVar2);
    iVar3 = GetResource(1,0);
    SetResource(3,3,iVar3 * 10);
    uVar2 = GetResource(1,0);
    SetResource(3,0,uVar2);
    uVar2 = GetResource(1,0);
    SetResource(3,2,uVar2);
    uVar2 = GetResource(1,0);
    SetResource(3,1,uVar2);
    uVar2 = GetResource(1,0);
    SetResource(3,4,uVar2);
    uVar2 = GetResource(1,0);
    SetResource(3,5,uVar2);
    RemoveGroup(&DAT_100068d0,&DAT_100068f0);
    RemoveGroup(&DAT_100068d8,&DAT_10006868);
    RemoveGroup(&DAT_100068e0,&DAT_10006930);
    RemoveGroup(&DAT_10006870,&DAT_10006848);
    SelectUnits(&DAT_100068f0,0);
    iVar3 = FUN_1000108c(&DAT_100068f0);
    DoNotUseSelInAI(iVar3);
    iVar3 = FUN_1000108c(&DAT_100068f0);
    ClearSelection(iVar3);
    SelectUnits(&DAT_10006930,0);
    iVar3 = FUN_1000108c(&DAT_10006930);
    DoNotUseSelInAI(iVar3);
    iVar3 = FUN_1000108c(&DAT_10006930);
    ClearSelection(iVar3);
    SetLightSpot(&DAT_10006958,1,1);
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    ShowPage("#PAGE0");
    ShowPage("#PAGE1");
    RunTimer(0xe,200);
    SetTrigg(99,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (cVar1 = TimerDone(10), cVar1 != '\0')) {
    cVar1 = Trigg(0x1f);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0x20);
      if (cVar1 != '\0') {
        uStack_8 = DAT_100068b0;
        uStack_4 = DAT_100068b4;
        SetTrigg(0x20,0);
        uVar2 = 0x21;
        goto LAB_1000182c;
      }
      cVar1 = Trigg(0x21);
      if (cVar1 != '\0') {
        uStack_8 = DAT_100068c0;
        uStack_4 = DAT_100068c4;
        SetTrigg(0x1f,1);
      }
    }
    else {
      uStack_8 = DAT_100068a8;
      uStack_4 = DAT_100068ac;
      SetTrigg(0x1f,0);
      uVar2 = 0x20;
LAB_1000182c:
      SetTrigg(uVar2,1);
    }
    iStack_c = 0;
    if (0 < DAT_10006938) {
      do {
        FUN_100010f3(&DAT_10006878,&DAT_100068a0,&uStack_8,3);
        RemoveGroup(&DAT_10006878,&DAT_10006890);
        FUN_100010f3(&DAT_10006878,&DAT_100069a0,&uStack_8,3);
        RemoveGroup(&DAT_10006878,&DAT_10006898);
        iStack_c = iStack_c + 1;
      } while (iStack_c < DAT_10006938);
    }
    DAT_10006938 = DAT_10006938 + DAT_10006850;
    RunTimer(10,7000);
    SetTrigg(0x1e,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10006890), iVar3 != 0)) {
    AttackEnemyInZone(&DAT_10006890,&DAT_10006958,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10006898), iVar3 != 0)) {
    AttackEnemyInZone(&DAT_10006898,&DAT_10006958,0);
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_10006930);
    if (9 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_10006940,0);
      iVar4 = GetUnitsAmount0(&DAT_10006970,0);
      if (iVar3 + iVar4 < 1) goto LAB_10001a7b;
    }
    iVar3 = GetUnitsAmount0(&DAT_10006970,0);
    if (0 < iVar3) {
      FUN_1000111a(&DAT_100068f0,&DAT_10006910,&DAT_10006970);
    }
    iVar3 = GetUnitsAmount0(&DAT_10006970,0);
    if (0 < iVar3) {
      FUN_1000111a(&DAT_100068f0,&DAT_100069a0,&DAT_10006970);
    }
    iVar3 = GetUnitsAmount0(&DAT_10006940,0);
    if (0 < iVar3) {
      FUN_1000111a(&DAT_100068f0,&DAT_10006910,&DAT_10006940);
    }
    iVar3 = GetUnitsAmount0(&DAT_10006940,0);
    if (0 < iVar3) {
      FUN_1000111a(&DAT_100068f0,&DAT_100069a0,&DAT_10006940);
    }
    RunTimer(1,0);
    SetTrigg(1,0);
  }
LAB_10001a7b:
  cVar1 = Trigg(1);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0xb), cVar1 != '\0')) &&
     (cVar1 = TimerDone(1), cVar1 != '\0')) {
    FUN_100010db(&DAT_100068f0,&DAT_10006990);
    RunTimer(1,100);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100068f0), iVar3 == 0)) {
    SetTrigg(0xb,0);
  }
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_100068f0);
    if (9 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_10006948,0);
      iVar4 = GetUnitsAmount0(&DAT_10006978,0);
      if (iVar3 + iVar4 < 1) goto LAB_10001b60;
    }
    FUN_1000111a(&DAT_10006868,&DAT_100069a8,&DAT_10006948);
    FUN_1000111a(&DAT_10006868,&DAT_100069a8,&DAT_10006980);
    RunTimer(2,0);
    SetTrigg(2,0);
  }
LAB_10001b60:
  cVar1 = Trigg(2);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
     (cVar1 = TimerDone(2), cVar1 != '\0')) {
    FUN_100010db(&DAT_10006868,&DAT_10006990);
    RunTimer(2,100);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10006868), iVar3 == 0)) {
    SetTrigg(0xc,0);
  }
  cVar1 = Trigg(3);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount0(&DAT_10006860,0);
    iVar4 = GetUnitsAmount0(&DAT_10006858,0);
    iVar5 = GetUnitsAmount0(&DAT_10006950,0);
    if (0 < iVar3 + iVar4 + iVar5) {
      FUN_1000111a(&DAT_10006930,&DAT_10006840,&DAT_10006950);
      FUN_1000111a(&DAT_10006930,&DAT_10006840,&DAT_10006860);
      RunTimer(3,0);
      SetTrigg(3,0);
    }
  }
  cVar1 = Trigg(3);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) &&
     (cVar1 = TimerDone(3), cVar1 != '\0')) {
    FUN_100010db(&DAT_10006930,&DAT_10006990);
    FUN_100010db(&DAT_10006908,&DAT_10006990);
    RemoveGroup(&DAT_10006908,&DAT_10006900);
    cVar1 = Trigg(5);
    if (cVar1 != '\0') {
      ShowPage("#PAGE4");
      SetTrigg(5,0);
    }
    RunTimer(3,100);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10006930), iVar3 == 0)) {
    SetTrigg(0xd,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10006958,0), 0 < iVar3)) {
    ShowPage("#PAGE5");
    DisableMission(0x42);
    EnableMission(0x43);
    EnableMission(0x44);
    ClearLightSpot(1);
    FUN_100010db(&DAT_10006868,&DAT_10006958);
    SaveSelectedUnits(0,&DAT_100068c8,0);
    ClearSelection(0);
    SelectUnits(&DAT_10006918,0);
    SelectUnits(&DAT_10006928,1);
    SelectUnits(&DAT_100068e8,1);
    SelectUnits1(4,&DAT_100068f8,1);
    SelectUnits1(4,&DAT_10006900,1);
    SelectUnits1(4,&DAT_10006908,1);
    SelChangeNation(4,0);
    SelectUnits(&DAT_100068c8,0);
    iStack_c = 0;
    if (0 < DAT_10006938 * 2) {
      do {
        CreateObject0(&DAT_10006878,&DAT_100068b8,&DAT_10006910,1,&DAT_10006960,0);
        CreateObject0(&DAT_10006878,&DAT_100068b8,&DAT_100069a0,1,&DAT_10006960,0);
        CreateObject0(&DAT_10006878,&DAT_100068b8,&DAT_10006840,2,&DAT_10006968,0);
        iStack_c = iStack_c + 1;
      } while (iStack_c < DAT_10006938 * 2);
    }
    iStack_c = 0;
    if (0 < DAT_10006938) {
      do {
        CreateObject0(&DAT_10006878,&DAT_100068b8,&DAT_10006830,1,&DAT_10006960,0);
        CreateObject0(&DAT_10006878,&DAT_100068b8,&DAT_10006838,2,&DAT_10006968,0);
        iStack_c = iStack_c + 1;
      } while (iStack_c < DAT_10006938);
    }
    StartAI(1,"TURKISH.0",0,3,1,DAT_10006850);
    StartAI(2,"POLAND.0",0,3,1,DAT_10006850);
    DAT_10006938 = DAT_10006850 + 5;
    RunTimer(10,200);
    SetTrigg(0x14,0);
    SetTrigg(0x15,0);
    SetTrigg(0x16,0);
    cVar1 = Trigg(0xb);
    if (((cVar1 == '\0') && (cVar1 = Trigg(0xc), cVar1 == '\0')) &&
       (cVar1 = Trigg(0xd), cVar1 == '\0')) {
      FUN_10001012();
    }
    SetTrigg(0xb,0);
    SetTrigg(0xc,0);
    SetTrigg(0xd,0);
    SetTrigg(0xe,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xe), cVar1 != '\0')) {
    CreateZoneNearGroup(&DAT_10006990,&DAT_10006858,&DAT_10006848,0x5dc);
    SaveSelectedUnits(0,&DAT_100068c8,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_100068f8,0);
    SelectUnits1(0,&DAT_10006900,1);
    SelectUnits1(0,&DAT_10006908,1);
    SelChangeNation(0,4);
    SelectUnitsInZone(&DAT_10006990,4,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_100068c8,0);
    RunTimer(0xe,0x14);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') &&
     (iVar3 = GetKilled(&DAT_10006848), pcVar7 = (void*)&SetTrigg, DAT_10006938 <= iVar3)) {
    FUN_10001012();
    SetTrigg(0x14,0);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') &&
     (iVar3 = GetKilled(&DAT_100068f8), (DAT_10006850 + DAT_10006820 * 5) * 2 <= iVar3)) {
    if (DAT_10006820 == 1) {
      InitialUpgrade(DAT_10006090,"Tiagoli_koval_rus(RU)ATTACK");
      pcVar8 = "Tiagoli_koval_rus(RU)SHIELD";
LAB_100020bf:
      InitialUpgrade(DAT_10006090,pcVar8);
    }
    else {
      if (DAT_10006820 == 2) {
        InitialUpgrade(DAT_10006090,"Tiagoli_koval_rus(RU)ATTACK3");
        pcVar8 = "Tiagoli_koval_rus(RU)SHIELD3";
        goto LAB_100020bf;
      }
      if (DAT_10006820 == 3) {
        InitialUpgrade(DAT_10006090,"Tiagoli_koval_rus(RU)ATTACK4");
        pcVar8 = "Tiagoli_koval_rus(RU)SHIELD4";
        goto LAB_100020bf;
      }
      if (DAT_10006820 == 4) {
        InitialUpgrade(DAT_10006090,"Tiagoli_koval_rus(RU)ATTACK5");
        InitialUpgrade(DAT_10006090,"Tiagoli_koval_rus(RU)SHIELD5");
        DAT_10006820 = 0;
        SetTrigg(0x15,0);
      }
    }
    iVar4 = DAT_10006820 + 1;
    iVar3 = DAT_10006820 + 2;
    DAT_10006820 = iVar4;
    ShowPageParam("#PAGE2V",iVar4,iVar3);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 == '\0') ||
     (iVar3 = GetKilled(&DAT_10006900), iVar3 < (DAT_10006850 + DAT_1000693c * 5) * 2))
  goto LAB_1000219d;
  if (DAT_1000693c == 1) {
    InitialUpgrade(DAT_10006090,"Tiagoli_kozak(RU)ATTACK");
    pcVar8 = "Tiagoli_kozak(RU)SHIELD";
LAB_1000217b:
    InitialUpgrade(DAT_10006090,pcVar8);
  }
  else {
    if (DAT_1000693c == 2) {
      InitialUpgrade(DAT_10006090,"Tiagoli_kozak(RU)ATTACK3");
      pcVar8 = "Tiagoli_kozak(RU)SHIELD3";
      goto LAB_1000217b;
    }
    if (DAT_1000693c == 3) {
      InitialUpgrade(DAT_10006090,"Tiagoli_kozak(RU)ATTACK4");
      pcVar8 = "Tiagoli_kozak(RU)SHIELD4";
      goto LAB_1000217b;
    }
    if (DAT_1000693c == 4) {
      InitialUpgrade(DAT_10006090,"Tiagoli_kozak(RU)ATTACK5");
      InitialUpgrade(DAT_10006090,"Tiagoli_kozak(RU)SHIELD5");
      DAT_1000693c = 1;
      SetTrigg(0x16,0);
    }
  }
  iVar3 = DAT_1000693c;
  DAT_1000693c = DAT_1000693c + 1;
  ShowPageParam("#PAGE2C",iVar3,1);
LAB_1000219d:
  cVar1 = Trigg(0xe);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5b), pcVar6 = (void*)&ShowPage, cVar1 != '\0')) &&
     (cVar1 = NationIsErased(1), pcVar6 = (void*)&ShowPage, cVar1 != '\0')) {
    ShowPage("#PAGE11");
    FUN_10001012();
    SetTrigg(0x5b,0);
  }
  cVar1 = Trigg(0xe);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5c), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE12");
    FUN_10001012();
    SetTrigg(0x5c,0);
  }
  iVar3 = GetTotalAmount0(&DAT_10006848);
  if (iVar3 == 0) {
    iVar3 = 1;
    do {
      cVar1 = TimerDone(iVar3);
      if (cVar1 == '\0') {
        RunTimer(iVar3,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1e);
    ShowPage("#PAGE10");
    LooseGame();
  }
  cVar1 = Trigg(0x5b);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0x5c), cVar1 == '\0')) {
    iVar3 = 1;
    do {
      cVar1 = TimerDone(iVar3);
      if (cVar1 == '\0') {
        FreeTimer(iVar3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1e);
    ShowPage("#PAGE20");
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
