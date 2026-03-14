#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1000a198[] = "Zfl3";
char DAT_1000a1a0[] = "Zfl2";
char DAT_1000a1a8[] = "Zfl1";
char DAT_1000a2b0[] = "Zc4";
char DAT_1000a2b4[] = "Zc3";
char DAT_1000a2b8[] = "Zc2";
char DAT_1000a2bc[] = "Zc1";
char DAT_1000a3a0[] = "Gall";
char DAT_1000a4a0[] = "Gfl";
long long DAT_1000ad50 = 0;
long long DAT_1000ad58 = 0;
long long DAT_1000ad60 = 0;
long long DAT_1000ad68 = 0;
long long DAT_1000ad70 = 0;
long long DAT_1000ad78 = 0;
long long DAT_1000ad80 = 0;
long long DAT_1000ad88 = 0;
long long DAT_1000ad90 = 0;
long long DAT_1000ad98 = 0;
long long DAT_1000ada0 = 0;
long long DAT_1000ada4 = 0;
long long DAT_1000ada8 = 0;
long long DAT_1000adb0 = 0;
long long DAT_1000adb8 = 0;
long long DAT_1000adc0 = 0;
long long DAT_1000adc4 = 0;
long long DAT_1000adc8 = 0;
long long DAT_1000add0 = 0;
long long DAT_1000add8 = 0;
long long DAT_1000ade0 = 0;
long long DAT_1000ade8 = 0;
int DAT_1000adf0 = 0;
long long DAT_1000adf8 = 0;
long long DAT_1000ae00 = 0;
long long DAT_1000ae08 = 0;
long long DAT_1000ae10 = 0;
long long DAT_1000ae18 = 0;
long long DAT_1000ae20 = 0;
long long DAT_1000ae28 = 0;
long long DAT_1000ae30 = 0;
long long DAT_1000ae38 = 0;
long long DAT_1000ae40 = 0;
long long DAT_1000ae48 = 0;
long long DAT_1000ae50 = 0;
long long DAT_1000ae58 = 0;
long long DAT_1000ae60 = 0;
long long DAT_1000ae68 = 0;
long long DAT_1000ae70 = 0;
long long DAT_1000ae78 = 0;
long long DAT_1000ae80 = 0;
long long DAT_1000ae90 = 0;
long long DAT_1000ae98 = 0;
long long DAT_1000aea0 = 0;
long long DAT_1000aea8 = 0;
long long DAT_1000aeb0 = 0;
long long DAT_1000aec0 = 0;
long long DAT_1000aec8 = 0;
long long DAT_1000aed0 = 0;
long long DAT_1000aed8 = 0;
long long DAT_1000aee0 = 0;
long long DAT_1000aee8 = 0;
long long DAT_1000aef0 = 0;
long long DAT_1000aef8 = 0;
long long DAT_1000af00 = 0;
long long DAT_1000af10 = 0;
long long DAT_1000af18 = 0;
long long DAT_1000af20 = 0;
long long DAT_1000af28 = 0;
int DAT_1000af30 = 0;
int DAT_1000af34 = 0;
int DAT_1000af38 = 0;
long long DAT_1000af40 = 0;
long long DAT_1000af48 = 0;
long long DAT_1000af50 = 0;
long long DAT_1000af58 = 0;
long long DAT_1000af60 = 0;
long long DAT_1000af68 = 0;
long long DAT_1000af70 = 0;
long long DAT_1000af78 = 0;
long long DAT_1000af80 = 0;
long long DAT_1000af88 = 0;
long long DAT_1000af90 = 0;
long long DAT_1000af98 = 0;
long long DAT_1000afa0 = 0;
long long DAT_1000afa8 = 0;
long long DAT_1000afb0 = 0;
long long DAT_1000afb8 = 0;
long long DAT_1000afc0 = 0;
long long DAT_1000afc8 = 0;
long long DAT_1000afd0 = 0;
long long DAT_1000afd8 = 0;
long long DAT_1000afe0 = 0;
long long DAT_1000afe8 = 0;
long long DAT_1000aff0 = 0;
long long DAT_1000aff8 = 0;
long long DAT_1000b000 = 0;
long long DAT_1000b008 = 0;
long long DAT_1000b010 = 0;
long long DAT_1000b018 = 0;
long long DAT_1000b020 = 0;
long long DAT_1000b028 = 0;
long long DAT_1000b030 = 0;
long long DAT_1000b038 = 0;
long long DAT_1000b040 = 0;
long long DAT_1000b048 = 0;
long long DAT_1000b050 = 0;
long long DAT_1000b058 = 0;
long long DAT_1000b060 = 0;
long long DAT_1000b068 = 0;
long long DAT_1000b070 = 0;
long long DAT_1000b078 = 0;
long long DAT_1000b080 = 0;
long long DAT_1000b088 = 0;
long long DAT_1000b090 = 0;
long long DAT_1000b098 = 0;
long long DAT_1000b0a0 = 0;
long long DAT_1000b0a8 = 0;
long long DAT_1000b0b0 = 0;
long long DAT_1000b0b8 = 0;
long long DAT_1000b0c0 = 0;
long long DAT_1000b0c8 = 0;
long long DAT_1000b0d0 = 0;
long long DAT_1000b0d8 = 0;
long long DAT_1000b0e0 = 0;
long long DAT_1000b0e8 = 0;
long long DAT_1000b0f0 = 0;
long long DAT_1000b0f8 = 0;
long long DAT_1000b100 = 0;
long long DAT_1000b108 = 0;
long long DAT_1000b110 = 0;
long long DAT_1000b118 = 0;
long long DAT_1000b120 = 0;
long long DAT_1000b128 = 0;
long long DAT_1000b130 = 0;
long long DAT_1000b138 = 0;
long long DAT_1000b140 = 0;
long long DAT_1000b148 = 0;
long long DAT_1000b150 = 0;
long long DAT_1000b158 = 0;
long long DAT_1000b160 = 0;
long long DAT_1000b168 = 0;
long long DAT_1000b170 = 0;
long long DAT_1000b178 = 0;
long long DAT_1000b180 = 0;
long long DAT_1000b188 = 0;
long long DAT_1000b190 = 0;
long long DAT_1000b198 = 0;
long long DAT_1000b1a0 = 0;
long long DAT_1000b1a8 = 0;
long long DAT_1000b1b0 = 0;
long long DAT_1000b1b8 = 0;
long long DAT_1000b1c0 = 0;
long long DAT_1000b1c8 = 0;
long long DAT_1000b1d0 = 0;
long long DAT_1000b1d8 = 0;
long long DAT_1000b1e0 = 0;
int DAT_1000ada0_ovl = 0;
int DAT_1000ada4_ovl = 0;
int DAT_1000adc0_ovl = 0;
int DAT_1000adc4_ovl = 0;

void OnInit(void)

