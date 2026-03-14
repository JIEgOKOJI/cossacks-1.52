#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10007154[] = "ZP2";
char DAT_10007158[] = "ZP1";
char DAT_1000715c[] = "GP3";
char DAT_10007160[] = "GP2";
char DAT_10007164[] = "GP1";
char DAT_10007168[] = "G10S";
char DAT_10007170[] = "G9S";
char DAT_10007174[] = "G8S";
char DAT_10007178[] = "G7S";
char DAT_1000717c[] = "G6S";
char DAT_10007180[] = "G5S";
char DAT_10007184[] = "G4S";
char DAT_10007188[] = "G3S";
char DAT_1000718c[] = "G2S";
char DAT_10007190[] = "G1S";
char DAT_1000719c[] = "Z9S0";
char DAT_100071a4[] = "Z8S0";
char DAT_100071ac[] = "Z7S0";
char DAT_100071b4[] = "Z6S0";
char DAT_100071bc[] = "Z5S0";
char DAT_100071c4[] = "Z4S0";
char DAT_100071cc[] = "Z3S0";
char DAT_100071d4[] = "Z2S0";
char DAT_100071dc[] = "Z1S0";
char DAT_100071e4[] = "Z10S";
char DAT_100071ec[] = "Z9S";
char DAT_100071f0[] = "Z8S";
char DAT_100071f4[] = "Z7S";
char DAT_100071f8[] = "Z6S";
char DAT_100071fc[] = "Z5S";
char DAT_10007200[] = "Z4S";
char DAT_10007204[] = "Z3S";
char DAT_10007208[] = "Z2S";
char DAT_1000720c[] = "Z1S";
char DAT_10007210[] = "ZBH";
char DAT_10007214[] = "Z06";
char DAT_10007218[] = "Z03B";
char DAT_10007220[] = "Z03A";
char DAT_10007228[] = "Z04";
char DAT_1000722c[] = "Z03";
char DAT_10007230[] = "Z02";
char DAT_10007234[] = "Z01";
char DAT_10007238[] = "Z16";
char DAT_1000723c[] = "Z15";
char DAT_10007240[] = "Z14";
char DAT_10007244[] = "Z13";
char DAT_10007248[] = "Z12";
char DAT_1000724c[] = "Z11";
char DAT_10007250[] = "Z10";
char DAT_10007254[] = "Z8";
char DAT_10007258[] = "Z7";
char DAT_1000725c[] = "Z56";
char DAT_10007260[] = "Z6";
char DAT_10007264[] = "Z5";
char DAT_10007268[] = "Z4A";
char DAT_1000726c[] = "Z4";
char DAT_10007270[] = "Z3";
char DAT_10007274[] = "Z2";
char DAT_10007278[] = "Z1";
char DAT_1000727c[] = "G43";
char DAT_10007280[] = "G42";
char DAT_10007284[] = "G41";
char DAT_10007288[] = "G40";
char DAT_1000728c[] = "G8E2";
char DAT_10007294[] = "G7E2";
char DAT_1000729c[] = "G7E";
char DAT_100072a0[] = "G4E";
char DAT_100072a4[] = "G2E";
char DAT_100072a8[] = "G1E";
char DAT_100072ac[] = "G0E";
char DAT_100072b0[] = "GY2";
char DAT_100072b4[] = "G8";
char DAT_100072b8[] = "G7";
char DAT_100072bc[] = "G3";
char DAT_100072c0[] = "G2";
char DAT_100072c4[] = "G1";
char DAT_100072c8[] = "GG2";
char DAT_100072cc[] = "GG1";
char DAT_100072d0[] = "GSV";
long long DAT_10007780 = 0;
long long DAT_10007788 = 0;
long long DAT_10007790 = 0;
long long DAT_10007798 = 0;
long long DAT_100077a0 = 0;
int DAT_100077a8 = 0;
int DAT_100077ac = 0;
long long DAT_100077b0 = 0;
int DAT_100077b8 = 0;
long long DAT_100077c0 = 0;
long long DAT_100077c8 = 0;
long long DAT_100077d0 = 0;
long long DAT_100077d8 = 0;
int DAT_100077e0 = 0;
long long DAT_100077e8 = 0;
long long DAT_100077f0 = 0;
long long DAT_100077f8 = 0;
long long DAT_10007800 = 0;
long long DAT_10007808 = 0;
long long DAT_10007810 = 0;
long long DAT_10007818 = 0;
long long DAT_10007820 = 0;
long long DAT_10007828 = 0;
long long DAT_10007830 = 0;
long long DAT_10007838 = 0;
long long DAT_10007840 = 0;
long long DAT_10007848 = 0;
long long DAT_10007850 = 0;
long long DAT_10007858 = 0;
long long DAT_10007860 = 0;
long long DAT_10007868 = 0;
long long DAT_10007870 = 0;
long long DAT_10007878 = 0;
long long DAT_10007880 = 0;
long long DAT_10007888 = 0;
long long DAT_10007890 = 0;
long long DAT_10007898 = 0;
long long DAT_100078a0 = 0;
long long DAT_100078a8 = 0;
long long DAT_100078b0 = 0;
long long DAT_100078b8 = 0;
long long DAT_100078c0 = 0;
long long DAT_100078c8 = 0;
long long DAT_100078d0 = 0;
long long DAT_100078d8 = 0;
long long DAT_100078e0 = 0;
long long DAT_100078e8 = 0;
long long DAT_100078f0 = 0;
long long DAT_100078f8 = 0;
long long DAT_10007900 = 0;
long long DAT_10007908 = 0;
long long DAT_10007910 = 0;
long long DAT_10007918 = 0;
long long DAT_10007920 = 0;
long long DAT_10007928 = 0;
long long DAT_10007930 = 0;
long long DAT_10007938 = 0;
long long DAT_10007940 = 0;
long long DAT_10007948 = 0;
long long DAT_10007950 = 0;
long long DAT_10007958 = 0;
long long DAT_10007960 = 0;
long long DAT_10007968 = 0;
long long DAT_10007970 = 0;
long long DAT_10007978 = 0;
long long DAT_10007980 = 0;
long long DAT_10007988 = 0;
long long DAT_10007990 = 0;
int DAT_10007998 = 0;
long long DAT_100079a0 = 0;
long long DAT_100079a8 = 0;
long long DAT_100079b0 = 0;
long long DAT_100079b8 = 0;
long long DAT_100079c0 = 0;
long long DAT_100079c8 = 0;
long long DAT_100079d0 = 0;
int DAT_100079d8 = 0;
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
int DAT_10007b28 = 0;
long long DAT_10007b30 = 0;
long long DAT_10007b38 = 0;
long long DAT_10007b40 = 0;
long long DAT_10007b48 = 0;
long long DAT_10007b50 = 0;
long long DAT_10007b58 = 0;

