#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002a050[] = "Z6";
char DAT_1002a054[] = "Z5";
char DAT_1002a058[] = "Z4";
char DAT_1002a05c[] = "Z3";
char DAT_1002a060[] = "Z2";
char DAT_1002a064[] = "Z1";
char DAT_1002a0d4[] = "GKtu";
long long DAT_1002f3e0 = 0;
long long DAT_1002f3e8 = 0;
long long DAT_1002f3f0 = 0;
long long DAT_1002f3f8 = 0;
long long DAT_1002f400 = 0;
long long DAT_1002f408 = 0;
long long DAT_1002f410 = 0;
long long DAT_1002f418 = 0;
long long DAT_1002f420 = 0;
long long DAT_1002f428 = 0;
long long DAT_1002f430 = 0;
long long DAT_1002f438 = 0;
long long DAT_1002f440 = 0;
long long DAT_1002f448 = 0;
long long DAT_1002f450 = 0;
long long DAT_1002f458 = 0;
long long DAT_1002f460 = 0;
long long DAT_1002f468 = 0;
long long DAT_1002f470 = 0;
long long DAT_1002f478 = 0;
long long DAT_1002f480 = 0;
long long DAT_1002f488 = 0;
long long DAT_1002f490 = 0;
long long DAT_1002f498 = 0;
long long DAT_1002f4a0 = 0;
long long DAT_1002f4a8 = 0;
long long DAT_1002f4b0 = 0;
long long DAT_1002f4b8 = 0;
long long DAT_1002f4c0 = 0;
long long DAT_1002f4c8 = 0;
long long DAT_1002f4d0 = 0;
long long DAT_1002f4d8 = 0;
int DAT_1002f4e0 = 0;
int DAT_1002f4b8_ovl = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
SetPlayerName(1,"TURKEY");
  SetPlayerName(2,"PIEMOUNT");
  SetPlayerName(4,"DENMARK");
  SetPlayerName(7,"PIRATES");
  SetPlayerName(5,"NETHERLANDS");
  SetPlayerName(6,"TURKEY");
  RegisterVar(&DAT_1002f4e0,4);
  RegisterVar(&DAT_1002f4b8,4);
  RegisterUnits(&DAT_1002f408,"GGates1");
  RegisterUnits(&DAT_1002f3f0,"GGates2");
  RegisterUnits(&DAT_1002f400,"GGates3");
  RegisterUnits(&DAT_1002f410,"GGates5");
  RegisterUnits(&DAT_1002f4b0,"GCoal");
  RegisterUnits(&DAT_1002f4a0,DAT_1002a0d4);
  RegisterUnits(&DAT_1002f4a8,"GADepot");
  RegisterZone(&DAT_1002f418,"Zone1");
  RegisterZone(&DAT_1002f420,"Zone2");
  RegisterZone(&DAT_1002f428,"Zone3");
  RegisterZone(&DAT_1002f430,"Zone4");
  RegisterZone(&DAT_1002f438,"Zone5");
  RegisterZone(&DAT_1002f440,"Zone6");
  RegisterZone(&DAT_1002f448,"Zone7");
  RegisterZone(&DAT_1002f450,"Zone8");
  RegisterZone(&DAT_1002f458,"Zone9");
  RegisterZone(&DAT_1002f4c8,"Zone10");
  RegisterZone(&DAT_1002f4d0,"Zone11");
  RegisterZone(&DAT_1002f4d8,"Zone12");
  RegisterZone(&DAT_1002f468,DAT_1002a064);
  RegisterZone(&DAT_1002f470,DAT_1002a060);
  RegisterZone(&DAT_1002f478,DAT_1002a05c);
  RegisterZone(&DAT_1002f480,DAT_1002a058);
  RegisterZone(&DAT_1002f488,DAT_1002a054);
  RegisterZone(&DAT_1002f490,DAT_1002a050);
  RegisterUnitType(&DAT_1002f3e8,"Pushka(HO)");
  RegisterUnitType(&DAT_1002f3e0,"Mortira(HO)");
  RegisterUnitType(&DAT_1002f460,"GRUZ(UN)");
  RegisterFormation(&DAT_1002f4c0,"#ODIN");
  RegisterDynGroup(&DAT_1002f3f8);
  RegisterDynGroup(&DAT_1002f498);
  uStack_8 = 0x100014d7;
  return;
}







