#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10007074[] = "Zzz1";
char DAT_1000709c[] = "Zvih";
char DAT_100070ac[] = "Zzab";
char DAT_100070b4[] = "Zv1";
char DAT_100071dc[] = "Z1_1";
char DAT_100071e4[] = "Z1";
char DAT_100071e8[] = "Gg2";
char DAT_100071ec[] = "Gg1";
char DAT_1000726c[] = "Gdom";
char DAT_10007274[] = "Gv1";
long long DAT_100079d0 = 0;
long long DAT_100079d8 = 0;
long long DAT_100079e0 = 0;
long long DAT_100079e8 = 0;
long long DAT_100079f0 = 0;
long long DAT_100079f8 = 0;
long long DAT_10007a00 = 0;
long long DAT_10007a08 = 0;
long long DAT_10007a10 = 0;
long long DAT_10007a18 = 0;
long long DAT_10007a20 = 0;
long long DAT_10007a28 = 0;
long long DAT_10007a30 = 0;
long long DAT_10007a38 = 0;
long long DAT_10007a40 = 0;
long long DAT_10007a48 = 0;
long long DAT_10007a50 = 0;
long long DAT_10007a58 = 0;
long long DAT_10007a60 = 0;
long long DAT_10007a68 = 0;
long long DAT_10007a70 = 0;
long long DAT_10007a78 = 0;
long long DAT_10007a80 = 0;
long long DAT_10007a88 = 0;
long long DAT_10007a90 = 0;
long long DAT_10007a98 = 0;
long long DAT_10007aa0 = 0;
long long DAT_10007aa8 = 0;
long long DAT_10007ab0 = 0;
long long DAT_10007ab8 = 0;
long long DAT_10007ac0 = 0;
long long DAT_10007ac8 = 0;
long long DAT_10007ad0 = 0;
long long DAT_10007ad8 = 0;
long long DAT_10007ae0 = 0;
long long DAT_10007ae8 = 0;
long long DAT_10007af0 = 0;
long long DAT_10007af8 = 0;
long long DAT_10007b00 = 0;
long long DAT_10007b08 = 0;
long long DAT_10007b10 = 0;
long long DAT_10007b18 = 0;
long long DAT_10007b20 = 0;
long long DAT_10007b28 = 0;
long long DAT_10007b30 = 0;
long long DAT_10007b38 = 0;
long long DAT_10007b40 = 0;
long long DAT_10007b48 = 0;
long long DAT_10007b50 = 0;
long long DAT_10007b58 = 0;
long long DAT_10007b60 = 0;
long long DAT_10007b68 = 0;
long long DAT_10007b70 = 0;
long long DAT_10007b78 = 0;
long long DAT_10007b80 = 0;
long long DAT_10007b88 = 0;
long long DAT_10007b90 = 0;
long long DAT_10007b98 = 0;
long long DAT_10007ba0 = 0;
long long DAT_10007ba8 = 0;
long long DAT_10007bb0 = 0;
long long DAT_10007bb8 = 0;
long long DAT_10007bc0 = 0;
long long DAT_10007bc8 = 0;
long long DAT_10007bd0 = 0;
long long DAT_10007bd8 = 0;
long long DAT_10007be0 = 0;
long long DAT_10007be8 = 0;
long long DAT_10007bf0 = 0;
long long DAT_10007bf8 = 0;
long long DAT_10007c00 = 0;
long long DAT_10007c08 = 0;
long long DAT_10007c10 = 0;
long long DAT_10007c18 = 0;
long long DAT_10007c20 = 0;
long long DAT_10007c28 = 0;
long long DAT_10007c30 = 0;
long long DAT_10007c38 = 0;
long long DAT_10007c40 = 0;
long long DAT_10007c48 = 0;
long long DAT_10007c50 = 0;
long long DAT_10007c58 = 0;
long long DAT_10007c60 = 0;
long long DAT_10007c68 = 0;
long long DAT_10007c70 = 0;
long long DAT_10007c78 = 0;
long long DAT_10007c80 = 0;
long long DAT_10007c88 = 0;
long long DAT_10007c90 = 0;
long long DAT_10007c98 = 0;
long long DAT_10007ca0 = 0;
long long DAT_10007ca8 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10007b60,"Gkomandir");
  RegisterUnits(&DAT_10007ca0,"Gkomandirsel");
  RegisterUnits(&DAT_10007a78,"Goboz");
  RegisterUnits(&DAT_10007c48,"Goboz1");
  RegisterUnits(&DAT_10007c40,"Goboz2");
  RegisterUnits(&DAT_100079f8,"Gotryd");
  RegisterUnits(&DAT_10007be8,"Gotrydrund1");
  RegisterUnits(&DAT_10007be0,"Gotrydrund2");
  RegisterUnits(&DAT_10007bd8,"Gotrydrund4");
  RegisterUnits(&DAT_10007c18,"Gotrydmushk1");
  RegisterUnits(&DAT_10007c10,"Gotrydmushk2");
  RegisterUnits(&DAT_100079d0,"Gotrydkroat2");
  RegisterUnits(&DAT_10007c70,"Gotrydcanon3");
  RegisterUnits(&DAT_100079e0,"Gotrydkroat4");
  RegisterUnits(&DAT_10007b38,"Gotrydrider1");
  RegisterUnits(&DAT_10007bb0,"Gvorotavh");
  RegisterUnits(&DAT_10007b10,"Gvorotavih");
  RegisterUnits(&DAT_10007c68,"Gotryddrag");
  RegisterUnits(&DAT_10007ac8,"Gkrestston");
  RegisterUnits(&DAT_10007a48,"Gkrestwood");
  RegisterUnits(&DAT_10007c80,"Grazbspah");
  RegisterUnits(&DAT_10007a10,"Grazbstr1");
  RegisterUnits(&DAT_10007a08,"Grazbstr2");
  RegisterUnits(&DAT_10007a20,"Grazbstr3");
  RegisterUnits(&DAT_10007a18,"Grazbstr4");
  RegisterUnits(&DAT_10007ca8,"Gpikiner");
  RegisterUnits(&DAT_10007c90,"Gkomandirrazb");
  RegisterUnits(&DAT_10007b20,"Gfregat");
  RegisterUnits(&DAT_10007ad0,"Gperes");
  RegisterUnits(&DAT_10007b80,"Gmushk1");
  RegisterUnits(&DAT_100079d8,"Gpikiner1");
  RegisterUnits(&DAT_10007bc0,"Ggaub1");
  RegisterUnits(&DAT_10007b58,"Gcanons");
  RegisterUnits(&DAT_10007a60,"Gcanons1");
  RegisterUnits(&DAT_10007bd0,DAT_10007274);
  RegisterUnits(&DAT_10007c38,DAT_1000726c);
  RegisterUnits(&DAT_10007a28,"Gpatr1");
  RegisterUnits(&DAT_10007a38,"Gpatr2");
  RegisterUnits(&DAT_10007b70,"Gport");
  RegisterUnits(&DAT_10007b48,"Gotrydrider2");
  RegisterUnits(&DAT_10007b00,"Gcanon2");
  RegisterUnits(&DAT_10007c58,"Gzab1");
  RegisterUnits(&DAT_10007c60,"Gzab2");
  RegisterUnits(&DAT_10007af8,"Gpandur");
  RegisterUnits(&DAT_10007b28,"Gsklad");
  RegisterUnits(&DAT_10007bb8,"Geger");
  RegisterUnits(&DAT_10007a50,"Gohrforta");
  RegisterUnits(&DAT_10007b40,"Gvsyohr");
  RegisterUnits(&DAT_10007a30,"Gpatr3");
  RegisterUnits(&DAT_10007c88,"Gzdan");
  RegisterUnits(&DAT_10007b90,DAT_100071ec);
  RegisterUnits(&DAT_10007b98,DAT_100071e8);
  RegisterZone(&DAT_10007b18,DAT_100071e4);
  RegisterZone(&DAT_10007a00,DAT_100071dc);
  RegisterZone(&DAT_10007b68,"Z1_1_1");
  RegisterZone(&DAT_10007c30,"Zvozlesel1");
  RegisterZone(&DAT_10007c08,"Zattackcanon");
  RegisterZone(&DAT_10007a68,"Zperedsel");
  RegisterZone(&DAT_10007ba8,"Zposlesela");
  RegisterZone(&DAT_10007b08,"Zushely1");
  RegisterZone(&DAT_10007bf0,"Zushely1_1");
  RegisterZone(&DAT_10007a98,"Zrazbstr1");
  RegisterZone(&DAT_10007aa0,"Zrazbstr2");
  RegisterZone(&DAT_10007a88,"Zrazbstr3");
  RegisterZone(&DAT_10007a90,"Zrazbstr4");
  RegisterZone(&DAT_10007c00,"Zeger");
  RegisterZone(&DAT_10007ae8,"Zpoyvlstr1_1");
  RegisterZone(&DAT_10007ad8,"Zpoyvlstr2_2");
  RegisterZone(&DAT_10007a58,"Zpoyvlstr");
  RegisterZone(&DAT_10007b30,"Zpoyvlstr1");
  RegisterZone(&DAT_100079e8,"Zpikiner");
  RegisterZone(&DAT_10007b88,"Zkomandirrazb");
  RegisterZone(&DAT_10007c78,"Zkomandirsel");
  RegisterZone(&DAT_10007c28,"Zdrag");
  RegisterZone(&DAT_10007bc8,"Zotrydkroat4");
  RegisterZone(&DAT_10007bf8,"Zcanons");
  RegisterZone(&DAT_10007ae0,"Zcanons1");
  RegisterZone(&DAT_10007a80,"Zsklada");
  RegisterZone(&DAT_10007c98,DAT_100070b4);
  RegisterZone(&DAT_10007ac0,DAT_100070ac);
  RegisterZone(&DAT_10007ba0,"Zcanon2");
  RegisterZone(&DAT_10007ab0,DAT_1000709c);
  RegisterZone(&DAT_10007c50,"Zeger1");
  RegisterZone(&DAT_10007b50,"Zperedfortom");
  RegisterZone(&DAT_10007b78,"Zpatr3");
  RegisterZone(&DAT_10007af0,DAT_10007074);
  RegisterUnitType(&DAT_10007ab8,"Ianithar(TU)");
  RegisterFormation(&DAT_100079f0,"#LINE25PUS");
  RegisterVar(&DAT_10007aa8,8);
  RegisterUnitType(&DAT_10007a40,"Ianithar(TU)");
  RegisterFormation(&DAT_10007c20,"#LINE25PUS");
  RegisterVar(&DAT_10007a70,8);
  SetPlayerName(1,"AUSTRIANS");
  SetPlayerName(2,"DWELLERS");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"ROBBERS");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pcVar4;
  void *pcVar5;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    SetTrigg(0xf,0);
    SetResource(1,3,5000000);
    SetResource(1,1,1000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,300000);
    SetResource(1,4,300000);
    SetResource(2,3,50000);
    SetResource(2,1,10000);
    SetResource(2,0,0);
    SetResource(2,2,0);
    SetResource(2,5,30000);
    SetResource(2,4,30000);
    SetResource(5,3,50000);
    SetResource(5,1,10000);
    SetResource(5,0,0);
    SetResource(5,2,0);
    SetResource(5,5,30000);
    SetResource(5,4,30000);
    SelectUnits(&DAT_10007b10,0);
    SelOpenGates(2);
    TakeWood(&DAT_10007a48);
    TakeStone(&DAT_10007ac8);
    ChangeFriends(0,0x15);
    ChangeFriends(1,2);
    ChangeFriends(2,0x27);
    ShowPage("#PAGE1");
    InitialUpgrade("Gpandur","AKA17AU");
    InitialUpgrade("Gpandur","AKA20AU");
    InitialUpgrade("Gotryd","AKA31GE");
    InitialUpgrade("Gotryd","AKA33GE");
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
  }
  cVar1 = Trigg(0x2b);
  if ((cVar1 != '\0') && (iVar2 = GetDiff(0), iVar2 == 0)) {
    SetTrigg(0x2b,0);
    InitialUpgrade("Gotryd","Pikiner_evro(GE)ATTACK");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)ATTACK3");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)ATTACK4");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)ATTACK5");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)ATTACK6");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)SHIELD");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)SHIELD3");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)SHIELD4");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)SHIELD5");
    InitialUpgrade("Gotryd","AKA16GE");
    InitialUpgrade("Gotryd","AKA17GE");
    InitialUpgrade("Gotryd","AKA20GE");
    InitialUpgrade("Gotryd","AKA27GE");
    SelectUnits(&DAT_10007a50,0);
    SelErase(1);
    SetTrigg(0x22,0);
    SelectUnits(&DAT_10007af8,0);
    SelErase(1);
    SetResource(0,3,50000);
    SetResource(0,1,10000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
  }
  cVar1 = Trigg(0x2c);
  if ((cVar1 != '\0') && (iVar2 = GetDiff(0), iVar2 == 1)) {
    SetTrigg(0x2c,0);
    InitialUpgrade("Gotryd","Pikiner_evro(GE)ATTACK");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)ATTACK3");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)SHIELD");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)SHIELD3");
    InitialUpgrade("Gotryd","AKA16GE");
    InitialUpgrade("Gotryd","AKA17GE");
    SelectUnits(&DAT_10007a50,0);
    SelErase(1);
    SetTrigg(0x22,0);
    InitialUpgrade("Gpandur","AKA09GE");
    InitialUpgrade("Gpandur","AKA10GE");
    SetResource(0,3,50000);
    SetResource(0,1,10000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,6000);
    SetResource(0,4,6000);
  }
  cVar1 = Trigg(0x2d);
  if ((cVar1 != '\0') && (iVar2 = GetDiff(0), iVar2 == 2)) {
    SetTrigg(0x2d,0);
    InitialUpgrade("Gotryd","Pikiner_evro(GE)ATTACK");
    InitialUpgrade("Gotryd","Pikiner_evro(GE)SHIELD");
    InitialUpgrade("Gpandur","AKA09GE");
    InitialUpgrade("Gpandur","KUZ02GE");
    SetResource(0,3,50000);
    SetResource(0,1,10000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,4000);
    SetResource(0,4,4000);
    InitialUpgrade("Gpandur","AKA33AU");
  }
  cVar1 = Trigg(0x2e);
  if ((cVar1 != '\0') && (iVar2 = GetDiff(0), iVar2 == 3)) {
    SetTrigg(0x2e,0);
    InitialUpgrade("Gpandur","AKA09GE");
    InitialUpgrade("Gpandur","AKA10GE");
    InitialUpgrade("Gpandur","KUZ02GE");
    InitialUpgrade("Gpandur","AKA11GE");
    InitialUpgrade("Gpandur","AKA33AU");
    InitialUpgrade("Gpandur","AKA31AU");
    InitialUpgrade("Gpandur","Rundashir_Avstria(au)ATTACK");
    InitialUpgrade("Gpandur","Rundashir_Avstria(au)ATTACK3");
    InitialUpgrade("Gpandur","Rundashir_Avstria(au)ATTACK4");
    InitialUpgrade("Gpandur","Rundashir_Avstria(au)SHIELD");
    InitialUpgrade("Gpandur","Rundashir_Avstria(au)SHIELD3");
    InitialUpgrade("Gpandur","Rundashir_Avstria(au)SHIELD4");
    SetResource(0,3,50000);
    SetResource(0,1,10000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,2000);
    SetResource(0,4,2000);
  }
  cVar1 = Trigg(2);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007b18,&DAT_10007b60), 0 < iVar2)) ||
     (iVar2 = GetUnitsAmount1(&DAT_10007b18,&DAT_100079f8), 10 < iVar2)) {
    SetTrigg(2,0);
    SelectUnits(&DAT_10007c18,0);
    SelSendAndKill(1,&DAT_10007b68,0xbe,0);
    SelectUnits(&DAT_10007be8,0);
    Patrol(1,&DAT_10007b18,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_10007a00,&DAT_10007b60), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount1(&DAT_10007a00,&DAT_100079f8), 10 < iVar2)))) {
    SetTrigg(3,0);
    RunTimer(1,900);
    ShowPage("#PAGE2");
    SelectUnits(&DAT_10007be8,0);
    SelSendAndKill(1,&DAT_10007b18,0xa0,0);
    SelSendAndKill(1,&DAT_10007a00,0x28,2);
    SelSendAndKill(1,&DAT_10007c30,0x40,2);
    SelectUnits(&DAT_10007c18,0);
    SelSendAndKill(1,&DAT_10007a00,0xbe,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SelectUnits(&DAT_10007b38,0);
    Patrol(1,&DAT_10007c30,0);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetUnitsAmount1(&DAT_10007a68,&DAT_100079f8), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_10007a68,&DAT_10007b60), 0 < iVar2)) &&
      (iVar2 = GetUnitsByNation(&DAT_10007ca0,2), iVar2 == 0)))) {
    SetTrigg(5,0);
    SelectUnits(&DAT_10007bb0,0);
    SelOpenGates(2);
    ChangeFriends(0,0x15);
    ShowPage("#PAGE3");
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007ba8,&DAT_10007b60), 0 < iVar2)) {
    SetTrigg(6,0);
    SelectUnits(&DAT_10007b10,0);
    SelCloseGates(2);
    SelectUnits(&DAT_10007c68,0);
    SelAttackGroup(1,&DAT_10007b60);
    ShowPage("#PAGE13");
  }
  cVar1 = Trigg(0x24);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10007c30,0), 2 < iVar2)) {
    SetTrigg(0x24,0);
    SelectUnits(&DAT_10007a38,0);
    SelSendAndKill(1,&DAT_10007c30,0xaf,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007bf0,&DAT_10007b60), 0 < iVar2)) {
    SetTrigg(7,0);
    SelectUnits(&DAT_10007a10,0);
    AllowAttack(5,0);
    SelectUnits(&DAT_10007a10,0);
    SelSendTo(5,&DAT_10007a98,0x9b,0);
    SelectUnits(&DAT_10007a08,0);
    AllowAttack(5,0);
    SelectUnits(&DAT_10007a08,0);
    SelSendTo(5,&DAT_10007aa0,0x9b,0);
    SelectUnits(&DAT_10007a20,0);
    AllowAttack(5,0);
    SelectUnits(&DAT_10007a20,0);
    SelSendTo(5,&DAT_10007a88,0x9b,0);
    SelectUnits(&DAT_10007a18,0);
    AllowAttack(5,0);
    SelectUnits(&DAT_10007a18,0);
    SelSendTo(5,&DAT_10007a90,0x9b,0);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) {
    SetTrigg(8,0);
    CreateObject0(&DAT_10007aa8,&DAT_100079f0,&DAT_10007ab8,5,&DAT_10007b30,0x50);
    CreateObject0(&DAT_10007a70,&DAT_10007c20,&DAT_10007a40,5,&DAT_10007a58,0x50);
    SelectUnits(&DAT_10007aa8,0);
    AllowAttack(5,0);
    SelectUnits(&DAT_10007aa8,0);
    SelSendTo(5,&DAT_10007ae8,0x2d,0);
    SelectUnits(&DAT_10007a70,0);
    AllowAttack(5,0);
    SelectUnits(&DAT_10007a70,0);
    SelSendTo(5,&DAT_10007ad8,0x2d,0);
    SelectUnits(&DAT_10007ca8,0);
    SelSendTo(5,&DAT_100079e8,0x87,0);
    SelectUnits(&DAT_10007c80,0);
    SelSendTo(5,&DAT_10007bf0,0,0);
    SelectUnits(&DAT_10007c90,0);
    AllowAttack(5,0);
    SelectUnits(&DAT_10007c90,0);
    SelSendTo(5,&DAT_10007b88,0x80,0);
    RunTimer(3,0x226);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_10007c00,&DAT_10007b60), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount1(&DAT_10007c00,&DAT_100079f8), 4 < iVar2)))) {
    SetTrigg(10,0);
    SelectUnits(&DAT_10007c10,0);
    SelSendAndKill(1,&DAT_10007b08,0xc3,0);
    SelectUnits(&DAT_10007a28,0);
    Patrol(1,&DAT_10007b08,0);
    SelectUnits(&DAT_10007bd8,0);
    Patrol(1,&DAT_10007b08,0);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007a68,&DAT_10007b60), 0 < iVar2)) {
    SetTrigg(9,0);
    iVar2 = AskMultilineQuestion(9,"#PAGE5",0,"Qpr1_1|Qpr1_2");
    if (iVar2 == 0) {
      ChangeFriends(0,0x11);
    }
    else if (iVar2 == 1) {
      SelectUnits(&DAT_10007bb0,0);
      SelOpenGates(2);
      SetTrigg(6,0);
      SelectUnits(&DAT_10007c68,0);
      SelSendTo(1,&DAT_10007c28,0x50,0);
      SelectUnits(&DAT_10007ca0,0);
      SelSendTo(2,&DAT_10007c78,0x1e,0);
    }
    SelectUnits(&DAT_10007a30,0);
    Patrol(1,&DAT_10007b78,0);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_10007bc8,&DAT_10007b60), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount1(&DAT_10007bc8,&DAT_100079f8), 0 < iVar2)))) {
    SetTrigg(0xb,0);
    SelectUnits(&DAT_100079e0,0);
    SelSendAndKill(1,&DAT_10007bc8,0x80,0);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(0xd,0);
    SetStartPoint(&DAT_10007b88);
    RunTimer(4,100);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), pcVar5 = (void*)&SelSendAndKill, cVar1 != '\0')) {
    SetTrigg(0xe,0);
    iVar2 = GetUnitsByNation(&DAT_10007a78,0);
    if ((iVar2 < 1) || (cVar1 = AskQuestion("#PAGE14"), cVar1 == '\0')) {
      SelectUnits(&DAT_10007a10,0);
      AllowAttack(5,1);
      SelectUnits(&DAT_10007a08,0);
      AllowAttack(5,1);
      SelectUnits(&DAT_10007a20,0);
      AllowAttack(5,1);
      SelectUnits(&DAT_10007a18,0);
      AllowAttack(5,0);
      SelectUnits(&DAT_10007aa8,0);
      AllowAttack(5,1);
      SelectUnits(&DAT_10007a70,0);
      AllowAttack(5,0);
      SelectUnits(&DAT_10007ca8,0);
      SelSendAndKill(5,&DAT_10007bf0,0x87,0);
      SelectUnits(&DAT_10007c80,0);
      SelSendAndKill(5,&DAT_10007bf0,0,0);
      SelectUnits(&DAT_10007c90,0);
      AllowAttack(5,1);
    }
    else {
      ChangeFriends(0,0x35);
      SelectUnits(&DAT_10007c80,0);
      SelSendAndKill(5,&DAT_10007b08,0xb0,0);
      cVar1 = Trigg(0x10);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007a78,0), iVar2 == 3)) {
        SetTrigg(0x10,0);
        SelectUnits(&DAT_10007c48,0);
        SelChangeNation(0,5);
        SelSendTo(5,&DAT_100079e8,0x50,0);
        SelectUnits(&DAT_10007c40,0);
        SelChangeNation(0,5);
        SetTrigg(0x11,0);
      }
      cVar1 = Trigg(0x11);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007a78,0), iVar2 == 2)) {
        SetTrigg(0x11,0);
        SelectUnits(&DAT_10007a78,0);
        SelChangeNation(0,5);
        SelChangeNation(0,5);
      }
      SelectUnits(&DAT_10007c40,0);
      SelSendTo(5,&DAT_100079e8,0x50,0);
      RunTimer(0,200);
    }
  }
  cVar1 = Trigg(0x47);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0), cVar1 != '\0')) {
    SetTrigg(0x47,0);
    ShowPage("#PAGE20");
  }
  cVar1 = Trigg(0xf);
  if (cVar1 != '\0') {
    SetTrigg(0xf,0);
    AttackZoneByArtillery(&DAT_10007c70,&DAT_10007c08,0);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_10007c98,&DAT_10007b60), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount1(&DAT_10007c98,&DAT_100079f8), 0xf < iVar2)))) {
    SetTrigg(0x12,0);
    ShowPage("#PAGE8");
    SelectUnits(&DAT_10007bd0,0);
    SelOpenGates(4);
    SelectUnits1(4,&DAT_10007bd0,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_100079d0,0);
    SelSendAndKill(1,&DAT_10007c98,0x40,0);
    SelectUnits(&DAT_10007af8,0);
    SelSendAndKill(1,&DAT_10007c98,0x40,0);
    SelectUnits(&DAT_10007b48,0);
    SelSendAndKill(1,&DAT_10007c98,0x40,0);
    SelectUnits(&DAT_10007c68,0);
    SelSendAndKill(1,&DAT_10007c98,0x40,0);
    SetTrigg(0xf,0);
    cVar1 = Trigg(99);
    if ((cVar1 != '\0') && ((iVar2 = GetDiff(0), iVar2 == 2 || (iVar2 = GetDiff(0), iVar2 == 3)))) {
      SetTrigg(99,0);
      SelectUnits(&DAT_10007b90,0);
      SelSendAndKill(1,&DAT_10007ac0,0,0);
      SelectUnits(&DAT_10007b98,0);
      SelSendAndKill(1,&DAT_10007ac0,0,0);
    }
  }
  cVar1 = Trigg(0x62);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007ac0,&DAT_10007b90), 2 < iVar2)) &&
     (iVar2 = GetUnitsByNation(&DAT_10007c58,4), 0 < iVar2)) {
    ClearSelection(1);
    SelectUnits(&DAT_10007b90,0);
    SelAttackGroup(1,&DAT_10007c58);
  }
  cVar1 = Trigg(0x61);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007ac0,&DAT_10007b98), 2 < iVar2)) &&
     (iVar2 = GetUnitsByNation(&DAT_10007c60,4), 0 < iVar2)) {
    ClearSelection(1);
    SelectUnits(&DAT_10007b98,0);
    SelAttackGroup(1,&DAT_10007c60);
  }
  cVar1 = Trigg(0x25);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x13), cVar1 == '\0')) {
    AttackBuildingsInZone(&DAT_10007b00,&DAT_10007ac0,4);
  }
  cVar1 = Trigg(0x1f);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100079d0,1), iVar2 < 2)) &&
      (iVar2 = GetUnitsByNation(&DAT_10007af8,1), iVar2 < 2)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10007b48,1), iVar2 < 2 &&
      (iVar2 = GetUnitsByNation(&DAT_10007c68,1), iVar2 < 2)))) {
    SetTrigg(0x1f,0);
    ShowPage("#PAGE10");
    SetLightSpot(&DAT_10007b50,6,1);
    SetStartPoint(&DAT_10007b50);
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007a80,&DAT_10007a78), 0 < iVar2)) {
    SetTrigg(0x13,0);
    SetTrigg(0x60,0);
    SelectUnits1(0,&DAT_10007a78,0);
    SelChangeNation(0,4);
    SelSendTo(4,&DAT_10007a80,0x4b,0);
    RunTimer(5,500);
    RunTimer(7,0x9c4);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SetTrigg(0x14,0);
    ShowPage("#PAGE9");
    SelectUnits1(4,&DAT_100079d8,0);
    SelChangeNation(4,0);
    SelectUnits1(4,&DAT_10007b80,0);
    SelChangeNation(4,0);
    SelectUnits1(4,&DAT_10007bc0,0);
    SelChangeNation(4,0);
    SelectUnits1(4,&DAT_10007c38,0);
    SelChangeNation(4,0);
  }
  cVar1 = Trigg(0x1e);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    SetTrigg(0x1e,0);
    SelectUnits(&DAT_10007b70,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_10007b20,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_10007ad0,0);
    SelChangeNation(4,0);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    SetTrigg(0x15,0);
    ShowPage("#PAGE15");
    iVar2 = GetDiff(0);
    iVar3 = GetUnitsByNation(&DAT_10007a78,4);
    AddResource(0,5,(6 - iVar2) * iVar3 * 1000);
    iVar2 = GetDiff(0);
    iVar3 = GetUnitsByNation(&DAT_10007a78,4);
    AddResource(0,4,(iVar2 * -1000 + 0x157c) * iVar3);
    DisableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x43);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007ab0,&DAT_10007b60), 0 < iVar2)) {
    SetTrigg(0x16,0);
    SelectUnits(&DAT_10007c90,0);
    SelSendTo(5,&DAT_100079e8,0x9b,0);
    SelectUnits(&DAT_10007a10,0);
    SelSendTo(5,&DAT_10007a98,0x9b,0);
    SelectUnits(&DAT_10007a08,0);
    SelSendTo(5,&DAT_10007aa0,0x9b,0);
    SelectUnits(&DAT_10007a20,0);
    SelSendTo(5,&DAT_10007a88,0x9b,0);
    SelectUnits(&DAT_10007a18,0);
    SelSendTo(5,&DAT_10007a90,0x9b,0);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsByNation(&DAT_10007c60,4), iVar2 == 0 ||
      (iVar2 = GetUnitsByNation(&DAT_10007c58,4), iVar2 == 0)))) {
    SetTrigg(0x17,0);
    SelectUnits(&DAT_100079e0,0);
    SelSendAndKill(1,&DAT_10007af0,0x40,0);
    SelSendAndKill(1,&DAT_10007a80,0x40,2);
    SelectUnits(&DAT_100079d0,0);
    SelSendAndKill(1,&DAT_10007af0,0x40,0);
    SelSendAndKill(1,&DAT_10007a80,0x40,2);
    SelectUnits(&DAT_10007af8,0);
    SelSendAndKill(1,&DAT_10007af0,0x40,0);
    SelSendAndKill(1,&DAT_10007a80,0x40,2);
    SelectUnits(&DAT_10007b48,0);
    SelSendAndKill(1,&DAT_10007af0,0x40,2);
    SelSendAndKill(1,&DAT_10007a80,0x40,0);
    SelectUnits(&DAT_10007c68,0);
    SelSendAndKill(1,&DAT_10007af0,0x40,0);
    SelSendAndKill(1,&DAT_10007a80,0x40,2);
    SetTrigg(0x25,0);
    SelectUnits(&DAT_10007b00,0);
    SelSendTo(1,&DAT_10007ba0,0x50,0);
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_10007bf8,&DAT_10007b20), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount1(&DAT_10007bf8,&DAT_10007ad0), 0 < iVar2)))) {
    AttackZoneByArtillery(&DAT_10007b58,&DAT_10007bf8,0);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_10007ae0,&DAT_10007b20), 0 < iVar2 ||
      (iVar2 = GetUnitsAmount1(&DAT_10007ae0,&DAT_10007ad0), 0 < iVar2)))) {
    AttackZoneByArtillery(&DAT_10007a60,&DAT_10007ae0,0);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007b28,1), 0 < iVar2)) {
    SetTrigg(0x1a,0);
    SetResource(0,4,0);
    SetResource(0,5,0);
  }
  cVar1 = Trigg(0x1b);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsAmount1(&DAT_10007c00,&DAT_10007b60), pcVar4 = (void*)&ShowPage, 0 < iVar2)) {
    SetTrigg(0x1b,0);
    SetStartPoint(&DAT_10007c00);
    ShowPage("#PAGE6");
    ShowPage("#PAGE7");
    SelectUnits(&DAT_10007bb8,0);
    SelSendTo(2,&DAT_10007c50,0x19,0);
  }
  cVar1 = Trigg(0x1c);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007a28,1), iVar2 == 0)) &&
     (iVar2 = GetUnitsByNation(&DAT_10007bd8,1), iVar2 == 0)) {
    SetTrigg(0x1c,0);
    SelectUnits(&DAT_10007bb8,0);
    SelSendTo(2,&DAT_10007b88,0xe1,0);
    ShowPage("#PAGE4");
  }
  cVar1 = Trigg(0x1d);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10007bf0,0), 0 < iVar2)) {
    SetTrigg(0x1d,0);
    SelectUnits(&DAT_10007bb8,0);
    SelSendTo(2,&DAT_10007b88,0x19,0);
  }
  cVar1 = Trigg(0x22);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10007b50,0), 2 < iVar2)) {
    SetTrigg(0x22,0);
    SelectUnits(&DAT_10007a50,0);
    SelSendAndKill(1,&DAT_10007b50,0x80,0);
  }
  cVar1 = Trigg(0x28);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007b40,1), iVar2 == 0)) &&
     (iVar2 = GetUnitsByNation(&DAT_10007c88,1), iVar2 == 0)) {
    SetTrigg(0x28,0);
    ShowPage("#PAGE11");
    ShowVictory();
  }
  cVar1 = Trigg(0x29);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007b60,0), iVar2 == 0)) {
    SetTrigg(0x29,0);
    ShowPage("#PAGE12");
    LooseGame();
  }
  cVar1 = Trigg(0x60);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007a78,0), iVar2 == 0)) {
    SetTrigg(0x60,0);
    LooseGame();
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
