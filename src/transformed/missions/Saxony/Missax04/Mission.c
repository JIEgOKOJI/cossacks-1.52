#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_100071e0[] = "Zp";
char DAT_1000731c[] = "Gzv";
char DAT_10007320[] = "Gblg";
char DAT_1000738c[] = "Gob1";
char DAT_10007394[] = "Gob";
char DAT_100073ac[] = "Gkon";
long long DAT_10007a00 = 0;
long long DAT_10007a08 = 0;
long long DAT_10007a10 = 0;
long long DAT_10007a18 = 0;
long long DAT_10007a20 = 0;
long long DAT_10007a28 = 0;
long long DAT_10007a30 = 0;
long long DAT_10007a38 = 0;
int DAT_10007a40 = 0;
int DAT_10007a44 = 0;
int DAT_10007a48 = 0;
int DAT_10007a4c = 0;
int DAT_10007a50 = 0;
int DAT_10007a54 = 0;
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
long long DAT_10007cb0 = 0;
long long DAT_10007cb8 = 0;
long long DAT_10007cc0 = 0;
long long DAT_10007cc8 = 0;
long long DAT_10007cd0 = 0;
long long DAT_10007cd8 = 0;
long long DAT_10007ce0 = 0;
long long DAT_10007ce8 = 0;
long long DAT_10007cf0 = 0;
long long DAT_10007cf8 = 0;
long long DAT_10007d00 = 0;
long long DAT_10007d08 = 0;
long long DAT_10007d10 = 0;
long long DAT_10007d18 = 0;
long long DAT_10007d20 = 0;
long long DAT_10007d28 = 0;
long long DAT_10007d30 = 0;
long long DAT_10007d38 = 0;
long long DAT_10007d40 = 0;
long long DAT_10007d48 = 0;
long long DAT_10007d50 = 0;
long long DAT_10007d58 = 0;
long long DAT_10007d60 = 0;
long long DAT_10007d68 = 0;
long long DAT_10007d70 = 0;
long long DAT_10007d78 = 0;
long long DAT_10007d80 = 0;
long long DAT_10007d88 = 0;
long long DAT_10007d90 = 0;
long long DAT_10007d98 = 0;
long long DAT_10007da0 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10007d30,"Gkomandirk");
  RegisterUnits(&DAT_10007d38,"Gkomandirz");
  RegisterUnits(&DAT_10007c60,"Gotrydk");
  RegisterUnits(&DAT_10007d48,"Gtorg");
  RegisterUnits(&DAT_10007d78,"Gstraga1");
  RegisterUnits(&DAT_10007d80,"Gstraga2");
  RegisterUnits(&DAT_10007b18,"Grab1");
  RegisterUnits(&DAT_10007b20,"Grab2");
  RegisterUnits(&DAT_10007b28,"Grab3");
  RegisterUnits(&DAT_10007b30,"Grab4");
  RegisterUnits(&DAT_10007b38,"Grab5");
  RegisterUnits(&DAT_10007b40,"Grab6");
  RegisterUnits(&DAT_10007ae8,"Gohr1");
  RegisterUnits(&DAT_10007af0,"Gohr2");
  RegisterUnits(&DAT_10007af8,"Gohr3");
  RegisterUnits(&DAT_10007b00,"Gohr4");
  RegisterUnits(&DAT_10007b08,"Gohr5");
  RegisterUnits(&DAT_10007b10,"Gohr6");
  RegisterUnits(&DAT_10007ba0,"Grazb");
  RegisterUnits(&DAT_10007c38,"Gakkad");
  RegisterUnits(&DAT_10007d90,DAT_100073ac);
  RegisterUnits(&DAT_10007c20,"Gartdepo");
  RegisterUnits(&DAT_10007b50,"Gbarak");
  RegisterUnits(&DAT_10007ca0,DAT_10007394);
  RegisterUnits(&DAT_10007d68,DAT_1000738c);
  RegisterUnits(&DAT_10007ca8,"Gvorotader");
  RegisterUnits(&DAT_10007c98,"Gzamok");
  RegisterUnits(&DAT_10007be8,"Gport");
  RegisterUnits(&DAT_10007a08,"Gselo1");
  RegisterUnits(&DAT_10007a18,"Gselo2");
  RegisterUnits(&DAT_10007a10,"Gselo3");
  RegisterUnits(&DAT_10007a28,"Gselo4");
  RegisterUnits(&DAT_10007a20,"Gselo5");
  RegisterUnits(&DAT_10007da0,"Gpatrul");
  RegisterUnits(&DAT_10007ad8,"Gpatrul1");
  RegisterUnits(&DAT_10007ad0,"Gpatrul2");
  RegisterUnits(&DAT_10007d28,DAT_10007320);
  RegisterUnits(&DAT_10007d18,DAT_1000731c);
  RegisterZone(&DAT_10007ac0,"Zstraga1");
  RegisterZone(&DAT_10007ab0,"Zstraga2");
  RegisterZone(&DAT_10007d20,"Zsraga22");
  RegisterZone(&DAT_10007d10,"Zsraga11");
  RegisterZone(&DAT_10007d98,"Zbazara");
  RegisterZone(&DAT_10007a88,"Zbazara1");
  RegisterZone(&DAT_10007d08,"Zrudn");
  RegisterZone(&DAT_10007b58,"Zzrudn");
  RegisterZone(&DAT_10007b48,"Zoboza");
  RegisterZone(&DAT_10007d58,"Zoboza1");
  RegisterZone(&DAT_10007b68,"Zkomandiraz");
  RegisterZone(&DAT_10007a78,"Zperedkz");
  RegisterZone(&DAT_10007a60,"Zperedkz1");
  RegisterZone(&DAT_10007c28,"Zart1");
  RegisterZone(&DAT_10007c30,"Zart2");
  RegisterZone(&DAT_10007a68,"Zkon1");
  RegisterZone(&DAT_10007d40,"Zkon11");
  RegisterZone(&DAT_10007a70,"Zkon2");
  RegisterZone(&DAT_10007be0,"Zshar1");
  RegisterZone(&DAT_10007c00,"Zshar2");
  RegisterZone(&DAT_10007c08,"Zshar3");
  RegisterZone(&DAT_10007bf0,"Zshar4");
  RegisterZone(&DAT_10007bf8,"Zshar5");
  RegisterZone(&DAT_10007c10,"Zshar6");
  RegisterZone(&DAT_10007c18,"Zshar7");
  RegisterZone(&DAT_10007d60,"Zsund");
  RegisterZone(&DAT_10007b88,"Zsela1");
  RegisterZone(&DAT_10007b90,"Zsela2");
  RegisterZone(&DAT_10007ba8,"Zsela3");
  RegisterZone(&DAT_10007bb0,"Zsela4");
  RegisterZone(&DAT_10007b98,"Zsela5");
  RegisterZone(&DAT_10007a00,"Zpatrul");
  RegisterZone(&DAT_10007bd8,"Zpatrul1");
  RegisterZone(&DAT_10007bd0,"Zpatrul2");
  RegisterZone(&DAT_10007bb8,DAT_100071e0);
  RegisterUnitType(&DAT_10007d00,"Dragun(SA)");
  RegisterDynGroup(&DAT_10007aa8);
  RegisterDynGroup(&DAT_10007b78);
  RegisterUnitType(&DAT_10007d70,"Konni_Ricar(SA)");
  RegisterDynGroup(&DAT_10007aa0);
  RegisterDynGroup(&DAT_10007b70);
  RegisterUnitType(&DAT_10007c40,"Pushka(SA)");
  RegisterDynGroup(&DAT_10007ac8);
  RegisterDynGroup(&DAT_10007bc0);
  RegisterUnitType(&DAT_10007cf8,"Mortira(SA)");
  RegisterDynGroup(&DAT_10007ab8);
  RegisterDynGroup(&DAT_10007b80);
  RegisterUnitType(&DAT_10007a58,"PERES_KOR(SA)");
  RegisterDynGroup(&DAT_10007a90);
  RegisterDynGroup(&DAT_10007bc8);
  RegisterUnitType(&DAT_10007a80,"Krestian_Sved(SV)");
  RegisterDynGroup(&DAT_10007a98);
  RegisterDynGroup(&DAT_10007a38);
  RegisterDynGroup(&DAT_10007d88);
  RegisterDynGroup(&DAT_10007b60);
  RegisterUnitType(&DAT_10007d50,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_10007a30,"SUNDUK1O(UN)");
  RegisterFormation(&DAT_10007ae0,"#ALONE");
  SetPlayerName(2,"ALLIES");
  SetPlayerName(4,"ALLY_SVED");
  SetPlayerName(5,"ROBBERS");
  RegisterUnitType(&DAT_10007c48,"Center_Swesair(SV)");
  RegisterUnitType(&DAT_10007c50,"Dom_Swisair(SV)");
  RegisterUnitType(&DAT_10007c58,"Melnica(SV)");
  RegisterUnitType(&DAT_10007c68,"Sclad1(SV)");
  RegisterUnitType(&DAT_10007c70,"shahta(SV)");
  RegisterUnitType(&DAT_10007c78,"shahta_FE(SV)");
  RegisterUnitType(&DAT_10007c80,"shahta_UG(SV)");
  RegisterUnitType(&DAT_10007c88,"Kuznica(SV)");
  RegisterUnitType(&DAT_10007c90,"Konushnia_Swesair(SV)");
  RegisterUnitType(&DAT_10007cb0,"Kostel(SV)");
  RegisterUnitType(&DAT_10007cb8,"akademia_E(SV)");
  RegisterUnitType(&DAT_10007cc0,"Dip_korpus(SV)");
  RegisterUnitType(&DAT_10007cc8,"Kazarma_evro(SV)");
  RegisterUnitType(&DAT_10007cd0,"Kazarma(SV)");
  RegisterUnitType(&DAT_10007cd8,"artileri_depo(SV)");
  RegisterUnitType(&DAT_10007ce0,"WALL_UKR(SV)");
  RegisterUnitType(&DAT_10007ce8,"Rinok(SV)");
  RegisterUnitType(&DAT_10007cf0,"Bashnia(SV)");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  int iVar4;
  void *pcVar5;
  void *pcVar6;
  void *pcVar7;
  void *pcVar8;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,250000);
      SetResource(0,1,30000);
      SetResource(0,4,20000);
      SetResource(0,5,20000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK3");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK4");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK5");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK6");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK7");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD3");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD4");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD5");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD6");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD7");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK3");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK4");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK5");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK6");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK7");
      SelectUnits(&DAT_10007d28,0);
      SelErase(4);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,150000);
      SetResource(0,1,20000);
      SetResource(0,4,14000);
      SetResource(0,5,14000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK3");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK4");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK5");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD3");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD4");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK3");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK4");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK5");
      SelectUnits(&DAT_10007d28,0);
      SelErase(4);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,50000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,1000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)ATTACK3");
      InitialUpgrade("Gkomandirk","Konni_Ricar(SA)SHIELD");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK");
      InitialUpgrade("Gkomandirk","Dragun(SA)ATTACK3");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,30000);
      SetResource(0,1,8000);
      SetResource(0,4,8000);
      SetResource(0,5,8000);
      SetResource(0,0,0);
      SetResource(0,2,0);
    }
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,4,5000000);
    SetResource(1,2,5000000);
    SetResource(1,0,5000000);
    SetResource(1,5,5000);
    SetResource(4,3,5000000);
    SetResource(4,1,5000000);
    SetResource(4,4,5000000);
    SetResource(4,2,5000000);
    SetResource(4,0,5000000);
    SetResource(4,5,5000000);
    SetResource(5,3,5000000);
    SetResource(5,1,5000000);
    SetResource(5,4,5000000);
    SetResource(5,2,500000);
    SetResource(5,0,5000000);
    SetResource(5,5,5000000);
    SetResource(6,3,5000000);
    SetResource(6,1,5000000);
    SetResource(6,4,5000000);
    SetResource(6,2,5000000);
    SetResource(6,0,5000000);
    SetResource(6,5,5000000);
    ChangeFriends(0,5);
    ChangeFriends(2,5);
    EnableUnit(2,&DAT_10007d00,1);
    InitialUpgrade("Gkomandirz","KUZ03SA");
    InitialUpgrade("Gkomandirz","MAINSA");
    DAT_10007a44 = 0;
    DAT_10007a40 = 0;
    DAT_10007a48 = 0;
    DAT_10007a4c = 0;
    DAT_10007a50 = 0;
    DAT_10007a54 = 0;
    TakeStone(&DAT_10007b40);
    TakeWood(&DAT_10007b38);
    SelectUnits(&DAT_10007ca8,0);
    SelOpenGates(4);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SetLightSpot(&DAT_10007d98,2,3);
    SetLightSpot(&DAT_10007b68,8,4);
    CreateObject0(&DAT_10007d88,&DAT_10007ae0,&DAT_10007d50,7,&DAT_10007d60,0);
    EnableUnit(0,&DAT_10007c48,0);
    EnableUnit(0,&DAT_10007c50,0);
    EnableUnit(0,&DAT_10007c58,0);
    EnableUnit(0,&DAT_10007c68,0);
    EnableUnit(0,&DAT_10007c70,0);
    EnableUnit(0,&DAT_10007c78,0);
    EnableUnit(0,&DAT_10007c80,0);
    EnableUnit(0,&DAT_10007c88,0);
    EnableUnit(0,&DAT_10007c90,0);
    EnableUnit(0,&DAT_10007cb0,0);
    EnableUnit(0,&DAT_10007cb8,0);
    EnableUnit(0,&DAT_10007cc0,0);
    EnableUnit(0,&DAT_10007cc8,0);
    EnableUnit(0,&DAT_10007cd0,0);
    EnableUnit(0,&DAT_10007cd8,0);
    EnableUnit(0,&DAT_10007ce0,0);
    EnableUnit(0,&DAT_10007ce8,0);
    EnableUnit(0,&DAT_10007cf0,0);
    RunTimer(0x1c,100);
    RunTimer(0x1a,100);
  }
  cVar1 = Trigg(2);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007ae8,4), iVar2 == 0)) &&
      (iVar2 = GetUnitsByNation(&DAT_10007b18,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10007b88,0), 0 < iVar2)) {
    SetTrigg(2,0);
    SelectUnits(&DAT_10007b18,0);
    SelChangeNation(4,0);
    ShowPage("#PAGE9");
    SelectUnits(&DAT_10007a08,0);
    SelDie(4);
    AddResource(0,1,500);
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007af0,4), iVar2 == 0)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10007b20,0), 0 < iVar2 &&
      (iVar2 = GetUnitsAmount0(&DAT_10007b90,0), 0 < iVar2)))) {
    SetTrigg(3,0);
    SelectUnits(&DAT_10007b20,0);
    SelChangeNation(4,0);
    ShowPage("#PAGE10");
    SelectUnits(&DAT_10007a18,0);
    AddResource(0,1,700);
    SelDie(4);
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007af8,4), iVar2 == 0)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10007b28,0), 0 < iVar2 &&
      (iVar2 = GetUnitsAmount0(&DAT_10007ba8,0), 0 < iVar2)))) {
    SetTrigg(4,0);
    SelectUnits(&DAT_10007b28,0);
    SelChangeNation(4,0);
    ShowPage("#PAGE10");
    SelectUnits(&DAT_10007a10,0);
    AddResource(0,1,700);
    SelDie(4);
  }
  cVar1 = Trigg(5);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007b00,4), iVar2 == 0)) &&
      (iVar2 = GetUnitsByNation(&DAT_10007b30,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10007bb0,0), 0 < iVar2)) {
    SetTrigg(5,0);
    SelectUnits(&DAT_10007b30,0);
    SelChangeNation(4,0);
    ShowPage("#PAGE10");
    SelectUnits(&DAT_10007a28,0);
    AddResource(0,1,700);
    SelDie(4);
  }
  cVar1 = Trigg(6);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007b08,4), iVar2 == 0)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10007b38,0), 0 < iVar2 &&
      (iVar2 = GetUnitsAmount0(&DAT_10007b98,0), 0 < iVar2)))) {
    SetTrigg(6,0);
    SelectUnits(&DAT_10007b38,0);
    SelChangeNation(4,0);
    ShowPage("#PAGE9");
    SelectUnits(&DAT_10007a20,0);
    AddResource(0,1,500);
    SelDie(4);
  }
  cVar1 = Trigg(99);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007b10,4), iVar2 == 0)) &&
     (iVar2 = GetUnitsByNation(&DAT_10007b40,0), 0 < iVar2)) {
    SetTrigg(99,0);
    SelectUnits(&DAT_10007b40,0);
    SelChangeNation(4,0);
    ShowPage("#PAGE11");
    iVar2 = GetDiff(0);
    AddResource(0,1,(10 - iVar2) * 1000);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10007a78,0), 0 < iVar2)) {
    SetTrigg(7,0);
    SelectUnits(&DAT_10007d78,0);
    SelSendTo(2,&DAT_10007ac0,0,0);
    SelectUnits(&DAT_10007d80,0);
    SelSendTo(2,&DAT_10007ab0,0x80,0);
    SelectUnits(&DAT_10007d38,0);
    SelSendTo(2,&DAT_10007a60,0x40,0);
    SelectUnits(&DAT_10007d18,0);
    SelOpenGates(2);
    RunTimer(1,200);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(8,0);
    ShowPage("#PAGE3");
    SelectUnits(&DAT_10007d38,0);
    SelSendTo(2,&DAT_10007b68,0x40,0);
  }
  cVar1 = Trigg(9);
  if (((cVar1 != '\0') && (cVar1 = Trigg(8), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10007b68,0), 0 < iVar2)) {
    SetTrigg(9,0);
    SelectUnits(&DAT_10007d78,0);
    SelSendAndKill(2,&DAT_10007d10,0x40,0);
    SelectUnits(&DAT_10007d80,0);
    SelSendTo(2,&DAT_10007d20,0x40,0);
  }
  cVar1 = Trigg(10);
  if (((cVar1 == '\0') || (cVar1 = Trigg(9), cVar1 != '\0')) ||
     ((cVar1 = Trigg(0xd), cVar1 == '\0' ||
      ((iVar2 = GetUnitsAmount1(&DAT_10007b68,&DAT_10007d30), iVar2 < 1 &&
       (iVar2 = GetUnitsAmount1(&DAT_10007a78,&DAT_10007d30), iVar2 < 1))))))
  goto switchD_10002115_default;
  SetTrigg(10,0);
  uVar3 = AskMultilineQuestion(9,"#PAGE4",0,"Qr4_1|Qr4_2|Qr4_3|Qr4_4|Qr4_5|Qr4_6|Qr4_7");
  switch(uVar3) {
  case 0:
    iVar2 = GetResource(0,1);
    if (iVar2 < 3000) {
      iVar4 = GetResource(0,1);
      iVar2 = 3000;
LAB_100022f2:
      iVar2 = iVar2 - iVar4;
LAB_100022f5:
      ShowPageParam("#PAGE6",iVar2);
      RunTimer(2,100);
      goto switchD_10002115_default;
    }
    AddResource(0,1,0xfffff448);
    DAT_10007a44 = 0;
    do {
      ProduceUnitFast(&DAT_10007d90,&DAT_10007d00,&DAT_10007aa8,3);
      DAT_10007a44 = DAT_10007a44 + 1;
    } while (DAT_10007a44 < 5);
    DAT_10007a44 = 0;
    break;
  case 1:
    iVar2 = GetResource(0,1);
    if (iVar2 < 0x5dc) {
      iVar2 = GetResource(0,1);
      iVar2 = 0x5dc - iVar2;
      goto LAB_100022f5;
    }
    AddResource(0,1,0xfffffa24);
    DAT_10007a40 = 0;
    do {
      ProduceUnitFast(&DAT_10007d90,&DAT_10007d70,&DAT_10007aa0,3);
      DAT_10007a40 = DAT_10007a40 + 1;
    } while (DAT_10007a40 < 5);
    DAT_10007a40 = 0;
    break;
  case 2:
    iVar2 = GetResource(0,1);
    if (iVar2 < 5000) {
      iVar4 = GetResource(0,1);
      iVar2 = 5000;
      goto LAB_100022f2;
    }
    AddResource(0,1,0xffffec78);
    DAT_10007a48 = 0;
    do {
      ProduceUnitFast(&DAT_10007c20,&DAT_10007c40,&DAT_10007ac8,3);
      DAT_10007a48 = DAT_10007a48 + 1;
    } while (DAT_10007a48 < 4);
    DAT_10007a48 = 0;
    break;
  case 3:
    iVar2 = GetResource(0,1);
    if (iVar2 < 5000) {
      iVar2 = GetResource(0,1);
      iVar2 = 5000 - iVar2;
      goto LAB_100022f5;
    }
    AddResource(0,1,0xffffec78);
    DAT_10007a4c = 0;
    do {
      ProduceUnitFast(&DAT_10007c20,&DAT_10007cf8,&DAT_10007ab8,3);
      DAT_10007a4c = DAT_10007a4c + 1;
    } while (DAT_10007a4c < 4);
    DAT_10007a4c = 0;
    break;
  case 4:
    iVar2 = GetResource(0,1);
    if (iVar2 < 0xdac) {
      iVar4 = GetResource(0,1);
      iVar2 = 0xdac;
      goto LAB_100022f2;
    }
    AddResource(0,1,0xfffff254);
    DAT_10007a50 = 0;
    do {
      InitialUpgrade("Gkomandirz","AKA25SA");
      RunTimer(4,800);
      SetTrigg(0xd,0);
      SetTrigg(0xe,0);
      SetTrigg(0x10,1);
      RunTimer(6,800);
      DAT_10007a50 = DAT_10007a50 + 1;
    } while (DAT_10007a50 < 1);
    break;
  case 5:
    iVar2 = GetResource(0,1);
    if (iVar2 < 1000) {
      iVar2 = GetResource(0,1);
      ShowPageParam("#PAGE6",1000 - iVar2);
      SetLightSpot(&DAT_10007bb8,3,7);
      RunTimer(2,100);
      goto switchD_10002115_default;
    }
    AddResource(0,1,0xfffffc18);
    DAT_10007a54 = 0;
    do {
      ProduceUnitFast(&DAT_10007be8,&DAT_10007a58,&DAT_10007a90,3);
      SetLightSpot(&DAT_10007bb8,3,0xe);
      DAT_10007a54 = DAT_10007a54 + 1;
    } while (DAT_10007a54 < 1);
    break;
  case 6:
    goto switchD_10002115_caseD_6;
  default:
    goto switchD_10002115_default;
  }
  RunTimer(2,300);
