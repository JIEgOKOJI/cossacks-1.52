/* Auto-generated from Austria.c */
#include "game_api.h"

/* AI state variables */
long long DAT_1000f030 = 0;
long long DAT_10010674 = 0;
long long DAT_10013618 = 0;
long long DAT_10013628 = 0;
long long DAT_10013630 = 0;
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
long long DAT_100136a0 = 0;
long long DAT_100136a8 = 0;
long long DAT_100136b0 = 0;
long long DAT_100136b8 = 0;
long long DAT_100136c0 = 0;
long long DAT_100136c8 = 0;
long long DAT_100136d0 = 0;
long long DAT_100136d8 = 0;
long long DAT_100136e0 = 0;
long long DAT_100136e8 = 0;
long long DAT_100136f0 = 0;
long long DAT_100136f8 = 0;
long long DAT_10013700 = 0;
long long DAT_10013708 = 0;
long long DAT_10013710 = 0;
long long DAT_10013718 = 0;
long long DAT_10013720 = 0;
long long DAT_10013738 = 0;
long long DAT_10013740 = 0;
long long DAT_10013748 = 0;
long long DAT_10013768 = 0;
long long DAT_10013770 = 0;
long long DAT_10013778 = 0;
long long DAT_10013780 = 0;
long long DAT_10013788 = 0;
long long DAT_10013790 = 0;
long long DAT_10013798 = 0;
long long DAT_100137a0 = 0;
long long DAT_100137a8 = 0;
long long DAT_10013870 = 0;
long long DAT_10013878 = 0;
long long DAT_10013880 = 0;
long long DAT_10013888 = 0;
long long DAT_10013890 = 0;
long long DAT_100138a0 = 0;
long long DAT_100138a8 = 0;
long long DAT_100138b0 = 0;
long long DAT_100138b8 = 0;
long long DAT_100138c0 = 0;
long long DAT_100138c8 = 0;
long long DAT_100138d8 = 0;
long long DAT_100138e0 = 0;
long long DAT_100138e8 = 0;
long long DAT_100138f0 = 0;
long long DAT_100138f8 = 0;
long long DAT_10013900 = 0;
long long DAT_10013908 = 0;
long long DAT_10013910 = 0;
long long DAT_10013918 = 0;
long long DAT_10013920 = 0;
long long DAT_10013928 = 0;
long long DAT_10013938 = 0;
long long DAT_10013940 = 0;
long long DAT_10013950 = 0;
long long DAT_10013958 = 0;
char DAT_10013af0 = 0;
char DAT_10013c84 = 0;
long long DAT_10015f20 = 0;
long long DAT_10015f28 = 0;
long long DAT_10015f68 = 0;
long long DAT_10015f70 = 0;
long long DAT_10015f78 = 0;
long long DAT_10015f80 = 0;
long long DAT_10015f88 = 0;
long long DAT_10015f90 = 0;
long long DAT_10015fb8 = 0;
long long DAT_10015fc8 = 0;
long long DAT_10015fd0 = 0;
long long DAT_10015fd8 = 0;
long long DAT_10015fe0 = 0;
long long DAT_10015fe8 = 0;
long long DAT_10015ff0 = 0;
long long DAT_10015ff8 = 0;
long long DAT_10016000 = 0;
long long DAT_10016008 = 0;
long long DAT_10016010 = 0;
long long DAT_10016018 = 0;
long long DAT_10016020 = 0;
long long DAT_10016028 = 0;
long long DAT_10016030 = 0;
long long DAT_10016038 = 0;
long long DAT_10016040 = 0;
long long DAT_10016048 = 0;
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
long long DAT_100160f0 = 0;
long long DAT_100160f8 = 0;
long long DAT_10016100 = 0;
long long DAT_10016108 = 0;
long long DAT_10016110 = 0;
long long DAT_10016118 = 0;
long long DAT_10016120 = 0;
long long DAT_10016128 = 0;
long long DAT_10016130 = 0;
long long DAT_10016150 = 0;
long long DAT_10016158 = 0;
long long DAT_10016160 = 0;
long long DAT_10016168 = 0;
long long DAT_10016170 = 0;
long long DAT_10016178 = 0;
long long DAT_10016180 = 0;
long long DAT_10016190 = 0;
long long DAT_10016198 = 0;
long long DAT_100161a0 = 0;
long long DAT_100161a8 = 0;
long long DAT_100161b8 = 0;
long long DAT_100161d0 = 0;
long long DAT_100161d8 = 0;
long long DAT_100161e8 = 0;
long long DAT_100161f0 = 0;
long long DAT_100161f8 = 0;
long long DAT_10016200 = 0;
long long DAT_10016208 = 0;
long long DAT_10016210 = 0;
long long DAT_10016218 = 0;
long long DAT_10016250 = 0;
long long DAT_10016258 = 0;
long long DAT_10016260 = 0;
long long DAT_10016270 = 0;
long long DAT_10016278 = 0;
long long DAT_10016280 = 0;
long long DAT_10016288 = 0;
long long DAT_10016298 = 0;
long long DAT_100162a0 = 0;
long long DAT_100162a8 = 0;
int DAT_100162b4 = 0;
long long DAT_100162b8 = 0;
long long DAT_100162c0 = 0;
long long DAT_100162c8 = 0;
long long DAT_100162d0 = 0;
long long DAT_100162d8 = 0;
long long DAT_100162e0 = 0;
long long DAT_100162e8 = 0;
long long DAT_100162f0 = 0;
long long DAT_100162f8 = 0;
long long DAT_10016300 = 0;
long long DAT_10016308 = 0;
long long DAT_10016310 = 0;
long long DAT_10016318 = 0;
long long DAT_10016328 = 0;
long long DAT_10016330 = 0;
long long DAT_10016340 = 0;
long long DAT_10016348 = 0;
long long DAT_10016350 = 0;
long long DAT_10016358 = 0;
long long DAT_10016360 = 0;
long long DAT_10016370 = 0;
long long DAT_10016378 = 0;
long long DAT_10016388 = 0;
long long DAT_10016390 = 0;
long long DAT_10016398 = 0;
long long DAT_100163a0 = 0;
long long DAT_100163a8 = 0;
long long DAT_100163b0 = 0;
long long DAT_100163b8 = 0;
long long DAT_100163c0 = 0;
long long DAT_100163c8 = 0;
long long DAT_100163d0 = 0;
long long DAT_100163d8 = 0;
int DAT_10016594 = 0;
char DAT_1001660c = 0;

