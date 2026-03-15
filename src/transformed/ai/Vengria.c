/* Auto-generated from Vengria.c */
#include "game_api.h"

/* AI state variables */
long long DAT_1000f030 = 0;
long long DAT_1000f07c = 0;
long long DAT_1000f114 = 0;
long long DAT_1000f160 = 0;
long long DAT_1000f16c = 0;
long long DAT_1000f1d8 = 0;
long long DAT_1000f244 = 0;
int DAT_1000f248 = 1;
long long DAT_1000f41c = 0;
long long DAT_1000fe40 = 0;
long long DAT_1000fe5c = 0;
long long DAT_100105ec = 0;
long long DAT_10013598 = 0;
int DAT_100135a0 = 0;
long long DAT_100135a8 = 0;
long long DAT_100135b0 = 0;
long long DAT_100135c0 = 0;
long long DAT_100135c8 = 0;
long long DAT_100135d0 = 0;
long long DAT_100135d8 = 0;
long long DAT_100135e0 = 0;
long long DAT_100135e8 = 0;
long long DAT_100135f0 = 0;
long long DAT_100135f8 = 0;
long long DAT_10013600 = 0;
long long DAT_10013608 = 0;
long long DAT_10013610 = 0;
long long DAT_10013620 = 0;
long long DAT_10013628 = 0;
long long DAT_10013630 = 0;
long long DAT_10013638 = 0;
long long DAT_10013640 = 0;
long long DAT_10013648 = 0;
long long DAT_10013650 = 0;
long long DAT_10013658 = 0;
long long DAT_10013660 = 0;
long long DAT_10013668 = 0;
long long DAT_10013670 = 0;
long long DAT_10013678 = 0;
long long DAT_10013680 = 0;
long long DAT_10013688 = 0;
long long DAT_10013690 = 0;
long long DAT_10013698 = 0;
long long DAT_100136a0 = 0;
int DAT_100136a8 = 0;
long long DAT_100136b8 = 0;
long long DAT_100136c0 = 0;
long long DAT_100136c8 = 0;
long long DAT_100136e8 = 0;
long long DAT_100136f0 = 0;
long long DAT_100136f8 = 0;
long long DAT_10013700 = 0;
long long DAT_10013708 = 0;
long long DAT_10013710 = 0;
long long DAT_10013718 = 0;
long long DAT_10013720 = 0;
long long DAT_10013728 = 0;
long long DAT_100137f0 = 0;
long long DAT_100137f8 = 0;
long long DAT_10013800 = 0;
long long DAT_10013808 = 0;
long long DAT_10013810 = 0;
int DAT_10013818 = 0;
long long DAT_10013820 = 0;
long long DAT_10013828 = 0;
long long DAT_10013830 = 0;
long long DAT_10013838 = 0;
long long DAT_10013840 = 0;
long long DAT_10013848 = 0;
long long DAT_10013858 = 0;
long long DAT_10013860 = 0;
long long DAT_10013868 = 0;
long long DAT_10013870 = 0;
long long DAT_10013878 = 0;
long long DAT_10013880 = 0;
long long DAT_10013888 = 0;
long long DAT_10013890 = 0;
long long DAT_10013898 = 0;
long long DAT_100138a0 = 0;
long long DAT_100138a8 = 0;
long long DAT_100138b8 = 0;
long long DAT_100138c0 = 0;
long long DAT_100138d0 = 0;
long long DAT_100138d8 = 0;
char DAT_100138e0 = 0;
char DAT_10013a70 = 0;
char DAT_10013a74 = 0;
char DAT_10013c04 = 0;
char DAT_10013c08 = 0;
long long DAT_10015ea0 = 0;
long long DAT_10015ea8 = 0;
int DAT_10015ed8 = 0;
long long DAT_10015ee8 = 0;
long long DAT_10015ef0 = 0;
long long DAT_10015ef8 = 0;
long long DAT_10015f00 = 0;
long long DAT_10015f08 = 0;
long long DAT_10015f10 = 0;
char DAT_10015f18 = 0;
long long DAT_10015f38 = 0;
long long DAT_10015f48 = 0;
long long DAT_10015f50 = 0;
long long DAT_10015f58 = 0;
long long DAT_10015f60 = 0;
long long DAT_10015f68 = 0;
long long DAT_10015f70 = 0;
long long DAT_10015f78 = 0;
long long DAT_10015f80 = 0;
long long DAT_10015f88 = 0;
long long DAT_10015f90 = 0;
long long DAT_10015f98 = 0;
long long DAT_10015fa0 = 0;
long long DAT_10015fa8 = 0;
long long DAT_10015fb0 = 0;
long long DAT_10015fb8 = 0;
long long DAT_10015fc0 = 0;
long long DAT_10015fc8 = 0;
long long DAT_10015ff8 = 0;
long long DAT_10016000 = 0;
long long DAT_10016008 = 0;
long long DAT_10016010 = 0;
long long DAT_10016018 = 0;
long long DAT_10016020 = 0;
long long DAT_10016028 = 0;
long long DAT_10016030 = 0;
long long DAT_10016050 = 0;
long long DAT_10016058 = 0;
long long DAT_10016060 = 0;
int DAT_10016068 = 0;
long long DAT_10016070 = 0;
long long DAT_10016078 = 0;
long long DAT_10016080 = 0;
long long DAT_10016088 = 0;
long long DAT_10016090 = 0;
long long DAT_10016098 = 0;
long long DAT_100160a0 = 0;
long long DAT_100160a8 = 0;
long long DAT_100160b0 = 0;
long long DAT_100160d0 = 0;
long long DAT_100160d8 = 0;
long long DAT_100160e0 = 0;
long long DAT_100160e8 = 0;
long long DAT_100160f0 = 0;
long long DAT_100160f8 = 0;
long long DAT_10016100 = 0;
int DAT_10016108 = 0;
int DAT_10016109 = 0;
int DAT_1001610a = 0;
int DAT_1001610b = 0;
int DAT_1001610c = 0;
int DAT_1001610d = 0;
long long DAT_10016110 = 0;
long long DAT_10016118 = 0;
long long DAT_10016120 = 0;
long long DAT_10016128 = 0;
int DAT_10016130 = 0;
long long DAT_10016138 = 0;
int DAT_10016140 = 0;
int DAT_10016144 = 0;
long long DAT_10016150 = 0;
long long DAT_10016158 = 0;
long long DAT_10016168 = 0;
long long DAT_10016170 = 0;
long long DAT_10016178 = 0;
long long DAT_10016180 = 0;
long long DAT_10016188 = 0;
long long DAT_10016190 = 0;
long long DAT_10016198 = 0;
int DAT_100161cc = 0;
long long DAT_100161d0 = 0;
long long DAT_100161d8 = 0;
long long DAT_100161e0 = 0;
long long DAT_100161f0 = 0;
long long DAT_100161f8 = 0;
long long DAT_10016200 = 0;
long long DAT_10016208 = 0;
int DAT_10016210 = 0;
long long DAT_10016218 = 0;
long long DAT_10016220 = 0;
long long DAT_10016228 = 0;
int DAT_10016234 = 0;
long long DAT_10016238 = 0;
long long DAT_10016240 = 0;
long long DAT_10016248 = 0;
long long DAT_10016250 = 0;
long long DAT_10016258 = 0;
long long DAT_10016260 = 0;
long long DAT_10016268 = 0;
long long DAT_10016270 = 0;
long long DAT_10016278 = 0;
long long DAT_10016280 = 0;
long long DAT_10016288 = 0;
long long DAT_10016290 = 0;
long long DAT_10016298 = 0;
int DAT_100162a0 = 0;
int DAT_100162a1 = 0;
int DAT_100162a2 = 0;
int DAT_100162a3 = 0;
int DAT_100162a4 = 0;
int DAT_100162a5 = 0;
long long DAT_100162a8 = 0;
long long DAT_100162b0 = 0;
int DAT_100162b8 = 0;
long long DAT_100162c0 = 0;
long long DAT_100162c8 = 0;
long long DAT_100162d0 = 0;
long long DAT_100162d8 = 0;
long long DAT_100162e0 = 0;
int DAT_100162e8 = 0;
long long DAT_100162f0 = 0;
long long DAT_100162f8 = 0;
int DAT_10016300 = 0;
long long DAT_10016308 = 0;
long long DAT_10016310 = 0;
long long DAT_10016318 = 0;
long long DAT_10016320 = 0;
long long DAT_10016328 = 0;
long long DAT_10016330 = 0;
long long DAT_10016338 = 0;
long long DAT_10016340 = 0;
long long DAT_10016348 = 0;
long long DAT_10016350 = 0;
long long DAT_10016358 = 0;
int DAT_10016514 = 0;
long long DAT_10016518 = 0;
int DAT_10016584 = 0;
int DAT_10016588 = 0;
char DAT_1001658c = 0;
int DAT_100165cc = 0;

/* Forward declarations */
void ProcessLandAI(void);
void ProcessMiddleSeaAI(void);
static void FUN_10001000(void);
static int * FUN_10002fd0(void);
static int FUN_10003000(int param_1,int param_2,int param_3);
static int FUN_10003030(int param_1,int param_2,int param_3);
static void FUN_100030e0(void);
static void FUN_10003260(void);
static void FUN_100032d0(void);
static void FUN_10003370(void);
static void FUN_100033c0(void);
static void FUN_10003400(void);
static void FUN_100042d0(void);
static void FUN_100043b0(void);
static void FUN_10004400(void);
static void FUN_100052c0(void);
static int FUN_10005310(int *param_1);
static void FUN_10005350(void);
static void FUN_10005b30(void);
static void FUN_10005c70(void);
static void FUN_10005e90(int param_1);
static void FUN_10006070(int param_1);
static void FUN_10006390(int param_1);
static void FUN_100066d0(void);
static void FUN_10006780(void);
static void FUN_100067d0(void);
static void FUN_100068c0(void);
static void FUN_100069f0(void);
static void FUN_10006c00(void);
static void FUN_10006c80(void);
static void FUN_10006ce0(void);
static void FUN_10006de0(void);


void FUN_10001000(void)

