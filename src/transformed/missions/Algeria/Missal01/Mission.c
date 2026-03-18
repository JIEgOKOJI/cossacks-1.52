#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10008284[] = "Z31";
char DAT_10008288[] = "Z30";
char DAT_1000828c[] = "Z29B";
char DAT_10008294[] = "Z29A";
char DAT_1000829c[] = "Z29";
char DAT_100082a0[] = "Z28";
char DAT_100082a4[] = "Z27";
char DAT_100082a8[] = "Z26";
char DAT_100082ac[] = "Z25";
char DAT_100082b0[] = "Z24";
char DAT_100082b4[] = "Z23A";
char DAT_100082bc[] = "Z23";
char DAT_100082c0[] = "Z22A";
char DAT_100082c8[] = "Z22";
char DAT_100082cc[] = "Z21A";
char DAT_100082d4[] = "Z21";
char DAT_100082d8[] = "Z20A";
char DAT_100082e0[] = "Z20";
char DAT_100082e4[] = "Z19F";
char DAT_100082ec[] = "Z19E";
char DAT_100082f4[] = "Z19D";
char DAT_100082fc[] = "Z19C";
char DAT_10008304[] = "Z19B";
char DAT_1000830c[] = "Z19A";
char DAT_10008314[] = "Z19";
char DAT_10008318[] = "Z18B";
char DAT_10008320[] = "Z18A";
char DAT_10008328[] = "Z18";
char DAT_1000832c[] = "Z17A";
char DAT_10008334[] = "Z17";
char DAT_10008338[] = "Z16";
char DAT_1000833c[] = "Z15A";
char DAT_10008344[] = "Z15";
char DAT_10008348[] = "Z14";
char DAT_1000834c[] = "Z13A";
char DAT_10008354[] = "Z13";
char DAT_10008358[] = "Z12";
char DAT_1000835c[] = "Z11";
char DAT_10008360[] = "Z10";
char DAT_10008364[] = "Z9";
char DAT_10008368[] = "Z8A";
char DAT_1000836c[] = "Z8";
char DAT_10008370[] = "Z7A";
char DAT_10008374[] = "Z7";
char DAT_10008378[] = "Z6";
char DAT_1000837c[] = "Z5";
char DAT_10008380[] = "Z4";
char DAT_10008384[] = "Z3";
char DAT_10008388[] = "Z2";
char DAT_1000838c[] = "Z1";
char DAT_10008390[] = "G28";
char DAT_10008394[] = "G27";
char DAT_10008398[] = "G26";
char DAT_1000839c[] = "G25";
char DAT_100083a0[] = "G24";
char DAT_100083a4[] = "G23";
char DAT_100083a8[] = "G22";
char DAT_100083ac[] = "G21";
char DAT_100083b0[] = "G20";
char DAT_100083b4[] = "G19";
char DAT_100083b8[] = "G18";
char DAT_100083bc[] = "G17";
char DAT_100083c0[] = "G16";
char DAT_100083c4[] = "G15A";
char DAT_100083cc[] = "G15";
char DAT_100083d0[] = "G14";
char DAT_100083d4[] = "G13";
char DAT_100083d8[] = "G12D";
char DAT_100083e0[] = "G12C";
char DAT_100083e8[] = "G12B";
char DAT_100083f0[] = "G12A";
char DAT_100083f8[] = "G12";
char DAT_100083fc[] = "G11";
char DAT_10008400[] = "G10";
char DAT_10008404[] = "G9B";
char DAT_10008408[] = "G9";
char DAT_1000840c[] = "G8A";
char DAT_10008410[] = "G8";
char DAT_10008414[] = "G7A";
char DAT_10008418[] = "G7";
char DAT_1000841c[] = "G6";
char DAT_10008420[] = "G5A";
char DAT_10008424[] = "G5";
char DAT_10008428[] = "G4";
char DAT_1000842c[] = "G3";
char DAT_10008430[] = "G2";
char DAT_10008434[] = "G1E";
char DAT_10008438[] = "G1D";
char DAT_1000843c[] = "G1C";
char DAT_10008440[] = "G1B";
char DAT_10008444[] = "G1A";
char DAT_10008448[] = "G1";
long long DAT_10008970 = 0;
long long DAT_10008978 = 0;
long long DAT_10008980 = 0;
long long DAT_10008988 = 0;
long long DAT_10008990 = 0;
long long DAT_10008998 = 0;
long long DAT_100089a0 = 0;
long long DAT_100089a8 = 0;
long long DAT_100089b0 = 0;
long long DAT_100089b8 = 0;
long long DAT_100089c0 = 0;
long long DAT_100089c8 = 0;
long long DAT_100089d0 = 0;
long long DAT_100089d8 = 0;
long long DAT_100089e0 = 0;
long long DAT_100089e8 = 0;
long long DAT_100089f0 = 0;
long long DAT_100089f8 = 0;
long long DAT_10008a00 = 0;
long long DAT_10008a08 = 0;
long long DAT_10008a10 = 0;
long long DAT_10008a18 = 0;
long long DAT_10008a20 = 0;
long long DAT_10008a28 = 0;
long long DAT_10008a30 = 0;
long long DAT_10008a38 = 0;
long long DAT_10008a40 = 0;
long long DAT_10008a48 = 0;
long long DAT_10008a50 = 0;
long long DAT_10008a58 = 0;
long long DAT_10008a60 = 0;
long long DAT_10008a68 = 0;
long long DAT_10008a70 = 0;
long long DAT_10008a78 = 0;
long long DAT_10008a80 = 0;
long long DAT_10008a88 = 0;
long long DAT_10008a90 = 0;
long long DAT_10008a98 = 0;
long long DAT_10008aa0 = 0;
long long DAT_10008aa8 = 0;
long long DAT_10008ab0 = 0;
long long DAT_10008ab8 = 0;
long long DAT_10008ac0 = 0;
long long DAT_10008ac8 = 0;
long long DAT_10008ad0 = 0;
long long DAT_10008ad8 = 0;
long long DAT_10008ae0 = 0;
long long DAT_10008ae8 = 0;
long long DAT_10008af0 = 0;
long long DAT_10008af8 = 0;
long long DAT_10008b00 = 0;
long long DAT_10008b08 = 0;
long long DAT_10008b10 = 0;
long long DAT_10008b18 = 0;
long long DAT_10008b20 = 0;
long long DAT_10008b28 = 0;
long long DAT_10008b30 = 0;
long long DAT_10008b38 = 0;
long long DAT_10008b40 = 0;
long long DAT_10008b48 = 0;
long long DAT_10008b50 = 0;
long long DAT_10008b58 = 0;
long long DAT_10008b60 = 0;
long long DAT_10008b68 = 0;
long long DAT_10008b70 = 0;
long long DAT_10008b78 = 0;
long long DAT_10008b80 = 0;
long long DAT_10008b88 = 0;
long long DAT_10008b90 = 0;
long long DAT_10008b98 = 0;
long long DAT_10008ba0 = 0;
long long DAT_10008ba8 = 0;
long long DAT_10008bb0 = 0;
long long DAT_10008bb8 = 0;
long long DAT_10008bc0 = 0;
long long DAT_10008bc8 = 0;
long long DAT_10008bd0 = 0;
long long DAT_10008bd8 = 0;
long long DAT_10008be0 = 0;
long long DAT_10008be8 = 0;
long long DAT_10008bf0 = 0;
long long DAT_10008bf8 = 0;
long long DAT_10008c00 = 0;
long long DAT_10008c08 = 0;
int DAT_10008c10 = 0;
long long DAT_10008c18 = 0;
long long DAT_10008c20 = 0;
long long DAT_10008c28 = 0;
long long DAT_10008c30 = 0;
long long DAT_10008c38 = 0;
long long DAT_10008c40 = 0;
long long DAT_10008c48 = 0;
long long DAT_10008c50 = 0;
long long DAT_10008c58 = 0;
long long DAT_10008c60 = 0;
long long DAT_10008c68 = 0;
long long DAT_10008c70 = 0;
long long DAT_10008c78 = 0;
long long DAT_10008c80 = 0;
long long DAT_10008c88 = 0;
long long DAT_10008c90 = 0;
long long DAT_10008c98 = 0;
long long DAT_10008ca0 = 0;
long long DAT_10008ca8 = 0;
long long DAT_10008cb0 = 0;
long long DAT_10008cb8 = 0;
long long DAT_10008cc0 = 0;
long long DAT_10008cc8 = 0;
long long DAT_10008cd0 = 0;
long long DAT_10008cd8 = 0;
long long DAT_10008ce0 = 0;
long long DAT_10008ce8 = 0;
long long DAT_10008cf0 = 0;
long long DAT_10008cf8 = 0;
long long DAT_10008d00 = 0;
long long DAT_10008d08 = 0;
long long DAT_10008d10 = 0;
long long DAT_10008d18 = 0;
long long DAT_10008d20 = 0;
long long DAT_10008d28 = 0;
long long DAT_10008d30 = 0;
long long DAT_10008d38 = 0;
long long DAT_10008d40 = 0;
long long DAT_10008d48 = 0;
long long DAT_10008d50 = 0;
long long DAT_10008d58 = 0;
long long DAT_10008d60 = 0;
long long DAT_10008d68 = 0;
int DAT_10008d70 = 0;
long long DAT_10008d78 = 0;
long long DAT_10008d80 = 0;
long long DAT_10008d88 = 0;
long long DAT_10008d90 = 0;
long long DAT_10008d98 = 0;
long long DAT_10008da0 = 0;
long long DAT_10008da8 = 0;
long long DAT_10008db0 = 0;
long long DAT_10008db8 = 0;
long long DAT_10008dc0 = 0;
long long DAT_10008dc8 = 0;
long long DAT_10008dd0 = 0;
long long DAT_10008dd8 = 0;
long long DAT_10008de0 = 0;
long long DAT_10008de8 = 0;
long long DAT_10008df0 = 0;
long long DAT_10008df8 = 0;
long long DAT_10008e00 = 0;
long long DAT_10008e08 = 0;
int DAT_10008988_ovl = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10008a68,DAT_10008448);
  RegisterUnits(&DAT_10008b70,DAT_10008444);
  RegisterUnits(&DAT_10008b78,DAT_10008440);
  RegisterUnits(&DAT_10008b80,DAT_1000843c);
  RegisterUnits(&DAT_10008b88,DAT_10008438);
  RegisterUnits(&DAT_10008b98,DAT_10008434);
  RegisterUnits(&DAT_10008a70,DAT_10008430);
  RegisterUnits(&DAT_10008a78,DAT_1000842c);
  RegisterUnits(&DAT_10008a80,DAT_10008428);
  RegisterUnits(&DAT_10008a88,DAT_10008424);
  RegisterUnits(&DAT_10008be0,DAT_10008420);
  RegisterUnits(&DAT_10008a90,DAT_1000841c);
  RegisterUnits(&DAT_10008a98,DAT_10008418);
  RegisterUnits(&DAT_10008be8,DAT_10008414);
  RegisterUnits(&DAT_10008aa0,DAT_10008410);
  RegisterUnits(&DAT_10008bf0,DAT_1000840c);
  RegisterUnits(&DAT_10008aa8,DAT_10008408);
  RegisterUnits(&DAT_10008bf8,DAT_10008404);
  RegisterUnits(&DAT_10008ad0,DAT_10008400);
  RegisterUnits(&DAT_10008ad8,DAT_100083fc);
  RegisterUnits(&DAT_10008ae8,DAT_100083f8);
  RegisterUnits(&DAT_10008c88,DAT_100083f0);
  RegisterUnits(&DAT_10008ca0,DAT_100083e8);
  RegisterUnits(&DAT_10008cb8,DAT_100083e0);
  RegisterUnits(&DAT_10008cd0,DAT_100083d8);
  RegisterUnits(&DAT_10008af0,DAT_100083d4);
  RegisterUnits(&DAT_10008b00,DAT_100083d0);
  RegisterUnits(&DAT_10008b10,DAT_100083cc);
  RegisterUnits(&DAT_10008d28,DAT_100083c4);
  RegisterUnits(&DAT_10008b20,DAT_100083c0);
  RegisterUnits(&DAT_10008b30,DAT_100083bc);
  RegisterUnits(&DAT_10008b40,DAT_100083b8);
  RegisterUnits(&DAT_10008b50,DAT_100083b4);
  RegisterUnits(&DAT_10008af8,DAT_100083b0);
  RegisterUnits(&DAT_10008b08,DAT_100083ac);
  RegisterUnits(&DAT_10008b08,DAT_100083ac);
  RegisterUnits(&DAT_10008b18,DAT_100083a8);
  RegisterUnits(&DAT_10008b28,DAT_100083a4);
  RegisterUnits(&DAT_10008b38,DAT_100083a0);
  RegisterUnits(&DAT_10008b48,DAT_1000839c);
  RegisterUnits(&DAT_10008b58,DAT_10008398);
  RegisterUnits(&DAT_10008b60,DAT_10008394);
  RegisterUnits(&DAT_10008b68,DAT_10008390);
  RegisterZone(&DAT_10008b90,DAT_1000838c);
  RegisterZone(&DAT_10008ba0,DAT_10008388);
  RegisterZone(&DAT_10008ba8,DAT_10008384);
  RegisterZone(&DAT_10008bb0,DAT_10008380);
  RegisterZone(&DAT_10008bb8,DAT_1000837c);
  RegisterZone(&DAT_10008bc0,DAT_10008378);
  RegisterZone(&DAT_10008bc8,DAT_10008374);
  RegisterZone(&DAT_10008d40,DAT_10008370);
  RegisterZone(&DAT_10008bd0,DAT_1000836c);
  RegisterZone(&DAT_10008d48,DAT_10008368);
  RegisterZone(&DAT_10008bd8,DAT_10008364);
  RegisterZone(&DAT_10008c58,DAT_10008360);
  RegisterZone(&DAT_10008c60,DAT_1000835c);
  RegisterZone(&DAT_10008c68,DAT_10008358);
  RegisterZone(&DAT_10008c70,DAT_10008354);
  RegisterZone(&DAT_10008d78,DAT_1000834c);
  RegisterZone(&DAT_10008c80,DAT_10008348);
  RegisterZone(&DAT_10008c98,DAT_10008344);
  RegisterZone(&DAT_10008d90,DAT_1000833c);
  RegisterZone(&DAT_10008cb0,DAT_10008338);
  RegisterZone(&DAT_10008cc8,DAT_10008334);
  RegisterZone(&DAT_10008da8,DAT_1000832c);
  RegisterZone(&DAT_10008ce0,DAT_10008328);
  RegisterZone(&DAT_10008db0,DAT_10008320);
  RegisterZone(&DAT_10008db8,DAT_10008318);
  RegisterZone(&DAT_10008cf8,DAT_10008314);
  RegisterZone(&DAT_10008dc0,DAT_1000830c);
  RegisterZone(&DAT_10008dc8,DAT_10008304);
  RegisterZone(&DAT_10008dd0,DAT_100082fc);
  RegisterZone(&DAT_10008dd8,DAT_100082f4);
  RegisterZone(&DAT_10008de0,DAT_100082ec);
  RegisterZone(&DAT_10008df0,DAT_100082e4);
  RegisterZone(&DAT_10008c78,DAT_100082e0);
  RegisterZone(&DAT_10008d80,DAT_100082d8);
  RegisterZone(&DAT_10008c90,DAT_100082d4);
  RegisterZone(&DAT_10008d88,DAT_100082cc);
  RegisterZone(&DAT_10008ca8,DAT_100082c8);
  RegisterZone(&DAT_10008d98,DAT_100082c0);
  RegisterZone(&DAT_10008cc0,DAT_100082bc);
  RegisterZone(&DAT_10008da0,DAT_100082b4);
  RegisterZone(&DAT_10008cd8,DAT_100082b0);
  RegisterZone(&DAT_10008cf0,DAT_100082ac);
  RegisterZone(&DAT_10008d08,DAT_100082a8);
  RegisterZone(&DAT_10008d10,DAT_100082a4);
  RegisterZone(&DAT_10008d18,DAT_100082a0);
  RegisterZone(&DAT_10008d20,DAT_1000829c);
  RegisterZone(&DAT_10008df8,DAT_10008294);
  RegisterZone(&DAT_10008e00,DAT_1000828c);
  RegisterZone(&DAT_10008ce8,DAT_10008288);
  RegisterZone(&DAT_10008d00,DAT_10008284);
  RegisterDynGroup(&DAT_10008ac0);
  RegisterDynGroup(&DAT_10008a28);
  RegisterDynGroup(&DAT_10008a38);
  RegisterDynGroup(&DAT_10008a40);
  RegisterDynGroup(&DAT_10008a48);
  RegisterDynGroup(&DAT_10008a50);
  RegisterDynGroup(&DAT_10008a58);
  RegisterDynGroup(&DAT_10008a60);
  RegisterVar(&DAT_10008d38,8);
  RegisterVar(&DAT_10008d50,8);
  RegisterVar(&DAT_10008d58,8);
  RegisterVar(&DAT_10008ab0,8);
  RegisterVar(&DAT_10008ac8,8);
  RegisterVar(&DAT_10008ab8,8);
  RegisterVar(&DAT_10008ae0,8);
  RegisterVar(&DAT_10008c10,4);
  RegisterUnitType(&DAT_10008990,"PERES_KOR(sp)");
  RegisterUnitType(&DAT_10008c18,"Fregat(sp)");
  RegisterUnitType(&DAT_100089e8,"Center_Algir(AL)");
  RegisterUnitType(&DAT_100089f0,"Dom_Algir(AL)");
  RegisterUnitType(&DAT_100089f8,"Rinok_Turki(AL)");
  RegisterUnitType(&DAT_10008a00,"Kuznia_Turki(AL)");
  RegisterUnitType(&DAT_10008a08,"Mechet_Turki(AL)");
  RegisterUnitType(&DAT_10008a10,"Minaret(AL)");
  RegisterUnitType(&DAT_10008a18,"Diplomatic_Turki(AL)");
  RegisterUnitType(&DAT_10008a20,"Barack_Turki(AL)");
  RegisterUnitType(&DAT_10008a30,"Konushnia_Turki(AL)");
  RegisterUnitType(&DAT_100089b0,"Art_Depo_Turki(AL)");
  RegisterUnitType(&DAT_100089b8,"Bashnia_3(AL)");
  RegisterUnitType(&DAT_100089c0,"WALL_TU(AL)");
  RegisterUnitType(&DAT_100089d0,"WALL_UKR(AL)");
  RegisterUnitType(&DAT_100089d8,"Port(AL)");
  RegisterUnitType(&DAT_100089e0,"Melnica_tu(AL)");
  RegisterUnitType(&DAT_100089a8,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_10008c08,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_10008998,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_10008de8,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_10008d60,"Mameluk(AL)");
  RegisterUnitType(&DAT_100089c8,"Mortira_b(AL)");
  RegisterUnitType(&DAT_10008d30,"GALERA(AL)");
  RegisterUnitType(&DAT_10008980,"PERES_KOR(AL)");
  RegisterUnitType(&DAT_10008c20,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_10008c50,"SUNDUK1O(UN)");
  RegisterUnitType(&DAT_10008c40,"SUNDUK2Z(UN)");
  RegisterUnitType(&DAT_10008c48,"SUNDUK2O(UN)");
  RegisterFormation(&DAT_10008c38,"#ALONE");
  RegisterFormation(&DAT_10008c30,"#PACK20");
  RegisterFormation(&DAT_10008c28,"#LINEMORB11");
  RegisterFormation(&DAT_10008978,"#SQUARE36");
  RegisterFormation(&DAT_10008970,"#SHIPS12");
  RegisterFormation(&DAT_10008e08,"#SHIPSN5");
  RegisterUpgrade(&DAT_100089a0,"AKA06AL");
  RegisterUpgrade(&DAT_10008d68,"AKA29AL");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(3,9);
  ChangeFriends(4,0x19);
  ChangeFriends(5,0x28);
  DAT_10008d70 = 0;
  SetPlayerName(1,"SPAIN");
  SetPlayerName(3,"NEIRBORG");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"NOMADS");
  EnableUnit(0,&DAT_100089e8,0);
  EnableUnit(0,&DAT_100089f0,0);
  EnableUnit(0,&DAT_100089f8,0);
  EnableUnit(0,&DAT_10008a00,0);
  EnableUnit(0,&DAT_10008a08,0);
  EnableUnit(0,&DAT_10008a10,0);
  EnableUnit(0,&DAT_10008a18,0);
  EnableUnit(0,&DAT_10008a20,0);
  EnableUnit(0,&DAT_10008a30,0);
  EnableUnit(0,&DAT_100089b0,0);
  EnableUnit(0,&DAT_100089b8,0);
  EnableUnit(0,&DAT_100089c0,0);
  EnableUnit(0,&DAT_100089d0,0);
  EnableUnit(0,&DAT_100089d8,0);
  EnableUnit(0,&DAT_100089e0,0);
  EnableUnit(0,&DAT_100089c8,0);
  EnableUnit(0,&DAT_10008980,0);
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pcVar4;
  int uVar5;
  int *puVar6;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    InitialUpgrade(DAT_100083b4,"AKA06SP");
    InitialUpgrade(DAT_100083b4,"AKA30SP");
    InitialUpgrade(DAT_100083b0,"AKA04SP");
    InitialUpgrade(DAT_100083b0,"KUZ01SP");
    iVar2 = GetDiff(0);
    if (1 < iVar2) {
      InitialUpgrade(DAT_100083cc,"AKA30AL");
    }
    DAT_10008988_ovl = 1;
    DisableUpgrade(0,&DAT_100089a0);
    DisableUpgrade(0,&DAT_10008d68);
    SetTrigg(99,0);
    CreateObject0(&DAT_10008ab0,&DAT_10008c38,&DAT_10008c20,4,&DAT_10008bc8,0);
    CreateObject0(&DAT_10008ab8,&DAT_10008c38,&DAT_10008c40,4,&DAT_10008bd0,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,(7 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,1,(6 - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,0,iVar2 * -0x96 + 1000);
    SetResource(0,2,0);
    iVar2 = GetDiff(0);
    SetResource(0,5,(4 - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,4,(6 - iVar2) * 500);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,500000);
      SetResource(0,5,50000);
      SetResource(0,4,50000);
      SetResource(0,1,10000);
      SetLightSpot(&DAT_10008bd8,3,2);
      InitialUpgrade(DAT_1000843c,"AKA30AL");
      SelectUnits(&DAT_10008be8,0);
      SelDie(5);
    }
    ShowPage("#PAGE0");
    TakeFood(&DAT_10008aa0);
    TakeWood(&DAT_10008bf0);
    TakeFood(&DAT_10008af8);
    SelectUnits(&DAT_10008a78,0);
    SelOpenGates(3);
    ProduceUnit(&DAT_10008b40,&DAT_10008990,&DAT_10008a28);
    ProduceUnit(&DAT_10008b50,&DAT_10008c18,&DAT_10008a38);
    CreateObject0(&DAT_10008d38,&DAT_10008c30,&DAT_100089a8,1,&DAT_10008db0,0x80);
    RunTimer(3,2000);
    RunTimer(6,500);
    iVar2 = GetDiff(0);
    RunTimer(7,(8 - iVar2) * 1000);
    SetTrigg(0xb,0);
    SetTrigg(0xf,0);
    SetTrigg(0x10,0);
    SetTrigg(0x4a,0);
    SelectUnits(&DAT_10008b78,0);
    SelChangeNation(0,4);
    SelectUnits(&DAT_10008be0,0);
    SelChangeNation(3,4);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x47);
    DisableMission(0x48);
    DisableMission(0x4a);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
  }
  cVar1 = Trigg(9);
  if ((cVar1 == '\0') && (DAT_10008d70 == 0)) {
    DAT_10008d70 = 1;
    ChangeFriends(3,8);
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_10008a70);
    iVar3 = GetResource(0,0);
    if ((((iVar2 * 1000 <= iVar3) && (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)) &&
        (cVar1 = Trigg(9), cVar1 != '\0')) && (iVar2 = GetTotalAmount0(&DAT_10008b78), 0 < iVar2)) {
      SetTrigg(1,0);
      ShowPage("#PAGE1");
    }
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = Trigg(1), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10008a70);
    iVar3 = GetResource(0,0);
    if ((iVar2 * 1000 <= iVar3) && (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)) {
      iVar2 = GetTotalAmount0(&DAT_10008a70);
      iVar3 = GetUnitsAmount1(&DAT_10008ba0,&DAT_10008a70);
      if (((iVar3 == iVar2) && (cVar1 = Trigg(9), cVar1 != '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008b78), 0 < iVar2)) {
        SetTrigg(2,0);
        ShowPage("#PAGE2");
        iVar2 = GetTotalAmount0(&DAT_10008a70);
        AddResource(0,0,iVar2 * -1000);
        SetLightSpot(&DAT_10008ba8,1,1);
      }
    }
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10008a70);
    iVar3 = GetUnitsAmount1(&DAT_10008ba8,&DAT_10008a70);
    if ((iVar3 == iVar2) && (cVar1 = Trigg(9), cVar1 != '\0')) {
      SetTrigg(1,0);
      SetTrigg(2,0);
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a70);
      ShowPageParam("#PAGE3",(10 - iVar2) * iVar3 * 0x32);
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a70);
      AddResource(0,1,(10 - iVar2) * iVar3 * 0x32);
      ClearLightSpot(1);
    }
  }
  iVar2 = GetUnitsAmount1(&DAT_10008bb0,&DAT_10008a70);
  if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10008a90), iVar2 < 1)) {
    iVar2 = GetUnitsAmount0(&DAT_10008bb8,0);
    if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008a90), 0 < iVar2)) {
      AttackEnemyInZone(&DAT_10008a90,&DAT_10008bb8,0);
    }
  }
  else {
    SelectUnits(&DAT_10008a90,0);
    SelAttackGroup(5,&DAT_10008a70);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a90), iVar2 == 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE4");
    AddResource(0,1,0x17);
    SelectUnits(&DAT_10008a98,0);
    SelSendAndKill(5,&DAT_10008bc0,0x80,0);
    SelSendAndKill(5,&DAT_10008b90,0x80,2);
  }
  iVar2 = GetUnitsAmount0(&DAT_10008bd8,0);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008aa8), 0 < iVar2)) {
    SetTrigg(0x32,0);
    cVar1 = Trigg(5);
    if (cVar1 != '\0') {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
    }
    AttackEnemyInZone(&DAT_10008aa8,&DAT_10008bd8,0);
  }
  cVar1 = Trigg(0x32);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008bd8,0), iVar2 == 0)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008aa8), 0 < iVar2)) {
    SetTrigg(0x32,0);
    RunTimer(1,200);
  }
  cVar1 = Trigg(0x32);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008aa8), 0 < iVar2)) {
    FreeTimer(1);
    SelectUnits(&DAT_10008aa8,0);
    SelSendAndKill(5,&DAT_10008bd8,0x96,0);
  }
  iVar2 = GetUnitsAmount0(&DAT_10008c58,0);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008ad0), 0 < iVar2)) {
    SetTrigg(0x33,0);
    AttackEnemyInZone(&DAT_10008ad0,&DAT_10008c58,0);
  }
  cVar1 = Trigg(0x33);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008c58,0), iVar2 == 0)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008ad0), 0 < iVar2)) {
    SetTrigg(0x33,0);
    RunTimer(2,200);
  }
  cVar1 = Trigg(0x33);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008ad0), 0 < iVar2)) {
    FreeTimer(2);
    SelectUnits(&DAT_10008ad0,0);
    SelSendAndKill(5,&DAT_10008c58,0x50,0);
  }
  cVar1 = Trigg(6);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x34), cVar1 != '\0')) &&
     ((iVar2 = GetUnitsAmount0(&DAT_10008c60,0), 0 < iVar2 &&
      (iVar2 = GetTotalAmount0(&DAT_10008ad8), 0 < iVar2)))) {
    SetTrigg(6,0);
    SetTrigg(0x34,0);
    cVar1 = AskQuestion("#PAGE6");
    if (cVar1 == '\0') {
      ShowPage("#PAGE6B");
    }
    else {
      SetTrigg(0x35,0);
      iVar2 = GetResource(0,1);
      if (iVar2 < 2000) {
        ShowPage("#PAGE6D");
        SelectUnits(&DAT_10008ad8,0);
        SelChangeNation(4,5);
      }
      else {
        ShowPage("#PAGE6A");
        AddResource(0,1,-2000);
        SelectUnits(&DAT_10008ad8,0);
        SelChangeNation(4,0);
      }
    }
  }
  cVar1 = Trigg(0x34);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008c60,0), iVar2 == 0)) {
    SetTrigg(0x34,0);
  }
  cVar1 = Trigg(0x34);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0x35), cVar1 != '\0')) &&
      (cVar1 = Trigg(6), cVar1 == '\0')) && (iVar2 = GetUnitsAmount0(&DAT_10008c60,0), 0 < iVar2)) {
    SetTrigg(0x34,0);
    cVar1 = AskQuestion("#PAGE6C");
    if (cVar1 == '\0') {
      ShowPage("#PAGE6B");
    }
    else {
      SetTrigg(0x35,0);
      iVar2 = GetResource(0,1);
      if (iVar2 < 2000) {
        ShowPage("#PAGE6D");
        SelectUnits(&DAT_10008ad8,0);
        SelChangeNation(4,5);
      }
      else {
        ShowPage("#PAGE6A");
        AddResource(0,1,-2000);
        SelectUnits(&DAT_10008ad8,0);
        SelChangeNation(4,0);
      }
    }
  }
  cVar1 = Trigg(7);
  if (((cVar1 != '\0') &&
      (iVar2 = GetUnitsAmount0(&DAT_10008bc8,0), pcVar4 = (void*)&GetDiff, 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008d40,5), pcVar4 = (void*)&GetDiff, iVar2 == 0)) {
    SetTrigg(7,0);
    iVar2 = GetDiff(0);
    ShowPageParam("#PAGE8",(6 - iVar2) * 500);
    iVar2 = GetDiff(0);
    AddResource(0,1,(6 - iVar2) * 500);
    ClearSelection(4);
    SelectUnits(&DAT_10008ab0,0);
    SelErase(4);
    CreateObject0(&DAT_10008ac8,&DAT_10008c38,&DAT_10008c50,4,&DAT_10008bc8,0);
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008bd0,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008d48,5), iVar2 == 0)) {
    SetTrigg(8,0);
    iVar2 = GetDiff(0);
    ShowPageParam("#PAGE8",(9 - iVar2) * 500);
    iVar2 = GetDiff(0);
    AddResource(0,1,(9 - iVar2) * 500);
    ClearSelection(4);
    SelectUnits(&DAT_10008ab8,0);
    SelErase(4);
    CreateObject0(&DAT_10008ae0,&DAT_10008c38,&DAT_10008c48,4,&DAT_10008bd0,0);
  }
  cVar1 = Trigg(9);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if ((7 - iVar2) * 5000 < iVar3) {
      SetTrigg(9,0);
      cVar1 = Trigg(2);
      if (cVar1 == '\0') {
        ClearLightSpot(1);
      }
      ShowPage("#PAGE9");
      ChangeFriends(3,8);
      DisableMission(0x4e);
      EnableMission(0x44);
      iVar2 = GetDiff(0);
      if (iVar2 == 0) {
        ShowPage("#OTST3");
        SetLightSpot(&DAT_10008d20,1,7);
      }
    }
  }
  cVar1 = Trigg(0x15);
  if (cVar1 != '\0') {
    cVar1 = Trigg(9);
    if (((cVar1 == '\0') && (cVar1 = CheckProduction(&DAT_10008b38), cVar1 != '\0')) &&
       (iVar2 = GetTotalAmount0(&DAT_10008b38), 0 < iVar2)) {
      cVar1 = Trigg(0x37);
      if (cVar1 == '\0') {
        puVar6 = &DAT_10008a48;
      }
      else {
        puVar6 = &DAT_10008a40;
      }
      ProduceUnit(&DAT_10008b38,&DAT_10008998,puVar6);
    }
    cVar1 = Trigg(9);
    if (((cVar1 == '\0') && (cVar1 = CheckProduction(&DAT_10008b48), cVar1 != '\0')) &&
       (iVar2 = GetTotalAmount0(&DAT_10008b48), 0 < iVar2)) {
      cVar1 = Trigg(0x37);
      if (cVar1 == '\0') {
        puVar6 = &DAT_10008a48;
      }
      else {
        puVar6 = &DAT_10008a40;
      }
      ProduceUnit(&DAT_10008b48,&DAT_10008de8,puVar6);
    }
    cVar1 = Trigg(0x37);
    if (cVar1 != '\0') {
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a40);
      if ((iVar2 + 2) * 0x32 < iVar3) {
        SetTrigg(0x37,0);
        SetTrigg(0x38,0);
        RunTimer(8,200);
      }
    }
    cVar1 = Trigg(0x37);
    if (cVar1 == '\0') {
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a48);
      if ((iVar2 + 2) * 0x32 < iVar3) {
        SetTrigg(0x37,0);
        SetTrigg(0x38,0);
        RunTimer(8,200);
      }
    }
    cVar1 = TimerDoneFirst(8);
    if (cVar1 != '\0') {
      cVar1 = Trigg(0x37);
      if (cVar1 == '\0') {
        puVar6 = &DAT_10008a40;
      }
      else {
        puVar6 = &DAT_10008a48;
      }
      SelectUnits(puVar6,0);
      SelSendAndKill(3,&DAT_10008c70,0,0);
      SelSendAndKill(3,&DAT_10008bb0,0,2);
    }
    cVar1 = Trigg(0x38);
    if (((cVar1 == '\0') && (cVar1 = Trigg(0x37), cVar1 != '\0')) &&
       (iVar2 = GetUnitsAmount1(&DAT_10008cf0,&DAT_10008a48), iVar2 < 3)) {
      SetTrigg(0x38,0);
    }
    cVar1 = Trigg(0x38);
    if (((cVar1 == '\0') && (cVar1 = Trigg(0x37), cVar1 == '\0')) &&
       (iVar2 = GetUnitsAmount1(&DAT_10008cf0,&DAT_10008a40), iVar2 < 3)) {
      SetTrigg(0x38,0);
    }
    cVar1 = Trigg(0x39);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0x37), cVar1 != '\0')) &&
       (iVar2 = GetTotalAmount0(&DAT_10008a48), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_10008bb0,&DAT_10008a48);
      iVar3 = GetTotalAmount0(&DAT_10008a48);
      if (iVar3 + -5 <= iVar2) {
        SetTrigg(0x39,0);
        SelectUnits(&DAT_10008a48,0);
        SelSendAndKill(3,&DAT_10008b90,0,0);
      }
    }
    cVar1 = Trigg(0x37);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0x39), cVar1 == '\0')) &&
       (iVar2 = GetUnitsAmount1(&DAT_10008b90,&DAT_10008a48), 0 < iVar2)) {
      AttackEnemyInZone(&DAT_10008a48,&DAT_10008b90,0);
    }
    cVar1 = Trigg(0x39);
    if ((cVar1 == '\0') &&
       ((iVar2 = GetTotalAmount0(&DAT_10008a48), iVar2 == 0 || (cVar1 = Trigg(0x37), cVar1 == '\0'))
       )) {
      SetTrigg(0x39,0);
    }
    cVar1 = Trigg(0x3a);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0x37), cVar1 == '\0')) &&
       (iVar2 = GetTotalAmount0(&DAT_10008a40), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_10008bb0,&DAT_10008a40);
      iVar3 = GetTotalAmount0(&DAT_10008a40);
      if (iVar3 + -5 <= iVar2) {
        SetTrigg(0x3a,0);
        SelectUnits(&DAT_10008a40,0);
        SelSendAndKill(3,&DAT_10008b90,0,0);
      }
    }
    cVar1 = Trigg(0x37);
    if (((cVar1 == '\0') && (cVar1 = Trigg(0x3a), cVar1 == '\0')) &&
       (iVar2 = GetUnitsAmount1(&DAT_10008b90,&DAT_10008a40), 0 < iVar2)) {
      AttackEnemyInZone(&DAT_10008a40,&DAT_10008b90,0);
    }
    cVar1 = Trigg(0x3a);
    if ((cVar1 == '\0') &&
       ((iVar2 = GetTotalAmount0(&DAT_10008a40), iVar2 == 0 || (cVar1 = Trigg(0x37), cVar1 != '\0'))
       )) {
      SetTrigg(0x3a,0);
    }
    cVar1 = Trigg(9);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0x3b);
      if (cVar1 != '\0') {
        iVar2 = GetDiff(0);
        iVar3 = GetTotalAmount0(&DAT_10008a50);
        if (((iVar3 < (iVar2 + 2) * 5) && (iVar2 = GetTotalAmount0(&DAT_10008b58), 0 < iVar2)) &&
           (cVar1 = CheckProduction(&DAT_10008b58), cVar1 != '\0')) {
          ProduceUnit(&DAT_10008b58,&DAT_10008d60,&DAT_10008a50);
        }
      }
      cVar1 = Trigg(0x3b);
      if (cVar1 != '\0') {
        iVar2 = GetDiff(0);
        iVar3 = GetTotalAmount0(&DAT_10008a50);
        if ((iVar2 + 2) * 5 <= iVar3) {
          SetTrigg(0x3b,0);
          RunTimer(9,200);
        }
      }
      cVar1 = TimerDoneFirst(9);
      if (cVar1 != '\0') {
        SetTrigg(0x45,0);
        SelectUnits(&DAT_10008a50,0);
        SelSendAndKill(3,&DAT_10008c70,0,0);
        SelSendAndKill(3,&DAT_10008bb8,0xf0,2);
      }
      cVar1 = Trigg(0x45);
      if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008cf0,&DAT_10008a50), iVar2 < 3)) {
        SetTrigg(0x45,0);
      }
      cVar1 = Trigg(0x3b);
      if (((cVar1 == '\0') && (cVar1 = Trigg(0x4e), cVar1 != '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008a50), 0 < iVar2)) {
        iVar2 = GetUnitsAmount1(&DAT_10008bb8,&DAT_10008a50);
        iVar3 = GetTotalAmount0(&DAT_10008a50);
        if (iVar3 + -3 <= iVar2) {
          SetTrigg(0x4e,0);
          SelectUnits(&DAT_10008a50,0);
          SelSendAndKill(3,&DAT_10008cd8,0,0);
        }
      }
      cVar1 = Trigg(0x3b);
      if (((cVar1 == '\0') && (cVar1 = Trigg(0x4e), cVar1 == '\0')) &&
         (iVar2 = GetUnitsAmount1(&DAT_10008cd8,&DAT_10008a50), 0 < iVar2)) {
        AttackEnemyInZone(&DAT_10008a50,&DAT_10008cd8,0);
      }
      cVar1 = Trigg(0x3b);
      if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a50), iVar2 == 0)) {
        SetTrigg(0x3b,0);
        SetTrigg(0x4e,0);
      }
    }
    cVar1 = Trigg(9);
    if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008c70,0), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_10008af0), 0 < iVar2)) {
      AttackEnemyInZone(&DAT_10008af0,&DAT_10008c70,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10008af0);
    iVar3 = GetUnitsAmount1(&DAT_10008d78,&DAT_10008af0);
    if (iVar3 < iVar2) {
      SelectUnits1(3,&DAT_10008af0,0);
      SelSendTo(3,&DAT_10008d78,0,0);
    }
    cVar1 = Trigg(0x38);
    if ((((cVar1 != '\0') && (cVar1 = Trigg(0x45), cVar1 != '\0')) &&
        (cVar1 = Trigg(0x36), cVar1 != '\0')) && (iVar2 = GetTotalAmount0(&DAT_10008a78), 0 < iVar2)
       ) {
      iVar2 = GetUnitsAmount0(&DAT_10008c68,5);
      if ((iVar2 < 1) &&
         ((cVar1 = Trigg(9), cVar1 != '\0' || (iVar2 = GetUnitsAmount0(&DAT_10008c68,0), iVar2 < 1))
         )) {
        iVar2 = GetUnitsAmount1(&DAT_10008c68,&DAT_10008a70);
        iVar3 = GetUnitsAmount0(&DAT_10008c68,0);
        if (iVar3 <= iVar2) goto LAB_10002a70;
      }
      SetTrigg(0x36,0);
      SelectUnits(&DAT_10008a78,0);
      SelCloseGates(3);
    }
LAB_10002a70:
    cVar1 = Trigg(0x36);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0x38);
      if ((cVar1 == '\0') || (cVar1 = Trigg(0x45), cVar1 == '\0')) {
LAB_10002aff:
        SetTrigg(0x36,0);
        SelectUnits(&DAT_10008a78,0);
        SelOpenGates(3);
      }
      else {
        iVar2 = GetTotalAmount0(&DAT_10008a78);
        if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_10008c68,5), iVar2 == 0)) {
          cVar1 = Trigg(9);
          if (cVar1 != '\0') {
            iVar2 = GetUnitsAmount1(&DAT_10008c68,&DAT_10008a70);
            iVar3 = GetUnitsAmount0(&DAT_10008c68,0);
            if (iVar3 == iVar2) goto LAB_10002aff;
          }
          iVar2 = GetUnitsAmount0(&DAT_10008c68,0);
          if (iVar2 == 0) goto LAB_10002aff;
        }
      }
    }
  }
  cVar1 = Trigg(9);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 != '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008c70,0), 0 < iVar2)) {
    SetTrigg(10,0);
    ShowPage("#PAGE10");
  }
  iVar2 = GetTotalAmount0(&DAT_10008b40);
  if (((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008b50), 0 < iVar2)) &&
     (cVar1 = Trigg(0x12), cVar1 != '\0')) {
    cVar1 = Trigg(0x44);
    if ((cVar1 != '\0') && (cVar1 = CheckProduction(&DAT_10008b40), cVar1 != '\0')) {
      SetTrigg(0x44,0);
      RunTimer(5,1000);
    }
    cVar1 = CheckProduction(&DAT_10008b40);
    if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a28), iVar2 == 0)) &&
       (cVar1 = TimerDone(5), cVar1 != '\0')) {
      ProduceUnit(&DAT_10008b40,&DAT_10008990,&DAT_10008a28);
      SetTrigg(0x44,0);
    }
    cVar1 = CheckProduction(&DAT_10008b50);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a38), iVar2 < 4)) {
      ProduceUnit(&DAT_10008b50,&DAT_10008c18,&DAT_10008a38);
    }
    cVar1 = TimerDone(3);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
      cVar1 = Trigg(0x3c);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c78,&DAT_10008a28), iVar2 == 0)) {
        SetTrigg(0x3c,0);
        SelectUnits(&DAT_10008a28,0);
        SelSendTo(1,&DAT_10008c78,0,0);
      }
      cVar1 = Trigg(0x3d);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c78,&DAT_10008a28), 0 < iVar2)) {
        SetTrigg(0x3d,0);
        SelectUnits(&DAT_10008a28,0);
        SelSendTo(1,&DAT_10008ce0,0,0);
        iVar2 = GetTotalAmount0(&DAT_10008d38);
        if (iVar2 == 0) {
          CreateObject0(&DAT_10008d38,&DAT_10008c30,&DAT_100089a8,1,&DAT_10008db0,0x80);
        }
        SelectUnits(&DAT_10008d38,0);
        SelSendTo(1,&DAT_10008db8,0x80,0);
      }
      cVar1 = Trigg(0x3e);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
        SelectUnits(&DAT_10008a28,0);
        cVar1 = CheckLeaveAbility(1);
        if (cVar1 != '\0') {
          SetTrigg(0x3e,0);
          SelectUnits(&DAT_10008a28,0);
          SelectUnits(&DAT_10008d38,1);
          SendUnitsToTransport(1);
        }
      }
      cVar1 = Trigg(0x3f);
      if (((cVar1 != '\0') && (cVar1 = Trigg(0x3e), cVar1 == '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
        SelectUnits(&DAT_10008a28,0);
        iVar2 = GetTotalAmount0(&DAT_10008d38);
        iVar3 = GetNInside(1);
        if (iVar3 == iVar2) {
          SetTrigg(0x3f,0);
          SelectUnits(&DAT_10008a28,0);
          SelSendTo(1,&DAT_10008c90,0x80,0);
        }
      }
      cVar1 = Trigg(0x40);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c90,&DAT_10008a28), 0 < iVar2)) {
        SetTrigg(0x40,0);
        SelectUnits(&DAT_10008a28,0);
        SelSendTo(1,&DAT_10008cf8,0x80,0);
      }
      cVar1 = Trigg(0x41);
      if (((cVar1 != '\0') && (cVar1 = Trigg(0x40), cVar1 == '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
        SelectUnits(&DAT_10008a28,0);
        cVar1 = CheckLeaveAbility(1);
        if (cVar1 != '\0') {
          SetTrigg(0x41,0);
          SelectUnits(&DAT_10008a28,0);
          PushAllUnitsAway(1);
        }
      }
      cVar1 = Trigg(0x42);
      if (((cVar1 != '\0') && (cVar1 = Trigg(0x41), cVar1 == '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
        SelectUnits(&DAT_10008a28,0);
        iVar2 = GetNInside(1);
        if (iVar2 == 0) {
          SetTrigg(0x42,0);
          RunTimer(4,100);
        }
      }
      cVar1 = TimerDoneFirst(4);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_10008a28,0);
        SelSendTo(1,&DAT_10008c78,0,0);
        iVar2 = GetTotalAmount0(&DAT_10008d38);
        if (0 < iVar2) {
          SelectUnits(&DAT_10008d38,0);
          SelSendTo(1,&DAT_10008dc0,0x80,0);
          SelSendTo(1,&DAT_10008dc8,0x80,2);
          SelSendTo(1,&DAT_10008dd0,0x80,2);
          SelSendTo(1,&DAT_10008dd8,0x80,2);
          SelSendTo(1,&DAT_10008de0,200,2);
          SelSendTo(1,&DAT_10008df0,200,2);
        }
      }
      cVar1 = Trigg(0x43);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008df0,&DAT_10008d38), 0 < iVar2)) {
        SetTrigg(0x43,0);
        ClearSelection(1);
        SelectUnits1(1,&DAT_10008d38,0);
        SelErase(1);
      }
      cVar1 = Trigg(0x42);
      if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10008d38), iVar2 == 0)) {
        RunTimer(3,5000);
        SetTrigg(0x3c,0);
        SetTrigg(0x3d,0);
        SetTrigg(0x3e,0);
        SetTrigg(0x3f,0);
        SetTrigg(0x40,0);
        SetTrigg(0x41,0);
        SetTrigg(0x42,0);
        SetTrigg(0x43,0);
      }
    }
    iVar2 = GetTotalAmount0(&DAT_10008a28);
    if (((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008a38), 0 < iVar2)) &&
       (cVar1 = TimerDone(6), cVar1 != '\0')) {
      iVar2 = GetUnitsAmount1(&DAT_10008d80,&DAT_10008a28);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount1(&DAT_10008d88,&DAT_10008a28);
        if (0 < iVar2) {
          SelectUnits(&DAT_10008a38,0);
          puVar6 = &DAT_10008c90;
          goto LAB_10003068;
        }
        CreateZoneNearGroup(&DAT_10008c00,&DAT_10008c78,&DAT_10008a28,200);
        SelectUnits(&DAT_10008a38,0);
        cVar1 = Trigg(0x40);
        if ((cVar1 == '\0') || (cVar1 = Trigg(0x3f), cVar1 != '\0')) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0x80;
        }
        SelSendAndKill(1,&DAT_10008c00,uVar5,0);
      }
      else {
        SelectUnits(&DAT_10008a38,0);
        puVar6 = &DAT_10008c78;
LAB_10003068:
        SelSendAndKill(1,puVar6,0,0);
      }
      RunTimer(6,200);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10008a28);
  if (0 < iVar2) {
    cVar1 = Trigg(0xb);
    if (cVar1 == '\0') {
      SetTrigg(0xb,0);
    }
    SelectUnits(&DAT_10008a28,0);
    DAT_10008c10 = GetNInside(1);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a28), iVar2 == 0)) {
    SetTrigg(0xb,0);
    if (DAT_10008c10 < 1) {
      ShowPage("#PAGE11A");
    }
    else {
      iVar2 = GetDiff(0);
      ShowPageParam("#PAGE11",(5 - iVar2) * DAT_10008c10 * 0x32);
      iVar2 = GetDiff(0);
      AddResource(0,1,(5 - iVar2) * DAT_10008c10 * 0x32);
    }
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      RunTimer(3,10000);
      SetTrigg(0x3c,0);
      SetTrigg(0x3d,0);
      SetTrigg(0x3e,0);
      SetTrigg(0x3f,0);
      SetTrigg(0x40,0);
      SetTrigg(0x41,0);
      SetTrigg(0x42,0);
      SetTrigg(0x43,0);
    }
    DAT_10008c10 = 0;
  }
  iVar2 = GetUnitsByNation(&DAT_10008d38,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10008ac0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10008d38,0);
    SelDie(0);
    SelectUnits(&DAT_10008ac0,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10008b08,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10008ac0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10008b08,0);
    SelDie(0);
    SelectUnits(&DAT_10008ac0,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10008af0,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10008ac0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10008af0,0);
    SelDie(0);
    SelectUnits(&DAT_10008ac0,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10008af8,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10008ac0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10008af8,0);
    SelDie(0);
    SelectUnits(&DAT_10008ac0,0);
  }
  iVar2 = GetDiff(0);
  if ((0 < iVar2) &&
     (iVar2 = GetUnitsByNation(&DAT_10008b70,5), pcVar4 = (void*)&ClearSelection, 0 < iVar2)) {
    ClearSelection(5);
    SelectUnits1(5,&DAT_10008b70,0);
    SelDie(5);
  }
  iVar2 = GetDiff(0);
  if ((0 < iVar2) && (iVar2 = GetUnitsByNation(&DAT_10008b70,3), 0 < iVar2)) {
    ClearSelection(3);
    SelectUnits1(3,&DAT_10008b70,0);
    SelDie(3);
  }
  iVar2 = GetUnitsByNation(&DAT_10008a70,3);
  if (0 < iVar2) {
    ClearSelection(3);
    SelectUnits1(3,&DAT_10008a70,0);
    SelDie(3);
  }
  iVar2 = GetUnitsByNation(&DAT_10008a70,5);
  if (0 < iVar2) {
    ClearSelection(5);
    SelectUnits1(5,&DAT_10008a70,0);
    SelDie(5);
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008bd8,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008bd8,5), iVar2 == 0)) {
    SetTrigg(0xc,0);
    ShowPage("#PAGE12");
    ClearSelection(5);
    SelectUnits(&DAT_10008bf8,0);
    SelDie(5);
    DisableMission(0x42);
    EnableMission(0x43);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ClearLightSpot(2);
    }
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008bd8,0), iVar2 == 0)) {
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      puVar6 = &DAT_10008c28;
    }
    else {
      puVar6 = &DAT_10008978;
    }
    CreateObject0(&DAT_10008d50,puVar6,&DAT_10008c08,5,&DAT_10008cb0,0x80);
    SelectUnits(&DAT_10008d50,0);
    SelSendAndKill(5,&DAT_10008bc0,0x80,0);
    SelSendAndKill(5,&DAT_10008b90,0x80,2);
    iVar2 = GetDiff(0);
    RunTimer(7,(5 - iVar2) * 1000);
  }
  iVar2 = GetTotalAmount0(&DAT_10008b18);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_10008ca8,0), 0 < iVar2)) {
    AttackZoneByArtillery(&DAT_10008b18,&DAT_10008ca8,0);
  }
  iVar2 = GetTotalAmount0(&DAT_10008b18);
  iVar3 = GetUnitsAmount1(&DAT_10008d98,&DAT_10008b18);
  if (iVar3 < iVar2) {
    SelectUnits(&DAT_10008b18,0);
    SelSendTo(1,&DAT_10008d98,0x28,0);
  }
  iVar2 = GetTotalAmount0(&DAT_10008b28);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_10008cc0,0), 0 < iVar2)) {
    AttackZoneByArtillery(&DAT_10008b28,&DAT_10008cc0,0);
  }
  iVar2 = GetTotalAmount0(&DAT_10008b28);
  iVar3 = GetUnitsAmount1(&DAT_10008da0,&DAT_10008b28);
  if (iVar3 < iVar2) {
    SelectUnits(&DAT_10008b28,0);
    SelSendTo(1,&DAT_10008da0,0x46,0);
  }
  cVar1 = Trigg(0xd);
  if ((((cVar1 == '\0') || (iVar2 = GetTotalAmount0(&DAT_10008b20), iVar2 < 1)) ||
      (iVar2 = GetUnitsAmount0(&DAT_10008cc8,0), iVar2 < 1)) ||
     (iVar2 = GetUnitsAmount0(&DAT_10008cc8,5), iVar2 != 0)) goto LAB_100036e8;
  SetTrigg(0xd,0);
  iVar2 = AskMultilineQuestion(9,"#PAGE13",0,"Q12_1|Q12_2|Q12_3");
  if (iVar2 == 0) {
LAB_100036dc:
    ShowPage("#PAGE13A");
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_100036e8;
      iVar2 = AskMultilineQuestion(9,"#PAGE13B",0,"Q12_4|Q12_5|Q12_6|Q12_7");
      if (iVar2 == 0) {
        SetTrigg(0xe,0);
        ClearSelection(4);
        SelectUnits(&DAT_10008b20,0);
        SelDie(4);
        goto LAB_100036e8;
      }
      if (iVar2 == 1) goto LAB_100036dc;
      if (iVar2 != 2) {
        if (iVar2 == 3) {
          ShowPage("#PAGE13C");
          SetTrigg(0xe,0);
          SetTrigg(0xf,0);
        }
        goto LAB_100036e8;
      }
    }
    SetTrigg(0xe,0);
  }
