#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1000810c[] = "Z24";
char DAT_10008110[] = "Z23";
char DAT_10008114[] = "Z22A";
char DAT_1000811c[] = "Z22";
char DAT_10008120[] = "Z21B";
char DAT_10008128[] = "Z21A";
char DAT_10008130[] = "Z21";
char DAT_10008134[] = "Z20";
char DAT_10008138[] = "Z19";
char DAT_1000813c[] = "Z18";
char DAT_10008140[] = "Z17";
char DAT_10008144[] = "Z16E";
char DAT_1000814c[] = "Z16D";
char DAT_10008154[] = "Z16C";
char DAT_1000815c[] = "Z16B";
char DAT_10008164[] = "Z16A";
char DAT_1000816c[] = "Z16";
char DAT_10008170[] = "Z15C";
char DAT_10008178[] = "Z15B";
char DAT_10008180[] = "Z15A";
char DAT_10008188[] = "Z15";
char DAT_1000818c[] = "Z14D";
char DAT_10008194[] = "Z14C";
char DAT_1000819c[] = "Z14B";
char DAT_100081a4[] = "Z14A";
char DAT_100081ac[] = "Z14";
char DAT_100081b0[] = "Z13A";
char DAT_100081b8[] = "Z13";
char DAT_100081bc[] = "Z12";
char DAT_100081c0[] = "Z11";
char DAT_100081c4[] = "Z10";
char DAT_100081c8[] = "Z9G";
char DAT_100081cc[] = "Z9F";
char DAT_100081d0[] = "Z9E";
char DAT_100081d4[] = "Z9D";
char DAT_100081d8[] = "Z9C";
char DAT_100081dc[] = "Z9B";
char DAT_100081e0[] = "Z9A";
char DAT_100081e4[] = "Z9";
char DAT_100081e8[] = "Z8C";
char DAT_100081ec[] = "Z8B";
char DAT_100081f0[] = "Z8A";
char DAT_100081f4[] = "Z8";
char DAT_100081f8[] = "Z7a";
char DAT_100081fc[] = "Z7";
char DAT_10008200[] = "Z6";
char DAT_10008204[] = "Z5";
char DAT_10008208[] = "Z4";
char DAT_1000820c[] = "Z3c";
char DAT_10008210[] = "Z3b";
char DAT_10008214[] = "Z3a";
char DAT_10008218[] = "Z3";
char DAT_1000821c[] = "Z2c";
char DAT_10008220[] = "Z2b";
char DAT_10008224[] = "Z2a";
char DAT_10008228[] = "Z2";
char DAT_1000822c[] = "Z1";
char DAT_10008230[] = "G24";
char DAT_10008234[] = "G22B";
char DAT_1000823c[] = "G22A";
char DAT_10008244[] = "G22";
char DAT_10008248[] = "G21";
char DAT_1000824c[] = "G20";
char DAT_10008250[] = "G19E";
char DAT_10008258[] = "G19D";
char DAT_10008260[] = "G19C";
char DAT_10008268[] = "G19B";
char DAT_10008270[] = "G19A";
char DAT_10008278[] = "G19";
char DAT_1000827c[] = "G18A";
char DAT_10008284[] = "G18";
char DAT_10008288[] = "G17B";
char DAT_10008290[] = "G17A";
char DAT_10008298[] = "G17";
char DAT_1000829c[] = "G16G";
char DAT_100082a4[] = "G16F";
char DAT_100082ac[] = "G16E";
char DAT_100082b4[] = "G16D";
char DAT_100082bc[] = "G16C";
char DAT_100082c4[] = "G16B";
char DAT_100082cc[] = "G16A";
char DAT_100082d4[] = "G16";
char DAT_100082d8[] = "G15C";
char DAT_100082e0[] = "G15B";
char DAT_100082e8[] = "G15A";
char DAT_100082f0[] = "G15";
char DAT_100082f4[] = "G14D";
char DAT_100082fc[] = "G14C";
char DAT_10008304[] = "G14B";
char DAT_1000830c[] = "G14A";
char DAT_10008314[] = "G14";
char DAT_10008318[] = "G13A";
char DAT_10008320[] = "G13";
char DAT_10008324[] = "G12";
char DAT_10008328[] = "G11A";
char DAT_10008330[] = "G11";
char DAT_10008334[] = "G10";
char DAT_10008338[] = "G9C";
char DAT_1000833c[] = "G9B";
char DAT_10008340[] = "G9A";
char DAT_10008344[] = "G9";
char DAT_10008348[] = "G8A";
char DAT_1000834c[] = "G8";
char DAT_10008350[] = "G7";
char DAT_10008354[] = "G6";
char DAT_10008358[] = "G5a";
char DAT_1000835c[] = "G5";
char DAT_10008360[] = "G4";
char DAT_10008364[] = "G3c";
char DAT_10008368[] = "G3b";
char DAT_1000836c[] = "G3a";
char DAT_10008370[] = "G3";
char DAT_10008374[] = "G2c";
char DAT_10008378[] = "G2b";
char DAT_1000837c[] = "G2a";
char DAT_10008380[] = "G2";
char DAT_10008384[] = "G1a";
char DAT_10008388[] = "G1";
char DAT_1000838c[] = "G0B";
char DAT_10008390[] = "G0A";
long long DAT_10008ad0 = 0;
long long DAT_10008ae0 = 0;
long long DAT_10008ae8 = 0;
int DAT_10008af0 = 0;
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
long long DAT_10008c10 = 0;
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
int DAT_10008cc8 = 0;
long long DAT_10008cd0 = 0;
long long DAT_10008cd8 = 0;
int DAT_10008ce0 = 0;
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
long long DAT_10008d70 = 0;
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
long long DAT_10008e10 = 0;
long long DAT_10008e18 = 0;
long long DAT_10008e20 = 0;
long long DAT_10008e28 = 0;
long long DAT_10008e30 = 0;
long long DAT_10008e38 = 0;
long long DAT_10008e40 = 0;
long long DAT_10008e48 = 0;
long long DAT_10008e50 = 0;
long long DAT_10008e58 = 0;
long long DAT_10008e60 = 0;
long long DAT_10008e68 = 0;
long long DAT_10008e70 = 0;
long long DAT_10008e78 = 0;
long long DAT_10008e80 = 0;
long long DAT_10008e88 = 0;
long long DAT_10008e90 = 0;
long long DAT_10008e98 = 0;
long long DAT_10008ea0 = 0;
long long DAT_10008ea8 = 0;
long long DAT_10008eb0 = 0;
long long DAT_10008eb8 = 0;
long long DAT_10008ec0 = 0;
long long DAT_10008ec8 = 0;
long long DAT_10008ed0 = 0;
long long DAT_10008ed8 = 0;
long long DAT_10008ee0 = 0;
long long DAT_10008ee8 = 0;
long long DAT_10008ef0 = 0;
long long DAT_10008ef8 = 0;
OneUnit DAT_10008f00 = {0};
int DAT_10008f04 = 0;
int DAT_10008f06 = 0;
int DAT_10008f08 = 0;
int DAT_10008f09 = 0;
int DAT_10008f2c = 0;
int DAT_10008f30 = 0;
long long DAT_10008f38 = 0;
long long DAT_10008f40 = 0;
long long DAT_10008f48 = 0;
long long DAT_10008f50 = 0;
long long DAT_10008f58 = 0;
long long DAT_10008f60 = 0;
long long DAT_10008f68 = 0;
long long DAT_10008f70 = 0;
long long DAT_10008f78 = 0;
long long DAT_10008f80 = 0;
long long DAT_10008f88 = 0;
long long DAT_10008f90 = 0;
long long DAT_10008f98 = 0;
long long DAT_10008fa0 = 0;
long long DAT_10008fa8 = 0;
long long DAT_10008fb0 = 0;
int DAT_10008c88_ovl = 0;
int DAT_10008ef8_ovl = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10008bf8,DAT_10008390);
  RegisterUnits(&DAT_10008c00,DAT_1000838c);
  RegisterUnits(&DAT_10008af8,DAT_10008388);
  RegisterUnits(&DAT_10008c08,DAT_10008384);
  RegisterUnits(&DAT_10008b00,DAT_10008380);
  RegisterUnits(&DAT_10008c18,DAT_1000837c);
  RegisterUnits(&DAT_10008c28,DAT_10008378);
  RegisterUnits(&DAT_10008c38,DAT_10008374);
  RegisterUnits(&DAT_10008b08,DAT_10008370);
  RegisterUnits(&DAT_10008c50,DAT_1000836c);
  RegisterUnits(&DAT_10008c60,DAT_10008368);
  RegisterUnits(&DAT_10008c70,DAT_10008364);
  RegisterUnits(&DAT_10008b10,DAT_10008360);
  RegisterUnits(&DAT_10008b18,DAT_1000835c);
  RegisterUnits(&DAT_10008c90,DAT_10008358);
  RegisterUnits(&DAT_10008b20,DAT_10008354);
  RegisterUnits(&DAT_10008b28,DAT_10008350);
  RegisterUnits(&DAT_10008b30,DAT_1000834c);
  RegisterUnits(&DAT_10008c98,DAT_10008348);
  RegisterUnits(&DAT_10008b38,DAT_10008344);
  RegisterUnits(&DAT_10008cb0,DAT_10008340);
  RegisterUnits(&DAT_10008cb8,DAT_1000833c);
  RegisterUnits(&DAT_10008cc0,DAT_10008338);
  RegisterUnits(&DAT_10008b68,DAT_10008334);
  RegisterUnits(&DAT_10008b70,DAT_10008330);
  RegisterUnits(&DAT_10008d28,DAT_10008328);
  RegisterUnits(&DAT_10008b80,DAT_10008324);
  RegisterUnits(&DAT_10008b88,DAT_10008320);
  RegisterUnits(&DAT_10008d98,DAT_10008318);
  RegisterUnits(&DAT_10008b98,DAT_10008314);
  RegisterUnits(&DAT_10008da8,DAT_1000830c);
  RegisterUnits(&DAT_10008db0,DAT_10008304);
  RegisterUnits(&DAT_10008db8,DAT_100082fc);
  RegisterUnits(&DAT_10008dc0,DAT_100082f4);
  RegisterUnits(&DAT_10008ba8,DAT_100082f0);
  RegisterUnits(&DAT_10008dc8,DAT_100082e8);
  RegisterUnits(&DAT_10008dd8,DAT_100082e0);
  RegisterUnits(&DAT_10008de0,DAT_100082d8);
  RegisterUnits(&DAT_10008bc0,DAT_100082d4);
  RegisterUnits(&DAT_10008df0,DAT_100082cc);
  RegisterUnits(&DAT_10008e08,DAT_100082c4);
  RegisterUnits(&DAT_10008e18,DAT_100082bc);
  RegisterUnits(&DAT_10008e28,DAT_100082b4);
  RegisterUnits(&DAT_10008e30,DAT_100082ac);
  RegisterUnits(&DAT_10008e40,DAT_100082a4);
  RegisterUnits(&DAT_10008e58,DAT_1000829c);
  RegisterUnits(&DAT_10008bd0,DAT_10008298);
  RegisterUnits(&DAT_10008e38,DAT_10008290);
  RegisterUnits(&DAT_10008e50,DAT_10008288);
  RegisterUnits(&DAT_10008be0,DAT_10008284);
  RegisterUnits(&DAT_10008e70,DAT_1000827c);
  RegisterUnits(&DAT_10008be8,DAT_10008278);
  RegisterUnits(&DAT_10008e78,DAT_10008270);
  RegisterUnits(&DAT_10008e80,DAT_10008268);
  RegisterUnits(&DAT_10008e88,DAT_10008260);
  RegisterUnits(&DAT_10008e90,DAT_10008258);
  RegisterUnits(&DAT_10008e98,DAT_10008250);
  RegisterUnits(&DAT_10008b90,DAT_1000824c);
  RegisterUnits(&DAT_10008ba0,DAT_10008248);
  RegisterUnits(&DAT_10008bb8,DAT_10008244);
  RegisterUnits(&DAT_10008de8,DAT_1000823c);
  RegisterUnits(&DAT_10008e00,DAT_10008234);
  RegisterUnits(&DAT_10008bd8,DAT_10008230);
  RegisterZone(&DAT_10008c10,DAT_1000822c);
  RegisterZone(&DAT_10008c20,DAT_10008228);
  RegisterZone(&DAT_10008df8,DAT_10008224);
  RegisterZone(&DAT_10008e10,DAT_10008220);
  RegisterZone(&DAT_10008e20,DAT_1000821c);
  RegisterZone(&DAT_10008c30,DAT_10008218);
  RegisterZone(&DAT_10008e48,DAT_10008214);
  RegisterZone(&DAT_10008e60,DAT_10008210);
  RegisterZone(&DAT_10008e68,DAT_1000820c);
  RegisterZone(&DAT_10008c40,DAT_10008208);
  RegisterZone(&DAT_10008c48,DAT_10008204);
  RegisterZone(&DAT_10008c58,DAT_10008200);
  RegisterZone(&DAT_10008c68,DAT_100081fc);
  RegisterZone(&DAT_10008ea0,DAT_100081f8);
  RegisterZone(&DAT_10008c78,DAT_100081f4);
  RegisterZone(&DAT_10008ea8,DAT_100081f0);
  RegisterZone(&DAT_10008eb0,DAT_100081ec);
  RegisterZone(&DAT_10008eb8,DAT_100081e8);
  RegisterZone(&DAT_10008c80,DAT_100081e4);
  RegisterZone(&DAT_10008ec0,DAT_100081e0);
  RegisterZone(&DAT_10008ec8,DAT_100081dc);
  RegisterZone(&DAT_10008ed0,DAT_100081d8);
  RegisterZone(&DAT_10008ed8,DAT_100081d4);
  RegisterZone(&DAT_10008ee0,DAT_100081d0);
  RegisterZone(&DAT_10008ee8,DAT_100081cc);
  RegisterZone(&DAT_10008ef0,DAT_100081c8);
  RegisterZone(&DAT_10008d20,DAT_100081c4);
  RegisterZone(&DAT_10008d30,DAT_100081c0);
  RegisterZone(&DAT_10008d38,DAT_100081bc);
  RegisterZone(&DAT_10008d40,DAT_100081b8);
  RegisterZone(&DAT_10008f38,DAT_100081b0);
  RegisterZone(&DAT_10008d50,DAT_100081ac);
  RegisterZone(&DAT_10008f40,DAT_100081a4);
  RegisterZone(&DAT_10008f48,DAT_1000819c);
  RegisterZone(&DAT_10008f50,DAT_10008194);
  RegisterZone(&DAT_10008f58,DAT_1000818c);
  RegisterZone(&DAT_10008d60,DAT_10008188);
  RegisterZone(&DAT_10008f68,DAT_10008180);
  RegisterZone(&DAT_10008f78,DAT_10008178);
  RegisterZone(&DAT_10008f80,DAT_10008170);
  RegisterZone(&DAT_10008d70,DAT_1000816c);
  RegisterZone(&DAT_10008f90,DAT_10008164);
  RegisterZone(&DAT_10008f98,DAT_1000815c);
  RegisterZone(&DAT_10008fa0,DAT_10008154);
  RegisterZone(&DAT_10008fa8,DAT_1000814c);
  RegisterZone(&DAT_10008fb0,DAT_10008144);
  RegisterZone(&DAT_10008d80,DAT_10008140);
  RegisterZone(&DAT_10008d90,DAT_1000813c);
  RegisterZone(&DAT_10008da0,DAT_10008138);
  RegisterZone(&DAT_10008d48,DAT_10008134);
  RegisterZone(&DAT_10008d58,DAT_10008130);
  RegisterZone(&DAT_10008f60,DAT_10008128);
  RegisterZone(&DAT_10008f70,DAT_10008120);
  RegisterZone(&DAT_10008d68,DAT_1000811c);
  RegisterZone(&DAT_10008f88,DAT_10008114);
  RegisterZone(&DAT_10008d78,DAT_10008110);
  RegisterZone(&DAT_10008d88,DAT_1000810c);
  RegisterDynGroup(&DAT_10008dd0);
  RegisterUnitType(&DAT_10008d10,"Pikiner_polan(PL)");
  RegisterUnitType(&DAT_10008ad0,"Mushketer_polsha(PL)");
  RegisterUnitType(&DAT_10008ae0,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_10008cd8,"Kreposnoi_evro(PL)");
  RegisterUnitType(&DAT_10008cd0,"PorE(PL)");
  RegisterUnitType(&DAT_10008ce8,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_10008d18,"SUNDUK1O(UN)");
  RegisterUnitType(&DAT_10008d00,"SUNDUK2Z(UN)");
  RegisterUnitType(&DAT_10008d08,"SUNDUK2O(UN)");
  RegisterFormation(&DAT_10008cf8,"#ALONE");
  RegisterFormation(&DAT_10008ae8,"#LINE3");
  RegisterFormation(&DAT_10008cf0,"#PACK20");
  RegisterVar(&DAT_10008ef8,4);
  RegisterVar(&DAT_10008ce0,4);
  RegisterVar(&DAT_10008cc8,4);
  RegisterVar(&DAT_10008af0,4);
  RegisterVar(&DAT_10008f2c,4);
  RegisterVar(&DAT_10008ca0,8);
  RegisterVar(&DAT_10008ca8,8);
  RegisterVar(&DAT_10008bc8,8);
  RegisterVar(&DAT_10008b40,8);
  RegisterVar(&DAT_10008b60,8);
  RegisterVar(&DAT_10008b48,8);
  RegisterVar(&DAT_10008b78,8);
  RegisterVar(&DAT_10008b50,8);
  RegisterVar(&DAT_10008bb0,8);
  RegisterVar(&DAT_10008b58,8);
  RegisterVar(&DAT_10008bf0,8);
  ChangeFriends(0,0x13);
  ChangeFriends(1,0x30);
  ChangeFriends(3,0x28);
  ChangeFriends(4,0x13);
  ChangeFriends(5,0x68);
  ChangeFriends(6,0x41);
  SetPlayerName(1,"M_ALLIES");
  SetPlayerName(3,"OSMAN");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"BANDITS");
  EnableUnit(0,&DAT_10008cd0,0);
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  void *pcVar3;
  BOOL bVar4;
  int iVar5;
  int uVar6;
  char *pcVar7;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      CreateObject0(&DAT_10008bc8,&DAT_10008cf0,&DAT_10008ad0,0,&DAT_10008d78,0);
      SelectUnits(&DAT_10008bd8,0);
      SelDie(5);
      SelectUnits(&DAT_10008e50,0);
      SelDie(5);
      ShowPage("#OTST1");
      SetLightSpot(&DAT_10008d40,4,1);
      SetLightSpot(&DAT_10008d70,4,2);
    }
    SelectUnits(&DAT_10008af8,0);
    DAT_10008af0 = 10;
    DAT_10008f2c = 0;
    DAT_10008ef8_ovl = 0;
    DAT_10008ce0 = 0;
    DAT_10008cc8 = 0;
    SetTrigg(99,0);
    SetResource(0,3,20000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar2 = GetDiff(1);
    SetResource(0,5,(7 - iVar2) * 2000);
    iVar2 = GetDiff(1);
    SetResource(0,4,(7 - iVar2) * 2000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,1,1000);
      SetResource(0,5,500000);
      SetResource(0,4,500000);
    }
    else {
      if (iVar2 == 1) {
        uVar6 = 400;
      }
      else if (iVar2 == 2) {
        uVar6 = 0xfa;
      }
      else {
        if (iVar2 != 3) goto LAB_10001924;
        uVar6 = 0x96;
      }
      SetResource(0,1,uVar6);
    }