/* Forward declarations */
void ProcessLandAI(void);
void ProcessMiddleSeaAI(void);
static void FUN_10001000(void);
static int * FUN_10002fb0(void);
static void FUN_100033a0(void);
static void FUN_100042b0(void);
static void FUN_10004390(void);
static void FUN_100043e0(void);


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
  pcVar7 = "Pikiner_evro(au)";
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
  pcVar8 = (char *)&DAT_10015f28;
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
  pcVar7 = "Konni_Ricar(au)";
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
  pcVar8 = (char *)&DAT_10016218;
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
    pcVar7 = "Grenader(au)";
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
    pcVar8 = (char *)&DAT_10016048;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(int *)pcVar8 = *(int *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar7 = "Grenader(au)";
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
    pcVar8 = (char *)&DAT_10016048;
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
         (RegisterUnitType(&DAT_10015fd8,"Melnica(au)"), 1)) &&
        (RegisterUnitType(&DAT_10015fd0,"Sclad1(au)"), 1)) &&
       ((RegisterUnitType(&DAT_100160f8,"Cercov_Poland(au)"), 1 &&
        (RegisterUnitType(&DAT_10016258,"Kazarma(au)"), 1)))) &&
      ((RegisterUnitType(&DAT_10015fe8,"Dip_korpus(au)"), 1 &&
       ((RegisterUnitType(&DAT_10013618,"artileri_depo(au)"), 1 &&
        (RegisterUnitType(&DAT_10013878,"Rinok(au)"), 1)))))) &&
     ((RegisterUnitType(&DAT_100138d8,"Bashnia(au)"), 1 &&
      (RegisterUnitType(&DAT_100162d8,"PorE(au)"), 1)))) {
    RegisterUnitType(&DAT_10015fb8,"Center_Austria(au)");
  }
  AssignPeasant("Kreposnoi_pruss(au)");
  if ((1) &&
     (RegisterUnitType(&DAT_10016190,"Kreposnoi_pruss(au)"), 1)) {
    RegisterUnitType(&DAT_100161e8,"Kuznica(au)");
  }
  if (1) {
    RegisterUpgrade(&DAT_10016088,"KUZ04AU");
  }
  if (1) {
    RegisterUnitType(&DAT_10015f20,"akademia_E(au)");
  }
  if (((1) &&
      (RegisterUpgrade(&DAT_10016028,"AKA35AU"), 1)) &&
     (RegisterUpgrade(&DAT_10016080,"AKA36AU"), 1)) {
    RegisterUpgrade(&DAT_10016090,"AKA32AU");
  }
  if (((1) &&
      (RegisterUnitType(&DAT_10016250,"Kazarma_evro(au)"), 1)) &&
     ((RegisterUnitType(&DAT_10013688,"Pikiner_evro(au)"), 1 &&
      (RegisterUnitType(&DAT_100160e0,"Mushketer_avstr(au)"), 1)))
     ) {
    RegisterUnitType(&DAT_10013700,"Officer_evro(au)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_10016260,"Officer_evro(au)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_10015fc8,"Officer_evro(au)SHIELD");
  }
  if (1) {
    RegisterUnitType(&DAT_10013640,"Barabanshik_ev1(au)");
  }
  if (1) {
    RegisterUpgrade(&DAT_100160d0,"Barabanshik_ev1(au)SHIELD");
  }
  if (((1) &&
      (RegisterUnitType(&DAT_100160d8,"Konushnia_Swesair(au)"), 1)
      ) && (RegisterUnitType(&DAT_100163b0,&DAT_10016218), 1)) {
    RegisterUnitType(&DAT_10013690,"Dragun(au)");
  }
  if ((((((1) &&
         (RegisterUpgrade(&DAT_10013900,"Dragun(au)ATTACK"), 1))
        && ((RegisterUpgrade(&DAT_100138f8,"Dragun(au)ATTACK3"),
            1 &&
            ((RegisterUpgrade(&DAT_100138f0,"Dragun(au)ATTACK4"),
             1 &&
             (RegisterUpgrade(&DAT_10013938,"Dragun(au)ATTACK5"),
             1)))))) &&
       (RegisterUpgrade(&DAT_10013928,"Dragun(au)ATTACK6"), 1))
      && (((((RegisterUpgrade(&DAT_10013920,"Dragun(au)ATTACK7"),
             1 &&
             (RegisterUpgrade(&DAT_100136d8,"Dragun(au)SHIELD"),
             1)) &&
            (RegisterUpgrade(&DAT_100136c8,"Dragun(au)SHIELD3"),
            1)) &&
           ((RegisterUpgrade(&DAT_100138c0,"Dragun(au)SHIELD4"),
            1 &&
            (RegisterUpgrade(&DAT_100138b8,"Dragun(au)SHIELD5"),
            1)))) &&
          ((RegisterUpgrade(&DAT_100138b0,"Dragun(au)SHIELD6"), 1
           && ((RegisterUpgrade(&DAT_100138a8,"Dragun(au)SHIELD7"),
               1 &&
               (RegisterUpgrade(&DAT_10013900,"Dragun(au)ATTACK"),
               1)))))))) &&
     (((RegisterUpgrade(&DAT_100138f8,"Dragun(au)ATTACK3"), 1 &&
       ((((RegisterUpgrade(&DAT_100138f0,"Dragun(au)ATTACK4"), 1
          && (RegisterUpgrade(&DAT_10013938,"Dragun(au)ATTACK5"),
             1)) &&
         (RegisterUpgrade(&DAT_10013928,"Dragun(au)ATTACK6"), 1))
        && ((RegisterUpgrade(&DAT_10013920,"Dragun(au)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_100136d8,"Dragun(au)SHIELD"), 1
            )))))) &&
      (((RegisterUpgrade(&DAT_100136c8,"Dragun(au)SHIELD3"), 1 &&
        ((RegisterUpgrade(&DAT_100138c0,"Dragun(au)SHIELD4"), 1
         && (RegisterUpgrade(&DAT_100138b8,"Dragun(au)SHIELD5"),
            1)))) &&
       (RegisterUpgrade(&DAT_100138b0,"Dragun(au)SHIELD6"), 1))))
     )) {
    RegisterUpgrade(&DAT_100138a8,"Dragun(au)SHIELD7");
  }
  if ((1) &&
     (RegisterUnitType(&DAT_10016330,"Kirasir(au)"), 1)) {
    RegisterUnitType(&DAT_10013680,"Dragun_18(au)");
  }
  if (((((1) &&
        (RegisterUpgrade(&DAT_10013658,"Dragun_18(au)ATTACK"), 1)
        ) && (RegisterUpgrade(&DAT_10013650,"Dragun_18(au)ATTACK3"),
             1)) &&
      (((RegisterUpgrade(&DAT_10013648,"Dragun_18(au)ATTACK4"), 1
        && (RegisterUpgrade(&DAT_10016318,"Dragun_18(au)ATTACK5"),
           1)) &&
       ((RegisterUpgrade(&DAT_10016310,"Dragun_18(au)ATTACK6"), 1
        && ((RegisterUpgrade(&DAT_10016308,"Dragun_18(au)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_10016390,"Dragun_18(au)SHIELD"),
            1)))))))) &&
     (((RegisterUpgrade(&DAT_10016388,"Dragun_18(au)SHIELD3"), 1
       && (((((((RegisterUpgrade(&DAT_100163d8,"Dragun_18(au)SHIELD4"),
                1 &&
                (RegisterUpgrade(&DAT_100163d0,"Dragun_18(au)SHIELD5"),
                1)) &&
               (RegisterUpgrade(&DAT_100163c8,"Dragun_18(au)SHIELD6"),
               1)) &&
              ((RegisterUpgrade(&DAT_100163c0,"Dragun_18(au)SHIELD7"),
               1 &&
               (RegisterUpgrade(&DAT_10013658,"Dragun_18(au)ATTACK"),
               1)))) &&
             (RegisterUpgrade(&DAT_10013650,"Dragun_18(au)ATTACK3"),
             1)) &&
            ((RegisterUpgrade(&DAT_10013648,"Dragun_18(au)ATTACK4"),
             1 &&
             (RegisterUpgrade(&DAT_10016318,"Dragun_18(au)ATTACK5"),
             1)))) &&
           ((RegisterUpgrade(&DAT_10016310,"Dragun_18(au)ATTACK6"),
            1 &&
            (((RegisterUpgrade(&DAT_10016308,"Dragun_18(au)ATTACK7"),
              1 &&
              (RegisterUpgrade(&DAT_10016390,"Dragun_18(au)SHIELD"),
              1)) &&
             (RegisterUpgrade(&DAT_10016388,"Dragun_18(au)SHIELD3"),
             1)))))))) &&
      (((RegisterUpgrade(&DAT_100163d8,"Dragun_18(au)SHIELD4"), 1
        && (RegisterUpgrade(&DAT_100163d0,"Dragun_18(au)SHIELD5"),
           1)) &&
       (RegisterUpgrade(&DAT_100163c8,"Dragun_18(au)SHIELD6"), 1)
       ))))) {
    RegisterUpgrade(&DAT_100163c0,"Dragun_18(au)SHIELD7");
  }
  if ((((1) &&
       (RegisterUnitType(&DAT_10016278,"Strelec_Algir_DIP(au)"), 1
       )) && ((RegisterUnitType(&DAT_10016160,"Grenader_DIP(au)"),
              1 &&
              (((RegisterUnitType(&DAT_10016328,"Kozak_loshad_DIP(au)"),
                1 &&
                (RegisterUnitType(&DAT_10013888,"Dragun_18_DIP(au)"),
                1)) &&
               (RegisterUnitType(&DAT_10015fe0,"Sveshenik_evro(au)"),
               1)))))) &&
     (((RegisterUnitType(&DAT_10015f80,&DAT_10016048), 1 &&
       (RegisterUnitType(&DAT_10016370,"Pushka(au)"), 1)) &&
      ((RegisterUnitType(&DAT_10013668,"Mortira(au)"), 1 &&
       (((RegisterUnitType(&DAT_100138c8,"Mortira_b(AU)"), 1 &&
         (RegisterUnitType(&DAT_100161f0,"Lodka(au)"), 1)) &&
        ((RegisterUnitType(&DAT_10013890,"Kavalerist_avstrii(au)"),
         1 &&
         ((((RegisterUnitType(&DAT_100138e8,"Fregat(AU)"), 1 &&
            (RegisterUnitType(&DAT_10015f90,"GALERA(AU)"), 1)) &&
           (RegisterUnitType(&DAT_10016398,"Linkor(au)"), 1)) &&
          (RegisterUnitType(&DAT_10015f88,"Yahta(au)"), 1)))))))))
      ))) {
    RegisterUnitType(&DAT_100138a0,"PERES_KOR(au)");
  }
  if ((((1) &&
       (RegisterUpgrade(&DAT_10016378,"Melnica(au)GETRES"), 1))
      && (((RegisterUpgrade(&DAT_10016100,"Melnica(au)GETRES2"),
           1 &&
           ((RegisterUpgrade(&DAT_10013660,"KUZ01AU"), 1 &&
            (RegisterUpgrade(&DAT_100163a0,"Pikiner_evro(au)ATTACK"),
            1)))) &&
          (RegisterUpgrade(&DAT_100163a8,"Pikiner_evro(au)ATTACK3"),
          1)))) &&
     (((RegisterUpgrade(&DAT_100163b8,"Pikiner_evro(au)ATTACK4"),
       1 &&
       (RegisterUpgrade(&DAT_100162f0,"Pikiner_evro(au)SHIELD"),
       1)) &&
      (RegisterUpgrade(&DAT_100162f8,"Pikiner_evro(au)SHIELD3"),
      1)))) {
    RegisterUpgrade(&DAT_10016300,"Pikiner_evro(au)SHIELD4");
  }
  SafeRegisterUpgrade(&DAT_10016350,"Pikiner_evro(au)ATTACK");
  SafeRegisterUpgrade(&DAT_10016358,"Pikiner_evro(au)ATTACK3");
  SafeRegisterUpgrade(&DAT_10016340,"Pikiner_evro(au)ATTACK4");
  SafeRegisterUpgrade(&DAT_10016348,"Pikiner_evro(au)ATTACK5");
  SafeRegisterUpgrade(&DAT_10016360,"Pikiner_evro(au)ATTACK6");
  SafeRegisterUpgrade(&DAT_10016298,"Pikiner_evro(au)SHIELD");
  SafeRegisterUpgrade(&DAT_10016280,"Pikiner_evro(au)SHIELD3");
  SafeRegisterUpgrade(&DAT_10016288,"Pikiner_evro(au)SHIELD4");
  SafeRegisterUpgrade(&DAT_100162a0,"Pikiner_evro(au)SHIELD5");
  SafeRegisterUpgrade(&DAT_100162a8,"Pikiner_evro(au)SHIELD6");
  if ((((1) &&
       (RegisterUpgrade(&DAT_10013910,"Mushketer_avstr(au)ATTACK"),
       1)) &&
      ((RegisterUpgrade(&DAT_10013918,"Mushketer_avstr(au)ATTACK3"),
       1 &&
       ((RegisterUpgrade(&DAT_10013908,"Mushketer_avstr(au)ATTACK4"),
        1 &&
        (RegisterUpgrade(&DAT_10015f78,"Mushketer_avstr(au)SHIELD"),
        1)))))) &&
     (RegisterUpgrade(&DAT_10015f68,"Mushketer_avstr(au)SHIELD3"),
     1)) {
    RegisterUpgrade(&DAT_10015f70,"Mushketer_avstr(au)SHIELD4");
  }
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016018,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016010,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016008,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016000,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10015ff8,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10015ff0,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016130,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016128,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016120,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016118,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016108,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10016158,puVar4);
  if (((((((1) &&
          (RegisterUpgrade(&DAT_100136b8,"Kirasir(au)ATTACK"), 1)
          ) && (RegisterUpgrade(&DAT_100136b0,"Kirasir(au)ATTACK3"),
               1)) &&
        ((RegisterUpgrade(&DAT_100136a8,"Kirasir(au)ATTACK4"), 1
         && (RegisterUpgrade(&DAT_100136a0,"Kirasir(au)ATTACK5"),
            1)))) &&
       ((RegisterUpgrade(&DAT_10013678,"Kirasir(au)ATTACK6"), 1
        && ((RegisterUpgrade(&DAT_10013670,"Kirasir(au)ATTACK7"),
            1 &&
            (RegisterUpgrade(&DAT_10013748,"Kirasir(au)SHIELD"),
            1)))))) &&
      (RegisterUpgrade(&DAT_10013740,"Kirasir(au)SHIELD3"), 1))
     && (((RegisterUpgrade(&DAT_10013738,"Kirasir(au)SHIELD4"), 1
          && (RegisterUpgrade(&DAT_10013720,"Kirasir(au)SHIELD5"),
             1)) &&
         (RegisterUpgrade(&DAT_10013718,"Kirasir(au)SHIELD6"), 1)
         ))) {
    RegisterUpgrade(&DAT_10013710,"Kirasir(au)SHIELD7");
  }
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_100136e0,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_100136e8,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_100136f0,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_100136f8,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_100136c0,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_100136d0,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10013788,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10013790,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10013798,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10013770,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10013778,puVar4);
  puVar4 = FUN_10002fb0();
  SafeRegisterUpgrade(&DAT_10013780,puVar4);
  if ((((((1) &&
         (RegisterUpgrade(&DAT_100161d8,"Pushka(au)BUILD"), 1))
        && ((RegisterUpgrade(&DAT_100161d0,"Pushka(au)BUILD3"), 1
            && ((RegisterUpgrade(&DAT_100161a0,"Pushka(au)BUILD4"),
                1 &&
                (RegisterUpgrade(&DAT_10016198,"Pushka(au)BUILD5"),
                1)))))) &&
       ((RegisterUpgrade(&DAT_100161a8,"Pushka(au)BUILD6"), 1 &&
        ((((RegisterUpgrade(&DAT_10016098,"Mortira(au)BUILD"), 1
           && (RegisterUpgrade(&DAT_100160a0,"Mortira(au)BUILD3"),
              1)) &&
          (RegisterUpgrade(&DAT_100160a8,"Mortira(au)BUILD4"), 1)
          ) && ((RegisterUpgrade(&DAT_100160b0,"Mortira(au)BUILD5"),
                1 &&
                (RegisterUpgrade(&DAT_100161b8,"KUZ03AU"), 1)))))
        ))) && (((((RegisterUpgrade(&DAT_10016020,"MAINAU"), 1 &&
                   ((RegisterUpgrade(&DAT_10013958,"AKA06AU"), 1
                    && (RegisterUpgrade(&DAT_10016078,"AKA01AU"),
                       1)))) &&
                  (RegisterUpgrade(&DAT_10016030,"AKA02AU"), 1))
                 && ((((RegisterUpgrade(&DAT_10016038,"AKA03AU"),
                       1 &&
                       (RegisterUpgrade(&DAT_10016040,"AKA04AU"),
                       1)) &&
                      (RegisterUpgrade(&DAT_10016270,"AKA08AU"),
                      1)) &&
                     ((RegisterUpgrade(&DAT_10016110,"AKA23AU"),
                      1 &&
                      (RegisterUpgrade(&DAT_10016150,"AKA24AU"),
                      1)))))) &&
                ((((RegisterUpgrade(&DAT_10016208,"AKA31AU"), 1
                   && ((RegisterUpgrade(&DAT_10016210,"AKA33AU"),
                       1 &&
                       (RegisterUpgrade(&DAT_10016168,"AKA12AU"),
                       1)))) &&
                  (RegisterUpgrade(&DAT_10016178,"AKA13AU"), 1))
                 && ((((RegisterUpgrade(&DAT_10016180,"AKA14AU"),
                       1 &&
                       (RegisterUpgrade(&DAT_10016170,"AKA15AU"),
                       1)) &&
                      (RegisterUpgrade(&DAT_10013950,"AKA11AU"),
                      1)) &&
                     (((RegisterUpgrade(&DAT_100138e0,"AKA10AU"),
                       1 &&
                       (RegisterUpgrade(&DAT_100137a0,"AKA30AU"),
                       1)) &&
                      ((RegisterUpgrade(&DAT_100160f0,"AKA07AU"),
                       1 &&
                       ((RegisterUpgrade(&DAT_10013940,"AKA20AU"),
                        1 &&
                        (RegisterUpgrade(&DAT_100161f8,"KUZ02AU"),
                        1)))))))))))))) &&
     (((RegisterUpgrade(&DAT_10016200,"AKA09AU"), 1 &&
       (((((RegisterUpgrade(&DAT_10013870,"AKA05AU"), 1 &&
           (RegisterUpgrade(&DAT_10013880,"AKA28AU"), 1)) &&
          (RegisterUpgrade(&DAT_10013768,"AKA29AU"), 1)) &&
         ((RegisterUpgrade(&DAT_10013628,"KUZ05AU"), 1 &&
          (RegisterUpgrade(&DAT_10013708,"KUZ06AU"), 1)))) &&
        (RegisterUpgrade(&DAT_10013630,"AKA34AU"), 1)))) &&
      (((RegisterUpgrade(&DAT_100162e8,"Bashnia(au)PAUSE"), 1 &&
        (RegisterUpgrade(&DAT_100162d0,"Bashnia(au)PAUSE3"), 1))
       && ((RegisterUpgrade(&DAT_100162e0,"Bashnia(au)PAUSE4"), 1
           && ((RegisterUpgrade(&DAT_100162c0,"Bashnia(au)PAUSE5"),
               1 &&
               (RegisterUpgrade(&DAT_100162c8,"Bashnia(au)PAUSE6"),
               1)))))))))) {
    RegisterUpgrade(&DAT_100162b8,"Bashnia(au)PAUSE7");
  }
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(au)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(au)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(au)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(au)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(au)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(au)INSIDE7",0x32);
  AssignFormUnit("Pikiner_evro(au)");
  AssignMine("shahta(au)");
  AssignHouse("Dom_Austria(au)");
  AssignWall("WALL_EV(au)");
  return;
}





