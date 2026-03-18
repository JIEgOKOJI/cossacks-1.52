#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int DAT_100303e0 = 0;
int DAT_100303e4 = 0;
long long DAT_100303e8 = 0;
long long DAT_100303f0 = 0;
long long DAT_100303f8 = 0;
long long DAT_10030400 = 0;
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
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int *local_8;
RegisterZone(&DAT_10030460,"Zone1");
  RegisterZone(&DAT_10030468,"Zone2");
  RegisterZone(&DAT_10030470,"Zone3");
  RegisterZone(&DAT_10030478,"Zone4");
  RegisterZone(&DAT_10030480,"Zone5");
  RegisterZone(&DAT_10030488,"Zone6");
  RegisterZone(&DAT_10030490,"Zone7");
  RegisterZone(&DAT_10030498,"Zone8");
  RegisterZone(&DAT_100304a0,"Zone9");
  RegisterZone(&DAT_10030448,"Zone10");
  RegisterZone(&DAT_10030440,"Zone11");
  RegisterZone(&DAT_10030458,"Zone12");
  RegisterZone(&DAT_10030450,"Zone13");
  RegisterUnits(&DAT_100303f0,"Group1");
  RegisterUnits(&DAT_10030400,"Group2");
  RegisterUnits(&DAT_100303f8,"Group3");
  RegisterUnits(&DAT_10030410,"Group4");
  RegisterUnits(&DAT_10030408,"Group5");
  RegisterUnits(&DAT_10030420,"Group6");
  RegisterUnits(&DAT_10030418,"Group7");
  RegisterUnits(&DAT_10030430,"Group8");
  RegisterUnits(&DAT_10030428,"Group9");
  RegisterUnits(&DAT_100304a8,"Group10");
  RegisterUnits(&DAT_100304c0,"Group11");
  RegisterUnits(&DAT_100304b0,"Group15");
  RegisterVar(&DAT_100304b8,8);
  DAT_100303e0 = 0;
  while (DAT_100303e0 < 0x14) {
    local_8 = ((unsigned char *)&DAT_100304e8) + DAT_100303e0 * 8;
    DAT_100303e0 = DAT_100303e0 + 1;
    RegisterVar(local_8,8);
  }
  RegisterVar(&DAT_100303e4,4);
  RegisterUnitType(&DAT_100303e8,"Tiagoli_kozak(RU)");
  RegisterUnitType(&DAT_10030438,"Grenader(SV)");
  RegisterFormation(&DAT_100304c8,"#SQUARE36");
  RegisterFormation(&DAT_100304d0,"#SQUARE72");
  RegisterFormation(&DAT_100304d8,"#SQUARE120");
  RegisterFormation(&DAT_100304e0,"#SQUARE196");
  SetPlayerName(1,"SVEDES");
  SetPlayerName(2,"ROBBERS");
  local_8 = (int *)0x100014c8;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int local_48 [16];
  int *local_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SetResource(0,3,5000);
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(1,3,1000000000);
    SetResource(1,1,1000000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,1000000000);
    SetResource(1,4,1000000000);
    InitialUpgrade("Group14","Pikiner_Shvec(SV)ATTACK");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)ATTACK3");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)ATTACK4");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)ATTACK5");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)ATTACK6");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)ATTACK7");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)SHIELD");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)SHIELD3");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)SHIELD4");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)SHIELD5");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)SHIELD6");
    InitialUpgrade("Group14","Pikiner_Shvec(SV)SHIELD7");
    InitialUpgrade("Group14","Mushketer(SV)ATTACK");
    InitialUpgrade("Group14","Mushketer(SV)ATTACK3");
    InitialUpgrade("Group14","Mushketer(SV)ATTACK4");
    InitialUpgrade("Group14","Mushketer(SV)ATTACK5");
    InitialUpgrade("Group14","Mushketer(SV)ATTACK6");
    InitialUpgrade("Group14","Mushketer(SV)ATTACK7");
    InitialUpgrade("Group14","Mushketer(SV)SHIELD");
    InitialUpgrade("Group14","Mushketer(SV)SHIELD3");
    InitialUpgrade("Group14","Mushketer(SV)SHIELD4");
    InitialUpgrade("Group14","Mushketer(SV)SHIELD5");
    InitialUpgrade("Group14","Mushketer(SV)SHIELD6");
    InitialUpgrade("Group14","Mushketer(SV)SHIELD7");
    InitialUpgrade("Group12","AKA01SV");
    InitialUpgrade("Group12","AKA02SV");
    InitialUpgrade("Group12","AKA03SV");
    InitialUpgrade("Group12","AKA04SV");
    InitialUpgrade("Group12","AKA05SV");
    InitialUpgrade("Group12","AKA06SV");
    InitialUpgrade("Group12","AKA07SV");
    InitialUpgrade("Group12","AKA08SV");
    InitialUpgrade("Group12","AKA09SV");
    InitialUpgrade("Group12","AKA10SV");
    InitialUpgrade("Group12","AKA11SV");
    InitialUpgrade("Group12","AKA12SV");
    InitialUpgrade("Group12","AKA13SV");
    InitialUpgrade("Group12","AKA14SV");
    InitialUpgrade("Group12","AKA15SV");
    InitialUpgrade("Group12","AKA16SV");
    InitialUpgrade("Group12","AKA17SV");
    InitialUpgrade("Group12","AKA18SV");
    InitialUpgrade("Group12","AKA19SV");
    InitialUpgrade("Group12","AKA20SV");
    InitialUpgrade("Group12","AKA21SV");
    InitialUpgrade("Group12","AKA22SV");
    InitialUpgrade("Group12","AKA23SV");
    InitialUpgrade("Group12","AKA24SV");
    InitialUpgrade("Group12","AKA25SV");
    InitialUpgrade("Group12","AKA26SV");
    InitialUpgrade("Group12","AKA27SV");
    InitialUpgrade("Group12","AKA28SV");
    InitialUpgrade("Group12","AKA29SV");
    InitialUpgrade("Group12","AKA30SV");
    InitialUpgrade("Group12","AKA31SV");
    InitialUpgrade("Group12","AKA32SV");
    InitialUpgrade("Group12","AKA33SV");
    InitialUpgrade("Group12","AKA34SV");
    InitialUpgrade("Group12","AKA35SV");
    InitialUpgrade("Group12","AKA36SV");
    InitialUpgrade("Group13","KUZ01SV");
    InitialUpgrade("Group13","KUZ02SV");
    InitialUpgrade("Group13","KUZ03SV");
    InitialUpgrade("Group13","KUZ04SV");
    InitialUpgrade("Group13","KUZ05SV");
    InitialUpgrade("Group13","KUZ06SV");
    ShowPage("#PAGE1");
    SelectUnits(&DAT_100304b0,0);
    Patrol(1,&DAT_10030498,0);
    DAT_100303e4 = 0;
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030460,0);
    if (0 < iVar3) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      SelectUnits(&DAT_10030400,0);
      SelSendAndKill(1,&DAT_10030460,0x5a,0);
      GetTotalAmount0(&DAT_100303f8);
      if (10 < iVar3) {
        SelectUnits(&DAT_100304a8,0);
        SelOpenGates(1);
        SelectUnits(&DAT_100303f8,0);
        SelSendAndKill(1,&DAT_10030460,0x5a,0);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030460,&DAT_100303f8);
    GetTotalAmount0(&DAT_100303f8);
    if (iVar3 == iVar2) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_100304a8,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (20000 < iVar3) {
      SetTrigg(0x15,0);
      SelectUnits(&DAT_10030410,0);
      SelSendAndKill(1,&DAT_10030468,0x5a,2);
      SelSendAndKill(1,&DAT_10030470,0x5a,2);
      SelSendAndKill(1,&DAT_10030478,0x5a,2);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030478,&DAT_10030410);
    if (0 < iVar3) {
      SetTrigg(0x1f,0);
      SelectUnits(&DAT_10030410,0);
      Patrol(1,&DAT_10030480,0);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (40000 < iVar3) {
      SetTrigg(0x16,0);
      SelectUnits(&DAT_10030408,0);
      SelSendAndKill(1,&DAT_10030468,0x5a,2);
      SelSendAndKill(1,&DAT_10030470,0x5a,2);
      SelSendAndKill(1,&DAT_10030478,0x5a,2);
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030478,&DAT_10030408);
    if (0 < iVar3) {
      SetTrigg(0x20,0);
      SelectUnits(&DAT_10030408,0);
      Patrol(1,&DAT_10030480,0);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (60000 < iVar3) {
      SetTrigg(0x17,0);
      SelectUnits(&DAT_10030420,0);
      SelSendAndKill(1,&DAT_10030468,0x5a,2);
      SelSendAndKill(1,&DAT_10030470,0x5a,2);
      SelSendAndKill(1,&DAT_10030480,0x5a,2);
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030480,&DAT_10030420);
    if (0 < iVar3) {
      SetTrigg(0x21,0);
      SelectUnits(&DAT_10030420,0);
      Patrol(1,&DAT_10030478,0);
    }
  }
  iVar3 = GetGlobalTime();
  if ((DAT_100303e4 * 5000 + 20000 < iVar3) && (DAT_100303e4 < 0x14)) {
    CreateObject0(((unsigned char *)&DAT_100304e8) + DAT_100303e4 * 8,((unsigned char *)&DAT_100304c8) + (DAT_100303e4 / 5) * 8,
                  &DAT_10030438,1,&DAT_100304a0,0);
    local_8 = ((unsigned char *)&DAT_100304e8) + DAT_100303e4 * 8;
    DAT_100303e4 = DAT_100303e4 + 1;
    SelectUnits(local_8,0);
    SelSendAndKill(1,&DAT_10030448,0,0);
  }
  for (DAT_100303e0 = 0; DAT_100303e0 < DAT_100303e4; DAT_100303e0 = DAT_100303e0 + 1) {
    GetTotalAmount0(((unsigned char *)&DAT_100304e8) + DAT_100303e0 * 8);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_10030448,0);
      if (iVar3 < 1) {
        iVar3 = GetUnitsAmount0(&DAT_10030440,0);
        if (iVar3 < 1) {
          iVar3 = GetUnitsAmount0(&DAT_10030458,0);
          if (0 < iVar3) {
            AttackEnemyInZone(((unsigned char *)&DAT_100304e8) + DAT_100303e0 * 8,&DAT_10030458,0);
          }
        }
        else {
          AttackEnemyInZone(((unsigned char *)&DAT_100304e8) + DAT_100303e0 * 8,&DAT_10030440,0);
        }
      }
      else {
        AttackEnemyInZone(((unsigned char *)&DAT_100304e8) + DAT_100303e0 * 8,&DAT_10030448,0);
      }
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (40000 < iVar3) {
      SetTrigg(0x2c,0);
      CreateObject0(&DAT_100304b8,&DAT_100304c8,&DAT_100303e8,2,&DAT_10030450,0);
      SelectUnits(&DAT_100304b8,0);
      SelSendAndKill(2,&DAT_10030458,0,0);
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030458,0);
    if (0 < iVar3) {
      GetTotalAmount0(&DAT_100304b8);
      if (0 < iVar3) {
        AttackEnemyInZone(&DAT_100304b8,&DAT_10030458,0);
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030488,0);
    if (0 < iVar3) {
      SetTrigg(0x18,0);
      SelectUnits(&DAT_10030428,0);
      SelSendAndKill(1,&DAT_10030488,0x5a,0);
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030488,&DAT_10030428);
    if (iVar3 != 0) {
      SetTrigg(0x22,0);
      SelectUnits(&DAT_10030428,0);
      Patrol(1,&DAT_10030490,0);
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030418);
    if (iVar3 == 0) {
      SetTrigg(0x19,0);
      ClearSelection(0);
      SelectUnits(&DAT_10030430,0);
      SelDie(0);
      ClearSelection(1);
      SelectUnits(&DAT_10030430,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (100000 < iVar3) {
      SetTrigg(3,0);
      ShowPage("#PAGE3");
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (150000 < iVar3) {
      SetTrigg(4,0);
      ShowPage("#PAGE4");
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (200000 < iVar3) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      LooseGame();
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_100303f0);
    if (iVar3 == 0) {
      SetTrigg(5,0);
      iVar3 = GetResource(0,3);
      if (iVar3 == 0) {
        ShowPage("#PAGE6A");
      }
      else {
        ShowPage("#PAGE6");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_100304c0);
    if (iVar3 == 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
      ShowVictory();
    }
  }
  local_8 = (int *)0x10002b9f;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