LAB_10001924:
    ShowPage("#PAGE0");
    TakeFood(&DAT_10008c18);
    TakeWood(&DAT_10008c28);
    TakeStone(&DAT_10008c38);
    SelectUnits(&DAT_10008b30,0);
    AllowAttack(4,0);
    SelectUnits(&DAT_10008c50,0);
    Patrol(4,&DAT_10008e48,0);
    SelectUnits(&DAT_10008c60,0);
    Patrol(4,&DAT_10008e60,0);
    SelectUnits(&DAT_10008c70,0);
    Patrol(4,&DAT_10008e68,0);
    SelectUnits(&DAT_10008b98,0);
    Patrol(4,&DAT_10008d50,0);
    SelectUnits(&DAT_10008db8,0);
    Patrol(4,&DAT_10008f50,0);
    SelectUnits(&DAT_10008dc0,0);
    Patrol(4,&DAT_10008f58,0);
    SelectUnits(&DAT_10008dd8,0);
    SelChangeNation(5,6);
    SelectUnits(&DAT_10008bd0,0);
    SelChangeNation(5,6);
    InitialUpgrade(DAT_10008348,"AKA04PL");
    InitialUpgrade(DAT_10008348,"KUZ01PL");
    CreateObject0(&DAT_10008b40,&DAT_10008cf8,&DAT_10008ce8,4,&DAT_10008ea0,0);
    CreateObject0(&DAT_10008b48,&DAT_10008cf8,&DAT_10008d00,4,&DAT_10008c48,0);
    CreateObject0(&DAT_10008b50,&DAT_10008cf8,&DAT_10008ce8,4,&DAT_10008f68,0);
    CreateObject0(&DAT_10008b58,&DAT_10008cf8,&DAT_10008d00,4,&DAT_10008f80,0);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
  }
  if ((0 < DAT_10008ce0) && (cVar1 = CheckProduction(&DAT_10008d98), cVar1 != '\0')) {
    DAT_10008ce0 = DAT_10008ce0 + -1;
    ProduceUnitFast(&DAT_10008d98,&DAT_10008d10,&DAT_10008dd0,8);
  }
  if ((0 < DAT_10008cc8) && (cVar1 = CheckProduction(&DAT_10008d98), cVar1 != '\0')) {
    DAT_10008cc8 = DAT_10008cc8 + -1;
    ProduceUnitFast(&DAT_10008d98,&DAT_10008ad0,&DAT_10008dd0,2);
  }
  iVar2 = GetUnitsByNation(&DAT_10008dd0,4);
  if (0 < iVar2) {
    ClearSelection(4);
    SelectUnits1(4,&DAT_10008dd0,0);
    SelChangeNation(4,0);
  }
  cVar1 = Trigg(0x62);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008af8), iVar2 == 0)) {
    SetTrigg(0x62,0);
    iVar2 = GetResource(0,3);
    if (iVar2 < 1) {
      pcVar7 = "#PAGE10A";
    }
    else {
      pcVar7 = "#PAGE10";
    }
    ShowPage(pcVar7);
    LooseGame();
  }
  cVar1 = Trigg(0x62);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x12), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008bd0), iVar2 == 0)) {
    SetTrigg(0x62,0);
    ShowPage("#PAGE11");
    LooseGame();
  }
  cVar1 = Trigg(0x62);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x12), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008be0), iVar2 == 0)) {
    SetTrigg(0x62,0);
    ShowPage("#PAGE11A");
    LooseGame();
  }
  cVar1 = Trigg(0x62);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x16), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008e18), iVar2 == 0)) {
    SetTrigg(0x62,0);
    ShowPage("#PAGE11B");
    LooseGame();
  }
  cVar1 = Trigg(0x62);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x4e), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008b88), iVar2 == 0)) {
    SetTrigg(0x62,0);
    ShowPage("#PAGE13A");
    LooseGame();
  }
  cVar1 = Trigg(0x61);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    SetTrigg(0x61,0);
    ShowPage("#PAGE21");
    ShowVictory();
  }
  iVar2 = GetUnitsByNation(&DAT_10008bf8,5);
  if (0 < iVar2) {
    SelectUnits1(5,&DAT_10008bf8,0);
    SelDie(5);
  }
  iVar2 = GetUnitsByNation(&DAT_10008c00,5);
  if (0 < iVar2) {
    SelectUnits1(5,&DAT_10008c00,0);
    SelDie(5);
  }
  cVar1 = Trigg(1);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c10,&DAT_10008af8), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008c08), 0 < iVar2)) {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
    iVar2 = GetResource(0,1);
    if (iVar2 < 0x32) {
      iVar2 = AskMultilineQuestion(9,"#PAGE1A",0,"Q1_2|Q1_3");
      bVar4 = iVar2 == 0;
    }
    else {
      iVar2 = AskMultilineQuestion(9,"#PAGE1A",0,"Q1_1|Q1_2|Q1_3");
      if (iVar2 == 0) {
        ShowPage("#PAGE1B");
        AddResource(0,1,0xffffffce);
        SelectUnits(&DAT_10008c08,0);
        SelChangeNation(4,0);
        goto LAB_10001e35;
      }
      bVar4 = iVar2 == 1;
    }
    if (bVar4) {
      ShowPage("#PAGE1C");
      SelectUnits(&DAT_10008c08,0);
      SelChangeNation(4,5);
    }
    else {
      ShowPage("#PAGE1D");
      SetTrigg(0x33,0);
    }
  }
