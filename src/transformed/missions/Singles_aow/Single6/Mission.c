#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002b390[] = "Z3";
char DAT_1002b394[] = "Z2";
char DAT_1002b398[] = "G3";
char DAT_1002b39c[] = "G2";
char DAT_1002b3a0[] = "G1";
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
long long DAT_10030528 = 0;
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
  int uStack_8;
RegisterUnits(&DAT_10030560,DAT_1002b3a0);
  RegisterUnits(&DAT_10030568,DAT_1002b39c);
  RegisterUnits(&DAT_10030570,DAT_1002b398);
  RegisterZone(&DAT_10030578,DAT_1002b394);
  RegisterZone(&DAT_10030580,DAT_1002b390);
  RegisterUnitType(&DAT_10030428,"Center_Swesair(SV)");
  RegisterUnitType(&DAT_10030438,"Dom_Swisair(SV)");
  RegisterUnitType(&DAT_10030450,"Melnica(SV)");
  RegisterUnitType(&DAT_10030468,"Sclad1(SV)");
  RegisterUnitType(&DAT_10030480,"shahta(SV)");
  RegisterUnitType(&DAT_10030498,"Kuznica(SV)");
  RegisterUnitType(&DAT_100304b0,"Konushnia_Swesair(SV)");
  RegisterUnitType(&DAT_100304c8,"Kostel(SV)");
  RegisterUnitType(&DAT_100304e0,"akademia_E(SV)");
  RegisterUnitType(&DAT_100303e0,"Dip_korpus(SV)");
  RegisterUnitType(&DAT_100303e8,"Kazarma_evro(SV)");
  RegisterUnitType(&DAT_100303f0,"Kazarma(SV)");
  RegisterUnitType(&DAT_100303f8,"artileri_depo(SV)");
  RegisterUnitType(&DAT_10030400,"Rinok(SV)");
  RegisterUnitType(&DAT_10030410,"PorE(SV)");
  RegisterUnitType(&DAT_10030420,"Mortira_b(SV)");
  RegisterUnitType(&DAT_10030408,"Russki_Center(RU)");
  RegisterUnitType(&DAT_10030418,"ruskaia_izba(RU)");
  RegisterUnitType(&DAT_10030430,"Melnica_rus(RU)");
  RegisterUnitType(&DAT_10030448,"Sclad3(RU)");
  RegisterUnitType(&DAT_10030460,"shahta(RU)");
  RegisterUnitType(&DAT_10030478,"Kuznica(RU)");
  RegisterUnitType(&DAT_10030490,"konushnia(RU)");
  RegisterUnitType(&DAT_100304a8,"Cerkov_RU(RU)");
  RegisterUnitType(&DAT_100304c0,"akademia_RU(RU)");
  RegisterUnitType(&DAT_10030440,"Dip_korpus_RU(RU)");
  RegisterUnitType(&DAT_10030458,"Rus_Strel_Dom(RU)");
  RegisterUnitType(&DAT_10030470,"Kazarma(RU)");
  RegisterUnitType(&DAT_10030488,"artileri_depo(RU)");
  RegisterUnitType(&DAT_100304a0,"Rinok(RU)");
  RegisterUnitType(&DAT_100304b8,"PorR(RU)");
  RegisterUnitType(&DAT_100304d8,"Mortira_b(RU)");
  RegisterUnitType(&DAT_100304d0,"Center_Poland(PL)");
  RegisterUnitType(&DAT_100304e8,"Dom_Poland(PL)");
  RegisterUnitType(&DAT_100304f0,"Melnica(PL)");
  RegisterUnitType(&DAT_10030500,"Sclad2(PL)");
  RegisterUnitType(&DAT_10030510,"shahta(PL)");
  RegisterUnitType(&DAT_10030520,"Kuznica(PL)");
  RegisterUnitType(&DAT_10030530,"Konushnia_Swesair(PL)");
  RegisterUnitType(&DAT_10030540,"Cercov_Poland(PL)");
  RegisterUnitType(&DAT_10030550,"akademia_E(PL)");
  RegisterUnitType(&DAT_100304f8,"Dip_korpus(PL)");
  RegisterUnitType(&DAT_10030508,"Kazarma_evro(PL)");
  RegisterUnitType(&DAT_10030518,"Kazarma(PL)");
  RegisterUnitType(&DAT_10030528,"artileri_depo(PL)");
  RegisterUnitType(&DAT_10030538,"Rinok(PL)");
  RegisterUnitType(&DAT_10030548,"PorE(PL)");
  RegisterUnitType(&DAT_10030558,"Mortira_b(PL)");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(2,4);
  uStack_8 = 0x100016c3;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,(3 - iVar2) * 500 + 4000);
    iVar2 = GetDiff(0);
    SetResource(0,1,(3 - iVar2) * 500 + 4000);
    iVar2 = GetDiff(0);
    SetResource(0,4,(3 - iVar2) * 500 + 4000);
    iVar2 = GetDiff(0);
    SetResource(0,2,(3 - iVar2) * 500 + 4000);
    iVar2 = GetDiff(0);
    SetResource(0,0,(3 - iVar2) * 500 + 4000);
    iVar2 = GetDiff(0);
    SetResource(0,5,(3 - iVar2) * 500 + 4000);
    iVar2 = GetDiff(0);
    SetResource(1,3,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(1,1,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(1,4,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(1,2,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(1,0,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(1,5,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(2,3,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(2,1,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(2,4,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(2,2,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(2,0,iVar2 * 500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(2,5,iVar2 * 500 + 5000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(2,0);
    local_8 = AskMultilineQuestion(9,"#PAGE3",0,"An1_1|An1_2|An1_3");
    if (local_8 == 0) {
      SelectUnits1(0,&DAT_10030560,0);
      SelChangeNation(0,1);
      SelectUnits1(1,&DAT_10030570,0);
      SelChangeNation(1,0);
      SetStartPoint(&DAT_10030580);
      SelectUnits1(0,&DAT_10030570,0);
      EnableUnit(0,&DAT_100304d8,0);
      EnableUnit(0,&DAT_10030428,0);
      EnableUnit(0,&DAT_10030438,0);
      EnableUnit(0,&DAT_10030450,0);
      EnableUnit(0,&DAT_10030468,0);
      EnableUnit(0,&DAT_10030480,0);
      EnableUnit(0,&DAT_10030498,0);
      EnableUnit(0,&DAT_100304b0,0);
      EnableUnit(0,&DAT_100304c8,0);
      EnableUnit(0,&DAT_100304e0,0);
      EnableUnit(0,&DAT_100303e0,0);
      EnableUnit(0,&DAT_100303e8,0);
      EnableUnit(0,&DAT_100303f0,0);
      EnableUnit(0,&DAT_100303f8,0);
      EnableUnit(0,&DAT_10030400,0);
      EnableUnit(0,&DAT_10030410,0);
      EnableUnit(0,&DAT_10030420,0);
      EnableUnit(0,&DAT_100304d0,0);
      EnableUnit(0,&DAT_100304e8,0);
      EnableUnit(0,&DAT_100304f0,0);
      EnableUnit(0,&DAT_10030500,0);
      EnableUnit(0,&DAT_10030510,0);
      EnableUnit(0,&DAT_10030520,0);
      EnableUnit(0,&DAT_10030530,0);
      EnableUnit(0,&DAT_10030540,0);
      EnableUnit(0,&DAT_10030550,0);
      EnableUnit(0,&DAT_100304f8,1);
      EnableUnit(0,&DAT_10030508,0);
      EnableUnit(0,&DAT_10030518,0);
      EnableUnit(0,&DAT_10030528,0);
      EnableUnit(0,&DAT_10030538,0);
      EnableUnit(0,&DAT_10030548,0);
      EnableUnit(0,&DAT_10030558,0);
      StartAI(2,"POLAND.0",0,0,0,-1);
      StartAI(1,"SVEDEN.0",0,0,0,-1);
      SetPlayerName(2,"POLANDS");
      SetPlayerName(1,"SVEDES");
    }
    else if (local_8 == 1) {
      SelectUnits1(0,&DAT_10030560,0);
      SelChangeNation(0,2);
      SelectUnits1(2,&DAT_10030568,0);
      SelChangeNation(2,0);
      SetStartPoint(&DAT_10030578);
      SelectUnits1(0,&DAT_10030568,0);
      EnableUnit(0,&DAT_10030558,0);
      EnableUnit(0,&DAT_10030428,0);
      EnableUnit(0,&DAT_10030438,0);
      EnableUnit(0,&DAT_10030450,0);
      EnableUnit(0,&DAT_10030468,0);
      EnableUnit(0,&DAT_10030480,0);
      EnableUnit(0,&DAT_10030498,0);
      EnableUnit(0,&DAT_100304b0,0);
      EnableUnit(0,&DAT_100304c8,0);
      EnableUnit(0,&DAT_100304e0,0);
      EnableUnit(0,&DAT_100303e0,0);
      EnableUnit(0,&DAT_100303e8,0);
      EnableUnit(0,&DAT_100303f0,0);
      EnableUnit(0,&DAT_100303f8,0);
      EnableUnit(0,&DAT_10030400,0);
      EnableUnit(0,&DAT_10030410,0);
      EnableUnit(0,&DAT_10030420,0);
      EnableUnit(0,&DAT_10030408,0);
      EnableUnit(0,&DAT_10030418,0);
      EnableUnit(0,&DAT_10030430,0);
      EnableUnit(0,&DAT_10030448,0);
      EnableUnit(0,&DAT_10030460,0);
      EnableUnit(0,&DAT_10030478,0);
      EnableUnit(0,&DAT_10030490,0);
      EnableUnit(0,&DAT_100304a8,0);
      EnableUnit(0,&DAT_100304c0,0);
      EnableUnit(0,&DAT_10030440,1);
      EnableUnit(0,&DAT_10030458,0);
      EnableUnit(0,&DAT_10030470,0);
      EnableUnit(0,&DAT_10030488,0);
      EnableUnit(0,&DAT_100304a0,0);
      EnableUnit(0,&DAT_100304b8,0);
      EnableUnit(0,&DAT_100304d8,0);
      StartAI(1,"RUSSIA.0",0,0,0,-1);
      StartAI(2,"SVEDEN.0",0,0,0,-1);
      SetPlayerName(1,"RUSSIA");
      SetPlayerName(2,"SVEDES");
    }
    else if (local_8 == 2) {
      EnableUnit(0,&DAT_10030420,0);
      EnableUnit(0,&DAT_10030408,0);
      EnableUnit(0,&DAT_10030418,0);
      EnableUnit(0,&DAT_10030430,0);
      EnableUnit(0,&DAT_10030448,0);
      EnableUnit(0,&DAT_10030460,0);
      EnableUnit(0,&DAT_10030478,0);
      EnableUnit(0,&DAT_10030490,0);
      EnableUnit(0,&DAT_100304a8,0);
      EnableUnit(0,&DAT_100304c0,0);
      EnableUnit(0,&DAT_10030440,1);
      EnableUnit(0,&DAT_10030458,0);
      EnableUnit(0,&DAT_10030470,0);
      EnableUnit(0,&DAT_10030488,0);
      EnableUnit(0,&DAT_100304a0,0);
      EnableUnit(0,&DAT_100304b8,0);
      EnableUnit(0,&DAT_100304d8,0);
      EnableUnit(0,&DAT_100304d0,0);
      EnableUnit(0,&DAT_100304e8,0);
      EnableUnit(0,&DAT_100304f0,0);
      EnableUnit(0,&DAT_10030500,0);
      EnableUnit(0,&DAT_10030510,0);
      EnableUnit(0,&DAT_10030520,0);
      EnableUnit(0,&DAT_10030530,0);
      EnableUnit(0,&DAT_10030540,0);
      EnableUnit(0,&DAT_10030550,0);
      EnableUnit(0,&DAT_100304f8,1);
      EnableUnit(0,&DAT_10030508,0);
      EnableUnit(0,&DAT_10030518,0);
      EnableUnit(0,&DAT_10030528,0);
      EnableUnit(0,&DAT_10030538,0);
      EnableUnit(0,&DAT_10030548,0);
      EnableUnit(0,&DAT_10030558,0);
      StartAI(1,"RUSSIA.0",0,0,0,-1);
      StartAI(2,"POLAND.0",0,0,0,-1);
      SetPlayerName(1,"RUSSIA");
      SetPlayerName(2,"POLANDS");
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(99,0);
      ShowPage("#PAGE19");
      LooseGame();
    }
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(2);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(100,0);
        ShowPage("#PAGE20");
        ShowVictory();
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