{
  char cVar1;
  void *pcVar2;
  byte bVar3;
  int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  char *pcVar7;
  char *pcVar8;
  
  bVar3 = GetRandomIndex();
  uVar5 = 0xffffffff;
  pcVar7 = "Pikiner_evro(VG)";
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = (char *)&DAT_10015ea8;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(int *)pcVar8 = *(int *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_1000fe5c;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = (char *)&DAT_10016198;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(int *)pcVar8 = *(int *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if ((bVar3 & 0x18) == 8) {
    uVar5 = 0xffffffff;
    pcVar7 = "Mushketer(VG)";
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = (char *)&DAT_10015fc8;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(int *)pcVar8 = *(int *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_1000fe40;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = (char *)&DAT_10015fc8;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(int *)pcVar8 = *(int *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if ((((((1) &&
         (RegisterUnitType(&DAT_10015f58,"Melnica(VG)"), 1)) &&
        (RegisterUnitType(&DAT_10015f50,"Sclad1(VG)"), 1)) &&
       ((RegisterUnitType(&DAT_10016078,"VngHra(VG)"), 1 &&
        (RegisterUnitType(&DAT_100161d8,"VngK18(VG)"), 1)))) &&
      ((RegisterUnitType(&DAT_10015f68,"VngDip(VG)"), 1 &&
       ((RegisterUnitType(&DAT_10013598,"VngArt(VG)"), 1 &&
        (RegisterUnitType(&DAT_100137f8,"Rinok(VG)"), 1)))))) &&
     ((RegisterUnitType(&DAT_10013858,"Bashnia(VG)"), 1 &&
      (RegisterUnitType(&DAT_10016258,"PorE(VG)"), 1)))) {
    RegisterUnitType(&DAT_10015f38,"VngCen(VG)");
  }
  AssignPeasant("Kreposnoi_pruss(VG)");
  if ((1) &&
     (RegisterUnitType(&DAT_10016110,"Kreposnoi_pruss(VG)"), 1)) {
    RegisterUnitType(&DAT_10016168,"VngKuz(VG)");
  }
  if (1) {
    RegisterUpgrade(&DAT_10016008,"KUZ04VG");
  }
  if (1) {
    RegisterUnitType(&DAT_10015ea0,"VngAka(VG)");
  }
  if (((1) &&
      (RegisterUpgrade(&DAT_10015fa8,"AKA35VG"), 1)) &&
     (RegisterUpgrade(&DAT_10016000,"AKA36VG"), 1)) {
    RegisterUpgrade(&DAT_10016010,"AKA32VG");
  }
  if (((1) &&
      (RegisterUnitType(&DAT_100161d0,"VngK17(VG)"), 1)) &&
     ((RegisterUnitType(&DAT_10013608,&DAT_10015ea8), 1 &&
      (RegisterUnitType(&DAT_10016060,"VngSer(VG)"), 1)))) {
    RegisterUnitType(&DAT_10013680,"Officer_evro(VG)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_100161e0,"Officer_evro(VG)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_10015f48,"Officer_evro(VG)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_100135c0,"Barabanshik_ev1(VG)");
  }
  if (1) {
    RegisterUpgrade(&DAT_10016050,"Barabanshik_ev1(VG)SHIELD");
  }
  if (((1) &&
      (RegisterUnitType(&DAT_10016058,"VngKon(VG)"), 1)) &&
     (RegisterUnitType(&DAT_10016330,&DAT_10016198), 1)) {
    RegisterUnitType(&DAT_10013610,"Dragun(VG)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10013880,"Dragun(VG)ATTACK"), 1))
        && ((RegisterUpgrade(&DAT_10013878,"Dragun(VG)ATTACK3"),
            1 &&
            ((RegisterUpgrade(&DAT_10013870,"Dragun(VG)ATTACK4"),
             1 &&
             (RegisterUpgrade(&DAT_100138b8,"Dragun(VG)ATTACK5"),
             1)))))) &&
       (RegisterUpgrade(&DAT_100138a8,"Dragun(VG)ATTACK6"), 1))
      && (((((RegisterUpgrade(&DAT_100138a0,"Dragun(VG)ATTACK7"),
             1 &&
             (RegisterUpgrade(&DAT_10013658,"Dragun(VG)SHIELD"),
             1)) &&
            (RegisterUpgrade(&DAT_10013648,"Dragun(VG)SHIELD3"),
            1)) &&
           ((RegisterUpgrade(&DAT_10013840,"Dragun(VG)SHIELD4"),
            1 &&
            (RegisterUpgrade(&DAT_10013838,"Dragun(VG)SHIELD5"),
            1)))) &&
          ((RegisterUpgrade(&DAT_10013830,"Dragun(VG)SHIELD6"), 1
           && ((RegisterUpgrade(&DAT_10013828,"Dragun(VG)SHIELD7"),
               1 &&
               (RegisterUpgrade(&DAT_10013880,"Dragun(VG)ATTACK"),
               1)))))))) &&
     (((RegisterUpgrade(&DAT_10013878,"Dragun(VG)ATTACK3"), 1 &&
       ((((RegisterUpgrade(&DAT_10013870,"Dragun(VG)ATTACK4"), 1
          && (RegisterUpgrade(&DAT_100138b8,"Dragun(VG)ATTACK5"),
             1)) &&
         (RegisterUpgrade(&DAT_100138a8,"Dragun(VG)ATTACK6"), 1))
        && ((RegisterUpgrade(&DAT_100138a0,"Dragun(VG)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_10013658,"Dragun(VG)SHIELD"), 1
            )))))) &&
      (((RegisterUpgrade(&DAT_10013648,"Dragun(VG)SHIELD3"), 1 &&
        ((RegisterUpgrade(&DAT_10013840,"Dragun(VG)SHIELD4"), 1
         && (RegisterUpgrade(&DAT_10013838,"Dragun(VG)SHIELD5"),
            1)))) &&
       (RegisterUpgrade(&DAT_10013830,"Dragun(VG)SHIELD6"), 1))))
     )) {
    RegisterUpgrade(&DAT_10013828,"Dragun(VG)SHIELD7");
  }
  if ((1) &&
     (RegisterUnitType(&DAT_100162b0,"Kirasir(VG)"), 1)) {
    RegisterUnitType(&DAT_10013600,"Dragun_18(VG)");
  }
  if (((((1) &&
        (RegisterUpgrade(&DAT_100135d8,"Dragun_18(VG)ATTACK"), 1)
        ) && (RegisterUpgrade(&DAT_100135d0,"Dragun_18(VG)ATTACK3"),
             1)) &&
      (((RegisterUpgrade(&DAT_100135c8,"Dragun_18(VG)ATTACK4"), 1
        && (RegisterUpgrade(&DAT_10016298,"Dragun_18(VG)ATTACK5"),
           1)) &&
       ((RegisterUpgrade(&DAT_10016290,"Dragun_18(VG)ATTACK6"), 1
        && ((RegisterUpgrade(&DAT_10016288,"Dragun_18(VG)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_10016310,"Dragun_18(VG)SHIELD"),
            1)))))))) &&
     (((RegisterUpgrade(&DAT_10016308,"Dragun_18(VG)SHIELD3"), 1
       && (((((((RegisterUpgrade(&DAT_10016358,"Dragun_18(VG)SHIELD4"),
                1 &&
                (RegisterUpgrade(&DAT_10016350,"Dragun_18(VG)SHIELD5"),
                1)) &&
               (RegisterUpgrade(&DAT_10016348,"Dragun_18(VG)SHIELD6"),
               1)) &&
              ((RegisterUpgrade(&DAT_10016340,"Dragun_18(VG)SHIELD7"),
               1 &&
               (RegisterUpgrade(&DAT_100135d8,"Dragun_18(VG)ATTACK"),
               1)))) &&
             (RegisterUpgrade(&DAT_100135d0,"Dragun_18(VG)ATTACK3"),
             1)) &&
            ((RegisterUpgrade(&DAT_100135c8,"Dragun_18(VG)ATTACK4"),
             1 &&
             (RegisterUpgrade(&DAT_10016298,"Dragun_18(VG)ATTACK5"),
             1)))) &&
           ((RegisterUpgrade(&DAT_10016290,"Dragun_18(VG)ATTACK6"),
            1 &&
            (((RegisterUpgrade(&DAT_10016288,"Dragun_18(VG)ATTACK7"),
              1 &&
              (RegisterUpgrade(&DAT_10016310,"Dragun_18(VG)SHIELD"),
              1)) &&
             (RegisterUpgrade(&DAT_10016308,"Dragun_18(VG)SHIELD3"),
             1)))))))) &&
      (((RegisterUpgrade(&DAT_10016358,"Dragun_18(VG)SHIELD4"), 1
        && (RegisterUpgrade(&DAT_10016350,"Dragun_18(VG)SHIELD5"),
           1)) &&
       (RegisterUpgrade(&DAT_10016348,"Dragun_18(VG)SHIELD6"), 1)
       ))))) {
    RegisterUpgrade(&DAT_10016340,"Dragun_18(VG)SHIELD7");
  }
  if ((((1) &&
       (RegisterUnitType(&DAT_100161f8,"Strelec_Algir_DIP(VG)"), 1
       )) && ((RegisterUnitType(&DAT_100160e0,"Grenader_DIP(VG)"),
              1 &&
              (((RegisterUnitType(&DAT_100162a8,"Kozak_loshad_DIP(VG)"),
                1 &&
                (RegisterUnitType(&DAT_10013808,"Dragun_18_DIP(VG)"),
                1)) &&
               (RegisterUnitType(&DAT_10015f60,"Sveshenik_evro(VG)"),
               1)))))) &&
     (((RegisterUnitType(&DAT_10015f00,&DAT_10015ea8), 1 &&
       (RegisterUnitType(&DAT_100162f0,"Pushka(VG)"), 1)) &&
      ((RegisterUnitType(&DAT_100135e8,"Mortira(VG)"), 1 &&
       (((RegisterUnitType(&DAT_10013848,"Mortira_b(VG)"), 1 &&
         (RegisterUnitType(&DAT_10016170,"Lodka(VG)"), 1)) &&
        ((RegisterUnitType(&DAT_10013810,&DAT_1000fe5c), 1 &&
         ((((RegisterUnitType(&DAT_10013868,"Fregat(VG)"), 1 &&
            (RegisterUnitType(&DAT_10015f10,"GALERA(VG)"), 1)) &&
           (RegisterUnitType(&DAT_10016318,"Linkor(VG)"), 1)) &&
          (RegisterUnitType(&DAT_10015f08,"Yahta(VG)"), 1)))))))))
      ))) {
    RegisterUnitType(&DAT_10013820,"PERES_KOR(VG)");
  }
  if ((((1) &&
       (RegisterUpgrade(&DAT_100162f8,"Melnica(VG)GETRES"), 1))
      && (((RegisterUpgrade(&DAT_10016080,"Melnica(VG)GETRES2"),
           1 &&
           ((RegisterUpgrade(&DAT_100135e0,"KUZ01VG"), 1 &&
            (RegisterUpgrade(&DAT_10016320,"Pikiner_evro(VG)ATTACK"),
            1)))) &&
          (RegisterUpgrade(&DAT_10016328,"Pikiner_evro(VG)ATTACK3"),
          1)))) &&
     (((RegisterUpgrade(&DAT_10016338,"Pikiner_evro(VG)ATTACK4"),
       1 &&
       (RegisterUpgrade(&DAT_10016270,"Pikiner_evro(VG)SHIELD"),
       1)) &&
      (RegisterUpgrade(&DAT_10016278,"Pikiner_evro(VG)SHIELD3"),
      1)))) {
    RegisterUpgrade(&DAT_10016280,"Pikiner_evro(VG)SHIELD4");
  }
  SafeRegisterUpgrade(&DAT_100162d0,"Pikiner_evro(VG)ATTACK");
  SafeRegisterUpgrade(&DAT_100162d8,"Pikiner_evro(VG)ATTACK3");
  SafeRegisterUpgrade(&DAT_100162c0,"Pikiner_evro(VG)ATTACK4");
  SafeRegisterUpgrade(&DAT_100162c8,"Pikiner_evro(VG)ATTACK5");
  SafeRegisterUpgrade(&DAT_100162e0,"Pikiner_evro(VG)ATTACK6");
  SafeRegisterUpgrade(&DAT_10016218,"Pikiner_evro(VG)SHIELD");
  SafeRegisterUpgrade(&DAT_10016200,"Pikiner_evro(VG)SHIELD3");
  SafeRegisterUpgrade(&DAT_10016208,"Pikiner_evro(VG)SHIELD4");
  SafeRegisterUpgrade(&DAT_10016220,"Pikiner_evro(VG)SHIELD5");
  SafeRegisterUpgrade(&DAT_10016228,"Pikiner_evro(VG)SHIELD6");
  if ((((1) &&
       (RegisterUpgrade(&DAT_10013890,"VngSer(VG)ATTACK"), 1)) &&
      ((RegisterUpgrade(&DAT_10013898,"VngSer(VG)ATTACK3"), 1 &&
       ((RegisterUpgrade(&DAT_10013888,"VngSer(VG)ATTACK4"), 1 &&
        (RegisterUpgrade(&DAT_10015ef8,"VngSer(VG)SHIELD"), 1))))
      )) && (RegisterUpgrade(&DAT_10015ee8,"VngSer(VG)SHIELD3"),
            1)) {
    RegisterUpgrade(&DAT_10015ef0,"VngSer(VG)SHIELD4");
  }
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10015f98,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10015f90,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10015f88,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10015f80,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10015f78,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10015f70,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_100160b0,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_100160a8,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_100160a0,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10016098,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10016088,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_100160d8,puVar4);
  if (((((((1) &&
          (RegisterUpgrade(&DAT_10013638,"Kirasir(VG)ATTACK"), 1)
          ) && (RegisterUpgrade(&DAT_10013630,"Kirasir(VG)ATTACK3"),
               1)) &&
        ((RegisterUpgrade(&DAT_10013628,"Kirasir(VG)ATTACK4"), 1
         && (RegisterUpgrade(&DAT_10013620,"Kirasir(VG)ATTACK5"),
            1)))) &&
       ((RegisterUpgrade(&DAT_100135f8,"Kirasir(VG)ATTACK6"), 1
        && ((RegisterUpgrade(&DAT_100135f0,"Kirasir(VG)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_100136c8,"Kirasir(VG)SHIELD"),
            1)))))) &&
      (RegisterUpgrade(&DAT_100136c0,"Kirasir(VG)SHIELD3"), 1))
     && (((RegisterUpgrade(&DAT_100136b8,"Kirasir(VG)SHIELD4"), 1
          && (RegisterUpgrade(&DAT_100136a0,"Kirasir(VG)SHIELD5"),
             1)) &&
         (RegisterUpgrade(&DAT_10013698,"Kirasir(VG)SHIELD6"), 1)
         ))) {
    RegisterUpgrade(&DAT_10013690,"Kirasir(VG)SHIELD7");
  }
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013660,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013668,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013670,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013678,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013640,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013650,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013708,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013710,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013718,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_100136f0,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_100136f8,puVar4);
  puVar4 = FUN_10002fd0();
  SafeRegisterUpgrade(&DAT_10013700,puVar4);
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10016158,"Pushka(VG)BUILD"), 1))
        && ((RegisterUpgrade(&DAT_10016150,"Pushka(VG)BUILD3"), 1
            && ((RegisterUpgrade(&DAT_10016120,"Pushka(VG)BUILD4"),
                1 &&
                (RegisterUpgrade(&DAT_10016118,"Pushka(VG)BUILD5"),
                1)))))) &&
       ((RegisterUpgrade(&DAT_10016128,"Pushka(VG)BUILD6"), 1 &&
        ((((RegisterUpgrade(&DAT_10016018,"Mortira(VG)BUILD"), 1
           && (RegisterUpgrade(&DAT_10016020,"Mortira(VG)BUILD3"),
              1)) &&
          (RegisterUpgrade(&DAT_10016028,"Mortira(VG)BUILD4"), 1)
          ) && ((RegisterUpgrade(&DAT_10016030,"Mortira(VG)BUILD5"),
                1 &&
                (RegisterUpgrade(&DAT_10016138,"KUZ03VG"), 1)))))
        ))) && (((((RegisterUpgrade(&DAT_10015fa0,"Melnica(VG)GETRES"),
                   1 &&
                   ((RegisterUpgrade(&DAT_100138d8,"AKA06VG"), 1
                    && (RegisterUpgrade(&DAT_10015ff8,"AKA01VG"),
                       1)))) &&
                  (RegisterUpgrade(&DAT_10015fb0,"AKA02VG"), 1))
                 && ((((RegisterUpgrade(&DAT_10015fb8,"AKA03VG"),
                       1 &&
                       (RegisterUpgrade(&DAT_10015fc0,"AKA04VG"),
                       1)) &&
                      (RegisterUpgrade(&DAT_100161f0,"AKA08VG"),
                      1)) &&
                     ((RegisterUpgrade(&DAT_10016090,"AKA23VG"),
                      1 &&
                      (RegisterUpgrade(&DAT_100160d0,"AKA24VG"),
                      1)))))) &&
                ((((RegisterUpgrade(&DAT_10016188,"AKA31VG"), 1
                   && ((RegisterUpgrade(&DAT_10016190,"AKA33VG"),
                       1 &&
                       (RegisterUpgrade(&DAT_100160e8,"AKA12VG"),
                       1)))) &&
                  (RegisterUpgrade(&DAT_100160f8,"AKA13VG"), 1))
                 && ((((RegisterUpgrade(&DAT_10016100,"AKA14VG"),
                       1 &&
                       (RegisterUpgrade(&DAT_100160f0,"AKA15VG"),
                       1)) &&
                      (RegisterUpgrade(&DAT_100138d0,"AKA11VG"),
                      1)) &&
                     (((RegisterUpgrade(&DAT_10013860,"AKA10VG"),
                       1 &&
                       (RegisterUpgrade(&DAT_10013720,"AKA30VG"),
                       1)) &&
                      ((RegisterUpgrade(&DAT_10016070,"AKA07VG"),
                       1 &&
                       ((RegisterUpgrade(&DAT_100138c0,"AKA20VG"),
                        1 &&
                        (RegisterUpgrade(&DAT_10016178,"KUZ02VG"),
                        1)))))))))))))) &&
     (((RegisterUpgrade(&DAT_10016180,"AKA09VG"), 1 &&
       (((((RegisterUpgrade(&DAT_100137f0,"AKA05VG"), 1 &&
           (RegisterUpgrade(&DAT_10013800,"AKA28VG"), 1)) &&
          (RegisterUpgrade(&DAT_100136e8,"AKA29VG"), 1)) &&
         ((RegisterUpgrade(&DAT_100135a8,"KUZ05VG"), 1 &&
          (RegisterUpgrade(&DAT_10013688,"KUZ06VG"), 1)))) &&
        (RegisterUpgrade(&DAT_100135b0,"AKA34VG"), 1)))) &&
      (((RegisterUpgrade(&DAT_10016268,"Bashnia(VG)PAUSE"), 1 &&
        (RegisterUpgrade(&DAT_10016250,"Bashnia(VG)PAUSE3"), 1))
       && ((RegisterUpgrade(&DAT_10016260,"Bashnia(VG)PAUSE4"), 1
           && ((RegisterUpgrade(&DAT_10016240,"Bashnia(VG)PAUSE5"),
               1 &&
               (RegisterUpgrade(&DAT_10016248,"Bashnia(VG)PAUSE6"),
               1)))))))))) {
    RegisterUpgrade(&DAT_10016238,"Bashnia(VG)PAUSE7");
  }
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(VG)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(VG)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(VG)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(VG)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(VG)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(VG)INSIDE7",0x32);
  AssignFormUnit(&DAT_10015ea8);
  AssignMine("shahta(VG)");
  AssignHouse("VngDom(VG)");
  AssignWall("WALL_EV(VG)");
  return;
}





