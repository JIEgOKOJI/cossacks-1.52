#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_10008150 = 0;
char DAT_10009060[] = "Za8a";
char DAT_10009068[] = "Za6a";
char DAT_10009070[] = "Za5a";
char DAT_10009078[] = "Za3a";
char DAT_10009080[] = "Za1a";
char DAT_10009088[] = "Za15";
char DAT_10009090[] = "Za14";
char DAT_10009098[] = "Za13";
char DAT_100090a0[] = "Za12";
char DAT_100090a8[] = "Za11";
char DAT_100090b0[] = "Za10";
char DAT_100090b8[] = "Za9";
char DAT_100090bc[] = "Za8";
char DAT_100090c0[] = "Za7";
char DAT_100090c4[] = "Za6";
char DAT_100090c8[] = "Za5";
char DAT_100090cc[] = "Za4";
char DAT_100090d0[] = "Za3";
char DAT_100090d4[] = "Za2";
char DAT_100090d8[] = "Za1";
char DAT_100090dc[] = "Z4";
char DAT_100090e0[] = "Z3";
char DAT_100090e4[] = "Z2a";
char DAT_100090e8[] = "Z2";
char DAT_100090ec[] = "Z1a";
char DAT_100090f0[] = "Z1";
char DAT_1000910c[] = "Ga8a";
char DAT_10009114[] = "Ga6a";
char DAT_1000911c[] = "Ga5a";
char DAT_10009124[] = "Ga3a";
char DAT_1000912c[] = "Ga1a";
char DAT_10009134[] = "Ga15";
char DAT_1000913c[] = "Ga14";
char DAT_10009144[] = "Ga13";
char DAT_1000914c[] = "Ga12";
char DAT_10009154[] = "Ga11";
char DAT_1000915c[] = "Ga10";
char DAT_10009164[] = "Ga9";
char DAT_10009168[] = "Ga8";
char DAT_1000916c[] = "Ga7";
char DAT_10009170[] = "Ga6";
char DAT_10009174[] = "Ga5";
char DAT_10009178[] = "Ga4";
char DAT_1000917c[] = "Ga3";
char DAT_10009180[] = "Ga2";
char DAT_10009184[] = "Ga1";
char DAT_10009188[] = "G15a";
char DAT_10009190[] = "G15";
char DAT_10009194[] = "G14";
char DAT_10009198[] = "G13";
char DAT_1000919c[] = "G12";
char DAT_100091a0[] = "G11";
char DAT_100091a4[] = "G10";
char DAT_100091a8[] = "G9";
char DAT_100091ac[] = "G8";
char DAT_100091b0[] = "G7";
char DAT_100091b4[] = "G6";
char DAT_100091b8[] = "G5";
char DAT_100091bc[] = "G4";
char DAT_100091c0[] = "G3";
char DAT_100091c4[] = "G2";
char DAT_100091c8[] = "G1";
long long DAT_10009f70 = 0;
long long DAT_10009f78 = 0;
long long DAT_10009f80 = 0;
long long DAT_10009f88 = 0;
long long DAT_10009f90 = 0;
long long DAT_10009f98 = 0;
long long DAT_10009fa0 = 0;
long long DAT_10009fa8 = 0;
long long DAT_10009fb0 = 0;
long long DAT_10009fb8 = 0;
long long DAT_10009fc0 = 0;
long long DAT_10009fc8 = 0;
long long DAT_10009fd0 = 0;
long long DAT_10009fd8 = 0;
long long DAT_10009fe0 = 0;
long long DAT_10009fe8 = 0;
long long DAT_10009ff0 = 0;
long long DAT_10009ff8 = 0;
long long DAT_1000a000 = 0;
long long DAT_1000a008 = 0;
long long DAT_1000a010 = 0;
long long DAT_1000a018 = 0;
long long DAT_1000a020 = 0;
long long DAT_1000a028 = 0;
long long DAT_1000a030 = 0;
long long DAT_1000a038 = 0;
long long DAT_1000a040 = 0;
long long DAT_1000a048 = 0;
long long DAT_1000a050 = 0;
long long DAT_1000a058 = 0;
long long DAT_1000a060 = 0;
long long DAT_1000a068 = 0;
long long DAT_1000a070 = 0;
long long DAT_1000a078 = 0;
long long DAT_1000a080 = 0;
long long DAT_1000a088 = 0;
long long DAT_1000a090 = 0;
long long DAT_1000a098 = 0;
long long DAT_1000a0a0 = 0;
long long DAT_1000a0a8 = 0;
long long DAT_1000a0b0 = 0;
long long DAT_1000a0b8 = 0;
long long DAT_1000a0c0 = 0;
long long DAT_1000a0c8 = 0;
long long DAT_1000a0d0 = 0;
long long DAT_1000a0d8 = 0;
long long DAT_1000a0e0 = 0;
long long DAT_1000a0e8 = 0;
long long DAT_1000a0f0 = 0;
long long DAT_1000a0f8 = 0;
long long DAT_1000a100 = 0;
long long DAT_1000a108 = 0;
long long DAT_1000a110 = 0;
long long DAT_1000a118 = 0;
long long DAT_1000a120 = 0;
long long DAT_1000a128 = 0;
long long DAT_1000a130 = 0;
long long DAT_1000a138 = 0;
long long DAT_1000a140 = 0;
long long DAT_1000a148 = 0;
long long DAT_1000a150 = 0;
long long DAT_1000a158 = 0;
long long DAT_1000a160 = 0;
long long DAT_1000a168 = 0;
long long DAT_1000a170 = 0;
long long DAT_1000a178 = 0;
long long DAT_1000a180 = 0;
long long DAT_1000a188 = 0;
long long DAT_1000a190 = 0;
long long DAT_1000a198 = 0;
long long DAT_1000a1a8 = 0;
int DAT_10008150_ovl = 1717986918;
int DAT_1000a1a8_ovl = 0;