{
                    
  RegisterUnits(&DAT_1000adf8,"Gpar1");
  RegisterUnits(&DAT_1000ae00,"Gpar2");
  RegisterUnits(&DAT_1000ae08,"Gpar3");
  RegisterUnits(&DAT_1000af18,"Gordr");
  RegisterUnits(&DAT_1000aeb0,"Gorkir1");
  RegisterUnits(&DAT_1000aea8,"Gorkir2");
  RegisterUnits(&DAT_1000b040,"Glodka");
  RegisterUnits(&DAT_1000b1e0,"Glodkas");
  RegisterUnits(&DAT_1000afc8,"Gorgren1");
  RegisterUnits(&DAT_1000afb8,"Gorgren2");
  RegisterUnits(&DAT_1000afb0,"Gorgren3");
  RegisterUnits(&DAT_1000afc0,"Gorgren4");
  RegisterUnits(&DAT_1000b088,"Gorcan1");
  RegisterUnits(&DAT_1000b080,"Gorcan2");
  RegisterUnits(&DAT_1000b078,"Gorcan3");
  RegisterUnits(&DAT_1000b070,"Gorcan4");
  RegisterUnits(&DAT_1000af20,"Gkomandirgren");
  RegisterUnits(&DAT_1000ad78,"Gkomandircav");
  RegisterUnits(&DAT_1000b0a0,"Gkomandirk");
  RegisterUnits(&DAT_1000b068,"Gkomandirk1");
  RegisterUnits(&DAT_1000b038,DAT_1000a4a0);
  RegisterUnits(&DAT_1000af78,"Gmush1");
  RegisterUnits(&DAT_1000af70,"Gmush2");
  RegisterUnits(&DAT_1000af88,"Gmush3");
  RegisterUnits(&DAT_1000af80,"Gmush4");
  RegisterUnits(&DAT_1000af90,"Gcans1");
  RegisterUnits(&DAT_1000afa0,"Gcans2");
  RegisterUnits(&DAT_1000af98,"Gcans3");
  RegisterUnits(&DAT_1000afa8,"Gcans4");
  RegisterUnits(&DAT_1000b0e8,"Gpandur1");
  RegisterUnits(&DAT_1000b0f8,"Gpandur2");
  RegisterUnits(&DAT_1000b0f0,"Gpandur3");
  RegisterUnits(&DAT_1000b0e0,"Gpandur4");
  RegisterUnits(&DAT_1000add0,"Gkirs1");
  RegisterUnits(&DAT_1000ade0,"Gkirs2");
  RegisterUnits(&DAT_1000add8,"Gkirs3");
  RegisterUnits(&DAT_1000ade8,"Gkirs4");
  RegisterUnits(&DAT_1000b1b0,"Ggrs1");
  RegisterUnits(&DAT_1000b1b8,"Ggrs2");
  RegisterUnits(&DAT_1000b1c0,"Ggrs3");
  RegisterUnits(&DAT_1000b1c8,"Ggrs4");
  RegisterUnits(&DAT_1000afd8,"Ggrens1");
  RegisterUnits(&DAT_1000afd0,"Ggrens2");
  RegisterUnits(&DAT_1000af48,"Gpiks1");
  RegisterUnits(&DAT_1000af60,"Gpiks2");
  RegisterUnits(&DAT_1000af58,"Gpiks3");
  RegisterUnits(&DAT_1000adc8,"Gkres");
  RegisterUnits(&DAT_1000b1d8,"Gvorota");
  RegisterUnits(&DAT_1000b1d0,"Gzdan");
  RegisterUnits(&DAT_1000b058,"Ggaub");
  RegisterUnits(&DAT_1000b098,DAT_1000a3a0);
  RegisterUnits(&DAT_1000b0a8,"Gallor");
  RegisterUnits(&DAT_1000af40,"Gallk");
  RegisterZone(&DAT_1000ae10,"Zpar1");
  RegisterZone(&DAT_1000ae18,"Zpar2");
  RegisterZone(&DAT_1000ae20,"Zpar3");
  RegisterZone(&DAT_1000b048,"Zpar1_1");
  RegisterZone(&DAT_1000b050,"Zpar2_2");
  RegisterZone(&DAT_1000b060,"Zpar3_3");
  RegisterZone(&DAT_1000af68,"Zvmosta");
  RegisterZone(&DAT_1000b0d0,"Zpmosta");
  RegisterZone(&DAT_1000b030,"Zpvis");
  RegisterZone(&DAT_1000b090,"Zpvis1");
  RegisterZone(&DAT_1000ad80,"Zgren1");
  RegisterZone(&DAT_1000ad90,"Zgren2");
  RegisterZone(&DAT_1000ad98,"Zgren3");
  RegisterZone(&DAT_1000ad88,"Zgren4");
  RegisterZone(&DAT_1000aee8,"Zgren1_1");
  RegisterZone(&DAT_1000aef8,"Zgren2_2");
  RegisterZone(&DAT_1000ae98,"Zgren3_3");
  RegisterZone(&DAT_1000aec0,"Zgren4_4");
  RegisterZone(&DAT_1000aef0,"Zgren11_1");
  RegisterZone(&DAT_1000af00,"Zgren12_2");
  RegisterZone(&DAT_1000af10,"Zgren13_3");
  RegisterZone(&DAT_1000af28,"Zgren14_4");
  RegisterZone(&DAT_1000b168,DAT_1000a2bc);
  RegisterZone(&DAT_1000b170,DAT_1000a2b8);
  RegisterZone(&DAT_1000b178,DAT_1000a2b4);
  RegisterZone(&DAT_1000b180,DAT_1000a2b0);
  RegisterZone(&DAT_1000b0d8,"Zc11_1");
  RegisterZone(&DAT_1000b100,"Zc12_2");
  RegisterZone(&DAT_1000b130,"Zc13_3");
  RegisterZone(&DAT_1000b160,"Zc14_4");
  RegisterZone(&DAT_1000afe8,"Zc1_1");
  RegisterZone(&DAT_1000b000,"Zc2_2");
  RegisterZone(&DAT_1000b020,"Zc3_3");
  RegisterZone(&DAT_1000b028,"Zc4_4");
  RegisterZone(&DAT_1000adb8,"Zkomandircav");
  RegisterZone(&DAT_1000ad50,"Zforkomandirgren1");
  RegisterZone(&DAT_1000aea0,"Zforkomandircav1");
  RegisterZone(&DAT_1000ada8,"Zkomandirgren");
  RegisterZone(&DAT_1000adb0,"Zforkomandirgren");
  RegisterZone(&DAT_1000ad68,"Zforkomandirgren2");
  RegisterZone(&DAT_1000b008,"Zorkir1");
  RegisterZone(&DAT_1000b010,"Zorkir2");
  RegisterZone(&DAT_1000af50,"Zordr");
  RegisterZone(&DAT_1000b190,"Zbazcav");
  RegisterZone(&DAT_1000aec8,"Zatgren1");
  RegisterZone(&DAT_1000aed8,"Zatgren2");
  RegisterZone(&DAT_1000aee0,"Zatgren3");
  RegisterZone(&DAT_1000aed0,"Zatgren4");
  RegisterZone(&DAT_1000ad58,DAT_1000a1a8);
  RegisterZone(&DAT_1000ad60,DAT_1000a1a0);
  RegisterZone(&DAT_1000ad70,DAT_1000a198);
  RegisterZone(&DAT_1000ae58,"Zform1_1");
  RegisterZone(&DAT_1000ae50,"Zform1_2");
  RegisterZone(&DAT_1000ae60,"Zform2_1");
  RegisterZone(&DAT_1000ae68,"Zform2_2");
  RegisterZone(&DAT_1000ae28,"Zform3_1");
  RegisterZone(&DAT_1000ae30,"Zform3_2");
  RegisterZone(&DAT_1000ae38,"Zform4_1");
  RegisterZone(&DAT_1000ae40,"Zform4_2");
  RegisterZone(&DAT_1000ae48,"Zform4_3");
  RegisterZone(&DAT_1000b0c8,"Zformz1");
  RegisterZone(&DAT_1000b0b0,"Zformz2");
  RegisterZone(&DAT_1000b0b8,"Zformz3");
  RegisterZone(&DAT_1000b0c0,"Zformz4");
  RegisterZone(&DAT_1000b120,"Zforpz1");
  RegisterZone(&DAT_1000b128,"Zforpz2");
  RegisterZone(&DAT_1000b138,"Zforpz3");
  RegisterZone(&DAT_1000b140,"Zforpz4");
  RegisterZone(&DAT_1000b108,"Zatydr1");
  RegisterZone(&DAT_1000b110,"Zatydr2");
  RegisterZone(&DAT_1000b118,"Zatydr3");
  RegisterZone(&DAT_1000b148,"Zatydr4");
  RegisterZone(&DAT_1000b150,"Zatydr5");
  RegisterZone(&DAT_1000b188,"Zforpand1");
  RegisterZone(&DAT_1000b198,"Zforpand2");
  RegisterZone(&DAT_1000b1a0,"Zforpand3");
  RegisterZone(&DAT_1000b1a8,"Zforpand4");
  RegisterZone(&DAT_1000ae70,"Zproriv1");
  RegisterZone(&DAT_1000ae80,"Zproriv2");
  RegisterZone(&DAT_1000ae78,"Zproriv3");
  RegisterZone(&DAT_1000afe0,"Zrog1");
  RegisterZone(&DAT_1000aff0,"Zrog2");
  RegisterZone(&DAT_1000aff8,"Zrog3");
  RegisterDynGroup(&DAT_1000b018);
  RegisterUnitType(&DAT_1000ae90,"Pushka(GE)");
  RegisterFormation(&DAT_1000b158,"#LINE4");
  ChangeFriends(0,0x11);
  SetPlayerName(1,"AUSTRIANS");
  SetPlayerName(4,"PRUSSIA");
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  int iVar4;
  int iVar5;
  void *pcVar6;
  void *pcVar7;
  int *puVar8;
  
                    
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
    DAT_1000af30 = 0;
    DAT_1000af34 = 0;
    DAT_1000af38 = 0;
    DAT_1000adc0_ovl = 0;
    DAT_1000ada0_ovl = 0;
    DAT_1000adc4_ovl = 0;
    DAT_1000ada4_ovl = 0;
    DAT_1000adf0 = 0;
    SetTrigg(10,0);
    SetTrigg(0x11,0);
    RunTimer(0x11,400);
    RunTimer(0x12,400);
    RunTimer(0x19,400);
    RunTimer(0xf,300);
    RunTimer(0x10,300);
    RunTimer(0x1f,300);
    SelectUnits(&DAT_1000b1d8,0);
    SelOpenGates(1);
    ShowPage("#PAGE11");
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK3");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK4");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK5");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD3");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD4");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD5");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD3");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD4");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD5");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD6");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD7");
      InitialUpgrade("Gpandur1","Mushketer(au)SHIELD");
      InitialUpgrade("Gpandur1","Mushketer(au)SHIELD3");
      InitialUpgrade("Gpandur1","Mushketer(au)SHIELD4");
      InitialUpgrade("Gpandur1","Mushketer(au)SHIELD5");
      InitialUpgrade("Gpandur1","Mushketer(au)SHIELD6");
      InitialUpgrade("Gpandur1","Mushketer(au)SHIELD7");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK3");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK4");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK5");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK6");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK7");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD3");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD4");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD5");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD6");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD7");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK3");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD3");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD4");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD3");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD4");
      CreateObject0(&DAT_1000b018,&DAT_1000b158,&DAT_1000ae90,0,&DAT_1000afe0,0xb4);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK3");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK4");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK5");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK6");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK7");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD3");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD4");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD5");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD6");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD7");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK3");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD3");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD4");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD5");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK5");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK6");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD5");
      InitialUpgrade("Gpandur1","Pandur_Avstria(au)SHIELD");
      CreateObject0(&DAT_1000b018,&DAT_1000b158,&DAT_1000ae90,0,&DAT_1000aff0,0xb4);
      CreateObject0(&DAT_1000b018,&DAT_1000b158,&DAT_1000ae90,0,&DAT_1000afe0,0xb4);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK3");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK4");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK5");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK6");
      InitialUpgrade("Gorgren1","Grenader(GE)ATTACK7");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD3");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD4");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD5");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD6");
      InitialUpgrade("Gorgren1","Grenader(GE)SHIELD7");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK3");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD3");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD4");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD5");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK5");
      InitialUpgrade("Gorgren1","Kirasir(GE)ATTACK6");
      InitialUpgrade("Gorgren1","Kirasir(GE)SHIELD5");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)ATTACK");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)ATTACK3");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)ATTACK4");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)ATTACK5");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)ATTACK6");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)SHIELD");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)SHIELD3");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)SHIELD4");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)SHIELD5");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)SHIELD6");
      InitialUpgrade("Gkomandirk1","Pik_evro_rus(GE)SHIELD7");
      InitialUpgrade("Gkomandirk1","Mushketer_PR(GE)ATTACK");
      InitialUpgrade("Gkomandirk1","Mushketer_PR(GE)ATTACK3");
      InitialUpgrade("Gkomandirk1","Mushketer_PR(GE)ATTACK4");
      CreateObject0(&DAT_1000b018,&DAT_1000b158,&DAT_1000ae90,0,&DAT_1000aff0,0xb4);
      CreateObject0(&DAT_1000b018,&DAT_1000b158,&DAT_1000ae90,0,&DAT_1000afe0,0xb4);
      CreateObject0(&DAT_1000b018,&DAT_1000b158,&DAT_1000ae90,0,&DAT_1000aff8,0xb4);
    }
    SetLightSpot(&DAT_1000adb8,3,1);
    SetLightSpot(&DAT_1000ada8,3,2);
    SetLightSpot(&DAT_1000ad50,3,3);
    SetLightSpot(&DAT_1000ad68,3,4);
    SetLightSpot(&DAT_1000aea0,3,5);
    SetLightSpot(&DAT_1000ad58,3,6);
    SetLightSpot(&DAT_1000ad60,3,7);
    SetLightSpot(&DAT_1000ad70,3,8);
  }
  cVar1 = Trigg(10);
  if (cVar1 != '\0') {
    SetTrigg(10,0);
    SelectUnits(&DAT_1000adf8,0);
    SelSendAndKill(4,&DAT_1000ae10,0x50,0);
    SelectUnits(&DAT_1000ae00,0);
    SelSendAndKill(4,&DAT_1000ae18,0x50,0);
    SelectUnits(&DAT_1000ae08,0);
    SelSendAndKill(4,&DAT_1000ae20,0x50,0);
    SelectUnits(&DAT_1000ad78,0);
    SelSendAndKill(4,&DAT_1000b190,0x40,0);
    RunTimer(10,400);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(10), cVar1 != '\0')) {
    SetTrigg(0xb,0);
    SelectUnits(&DAT_1000af18,0);
    SelectUnits(&DAT_1000adf8,1);
    SendUnitsToTransport(4);
    SelectUnits(&DAT_1000aeb0,0);
    SelectUnits(&DAT_1000ae00,1);
    SendUnitsToTransport(4);
    SelectUnits(&DAT_1000aea8,0);
    SelectUnits(&DAT_1000ae08,1);
    SendUnitsToTransport(4);
    RunTimer(0xb,0x4e2);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xb), cVar1 != '\0')) {
    SetTrigg(0xc,0);
    SelectUnits(&DAT_1000adf8,0);
    SelSendTo(4,&DAT_1000b048,200,0);
    SelectUnits(&DAT_1000ae00,0);
    SelSendTo(4,&DAT_1000b050,200,0);
    SelectUnits(&DAT_1000ae08,0);
    SelSendTo(4,&DAT_1000b060,200,0);
    RunTimer(0xc,100);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xc), cVar1 != '\0')) {
    SelectUnits(&DAT_1000adf8,0);
    cVar1 = CheckLeaveAbility(4);
    if (cVar1 == '\x01') {
      PushAllUnitsAway(4);
      RunTimer(0xd,0x41a);
      SetTrigg(0xd,0);
    }
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xc), cVar1 != '\0')) {
    SelectUnits(&DAT_1000ae00,0);
    cVar1 = CheckLeaveAbility(4);
    if (cVar1 == '\x01') {
      PushAllUnitsAway(4);
      SetTrigg(0xe,0);
    }
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xc), cVar1 != '\0')) {
    SelectUnits(&DAT_1000ae08,0);
    cVar1 = CheckLeaveAbility(4);
    if (cVar1 == '\x01') {
      PushAllUnitsAway(4);
      SetTrigg(0xf,0);
    }
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xd), cVar1 != '\0')) {
    SetTrigg(0x10,0);
    SelectUnits(&DAT_1000aeb0,0);
    SelectUnits(&DAT_1000aea8,1);
    SelectUnits(&DAT_1000b040,1);
    SelSendAndKill(4,&DAT_1000b030,0xb0,0);
    SelSendAndKill(4,&DAT_1000af68,0x80,2);
    SelSendAndKill(4,&DAT_1000b0d0,0x69,2);
    SelSendAndKill(4,&DAT_1000aec8,0x46,2);
    SelSendAndKill(4,&DAT_1000ae78,0x46,2);
    SelSendAndKill(4,&DAT_1000ae70,0x46,2);
    SelSendAndKill(4,&DAT_1000aed0,0x46,2);
    SelectUnits(&DAT_1000af18,0);
    SelSendTo(4,&DAT_1000b090,0xb0,0);
    SelSendAndKill(4,&DAT_1000af68,0x80,2);
    SelSendAndKill(4,&DAT_1000b0d0,0x69,2);
    SelSendAndKill(4,&DAT_1000aec8,0x46,2);
    SelSendAndKill(4,&DAT_1000ae78,0x46,2);
    SelSendAndKill(4,&DAT_1000ae70,0x46,2);
    SelSendAndKill(4,&DAT_1000aed0,0x46,2);
    SelectUnits(&DAT_1000b1b0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000af68,0x32,0);
    SelectUnits(&DAT_1000add0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000af68,0x32,0);
    SelectUnits(&DAT_1000b1c0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000b0d0,0xd7,0);
    SelectUnits(&DAT_1000add8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000b0d0,0xd7,0);
  }
  cVar1 = Trigg(0x11);
  if (cVar1 != '\0') {
    SetTrigg(0x11,0);
    SelectUnits(&DAT_1000afc8,0);
    SelSendAndKill(4,&DAT_1000ad80,0xe1,0);
    SelectUnits(&DAT_1000afb8,0);
    SelSendAndKill(4,&DAT_1000ad90,0xe1,0);
    SelectUnits(&DAT_1000afb0,0);
    SelSendAndKill(4,&DAT_1000ad98,0xe1,0);
    SelectUnits(&DAT_1000afc0,0);
    SelSendAndKill(4,&DAT_1000ad88,0xe1,0);
    SelectUnits(&DAT_1000b088,0);
    SelSendAndKill(4,&DAT_1000b168,0xe1,0);
    SelectUnits(&DAT_1000b080,0);
    SelSendAndKill(4,&DAT_1000b170,0xe1,0);
    SelectUnits(&DAT_1000b078,0);
    SelSendAndKill(4,&DAT_1000b178,0xe1,0);
    SelectUnits(&DAT_1000b070,0);
    SelSendAndKill(4,&DAT_1000b180,0xe1,0);
    SelectUnits(&DAT_1000af20,0);
    SelSendAndKill(4,&DAT_1000ad68,0,0);
    SelectUnits(&DAT_1000b038,0);
    SelSendAndKill(4,&DAT_1000ad58,0xe1,0);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000b180,&DAT_1000b070), 0 < iVar2)) {
    SetTrigg(0x14,0);
    RunTimer(0x14,200);
    RunTimer(0x15,100);
    SetResource(4,1,0);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x14), cVar1 != '\0')) {
    SetTrigg(0x15,0);
    SelectUnits(&DAT_1000afc8,0);
    SelSendAndKill(4,&DAT_1000aec8,0xe1,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,2);
    SelSendAndKill(4,&DAT_1000b1a8,0xe1,2);
    SelectUnits(&DAT_1000afb8,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,0);
    SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,2);
    SelSendAndKill(4,&DAT_1000b1a8,0xe1,2);
    SelectUnits(&DAT_1000afb0,0);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,2);
    SelSendAndKill(4,&DAT_1000b1a0,0xe1,2);
    SelectUnits(&DAT_1000afc0,0);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
    SelSendAndKill(4,&DAT_1000b198,0xe1,2);
    SelectUnits(&DAT_1000af20,0);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
    SelectUnits(&DAT_1000b038,0);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
    SetResource(4,1,100000);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x15), cVar1 != '\0')) {
    SetTrigg(0x16,0);
    ShowPage("#PAGE5");
    SelectUnits(&DAT_1000b088,0);
    SelSendAndKill(4,&DAT_1000aec8,0xe1,0);
    SelectUnits(&DAT_1000b080,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,0);
    SelectUnits(&DAT_1000b078,0);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,0);
    SelectUnits(&DAT_1000b070,0);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
    SelectUnits(&DAT_1000af20,0);
    SelSendAndKill(4,&DAT_1000adb0,0,0);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount1(&DAT_1000adb8,&DAT_1000b0a0), iVar2 != 0 ||
      (iVar2 = GetUnitsAmount1(&DAT_1000adb8,&DAT_1000b068), 0 < iVar2)))) {
    SetTrigg(0x12,0);
    uVar3 = AskMultilineQuestion(9,"#PAGE1",0,"Qb1|Qb2|Qb3|Qb4");
    switch(uVar3) {
    case 0:
      SetTrigg(10,1);
      DAT_1000adf0 = 1;
      break;
    case 1:
      SelectUnits(&DAT_1000aeb0,0);
      SelSendAndKill(4,&DAT_1000b008,0xa0,0);
      SelSendAndKill(4,&DAT_1000aed0,0xa0,2);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a8,0xe1,2);
      ClearSelection(4);
      SelectUnits(&DAT_1000aea8,1);
      SelSendAndKill(4,&DAT_1000b010,0xa0,0);
      SelSendAndKill(4,&DAT_1000aed0,0xa0,2);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a0,0xe1,2);
      ClearSelection(4);
      SelectUnits(&DAT_1000af18,1);
      SelSendAndKill(4,&DAT_1000af50,0xa0,0);
      SelSendAndKill(4,&DAT_1000aed0,0xa0,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b198,0xe1,2);
      ClearSelection(4);
      break;
    case 2:
      SelectUnits(&DAT_1000aeb0,0);
      SelSendAndKill(4,&DAT_1000b008,0xa0,0);
      ClearSelection(4);
      SelectUnits(&DAT_1000aea8,1);
      SelSendAndKill(4,&DAT_1000b010,0xa0,0);
      ClearSelection(4);
      SelectUnits(&DAT_1000af18,1);
      SelSendAndKill(4,&DAT_1000af50,0xa0,0);
      ClearSelection(4);
      SelectUnits(&DAT_1000ad78,0);
      SelSendAndKill(4,&DAT_1000aea0,0x4e,0);
      RunTimer(4,0x9c4);
      break;
    case 3:
      SelectUnits(&DAT_1000aeb0,0);
      SelectUnits(&DAT_1000aea8,1);
      SelectUnits(&DAT_1000b040,1);
      SelSendAndKill(4,&DAT_1000b028,0xc4,0);
      SelSendAndKill(4,&DAT_1000adb0,0xc6,2);
      SelSendAndKill(4,&DAT_1000b0d0,0x40,2);
      SelectUnits(&DAT_1000af18,0);
      SelectUnits(&DAT_1000b040,1);
      SelSendAndKill(4,&DAT_1000b028,0xc4,0);
      SelSendAndKill(4,&DAT_1000adb0,0xc6,2);
      SelSendAndKill(4,&DAT_1000b0d0,0x40,2);
    }
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 == '\0') ||
     ((iVar2 = GetUnitsAmount1(&DAT_1000ada8,&DAT_1000b0a0), iVar2 < 1 &&
      (iVar2 = GetUnitsAmount1(&DAT_1000ada8,&DAT_1000b068), iVar2 < 1))))
  goto switchD_10002ab8_default;
  SetTrigg(0x13,0);
  uVar3 = AskMultilineQuestion(9,"#PAGE1",0,"Qb1_1|Qb2_2|Qb3_3|Qb4_4|Qb5_5|Qb6_6");
  switch(uVar3) {
  case 0:
    SetTrigg(0x11,1);
    InitialUpgrade("Gorgren1","AKA31GE");
    InitialUpgrade("Gorgren1","KUZ04GE");
    InitialUpgrade("Gorgren1","AKA33GE");
    InitialUpgrade("Gorgren1","AKA35GE");
    InitialUpgrade("Gorgren1","AKA36GE");
    break;
  case 1:
    SelectUnits(&DAT_1000afc8,0);
    SelSendAndKill(4,&DAT_1000aee8,0xc4,0);
    SelectUnits(&DAT_1000afb8,0);
    SelSendAndKill(4,&DAT_1000aef8,0xc4,0);
    SelectUnits(&DAT_1000afb0,0);
    SelSendAndKill(4,&DAT_1000ae98,0xc4,0);
    SelectUnits(&DAT_1000afc0,0);
    SelSendAndKill(4,&DAT_1000aec0,0xc4,0);
    SelectUnits(&DAT_1000b088,0);
    SelSendAndKill(4,&DAT_1000afe8,0xc4,0);
    SelectUnits(&DAT_1000b080,0);
    SelSendAndKill(4,&DAT_1000b000,0xc4,0);
    SelectUnits(&DAT_1000b078,0);
    SelSendAndKill(4,&DAT_1000b020,0xc4,0);
    SelectUnits(&DAT_1000b070,0);
    SelSendAndKill(4,&DAT_1000b028,0xc4,0);
    SelectUnits(&DAT_1000af20,0);
    SelSendAndKill(4,&DAT_1000adb0,0,0);
    SelectUnits(&DAT_1000b038,0);
    puVar8 = &DAT_1000ad60;
    goto LAB_10002d06;
  case 2:
    SelectUnits(&DAT_1000afc8,0);
    SelSendAndKill(4,&DAT_1000aef0,0xc4,0);
    SelectUnits(&DAT_1000afb8,0);
    SelSendAndKill(4,&DAT_1000af00,0xc4,0);
    SelectUnits(&DAT_1000afb0,0);
    SelSendAndKill(4,&DAT_1000af10,0xc4,0);
    SelectUnits(&DAT_1000afc0,0);
    SelSendAndKill(4,&DAT_1000af28,0xc4,0);
    SelectUnits(&DAT_1000b088,0);
    SelSendAndKill(4,&DAT_1000b0d8,0xc4,0);
    SelectUnits(&DAT_1000b080,0);
    SelSendAndKill(4,&DAT_1000b100,0xc4,0);
    SelectUnits(&DAT_1000b078,0);
    SelSendAndKill(4,&DAT_1000b130,0xc4,0);
    SelectUnits(&DAT_1000b070,0);
    SelSendAndKill(4,&DAT_1000b160,0xc4,0);
    SelectUnits(&DAT_1000af20,0);
    SelSendAndKill(4,&DAT_1000ad50,0,0);
    SelectUnits(&DAT_1000b038,0);
    puVar8 = &DAT_1000ad70;
LAB_10002d06:
    SelSendAndKill(4,puVar8,0xc4,0);
    InitialUpgrade("Gorgren1","AKA31GE");
    InitialUpgrade("Gorgren1","KUZ04GE");
    InitialUpgrade("Gorgren1","AKA33GE");
    InitialUpgrade("Gorgren1","AKA35GE");
    InitialUpgrade("Gorgren1","AKA36GE");
    break;
  case 3:
    SelectUnits(&DAT_1000afc8,0);
    SelSendAndKill(4,&DAT_1000ad80,0xe1,0);
    SelectUnits(&DAT_1000afb8,0);
    SelSendAndKill(4,&DAT_1000ad90,0xe1,0);
    SelectUnits(&DAT_1000afb0,0);
    SelSendAndKill(4,&DAT_1000ad98,0xe1,0);
    SelectUnits(&DAT_1000afc0,0);
    SelSendAndKill(4,&DAT_1000ad88,0xe1,0);
    SelectUnits(&DAT_1000b088,0);
    SelSendAndKill(4,&DAT_1000b168,0xe1,0);
    SelectUnits(&DAT_1000b080,0);
    SelSendAndKill(4,&DAT_1000b170,0xe1,0);
    SelectUnits(&DAT_1000b078,0);
    SelSendAndKill(4,&DAT_1000b178,0xe1,0);
    SelectUnits(&DAT_1000b070,0);
    SelSendAndKill(4,&DAT_1000b180,0xe1,0);
    SelectUnits(&DAT_1000af20,0);
    SelSendAndKill(4,&DAT_1000ad68,0,0);
    SelectUnits(&DAT_1000b038,0);
    SelSendAndKill(4,&DAT_1000ad58,0xe1,0);
    SetTrigg(0x15,0);
    SetTrigg(0x16,0);
    DAT_1000adc0_ovl = 1;
    RunTimer(1,4000);
    break;
  case 4:
    SelectUnits(&DAT_1000afc8,0);
    SelSendAndKill(4,&DAT_1000aee8,0xc4,0);
    SelectUnits(&DAT_1000afb8,0);
    SelSendAndKill(4,&DAT_1000aef8,0xc4,0);
    SelectUnits(&DAT_1000afb0,0);
    SelSendAndKill(4,&DAT_1000ae98,0xc4,0);
    SelectUnits(&DAT_1000afc0,0);
    SelSendAndKill(4,&DAT_1000aec0,0xc4,0);
    SelectUnits(&DAT_1000b088,0);
    SelSendAndKill(4,&DAT_1000afe8,0xc4,0);
    SelectUnits(&DAT_1000b080,0);
    SelSendAndKill(4,&DAT_1000b000,0xc4,0);
    SelectUnits(&DAT_1000b078,0);
    SelSendAndKill(4,&DAT_1000b020,0xc4,0);
    SelectUnits(&DAT_1000b070,0);
    SelSendAndKill(4,&DAT_1000b028,0xc4,0);
    SelectUnits(&DAT_1000af20,0);
    SelSendAndKill(4,&DAT_1000adb0,0,0);
    SelectUnits(&DAT_1000b038,0);
    SelSendAndKill(4,&DAT_1000ad60,0xc4,0);
    SetTrigg(0x17,0);
    RunTimer(2,3000);
    DAT_1000adc4_ovl = 1;
    break;
  case 5:
    SelectUnits(&DAT_1000afc8,0);
    SelSendAndKill(4,&DAT_1000aef0,0xa0,0);
    SelectUnits(&DAT_1000afb8,0);
    SelSendAndKill(4,&DAT_1000af00,0xa0,0);
    SelectUnits(&DAT_1000afb0,0);
    SelSendAndKill(4,&DAT_1000af10,0xa0,0);
    SelectUnits(&DAT_1000afc0,0);
    SelSendAndKill(4,&DAT_1000af28,0xa0,0);
    SelectUnits(&DAT_1000b088,0);
    SelSendAndKill(4,&DAT_1000b0d8,0xa0,0);
    SelectUnits(&DAT_1000b080,0);
    SelSendAndKill(4,&DAT_1000b100,0xa0,0);
    SelectUnits(&DAT_1000b078,0);
    SelSendAndKill(4,&DAT_1000b130,0xa0,0);
    SelectUnits(&DAT_1000b070,0);
    SelSendAndKill(4,&DAT_1000b160,0xa0,0);
    SelectUnits(&DAT_1000af20,0);
    SelSendAndKill(4,&DAT_1000ad50,0,0);
    SelectUnits(&DAT_1000b038,0);
    SelSendAndKill(4,&DAT_1000ad70,0xa0,0);
    SetTrigg(0x1a,0);
    RunTimer(3,3000);
  }