LAB_10001e35:
  cVar1 = Trigg(0x34);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x33), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount1(&DAT_10008c10,&DAT_10008af8), iVar2 == 0)) {
    SetTrigg(0x33,1);
    SetTrigg(0x34,0);
  }
  cVar1 = Trigg(0x34);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c10,&DAT_10008af8), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008c08), 0 < iVar2)) {
    SetTrigg(0x34,1);
    iVar2 = GetResource(0,1);
    if (iVar2 < 0x32) {
      iVar2 = AskMultilineQuestion(9,"#PAGE1E",0,"Q1_2|Q1_3");
      bVar4 = iVar2 == 0;
    }
    else {
      iVar2 = AskMultilineQuestion(9,"#PAGE1E",0,"Q1_1|Q1_2|Q1_3");
      if (iVar2 == 0) {
        ShowPage("#PAGE1B");
        AddResource(0,1,0xffffffce);
        SelectUnits(&DAT_10008c08,0);
        SelChangeNation(4,0);
        goto LAB_10001f55;
      }
      bVar4 = iVar2 == 1;
    }
    if (bVar4) {
      ShowPage("#PAGE1C");
      SelectUnits(&DAT_10008c08,0);
      SelChangeNation(4,5);
    }
    else {
      ShowPage("#PAGE1D");
      SetTrigg(0x33,0);
    }
  }