int * FUN_10002fb0(void)

{
  sprintf(&DAT_100137a8,&DAT_10010674);
  return &DAT_100137a8;
}





void FUN_100033a0(void)

{
  TryUpgrade(&DAT_10016098,0x1e,0x32);
  TryUpgrade(&DAT_100160a0,0x1e,0x32);
  TryUpgrade(&DAT_100160a8,0x1e,0x32);
  TryUpgrade(&DAT_100160b0,0x1e,0x32);
  return;
}





void FUN_100042b0(void)

{
  int iVar1;
  
  iVar1 = GetMoney(3);
  if (0x672 < iVar1) {
    TryUpgrade(&DAT_10016350,0x28,100);
    TryUpgrade(&DAT_10016358,0x5a,100);
    TryUpgrade(&DAT_10016340,0x5a,100);
    TryUpgrade(&DAT_10016348,0x5a,100);
    TryUpgrade(&DAT_10016360,0x5a,100);
    TryUpgrade(&DAT_10016298,0x5a,100);
    TryUpgrade(&DAT_10016280,0x5a,100);
    TryUpgrade(&DAT_10016288,0x5a,100);
    TryUpgrade(&DAT_100162a0,0x5a,100);
    TryUpgrade(&DAT_100162a8,0x5a,100);
    TryUpgrade(&DAT_10016260,0x32,100);
    TryUpgrade(&DAT_10015fc8,0x32,100);
  }
  return;
}