/* Forward declarations */
int FUN_10001012(int param_1,int param_2,int param_3,int param_4);


int __cdecl
FUN_10001012(int param_1,int param_2,int param_3,int param_4)

{
  CreateObject0(param_1,&DAT_10007898,param_2,param_4,param_3,0x80);
  return param_4;
}





void OnInit(void)

{
                    
  SetPlayerName(1,"ENEMY");
  SetPlayerName(2,"NEIRBORG");
  SetPlayerName(3,"SVEDES");
  SetPlayerName(4,"RUSSIANS");
  SetPlayerName(5,"ROBBERS");
  RegisterVar(&DAT_100077a8,4);
  RegisterVar(&DAT_100077b8,4);
  RegisterVar(&DAT_10007998,4);
  RegisterVar(&DAT_10007b28,4);
  RegisterVar(&DAT_100077e0,4);
  RegisterVar(&DAT_100079d8,4);
  RegisterUnits(&DAT_100078a8,"G0AKA");
  RegisterUnits(&DAT_100079c8,DAT_100072d0);
  RegisterUnits(&DAT_10007960,DAT_100072cc);
  RegisterUnits(&DAT_10007968,DAT_100072c8);
  RegisterUnits(&DAT_10007810,DAT_100072c4);
  RegisterUnits(&DAT_10007818,DAT_100072c0);
  RegisterUnits(&DAT_10007820,DAT_100072bc);
  RegisterUnits(&DAT_10007840,DAT_100072b8);
  RegisterUnits(&DAT_10007848,DAT_100072b4);
  RegisterUnits(&DAT_100079c0,DAT_100072b0);
  RegisterUnits(&DAT_10007878,DAT_100072ac);
  RegisterUnits(&DAT_10007888,DAT_100072a8);
  RegisterUnits(&DAT_100078c0,DAT_100072a4);
  RegisterUnits(&DAT_100078e8,DAT_100072a0);
  RegisterUnits(&DAT_10007910,DAT_1000729c);
  RegisterUnits(&DAT_10007b38,DAT_10007294);
  RegisterUnits(&DAT_10007b40,DAT_1000728c);
  RegisterUnits(&DAT_10007858,DAT_10007288);
  RegisterUnits(&DAT_10007860,DAT_10007284);
  RegisterUnits(&DAT_10007868,DAT_10007280);
  RegisterUnits(&DAT_10007870,DAT_1000727c);
  RegisterUnits(&DAT_10007ab0,DAT_10007288);
  RegisterUnits(&DAT_10007ac8,DAT_10007284);
  RegisterUnits(&DAT_10007ad8,DAT_10007280);
  RegisterUnits(&DAT_10007ae8,DAT_1000727c);
  RegisterZone(&DAT_10007880,DAT_10007278);
  RegisterZone(&DAT_10007890,DAT_10007274);
  RegisterZone(&DAT_100078a0,DAT_10007270);
  RegisterZone(&DAT_100078b0,DAT_1000726c);
  RegisterZone(&DAT_10007a78,DAT_10007268);
  RegisterZone(&DAT_100078b8,DAT_10007264);
  RegisterZone(&DAT_100078c8,DAT_10007260);
  RegisterZone(&DAT_10007a60,DAT_1000725c);
  RegisterZone(&DAT_100078d0,DAT_10007258);
  RegisterZone(&DAT_100078d8,DAT_10007254);
  RegisterZone(&DAT_100079f8,DAT_10007250);
  RegisterZone(&DAT_10007a08,DAT_1000724c);
  RegisterZone(&DAT_10007a10,DAT_10007248);
  RegisterZone(&DAT_10007a20,DAT_10007244);
  RegisterZone(&DAT_10007a28,DAT_10007240);
  RegisterZone(&DAT_10007a30,DAT_1000723c);
  RegisterZone(&DAT_10007a40,DAT_10007238);
  RegisterZone(&DAT_100079e0,DAT_10007234);
  RegisterZone(&DAT_100079e8,DAT_10007230);
  RegisterZone(&DAT_100079f0,DAT_1000722c);
  RegisterZone(&DAT_10007a00,DAT_10007228);
  RegisterZone(&DAT_10007b48,DAT_10007220);
  RegisterZone(&DAT_10007b50,DAT_10007218);
  RegisterZone(&DAT_10007a18,DAT_10007214);
  RegisterZone(&DAT_10007b08,DAT_10007210);
  RegisterZone(&DAT_10007a88,DAT_1000720c);
  RegisterZone(&DAT_10007a98,DAT_10007208);
  RegisterZone(&DAT_10007aa8,DAT_10007204);
  RegisterZone(&DAT_10007ac0,DAT_10007200);
  RegisterZone(&DAT_10007ad0,DAT_100071fc);
  RegisterZone(&DAT_10007ae0,DAT_100071f8);
  RegisterZone(&DAT_10007af0,DAT_100071f4);
  RegisterZone(&DAT_10007af8,DAT_100071f0);
  RegisterZone(&DAT_10007b00,DAT_100071ec);
  RegisterZone(&DAT_10007b58,DAT_100071e4);
  RegisterZone(&DAT_10007780,DAT_100071dc);
  RegisterZone(&DAT_10007788,DAT_100071d4);
  RegisterZone(&DAT_10007798,DAT_100071cc);
  RegisterZone(&DAT_100077a0,DAT_100071c4);
  RegisterZone(&DAT_100077b0,DAT_100071bc);
  RegisterZone(&DAT_100077c0,DAT_100071b4);
  RegisterZone(&DAT_100077c8,DAT_100071ac);
  RegisterZone(&DAT_100077d0,DAT_100071a4);
  RegisterZone(&DAT_100077d8,DAT_1000719c);
  RegisterZone(&DAT_100077e8,"Z10S0");
  RegisterUnits(&DAT_100078f8,DAT_10007190);
  RegisterUnits(&DAT_10007900,DAT_1000718c);
  RegisterUnits(&DAT_10007908,DAT_10007188);
  RegisterUnits(&DAT_10007920,DAT_10007184);
  RegisterUnits(&DAT_10007930,DAT_10007180);
  RegisterUnits(&DAT_10007938,DAT_1000717c);
  RegisterUnits(&DAT_10007948,DAT_10007178);
  RegisterUnits(&DAT_10007950,DAT_10007174);
  RegisterUnits(&DAT_10007958,DAT_10007170);
  RegisterUnits(&DAT_10007a50,DAT_10007168);
  RegisterUnits(&DAT_100079a0,DAT_10007164);
  RegisterUnits(&DAT_100079a8,DAT_10007160);
  RegisterUnits(&DAT_100079b0,DAT_1000715c);
  RegisterZone(&DAT_10007b18,DAT_10007158);
  RegisterZone(&DAT_10007b20,DAT_10007154);
  RegisterDynGroup(&DAT_10007820);
  RegisterFormation(&DAT_100078e0,"#ALONE");
  RegisterUnitType(&DAT_10007918,"Strelec_Algir_DIP(DIP)");
  RegisterDynGroup(&DAT_10007828);
  RegisterFormation(&DAT_100078f0,"#ALONE");
  RegisterUnitType(&DAT_10007928,"Grenader_DIP(DIP)");
  RegisterDynGroup(&DAT_10007830);
  RegisterDynGroup(&DAT_10007838);
  RegisterUnitType(&DAT_10007940,"MOLDAVAN(UN)");
  RegisterUnitType(&DAT_100077f8,"BGAUZ2(UN)");
  RegisterVar(&DAT_10007820,8);
  RegisterVar(&DAT_10007828,8);
  RegisterVar(&DAT_10007830,8);
  RegisterVar(&DAT_10007838,8);
  RegisterUnitType(&DAT_10007790,"shahta(PL)");
  RegisterUnitType(&DAT_100079d0,"shahta_FE(PL)");
  RegisterUnitType(&DAT_10007800,"shahta_UG(PL)");
  RegisterDynGroup(&DAT_10007808);
  RegisterDynGroup(&DAT_100079b8);
  RegisterDynGroup(&DAT_10007978);
  RegisterDynGroup(&DAT_10007980);
  RegisterDynGroup(&DAT_10007990);
  RegisterDynGroup(&DAT_10007988);
  RegisterVar(&DAT_10007808,8);
  RegisterVar(&DAT_100079b8,8);
  RegisterVar(&DAT_10007978,8);
  RegisterVar(&DAT_10007980,8);
  RegisterVar(&DAT_10007990,8);
  RegisterVar(&DAT_10007988,8);
  RegisterUnitType(&DAT_10007a58,"Poland_pikiner(PL)");
  RegisterUnitType(&DAT_10007a70,"Mushketer_polsha(PL)");
  RegisterUnitType(&DAT_10007a80,"Krestian_Sved(SV)");
  RegisterUnitType(&DAT_10007a90,"Reitar_Shwec(SV)");
  RegisterUnitType(&DAT_10007aa0,"Pikiner_evro(SV)");
  RegisterUnitType(&DAT_10007ab8,"Mushketer_ev(SV)");
  RegisterDynGroup(&DAT_10007970);
  RegisterUnitType(&DAT_10007b10,"Lodka(SV)");
  RegisterDynGroup(&DAT_10007b30);
  RegisterUnitType(&DAT_100077f0,"Dragun_18_DIP(SV)");
  RegisterVar(&DAT_10007970,8);
  RegisterVar(&DAT_10007b30,8);
  RegisterFormation(&DAT_10007898,"#ALONE");
  RegisterFormation(&DAT_10007850,"#LINE40PUS");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  void *pcVar14;
  
                    
  cVar1 = Trigg(99);
  iVar13 = 1;
  if (cVar1 == '\0') goto LAB_10002004;
  SetStartPoint(&DAT_10007880);
  SelectUnits(&DAT_10007960,0);
  SelOpenGates(2);
  SelectUnits(&DAT_10007968,0);
  SelOpenGates(2);
  SelectUnits(&DAT_100079a8,0);
  SelectUnits(&DAT_100079b0,1);
  Patrol(2,&DAT_10007b20,0);
  SelectUnits(&DAT_100079a0,0);
  Patrol(2,&DAT_10007b18,0);
  ChangeFriends(2,0xfe);
  ChangeFriends(3,0xff);
  ChangeFriends(4,0xff);
  ChangeFriends(5,8);
  DAT_100077b8 = GetDiff(0);
  RunTimer(10,10);
  DAT_10007998 = DAT_100077b8 + 5;
  RunTimer(0x14,(6 - DAT_100077b8) * 22000);
  SetResource(3,0,(DAT_100077b8 + 1) * 50000);
  SetResource(3,3,(DAT_100077b8 + 1) * 0x1e848);
  SetResource(3,1,(DAT_100077b8 + 1) * 0x1e848);
  uVar2 = GetResource(3,0);
  SetResource(3,2,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,4,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,5,uVar2);
  SetResource(1,3,30000);
  SetResource(1,1,30000);
  if (DAT_100077b8 == 2) {
LAB_10001894:
    InitialUpgrade(DAT_100072d0,"AKA31SV");
    InitialUpgrade(DAT_100072d0,"AKA33SV");
    InitialUpgrade(DAT_100072d0,"AKA34SV");
    InitialUpgrade(DAT_100072d0,"KUZ05SV");
    InitialUpgrade(DAT_100072d0,"KUZ06SV");
    InitialUpgrade(DAT_100072a8,"AKA31PL");
    InitialUpgrade(DAT_100072a8,"AKA34PL");
    InitialUpgrade(DAT_100072a8,"KUZ03PL");
  }
  else if (DAT_100077b8 == 3) {
    InitialUpgrade(DAT_100072d0,"AKA31SV");
    InitialUpgrade(DAT_100072d0,"KUZ05SV");
    InitialUpgrade(DAT_100072d0,"KUZ06SV");
    InitialUpgrade(DAT_100072a8,"KUZ05PL");
    InitialUpgrade(DAT_100072a8,"KUZ06PL");
    goto LAB_10001894;
  }
  InitialUpgrade(DAT_100072d0,"MAINSV");
  InitialUpgrade(DAT_100072d0,"AKA09SV");
  InitialUpgrade(DAT_100072d0,"AKA09SV");
  InitialUpgrade(DAT_100072d0,"AKA33SV");
  InitialUpgrade(DAT_100072d0,"KUZ02SV");
  InitialUpgrade(DAT_100072d0,"KUZ03SV");
  InitialUpgrade(DAT_100072d0,"KUZ05SV");
  InitialUpgrade(DAT_100072d0,"KUZ06SV");
  InitialUpgrade(DAT_1000729c,"AKA09PL");
  InitialUpgrade(DAT_100072a8,"KUZ02PL");
  InitialUpgrade(DAT_100072a8,"AKA33PL");
  InitialUpgrade("G0AKA","AKA28UA");
  InitialUpgrade("G0AKA","AKA33UA");
  SelectUnits(&DAT_100079c8,0);
  SelErase(3);
  if (DAT_100077b8 == 0) {
    SelectUnits(&DAT_10007910,0);
    SelectUnits(&DAT_10007b38,1);
    SelectUnits(&DAT_10007b40,1);
    SelErase(2);
    SelectUnits(&DAT_10007888,0);
    SelectUnits(&DAT_100078c0,1);
    SelectUnits(&DAT_100078e8,1);
    SelectUnits(&DAT_10007878,1);
    SelectUnits(&DAT_10007860,1);
    SelectUnits(&DAT_10007868,1);
    SelectUnits(&DAT_10007870,1);
    SelectUnits(&DAT_10007ac8,1);
    SelectUnits(&DAT_10007ad8,1);
    SelectUnits(&DAT_10007ae8,1);
    SelErase(1);
    RemoveGroup(&DAT_10007858,&DAT_100079b8);
    DAT_100077e0 = 0x14;
    DAT_100079d8 = 0x24;
    RegisterFormation(&DAT_10007a38,"#LINE20PUS");
    RegisterFormation(&DAT_10007a48,"#LINE36");
    SetTrigg(0x33,0);
    SetTrigg(0x34,0);
    SetTrigg(0x35,0);
    SetTrigg(0x36,0);
    SetTrigg(0x38,0);
    SetTrigg(0x39,0);
    SetTrigg(0x3a,0);
    SetTrigg(0x3b,0);
    SetTrigg(0x3c,0);
  }
  else {
    if (DAT_100077b8 == 1) {
      SelectUnits(&DAT_10007910,0);
      SelectUnits(&DAT_10007b38,1);
      SelectUnits(&DAT_10007b40,1);
      SelErase(2);
      SelectUnits(&DAT_10007888,0);
      SelectUnits(&DAT_100078c0,1);
      SelectUnits(&DAT_10007858,1);
      SelectUnits(&DAT_10007868,1);
      SelectUnits(&DAT_10007870,1);
      SelectUnits(&DAT_10007ab0,1);
      SelectUnits(&DAT_10007ad8,1);
      SelectUnits(&DAT_10007ae8,1);
      SelErase(1);
      RemoveGroup(&DAT_10007860,&DAT_100079b8);
      DAT_100077e0 = 0x28;
      DAT_100079d8 = 0x24;
      RegisterFormation(&DAT_10007a38,"#LINE40PUS");
      RegisterFormation(&DAT_10007a48,"#LINE36");
      SetTrigg(0x35,0);
      SetTrigg(0x36,0);
      SetTrigg(0x38,0);
      uVar2 = 0x39;
    }
    else {
      if (DAT_100077b8 != 2) {
        if (DAT_100077b8 == 3) {
          SelectUnits(&DAT_10007858,0);
          SelectUnits(&DAT_10007860,1);
          SelectUnits(&DAT_10007868,1);
          SelectUnits(&DAT_10007ab0,1);
          SelectUnits(&DAT_10007ac8,1);
          SelectUnits(&DAT_10007ad8,1);
          SelErase(1);
          RemoveGroup(&DAT_10007870,&DAT_100079b8);
          DAT_100077e0 = 100;
          DAT_100079d8 = 0x48;
          RegisterFormation(&DAT_10007a38,"#LINE100PUS");
          RegisterFormation(&DAT_10007a48,"#LINE72");
        }
        goto LAB_10001ce8;
      }
      SelectUnits(&DAT_10007858,0);
      SelectUnits(&DAT_10007860,1);
      SelectUnits(&DAT_10007870,1);
      SelectUnits(&DAT_10007ab0,1);
      SelectUnits(&DAT_10007ac8,1);
      SelectUnits(&DAT_10007ae8,1);
      SelErase(1);
      RemoveGroup(&DAT_10007868,&DAT_100079b8);
      DAT_100077e0 = 100;
      DAT_100079d8 = 0x48;
      RegisterFormation(&DAT_10007a38,"#LINE100PUS");
      RegisterFormation(&DAT_10007a48,"#LINE72");
      uVar2 = 0x35;
    }
    SetTrigg(uVar2,0);
  }
LAB_10001ce8:
  SelectUnits(&DAT_100079b8,0);
  SelSendTo(1,&DAT_100078b0,0x20,0);
  SetStandGround(1,1);
  if ((DAT_100077b8 != 0) && (DAT_100077ac = 0, 0 < DAT_100077e0)) {
    do {
      FUN_10001012(&DAT_10007990,&DAT_10007a58,&DAT_100078d8,1);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100077e0);
  }
  DAT_100077ac = 0;
  if (0 < DAT_100079d8) {
    do {
      FUN_10001012(&DAT_10007838,&DAT_10007940,&DAT_10007a18,2);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100079d8);
  }
  DAT_100077ac = 0;
  if (0 < DAT_100079d8) {
    do {
      FUN_10001012(&DAT_10007828,&DAT_10007928,&DAT_10007a18,2);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100079d8);
  }
  DAT_100077ac = 0;
  if (0 < DAT_100077e0) {
    do {
      FUN_10001012(&DAT_10007990,&DAT_10007a58,&DAT_100078d8,1);
      RemoveGroup(&DAT_10007990,&DAT_10007978);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100077e0);
  }
  SelectUnits(&DAT_10007978,0);
  SelSendAndKill(1,&DAT_100078b8,0x20,0);
  DAT_100077ac = 0;
  if (0 < DAT_100077e0) {
    do {
      FUN_10001012(&DAT_10007990,&DAT_10007a58,&DAT_100078d8,1);
      RemoveGroup(&DAT_10007990,&DAT_10007980);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100077e0);
  }
  SelectUnits(&DAT_10007980,0);
  SelSendAndKill(1,&DAT_100078c8,0x20,0);
  DAT_100077ac = 0;
  if (0 < DAT_100079d8) {
    do {
      FUN_10001012(&DAT_10007990,&DAT_10007a70,&DAT_100078d8,1);
      RemoveGroup(&DAT_10007990,&DAT_10007988);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100079d8);
  }
  SelectUnits(&DAT_10007988,0);
  SelSendAndKill(1,&DAT_100078d0,0x20,0);
  SetStandGround(1,1);
  SelectUnits(&DAT_10007810,0);
  SelectUnits(&DAT_10007818,1);
  SelectUnits(&DAT_10007848,1);
  SelectUnits(&DAT_100079c0,1);
  SelectUnitsType(&DAT_10007918,2,1);
  SelectUnitsType(&DAT_10007928,2,1);
  SelectUnitsType(&DAT_10007940,2,1);
  AllowAttack(2,0);
  SelectUnits(&DAT_10007810,0);
  SelSendTo(2,&DAT_10007b50,0x37,0);
  SelSendTo(2,&DAT_10007890,0,2);
  SelectUnits(&DAT_10007818,0);
  SelSendTo(2,&DAT_10007b50,0x37,0);
  SelSendTo(2,&DAT_100078a0,0,2);
  RunTimer(0xc,2000);
  SelectUnits(&DAT_10007988,0);
  SelectUnits(&DAT_100079b8,1);
  SelectUnits(&DAT_10007978,1);
  SelectUnits(&DAT_10007980,1);
  SelectUnits(&DAT_100078e8,1);
  DoNotUseSelInAI(1);
  ClearSelection(1);
  StartAI(1,"POLAND.0",1,0,1,DAT_100077b8);
  ShowPage("#PAGE0");
  SetTrigg(99,0);
LAB_10002004:
  iVar3 = GetResource(1,3);
  if (iVar3 < 500) {
    AddResource(1,3,1000);
  }
  iVar3 = GetResource(1,1);
  if (iVar3 < 500) {
    AddResource(1,1,1000);
  }
  iVar3 = GetResource(1,4);
  if (iVar3 < 500) {
    AddResource(1,4,1000);
  }
  iVar3 = GetResource(1,5);
  if (iVar3 < 500) {
    AddResource(1,5,1000);
  }
  iVar3 = GetResource(3,3);
  if (iVar3 < 500) {
    AddResource(3,3,1000);
  }
  iVar3 = GetResource(3,1);
  if (iVar3 < 500) {
    AddResource(3,1,1000);
  }
  iVar3 = GetResource(3,4);
  if (iVar3 < 500) {
    AddResource(3,4,1000);
  }
  iVar3 = GetResource(3,5);
  if (iVar3 < 500) {
    AddResource(3,5,1000);
  }
  cVar1 = TimerDone(10);
  if (cVar1 != '\0') {
    DAT_10007998 = DAT_10007998 + DAT_100077b8;
    iVar3 = GetResource(2,3);
    if (iVar3 < 10000) {
      AddResource(2,3,100000);
    }
    iVar3 = GetResource(2,1);
    if (iVar3 < 10000) {
      AddResource(2,1,100000);
    }
    iVar3 = GetResource(2,4);
    if (iVar3 < 10000) {
      AddResource(2,4,100000);
    }
    iVar3 = GetResource(2,5);
    if (iVar3 < 10000) {
      AddResource(2,5,100000);
    }
    DAT_10007b28 = DAT_10007b28 + (5 - DAT_100077b8) * 0x7b;
    RunTimer(10,11000);
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') && (cVar1 = Trigg(1), cVar1 != '\0')) &&
     ((iVar3 = GetUnitsAmount0(&DAT_10007890,2), 1 < iVar3 ||
      (cVar1 = TimerDone(0xc), cVar1 != '\0')))) {
    ShowPage("#PAGE1");
    RunTimer(1,0x32);
    RunTimer(2,0x96);
    RunTimer(3,3000);
    SetTrigg(1,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SelectUnits(&DAT_10007810,0);
    SelSendTo(2,&DAT_100079e0,0xf,0);
    SetTrigg(2,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SelectUnits(&DAT_10007818,0);
    SelSendTo(2,&DAT_100079e8,0xf,0);
    SetTrigg(3,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SelectUnits(&DAT_10007960,0);
    SelCloseGates(2);
    SelectUnits(&DAT_10007968,0);
    SelCloseGates(2);
    ShowPage("#PAGE6");
    SetTrigg(4,0);
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10007810,0);
    SelectUnits(&DAT_10007818,1);
    AllowAttack(2,0);
    ClearSelection(2);
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount0(&DAT_10007b58,0);
    iVar4 = GetUnitsAmount0(&DAT_10007b00,0);
    iVar5 = GetUnitsAmount0(&DAT_10007af8,0);
    iVar6 = GetUnitsAmount0(&DAT_10007af0,0);
    iVar7 = GetUnitsAmount0(&DAT_10007ae0,0);
    iVar8 = GetUnitsAmount0(&DAT_10007ad0,0);
    iVar9 = GetUnitsAmount0(&DAT_10007ac0,0);
    iVar10 = GetUnitsAmount0(&DAT_10007aa8,0);
    iVar11 = GetUnitsAmount0(&DAT_10007a98,0);
    iVar12 = GetUnitsAmount0(&DAT_10007a88,0);
    if (0 < iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12) {
      SelectUnits(&DAT_10007810,0);
      SelectUnits(&DAT_10007818,1);
      SelectUnits(&DAT_10007848,1);
      SelectUnitsType(&DAT_10007918,2,1);
      SelectUnitsType(&DAT_10007928,2,1);
      SelectUnitsType(&DAT_10007940,2,1);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a8,0);
      SelectUnits(&DAT_100079b0,1);
      SelSendTo(2,&DAT_10007b20,0,0);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a0,0);
      SelSendTo(2,&DAT_10007880,0,0);
      AllowAttack(2,1);
      Patrol(2,&DAT_10007b18,0);
      SelectUnits(&DAT_10007960,0);
      SelCloseGates(2);
      ShowPage("#PAGE3");
      RunTimer(1,0);
      RunTimer(2,0);
      DAT_100077a8 = 1;
      RunTimer(4,0);
      SetTrigg(5,0);
    }
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0xb), cVar1 != '\0')) {
    iVar3 = GetUnitsAmount0(&DAT_100077e8,0);
    iVar4 = GetUnitsAmount0(&DAT_100077d8,0);
    iVar5 = GetUnitsAmount0(&DAT_100077d0,0);
    iVar6 = GetUnitsAmount0(&DAT_100077c8,0);
    iVar7 = GetUnitsAmount0(&DAT_100077c0,0);
    iVar8 = GetUnitsAmount0(&DAT_100077b0,0);
    iVar9 = GetUnitsAmount0(&DAT_100077a0,0);
    iVar10 = GetUnitsAmount0(&DAT_10007798,0);
    iVar11 = GetUnitsAmount0(&DAT_10007788,0);
    iVar12 = GetUnitsAmount0(&DAT_10007780,0);
    if (0 < iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12) {
      ShowPage("#PAGE5");
      SetTrigg(0xb,0);
    }
  }
  cVar1 = Trigg(0xb);
  if (cVar1 == '\0') {
    iVar3 = GetUnitsAmount0(&DAT_100077e8,0);
    iVar4 = GetUnitsAmount0(&DAT_100077d8,0);
    iVar5 = GetUnitsAmount0(&DAT_100077d0,0);
    iVar6 = GetUnitsAmount0(&DAT_100077c8,0);
    iVar7 = GetUnitsAmount0(&DAT_100077c0,0);
    iVar8 = GetUnitsAmount0(&DAT_100077b0,0);
    iVar9 = GetUnitsAmount0(&DAT_100077a0,0);
    iVar10 = GetUnitsAmount0(&DAT_10007798,0);
    iVar11 = GetUnitsAmount0(&DAT_10007788,0);
    iVar12 = GetUnitsAmount0(&DAT_10007780,0);
    if (iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 == 0) {
      SetTrigg(0xb,1);
    }
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') &&
     ((iVar3 = GetTotalAmount0(&DAT_10007810), iVar3 == 0 ||
      (iVar3 = GetTotalAmount0(&DAT_10007818), iVar3 == 0)))) {
    SelectUnits(&DAT_10007810,0);
    SelectUnits(&DAT_10007818,1);
    SelectUnits(&DAT_10007848,1);
    SelectUnitsType(&DAT_10007918,2,1);
    SelectUnitsType(&DAT_10007928,2,1);
    SelectUnitsType(&DAT_10007940,2,1);
    AllowAttack(2,1);
    SelectUnits(&DAT_100079a8,0);
    SelectUnits(&DAT_100079b0,1);
    SelSendTo(2,&DAT_10007b20,0,0);
    AllowAttack(2,1);
    SelectUnits(&DAT_100079a0,0);
    SelSendTo(2,&DAT_10007880,0,0);
    AllowAttack(2,1);
    Patrol(2,&DAT_10007b18,0);
    SelectUnits(&DAT_10007960,0);
    SelCloseGates(2);
    ShowPage("#PAGE4");
    RunTimer(1,0);
    RunTimer(2,0);
    DAT_100077a8 = 1;
    RunTimer(4,0);
    SetTrigg(5,0);
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount1(&DAT_10007800,2);
    iVar4 = GetTotalAmount1(&DAT_100079d0,2);
    iVar5 = GetTotalAmount1(&DAT_10007790,2);
    if (iVar3 + iVar4 + iVar5 < 10) {
      SelectUnits(&DAT_10007810,0);
      SelectUnits(&DAT_10007818,1);
      SelectUnits(&DAT_10007848,1);
      SelectUnitsType(&DAT_10007918,2,1);
      SelectUnitsType(&DAT_10007928,2,1);
      SelectUnitsType(&DAT_10007940,2,1);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a8,0);
      SelectUnits(&DAT_100079b0,1);
      SelSendTo(2,&DAT_10007b20,0,0);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a0,0);
      SelSendTo(2,&DAT_10007880,0,0);
      AllowAttack(2,1);
      Patrol(2,&DAT_10007b18,0);
      SelectUnits(&DAT_10007960,0);
      SelCloseGates(2);
      ShowPage("#PAGE3");
      RunTimer(1,0);
      RunTimer(2,0);
      DAT_100077a8 = 1;
      RunTimer(4,0);
      SetTrigg(5,0);
    }
  }
  cVar1 = Trigg(0x33);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007a88,2), iVar3 == 0)) {
    SelectUnits(&DAT_100078f8,0);
    SelDie(2);
    SetTrigg(0x33,0);
  }
  cVar1 = Trigg(0x34);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007a98,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007900,0);
    SelDie(2);
    SetTrigg(0x34,0);
  }
  cVar1 = Trigg(0x35);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007aa8,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007908,0);
    SelDie(2);
    SetTrigg(0x35,0);
  }
  cVar1 = Trigg(0x36);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007ac0,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007920,0);
    SelDie(2);
    SetTrigg(0x36,0);
  }
  cVar1 = Trigg(0x38);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007ae0,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007938,0);
    SelDie(2);
    SetTrigg(0x38,0);
  }
  cVar1 = Trigg(0x39);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007af0,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007948,0);
    SelDie(2);
    SetTrigg(0x39,0);
  }
  cVar1 = Trigg(0x3a);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007af8,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007950,0);
    SelDie(2);
    SetTrigg(0x3a,0);
  }
  cVar1 = Trigg(0x3b);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007b00,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007958,0);
    SelDie(2);
    SetTrigg(0x3b,0);
  }
  cVar1 = Trigg(0x3c);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007b58,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007a50,0);
    SelDie(2);
    SetTrigg(0x3c,0);
  }
  cVar1 = Trigg(5);
  if ((((cVar1 == '\0') && (cVar1 = Trigg(0x3d), cVar1 != '\0')) &&
      (iVar3 = GetTotalAmount1(&DAT_100077f8,2), iVar3 == 0)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007b08,2), iVar3 == 0)) {
    ShowPageParam("#PAGE9",DAT_10007b28 + 0x929,DAT_10007b28 + 0x4d2);
    AddResource(0,1,DAT_10007b28 + 0x929);
    AddResource(0,3,DAT_10007b28 + 0x4d2);
    AddResource(0,4,((4 - DAT_100077b8) * DAT_10007b28) / 10 + 0x4d2);
    AddResource(0,5,((4 - DAT_100077b8) * DAT_10007b28) / 10 + 0x598);
    SetTrigg(0x3d,0);
  }
  cVar1 = Trigg(0x3d);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
    if (DAT_10007998 < DAT_100077a8) {
      DAT_100077a8 = 1;
      RunTimer(4,5000);
      RunTimer(5,200);
      SetTrigg(6,0);
    }
    else {
      SelectUnits(&DAT_100079a8,0);
      SelectUnits(&DAT_100079b0,1);
      SelSendAndKill(2,&DAT_10007b20,0,0);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a0,0);
      SelSendAndKill(2,&DAT_10007880,0,0);
      AllowAttack(2,1);
      SetTrigg(8,1);
      CreateObject0(&DAT_10007820,&DAT_100078e0,&DAT_10007918,2,&DAT_100079f0,0);
      SelectUnits(&DAT_10007820,0);
      SelSendTo(2,&DAT_10007b48,0x8c,0);
      RemoveGroup(&DAT_10007820,&DAT_10007830);
      CreateObject0(&DAT_10007828,&DAT_100078f0,&DAT_10007928,2,&DAT_10007a00,0);
      SelectUnits(&DAT_10007828,0);
      SelSendTo(2,&DAT_10007b48,0x8c,0);
      RemoveGroup(&DAT_10007828,&DAT_10007830);
      DAT_100077a8 = DAT_100077a8 + 1;
      RunTimer(4,0x1e);
    }
  }
  cVar1 = Trigg(6);
  if ((cVar1 == '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SelectUnits(&DAT_10007830,0);
    SelSendTo(2,&DAT_10007b50,0x37,0);
    SelectUnits(&DAT_10007968,0);
    SelOpenGates(2);
    RunTimer(5,200);
    SetTrigg(6,1);
    SetTrigg(7,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 == '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    cVar1 = Trigg(10);
    if ((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) {
      SelectUnits(&DAT_10007840,0);
      SelSendAndKill(2,&DAT_10007880,0,0);
      SetTrigg(10,0);
    }
    SetTrigg(7,1);
    SetTrigg(8,0);
    SetTrigg(9,1);
    RunTimer(5,(DAT_10007998 + 10) * 100);
  }
  cVar1 = Trigg(8);
  if (((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) &&
     (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SelectUnits(&DAT_10007968,0);
    SelCloseGates(2);
    SetTrigg(9,0);
  }
  cVar1 = Trigg(8);
  if ((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10007830), iVar3 != 0)) {
    AttackEnemyInZone(&DAT_10007830,&DAT_10007880,0);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007a60,0), 0 < iVar3)) {
    SelectUnits(&DAT_10007978,0);
    SelectUnits(&DAT_10007980,1);
    SelSendAndKill(1,&DAT_10007a78,0x20,0);
    SetTrigg(0xc,0);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007a78,0), iVar3 == 0)) {
    SelectUnits(&DAT_10007978,0);
    SelSendAndKill(1,&DAT_100078b8,0x20,0);
    SelectUnits(&DAT_10007980,0);
    SelSendAndKill(1,&DAT_100078c8,0x20,0);
    SetTrigg(0xc,1);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007a78,0), 0 < iVar3)) {
    SelectUnits(&DAT_100079b8,0);
    SetStandGround(1,1);
    SetTrigg(0xe,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007a78,0), iVar3 == 0)) {
    SelectUnits(&DAT_100079b8,0);
    SelSendAndKill(1,&DAT_100078b0,0x20,0);
    SetTrigg(0xe,1);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') &&
     ((cVar1 = TimerDone(0x14), cVar1 != '\0' || (cVar1 = Trigg(0x5b), cVar1 == '\0')))) {
    ShowPage("#PAGE7");
    CreateObject0(&DAT_10007990,&DAT_10007850,&DAT_10007a80,3,&DAT_100079f8,0);
    if (2 < DAT_100077b8) {
      CreateObject0(&DAT_10007990,&DAT_10007850,&DAT_10007a80,3,&DAT_100079f8,0);
    }
    DAT_100077ac = 0;
    if (0 < DAT_100077e0 * 2) {
      do {
        CreateObject0(&DAT_10007990,&DAT_10007898,&DAT_100077f0,3,&DAT_100079f8,0);
        SelectUnits(&DAT_10007990,0);
        SelSendAndKill(3,&DAT_10007a08,0x20,0);
        RemoveGroup(&DAT_10007990,&DAT_10007b30);
        DAT_100077ac = DAT_100077ac + 1;
      } while (DAT_100077ac < DAT_100077e0 * 2);
    }
    SelectUnits(&DAT_10007b30,0);
    DoNotUseSelInAI(3);
    ClearSelection(3);
    ChangeFriends(3,0x1c);
    StartAI(3,"SVEDEN.0",1,3,1,DAT_100077b8);
    RunTimer(0x15,2000);
    SetTrigg(0x14,0);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x15), cVar1 != '\0')) {
    DAT_100077ac = 0;
    if (0 < DAT_100077e0 * 3) {
      do {
        FUN_10001012(&DAT_10007990,&DAT_10007a90,&DAT_100079f8,3);
        DAT_100077ac = DAT_100077ac + 1;
      } while (DAT_100077ac < DAT_100077e0 * 3);
    }
    DAT_100077ac = 0;
    if (0 < DAT_100079d8 * 2) {
      do {
        FUN_10001012(&DAT_10007990,&DAT_10007aa0,&DAT_100079f8,3);
        DAT_100077ac = DAT_100077ac + 1;
      } while (DAT_100077ac < DAT_100079d8 * 2);
    }
    DAT_100077ac = 0;
    if (0 < DAT_100079d8 * 2) {
      do {
        FUN_10001012(&DAT_10007990,&DAT_10007ab8,&DAT_100079f8,3);
        DAT_100077ac = DAT_100077ac + 1;
      } while (DAT_100077ac < DAT_100079d8 * 2);
    }
    RunTimer(0x16,(4 - DAT_100077b8) * 1000);
    SetTrigg(0x15,0);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x16), cVar1 != '\0')) {
    CreateObject0(&DAT_10007970,&DAT_10007898,&DAT_10007b10,3,&DAT_10007b18,0);
    SelectUnits(&DAT_10007b30,0);
    SelectUnits(&DAT_10007970,1);
    SelSendTo(3,&DAT_10007a08,0x20,0);
    RunTimer(0x17,20000);
    SetTrigg(0x16,0);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x17), cVar1 != '\0')) {
    SelectUnits(&DAT_10007b30,0);
    SelSendAndKill(3,&DAT_10007880,0x20,0);
    SetTrigg(0x17,0);
  }
  cVar1 = Trigg(0x5b);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    ShowPage("#PAGE11");
    SetTrigg(0x5b,0);
  }
  cVar1 = Trigg(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE12");
    SetTrigg(0x5c,0);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5d), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage("#PAGE13");
    SetTrigg(0x5d,0);
  }
  cVar1 = Trigg(0x5b);
  if (((cVar1 == '\0') &&
      ((cVar1 = Trigg(0x5c), cVar1 == '\0' || (cVar1 = Trigg(5), cVar1 != '\0')))) &&
     (cVar1 = Trigg(0x5d), cVar1 == '\0')) {
    ShowPage("#PAGE10");
    iVar3 = iVar13;
    do {
      FreeTimer(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x19);
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE14");
    do {
      FreeTimer(iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x19);
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