LAB_10001f55:
  iVar2 = GetKilled(&DAT_10008af8);
  if (DAT_10008af0 <= iVar2) {
    iVar2 = GetDiff(1);
    DAT_10008af0 = DAT_10008af0 + 10 + DAT_10008af0 / (8 - iVar2);
    ShowPage("#AWARD");
    GetUnitInfo(&DAT_10008af8,0,&DAT_10008f00);
    DAT_10008f08 = DAT_10008f08 + '\x01';
    DAT_10008f09 = DAT_10008f09 + '\x01';
    SetUnitInfo(&DAT_10008f00);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c20,&DAT_10008af8), 0 < iVar2)) {
    SetTrigg(3,0);
    iVar2 = AskMultilineQuestion(9,"#PAGE3",0,"Q2_1|Q2_2|Q2_3");
    if (iVar2 == 0) {
LAB_1000203f:
      ShowPage("#PAGE3A");
      SelectUnits(&DAT_10008b08,0);
      SelChangeNation(4,0);
    }
    else if (iVar2 == 1) {
      SetTrigg(0x35,0);
      cVar1 = AskQuestion("#PAGE3B");
      if (cVar1 != '\0') goto LAB_1000203f;
      ShowPage("#PAGE3C");
    }
    else {
      SetTrigg(0x35,0);
      ShowPage("#PAGE3C");
    }
    SelectUnits(&DAT_10008b10,0);
    SelectUnits(&DAT_10008b18,1);
    SelSendAndKill(5,&DAT_10008c20,0,0);
  }
  cVar1 = Trigg(0x35);
  if ((((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b10), iVar2 == 0)) &&
      (iVar2 = GetTotalAmount0(&DAT_10008b18), iVar2 == 0)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008b00), 8 < iVar2)) {
    SetTrigg(0x35,0);
    ShowPage("#PAGE3D");
    iVar2 = GetDiff(1);
    AddResource(0,3,(7 - iVar2) * 1000);
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) &&
     ((iVar2 = GetTotalAmount0(&DAT_10008b10), iVar2 == 5 &&
      (iVar2 = GetUnitsAmount1(&DAT_10008c40,&DAT_10008af8), 0 < iVar2)))) {
    SetTrigg(4,0);
    ShowPage("#PAGE4");
    SelectUnits(&DAT_10008b10,0);
    SelAttackGroup(5,&DAT_10008af8);
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008c90), iVar2 == 0)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008c48,0), 0 < iVar2)) {
    SetTrigg(5,0);
    cVar1 = Trigg(3);
    if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b08), 0 < iVar2)) {
      iVar2 = AskMultilineQuestion(9,"#PAGE5",0,"Q3_1|Q3_2");
      if (iVar2 == 0) {
        ShowPage("#PAGE5A");
        iVar2 = GetDiff(1);
        iVar5 = 8;
        goto LAB_1000223c;
      }
      ShowPage("#PAGE5B");
      iVar2 = GetDiff(1);
      AddResource(0,1,(0xc - iVar2) * 0x32);
      SelectUnits(&DAT_10008b08,0);
      SelChangeNation(0,4);
      SelectUnits(&DAT_10008b08,0);
      SelSendTo(4,&DAT_10008c20,0x40,0);
    }
    else {
      ShowPage("#PAGE5C");
      iVar2 = GetDiff(1);
      iVar5 = 0xc;
LAB_1000223c:
      AddResource(0,1,(iVar5 - iVar2) * 0x32);
    }
    ClearSelection(4);
    SelectUnits(&DAT_10008b48,0);
    SelErase(4);
    CreateObject0(&DAT_10008b78,&DAT_10008cf8,&DAT_10008d08,4,&DAT_10008c48,0);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c58,&DAT_10008af8), 0 < iVar2)) {
    SetTrigg(6,0);
    cVar1 = Trigg(5);
    if (cVar1 == '\0') {
      iVar2 = GetResource(0,1);
      if (iVar2 < 0x32) {
        pcVar7 = "Q4_1|Q4_2|Q4_3";
      }
      else {
        iVar2 = GetResource(0,1);
        if (99 < iVar2) {
          iVar2 = AskMultilineQuestion(9,"#PAGE6A",0,"Q4_1|Q4_2|Q4_3|Q4_4|Q4_5");
          if (iVar2 == 4) {
            ShowPage("#PAGE6C");
            SelectUnits(&DAT_10008b20,0);
            SelChangeNation(1,0);
            AddResource(0,1,0xffffff9c);
            goto LAB_100023b4;
          }
          pcVar7 = "#PAGE6B";
          goto LAB_100022cb;
        }
        pcVar7 = "Q4_1|Q4_2|Q4_3|Q4_4";
      }
      AskMultilineQuestion(9,"#PAGE6A",0,pcVar7);
      ShowPage("#PAGE6B");
      SelectUnits(&DAT_10008b20,0);
      SelChangeNation(1,5);
      SelectUnits(&DAT_10008b20,0);
      SelAttackGroup(5,&DAT_10008af8);
    }
    else {
      pcVar7 = "#PAGE6";
LAB_100022cb:
      ShowPage(pcVar7);
      SelectUnits(&DAT_10008b20,0);
      SelChangeNation(1,5);
      SelectUnits(&DAT_10008b20,0);
      SelAttackGroup(5,&DAT_10008af8);
    }
  }