void FUN_10004390(void)

{
  TryUpgrade(&DAT_10013910,0x5a,100);
  TryUpgrade(&DAT_10013918,0x5a,100);
  TryUpgrade(&DAT_10013908,0x5a,100);
  TryUpgrade(&DAT_10015f78,10,100);
  TryUpgrade(&DAT_10015f68,10,100);
  return;
}





void FUN_100043e0(void)

{
  TryUpgrade(&DAT_100161d8,0x1e,0x32);
  TryUpgrade(&DAT_100161d0,0x1e,0x32);
  TryUpgrade(&DAT_100161a0,0x1e,0x32);
  TryUpgrade(&DAT_10016198,0x1e,0x32);
  TryUpgrade(&DAT_10016098,0x1e,0x32);
  TryUpgrade(&DAT_100160a0,0x1e,0x32);
  TryUpgrade(&DAT_100160a8,0x1e,0x32);
  TryUpgrade(&DAT_100160b0,0x1e,0x32);
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
  iVar3 = GetUnits(&DAT_10016190);
  iVar4 = GetMoney(3);
  cVar1 = UpgIsRun(&DAT_100161b8);
  GetUnits(&DAT_10013688);
  UpgIsDone(&DAT_10016020);
  GetUnits(&DAT_100160e0);
  iVar5 = GetUnits(&DAT_100163b0);
  iVar6 = GetUnits(&DAT_10016330);
  iVar7 = GetUnits(&DAT_10013688);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = GetDifficulty();
  if (0 < iVar6) {
    TryUnit(&DAT_10016328,0xf,0x14,0x28);
  }
  iVar6 = GetReadyUnits(&DAT_100138d8);
  iVar7 = GetUnits(&DAT_100138d8);
  if (iVar3 == 0) {
    return;
  }
  TryUnit(&DAT_10015fd8,1,100,100);
  iVar8 = GetUnits(&DAT_10015fd8);
  if (iVar8 == 0) {
    return;
  }
  TryUpgrade(&DAT_10016378,100,100);
  cVar2 = FieldExist();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      TryUnit(&DAT_10016190,100,100,100);
      TryUnit(&DAT_10013688,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_100042b0();
    }
    SetPDistribution(0,1,1);
  }
  else {
    if (DAT_10016594 == 0) {
      if (12000 < iVar4) {
        SetPDistribution(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_10004619:
      SetPDistribution(9,uVar12,uVar13);
    }
    else {
      if (DAT_10016594 == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_10004619;
      }
      if (DAT_10016594 == 2) {
        uVar13 = 9;
        uVar12 = 4;
        goto LAB_10004619;
      }
    }
    uVar12 = 0x1c2;
    if (cVar1 != '\0') {
      uVar12 = 0x17c;
    }
    if (iVar3 < 0x19) {
      if (300 < iVar4) {
        TryUnit(&DAT_10016190,100,100,100);
        goto LAB_10004657;
      }
    }
    else {
LAB_10004657:
      if ((300 < iVar4) && (TryUnit(&DAT_10016190,uVar12,0xe8,100), 400 < iVar4)) {
        TryUnit(&DAT_10013688,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_100042b0();
    }
  }
  TryUnit(&DAT_10015fb8,1,100,100);
  TryUnit(&DAT_10015fb8,2,0x5a,5);
  TryUnit(&DAT_10015fb8,3,0x5a,5);
  iVar8 = GetUnits(&DAT_10016250);
  if (1 < iVar8) {
    TryUnit(&DAT_10015fb8,2,0x50,5);
    iVar8 = GetUnits(&DAT_10015fb8);
    if (1 < iVar8) {
      TryUnit(&DAT_100160d8,1,99,0x5a);
    }
    iVar8 = GetReadyUnits(&DAT_10015fb8);
    if (1 < iVar8) {
      TryUnit(&DAT_10013878,1,100,100);
    }
    TryUpgrade(&DAT_10016110,99,100);
  }
  iVar8 = GetUnits(&DAT_10016190);
  if (0x23 < iVar8) {
    TryUnit(&DAT_10013878,1,100,100);
  }
  TryUnit(&DAT_100161e8,1,100,100);
  TryUnit(&DAT_10016250,1,100,100);
  TryUnit(&DAT_10016250,2,100,100);
  TryUnit(&DAT_10015fd0,1,0x32,0x32);
  TryUnit(&DAT_100161e8,2,10,5);
  TryUpgrade(&DAT_10013660,0x50,100);
  iVar8 = GetUnits(&DAT_10015f20);
  if (0 < iVar8) {
    TryUnit(&DAT_100160f8,1,5,3);
  }
  cVar2 = FieldExist();
  if (cVar2 != '\0') {
    TryUnit(&DAT_10015f20,1,0x5a,0x5a);
  }
  TryUnit(&DAT_10015fe8,1,99,10);
  TryUnit(&DAT_10013618,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    TryUnit(&DAT_10015fd8,2,0x1e,0x1e);
  }
  TryUnit(&DAT_10016258,1,0x5a,0x14);
  TryUnit(&DAT_10016258,2,0x50,5);
  TryUpgrade(&DAT_10016078,0x5a,99);
  TryUpgrade(&DAT_10016270,0x5f,100);
  TryUpgrade(&DAT_100161b8,100,100);
  TryUpgrade(&DAT_10016040,0x5a,0x5a);
  TryUpgrade(&DAT_10016030,0x5f,100);
  TryUpgrade(&DAT_10016038,0x5f,100);
  iVar8 = GetReadyUnits(&DAT_100160d8);
  if (((iVar8 == 0) || (cVar2 = UpgIsRun(&DAT_100161b8), cVar2 != '\0')) ||
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
  TryUpgrade(&DAT_100137a0,100,100);
  TryUnit(&DAT_100162d8,1,0x32,0x5a);
  TryUnit(&DAT_100162d8,2,0x14,0x32);
  TryUnit(&DAT_100162d8,3,10,0x32);
  cVar2 = UpgIsDone(&DAT_10013958);
  if (cVar2 == '\0') {
    iVar9 = GetUnitsByUsage(0,0x1c);
    iVar10 = GetUnitsByUsage(0,0x1b);
    iVar8 = GetUnitsByUsage(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_10015f90;
      goto LAB_10004a83;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_10015f90;
      goto LAB_10004a83;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_100138e8;
LAB_10004a83:
    TryUnit(puVar11,iVar8,0x32,0x32);
  }
  TryUpgrade(&DAT_10013958,99,100);
  cVar2 = UpgIsRun(&DAT_10016270);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013958,0x5a,0x5a);
    TryUpgrade(&DAT_10013870,99,100);
  }
  cVar2 = UpgIsRun(&DAT_10013958);
  if (cVar2 != '\0') {
    TryUpgrade(&DAT_10013940,0x5a,0x5a);
    TryUpgrade(&DAT_10013880,0x46,10);
    FUN_100033a0();
  }
  SetUpgradeLock(1,0);
  iVar8 = GetMoney(0);
  if ((((14000 < iVar8) && (cVar2 = UpgIsRun(&DAT_100137a0), cVar2 != '\0')) &&
      (iVar8 = GetMoney(1), iVar8 < 0x1d4c)) &&
     (cVar2 = UpgIsRun(&DAT_10013958), cVar2 == '\0')) {
    SetUpgradeLock(1,1);
  }
  TryUnit(&DAT_100161f0,3,0x5a,0x5a);
  cVar2 = UpgIsDone(&DAT_100160f0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161f0,0x14,10,0x5a);
  }
  TryUpgrade(&DAT_100160f0,99,0x5a);
  TryUpgrade(&DAT_10016100,99,100);
  TryUpgrade(&DAT_100162e8,0x32,0x32);
  TryUpgrade(&DAT_100162d0,0x32,0x32);
  TryUpgrade(&DAT_100162e0,0x32,0x32);
  TryUpgrade(&DAT_100162c0,0x32,0x32);
  TryUpgrade(&DAT_100162c8,0x32,0x32);
  TryUpgrade(&DAT_100162b8,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     (TryUnit(&DAT_100138d8,1,0x50,10), 0x3c < iVar3)) {
    TryUnit(&DAT_100138d8,2,0x50,10);
    TryUnit(&DAT_100138d8,3,0x32,10);
    TryUnit(&DAT_100138d8,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    TryUnit(&DAT_10016160,0x32,1,0x1e);
    TryUnit(&DAT_10016278,0x14,1,0x1e);
  }
  else {
    TryUnit(&DAT_100138c8,0x32,10,100);
    TryUnit(&DAT_10016160,0x4b,1,0x1e);
    TryUnit(&DAT_10016278,0x1e,1,0x1e);
    TryUpgrade(&DAT_10013630,0x5f,0x5a);
    TryUpgrade(&DAT_10013708,0x5f,0x5a);
    TryUpgrade(&DAT_10013628,0x5f,0x5a);
    cVar2 = UpgIsDone(&DAT_10016198);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10016370,5,0x1e,10);
    }
    cVar2 = UpgIsDone(&DAT_100160b0);
    if (cVar2 != '\0') {
      TryUnit(&DAT_10013668,10,0x1e,10);
    }
    FUN_100043e0();
  }
  cVar2 = UpgIsDone(&DAT_10016020);
  if (cVar2 != '\0') {
    cVar2 = UpgIsDone(&DAT_10016100);
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
  iVar3 = GetUnits(&DAT_100160d8);
  if (iVar3 != 0) {
    TryUnit(&DAT_100161f0,6,0x5a,0x5a);
  }
  cVar2 = UpgIsDone(&DAT_100160f0);
  if (cVar2 != '\0') {
    TryUnit(&DAT_100161f0,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    TryUnit(&DAT_100160d8,2,0x5f,0x14);
    TryUnit(&DAT_100160d8,3,0x5f,0x14);
    TryUnit(&DAT_100160d8,4,0x5f,0x14);
    TryUnit(&DAT_100160d8,5,0x28,0x14);
    TryUnit(&DAT_100160d8,6,0x28,0x14);
    TryUpgrade(&DAT_10016020,99,100);
    iVar3 = GetUnits(&DAT_100160e0);
    if (0x14 < iVar3) {
      TryUpgrade(&DAT_10016208,0x5a,100);
      TryUpgrade(&DAT_10016210,0x50,0x46);
    }
    TryUpgrade(&DAT_100160f0,0x3c,0x5a);
    cVar1 = UpgIsRun(&DAT_10013908);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_10016168,0x5a,0x5a);
      TryUpgrade(&DAT_10016178,0x5a,0x5a);
      TryUpgrade(&DAT_10016180,0x46,0x5a);
      TryUpgrade(&DAT_10016170,0x46,0x5a);
    }
  }
  TryUpgrade(&DAT_100137a0,99,100);
  TryUpgrade(&DAT_100138e0,0x3c,0x5a);
  TryUpgrade(&DAT_10016150,100,100);
  if (0x15e < iVar5) {
    TryUnit(&DAT_100160e0,500,10,100);
    FUN_10004390();
  }
  iVar3 = GetReadyUnits(&DAT_10013878);
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
                if (iVar8 < 0x3e9) goto LAB_10005023;
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
LAB_10005023:
  iVar3 = GetReadyUnits(&DAT_10015f20);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = UpgIsRun(&DAT_10016270), cVar1 == '\0')) {
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
  iVar3 = GetUnits(&DAT_100161e8);
  if ((iVar3 != 0) && (cVar1 = UpgIsRun(&DAT_100161b8), cVar1 == '\0')) {
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
  if (*(int *)(&DAT_1001660c + iVar3 * 4) == 0) {
    AI_Torg(5,3,4000);
    iVar3 = GetAINation();
    *(int *)(&DAT_1001660c + iVar3 * 4) = 1;
  }
  return;
}





__declspec(dllexport) void InitAI(void)

{
  int iVar1;
  FUN_10001000();
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x5a);
  SET_MINE_UPGRADE2_RADIUS(0x5a);
  SET_DEFAULT_MAX_WORKERS(1000);
  SET_MIN_PEASANT_BRIGADE(5);
  DAT_100162b4 = GetAINation();
  iVar1 = DAT_100162b4 * 0x4b8;
  *(int *)(&DAT_10013af0 + iVar1) = 0;
  *(int *)(&DAT_10013c84 + iVar1) = 0;
  return;
}




__declspec(dllexport) void ProcessAI(void)
{
  ProcessLandAI();
}

BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
