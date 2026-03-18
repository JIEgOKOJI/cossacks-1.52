#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1000822c[] = "Zfl";
char DAT_10008230[] = "Zkom";
char DAT_10008238[] = "Z1";
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
long long DAT_10008f00 = 0;
long long DAT_10008f08 = 0;
long long DAT_10008f10 = 0;
long long DAT_10008f18 = 0;
long long DAT_10008f20 = 0;
long long DAT_10008f28 = 0;
long long DAT_10008f30 = 0;
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
long long DAT_10008fb8 = 0;
long long DAT_10008fc0 = 0;
long long DAT_10008fc8 = 0;
long long DAT_10008fd0 = 0;
long long DAT_10008fd8 = 0;
long long DAT_10008fe0 = 0;
long long DAT_10008fe8 = 0;
long long DAT_10008ff0 = 0;
long long DAT_10008ff8 = 0;
long long DAT_10009000 = 0;
long long DAT_10009008 = 0;
long long DAT_10009010 = 0;
long long DAT_10009018 = 0;
long long DAT_10009020 = 0;
long long DAT_10009028 = 0;
long long DAT_10009030 = 0;
long long DAT_10009038 = 0;
long long DAT_10009040 = 0;
long long DAT_10009048 = 0;
long long DAT_10009050 = 0;
long long DAT_10009058 = 0;
long long DAT_10009060 = 0;
long long DAT_10009068 = 0;
long long DAT_10009070 = 0;
long long DAT_10009078 = 0;
long long DAT_10009080 = 0;
long long DAT_10009088 = 0;
long long DAT_10009090 = 0;
long long DAT_10009098 = 0;
long long DAT_100090a0 = 0;
long long DAT_100090a8 = 0;
long long DAT_100090b0 = 0;
long long DAT_100090b8 = 0;
long long DAT_100090c0 = 0;
long long DAT_100090c8 = 0;
long long DAT_100090d0 = 0;
long long DAT_100090d8 = 0;
long long DAT_100090e0 = 0;
long long DAT_100090e8 = 0;
long long DAT_100090f0 = 0;
long long DAT_100090f8 = 0;
long long DAT_10009100 = 0;
long long DAT_10009108 = 0;
long long DAT_10009110 = 0;
long long DAT_10009118 = 0;
long long DAT_10009120 = 0;
long long DAT_10009128 = 0;
long long DAT_10009130 = 0;
long long DAT_10009138 = 0;
long long DAT_10009140 = 0;
long long DAT_10009148 = 0;
long long DAT_10009150 = 0;
long long DAT_10009158 = 0;
long long DAT_10009160 = 0;
long long DAT_10009168 = 0;
long long DAT_10009170 = 0;
long long DAT_10009178 = 0;
long long DAT_10009180 = 0;
long long DAT_10009188 = 0;
long long DAT_10009190 = 0;
long long DAT_10009198 = 0;
long long DAT_100091a0 = 0;
long long DAT_100091a8 = 0;
long long DAT_100091b0 = 0;
long long DAT_100091b8 = 0;
long long DAT_100091c0 = 0;
long long DAT_100091c8 = 0;
long long DAT_100091d0 = 0;
long long DAT_100091d8 = 0;
long long DAT_100091e0 = 0;
long long DAT_100091e8 = 0;
long long DAT_100091f0 = 0;
long long DAT_100091f8 = 0;
long long DAT_10009200 = 0;
long long DAT_10009208 = 0;
long long DAT_10009210 = 0;
long long DAT_10009218 = 0;
long long DAT_10009220 = 0;
long long DAT_10009228 = 0;
long long DAT_10009230 = 0;
long long DAT_10009238 = 0;
long long DAT_10009240 = 0;
long long DAT_10009248 = 0;
long long DAT_10009250 = 0;
long long DAT_10009258 = 0;
long long DAT_10009260 = 0;
long long DAT_10009268 = 0;
long long DAT_10009270 = 0;
long long DAT_10009278 = 0;
long long DAT_10009280 = 0;
long long DAT_10009288 = 0;
long long DAT_10009290 = 0;
long long DAT_10009298 = 0;
long long DAT_100092a0 = 0;
long long DAT_100092a8 = 0;
long long DAT_100092b0 = 0;
long long DAT_100092b8 = 0;
long long DAT_100092c0 = 0;
long long DAT_100092c8 = 0;
long long DAT_100092d0 = 0;
long long DAT_100092d8 = 0;
long long DAT_100092e0 = 0;
long long DAT_100092e8 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10008dc0,"Gstena1");
  RegisterUnits(&DAT_10008db8,"Gstena2");
  RegisterUnits(&DAT_100092b0,"Grider1");
  RegisterUnits(&DAT_100092a8,"Grider2");
  RegisterUnits(&DAT_10008f80,"Gpikl1");
  RegisterUnits(&DAT_10008f90,"Gpikl2");
  RegisterUnits(&DAT_10008f88,"Gpikl3");
  RegisterUnits(&DAT_10008fa8,"Gpikl4");
  RegisterUnits(&DAT_10009068,"Gmushl1");
  RegisterUnits(&DAT_10009060,"Gmushl2");
  RegisterUnits(&DAT_10009058,"Gmushl3");
  RegisterUnits(&DAT_10009050,"Gmushl4");
  RegisterUnits(&DAT_100091a8,"Gvorota1");
  RegisterUnits(&DAT_100091b0,"Gvorota2");
  RegisterUnits(&DAT_10009198,"Gvorota3");
  RegisterUnits(&DAT_100091a0,"Gvorota4");
  RegisterUnits(&DAT_10008e28,"Gmortira1");
  RegisterUnits(&DAT_10008e30,"Gmortira2");
  RegisterUnits(&DAT_10008e38,"Gmortira3");
  RegisterUnits(&DAT_10008e08,"Gmortira4");
  RegisterUnits(&DAT_10008e10,"Gmortira5");
  RegisterUnits(&DAT_10008e18,"Gmortira6");
  RegisterUnits(&DAT_10009238,"Gbashny1");
  RegisterUnits(&DAT_10009248,"Gbashny2");
  RegisterUnits(&DAT_10009258,"Gbashny3");
  RegisterUnits(&DAT_10009220,"Gbashny5");
  RegisterUnits(&DAT_10009228,"Gbashny6");
  RegisterUnits(&DAT_10009228,"Gbashny6");
  RegisterUnits(&DAT_10009038,"Gotryd6");
  RegisterUnits(&DAT_10008fa0,"Gotryd6_1");
  RegisterUnits(&DAT_10008f98,"Gotryd6_2");
  RegisterUnits(&DAT_10009040,"Gotryd5");
  RegisterUnits(&DAT_10008fc8,"Gotryd5_1");
  RegisterUnits(&DAT_10008fc0,"Gotryd5_2");
  RegisterUnits(&DAT_10009048,"Gotryd4");
  RegisterUnits(&DAT_10008e88,"Gotryd4_1");
  RegisterUnits(&DAT_10008e78,"Gotryd4_2");
  RegisterUnits(&DAT_10008e98,"Gotryd4_3");
  RegisterUnits(&DAT_10008e90,"Gotryd4_4");
  RegisterUnits(&DAT_10008d90,"Gkir1");
  RegisterUnits(&DAT_10008d98,"Gkir2");
  RegisterUnits(&DAT_10008da0,"Gkir3");
  RegisterUnits(&DAT_10008da8,"Gkir4");
  RegisterUnits(&DAT_10008db0,"Gkir5");
  RegisterUnits(&DAT_10009008,"Gmush1");
  RegisterUnits(&DAT_100092c8,"Gdragun1");
  RegisterUnits(&DAT_100092d8,"Gdragun2");
  RegisterUnits(&DAT_100092d0,"Gdragun3");
  RegisterUnits(&DAT_100092c0,"Gdragun4");
  RegisterUnits(&DAT_100092b8,"Gdragun5");
  RegisterUnits(&DAT_10008d60,"Gpikiner1");
  RegisterUnits(&DAT_10009260,"Gpandur1");
  RegisterUnits(&DAT_10009250,"Gkomandir1");
  RegisterUnits(&DAT_10009240,"Gkomandir2");
  RegisterUnits(&DAT_10009230,"Gkomandir3");
  RegisterUnits(&DAT_10009250,"Gkomandir1");
  RegisterUnits(&DAT_10009250,"Gkomandir1");
  RegisterUnits(&DAT_100091f0,"Gflag1");
  RegisterUnits(&DAT_10009200,"Gflag2");
  RegisterUnits(&DAT_100091f8,"Gflag3");
  RegisterUnits(&DAT_10008f20,"Glastk1");
  RegisterUnits(&DAT_10008f10,"Glastk2");
  RegisterUnits(&DAT_10008e70,"Gpatrul1");
  RegisterUnits(&DAT_10008e68,"Gpatrul2");
  RegisterUnits(&DAT_10008e80,"Gpatrul3");
  RegisterZone(&DAT_10008fd0,"Zforgren1");
  RegisterZone(&DAT_10008fd8,"Zforgren2");
  RegisterZone(&DAT_10008fe0,"Zforgren3");
  RegisterZone(&DAT_10009268,"Zforgren3_1");
  RegisterZone(&DAT_10008fb0,"Zforgren4");
  RegisterZone(&DAT_10008fb8,"Zforgren5");
  RegisterZone(&DAT_10009120,"Zvozlesten1");
  RegisterZone(&DAT_10009128,"Zvozlesten2");
  RegisterZone(&DAT_10009110,"Zvozlesten3");
  RegisterZone(&DAT_10009118,"Zvozlesten4");
  RegisterZone(&DAT_10008ef0,"Zvozlesten5");
  RegisterZone(&DAT_10008ef8,"Zvozlesten6");
  RegisterZone(&DAT_10009070,"Zvgorode1");
  RegisterZone(&DAT_10009078,"Zvgorode2");
  RegisterZone(&DAT_10009080,"Zvgorode3");
  RegisterZone(&DAT_10009088,"Zvgorode4");
  RegisterZone(&DAT_10009090,"Zvgorode5");
  RegisterZone(&DAT_10009098,"Zvgorode6");
  RegisterZone(&DAT_100090a0,"Zvgorode7");
  RegisterZone(&DAT_100090a8,"Zvgorode8");
  RegisterZone(&DAT_10009030,"Zvgorode9");
  RegisterZone(&DAT_10009208,"Zvgorode10");
  RegisterZone(&DAT_10009280,"Zbashny1");
  RegisterZone(&DAT_10009278,"Zbashny2");
  RegisterZone(&DAT_10009290,"Zbashny3");
  RegisterZone(&DAT_10009288,"Zbashny4");
  RegisterZone(&DAT_100092a0,"Zbashny5");
  RegisterZone(&DAT_10009298,"Zbashny6");
  RegisterZone(&DAT_100091c0,"Zformortira1");
  RegisterZone(&DAT_100091b8,"Zformortira2");
  RegisterZone(&DAT_100091e0,"Zformortira3");
  RegisterZone(&DAT_100091d8,"Zformortira4");
  RegisterZone(&DAT_100091d0,"Zformortira5");
  RegisterZone(&DAT_100091c8,"Zformortira6");
  RegisterZone(&DAT_10009020,"Zsvet1");
  RegisterZone(&DAT_10008e50,"Zforotryd6");
  RegisterZone(&DAT_10008eb8,"Zforotryd6_1");
  RegisterZone(&DAT_10008ec0,"Zforotryd6_2");
  RegisterZone(&DAT_10008e58,"Zforotryd5");
  RegisterZone(&DAT_10008ed0,"Zforotryd5_1");
  RegisterZone(&DAT_10008ed8,"Zforotryd5_2");
  RegisterZone(&DAT_10008e48,"Zforotryd4");
  RegisterZone(&DAT_10008f78,"Zforotryd4_1");
  RegisterZone(&DAT_10008f60,"Zforotryd4_2");
  RegisterZone(&DAT_10008f68,"Zforotryd4_3");
  RegisterZone(&DAT_10008f70,"Zforotryd4_4");
  RegisterZone(&DAT_10009180,"Zforflag1");
  RegisterZone(&DAT_10009188,"Zforflag2");
  RegisterZone(&DAT_10009190,"Zforflag3");
  RegisterZone(&DAT_10008df8,"Zforkomandir1");
  RegisterZone(&DAT_10008de8,"Zforkomandir2");
  RegisterZone(&DAT_10008df0,"Zforkomandir3");
  RegisterZone(&DAT_10008e40,"Zsturma1");
  RegisterZone(&DAT_100092e8,"Zkrepost");
  RegisterZone(&DAT_10008f48,"Zkrepost1");
  RegisterZone(&DAT_10009218,"Zpodmoga1");
  RegisterZone(&DAT_10009210,"Zpodmoga2");
  RegisterZone(&DAT_10008de0,"Zpodmoga1_1");
  RegisterZone(&DAT_10008f58,DAT_10008238);
  RegisterZone(&DAT_10008e00,DAT_10008230);
  RegisterZone(&DAT_100092e0,DAT_1000822c);
  RegisterDynGroup(&DAT_10009178);
  RegisterUnitType(&DAT_10008f50,"Pushka(GE)");
  RegisterFormation(&DAT_10008f00,"#LINEMORB10");
  RegisterFormation(&DAT_10008dc8,"#LINEMORB7");
  RegisterDynGroup(&DAT_100091e8);
  RegisterUnitType(&DAT_10009138,"Pushka_mnogostvolka(GE)");
  RegisterFormation(&DAT_10008dd0,"#LINEMORB5");
  RegisterFormation(&DAT_10008ee0,"#SHIPS3");
  RegisterDynGroup(&DAT_10008d88);
  RegisterDynGroup(&DAT_10008d80);
  RegisterDynGroup(&DAT_10008d70);
  RegisterDynGroup(&DAT_10008d68);
  RegisterDynGroup(&DAT_10008d78);
  RegisterDynGroup(&DAT_10008ea0);
  RegisterDynGroup(&DAT_10008f08);
  RegisterDynGroup(&DAT_10008ee8);
  RegisterDynGroup(&DAT_10008f28);
  RegisterDynGroup(&DAT_10008f18);
  RegisterDynGroup(&DAT_10008e60);
  RegisterUnitType(&DAT_10009028,"Grenader(au)");
  RegisterFormation(&DAT_10008ea8,"#LINE25PUS");
  RegisterDynGroup(&DAT_10009108);
  RegisterDynGroup(&DAT_10008eb0);
  RegisterUnitType(&DAT_10008f40,"Mushketer_PR(GE)");
  RegisterFormation(&DAT_10009000,"#KARE196");
  RegisterDynGroup(&DAT_10009270);
  RegisterDynGroup(&DAT_10009100);
  RegisterFormation(&DAT_10008ff0,"#LINE3");
  RegisterFormation(&DAT_10008fe8,"#ALONE");
  RegisterUnitType(&DAT_10009130,"Oficer_NEW(UN)");
  RegisterUnitType(&DAT_10008f30,"Flagonosec(UN)");
  RegisterDynGroup(&DAT_10009018);
  RegisterDynGroup(&DAT_10009010);
  RegisterUnitType(&DAT_10008f38,"Kirasir(GE)");
  RegisterUnitType(&DAT_100090b0,"Dragun_18(GE)");
  RegisterFormation(&DAT_10008ff8,"#LINE120");
  RegisterUpgrade(&DAT_10008ec8,"AKA19GE");
  RegisterUpgrade(&DAT_10008dd8,"AKA25GE");
  RegisterUnitType(&DAT_100090b8,"Konushnia_Swesair(GE)");
  RegisterUnitType(&DAT_100090c0,"Cercov_Poland(GE)");
  RegisterUnitType(&DAT_100090c8,"akademia_E(GE)");
  RegisterUnitType(&DAT_100090d0,"Dip_korpus(GE)");
  RegisterUnitType(&DAT_100090d8,"Kazarma_evro(GE)");
  RegisterUnitType(&DAT_100090e0,"Kazarma(GE)");
  RegisterUnitType(&DAT_100090e8,"artileri_depo(GE)");
  RegisterUnitType(&DAT_100090f0,"Rinok(GE)");
  RegisterUnitType(&DAT_100090f8,"WALL_UKR(GE)");
  RegisterUnitType(&DAT_10009140,"WALL_EV(GE)");
  RegisterUnitType(&DAT_10009148,"Bashnia(GE)");
  RegisterUnitType(&DAT_10009150,"Melnica(GE)");
  RegisterUnitType(&DAT_10009158,"Dom_Prussia(GE)");
  RegisterUnitType(&DAT_10009160,"Kuznica(GE)");
  RegisterUnitType(&DAT_10009168,"PorE(GE)");
  RegisterUnitType(&DAT_10009170,"Europ(GE)");
  ChangeFriends(0,0x11);
  SetPlayerName(1,"RUS_ARMY");
  SetPlayerName(4,"ALLIES");
  DoMessagesBrief();
  EnableUnit(0,&DAT_100090b8,0);
  EnableUnit(0,&DAT_100090c0,0);
  EnableUnit(0,&DAT_100090c8,0);
  EnableUnit(0,&DAT_100090d0,0);
  EnableUnit(0,&DAT_100090d8,0);
  EnableUnit(0,&DAT_100090e0,0);
  EnableUnit(0,&DAT_100090e8,0);
  EnableUnit(0,&DAT_100090f0,0);
  EnableUnit(0,&DAT_100090f8,0);
  EnableUnit(0,&DAT_10009140,0);
  EnableUnit(0,&DAT_10009148,0);
  EnableUnit(0,&DAT_10009150,0);
  EnableUnit(0,&DAT_10009158,0);
  EnableUnit(0,&DAT_10009160,0);
  EnableUnit(0,&DAT_10009168,0);
  EnableUnit(0,&DAT_10009170,0);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pcVar4;
  void *pcVar5;
  void *pcVar6;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    SetResource(0,3,60000);
    SetResource(0,1,80000);
    SetResource(0,0,45000);
    SetResource(0,2,20000);
    SetResource(0,5,25000);
    SetResource(0,4,25000);
    SetResource(1,3,0xa98ac7);
    SetResource(1,1,0xa98ac7);
    SetResource(1,0,0xa98ac7);
    SetResource(1,2,0xa98ac7);
    SetResource(1,5,0xa98ac7);
    SetResource(1,4,0xa98ac7);
    SetResource(2,3,0xa98ac7);
    SetResource(2,1,0xa98ac7);
    SetResource(2,0,0xa98ac7);
    SetResource(2,2,0xa98ac7);
    SetResource(2,5,0xa98ac7);
    SetResource(2,4,0xa98ac7);
    SetResource(4,3,0xa98ac7);
    SetResource(4,1,0xa98ac7);
    SetResource(4,0,0xa98ac7);
    SetResource(4,2,0xa98ac7);
    SetResource(4,5,0xa98ac7);
    SetResource(4,4,0xa98ac7);
    SetLightSpot(&DAT_10009020,4,1);
    RunTimer(1,3000);
    RunTimer(2,0xdac);
    RunTimer(3,700);
    RunTimer(4,700);
    RunTimer(0xb,0x5dc);
    RunTimer(0xc,0x6a4);
    RunTimer(0xd,0x708);
    RunTimer(0xe,800);
    RunTimer(0xf,0xf3c);
    RunTimer(0x1d,30000);
    SetTrigg(0x52,0);
    SetTrigg(0x54,0);
    ShowPage("#PAGE1");
    InitialUpgrade("Gbashny1","MAINGE");
    DisableUpgrade(0,&DAT_10008dd8);
    InitialUpgrade("Gotryd5","Gusar_evro(au)ATTACK");
    InitialUpgrade("Gotryd5","Gusar_evro(au)ATTACK3");
    InitialUpgrade("Gotryd5","Gusar_evro(au)ATTACK4");
    InitialUpgrade("Gotryd5","Gusar_evro(au)ATTACK5");
    InitialUpgrade("Gotryd5","Gusar_evro(au)ATTACK6");
    InitialUpgrade("Gotryd5","Gusar_evro(au)ATTACK7");
    InitialUpgrade("Gotryd5","Gusar_evro(au)SHIELD");
    InitialUpgrade("Gotryd5","Gusar_evro(au)SHIELD3");
    InitialUpgrade("Gotryd5","Gusar_evro(au)SHIELD4");
    InitialUpgrade("Gotryd5","Gusar_evro(au)SHIELD5");
    InitialUpgrade("Gotryd5","Gusar_evro(au)SHIELD6");
    InitialUpgrade("Gotryd5","Gusar_evro(au)SHIELD7");
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK3");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK4");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK5");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK6");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK7");
      InitialUpgrade("Gotryd5","Grenader(au)SHIELD");
      InitialUpgrade("Gotryd5","Grenader(au)SHIELD3");
      InitialUpgrade("Gotryd5","Mushketer(au)SHIELD");
      InitialUpgrade("Gbashny1","AKA16AU");
      InitialUpgrade("Gbashny1","AKA17AU");
      InitialUpgrade("Gbashny1","AKA20AU");
      InitialUpgrade("Gbashny1","AKA27AU");
      InitialUpgrade("Gotryd5","Mushketer(au)ATTACK");
      InitialUpgrade("Gotryd5","Mushketer(au)ATTACK3");
      InitialUpgrade("Gotryd5","Mushketer(au)ATTACK4");
      DisableUpgrade(0,&DAT_10008ec8);
      SetResource(0,3,60000);
      SetResource(0,1,30000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      SetResource(0,5,30000);
      SetResource(0,4,30000);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK3");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK4");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK5");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK6");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK7");
      InitialUpgrade("Gotryd5","Grenader(au)SHIELD");
      InitialUpgrade("Gotryd5","Grenader(au)SHIELD3");
      InitialUpgrade("Gotryd5","Mushketer(au)SHIELD");
      InitialUpgrade("Gotryd5","AKA09GE");
      InitialUpgrade("Gotryd5","AKA10GE");
      InitialUpgrade("Gotryd5","AKA11GE");
      InitialUpgrade("Gotryd5","AKA16AU");
      InitialUpgrade("Gotryd5","AKA20AU");
      DisableUpgrade(0,&DAT_10008ec8);
      SetResource(0,3,80000);
      SetResource(0,1,35000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      SetResource(0,5,35000);
      SetResource(0,4,35000);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK3");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK4");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK5");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK6");
      InitialUpgrade("Gotryd5","Grenader(au)ATTACK7");
      InitialUpgrade("Gbashny1","AKA09GE");
      InitialUpgrade("Gbashny1","AKA10GE");
      InitialUpgrade("Gbashny1","AKA11GE");
      InitialUpgrade("Gbashny1","KUZ02GE");
      SetResource(0,3,100000);
      SetResource(0,1,45000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      SetResource(0,5,45000);
      SetResource(0,4,45000);
      CreateObject0(&DAT_10009178,&DAT_10008dc8,&DAT_10008f50,0,&DAT_10009080,0x28);
      CreateObject0(&DAT_100091e8,&DAT_10008ee0,&DAT_10009138,0,&DAT_100092e8,0x28);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      InitialUpgrade("Gbashny1","AKA09GE");
      InitialUpgrade("Gbashny1","AKA10GE");
      InitialUpgrade("Gbashny1","AKA11GE");
      InitialUpgrade("Gbashny1","KUZ02GE");
      SetResource(0,3,150000);
      SetResource(0,1,80000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      SetResource(0,5,80000);
      SetResource(0,4,80000);
      CreateObject0(&DAT_10009178,&DAT_10008f00,&DAT_10008f50,0,&DAT_10009080,0x28);
      CreateObject0(&DAT_100091e8,&DAT_10008dd0,&DAT_10009138,0,&DAT_10008f48,0x28);
    }
  }
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    CreateObject0(&DAT_10008d88,&DAT_10008ea8,&DAT_10009028,1,&DAT_10008fd0,0xc4);
    RunTimer(1,4000);
  }
  cVar1 = TimerDone(2);
  if (cVar1 != '\0') {
    CreateObject0(&DAT_10008d80,&DAT_10008ea8,&DAT_10009028,1,&DAT_10008fd8,0xc4);
    RunTimer(2,4000);
  }
  iVar2 = GetUnitsByNation(&DAT_10008d88,1);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008d88,0);
    SelSendAndKill(1,&DAT_10009120,0xc4,0);
    RemoveGroup(&DAT_10008d88,&DAT_10008ea0);
  }
  iVar2 = GetUnitsByNation(&DAT_10008d80,1);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008d80,0);
    SelSendAndKill(1,&DAT_10009128,0xc4,0);
    RemoveGroup(&DAT_10008d80,&DAT_10008f08);
  }
  iVar2 = GetUnitsAmount1(&DAT_10009120,&DAT_10008ea0);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008ea0,0);
    SelAttackGroup(1,&DAT_10008dc0);
  }
  iVar2 = GetUnitsAmount1(&DAT_10009128,&DAT_10008f08);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008f08,0);
    SelAttackGroup(1,&DAT_10008db8);
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008db8,0), iVar2 == 0)) &&
     (iVar2 = GetUnitsByNation(&DAT_10008dc0,0), iVar2 == 0)) {
    SetTrigg(0xb,0);
    RunTimer(5,200);
    RunTimer(6,0x672);
    RunTimer(7,3000);
    RunTimer(8,4000);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SetTrigg(0xc,0);
    SelectUnits1(1,&DAT_10008f80,0);
    SelSendAndKill(1,&DAT_10009088,0xd2,0);
    SelSendAndKill(1,&DAT_100090a0,0,2);
    SelectUnits1(1,&DAT_10009068,0);
    SelSendAndKill(1,&DAT_10009088,0xd2,0);
    SelSendAndKill(1,&DAT_100090a0,0,2);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(6), cVar1 != '\0')) {
    SetTrigg(0xd,0);
    SelectUnits1(1,&DAT_10008f90,0);
    SelSendAndKill(1,&DAT_10009078,0xd2,0);
    SelSendAndKill(1,&DAT_100090a8,0,2);
    SelectUnits1(1,&DAT_10009060,0);
    SelSendAndKill(1,&DAT_10009078,0xd2,0);
    SelSendAndKill(1,&DAT_100090a8,0,2);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    SetTrigg(0xe,0);
    SelectUnits1(1,&DAT_10008f88,0);
    SelSendAndKill(1,&DAT_10009078,0xd2,0);
    SelSendAndKill(1,&DAT_10009098,0x40,2);
    SelSendAndKill(1,&DAT_10009090,0xcd,2);
    SelectUnits1(1,&DAT_10009058,0);
    SelSendAndKill(1,&DAT_10009078,0xd2,0);
    SelSendAndKill(1,&DAT_10009098,0x40,2);
    SelSendAndKill(1,&DAT_10009090,0xcd,2);
    SelectUnits1(1,&DAT_100092a8,0);
    SelSendAndKill(1,&DAT_10009088,0xd2,0);
    SelSendAndKill(1,&DAT_100090a8,0x40,2);
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(8), cVar1 != '\0')) {
    SetTrigg(0xf,0);
    SelectUnits1(1,&DAT_10008fa8,0);
    SelSendAndKill(1,&DAT_10009030,0xd2,0);
    SelSendAndKill(1,&DAT_10009208,0x80,2);
    SelectUnits1(1,&DAT_10009050,0);
    SelSendAndKill(1,&DAT_10009030,0xd2,0);
    SelSendAndKill(1,&DAT_10009208,0x80,2);
    SelectUnits1(1,&DAT_100092b0,0);
    SelSendAndKill(1,&DAT_10009078,0xd2,0);
    SelSendAndKill(1,&DAT_10009098,0x3a,2);
    SelSendAndKill(1,&DAT_10009208,0x80,2);
  }
  cVar1 = TimerDone(0xb);
  if (cVar1 != '\0') {
    CreateObject0(&DAT_10008d70,&DAT_10008ea8,&DAT_10009028,1,&DAT_10008fe0,0xc4);
    RunTimer(0xb,3000);
  }
  iVar2 = GetUnitsByNation(&DAT_10008d70,1);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008d70,0);
    SelSendAndKill(1,&DAT_10009268,0xaa,0);
    SelSendAndKill(1,&DAT_10008ef8,0xaa,2);
    RemoveGroup(&DAT_10008d70,&DAT_10008ee8);
  }
  iVar2 = GetUnitsAmount1(&DAT_10008ef8,&DAT_10008ee8);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008ee8,0);
    SelAttackGroup(1,&DAT_100091a0);
  }
  cVar1 = TimerDone(0xc);
  if (cVar1 != '\0') {
    CreateObject0(&DAT_10008d68,&DAT_10008ea8,&DAT_10009028,1,&DAT_10008fb0,0xc4);
    RunTimer(0xc,3000);
  }
  iVar2 = GetUnitsByNation(&DAT_10008d68,1);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008d68,0);
    SelSendAndKill(1,&DAT_10008ef0,0x87,0);
    RemoveGroup(&DAT_10008d68,&DAT_10008f28);
  }
  iVar2 = GetUnitsAmount1(&DAT_10008ef0,&DAT_10008f28);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008f28,0);
    SelAttackGroup(1,&DAT_10009198);
  }
  cVar1 = TimerDone(0xd);
  if (cVar1 != '\0') {
    CreateObject0(&DAT_10008d78,&DAT_10008ea8,&DAT_10009028,1,&DAT_10008fb8,0xc4);
    RunTimer(0xd,3000);
  }
  iVar2 = GetUnitsByNation(&DAT_10008d78,1);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008d78,0);
    SelSendAndKill(1,&DAT_10009110,0x73,0);
    RemoveGroup(&DAT_10008d78,&DAT_10008f18);
  }
  iVar2 = GetUnitsAmount1(&DAT_10009110,&DAT_10008f18);
  if (0 < iVar2) {
    SelectUnits1(1,&DAT_10008f18,0);
    SelAttackGroup(1,&DAT_100091a8);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xe), cVar1 != '\0')) {
    SetTrigg(0x15,0);
    SelectUnits1(1,&DAT_10008e28,0);
    SelSendTo(1,&DAT_100091c0,0x6c,0);
    SelectUnits1(1,&DAT_10008e30,0);
    SelSendTo(1,&DAT_100091b8,0x6e,0);
    SelectUnits1(1,&DAT_10008e38,0);
    SelSendTo(1,&DAT_100091e0,0x83,0);
    SelectUnits1(1,&DAT_10008e08,0);
    SelSendTo(1,&DAT_100091d8,0x85,0);
    SelectUnits1(1,&DAT_10008e10,0);
    SelSendTo(1,&DAT_100091d0,0xa0,0);
    SelectUnits1(1,&DAT_10008e18,0);
    SelSendTo(1,&DAT_100091c8,0xaf,0);
    SelectUnits1(1,&DAT_10009038,0);
    SelSendAndKill(1,&DAT_10008e50,0xbe,0);
    SelectUnits1(1,&DAT_10008f98,0);
    SelSendAndKill(1,&DAT_10008ec0,0xa0,0);
    SelectUnits1(1,&DAT_10008fa0,0);
    SelSendAndKill(1,&DAT_10008eb8,0x96,0);
    SelectUnits1(1,&DAT_10009040,0);
    SelSendAndKill(1,&DAT_10008e58,0x8c,0);
    SelectUnits1(1,&DAT_10008fc8,0);
    SelSendAndKill(1,&DAT_10008ed0,0x82,0);
    SelectUnits1(1,&DAT_10008fc0,0);
    SelSendAndKill(1,&DAT_10008ed8,0x80,0);
    SelectUnits1(1,&DAT_10009048,0);
    SelSendAndKill(1,&DAT_10008e48,0x78,0);
    SelectUnits1(1,&DAT_10008e88,0);
    SelSendAndKill(1,&DAT_10008f78,0x78,0);
    SelectUnits1(1,&DAT_10008e78,0);
    SelSendAndKill(1,&DAT_10008f60,0x5b,0);
    SelectUnits1(1,&DAT_10008e98,0);
    SelSendAndKill(1,&DAT_10008f68,0x69,0);
    SelectUnits1(1,&DAT_10008e90,0);
    SelSendAndKill(1,&DAT_10008f70,0x4d,0);
    SelectUnits1(1,&DAT_10009250,0);
    SelSendAndKill(1,&DAT_10008df8,0xa0,0);
    SelectUnits1(1,&DAT_100091f0,0);
    SelSendAndKill(1,&DAT_10009180,0xa0,0);
    SelectUnits1(1,&DAT_10009240,0);
    SelSendAndKill(1,&DAT_10008de8,0x84,0);
    SelectUnits1(1,&DAT_10009200,0);
    SelSendAndKill(1,&DAT_10009188,0x84,0);
    SelectUnits1(1,&DAT_10009230,0);
    SelSendAndKill(1,&DAT_10008df0,100,0);
    SelectUnits1(1,&DAT_100091f8,0);
    SelSendAndKill(1,&DAT_10009190,100,0);
  }
  cVar1 = TimerDone(0xf);
  if (cVar1 != '\0') {
    AttackBuildingsInZone(&DAT_10008e28,&DAT_10009280,0);
    AttackBuildingsInZone(&DAT_10008e30,&DAT_10009278,0);
    AttackBuildingsInZone(&DAT_10008e38,&DAT_10009290,0);
    AttackBuildingsInZone(&DAT_10008e08,&DAT_10009288,0);
    AttackBuildingsInZone(&DAT_10008e10,&DAT_100092a0,0);
    AttackBuildingsInZone(&DAT_10008e18,&DAT_10009298,0);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100091a8,0), iVar2 < 2)) {
    SetTrigg(0x16,0);
    RunTimer(0,600);
    RunTimer(0x17,5000);
    RunTimer(0x18,10000);
    RunTimer(0x13,15000);
    RunTimer(0x14,16000);
    RunTimer(0x15,17000);
    SetResource(1,1,0);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0), cVar1 != '\0')) {
    SetTrigg(0x17,0);
    SetResource(1,1,0x10f446);
    SelectUnits1(1,&DAT_10009008,0);
    SelSendAndKill(1,&DAT_10009098,100,0);
    SelectUnits1(1,&DAT_100092c8,0);
    SelSendAndKill(1,&DAT_10009098,0x69,0);
    SelSendAndKill(1,&DAT_10009208,0x69,2);
    SelSendAndKill(1,&DAT_10009090,0xdc,2);
    SelectUnits1(1,&DAT_10009008,0);
    SelSendAndKill(1,&DAT_10009098,0x69,0);
    SelSendAndKill(1,&DAT_100090a8,0x69,2);
    SelSendAndKill(1,&DAT_10009088,0xdc,2);
    SelSendAndKill(1,&DAT_10009208,0x69,2);
    SelSendAndKill(1,&DAT_100090a0,0xdc,2);
    SelectUnits1(1,&DAT_10009260,0);
    SelSendAndKill(1,&DAT_10009098,0x69,0);
    SelSendAndKill(1,&DAT_100090a8,0x69,2);
    SelSendAndKill(1,&DAT_10009090,0xdc,2);
    SelSendAndKill(1,&DAT_100090a0,0x69,2);
    SelSendAndKill(1,&DAT_10009208,0xdc,2);
    SelectUnits(&DAT_10008d90,0);
    SelSendAndKill(1,&DAT_10009098,0x69,0);
    SelSendAndKill(1,&DAT_10009208,0x69,2);
    SelSendAndKill(1,&DAT_10009090,0xdc,2);
    RunTimer(0x10,2000);
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsByNation(&DAT_100091a8,0), iVar2 < 2 ||
      (cVar1 = TimerDone(0x19), cVar1 != '\0')))) {
    SetTrigg(0x18,0);
    RunTimer(0x11,800);
    SetResource(1,1,0);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x11), cVar1 != '\0')) {
    SetTrigg(0x19,0);
    SetResource(1,1,0x3640c);
    SelectUnits1(1,&DAT_10008d60,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009090,200,2);
    SelSendAndKill(1,&DAT_100090a0,0x46,2);
    SelectUnits1(1,&DAT_10008e90,0);
    SelSendAndKill(1,&DAT_10009098,0x6e,0);
    SelSendAndKill(1,&DAT_10009090,200,2);
    SelSendAndKill(1,&DAT_10009080,0,2);
    SelectUnits1(1,&DAT_10008e88,0);
    SelSendAndKill(1,&DAT_10009098,0x6e,0);
    SelSendAndKill(1,&DAT_10009090,200,2);
    SelSendAndKill(1,&DAT_100090a0,0x1e,2);
    RunTimer(0x12,2000);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x12), cVar1 != '\0')) {
    SetTrigg(0x1a,0);
    SelectUnits1(1,&DAT_10008d98,0);
    SelSendAndKill(1,&DAT_10009088,200,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,2);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009078,0,2);
    SelSendAndKill(1,&DAT_100090a8,0,2);
    SelectUnits1(1,&DAT_100092d8,0);
    SelSendAndKill(1,&DAT_10009088,200,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,2);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009078,0,2);
    SelSendAndKill(1,&DAT_10009080,0,2);
    RunTimer(0x16,3000);
  }
  cVar1 = Trigg(0x1f);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x16), cVar1 != '\0')) {
    SetTrigg(0x1f,0);
    SelectUnits1(1,&DAT_10009230,0);
    SelSendAndKill(1,&DAT_10009098,0x6e,0);
    SelSendAndKill(1,&DAT_100090a0,0x1e,2);
    SelectUnits1(1,&DAT_100091f8,0);
    SelSendAndKill(1,&DAT_10009098,0x6e,0);
    SelSendAndKill(1,&DAT_100090a0,0x1e,2);
    SelectUnits1(1,&DAT_10008e78,0);
    SelSendAndKill(1,&DAT_10009098,0x6e,0);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009030,0x28,2);
    SelSendAndKill(1,&DAT_10009098,0,2);
    SelectUnits1(1,&DAT_10008e98,0);
    SelSendAndKill(1,&DAT_10009098,0x6e,0);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009030,0x28,2);
    SelSendAndKill(1,&DAT_10009098,0,2);
  }
  cVar1 = Trigg(0x1b);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsByNation(&DAT_100091a0,0), iVar2 < 2 ||
      (cVar1 = TimerDone(0x1a), cVar1 != '\0')))) {
    SetTrigg(0x1b,0);
    RunTimer(0x13,600);
    RunTimer(0,12000);
    RunTimer(0x11,18000);
    RunTimer(0x17,25000);
    SetResource(1,1,0);
  }
  cVar1 = Trigg(0x1c);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x13), cVar1 != '\0')) {
    SetTrigg(0x1c,0);
    SetResource(1,1,0x51612);
    SelectUnits1(1,&DAT_10009038,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009098,200,2);
    SelSendAndKill(1,&DAT_100090a8,0x46,2);
    SelectUnits1(1,&DAT_10009040,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009090,200,2);
    SelSendAndKill(1,&DAT_10009080,0,2);
    RunTimer(0x14,3000);
  }
  cVar1 = Trigg(0x1d);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x14), cVar1 != '\0')) {
    SetTrigg(0x1d,0);
    SelectUnits1(1,&DAT_10008da0,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_100090a8,200,2);
    SelSendAndKill(1,&DAT_10009088,0,2);
    SelSendAndKill(1,&DAT_10009078,0,2);
    SelSendAndKill(1,&DAT_10009078,0,2);
    SelSendAndKill(1,&DAT_10009098,0x40,2);
    SelectUnits1(1,&DAT_100092d0,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009070,0,2);
    SelSendAndKill(1,&DAT_10009078,0,2);
    SelSendAndKill(1,&DAT_100090a0,0x40,2);
    SelectUnits1(1,&DAT_10009040,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009080,0x28,2);
    SelSendAndKill(1,&DAT_10009070,0,2);
    SelSendAndKill(1,&DAT_100090a8,0,2);
    RunTimer(0x15,3000);
  }
  cVar1 = Trigg(0x1e);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x15), cVar1 != '\0')) {
    SetTrigg(0x1e,0);
    SelectUnits1(1,&DAT_10009250,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_100090a8,0x1e,2);
    SelectUnits1(1,&DAT_100091f0,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_100090a8,0x1e,2);
    SelectUnits1(1,&DAT_10009038,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009080,0x28,2);
    SelSendAndKill(1,&DAT_10009070,0,2);
    SelSendAndKill(1,&DAT_100090a8,0,2);
    SelectUnits1(1,&DAT_10008fa0,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009080,0x28,2);
    SelSendAndKill(1,&DAT_10009070,0,2);
    SelSendAndKill(1,&DAT_100090a8,0,2);
    SelectUnits1(1,&DAT_10008f98,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009080,0x28,2);
    SelSendAndKill(1,&DAT_10009070,0,2);
    SelSendAndKill(1,&DAT_100090a8,0,2);
  }
  cVar1 = Trigg(0x20);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10009198,0), iVar2 < 2)) {
    SetTrigg(0x20,0);
    RunTimer(0x17,600);
    SetResource(1,1,0);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x17), cVar1 != '\0')) {
    SetTrigg(0x21,0);
    SetResource(1,1,0x43d118);
    SelectUnits1(1,&DAT_10009240,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_100090a8,0x1e,2);
    SelectUnits1(1,&DAT_10009200,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_100090a8,0x1e,2);
    SelectUnits1(1,&DAT_10008fc8,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009098,200,2);
    SelSendAndKill(1,&DAT_100090a8,0x46,2);
    SelectUnits1(1,&DAT_10008fc0,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009090,200,2);
    SelSendAndKill(1,&DAT_10009080,0,2);
    SelectUnits1(1,&DAT_10009048,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,2);
    SelSendAndKill(1,&DAT_10009090,200,2);
    SelSendAndKill(1,&DAT_10009080,0,2);
    RunTimer(0x18,3000);
  }
  cVar1 = Trigg(0x22);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x18), pcVar4 = (void*)&SetTrigg, cVar1 != '\0')) {
    SetTrigg(0x22,0);
    SelectUnits1(1,&DAT_10008db0,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_100090a8,200,2);
    SelSendAndKill(1,&DAT_10009088,0,2);
    SelSendAndKill(1,&DAT_10009078,0,2);
    SelSendAndKill(1,&DAT_10009078,0,2);
    SelSendAndKill(1,&DAT_10009098,0x40,2);
    SelectUnits1(1,&DAT_100092b8,0);
    SelSendAndKill(1,&DAT_10009208,0x6e,0);
    SelSendAndKill(1,&DAT_10009088,200,2);
    SelSendAndKill(1,&DAT_10009070,0,2);
    SelSendAndKill(1,&DAT_10009078,0,2);
    SelSendAndKill(1,&DAT_100090a0,0x40,2);
    RunTimer(0x19,2000);
    RunTimer(0x1a,5000);
    RunTimer(0,10000);
  }
  cVar1 = Trigg(0x50);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x1d), cVar1 != '\0')) {
    SetTrigg(0x50,0);
    CreateObject0(&DAT_10009108,&DAT_10009000,&DAT_10008f40,4,&DAT_10009218,0xc4);
    CreateObject0(&DAT_10009270,&DAT_10008fe8,&DAT_10009130,4,&DAT_10008e00,0xc4);
    CreateObject0(&DAT_10009100,&DAT_10008ff0,&DAT_10008f30,4,&DAT_100092e0,0xc4);
  }
  cVar1 = Trigg(0x51);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10009108,4), 0 < iVar2)) {
    SetTrigg(0x51,0);
    SelectUnits(&DAT_10009108,0);
    SelSendAndKill(4,&DAT_10008de0,0xc4,0);
    SelSendAndKill(4,&DAT_10009128,0xcc,2);
    SelectUnits(&DAT_10009270,0);
    SelSendAndKill(4,&DAT_10008de0,0xc4,0);
    SelSendAndKill(4,&DAT_10009128,0xcc,2);
    SelectUnits(&DAT_10009100,0);
    SelSendAndKill(4,&DAT_10008de0,0xc4,0);
    SelSendAndKill(4,&DAT_10009128,0xcc,2);
    RunTimer(0x1d,400);
    SetTrigg(0x52,0);
  }
  cVar1 = Trigg(0x52);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x1d), cVar1 != '\0')) {
    SetTrigg(0x52,0);
    CreateObject0(&DAT_10008eb0,&DAT_10009000,&DAT_10008f40,4,&DAT_10009218,0xc4);
  }
  cVar1 = Trigg(0x53);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008eb0,4), 0 < iVar2)) {
    SetTrigg(0x53,0);
    SelectUnits(&DAT_10008eb0,0);
    SelSendAndKill(4,&DAT_10008de0,0xc4,0);
    SelSendAndKill(4,&DAT_10009128,0xcc,2);
    RunTimer(0x1d,700);
    SetTrigg(0x54,0);
  }
  cVar1 = Trigg(0x54);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x1d), cVar1 != '\0')) {
    SetTrigg(0x54,0);
    CreateObject0(&DAT_10009018,&DAT_10008ff8,&DAT_10008f38,4,&DAT_10009210,0xc4);
  }
  cVar1 = Trigg(0x55);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10009018,4), 0 < iVar2)) {
    SetTrigg(0x55,0);
    SelectUnits(&DAT_10009018,0);
    SelSendAndKill(4,&DAT_10009120,0xb4,0);
    RunTimer(0x1d,400);
    SetTrigg(0x56,0);
  }
  cVar1 = Trigg(0x56);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x1d), cVar1 != '\0')) {
    SetTrigg(0x56,0);
    CreateObject0(&DAT_10009010,&DAT_10008ff8,&DAT_100090b0,4,&DAT_10009210,0xc4);
  }
  cVar1 = Trigg(0x57);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10009010,4), 0 < iVar2)) {
    SetTrigg(0x57,0);
    SelectUnits(&DAT_10009010,0);
    SelSendAndKill(4,&DAT_10009120,0xb4,0);
    ShowPage("#PAGE4");
  }
  cVar1 = Trigg(0x58);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10009128,&DAT_10009108), 0 < iVar2)) {
    SetTrigg(0x58,0);
    SelectUnits1(0,&DAT_10008dc0,0);
    SelDie(0);
    SelectUnits1(0,&DAT_10008db8,0);
    SelDie(0);
    RunTimer(0x1c,600);
  }
  cVar1 = Trigg(0x59);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x1c), cVar1 != '\0')) {
    SetTrigg(0x59,0);
    SelectUnits1(4,&DAT_10008eb0,0);
    SelSendAndKill(4,&DAT_10009088,0xe6,0);
    SelSendAndKill(4,&DAT_100090a8,0xaa,2);
    SelSendAndKill(4,&DAT_100090a0,0xa0,2);
    SelSendAndKill(4,&DAT_10009080,0x3c,2);
    SelectUnits1(4,&DAT_10009108,0);
    SelSendAndKill(4,&DAT_10009070,0xe6,0);
    SelSendAndKill(4,&DAT_10009030,0xaa,2);
    SelSendAndKill(4,&DAT_10009090,0xdc,2);
    SelectUnits1(4,&DAT_10009018,0);
    SelSendAndKill(4,&DAT_10009078,0xe6,0);
    SelSendAndKill(4,&DAT_10009098,0,2);
    SelSendAndKill(4,&DAT_100090a8,0,2);
    SelectUnits1(4,&DAT_10009010,0);
    SelSendAndKill(4,&DAT_10009070,0xe6,0);
    SelSendAndKill(4,&DAT_10009030,0,2);
    SelSendAndKill(4,&DAT_10009090,0,2);
    SelSendAndKill(4,&DAT_10009208,0,2);
    SelectUnits(&DAT_10009270,0);
    SelSendAndKill(4,&DAT_100092e8,0x28,0);
    SelectUnits(&DAT_10009100,0);
    SelSendAndKill(4,&DAT_100092e8,0x28,0);
  }
  cVar1 = Trigg(0x5f);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_10008f48,1);
    iVar3 = GetUnitsAmount0(&DAT_100092e8,1);
    if (0x28 < iVar2 + iVar3) {
      iVar2 = GetUnitsAmount0(&DAT_10008f48,0);
      iVar3 = GetUnitsAmount0(&DAT_100092e8,0);
      if (iVar2 + iVar3 < 0xf) {
        SetTrigg(0x5f,0);
        ShowPage("#PAGE2");
        LooseGame();
      }
    }
  }
  cVar1 = Trigg(0x60);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount0(&DAT_100092e8,4), 0x19 < iVar2 ||
      (iVar2 = GetUnitsAmount0(&DAT_100090a8,4), 0x14 < iVar2)))) {
    SetTrigg(0x60,0);
    ShowPage("#PAGE3");
    ShowVictory();
  }
  cVar1 = Trigg(0x61);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetUnitsByNation(&DAT_100091a0,0), iVar2 < 2 ||
       (iVar2 = GetUnitsByNation(&DAT_10009198,0), iVar2 < 2)) ||
      (iVar2 = GetUnitsByNation(&DAT_100091a8,0), pcVar6 = (void*)&GetUnitsAmount0, iVar2 < 2)))) {
    SetTrigg(0x61,0);
    RunTimer(9,12000);
  }
  cVar1 = Trigg(0x62);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(9), pcVar5 = (void*)&SelectUnits, cVar1 != '\0')) {
    SetTrigg(0x62,0);
    SelectUnits(&DAT_10008f20,0);
    SelSendAndKill(1,&DAT_10009090,0xdc,0);
    SelectUnits(&DAT_10008f10,0);
    SelSendAndKill(1,&DAT_10009080,0xdc,0);
  }
  cVar1 = Trigg(0x46);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10009110,0), 4 < iVar2)) {
    SetTrigg(0x46,0);
    SelectUnits(&DAT_10008e80,0);
    SelSendAndKill(1,&DAT_10009110,0x5a,0);
  }
  cVar1 = Trigg(0x47);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008ef0,0), 4 < iVar2)) {
    SetTrigg(0x47,0);
    SelectUnits(&DAT_10008e68,0);
    SelSendAndKill(1,&DAT_10008ef0,0x82,0);
  }
  cVar1 = Trigg(0x48);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008ef8,0), 4 < iVar2)) {
    SetTrigg(0x48,0);
    SelectUnits(&DAT_10008e70,0);
    SelSendAndKill(1,&DAT_10008ef8,0xb4,0);
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