switchD_10002ab8_default:
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsAmount1(&DAT_1000b028,&DAT_1000b070), pcVar6 = (void*)&SetResource, 0 < iVar2))
  {
    SetTrigg(0x17,0);
    RunTimer(0x17,100);
    RunTimer(0x18,200);
    SetResource(4,1,0);
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x17), cVar1 != '\0')) {
    SetTrigg(0x18,0);
    ShowPage("#PAGE5");
    SelectUnits(&DAT_1000b088,0);
    SelSendAndKill(4,&DAT_1000aec8,0xc4,0);
    SelectUnits(&DAT_1000b080,0);
    SelSendAndKill(4,&DAT_1000aed8,0xc4,0);
    SelectUnits(&DAT_1000b078,0);
    SelSendAndKill(4,&DAT_1000aee0,0xc4,0);
    SelectUnits(&DAT_1000b070,0);
    SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
    SelectUnits(&DAT_1000b038,0);
    SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
    SetResource(4,1,0x7cc86);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x18), cVar1 != '\0')) {
    SetTrigg(0x19,0);
    SelectUnits(&DAT_1000afc8,0);
    SelSendAndKill(4,&DAT_1000aec8,0xe1,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,2);
    SelSendAndKill(4,&DAT_1000b1a8,0xe1,2);
    SelectUnits(&DAT_1000afb8,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,0);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,2);
    SelSendAndKill(4,&DAT_1000b1a0,0xe1,2);
    SelectUnits(&DAT_1000afb0,0);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
    SelSendAndKill(4,&DAT_1000b198,0xe1,2);
    SelectUnits(&DAT_1000afc0,0);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
    SelSendAndKill(4,&DAT_1000b188,0xe1,2);
    SetResource(4,1,500000);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000b160,&DAT_1000b070), 0 < iVar2)) {
    SetTrigg(0x1a,0);
    RunTimer(0x1a,100);
    RunTimer(0x1b,0xdc);
    SetResource(4,1,0);
  }
  cVar1 = Trigg(0x1b);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x1a), cVar1 != '\0')) {
    SetTrigg(0x1b,0);
    ShowPage("#PAGE5");
    SelectUnits(&DAT_1000b088,0);
    SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
    SelectUnits(&DAT_1000b080,0);
    SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
    SelectUnits(&DAT_1000b078,0);
    SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
    SelectUnits(&DAT_1000b070,0);
    SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
    SelectUnits(&DAT_1000b038,0);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
  }
  cVar1 = Trigg(0x1c);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x1b), cVar1 != '\0')) {
    SetTrigg(0x1c,0);
    SelectUnits(&DAT_1000afc8,0);
    SelSendAndKill(4,&DAT_1000aec8,0xc4,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
    SelSendAndKill(4,&DAT_1000b1a8,0xe1,2);
    SelectUnits(&DAT_1000afb8,0);
    SelSendAndKill(4,&DAT_1000aed8,0xc4,0);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
    SelSendAndKill(4,&DAT_1000aed0,0xe1,2);
    SelSendAndKill(4,&DAT_1000b1a0,0xe1,2);
    SelectUnits(&DAT_1000afb0,0);
    SelSendAndKill(4,&DAT_1000aee0,0xc4,0);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
    SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
    SelSendAndKill(4,&DAT_1000b198,0xe1,2);
    SelectUnits(&DAT_1000afc0,0);
    SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
    SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
    SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
    SelSendAndKill(4,&DAT_1000b188,0xe1,2);
  }
  cVar1 = Trigg(0x1d);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000ad68,&DAT_1000af20), 0 < iVar2)) &&
      ((iVar2 = GetUnitsAmount1(&DAT_1000ad68,&DAT_1000b0a0), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_1000ad68,&DAT_1000b068), 0 < iVar2)))) &&
     (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(0x1d,0);
    ShowPage("#PAGE4");
    iVar2 = AskMultilineQuestion(8,"#PAGE6",0,"Qgr1|Qgr2");
    if (iVar2 == 0) {
      SetResource(4,1,0);
      SelectUnits(&DAT_1000afc8,0);
      SelSendAndKill(4,&DAT_1000aed8,0xc4,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed0,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a8,0xe1,2);
      SelectUnits(&DAT_1000afb8,0);
      SelSendAndKill(4,&DAT_1000aee0,0xc4,0);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a0,0xe1,2);
      SelectUnits(&DAT_1000afb0,0);
      SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b198,0xe1,2);
      SelectUnits(&DAT_1000afc0,0);
      SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b188,0xe1,2);
      SelectUnits(&DAT_1000af20,0);
      SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
      SelectUnits(&DAT_1000b088,0);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,0);
      SelectUnits(&DAT_1000b080,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,0);
      SelectUnits(&DAT_1000b078,0);
      SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
      SelectUnits(&DAT_1000b070,0);
      SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
      SelectUnits(&DAT_1000b038,0);
      SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
      DAT_1000ada0_ovl = 1;
      SetResource(4,1,0xad9c6);
    }
    else if (iVar2 == 1) {
      RunTimer(1,1000);
      SetTrigg(0x1d,1);
    }
  }
  cVar1 = Trigg(0x1e);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000adb0,&DAT_1000af20), 0 < iVar2)) &&
     (((iVar2 = GetUnitsAmount1(&DAT_1000adb0,&DAT_1000b0a0), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_1000adb0,&DAT_1000b068), 0 < iVar2)) &&
      (cVar1 = TimerDone(2), cVar1 != '\0')))) {
    SetTrigg(0x1e,0);
    ShowPage("#PAGE4");
    iVar2 = AskMultilineQuestion(8,"#PAGE6",0,"Qgr1|Qgr2");
    if (iVar2 == 0) {
      SetResource(4,1,0);
      SelectUnits(&DAT_1000afc8,0);
      SelSendAndKill(4,&DAT_1000aee0,0xc4,0);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a8,0xe1,2);
      SelectUnits(&DAT_1000afb8,0);
      SelSendAndKill(4,&DAT_1000aee0,0xc4,0);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a0,0xe1,2);
      SelectUnits(&DAT_1000afb0,0);
      SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b198,0xe1,2);
      SelectUnits(&DAT_1000afc0,0);
      SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b188,0xe1,2);
      SelectUnits(&DAT_1000af20,0);
      SelSendAndKill(4,&DAT_1000aed0,0xc4,0);
      SelectUnits(&DAT_1000b088,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,0);
      SelectUnits(&DAT_1000b080,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,0);
      SelectUnits(&DAT_1000b078,0);
      SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
      SelectUnits(&DAT_1000b070,0);
      SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
      SelectUnits(&DAT_1000b038,0);
      SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
      DAT_1000ada4_ovl = 1;
      SetResource(4,1,1000000);
    }
    else if (iVar2 == 1) {
      RunTimer(2,1000);
      SetTrigg(0x1e,1);
    }
  }
  cVar1 = Trigg(0x1f);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000ad50,&DAT_1000af20), 0 < iVar2)) &&
      ((iVar2 = GetUnitsAmount1(&DAT_1000ad50,&DAT_1000b0a0), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_1000ad50,&DAT_1000b068), 0 < iVar2)))) &&
     (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(0x1f,0);
    ShowPage("#PAGE4");
    iVar2 = AskMultilineQuestion(8,"#PAGE6",0,"Qgr1|Qgr2");
    if (iVar2 == 0) {
      SelectUnits(&DAT_1000af20,0);
      SelSendAndKill(4,&DAT_1000b0c8,0xc4,0);
      SelectUnits(&DAT_1000b088,0);
      SelSendAndKill(4,&DAT_1000b0c8,0xe1,0);
      SelectUnits(&DAT_1000b080,0);
      SelSendAndKill(4,&DAT_1000b0b0,0xe1,0);
      SelectUnits(&DAT_1000b078,0);
      SelSendAndKill(4,&DAT_1000b0b0,0xe1,0);
      SelectUnits(&DAT_1000b070,0);
      SelSendAndKill(4,&DAT_1000b0b0,0xe1,0);
      SelectUnits(&DAT_1000b038,0);
      SelSendAndKill(4,&DAT_1000aed0,0xe1,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b188,0xe1,2);
      SelectUnits(&DAT_1000afc8,0);
      SelSendAndKill(4,&DAT_1000aec8,0xb4,0);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a8,0xe1,2);
      SelectUnits(&DAT_1000afb8,0);
      SelSendAndKill(4,&DAT_1000aed8,0xb4,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed0,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a0,0xe1,2);
      SelectUnits(&DAT_1000afb0,0);
      SelSendAndKill(4,&DAT_1000aee0,0xb4,0);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a0,0xe1,2);
      SelectUnits(&DAT_1000afc0,0);
      SelSendAndKill(4,&DAT_1000aee0,0xb4,0);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b188,0xe1,2);
    }
    else if (iVar2 == 1) {
      RunTimer(3,1000);
      SetTrigg(0x1f,1);
    }
  }
  cVar1 = Trigg(0x20);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000aea0,&DAT_1000ad78), 0 < iVar2)) &&
     (((iVar2 = GetUnitsAmount1(&DAT_1000aea0,&DAT_1000b0a0), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_1000aea0,&DAT_1000b068), 0 < iVar2)) &&
      (cVar1 = TimerDone(4), cVar1 != '\0')))) {
    SetTrigg(0x20,0);
    ShowPage("#PAGE7");
    iVar2 = AskMultilineQuestion(8,"#PAGE6",0,"Qgr1|Qgr2");
    if (iVar2 == 0) {
      SelectUnits(&DAT_1000aeb0,0);
      SelSendAndKill(4,&DAT_1000aed0,0xa0,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aec8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b188,0xe1,2);
      ClearSelection(4);
      SelectUnits(&DAT_1000aea8,1);
      SelSendAndKill(4,&DAT_1000aed0,0xa0,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b198,0xe1,2);
      ClearSelection(4);
      SelectUnits(&DAT_1000af18,1);
      SelSendAndKill(4,&DAT_1000aed0,0xa0,0);
      SelSendAndKill(4,&DAT_1000aee0,0xe1,2);
      SelSendAndKill(4,&DAT_1000aed8,0xe1,2);
      SelSendAndKill(4,&DAT_1000b1a0,0xe1,2);
      ClearSelection(4);
    }
    else if (iVar2 == 1) {
      RunTimer(4,1000);
      SetTrigg(0x20,1);
    }
  }
  cVar1 = Trigg(0x28);
  if ((cVar1 != '\0') &&
     (((((iVar2 = GetUnitsByNation(&DAT_1000af90,4), 0 < iVar2 ||
         (iVar2 = GetUnitsByNation(&DAT_1000afa0,4), 0 < iVar2)) ||
        (iVar2 = GetUnitsByNation(&DAT_1000af98,4), 0 < iVar2)) ||
       (iVar2 = GetUnitsByNation(&DAT_1000afa8,4), 0 < iVar2)) &&
      (cVar1 = TimerDone(0x11), cVar1 != '\0')))) {
    SelectUnits1(4,&DAT_1000af90,0);
    SelectUnits1(4,&DAT_1000afa0,1);
    SelectUnits1(4,&DAT_1000af98,1);
    SelectUnits1(4,&DAT_1000afa8,1);
    SelDie(4);
    RunTimer(0x11,400);
  }
  cVar1 = Trigg(0x29);
  if ((cVar1 != '\0') &&
     ((((iVar2 = GetUnitsByNation(&DAT_1000af90,0), 0 < iVar2 ||
        (iVar2 = GetUnitsByNation(&DAT_1000afa0,0), 0 < iVar2)) ||
       ((iVar2 = GetUnitsByNation(&DAT_1000af98,0), 0 < iVar2 ||
        (iVar2 = GetUnitsByNation(&DAT_1000afa8,0), 0 < iVar2)))) &&
      (cVar1 = TimerDone(0x11), cVar1 != '\0')))) {
    SelectUnits1(0,&DAT_1000af90,0);
    SelectUnits1(0,&DAT_1000afa0,1);
    SelectUnits1(0,&DAT_1000af98,1);
    SelectUnits1(0,&DAT_1000afa8,1);
    SelDie(0);
    RunTimer(0x11,400);
  }
  iVar2 = GetUnitsByNation(&DAT_1000b058,4);
  if ((0 < iVar2) && (cVar1 = TimerDone(0x1f), cVar1 != '\0')) {
    SelectUnits1(4,&DAT_1000b058,0);
    SelDie(4);
    RunTimer(0x1f,400);
  }
  iVar2 = GetUnitsByNation(&DAT_1000b058,0);
  if ((0 < iVar2) && (cVar1 = TimerDone(0x1f), cVar1 != '\0')) {
    SelectUnits1(0,&DAT_1000b058,0);
    SelDie(0);
    RunTimer(0x1f,400);
  }
  iVar2 = GetUnitsByNation(&DAT_1000b088,0);
  if (((((0 < iVar2) || (iVar2 = GetUnitsByNation(&DAT_1000b080,0), 0 < iVar2)) ||
       (iVar2 = GetUnitsByNation(&DAT_1000b078,0), 0 < iVar2)) ||
      (iVar2 = GetUnitsByNation(&DAT_1000b070,0), 0 < iVar2)) &&
     (cVar1 = TimerDone(0x1f), cVar1 != '\0')) {
    SelectUnits1(0,&DAT_1000b088,0);
    SelectUnits1(0,&DAT_1000b080,1);
    SelectUnits1(0,&DAT_1000b078,1);
    SelectUnits1(0,&DAT_1000b070,1);
    SelDie(0);
    RunTimer(0x1f,400);
  }
  cVar1 = Trigg(0x2a);
  if ((cVar1 != '\0') &&
     ((((iVar2 = GetUnitsAmount0(&DAT_1000b150,0), 2 < iVar2 ||
        (iVar2 = GetUnitsAmount0(&DAT_1000b108,0), 2 < iVar2)) ||
       ((iVar2 = GetUnitsAmount0(&DAT_1000b110,0), 2 < iVar2 ||
        ((iVar2 = GetUnitsAmount0(&DAT_1000b118,0), 2 < iVar2 ||
         (iVar2 = GetUnitsAmount0(&DAT_1000b148,0), 2 < iVar2)))))) ||
      (((iVar2 = GetUnitsAmount0(&DAT_1000b150,4), 2 < iVar2 ||
        (((iVar2 = GetUnitsAmount0(&DAT_1000b108,4), 2 < iVar2 ||
          (iVar2 = GetUnitsAmount0(&DAT_1000b110,4), 2 < iVar2)) ||
         (iVar2 = GetUnitsAmount0(&DAT_1000b118,4), 2 < iVar2)))) ||
       (iVar2 = GetUnitsAmount0(&DAT_1000b148,4), pcVar6 = (void*)&SelSendTo, 2 < iVar2)))))) {
    SetTrigg(0x2a,0);
    cVar1 = Trigg(0x2b);
    if (cVar1 != '\0') {
      SelectUnits(&DAT_1000af78,0);
      SelSendTo(1,&DAT_1000b0c8,0x3a,0);
      SelectUnits(&DAT_1000af70,0);
      SelSendTo(1,&DAT_1000b0b0,0x40,0);
      SelectUnits(&DAT_1000af88,0);
      SelSendTo(1,&DAT_1000b0b8,0x40,0);
      SelectUnits(&DAT_1000af80,0);
      SelSendTo(1,&DAT_1000b0c0,0x45,0);
      SelectUnits(&DAT_1000af90,0);
      SelSendTo(1,&DAT_1000b120,0x32,0);
      SelectUnits(&DAT_1000afa0,0);
      SelSendTo(1,&DAT_1000b128,0x40,0);
      SelectUnits(&DAT_1000af98,0);
      SelSendTo(1,&DAT_1000b138,0x40,0);
      SelectUnits(&DAT_1000afa8,0);
      SelSendTo(1,&DAT_1000b140,0x48,0);
      SelectUnits(&DAT_1000b0f8,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae28,0x40,0);
      SelectUnits(&DAT_1000b0f0,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae60,0x40,0);
      SelectUnits(&DAT_1000b0e8,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae40,0x40,0);
      SelectUnits(&DAT_1000b0e0,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae58,0x40,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1000ae38,0);
    if (2 < iVar2) {
      SelectUnits(&DAT_1000af60,0);
      SelSendAndKill(1,&DAT_1000ae38,0x4b,0);
      SelectUnits(&DAT_1000af58,0);
      SelSendAndKill(1,&DAT_1000ae48,0x4b,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1000ae50,0);
    if (2 < iVar2) {
      SelectUnits(&DAT_1000af60,0);
      SelSendAndKill(1,&DAT_1000b108,0x23,0);
      SelectUnits(&DAT_1000af58,0);
      SelSendAndKill(1,&DAT_1000b110,0x4b,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1000b108,0);
    if (2 < iVar2) {
      SelectUnits(&DAT_1000af60,0);
      SelSendAndKill(1,&DAT_1000b110,0x28,0);
      SelectUnits(&DAT_1000af58,0);
      SelSendAndKill(1,&DAT_1000b118,0x4b,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1000b110,0);
    if (2 < iVar2) {
      SelectUnits(&DAT_1000af60,0);
      SelSendAndKill(1,&DAT_1000b110,0x40,0);
      SelectUnits(&DAT_1000af58,0);
      SelSendAndKill(1,&DAT_1000b118,0x40,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1000b118,0);
    if (2 < iVar2) {
      SelectUnits(&DAT_1000af58,0);
      SelSendAndKill(1,&DAT_1000b118,0x3b,0);
      SelectUnits(&DAT_1000af60,0);
      SelSendAndKill(1,&DAT_1000b110,0x40,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1000b148,0);
    if (2 < iVar2) {
      SelectUnits(&DAT_1000af58,0);
      SelSendAndKill(1,&DAT_1000b148,0x40,0);
      SelectUnits(&DAT_1000af60,0);
      SelSendAndKill(1,&DAT_1000b118,0x40,0);
    }
    iVar2 = GetUnitsAmount0(&DAT_1000b150,0);
    if (2 < iVar2) {
      SelectUnits(&DAT_1000af58,0);
      SelSendAndKill(1,&DAT_1000b148,0x40,0);
      SelectUnits(&DAT_1000af60,0);
      SelSendAndKill(1,&DAT_1000b118,0x40,0);
    }
    SetTrigg(0x2c,1);
  }
  cVar1 = Trigg(0x2c);
  if (((((cVar1 != '\0') && (cVar1 = Trigg(0x2a), cVar1 == '\0')) &&
       (((((iVar2 = GetUnitsAmount0(&DAT_1000ae38,4), iVar2 == 0 &&
           ((iVar2 = GetUnitsAmount0(&DAT_1000ae38,0), iVar2 == 0 &&
            (iVar2 = GetUnitsAmount0(&DAT_1000ae50,0), iVar2 == 0)))) &&
          (iVar2 = GetUnitsAmount0(&DAT_1000ae50,4), iVar2 == 0)) &&
         ((((iVar2 = GetUnitsAmount0(&DAT_1000b108,0), iVar2 == 0 &&
            (iVar2 = GetUnitsAmount0(&DAT_1000b150,0), iVar2 == 0)) &&
           (iVar2 = GetUnitsAmount0(&DAT_1000b108,4), iVar2 == 0)) &&
          ((iVar2 = GetUnitsAmount0(&DAT_1000b110,0), iVar2 == 0 &&
           (iVar2 = GetUnitsAmount0(&DAT_1000b110,4), iVar2 == 0)))))) &&
        ((iVar2 = GetUnitsAmount0(&DAT_1000b118,0), iVar2 == 0 &&
         ((iVar2 = GetUnitsAmount0(&DAT_1000b118,4), iVar2 == 0 &&
          (iVar2 = GetUnitsAmount0(&DAT_1000b148,0), iVar2 == 0)))))))) &&
      ((iVar2 = GetUnitsAmount0(&DAT_1000b148,4), iVar2 == 0 &&
       (((iVar2 = GetUnitsAmount0(&DAT_1000b150,4), iVar2 == 0 &&
         (iVar2 = GetUnitsAmount0(&DAT_1000ae40,0), iVar2 == 0)) &&
        (iVar2 = GetUnitsAmount0(&DAT_1000ae40,4), iVar2 == 0)))))) &&
     (((((iVar2 = GetUnitsAmount0(&DAT_1000ae48,0), iVar2 == 0 &&
         (iVar2 = GetUnitsAmount0(&DAT_1000ae48,4), iVar2 == 0)) &&
        ((iVar2 = GetUnitsAmount0(&DAT_1000ae28,0), iVar2 == 0 &&
         ((iVar2 = GetUnitsAmount0(&DAT_1000ae28,4), iVar2 == 0 &&
          (iVar2 = GetUnitsAmount0(&DAT_1000ae30,0), iVar2 == 0)))))) &&
       (iVar2 = GetUnitsAmount0(&DAT_1000ae30,4), iVar2 == 0)) &&
      (((((iVar2 = GetUnitsAmount0(&DAT_1000ae60,0), iVar2 == 0 &&
          (iVar2 = GetUnitsAmount0(&DAT_1000ae60,4), iVar2 == 0)) &&
         (iVar2 = GetUnitsAmount0(&DAT_1000ae68,0), iVar2 == 0)) &&
        ((iVar2 = GetUnitsAmount0(&DAT_1000ae68,4), iVar2 == 0 &&
         (iVar2 = GetUnitsAmount0(&DAT_1000ae60,0), iVar2 == 0)))) &&
       (iVar2 = GetUnitsAmount0(&DAT_1000ae60,4), iVar2 == 0)))))) {
    SetTrigg(0x2c,0);
    SelectUnits(&DAT_1000b0e8,0);
    SelSendTo(1,&DAT_1000b188,0x40,0);
    SelectUnits(&DAT_1000b0f8,0);
    SelSendTo(1,&DAT_1000b198,0x40,0);
    SelectUnits(&DAT_1000b0f0,0);
    SelSendTo(1,&DAT_1000b1a0,0x40,0);
    SelectUnits(&DAT_1000b0e0,0);
    SelSendTo(1,&DAT_1000b1a8,0x40,0);
    SelectUnits(&DAT_1000af90,0);
    SelSendTo(1,&DAT_1000b120,0x32,0);
    SelectUnits(&DAT_1000afa0,0);
    SelSendTo(1,&DAT_1000b128,0x40,0);
    SelectUnits(&DAT_1000af98,0);
    SelSendTo(1,&DAT_1000b138,0x40,0);
    SelectUnits(&DAT_1000afa8,0);
    SelSendTo(1,&DAT_1000b140,0x48,0);
    SelectUnits(&DAT_1000af60,0);
    SelSendTo(1,&DAT_1000ae68,0x40,0);
    SelectUnits(&DAT_1000af58,0);
    SelSendTo(1,&DAT_1000ae30,0x40,0);
    SelectUnits(&DAT_1000af78,0);
    SelSendTo(1,&DAT_1000b0c8,0x3a,0);
    SelectUnits(&DAT_1000af70,0);
    SelSendTo(1,&DAT_1000b0b0,0x40,0);
    SelectUnits(&DAT_1000af88,0);
    SelSendTo(1,&DAT_1000b0b8,0x40,0);
    SelectUnits(&DAT_1000af80,0);
    SelSendTo(1,&DAT_1000b0c0,0x45,0);
    SetTrigg(0x2a,1);
  }
  cVar1 = Trigg(0x2d);
  if (((cVar1 != '\0') &&
      ((iVar2 = GetUnitsAmount0(&DAT_1000ae70,0), 0xf < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_1000ae70,4), 0xf < iVar2)))) &&
     (cVar1 = TimerDone(0x12), cVar1 != '\0')) {
    SetTrigg(0x2d,0);
    SetTrigg(0x2a,0);
    SelectUnits(&DAT_1000af80,0);
    SelSendAndKill(1,&DAT_1000ae70,0xc4,0);
    SelectUnits(&DAT_1000af88,0);
    SelSendAndKill(1,&DAT_1000ae70,0xd2,0);
    SelectUnits(&DAT_1000b0e8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae70,0x40,0);
    SelectUnits(&DAT_1000b0f8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae70,0x40,0);
    SelectUnits(&DAT_1000b0f0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae70,0x40,0);
    SelectUnits(&DAT_1000b0e0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae70,0x40,0);
    RunTimer(0x12,700);
    SetTrigg(0x2d,1);
    DAT_1000af30 = 1;
  }
  cVar1 = Trigg(0x2f);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetUnitsAmount0(&DAT_1000ae78,0), 5 < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_1000ae78,4), 5 < iVar2)) &&
      (cVar1 = TimerDone(0x12), cVar1 != '\0')))) {
    SetTrigg(0x2f,0);
    SetTrigg(0x2a,0);
    SelectUnits(&DAT_1000af78,0);
    SelSendAndKill(1,&DAT_1000ae78,0xc4,0);
    SelectUnits(&DAT_1000af70,0);
    SelSendAndKill(1,&DAT_1000ae78,0x40,0);
    SelectUnits(&DAT_1000b0e8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae78,0x40,0);
    SelectUnits(&DAT_1000b0f8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae78,0x40,0);
    SelectUnits(&DAT_1000b0e0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae78,0x40,0);
    SelectUnits(&DAT_1000b0f0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae78,0x40,0);
    RunTimer(0x12,700);
    SetTrigg(0x2f,1);
    DAT_1000af34 = 1;
  }
  cVar1 = Trigg(0x30);
  if (((cVar1 != '\0') &&
      ((iVar2 = GetUnitsAmount0(&DAT_1000ae80,0), 10 < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_1000ae80,4), 10 < iVar2)))) &&
     (cVar1 = TimerDone(0x12), cVar1 != '\0')) {
    SetTrigg(0x30,0);
    SetTrigg(0x2a,0);
    SelectUnits(&DAT_1000af78,0);
    SelSendAndKill(1,&DAT_1000ae80,0xc4,0);
    SelectUnits(&DAT_1000af80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x40,0);
    SelectUnits(&DAT_1000b0e8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae80,0x40,0);
    SelectUnits(&DAT_1000b0f8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae80,0x40,0);
    SelectUnits(&DAT_1000b0f0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae80,0x40,0);
    SelectUnits(&DAT_1000b0e0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae80,0x40,0);
    RunTimer(0x12,700);
    SetTrigg(0x30,1);
    DAT_1000af38 = 1;
  }
  cVar1 = Trigg(0x2e);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000ae80,4), iVar2 == 0)) &&
      ((iVar2 = GetUnitsAmount0(&DAT_1000ae80,0), iVar2 == 0 &&
       ((((iVar2 = GetUnitsAmount0(&DAT_1000ae78,4), iVar2 == 0 &&
          (iVar2 = GetUnitsAmount0(&DAT_1000ae78,0), iVar2 == 0)) &&
         (iVar2 = GetUnitsAmount0(&DAT_1000ae70,0), iVar2 == 0)) &&
        (iVar2 = GetUnitsAmount0(&DAT_1000ae70,4), iVar2 == 0)))))) &&
     (((DAT_1000af30 == 1 || (DAT_1000af34 == 1)) || (DAT_1000af38 == 1)))) {
    SetTrigg(0x2e,0);
    SetTrigg(0x2a,1);
    DAT_1000af30 = 0;
    DAT_1000af34 = 0;
    DAT_1000af38 = 0;
    SelectUnits(&DAT_1000af60,0);
    SelSendAndKill(1,&DAT_1000ae60,0x4b,0);
    SelectUnits(&DAT_1000af60,0);
    SelSendAndKill(1,&DAT_1000ae48,0x40,0);
    SelectUnits(&DAT_1000b0e8,0);
    SelSendAndKill(1,&DAT_1000b188,0x40,0);
    SelectUnits(&DAT_1000b0f8,0);
    SelSendAndKill(1,&DAT_1000b198,0x40,0);
    SelectUnits(&DAT_1000b0f0,0);
    SelSendAndKill(1,&DAT_1000b1a0,0x40,0);
    SelectUnits(&DAT_1000b0e0,0);
    SelSendAndKill(1,&DAT_1000b1a8,0x40,0);
    SelectUnits(&DAT_1000af78,0);
    SelSendTo(1,&DAT_1000b0c8,0x3a,0);
    SelectUnits(&DAT_1000af70,0);
    SelSendTo(1,&DAT_1000b0b0,0x40,0);
    SelectUnits(&DAT_1000af88,0);
    SelSendTo(1,&DAT_1000b0b8,0x40,0);
    SelectUnits(&DAT_1000af80,0);
    SelSendTo(1,&DAT_1000b0c0,0x45,0);
    SelectUnits(&DAT_1000af90,0);
    SelSendTo(1,&DAT_1000b120,0x32,0);
    SelectUnits(&DAT_1000afa0,0);
    SelSendTo(1,&DAT_1000b128,0x40,0);
    SelectUnits(&DAT_1000af98,0);
    SelSendTo(1,&DAT_1000b138,0x40,0);
    SelectUnits(&DAT_1000afa8,0);
    SelSendTo(1,&DAT_1000b140,0x48,0);
    SetTrigg(0x2e,1);
  }
  cVar1 = Trigg(0x31);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_1000af78,1), iVar2 < 0x12)) &&
     ((iVar2 = GetUnitsByNation(&DAT_1000af78,1), 5 < iVar2 &&
      (cVar1 = TimerDone(0x10), cVar1 != '\0')))) {
    SetTrigg(0x31,0);
    SetTrigg(0x32,0);
    SetTrigg(0x33,0);
    SetTrigg(0x34,0);
    SelectUnits(&DAT_1000af48,0);
    SelSendAndKill(1,&DAT_1000b0c8,0x40,0);
    RunTimer(0x10,400);
    SetTrigg(0x31,1);
  }
  cVar1 = Trigg(0x32);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_1000af70,1), iVar2 < 0x12)) &&
      (iVar2 = GetUnitsByNation(&DAT_1000af70,1), 5 < iVar2)) &&
     (cVar1 = TimerDone(0x10), cVar1 != '\0')) {
    SetTrigg(0x31,0);
    SetTrigg(0x33,0);
    SetTrigg(0x34,0);
    SetTrigg(0x32,0);
    SelectUnits(&DAT_1000af48,0);
    SelSendAndKill(1,&DAT_1000b0b0,0x40,0);
    RunTimer(0x10,400);
    SetTrigg(0x32,1);
  }
  cVar1 = Trigg(0x33);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_1000af88,1), iVar2 < 0x12)) &&
     ((iVar2 = GetUnitsByNation(&DAT_1000af88,1), 5 < iVar2 &&
      (cVar1 = TimerDone(0x10), cVar1 != '\0')))) {
    SetTrigg(0x31,0);
    SetTrigg(0x32,0);
    SetTrigg(0x33,0);
    SetTrigg(0x34,0);
    SelectUnits(&DAT_1000af48,0);
    SelSendAndKill(1,&DAT_1000b0b8,0x40,0);
    RunTimer(0x10,400);
    SetTrigg(0x33,1);
  }
  cVar1 = Trigg(0x34);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_1000af80,1), iVar2 < 0x12)) &&
     ((iVar2 = GetUnitsByNation(&DAT_1000af80,1), 5 < iVar2 &&
      (cVar1 = TimerDone(0x10), cVar1 != '\0')))) {
    SetTrigg(0x31,0);
    SetTrigg(0x32,0);
    SetTrigg(0x33,0);
    SetTrigg(0x34,0);
    SelectUnits(&DAT_1000af48,0);
    SelSendAndKill(1,&DAT_1000b0c0,0x40,0);
    RunTimer(0x10,400);
    SetTrigg(0x34,1);
  }
  cVar1 = Trigg(0x35);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetUnitsAmount0(&DAT_1000ae70,0), 4 < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_1000ae70,4), 4 < iVar2)) &&
      (cVar1 = TimerDone(0xf), cVar1 != '\0')))) {
    SetTrigg(0x35,0);
    if (DAT_1000adf0 == 0) {
      SelectUnits(&DAT_1000b1b0,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae70,0x40,0);
      SelSendAndKill(1,&DAT_1000aed8,0x40,2);
      SelectUnits(&DAT_1000b1c0,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae70,0x40,0);
      SelSendAndKill(1,&DAT_1000aed8,0x40,2);
    }
    SelectUnits(&DAT_1000b1b8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae30,0x40,0);
    SelSendAndKill(1,&DAT_1000b108,0x40,2);
    SelSendAndKill(1,&DAT_1000ae70,0x40,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
    SelectUnits(&DAT_1000b1c8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae30,0x40,0);
    SelSendAndKill(1,&DAT_1000ae70,0x40,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
    RunTimer(0xf,600);
    SetTrigg(0x35,1);
  }
  cVar1 = Trigg(0x36);
  if (((cVar1 != '\0') &&
      ((iVar2 = GetUnitsAmount0(&DAT_1000ae80,0), 4 < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_1000ae80,4), 4 < iVar2)))) &&
     (cVar1 = TimerDone(0xf), cVar1 != '\0')) {
    SetTrigg(0x36,0);
    if (DAT_1000adf0 == 0) {
      SelectUnits(&DAT_1000b1b0,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae80,0x40,0);
      SelSendAndKill(1,&DAT_1000aed8,0x40,2);
      SelectUnits(&DAT_1000b1c0,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae80,0x40,0);
      SelSendAndKill(1,&DAT_1000aed8,0x40,2);
    }
    SelectUnits(&DAT_1000b1b8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae48,0x40,0);
    SelSendAndKill(1,&DAT_1000b118,0x40,2);
    SelSendAndKill(1,&DAT_1000ae80,0x40,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
    SelectUnits(&DAT_1000b1c8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae50,0x40,0);
    SelSendAndKill(1,&DAT_1000b110,0x40,2);
    SelSendAndKill(1,&DAT_1000ae80,0x40,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
    RunTimer(0xf,600);
    SetTrigg(0x36,1);
  }
  cVar1 = Trigg(0x37);
  if (((cVar1 != '\0') &&
      ((iVar2 = GetUnitsAmount0(&DAT_1000ae78,0), 4 < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_1000ae78,4), 4 < iVar2)))) &&
     (cVar1 = TimerDone(0xf), cVar1 != '\0')) {
    SetTrigg(0x37,0);
    if (DAT_1000adf0 == 0) {
      SelectUnits(&DAT_1000b1b0,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae78,0x40,0);
      SelSendAndKill(1,&DAT_1000aed8,0x40,2);
      SelectUnits(&DAT_1000b1c0,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelSendAndKill(1,&DAT_1000ae70,0x40,0);
      SelSendAndKill(1,&DAT_1000aed8,0x40,2);
    }
    SelectUnits(&DAT_1000b1b8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae30,0x40,0);
    SelSendAndKill(1,&DAT_1000ae78,0x40,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
    SelectUnits(&DAT_1000b1c8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae30,0x40,0);
    SelSendAndKill(1,&DAT_1000ae78,0x40,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
    RunTimer(0xf,1000);
    SetTrigg(0x37,1);
  }
  cVar1 = Trigg(0x3f);
  if ((cVar1 != '\0') &&
     ((((iVar2 = GetUnitsAmount0(&DAT_1000ae78,0), 4 < iVar2 ||
        (iVar2 = GetUnitsAmount0(&DAT_1000ae78,4), 4 < iVar2)) && (DAT_1000adf0 == 1)) &&
      (cVar1 = TimerDone(0x1d), cVar1 != '\0')))) {
    SetTrigg(0x3f,0);
    SelectUnits(&DAT_1000ade0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae70,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000ae78,0,2);
    SelSendAndKill(1,&DAT_1000aed8,0x28,2);
    SelectUnits(&DAT_1000ade8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae38,0x80,0);
    SelSendAndKill(1,&DAT_1000ae30,0x80,0);
    SelSendAndKill(1,&DAT_1000ae78,0x80,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
  }
  cVar1 = Trigg(0x38);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount0(&DAT_1000ae78,0), 4 < iVar2 ||
      (iVar2 = GetUnitsAmount0(&DAT_1000ae78,4), 4 < iVar2)))) {
    SetTrigg(0x38,0);
    RunTimer(0x1c,2000);
  }
  cVar1 = Trigg(0x39);
  if ((((cVar1 != '\0') &&
       ((iVar2 = GetUnitsAmount0(&DAT_1000ae78,0), 4 < iVar2 ||
        (iVar2 = GetUnitsAmount0(&DAT_1000ae78,4), 4 < iVar2)))) &&
      (cVar1 = TimerDone(0x1c), cVar1 != '\0')) && (DAT_1000adf0 == 0)) {
    SetTrigg(0x39,0);
    SelectUnits(&DAT_1000add0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae70,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000ae78,0x80,2);
    SelSendAndKill(1,&DAT_1000aec8,0x80,2);
    SelectUnits(&DAT_1000ade0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae70,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000ae78,0x80,2);
    SelSendAndKill(1,&DAT_1000aed8,0x28,2);
    SelectUnits(&DAT_1000add8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000b128,0x80,0);
    SelSendAndKill(1,&DAT_1000ae78,0x80,2);
    SelSendAndKill(1,&DAT_1000aed0,0x28,2);
    SelectUnits(&DAT_1000ade8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae50,0x80,0);
    SelSendAndKill(1,&DAT_1000ae30,0x80,0);
    SelSendAndKill(1,&DAT_1000ae78,0x80,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
  }
  cVar1 = Trigg(0x3e);
  if (((cVar1 != '\0') &&
      (((iVar2 = GetUnitsAmount0(&DAT_1000ae70,0), 4 < iVar2 ||
        (iVar2 = GetUnitsAmount0(&DAT_1000ae70,4), 4 < iVar2)) && (DAT_1000adf0 == 1)))) &&
     (cVar1 = TimerDone(0x1d), cVar1 != '\0')) {
    SetTrigg(0x3e,0);
    SelectUnits(&DAT_1000ade0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae70,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000aed8,0x28,2);
    SelectUnits(&DAT_1000ade8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae38,0x80,0);
    SelSendAndKill(1,&DAT_1000ae30,0x80,0);
    SelSendAndKill(1,&DAT_1000ae70,0x80,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
  }
  cVar1 = Trigg(0x3a);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount0(&DAT_1000ae70,0), 4 < iVar2 ||
      (iVar2 = GetUnitsAmount0(&DAT_1000ae70,4), 4 < iVar2)))) {
    SetTrigg(0x3a,0);
    RunTimer(0x1d,2000);
  }
  cVar1 = Trigg(0x3b);
  if ((((cVar1 != '\0') &&
       ((iVar2 = GetUnitsAmount0(&DAT_1000ae70,0), 4 < iVar2 ||
        (iVar2 = GetUnitsAmount0(&DAT_1000ae70,4), 4 < iVar2)))) &&
      (cVar1 = TimerDone(0x1d), cVar1 != '\0')) && (DAT_1000adf0 == 0)) {
    SetTrigg(0x3b,0);
    SelectUnits(&DAT_1000add0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae78,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0,2);
    SelSendAndKill(1,&DAT_1000ae70,0,2);
    SelSendAndKill(1,&DAT_1000aec8,0x80,2);
    SelectUnits(&DAT_1000ade0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae78,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000ae70,0,2);
    SelSendAndKill(1,&DAT_1000aed8,0x28,2);
    SelectUnits(&DAT_1000add8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000b140,0x80,0);
    SelSendAndKill(1,&DAT_1000ae70,0x80,2);
    SelSendAndKill(1,&DAT_1000aed0,0x28,2);
    SelectUnits(&DAT_1000ade8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae38,0x80,0);
    SelSendAndKill(1,&DAT_1000ae30,0x80,0);
    SelSendAndKill(1,&DAT_1000ae70,0x80,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
  }
  cVar1 = Trigg(0x3f);
  if (((cVar1 != '\0') &&
      (((iVar2 = GetUnitsAmount0(&DAT_1000ae80,0), 4 < iVar2 ||
        (iVar2 = GetUnitsAmount0(&DAT_1000ae80,4), 4 < iVar2)) && (DAT_1000adf0 == 1)))) &&
     (cVar1 = TimerDone(0x1e), cVar1 != '\0')) {
    SetTrigg(0x3f,0);
    SelectUnits(&DAT_1000ade0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae78,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000aed8,0x28,2);
    SelectUnits(&DAT_1000ade8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae38,0x80,0);
    SelSendAndKill(1,&DAT_1000ae58,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
  }
  cVar1 = Trigg(0x3c);
  if ((cVar1 != '\0') &&
     ((iVar2 = GetUnitsAmount0(&DAT_1000ae80,0), 4 < iVar2 ||
      (iVar2 = GetUnitsAmount0(&DAT_1000ae80,4), 4 < iVar2)))) {
    SetTrigg(0x3c,0);
    RunTimer(0x1e,0x5dc);
  }
  cVar1 = Trigg(0x3d);
  if ((((cVar1 != '\0') &&
       ((iVar2 = GetUnitsAmount0(&DAT_1000ae80,0), 4 < iVar2 ||
        (iVar2 = GetUnitsAmount0(&DAT_1000ae80,4), 4 < iVar2)))) &&
      (cVar1 = TimerDone(0x1e), cVar1 != '\0')) && (DAT_1000adf0 == 0)) {
    SetTrigg(0x3d,0);
    SelectUnits(&DAT_1000add0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae78,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0,2);
    SelSendAndKill(1,&DAT_1000aec8,0x80,2);
    SelectUnits(&DAT_1000ade0,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000ae80,0,2);
    SelSendAndKill(1,&DAT_1000aed8,0x28,2);
    SelectUnits(&DAT_1000add8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000b140,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000aed0,0x28,2);
    SelectUnits(&DAT_1000ade8,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendAndKill(1,&DAT_1000ae38,0x80,0);
    SelSendAndKill(1,&DAT_1000ae30,0x80,0);
    SelSendAndKill(1,&DAT_1000ae80,0x80,2);
    SelSendAndKill(1,&DAT_1000aee0,0x40,2);
  }
  iVar2 = GetUnitsByNation(&DAT_1000adc8,4);
  if (0 < iVar2) {
    SelectUnits1(4,&DAT_1000adc8,0);
    SelDie(4);
  }
  iVar2 = GetUnitsByNation(&DAT_1000b1d0,4);
  if (0 < iVar2) {
    SelectUnits1(4,&DAT_1000b1d0,0);
    SelDie(4);
  }
  cVar1 = Trigg(0x46);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_1000b098,1), iVar2 < 0x32)) {
    iVar2 = GetUnitsByNation(&DAT_1000b0a8,4);
    iVar4 = GetUnitsByNation(&DAT_1000af40,0);
    if (100 < iVar2 + iVar4) {
      SetTrigg(0x46,0);
      ShowPage("#PAGE8");
      SelectUnits(&DAT_1000b098,0);
      SelSendTo(1,&DAT_1000aed8,0x40,0);
      RunTimer(5,1000);
    }
  }
  cVar1 = Trigg(0x4b);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_1000b0a8,4);
    iVar4 = GetUnitsByNation(&DAT_1000af40,0);
    iVar5 = GetUnitsByNation(&DAT_1000b098,1);
    if ((iVar2 + iVar4) * 10 < iVar5) {
      SetTrigg(0x4b,0);
      ShowPage("#PAGE9");
      LooseGame();
    }
  }
  cVar1 = Trigg(0x47);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SetTrigg(0x47,0);
    ShowVictory();
  }
  cVar1 = Trigg(0x48);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_1000b098,1), iVar2 < 5)) {
    SetTrigg(0x48,0);
    ShowPage("#PAGE8");
    ShowVictory();
  }
  cVar1 = Trigg(0x49);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0), cVar1 != '\0')) {
    SetTrigg(0x49,0);
    SetResource(4,1,0xad9c6);
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
