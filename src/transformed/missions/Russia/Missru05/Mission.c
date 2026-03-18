#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002b01c[] = "SUXX";
long long DAT_100303e0 = 0;
long long DAT_100303e8 = 0;
long long DAT_100303f0 = 0;
long long DAT_100303f8 = 0;
int DAT_10030400 = 0;
int DAT_10030404 = 0;
long long DAT_10030408 = 0;
long long DAT_10030410 = 0;
long long DAT_10030418 = 0;
long long DAT_10030420 = 0;
long long DAT_10030428 = 0;
long long DAT_10030430 = 0;
long long DAT_10030438 = 0;
long long DAT_10030440 = 0;
long long DAT_10030448 = 0;
long long DAT_10030450 = 0;
long long DAT_10030458 = 0;
long long DAT_10030460 = 0;
long long DAT_10030468 = 0;
long long DAT_10030470 = 0;
long long DAT_10030478 = 0;
long long DAT_10030480 = 0;
long long DAT_10030488 = 0;
long long DAT_10030490 = 0;
long long DAT_10030498 = 0;
long long DAT_100304a0 = 0;
long long DAT_100304a8 = 0;
long long DAT_100304b0 = 0;
long long DAT_100304b8 = 0;
long long DAT_100304c0 = 0;
long long DAT_100304c8 = 0;
long long DAT_100304d0 = 0;
long long DAT_100304d8 = 0;
long long DAT_100304e0 = 0;
long long DAT_100304e8 = 0;
long long DAT_100304f0 = 0;
long long DAT_100304f8 = 0;
long long DAT_10030500 = 0;
long long DAT_10030508 = 0;
long long DAT_10030510 = 0;
long long DAT_10030518 = 0;
long long DAT_10030520 = 0;
long long DAT_10030530 = 0;
long long DAT_10030538 = 0;
long long DAT_10030540 = 0;
long long DAT_10030548 = 0;
long long DAT_10030550 = 0;
long long DAT_10030558 = 0;
long long DAT_10030560 = 0;
long long DAT_10030568 = 0;
long long DAT_10030570 = 0;
long long DAT_10030578 = 0;
long long DAT_10030580 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int *local_8;
RegisterZone(&DAT_100304a8,"Zone1");
  RegisterZone(&DAT_100304b0,"Zone2");
  RegisterZone(&DAT_100304b8,"Zone3");
  RegisterZone(&DAT_100304c0,"Zone4");
  RegisterZone(&DAT_100304c8,"Zone5");
  RegisterUnits(&DAT_10030438,"Group0");
  RegisterUnits(&DAT_10030430,"Group1");
  RegisterUnitType(&DAT_10030578,"Mushketer_sakson(SA)");
  RegisterUnitType(&DAT_10030488,"Strelec(RU)");
  RegisterUnitType(&DAT_10030428,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_100304d8,"Reitar_Shwec(SV)");
  RegisterUnitType(&DAT_10030480,"Grenader(SV)");
  RegisterUnitType(&DAT_100304f0,"Mushketer(SV)");
  RegisterUnitType(&DAT_100304e0,"Pushka(SV)");
  RegisterUnitType(&DAT_10030490,"Mortira(SV)");
  RegisterUnitType(&DAT_100304a0,"PERES_KOR(SV)");
  RegisterUnitType(&DAT_10030498,"Fregat(SV)");
  RegisterFormation(&DAT_100304e8,"#ALONE");
  RegisterFormation(&DAT_10030418,"#LINE3");
  RegisterFormation(&DAT_10030420,"#LINE5");
  RegisterFormation(&DAT_100303e0,"#KARE36");
  RegisterFormation(&DAT_100304d0,"#SQUARE36");
  RegisterFormation(&DAT_100303e8,"#LINE72");
  RegisterFormation(&DAT_100303f0,"#LINE120");
  RegisterFormation(&DAT_100303f8,"#SQUARE196");
  RegisterVar(&DAT_10030400,4);
  RegisterVar(&DAT_10030448,8);
  RegisterVar(&DAT_10030440,8);
  RegisterVar(&DAT_10030458,8);
  RegisterVar(&DAT_10030450,8);
  RegisterVar(&DAT_10030468,8);
  RegisterVar(&DAT_10030460,8);
  RegisterVar(&DAT_10030568,8);
  RegisterVar(&DAT_10030478,8);
  RegisterVar(&DAT_10030470,8);
  RegisterVar(&DAT_10030570,8);
  RegisterVar(&DAT_100304f8,8);
  RegisterVar(&DAT_10030550,8);
  RegisterVar(&DAT_10030558,8);
  RegisterVar(&DAT_10030408,8);
  RegisterVar(&DAT_10030538,8);
  RegisterVar(&DAT_10030548,8);
  RegisterVar(&DAT_10030520,8);
  RegisterVar(&DAT_10030410,8);
  RegisterVar(&DAT_10030530,8);
  RegisterVar(&DAT_10030508,8);
  RegisterVar(&DAT_10030510,8);
  RegisterVar(&DAT_10030560,8);
  RegisterVar(&DAT_10030540,8);
  RegisterVar(&DAT_10030518,8);
  RegisterVar(&DAT_10030500,8);
  DAT_10030404 = 0;
  while (DAT_10030404 < 0x14) {
    local_8 = ((unsigned char *)&DAT_10030580) + DAT_10030404 * 8;
    DAT_10030404 = DAT_10030404 + 1;
    RegisterVar(local_8,8);
  }
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(1,"SVEDES");
  SetPlayerName(4,DAT_1002b01c);
  local_8 = (int *)0x100016b4;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("Group22","Grenader(SV)ATTACK");
    InitialUpgrade("Group22","Grenader(SV)ATTACK3");
    InitialUpgrade("Group22","Grenader(SV)ATTACK4");
    InitialUpgrade("Group22","Grenader(SV)ATTACK5");
    InitialUpgrade("Group22","Grenader(SV)ATTACK6");
    InitialUpgrade("Group22","Grenader(SV)SHIELD");
    InitialUpgrade("Group22","Grenader(SV)SHIELD3");
    InitialUpgrade("Group22","Grenader(SV)SHIELD4");
    InitialUpgrade("Group22","Grenader(SV)SHIELD5");
    InitialUpgrade("Group22","Grenader(SV)SHIELD6");
    InitialUpgrade("Group22","Grenader(SV)SHIELD7");
    InitialUpgrade("Group22","Mushketer(SV)ATTACK");
    InitialUpgrade("Group22","Mushketer(SV)ATTACK3");
    InitialUpgrade("Group22","Mushketer(SV)ATTACK4");
    InitialUpgrade("Group22","Mushketer(SV)ATTACK5");
    InitialUpgrade("Group22","Mushketer(SV)ATTACK6");
    InitialUpgrade("Group22","Mushketer(SV)ATTACK7");
    InitialUpgrade("Group22","Mushketer(SV)SHIELD");
    InitialUpgrade("Group22","Mushketer(SV)SHIELD3");
    InitialUpgrade("Group22","Mushketer(SV)SHIELD4");
    InitialUpgrade("Group22","Mushketer(SV)SHIELD5");
    InitialUpgrade("Group22","Mushketer(SV)SHIELD6");
    InitialUpgrade("Group22","Mushketer(SV)SHIELD7");
    InitialUpgrade("Group22","KUZ01SV");
    InitialUpgrade("Group22","KUZ02SV");
    InitialUpgrade("Group22","KUZ03SV");
    InitialUpgrade("Group22","KUZ04SV");
    InitialUpgrade("Group22","KUZ05SV");
    InitialUpgrade("Group22","KUZ06SV");
    SetTrigg(1,0);
    SetTrigg(6,0);
    SetResource(0,3,20000);
    SetResource(0,1,20000);
    SetResource(0,0,20000);
    SetResource(0,2,0);
    SetResource(0,5,20000);
    SetResource(0,4,20000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    StartAI(1,"SVEDEN.0",2,0,1,3);
    SetAIProperty(1,0x1005,0);
    ShowPage("#PAGE1");
    DAT_10030400 = 0;
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (20000 < iVar2) {
      SetTrigg(2,0);
      CreateObject0(&DAT_10030448,&DAT_100304e8,&DAT_10030428,4,&DAT_100304b8,0xa6);
      CreateObject0(&DAT_10030440,&DAT_100303e0,&DAT_10030488,4,&DAT_100304b8,0xa6);
      SetLightSpot(&DAT_100304b8,1,1);
      RunTimer(1,1000);
      ShowPage("#PAGE2");
      SelectUnits(&DAT_10030448,0);
      SelectUnits(&DAT_10030440,1);
      SelSendAndKill(4,&DAT_100304c0,0xa6,0);
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    ClearLightSpot(1);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100304c0,&DAT_10030448);
      if (0 < iVar2) {
        SetTrigg(3,0);
        SelectUnits(&DAT_10030448,0);
        SelErase(4);
        ClearSelection(4);
        SelectUnits(&DAT_10030440,0);
        SelChangeNation(4,0);
        AddResource(0,3,20000);
        AddResource(0,1,20000);
        AddResource(0,4,20000);
        AddResource(0,5,20000);
        ShowPage("#PAGE3");
      }
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    GetTotalAmount1(&DAT_10030428,1);
    if (0 < iVar2) {
      uVar1 = Trigg(0x1e);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x1e,0);
        ClearSelection(1);
        SelectUnits(&DAT_10030448,0);
        SelSendTo(1,&DAT_100304c8,0xa6,0);
        SelectUnits(&DAT_10030458,0);
        SelSendAndKill(1,&DAT_100304c8,0xa6,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (0x5014 < iVar2) {
      SetTrigg(4,0);
      CreateObject0(&DAT_10030458,&DAT_100304d0,&DAT_100304d8,1,&DAT_100304b8,0xa6);
      SelectUnits(&DAT_10030458,0);
      DoNotUseSelInAI(1);
      SelSendAndKill(1,&DAT_100304c0,0xa6,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_10030440);
      if (iVar2 == 0) {
        GetTotalAmount0(&DAT_10030448);
        if (0 < iVar2) {
          SelectUnits(&DAT_10030458,0);
          SelAttackGroup(1,&DAT_10030448);
        }
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (5000 < iVar2) {
      SetTrigg(5,0);
      CreateObject0(&DAT_10030450,&DAT_100303e8,&DAT_10030480,1,&DAT_100304a8,0x5a);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (10000 < iVar2) {
      SetTrigg(6,0);
      CreateObject0(&DAT_10030468,&DAT_100303f0,&DAT_10030480,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030460,&DAT_10030418,&DAT_10030490,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030568,&DAT_100303e8,&DAT_100304d8,1,&DAT_100304a8,0x5a);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (20000 < iVar2) {
      SetTrigg(7,0);
      CreateObject0(&DAT_10030478,&DAT_100303e8,&DAT_100304f0,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030470,&DAT_100303f0,&DAT_10030480,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030570,&DAT_100303e8,&DAT_100304d8,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_100304f8,&DAT_10030418,&DAT_100304e0,1,&DAT_100304a8,0x5a);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (30000 < iVar2) {
      SetTrigg(8,0);
      CreateObject0(&DAT_10030550,&DAT_100303f0,&DAT_100304f0,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030558,&DAT_100303f8,&DAT_10030480,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030408,&DAT_100303f0,&DAT_100304d8,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030538,&DAT_10030420,&DAT_10030490,1,&DAT_100304a8,0x5a);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (40000 < iVar2) {
      SetTrigg(9,0);
      CreateObject0(&DAT_10030548,&DAT_100303f0,&DAT_100304f0,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030520,&DAT_100303f8,&DAT_10030480,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030410,&DAT_100303f0,&DAT_100304d8,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030530,&DAT_10030420,&DAT_100304e0,1,&DAT_100304a8,0x5a);
      CreateObject0(&DAT_10030500,&DAT_10030420,&DAT_10030490,1,&DAT_100304a8,0x5a);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (70000 < iVar2) {
      SetTrigg(10,0);
      CreateObject0(&DAT_10030508,&DAT_100303f8,&DAT_10030578,4,&DAT_100304b8,0xa6);
      SelectUnits(&DAT_10030508,0);
      SelSendAndKill(4,&DAT_100304c0,0xa6,0);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100304c0,&DAT_10030508);
      if (iVar2 != 0) {
        SetTrigg(0xb,0);
        ShowPage("#PAGE4");
        ShowVictory();
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030430);
    if (iVar2 < 1) {
      SetTrigg(0xc,0);
      iVar2 = GetResource(0,3);
      if (iVar2 < 1) {
        ShowPage("#PAGE5A");
      }
      else {
        ShowPage("#PAGE5");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030438);
    if (iVar2 < 6) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE6");
      LooseGame();
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (15000 < iVar2) {
      SetTrigg(0xd,0);
      CreateObject0(&DAT_10030510,&DAT_100304e8,&DAT_100304a0,1,&DAT_100304b0,0);
      CreateObject0(&DAT_10030560,&DAT_10030418,&DAT_10030498,1,&DAT_100304b0,0);
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (35000 < iVar2) {
      SetTrigg(0xe,0);
      CreateObject0(&DAT_10030518,&DAT_10030420,&DAT_10030498,1,&DAT_100304b0,0);
    }
  }
  iVar2 = GetGlobalTime();
  if ((DAT_10030400 * 3000 < iVar2) && (DAT_10030400 < 0x14)) {
    CreateObject0(((unsigned char *)&DAT_10030580) + DAT_10030400 * 8,&DAT_100304e8,&DAT_100304a0,1,&DAT_100304b0,0);
    DAT_10030400 = DAT_10030400 + 1;
  }
  uStack_8 = 0x10002a6b;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
