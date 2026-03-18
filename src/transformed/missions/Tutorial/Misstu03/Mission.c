#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002b110[] = "#P17";
char DAT_1002b120[] = "#P16";
char DAT_1002b130[] = "#P15";
char DAT_1002b140[] = "#P14";
char DAT_1002b150[] = "#P13";
char DAT_1002b160[] = "#P12";
char DAT_1002b170[] = "#P11";
char DAT_1002b180[] = "#P10";
char DAT_1002b190[] = "#P9";
char DAT_1002b19c[] = "#P8";
char DAT_1002b1a8[] = "#P7";
char DAT_1002b1b4[] = "#P6";
char DAT_1002b1c0[] = "#P5";
char DAT_1002b1cc[] = "#P4";
char DAT_1002b1d8[] = "#P3";
char DAT_1002b1e4[] = "#P2";
char DAT_1002b1f8[] = "#P1";
char DAT_1002b204[] = "Q3";
long long DAT_100303e0 = 0;
long long DAT_100303e8 = 0;
long long DAT_100303f0 = 0;
long long DAT_100303f8 = 0;
long long DAT_10030408 = 0;
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
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_100303e8,"Group1");
  RegisterUnits(&DAT_100303f8,"Group2");
  RegisterUnits(&DAT_100303f0,"Group3");
  RegisterUnits(&DAT_10030408,"Group4");
  RegisterZone(&DAT_10030440,"Zone1");
  RegisterZone(&DAT_10030448,"Zone2");
  RegisterZone(&DAT_10030450,"Zone3");
  RegisterZone(&DAT_10030458,"Zone4");
  RegisterZone(&DAT_10030460,"Zone5");
  RegisterZone(&DAT_10030468,"Zone6");
  RegisterZone(&DAT_10030470,"Zone7");
  RegisterZone(&DAT_10030478,"Zone8");
  RegisterZone(&DAT_10030480,"Zone9");
  RegisterZone(&DAT_10030420,"Zone10");
  RegisterZone(&DAT_10030418,"Zone11");
  RegisterZone(&DAT_10030430,"Zone12");
  RegisterZone(&DAT_10030428,"Zone13");
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  RegisterVar(&DAT_100304a0,8);
  RegisterVar(&DAT_100304e0,8);
  RegisterVar(&DAT_100304e8,8);
  RegisterVar(&DAT_100304c8,8);
  RegisterVar(&DAT_100304d8,8);
  RegisterVar(&DAT_100304b8,8);
  RegisterVar(&DAT_100304c0,8);
  RegisterVar(&DAT_100304a8,8);
  RegisterVar(&DAT_100304b0,8);
  RegisterVar(&DAT_100304f0,8);
  RegisterVar(&DAT_100304d0,8);
  RegisterUnitType(&DAT_100303e0,"Yahta(au)");
  RegisterUnitType(&DAT_10030488,"GALERA(AU)");
  RegisterUnitType(&DAT_10030438,"Fregat(AU)");
  RegisterUnitType(&DAT_100304f8,"Linkor(au)");
  RegisterFormation(&DAT_10030498,"#SHIPS12");
  RegisterFormation(&DAT_10030490,"#SHIPS5");
  SetPlayerName(1,"ENEMY");
  SetPlayerName(4,"ALLIES");
  uStack_8 = 0x100014aa;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