LAB_100023b4:
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008c68,0), 0 < iVar2)) {
    SetTrigg(7,0);
    iVar2 = GetUnitsAmount1(&DAT_10008c68,&DAT_10008af8);
    if (0 < iVar2) {
      ShowPage("#PAGE7");
    }
  }
  cVar1 = Trigg(0x36);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b28), iVar2 == 0)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008ea0,0), 0 < iVar2)) {
    SetTrigg(0x36,0);
    ShowPage("#PAGE7A");
    iVar2 = GetDiff(1);
    AddResource(0,1,(4 - iVar2) * 0x32);
    ClearSelection(4);
    SelectUnits(&DAT_10008b40,0);
    SelErase(4);
    CreateObject0(&DAT_10008b60,&DAT_10008cf8,&DAT_10008d18,4,&DAT_10008ea0,0);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c78,&DAT_10008af8), 0 < iVar2)) {
    SetTrigg(8,0);
    ShowPage("#PAGE8");
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008ea8,&DAT_10008af8), 0 < iVar2)) {
    SetTrigg(0x37,0);
    ShowPage("#PAGE8A");
    CreateObject0(&DAT_10008ca0,&DAT_10008cf0,&DAT_10008ae0,5,&DAT_10008eb0,0x40);
    iVar2 = GetDiff(0);
    RunTimer(9,iVar2 * -200 + 0x259);
  }
  cVar1 = TimerDoneFirst(9);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10008ca0,0);
    SelAttackGroup(5,&DAT_10008c98);
  }
  cVar1 = Trigg(0x38);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x37), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount1(&DAT_10008ea8,&DAT_10008af8), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10008b30);
    if (((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10008c98), iVar2 < 1)) ||
       (iVar2 = GetTotalAmount0(&DAT_10008ca0), iVar2 != 0)) {
      iVar2 = GetTotalAmount0(&DAT_10008b30);
      if (((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008c98), iVar2 == 0)) &&
         (iVar2 = GetTotalAmount0(&DAT_10008ca0), iVar2 == 0)) {
        SetTrigg(0x38,0);
        ShowPage("#PAGE8C");
      }
    }
    else {
      SetTrigg(0x38,0);
      ShowPage("#PAGE8B");
      SelectUnits(&DAT_10008b30,0);
      AllowAttack(4,1);
      GetUnitInfo(&DAT_10008c98,0,&DAT_10008f00);
      if (DAT_10008f04 < DAT_10008f06) {
        SetTrigg(0x3c,0);
        CreateObject0(&DAT_10008ca8,&DAT_10008ae8,&DAT_10008cd8,4,&DAT_10008eb8,0x40);
        SelectUnits(&DAT_10008ca8,0);
        RepairBuildingsBySel(4,&DAT_10008c98);
      }
    }
  }
  cVar1 = Trigg(0x3c);
  if (((cVar1 == '\0') && (GetUnitInfo(&DAT_10008c98,0,&DAT_10008f00), DAT_10008f04 == DAT_10008f06)
      ) && (iVar2 = GetTotalAmount0(&DAT_10008ca8), 0 < iVar2)) {
    SetTrigg(0x3c,1);
    SelectUnits(&DAT_10008ca8,0);
    SelErase(4);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008c80,0), 0 < iVar2)) {
    SetTrigg(9,0);
    SelectUnits(&DAT_10008cc0,0);
    SelSendTo(4,&DAT_10008ee8,0,0);
  }
  cVar1 = Trigg(0x39);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008ee8,&DAT_10008cc0), 0 < iVar2)) {
    SetTrigg(0x39,0);
    SelectUnits(&DAT_10008cc0,0);
    SelErase(4);
  }
  cVar1 = Trigg(0x3a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c80,&DAT_10008af8), 0 < iVar2)) {
    SetTrigg(0x3a,0);
    DAT_10008c88_ovl = AskMultilineQuestion(9,"#PAGE9",0,"Q5_1|Q5_2|Q5_3|Q5_4");
    if (DAT_10008c88_ovl == 0) {
      pcVar7 = "#PAGE9A";
    }
    else {
      if (DAT_10008c88_ovl == 3) {
LAB_100027f7:
        ShowPage("#PAGE9D");
        SelectUnits(&DAT_10008cb8,0);
        SelChangeNation(4,3);
        SelectUnits(&DAT_10008cb8,0);
        SelAttackGroup(3,&DAT_10008af8);
        SetTrigg(0x3d,0);
        goto LAB_100028b7;
      }
      if (DAT_10008c88_ovl == 1) {
        pcVar7 = "#PAGE9B";
      }
      else {
        pcVar7 = "#PAGE9C";
      }
      DAT_10008c88_ovl = AskMultilineQuestion(9,pcVar7,0,"Q6_1|Q6_2|Q6_3|Q6_4");
      if (DAT_10008c88_ovl == 0) {
        DAT_10008f2c = 400;
      }
      else {
        if (DAT_10008c88_ovl == 3) goto LAB_100027f7;
        cVar1 = AskQuestion("#PAGE9E");
        if (cVar1 == '\0') goto LAB_100028b7;
        DAT_10008f2c = 700;
      }
      pcVar7 = "#PAGE9F";
    }
    ShowPage(pcVar7);
    SelectUnits(&DAT_10008cb8,0);
    SelSendAndKill(4,&DAT_10008ec0,0,0);
    SelSendAndKill(4,&DAT_10008c48,0,2);
    SelSendAndKill(4,&DAT_10008ec8,0,2);
    SelSendAndKill(4,&DAT_10008ed0,0,2);
    SelSendAndKill(4,&DAT_10008ed8,0,2);
    SelSendAndKill(4,&DAT_10008ee0,0,2);
  }
