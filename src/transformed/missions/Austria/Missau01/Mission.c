#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_10006098[] = "Z13";
char DAT_1000609c[] = "Z12";
char DAT_100060a0[] = "Z11";
char DAT_100060a4[] = "Z10";
char DAT_100060a8[] = "Z9";
char DAT_100060ac[] = "Z8";
char DAT_100060b0[] = "Z7";
char DAT_100060b4[] = "Z6";
char DAT_100060b8[] = "Z5";
char DAT_100060bc[] = "Z4";
char DAT_100060c0[] = "Z3";
char DAT_100060c4[] = "Z2";
char DAT_100060c8[] = "Z1";
char DAT_100060cc[] = "G13";
char DAT_100060d0[] = "G12";
char DAT_100060d4[] = "G11";
char DAT_100060d8[] = "G10";
char DAT_100060dc[] = "G9";
char DAT_100060e0[] = "G8";
char DAT_100060e4[] = "G7";
char DAT_100060e8[] = "G6";
char DAT_100060ec[] = "G5";
char DAT_100060f0[] = "G4";
char DAT_100060f4[] = "G3";
char DAT_100060f8[] = "G2";
char DAT_100060fc[] = "G1";
long long DAT_100064c0 = 0;
long long DAT_100064c8 = 0;
long long DAT_100064d0 = 0;
long long DAT_100064d8 = 0;
long long DAT_100064e0 = 0;
long long DAT_100064e8 = 0;
long long DAT_100064f0 = 0;
long long DAT_100064f8 = 0;
long long DAT_10006500 = 0;
long long DAT_10006508 = 0;
long long DAT_10006510 = 0;
long long DAT_10006518 = 0;
long long DAT_10006520 = 0;
long long DAT_10006528 = 0;
long long DAT_10006530 = 0;
long long DAT_10006538 = 0;
long long DAT_10006540 = 0;
long long DAT_10006548 = 0;
long long DAT_10006550 = 0;
long long DAT_10006558 = 0;
long long DAT_10006560 = 0;
long long DAT_10006568 = 0;
long long DAT_10006570 = 0;
long long DAT_10006578 = 0;
long long DAT_10006580 = 0;
long long DAT_10006588 = 0;
long long DAT_10006598 = 0;
long long DAT_100065a8 = 0;
long long DAT_100065b0 = 0;
long long DAT_100065b8 = 0;
long long DAT_100065c0 = 0;
long long DAT_100065c8 = 0;
long long DAT_100065d0 = 0;
long long DAT_100065d8 = 0;
long long DAT_100065e0 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_100064c0,DAT_100060fc);
  RegisterUnits(&DAT_100064c8,DAT_100060f8);
  RegisterUnits(&DAT_100064d0,DAT_100060f4);
  RegisterUnits(&DAT_100064d8,DAT_100060f0);
  RegisterUnits(&DAT_100064e0,DAT_100060ec);
  RegisterUnits(&DAT_100064e8,DAT_100060e8);
  RegisterUnits(&DAT_100064f0,DAT_100060e4);
  RegisterUnits(&DAT_100064f8,DAT_100060e0);
  RegisterUnits(&DAT_10006500,DAT_100060dc);
  RegisterUnits(&DAT_10006520,DAT_100060d8);
  RegisterUnits(&DAT_10006528,DAT_100060d4);
  RegisterUnits(&DAT_10006538,DAT_100060d0);
  RegisterUnits(&DAT_10006540,DAT_100060cc);
  RegisterZone(&DAT_10006548,DAT_100060c8);
  RegisterZone(&DAT_10006550,DAT_100060c4);
  RegisterZone(&DAT_10006558,DAT_100060c0);
  RegisterZone(&DAT_10006560,DAT_100060bc);
  RegisterZone(&DAT_10006568,DAT_100060b8);
  RegisterZone(&DAT_10006570,DAT_100060b4);
  RegisterZone(&DAT_10006578,DAT_100060b0);
  RegisterZone(&DAT_10006580,DAT_100060ac);
  RegisterZone(&DAT_10006588,DAT_100060a8);
  RegisterZone(&DAT_100065c8,DAT_100060a4);
  RegisterZone(&DAT_100065d0,DAT_100060a0);
  RegisterZone(&DAT_100065d8,DAT_1000609c);
  RegisterZone(&DAT_100065e0,DAT_10006098);
  RegisterUnitType(&DAT_10006598,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_100065c0,"SUNDUK1O(UN)");
  RegisterUnitType(&DAT_100065b0,"SUNDUK2Z(UN)");
  RegisterUnitType(&DAT_100065b8,"SUNDUK2O(UN)");
  RegisterFormation(&DAT_100065a8,"#ALONE");
  ChangeFriends(0,0x15);
  ChangeFriends(1,0x22);
  ChangeFriends(2,0x26);
  ChangeFriends(4,0x15);
  ChangeFriends(5,0x22);
  SetPlayerName(1,"REBELS");
  SetPlayerName(2,"UNKNOWN");
  SetPlayerName(3,"BANDITS");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"REBELS");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  int iVar4;
  char *pcVar5;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    CreateObject0(&DAT_10006508,&DAT_100065a8,&DAT_10006598,4,&DAT_100065c8,0);
    CreateObject0(&DAT_10006510,&DAT_100065a8,&DAT_100065b0,4,&DAT_100065d8,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,(0xe - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,1,(8 - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,0,(7 - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,2,(7 - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,5,(8 - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,4,(8 - iVar2) * 500);
    ShowPage("#PAGE0");
    SelectUnits(&DAT_100064c8,0);
    SelSendTo(2,&DAT_10006548,0,0);
    SelectUnits(&DAT_10006500,0);
    SelSendTo(4,&DAT_10006588,0,0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetLightSpot(&DAT_10006580,2,1);
    }
    DisableMission(0x43);
    DisableMission(0x44);
  }
  cVar1 = Trigg(0x62);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_100064c0);
    if (iVar2 == 0) {
      SetTrigg(0x62,0);
      iVar2 = GetResource(0,3);
      if (iVar2 < 1) {
        pcVar5 = "#PAGE10A";
      }
      else {
        pcVar5 = "#PAGE10";
      }
      ShowPage(pcVar5);
      LooseGame();
    }
  }
  cVar1 = Trigg(0x61);
  if (cVar1 != '\0') {
    cVar1 = NationIsErased(1);
    if (cVar1 != '\0') {
      cVar1 = NationIsErased(5);
      if (cVar1 != '\0') {
        SetTrigg(0x61,0);
        ShowPage("#PAGE11");
        ShowVictory();
      }
    }
  }
  iVar2 = GetUnitsAmount1(&DAT_10006588,&DAT_10006500);
  if (0 < iVar2) {
    SelectUnits(&DAT_10006500,0);
    SelErase(4);
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_10006548,&DAT_100064c8);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_10006548,0);
      if (0 < iVar2) {
        SetTrigg(1,0);
        cVar1 = AskQuestion("#PAGE1");
        if (cVar1 != '\0') {
          SetTrigg(0x32,0);
          AddResource(0,1,-2000);
        }
        SelectUnits(&DAT_100064c8,0);
        SelSendTo(2,&DAT_10006550,0,0);
      }
    }
  }
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_10006550,&DAT_100064c0);
    if (0 < iVar2) {
      SetTrigg(2,0);
      cVar1 = Trigg(0x32);
      if (cVar1 == '\0') {
        ShowPage("#PAGE2A");
      }
      else {
        SelectUnits(&DAT_100064d0,0);
        SelChangeNation(2,5);
        ShowPage("#PAGE2");
      }
    }
  }
  cVar1 = Trigg(3);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_10006558,&DAT_100064c0);
    if (0 < iVar2) {
      SetTrigg(3,0);
      cVar1 = AskQuestion("#PAGE3");
      if (cVar1 == '\0') {
        ShowPage("#PAGE3B");
        SelectUnits(&DAT_100064d8,0);
        SelChangeNation(2,5);
      }
      else {
        ShowPage("#PAGE3A");
        AddResource(0,1,-200);
        SelectUnits(&DAT_100064d8,0);
        SelChangeNation(2,0);
      }
    }
  }
  cVar1 = Trigg(4);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_10006560,&DAT_100064c0);
    if (0 < iVar2) {
      SetTrigg(4,0);
      cVar1 = AskQuestion("#PAGE4");
      if (cVar1 != '\0') {
        SetTrigg(0x33,0);
        iVar2 = GetDiff(0);
        if (iVar2 == 0) {
          SetLightSpot(&DAT_10006578,1,2);
        }
      }
      AddResource(0,3,0x32);
    }
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_10006568,0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      SelectUnits(&DAT_100064e0,0);
      SelSendAndKill(4,&DAT_10006570,0xc0,0);
      SelectUnits(&DAT_100064f8,0);
      SelSendAndKill(5,&DAT_10006568,0x40,0);
    }
  }
  cVar1 = Trigg(6);
  if (cVar1 != '\0') {
    cVar1 = Trigg(0x33);
    if (cVar1 == '\0') {
      iVar2 = GetUnitsAmount1(&DAT_10006578,&DAT_100064c0);
      if (0 < iVar2) {
        SetTrigg(6,0);
        ShowPage("#PAGE5");
        AddResource(0,1,100);
        iVar2 = GetDiff(0);
        if (iVar2 == 0) {
          ClearLightSpot(2);
        }
      }
    }
  }
  cVar1 = Trigg(0xc);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_10006580,0);
    if (0 < iVar2) {
      SetTrigg(0xc,0);
      iVar2 = GetDiff(0);
      SetResource(1,3,(iVar2 + 10) * 500);
      iVar2 = GetDiff(0);
      SetResource(1,1,(iVar2 + 8) * 500);
      iVar2 = GetDiff(0);
      SetResource(1,0,(iVar2 + 8) * 500);
      iVar2 = GetDiff(0);
      SetResource(1,2,(iVar2 + 8) * 500);
      iVar2 = GetDiff(0);
      SetResource(1,5,(iVar2 + 8) * 500);
      iVar2 = GetDiff(0);
      SetResource(1,4,(iVar2 + 8) * 500);
      iVar2 = GetDiff(0);
      if (iVar2 < 1) {
        StartAI(1,"AUSTRIA.0",1,1,1,0);
      }
      else {
        iVar2 = GetDiff(0);
        StartAI(1,"AUSTRIA.0",1,1,1,iVar2 + -1);
      }
      iVar2 = GetDiff(0);
      SetResource(5,3,(iVar2 + 10) * 500);
      iVar2 = GetDiff(0);
      SetResource(5,1,(iVar2 + 8) * 500);
      iVar2 = GetDiff(0);
      SetResource(5,0,(iVar2 + 8) * 500);
      iVar2 = GetDiff(0);
      SetResource(5,2,(iVar2 + 8) * 500);
      iVar2 = GetDiff(0);
      SetResource(5,5,(iVar2 + 8) * 500);
      iVar2 = GetDiff(0);
      SetResource(5,4,(iVar2 + 8) * 500);
      uVar3 = GetDiff(0);
      StartAI(5,"AUSTRIA.0",1,1,1,uVar3);
    }
  }
  cVar1 = Trigg(7);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_10006580,&DAT_100064c0);
    if (0 < iVar2) {
      SetTrigg(7,0);
      ShowPage("#PAGE6");
      DisableMission(0x42);
      EnableMission(0x43);
      EnableMission(0x44);
      SelectUnits(&DAT_10006520,0);
      SelChangeNation(4,0);
      SelectUnits(&DAT_10006528,0);
      SelChangeNation(4,0);
      iVar2 = GetDiff(0);
      if (iVar2 == 0) {
        ClearLightSpot(1);
      }
    }
  }
  cVar1 = Trigg(7);
  if (cVar1 == '\0') {
    cVar1 = Trigg(8);
    if (cVar1 != '\0') {
      iVar2 = GetTotalAmount0(&DAT_100064e8);
      iVar4 = GetUnitsAmount1(&DAT_10006570,&DAT_100064e8);
      if (iVar4 == iVar2) {
        iVar2 = GetTotalAmount0(&DAT_100064e8);
        if (0 < iVar2) {
          SetTrigg(8,0);
          ShowPage("#PAGE7");
          iVar2 = GetTotalAmount0(&DAT_100064e8);
          AddResource(0,1,iVar2 * 0xfa);
          iVar2 = GetTotalAmount0(&DAT_100064e8);
          AddResource(0,5,iVar2 * 300);
          iVar2 = GetTotalAmount0(&DAT_100064e8);
          AddResource(0,4,iVar2 * 300);
          iVar2 = GetTotalAmount0(&DAT_100064e8);
          AddResource(0,0,iVar2 * 400);
          iVar2 = GetTotalAmount0(&DAT_100064e8);
          AddResource(0,2,iVar2 * 400);
          iVar2 = GetTotalAmount0(&DAT_100064e8);
          AddResource(0,3,iVar2 * 500);
          SelectUnits(&DAT_100064e8,0);
          SelErase(4);
          iVar2 = GetTotalAmount0(&DAT_100064f0);
          if (0 < iVar2) {
            SelectUnits(&DAT_100064e0,0);
            SelChangeNation(4,0);
          }
        }
      }
    }
  }
  cVar1 = Trigg(10);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_100065c8,0);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount1(&DAT_100065d0,&DAT_10006538);
      if (iVar2 == 0) {
        SetTrigg(10,0);
        iVar2 = GetDiff(0);
        ShowPageParam("#PAGE8",(6 - iVar2) * 500);
        iVar2 = GetDiff(0);
        AddResource(0,1,(6 - iVar2) * 500);
        ClearSelection(4);
        SelectUnits(&DAT_10006508,0);
        SelErase(4);
        CreateObject0(&DAT_10006518,&DAT_100065a8,&DAT_100065c0,4,&DAT_100065c8,0);
      }
    }
  }
  cVar1 = Trigg(0xb);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_100065d8,0);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount1(&DAT_100065e0,&DAT_10006540);
      if (iVar2 == 0) {
        SetTrigg(0xb,0);
        iVar2 = GetDiff(0);
        ShowPageParam("#PAGE9",(9 - iVar2) * 500);
        iVar2 = GetDiff(0);
        AddResource(0,1,(9 - iVar2) * 500);
        ClearSelection(4);
        SelectUnits(&DAT_10006510,0);
        SelErase(4);
        CreateObject0(&DAT_10006530,&DAT_100065a8,&DAT_100065b8,4,&DAT_100065d8,0);
      }
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