SetTutorial(1);
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SetTrigg(0x41,0);
    AskComplexQuestion(8,DAT_1002b1f8,0,"#P1_1",0,DAT_1002b204);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x41);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      SetTrigg(0x41,0);
      iVar2 = AskComplexQuestion(8,DAT_1002b1e4,0,"#P2_1",0,"Q1|Q2");
      if (iVar2 == 0) {
        SetTrigg(0x42,0);
        SetTrigg(0x34,0);
        SetStartPoint(&DAT_10030440);
        CreateObject0(&DAT_100304a0,&DAT_10030498,&DAT_100303e0,0,&DAT_10030440,0);
        SelectUnits(&DAT_100303e8,0);
        SelSendAndKill(1,&DAT_10030440,0,0);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(3,0);
        SetTrigg(0x41,0);
        iVar2 = AskComplexQuestion(8,DAT_1002b1d8,0,"#P3_1",0,"Q1|Q2");
        if (iVar2 == 0) {
          SetTrigg(0x42,0);
          SetTrigg(0x35,0);
          SetStartPoint(&DAT_10030448);
          CreateObject0(&DAT_100304e0,&DAT_10030498,&DAT_10030488,0,&DAT_10030448,0);
          CreateObject0(&DAT_100304e8,&DAT_10030490,&DAT_10030438,1,&DAT_10030450,0);
          SelectUnits(&DAT_100304e8,0);
          SelSendAndKill(1,&DAT_10030448,0,0);
        }
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(4,0);
        SetTrigg(0x41,0);
        iVar2 = AskComplexQuestion(8,DAT_1002b1cc,0,"#P4_1",0,"Q1|Q2");
        if (iVar2 == 0) {
          SetTrigg(0x42,0);
          SetTrigg(0x36,0);
          SetStartPoint(&DAT_10030468);
          CreateObject0(&DAT_100304c8,&DAT_10030498,&DAT_10030438,0,&DAT_10030468,0);
          CreateObject0(&DAT_100304d8,&DAT_10030498,&DAT_10030488,0,&DAT_10030470,0);
          CreateObject0(&DAT_100304b8,&DAT_10030498,&DAT_10030438,1,&DAT_10030478,0);
          SelectUnits(&DAT_100304b8,0);
          SelSendAndKill(1,&DAT_10030468,0,0);
        }
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(5,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b1c0,0,"#P5_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(6,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b1b4,0,"#P6_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(7,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b1a8,0,"#P7_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(8,0);
        SetTrigg(0x41,0);
        iVar2 = AskComplexQuestion(8,DAT_1002b19c,0,"#P8_1",0,"Q1|Q2");
        if (iVar2 == 0) {
          SetTrigg(0x42,0);
          SetTrigg(0x37,0);
          SetStartPoint(&DAT_10030420);
          CreateObject0(&DAT_100304c0,&DAT_10030498,&DAT_10030438,0,&DAT_10030420,0);
          CreateObject0(&DAT_100304a8,&DAT_10030498,&DAT_10030488,0,&DAT_10030418,0);
          CreateObject0(&DAT_100304b0,&DAT_10030498,&DAT_100304f8,0,&DAT_10030480,0);
          CreateObject0(&DAT_100304f0,&DAT_10030498,&DAT_10030438,1,&DAT_10030430,0);
          CreateObject0(&DAT_100304d0,&DAT_10030498,&DAT_10030488,1,&DAT_10030428,0);
          SelectUnits(&DAT_100304f0,0);
          SelectUnits(&DAT_100304d0,1);
          SelSendAndKill(1,&DAT_10030420,0,0);
        }
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(9,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b190,0,"#P9_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(10,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b180,0,"#P10_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xb,0);
        SetTrigg(0x41,0);
        iVar2 = AskComplexQuestion(8,DAT_1002b170,0,"#P11_1",0,"Q1|Q2");
        if (iVar2 == 0) {
          SetTrigg(0x42,0);
          SetStartPoint(&DAT_10030458);
          SelectUnits(&DAT_100303f8,0);
          SelChangeNation(4,0);
        }
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xc,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b160,0,"#P12_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xd,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b150,0,"#P13_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xe,0);
        SetTrigg(0x41,0);
        iVar2 = AskComplexQuestion(8,DAT_1002b140,0,"#P14_1",0,"Q1|Q2");
        if (iVar2 == 0) {
          SetTrigg(0x42,0);
          SetStartPoint(&DAT_10030460);
          SelectUnits(&DAT_100303f0,0);
          SelChangeNation(4,0);
          SelectUnits(&DAT_10030408,0);
          SelChangeNation(4,0);
        }
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xf,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b130,0,"#P15_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x10,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b120,0,"#P16_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x41);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x11,0);
        SetTrigg(0x41,0);
        AskComplexQuestion(8,DAT_1002b110,0,"#P17_1",0,DAT_1002b204);
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x41);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x12,0);
          SetTrigg(0x41,0);
          ShowPage("#PAGE0");
          ShowVictory();
        }
      }
    }
  }
  uVar1 = GetQuestPressed();
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x42,1);
    GetTotalAmount0(&DAT_100303e8);
    if (0 < iVar2) {
      SelectUnits(&DAT_100303e8,0);
      SelErase(1);
    }
    uVar1 = Trigg(0x34);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x34,0);
      ClearSelection(0);
      SelectUnits(&DAT_100304a0,0);
      SelErase(0);
    }
    uVar1 = Trigg(0x35);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x35,0);
      ClearSelection(0);
      SelectUnits(&DAT_100304e0,0);
      SelErase(0);
      ClearSelection(1);
      SelectUnits(&DAT_100304e8,0);
      SelErase(1);
    }
    uVar1 = Trigg(0x36);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x36,0);
      ClearSelection(0);
      SelectUnits(&DAT_100304c8,0);
      SelectUnits(&DAT_100304d8,1);
      SelErase(0);
      ClearSelection(1);
      SelectUnits(&DAT_100304b8,0);
      SelErase(1);
    }
    uVar1 = Trigg(0x37);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x37,0);
      ClearSelection(0);
      SelectUnits(&DAT_100304c0,0);
      SelectUnits(&DAT_100304a8,1);
      SelectUnits(&DAT_100304b0,1);
      SelErase(0);
      ClearSelection(1);
      SelectUnits(&DAT_100304f0,0);
      SelectUnits(&DAT_100304d0,1);
      SelErase(1);
    }
  }
  SetTrigg(0x41,1);
  uStack_8 = 0x10002a8d;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