void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_1002f4e0 = GetDiff(0);
    DAT_1002f4b8_ovl = (DAT_1002f4e0 + 1) * 500;
    SetResource(0,3,DAT_1002f4e0 * -3000 + 10000);
    SetResource(0,1,DAT_1002f4e0 * -3000 + 10000);
    SetResource(0,0,DAT_1002f4e0 * -3000 + 10000);
    SetResource(0,2,DAT_1002f4e0 * -3000 + 10000);
    SetResource(0,5,DAT_1002f4e0 * -3000 + 10000);
    SetResource(0,4,DAT_1002f4e0 * -3000 + 10000);
    SetResource(1,3,3000);
    SetResource(1,1,3000);
    SetResource(1,0,3000);
    SetResource(1,2,3000);
    SetResource(1,5,3000);
    SetResource(1,4,3000);
    ChangeFriends(0,0x61);
    ChangeFriends(1,0x16);
    ChangeFriends(5,9);
    ChangeFriends(2,0x16);
    StartAI(1,"PIEMONT.0",1,0,0,DAT_1002f4e0);
    DisableMission(0x44);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
    SetTrigg(2,0);
    SetTrigg(3,0);
    SelectUnits(&DAT_1002f408,0);
    SelOpenGates(2);
    SelectUnits(&DAT_1002f3f0,0);
    SelOpenGates(4);
    SelectUnits(&DAT_1002f400,0);
    SelOpenGates(5);
    SetTrigg(99,0);
    SelectUnits(&DAT_1002f4b0,0);
    Patrol(4,&DAT_1002f458,0);
    ShowPage("#PAGE0");
    SetLightSpot(&DAT_1002f438,1,1);
    SelectUnits(&DAT_1002f4a0,0);
    SetDestPoint(&DAT_1002f4a8,&DAT_1002f420);
  }
  iVar2 = GetUnitsAmount0(&DAT_1002f420,5);
  if (0 < iVar2) {
    SelectUnitsInZone(&DAT_1002f420,5,0);
    SelChangeNation(5,0);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f418,&DAT_1002f4a0);
    if (0 < iVar2) {
      local_8 = AskMultilineQuestion(7,"#PAGE3",0,"FM4_1|FM4_2|FM_non");
      if (local_8 == 0) {
        iVar2 = GetResource(0,3);
        if (iVar2 < 0x44d) {
          ShowPage("#PAGE6");
        }
        else {
          AddResource(0,3,-1000);
          CreateObject0(&DAT_1002f3f8,&DAT_1002f4c0,&DAT_1002f460,0,&DAT_1002f418,0x94);
          SaveSelectedUnits(0,&DAT_1002f498,0);
          SelectUnits(&DAT_1002f3f8,0);
          SelSendTo(0,&DAT_1002f4c8,0x80,2);
          SelectUnits(&DAT_1002f498,0);
        }
      }
      else if (local_8 == 1) {
        iVar2 = GetResource(0,3);
        if (iVar2 < 0x44d) {
          ShowPage("#PAGE6");
        }
        else {
          AddResource(0,3,-1000);
          CreateObject0(&DAT_1002f3f8,&DAT_1002f4c0,&DAT_1002f460,0,&DAT_1002f418,0x94);
          SaveSelectedUnits(0,&DAT_1002f498,0);
          SelectUnits(&DAT_1002f3f8,0);
          SelSendTo(0,&DAT_1002f468,0x80,0);
          SelSendTo(0,&DAT_1002f470,0x80,2);
          SelSendTo(0,&DAT_1002f478,0x80,2);
          SelSendTo(0,&DAT_1002f480,0x80,2);
          SelSendTo(0,&DAT_1002f488,0x80,2);
          SelSendTo(0,&DAT_1002f490,0x80,2);
          SelSendTo(0,&DAT_1002f430,0x80,2);
          SelectUnits(&DAT_1002f498,0);
        }
      }
      else if (local_8 == 2) {
        SetTrigg(1,0);
      }
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f418,&DAT_1002f4a0);
    if (iVar2 == 0) {
      SetTrigg(1,0);
    }
  }
  iVar2 = GetUnitsAmount0(&DAT_1002f438,0);
  if (0 < iVar2) {
    SelectUnits(&DAT_1002f410,0);
    SelOpenGates(6);
    SaveSelectedUnits(0,&DAT_1002f498,0);
    SelectTypeOfUnitsInZone(&DAT_1002f438,&DAT_1002f460,0,0);
    SelChangeNation(0,6);
    SelectUnits(&DAT_1002f498,0);
    SelectUnitsInZone(&DAT_1002f438,6,0);
    SelSendTo(6,&DAT_1002f440,0,0);
    SelSendTo(6,&DAT_1002f440,0,0);
  }
  iVar2 = GetUnitsAmount0(&DAT_1002f438,0);
  if (iVar2 < 1) {
    iVar2 = GetUnitsAmount0(&DAT_1002f438,6);
    if (iVar2 < 1) {
      SelectUnits(&DAT_1002f410,0);
      SelCloseGates(6);
    }
  }
  iVar2 = GetUnitsAmount0(&DAT_1002f440,6);
  if (0 < iVar2) {
    SelectUnitsInZone(&DAT_1002f440,6,0);
    iVar2 = GetUnitsAmount0(&DAT_1002f440,6);
    AddResource(0,2,iVar2 * 1000);
    SelErase(6);
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f430,0);
    if (0 < iVar2) {
      SelectTypeOfUnitsInZone(&DAT_1002f430,&DAT_1002f460,0,0);
      SelChangeNation(0,5);
      SelectUnitsInZone(&DAT_1002f430,5,0);
      iVar2 = GetUnitsAmount0(&DAT_1002f430,5);
      AddResource(0,1,iVar2 * 100);
      SelErase(5);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount2(&DAT_1002f458,&DAT_1002f460,4);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount2(&DAT_1002f458,&DAT_1002f460,4);
      AddResource(1,5,iVar2 * 1000);
      SelectTypeOfUnitsInZone(&DAT_1002f458,&DAT_1002f460,4,0);
      SelChangeNation(4,2);
    }
  }
  iVar2 = GetUnitsAmount2(&DAT_1002f450,&DAT_1002f460,2);
  if (0 < iVar2) {
    SelectTypeOfUnitsInZone(&DAT_1002f450,&DAT_1002f460,2,0);
    SelChangeNation(2,4);
  }
  iVar2 = GetUnitsAmount0(&DAT_1002f4d0,0);
  if (10 < iVar2) {
    SelectUnitsInZone(&DAT_1002f4d0,7,0);
    SelSendAndKill(7,&DAT_1002f4d0,0,0);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f448,0);
    if (0 < iVar2) {
      ShowPage("#PAGE2");
      AddResource(0,1,10000);
      EnableMission(0x47);
      DisableMission(0x44);
      SetTrigg(4,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f4d8,0);
    if (1 < iVar2) {
      ShowPage("#PAGE1");
      EnableMission(0x44);
      SetTrigg(5,0);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(4);
    if ((uVar1 & 0xff) != 0) {
      EnableMission(0x48);
      DisableMission(0x45);
      SelectUnits(&DAT_1002f4b0,0);
      SelDie(4);
      ShowPage("#PAGE8");
      SetTrigg(0x16,0);
    }
  }
  uVar1 = NationIsErased(1);
  if ((uVar1 & 0xff) != 0) {
    ShowVictory();
  }
  uVar1 = NationIsErased(0);
  if ((uVar1 & 0xff) != 0) {
    LooseGame();
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount2(&DAT_1002f4c8,&DAT_1002f460,0);
    if (0 < iVar2) {
      ShowPage("#PAGE4");
      SetTrigg(9,0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount2(&DAT_1002f4c8,&DAT_1002f460,0);
    if (iVar2 == 0) {
      SetTrigg(9,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_1002f420,&DAT_1002f4a0);
      if (0 < iVar2) {
        local_c = AskMultilineQuestion(7,"#PAGE5",0,"FM4_3|FM4_4|FM_non");
        if (local_c == 0) {
          iVar2 = GetResource(0,1);
          if (500 < iVar2) {
            AddResource(0,1,-500);
            ProduceUnitFast(&DAT_1002f4a8,&DAT_1002f3e8,&DAT_1002f3f8,900);
          }
        }
        else if (local_c == 1) {
          iVar2 = GetResource(0,1);
          if (200 < iVar2) {
            AddResource(0,1,-200);
            ProduceUnitFast(&DAT_1002f4a8,&DAT_1002f3e0,&DAT_1002f3f8,900);
          }
        }
        else if (local_c == 2) {
          SetTrigg(10,0);
        }
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f420,&DAT_1002f4a0);
    if (iVar2 == 0) {
      SetTrigg(10,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f428,3);
    if (iVar2 < 1) {
      ShowPage("#PAGE7");
      EnableMission(0x46);
      DisableMission(0x43);
      SetTrigg(0xb,0);
    }
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