/* Stubs for missing internal functions */
int FUN_100029a9() { return 0; }
int FUN_100029f9() { return 0; }


/* Forward declarations */
void FUN_100027b0(void);
void FUN_100027c8(void);




void FUN_100027b0(void)

{
  void *extraout_ECX;
  
  FUN_100027c8();
  DAT_1000a1a8_ovl = FUN_100029f9();
  FUN_100029a9(extraout_ECX);
  return;
}





void FUN_100027c8(void)

{
  return;
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_10009fa0,DAT_100091c8);
  RegisterUnits(&DAT_10009fa8,DAT_100091c4);
  RegisterUnits(&DAT_10009fb0,DAT_100091c0);
  RegisterUnits(&DAT_10009fb8,DAT_100091bc);
  RegisterUnits(&DAT_10009fc0,DAT_100091b8);
  RegisterUnits(&DAT_10009fc8,DAT_100091b4);
  RegisterUnits(&DAT_10009fd0,DAT_100091b0);
  RegisterUnits(&DAT_10009fd8,DAT_100091ac);
  RegisterUnits(&DAT_10009fe0,DAT_100091a8);
  RegisterUnits(&DAT_10009ff0,DAT_100091a4);
  RegisterUnits(&DAT_10009ff8,DAT_100091a0);
  RegisterUnits(&DAT_1000a000,DAT_1000919c);
  RegisterUnits(&DAT_1000a008,DAT_10009198);
  RegisterUnits(&DAT_1000a010,DAT_10009194);
  RegisterUnits(&DAT_1000a018,DAT_10009190);
  RegisterUnits(&DAT_1000a118,DAT_10009188);
  RegisterUnits(&DAT_1000a098,DAT_10009184);
  RegisterUnits(&DAT_1000a0a0,DAT_10009180);
  RegisterUnits(&DAT_1000a0a8,DAT_1000917c);
  RegisterUnits(&DAT_1000a0b0,DAT_10009178);
  RegisterUnits(&DAT_1000a0b8,DAT_10009174);
  RegisterUnits(&DAT_1000a0c0,DAT_10009170);
  RegisterUnits(&DAT_1000a0c8,DAT_1000916c);
  RegisterUnits(&DAT_1000a0d0,DAT_10009168);
  RegisterUnits(&DAT_1000a0d8,DAT_10009164);
  RegisterUnits(&DAT_1000a040,DAT_1000915c);
  RegisterUnits(&DAT_1000a048,DAT_10009154);
  RegisterUnits(&DAT_1000a050,DAT_1000914c);
  RegisterUnits(&DAT_1000a058,DAT_10009144);
  RegisterUnits(&DAT_1000a060,DAT_1000913c);
  RegisterUnits(&DAT_1000a068,DAT_10009134);
  RegisterUnits(&DAT_1000a070,DAT_1000912c);
  RegisterUnits(&DAT_1000a078,DAT_10009124);
  RegisterUnits(&DAT_1000a080,DAT_1000911c);
  RegisterUnits(&DAT_1000a088,DAT_10009114);
  RegisterUnits(&DAT_1000a090,DAT_1000910c);
  RegisterUnits(&DAT_10009f70,"Ga10a");
  RegisterUnits(&DAT_10009f78,"Ga12a");
  RegisterUnits(&DAT_10009f80,"Ga13a");
  RegisterZone(&DAT_1000a020,DAT_100090f0);
  RegisterZone(&DAT_1000a120,DAT_100090ec);
  RegisterZone(&DAT_1000a028,DAT_100090e8);
  RegisterZone(&DAT_1000a130,DAT_100090e4);
  RegisterZone(&DAT_1000a030,DAT_100090e0);
  RegisterZone(&DAT_1000a038,DAT_100090dc);
  RegisterZone(&DAT_1000a150,DAT_100090d8);
  RegisterZone(&DAT_1000a158,DAT_100090d4);
  RegisterZone(&DAT_1000a160,DAT_100090d0);
  RegisterZone(&DAT_1000a168,DAT_100090cc);
  RegisterZone(&DAT_1000a170,DAT_100090c8);
  RegisterZone(&DAT_1000a178,DAT_100090c4);
  RegisterZone(&DAT_1000a180,DAT_100090c0);
  RegisterZone(&DAT_1000a188,DAT_100090bc);
  RegisterZone(&DAT_1000a190,DAT_100090b8);
  RegisterZone(&DAT_1000a0e0,DAT_100090b0);
  RegisterZone(&DAT_1000a0e8,DAT_100090a8);
  RegisterZone(&DAT_1000a0f0,DAT_100090a0);
  RegisterZone(&DAT_1000a0f8,DAT_10009098);
  RegisterZone(&DAT_1000a100,DAT_10009090);
  RegisterZone(&DAT_1000a108,DAT_10009088);
  RegisterZone(&DAT_1000a110,DAT_10009080);
  RegisterZone(&DAT_1000a128,DAT_10009078);
  RegisterZone(&DAT_1000a138,DAT_10009070);
  RegisterZone(&DAT_1000a140,DAT_10009068);
  RegisterZone(&DAT_1000a148,DAT_10009060);
  RegisterZone(&DAT_10009f88,"Za10a");
  RegisterZone(&DAT_10009f90,"Za12a");
  RegisterZone(&DAT_10009f98,"Za13a");
  RegisterVar(&DAT_1000a198,8);
  RegisterDynGroup(&DAT_10009fe8);
  SetPlayerName(1,"CHEHS");
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"REBELS");
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pcVar5;
  void *pcVar6;
  void *pcVar7;
  char *pcVar8;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SelectUnits(&DAT_1000a018,0);
      SelErase(1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SelectUnits(&DAT_1000a118,0);
      SelErase(1);
    }
    SetResource(0,3,200000);
    SetResource(0,1,200000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar2 = GetDiff(1);
    SetResource(0,5,(0xc - iVar2) * 500);
    iVar2 = GetDiff(1);
    SetResource(0,4,(0xc - iVar2) * 500);
    SetResource(1,3,200000);
    SetResource(1,1,200000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,500000);
    SetResource(1,4,500000);
    SetResource(4,3,200000);
    SetResource(4,1,200000);
    SetResource(4,0,0);
    SetResource(4,2,0);
    SetResource(4,5,500000);
    SetResource(4,4,500000);
    ShowPage("#PAGE0");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,5,100000);
      SetResource(0,4,100000);
    }
    else {
      ShowPage("#OTST1");
    }
    RunTimer(1,500);
    CreateZoneNearGroup(&DAT_1000a198,&DAT_1000a020,&DAT_10009fa0,1000);
    RunTimer(3,0x32);
  }
  cVar1 = TimerDoneFirst(1);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009fb8,0);
    SelSendTo(4,&DAT_1000a130,0xb4,0);
    SelSendTo(4,&DAT_1000a028,0xb4,2);
    SelSendTo(4,&DAT_1000a030,0,2);
    SetLightSpot(&DAT_1000a038,4,1);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000a030,&DAT_10009fb8), 10 < iVar2)) {
    SetTrigg(0x12,0);
    ShowPage("#PAGE1");
    SelectUnits(&DAT_10009fb8,0);
    SelChangeNation(4,0);
    ClearLightSpot(1);
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetResource(0,4), iVar2 < 0x46 || (iVar2 = GetResource(0,5), iVar2 < 0x73)))) {
    SetTrigg(1,0);
    iVar2 = GetTotalAmount0(&DAT_10009fa8);
    if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10009fb0), iVar2 < 1)) {
      pcVar8 = "#PAGE2A";
    }
    else {
      pcVar8 = "#PAGE2";
    }
    ShowPage(pcVar8);
  }
  cVar1 = Trigg(1);
  if ((cVar1 == '\0') && (cVar1 = Trigg(2), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10009fa8);
    iVar3 = GetUnitsAmount1(&DAT_1000a020,&DAT_10009fa8);
    if ((iVar3 == iVar2) &&
       ((iVar2 = GetTotalAmount0(&DAT_10009fa8), 0 < iVar2 &&
        (iVar2 = GetTotalAmount0(&DAT_10009fb0), 0 < iVar2)))) {
      SetTrigg(2,0);
      ShowPage("#PAGE3");
      iVar2 = GetDiff(1);
      RunTimer(2,iVar2 * 200 + 500);
    }
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10009fa8);
    iVar3 = GetUnitsAmount1(&DAT_1000a020,&DAT_10009fa8);
    if (iVar3 < iVar2) {
      SetTrigg(2,1);
      FreeTimer(2);
      ShowPage("#PAGE4");
    }
  }
  cVar1 = TimerDoneFirst(2);
  if (cVar1 != '\0') {
    ShowPage("#PAGE5");
    FreeTimer(2);
    SetTrigg(3,0);
  }
  cVar1 = Trigg(3);
  if (cVar1 == '\0') {
    iVar2 = GetTotalAmount0(&DAT_10009fa8);
    iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fa8);
    if ((iVar3 == iVar2) && (iVar2 = GetTotalAmount0(&DAT_10009fa8), 0 < iVar2)) {
      SetTrigg(1,1);
      SetTrigg(2,1);
      SetTrigg(3,1);
      ShowPage("#PAGE6");
      iVar2 = GetDiff(1);
      iVar3 = GetTotalAmount0(&DAT_10009fa8);
      AddResource(0,4,(6 - iVar2) * iVar3 * 200);
      iVar2 = GetDiff(1);
      iVar3 = GetTotalAmount0(&DAT_10009fa8);
      AddResource(0,5,(6 - iVar2) * iVar3 * 200);
    }
  }
  cVar1 = TimerDone(3);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(&DAT_1000a198,&DAT_1000a020,&DAT_10009fa0,1000);
    RunTimer(3,0x32);
  }
  iVar2 = GetDiff(0);
  if (0 < iVar2) {
    cVar1 = Trigg(10);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fc0), iVar2 < 0x1e)) {
      iVar2 = GetTotalAmount0(&DAT_10009fc0);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fc0);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(10,0);
        ShowPage("#PAGE7");
        ClearSelection(0);
        SelectUnits(&DAT_10009fc0,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fc0,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x14);
    if ((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fc0);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fc0);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + DAT_10008150_ovl) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x14,0);
        ShowPage("#PAGE8");
        ClearSelection(4);
        SelectUnits(&DAT_10009fc0,0);
        SelChangeNation(4,0);
      }
    }
    cVar1 = Trigg(0xb);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fc8), iVar2 < 0x5a)) {
      iVar2 = GetTotalAmount0(&DAT_10009fc8);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fc8);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(0xb,0);
        ShowPage("#PAGE9");
        ClearSelection(0);
        SelectUnits(&DAT_10009fc8,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fc8,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x15);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0xb), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fc8);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fc8);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + DAT_10008150_ovl) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x15,0);
        ShowPage("#PAGE10");
        ClearSelection(4);
        SelectUnits(&DAT_10009fc8,0);
        SelChangeNation(4,0);
      }
    }
    cVar1 = Trigg(0xc);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fd0), iVar2 < 100)) {
      iVar2 = GetTotalAmount0(&DAT_10009fd0);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fd0);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(0xc,0);
        ShowPage("#PAGE11");
        ClearSelection(0);
        SelectUnits(&DAT_10009fd0,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fd0,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x16);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0xc), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fd0);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fd0);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + DAT_10008150_ovl) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x16,0);
        ShowPage("#PAGE12");
        ClearSelection(4);
        SelectUnits(&DAT_10009fd0,0);
        SelChangeNation(4,0);
      }
    }
    cVar1 = Trigg(0xd);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fd8), iVar2 < 0x78)) {
      iVar2 = GetTotalAmount0(&DAT_10009fd8);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fd8);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(0xd,0);
        ShowPage("#PAGE13");
        ClearSelection(0);
        SelectUnits(&DAT_10009fd8,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fd8,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x17);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0xd), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fd8);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fd8);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + DAT_10008150_ovl) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x17,0);
        ShowPage("#PAGE14");
        ClearSelection(4);
        SelectUnits(&DAT_10009fd8,0);
        SelChangeNation(4,0);
      }
    }
    cVar1 = Trigg(0xe);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fe0), iVar2 < 0x32)) {
      iVar2 = GetTotalAmount0(&DAT_10009fe0);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fe0);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(0xe,0);
        ShowPage("#PAGE15");
        ClearSelection(0);
        SelectUnits(&DAT_10009fe0,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fe0,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x18);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0xe), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fe0);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fe0);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + DAT_10008150_ovl) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x18,0);
        ShowPage("#PAGE16");
        ClearSelection(4);
        SelectUnits(&DAT_10009fe0,0);
        SelChangeNation(4,0);
      }
    }
  }
  cVar1 = Trigg(0xf);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(1);
    iVar3 = GetTotalAmount0(&DAT_10009ff0);
    if (iVar3 < (3 - iVar2) * 10) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE17");
      ShowVictory();
    }
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fa0), iVar2 == 0)) {
    SetTrigg(0x10,0);
    ShowPage("#PAGE18");
    LooseGame();
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000a020,0), iVar2 < 0xb)) {
    SelectUnits(&DAT_10009ff8,0);
    SelSendTo(1,&DAT_1000a020,0,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10009fa8,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009fa8,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_10009fb0,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009fb0,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a008,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_1000a008,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a000,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10009fe8,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_1000a000,0);
    SelDie(0);
    SelectUnits(&DAT_10009fe8,0);
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_1000a010,0), iVar2 == 3)) {
    SetTrigg(0x13,0);
    ShowPage("#PAGE19");
    AddResource(0,3,10000);
    AddResource(0,1,200);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a098,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a070);
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a070,0);
      SelAttackGroup(1,&DAT_10009fa0);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a110,&DAT_1000a098);
    iVar3 = GetUnitsByNation(&DAT_1000a098,1);
    if (iVar2 < iVar3) {
      SelectUnits1(1,&DAT_1000a098);
      SelSendTo(1,&DAT_1000a110,0x50,0);
    }
    else {
      AttackEnemyInZone(&DAT_1000a098,&DAT_1000a150,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a0a0);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a158,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000a0a0,&DAT_1000a158,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a0a8,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a078);
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a078,0);
      SelAttackGroup(1,&DAT_10009fb0);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a128,&DAT_1000a0a8);
    iVar3 = GetUnitsByNation(&DAT_1000a0a8,1);
    if (iVar2 < iVar3) {
      SelectUnits1(1,&DAT_1000a0a8);
      SelSendTo(1,&DAT_1000a128,100,0);
    }
    else {
      AttackEnemyInZone(&DAT_1000a0a8,&DAT_1000a160,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a0b0);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a168,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000a0b0,&DAT_1000a168,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a0b8,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a080);
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a080,0);
      SelAttackGroup(1,&DAT_10009fc0);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a138,&DAT_1000a0b8);
    iVar3 = GetUnitsByNation(&DAT_1000a0b8,1);
    if (iVar2 < iVar3) {
      SelectUnits1(1,&DAT_1000a0b8);
      SelSendTo(1,&DAT_1000a138,100,0);
    }
    else {
      AttackEnemyInZone(&DAT_1000a0b8,&DAT_1000a170,0);
    }
  }
  iVar2 = GetUnitsByNation(&DAT_1000a0c0,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a088);
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a088,0);
      SelAttackGroup(1,&DAT_10009fc8);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a140,&DAT_1000a0c0);
    iVar3 = GetUnitsByNation(&DAT_1000a0c0,1);
    if (iVar2 < iVar3) {
      SelectUnits1(1,&DAT_1000a0c0);
      SelSendTo(1,&DAT_1000a140,100,0);
    }
    else {
      AttackEnemyInZone(&DAT_1000a0c0,&DAT_1000a178,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a0c8);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a180,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000a0c8,&DAT_1000a180,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a0d0,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a090);
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a090,0);
      SelAttackGroup(1,&DAT_10009fd8);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a148,&DAT_1000a0d0);
    iVar3 = GetUnitsByNation(&DAT_1000a0d0,1);
    if (iVar2 < iVar3) {
      SelectUnits1(1,&DAT_1000a0d0);
      SelSendTo(1,&DAT_1000a148,100,0);
    }
    else {
      AttackEnemyInZone(&DAT_1000a0d0,&DAT_1000a188,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a0d8);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a190,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000a0d8,&DAT_1000a190,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a040,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_10009f70);
    if (0 < iVar2) {
      SelectUnits(&DAT_10009f70,0);
      SelAttackGroup(1,&DAT_10009ff0);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_10009f88,&DAT_1000a040);
    iVar3 = GetUnitsByNation(&DAT_1000a040,1);
    if (iVar2 < iVar3) {
      SelectUnits1(1,&DAT_1000a040);
      SelSendTo(1,&DAT_10009f88,100,0);
    }
    else {
      AttackEnemyInZone(&DAT_1000a040,&DAT_1000a0e0,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a048);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a0e8,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000a048,&DAT_1000a0e8,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a050,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_10009f78);
    if (0 < iVar2) {
      SelectUnits(&DAT_10009f78,0);
      SelAttackGroup(1,&DAT_1000a000);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_10009f90,&DAT_1000a050);
    iVar3 = GetUnitsByNation(&DAT_1000a050,1);
    if (iVar2 < iVar3) {
      SelectUnits1(1,&DAT_1000a050);
      SelSendTo(1,&DAT_10009f90,0x50,0);
    }
    else {
      AttackEnemyInZone(&DAT_1000a050,&DAT_1000a0f0,0);
    }
  }
  iVar2 = GetUnitsByNation(&DAT_1000a058,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_10009f80);
    if (0 < iVar2) {
      SelectUnits(&DAT_10009f80,0);
      SelAttackGroup(1,&DAT_1000a008);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_10009f98,&DAT_1000a058);
    iVar3 = GetUnitsByNation(&DAT_1000a058,1);
    if (iVar2 < iVar3) {
      SelectUnits1(1,&DAT_1000a058);
      SelSendTo(1,&DAT_10009f98,0x50,0);
    }
    else {
      AttackEnemyInZone(&DAT_1000a058,&DAT_1000a0f8,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a060);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a100,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000a060,&DAT_1000a100,0);
  }
  iVar2 = GetTotalAmount0(&DAT_1000a068);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a108,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000a068,&DAT_1000a108,0);
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