int * FUN_10002fd0(void)

{
  sprintf(&DAT_10013728,&DAT_100105ec);
  return &DAT_10013728;
}





int  FUN_10003000(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetTorgResult(param_1,param_2,1000);
  return (param_3 * 1000) / iVar1;
}





int  FUN_10003030(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int uVar5;
  int iVar6;
  
  iVar1 = GetMoney(param_1);
  if (param_2 <= iVar1) {
    return (((int)((unsigned int)iVar1 >> 8) << 8) | 1);
  }
  iVar1 = GetMoney(param_1);
  iVar2 = FUN_10003000(param_3,param_1,param_2 - iVar1);
  uVar3 = GetMoney(param_3);
  if ((iVar2 < (int)uVar3) && (1000 < iVar2)) {
    iVar6 = 0;
    while( true ) {
      iVar4 = 0xf;
      if (iVar2 / 15000 < 0x10) {
        iVar4 = iVar2 / 15000;
      }
      if (iVar4 <= iVar6) break;
      AI_Torg(param_1,param_3,100);
      iVar6 = iVar6 + 1;
    }
    iVar1 = FUN_10003000(param_3,param_1,param_2 - iVar1);
    uVar5 = AI_Torg(param_3,param_1,iVar1);
    return (((int)((unsigned int)uVar5 >> 8) << 8) | 1);
  }
  return uVar3 & 0xffffff00;
}






void FUN_100030e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_10016234 = GetAINation();
  iVar1 = GetUnits(&DAT_10016110);
  iVar2 = GetExtraction(1);
  iVar3 = GetExtraction(4);
  iVar4 = GetExtraction(5);
  DAT_10016130 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_10016234 * 0x4b8;
  DAT_10016584 = *(int *)(&DAT_10013a70 + iVar1);
  DAT_10016140 = &DAT_100138e0 + iVar1;
  DAT_10016144 = &DAT_10013a74 + iVar1;
  DAT_10016588 = *(int *)(&DAT_10013c04 + iVar1);
  DAT_100161cc = &DAT_10013c08 + iVar1;
  DAT_10016210 = GetMoney(3);
  DAT_100135a0 = GetMoney(0);
  DAT_10016300 = GetMoney(2);
  DAT_100136a8 = GetMoney(4);
  DAT_10016068 = GetMoney(5);
  DAT_100162b8 = GetMoney(1);
  iVar1 = GetStartRes();
  if (iVar1 == 0) {
    DAT_1000f248 = 4;
  }
  SetMineBalanse(0x13,&DAT_1000f114);
  SetMinesUpgradeRules(&DAT_10016518);
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  DAT_10016108 = 1;
  DAT_1001610a = 1;
  DAT_1001610c = 1;
  DAT_1001610d = 1;
  DAT_100162a3 = 1;
  DAT_100162a1 = 1;
  DAT_100162a4 = 1;
  DAT_100162a5 = 1;
  DAT_1001610b = 0;
  DAT_10016109 = 0;
  DAT_100162a0 = 0;
  DAT_100162a2 = 0;
  DAT_100165cc = 0;
  return;
}





void FUN_10003260(void)

{
  int iVar1;
  
  if (DAT_10015ed8 < 2) {
    iVar1 = GetUnits(&DAT_10013608);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_10013680,iVar1,0x32,0x32);
      TryUnit(&DAT_100135c0,iVar1,0x14,0x32);
    }
  }
  return;
}





void FUN_100032d0(void)

{
  TryUpgrade(&DAT_100162d0,0x3c,100);
  TryUpgrade(&DAT_100162d8,0x3c,100);
  TryUpgrade(&DAT_100162c0,0x3c,100);
  TryUpgrade(&DAT_100162c8,0x14,100);
  TryUpgrade(&DAT_100162e0,10,100);
  TryUpgrade(&DAT_10016218,0x3c,100);
  TryUpgrade(&DAT_10016200,0x3c,100);
  TryUpgrade(&DAT_10016208,0x3c,100);
  TryUpgrade(&DAT_10016220,0x14,100);
  TryUpgrade(&DAT_10016228,10,100);
  return;
}





void FUN_10003370(void)

{
  TryUpgrade(&DAT_10013890,0x5a,100);
  TryUpgrade(&DAT_10013898,0x5a,100);
  TryUpgrade(&DAT_10013888,0x5a,100);
  TryUpgrade(&DAT_10015ef8,0x5a,100);
  TryUpgrade(&DAT_10015ee8,0x5a,100);
  return;
}





void FUN_100033c0(void)

{
  TryUpgrade(&DAT_10016018,0x1e,0x32);
  TryUpgrade(&DAT_10016020,0x1e,0x32);
  TryUpgrade(&DAT_10016028,0x1e,0x32);
  TryUpgrade(&DAT_10016030,0x1e,0x32);
  return;
}





void FUN_10003400(void)

