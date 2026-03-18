#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
char DAT_1002b040[] = "cut";
char DAT_1002b044[] = "fang";
char DAT_1002b074[] = "raid";
char DAT_1002b088[] = "ban";
char DAT_1002b0c8[] = "plg";
char DAT_1002b0cc[] = "hero";
char DAT_1002b10c[] = "city";
long long DAT_100303e0 = 0;
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
int DAT_10030438 = 0;
int DAT_1003043c = 0;
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10030440,"talk1");
  RegisterZone(&DAT_10030448,"talk2");
  RegisterZone(&DAT_10030450,"talk3");
  RegisterZone(&DAT_10030458,"talkban");
  RegisterZone(&DAT_10030460,DAT_1002b10c);
  RegisterZone(&DAT_10030468,"market");
  RegisterZone(&DAT_10030470,"capturefleet");
  RegisterZone(&DAT_10030478,"escape");
  RegisterZone(&DAT_10030480,"light1");
  RegisterZone(&DAT_10030430,"light2");
  RegisterZone(&DAT_10030428,"light3");
  RegisterUnits(&DAT_100303e0,DAT_1002b0cc);
  RegisterUnits(&DAT_100303f0,DAT_1002b0c8);
  RegisterUnits(&DAT_100303e8,"guard1");
  RegisterUnits(&DAT_10030400,"guard2");
  RegisterUnits(&DAT_100303f8,"guard3");
  RegisterUnits(&DAT_10030410,"cannon1");
  RegisterUnits(&DAT_10030408,"cannon2");
  RegisterUnits(&DAT_10030420,"cannon3");
  RegisterUnits(&DAT_10030418,DAT_1002b088);
  RegisterUnits(&DAT_10030488,"haubica");
  RegisterUnits(&DAT_100304b8,DAT_1002b074);
  RegisterUnits(&DAT_100304c0,"citygate");
  RegisterUnits(&DAT_100304a8,"fleet");
  RegisterUnits(&DAT_100304b0,"enemyf");
  RegisterUnits(&DAT_10030498,"portguard");
  RegisterUnits(&DAT_100304a0,DAT_1002b044);
  RegisterUnits(&DAT_10030490,DAT_1002b040);
  ChangeFriends(5,0xff);
  ChangeFriends(7,0xff);
  SetPlayerName(1,"Enemy");
  SetPlayerName(5,"Englishmen");
  SetPlayerName(7,"England");
  uStack_8 = 0x10001442;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SetResource(0,3,50000);
    SetResource(0,1,100);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
    SetResource(1,3,999999999);
    SetResource(1,5,999999999);
    SetResource(1,4,999999999);
    SetResource(5,3,999999999);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1B");
    ShowPage("#PAGE1C");
    ShowPage("#PAGE1D");
    ShowPage("#PAGE1E");
    ShowPage("#PAGE1F");
    SelectUnits(&DAT_10030498,0);
    SetStandGround(1,1);
    SetLightSpot(&DAT_10030480,0,0);
    SetLightSpot(&DAT_10030430,0,1);
    SetLightSpot(&DAT_10030428,0,2);
    RunTimer(2,400);
    TakeWood(&DAT_10030490);
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE1G");
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100303e0);
    if (iVar2 == 0) {
      SetTrigg(2,0);
      ShowPage("#PAGE1A");
      LooseGame();
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030440,0);
    if (0 < iVar2) {
      SetTrigg(3,0);
      DAT_10030438 = AskMultilineQuestion (9,"#PAGE2",0, "Kenneth\'s orders are they? Tell you what gentlemen. I have no quarrel with thee per se. Leave now in peace, but this_ptr cannon of yours is going into the sea, one way or another.|You on Kenneth\'s playrole? How about you take this_ptr 60 coins and relax in a brothel for a day or two?|To hell with you." );
      if (DAT_10030438 == 0) {
        SetTrigg(4,0);
      }
      if (DAT_10030438 == 1) {
        iVar2 = GetResource(0,1);
        if (iVar2 < 0x3c) {
          ShowPage("#PAGE2D");
          SelectUnits(&DAT_10030410,0);
          SelectUnits(&DAT_100303e8,1);
          SelChangeNation(5,1);
        }
        else {
          ShowPage("#PAGE2B");
          SelectUnits(&DAT_10030410,0);
          SelChangeNation(5,1);
          SelectUnits(&DAT_100303e8,0);
          SelSendTo(5,&DAT_10030478,0,0);
          AddResource(0,1,0xffffffc4);
        }
      }
      if (DAT_10030438 == 2) {
        ShowPage("#PAGE2C");
        SelectUnits(&DAT_10030410,0);
        SelectUnits(&DAT_100303e8,1);
        SelChangeNation(5,1);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    SetTrigg(4,1);
    uVar1 = AskQuestion("#PAGE2A");
    if ((uVar1 & 0xff) == 0) {
      ShowPage("#PAGE2Ano");
      SelectUnits(&DAT_10030410,0);
      SelectUnits(&DAT_100303e8,1);
      SelChangeNation(5,1);
    }
    else {
      iVar2 = GetResource(0,1);
      if (iVar2 < 0x32) {
        SelectUnits(&DAT_10030410,0);
        SelectUnits(&DAT_100303e8,1);
        SelChangeNation(5,1);
      }
      else {
        ShowPage("#PAGE2B");
        SelectUnits(&DAT_10030410,0);
        SelChangeNation(5,1);
        SelectUnits(&DAT_100303e8,0);
        SelSendTo(5,&DAT_10030478,0,0);
        AddResource(0,1,0xffffffce);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsByNation(&DAT_10030410,0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      SelectUnits(&DAT_10030410,0);
      SelDie(0);
      ShowPage("#PAGE4");
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030448,0);
    if (0 < iVar2) {
      SetTrigg(6,0);
      SetTrigg(7,0);
      SelectUnits(&DAT_10030408,0);
      SelChangeNation(5,1);
      SelectUnits(&DAT_10030400,0);
      SelChangeNation(5,1);
      ShowPage("#PAGE5");
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) == 0) {
    AttackEnemyInZone(&DAT_10030400,&DAT_10030448,0);
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsByNation(&DAT_10030488,0);
    if (0 < iVar2) {
      SetTrigg(8,0);
      SelectUnits(&DAT_10030488,0);
      SelDie(0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsByNation(&DAT_10030408,0);
    if (0 < iVar2) {
      SetTrigg(9,0);
      SelectUnits(&DAT_10030408,0);
      SelDie(0);
      ShowPage("#PAGE6");
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030458,0);
    if (0 < iVar2) {
      SetTrigg(10,0);
      uVar1 = AskQuestion("#PAGE7");
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetResource(0,1);
        if (0x31 < iVar2) {
          SelectUnits(&DAT_10030418,0);
          SelChangeNation(5,0);
          AddResource(0,1,0xffffffce);
          ShowPage("#PAGE7yes");
          goto LAB_10002021;
        }
      }
      ShowPage("#PAGE7no");
    }
  }
LAB_10002021:
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030410);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount0(&DAT_10030408);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount0(&DAT_10030420);
        if (iVar2 == 0) {
          SetTrigg(0xb,0);
          ShowPage("#PAGE8");
        }
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030460,0);
      if (0 < iVar2) {
        SetTrigg(0xc,0);
        ShowPage("#PAGE9");
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030460,0);
      if (0 < iVar2) {
        SetTrigg(0xd,0);
        ShowPage("#PAGE10");
        SelectUnits(&DAT_100304c0,0);
        SelOpenGates(5);
        RunTimer(1,100);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE10A");
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0xe,0);
      AttackEnemyInZone(&DAT_100304b8,&DAT_10030448,0);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030468,0);
    if (0 < iVar2) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE11");
      AddResource(0,1,10000);
      AddResource(0,4,10000);
      AddResource(0,5,10000);
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030470,0);
    if (0 < iVar2) {
      SetTrigg(0x10,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030450,0);
    if (0 < iVar2) {
      SetTrigg(0x11,0);
      DAT_1003043c = AskMultilineQuestion (9,"#PAGE13",0, "I have no quarrel with you men. Out of my way! And leave the cannon behind.|Maybe you ought to take this_ptr 60 coins and take a relaxing walk.|To hell with you." );
      if (DAT_1003043c == 0) {
        ShowPage("#PAGE13A");
        SelectUnits(&DAT_100303f8,0);
        SelectUnits(&DAT_10030420,1);
        SelChangeNation(5,1);
        AttackEnemyInZone(&DAT_100303f8,&DAT_10030450,0);
      }
      if (DAT_1003043c == 1) {
        iVar2 = GetResource(0,1);
        if (iVar2 < 0x3c) {
          SelectUnits(&DAT_100303f8,0);
          SelectUnits(&DAT_10030420,1);
          SelChangeNation(5,1);
          AttackEnemyInZone(&DAT_100303f8,&DAT_10030450,0);
          ShowPage("#PAGE13C");
        }
        else {
          ShowPage("#PAGE13B");
          SelectUnits(&DAT_100303f8,0);
          SelSendTo(5,&DAT_10030478,0,0);
          SelectUnits(&DAT_10030420,0);
          SelChangeNation(5,1);
          AddResource(0,1,0xffffffc4);
        }
      }
      if (DAT_1003043c == 2) {
        SelectUnits(&DAT_100303f8,0);
        SelectUnits(&DAT_10030420,1);
        SelChangeNation(5,1);
        AttackEnemyInZone(&DAT_100303f8,&DAT_10030450,0);
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsByNation(&DAT_10030420,0);
    if (0 < iVar2) {
      SetTrigg(0x12,0);
      SelectUnits(&DAT_10030420,0);
      SelDie(0);
      ShowPage("#PAGE14");
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030498);
    if (iVar2 == 0) {
      SetTrigg(0x13,0);
      ShowPage("#PAGE15");
      SelectUnits(&DAT_100304a8,0);
      SelChangeNation(5,0);
      RunTimer(0,10);
    }
  }
  uVar1 = TimerDone(0);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_100304b0,0);
    SelAttackGroup(1,&DAT_100304a8);
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100304a0);
    if (iVar2 == 0) {
      ShowPage("#PAGE17");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100304b0);
    if (iVar2 == 0) {
      SetTrigg(0x14,0);
      ShowPage("#PAGE16");
      ShowVictory();
    }
  }
  uStack_8 = 0x100028f5;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