switchD_10002115_default:
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), pcVar7 = (void*)&SelSendTo, cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007aa8,2), pcVar7 = (void*)&SelSendTo, 0 < iVar2)) {
    SelectUnits(&DAT_10007aa8,0);
    SelSendTo(2,&DAT_10007a68,0x50,0);
    SelSendTo(2,&DAT_10007a70,0x50,2);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007aa8,&DAT_10007b78);
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007aa0,2), 0 < iVar2)) {
    SelectUnits(&DAT_10007aa0,0);
    SelSendTo(2,&DAT_10007a68,0x50,0);
    SelSendTo(2,&DAT_10007a70,0x50,2);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007aa0,&DAT_10007b70);
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007ac8,2), 0 < iVar2)) {
    SelectUnits(&DAT_10007ac8,0);
    SelSendTo(2,&DAT_10007c28,0x50,0);
    SelSendTo(2,&DAT_10007c30,0x40,2);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007ac8,&DAT_10007bc0);
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007ab8,2), 0 < iVar2)) {
    SelectUnits(&DAT_10007ab8,0);
    SelSendTo(2,&DAT_10007c28,0x50,0);
    SelSendTo(2,&DAT_10007c30,0x40,2);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007ab8,&DAT_10007b80);
  }
  cVar1 = Trigg(0x1e);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007a90,2), 0 < iVar2)) {
    SelectUnits(&DAT_10007a90,0);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007a90,&DAT_10007bc8);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') &&
     (cVar1 = TimerDoneFirst(2), pcVar7 = (void*)&SetTrigg, pcVar8 = (void*)&RunTimer, cVar1 != '\0')) {
    cVar1 = AskQuestion("#PAGE5");
    if (cVar1 == '\0') goto switchD_10002115_caseD_6;
    SetTrigg(10,1);
  }