{
  char cVar1;
  char cVar2;
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
  BOOL bVar13;
  BOOL bVar14;
  int uVar15;
  int uVar16;
  int uVar17;
  
  SetDefSettings(300,400);
  SetDefenseState(0);
  iVar3 = GetUnitsByUsage(0,0x1b);
  iVar4 = GetUnitsByUsage(0,0x19);
  iVar5 = GetUnitsByUsage(0,0x1c);
  iVar6 = GetUnitsByUsage(0,0xe);
  cVar1 = UpgIsDone(&DAT_10015fa0);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = GetReadyUnits(&DAT_10016258);
  iVar6 = GetUnits(&DAT_10015f38);
  iVar7 = GetReadyUnits(&DAT_10015f38);
  iVar8 = GetUnits(&DAT_10015f68);
  iVar9 = GetReadyUnits(&DAT_10015f68);
  iVar10 = GetUnits(&DAT_10016058);
  iVar11 = GetReadyUnits(&DAT_10016058);
  iVar12 = GetUnits(&DAT_10016258);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  TryUpgrade(&DAT_10015fa0,0x5f,100);
  bVar13 = true;
  iVar5 = GetMoney(3);
  if ((((55000 < iVar5) && (iVar5 = GetMoney(1), 10000 < iVar5)) &&
      (iVar5 = GetMoney(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = GetUnits(&DAT_10016110);
  iVar7 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_10016138);
  GetUnits(&DAT_10013608);
  iVar8 = GetUnits(&DAT_10016060);
  iVar11 = GetUnits(&DAT_10016330);
  iVar9 = GetUnits(&DAT_100162b0);
  iVar10 = GetUnits(&DAT_10013608);
  iVar11 = iVar10 + iVar9 + iVar11;
  TryUpgrade(&DAT_10016090,99,0x50);
  TryUpgrade(&DAT_100160d0,0x62,0x50);
  iVar9 = GetReadyUnits(&DAT_10013858);
  iVar10 = GetUnits(&DAT_10013858);
  if (iVar5 != 0) {
    TryUnit(&DAT_10015f58,1,100,100);
    iVar12 = GetUnits(&DAT_10015f58);
    if (iVar12 == 0) {
      return;
    }
    TryUpgrade(&DAT_100162f8,100,100);
    cVar2 = FieldExist();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        TryUnit(&DAT_10016110,100,100,100);
        TryUnit(&DAT_10013608,100,100,100);
      }
      SetPDistribution(0,1,1);
    }
    else {
      cVar2 = UpgIsDone(&DAT_10013720);
      if (cVar2 == '\0') {
        if (iVar7 < 0x2ee1) {
          if (iVar7 < 0x1771) {
            uVar16 = 4;
            uVar17 = 4;
            uVar15 = 10;
          }
          else {
            uVar16 = 5;
            uVar17 = 5;
            uVar15 = 9;
          }
        }
        else {
          uVar16 = 8;
          uVar17 = 8;
          uVar15 = 9;
        }
      }
      else if (iVar7 < 0x2ee1) {
        if (iVar7 < 0x1771) {
          uVar16 = 1;
          uVar17 = 4;
          uVar15 = 9;
        }
        else {
          uVar16 = 3;
          uVar17 = 5;
          uVar15 = 9;
        }
      }
      else {
        uVar16 = 6;
        uVar17 = 8;
        uVar15 = 9;
      }
      SetPDistribution(uVar15,uVar17,uVar16);
      uVar15 = 0x15e;
      if (cVar1 != '\0') {
        uVar15 = 300;
      }
      if ((iVar5 < 0x19) && (300 < iVar7)) {
        TryUnit(&DAT_10016110,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          TryUnit(&DAT_10016110,1000,0xe8,100);
        }
        if (300 < iVar7) {
          TryUnit(&DAT_10013608,uVar15,100,0x1e);
        }
      }
      cVar2 = UpgIsDone(&DAT_100161f0);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = GetUnits(&DAT_10016258), 0 < iVar7)
         ) {
        FUN_100032d0();
      }
    }
    if (iVar3 < 5) {
      iVar3 = 5;
    }
    else {
      iVar3 = iVar3 + 2;
    }
    TryUnit(&DAT_10015f10,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      TryUnit(&DAT_10013868,0xc,0x46);
    }
    else {
      TryUnit(&DAT_10013868,iVar4 + 6,0x1e,0x32);
      TryUnit(&DAT_10013868,iVar4 + 9,0xf,0x32);
      TryUnit(&DAT_10013868,iVar4 + 10,10,0x32);
    }
    iVar4 = GetUnitsByUsage(0,0x1f);
    if (iVar4 != 0) {
      TryUpgrade(&DAT_10016268,0x32,0x32);
      TryUpgrade(&DAT_10016250,0x32,0x32);
      TryUpgrade(&DAT_10016260,0x32,0x32);
      TryUpgrade(&DAT_10016240,0x32,0x32);
      TryUpgrade(&DAT_10016248,0x32,0x32);
      TryUpgrade(&DAT_10016238,0x32,0x32);
    }
    TryUnit(&DAT_10013820,3,0x5a,10);
    TryUnit(&DAT_10015f38,1,100,100);
    TryUnit(&DAT_10015f38,2,0x5f,5);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015f38,3,0x5f,5);
    }
    TryUnit(&DAT_10016168,1,100,100);
    TryUnit(&DAT_100161d0,1,100,100);
    TryUnit(&DAT_10015f50,1,0x32,0x32);
    TryUnit(&DAT_10016168,2,10,5);
    TryUnit(&DAT_10016058,1,99,0x5a);
    TryUpgrade(&DAT_100135e0,0x50,100);
    iVar4 = GetUnits(&DAT_10015ea0);
    if (0 < iVar4) {
      TryUnit(&DAT_100137f8,1,0x5a,0x19);
      TryUnit(&DAT_10016078,1,5,3);
    }
    TryUnit(&DAT_10015ea0,1,0x5a,0x5a);
    if (iVar6 == 0) {
      TryUnit(&DAT_10015f68,1,99,10);
    }
    TryUnit(&DAT_10013598,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      TryUnit(&DAT_10015f58,2,0x1e,0x1e);
    }
    TryUnit(&DAT_100161d8,1,0x5a,0x14);
    TryUnit(&DAT_100161d8,2,0x32,5);
    TryUpgrade(&DAT_10015ff8,0x5a,99);
    TryUpgrade(&DAT_10015fb0,0x5a,99);
    TryUpgrade(&DAT_10015fb8,0x5a,99);
    TryUpgrade(&DAT_10015fc0,0x5a,99);
    TryUpgrade(&DAT_100161f0,0x5f,100);
    TryUpgrade(&DAT_10016138,99,100);
    TryUnit(&DAT_10016258,1,0x50,0x14);
    TryUnit(&DAT_10016258,2,0x32,5);
    TryUnit(&DAT_10016258,3,0x1e,5);
    TryUnit(&DAT_10016258,5,0x14,5);
    TryUpgrade(&DAT_100138d8,0x5f,100);
    iVar4 = GetMaxPeasantsInMines();
    cVar2 = UpgIsRun(&DAT_100161f0);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_100138d8,0x5a,0x5a);
      TryUpgrade(&DAT_100137f0,99,100);
    }
    cVar2 = UpgIsRun(&DAT_100138d8);
    if (cVar2 != '\0') {
      TryUpgrade(&DAT_100138c0,0x5a,0x5a);
      TryUpgrade(&DAT_10013800,0x46,10);
      FUN_100033c0();
    }
    cVar2 = UpgIsDone(&DAT_10016030);
    if (cVar2 != '\0') {
      TryUnit(&DAT_100135e8,10,10,0x5a);
      TryUnit(&DAT_100135e8,0xf,3,10);
    }
    SetUpgradeLock(1,0);
    iVar7 = GetMoney(0);
    if ((((14000 < iVar7) && (cVar2 = UpgIsRun(&DAT_10013720), cVar2 != '\0')) &&
        (iVar7 = GetMoney(1), iVar7 < 0x1d4c)) &&
       (cVar2 = UpgIsRun(&DAT_100138d8), cVar2 == '\0')) {
      SetUpgradeLock(1,1);
    }
    cVar2 = UpgIsRun(&DAT_100138d8);
    if (((cVar2 == '\0') || (cVar2 = UpgIsRun(&DAT_10016070), cVar2 == '\0')) ||
       (cVar2 = UpgIsDone(&DAT_10016138), cVar2 == '\0')) {
LAB_10003d3c:
      if (iVar4 == 0x5f) {
        TryUpgrade(&DAT_100136e8,0x46,10);
        TryUnit(&DAT_10016318,1,0x32,0x1e);
        TryUnit(&DAT_10016318,2,0x1e,0x1e);
        TryUnit(&DAT_10016318,3,0x14,0x1e);
        TryUnit(&DAT_10016318,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = GetMoney(3), 50000 < iVar7 && (iVar7 = GetMoney(1), iVar7 < 0x2008)
          ))) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsRun(&DAT_10015fa0);
      if (((cVar2 == '\0') && (iVar7 = GetMoney(3), 60000 < iVar7)) &&
         (iVar7 = GetMoney(1), iVar7 < 11000)) {
        SetUpgradeLock(1,1);
      }
      cVar2 = UpgIsDone(&DAT_10015fa0);
      if (cVar2 == '\0') goto LAB_10003d3c;
      if (iVar4 == 0x1c) {
        iVar4 = GetMoney(3);
        if ((50000 < iVar4) && (iVar4 = GetMoney(4), 0x1c84 < iVar4)) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -20000 < 0;
LAB_10003d2c:
          if (bVar14 != bVar13) {
            SetUpgradeLock(1,1);
          }
        }
      }
      else if (iVar4 == 0x28) {
        iVar4 = GetMoney(3);
        if ((50000 < iVar4) && (iVar4 = GetMoney(4), 0x2648 < iVar4)) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -24000 < 0;
          goto LAB_10003d2c;
        }
      }
      else {
        if (iVar4 != 0x37) goto LAB_10003d3c;
        iVar4 = GetMoney(3);
        if (80000 < iVar4) {
          iVar4 = GetMoney(1);
          bVar14 = 0;
          bVar13 = iVar4 + -26000 < 0;
          goto LAB_10003d2c;
        }
      }
    }
    if (((0x50 < iVar5) && (iVar10 == iVar9)) &&
       (TryUnit(&DAT_10013858,1,0x50,10), 0x5f < iVar5)) {
      TryUnit(&DAT_10013858,2,0x50,10);
      TryUnit(&DAT_10013858,3,0x32,10);
      TryUnit(&DAT_10013858,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_100161f0), cVar2 != '\0')) {
      TryUnit(&DAT_100160e0,0x4b,1,0x1e);
      UpgIsDone(&DAT_10016118);
      UpgIsDone(&DAT_10016030);
    }
    GetUnits(&DAT_10013598);
    TryUnit(&DAT_10016170,3,0x5a,0x5a);
    cVar2 = UpgIsDone(&DAT_10016070);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10016170,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = UpgIsDone(&DAT_100161f0), cVar2 != '\0')) {
      if (iVar6 == 0) {
        TryUnit(&DAT_10016058,2,0x5a,0x14);
        TryUnit(&DAT_10016058,3,0x5a,0x14);
        TryUnit(&DAT_10016058,4,0x5a,0x14);
      }
      iVar4 = GetUnits(&DAT_10016060);
      if (0x14 < iVar4) {
        TryUpgrade(&DAT_10016188,0x5a,100);
        TryUpgrade(&DAT_10016190,0x50,0x46);
      }
      TryUpgrade(&DAT_10016070,0x3c,0x5a);
      cVar2 = UpgIsRun(&DAT_10013888);
      if (cVar2 != '\0') {
        TryUpgrade(&DAT_100160e8,0x5a,0x5a);
        TryUpgrade(&DAT_100160f8,0x5a,0x5a);
        TryUpgrade(&DAT_10016100,0x46,0x5a);
        TryUpgrade(&DAT_100160f0,0x46,0x5a);
      }
    }
    TryUpgrade(&DAT_10013720,99,100);
    TryUpgrade(&DAT_10013860,0x3c,0x5a);
    iVar4 = GetUnits(&DAT_100161d0);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        TryUnit(&DAT_10016060,500,10,10);
      }
      FUN_10003370();
    }
  }
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_100135b0,0x5f,0x5a);
    TryUpgrade(&DAT_10013688,0x5f,0x5a);
    TryUpgrade(&DAT_100135a8,0x5f,0x5a);
    TryUnit(&DAT_100161d0,2,0x5f,0x5a);
  }
  cVar1 = UpgIsRun(&DAT_10013720);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10016178,0x5f,0x5a);
    TryUpgrade(&DAT_10016180,0x5f,0x5a);
  }
  iVar4 = GetReadyUnits(&DAT_100137f8);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = GetUnits(&DAT_10015ea0);
  if ((((iVar4 != 0) && (cVar1 = UpgIsRun(&DAT_100161f0), cVar1 == '\0')) &&
      (iVar4 = GetMoney(1), 800 < iVar4)) &&
     ((iVar4 = GetMoney(3), iVar4 < 6000 && (iVar4 = GetMoney(4), 3000 < iVar4)))) {
    AI_Torg(4,3,3000);
  }
  iVar4 = GetMoney(3);
  if ((iVar4 < 1000) && (iVar4 = GetMoney(2), 5000 < iVar4)) {
    AI_Torg(2,3,4000);
  }
  cVar1 = UpgIsDone(&DAT_10016178);
  if ((cVar1 == '\0') || (cVar1 = UpgIsDone(&DAT_10016180), cVar1 == '\0')) {
    iVar4 = GetMoney(2);
    if (iVar4 < 0x1adb1) goto LAB_1000425a;
    uVar17 = 90000;
    uVar15 = 1;
  }
  else {
    iVar4 = GetMoney(2);
    if (110000 < iVar4) {
      AI_Torg(2,1,100000);
    }
    iVar4 = GetMoney(0);
    if (iVar4 == 0) goto LAB_1000425a;
    iVar4 = GetMoney(1);
    if ((iVar4 != 0) && (iVar4 = GetMoney(4), iVar4 < 5000)) {
      iVar4 = GetMoney(4);
      iVar5 = GetMoney(5);
      if (iVar5 < iVar4) {
        AI_Torg(2,5,25000);
        AI_Torg(2,4,25000);
      }
      else {
        AI_Torg(2,4,25000);
        AI_Torg(2,5,25000);
      }
      goto LAB_1000425a;
    }
    iVar4 = GetMoney(5);
    if ((iVar4 < 5000) && (iVar4 = GetMoney(0), iVar4 != 0)) {
      AI_Torg(2,5,50000);
    }
    iVar4 = GetMoney(5);
    if ((4999 < iVar4) || (iVar4 = GetMoney(0), iVar4 == 0)) goto LAB_1000425a;
    uVar17 = 50000;
    uVar15 = 5;
  }
  AI_Torg(2,uVar15,uVar17);
