#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1000816c[] = "Zkr";
char DAT_100081dc[] = "Zskl";
char DAT_1000821c[] = "Zdip";
char DAT_100082d4[] = "Gak";
char DAT_100082d8[] = "Ggor";
char DAT_100082e0[] = "Gbaz";
char DAT_1000832c[] = "Gdip";
char DAT_10008918[] = "SUXX";
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
int DAT_10008db0 = 0;
int DAT_10008db4 = 0;
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
int DAT_10008ee0 = 0;
int DAT_10008ee4 = 0;
int DAT_10008ee8 = 0;
int DAT_10008eec = 0;
int DAT_10008ef0 = 0;
long long DAT_10008ef8 = 0;
long long DAT_10008f00 = 0;
long long DAT_10008f08 = 0;
long long DAT_10008f10 = 0;
long long DAT_10008f18 = 0;
long long DAT_10008f20 = 0;
int DAT_10008f28 = 0;
int DAT_10008f2c = 0;
int DAT_10008f30 = 0;
int DAT_10008f34 = 0;
int DAT_10008f38 = 0;
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
int DAT_10009018 = 0;
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
int DAT_10009090 = 0;
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10009000,"Gkomandirs");
  RegisterUnits(&DAT_10008ff0,"Gkomandirk");
  RegisterUnits(&DAT_10008fe0,"Gvorotak1");
  RegisterUnits(&DAT_10008fd0,"Gvorotak2");
  RegisterUnits(&DAT_10008fc8,"Gvorotak3");
  RegisterUnits(&DAT_10008f88,"Gkazarmav1");
  RegisterUnits(&DAT_10008f98,"Gkazarmav2");
  RegisterUnits(&DAT_10008d98,"Gkonushny1");
  RegisterUnits(&DAT_10008da8,"Gkonushny2");
  RegisterUnits(&DAT_10008d70,"Gkonushny3");
  RegisterUnits(&DAT_10008d78,"Gkonushny4");
  RegisterUnits(&DAT_10008e30,"Gkuzny");
  RegisterUnits(&DAT_10009010,DAT_1000832c);
  RegisterUnits(&DAT_10008e50,"Gkazarmac");
  RegisterUnits(&DAT_10009030,"Gvorotas");
  RegisterUnits(&DAT_10008e58,"Goboz");
  RegisterUnits(&DAT_10008d30,"Gkazr");
  RegisterUnits(&DAT_10008e28,"Gkonr");
  RegisterUnits(&DAT_10009040,"Gvorotar");
  RegisterUnits(&DAT_100090f0,"Gzdan");
  RegisterUnits(&DAT_10008fc0,DAT_100082e0);
  RegisterUnits(&DAT_10009060,DAT_100082d8);
  RegisterUnits(&DAT_10008f90,DAT_100082d4);
  RegisterUnits(&DAT_10008eb8,"Gpuska");
  RegisterUnits(&DAT_100090b0,"Grider");
  RegisterZone(&DAT_10008df8,"Zkon1");
  RegisterZone(&DAT_10008e00,"Zkon2");
  RegisterZone(&DAT_10008e08,"Zkon3");
  RegisterZone(&DAT_10008e10,"Zkon4");
  RegisterZone(&DAT_10009110,"Zkaz1");
  RegisterZone(&DAT_10009118,"Zkaz2");
  RegisterZone(&DAT_10008e20,"Zrazv1");
  RegisterZone(&DAT_10008e18,"Zrazv2");
  RegisterZone(&DAT_10009008,"Zrazv1_1");
  RegisterZone(&DAT_10009070,"Zrazv2_1");
  RegisterZone(&DAT_10008ef8,"Zplosh1");
  RegisterZone(&DAT_10008f08,"Zplosh2");
  RegisterZone(&DAT_10008f10,"Zplosh3");
  RegisterZone(&DAT_10008d80,"Zzakr1");
  RegisterZone(&DAT_10008d90,"Zzakr2");
  RegisterZone(&DAT_10008da0,"Zzakr3");
  RegisterZone(&DAT_10008f00,"Zplkr");
  RegisterZone(&DAT_10008e40,"Zrazvc");
  RegisterZone(&DAT_10008d48,"Zkazc");
  RegisterZone(&DAT_10008d38,DAT_1000821c);
  RegisterZone(&DAT_10008f40,"Zsherenga");
  RegisterZone(&DAT_10009100,"Zzabor");
  RegisterZone(&DAT_10008e48,"Zkonr");
  RegisterZone(&DAT_10008d60,"Zkazr");
  RegisterZone(&DAT_10008e38,"Zvorotr");
  RegisterZone(&DAT_10008d88,"Zzavorotr");
  RegisterZone(&DAT_10008e70,DAT_100081dc);
  RegisterZone(&DAT_10008d40,"Zzavorotr1");
  RegisterZone(&DAT_10008ed0,"Zbaza");
  RegisterZone(&DAT_10009020,"Zbaza1");
  RegisterZone(&DAT_10008f68,"Zput1");
  RegisterZone(&DAT_10008dc0,"Zput1_1");
  RegisterZone(&DAT_10008dc8,"Zput1_2");
  RegisterZone(&DAT_10008dd0,"Zput1_3");
  RegisterZone(&DAT_10008f70,"Zput2");
  RegisterZone(&DAT_10008dd8,"Zput2_1");
  RegisterZone(&DAT_10008de0,"Zput2_2");
  RegisterZone(&DAT_10008de8,"Zput2_3");
  RegisterZone(&DAT_10008df0,"Zput2_4");
  RegisterZone(&DAT_10008e98,"Zatackp");
  RegisterZone(&DAT_10009108,DAT_1000816c);
  RegisterZone(&DAT_100090c0,"Zbashny1");
  RegisterZone(&DAT_100090b8,"Zbashny2");
  RegisterZone(&DAT_100090d0,"Zbashny3");
  RegisterZone(&DAT_100090c8,"Zbashny4");
  RegisterZone(&DAT_100090d8,"Zbashny5");
  RegisterVar(&DAT_10008d68,8);
  RegisterUnitType(&DAT_10009028,"Pandur_Avstria(au)");
  RegisterDynGroup(&DAT_10008ed8);
  RegisterUnitType(&DAT_10009038,"Pandur_Avstria(au)");
  RegisterDynGroup(&DAT_10008ec8);
  RegisterDynGroup(&DAT_10008f18);
  RegisterDynGroup(&DAT_10008f20);
  RegisterDynGroup(&DAT_10008fb0);
  RegisterDynGroup(&DAT_10008e60);
  RegisterUnitType(&DAT_10008f50,"Kirasir(au)");
  RegisterDynGroup(&DAT_10009088);
  RegisterDynGroup(&DAT_10009098);
  RegisterDynGroup(&DAT_100090a0);
  RegisterDynGroup(&DAT_10009080);
  RegisterDynGroup(&DAT_10009048);
  RegisterDynGroup(&DAT_10009058);
  RegisterDynGroup(&DAT_10009050);
  RegisterDynGroup(&DAT_10009068);
  RegisterDynGroup(&DAT_10008eb0);
  RegisterUnitType(&DAT_10008fe8,"Rundashir_Avstria_DIP(SA)");
  RegisterDynGroup(&DAT_10008eb0);
  RegisterUnitType(&DAT_100090e8,"Grenader_DIP(SA)");
  RegisterDynGroup(&DAT_10008d50);
  RegisterUnitType(&DAT_10008db8,"Ianithar(TU)");
  RegisterDynGroup(&DAT_10008f60);
  RegisterUnitType(&DAT_10008fa0,"TUrkey_pikiner(TU)");
  RegisterDynGroup(&DAT_10008d58);
  RegisterDynGroup(&DAT_10008ea8);
  RegisterDynGroup(&DAT_100090e0);
  RegisterDynGroup(&DAT_10008f58);
  RegisterUnitType(&DAT_10008fa8,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_10008ec0,"Rinok(GE)");
  RegisterUnitType(&DAT_100090f8,"Europ(GE)");
  RegisterUnitType(&DAT_10008fd8,"akademia_E(GE)");
  RegisterUnitType(&DAT_100090a8,"WALL_EV(GE)");
  RegisterUnitType(&DAT_10008ff8,"WALL_UKR(GE)");
  RegisterUnitType(&DAT_10008ea0,"Pushka_mnogostvolka(GE)");
  RegisterUpgrade(&DAT_10008f48,"AKA25GE");
  RegisterUpgrade(&DAT_10008fb8,"AKA19GE");
  DisableUpgrade(0,&DAT_10008fb8);
  RegisterDynGroup(&DAT_10008f80);
  RegisterUnitType(&DAT_10008f78,"Bashnia(GE)");
  RegisterFormation(&DAT_10009078,"#ALONE");
  RegisterDynGroup(&DAT_10008e80);
  RegisterDynGroup(&DAT_10008e78);
  RegisterDynGroup(&DAT_10008e90);
  RegisterDynGroup(&DAT_10008e88);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  void *pcVar3;
  
                    
  DisableUpgrade(0,&DAT_10008f48);
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,iVar2 * -20000 + 230000);
    iVar2 = GetDiff(0);
    SetResource(0,1,(6 - iVar2) * 15000);
    iVar2 = GetDiff(0);
    SetResource(0,0,(6 - iVar2) * 10000);
    SetResource(0,2,20000);
    iVar2 = GetDiff(0);
    SetResource(0,5,(6 - iVar2) * 5000);
    iVar2 = GetDiff(0);
    SetResource(0,4,(6 - iVar2) * 5000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      AddResource(0,4,50000);
      AddResource(0,1,50000);
      AddResource(0,5,50000);
    }
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
    SetResource(5,3,0xa98ac7);
    SetResource(5,1,0xa98ac7);
    SetResource(5,0,0xa98ac7);
    SetResource(5,2,0xa98ac7);
    SetResource(5,5,0xa98ac7);
    SetResource(5,4,0xa98ac7);
    ChangeFriends(0,0x21);
    ChangeFriends(1,6);
    InitialUpgrade("Gkomandirs","MAINAU");
    DAT_10008db0 = 0;
    DAT_10008ee0 = 0;
    DAT_10008ee4 = 0;
    DAT_10008ee8 = 0;
    DAT_10008eec = 0;
    DAT_10008ef0 = 0;
    DAT_10008f34 = 0;
    DAT_10008f38 = 0;
    DAT_10008f28 = 0;
    DAT_10008f2c = 0;
    DAT_10008db4 = 0xd;
    DAT_10008f30 = 0xd;
    DAT_10009090 = 0;
    DAT_10009018 = 0;
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    SelectUnits(&DAT_10009030,0);
    SelOpenGates(2);
    RunTimer(1,0x32);
    RunTimer(2,0x32);
    RunTimer(3,100);
    RunTimer(4,100);
    RunTimer(5,100);
    RunTimer(6,100);
    RunTimer(7,100);
    RunTimer(0x1b,600);
    RunTimer(0xc,0x2260);
    RunTimer(0xd,0x3200);
    RunTimer(0xe,0x3db8);
    RunTimer(0xf,0x5140);
    RunTimer(0x10,0x5910);
    RunTimer(0x11,0x7080);
    RunTimer(0x12,0x7850);
    RunTimer(0x13,0xbea0);
    InitialUpgrade(DAT_1000832c,"Mushketer_ev(SA)ATTACK");
    InitialUpgrade(DAT_1000832c,"Mushketer_ev(SA)ATTACK3");
    InitialUpgrade(DAT_1000832c,"Mushketer_ev(SA)ATTACK4");
    InitialUpgrade(DAT_1000832c,"Mushketer_ev(SA)SHIELD");
    InitialUpgrade(DAT_1000832c,"Mushketer_ev(SA)SHIELD3");
    InitialUpgrade(DAT_1000832c,"Mushketer_ev(SA)SHIELD4");
    InitialUpgrade(DAT_1000832c,"Mushketer_ev(SA)SHIELD5");
    InitialUpgrade(DAT_1000832c,"Mushketer_ev(SA)SHIELD6");
    EnableUnit(0,&DAT_10008ec0,0);
    EnableUnit(0,&DAT_100090f8,0);
    EnableUnit(0,&DAT_10008ff8,0);
    EnableUnit(0,&DAT_100090a8,0);
    EnableUnit(0,&DAT_10008ea0,0);
    EnableUnit(0,&DAT_10008fd8,0);
    ShowPage("#PAGE6");
    SetPlayerName(1,"AUSTRIANS");
    SetPlayerName(2,DAT_10008918);
    SetPlayerName(4,"ALLIES");
    SetPlayerName(5,"ROBBERS");
  }
  cVar1 = Trigg(0x5d);
  if (cVar1 != '\0') {
    SetTrigg(0x5d,0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      CreateObject0(&DAT_10008f80,&DAT_10009078,&DAT_10008f78,0,&DAT_100090c0,0);
      CreateObject0(&DAT_10008e80,&DAT_10009078,&DAT_10008f78,0,&DAT_100090b8,0);
      CreateObject0(&DAT_10008e78,&DAT_10009078,&DAT_10008f78,0,&DAT_100090d0,0);
      CreateObject0(&DAT_10008e90,&DAT_10009078,&DAT_10008f78,0,&DAT_100090c8,0);
      CreateObject0(&DAT_10008e88,&DAT_10009078,&DAT_10008f78,0,&DAT_100090d8,0);
      SetTrigg(0x45,0);
      SetTrigg(0x44,0);
      SetTrigg(0x43,0);
      SetTrigg(0x42,0);
      SetTrigg(0x41,0);
      InitialUpgrade("Gkomandirk","Pushka(GE)COST");
      InitialUpgrade("Gkomandirk","Pushka(GE)COST3");
      InitialUpgrade("Gkomandirk","Pushka(GE)COST4");
      InitialUpgrade("Gkomandirk","Pushka(GE)COST5");
      InitialUpgrade("Gkomandirk","Pushka(GE)COST6");
      InitialUpgrade("Gkomandirk","Pushka(GE)COST7");
      InitialUpgrade("Gkomandirk","Pushka(GE)BUILD");
      InitialUpgrade("Gkomandirk","Pushka(GE)BUILD3");
      InitialUpgrade("Gkomandirk","Pushka(GE)BUILD4");
      InitialUpgrade("Gkomandirk","Pushka(GE)BUILD5");
      InitialUpgrade("Gkomandirk","Pushka(GE)BUILD6");
      InitialUpgrade("Gkomandirk","Pushka(GE)BUILD7");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK3");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK4");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK5");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK6");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK7");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD3");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD4");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD5");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD6");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD7");
      InitialUpgrade("Gkomandirk","AKA33GE");
      InitialUpgrade("Gkomandirk","AKA35GE");
      InitialUpgrade("Gkomandirk","KUZ04GE");
      InitialUpgrade("Gkomandirk","Bashnia(GE)PAUSE");
      InitialUpgrade("Gkomandirk","Bashnia(GE)PAUSE3");
      InitialUpgrade("Gkomandirk","Bashnia(GE)PAUSE4");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      CreateObject0(&DAT_10008f80,&DAT_10009078,&DAT_10008f78,0,&DAT_100090c0,0);
      CreateObject0(&DAT_10008e80,&DAT_10009078,&DAT_10008f78,0,&DAT_100090b8,0);
      CreateObject0(&DAT_10008e90,&DAT_10009078,&DAT_10008f78,0,&DAT_100090c8,0);
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK3");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK4");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK5");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK6");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)ATTACK7");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD3");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD4");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD5");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD6");
      InitialUpgrade("Gkomandirk","Mushketer_PR(GE)SHIELD7");
      InitialUpgrade("Gkomandirk","Bashnia(GE)PAUSE");
      InitialUpgrade("Gkomandirk","Bashnia(GE)PAUSE3");
      InitialUpgrade("Gkomandirk","Bashnia(GE)PAUSE4");
      SetTrigg(0x43,0);
      SetTrigg(0x44,0);
      SetTrigg(0x45,0);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      CreateObject0(&DAT_10008f80,&DAT_10009078,&DAT_10008f78,0,&DAT_100090c0,0);
      CreateObject0(&DAT_10008e90,&DAT_10009078,&DAT_10008f78,0,&DAT_100090c8,0);
      InitialUpgrade("Gkomandirk","Bashnia(GE)PAUSE");
      InitialUpgrade("Gkomandirk","Bashnia(GE)PAUSE3");
      InitialUpgrade("Gkomandirk","Bashnia(GE)PAUSE4");
      SetTrigg(0x45,0);
    }
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(10,0);
    DAT_10008db0 = 0;
    if (0 < DAT_10008db4) {
      do {
        ProduceUnitFast(&DAT_10008f88,&DAT_10009028,&DAT_10008ed8,1);
        DAT_10008db0 = DAT_10008db0 + 1;
      } while (DAT_10008db0 < DAT_10008db4);
    }
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10009110,&DAT_10008ed8), 0 < iVar2)) {
    SelectUnits(&DAT_10008ed8,0);
    SelSendTo(1,&DAT_10008e20,0x23,0);
    SelSendTo(1,&DAT_10009008,0x23,2);
    SelSendTo(1,&DAT_10008ef8,0x23,2);
    RemoveGroup(&DAT_10008ed8,&DAT_10008f18);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008ef8,&DAT_10008f18), 0 < iVar2)) {
    SetTrigg(0xc,0);
    SelectUnits(&DAT_10008fe0,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008ef8,&DAT_10008f18), 0 < iVar2)) {
    SetTrigg(0xd,0);
    SelectUnits(&DAT_10008f18,0);
    SelSendAndKill(1,&DAT_10008d80,0x23,2);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SetTrigg(0xe,0);
    DAT_10008ee0 = 0;
    if (0 < DAT_10008db4) {
      do {
        ProduceUnitFast(&DAT_10008f98,&DAT_10009038,&DAT_10008ec8,1);
        DAT_10008ee0 = DAT_10008ee0 + 1;
      } while (DAT_10008ee0 < DAT_10008db4);
    }
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10009118,&DAT_10008ec8), 0 < iVar2)) {
    SelectUnits(&DAT_10008ec8,0);
    SelSendTo(1,&DAT_10008e18,0x2b,0);
    SelSendTo(1,&DAT_10009070,0x23,2);
    SelSendTo(1,&DAT_10008f10,0x23,2);
    RemoveGroup(&DAT_10008ec8,&DAT_10008f20);
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f10,&DAT_10008f20), 0 < iVar2)) {
    SetTrigg(0x10,0);
    SelectUnits(&DAT_10008fc8,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f10,&DAT_10008f20), 0 < iVar2)) {
    SetTrigg(0x11,0);
    SelectUnits(&DAT_10008f20,0);
    SelSendAndKill(1,&DAT_10008da0,0x23,2);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (DAT_10008db0 == DAT_10008db4)) {
    DAT_10008db0 = 0;
    cVar1 = Trigg(0x5a);
    if ((cVar1 != '\0') && (DAT_10008db4 < 0x19)) {
      DAT_10008db4 = DAT_10008db4 + 1;
    }
    SetTrigg(10,0);
    SetTrigg(0xd,0);
    RunTimer(1,5000);
    SelectUnits(&DAT_10008f18,0);
    SelSendAndKill(1,&DAT_10008f00,0,0);
    RemoveGroup(&DAT_10008f18,&DAT_10008fb0);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (DAT_10008ee0 == DAT_10008f30)) {
    DAT_10008ee0 = 0;
    cVar1 = Trigg(0x5a);
    if ((cVar1 != '\0') && (DAT_10008f30 < 0x19)) {
      DAT_10008f30 = DAT_10008f30 + 1;
    }
    SetTrigg(0xe,0);
    SetTrigg(0x11,0);
    RunTimer(2,5000);
    SelectUnits(&DAT_10008f20,0);
    SelSendAndKill(1,&DAT_10008f00,0,0);
    RemoveGroup(&DAT_10008f20,&DAT_10008fb0);
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(0x13,0);
    DAT_10008ee4 = 0;
    do {
      ProduceUnitFast(&DAT_10008d98,&DAT_10008f50,&DAT_10009088,6);
      DAT_10008ee4 = DAT_10008ee4 + 1;
    } while (DAT_10008ee4 < 10);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008df8,&DAT_10009088), 0 < iVar2)) {
    SelectUnits(&DAT_10009088,0);
    SelSendTo(1,&DAT_10008e20,0x2b,0);
    SelSendTo(1,&DAT_10009008,0x23,2);
    SelSendTo(1,&DAT_10008f08,0x23,2);
    RemoveGroup(&DAT_10009088,&DAT_10009048);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f08,&DAT_10009048), 0 < iVar2)) {
    SetTrigg(0x15,0);
    SelectUnits(&DAT_10008fd0,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f08,&DAT_10009048), 0 < iVar2)) {
    SetTrigg(0x16,0);
    SelectUnits(&DAT_10009048,0);
    SelSendTo(1,&DAT_10008d90,0x23,2);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') && (DAT_10008ee4 == 10)) {
    DAT_10008ee4 = 0;
    SetTrigg(0x13,0);
    SetTrigg(0x16,0);
    RunTimer(3,0xc80);
    iVar2 = rand();
    iVar2 = iVar2 % 3;
    if (iVar2 == 0) {
      SelectUnits(&DAT_10009048,0);
      SelSendAndKill(1,&DAT_10008f00,0,0);
      RemoveGroup(&DAT_10009048,&DAT_10008fb0);
    }
    else if (iVar2 == 1) {
      SelectUnits(&DAT_10009048,0);
      SelSendAndKill(1,&DAT_10008f68,0,0);
      SelSendAndKill(1,&DAT_10008dc0,0,2);
      SelSendAndKill(1,&DAT_10008dc8,0,2);
      SelSendAndKill(1,&DAT_10008dd0,0,2);
      SelSendAndKill(1,&DAT_10008f00,0xc4,2);
      RemoveGroup(&DAT_10009048,&DAT_10008fb0);
    }
    else if (iVar2 == 2) {
      SelectUnits(&DAT_10009048,0);
      SelSendAndKill(1,&DAT_10008f70,0,0);
      SelSendAndKill(1,&DAT_10008dd8,0,2);
      SelSendAndKill(1,&DAT_10008de0,0,2);
      SelSendAndKill(1,&DAT_10008de8,0,2);
      SelSendAndKill(1,&DAT_10008df0,0,2);
      SelSendAndKill(1,&DAT_10008f00,0xc4,2);
      RemoveGroup(&DAT_10009048,&DAT_10008fb0);
    }
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
    SetTrigg(0x18,0);
    DAT_10008ee8 = 0;
    do {
      ProduceUnitFast(&DAT_10008da8,&DAT_10008f50,&DAT_10009098,6);
      DAT_10008ee8 = DAT_10008ee8 + 1;
    } while (DAT_10008ee8 < 10);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008e00,&DAT_10009098), 0 < iVar2)) {
    SelectUnits(&DAT_10009098,0);
    SelSendTo(1,&DAT_10008e20,0x2b,0);
    SelSendTo(1,&DAT_10009008,0x23,2);
    SelSendTo(1,&DAT_10008f08,0x23,2);
    RemoveGroup(&DAT_10009098,&DAT_10009058);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f08,&DAT_10009058), 0 < iVar2)) {
    SetTrigg(0x1a,0);
    SelectUnits(&DAT_10008fd0,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x1b);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f08,&DAT_10009058), 0 < iVar2)) {
    SetTrigg(0x1b,0);
    SelectUnits(&DAT_10009058,0);
    SelSendTo(1,&DAT_10008d90,0x23,2);
  }
  cVar1 = Trigg(0x1c);
  if ((cVar1 != '\0') && (DAT_10008ee8 == 10)) {
    DAT_10008ee8 = 0;
    SetTrigg(0x18,0);
    SetTrigg(0x1b,0);
    RunTimer(4,0xc80);
    iVar2 = rand();
    iVar2 = iVar2 % 3;
    if (iVar2 == 0) {
      SelectUnits(&DAT_10009058,0);
      SelSendAndKill(1,&DAT_10008f00,0,0);
      RemoveGroup(&DAT_10009058,&DAT_10008fb0);
    }
    else if (iVar2 == 1) {
      SelectUnits(&DAT_10009058,0);
      SelSendAndKill(1,&DAT_10008f68,0,0);
      SelSendAndKill(1,&DAT_10008dc0,0,2);
      SelSendAndKill(1,&DAT_10008dc8,0,2);
      SelSendAndKill(1,&DAT_10008dd0,0,2);
      SelSendAndKill(1,&DAT_10008f00,0xc4,2);
      RemoveGroup(&DAT_10009058,&DAT_10008fb0);
    }
    else if (iVar2 == 2) {
      SelectUnits(&DAT_10009058,0);
      SelSendAndKill(1,&DAT_10008f70,0,0);
      SelSendAndKill(1,&DAT_10008dd8,0,2);
      SelSendAndKill(1,&DAT_10008de0,0,2);
      SelSendAndKill(1,&DAT_10008de8,0,2);
      SelSendAndKill(1,&DAT_10008df0,0,2);
      SelSendAndKill(1,&DAT_10008f00,0xc4,2);
      RemoveGroup(&DAT_10009058,&DAT_10008fb0);
    }
  }
  cVar1 = Trigg(0x1d);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SetTrigg(0x1d,0);
    DAT_10008eec = 0;
    do {
      ProduceUnitFast(&DAT_10008d70,&DAT_10008f50,&DAT_100090a0,6);
      DAT_10008eec = DAT_10008eec + 1;
    } while (DAT_10008eec < 10);
  }
  cVar1 = Trigg(0x1e);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008e08,&DAT_100090a0), 0 < iVar2)) {
    SelectUnits(&DAT_100090a0,0);
    SelSendTo(1,&DAT_10008e18,0x2b,0);
    SelSendTo(1,&DAT_10009070,0x23,2);
    SelSendTo(1,&DAT_10008f08,0x23,2);
    RemoveGroup(&DAT_100090a0,&DAT_10009050);
  }
  cVar1 = Trigg(0x1f);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f08,&DAT_10009050), 0 < iVar2)) {
    SetTrigg(0x1f,0);
    SelectUnits(&DAT_10008fd0,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x20);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f08,&DAT_10009050), 0 < iVar2)) {
    SetTrigg(0x20,0);
    SelectUnits(&DAT_10009050,0);
    SelSendTo(1,&DAT_10008d90,0x23,2);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (DAT_10008eec == 10)) {
    DAT_10008eec = 0;
    SetTrigg(0x1d,0);
    SetTrigg(0x20,0);
    RunTimer(5,0xc80);
    SelectUnits(&DAT_10009050,0);
    SelSendAndKill(1,&DAT_10008f00,0,0);
    RemoveGroup(&DAT_10009050,&DAT_10008fb0);
  }
  cVar1 = Trigg(0x22);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(6), cVar1 != '\0')) {
    SetTrigg(0x22,0);
    DAT_10008ef0 = 0;
    do {
      ProduceUnitFast(&DAT_10008d78,&DAT_10008f50,&DAT_10009080,6);
      DAT_10008ef0 = DAT_10008ef0 + 1;
    } while (DAT_10008ef0 < 10);
  }
  cVar1 = Trigg(0x23);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008e10,&DAT_10009080), 0 < iVar2)) {
    SelectUnits(&DAT_10009080,0);
    SelSendTo(1,&DAT_10008e08,0x2b,0);
    SelSendTo(1,&DAT_10008e18,0x2b,2);
    SelSendTo(1,&DAT_10009070,0x23,2);
    SelSendTo(1,&DAT_10008f08,0x23,2);
    RemoveGroup(&DAT_10009080,&DAT_10009068);
  }
  cVar1 = Trigg(0x24);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f08,&DAT_10009068), 0 < iVar2)) {
    SetTrigg(0x24,0);
    SelectUnits(&DAT_10008fd0,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x25);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f08,&DAT_10009068), 0 < iVar2)) {
    SetTrigg(0x25,0);
    SelectUnits(&DAT_10009068,0);
    SelSendTo(1,&DAT_10008d90,0x23,2);
  }
  cVar1 = Trigg(0x26);
  if ((cVar1 != '\0') && (DAT_10008ef0 == 10)) {
    DAT_10008ef0 = 0;
    SetTrigg(0x22,0);
    SetTrigg(0x25,0);
    RunTimer(6,0xc80);
    iVar2 = rand();
    iVar2 = iVar2 % 3;
    if (iVar2 == 0) {
      SelectUnits(&DAT_10009068,0);
      SelSendAndKill(1,&DAT_10008f00,0,0);
      RemoveGroup(&DAT_10009068,&DAT_10008fb0);
    }
    else if (iVar2 == 1) {
      SelectUnits(&DAT_10009068,0);
      SelSendAndKill(1,&DAT_10008f68,0,0);
      SelSendAndKill(1,&DAT_10008dc0,0,2);
      SelSendAndKill(1,&DAT_10008dc8,0,2);
      SelSendAndKill(1,&DAT_10008dd0,0,2);
      SelSendAndKill(1,&DAT_10008f00,0xc4,2);
      RemoveGroup(&DAT_10009068,&DAT_10008fb0);
    }
    else if (iVar2 == 2) {
      SelectUnits(&DAT_10009068,0);
      SelSendAndKill(1,&DAT_10008f70,0,0);
      SelSendAndKill(1,&DAT_10008dd8,0,2);
      SelSendAndKill(1,&DAT_10008de0,0,2);
      SelSendAndKill(1,&DAT_10008de8,0,2);
      SelSendAndKill(1,&DAT_10008df0,0,2);
      SelSendAndKill(1,&DAT_10008f00,0xc4,2);
      RemoveGroup(&DAT_10009068,&DAT_10008fb0);
    }
  }
  cVar1 = Trigg(0x27);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    SetTrigg(0x27,0);
    DAT_10008f34 = 0;
    do {
      ProduceUnitFast(&DAT_10009010,&DAT_10008fe8,&DAT_10008eb0,6);
      DAT_10008f34 = DAT_10008f34 + 1;
    } while (DAT_10008f34 < 0x19);
    DAT_10008f34 = 0x14;
    SetTrigg(0x2c,0);
    SetTrigg(0x2a,0);
    DAT_10008f38 = 0;
    do {
      ProduceUnitFast(&DAT_10009010,&DAT_100090e8,&DAT_10008d50,6);
      DAT_10008f38 = DAT_10008f38 + 1;
    } while (DAT_10008f38 < 0x19);
  }
  cVar1 = Trigg(0x28);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x27), cVar1 == '\0')) {
    SetTrigg(0x28,0);
    RunTimer(7,4000);
    SetTrigg(0x27,0);
  }
  cVar1 = Trigg(0x29);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d38,&DAT_10008eb0), 0 < iVar2)) {
    SelectUnits(&DAT_10008eb0,0);
    SelSendAndKill(2,&DAT_10008e40,0x14,0);
    SelSendAndKill(2,&DAT_10009100,7,2);
    SelSendAndKill(2,&DAT_10008f40,0x14,2);
    RemoveGroup(&DAT_10008eb0,&DAT_10008fb0);
  }
  cVar1 = Trigg(0x2a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f40,&DAT_10008fb0), 0 < iVar2)) {
    SelectUnits1(2,&DAT_10008fb0,0);
    SelSendAndKill(2,&DAT_10008f00,0x14,0);
    SetTrigg(0x28,0);
  }
  cVar1 = Trigg(0x2b);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d38,&DAT_10008d50), 0 < iVar2)) {
    SelectUnits(&DAT_10008d50,0);
    SelSendAndKill(2,&DAT_10008e40,0x14,0);
    SelSendAndKill(2,&DAT_10009100,7,2);
    SelSendAndKill(2,&DAT_10008f40,0x14,2);
    RemoveGroup(&DAT_10008d50,&DAT_10008e60);
  }
  cVar1 = Trigg(0x2c);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008f40,&DAT_10008e60), 0 < iVar2)) {
    SelectUnits1(2,&DAT_10008e60,0);
    SelSendAndKill(2,&DAT_10008f00,0x14,0);
  }
  cVar1 = Trigg(0x32);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d88,&DAT_10008e58), iVar2 == 3)) &&
     (DAT_10009090 == 1)) {
    SetTrigg(0x32,0);
    SelectUnits(&DAT_10009040,0);
    SelOpenGates(5);
  }
  cVar1 = Trigg(0x33);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008e70,&DAT_10008e58), iVar2 == 3)) &&
     (DAT_10009090 == 1)) {
    SetTrigg(0x33,0);
    SelectUnits(&DAT_10008e58,0);
    SelChangeNation(0,5);
    RunTimer(0x14,600);
    SetTrigg(0x36,0);
  }
  cVar1 = Trigg(0x35);
  if ((cVar1 != '\0') && (cVar1 = TimerDoneFirst(0x14), cVar1 != '\0')) {
    SetTrigg(0x35,0);
    iVar2 = GetTotalAmount1(&DAT_10008fa8,5);
    DAT_10009018 = iVar2 * 10;
  }
  cVar1 = Trigg(0x36);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x35), cVar1 == '\0')) {
    SetTrigg(0x36,0);
    SetTrigg(0x35,0);
    SelectUnits(&DAT_10008e58,0);
    SelChangeNation(5,0);
    DAT_10008f28 = 0;
    if (0 < DAT_10009018) {
      do {
        ProduceUnitFast(&DAT_10008d30,&DAT_10008db8,&DAT_10008f60,2);
        DAT_10008f28 = DAT_10008f28 + 1;
      } while (DAT_10008f28 < DAT_10009018);
    }
    DAT_10008f28 = 10;
    DAT_10008f2c = 0;
    if (0 < DAT_10009018) {
      do {
        ProduceUnitFast(&DAT_10008e28,&DAT_10008fa0,&DAT_10008d58,2);
        DAT_10008f2c = DAT_10008f2c + 1;
      } while (DAT_10008f2c < DAT_10009018);
    }
    SetTrigg(0x35,0);
    SetTrigg(0x39,0);
    DAT_10009090 = 0;
    RunTimer(0x1b,8000);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008e48,&DAT_10008d58), 0 < iVar2)) {
    SelectUnits(&DAT_10008d58,0);
    SelSendTo(5,&DAT_10008e38,0x40,0);
    SelSendTo(5,&DAT_10008d88,0x50,2);
    SelSendTo(5,&DAT_10008d40,0x50,2);
    RemoveGroup(&DAT_10008d58,&DAT_10008ea8);
  }
  cVar1 = Trigg(0x38);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d60,&DAT_10008f60), 0 < iVar2)) {
    SelectUnits(&DAT_10008f60,0);
    SelSendTo(5,&DAT_10008e38,0x40,0);
    SelSendTo(5,&DAT_10008d88,0x50,2);
    SelSendTo(5,&DAT_10008d40,0x50,2);
    RemoveGroup(&DAT_10008f60,&DAT_100090e0);
  }
  cVar1 = Trigg(0x39);
  if ((((cVar1 != '\0') && (iVar2 = GetResource(0,1), 5000 < iVar2)) && (DAT_10009090 == 0)) &&
     (cVar1 = TimerDone(0x1b), cVar1 != '\0')) {
    SetTrigg(0x39,0);
    ShowPage("#PAGE1");
    SetLightSpot(&DAT_10008d88,0,6);
    SetTrigg(0x3a,0);
    SetTrigg(0x36,0);
  }
  cVar1 = Trigg(0x3a);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x39), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount1(&DAT_10008f00,&DAT_10008e58), iVar2 == 3)) {
    SetTrigg(0x3a,0);
    RunTimer(0x19,0xfa);
    SetTrigg(0x3b,0);
    SetTrigg(0x3d,0);
  }
  cVar1 = Trigg(0x3b);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0x19), cVar1 != '\0')) &&
     ((iVar2 = GetUnitsAmount1(&DAT_10008f00,&DAT_10008e58), iVar2 == 3 &&
      (iVar2 = GetResource(0,1), 5000 < iVar2)))) {
    SetTrigg(0x3b,0);
    ShowPage("#PAGE2");
    DAT_10009090 = 1;
    SelectUnits(&DAT_10008e58,0);
    SelChangeNation(0,5);
    AddResource(0,1,-5000);
    RunTimer(0x1a,1000);
    SetTrigg(0x60,0);
  }
  cVar1 = Trigg(0x3c);
  if ((cVar1 != '\0') && (cVar1 = TimerDoneFirst(0x1a), cVar1 != '\0')) {
    ShowPage("#PAGE3");
    SelectUnits(&DAT_10008e58,0);
    SelChangeNation(5,0);
    SetTrigg(0x33,0);
  }
  cVar1 = Trigg(0x3d);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d40,&DAT_100090e0), 0x19 < iVar2)) &&
     (iVar2 = GetUnitsAmount1(&DAT_10008d40,&DAT_10008ea8), 0x19 < iVar2)) {
    SetTrigg(0x3d,0);
    SetStartPoint(&DAT_10008d40);
    iVar2 = AskMultilineQuestion(9,"#PAGE4",0,"Qpru1_1|Qpru1_2|Qpru1_3");
    if (iVar2 == 0) {
      SelectUnits(&DAT_100090e0,0);
      SelSendAndKill(5,&DAT_10008ed0,0x96,0);
      SelSendAndKill(5,&DAT_10009100,0x80,2);
      SelectUnits(&DAT_10008ea8,0);
      SelSendAndKill(5,&DAT_10008ed0,0x96,0);
      SelSendAndKill(5,&DAT_10009100,0x80,2);
      RemoveGroup(&DAT_10008ea8,&DAT_10008f58);
      RemoveGroup(&DAT_100090e0,&DAT_10008f58);
    }
    else if (iVar2 == 1) {
      SelectUnits(&DAT_100090e0,0);
      SelSendAndKill(5,&DAT_10008d80,0x80,0);
      SelectUnits(&DAT_10008ea8,0);
      SelSendAndKill(5,&DAT_10009100,0x80,0);
      RemoveGroup(&DAT_10008ea8,&DAT_10008f58);
      RemoveGroup(&DAT_100090e0,&DAT_10008f58);
    }
    else if (iVar2 == 2) {
      SelectUnits(&DAT_100090e0,0);
      SelSendAndKill(5,&DAT_10009020,0x80,0);
      SelectUnits(&DAT_10008ea8,0);
      SelSendAndKill(5,&DAT_10008ed0,0x80,0);
      RemoveGroup(&DAT_10008ea8,&DAT_10008f58);
      RemoveGroup(&DAT_100090e0,&DAT_10008f58);
    }
  }
  cVar1 = Trigg(0x3e);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0xc), pcVar3 = (void*)&GetDiff, cVar1 != '\0')) &&
     (iVar2 = GetDiff(0), 0 < iVar2)) {
    SetTrigg(0x3e,0);
    InitialUpgrade("Gkazarmav1","Kirasir(au)ATTACK");
    InitialUpgrade("Gkazarmav1","Kirasir(au)SHIELD");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)ATTACK");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)SHIELD");
    InitialUpgrade(DAT_1000832c,"AKA31SA");
  }
  cVar1 = Trigg(0x3f);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0xd), cVar1 != '\0')) &&
     (iVar2 = GetDiff(0), 0 < iVar2)) {
    SetTrigg(0x3f,0);
    InitialUpgrade("Gkazarmav1","Kirasir(au)ATTACK3");
    InitialUpgrade("Gkazarmav1","Kirasir(au)SHIELD3");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)ATTACK3");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)SHIELD3");
    InitialUpgrade("Gkazarmav1","AKA31AU");
    InitialUpgrade(DAT_1000832c,"AKA33SA");
  }
  cVar1 = Trigg(0x40);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0xe), cVar1 != '\0')) &&
     (iVar2 = GetDiff(0), 0 < iVar2)) {
    SetTrigg(0x40,0);
    InitialUpgrade("Gkazarmav1","Kirasir(au)ATTACK4");
    InitialUpgrade("Gkazarmav1","Kirasir(au)SHIELD4");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)ATTACK4");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)SHIELD4");
  }
  cVar1 = Trigg(0x41);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0xf), cVar1 != '\0')) &&
     (iVar2 = GetDiff(0), 0 < iVar2)) {
    SetTrigg(0x41,0);
    InitialUpgrade("Gkazarmav1","Kirasir(au)ATTACK5");
    InitialUpgrade("Gkazarmav1","Kirasir(au)SHIELD5");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)ATTACK5");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)SHIELD5");
  }
  cVar1 = Trigg(0x42);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0x10), cVar1 != '\0')) &&
     (iVar2 = GetDiff(0), 0 < iVar2)) {
    SetTrigg(0x42,0);
    InitialUpgrade("Gkazarmav1","Kirasir(au)ATTACK6");
    InitialUpgrade("Gkazarmav1","Kirasir(au)SHIELD6");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)ATTACK6");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)SHIELD6");
  }
  cVar1 = Trigg(0x43);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0x11), cVar1 != '\0')) &&
     (iVar2 = GetDiff(0), 0 < iVar2)) {
    SetTrigg(0x43,0);
    InitialUpgrade("Gkazarmav1","Kirasir(au)ATTACK7");
    InitialUpgrade("Gkazarmav1","Kirasir(au)SHIELD7");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)ATTACK7");
    InitialUpgrade("Gkazarmav1","Pandur_Avstria(au)SHIELD7");
    InitialUpgrade("Gkazarmav1","AKA33AU");
  }
  cVar1 = Trigg(0x44);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0x12), cVar1 != '\0')) &&
     (iVar2 = GetDiff(0), 0 < iVar2)) {
    SetTrigg(0x44,0);
    InitialUpgrade("Gkazarmav1","AKA12AU");
    InitialUpgrade("Gkazarmav1","AKA13AU");
    InitialUpgrade("Gkazarmav1","KUZ05AU");
  }
  cVar1 = Trigg(0x45);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0x13), cVar1 != '\0')) &&
     (iVar2 = GetDiff(0), 0 < iVar2)) {
    SetTrigg(0x45,0);
    InitialUpgrade("Gkazarmav1","AKA14AU");
    InitialUpgrade("Gkazarmav1","AKA15AU");
    InitialUpgrade("Gkazarmav1","KUZ06AU");
    InitialUpgrade("Gkazarmav1","AKA34AU");
  }
  cVar1 = Trigg(0x5e);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10009108,0), 8 < iVar2)) {
    SetTrigg(0x5e,0);
    SelectUnits(&DAT_100090b0,0);
    SelSendAndKill(1,&DAT_10009108,0x1e,0);
  }
  cVar1 = Trigg(0x5f);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008e98,0), 4 < iVar2)) {
    AttackZoneByArtillery(&DAT_10008eb8,&DAT_10008e98,0);
    SelectUnits1(1,&DAT_10008eb8,0);
    SetStandGround(1,1);
  }
  cVar1 = Trigg(0x60);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008d88,&DAT_10008e58), iVar2 == 3)) &&
     (DAT_10009090 == 1)) {
    SetTrigg(0x60,0);
    ShowPage("#PAGE8");
  }
  cVar1 = Trigg(0x61);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008e58), iVar2 < 3)) {
    SetTrigg(0x61,0);
    SelectUnits(&DAT_10009040,0);
    SelCloseGates(5);
    SetTrigg(0x39,0);
    SetTrigg(0x3d,0);
    SetTrigg(0x3c,0);
    SetTrigg(0x3b,0);
  }
  cVar1 = Trigg(0x62);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsByNation(&DAT_100090f0,1), 0 < iVar2 ||
      (iVar2 = GetUnitsByNation(&DAT_100090f0,2), 0 < iVar2)))) {
    SelectUnits1(1,&DAT_100090f0,0);
    SelDie(1);
    SelectUnits1(2,&DAT_100090f0,0);
    SelDie(2);
  }
  cVar1 = Trigg(99);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10009000,1), iVar2 == 0)) {
    SetTrigg(99,0);
    ShowPage("#PAGE9");
    ShowVictory();
  }
  cVar1 = Trigg(100);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetTotalAmount0(&DAT_100090f0), iVar2 < 3 ||
      (iVar2 = GetTotalAmount0(&DAT_10008ff0), iVar2 == 0)))) {
    SetTrigg(100,0);
    iVar2 = GetTotalAmount0(&DAT_10009060);
    if (iVar2 == 0) {
      ShowPage("#PAGE10");
    }
    iVar2 = GetTotalAmount0(&DAT_10008f90);
    if (iVar2 == 0) {
      ShowPage("#PAGE11");
    }
    iVar2 = GetTotalAmount0(&DAT_10008fc0);
    if (iVar2 == 0) {
      ShowPage("#PAGE12");
    }
    iVar2 = GetTotalAmount0(&DAT_10008ff0);
    if (iVar2 == 0) {
      ShowPage("#PAGE13");
    }
    LooseGame();
  }
  cVar1 = Trigg(0x2e);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008eb8,0), 0 < iVar2)) {
    SelectUnits1(0,&DAT_10008eb8,0);
    SelDie(0);
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