LAB_100026a3:
  cVar1 = TimerDone(5);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (cVar1 = Trigg(0x10), cVar1 == '\0')) {
    FreeTimer(5);
    SetTrigg(10,1);
    SetTrigg(0x10,1);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (cVar1 = TimerDoneFirst(6), cVar1 != '\0')) {
    SetLightSpot(&DAT_10007be0,8,1);
    SetLightSpot(&DAT_10007c00,8,2);
    SetLightSpot(&DAT_10007c08,8,3);
    SetLightSpot(&DAT_10007bf0,8,4);
    SetLightSpot(&DAT_10007bf8,8,5);
    SetLightSpot(&DAT_10007c10,8,6);
    SetLightSpot(&DAT_10007c18,8,7);
    SetLightSpot(&DAT_10007a78,8,8);
    SetLightSpot(&DAT_10007b48,8,9);
  }
  cVar1 = Trigg(10);
  if (((cVar1 == '\0') || (cVar1 = Trigg(9), cVar1 != '\0')) ||
     ((cVar1 = Trigg(0xd), cVar1 != '\0' ||
      ((iVar2 = GetUnitsAmount1(&DAT_10007b68,&DAT_10007d30), iVar2 < 1 &&
       (iVar2 = GetUnitsAmount1(&DAT_10007a78,&DAT_10007d30), iVar2 < 1))))))
  goto switchD_100027f7_default;
  SetTrigg(10,0);
  uVar3 = AskMultilineQuestion(9,"#PAGE4",0,"Qr4_1|Qr4_2|Qr4_3|Qr4_4|Qr4_6|Qr4_7");
  switch(uVar3) {
  case 0:
    iVar2 = GetResource(0,1);
    if (iVar2 < 3000) {
      iVar2 = GetResource(0,1);
      iVar4 = 3000;
LAB_1000281d:
      iVar4 = iVar4 - iVar2;
LAB_10002820:
      ShowPageParam("#PAGE6",iVar4);
      RunTimer(2,100);
    }
    else {
      AddResource(0,1,0xfffff448);
      DAT_10007a44 = 0;
      do {
        ProduceUnitFast(&DAT_10007d90,&DAT_10007d00,&DAT_10007aa8,3);
        DAT_10007a44 = DAT_10007a44 + 1;
      } while (DAT_10007a44 < 5);
      DAT_10007a44 = 0;
      RunTimer(2,300);
    }
    break;
  case 1:
    iVar2 = GetResource(0,1);
    if (0x5db < iVar2) {
      AddResource(0,1,0xfffffa24);
      DAT_10007a40 = 0;
      do {
        ProduceUnitFast(&DAT_10007d90,&DAT_10007d70,&DAT_10007aa0,3);
        DAT_10007a40 = DAT_10007a40 + 1;
      } while (DAT_10007a40 < 5);
      DAT_10007a40 = 0;
      RunTimer(2,300);
      break;
    }
    iVar4 = GetResource(0,1);
    iVar4 = 0x5dc - iVar4;
    goto LAB_10002820;
  case 2:
    iVar2 = GetResource(0,1);
    if (iVar2 < 5000) {
      iVar2 = GetResource(0,1);
      iVar4 = 5000;
      goto LAB_1000281d;
    }
    AddResource(0,1,0xffffec78);
    DAT_10007a48 = 0;
    do {
      ProduceUnitFast(&DAT_10007c20,&DAT_10007c40,&DAT_10007ac8,3);
      DAT_10007a48 = DAT_10007a48 + 1;
    } while (DAT_10007a48 < 4);
    DAT_10007a48 = 0;
    RunTimer(2,300);
    break;
  case 3:
    iVar2 = GetResource(0,1);
    if (iVar2 < 5000) {
      iVar4 = GetResource(0,1);
      iVar4 = 5000 - iVar4;
      goto LAB_10002820;
    }
    AddResource(0,1,0xffffec78);
    DAT_10007a4c = 0;
    do {
      ProduceUnitFast(&DAT_10007c20,&DAT_10007cf8,&DAT_10007ab8,3);
      DAT_10007a4c = DAT_10007a4c + 1;
    } while (DAT_10007a4c < 4);
    DAT_10007a4c = 0;
    RunTimer(2,300);
    break;
  case 4:
    iVar2 = GetResource(0,1);
    if (iVar2 < 1000) {
      iVar2 = GetResource(0,1);
      iVar4 = 1000;
      goto LAB_1000281d;
    }
    AddResource(0,1,0xfffffc18);
    DAT_10007a54 = 0;
    do {
      ProduceUnitFast(&DAT_10007be8,&DAT_10007a58,&DAT_10007a90,3);
      SetLightSpot(&DAT_10007bb8,3,0xc);
      DAT_10007a54 = DAT_10007a54 + 1;
    } while (DAT_10007a54 < 1);
    RunTimer(2,700);
    break;
  case 5:
    goto switchD_10002115_caseD_6;
  default:
    break;
  }