LAB_1000425a:
  iVar4 = GetMoney(0);
  if (150000 < iVar4) {
    AI_Torg(0,1,100000);
  }
  iVar4 = GetMoney(4);
  if (80000 < iVar4) {
    AI_Torg(4,1,40000);
  }
  iVar4 = GetMoney(5);
  if (80000 < iVar4) {
    AI_Torg(5,1,40000);
  }
  return;
}





void FUN_100042d0(void)

{
  int iVar1;
  
  iVar1 = GetMoney(3);
  if (0x672 < iVar1) {
    TryUpgrade(&DAT_100162d0,0x28,100);
    TryUpgrade(&DAT_100162d8,0x5a,100);
    TryUpgrade(&DAT_100162c0,0x5a,100);
    TryUpgrade(&DAT_100162c8,0x5a,100);
    TryUpgrade(&DAT_100162e0,0x5a,100);
    TryUpgrade(&DAT_10016218,0x5a,100);
    TryUpgrade(&DAT_10016200,0x5a,100);
    TryUpgrade(&DAT_10016208,0x5a,100);
    TryUpgrade(&DAT_10016220,0x5a,100);
    TryUpgrade(&DAT_10016228,0x5a,100);
    TryUpgrade(&DAT_100161e0,0x32,100);
    TryUpgrade(&DAT_10015f48,0x32,100);
  }
  return;
}





void FUN_100043b0(void)

{
  TryUpgrade(&DAT_10013890,0x5a,100);
  TryUpgrade(&DAT_10013898,0x5a,100);
  TryUpgrade(&DAT_10013888,0x5a,100);
  TryUpgrade(&DAT_10015ef8,10,100);
  TryUpgrade(&DAT_10015ee8,10,100);
  return;
}





void FUN_10004400(void)

{
  TryUpgrade(&DAT_10016158,0x1e,0x32);
  TryUpgrade(&DAT_10016150,0x1e,0x32);
  TryUpgrade(&DAT_10016120,0x1e,0x32);
  TryUpgrade(&DAT_10016118,0x1e,0x32);
  TryUpgrade(&DAT_10016018,0x1e,0x32);
  TryUpgrade(&DAT_10016020,0x1e,0x32);
  TryUpgrade(&DAT_10016028,0x1e,0x32);
  TryUpgrade(&DAT_10016030,0x1e,0x32);
  return;
}





void FUN_100052c0(void)

{
  TryUnit(&DAT_10015f58,1,100,100);
  TryUnit(&DAT_10015f38,1,100,100);
  TryUnit(&DAT_10015f50,1,100,100);
  TryUnit(&DAT_100137f8,1,100,100);
  return;
}





int  FUN_10005310(int *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_10013608) {
    cVar1 = UpgIsDone(&DAT_100162c0);
    if (cVar1 != '\0') {
      cVar1 = UpgIsDone(&DAT_10016208);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}





void FUN_10005350(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetUnits(&DAT_100161f8);
  if (iVar2 == 0) {
    iVar2 = GetUnits(&DAT_10013848);
    if (iVar2 != 0) goto LAB_10005374;
  }
  else {
LAB_10005374:
    TryUpgrade(&DAT_100138d0,100,100);
    TryUpgrade(&DAT_10016178,100,100);
    TryUpgrade(&DAT_10016180,100,100);
  }
  iVar2 = GetUnits(&DAT_10016330);
  if (iVar2 < 0x15) {
    iVar2 = GetUnits(&DAT_100162b0);
    if (iVar2 < 0x15) {
      iVar2 = GetUnits(&DAT_10013608);
      if (iVar2 < 0x8d) goto LAB_1000543d;
    }
  }
  TryUpgrade(&DAT_100135a8,0x5f,100);
  TryUpgrade(&DAT_100135b0,0x5f,100);
  iVar2 = GetUnits(&DAT_10016330);
  if (iVar2 < 0x8d) {
    iVar2 = GetUnits(&DAT_100162b0);
    if (0x3c < iVar2) goto LAB_1000542b;
    uVar3 = 0xf;
  }
  else {
LAB_1000542b:
    uVar3 = 0x5f;
  }
  TryUpgrade(&DAT_10013688,uVar3,100);
LAB_1000543d:
  iVar2 = GetUnits(&DAT_10013608);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_100162d0,0x50,100);
    TryUpgrade(&DAT_100162d8,0x55,100);
    TryUpgrade(&DAT_100162c0,0x5a,100);
    TryUpgrade(&DAT_10016218,0x50,100);
    TryUpgrade(&DAT_10016200,0x55,100);
    TryUpgrade(&DAT_10016208,0x5a,100);
    iVar2 = GetUnits(&DAT_10013608);
    if (0x78 < iVar2) {
      TryUpgrade(&DAT_100162c8,0x5a,100);
      TryUpgrade(&DAT_100162e0,0x5a,100);
      TryUpgrade(&DAT_10016220,0x5a,100);
      TryUpgrade(&DAT_10016228,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10016060);
  if (0x1e < iVar2) {
    TryUpgrade(&DAT_10013890,0x5a,100);
    TryUpgrade(&DAT_10013898,0x5a,100);
    TryUpgrade(&DAT_10013888,0x5a,100);
    TryUpgrade(&DAT_10015ef8,0x1e,100);
    TryUpgrade(&DAT_10015ee8,0x1e,100);
    TryUpgrade(&DAT_10015ef0,0x1e,100);
    TryUpgrade(&DAT_10016188,0x5a,100);
    iVar2 = GetUnits(&DAT_10016060);
    if (100 < iVar2) {
      TryUpgrade(&DAT_10016190,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013680);
  if (4 < iVar2) {
    TryUpgrade(&DAT_100161e0,0x5a,100);
    TryUpgrade(&DAT_10015f48,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10016330);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_100160b0,0x50,100);
    TryUpgrade(&DAT_100160a8,0x55,100);
    TryUpgrade(&DAT_100160a0,0x5a,100);
    TryUpgrade(&DAT_10015f98,0x50,100);
    TryUpgrade(&DAT_10015f90,0x55,100);
    TryUpgrade(&DAT_10015f88,0x5a,100);
    iVar2 = GetUnits(&DAT_10016330);
    if (0x32 < iVar2) {
      TryUpgrade(&DAT_10016098,0x5f,100);
      TryUpgrade(&DAT_10016088,0x5f,100);
      TryUpgrade(&DAT_100160d8,0x5f,100);
      TryUpgrade(&DAT_10015f80,0x5f,100);
      TryUpgrade(&DAT_10015f78,0x5f,100);
      TryUpgrade(&DAT_10015f70,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_100162b0);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_100136c8,0x5a,100);
    TryUpgrade(&DAT_100136c0,0x5a,100);
    TryUpgrade(&DAT_100136b8,0x5a,100);
    TryUpgrade(&DAT_10013638,0x5a,100);
    TryUpgrade(&DAT_10013630,0x5a,100);
    TryUpgrade(&DAT_10013628,0x5f,100);
    TryUpgrade(&DAT_10013620,0x5f,100);
    TryUpgrade(&DAT_100135f8,0x5f,100);
    TryUpgrade(&DAT_100135f0,0x5f,100);
    cVar1 = UpgIsRun(&DAT_100135f0);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_100136a0,0x5f,100);
      TryUpgrade(&DAT_10013698,0x5f,100);
      TryUpgrade(&DAT_10013690,0x5f,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013610);
  if (0x14 < iVar2) {
    iVar2 = GetUnits(&DAT_10013600);
    if (iVar2 < 0x14) {
      TryUpgrade(&DAT_10013880,0x50,100);
      TryUpgrade(&DAT_10013878,0x55,100);
      TryUpgrade(&DAT_10013870,0x5a,100);
      TryUpgrade(&DAT_10013838,0x5f,100);
      TryUpgrade(&DAT_10013830,0x5f,100);
      TryUpgrade(&DAT_10013828,0x5f,100);
      TryUpgrade(&DAT_10016188,0x5a,100);
    }
  }
  iVar2 = GetUnits(&DAT_10013600);
  if (0x14 < iVar2) {
    TryUpgrade(&DAT_100135d8,0x50,100);
    TryUpgrade(&DAT_100135d0,0x55,100);
    TryUpgrade(&DAT_100135c8,0x5a,100);
    TryUpgrade(&DAT_10016298,0x5f,100);
    TryUpgrade(&DAT_10016290,0x5f,100);
    TryUpgrade(&DAT_10016288,0x5f,100);
    TryUpgrade(&DAT_10016310,10,100);
    TryUpgrade(&DAT_10016308,0xf,100);
    TryUpgrade(&DAT_10016358,0x14,100);
    TryUpgrade(&DAT_10016350,0x19,100);
    TryUpgrade(&DAT_10016348,0x19,100);
    TryUpgrade(&DAT_10016340,0x19,100);
    TryUpgrade(&DAT_10016188,0x5a,100);
    TryUpgrade(&DAT_10016190,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015f00);
  if (0x19 < iVar2) {
    TryUpgrade(&DAT_10013660,0x5a,100);
    TryUpgrade(&DAT_10013668,0x5a,100);
    TryUpgrade(&DAT_10013670,0x5a,100);
    TryUpgrade(&DAT_10013678,0x5a,100);
    TryUpgrade(&DAT_10013640,0x5a,100);
    TryUpgrade(&DAT_10013650,0x5a,100);
    TryUpgrade(&DAT_10013708,0x5a,100);
    TryUpgrade(&DAT_10013710,0x5a,100);
    TryUpgrade(&DAT_10013718,0x5a,100);
    TryUpgrade(&DAT_100136f0,0x5a,100);
    TryUpgrade(&DAT_100136f8,0x5a,100);
    TryUpgrade(&DAT_10013700,0x5a,100);
    iVar2 = GetUnits(&DAT_10015f00);
    if (iVar2 < 0x3d) {
      TryUpgrade(&DAT_10015fa8,0xf,100);
      uVar3 = 0xf;
    }
    else {
      TryUpgrade(&DAT_10015fa8,0x5a);
      uVar3 = 0x5a;
    }
    TryUpgrade(&DAT_10016008,uVar3,100);
    cVar1 = UpgIsRun(&DAT_10015fa8);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_10016008);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_10016000,0x5a,100);
      }
    }
    TryUpgrade(&DAT_10016188,0x5a,100);
    TryUpgrade(&DAT_10016190,0x5a,100);
  }
  cVar1 = UpgIsDone(&DAT_10016288);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_100160f0,0x5a,100);
    cVar1 = UpgIsRun(&DAT_100160f0);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016100,0x5a,100);
      cVar1 = UpgIsRun(&DAT_10016100);
      if (cVar1 != '\0') {
        TryUpgrade(&DAT_100160f8,0x5a,100);
        cVar1 = UpgIsRun(&DAT_100160f8);
        if (cVar1 != '\0') {
          TryUpgrade(&DAT_100160e8,0x5a,100);
        }
      }
    }
  }
  return;
}