LAB_100028b7:
  cVar1 = Trigg(0x3b);
  if ((cVar1 == '\0') || (iVar2 = GetUnitsAmount1(&DAT_10008ee0,&DAT_10008b38), iVar2 < 1))
  goto LAB_100029bb;
  iVar2 = GetTotalAmount0(&DAT_10008cb0);
  iVar5 = GetUnitsAmount1(&DAT_10008ee0,&DAT_10008cb0);
  if ((iVar5 != iVar2) || (iVar2 = GetUnitsAmount1(&DAT_10008ee0,&DAT_10008af8), iVar2 < 1))
  goto LAB_100029bb;
  SetTrigg(0x3b,0);
  iVar2 = GetTotalAmount0(&DAT_10008cb0);
  if (iVar2 == 0) {
    pcVar7 = "#PAGE9G";
  }
  else {
    iVar2 = GetTotalAmount0(&DAT_10008cb0);
    if (iVar2 == 5) {
      if (DAT_10008f2c != 0) {
        ShowPage("#PAGE9J");
        iVar2 = DAT_10008f2c;
LAB_100029af:
        AddResource(0,1,iVar2);
        goto LAB_100029bb;
      }
      pcVar7 = "#PAGE9H";
    }
    else {
      if (DAT_10008f2c != 0) {
        iVar2 = AskMultilineQuestion(9,"#PAGE9L",0,"Q7_1|Q7_2|Q7_3");
        if (iVar2 != 1) goto LAB_100029bb;
        ShowPage("#PAGE9M");
        iVar2 = 200;
        goto LAB_100029af;
      }
      pcVar7 = "#PAGE9K";
    }
  }
  ShowPage(pcVar7);