switchD_100027f7_default:
  cVar1 = Trigg(0x14);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0x1c), cVar1 != '\0')) &&
     (iVar2 = GetUnitsAmount2(&DAT_10007d98,&DAT_10007a80,0), pcVar5 = (void*)&SetTrigg, 0 < iVar2)) {
    SetTrigg(0x14,0);
    ShowPage("#PAGE7");
    FreeTimer(0x14);
    FreeTimer(0x1c);
    SelectUnitsType(&DAT_10007a80,0,0);
    SaveSelectedUnits(0,&DAT_10007a98,0);
    SelectUnitsType(&DAT_10007a80,0,0);
    SelSendTo(0,&DAT_10007d08,0x50,0);
    SelectUnitsType(&DAT_10007a80,0,0);
    SelChangeNation(0,2);
    RunTimer(0x14,1000);
    RunTimer(0x1c,3000);
    SetTrigg(0x59,1);
    pcVar7 = pcVar5;
  }
  cVar1 = Trigg(0x59);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x14), pcVar5 = (void*)&GetUnitsByNation, cVar1 != '\0'))
  {
    SetTrigg(0x59,0);
    iVar2 = GetUnitsByNation(&DAT_10007a98,2);
    uVar3 = GetUnitsByNation(&DAT_10007a98,2,iVar2 * 300);
    ShowPageParam("#PAGE8",uVar3);
    iVar2 = GetUnitsByNation(&DAT_10007a98,2);
    AddResource(0,1,iVar2 * 300);
    SetTrigg(0x14,1);
  }
  cVar1 = TimerDone(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount2(&DAT_10007d08,&DAT_10007a80,2), 3 < iVar2)) {
    SelectUnitsInZone(&DAT_10007d08,2,0);
    SaveSelectedUnits(2,&DAT_10007a38,0);
    TakeStone(&DAT_10007a38);
    RunTimer(0x1a,2000);
  }
  cVar1 = Trigg(0x18);
  if (cVar1 != '\0') {
    SetTrigg(0x18,0);
    RunTimer(0x18,1000);
  }
  cVar1 = Trigg(0x16);
  if ((((cVar1 != '\0') &&
       (iVar2 = GetUnitsByNation(&DAT_10007ca0,4), pcVar6 = (void*)&SelectUnits, 0 < iVar2)) &&
      (iVar2 = GetUnitsAmount1(&DAT_10007b48,&DAT_10007ca0), pcVar6 = (void*)&SelectUnits, 0 < iVar2))
     && (cVar1 = TimerDone(0x18), pcVar6 = (void*)&SelectUnits, cVar1 != '\0')) {
    SetTrigg(0x16,0);
    SelectUnits(&DAT_10007ca0,0);
    SelSendTo(4,&DAT_10007d58,0x23,0);
    RunTimer(0x16,1000);
    SetTrigg(0x17,1);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x16), cVar1 != '\0')) {
    SetTrigg(0x17,0);
    SelectUnits(&DAT_10007ca0,0);
    SelSendTo(4,&DAT_10007b48,0x80,0);
    SetTrigg(0x16,1);
    SetTrigg(0x18,1);
  }
  cVar1 = Trigg(0x1b);
  if (cVar1 != '\0') {
    SetTrigg(0x1b,0);
    RunTimer(0x1b,0x44c);
  }
  cVar1 = Trigg(0x19);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007d68,4), 0 < iVar2)) &&
     ((iVar2 = GetUnitsAmount1(&DAT_10007d58,&DAT_10007d68), 0 < iVar2 &&
      (cVar1 = TimerDone(0x1b), cVar1 != '\0')))) {
    SetTrigg(0x19,0);
    SelectUnits(&DAT_10007d68,0);
    SelSendTo(4,&DAT_10007b48,0x23,0);
    RunTimer(0x19,900);
    SetTrigg(0x1a,1);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x19), cVar1 != '\0')) {
    SetTrigg(0x1a,0);
    SelectUnits(&DAT_10007d68,0);
    SelSendTo(4,&DAT_10007d58,0x80,0);
    SetTrigg(0x19,1);
    SetTrigg(0x1b,1);
  }
  cVar1 = Trigg(0x28);
  if (cVar1 != '\0') {
    SetTrigg(0x28,0);
    SelectUnits(&DAT_10007da0,0);
    Patrol(2,&DAT_10007a00,0);
    SelectUnits(&DAT_10007ad8,0);
    Patrol(2,&DAT_10007bd8,0);
    SelectUnits(&DAT_10007ad0,0);
    Patrol(2,&DAT_10007bd0,0);
  }
  cVar1 = Trigg(0x60);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007ba0,5), pcVar8 = (void*)&ShowPage, iVar2 == 0))
     && (iVar2 = GetUnitsAmount0(&DAT_10007d60,0), pcVar8 = (void*)&ShowPage, 0 < iVar2)) {
    SetTrigg(0x60,0);
    ShowPage("#PAGE12");
    SelectUnits(&DAT_10007d88,0);
    SelErase(7);
    CreateObject0(&DAT_10007b60,&DAT_10007ae0,&DAT_10007a30,7,&DAT_10007d60,0);
    AddResource(0,1,3000);
  }
  cVar1 = Trigg(0x62);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007c98,4), iVar2 == 0)) {
    SetTrigg(0x62,0);
    ShowPage("#PAGE14");
    ShowVictory();
  }
  cVar1 = Trigg(0x61);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007d30,0), iVar2 == 0)) {
    SetTrigg(0x61,0);
    ShowPage("#PAGE13");
    LooseGame();
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007ca0,0), 0 < iVar2)) {
    SetTrigg(0x37,0);
    SelectUnits(&DAT_10007ca0,0);
    SelDie(0);
  }
  cVar1 = Trigg(0x38);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007d68,0), 0 < iVar2)) {
    SetTrigg(0x38,0);
    SelectUnits(&DAT_10007d68,0);
    SelDie(0);
  }
  return;
switchD_10002115_caseD_6:
  RunTimer(5,5000);
  SetTrigg(0x10,0);
  goto LAB_100026a3;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