void FUN_10005b30(void)

{
  char cVar1;
  int iVar2;
  
  TryUpgrade(&DAT_100162f8,0x32,100);
  iVar2 = GetUnits(&DAT_10015ea0);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_100135e0,100,100);
  }
  TryUpgrade(&DAT_10015ff8,100,100);
  iVar2 = FUN_10005310(&DAT_10013608);
  if ((iVar2 != 0) || ((DAT_10015ed8 != 0 && (DAT_10015ed8 != 5)))) {
    TryUpgrade(&DAT_100161f0,0x5a,100);
  }
  iVar2 = GetUnits(&DAT_10015f68);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10015fc0,100,100);
  }
  cVar1 = UpgIsRun(&DAT_100160d0);
  if (cVar1 != '\0') {
    TryUpgrade(&DAT_10015fb0,100,100);
  }
  TryUpgrade(&DAT_100160d0,0x5c,100);
  TryUpgrade(&DAT_10016080,0x62,100);
  iVar2 = GetUnits(&DAT_10016058);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10016138,0x62,100);
  }
  TryUpgrade(&DAT_10015fa0,0x62,100);
  iVar2 = GetUnits(&DAT_100161d8);
  if (iVar2 != 0) {
    TryUpgrade(&DAT_10013860,100,100);
  }
  return;
}






void FUN_10005c70(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  TryUnit(&DAT_100161d8,3,100,100);
  iVar2 = GetReadyUnits(&DAT_10015f68);
  if (iVar2 != 0) {
    TryUnit(&DAT_10015f58,2,100,100);
    TryUnit(&DAT_10015f50,4,100,100);
  }
  TryUnit(&DAT_10015f58,1,100,100);
  TryUnit(&DAT_10015f38,1,100,100);
  if (*(int *)(&DAT_10015f18 + DAT_10016234 * 4) == 0) {
    FUN_100052c0();
    iVar2 = GetReadyUnits(&DAT_100137f8);
    if (iVar2 == 0) {
      return;
    }
  }
  TryUnit(&DAT_10016168,1,100,100);
  TryUnit(&DAT_10015f38,2,100,100);
  iVar2 = GetReadyUnits(&DAT_10015f38);
  if ((iVar2 < 2) && (iVar2 = GetStartRes(), iVar2 != 0)) {
    return;
  }
  TryUnit(&DAT_100161d0,2,100,100);
  iVar2 = GetReadyUnits(&DAT_100161d0);
  iVar3 = GetUnits(&DAT_100161d0);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    TryUnit(&DAT_10015ea0,1,100,100);
    iVar2 = GetPeaceTimeLeft();
    if (iVar2 < 3) {
      TryUnit(&DAT_10015f68,1,100,100);
      iVar2 = GetReadyUnits(&DAT_10015f68);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_100052c0();
    TryUnit(&DAT_10015f38,4,100,100);
    iVar2 = GetReadyUnits(&DAT_10015f38);
    if (2 < iVar2) {
      TryUnit(&DAT_10016058,3,100,100);
      iVar2 = GetUnits(&DAT_100161d8);
      if (iVar2 != 0) {
        TryUnit(&DAT_10016058,4,100,100);
      }
      TryUnit(&DAT_10013598,1,100,100);
      TryUnit(&DAT_10013598,3,0x28,100);
      cVar1 = UpgIsDone(&DAT_10013860);
      if (cVar1 != '\0') {
        TryUnit(&DAT_10016058,5,100,100);
      }
      TryUnit(&DAT_10016078,1,100,100);
    }
  }
  return;
}






void  FUN_10005e90(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetUnits(&DAT_100161f8,param_1);
  if (iVar2 < 0x28) {
    SetAIRegister(DAT_10016234 + 8,0);
  }
  iVar2 = GetUnits(&DAT_100161f8);
  if (iVar2 < 0x9d) {
    iVar2 = GetReadyUnits(&DAT_10016058);
    if (iVar2 == 0) goto LAB_10005ef2;
  }
  SetAIRegister(DAT_10016234 + 8,1);
LAB_10005ef2:
  iVar2 = 2;
  do {
    TryUnit(&DAT_10016110,1000,0x14,100);
    iVar3 = GetUnits(&DAT_10013608);
    if (iVar3 < 0x8c) {
      TryUnit(&DAT_10013608,1000,0x14,100);
    }
    else {
      TryUnit(&DAT_10013608,1000,0x14,0x28);
      TryUnit(&DAT_10016060,1000,0x14,100);
    }
    iVar3 = GetAIRegister(DAT_10016234 + 8);
    if (iVar3 == 0) {
      iVar3 = GetPeaceTimeLeft();
      if (iVar3 < 1) {
        TryUnit(&DAT_100161f8,0xa0,0x14,100);
      }
    }
    if (0) {
LAB_10005fc5:
      iVar3 = GetMoney(5);
      if (2000 < iVar3) {
        iVar3 = GetMoney(4);
        if (2000 < iVar3) {
          iVar3 = 0x1e;
          do {
            TryUnit(&DAT_10013808,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = GetUnitCost(DAT_10016234 & 0xff,&DAT_10013808,1);
      if (iVar3 < 0x78) goto LAB_10005fc5;
    }
    cVar1 = UpgIsDone(&DAT_10015fa0);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    TryUnit(&DAT_10016330,1000,0x14,uVar4);
    TryUnit(&DAT_10013600,1000,0x14,100);
    TryUnit(&DAT_10015f00,1000,0x14,100);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}






void  FUN_10006070(int param_1)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = GetReadyUnits(&DAT_100137f8,param_1);
  if (iVar2 != 0) {
    iVar2 = GetStartRes();
    if (iVar2 == 3) {
      iVar2 = GetAIRegister(DAT_10016234);
      if (iVar2 == 0) {
        AI_Torg(2,3,500000);
        AI_Torg(0,3,80000);
        SetAIRegister(DAT_10016234,1);
        return;
      }
    }
    else {
      iVar2 = GetReadyUnits(&DAT_100137f8);
      if (iVar2 != 0) {
        iVar2 = GetAIRegister(DAT_10016234);
        if (iVar2 == 0) {
          AI_Torg(5,3,4000);
          iVar2 = GetStartRes();
          if (iVar2 == 2) {
            AI_Torg(4,0,1000);
            AI_Torg(4,2,1000);
          }
          iVar2 = GetStartRes();
          if (iVar2 == 1) {
            AI_Torg(4,0,600);
            AI_Torg(4,2,600);
          }
          SetAIRegister(DAT_10016234,1);
        }
        cVar1 = UpgIsRun(&DAT_100161f0);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_100160d0);
          if (cVar1 == '\0') {
            iVar2 = GetReadyUnits(&DAT_10015ea0);
            if (iVar2 != 0) {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_10016234 & 0xff,&DAT_100160d0,5);
              }
              FUN_10003030(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = UpgIsRun(&DAT_100160d0);
        if (cVar1 != '\0') {
          cVar1 = UpgIsRun(&DAT_10015fa0);
          if (cVar1 == '\0') {
            if (0) {
              iVar2 = 0;
            }
            else {
              iVar2 = GetUpgradeCost(DAT_10016234 & 0xff,&DAT_10015fa0,3);
            }
            uVar3 = FUN_10003030(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (0) {
                iVar2 = 0;
              }
              else {
                iVar2 = GetUpgradeCost(DAT_10016234 & 0xff,&DAT_10015fa0,1);
              }
              uVar3 = FUN_10003030(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = GetUpgradeCost(DAT_10016234 & 0xff,&DAT_10015fa0,4);
                }
                FUN_10003030(4,(iVar2 * 0xb) / 10,2);
              }
            }
          }
        }
        iVar2 = GetMoney(2);
        if (100000 < iVar2) {
          AI_Torg(0,2,5000);
          uVar3 = GetMoney(2);
          AI_Torg(2,1,uVar3);
        }
        iVar2 = GetMoney(0);
        if (100000 < iVar2) {
          AI_Torg(2,0,5000);
          uVar3 = GetMoney(0);
          AI_Torg(0,1,uVar3);
        }
      }
    }
  }
  return;
}





void  FUN_10006390(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  int uVar5;
  
  SetPDistribution(0,4,4,param_1);
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    return;
  }
  SetPDistribution(9,4,4);
  iVar2 = GetStartRes();
  if (iVar2 == 3) {
    return;
  }
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    SetPDistribution(0,6,3);
    return;
  }
  SetPDistribution(9,4,4);
  cVar1 = UpgIsRun(&DAT_10016080);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost(DAT_10016234,&DAT_10016080,3);
    }
    iVar3 = GetMoney(3);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 4;
      uVar4 = 4;
    }
    else {
      uVar5 = 6;
      uVar4 = 6;
    }
    SetPDistribution(9,uVar4,uVar5);
  }
  cVar1 = UpgIsRun(&DAT_10015fa0);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost(DAT_10016234,&DAT_10015fa0,3);
    }
    iVar3 = GetMoney(3);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 9;
      uVar4 = 2;
    }
    else {
      uVar5 = 6;
      uVar4 = 6;
    }
    SetPDistribution(9,uVar4,uVar5);
  }
  cVar1 = UpgIsRun(&DAT_100160d0);
  if (cVar1 == '\0') {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUpgradeCost(DAT_10016234,&DAT_100160d0,3);
    }
    iVar3 = GetMoney(3);
    if (iVar3 < (iVar2 * 0xd) / 10) {
      uVar4 = 9;
    }
    else {
      uVar4 = 6;
    }
    SetPDistribution(uVar4,9,1);
  }
  cVar1 = UpgIsRun(&DAT_100162c0);
  if (((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_10016208), cVar1 == '\0')) &&
     (iVar2 = GetMoney(3), iVar2 < 9000)) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015f68);
  if ((iVar2 == 0) && (iVar2 = GetPeaceTimeLeft(), iVar2 < 2)) {
    if (0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetUnitCost(DAT_10016234,&DAT_10015f68,2);
    }
    iVar3 = GetMoney(2);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 3;
      uVar4 = 5;
    }
    else {
      uVar5 = 1;
      uVar4 = 7;
    }
    SetPDistribution(9,uVar4,uVar5);
  }
  cVar1 = UpgIsRun(&DAT_100161f0);
  if (cVar1 == '\0') {
    SetPDistribution(9,1,1);
  }
  cVar1 = UpgIsRun(&DAT_10015ff8);
  if ((cVar1 == '\0') || (cVar1 = UpgIsRun(&DAT_100135e0), cVar1 == '\0')) {
    SetPDistribution(9,4,1);
  }
  iVar2 = GetUnits(&DAT_10015ea0);
  if (iVar2 == 0) {
    SetPDistribution(6,4,4);
  }
  cVar1 = UpgIsRun(&DAT_100162f8);
  if (cVar1 != '\0') {
    return;
  }
  SetPDistribution(9,1,1);
  return;
}





void FUN_100066d0(void)

{
  char cVar1;
  
  SetMinesUpgradeRules(&DAT_10016518);
  cVar1 = UpgIsRun(&DAT_100162c0);
  if (cVar1 != '\0') {
    cVar1 = UpgIsRun(&DAT_10016208);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f16c);
      return;
    }
  }
  if (((DAT_10015ed8 == 2) || (DAT_10015ed8 == 3)) || (DAT_10015ed8 == 4)) {
    SetMinesUpgradeRules(&DAT_1000f1d8);
  }
  else {
    cVar1 = UpgIsRun(&DAT_100161f0);
    if (cVar1 != '\0') {
      cVar1 = UpgIsRun(&DAT_100160d0);
      if (cVar1 == '\0') {
        SetMinesUpgradeRules(&DAT_10016518);
        return;
      }
    }
    cVar1 = UpgIsRun(&DAT_100160d0);
    if (cVar1 != '\0') {
      SetMinesUpgradeRules(&DAT_1000f1d8);
      return;
    }
  }
  return;
}





