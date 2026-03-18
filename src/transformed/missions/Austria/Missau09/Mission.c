#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10009440[] = "Z32";
char DAT_10009444[] = "Z31";
char DAT_10009448[] = "Z30";
char DAT_1000944c[] = "Z29";
char DAT_10009450[] = "Z28";
char DAT_10009454[] = "Z27E";
char DAT_1000945c[] = "Z27D";
char DAT_10009464[] = "Z27";
char DAT_10009468[] = "Z26D";
char DAT_10009470[] = "Z26";
char DAT_10009474[] = "Z25D";
char DAT_1000947c[] = "Z25";
char DAT_10009480[] = "Z24";
char DAT_10009484[] = "Z23";
char DAT_10009488[] = "Z22";
char DAT_1000948c[] = "Z21";
char DAT_10009490[] = "Z20";
char DAT_10009494[] = "Z19";
char DAT_10009498[] = "Z18";
char DAT_1000949c[] = "Z17";
char DAT_100094a0[] = "Z16";
char DAT_100094a4[] = "Z15";
char DAT_100094a8[] = "Z14";
char DAT_100094ac[] = "Z13";
char DAT_100094b0[] = "Z12";
char DAT_100094b4[] = "Z11";
char DAT_100094b8[] = "Z10";
char DAT_100094bc[] = "Z9";
char DAT_100094c0[] = "Z8";
char DAT_100094c4[] = "Z7";
char DAT_100094c8[] = "Z6";
char DAT_100094cc[] = "Z5";
char DAT_100094d0[] = "Z4";
char DAT_100094d4[] = "Z3";
char DAT_100094d8[] = "Z2";
char DAT_100094dc[] = "Z1";
char DAT_100094e0[] = "G36";
char DAT_100094e4[] = "G35";
char DAT_100094e8[] = "G34";
char DAT_100094ec[] = "G33";
char DAT_100094f0[] = "G32";
char DAT_100094f4[] = "G31";
char DAT_100094f8[] = "G30";
char DAT_100094fc[] = "G29B";
char DAT_10009504[] = "G29";
char DAT_10009508[] = "G28B";
char DAT_10009510[] = "G28";
char DAT_10009514[] = "G27E";
char DAT_1000951c[] = "G27D";
char DAT_10009524[] = "G27C";
char DAT_1000952c[] = "G27B";
char DAT_10009534[] = "G27";
char DAT_10009538[] = "G26D";
char DAT_10009540[] = "G26C";
char DAT_10009548[] = "G26B";
char DAT_10009550[] = "G26";
char DAT_10009554[] = "G25D";
char DAT_1000955c[] = "G25C";
char DAT_10009564[] = "G25B";
char DAT_1000956c[] = "G25A";
char DAT_10009574[] = "G25";
char DAT_10009578[] = "G23";
char DAT_1000957c[] = "G22";
char DAT_10009580[] = "G21";
char DAT_10009584[] = "G20";
char DAT_10009588[] = "G19";
char DAT_1000958c[] = "G18";
char DAT_10009590[] = "G17";
char DAT_10009594[] = "G16";
char DAT_10009598[] = "G15";
char DAT_1000959c[] = "G14";
char DAT_100095a0[] = "G13";
char DAT_100095a4[] = "G12";
char DAT_100095a8[] = "G11";
char DAT_100095ac[] = "G10";
char DAT_100095b0[] = "G9";
char DAT_100095b4[] = "G8";
char DAT_100095b8[] = "G7";
char DAT_100095bc[] = "G6";
char DAT_100095c0[] = "G5";
char DAT_100095c4[] = "G4";
char DAT_100095c8[] = "G3";
char DAT_100095cc[] = "G2";
char DAT_100095d0[] = "G1";
int DAT_10009a80 = 0;
long long DAT_10009a88 = 0;
int DAT_10009a90 = 0;
long long DAT_10009a98 = 0;
long long DAT_10009aa0 = 0;
long long DAT_10009aa8 = 0;
long long DAT_10009ab0 = 0;
long long DAT_10009ab8 = 0;
long long DAT_10009ac0 = 0;
long long DAT_10009ac8 = 0;
long long DAT_10009ad0 = 0;
long long DAT_10009ad8 = 0;
long long DAT_10009ae0 = 0;
long long DAT_10009ae8 = 0;
long long DAT_10009af0 = 0;
long long DAT_10009af8 = 0;
long long DAT_10009b00 = 0;
long long DAT_10009b08 = 0;
long long DAT_10009b10 = 0;
long long DAT_10009b18 = 0;
long long DAT_10009b20 = 0;
long long DAT_10009b28 = 0;
long long DAT_10009b30 = 0;
long long DAT_10009b38 = 0;
long long DAT_10009b40 = 0;
int DAT_10009b48 = 0;
long long DAT_10009b50 = 0;
long long DAT_10009b58 = 0;
long long DAT_10009b60 = 0;
long long DAT_10009b68 = 0;
long long DAT_10009b70 = 0;
long long DAT_10009b78 = 0;
long long DAT_10009b80 = 0;
long long DAT_10009b88 = 0;
long long DAT_10009b90 = 0;
long long DAT_10009b98 = 0;
long long DAT_10009ba0 = 0;
long long DAT_10009ba8 = 0;
long long DAT_10009bb0 = 0;
long long DAT_10009bb8 = 0;
long long DAT_10009bc0 = 0;
long long DAT_10009bc8 = 0;
long long DAT_10009bd0 = 0;
long long DAT_10009bd8 = 0;
long long DAT_10009be0 = 0;
long long DAT_10009be8 = 0;
long long DAT_10009bf0 = 0;
long long DAT_10009bf8 = 0;
long long DAT_10009c00 = 0;
long long DAT_10009c08 = 0;
long long DAT_10009c10 = 0;
long long DAT_10009c18 = 0;
long long DAT_10009c20 = 0;
long long DAT_10009c28 = 0;
int DAT_10009c30 = 0;
long long DAT_10009c38 = 0;
long long DAT_10009c40 = 0;
long long DAT_10009c48 = 0;
long long DAT_10009c50 = 0;
long long DAT_10009c58 = 0;
long long DAT_10009c60 = 0;
long long DAT_10009c68 = 0;
long long DAT_10009c70 = 0;
int DAT_10009c78 = 0;
unsigned char DAT_10009c80[40] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10009ca8 = 0;
unsigned char DAT_10009cb0[48] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10009ce0 = 0;
unsigned char DAT_10009ce8[48] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10009d18 = 0;
long long DAT_10009d20 = 0;
int DAT_10009d28 = 0;
long long DAT_10009d30 = 0;
long long DAT_10009d38 = 0;
long long DAT_10009d40 = 0;
long long DAT_10009d48 = 0;
long long DAT_10009d50 = 0;
long long DAT_10009d58 = 0;
long long DAT_10009d60 = 0;
long long DAT_10009d68 = 0;
long long DAT_10009d70 = 0;
long long DAT_10009d78 = 0;
long long DAT_10009d80 = 0;
long long DAT_10009d90 = 0;
long long DAT_10009d98 = 0;
long long DAT_10009da0 = 0;
long long DAT_10009da8 = 0;
long long DAT_10009db0 = 0;
long long DAT_10009db8 = 0;
long long DAT_10009dc0 = 0;
long long DAT_10009dc8 = 0;
long long DAT_10009dd0 = 0;
long long DAT_10009dd8 = 0;
long long DAT_10009de0 = 0;
long long DAT_10009de8 = 0;
long long DAT_10009df0 = 0;
long long DAT_10009df8 = 0;
long long DAT_10009e00 = 0;
long long DAT_10009e08 = 0;
long long DAT_10009e10 = 0;
long long DAT_10009e18 = 0;
long long DAT_10009e20 = 0;
long long DAT_10009e28 = 0;
long long DAT_10009e30 = 0;
long long DAT_10009e38 = 0;
long long DAT_10009e40 = 0;
long long DAT_10009e48 = 0;
long long DAT_10009e50 = 0;
long long DAT_10009e58 = 0;
long long DAT_10009e60 = 0;
long long DAT_10009e68 = 0;
long long DAT_10009e70 = 0;
long long DAT_10009e78 = 0;
long long DAT_10009e80 = 0;
long long DAT_10009e88 = 0;
long long DAT_10009e90 = 0;
long long DAT_10009e98 = 0;
long long DAT_10009ea0 = 0;
long long DAT_10009ea8 = 0;
long long DAT_10009eb0 = 0;
long long DAT_10009eb8 = 0;
long long DAT_10009ec0 = 0;
long long DAT_10009ec8 = 0;
int DAT_10009ed0 = 0;
int DAT_10009ed4 = 0;
int DAT_10009ed8 = 0;
long long DAT_10009ef0 = 0;
long long DAT_10009ef8 = 0;
long long DAT_10009f00 = 0;
long long DAT_10009f08 = 0;
long long DAT_10009f10 = 0;
long long DAT_10009f18 = 0;
long long DAT_10009f20 = 0;
long long DAT_10009f28 = 0;
long long DAT_10009f30 = 0;
long long DAT_10009f38 = 0;
long long DAT_10009f40 = 0;
long long DAT_10009f48 = 0;
long long DAT_10009f50 = 0;
unsigned char DAT_10009f58[80] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
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
int DAT_1000a038 = 0;
long long DAT_1000a040 = 0;
long long DAT_1000a048 = 0;
long long DAT_1000a050 = 0;
long long DAT_1000a058 = 0;
long long DAT_1000a060 = 0;
long long DAT_1000a068 = 0;
int DAT_1000a070 = 0;
long long DAT_1000a074 = 0;
long long DAT_1000a078 = 0;
int DAT_1000a07c = 0;
long long DAT_1000a080 = 0;
long long DAT_1000a088 = 0;
int DAT_1000a090 = 0;
long long DAT_1000a098 = 0;
long long DAT_1000a0a0 = 0;
long long DAT_1000a0a8 = 0;
long long DAT_1000a0b0 = 0;
long long DAT_1000a0b8 = 0;
int DAT_1000a0c0 = 0;
long long DAT_1000a0c8 = 0;
int DAT_1000a074_ovl = 0;
int DAT_1000a078_ovl = 0;

