#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006050[] = "Ztr";
char DAT_10006054[] = "Zf3";
char DAT_10006058[] = "Zf2";
char DAT_1000605c[] = "Zf1";
char DAT_10006068[] = "Gf4";
char DAT_1000606c[] = "Gf3";
char DAT_10006070[] = "Gf2";
char DAT_10006074[] = "Gf1";
long long DAT_10006420 = 0;
long long DAT_10006428 = 0;
long long DAT_10006430 = 0;
long long DAT_10006438 = 0;
long long DAT_10006440 = 0;
long long DAT_10006448 = 0;
long long DAT_10006450 = 0;
long long DAT_10006458 = 0;
long long DAT_10006460 = 0;
long long DAT_10006468 = 0;
long long DAT_10006470 = 0;
long long DAT_10006478 = 0;
long long DAT_10006480 = 0;

/* Forward declarations */
int FUN_10001000(void);


int FUN_10001000(void)

{
  int uVar1;
  
  uVar1 = GetDiff(0);
  switch(uVar1) {
  case 0:
    return 5000;
  case 1:
    return 4000;
  case 2:
    return 0xdac;
  case 3:
    return 2000;
  default:
    return 100;
  }
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006430,"Gkomandir");
  RegisterUnits(&DAT_10006440,DAT_10006074);
  RegisterUnits(&DAT_10006448,DAT_10006070);
  RegisterUnits(&DAT_10006450,DAT_1000606c);
  RegisterUnits(&DAT_10006458,DAT_10006068);
  RegisterZone(&DAT_10006438,"Zport");
  RegisterZone(&DAT_10006470,DAT_1000605c);
  RegisterZone(&DAT_10006478,DAT_10006058);
  RegisterZone(&DAT_10006480,DAT_10006054);
  RegisterZone(&DAT_10006420,DAT_10006050);
  RegisterFormation(&DAT_10006428,"#ALONE");
  RegisterUnitType(&DAT_10006468,"PERES_KOR(sp)");
  RegisterDynGroup(&DAT_10006460);
  RegisterVar(&DAT_10006460,8);
  SetPlayerName(1,"PIRATES");
  SetPlayerName(2,"PIRATES");
  SetPlayerName(3,"PIRATES");
  SetPlayerName(5,"PIRATES");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  void *pcVar4;
  char auStack_2c [4];
  unsigned short uStack_28;
  unsigned short uStack_26;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SetResource(1,3,5000);
    SetResource(1,1,5000);
    SetResource(1,4,5000);
    SetResource(1,5,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(2,3,5000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(3,3,5000);
    SetResource(3,1,5000);
    SetResource(3,4,5000);
    SetResource(3,5,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SelectUnits(&DAT_10006440,0);
    Patrol(5,&DAT_10006470,0xc0);
    SelectUnits(&DAT_10006448,0);
    Patrol(5,&DAT_10006478,0xc0);
    SelectUnits(&DAT_10006450,0);
    Patrol(5,&DAT_10006480,0xe0);
    uVar2 = FUN_10001000();
    RunTimer(1,uVar2);
    iVar3 = FUN_10001000();
    RunTimer(2,iVar3 + 10000);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      SetResource(0,3,50000);
      SetResource(0,1,50000);
      SetResource(0,4,50000);
      SetResource(0,5,50000);
      SetResource(0,0,50000);
      SetResource(0,2,50000);
      StartAI(1,"ENGLAND.0",2,1,2,1);
      StartAI(2,"ENGLAND.0",2,1,2,1);
      StartAI(3,"ENGLAND.0",2,1,2,1);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 1) {
      SetResource(0,3,10000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      StartAI(1,"ENGLAND.0",2,1,2,2);
      StartAI(2,"ENGLAND.0",2,1,2,2);
      StartAI(3,"ENGLAND.0",2,1,2,2);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 2) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,"ENGLAND.0",2,1,2,3);
      StartAI(2,"ENGLAND.0",2,1,2,3);
      StartAI(3,"ENGLAND.0",2,1,2,3);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,"ENGLAND.0",2,1,2,3);
      StartAI(2,"ENGLAND.0",2,1,2,3);
      StartAI(3,"ENGLAND.0",2,1,2,3);
    }
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), pcVar4 = (void*)&ShowPage, cVar1 != '\0')) {
    SetTrigg(6,0);
    ShowPage("#PAGE3");
    LooseGame();
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10006430), iVar3 == 0)) {
    SetTrigg(7,0);
    ShowPage("#PAGE4");
    LooseGame();
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(8,0);
    ShowPage("#PAGE5");
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(9,0);
    ShowPage("#PAGE6");
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    SetTrigg(10,0);
    ShowPage("#PAGE7");
  }
  cVar1 = Trigg(0xb);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) && (cVar1 = Trigg(9), cVar1 == '\0'))
     && (cVar1 = Trigg(8), cVar1 == '\0')) {
    SetTrigg(5,0);
    ShowPage("#PAGE8");
    ShowVictory();
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006438,&DAT_10006430), iVar3 != 0)) {
    SetTrigg(0xd,0);
    SetTrigg(0xe,1);
    GetUnitInfo(&DAT_10006430,0,auStack_2c);
    if ((uStack_28 < uStack_26) && (cVar1 = AskQuestion("#PAGE10"), cVar1 != '\0')) {
      iVar3 = GetResource(0,1);
      if (iVar3 < 0x7d1) {
        ShowPage("#PAGE11");
      }
      else {
        AddResource(0,1,0xfffff830);
        if (uStack_28 + 0x1996 < (unsigned int)uStack_26) {
          uStack_28 = uStack_28 + 0x1996;
          SetUnitInfo(auStack_2c);
        }
        else {
          uStack_28 = uStack_26;
          SetUnitInfo(auStack_2c);
        }
      }
    }
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006438,&DAT_10006430), iVar3 == 0)) {
    SetTrigg(0xe,0);
    SetTrigg(0xd,1);
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(0xf,0);
    SelectUnits(&DAT_10006458,0);
    SelSendAndKill(5,&DAT_10006438,0x80,0);
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(0x10,0);
    SetTrigg(0x11,1);
    CreateObject0(&DAT_10006460,&DAT_10006428,&DAT_10006468,0,&DAT_10006420,0);
    ShowPage("#PAGE12");
    iVar3 = FUN_10001000();
    RunTimer(2,iVar3 + 10000);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(0x10,1);
    SetTrigg(0x11,0);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10006438,&DAT_10006460), iVar3 != 0)) {
    ShowPage("#PAGE13");
    AddResource(0,1,5000);
    SelectUnits(&DAT_10006460,0);
    SelErase(0);
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