void FUN_10006780(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = FUN_10005310(&DAT_10013608);
  if (iVar1 != 0) {
    SetDefenseState(0);
  }
  iVar1 = GetMaxPeaceTime();
  if ((iVar1 < 1) && (iVar1 = GetReadyUnits(&DAT_10013858), iVar1 < 1)) {
    return;
  }
  SetDefenseState(0);
  return;
}





void FUN_100067d0(void)

{
  char cVar1;
  
  cVar1 = UpgIsDone(&DAT_10016118);
  if (cVar1 != '\0') {
    TryUnit(&DAT_100162f0,0x1e,0x1e,0x3c);
  }
  cVar1 = UpgIsDone(&DAT_10016030);
  if (cVar1 != '\0') {
    TryUnit(&DAT_100135e8,0x14,0x1e,0x3c);
  }
  TryUnit(&DAT_10013848,0x3c,0x50,100);
  TryUpgrade(&DAT_10016158,0x1e,100);
  TryUpgrade(&DAT_10016150,0x1e,100);
  TryUpgrade(&DAT_10016120,0x1e,100);
  TryUpgrade(&DAT_10016118,0x1e,100);
  TryUpgrade(&DAT_10016128,0x1e,100);
  TryUpgrade(&DAT_10016018,0x1e,100);
  TryUpgrade(&DAT_10016020,0x1e,100);
  TryUpgrade(&DAT_10016028,0x1e,100);
  TryUpgrade(&DAT_10016030,0x1e,100);
  return;
}





void FUN_100068c0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = GetReadyUnits(&DAT_10013858);
  iVar3 = GetUnits(&DAT_100161d0);
  iVar4 = GetReadyUnits(&DAT_100161d0);
  iVar5 = GetUnits(&DAT_10015ea0);
  iVar6 = GetReadyUnits(&DAT_10015ea0);
  iVar7 = GetUnits(&DAT_10013858);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_10016130)) {
    TryUnit(&DAT_10013858,4,0x32,100);
    cVar1 = UpgIsRun(&DAT_10016138);
    if (cVar1 != '\0') {
      TryUnit(&DAT_10013858,6,0x32,100);
    }
    cVar1 = UpgIsRun(&DAT_10015fa0);
    if (cVar1 != '\0') {
      TryUnit(&DAT_10013858,8,0x32,100);
    }
  }
  TryUpgrade(&DAT_10016268,0x32,100);
  TryUpgrade(&DAT_10016250,0x28,100);
  TryUpgrade(&DAT_10016260,0x1e,100);
  TryUpgrade(&DAT_10016240,0x14,100);
  TryUpgrade(&DAT_10016248,0xf,100);
  TryUpgrade(&DAT_10016238,10,100);
  return;
}





void FUN_100069f0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  iVar2 = GetReadyUnits(&DAT_100161d8);
  iVar3 = GetUnits(&DAT_100161d8);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_100161d8,5,100,100);
  }
  TryUnit(&DAT_10015f38,1,100,100);
  TryUnit(&DAT_10016168,1,100,100);
  TryUnit(&DAT_100161d0,2,100,100);
  iVar2 = GetReadyUnits(&DAT_100161d0);
  iVar3 = GetUnits(&DAT_100161d0);
  if (iVar3 == iVar2) {
    TryUnit(&DAT_10015ea0,1,100,100);
    iVar2 = GetReadyUnits(&DAT_10015ea0);
    if (iVar2 != 0) {
      TryUnit(&DAT_10015f50,1,100,100);
      TryUnit(&DAT_10015f58,1,100,100);
      TryUnit(&DAT_100137f8,1,100,100);
      iVar2 = GetReadyUnits(&DAT_100137f8);
      if (iVar2 != 0) {
        TryUnit(&DAT_10015f68,1,100,100);
        TryUnit(&DAT_10016078,1,100,100);
        TryUnit(&DAT_10013598,1,100,100);
        TryUnit(&DAT_10016058,1,100,100);
        cVar1 = UpgIsRun(&DAT_10015fa0);
        if (cVar1 != '\0') {
          iVar2 = GetReadyUnits(&DAT_10015f38);
          iVar3 = GetUnits(&DAT_10015f38);
          if (iVar3 == iVar2) {
            iVar2 = GetExtraction(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            TryUnit(&DAT_10015f38,uVar4,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_10016058);
          iVar3 = GetUnits(&DAT_10016058);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_10016058,7,100,100);
          }
          iVar2 = GetReadyUnits(&DAT_10013598);
          iVar3 = GetUnits(&DAT_10013598);
          if (iVar3 == iVar2) {
            TryUnit(&DAT_10013598,3,100,100);
          }
        }
      }
    }
  }
  return;
}






void FUN_10006c00(void)

{
  int iVar1;
  
  SetDefenseState(1);
  iVar1 = GetUnits(&DAT_10013808);
  if (iVar1 < 4) {
    SetAIRegister(DAT_10016234 + 8,0);
  }
  iVar1 = GetUnits(&DAT_10013808);
  if (0x5f < iVar1) {
    SetAIRegister(DAT_10016234 + 8,1);
  }
  iVar1 = GetAIRegister(DAT_10016234 + 8);
  SetDefenseState((((int)((unsigned int)iVar1 >> 8) << 8) | iVar1 == 0));
  SetDefenseState(0);
  return;
}






void FUN_10006c80(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int uVar2;
  
  uVar2 = 0;
  if (*(int *)(&DAT_10015f18 + DAT_10016234 * 4) != 0) {
    FUN_10006780();
    uVar2 = extraout_ECX;
  }
  FUN_10005e90(uVar2);
  FUN_100067d0();
  iVar1 = GetPeaceTimeLeft();
  if (iVar1 < 5) {
    FUN_100068c0();
  }
  FUN_10005c70();
  FUN_10005b30();
  iVar1 = GetPeaceTimeLeft();
  uVar2 = extraout_ECX_00;
  if (iVar1 < 3) {
    FUN_10005350();
    uVar2 = extraout_ECX_01;
  }
  FUN_10006070(uVar2);
  FUN_10006390(extraout_ECX_02);
  FUN_100066d0();
  return;
}