LAB_100029bb:
  cVar1 = Trigg(0x3e);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x3d), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10008cb0);
    iVar5 = GetUnitsAmount1(&DAT_10008ef0,&DAT_10008cb0);
    if ((iVar5 == iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008cb0), 0 < iVar2)) {
      SetTrigg(0x3e,0);
      ShowPage("#PAGE9N");
      iVar2 = GetTotalAmount0(&DAT_10008cb0);
      AddResource(0,1,iVar2 * 0x32);
      SelectUnits(&DAT_10008cb0,0);
      SelErase(0);
    }
  }
  cVar1 = Trigg(10);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008d20,0), 0 < iVar2)) ||
     (iVar2 = GetUnitsAmount0(&DAT_10008d20,4), 0 < iVar2)) {
    SelectUnits(&DAT_10008b68,0);
    SetStandGround(5,0);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008d30,0), 0 < iVar2)) {
    SelectUnits(&DAT_10008d28,0);
    SetStandGround(5,0);
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d38,&DAT_10008af8), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount1(&DAT_10008d38,&DAT_10008b80), 0 < iVar2)) {
    SetTrigg(0xc,0);
    cVar1 = Trigg(0x3f);
    if (cVar1 != '\0') {
      ShowPage("#PAGE12");
    }
  }
  cVar1 = Trigg(0x3f);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008b70,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008d30,5), iVar2 == 0)) {
    SetTrigg(0x3f,0);
    ShowPage("#PAGE12A");
    ClearSelection(0);
    SelectUnits(&DAT_10008b70,0);
    SelChangeNation(0,4);
  }
  cVar1 = Trigg(0x40);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x3f), cVar1 == '\0')) &&
     ((iVar2 = GetUnitsAmount1(&DAT_10008d38,&DAT_10008af8), 0 < iVar2 &&
      (iVar2 = GetUnitsAmount1(&DAT_10008d38,&DAT_10008b80), 0 < iVar2)))) {
    SetTrigg(0x40,0);
    ShowPage("#PAGE12B");
    iVar2 = GetDiff(1);
    AddResource(0,1,(7 - iVar2) * 200);
  }
  cVar1 = Trigg(0x3f);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsByNation(&DAT_10008b70,5), 0 < iVar2)) {
    ClearSelection(5);
    SelectUnits1(5,&DAT_10008b70,0);
    SelDie(5);
    cVar1 = Trigg(0x40);
    if (cVar1 != '\0') {
      SetTrigg(0x40,0);
      ShowPage("#PAGE12C");
    }
  }
  cVar1 = Trigg(0x41);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008f40,0), 0 < iVar2)) {
    SetTrigg(0x41,0);
    SelectUnits(&DAT_10008da8,0);
    SelOpenGates(4);
  }
  cVar1 = Trigg(0x41);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008f40,0), iVar2 == 0)) {
    SetTrigg(0x41,1);
    SelectUnits(&DAT_10008da8,0);
    SelCloseGates(4);
  }
  cVar1 = Trigg(0x42);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008f48,0), 0 < iVar2)) {
    SetTrigg(0x42,0);
    SelectUnits(&DAT_10008db0,0);
    SelOpenGates(4);
  }
  cVar1 = Trigg(0x42);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008f48,0), iVar2 == 0)) {
    SetTrigg(0x42,1);
    SelectUnits(&DAT_10008db0,0);
    SelCloseGates(4);
  }
  cVar1 = Trigg(0x4e);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0x4d), cVar1 == '\0')) &&
      (iVar2 = GetUnitsAmount1(&DAT_10008d40,&DAT_10008af8), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008b88), 0 < iVar2)) {
    SetTrigg(0x4e,0);
    ShowPage("#PAGE16C");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ShowPage("#OTST2");
      ClearLightSpot(1);
      ClearLightSpot(2);
      SetLightSpot(&DAT_10008d80,4,3);
    }
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
  }
  cVar1 = Trigg(0x28);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d40,&DAT_10008af8), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008b88), iVar2 == 0)) {
    SetTrigg(0x28,0);
    ShowPage("#PAGE13B");
  }
  cVar1 = Trigg(0xd);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d40,&DAT_10008af8), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008b88), 0 < iVar2)) {
    SetTrigg(0xd,0);
    ShowPage("#PAGE13");
  }
  cVar1 = Trigg(0xe);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d40,&DAT_10008af8), 0 < iVar2)) &&
      (iVar2 = GetTotalAmount0(&DAT_10008b88), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008d98), 0 < iVar2)) {
    SetTrigg(0xe,0);
    DAT_10008f30 = '\x01';
    do {
      iVar2 = AskMultilineQuestion(9,"#PAGE14",0,"Q8_1|Q8_2|Q8_3|Q8_4|Q8_5");
      if (iVar2 == 0) {
        iVar2 = GetResource(0,1);
        if (iVar2 < 100) {
LAB_10002f7b:
          ShowPage("#PAGE14C");
        }
        else {
          ShowPage("#PAGE14A");
          AddResource(0,1,0xffffff9c);
          DAT_10008ce0 = DAT_10008ce0 + 10;
        }
      }
      else if (iVar2 == 1) {
        iVar2 = GetResource(0,1);
        if (iVar2 < 0x96) goto LAB_10002f7b;
        ShowPage("#PAGE14A");
        AddResource(0,1,0xffffff6a);
        DAT_10008cc8 = DAT_10008cc8 + 5;
      }
      else {
        if (iVar2 == 2) {
          iVar2 = GetResource(0,1);
          if (iVar2 < 300) goto LAB_10002f7b;
          AddResource(0,1,0xfffffed4);
          ShowPage("#PAGE14B");
          InitialUpgrade(DAT_10008388,"Pikiner_polan(PL)ATTACK");
          pcVar7 = "Pikiner_polan(PL)SHIELD";
        }
        else {
          if (iVar2 != 3) {
            DAT_10008f30 = '\0';
            goto LAB_10002fd2;
          }
          iVar2 = GetResource(0,1);
          if (iVar2 < 300) goto LAB_10002f7b;
          AddResource(0,1,0xfffffed4);
          ShowPage("#PAGE14B");
          InitialUpgrade(DAT_10008388,"Mushketer_polsha(PL)ATTACK");
          pcVar7 = "Mushketer_polsha(PL)SHIELD";
        }
        InitialUpgrade(DAT_10008388,pcVar7);
      }
LAB_10002fd2:
      RefreshScreen();
    } while (DAT_10008f30 != '\0');
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d40,&DAT_10008af8), iVar2 == 0)) {
    SetTrigg(0xe,1);
  }
  cVar1 = Trigg(0xf);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008de0,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008d60,5), iVar2 == 0)) {
    SetTrigg(0xf,0);
    iVar2 = GetDiff(0);
    ShowPageParam("#PAGE15",(7 - iVar2) * 100);
    SelectUnits(&DAT_10008de0,0);
    SelDie(0);
    iVar2 = GetDiff(0);
    AddResource(0,1,(7 - iVar2) * 100);
  }
  cVar1 = Trigg(0x46);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008f68,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008f68,5), iVar2 == 0)) {
    SetTrigg(0x46,0);
    ShowPage("#PAGE15A");
    iVar2 = GetDiff(0);
    AddResource(0,1,(8 - iVar2) * 0x32);
    iVar2 = GetDiff(0);
    AddResource(0,3,(0xc - iVar2) * 100);
    ClearSelection(4);
    SelectUnits(&DAT_10008b50,0);
    SelErase(4);
    CreateObject0(&DAT_10008bb0,&DAT_10008cf8,&DAT_10008d18,4,&DAT_10008f68,0);
  }
  cVar1 = Trigg(0x47);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008f78,0), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008ba8), iVar2 == 0)) {
    SetTrigg(0x47,0);
    iVar2 = GetDiff(0);
// FIXME(decompiler):     iVar2 = GetDiff(0,(7 - iVar2) * 1000);
    ShowPageParam("#PAGE15B",(9 - iVar2) * 100);
    iVar2 = GetDiff(0);
    AddResource(0,1,(9 - iVar2) * 100);
    iVar2 = GetDiff(0);
    AddResource(0,3,(7 - iVar2) * 1000);
  }
  iVar2 = GetUnitsAmount0(&DAT_10008d88,0);
  if (((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_10008d88,5), iVar2 == 0)) &&
     (iVar2 = GetUnitsByNation(&DAT_10008dd8,6), 0 < iVar2)) {
    SelectUnits(&DAT_10008dd8,0);
    SelChangeNation(6,0);
  }
  cVar1 = Trigg(0x48);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008dc8), iVar2 == 0)) &&
     (iVar2 = GetUnitsByNation(&DAT_10008dd8,0), 0 < iVar2)) {
    SetTrigg(0x48,0);
    iVar2 = GetDiff(0);
// FIXME(decompiler):     iVar2 = GetDiff(0,(0xc - iVar2) * 500);
    ShowPageParam("#PAGE15C",(4 - iVar2) * 0x32);
    ClearSelection(0);
    SelectUnits(&DAT_10008dd8,0);
    SelDie(0);
    iVar2 = GetDiff(0);
    AddResource(0,1,(4 - iVar2) * 0x32);
    iVar2 = GetDiff(0);
    AddResource(0,3,(0xc - iVar2) * 500);
  }
  cVar1 = Trigg(0x4a);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008f80,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008f80,5), iVar2 == 0)) {
    SetTrigg(0x4a,0);
    ShowPage("#PAGE15D");
    AddResource(0,1,500);
    iVar2 = GetDiff(1);
    AddResource(0,3,(7 - iVar2) * 200);
    ClearSelection(4);
    SelectUnits(&DAT_10008b58,0);
    SelErase(4);
    CreateObject0(&DAT_10008bf0,&DAT_10008cf8,&DAT_10008d08,4,&DAT_10008f80,0);
  }
  cVar1 = Trigg(0x10);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008f90,0), 2 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008df0), 2 < iVar2)) {
    SetTrigg(0x10,0);
    SelectUnits(&DAT_10008e30,0);
    SelOpenGates(5);
    RunTimer(1,0xf);
  }
  cVar1 = Trigg(0x10);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008fa0,0), 0 < iVar2)) &&
      (iVar2 = GetUnitsAmount0(&DAT_10008fa0,5), iVar2 == 0)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008df0), 2 < iVar2)) {
    SetTrigg(0x10,0);
    SelectUnits(&DAT_10008e30,0);
    SelOpenGates(5);
    SelectUnits(&DAT_10008e58,0);
    SelOpenGates(5);
    RunTimer(3,0xf);
  }
  cVar1 = TimerDoneFirst(1);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10008df0,0);
    SelSendAndKill(5,&DAT_10008f90,0x80,0);
  }
  cVar1 = TimerDoneFirst(3);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10008df0,0);
    SelSendAndKill(5,&DAT_10008f90,0x80,0);
    SelSendAndKill(5,&DAT_10008fb0,0xc0,2);
    SelSendAndKill(5,&DAT_10008fa0,0x40,2);
  }
  cVar1 = Trigg(0x49);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008f98,0), 2 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008e08), 2 < iVar2)) {
    SetTrigg(0x49,0);
    SelectUnits(&DAT_10008e40,0);
    SelOpenGates(5);
    RunTimer(2,0xf);
  }
  cVar1 = Trigg(0x10);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008fa8,0), 0 < iVar2)) &&
     ((iVar2 = GetUnitsAmount0(&DAT_10008fa8,5), iVar2 == 0 &&
      (iVar2 = GetTotalAmount0(&DAT_10008e08), 2 < iVar2)))) {
    SetTrigg(0x10,0);
    SelectUnits(&DAT_10008e30,0);
    SelOpenGates(5);
    RunTimer(4,0xf);
  }
  cVar1 = TimerDoneFirst(2);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10008e08,0);
    SelSendAndKill(5,&DAT_10008f98,0,0);
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10008df0,0);
    SelSendAndKill(5,&DAT_10008f90,0x80,0);
    SelSendAndKill(5,&DAT_10008fa8,0x80,2);
  }
  cVar1 = Trigg(0x4b);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008e18,0), 0 < iVar2)) {
    SetTrigg(0x4b,0);
    ShowPage("#PAGE16");
  }
  cVar1 = Trigg(0x4c);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008e28,0), 0 < iVar2)) {
    SetTrigg(0x4c,0);
    iVar2 = GetDiff(1);
    AddResource(0,1,(6 - iVar2) * 500);
    iVar2 = GetDiff(1);
    AddResource(0,0,(10 - iVar2) * 500);
    iVar2 = GetDiff(1);
    AddResource(0,2,(10 - iVar2) * 500);
    iVar2 = GetDiff(1);
    ShowPageParam("#PAGE16A",(6 - iVar2) * 500);
  }
  cVar1 = Trigg(0x4d);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x4b), cVar1 == '\0')) &&
     (cVar1 = Trigg(0x4c), cVar1 == '\0')) {
    SetTrigg(0x4d,0);
    ShowPage("#PAGE16B");
    DisableMission(0x42);
    EnableMission(0x43);
    EnableMission(0x44);
  }
  cVar1 = Trigg(0x11);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d80,&DAT_10008af8), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008d80,5), iVar2 == 0)) {
    SetTrigg(0x11,0);
    SelectUnits(&DAT_10008bd0,0);
    SelChangeNation(6,0);
    ShowPage("#PAGE17");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ShowPage("#OTST3");
      ClearLightSpot(3);
      SetLightSpot(&DAT_10008d90,4,4);
    }
    iVar2 = GetDiff(0);
    RunTimer(8,iVar2 * -100 + 0x12d);
    iVar2 = GetDiff(1);
    SetResource(3,1,(iVar2 + 8) * 500);
    iVar2 = GetDiff(1);
    SetResource(3,3,(iVar2 + 10) * 500);
    iVar2 = GetDiff(1);
    SetResource(3,4,(iVar2 + 8) * 500);
    iVar2 = GetDiff(1);
    SetResource(3,5,(iVar2 + 8) * 500);
    iVar2 = GetDiff(1);
    SetResource(3,0,(iVar2 + 8) * 500);
    iVar2 = GetDiff(1);
    SetResource(3,2,(iVar2 + 8) * 500);
    uVar6 = GetDiff(1);
    StartAI(3,"TURKISH.0",1,1,0,uVar6);
    iVar2 = GetTotalAmount0(&DAT_10008b88);
    if (0 < iVar2) {
      SelectUnits(&DAT_10008b88,0);
      SelSendTo(4,&DAT_10008f38,0,0);
    }
  }
  cVar1 = TimerDoneFirst(8);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10008e50,0);
    AllowAttack(5,1);
    SelAttackGroup(5,&DAT_10008bd0);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f38,&DAT_10008b88), 0 < iVar2)) {
    cVar1 = Trigg(0x4e);
    if (cVar1 != '\0') {
      DisableMission(0x44);
      EnableMission(0x45);
      EnableMission(0x46);
      SetTrigg(0x4e,0);
    }
    SelectUnits(&DAT_10008b88,0);
    SelErase(4);
  }
  cVar1 = Trigg(0x4f);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008e38,0), 0 < iVar2)) {
    SetTrigg(0x4f,0);
    AddResource(0,1,500);
    AddResource(0,4,1000);
    AddResource(0,5,1000);
    ShowPage("#PAGE17A");
  }
  cVar1 = Trigg(0x16);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d68,&DAT_10008e18), 0 < iVar2)) &&
      (iVar2 = GetUnitsByNation(&DAT_10008e18,0), 0 < iVar2)) &&
     ((iVar2 = GetTotalAmount0(&DAT_10008e00), iVar2 == 0x10 &&
      (iVar2 = GetTotalAmount0(&DAT_10008bb8), 0 < iVar2)))) {
    SetTrigg(0x16,0);
    ShowPage("#PAGE22");
    SelectUnits(&DAT_10008de8,0);
    SelOpenGates(5);
    RunTimer(0x16,0x1e);
  }
  cVar1 = TimerDone(0x16);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008bb8), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008f88,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_10008bb8,&DAT_10008f88,0);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetUnitsAmount1(&DAT_10008d58,&DAT_10008af8), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_10008f60,&DAT_10008af8), 0 < iVar2)) ||
      (iVar2 = GetUnitsAmount1(&DAT_10008f70,&DAT_10008af8), 0 < iVar2)))) {
    SetTrigg(0x15,0);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsAmount1(&DAT_10008d90,&DAT_10008af8), pcVar3 = (void*)&RunTimer, 0 < iVar2)) {
    SetTrigg(0x12,0);
    SelectUnits1(4,&DAT_10008be0,0);
    SelChangeNation(4,0);
    SelectUnits(&DAT_10008e70,0);
    SelChangeNation(4,0);
    ShowPage("#PAGE18");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ShowPage("#OTST4");
      ClearLightSpot(4);
    }
    iVar2 = GetDiff(1);
    RunTimer(10,(5 - iVar2) * 1000);
    DisableMission(0x46);
    EnableMission(0x47);
    EnableMission(0x48);
  }
  cVar1 = TimerDoneFirst(10);
  if (cVar1 != '\0') {
    AttackEnemyInZone(&DAT_10008be8,&DAT_10008da0,0);
    iVar2 = GetDiff(1);
    RunTimer(0xb,(5 - iVar2) * 1000);
  }
  cVar1 = TimerDoneFirst(0xb);
  if (cVar1 != '\0') {
    AttackEnemyInZone(&DAT_10008e78,&DAT_10008da0,0);
    iVar2 = GetDiff(1);
    RunTimer(0xc,(5 - iVar2) * 1000);
  }
  cVar1 = TimerDoneFirst(0xc);
  if (cVar1 != '\0') {
    AttackEnemyInZone(&DAT_10008e80,&DAT_10008da0,0);
    iVar2 = GetDiff(1);
    RunTimer(0xd,(5 - iVar2) * 1000);
  }
  cVar1 = TimerDoneFirst(0xd);
  if (cVar1 != '\0') {
    AttackEnemyInZone(&DAT_10008e88,&DAT_10008da0,0);
    iVar2 = GetDiff(1);
    RunTimer(0xe,(5 - iVar2) * 1000);
  }
  cVar1 = TimerDoneFirst(0xe);
  if (cVar1 != '\0') {
    AttackEnemyInZone(&DAT_10008e90,&DAT_10008da0,0);
    iVar2 = GetDiff(1);
    RunTimer(0xf,(5 - iVar2) * 1000);
  }
  cVar1 = TimerDoneFirst(0xf);
  if (cVar1 != '\0') {
    AttackEnemyInZone(&DAT_10008e98,&DAT_10008da0,0);
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsByNation(&DAT_10008b90,0), pcVar3 = (void*)&AddResource, 0 < iVar2)) {
    SetTrigg(0x13,0);
    AddResource(0,1,10000);
    AddResource(0,5,10000);
    AddResource(0,4,10000);
    ShowPage("#PAGE19");
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008d48,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008d48,5), iVar2 == 0)) {
    SetTrigg(0x14,0);
    AddResource(0,1,2000);
    AddResource(0,3,10000);
    ShowPage("#PAGE20");
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