/* Forward declarations */
void FUN_10001ba0(int param_1,int *param_2,int param_3);

void OnInit();
void ProcessScenary();


void __cdecl FUN_10001ba0(int param_1,int *param_2,int param_3)

{
  *param_2 = param_1;
  DAT_10009b48 = param_3;
  return;
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_10009c20,DAT_100095d0);
  RegisterUnits(&DAT_10009c28,DAT_100095cc);
  RegisterUnits(&DAT_10009c38,DAT_100095c8);
  RegisterUnits(&DAT_10009c40,DAT_100095c4);
  RegisterUnits(&DAT_10009c48,DAT_100095c0);
  RegisterUnits(&DAT_10009c50,DAT_100095bc);
  RegisterUnits(&DAT_10009c58,DAT_100095b8);
  RegisterUnits(&DAT_10009c60,DAT_100095b4);
  RegisterUnits(&DAT_10009c68,DAT_100095b0);
  RegisterUnits(&DAT_10009d18,DAT_100095ac);
  RegisterUnits(&DAT_10009d20,DAT_100095a8);
  RegisterUnits(&DAT_10009d30,DAT_100095a4);
  RegisterUnits(&DAT_10009d38,DAT_100095a0);
  RegisterUnits(&DAT_10009d48,DAT_1000959c);
  RegisterUnits(&DAT_10009d58,DAT_10009598);
  RegisterUnits(&DAT_10009d68,DAT_10009594);
  RegisterUnits(&DAT_10009d78,DAT_10009590);
  RegisterUnits(&DAT_10009d90,DAT_1000958c);
  RegisterUnits(&DAT_10009da8,DAT_10009588);
  RegisterUnits(&DAT_10009d40,DAT_10009584);
  RegisterUnits(&DAT_10009d50,DAT_10009580);
  RegisterUnits(&DAT_10009d60,DAT_1000957c);
  RegisterUnits(&DAT_10009d70,DAT_10009578);
  RegisterUnits(&DAT_10009da0,DAT_10009574);
  RegisterUnits(&DAT_1000a000,DAT_1000956c);
  RegisterUnits(&DAT_1000a008,DAT_10009564);
  RegisterUnits(&DAT_1000a010,DAT_1000955c);
  RegisterUnits(&DAT_1000a018,DAT_10009554);
  RegisterUnits(&DAT_10009db8,DAT_10009550);
  RegisterUnits(&DAT_1000a020,DAT_10009548);
  RegisterUnits(&DAT_1000a028,DAT_10009540);
  RegisterUnits(&DAT_1000a030,DAT_10009538);
  RegisterUnits(&DAT_10009dc8,DAT_10009534);
  RegisterUnits(&DAT_1000a040,DAT_1000952c);
  RegisterUnits(&DAT_1000a048,DAT_10009524);
  RegisterUnits(&DAT_1000a050,DAT_1000951c);
  RegisterUnits(&DAT_1000a058,DAT_10009514);
  RegisterUnits(&DAT_10009dd8,DAT_10009510);
  RegisterUnits(&DAT_1000a060,DAT_10009508);
  RegisterUnits(&DAT_10009de8,DAT_10009504);
  RegisterUnits(&DAT_1000a068,DAT_100094fc);
  RegisterUnits(&DAT_10009d80,DAT_100094f8);
  RegisterUnits(&DAT_10009d98,DAT_100094f4);
  RegisterUnits(&DAT_10009db0,DAT_100094f0);
  RegisterUnits(&DAT_10009dc0,DAT_100094ec);
  RegisterUnits(&DAT_10009dd0,DAT_100094e8);
  RegisterUnits(&DAT_10009de0,DAT_100094e4);
  RegisterUnits(&DAT_10009df0,DAT_100094e0);
  RegisterZone(&DAT_10009df8,DAT_100094dc);
  RegisterZone(&DAT_10009e00,DAT_100094d8);
  RegisterZone(&DAT_10009e08,DAT_100094d4);
  RegisterZone(&DAT_10009e10,DAT_100094d0);
  RegisterZone(&DAT_10009e18,DAT_100094cc);
  RegisterZone(&DAT_10009e20,DAT_100094c8);
  RegisterZone(&DAT_10009e28,DAT_100094c4);
  RegisterZone(&DAT_10009e30,DAT_100094c0);
  RegisterZone(&DAT_10009e38,DAT_100094bc);
  RegisterZone(&DAT_10009ef8,DAT_100094b8);
  RegisterZone(&DAT_10009f00,DAT_100094b4);
  RegisterZone(&DAT_10009f08,DAT_100094b0);
  RegisterZone(&DAT_10009f10,DAT_100094ac);
  RegisterZone(&DAT_10009f20,DAT_100094a8);
  RegisterZone(&DAT_10009f30,DAT_100094a4);
  RegisterZone(&DAT_10009f40,DAT_100094a0);
  RegisterZone(&DAT_10009f50,DAT_1000949c);
  RegisterZone(&DAT_10009fb0,DAT_10009498);
  RegisterZone(&DAT_10009fc8,DAT_10009494);
  RegisterZone(&DAT_10009f18,DAT_10009490);
  RegisterZone(&DAT_10009f28,DAT_1000948c);
  RegisterZone(&DAT_10009f38,DAT_10009488);
  RegisterZone(&DAT_10009f48,DAT_10009484);
  RegisterZone(&DAT_10009fa8,DAT_10009480);
  RegisterZone(&DAT_10009fc0,DAT_1000947c);
  RegisterZone(&DAT_1000a0a0,DAT_10009474);
  RegisterZone(&DAT_10009fd8,DAT_10009470);
  RegisterZone(&DAT_1000a0a8,DAT_10009468);
  RegisterZone(&DAT_10009fe8,DAT_10009464);
  RegisterZone(&DAT_1000a0b0,DAT_1000945c);
  RegisterZone(&DAT_1000a0b8,DAT_10009454);
  RegisterZone(&DAT_10009ff0,DAT_10009450);
  RegisterZone(&DAT_10009ff8,DAT_1000944c);
  RegisterZone(&DAT_10009fb8,DAT_10009448);
  RegisterZone(&DAT_10009fd0,DAT_10009444);
  RegisterZone(&DAT_10009fe0,DAT_10009440);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  RegisterDynGroup(&DAT_10009c00);
  RegisterDynGroup(&DAT_10009c08);
  RegisterDynGroup(&DAT_10009c10);
  RegisterDynGroup(&DAT_10009c18);
  RegisterVar(&DAT_10009ed0,4);
  RegisterVar(&DAT_10009ed4,4);
  RegisterVar(&DAT_10009d28,4);
  RegisterVar(&DAT_1000a078,4);
  RegisterVar(&DAT_1000a074,4);
  RegisterVar(&DAT_10009ed8,4);
  RegisterVar(&DAT_1000a070,4);
  RegisterVar(&DAT_10009a80,4);
  RegisterVar(&DAT_10009c30,4);
  RegisterVar(&DAT_1000a0c0,4);
  RegisterVar(&DAT_1000a090,4);
  RegisterVar(&DAT_1000a07c,4);
  RegisterVar(&DAT_1000a038,4);
  RegisterVar(&DAT_10009c78,4);
  RegisterVar(&DAT_1000a080,8);
  RegisterVar(&DAT_1000a088,8);
  RegisterDynGroup(&DAT_10009ce0);
  DAT_10009a90 = 0;
  do {
    RegisterDynGroup(((unsigned char *)&DAT_10009ce8) + DAT_10009a90 * 8);
    RegisterDynGroup(((unsigned char *)&DAT_10009c80) + DAT_10009a90 * 8);
    RegisterVar(((unsigned char *)&DAT_10009cb0) + DAT_10009a90 * 8,8);
    DAT_10009a90 = DAT_10009a90 + 1;
  } while (DAT_10009a90 < 6);
  DAT_10009a90 = 0;
  do {
    RegisterVar(((unsigned char *)&DAT_10009f58) + DAT_10009a90,4);
    DAT_10009a90 = DAT_10009a90 + 1;
  } while (DAT_10009a90 < 0x14);
  RegisterUnitType(&DAT_10009c70,"Mortira(GE)");
  RegisterUnitType(&DAT_10009ef0,"Pik_evro_rus(GE)");
  RegisterUnitType(&DAT_10009a88,"Mushketer_PR(GE)");
  RegisterUnitType(&DAT_1000a0c8,"Kirasir(GE)");
  RegisterUnitType(&DAT_10009b50,"Grenader(GE)");
  RegisterUnitType(&DAT_10009b58,"GRUZ_Z(UN)");
  RegisterFormation(&DAT_1000a098,"#LINEMORB6");
  RegisterUnitType(&DAT_10009ba0,"Europ(GE)");
  RegisterUnitType(&DAT_10009bb0,"Dom_Prussia(GE)");
  RegisterUnitType(&DAT_10009bc0,"Melnica(GE)");
  RegisterUnitType(&DAT_10009bd0,"Sclad1(GE)");
  RegisterUnitType(&DAT_10009bd8,"shahta(GE)");
  RegisterUnitType(&DAT_10009be0,"shahta_FE(GE)");
  RegisterUnitType(&DAT_10009be8,"shahta_UG(GE)");
  RegisterUnitType(&DAT_10009bf0,"Kuznica(GE)");
  RegisterUnitType(&DAT_10009bf8,"Konushnia_Swesair(GE)");
  RegisterUnitType(&DAT_10009b60,"Cercov_Poland(GE)");
  RegisterUnitType(&DAT_10009b68,"akademia_E(GE)");
  RegisterUnitType(&DAT_10009b70,"Dip_korpus(GE)");
  RegisterUnitType(&DAT_10009b78,"Kazarma_evro(GE)");
  RegisterUnitType(&DAT_10009b88,"Kazarma(GE)");
  RegisterUnitType(&DAT_10009b90,"artileri_depo(GE)");
  RegisterUnitType(&DAT_10009b98,"Rinok(GE)");
  RegisterUnitType(&DAT_10009ba8,"WALL_UKR(GE)");
  RegisterUnitType(&DAT_10009bb8,"WALL_EV(GE)");
  RegisterUnitType(&DAT_10009bc8,"Bashnia(GE)");
  RegisterUnitType(&DAT_10009b80,"PorE(GE)");
  RegisterUnitType(&DAT_10009e40,"Center_France(fr)");
  RegisterUnitType(&DAT_10009e48,"Dom_France(fr)");
  RegisterUnitType(&DAT_10009e50,"Melnica(fr)");
  RegisterUnitType(&DAT_10009e58,"Sclad2(fr)");
  RegisterUnitType(&DAT_10009e68,"shahta(fr)");
  RegisterUnitType(&DAT_10009e78,"shahta_FE(fr)");
  RegisterUnitType(&DAT_10009e88,"shahta_UG(fr)");
  RegisterUnitType(&DAT_10009e98,"Kuznica_FR(fr)");
  RegisterUnitType(&DAT_10009ea8,"Konushnia_FR(fr)");
  RegisterUnitType(&DAT_10009a98,"NotrDam(fr)");
  RegisterUnitType(&DAT_10009aa0,"akademia_FR(fr)");
  RegisterUnitType(&DAT_10009aa8,"Dip_korpus_FR(fr)");
  RegisterUnitType(&DAT_10009ab0,"Kazarma_1_FR(fr)");
  RegisterUnitType(&DAT_10009ac0,"Kazarma_FR(fr)");
  RegisterUnitType(&DAT_10009ac8,"artileri_depo_FR(fr)");
  RegisterUnitType(&DAT_10009ad0,"Rinok(fr)");
  RegisterUnitType(&DAT_10009ad8,"WALL_UKR(fr)");
  RegisterUnitType(&DAT_10009ae0,"WALL_EV(fr)");
  RegisterUnitType(&DAT_10009ae8,"Bashnia(fr)");
  RegisterUnitType(&DAT_10009ab8,"PorE(fr)");
  RegisterUnitType(&DAT_10009e60,"Center_Sacson(SA)");
  RegisterUnitType(&DAT_10009e70,"Dom_Saksona(SA)");
  RegisterUnitType(&DAT_10009e80,"Melnica(SA)");
  RegisterUnitType(&DAT_10009e90,"Sclad1(SA)");
  RegisterUnitType(&DAT_10009ea0,"shahta(SA)");
  RegisterUnitType(&DAT_10009eb0,"shahta_FE(SA)");
  RegisterUnitType(&DAT_10009eb8,"shahta_UG(SA)");
  RegisterUnitType(&DAT_10009ec0,"Kuznica(SA)");
  RegisterUnitType(&DAT_10009ec8,"Konushnia_Swesair(SA)");
  RegisterUnitType(&DAT_10009af0,"Cercov_Poland(SA)");
  RegisterUnitType(&DAT_10009af8,"akademia_E(SA)");
  RegisterUnitType(&DAT_10009b00,"Dip_korpus(SA)");
  RegisterUnitType(&DAT_10009b08,"Kazarma_evro(SA)");
  RegisterUnitType(&DAT_10009b10,"Kazarma(SA)");
  RegisterUnitType(&DAT_10009b20,"artileri_depo(SA)");
  RegisterUnitType(&DAT_10009b28,"Rinok(SA)");
  RegisterUnitType(&DAT_10009b30,"WALL_UKR(SA)");
  RegisterUnitType(&DAT_10009b38,"WALL_EV(SA)");
  RegisterUnitType(&DAT_10009b40,"Bashnia(SA)");
  RegisterUnitType(&DAT_10009b18,"PorE(SA)");
  EnableUnit(0,&DAT_10009ba0,0);
  EnableUnit(0,&DAT_10009bb0,0);
  EnableUnit(0,&DAT_10009bc0,0);
  EnableUnit(0,&DAT_10009bd0,0);
  EnableUnit(0,&DAT_10009bd8,0);
  EnableUnit(0,&DAT_10009be0,0);
  EnableUnit(0,&DAT_10009be8,0);
  EnableUnit(0,&DAT_10009bf0,0);
  EnableUnit(0,&DAT_10009bf8,0);
  EnableUnit(0,&DAT_10009b60,0);
  EnableUnit(0,&DAT_10009b68,0);
  EnableUnit(0,&DAT_10009b70,0);
  EnableUnit(0,&DAT_10009b78,0);
  EnableUnit(0,&DAT_10009b88,0);
  EnableUnit(0,&DAT_10009b90,0);
  EnableUnit(0,&DAT_10009b98,0);
  EnableUnit(0,&DAT_10009ba8,0);
  EnableUnit(0,&DAT_10009bb8,0);
  EnableUnit(0,&DAT_10009bc8,0);
  EnableUnit(0,&DAT_10009b80,0);
  EnableUnit(0,&DAT_10009e40,0);
  EnableUnit(0,&DAT_10009e48,0);
  EnableUnit(0,&DAT_10009e50,0);
  EnableUnit(0,&DAT_10009e58,0);
  EnableUnit(0,&DAT_10009e68,0);
  EnableUnit(0,&DAT_10009e78,0);
  EnableUnit(0,&DAT_10009e88,0);
  EnableUnit(0,&DAT_10009e98,0);
  EnableUnit(0,&DAT_10009ea8,0);
  EnableUnit(0,&DAT_10009a98,0);
  EnableUnit(0,&DAT_10009aa0,0);
  EnableUnit(0,&DAT_10009aa8,0);
  EnableUnit(0,&DAT_10009ab0,0);
  EnableUnit(0,&DAT_10009ac0,0);
  EnableUnit(0,&DAT_10009ac8,0);
  EnableUnit(0,&DAT_10009ad0,0);
  EnableUnit(0,&DAT_10009ad8,0);
  EnableUnit(0,&DAT_10009ae0,0);
  EnableUnit(0,&DAT_10009ae8,0);
  EnableUnit(0,&DAT_10009ab8,0);
  EnableUnit(0,&DAT_10009e60,0);
  EnableUnit(0,&DAT_10009e70,0);
  EnableUnit(0,&DAT_10009e80,0);
  EnableUnit(0,&DAT_10009e90,0);
  EnableUnit(0,&DAT_10009ea0,0);
  EnableUnit(0,&DAT_10009eb0,0);
  EnableUnit(0,&DAT_10009eb8,0);
  EnableUnit(0,&DAT_10009ec0,0);
  EnableUnit(0,&DAT_10009ec8,0);
  EnableUnit(0,&DAT_10009af0,0);
  EnableUnit(0,&DAT_10009af8,0);
  EnableUnit(0,&DAT_10009b00,0);
  EnableUnit(0,&DAT_10009b08,0);
  EnableUnit(0,&DAT_10009b10,0);
  EnableUnit(0,&DAT_10009b20,0);
  EnableUnit(0,&DAT_10009b28,0);
  EnableUnit(0,&DAT_10009b30,0);
  EnableUnit(0,&DAT_10009b38,0);
  EnableUnit(0,&DAT_10009b40,0);
  EnableUnit(0,&DAT_10009b18,0);
  SetPlayerName(1,"PRUSSIA");
  SetPlayerName(5,"ROBBERS");
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
  int *puVar8;
  int *puVar9;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    puVar8 = &DAT_10009f58;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    DAT_10009d28 = 0;
    DAT_10009a90 = 0x14;
    DAT_1000a078_ovl = 0;
    DAT_1000a074_ovl = 0;
    DAT_10009ed8 = 0;
    DAT_10009a80 = 0;
    DAT_10009c30 = 0;
    DAT_1000a070 = 0;
    DAT_1000a090 = 0;
    DAT_10009ed0 = 0;
    DAT_10009ed4 = 0;
    DAT_1000a038 = 0;
    DAT_1000a07c = 0x13;
    DAT_10009c78 = 0x13;
    SetTrigg(99,0);
    iVar3 = GetDiff(0);
    SetResource(0,3,(4 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,1,(6 - iVar3) * 500);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar3 = GetDiff(0);
    SetResource(0,5,(6 - iVar3) * 500);
    iVar3 = GetDiff(0);
    SetResource(0,4,(6 - iVar3) * 500);
    SetResource(1,3,90000000);
    SetResource(1,1,90000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,90000000);
    SetResource(1,4,90000000);
    SetResource(5,3,9000000);
    SetResource(5,1,9000000);
    SetResource(5,0,0);
    SetResource(5,2,0);
    SetResource(5,5,9000000);
    SetResource(5,4,9000000);
    InitialUpgrade(DAT_100095a8,"Mortira(GE)BUILD");
    InitialUpgrade(DAT_100095a8,"Mortira(GE)BUILD3");
    InitialUpgrade(DAT_100095a8,"Mortira(GE)BUILD4");
    InitialUpgrade(DAT_100095a8,"Mortira(GE)BUILD5");
    InitialUpgrade(DAT_100095a8,"Mortira(GE)BUILD6");
    InitialUpgrade(DAT_100095a8,"Mortira(GE)BUILD7");
    InitialUpgrade(DAT_100095a0,"KUZ03GE");
    InitialUpgrade(DAT_100095b4,"MAINGE");
    InitialUpgrade(DAT_1000952c,"AKA04FR");
    InitialUpgrade(DAT_1000952c,"KUZ01FR");
    ShowPage("#PAGE0");
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      SetResource(0,3,20000);
      SelectUnits(&DAT_10009dd0,0);
      SelDie(1);
      SelectUnits(&DAT_10009de0,0);
      SelDie(1);
    }
    SelectUnits(&DAT_10009df0,0);
    AllowAttack(1,0);
    SelectUnits(&DAT_10009d48,0);
    SelOpenGates(1);
    SelectUnits(&DAT_10009d58,0);
    SelOpenGates(1);
    SelectUnits(&DAT_10009d68,0);
    SelOpenGates(1);
    SelectUnits(&DAT_10009d78,0);
    SelOpenGates(1);
    SelectUnits(&DAT_10009c40,0);
    SelSendTo(1,&DAT_10009e08,0x14,0);
    SelSendTo(1,&DAT_10009e10,0xf0,2);
    SelSendTo(1,&DAT_10009e18,0,2);
    SelSendTo(1,&DAT_10009e20,0,2);
    SelSendTo(1,&DAT_10009e28,0x1e,2);
    SelSendTo(1,&DAT_10009e30,0x19,2);
    SelSendTo(1,&DAT_10009e38,0xe1,2);
    SelSendTo(1,&DAT_10009ef8,0,2);
    SelSendTo(1,&DAT_10009f00,0xf0,2);
    SelSendTo(1,&DAT_10009f08,0xe1,2);
    SelSendTo(1,&DAT_10009f10,0xe1,2);
    SelectUnits(&DAT_10009d40,0);
    Patrol(1,&DAT_10009f18,0x40);
    SelectUnits(&DAT_10009d50,0);
    Patrol(1,&DAT_10009f28,0x40);
    SelectUnits(&DAT_1000a018,0);
    Patrol(1,&DAT_1000a0a0,0x46);
    SelectUnits(&DAT_1000a030,0);
    Patrol(1,&DAT_1000a0a8,0);
    SelectUnits(&DAT_1000a050,0);
    Patrol(1,&DAT_1000a0b0,0xe6);
    SelectUnits(&DAT_1000a058,0);
    Patrol(1,&DAT_1000a0b8,200);
    TakeFood(&DAT_10009dc8);
    TakeWood(&DAT_10009da0);
    TakeWood(&DAT_1000a000);
    TakeStone(&DAT_10009db8);
    RunTimer(1,0x32);
  }
  if ((((((long long *)&DAT_10009f58)[DAT_10009d28] == 1) && (DAT_1000a070 == 0)) && (DAT_10009a80 == 0)) &&
     (((((DAT_10009c30 == 0 && (DAT_10009ed8 == 0)) &&
        ((cVar1 = CheckProduction(&DAT_10009c50), cVar1 != '\0' &&
         ((cVar1 = CheckProduction(&DAT_10009c58), cVar1 != '\0' &&
          (cVar1 = CheckProduction(&DAT_10009c60), cVar1 != '\0')))))) &&
       (cVar1 = CheckProduction(&DAT_10009c68), cVar1 != '\0')) &&
      ((cVar1 = CheckProduction(&DAT_10009d18), cVar1 != '\0' &&
       (cVar1 = CheckProduction(&DAT_10009d20), cVar1 != '\0')))))) {
    ((long long *)&DAT_10009f58)[DAT_10009d28] = 2;
    RunTimer(7,100);
  }
  if (((((long long *)&DAT_10009f58)[DAT_10009d28] == 1) && (cVar1 = Trigg(0x1c), cVar1 != '\0')) &&
     (cVar1 = Trigg(0x1d), cVar1 != '\0')) {
    if (0 < DAT_10009a80) {
      cVar1 = CheckProduction(&DAT_10009c50);
      if (cVar1 != '\0') {
        DAT_10009a80 = DAT_10009a80 + -1;
        ProduceUnit(&DAT_10009c50,&DAT_10009ef0,DAT_10009b48);
      }
      if ((0 < DAT_10009a80) && (cVar1 = CheckProduction(&DAT_10009c58), cVar1 != '\0')) {
        DAT_10009a80 = DAT_10009a80 + -1;
        ProduceUnit(&DAT_10009c58,&DAT_10009ef0,DAT_10009b48);
      }
    }
    if (0 < DAT_10009c30) {
      cVar1 = CheckProduction(&DAT_10009c50);
      if (cVar1 != '\0') {
        DAT_10009c30 = DAT_10009c30 + -1;
        ProduceUnit(&DAT_10009c50,&DAT_10009a88,DAT_10009b48);
      }
      if ((0 < DAT_10009c30) && (cVar1 = CheckProduction(&DAT_10009c58), cVar1 != '\0')) {
        DAT_10009c30 = DAT_10009c30 + -1;
        ProduceUnit(&DAT_10009c58,&DAT_10009a88,DAT_10009b48);
      }
    }
    if (0 < DAT_1000a0c0) {
      cVar1 = CheckProduction(&DAT_10009c50);
      if (cVar1 != '\0') {
        DAT_1000a0c0 = DAT_1000a0c0 + -1;
        ProduceUnit(&DAT_10009c50,&DAT_10009b50,DAT_10009b48);
      }
      if ((0 < DAT_1000a0c0) && (cVar1 = CheckProduction(&DAT_10009c58), cVar1 != '\0')) {
        DAT_1000a0c0 = DAT_1000a0c0 + -1;
        ProduceUnit(&DAT_10009c58,&DAT_10009b50,DAT_10009b48);
      }
    }
    if (0 < DAT_1000a070) {
      cVar1 = CheckProduction(&DAT_10009c60);
      if (cVar1 != '\0') {
        DAT_1000a070 = DAT_1000a070 + -1;
        ProduceUnit(&DAT_10009c60,&DAT_1000a0c8,DAT_10009b48);
      }
      if (0 < DAT_1000a070) {
        cVar1 = CheckProduction(&DAT_10009c68);
        if (cVar1 != '\0') {
          DAT_1000a070 = DAT_1000a070 + -1;
          ProduceUnit(&DAT_10009c68,&DAT_1000a0c8,DAT_10009b48);
        }
        if ((0 < DAT_1000a070) && (cVar1 = CheckProduction(&DAT_10009d18), cVar1 != '\0')) {
          DAT_1000a070 = DAT_1000a070 + -1;
          ProduceUnit(&DAT_10009d18,&DAT_1000a0c8,DAT_10009b48);
        }
      }
    }
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount1(&DAT_10009b58,0), 0 < iVar3)) {
    SetTrigg(1,0);
    ShowPage("#PAGE1");
  }
  iVar3 = GetUnitsAmount1(&DAT_10009df8,&DAT_10009c40);
  iVar2 = GetUnitsByNation(&DAT_10009c40,0);
  if ((iVar2 == iVar3) && (iVar3 = GetUnitsByNation(&DAT_10009c40,0), 0 < iVar3)) {
    iVar3 = GetDiff(0);
    iVar2 = GetUnitsByNation(&DAT_10009c40,0);
    AddResource(0,3,(iVar3 * -200 + 0x9c4) * iVar2);
    iVar3 = GetDiff(0);
    iVar2 = GetUnitsByNation(&DAT_10009c40,0);
    AddResource(0,1,(6 - iVar3) * iVar2 * 0x32);
    iVar3 = GetDiff(0);
    iVar2 = GetUnitsByNation(&DAT_10009c40,0);
    AddResource(0,4,(7 - iVar3) * iVar2 * 100);
    iVar3 = GetDiff(0);
    iVar2 = GetUnitsByNation(&DAT_10009c40,0);
    AddResource(0,5,(7 - iVar3) * iVar2 * 100);
    ShowPage("#PAGE2");
    SaveSelectedUnits(0,&DAT_10009ce0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10009c40,0);
    SelErase(0);
    SelectUnits(&DAT_10009ce0,0);
  }
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10009f10,&DAT_10009c40);
    iVar2 = GetUnitsByNation(&DAT_10009c40,1);
    if (iVar3 == iVar2) {
      SetTrigg(2,0);
      cVar1 = Trigg(0xe);
      if (cVar1 == '\0') {
        SetTrigg(0xe,0);
        SelectUnits(&DAT_10009d48,0);
        SelOpenGates(1);
        RunTimer(2,0x14);
      }
      else {
        RunTimer(2,0);
      }
      SetTrigg(3,0);
    }
  }
  cVar1 = TimerDoneFirst(2);
  if (cVar1 != '\0') {
    SelectUnits1(1,&DAT_10009c40,0);
    SelSendTo(1,&DAT_10009fc8,0,0);
  }
  cVar1 = Trigg(3);
  if (cVar1 == '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10009fc8,&DAT_10009c40);
    iVar2 = GetUnitsByNation(&DAT_10009c40,1);
    if ((iVar3 == iVar2) && (iVar3 = GetUnitsAmount1(&DAT_10009fc8,&DAT_10009c40), 0 < iVar3)) {
      SetTrigg(3,0);
      iVar3 = GetUnitsByNation(&DAT_10009c40,0);
      AddResource(1,3,iVar3 * 2000);
      iVar3 = GetUnitsByNation(&DAT_10009c40,0);
      AddResource(1,1,iVar3 * 200);
      iVar3 = GetUnitsByNation(&DAT_10009c40,0);
      AddResource(1,4,iVar3 * 500);
      iVar3 = GetUnitsByNation(&DAT_10009c40,0);
      AddResource(1,5,iVar3 * 500);
      ClearSelection(1);
      iVar3 = GetUnitsByNation(&DAT_10009c40,1);
      if (iVar3 == 6) {
        SetTrigg(4,0);
      }
      SelectUnits1(1,&DAT_10009c40,0);
      SelErase(1);
    }
  }
  iVar3 = GetTotalAmount0(&DAT_10009c40);
  if (((0 < iVar3) && (iVar3 = GetTotalAmount0(&DAT_10009c48), 0 < iVar3)) &&
     (cVar1 = TimerDone(1), cVar1 != '\0')) {
    CreateZoneNearGroup(&DAT_1000a080,&DAT_10009f10,&DAT_10009c40,500);
    SelectUnits(&DAT_10009c48,0);
    SelSendAndKill(1,&DAT_1000a080,0x40,0);
    RunTimer(1,0x32);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') &&
     (iVar3 = GetTotalAmount0(&DAT_10009c40), pcVar7 = (void*)&SetTrigg, iVar3 == 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE3");
    cVar1 = Trigg(0xe);
    if (cVar1 == '\0') {
      SetTrigg(0xe,0);
      SelectUnits(&DAT_10009d48,0);
      SelOpenGates(1);
      RunTimer(3,0x14);
      SetTrigg(6,0);
    }
    else {
      RunTimer(3,0);
      SetTrigg(6,0);
    }
  }
  cVar1 = TimerDoneFirst(3);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009d60,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
    SelectUnits(&DAT_10009c48,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
  }
  cVar1 = Trigg(6);
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009d60);
    iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009d60);
    if (iVar2 == iVar3) {
      iVar3 = GetTotalAmount0(&DAT_10009c48);
      iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009c48);
      if (iVar2 == iVar3) {
        SetTrigg(6,0);
        SelectUnits(&DAT_10009d60,0);
        SelectUnits(&DAT_10009c48,1);
        SelSendAndKill(1,&DAT_10009f08,0x5a,0);
        SelSendAndKill(1,&DAT_10009f00,0x6e,2);
        SelSendAndKill(1,&DAT_10009ef8,0x80,2);
        SelSendAndKill(1,&DAT_10009e38,100,2);
        SelSendAndKill(1,&DAT_10009e30,0x96,2);
        SelSendAndKill(1,&DAT_10009e28,0x96,2);
        SelSendAndKill(1,&DAT_10009e20,0x78,2);
        SelSendAndKill(1,&DAT_10009e18,0x40,2);
        SelSendAndKill(1,&DAT_10009df8,0x40,2);
      }
    }
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10009f48,&DAT_10009d60), 0 < iVar3)) {
    SetTrigg(5,0);
    ShowPage("#PAGE4");
  }
  cVar1 = Trigg(0x1b);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d60), iVar3 == 0)) {
    SetTrigg(0x1b,0);
    ShowPage("#PAGE14");
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) {
    iVar3 = GetDiff(0);
    iVar2 = GetTotalAmount0(&DAT_10009d60);
    if (iVar2 < iVar3 + 7) {
      SetTrigg(7,0);
      SelectUnits(&DAT_10009d60,0);
      SelSendTo(1,&DAT_10009e18,0,0);
      SelSendTo(1,&DAT_10009e20,0,2);
      SelSendTo(1,&DAT_10009e28,0x1e,2);
      SelSendTo(1,&DAT_10009e30,0x19,2);
      SelSendTo(1,&DAT_10009e38,0xe1,2);
      SelSendTo(1,&DAT_10009ef8,0,2);
      SelSendTo(1,&DAT_10009f00,0xf0,2);
      SelSendTo(1,&DAT_10009f08,0xe1,2);
      SelSendTo(1,&DAT_10009f10,0xe1,2);
    }
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount1(&DAT_10009f10,&DAT_10009d60), 0 < iVar3)) {
    SetTrigg(8,0);
    ShowPage("#PAGE15");
    cVar1 = Trigg(0xe);
    if (cVar1 == '\0') {
      SetTrigg(0xe,0);
      SelectUnits(&DAT_10009d48,0);
      SelOpenGates(1);
      RunTimer(4,0x14);
    }
    else {
      RunTimer(4,0);
    }
    SetTrigg(9,0);
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009d70,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
  }
  cVar1 = Trigg(9);
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009d70);
    iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009d70);
    if (iVar2 == iVar3) {
      SetTrigg(9,0);
      SelectUnits(&DAT_10009d70,0);
      SelSendAndKill(1,&DAT_10009f08,0x5a,0);
      SelSendAndKill(1,&DAT_10009f00,0x6e,2);
      SelSendAndKill(1,&DAT_10009ef8,0x80,2);
      SelSendAndKill(1,&DAT_10009e38,100,2);
      SelSendAndKill(1,&DAT_10009e30,0x96,2);
      SelSendAndKill(1,&DAT_10009e28,0x96,2);
      SelSendAndKill(1,&DAT_10009e20,0x78,2);
      SelSendAndKill(1,&DAT_10009e18,0x40,2);
      SelSendAndKill(1,&DAT_10009df8,0x40,2);
    }
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetGlobalTime(), 6000 < iVar3)) {
    SetTrigg(0xd,0);
    ShowPage("#PAGE5");
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      ShowPage("#OTST1");
      SetLightSpot(&DAT_10009fe8,3,3);
    }
  }
  iVar3 = GetDiff(0);
  iVar4 = DAT_1000a090 * 8;
  iVar2 = GetGlobalTime();
  if ((((iVar4 - iVar3) * 3000 + 8000 < iVar2) && (((long long *)&DAT_10009f58)[DAT_10009d28] == 0)) &&
     (DAT_1000a090 < 6)) {
    cVar1 = Trigg(8);
    if (cVar1 == '\0') {
      iVar3 = GetDiff(0);
      if (iVar3 < 1) {
        FUN_10001ba0(DAT_1000a090 * 7 + 10,&DAT_1000a070,((unsigned char *)&DAT_10009ce8) + DAT_1000a090 * 8);
        FUN_10001ba0(DAT_1000a090 * 0xe + 0x14,&DAT_1000a0c0,((unsigned char *)&DAT_10009ce8) + DAT_1000a090 * 8);
      }
      else {
        puVar9 = ((unsigned char *)&DAT_10009ce8) + DAT_1000a090 * 8;
        puVar8 = &DAT_1000a070;
        iVar3 = GetDiff(0);
        FUN_10001ba0((iVar3 + 3 + DAT_1000a090) * 0xc,puVar8,puVar9);
        puVar9 = ((unsigned char *)&DAT_10009ce8) + DAT_1000a090 * 8;
        puVar8 = &DAT_1000a0c0;
        iVar3 = GetDiff(0);
        FUN_10001ba0((iVar3 + 3 + DAT_1000a090) * 0x18,puVar8,puVar9);
      }
    }
    else {
      iVar3 = GetDiff(0);
      if (iVar3 < 1) {
        FUN_10001ba0(DAT_1000a090 * 4 + 10,&DAT_1000a070,((unsigned char *)&DAT_10009ce8) + DAT_1000a090 * 8);
      }
      else {
        puVar9 = ((unsigned char *)&DAT_10009ce8) + DAT_1000a090 * 8;
        puVar8 = &DAT_1000a070;
        iVar3 = GetDiff(0);
        FUN_10001ba0((iVar3 + DAT_1000a090) * 6 + 0x15,puVar8,puVar9);
      }
    }
    DAT_1000a07c = DAT_10009d28;
    ((long long *)&DAT_10009f58)[DAT_10009d28] = 1;
    DAT_1000a090 = DAT_1000a090 + 1;
  }
  if ((((long long *)&DAT_10009f58)[DAT_1000a07c] == 2) &&
     (cVar1 = TimerDone(7), pcVar7 = (void*)&SetTrigg, cVar1 != '\0')) {
    DAT_10009d28 = DAT_10009d28 + 1;
    SetTrigg((int)(char)DAT_1000a090 + '\'',0);
    DAT_1000a07c = 0x13;
    SelectUnits(((unsigned char *)&DAT_10009ce0) + DAT_1000a090 * 8,0);
    SelSendAndKill(1,&DAT_10009fe0,0x5a,0);
    RunTimer(8,10000);
  }
  cVar1 = Trigg((char)DAT_1000a090 + '\'');
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(((unsigned char *)&DAT_10009ce0) + DAT_1000a090 * 8);
    iVar2 = GetUnitsAmount1(&DAT_10009fe0,((unsigned char *)&DAT_10009ce0) + DAT_1000a090 * 8);
    if ((iVar2 == iVar3) && (cVar1 = TimerDone(8), cVar1 == '\0')) {
      SelectUnits(((unsigned char *)&DAT_10009ce0) + DAT_1000a090 * 8,0);
      SelSendAndKill(1,&DAT_10009f28,0x80,2);
      SelSendAndKill(1,&DAT_10009df8,0x80,2);
    }
  }
  cVar1 = Trigg((char)DAT_1000a090 + '1');
  if (cVar1 != '\0') {
    cVar1 = Trigg((char)DAT_1000a090 + '\'');
    if ((cVar1 == '\0') && (cVar1 = Trigg(8), cVar1 != '\0')) {
      iVar3 = GetUnitsAmount1(&DAT_10009f48,((unsigned char *)&DAT_10009ce0) + DAT_1000a090 * 8);
      if (0 < iVar3) {
        SetTrigg((char)DAT_1000a090 + '1',0);
        ShowPage("#PAGE4");
      }
    }
  }
  cVar1 = Trigg((char)DAT_1000a090 + ';');
  if (cVar1 != '\0') {
    cVar1 = Trigg((char)DAT_1000a090 + '1');
    if ((cVar1 == '\0') && (iVar3 = GetTotalAmount0(((unsigned char *)&DAT_10009ce0) + DAT_1000a090 * 8), iVar3 < 10))
    {
      SetTrigg((char)DAT_1000a090 + ';',0);
      SelectUnits(((unsigned char *)&DAT_10009ce0) + DAT_1000a090 * 8,0);
      SelSendTo(1,&DAT_10009e18,0,0);
      SelSendTo(1,&DAT_10009e20,0,2);
      SelSendTo(1,&DAT_10009e28,0x1e,2);
      SelSendTo(1,&DAT_10009e30,0x19,2);
      SelSendTo(1,&DAT_10009e38,0xe1,2);
      SelSendTo(1,&DAT_10009ef8,0,2);
      SelSendTo(1,&DAT_10009f00,0xf0,2);
      SelSendTo(1,&DAT_10009f08,0xe1,2);
      SelSendTo(1,&DAT_10009f10,0xe1,2);
    }
  }
  cVar1 = Trigg(8);
  if (cVar1 != '\0') {
    cVar1 = Trigg((char)DAT_1000a090 + ';');
    if ((cVar1 == '\0') &&
       (iVar3 = GetUnitsAmount1(&DAT_10009f10,((unsigned char *)&DAT_10009ce0) + DAT_1000a090 * 8), 0 < iVar3)) {
      SetTrigg(8,0);
      ShowPage("#PAGE15");
      cVar1 = Trigg(0xe);
      if (cVar1 == '\0') {
        SetTrigg(0xe,0);
        SelectUnits(&DAT_10009d48,0);
        SelOpenGates(1);
        RunTimer(4,0x14);
      }
      else {
        RunTimer(4,0);
      }
      SetTrigg(9,0);
    }
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009d70,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
  }
  cVar1 = Trigg(9);
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009d70);
    iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009d70);
    if (iVar2 == iVar3) {
      SetTrigg(9,0);
      SelectUnits(&DAT_10009d70,0);
      SelSendAndKill(1,&DAT_10009f08,0x5a,0);
      SelSendAndKill(1,&DAT_10009f00,0x6e,2);
      SelSendAndKill(1,&DAT_10009ef8,0x80,2);
      SelSendAndKill(1,&DAT_10009e38,100,2);
      SelSendAndKill(1,&DAT_10009e30,0x96,2);
      SelSendAndKill(1,&DAT_10009e28,0x96,2);
      SelSendAndKill(1,&DAT_10009e20,0x78,2);
      SelSendAndKill(1,&DAT_10009e18,0x40,2);
      SelSendAndKill(1,&DAT_10009df8,0x40,2);
    }
  }
  iVar3 = GetGlobalTime();
  if (((DAT_1000a038 * 22000 + 10000 < iVar3) && (((long long *)&DAT_10009f58)[DAT_10009d28] == 0)) &&
     (DAT_1000a038 < 6)) {
    FUN_10001ba0(DAT_1000a038 * 6 + 0x15,&DAT_10009c30,((unsigned char *)&DAT_10009c80) + DAT_1000a038 * 8);
    DAT_10009c78 = DAT_10009d28;
    DAT_1000a038 = DAT_1000a038 + 1;
    ((long long *)&DAT_10009f58)[DAT_10009d28] = 1;
  }
  if ((((long long *)&DAT_10009f58)[DAT_10009c78] == 2) && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    DAT_10009d28 = DAT_10009d28 + 1;
    SetTrigg((char)DAT_1000a038 + 'O',0);
    DAT_10009c78 = 0x13;
    SelectUnits(((unsigned char *)&DAT_10009c78) + DAT_1000a038 * 2,0);
    SelSendAndKill(1,&DAT_10009f08,0x5a,0);
    SelSendAndKill(1,&DAT_10009f00,0x6e,2);
    SelSendAndKill(1,&DAT_10009ef8,0x80,2);
    SelSendAndKill(1,&DAT_10009e38,100,2);
    SelSendAndKill(1,&DAT_10009e30,0x96,2);
    SelSendAndKill(1,&DAT_10009e28,0x96,2);
    SelSendAndKill(1,&DAT_10009e20,0x78,2);
    SelSendAndKill(1,&DAT_10009e18,0x80,2);
    SelSendAndKill(1,&DAT_10009e10,0x78,2);
    SelSendAndKill(1,&DAT_10009e08,0x96,2);
    SelSendAndKill(1,&DAT_10009e00,0x80,2);
  }
  cVar1 = Trigg((char)DAT_1000a038 + 'E');
  if (cVar1 != '\0') {
    cVar1 = Trigg((char)DAT_1000a038 + 'O');
    if (cVar1 == '\0') {
      iVar3 = DAT_1000a038 * 2;
      iVar2 = GetUnitsAmount1(&DAT_10009e00,((unsigned char *)&DAT_10009c78) + iVar3);
      iVar3 = GetTotalAmount0(((unsigned char *)&DAT_10009c78) + iVar3);
      if (iVar3 == iVar2) {
        SetTrigg((char)DAT_1000a038 + 'E',0);
        CreateObject0(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,&DAT_1000a098,&DAT_10009b58,1,&DAT_10009fb0,0
                     );
        SelectUnits(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,0);
        SelSendTo(1,&DAT_10009e08,0x14,0);
        SelSendTo(1,&DAT_10009e10,0xf0,2);
        SelSendTo(1,&DAT_10009e18,0,2);
        SelSendTo(1,&DAT_10009e20,0,2);
        SelSendTo(1,&DAT_10009e28,0x1e,2);
        SelSendTo(1,&DAT_10009e30,0x19,2);
        SelSendTo(1,&DAT_10009e38,0xe1,2);
        SelSendTo(1,&DAT_10009ef8,0,2);
        SelSendTo(1,&DAT_10009f00,0xf0,2);
        SelSendTo(1,&DAT_10009f08,0xe1,2);
        SelSendTo(1,&DAT_10009f10,0xe1,2);
        SelSendTo(1,&DAT_10009fc8,0,2);
        RunTimer((char)DAT_1000a038 + '\t',1);
      }
    }
  }
  cVar1 = TimerDone((char)DAT_1000a038 + '\t');
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8);
    if (0 < iVar3) {
      iVar3 = GetTotalAmount0(((unsigned char *)&DAT_10009c78) + DAT_1000a038 * 2);
      if (0 < iVar3) {
        CreateZoneNearGroup(&DAT_1000a080,&DAT_10009f10,((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,500);
        SelectUnits(((unsigned char *)&DAT_10009c78) + DAT_1000a038 * 2,0);
        SelSendAndKill(1,&DAT_1000a080,0x40,0);
        RunTimer((char)DAT_1000a038 + '\t',0x32);
      }
    }
  }
  cVar1 = Trigg((char)DAT_1000a038 + 'E');
  if (cVar1 == '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10009df8,((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8);
    iVar2 = GetUnitsByNation(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,0);
    if (iVar2 == iVar3) {
      iVar3 = GetUnitsByNation(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,0);
      if (0 < iVar3) {
        iVar3 = GetUnitsByNation(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,0);
        iVar2 = GetDiff(0);
        AddResource(0,3,iVar3 * (iVar2 * -200 + 0x9c4));
        iVar3 = GetUnitsByNation(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,0);
        iVar2 = GetDiff(0);
        AddResource(0,1,iVar3 * (6 - iVar2) * 0x32);
        iVar3 = GetUnitsByNation(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,0);
        iVar2 = GetDiff(0);
        AddResource(0,4,iVar3 * (7 - iVar2) * 100);
        iVar3 = GetUnitsByNation(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,0);
        iVar2 = GetDiff(0);
        AddResource(0,5,iVar3 * (7 - iVar2) * 100);
        ShowPage("#PAGE2");
        SaveSelectedUnits(0,&DAT_10009ce0,0);
        ClearSelection(0);
        SelectUnits1(0,((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,0);
        SelErase(0);
        SelectUnits(&DAT_10009ce0,0);
      }
    }
  }
  cVar1 = Trigg((char)DAT_1000a038 + 'E');
  if (cVar1 == '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10009fc8,((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8);
    iVar2 = GetUnitsByNation(((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,1);
    if ((iVar3 == iVar2) &&
       (iVar3 = GetUnitsAmount1(&DAT_10009fc8,((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8), 0 < iVar3)) {
      ClearSelection(1);
      SelectUnits1(1,((unsigned char *)&DAT_10009ca8) + DAT_1000a038 * 8,0);
      SelErase(1);
    }
  }
  cVar1 = Trigg(10);
  if (((cVar1 != '\0') && (iVar3 = GetGlobalTime(), pcVar5 = (void*)&GetDiff, 83000 < iVar3)) &&
     (((long long *)&DAT_10009f58)[DAT_10009d28] == 0)) {
    SetTrigg(10,0);
    SetTrigg(0xb,0);
    DAT_10009ed8 = 4;
    puVar9 = &DAT_10009c08;
    puVar8 = &DAT_10009a80;
    iVar3 = GetDiff(0);
    FUN_10001ba0(iVar3 * 8 + 0x18,puVar8,puVar9);
    puVar9 = &DAT_10009c08;
    puVar8 = &DAT_10009c30;
    iVar3 = GetDiff(0);
    FUN_10001ba0(iVar3 * 4 + 0xc,puVar8,puVar9);
    puVar9 = &DAT_10009c08;
    puVar8 = &DAT_1000a070;
    iVar3 = GetDiff(0);
    FUN_10001ba0((iVar3 + 3) * 3,puVar8,puVar9);
    ((long long *)&DAT_10009f58)[DAT_10009d28] = 1;
  }
  if ((0 < DAT_10009ed8) && (cVar1 = CheckProduction(&DAT_10009d20), cVar1 != '\0')) {
    DAT_10009ed8 = DAT_10009ed8 + -1;
    ProduceUnit(&DAT_10009d20,&DAT_10009c70,&DAT_10009c00);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 == '\0') && (((long long *)&DAT_10009f58)[DAT_10009d28] == 2)) {
    SetTrigg(0xb,0);
    DAT_10009d28 = DAT_10009d28 + 1;
    ShowPage("#PAGE6");
    cVar1 = Trigg(0xe);
    if (cVar1 == '\0') {
      SetTrigg(0xe,0);
      SelectUnits(&DAT_10009d48,0);
      SelOpenGates(1);
      RunTimer(5,0x14);
    }
    else {
      RunTimer(5,0);
    }
    SetTrigg(0xc,0);
  }
  cVar1 = TimerDoneFirst(5);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009c00,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
    SelectUnits(&DAT_10009c08,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
    RunTimer(6,1);
  }
  cVar1 = Trigg(0xc);
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009c00);
    iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009c00);
    if (iVar2 == iVar3) {
      SetTrigg(0xc,0);
      SelectUnits(&DAT_10009c00,0);
      SelSendAndKill(1,&DAT_10009f08,0x5a,0);
      SelSendAndKill(1,&DAT_10009f00,0x6e,2);
      SelSendAndKill(1,&DAT_10009ef8,0x80,2);
      SelSendAndKill(1,&DAT_10009e38,100,2);
      SelSendAndKill(1,&DAT_10009e30,0x96,2);
      SelSendAndKill(1,&DAT_10009e28,0x96,2);
      SelSendAndKill(1,&DAT_10009e20,0x78,2);
      SelSendAndKill(1,&DAT_10009e18,0x80,2);
      SelSendAndKill(1,&DAT_10009e10,0x78,2);
      SelSendAndKill(1,&DAT_10009e08,0x96,2);
      SelSendAndKill(1,&DAT_10009e00,0x80,2);
      SelSendAndKill(1,&DAT_10009fd0,0,2);
    }
  }
  iVar3 = GetTotalAmount0(&DAT_10009c00);
  if (((0 < iVar3) && (iVar3 = GetTotalAmount0(&DAT_10009c08), 0 < iVar3)) &&
     (cVar1 = TimerDone(6), cVar1 != '\0')) {
    CreateZoneNearGroup(&DAT_1000a088,&DAT_10009e00,&DAT_10009c00,500);
    SelectUnits(&DAT_10009c08,0);
    SelSendAndKill(1,&DAT_1000a088,0x80,0);
    RunTimer(6,0x32);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009c00), 0 < iVar3)) {
    iVar3 = GetTotalAmount0(&DAT_10009c00);
    iVar2 = GetUnitsByNation(&DAT_10009c00,0);
    if (iVar2 == iVar3) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE7");
    }
  }
  cVar1 = Trigg(0xe);
  if (((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) &&
     ((cVar1 = Trigg(6), cVar1 != '\0' &&
      ((((cVar1 = Trigg(9), cVar1 != '\0' && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
        (iVar3 = GetTotalAmount0(&DAT_10009d48), 0 < iVar3)) &&
       ((iVar3 = GetUnitsAmount0(&DAT_10009f20,0), 0 < iVar3 &&
        (iVar3 = GetUnitsAmount0(&DAT_10009f20,1), iVar3 == 0)))))))) {
    SetTrigg(0xe,0);
    SelectUnits(&DAT_10009d48,0);
    SelCloseGates(1);
  }
  cVar1 = Trigg(0xe);
  if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d48), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f20,0), iVar3 == 0)) {
    SetTrigg(0xe,0);
    SelectUnits(&DAT_10009d48,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0xf);
  if ((((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d58), 0 < iVar3)) &&
      (iVar3 = GetUnitsAmount0(&DAT_10009f30,0), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f30,1), iVar3 == 0)) {
    SetTrigg(0xf,0);
    SelectUnits(&DAT_10009d58,0);
    SelCloseGates(1);
  }
  cVar1 = Trigg(0xf);
  if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d58), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f30,0), iVar3 == 0)) {
    SetTrigg(0xf,0);
    SelectUnits(&DAT_10009d58,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x10);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d68), 0 < iVar3)) &&
     ((iVar3 = GetUnitsAmount0(&DAT_10009f40,0), 0 < iVar3 &&
      (iVar3 = GetUnitsAmount0(&DAT_10009f40,1), iVar3 == 0)))) {
    SetTrigg(0x10,0);
    SelectUnits(&DAT_10009d68,0);
    SelCloseGates(1);
  }
  cVar1 = Trigg(0x10);
  if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d68), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f40,0), iVar3 == 0)) {
    SetTrigg(0x10,0);
    SelectUnits(&DAT_10009d68,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x11);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d78), 0 < iVar3)) &&
     ((iVar3 = GetUnitsAmount0(&DAT_10009f50,0), 0 < iVar3 &&
      (iVar3 = GetUnitsAmount0(&DAT_10009f50,1), iVar3 == 0)))) {
    SetTrigg(0x11,0);
    SelectUnits(&DAT_10009d78,0);
    SelCloseGates(1);
  }
  cVar1 = Trigg(0x11);
  if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d78), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f50,0), iVar3 == 0)) {
    SetTrigg(0x11,0);
    SelectUnits(&DAT_10009d78,0);
    SelOpenGates(1);
  }
  iVar3 = GetUnitsByNation(&DAT_10009d80,1);
  if ((0 < iVar3) && (iVar3 = GetUnitsAmount0(&DAT_10009fa8,0), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_10009d80,&DAT_10009fa8,0);
  }
  iVar3 = GetUnitsByNation(&DAT_10009d98,1);
  if ((0 < iVar3) && (iVar3 = GetUnitsAmount0(&DAT_10009fc0,0), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_10009d98,&DAT_10009fc0,0);
  }
  iVar3 = GetResource(0,5);
  if ((((0 < iVar3) || (iVar3 = GetResource(0,4), 0 < iVar3)) &&
      (iVar3 = GetUnitsByNation(&DAT_10009c28,1), 0 < iVar3)) &&
     (cVar1 = Trigg(0x15), cVar1 != '\0')) {
    SetTrigg(0x15,0);
    ShowPage("#PAGE8");
    SetResource(0,5,0);
    SetResource(0,4,0);
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009c28,0);
    SelDie(1);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 == '\0') && (iVar3 = GetUnitsByNation(&DAT_10009c28,0), 0 < iVar3)) {
    SetTrigg(0x15,0);
  }
  iVar3 = GetUnitsByNation(&DAT_10009c20,1);
  if (0 < iVar3) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009c20,0);
    SelDie(1);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009c20), iVar3 == 0)) {
    SetTrigg(0x16,0);
    ShowPage("#PAGE9");
    LooseGame();
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009c38), iVar3 == 0)) {
    SetTrigg(0x16,0);
    ShowPage("#PAGE10");
    LooseGame();
  }
  iVar3 = GetDiff(0);
  if (iVar3 < 2) {
    iVar3 = GetUnitsAmount0(&DAT_10009ff0,0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1000a010,&DAT_10009ff0,0);
    }
    iVar3 = GetUnitsAmount0(&DAT_10009fd8,0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1000a028,&DAT_10009fd8,0);
    }
    iVar3 = GetUnitsAmount0(&DAT_10009fe8,0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1000a048,&DAT_10009fe8,0);
    }
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_1000a048), iVar3 == 0)) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009dc8,0);
    SelChangeNation(1,0);
    SelectUnits1(1,&DAT_1000a040,0);
    SelChangeNation(1,0);
  }
  cVar1 = Trigg(0x18);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009dc8);
    iVar2 = GetUnitsByNation(&DAT_10009dc8,0);
    if (iVar2 == iVar3) {
      iVar3 = GetTotalAmount0(&DAT_1000a040);
      iVar2 = GetUnitsByNation(&DAT_1000a040,0);
      if (iVar2 == iVar3) {
        SetTrigg(0x18,0);
        ShowPage("#PAGE11");
      }
    }
  }
  if ((((DAT_10009ed0 == 0) && (cVar1 = Trigg(0x18), cVar1 == '\0')) &&
      (((long long *)&DAT_10009f58)[DAT_10009d28] == 0)) && (iVar3 = GetDiff(0), 0 < iVar3)) {
    DAT_10009ed0 = 1;
    ((long long *)&DAT_10009f58)[DAT_10009d28] = 1;
    FUN_10001ba0(0x21,&DAT_1000a070,&DAT_10009c10);
    FUN_10001ba0(0x28,&DAT_10009c30,&DAT_10009c10);
  }
  if (((DAT_10009ed0 == 1) && (((long long *)&DAT_10009f58)[DAT_10009d28] == 2)) &&
     (cVar1 = TimerDone(7), cVar1 != '\0')) {
    DAT_10009d28 = DAT_10009d28 + 1;
    DAT_10009ed0 = 2;
    SelectUnits(&DAT_10009c10,0);
    SelSendAndKill(1,&DAT_10009f08,0x5a,0);
    SelSendAndKill(1,&DAT_10009f00,0x6e,2);
    SelSendAndKill(1,&DAT_10009ef8,0x80,2);
    SelSendAndKill(1,&DAT_10009e38,100,2);
    SelSendAndKill(1,&DAT_10009e30,0x96,2);
    SelSendAndKill(1,&DAT_10009e28,0x96,2);
    SelSendAndKill(1,&DAT_10009e20,0x78,2);
    SelSendAndKill(1,&DAT_10009e18,0x80,2);
    SelSendAndKill(1,&DAT_10009e10,0x78,2);
    SelSendAndKill(1,&DAT_10009e08,0x46,2);
    SelSendAndKill(1,&DAT_10009fe8,0x46,2);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_1000a010), iVar3 == 0)) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009da0,0);
    SelChangeNation(1,0);
    SelectUnits1(1,&DAT_1000a000,0);
    SelChangeNation(1,0);
    SelectUnits1(1,&DAT_1000a008,0);
    SelChangeNation(1,0);
  }
  cVar1 = Trigg(0x19);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009da0);
    iVar2 = GetUnitsByNation(&DAT_10009da0,0);
    if (iVar2 == iVar3) {
      iVar3 = GetTotalAmount0(&DAT_1000a000);
      iVar2 = GetUnitsByNation(&DAT_1000a000,0);
      if (iVar2 == iVar3) {
        iVar3 = GetTotalAmount0(&DAT_1000a008);
        iVar2 = GetUnitsByNation(&DAT_1000a008,0);
        if (iVar2 == iVar3) {
          SetTrigg(0x19,0);
          ShowPage("#PAGE12");
        }
      }
    }
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_1000a028), iVar3 == 0)) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009db8,0);
    SelChangeNation(1,0);
    SelectUnits1(1,&DAT_1000a020,0);
    SelChangeNation(1,0);
  }
  cVar1 = Trigg(0x1a);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009db8);
    iVar2 = GetUnitsByNation(&DAT_10009db8,0);
    if (iVar2 == iVar3) {
      iVar3 = GetTotalAmount0(&DAT_1000a020);
      iVar2 = GetUnitsByNation(&DAT_1000a020,0);
      if (iVar2 == iVar3) {
        SetTrigg(0x1a,0);
        ShowPage("#PAGE13");
      }
    }
  }
  if ((((DAT_10009ed4 == 0) && (cVar1 = Trigg(0x1a), cVar1 == '\0')) &&
      (((long long *)&DAT_10009f58)[DAT_10009d28] == 0)) && (iVar3 = GetDiff(0), 0 < iVar3)) {
    puVar9 = &DAT_10009c18;
    puVar8 = &DAT_1000a070;
    DAT_10009ed4 = 1;
    ((long long *)&DAT_10009f58)[DAT_10009d28] = 1;
    iVar3 = GetDiff(0);
    FUN_10001ba0(iVar3 * 10 + 0x2d,puVar8,puVar9);
    puVar9 = &DAT_10009c18;
    puVar8 = &DAT_10009c30;
    iVar3 = GetDiff(0);
    FUN_10001ba0(iVar3 * 7 + 0x19,puVar8,puVar9);
  }
  if (((DAT_10009ed4 == 1) && (((long long *)&DAT_10009f58)[DAT_10009d28] == 2)) &&
     (cVar1 = TimerDone(7), cVar1 != '\0')) {
    DAT_10009d28 = DAT_10009d28 + 1;
    DAT_10009ed4 = 2;
    SelectUnits(&DAT_10009c18,0);
    SelSendAndKill(1,&DAT_10009fa8,0x40,0);
    SelSendAndKill(1,&DAT_10009ff0,0x40,2);
    SelSendAndKill(1,&DAT_10009fd8,100,2);
  }
  cVar1 = Trigg(0x1c);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009dd8), iVar3 == 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_1000a060), iVar3 == 0)) {
    SetTrigg(0x1c,0);
    ShowPage("#PAGE16");
  }
  cVar1 = Trigg(0x1d);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009de8), iVar3 == 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_1000a068), iVar3 == 0)) {
    SetTrigg(0x1d,0);
    ShowPage("#PAGE17");
  }
  cVar1 = Trigg(0x1e);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x1c), cVar1 == '\0')) &&
     (cVar1 = Trigg(0x1d), cVar1 == '\0')) {
    SetTrigg(0x1e,0);
    ShowPage("#PAGE18");
    ShowVictory();
  }
  cVar1 = Trigg(0x1f);
  if (((cVar1 != '\0') &&
      (iVar3 = GetTotalAmount0(&DAT_10009db0), pcVar6 = (void*)&AddResource, iVar3 == 0)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009ff8,0), pcVar6 = (void*)&AddResource, 0 < iVar3)) {
    SetTrigg(0x1f,0);
    iVar3 = GetDiff(0);
    ShowPageParam("#PAGE19",(6 - iVar3) * 0x32);
    iVar3 = GetDiff(0);
    AddResource(0,1,(6 - iVar3) * 0x32);
    iVar3 = GetDiff(0);
    AddResource(0,5,(7 - iVar3) * 100);
    iVar3 = GetDiff(0);
    AddResource(0,4,(7 - iVar3) * 100);
  }
  cVar1 = Trigg(0x20);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009dc0), iVar3 == 0)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009fb8,0), 0 < iVar3)) {
    SetTrigg(0x20,0);
    iVar3 = GetDiff(0);
    ShowPageParam("#PAGE20",(0xc - iVar3) * 0x32);
    iVar3 = GetDiff(0);
    AddResource(0,1,(0xc - iVar3) * 0x32);
    iVar3 = GetDiff(0);
    AddResource(0,5,(10 - iVar3) * 100);
    iVar3 = GetDiff(0);
    AddResource(0,4,(10 - iVar3) * 100);
  }
  iVar3 = GetResource(0,0);
  if (4999 < iVar3) {
    iVar3 = GetDiff(0);
    ShowPageParam("#PAGE21",(10 - iVar3) * 100);
    AddResource(0,0,-5000);
    iVar3 = GetDiff(0);
    AddResource(0,1,(10 - iVar3) * 100);
  }
  iVar3 = GetResource(0,2);
  if (4999 < iVar3) {
    iVar3 = GetDiff(0);
// FIXME(decompiler):     iVar3 = GetDiff(0);
    ShowPageParam("#PAGE22",(10 - iVar3) * 100);
    AddResource(0,2,-5000);
    iVar3 = GetDiff(0);
    AddResource(0,4,(10 - iVar3) * 100);
    iVar3 = GetDiff(0);
    AddResource(0,5,(10 - iVar3) * 100);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (iVar3 = GetGlobalTime(), 0x5ba0 < iVar3)) {
    SetTrigg(0x21,0);
    cVar1 = AskQuestion("#PAGE23");
    if (cVar1 != '\0') {
      iVar3 = GetResource(0,1);
      if (iVar3 < 500) {
        ShowPage("#PAGE23A");
        return;
      }
      AddResource(0,1,-500);
      ShowPage("#PAGE23B");
      SetLightSpot(&DAT_10009fc8,4,1);
      SetLightSpot(&DAT_10009fd0,4,2);
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