void FUN_10006ce0(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  
  FUN_10006c00();
  FUN_100069f0();
  iVar3 = 2;
  do {
    TryUnit(&DAT_10016110,1000,0x14,100);
    TryUnit(&DAT_10013608,1000,0x14,100);
    iVar2 = GetAIRegister(DAT_10016234 + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        TryUnit(&DAT_10013808,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      TryUnit(&DAT_100160e0,0x3c,10,100);
    }
    cVar1 = UpgIsDone(&DAT_10015fa0);
    if (cVar1 == '\0') {
      TryUnit(&DAT_10013610,1000,0x14,100);
    }
    TryUnit(&DAT_10013600,1000,0x14,100);
    TryUnit(&DAT_10015f00,1000,0x14,100);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_100067d0();
  FUN_10006070(extraout_ECX);
  FUN_10006390(extraout_ECX_00);
  FUN_10005350();
  FUN_10005b30();
  return;
}






void FUN_10006de0(void)

{
  DAT_10015ed8 = GetLandType();
  DAT_100162e8 = GetDifficulty();
  DAT_10013818 = GetStartRes();
  FUN_100030e0();
  SetMineBalanse(0x13,&DAT_1000f114);
  FUN_100066d0();
  SetMinesBuildingRules(&DAT_1000f244,0x1b);
  switch(DAT_10015ed8) {
  case 0:
  case 5:
    if (DAT_10013818 == 3) {
      SetMineBalanse(3,&DAT_1000f160);
      SetMinesUpgradeRules(&DAT_1000f16c);
      SetMinesBuildingRules(&DAT_1000f41c,5);
      FUN_10006ce0();
    }
    else {
      SetMineBalanse(0x13,&DAT_1000f114);
      SetMinesUpgradeRules(&DAT_10016518);
      if (DAT_10013818 == 0) {
        DAT_1000f248 = 4;
      }
      SetMinesBuildingRules(&DAT_1000f244,0x1b);
      FUN_10006c80();
    }
    break;
  case 1:
    ProcessMiddleSeaAI();
    break;
  case 2:
  case 3:
  case 4:
    SET_MINE_CAPTURE_RADIUS(0x122);
    SET_MINE_UPGRADE1_RADIUS(0x122);
    SET_MINE_UPGRADE2_RADIUS(0x122);
    SetMineBalanse(0x13,&DAT_1000f07c);
    FUN_10003400();
  }
  FUN_10003260();
  return;
}





__declspec(dllexport) void ProcessLandAI(void)

{
  return;
}





__declspec(dllexport) void ProcessMiddleSeaAI(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *puVar11;
  int uVar12;
  int uVar13;
  SetDefenseState(0);
  SetMineBalanse(0x13,&DAT_1000f030);
  iVar3 = GetUnits(&DAT_10016110);
  iVar4 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_10016138);
  GetUnits(&DAT_10013608);
  UpgIsDone(&DAT_10015fa0);
  GetUnits(&DAT_10016060);
  iVar5 = GetUnits(&DAT_10016330);
  iVar6 = GetUnits(&DAT_100162b0);
  iVar7 = GetUnits(&DAT_10013608);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = GetDifficulty();
  if (0 < iVar6) {
    TryUnit(&DAT_100162a8,0xf,0x14,0x28);
  }
  iVar6 = GetReadyUnits(&DAT_10013858);
  iVar7 = GetUnits(&DAT_10013858);
  if (iVar3 == 0) {
    return;
  }
  TryUnit(&DAT_10015f58,1,100,100);
  iVar8 = GetUnits(&DAT_10015f58);
  if (iVar8 == 0) {
    return;
  }
  TryUpgrade(&DAT_100162f8,100,100);
  cVar2 = FieldExist();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      TryUnit(&DAT_10016110,100,100,100);
      TryUnit(&DAT_10013608,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_100042d0();
    }
    SetPDistribution(0,1,1);
  }
  else {
    if (DAT_10016514 == 0) {
      if (12000 < iVar4) {
        SetPDistribution(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_10004639:
      SetPDistribution(9,uVar12,uVar13);
    }
    else {
      if (DAT_10016514 == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_10004639;
      }
      if (DAT_10016514 == 2) {
        uVar13 = 9;
        uVar12 = 4;
        goto LAB_10004639;
      }
    }
    uVar12 = 0x1c2;
    if (cVar1 != '\0') {
      uVar12 = 0x17c;
    }
    if (iVar3 < 0x19) {
      if (300 < iVar4) {
        TryUnit(&DAT_10016110,100,100,100);
        goto LAB_10004677;
      }
    }
    else {
LAB_10004677:
      if ((300 < iVar4) && (TryUnit(&DAT_10016110,uVar12,0xe8,100), 400 < iVar4)) {
        TryUnit(&DAT_10013608,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_100042d0();
    }
  }
  TryUnit(&DAT_10015f38,1,100,100);
  TryUnit(&DAT_10015f38,2,0x5a,5);
  TryUnit(&DAT_10015f38,3,0x5a,5);
  iVar8 = GetUnits(&DAT_100161d0);
  if (1 < iVar8) {
    TryUnit(&DAT_10015f38,2,0x50,5);
    iVar8 = GetUnits(&DAT_10015f38);
    if (1 < iVar8) {
      TryUnit(&DAT_10016058,1,99,0x5a);
    }
    iVar8 = GetReadyUnits(&DAT_10015f38);
    if (1 < iVar8) {
      TryUnit(&DAT_100137f8,1,100,100);
    }
    TryUpgrade(&DAT_10016090,99,100);
  }
  iVar8 = GetUnits(&DAT_10016110);
  if (0x23 < iVar8) {
    TryUnit(&DAT_100137f8,1,100,100);
  }
  TryUnit(&DAT_10016168,1,100,100);
  TryUnit(&DAT_100161d0,1,100,100);
  TryUnit(&DAT_100161d0,2,100,100);
  TryUnit(&DAT_10015f50,1,0x32,0x32);
  TryUnit(&DAT_10016168,2,10,5);
  TryUpgrade(&DAT_100135e0,0x50,100);
  iVar8 = GetUnits(&DAT_10015ea0);
  if (0 < iVar8) {
    TryUnit(&DAT_10016078,1,5,3);
  }
  cVar2 = FieldExist();
  if (cVar2 != '\0') {
    TryUnit(&DAT_10015ea0,1,0x5a,0x5a);
  }
  TryUnit(&DAT_10015f68,1,99,10);
  TryUnit(&DAT_10013598,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    TryUnit(&DAT_10015f58,2,0x1e,0x1e);
  }
  TryUnit(&DAT_100161d8,1,0x5a,0x14);
  TryUnit(&DAT_100161d8,2,0x50,5);
  TryUpgrade(&DAT_10015ff8,0x5a,99);
  TryUpgrade(&DAT_100161f0,0x5f,100);
  TryUpgrade(&DAT_10016138,100,100);
  TryUpgrade(&DAT_10015fc0,0x5a,0x5a);
  TryUpgrade(&DAT_10015fb0,0x5f,100);
  TryUpgrade(&DAT_10015fb8,0x5f,100);
  iVar8 = GetReadyUnits(&DAT_10016058);
  if (((iVar8 == 0) || (cVar2 = UpgIsRun(&DAT_10016138), cVar2 != '\0')) ||
     ((iVar8 = GetMoney(1), 0xe74 < iVar8 &&
      ((iVar8 = GetMoney(4), 0x157c < iVar8 && (iVar8 = GetMoney(5), 0x20d0 < iVar8)))
      ))) {
    SetUpgradeLock(1,0);
    SetUpgradeLock(4,0);
    SetUpgradeLock(3,0);
    SetUpgradeLock(1,0);
  }
  else {
    iVar8 = GetMoney(0);
    if ((iVar8 != 0) && (iVar8 = GetMoney(5), 0x20d0 < iVar8)) {
      iVar8 = GetMoney(5);
      if (14000 < iVar8) {
        AI_Torg(5,1,5000);
      }
      iVar8 = GetMoney(4);
      if (13000 < iVar8) {
        AI_Torg(4,1,5000);
      }
    }
  }
  TryUpgrade(&DAT_10013720,100,100);
  TryUnit(&DAT_10016258,1,0x32,0x5a);
  TryUnit(&DAT_10016258,2,0x14,0x32);
  TryUnit(&DAT_10016258,3,10,0x32);
  cVar2 = UpgIsDone(&DAT_100138d8);
  if (cVar2 == '\0') {
    iVar9 = GetUnitsByUsage(0,0x1c);
    iVar10 = GetUnitsByUsage(0,0x1b);
    iVar8 = GetUnitsByUsage(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_10015f10;
      goto LAB_10004aa3;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_10015f10;
      goto LAB_10004aa3;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_10013868;
LAB_10004aa3:
    TryUnit(puVar11,iVar8,0x32,0x32);
  }
  TryUpgrade(&DAT_100138d8,99,100);
  cVar2 = UpgIsRun(&DAT_100161f0);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_100138d8,0x5a,0x5a);
    TryUpgrade(&DAT_100137f0,99,100);
  }
  cVar2 = UpgIsRun(&DAT_100138d8);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_100138c0,0x5a,0x5a);
    TryUpgrade(&DAT_10013800,0x46,10);
    FUN_100033c0();
  }
  SetUpgradeLock(1,0);
  iVar8 = GetMoney(0);
  if ((((14000 < iVar8) && (cVar2 = UpgIsRun(&DAT_10013720), cVar2 != '\0')) &&
      (iVar8 = GetMoney(1), iVar8 < 0x1d4c)) &&
     (cVar2 = UpgIsRun(&DAT_100138d8), cVar2 == '\0')) {
    SetUpgradeLock(1,1);
  }
  TryUnit(&DAT_10016170,3,0x5a,0x5a);
  cVar2 = UpgIsDone(&DAT_10016070);
  if (cVar2 != '\0') {
    TryUnit(&DAT_10016170,0x14,10,0x5a);
  }
  TryUpgrade(&DAT_10016070,99,0x5a);
  TryUpgrade(&DAT_10016080,99,100);
  TryUpgrade(&DAT_10016268,0x32,0x32);
  TryUpgrade(&DAT_10016250,0x32,0x32);
  TryUpgrade(&DAT_10016260,0x32,0x32);
  TryUpgrade(&DAT_10016240,0x32,0x32);
  TryUpgrade(&DAT_10016248,0x32,0x32);
  TryUpgrade(&DAT_10016238,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     (TryUnit(&DAT_10013858,1,0x50,10), 0x3c < iVar3)) {
    TryUnit(&DAT_10013858,2,0x50,10);
    TryUnit(&DAT_10013858,3,0x32,10);
    TryUnit(&DAT_10013858,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    TryUnit(&DAT_100160e0,0x32,1,0x1e);
    TryUnit(&DAT_100161f8,0x14,1,0x1e);
  }
  else {
    TryUnit(&DAT_10013848,0x32,10,100);
    TryUnit(&DAT_100160e0,0x4b,1,0x1e);
    TryUnit(&DAT_100161f8,0x1e,1,0x1e);
    TryUpgrade(&DAT_100135b0,0x5f,0x5a);
    TryUpgrade(&DAT_10013688,0x5f,0x5a);
    TryUpgrade(&DAT_100135a8,0x5f,0x5a);
    cVar2 = UpgIsDone(&DAT_10016118);
    if (cVar2 != '\0') {
      TryUnit(&DAT_100162f0,5,0x1e,10);
    }
    cVar2 = UpgIsDone(&DAT_10016030);
    if (cVar2 != '\0') {
      TryUnit(&DAT_100135e8,10,0x1e,10);
    }
    FUN_10004400();
  }
  cVar2 = UpgIsDone(&DAT_10015fa0);
  if (cVar2 != '\0') {
    cVar2 = UpgIsDone(&DAT_10016080);
    if (cVar2 == '\0') {
      uVar13 = 2;
      uVar12 = 2;
    }
    else {
      uVar13 = 4;
      uVar12 = 4;
    }
    SetPDistribution(8,uVar12,uVar13);
  }
  iVar3 = GetUnits(&DAT_10016058);
  if (iVar3 != 0) {
    TryUnit(&DAT_10016170,6,0x5a,0x5a);
  }
  cVar2 = UpgIsDone(&DAT_10016070);
  if (cVar2 != '\0') {
    TryUnit(&DAT_10016170,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    TryUnit(&DAT_10016058,2,0x5f,0x14);
    TryUnit(&DAT_10016058,3,0x5f,0x14);
    TryUnit(&DAT_10016058,4,0x5f,0x14);
    TryUnit(&DAT_10016058,5,0x28,0x14);
    TryUnit(&DAT_10016058,6,0x28,0x14);
    TryUpgrade(&DAT_10015fa0,99,100);
    iVar3 = GetUnits(&DAT_10016060);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_10016188,0x5a,100);
      TryUpgrade(&DAT_10016190,0x50,0x46);
    }
    TryUpgrade(&DAT_10016070,0x3c,0x5a);
    cVar1 = UpgIsRun(&DAT_10013888);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_100160e8,0x5a,0x5a);
      TryUpgrade(&DAT_100160f8,0x5a,0x5a);
      TryUpgrade(&DAT_10016100,0x46,0x5a);
      TryUpgrade(&DAT_100160f0,0x46,0x5a);
    }
  }
  TryUpgrade(&DAT_10013720,99,100);
  TryUpgrade(&DAT_10013860,0x3c,0x5a);
  TryUpgrade(&DAT_100160d0,100,100);
  if (0x15e < iVar5) {
    TryUnit(&DAT_10016060,500,10,100);
    FUN_100043b0();
  }
  iVar3 = GetReadyUnits(&DAT_100137f8);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = GetMoney(0);
  iVar6 = GetMoney(2);
  iVar7 = GetMoney(4);
  iVar5 = GetMoney(5);
  iVar8 = GetMoney(1);
  if (iVar4 < 0x96) {
    if (iVar6 < 0x1389) {
      if (iVar6 < 0x3e9) {
        if (iVar3 < 0x1389) {
          if (iVar3 < 0x3e9) {
            if (iVar5 < 0x7d1) {
              if (iVar7 < 0x7d1) {
                if (iVar8 < 0x3e9) goto LAB_10005043;
                uVar13 = 500;
                uVar12 = 1;
              }
              else {
                uVar13 = 800;
                uVar12 = 4;
              }
            }
            else {
              uVar13 = 800;
              uVar12 = 5;
            }
          }
          else {
            uVar13 = 900;
            uVar12 = 0;
          }
        }
        else {
          uVar13 = 3000;
          uVar12 = 0;
        }
      }
      else {
        uVar13 = 900;
        uVar12 = 2;
      }
    }
    else {
      uVar13 = 3000;
      uVar12 = 2;
    }
    AI_Torg(uVar12,3,uVar13);
  }
LAB_10005043:
  iVar3 = GetReadyUnits(&DAT_10015ea0);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = UpgIsRun(&DAT_100161f0), cVar1 == '\0')) {
    if (3000 < iVar7) {
      AI_Torg(4,3,2000);
    }
    if (4000 < iVar5) {
      AI_Torg(5,3,3000);
    }
  }
  iVar3 = GetMoney(2);
  if (120000 < iVar3) {
    AI_Torg(2,1,100000);
  }
  iVar3 = GetMoney(0);
  if (100000 < iVar3) {
    AI_Torg(0,1,90000);
  }
  iVar3 = GetUnits(&DAT_10016168);
  if ((iVar3 != 0) && (cVar1 = UpgIsRun(&DAT_10016138), cVar1 == '\0')) {
    iVar3 = GetMoney(5);
    if ((9000 < iVar3) &&
       ((iVar3 = GetMoney(0), iVar3 != 0 && (iVar3 = GetMoney(1), iVar3 < 4000)))) {
      iVar3 = GetMoney(5);
      if (12000 < iVar3) {
        AI_Torg(5,1,3000);
      }
      iVar3 = GetMoney(4);
      if (8000 < iVar3) {
        AI_Torg(4,1,2000);
      }
      iVar3 = GetMoney(2);
      if (20000 < iVar3) {
        AI_Torg(2,1,12000);
      }
      iVar3 = GetMoney(3);
      if (30000 < iVar3) {
        AI_Torg(3,1,15000);
      }
    }
    iVar3 = GetMoney(5);
    if (((9000 < iVar3) && (iVar3 = GetMoney(1), iVar3 != 0)) &&
       (iVar3 = GetMoney(1), 4000 < iVar3)) {
      iVar3 = GetMoney(5);
      if (12000 < iVar3) {
        AI_Torg(5,4,3000);
      }
      iVar3 = GetMoney(2);
      if (20000 < iVar3) {
        AI_Torg(2,4,12000);
      }
      iVar3 = GetMoney(3);
      if (30000 < iVar3) {
        AI_Torg(3,4,15000);
      }
    }
  }
  iVar3 = GetAINation();
  if (*(int *)(&DAT_1001658c + iVar3 * 4) == 0) {
    AI_Torg(5,3,4000);
    iVar3 = GetAINation();
    *(int *)(&DAT_1001658c + iVar3 * 4) = 1;
  }
  return;
}






__declspec(dllexport) void InitAI(void)

{
  int iVar1;
  unsigned int uVar2;
  DAT_10016234 = GetAINation();
  FUN_10001000();
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x5a);
  SET_MINE_UPGRADE2_RADIUS(0x5a);
  SET_DEFAULT_MAX_WORKERS(1000);
  SET_MIN_PEASANT_BRIGADE(5);
  iVar1 = DAT_10016234 * 0x4b8;
  *(int *)(&DAT_10013a70 + iVar1) = 0;
  *(int *)(&DAT_10013c04 + iVar1) = 0;
  uVar2 = GetRandomIndex();
  *(unsigned int *)(&DAT_10015f18 + DAT_10016234 * 4) = uVar2 & 0x80;
  return;
}






__declspec(dllexport) void ProcessAI(void)

{
  DAT_10016234 = GetAINation();
  FUN_10006de0();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