LAB_100036e8:
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008d08,0), 0 < iVar2)) {
    SetTrigg(0xf,0);
    iVar2 = GetDiff(0);
    ShowPageParam("#PAGE15",(5 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    AddResource(0,1,(5 - iVar2) * 1000);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b60), 0 < iVar2)) {
    iVar2 = GetUnitsAmount1(&DAT_10008da8,&DAT_10008b60);
    iVar3 = GetTotalAmount0(&DAT_10008b60);
    if (iVar3 == iVar2) {
      iVar2 = GetUnitsByNation(&DAT_10008b60,0);
      iVar3 = GetTotalAmount0(&DAT_10008b60);
      if (iVar3 == iVar2) {
        SetTrigg(0xe,0);
        SaveSelectedUnits(0,&DAT_10008ac0,0);
        ClearSelection(0);
        SelectUnits1(0,&DAT_10008b60,0);
        SelChangeNation(0,4);
        SelectUnits1(4,&DAT_10008b60,0);
        SelSendTo(4,&DAT_10008cc8,0x40,0);
        SelectUnits(&DAT_10008ac0,0);
        iVar2 = GetTotalAmount0(&DAT_10008b60);
        if (iVar2 < 5) {
          iVar2 = AskMultilineQuestion(9,"#PAGE14A",0,"Q13_1|Q13_2");
          if (iVar2 == 0) {
            SetTrigg(0x10,0);
          }
          else if (iVar2 == 1) {
            ShowPage("#PAGE13C");
            SetTrigg(0xf,0);
          }
        }
        else {
          ShowPage("#PAGE14");
          SetTrigg(0xf,0);
          SetTrigg(0x10,0);
        }
        cVar1 = Trigg(0x10);
        if (cVar1 != '\0') {
          iVar2 = GetDiff(0);
          iVar3 = GetGlobalTime();
          if (((((9 - iVar2) * 5000 < iVar3) &&
               (iVar2 = GetTotalAmount0(&DAT_10008b20), pcVar4 = (void*)&GetTotalAmount0, 0 < iVar2))
              && (iVar2 = GetTotalAmount0(&DAT_10008b78), pcVar4 = (void*)&GetTotalAmount0, 0 < iVar2)
              ) && (iVar2 = GetTotalAmount0(&DAT_10008a70), pcVar4 = (void*)&GetTotalAmount0,
                   0 < iVar2)) {
            SetTrigg(0x10,0);
            iVar2 = GetDiff(0);
            ShowPageParam("#PAGE16A",(10 - iVar2) * 0x32);
            SetTrigg(0x4a,0);
          }
        }
      }
    }
  }
  cVar1 = Trigg(0x10);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if ((((9 - iVar2) * 5000 < iVar3) && (iVar2 = GetTotalAmount0(&DAT_10008b20), 0 < iVar2)) &&
       ((iVar2 = GetTotalAmount0(&DAT_10008b78), 0 < iVar2 &&
        (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)))) {
      SetTrigg(0x10,0);
      iVar2 = GetDiff(0);
      ShowPageParam("#PAGE16",(10 - iVar2) * 0x32);
      SetTrigg(0x4a,0);
    }
  }
  cVar1 = Trigg(0x4a);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x17), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10008a70);
    iVar3 = GetResource(0,0);
    if ((iVar2 * 4000 <= iVar3) &&
       (((iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2 &&
         (iVar2 = GetTotalAmount0(&DAT_10008b78), 0 < iVar2)) &&
        (iVar2 = GetTotalAmount0(&DAT_10008b20), 0 < iVar2)))) {
      SetTrigg(0x17,0);
      ShowPage("#PAGE26");
    }
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x17), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10008a70);
    iVar3 = GetResource(0,0);
    if ((iVar2 * 4000 <= iVar3) && (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)) {
      iVar2 = GetTotalAmount0(&DAT_10008a70);
      iVar3 = GetUnitsAmount1(&DAT_10008ba0,&DAT_10008a70);
      if (((iVar3 == iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008b78), 0 < iVar2)) &&
         (iVar2 = GetTotalAmount0(&DAT_10008b20), 0 < iVar2)) {
        SetTrigg(0x18,0);
        ShowPage("#PAGE24");
        iVar2 = GetTotalAmount0(&DAT_10008a70);
        AddResource(0,0,iVar2 * -4000);
        SetLightSpot(&DAT_10008cc8,1,1);
      }
    }
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10008a70);
    iVar3 = GetUnitsAmount1(&DAT_10008da8,&DAT_10008a70);
    if ((iVar3 == iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008b20), 0 < iVar2)) {
      SetTrigg(0x17,0);
      SetTrigg(0x18,0);
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a70);
      ShowPageParam("#PAGE23",(10 - iVar2) * iVar3 * 0x32);
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a70);
      AddResource(0,1,(10 - iVar2) * iVar3 * 0x32);
      ClearLightSpot(1);
    }
  }
  cVar1 = Trigg(0x46);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if (iVar2 * -2000 + 25000 < iVar3) {
      SetTrigg(0x46,0);
      SelectUnits(&DAT_10008b00,0);
      SelSendAndKill(5,&DAT_10008d90,0x80,0);
      SelSendAndKill(5,&DAT_10008c98,0x40,2);
    }
  }
  iVar2 = GetUnitsAmount1(&DAT_10008c98,&DAT_10008b00);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008b80), 0 < iVar2)) {
    SelectUnits(&DAT_10008b00,0);
    SelAttackGroup(5,&DAT_10008b80);
  }
  cVar1 = Trigg(0x46);
  if ((((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b10), 0 < iVar2)) &&
      (iVar2 = GetTotalAmount0(&DAT_10008a58), iVar2 == 0)) &&
     (cVar1 = CheckProduction(&DAT_10008b10), cVar1 != '\0')) {
    SetTrigg(0x47,0);
    ProduceUnit(&DAT_10008b10,&DAT_10008d30,&DAT_10008a58);
  }
  cVar1 = Trigg(0x47);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a58), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10008a58);
    iVar3 = GetUnitsAmount1(&DAT_10008c98,&DAT_10008a58);
    if (iVar3 < iVar2) {
      SelectUnits(&DAT_10008a58,0);
      SelSendAndKill(5,&DAT_10008d90,0x80,0);
      SelSendAndKill(5,&DAT_10008c98,0x40,2);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10008a58);
  iVar3 = GetUnitsAmount1(&DAT_10008c98,&DAT_10008a58);
  if (((iVar3 == iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008a58), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008b80), 0 < iVar2)) {
    SelectUnits(&DAT_10008a58,0);
    SelAttackGroup(1,&DAT_10008b80);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a68), iVar2 == 0)) {
    SetTrigg(0x11,0);
    ShowPage("#PAGE17");
    LooseGame();
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b80), iVar2 == 0)) {
    SetTrigg(0x11,0);
    ShowPage("#PAGE17A");
    LooseGame();
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b88), iVar2 == 0)) {
    SetTrigg(0x11,0);
    ShowPage("#PAGE17B");
    LooseGame();
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b98), iVar2 == 0)) {
    SetTrigg(0x11,0);
    ShowPage("#PAGE17C");
    LooseGame();
  }
  cVar1 = Trigg(0x12);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if ((0xe - iVar2) * 5000 < iVar3) {
      iVar2 = GetTotalAmount0(&DAT_10008b50);
      iVar3 = GetTotalAmount0(&DAT_10008b40);
      if (0 < iVar3 + iVar2) {
        SetTrigg(0x12,0);
        ShowPage("#PAGE18");
        iVar2 = GetDiff(0);
        if (iVar2 == 0) {
          ShowPage("#OTST1");
          SetLightSpot(&DAT_10008ce8,1,3);
          SetLightSpot(&DAT_10008d00,1,4);
        }
        DisableMission(0x46);
        EnableMission(0x47);
        EnableMission(0x48);
      }
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10008b40);
  if (((0 < iVar2) || (iVar2 = GetTotalAmount0(&DAT_10008b50), 0 < iVar2)) &&
     (cVar1 = Trigg(0x12), cVar1 == '\0')) {
    iVar2 = GetDiff(0);
    iVar3 = GetTotalAmount0(&DAT_10008a60);
    if (iVar3 < (iVar2 + 1) * 3) {
      cVar1 = CheckProduction(&DAT_10008b40);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b40), 0 < iVar2)) {
        ProduceUnit(&DAT_10008b40,&DAT_10008c18,&DAT_10008a60);
      }
      cVar1 = CheckProduction(&DAT_10008b50);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b50), 0 < iVar2)) {
        ProduceUnit(&DAT_10008b50,&DAT_10008c18,&DAT_10008a60);
      }
    }
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0x48), cVar1 != '\0')) {
    iVar2 = GetDiff(0);
    iVar3 = GetTotalAmount0(&DAT_10008a60);
    if (iVar2 * 2 + 6 <= iVar3) {
      SetTrigg(0x48,0);
      SelectUnits(&DAT_10008a60,0);
      SelSendAndKill(1,&DAT_10008c98,0x40,0);
    }
  }
  cVar1 = Trigg(0x48);
  if (cVar1 == '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetTotalAmount0(&DAT_10008a60);
    if (iVar3 < iVar2 * 2 + 6) {
      SetTrigg(0x48,0);
    }
  }
  cVar1 = Trigg(0x13);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b40), iVar2 == 0)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008b50), iVar2 == 0)) {
    SetTrigg(0x13,0);
    ShowPage("#PAGE19");
    iVar2 = GetDiff(0);
    RunTimer(10,(5 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ClearLightSpot(3);
      ClearLightSpot(4);
    }
    DisableMission(0x48);
    EnableMission(0x4a);
    EnableMission(0x4b);
  }
  cVar1 = Trigg(0x49);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(10), cVar1 != '\0')) {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if ((0xc - iVar2) * 5000 < iVar3) {
      SetTrigg(0x49,0);
      iVar2 = GetDiff(0);
      if (iVar2 == 0) {
        puVar6 = &DAT_10008e08;
      }
      else {
        puVar6 = &DAT_10008970;
      }
      CreateObject0(&DAT_10008d58,puVar6,&DAT_10008c18,1,&DAT_10008d10,0x40);
      SelectUnits(&DAT_10008d58,0);
      SelSendAndKill(1,&DAT_10008c98,0x40,0);
      DisableMission(0x4b);
      EnableMission(0x4c);
      EnableMission(0x4d);
    }
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x49), cVar1 == '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008d58), iVar2 == 0)) {
    SetTrigg(0x14,0);
    ShowPage("#PAGE20");
    ShowVictory();
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008a80,0), 0 < iVar2)) {
    SetTrigg(0x15,0);
    ShowPage("#PAGE21");
    EnableUnit(0,&DAT_100089b8,1);
    EnableUnit(0,&DAT_100089c0,1);
    DisableMission(0x44);
    EnableMission(0x45);
    ClearSelection(3);
    SelectUnits1(3,&DAT_10008b68,0);
    SelDie(3);
    iVar2 = GetDiff(0);
    if ((iVar2 == 0) && (cVar1 = Trigg(0x12), cVar1 != '\0')) {
      ShowPage("#OTST4");
    }
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 != '\0') &&
      (iVar2 = GetTotalAmount0(&DAT_10008a80), pcVar4 = (void*)&ShowPage, iVar2 == 0)) &&
     (cVar1 = Trigg(0x12), pcVar4 = (void*)&ShowPage, cVar1 != '\0')) {
    SetTrigg(0x15,0);
    ShowPage("#PAGE21A");
    DisableMission(0x44);
    EnableMission(0x45);
    ClearSelection(3);
    SelectUnits1(3,&DAT_10008b68,0);
    SelDie(3);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ShowPage("#OTST4");
    }
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008a88,0), 0 < iVar2)) {
    SetTrigg(0x16,0);
    ShowPage("#PAGE22");
    InitialUpgrade(DAT_1000843c,"AKA06AL");
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b10), iVar2 == 0)) {
    SetTrigg(0x19,0);
    ShowPage("#PAGE25");
  }
  cVar1 = Trigg(0x1b);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008d18,0), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008d28), 0 < iVar2)) {
    SetTrigg(0x1b,0);
    ShowPage("#PAGE27");
  }
  cVar1 = Trigg(0x1c);
  if (((cVar1 != '\0') && (iVar2 = GetDiff(0), iVar2 == 0)) &&
     ((iVar2 = GetGlobalTime(), 15000 < iVar2 &&
      ((iVar2 = GetUnitsAmount0(&DAT_10008df8,5), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_10008e00,5), 0 < iVar2)))))) {
    SetTrigg(0x1c,0);
    ShowPage("#OTST2");
    SetLightSpot(&DAT_10008df8,1,5);
    SetLightSpot(&DAT_10008e00,1,6);
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
