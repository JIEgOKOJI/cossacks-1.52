// Decompiled from: Austria.dll

// Function: FUN_10001000 @ 0x10001000

void FUN_10001000(void)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  bVar3 = FUN_10002740();
  uVar5 = 0xffffffff;
  pcVar7 = s_Pikiner_evro_au__1000fef0;
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
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = s_Konni_Ricar_au__1000fee0;
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
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
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
    pcVar7 = s_Grenader_au__1000fed0;
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
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar7 = s_Grenader_au__1000fed0;
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
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
  }
  pcVar2 = DAT_100163f8;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if ((((((pcVar2 != (code *)0x0) &&
         ((*pcVar2)(&DAT_10015fd8,s_Melnica_au__1000fec4), DAT_100163f8 != (code *)0x0)) &&
        ((*DAT_100163f8)(&DAT_10015fd0,s_Sclad1_au__1000feb8), DAT_100163f8 != (code *)0x0)) &&
       (((*DAT_100163f8)(&DAT_100160f8,s_Cercov_Poland_au__1000fea4), DAT_100163f8 != (code *)0x0 &&
        ((*DAT_100163f8)(&DAT_10016258,s_Kazarma_au__1000fe98), DAT_100163f8 != (code *)0x0)))) &&
      (((*DAT_100163f8)(&DAT_10015fe8,s_Dip_korpus_au__1000fe88), DAT_100163f8 != (code *)0x0 &&
       (((*DAT_100163f8)(&DAT_10013618,s_artileri_depo_au__1000fe74), DAT_100163f8 != (code *)0x0 &&
        ((*DAT_100163f8)(&DAT_10013878,s_Rinok_au__1000fe68), DAT_100163f8 != (code *)0x0)))))) &&
     (((*DAT_100163f8)(&DAT_100138d8,s_Bashnia_au__1000fe5c), DAT_100163f8 != (code *)0x0 &&
      ((*DAT_100163f8)(&DAT_100162d8,s_PorE_au__1000fe50), DAT_100163f8 != (code *)0x0)))) {
    (*DAT_100163f8)(&DAT_10015fb8,s_Center_Austria_au__1000fe3c);
  }
  (*DAT_10016560)(s_Kreposnoi_pruss_au__1000fe28);
  if ((DAT_100163f8 != (code *)0x0) &&
     ((*DAT_100163f8)(&DAT_10016190,s_Kreposnoi_pruss_au__1000fe28), DAT_100163f8 != (code *)0x0)) {
    (*DAT_100163f8)(&DAT_100161e8,s_Kuznica_au__1000fe1c);
  }
  if (DAT_100163fc != (code *)0x0) {
    (*DAT_100163fc)(&DAT_10016088,s_KUZ04AU_1000fe14);
  }
  if (DAT_100163f8 != (code *)0x0) {
    (*DAT_100163f8)(&DAT_10015f20,s_akademia_E_au__1000fe04);
  }
  if (((DAT_100163fc != (code *)0x0) &&
      ((*DAT_100163fc)(&DAT_10016028,s_AKA35AU_1000fdfc), DAT_100163fc != (code *)0x0)) &&
     ((*DAT_100163fc)(&DAT_10016080,s_AKA36AU_1000fdf4), DAT_100163fc != (code *)0x0)) {
    (*DAT_100163fc)(&DAT_10016090,s_AKA32AU_1000fdec);
  }
  if (((DAT_100163f8 != (code *)0x0) &&
      ((*DAT_100163f8)(&DAT_10016250,s_Kazarma_evro_au__1000fdd8), DAT_100163f8 != (code *)0x0)) &&
     (((*DAT_100163f8)(&DAT_10013688,s_Pikiner_evro_au__1000fef0), DAT_100163f8 != (code *)0x0 &&
      ((*DAT_100163f8)(&DAT_100160e0,s_Mushketer_avstr_au__1000fdc4), DAT_100163f8 != (code *)0x0)))
     ) {
    (*DAT_100163f8)(&DAT_10013700,s_Officer_evro_au__1000fdb0);
  }
  if ((DAT_100163fc != (code *)0x0) &&
     ((*DAT_100163fc)(&DAT_10016260,s_Officer_evro_au_ATTACK_1000fd98), DAT_100163fc != (code *)0x0)
     ) {
    (*DAT_100163fc)(&DAT_10015fc8,s_Officer_evro_au_SHIELD_1000fd80);
  }
  if (DAT_100163f8 != (code *)0x0) {
    (*DAT_100163f8)(&DAT_10013640,s_Barabanshik_ev1_au__1000fd6c);
  }
  if (DAT_100163fc != (code *)0x0) {
    (*DAT_100163fc)(&DAT_100160d0,s_Barabanshik_ev1_au_SHIELD_1000fd50);
  }
  if (((DAT_100163f8 != (code *)0x0) &&
      ((*DAT_100163f8)(&DAT_100160d8,s_Konushnia_Swesair_au__1000fd38), DAT_100163f8 != (code *)0x0)
      ) && ((*DAT_100163f8)(&DAT_100163b0,&DAT_10016218), DAT_100163f8 != (code *)0x0)) {
    (*DAT_100163f8)(&DAT_10013690,s_Dragun_au__1000fd2c);
  }
  if ((((((DAT_100163fc != (code *)0x0) &&
         ((*DAT_100163fc)(&DAT_10013900,s_Dragun_au_ATTACK_1000fd18), DAT_100163fc != (code *)0x0))
        && (((*DAT_100163fc)(&DAT_100138f8,s_Dragun_au_ATTACK3_1000fd04),
            DAT_100163fc != (code *)0x0 &&
            (((*DAT_100163fc)(&DAT_100138f0,s_Dragun_au_ATTACK4_1000fcf0),
             DAT_100163fc != (code *)0x0 &&
             ((*DAT_100163fc)(&DAT_10013938,s_Dragun_au_ATTACK5_1000fcdc),
             DAT_100163fc != (code *)0x0)))))) &&
       ((*DAT_100163fc)(&DAT_10013928,s_Dragun_au_ATTACK6_1000fcc8), DAT_100163fc != (code *)0x0))
      && ((((((*DAT_100163fc)(&DAT_10013920,s_Dragun_au_ATTACK7_1000fcb4),
             DAT_100163fc != (code *)0x0 &&
             ((*DAT_100163fc)(&DAT_100136d8,s_Dragun_au_SHIELD_1000fca0),
             DAT_100163fc != (code *)0x0)) &&
            ((*DAT_100163fc)(&DAT_100136c8,s_Dragun_au_SHIELD3_1000fc8c),
            DAT_100163fc != (code *)0x0)) &&
           (((*DAT_100163fc)(&DAT_100138c0,s_Dragun_au_SHIELD4_1000fc78),
            DAT_100163fc != (code *)0x0 &&
            ((*DAT_100163fc)(&DAT_100138b8,s_Dragun_au_SHIELD5_1000fc64),
            DAT_100163fc != (code *)0x0)))) &&
          (((*DAT_100163fc)(&DAT_100138b0,s_Dragun_au_SHIELD6_1000fc50), DAT_100163fc != (code *)0x0
           && (((*DAT_100163fc)(&DAT_100138a8,s_Dragun_au_SHIELD7_1000fc3c),
               DAT_100163fc != (code *)0x0 &&
               ((*DAT_100163fc)(&DAT_10013900,s_Dragun_au_ATTACK_1000fd18),
               DAT_100163fc != (code *)0x0)))))))) &&
     ((((*DAT_100163fc)(&DAT_100138f8,s_Dragun_au_ATTACK3_1000fd04), DAT_100163fc != (code *)0x0 &&
       (((((*DAT_100163fc)(&DAT_100138f0,s_Dragun_au_ATTACK4_1000fcf0), DAT_100163fc != (code *)0x0
          && ((*DAT_100163fc)(&DAT_10013938,s_Dragun_au_ATTACK5_1000fcdc),
             DAT_100163fc != (code *)0x0)) &&
         ((*DAT_100163fc)(&DAT_10013928,s_Dragun_au_ATTACK6_1000fcc8), DAT_100163fc != (code *)0x0))
        && (((*DAT_100163fc)(&DAT_10013920,s_Dragun_au_ATTACK7_1000fcb4),
            DAT_100163fc != (code *)0x0 &&
            ((*DAT_100163fc)(&DAT_100136d8,s_Dragun_au_SHIELD_1000fca0), DAT_100163fc != (code *)0x0
            )))))) &&
      ((((*DAT_100163fc)(&DAT_100136c8,s_Dragun_au_SHIELD3_1000fc8c), DAT_100163fc != (code *)0x0 &&
        (((*DAT_100163fc)(&DAT_100138c0,s_Dragun_au_SHIELD4_1000fc78), DAT_100163fc != (code *)0x0
         && ((*DAT_100163fc)(&DAT_100138b8,s_Dragun_au_SHIELD5_1000fc64),
            DAT_100163fc != (code *)0x0)))) &&
       ((*DAT_100163fc)(&DAT_100138b0,s_Dragun_au_SHIELD6_1000fc50), DAT_100163fc != (code *)0x0))))
     )) {
    (*DAT_100163fc)(&DAT_100138a8,s_Dragun_au_SHIELD7_1000fc3c);
  }
  if ((DAT_100163f8 != (code *)0x0) &&
     ((*DAT_100163f8)(&DAT_10016330,s_Kirasir_au__1000fc30), DAT_100163f8 != (code *)0x0)) {
    (*DAT_100163f8)(&DAT_10013680,s_Dragun_18_au__1000fc20);
  }
  if (((((DAT_100163fc != (code *)0x0) &&
        ((*DAT_100163fc)(&DAT_10013658,s_Dragun_18_au_ATTACK_1000fc0c), DAT_100163fc != (code *)0x0)
        ) && ((*DAT_100163fc)(&DAT_10013650,s_Dragun_18_au_ATTACK3_1000fbf4),
             DAT_100163fc != (code *)0x0)) &&
      ((((*DAT_100163fc)(&DAT_10013648,s_Dragun_18_au_ATTACK4_1000fbdc), DAT_100163fc != (code *)0x0
        && ((*DAT_100163fc)(&DAT_10016318,s_Dragun_18_au_ATTACK5_1000fbc4),
           DAT_100163fc != (code *)0x0)) &&
       (((*DAT_100163fc)(&DAT_10016310,s_Dragun_18_au_ATTACK6_1000fbac), DAT_100163fc != (code *)0x0
        && (((*DAT_100163fc)(&DAT_10016308,s_Dragun_18_au_ATTACK7_1000fb94),
            DAT_100163fc != (code *)0x0 &&
            ((*DAT_100163fc)(&DAT_10016390,s_Dragun_18_au_SHIELD_1000fb80),
            DAT_100163fc != (code *)0x0)))))))) &&
     ((((*DAT_100163fc)(&DAT_10016388,s_Dragun_18_au_SHIELD3_1000fb68), DAT_100163fc != (code *)0x0
       && ((((((((*DAT_100163fc)(&DAT_100163d8,s_Dragun_18_au_SHIELD4_1000fb50),
                DAT_100163fc != (code *)0x0 &&
                ((*DAT_100163fc)(&DAT_100163d0,s_Dragun_18_au_SHIELD5_1000fb38),
                DAT_100163fc != (code *)0x0)) &&
               ((*DAT_100163fc)(&DAT_100163c8,s_Dragun_18_au_SHIELD6_1000fb20),
               DAT_100163fc != (code *)0x0)) &&
              (((*DAT_100163fc)(&DAT_100163c0,s_Dragun_18_au_SHIELD7_1000fb08),
               DAT_100163fc != (code *)0x0 &&
               ((*DAT_100163fc)(&DAT_10013658,s_Dragun_18_au_ATTACK_1000fc0c),
               DAT_100163fc != (code *)0x0)))) &&
             ((*DAT_100163fc)(&DAT_10013650,s_Dragun_18_au_ATTACK3_1000fbf4),
             DAT_100163fc != (code *)0x0)) &&
            (((*DAT_100163fc)(&DAT_10013648,s_Dragun_18_au_ATTACK4_1000fbdc),
             DAT_100163fc != (code *)0x0 &&
             ((*DAT_100163fc)(&DAT_10016318,s_Dragun_18_au_ATTACK5_1000fbc4),
             DAT_100163fc != (code *)0x0)))) &&
           (((*DAT_100163fc)(&DAT_10016310,s_Dragun_18_au_ATTACK6_1000fbac),
            DAT_100163fc != (code *)0x0 &&
            ((((*DAT_100163fc)(&DAT_10016308,s_Dragun_18_au_ATTACK7_1000fb94),
              DAT_100163fc != (code *)0x0 &&
              ((*DAT_100163fc)(&DAT_10016390,s_Dragun_18_au_SHIELD_1000fb80),
              DAT_100163fc != (code *)0x0)) &&
             ((*DAT_100163fc)(&DAT_10016388,s_Dragun_18_au_SHIELD3_1000fb68),
             DAT_100163fc != (code *)0x0)))))))) &&
      ((((*DAT_100163fc)(&DAT_100163d8,s_Dragun_18_au_SHIELD4_1000fb50), DAT_100163fc != (code *)0x0
        && ((*DAT_100163fc)(&DAT_100163d0,s_Dragun_18_au_SHIELD5_1000fb38),
           DAT_100163fc != (code *)0x0)) &&
       ((*DAT_100163fc)(&DAT_100163c8,s_Dragun_18_au_SHIELD6_1000fb20), DAT_100163fc != (code *)0x0)
       ))))) {
    (*DAT_100163fc)(&DAT_100163c0,s_Dragun_18_au_SHIELD7_1000fb08);
  }
  if ((((DAT_100163f8 != (code *)0x0) &&
       ((*DAT_100163f8)(&DAT_10016278,s_Strelec_Algir_DIP_au__1000faf0), DAT_100163f8 != (code *)0x0
       )) && (((*DAT_100163f8)(&DAT_10016160,s_Grenader_DIP_au__1000fadc),
              DAT_100163f8 != (code *)0x0 &&
              ((((*DAT_100163f8)(&DAT_10016328,s_Kozak_loshad_DIP_au__1000fac4),
                DAT_100163f8 != (code *)0x0 &&
                ((*DAT_100163f8)(&DAT_10013888,s_Dragun_18_DIP_au__1000fab0),
                DAT_100163f8 != (code *)0x0)) &&
               ((*DAT_100163f8)(&DAT_10015fe0,s_Sveshenik_evro_au__1000fa9c),
               DAT_100163f8 != (code *)0x0)))))) &&
     ((((*DAT_100163f8)(&DAT_10015f80,&DAT_10016048), DAT_100163f8 != (code *)0x0 &&
       ((*DAT_100163f8)(&DAT_10016370,s_Pushka_au__1000fa90), DAT_100163f8 != (code *)0x0)) &&
      (((*DAT_100163f8)(&DAT_10013668,s_Mortira_au__1000fa84), DAT_100163f8 != (code *)0x0 &&
       ((((*DAT_100163f8)(&DAT_100138c8,s_Mortira_b_AU__1000fa74), DAT_100163f8 != (code *)0x0 &&
         ((*DAT_100163f8)(&DAT_100161f0,s_Lodka_au__1000fa68), DAT_100163f8 != (code *)0x0)) &&
        (((*DAT_100163f8)(&DAT_10013890,s_Kavalerist_avstrii_au__1000fa50),
         DAT_100163f8 != (code *)0x0 &&
         (((((*DAT_100163f8)(&DAT_100138e8,s_Fregat_AU__1000fa44), DAT_100163f8 != (code *)0x0 &&
            ((*DAT_100163f8)(&DAT_10015f90,s_GALERA_AU__1000fa38), DAT_100163f8 != (code *)0x0)) &&
           ((*DAT_100163f8)(&DAT_10016398,s_Linkor_au__1000fa2c), DAT_100163f8 != (code *)0x0)) &&
          ((*DAT_100163f8)(&DAT_10015f88,s_Yahta_au__1000fa20), DAT_100163f8 != (code *)0x0)))))))))
      ))) {
    (*DAT_100163f8)(&DAT_100138a0,s_PERES_KOR_au__1000fa10);
  }
  if ((((DAT_100163fc != (code *)0x0) &&
       ((*DAT_100163fc)(&DAT_10016378,s_Melnica_au_GETRES_1000f9fc), DAT_100163fc != (code *)0x0))
      && ((((*DAT_100163fc)(&DAT_10016100,s_Melnica_au_GETRES2_1000f9e8),
           DAT_100163fc != (code *)0x0 &&
           (((*DAT_100163fc)(&DAT_10013660,s_KUZ01AU_1000f9e0), DAT_100163fc != (code *)0x0 &&
            ((*DAT_100163fc)(&DAT_100163a0,s_Pikiner_evro_au_ATTACK_1000f9c8),
            DAT_100163fc != (code *)0x0)))) &&
          ((*DAT_100163fc)(&DAT_100163a8,s_Pikiner_evro_au_ATTACK3_1000f9b0),
          DAT_100163fc != (code *)0x0)))) &&
     ((((*DAT_100163fc)(&DAT_100163b8,s_Pikiner_evro_au_ATTACK4_1000f998),
       DAT_100163fc != (code *)0x0 &&
       ((*DAT_100163fc)(&DAT_100162f0,s_Pikiner_evro_au_SHIELD_1000f980),
       DAT_100163fc != (code *)0x0)) &&
      ((*DAT_100163fc)(&DAT_100162f8,s_Pikiner_evro_au_SHIELD3_1000f968),
      DAT_100163fc != (code *)0x0)))) {
    (*DAT_100163fc)(&DAT_10016300,s_Pikiner_evro_au_SHIELD4_1000f950);
  }
  FUN_10002720(&DAT_10016350,s_Pikiner_evro_au_ATTACK_1000f9c8);
  FUN_10002720(&DAT_10016358,s_Pikiner_evro_au_ATTACK3_1000f9b0);
  FUN_10002720(&DAT_10016340,s_Pikiner_evro_au_ATTACK4_1000f998);
  FUN_10002720(&DAT_10016348,s_Pikiner_evro_au_ATTACK5_1000f938);
  FUN_10002720(&DAT_10016360,s_Pikiner_evro_au_ATTACK6_1000f920);
  FUN_10002720(&DAT_10016298,s_Pikiner_evro_au_SHIELD_1000f980);
  FUN_10002720(&DAT_10016280,s_Pikiner_evro_au_SHIELD3_1000f968);
  FUN_10002720(&DAT_10016288,s_Pikiner_evro_au_SHIELD4_1000f950);
  FUN_10002720(&DAT_100162a0,s_Pikiner_evro_au_SHIELD5_1000f908);
  FUN_10002720(&DAT_100162a8,s_Pikiner_evro_au_SHIELD6_1000f8f0);
  if ((((DAT_100163fc != (code *)0x0) &&
       ((*DAT_100163fc)(&DAT_10013910,s_Mushketer_avstr_au_ATTACK_1000f8d4),
       DAT_100163fc != (code *)0x0)) &&
      (((*DAT_100163fc)(&DAT_10013918,s_Mushketer_avstr_au_ATTACK3_1000f8b8),
       DAT_100163fc != (code *)0x0 &&
       (((*DAT_100163fc)(&DAT_10013908,s_Mushketer_avstr_au_ATTACK4_1000f89c),
        DAT_100163fc != (code *)0x0 &&
        ((*DAT_100163fc)(&DAT_10015f78,s_Mushketer_avstr_au_SHIELD_1000f880),
        DAT_100163fc != (code *)0x0)))))) &&
     ((*DAT_100163fc)(&DAT_10015f68,s_Mushketer_avstr_au_SHIELD3_1000f864),
     DAT_100163fc != (code *)0x0)) {
    (*DAT_100163fc)(&DAT_10015f70,s_Mushketer_avstr_au_SHIELD4_1000f848);
  }
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016018,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016010,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016008,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016000,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10015ff8,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10015ff0,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016130,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016128,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016120,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016118,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016108,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10016158,puVar4);
  if (((((((DAT_100163fc != (code *)0x0) &&
          ((*DAT_100163fc)(&DAT_100136b8,s_Kirasir_au_ATTACK_1000f7d4), DAT_100163fc != (code *)0x0)
          ) && ((*DAT_100163fc)(&DAT_100136b0,s_Kirasir_au_ATTACK3_1000f7c0),
               DAT_100163fc != (code *)0x0)) &&
        (((*DAT_100163fc)(&DAT_100136a8,s_Kirasir_au_ATTACK4_1000f7ac), DAT_100163fc != (code *)0x0
         && ((*DAT_100163fc)(&DAT_100136a0,s_Kirasir_au_ATTACK5_1000f798),
            DAT_100163fc != (code *)0x0)))) &&
       (((*DAT_100163fc)(&DAT_10013678,s_Kirasir_au_ATTACK6_1000f784), DAT_100163fc != (code *)0x0
        && (((*DAT_100163fc)(&DAT_10013670,s_Kirasir_au_ATTACK7_1000f770),
            DAT_100163fc != (code *)0x0 &&
            ((*DAT_100163fc)(&DAT_10013748,s_Kirasir_au_SHIELD_1000f75c),
            DAT_100163fc != (code *)0x0)))))) &&
      ((*DAT_100163fc)(&DAT_10013740,s_Kirasir_au_SHIELD3_1000f748), DAT_100163fc != (code *)0x0))
     && ((((*DAT_100163fc)(&DAT_10013738,s_Kirasir_au_SHIELD4_1000f734), DAT_100163fc != (code *)0x0
          && ((*DAT_100163fc)(&DAT_10013720,s_Kirasir_au_SHIELD5_1000f720),
             DAT_100163fc != (code *)0x0)) &&
         ((*DAT_100163fc)(&DAT_10013718,s_Kirasir_au_SHIELD6_1000f70c), DAT_100163fc != (code *)0x0)
         ))) {
    (*DAT_100163fc)(&DAT_10013710,s_Kirasir_au_SHIELD7_1000f6f8);
  }
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_100136e0,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_100136e8,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_100136f0,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_100136f8,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_100136c0,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_100136d0,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10013788,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10013790,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10013798,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10013770,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10013778,puVar4);
  puVar4 = FUN_10002fb0();
  FUN_10002720(&DAT_10013780,puVar4);
  if ((((((DAT_100163fc != (code *)0x0) &&
         ((*DAT_100163fc)(&DAT_100161d8,s_Pushka_au_BUILD_1000f6e8), DAT_100163fc != (code *)0x0))
        && (((*DAT_100163fc)(&DAT_100161d0,s_Pushka_au_BUILD3_1000f6d4), DAT_100163fc != (code *)0x0
            && (((*DAT_100163fc)(&DAT_100161a0,s_Pushka_au_BUILD4_1000f6c0),
                DAT_100163fc != (code *)0x0 &&
                ((*DAT_100163fc)(&DAT_10016198,s_Pushka_au_BUILD5_1000f6ac),
                DAT_100163fc != (code *)0x0)))))) &&
       (((*DAT_100163fc)(&DAT_100161a8,s_Pushka_au_BUILD6_1000f698), DAT_100163fc != (code *)0x0 &&
        (((((*DAT_100163fc)(&DAT_10016098,s_Mortira_au_BUILD_1000f684), DAT_100163fc != (code *)0x0
           && ((*DAT_100163fc)(&DAT_100160a0,s_Mortira_au_BUILD3_1000f670),
              DAT_100163fc != (code *)0x0)) &&
          ((*DAT_100163fc)(&DAT_100160a8,s_Mortira_au_BUILD4_1000f65c), DAT_100163fc != (code *)0x0)
          ) && (((*DAT_100163fc)(&DAT_100160b0,s_Mortira_au_BUILD5_1000f648),
                DAT_100163fc != (code *)0x0 &&
                ((*DAT_100163fc)(&DAT_100161b8,s_KUZ03AU_1000f640), DAT_100163fc != (code *)0x0)))))
        ))) && ((((((*DAT_100163fc)(&DAT_10016020,s_MAINAU_1000f638), DAT_100163fc != (code *)0x0 &&
                   (((*DAT_100163fc)(&DAT_10013958,s_AKA06AU_1000f630), DAT_100163fc != (code *)0x0
                    && ((*DAT_100163fc)(&DAT_10016078,s_AKA01AU_1000f628),
                       DAT_100163fc != (code *)0x0)))) &&
                  ((*DAT_100163fc)(&DAT_10016030,s_AKA02AU_1000f620), DAT_100163fc != (code *)0x0))
                 && (((((*DAT_100163fc)(&DAT_10016038,s_AKA03AU_1000f618),
                       DAT_100163fc != (code *)0x0 &&
                       ((*DAT_100163fc)(&DAT_10016040,s_AKA04AU_1000f610),
                       DAT_100163fc != (code *)0x0)) &&
                      ((*DAT_100163fc)(&DAT_10016270,s_AKA08AU_1000f608),
                      DAT_100163fc != (code *)0x0)) &&
                     (((*DAT_100163fc)(&DAT_10016110,s_AKA23AU_1000f600),
                      DAT_100163fc != (code *)0x0 &&
                      ((*DAT_100163fc)(&DAT_10016150,s_AKA24AU_1000f5f8),
                      DAT_100163fc != (code *)0x0)))))) &&
                (((((*DAT_100163fc)(&DAT_10016208,s_AKA31AU_1000f5f0), DAT_100163fc != (code *)0x0
                   && (((*DAT_100163fc)(&DAT_10016210,s_AKA33AU_1000f5e8),
                       DAT_100163fc != (code *)0x0 &&
                       ((*DAT_100163fc)(&DAT_10016168,s_AKA12AU_1000f5e0),
                       DAT_100163fc != (code *)0x0)))) &&
                  ((*DAT_100163fc)(&DAT_10016178,s_AKA13AU_1000f5d8), DAT_100163fc != (code *)0x0))
                 && (((((*DAT_100163fc)(&DAT_10016180,s_AKA14AU_1000f5d0),
                       DAT_100163fc != (code *)0x0 &&
                       ((*DAT_100163fc)(&DAT_10016170,s_AKA15AU_1000f5c8),
                       DAT_100163fc != (code *)0x0)) &&
                      ((*DAT_100163fc)(&DAT_10013950,s_AKA11AU_1000f5c0),
                      DAT_100163fc != (code *)0x0)) &&
                     ((((*DAT_100163fc)(&DAT_100138e0,s_AKA10AU_1000f5b8),
                       DAT_100163fc != (code *)0x0 &&
                       ((*DAT_100163fc)(&DAT_100137a0,s_AKA30AU_1000f5b0),
                       DAT_100163fc != (code *)0x0)) &&
                      (((*DAT_100163fc)(&DAT_100160f0,s_AKA07AU_1000f5a8),
                       DAT_100163fc != (code *)0x0 &&
                       (((*DAT_100163fc)(&DAT_10013940,s_AKA20AU_1000f5a0),
                        DAT_100163fc != (code *)0x0 &&
                        ((*DAT_100163fc)(&DAT_100161f8,s_KUZ02AU_1000f598),
                        DAT_100163fc != (code *)0x0)))))))))))))) &&
     ((((*DAT_100163fc)(&DAT_10016200,s_AKA09AU_1000f590), DAT_100163fc != (code *)0x0 &&
       ((((((*DAT_100163fc)(&DAT_10013870,s_AKA05AU_1000f588), DAT_100163fc != (code *)0x0 &&
           ((*DAT_100163fc)(&DAT_10013880,s_AKA28AU_1000f580), DAT_100163fc != (code *)0x0)) &&
          ((*DAT_100163fc)(&DAT_10013768,s_AKA29AU_1000f578), DAT_100163fc != (code *)0x0)) &&
         (((*DAT_100163fc)(&DAT_10013628,s_KUZ05AU_1000f570), DAT_100163fc != (code *)0x0 &&
          ((*DAT_100163fc)(&DAT_10013708,s_KUZ06AU_1000f568), DAT_100163fc != (code *)0x0)))) &&
        ((*DAT_100163fc)(&DAT_10013630,s_AKA34AU_1000f560), DAT_100163fc != (code *)0x0)))) &&
      ((((*DAT_100163fc)(&DAT_100162e8,s_Bashnia_au_PAUSE_1000f54c), DAT_100163fc != (code *)0x0 &&
        ((*DAT_100163fc)(&DAT_100162d0,s_Bashnia_au_PAUSE3_1000f538), DAT_100163fc != (code *)0x0))
       && (((*DAT_100163fc)(&DAT_100162e0,s_Bashnia_au_PAUSE4_1000f524), DAT_100163fc != (code *)0x0
           && (((*DAT_100163fc)(&DAT_100162c0,s_Bashnia_au_PAUSE5_1000f510),
               DAT_100163fc != (code *)0x0 &&
               ((*DAT_100163fc)(&DAT_100162c8,s_Bashnia_au_PAUSE6_1000f4fc),
               DAT_100163fc != (code *)0x0)))))))))) {
    (*DAT_100163fc)(&DAT_100162b8,s_Bashnia_au_PAUSE7_1000f4e8);
  }
  (*DAT_10016520)(6);
  (*DAT_10016524)(0,s_shahta_au_INSIDE_1000f4d4,0x5a);
  (*DAT_10016524)(1,s_shahta_au_INSIDE3_1000f4c0,0x32);
  (*DAT_10016524)(2,s_shahta_au_INSIDE4_1000f4ac,0x32);
  (*DAT_10016524)(3,s_shahta_au_INSIDE5_1000f498,0x32);
  (*DAT_10016524)(4,s_shahta_au_INSIDE6_1000f484,0x32);
  (*DAT_10016524)(5,s_shahta_au_INSIDE7_1000f470,0x32);
  FUN_10002710(s_Pikiner_evro_au__1000fef0);
  (*DAT_1001655c)(s_shahta_au__1000f464);
  (*DAT_10016564)(s_Dom_Austria_au__1000f454);
  (*DAT_1001656c)(s_WALL_EV_au__1000f448);
  return;
}



// Function: InitAI @ 0x10002600

void InitAI(void)

{
  int iVar1;
  
                    /* 0x2600  1  InitAI */
  FUN_10001000();
  (*DAT_10016528)(0x122);
  (*DAT_1001652c)(0x5a);
  (*DAT_10016530)(0x5a);
  (*DAT_10016534)(1000);
  (*DAT_10016538)(5);
  DAT_100162b4 = (*DAT_10016500)();
  iVar1 = DAT_100162b4 * 0x4b8;
  *(undefined4 *)(&DAT_10013af0 + iVar1) = 0;
  *(undefined4 *)(&DAT_10013c84 + iVar1) = 0;
  return;
}



// Function: FUN_10002670 @ 0x10002670

void __cdecl FUN_10002670(undefined4 param_1,undefined4 param_2)

{
  (*DAT_10016510)(param_1,param_2);
  return;
}



// Function: FUN_10002690 @ 0x10002690

void __cdecl FUN_10002690(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_1001651c)(param_1,param_2,param_3);
  return;
}



// Function: FUN_100026b0 @ 0x100026b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100026b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x100026b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10016548)();
  return;
}



// Function: FUN_100026c0 @ 0x100026c0

void __cdecl FUN_100026c0(undefined4 param_1,undefined4 param_2)

{
  (*DAT_10016568)(param_1,param_2);
  return;
}



// Function: FUN_100026e0 @ 0x100026e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100026e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x100026e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10016574)();
  return;
}



// Function: FUN_100026f0 @ 0x100026f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100026f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x100026f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10016578)();
  return;
}



// Function: FUN_10002700 @ 0x10002700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002700(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10016580)();
  return;
}



// Function: FUN_10002710 @ 0x10002710

void __cdecl FUN_10002710(undefined4 param_1)

{
  (*DAT_10016584)(param_1);
  return;
}



// Function: FUN_10002720 @ 0x10002720

void __cdecl FUN_10002720(undefined4 param_1,undefined4 param_2)

{
  (*DAT_10016588)(param_1,param_2);
  return;
}



// Function: FUN_10002740 @ 0x10002740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002740(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1001658c)();
  return;
}



// Function: FUN_10002750 @ 0x10002750

void __cdecl FUN_10002750(undefined4 param_1,undefined4 param_2)

{
  (*DAT_10016268)(param_1,param_2);
  return;
}



// Function: FUN_10002770 @ 0x10002770

void __cdecl FUN_10002770(undefined4 param_1)

{
  (*DAT_100162b0)(param_1);
  return;
}



// Function: FUN_10002780 @ 0x10002780

void __cdecl FUN_10002780(undefined4 param_1,undefined4 param_2)

{
  (*DAT_10013730)(param_1,param_2);
  return;
}



// Function: FUN_100027a0 @ 0x100027a0

void __cdecl FUN_100027a0(undefined4 param_1)

{
  (*DAT_100138d0)(param_1);
  return;
}



// Function: FUN_100027b0 @ 0x100027b0

void __cdecl FUN_100027b0(undefined4 param_1)

{
  (*DAT_10016590)(param_1);
  return;
}



// Function: FUN_100027c0 @ 0x100027c0

void __cdecl FUN_100027c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_10015fc0)(param_1,param_2,param_3);
  return;
}



// Function: FUN_100027e0 @ 0x100027e0

void __cdecl FUN_100027e0(undefined4 param_1)

{
  (*DAT_10013930)(param_1);
  return;
}



// Function: FUN_100027f0 @ 0x100027f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100027f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x100027f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10016248)();
  return;
}



// Function: FUN_10002800 @ 0x10002800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002800(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10013948)();
  return;
}



// Function: FUN_10002810 @ 0x10002810

FARPROC __cdecl FUN_10002810(LPCSTR param_1)

{
  FARPROC pFVar1;
  CHAR local_100 [256];
  
  pFVar1 = GetProcAddress(DAT_100163e0,param_1);
  if (pFVar1 == (FARPROC)0x0) {
    FUN_10006ef0(local_100,(byte *)s_DMCR_EXE_does_not_contain_functi_1000ff14);
    MessageBoxA((HWND)0x0,local_100,s_DLL_init_error__1000ff04,0);
  }
  return pFVar1;
}



// Function: FUN_10002870 @ 0x10002870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002870(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_100163e0 = GetModuleHandleA(s_DMCR_EXE_10010668);
    if (DAT_100163e0 == (HMODULE)0x0) {
      MessageBoxA((HWND)0x0,s_Can_not_detect_DMCR_EXE_10010648,s_ERROR__10010660,0);
      return 1;
    }
    _DAT_100163e4 = FUN_10002810(s_RegisterUnits_10010638);
    _DAT_100163e8 = FUN_10002810(s_RegisterString_10010628);
    _DAT_100163ec = FUN_10002810(s_RegisterSound_10010618);
    _DAT_100163f0 = FUN_10002810(s_RegisterVar_1001060c);
    _DAT_100163f4 = FUN_10002810(s_RegisterZone_100105fc);
    DAT_100163f8 = FUN_10002810(s_RegisterUnitType_100105e8);
    DAT_100163fc = FUN_10002810(s_RegisterUpgrade_100105d8);
    _DAT_10016400 = FUN_10002810(s_InitialUpgrade_100105c8);
    _DAT_10016404 = FUN_10002810(s_RegisterFormation_100105b4);
    _DAT_10016408 = FUN_10002810(s_RegisterUnitsForm_100105a0);
    _DAT_1001640c = FUN_10002810(s_GetUnitsAmount0_10010590);
    _DAT_10016410 = FUN_10002810(s_GetUnitsAmount1_10010580);
    _DAT_10016414 = FUN_10002810(s_GetUnitsAmount2_10010570);
    _DAT_10016418 = FUN_10002810(s_GetTotalAmount0_10010560);
    _DAT_1001641c = FUN_10002810(s_GetTotalAmount1_10010550);
    _DAT_10016420 = FUN_10002810(s_GetReadyAmount_10010540);
    _DAT_10016424 = FUN_10002810(s_IsUpgradeDoing_10010530);
    _DAT_10016428 = FUN_10002810(s_IsUpgradeDone_10010520);
    _DAT_1001642c = FUN_10002810(s_IsUpgradeEnabled_1001050c);
    _DAT_10016430 = FUN_10002810(s_GetDied_10010504);
    _DAT_10016434 = FUN_10002810(s_CreateObject0_100104f4);
    _DAT_10016438 = FUN_10002810(s_ClearSelection_100104e4);
    _DAT_1001643c = FUN_10002810(s_SelectUnits_100104d8);
    _DAT_10016440 = FUN_10002810(s_SelectUnitsType_100104c8);
    _DAT_10016458 = FUN_10002810(s_SelDie_100104c0);
    _DAT_1001645c = FUN_10002810(s_SelOpenGates_100104b0);
    _DAT_10016460 = FUN_10002810(s_SelCloseGates_100104a0);
    _DAT_10016464 = FUN_10002810(s_SelSendTo_10010494);
    _DAT_10016468 = FUN_10002810(s_SelSendAndKill_10010484);
    _DAT_10016484 = FUN_10002810(s_SelAutoKill_10010478);
    _DAT_1001646c = FUN_10002810(s_SelAttackGroup_10010468);
    _DAT_10016470 = FUN_10002810(s_Patrol_10010460);
    _DAT_10016474 = FUN_10002810(s_ChangeFriends_10010450);
    _DAT_10016478 = FUN_10002810(s_SelChangeNation_10010440);
    _DAT_1001647c = FUN_10002810(s_SetStandGround_10010430);
    _DAT_10016480 = FUN_10002810(s_AllowAttack_10010424);
    _DAT_10016488 = FUN_10002810(&DAT_1001041c);
    _DAT_1001648c = FUN_10002810(s_DisableMission_1001040c);
    _DAT_10016490 = FUN_10002810(s_EnableMission_100103fc);
    _DAT_10016494 = FUN_10002810(s_SetVictoryText_100103ec);
    _DAT_10016498 = FUN_10002810(s_SetLooseText_100103dc);
    _DAT_1001649c = FUN_10002810(s_ShowVictory_100103d0);
    _DAT_100164a0 = FUN_10002810(s_LooseGame_100103c4);
    _DAT_100164a4 = FUN_10002810(s_ShowCentralText_100103b4);
    _DAT_100164a8 = FUN_10002810(s_ShowPage_100103a8);
    _DAT_100164ac = FUN_10002810(s_AskQuestion_1001039c);
    _DAT_100161e0 = FUN_10002810(s_GetResource_10010390);
    _DAT_100164b0 = FUN_10002810(s_AddResource_10010384);
    _DAT_100164b4 = FUN_10002810(s_SetResource_10010378);
    DAT_100164b8 = FUN_10002810(s_GetUnitCost_1001036c);
    DAT_100164bc = FUN_10002810(s_GetUpgradeCost_1001035c);
    _DAT_100164c0 = FUN_10002810(s_RunTimer_10010350);
    _DAT_100164c4 = FUN_10002810(s_TimerDone_10010344);
    _DAT_100164c8 = FUN_10002810(s_TimerDoneFirst_10010334);
    _DAT_100164cc = FUN_10002810(s_TimerIsEmpty_10010324);
    _DAT_100164d0 = FUN_10002810(s_FreeTimer_10010318);
    _DAT_100164d4 = FUN_10002810(s_GetTime_10010310);
    _DAT_100164d8 = FUN_10002810(s_GetGlobalTime_10010300);
    _DAT_100164dc = FUN_10002810(s_Trigg_100102f8);
    _DAT_100164e0 = FUN_10002810(s_SetTrigg_100102ec);
    _DAT_100164e4 = FUN_10002810(s_RunAI_100102e4);
    _DAT_10013638 = FUN_10002810(s_RunAIWithPeasants_100102d0);
    _DAT_100164f0 = FUN_10002810(s_SelCenter_100102c4);
    _DAT_100164ec = FUN_10002810(s_UnitsCenter_100102b8);
    _DAT_100164f4 = FUN_10002810(s_CreateZoneNearUnit_100102a4);
    _DAT_100164f8 = FUN_10002810(s_SetLightSpot_10010294);
    _DAT_100164fc = FUN_10002810(s_ClearLightSpot_10010284);
    _DAT_10016448 = FUN_10002810(s_GetMaxInside_10010274);
    _DAT_10016444 = FUN_10002810(s_GetNInside_10010268);
    _DAT_1001644c = FUN_10002810(s_PushUnitAway_10010258);
    _DAT_10016450 = FUN_10002810(s_CheckLeaveAbility_10010244);
    _DAT_10016454 = FUN_10002810(s_AttackZoneByArtillery_1001022c);
    DAT_10016518 = FUN_10002810(s_SetDefSettings_1001021c);
    _DAT_10016548 = FUN_10002810(s_GetMaxPeasantsInMines_10010204);
    DAT_10016510 = FUN_10002810(s_SetUpgradeLock_100101f4);
    DAT_1001651c = FUN_10002810(s_AI_Torg_100101ec);
    DAT_10016568 = FUN_10002810(s_GetUnitsByUsage_100101dc);
    DAT_10016500 = FUN_10002810(s_GetAINation_100101d0);
    DAT_10016504 = FUN_10002810(s_TryUnit_100101c8);
    DAT_10016508 = FUN_10002810(s_TryUpgrade_100101bc);
    DAT_1001650c = FUN_10002810(s_SetMineBalanse_100101ac);
    DAT_10016514 = FUN_10002810(s_SetPDistribution_10010198);
    DAT_10016520 = FUN_10002810(s_AssignAmountOfMineUpgrades_1001017c);
    DAT_10016524 = FUN_10002810(s_AssignMineUpgrade_10010168);
    DAT_1001655c = FUN_10002810(s_AssignMine_1001015c);
    DAT_10016560 = FUN_10002810(s_AssignPeasant_1001014c);
    DAT_10016564 = FUN_10002810(s_AssignHouse_10010140);
    DAT_1001656c = FUN_10002810(s_AssignWall_10010134);
    DAT_10016528 = FUN_10002810(s_SET_MINE_CAPTURE_RADIUS_1001011c);
    DAT_1001652c = FUN_10002810(s_SET_MINE_UPGRADE1_RADIUS_10010100);
    DAT_10016530 = FUN_10002810(s_SET_MINE_UPGRADE2_RADIUS_100100e4);
    DAT_10016534 = FUN_10002810(s_SET_DEFAULT_MAX_WORKERS_100100cc);
    DAT_10016538 = FUN_10002810(s_SET_MIN_PEASANT_BRIGADE_100100b4);
    DAT_1001653c = FUN_10002810(s_GetMoney_100100a8);
    DAT_10016540 = FUN_10002810(s_GetUnits_1001009c);
    DAT_10016544 = FUN_10002810(s_GetReadyUnits_1001008c);
    DAT_1001654c = FUN_10002810(s_UpgIsDone_10010080);
    DAT_10016550 = FUN_10002810(s_UpgIsRun_10010074);
    DAT_10016570 = FUN_10002810(s_FieldExist_10010068);
    _DAT_10016574 = FUN_10002810(s_GetDifficulty_10010058);
    _DAT_10016578 = FUN_10002810(s_GetStartRes_1001004c);
    _DAT_1001657c = FUN_10002810(s_GetResOnMap_10010040);
    _DAT_10016580 = FUN_10002810(s_GetLandType_10010034);
    DAT_10016584 = FUN_10002810(s_AssignFormUnit_10010024);
    _DAT_1001658c = FUN_10002810(s_GetRandomIndex_10010014);
    DAT_10016588 = FUN_10002810(s_SafeRegisterUpgrade_10010000);
    DAT_100138d0 = FUN_10002810(s_SetMinesUpgradeRules_1000ffe8);
    DAT_10013730 = FUN_10002810(s_SetMinesBuildingRules_1000ffd0);
    DAT_10016590 = FUN_10002810(s_GetExtraction_1000ffc0);
    _DAT_10016554 = FUN_10002810(s_EnableUpgrade_1000ffb0);
    _DAT_10016558 = FUN_10002810(s_DisableUpgrade_1000ffa0);
    DAT_100162b0 = FUN_10002810(s_GetAIRegister_1000ff90);
    DAT_10016268 = FUN_10002810(s_SetAIRegister_1000ff80);
    DAT_10015fc0 = FUN_10002810(s_GetTorgResult_1000ff70);
    DAT_10013930 = FUN_10002810(s_SetDefenseState_1000ff60);
    _DAT_10016248 = FUN_10002810(s_GetMaxPeaceTime_1000ff50);
    _DAT_10013948 = FUN_10002810(s_GetPeaceTimeLeft_1000ff3c);
  }
  return 1;
}



// Function: FUN_10002fb0 @ 0x10002fb0

undefined * FUN_10002fb0(void)

{
  FUN_10006ef0(&DAT_100137a8,&DAT_10010674);
  return &DAT_100137a8;
}



// Function: FUN_10002fe0 @ 0x10002fe0

int __cdecl FUN_10002fe0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_100027c0(param_1,param_2,1000);
  return (param_3 * 1000) / iVar1;
}



// Function: FUN_10003010 @ 0x10003010

undefined4 __cdecl FUN_10003010(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = (*DAT_1001653c)(param_1);
  if (param_2 <= iVar1) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  iVar1 = (*DAT_1001653c)(param_1);
  iVar2 = FUN_10002fe0(param_3,param_1,param_2 - iVar1);
  uVar3 = (*DAT_1001653c)(param_3);
  if ((iVar2 < (int)uVar3) && (1000 < iVar2)) {
    iVar6 = 0;
    while( true ) {
      iVar4 = 0xf;
      if (iVar2 / 15000 < 0x10) {
        iVar4 = iVar2 / 15000;
      }
      if (iVar4 <= iVar6) break;
      FUN_10002690(param_1,param_3,100);
      iVar6 = iVar6 + 1;
    }
    iVar1 = FUN_10002fe0(param_3,param_1,param_2 - iVar1);
    uVar5 = FUN_10002690(param_3,param_1,iVar1);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



// Function: FUN_100030c0 @ 0x100030c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100030c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_100162b4 = (*DAT_10016500)();
  iVar1 = (*DAT_10016540)(&DAT_10016190);
  iVar2 = FUN_100027b0(1);
  iVar3 = FUN_100027b0(4);
  iVar4 = FUN_100027b0(5);
  DAT_100161b0 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_100162b4 * 0x4b8;
  _DAT_10016604 = *(undefined4 *)(&DAT_10013af0 + iVar1);
  _DAT_100161c0 = &DAT_10013960 + iVar1;
  _DAT_100161c4 = &DAT_10013af4 + iVar1;
  _DAT_10016608 = *(undefined4 *)(&DAT_10013c84 + iVar1);
  _DAT_1001624c = &DAT_10013c88 + iVar1;
  _DAT_10016290 = (*DAT_1001653c)(3);
  _DAT_10013620 = (*DAT_1001653c)(0);
  _DAT_10016380 = (*DAT_1001653c)(2);
  _DAT_10013728 = (*DAT_1001653c)(4);
  _DAT_100160e8 = (*DAT_1001653c)(5);
  _DAT_10016338 = (*DAT_1001653c)(1);
  iVar1 = FUN_100026f0();
  if (iVar1 == 0) {
    _DAT_1000f248 = 4;
  }
  (*DAT_1001650c)(0x13,&DAT_1000f114);
  FUN_100027a0(&DAT_10016598);
  FUN_10002780(&DAT_1000f244,0x1b);
  DAT_10016188 = 1;
  DAT_1001618a = 1;
  DAT_1001618c = 1;
  DAT_1001618d = 1;
  DAT_10016323 = 1;
  DAT_10016321 = 1;
  DAT_10016324 = 1;
  DAT_10016325 = 1;
  DAT_1001618b = 0;
  DAT_10016189 = 0;
  DAT_10016320 = 0;
  DAT_10016322 = 0;
  _DAT_1001664c = 0;
  return;
}



// Function: FUN_10003240 @ 0x10003240

void FUN_10003240(void)

{
  int iVar1;
  
  if (DAT_10015f58 < 2) {
    iVar1 = (*DAT_10016540)(&DAT_10013688);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      (*DAT_10016504)(&DAT_10013700,iVar1,0x32,0x32);
      (*DAT_10016504)(&DAT_10013640,iVar1,0x14,0x32);
    }
  }
  return;
}



// Function: ProcessLandAI @ 0x100032a0

void ProcessLandAI(void)

{
                    /* 0x32a0  3  ProcessLandAI */
  return;
}



// Function: FUN_100032b0 @ 0x100032b0

void FUN_100032b0(void)

{
  (*DAT_10016508)(&DAT_10016350,0x3c,100);
  (*DAT_10016508)(&DAT_10016358,0x3c,100);
  (*DAT_10016508)(&DAT_10016340,0x3c,100);
  (*DAT_10016508)(&DAT_10016348,0x14,100);
  (*DAT_10016508)(&DAT_10016360,10,100);
  (*DAT_10016508)(&DAT_10016298,0x3c,100);
  (*DAT_10016508)(&DAT_10016280,0x3c,100);
  (*DAT_10016508)(&DAT_10016288,0x3c,100);
  (*DAT_10016508)(&DAT_100162a0,0x14,100);
  (*DAT_10016508)(&DAT_100162a8,10,100);
  return;
}



// Function: FUN_10003350 @ 0x10003350

void FUN_10003350(void)

{
  (*DAT_10016508)(&DAT_10013910,0x5a,100);
  (*DAT_10016508)(&DAT_10013918,0x5a,100);
  (*DAT_10016508)(&DAT_10013908,0x5a,100);
  (*DAT_10016508)(&DAT_10015f78,0x5a,100);
  (*DAT_10016508)(&DAT_10015f68,0x5a,100);
  return;
}



// Function: FUN_100033a0 @ 0x100033a0

void FUN_100033a0(void)

{
  (*DAT_10016508)(&DAT_10016098,0x1e,0x32);
  (*DAT_10016508)(&DAT_100160a0,0x1e,0x32);
  (*DAT_10016508)(&DAT_100160a8,0x1e,0x32);
  (*DAT_10016508)(&DAT_100160b0,0x1e,0x32);
  return;
}



// Function: FUN_100033e0 @ 0x100033e0

void FUN_100033e0(void)

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
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  (*DAT_10016518)(300,400);
  FUN_100027e0(0);
  iVar3 = FUN_100026c0(0,0x1b);
  iVar4 = FUN_100026c0(0,0x19);
  iVar5 = FUN_100026c0(0,0x1c);
  iVar6 = FUN_100026c0(0,0xe);
  cVar1 = (*DAT_1001654c)(&DAT_10016020);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = (*DAT_10016544)(&DAT_100162d8);
  iVar6 = (*DAT_10016540)(&DAT_10015fb8);
  iVar7 = (*DAT_10016544)(&DAT_10015fb8);
  iVar8 = (*DAT_10016540)(&DAT_10015fe8);
  iVar9 = (*DAT_10016544)(&DAT_10015fe8);
  iVar10 = (*DAT_10016540)(&DAT_100160d8);
  iVar11 = (*DAT_10016544)(&DAT_100160d8);
  iVar12 = (*DAT_10016540)(&DAT_100162d8);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  (*DAT_10016508)(&DAT_10016020,0x5f,100);
  bVar13 = true;
  iVar5 = (*DAT_1001653c)(3);
  if ((((55000 < iVar5) && (iVar5 = (*DAT_1001653c)(1), 10000 < iVar5)) &&
      (iVar5 = (*DAT_1001653c)(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = (*DAT_10016540)(&DAT_10016190);
  iVar7 = (*DAT_1001653c)(3);
  cVar1 = (*DAT_10016550)(&DAT_100161b8);
  (*DAT_10016540)(&DAT_10013688);
  iVar8 = (*DAT_10016540)(&DAT_100160e0);
  iVar11 = (*DAT_10016540)(&DAT_100163b0);
  iVar9 = (*DAT_10016540)(&DAT_10016330);
  iVar10 = (*DAT_10016540)(&DAT_10013688);
  iVar11 = iVar10 + iVar9 + iVar11;
  (*DAT_10016508)(&DAT_10016110,99,0x50);
  (*DAT_10016508)(&DAT_10016150,0x62,0x50);
  iVar9 = (*DAT_10016544)(&DAT_100138d8);
  iVar10 = (*DAT_10016540)(&DAT_100138d8);
  if (iVar5 != 0) {
    (*DAT_10016504)(&DAT_10015fd8,1,100,100);
    iVar12 = (*DAT_10016540)(&DAT_10015fd8);
    if (iVar12 == 0) {
      return;
    }
    (*DAT_10016508)(&DAT_10016378,100,100);
    cVar2 = (*DAT_10016570)();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        (*DAT_10016504)(&DAT_10016190,100,100,100);
        (*DAT_10016504)(&DAT_10013688,100,100,100);
      }
      (*DAT_10016514)(0,1,1);
    }
    else {
      cVar2 = (*DAT_1001654c)(&DAT_100137a0);
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
      (*DAT_10016514)(uVar15,uVar17,uVar16);
      uVar15 = 0x15e;
      if (cVar1 != '\0') {
        uVar15 = 300;
      }
      if ((iVar5 < 0x19) && (300 < iVar7)) {
        (*DAT_10016504)(&DAT_10016190,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          (*DAT_10016504)(&DAT_10016190,1000,0xe8,100);
        }
        if (300 < iVar7) {
          (*DAT_10016504)(&DAT_10013688,uVar15,100,0x1e);
        }
      }
      cVar2 = (*DAT_1001654c)(&DAT_10016270);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = (*DAT_10016540)(&DAT_100162d8), 0 < iVar7)
         ) {
        FUN_100032b0();
      }
    }
    if (iVar3 < 5) {
      iVar3 = 5;
    }
    else {
      iVar3 = iVar3 + 2;
    }
    (*DAT_10016504)(&DAT_10015f90,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      (*DAT_10016504)(&DAT_100138e8,0xc,0x46);
    }
    else {
      (*DAT_10016504)(&DAT_100138e8,iVar4 + 6,0x1e,0x32);
      (*DAT_10016504)(&DAT_100138e8,iVar4 + 9,0xf,0x32);
      (*DAT_10016504)(&DAT_100138e8,iVar4 + 10,10,0x32);
    }
    iVar4 = FUN_100026c0(0,0x1f);
    if (iVar4 != 0) {
      (*DAT_10016508)(&DAT_100162e8,0x32,0x32);
      (*DAT_10016508)(&DAT_100162d0,0x32,0x32);
      (*DAT_10016508)(&DAT_100162e0,0x32,0x32);
      (*DAT_10016508)(&DAT_100162c0,0x32,0x32);
      (*DAT_10016508)(&DAT_100162c8,0x32,0x32);
      (*DAT_10016508)(&DAT_100162b8,0x32,0x32);
    }
    (*DAT_10016504)(&DAT_100138a0,3,0x5a,10);
    (*DAT_10016504)(&DAT_10015fb8,1,100,100);
    (*DAT_10016504)(&DAT_10015fb8,2,0x5f,5);
    if (iVar6 == 0) {
      (*DAT_10016504)(&DAT_10015fb8,3,0x5f,5);
    }
    (*DAT_10016504)(&DAT_100161e8,1,100,100);
    (*DAT_10016504)(&DAT_10016250,1,100,100);
    (*DAT_10016504)(&DAT_10015fd0,1,0x32,0x32);
    (*DAT_10016504)(&DAT_100161e8,2,10,5);
    (*DAT_10016504)(&DAT_100160d8,1,99,0x5a);
    (*DAT_10016508)(&DAT_10013660,0x50,100);
    iVar4 = (*DAT_10016540)(&DAT_10015f20);
    if (0 < iVar4) {
      (*DAT_10016504)(&DAT_10013878,1,0x5a,0x19);
      (*DAT_10016504)(&DAT_100160f8,1,5,3);
    }
    (*DAT_10016504)(&DAT_10015f20,1,0x5a,0x5a);
    if (iVar6 == 0) {
      (*DAT_10016504)(&DAT_10015fe8,1,99,10);
    }
    (*DAT_10016504)(&DAT_10013618,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      (*DAT_10016504)(&DAT_10015fd8,2,0x1e,0x1e);
    }
    (*DAT_10016504)(&DAT_10016258,1,0x5a,0x14);
    (*DAT_10016504)(&DAT_10016258,2,0x32,5);
    (*DAT_10016508)(&DAT_10016078,0x5a,99);
    (*DAT_10016508)(&DAT_10016030,0x5a,99);
    (*DAT_10016508)(&DAT_10016038,0x5a,99);
    (*DAT_10016508)(&DAT_10016040,0x5a,99);
    (*DAT_10016508)(&DAT_10016270,0x5f,100);
    (*DAT_10016508)(&DAT_100161b8,99,100);
    (*DAT_10016504)(&DAT_100162d8,1,0x50,0x14);
    (*DAT_10016504)(&DAT_100162d8,2,0x32,5);
    (*DAT_10016504)(&DAT_100162d8,3,0x1e,5);
    (*DAT_10016504)(&DAT_100162d8,5,0x14,5);
    (*DAT_10016508)(&DAT_10013958,0x5f,100);
    iVar4 = FUN_100026b0();
    cVar2 = (*DAT_10016550)(&DAT_10016270);
    if (cVar2 != '\0') {
      (*DAT_10016508)(&DAT_10013958,0x5a,0x5a);
      (*DAT_10016508)(&DAT_10013870,99,100);
    }
    cVar2 = (*DAT_10016550)(&DAT_10013958);
    if (cVar2 != '\0') {
      (*DAT_10016508)(&DAT_10013940,0x5a,0x5a);
      (*DAT_10016508)(&DAT_10013880,0x46,10);
      FUN_100033a0();
    }
    cVar2 = (*DAT_1001654c)(&DAT_100160b0);
    if (cVar2 != '\0') {
      (*DAT_10016504)(&DAT_10013668,10,10,0x5a);
      (*DAT_10016504)(&DAT_10013668,0xf,3,10);
    }
    FUN_10002670(1,0);
    iVar7 = (*DAT_1001653c)(0);
    if ((((14000 < iVar7) && (cVar2 = (*DAT_10016550)(&DAT_100137a0), cVar2 != '\0')) &&
        (iVar7 = (*DAT_1001653c)(1), iVar7 < 0x1d4c)) &&
       (cVar2 = (*DAT_10016550)(&DAT_10013958), cVar2 == '\0')) {
      FUN_10002670(1,1);
    }
    cVar2 = (*DAT_10016550)(&DAT_10013958);
    if (((cVar2 == '\0') || (cVar2 = (*DAT_10016550)(&DAT_100160f0), cVar2 == '\0')) ||
       (cVar2 = (*DAT_1001654c)(&DAT_100161b8), cVar2 == '\0')) {
LAB_10003d1c:
      if (iVar4 == 0x5f) {
        (*DAT_10016508)(&DAT_10013768,0x46,10);
        (*DAT_10016504)(&DAT_10016398,1,0x32,0x1e);
        (*DAT_10016504)(&DAT_10016398,2,0x1e,0x1e);
        (*DAT_10016504)(&DAT_10016398,3,0x14,0x1e);
        (*DAT_10016504)(&DAT_10016398,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = (*DAT_1001653c)(3), 50000 < iVar7 && (iVar7 = (*DAT_1001653c)(1), iVar7 < 0x2008)
          ))) {
        FUN_10002670(1,1);
      }
      cVar2 = (*DAT_10016550)(&DAT_10016020);
      if (((cVar2 == '\0') && (iVar7 = (*DAT_1001653c)(3), 60000 < iVar7)) &&
         (iVar7 = (*DAT_1001653c)(1), iVar7 < 11000)) {
        FUN_10002670(1,1);
      }
      cVar2 = (*DAT_1001654c)(&DAT_10016020);
      if (cVar2 == '\0') goto LAB_10003d1c;
      if (iVar4 == 0x1c) {
        iVar4 = (*DAT_1001653c)(3);
        if ((50000 < iVar4) && (iVar4 = (*DAT_1001653c)(4), 0x1c84 < iVar4)) {
          iVar4 = (*DAT_1001653c)(1);
          bVar14 = SBORROW4(iVar4,20000);
          bVar13 = iVar4 + -20000 < 0;
LAB_10003d0c:
          if (bVar14 != bVar13) {
            FUN_10002670(1,1);
          }
        }
      }
      else if (iVar4 == 0x28) {
        iVar4 = (*DAT_1001653c)(3);
        if ((50000 < iVar4) && (iVar4 = (*DAT_1001653c)(4), 0x2648 < iVar4)) {
          iVar4 = (*DAT_1001653c)(1);
          bVar14 = SBORROW4(iVar4,24000);
          bVar13 = iVar4 + -24000 < 0;
          goto LAB_10003d0c;
        }
      }
      else {
        if (iVar4 != 0x37) goto LAB_10003d1c;
        iVar4 = (*DAT_1001653c)(3);
        if (80000 < iVar4) {
          iVar4 = (*DAT_1001653c)(1);
          bVar14 = SBORROW4(iVar4,26000);
          bVar13 = iVar4 + -26000 < 0;
          goto LAB_10003d0c;
        }
      }
    }
    if (((0x50 < iVar5) && (iVar10 == iVar9)) &&
       ((*DAT_10016504)(&DAT_100138d8,1,0x50,10), 0x5f < iVar5)) {
      (*DAT_10016504)(&DAT_100138d8,2,0x50,10);
      (*DAT_10016504)(&DAT_100138d8,3,0x32,10);
      (*DAT_10016504)(&DAT_100138d8,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = (*DAT_1001654c)(&DAT_10016270), cVar2 != '\0')) {
      (*DAT_10016504)(&DAT_10016160,0x4b,1,0x1e);
      (*DAT_1001654c)(&DAT_10016198);
      (*DAT_1001654c)(&DAT_100160b0);
    }
    (*DAT_10016540)(&DAT_10013618);
    (*DAT_10016504)(&DAT_100161f0,3,0x5a,0x5a);
    cVar2 = (*DAT_1001654c)(&DAT_100160f0);
    if (cVar2 != '\0') {
      (*DAT_10016504)(&DAT_100161f0,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = (*DAT_1001654c)(&DAT_10016270), cVar2 != '\0')) {
      if (iVar6 == 0) {
        (*DAT_10016504)(&DAT_100160d8,2,0x5a,0x14);
        (*DAT_10016504)(&DAT_100160d8,3,0x5a,0x14);
        (*DAT_10016504)(&DAT_100160d8,4,0x5a,0x14);
      }
      iVar4 = (*DAT_10016540)(&DAT_100160e0);
      if (0x14 < iVar4) {
        (*DAT_10016508)(&DAT_10016208,0x5a,100);
        (*DAT_10016508)(&DAT_10016210,0x50,0x46);
      }
      (*DAT_10016508)(&DAT_100160f0,0x3c,0x5a);
      cVar2 = (*DAT_10016550)(&DAT_10013908);
      if (cVar2 != '\0') {
        (*DAT_10016508)(&DAT_10016168,0x5a,0x5a);
        (*DAT_10016508)(&DAT_10016178,0x5a,0x5a);
        (*DAT_10016508)(&DAT_10016180,0x46,0x5a);
        (*DAT_10016508)(&DAT_10016170,0x46,0x5a);
      }
    }
    (*DAT_10016508)(&DAT_100137a0,99,100);
    (*DAT_10016508)(&DAT_100138e0,0x3c,0x5a);
    iVar4 = (*DAT_10016540)(&DAT_10016250);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        (*DAT_10016504)(&DAT_100160e0,500,10,10);
      }
      FUN_10003350();
    }
  }
  if (cVar1 != '\0') {
    (*DAT_10016508)(&DAT_10013630,0x5f,0x5a);
    (*DAT_10016508)(&DAT_10013708,0x5f,0x5a);
    (*DAT_10016508)(&DAT_10013628,0x5f,0x5a);
    (*DAT_10016504)(&DAT_10016250,2,0x5f,0x5a);
  }
  cVar1 = (*DAT_10016550)(&DAT_100137a0);
  if (cVar1 != '\0') {
    (*DAT_10016508)(&DAT_100161f8,0x5f,0x5a);
    (*DAT_10016508)(&DAT_10016200,0x5f,0x5a);
  }
  iVar4 = (*DAT_10016544)(&DAT_10013878);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = (*DAT_10016540)(&DAT_10015f20);
  if ((((iVar4 != 0) && (cVar1 = (*DAT_10016550)(&DAT_10016270), cVar1 == '\0')) &&
      (iVar4 = (*DAT_1001653c)(1), 800 < iVar4)) &&
     ((iVar4 = (*DAT_1001653c)(3), iVar4 < 6000 && (iVar4 = (*DAT_1001653c)(4), 3000 < iVar4)))) {
    FUN_10002690(4,3,3000);
  }
  iVar4 = (*DAT_1001653c)(3);
  if ((iVar4 < 1000) && (iVar4 = (*DAT_1001653c)(2), 5000 < iVar4)) {
    FUN_10002690(2,3,4000);
  }
  cVar1 = (*DAT_1001654c)(&DAT_100161f8);
  if ((cVar1 == '\0') || (cVar1 = (*DAT_1001654c)(&DAT_10016200), cVar1 == '\0')) {
    iVar4 = (*DAT_1001653c)(2);
    if (iVar4 < 0x1adb1) goto LAB_1000423a;
    uVar17 = 90000;
    uVar15 = 1;
  }
  else {
    iVar4 = (*DAT_1001653c)(2);
    if (110000 < iVar4) {
      FUN_10002690(2,1,100000);
    }
    iVar4 = (*DAT_1001653c)(0);
    if (iVar4 == 0) goto LAB_1000423a;
    iVar4 = (*DAT_1001653c)(1);
    if ((iVar4 != 0) && (iVar4 = (*DAT_1001653c)(4), iVar4 < 5000)) {
      iVar4 = (*DAT_1001653c)(4);
      iVar5 = (*DAT_1001653c)(5);
      if (iVar5 < iVar4) {
        FUN_10002690(2,5,25000);
        FUN_10002690(2,4,25000);
      }
      else {
        FUN_10002690(2,4,25000);
        FUN_10002690(2,5,25000);
      }
      goto LAB_1000423a;
    }
    iVar4 = (*DAT_1001653c)(5);
    if ((iVar4 < 5000) && (iVar4 = (*DAT_1001653c)(0), iVar4 != 0)) {
      FUN_10002690(2,5,50000);
    }
    iVar4 = (*DAT_1001653c)(5);
    if ((4999 < iVar4) || (iVar4 = (*DAT_1001653c)(0), iVar4 == 0)) goto LAB_1000423a;
    uVar17 = 50000;
    uVar15 = 5;
  }
  FUN_10002690(2,uVar15,uVar17);
LAB_1000423a:
  iVar4 = (*DAT_1001653c)(0);
  if (150000 < iVar4) {
    FUN_10002690(0,1,100000);
  }
  iVar4 = (*DAT_1001653c)(4);
  if (80000 < iVar4) {
    FUN_10002690(4,1,40000);
  }
  iVar4 = (*DAT_1001653c)(5);
  if (80000 < iVar4) {
    FUN_10002690(5,1,40000);
  }
  return;
}



// Function: FUN_100042b0 @ 0x100042b0

void FUN_100042b0(void)

{
  int iVar1;
  
  iVar1 = (*DAT_1001653c)(3);
  if (0x672 < iVar1) {
    (*DAT_10016508)(&DAT_10016350,0x28,100);
    (*DAT_10016508)(&DAT_10016358,0x5a,100);
    (*DAT_10016508)(&DAT_10016340,0x5a,100);
    (*DAT_10016508)(&DAT_10016348,0x5a,100);
    (*DAT_10016508)(&DAT_10016360,0x5a,100);
    (*DAT_10016508)(&DAT_10016298,0x5a,100);
    (*DAT_10016508)(&DAT_10016280,0x5a,100);
    (*DAT_10016508)(&DAT_10016288,0x5a,100);
    (*DAT_10016508)(&DAT_100162a0,0x5a,100);
    (*DAT_10016508)(&DAT_100162a8,0x5a,100);
    (*DAT_10016508)(&DAT_10016260,0x32,100);
    (*DAT_10016508)(&DAT_10015fc8,0x32,100);
  }
  return;
}



// Function: FUN_10004390 @ 0x10004390

void FUN_10004390(void)

{
  (*DAT_10016508)(&DAT_10013910,0x5a,100);
  (*DAT_10016508)(&DAT_10013918,0x5a,100);
  (*DAT_10016508)(&DAT_10013908,0x5a,100);
  (*DAT_10016508)(&DAT_10015f78,10,100);
  (*DAT_10016508)(&DAT_10015f68,10,100);
  return;
}



// Function: FUN_100043e0 @ 0x100043e0

void FUN_100043e0(void)

{
  (*DAT_10016508)(&DAT_100161d8,0x1e,0x32);
  (*DAT_10016508)(&DAT_100161d0,0x1e,0x32);
  (*DAT_10016508)(&DAT_100161a0,0x1e,0x32);
  (*DAT_10016508)(&DAT_10016198,0x1e,0x32);
  (*DAT_10016508)(&DAT_10016098,0x1e,0x32);
  (*DAT_10016508)(&DAT_100160a0,0x1e,0x32);
  (*DAT_10016508)(&DAT_100160a8,0x1e,0x32);
  (*DAT_10016508)(&DAT_100160b0,0x1e,0x32);
  return;
}



// Function: ProcessMiddleSeaAI @ 0x10004460

void ProcessMiddleSeaAI(void)

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
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
                    /* 0x4460  4  ProcessMiddleSeaAI */
  FUN_100027e0(0);
  (*DAT_1001650c)(0x13,&DAT_1000f030);
  iVar3 = (*DAT_10016540)(&DAT_10016190);
  iVar4 = (*DAT_1001653c)(3);
  cVar1 = (*DAT_10016550)(&DAT_100161b8);
  (*DAT_10016540)(&DAT_10013688);
  (*DAT_1001654c)(&DAT_10016020);
  (*DAT_10016540)(&DAT_100160e0);
  iVar5 = (*DAT_10016540)(&DAT_100163b0);
  iVar6 = (*DAT_10016540)(&DAT_10016330);
  iVar7 = (*DAT_10016540)(&DAT_10013688);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = FUN_100026e0();
  if (0 < iVar6) {
    (*DAT_10016504)(&DAT_10016328,0xf,0x14,0x28);
  }
  iVar6 = (*DAT_10016544)(&DAT_100138d8);
  iVar7 = (*DAT_10016540)(&DAT_100138d8);
  if (iVar3 == 0) {
    return;
  }
  (*DAT_10016504)(&DAT_10015fd8,1,100,100);
  iVar8 = (*DAT_10016540)(&DAT_10015fd8);
  if (iVar8 == 0) {
    return;
  }
  (*DAT_10016508)(&DAT_10016378,100,100);
  cVar2 = (*DAT_10016570)();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      (*DAT_10016504)(&DAT_10016190,100,100,100);
      (*DAT_10016504)(&DAT_10013688,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_100042b0();
    }
    (*DAT_10016514)(0,1,1);
  }
  else {
    if (DAT_10016594 == 0) {
      if (12000 < iVar4) {
        (*DAT_10016514)(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_10004619:
      (*DAT_10016514)(9,uVar12,uVar13);
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
        (*DAT_10016504)(&DAT_10016190,100,100,100);
        goto LAB_10004657;
      }
    }
    else {
LAB_10004657:
      if ((300 < iVar4) && ((*DAT_10016504)(&DAT_10016190,uVar12,0xe8,100), 400 < iVar4)) {
        (*DAT_10016504)(&DAT_10013688,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_100042b0();
    }
  }
  (*DAT_10016504)(&DAT_10015fb8,1,100,100);
  (*DAT_10016504)(&DAT_10015fb8,2,0x5a,5);
  (*DAT_10016504)(&DAT_10015fb8,3,0x5a,5);
  iVar8 = (*DAT_10016540)(&DAT_10016250);
  if (1 < iVar8) {
    (*DAT_10016504)(&DAT_10015fb8,2,0x50,5);
    iVar8 = (*DAT_10016540)(&DAT_10015fb8);
    if (1 < iVar8) {
      (*DAT_10016504)(&DAT_100160d8,1,99,0x5a);
    }
    iVar8 = (*DAT_10016544)(&DAT_10015fb8);
    if (1 < iVar8) {
      (*DAT_10016504)(&DAT_10013878,1,100,100);
    }
    (*DAT_10016508)(&DAT_10016110,99,100);
  }
  iVar8 = (*DAT_10016540)(&DAT_10016190);
  if (0x23 < iVar8) {
    (*DAT_10016504)(&DAT_10013878,1,100,100);
  }
  (*DAT_10016504)(&DAT_100161e8,1,100,100);
  (*DAT_10016504)(&DAT_10016250,1,100,100);
  (*DAT_10016504)(&DAT_10016250,2,100,100);
  (*DAT_10016504)(&DAT_10015fd0,1,0x32,0x32);
  (*DAT_10016504)(&DAT_100161e8,2,10,5);
  (*DAT_10016508)(&DAT_10013660,0x50,100);
  iVar8 = (*DAT_10016540)(&DAT_10015f20);
  if (0 < iVar8) {
    (*DAT_10016504)(&DAT_100160f8,1,5,3);
  }
  cVar2 = (*DAT_10016570)();
  if (cVar2 != '\0') {
    (*DAT_10016504)(&DAT_10015f20,1,0x5a,0x5a);
  }
  (*DAT_10016504)(&DAT_10015fe8,1,99,10);
  (*DAT_10016504)(&DAT_10013618,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    (*DAT_10016504)(&DAT_10015fd8,2,0x1e,0x1e);
  }
  (*DAT_10016504)(&DAT_10016258,1,0x5a,0x14);
  (*DAT_10016504)(&DAT_10016258,2,0x50,5);
  (*DAT_10016508)(&DAT_10016078,0x5a,99);
  (*DAT_10016508)(&DAT_10016270,0x5f,100);
  (*DAT_10016508)(&DAT_100161b8,100,100);
  (*DAT_10016508)(&DAT_10016040,0x5a,0x5a);
  (*DAT_10016508)(&DAT_10016030,0x5f,100);
  (*DAT_10016508)(&DAT_10016038,0x5f,100);
  iVar8 = (*DAT_10016544)(&DAT_100160d8);
  if (((iVar8 == 0) || (cVar2 = (*DAT_10016550)(&DAT_100161b8), cVar2 != '\0')) ||
     ((iVar8 = (*DAT_1001653c)(1), 0xe74 < iVar8 &&
      ((iVar8 = (*DAT_1001653c)(4), 0x157c < iVar8 && (iVar8 = (*DAT_1001653c)(5), 0x20d0 < iVar8)))
      ))) {
    FUN_10002670(1,0);
    FUN_10002670(4,0);
    FUN_10002670(3,0);
    FUN_10002670(1,0);
  }
  else {
    iVar8 = (*DAT_1001653c)(0);
    if ((iVar8 != 0) && (iVar8 = (*DAT_1001653c)(5), 0x20d0 < iVar8)) {
      iVar8 = (*DAT_1001653c)(5);
      if (14000 < iVar8) {
        FUN_10002690(5,1,5000);
      }
      iVar8 = (*DAT_1001653c)(4);
      if (13000 < iVar8) {
        FUN_10002690(4,1,5000);
      }
    }
  }
  (*DAT_10016508)(&DAT_100137a0,100,100);
  (*DAT_10016504)(&DAT_100162d8,1,0x32,0x5a);
  (*DAT_10016504)(&DAT_100162d8,2,0x14,0x32);
  (*DAT_10016504)(&DAT_100162d8,3,10,0x32);
  cVar2 = (*DAT_1001654c)(&DAT_10013958);
  if (cVar2 == '\0') {
    iVar9 = FUN_100026c0(0,0x1c);
    iVar10 = FUN_100026c0(0,0x1b);
    iVar8 = FUN_100026c0(0,0x19);
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
    (*DAT_10016504)(puVar11,iVar8,0x32,0x32);
  }
  (*DAT_10016508)(&DAT_10013958,99,100);
  cVar2 = (*DAT_10016550)(&DAT_10016270);
  if (cVar2 != '\0') {
    (*DAT_10016508)(&DAT_10013958,0x5a,0x5a);
    (*DAT_10016508)(&DAT_10013870,99,100);
  }
  cVar2 = (*DAT_10016550)(&DAT_10013958);
  if (cVar2 != '\0') {
    (*DAT_10016508)(&DAT_10013940,0x5a,0x5a);
    (*DAT_10016508)(&DAT_10013880,0x46,10);
    FUN_100033a0();
  }
  FUN_10002670(1,0);
  iVar8 = (*DAT_1001653c)(0);
  if ((((14000 < iVar8) && (cVar2 = (*DAT_10016550)(&DAT_100137a0), cVar2 != '\0')) &&
      (iVar8 = (*DAT_1001653c)(1), iVar8 < 0x1d4c)) &&
     (cVar2 = (*DAT_10016550)(&DAT_10013958), cVar2 == '\0')) {
    FUN_10002670(1,1);
  }
  (*DAT_10016504)(&DAT_100161f0,3,0x5a,0x5a);
  cVar2 = (*DAT_1001654c)(&DAT_100160f0);
  if (cVar2 != '\0') {
    (*DAT_10016504)(&DAT_100161f0,0x14,10,0x5a);
  }
  (*DAT_10016508)(&DAT_100160f0,99,0x5a);
  (*DAT_10016508)(&DAT_10016100,99,100);
  (*DAT_10016508)(&DAT_100162e8,0x32,0x32);
  (*DAT_10016508)(&DAT_100162d0,0x32,0x32);
  (*DAT_10016508)(&DAT_100162e0,0x32,0x32);
  (*DAT_10016508)(&DAT_100162c0,0x32,0x32);
  (*DAT_10016508)(&DAT_100162c8,0x32,0x32);
  (*DAT_10016508)(&DAT_100162b8,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     ((*DAT_10016504)(&DAT_100138d8,1,0x50,10), 0x3c < iVar3)) {
    (*DAT_10016504)(&DAT_100138d8,2,0x50,10);
    (*DAT_10016504)(&DAT_100138d8,3,0x32,10);
    (*DAT_10016504)(&DAT_100138d8,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    (*DAT_10016504)(&DAT_10016160,0x32,1,0x1e);
    (*DAT_10016504)(&DAT_10016278,0x14,1,0x1e);
  }
  else {
    (*DAT_10016504)(&DAT_100138c8,0x32,10,100);
    (*DAT_10016504)(&DAT_10016160,0x4b,1,0x1e);
    (*DAT_10016504)(&DAT_10016278,0x1e,1,0x1e);
    (*DAT_10016508)(&DAT_10013630,0x5f,0x5a);
    (*DAT_10016508)(&DAT_10013708,0x5f,0x5a);
    (*DAT_10016508)(&DAT_10013628,0x5f,0x5a);
    cVar2 = (*DAT_1001654c)(&DAT_10016198);
    if (cVar2 != '\0') {
      (*DAT_10016504)(&DAT_10016370,5,0x1e,10);
    }
    cVar2 = (*DAT_1001654c)(&DAT_100160b0);
    if (cVar2 != '\0') {
      (*DAT_10016504)(&DAT_10013668,10,0x1e,10);
    }
    FUN_100043e0();
  }
  cVar2 = (*DAT_1001654c)(&DAT_10016020);
  if (cVar2 != '\0') {
    cVar2 = (*DAT_1001654c)(&DAT_10016100);
    if (cVar2 == '\0') {
      uVar13 = 2;
      uVar12 = 2;
    }
    else {
      uVar13 = 4;
      uVar12 = 4;
    }
    (*DAT_10016514)(8,uVar12,uVar13);
  }
  iVar3 = (*DAT_10016540)(&DAT_100160d8);
  if (iVar3 != 0) {
    (*DAT_10016504)(&DAT_100161f0,6,0x5a,0x5a);
  }
  cVar2 = (*DAT_1001654c)(&DAT_100160f0);
  if (cVar2 != '\0') {
    (*DAT_10016504)(&DAT_100161f0,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    (*DAT_10016504)(&DAT_100160d8,2,0x5f,0x14);
    (*DAT_10016504)(&DAT_100160d8,3,0x5f,0x14);
    (*DAT_10016504)(&DAT_100160d8,4,0x5f,0x14);
    (*DAT_10016504)(&DAT_100160d8,5,0x28,0x14);
    (*DAT_10016504)(&DAT_100160d8,6,0x28,0x14);
    (*DAT_10016508)(&DAT_10016020,99,100);
    iVar3 = (*DAT_10016540)(&DAT_100160e0);
    if (0x14 < iVar3) {
      (*DAT_10016508)(&DAT_10016208,0x5a,100);
      (*DAT_10016508)(&DAT_10016210,0x50,0x46);
    }
    (*DAT_10016508)(&DAT_100160f0,0x3c,0x5a);
    cVar1 = (*DAT_10016550)(&DAT_10013908);
    if (cVar1 != '\0') {
      (*DAT_10016508)(&DAT_10016168,0x5a,0x5a);
      (*DAT_10016508)(&DAT_10016178,0x5a,0x5a);
      (*DAT_10016508)(&DAT_10016180,0x46,0x5a);
      (*DAT_10016508)(&DAT_10016170,0x46,0x5a);
    }
  }
  (*DAT_10016508)(&DAT_100137a0,99,100);
  (*DAT_10016508)(&DAT_100138e0,0x3c,0x5a);
  (*DAT_10016508)(&DAT_10016150,100,100);
  if (0x15e < iVar5) {
    (*DAT_10016504)(&DAT_100160e0,500,10,100);
    FUN_10004390();
  }
  iVar3 = (*DAT_10016544)(&DAT_10013878);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = (*DAT_1001653c)(0);
  iVar6 = (*DAT_1001653c)(2);
  iVar7 = (*DAT_1001653c)(4);
  iVar5 = (*DAT_1001653c)(5);
  iVar8 = (*DAT_1001653c)(1);
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
    FUN_10002690(uVar12,3,uVar13);
  }
LAB_10005023:
  iVar3 = (*DAT_10016544)(&DAT_10015f20);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = (*DAT_10016550)(&DAT_10016270), cVar1 == '\0')) {
    if (3000 < iVar7) {
      FUN_10002690(4,3,2000);
    }
    if (4000 < iVar5) {
      FUN_10002690(5,3,3000);
    }
  }
  iVar3 = (*DAT_1001653c)(2);
  if (120000 < iVar3) {
    FUN_10002690(2,1,100000);
  }
  iVar3 = (*DAT_1001653c)(0);
  if (100000 < iVar3) {
    FUN_10002690(0,1,90000);
  }
  iVar3 = (*DAT_10016540)(&DAT_100161e8);
  if ((iVar3 != 0) && (cVar1 = (*DAT_10016550)(&DAT_100161b8), cVar1 == '\0')) {
    iVar3 = (*DAT_1001653c)(5);
    if ((9000 < iVar3) &&
       ((iVar3 = (*DAT_1001653c)(0), iVar3 != 0 && (iVar3 = (*DAT_1001653c)(1), iVar3 < 4000)))) {
      iVar3 = (*DAT_1001653c)(5);
      if (12000 < iVar3) {
        FUN_10002690(5,1,3000);
      }
      iVar3 = (*DAT_1001653c)(4);
      if (8000 < iVar3) {
        FUN_10002690(4,1,2000);
      }
      iVar3 = (*DAT_1001653c)(2);
      if (20000 < iVar3) {
        FUN_10002690(2,1,12000);
      }
      iVar3 = (*DAT_1001653c)(3);
      if (30000 < iVar3) {
        FUN_10002690(3,1,15000);
      }
    }
    iVar3 = (*DAT_1001653c)(5);
    if (((9000 < iVar3) && (iVar3 = (*DAT_1001653c)(1), iVar3 != 0)) &&
       (iVar3 = (*DAT_1001653c)(1), 4000 < iVar3)) {
      iVar3 = (*DAT_1001653c)(5);
      if (12000 < iVar3) {
        FUN_10002690(5,4,3000);
      }
      iVar3 = (*DAT_1001653c)(2);
      if (20000 < iVar3) {
        FUN_10002690(2,4,12000);
      }
      iVar3 = (*DAT_1001653c)(3);
      if (30000 < iVar3) {
        FUN_10002690(3,4,15000);
      }
    }
  }
  iVar3 = (*DAT_10016500)();
  if (*(int *)(&DAT_1001660c + iVar3 * 4) == 0) {
    FUN_10002690(5,3,4000);
    iVar3 = (*DAT_10016500)();
    *(undefined4 *)(&DAT_1001660c + iVar3 * 4) = 1;
  }
  return;
}



// Function: FUN_100052a0 @ 0x100052a0

void FUN_100052a0(void)

{
  (*DAT_10016504)(&DAT_10015fd8,1,100,100);
  (*DAT_10016504)(&DAT_10015fb8,1,100,100);
  (*DAT_10016504)(&DAT_10015fd0,1,100,100);
  (*DAT_10016504)(&DAT_10013878,1,100,100);
  return;
}



// Function: FUN_100052f0 @ 0x100052f0

undefined4 __cdecl FUN_100052f0(undefined *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_10013688) {
    cVar1 = (*DAT_1001654c)(&DAT_10016340);
    if (cVar1 != '\0') {
      cVar1 = (*DAT_1001654c)(&DAT_10016288);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10005330 @ 0x10005330

void FUN_10005330(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*DAT_10016540)(&DAT_10016278);
  if (iVar2 == 0) {
    iVar2 = (*DAT_10016540)(&DAT_100138c8);
    if (iVar2 != 0) goto LAB_10005354;
  }
  else {
LAB_10005354:
    (*DAT_10016508)(&DAT_10013950,100,100);
    (*DAT_10016508)(&DAT_100161f8,100,100);
    (*DAT_10016508)(&DAT_10016200,100,100);
  }
  iVar2 = (*DAT_10016540)(&DAT_100163b0);
  if (iVar2 < 0x15) {
    iVar2 = (*DAT_10016540)(&DAT_10016330);
    if (iVar2 < 0x15) {
      iVar2 = (*DAT_10016540)(&DAT_10013688);
      if (iVar2 < 0x8d) goto LAB_1000541d;
    }
  }
  (*DAT_10016508)(&DAT_10013628,0x5f,100);
  (*DAT_10016508)(&DAT_10013630,0x5f,100);
  iVar2 = (*DAT_10016540)(&DAT_100163b0);
  if (iVar2 < 0x8d) {
    iVar2 = (*DAT_10016540)(&DAT_10016330);
    if (0x3c < iVar2) goto LAB_1000540b;
    uVar3 = 0xf;
  }
  else {
LAB_1000540b:
    uVar3 = 0x5f;
  }
  (*DAT_10016508)(&DAT_10013708,uVar3,100);
LAB_1000541d:
  iVar2 = (*DAT_10016540)(&DAT_10013688);
  if (0x19 < iVar2) {
    (*DAT_10016508)(&DAT_10016350,0x50,100);
    (*DAT_10016508)(&DAT_10016358,0x55,100);
    (*DAT_10016508)(&DAT_10016340,0x5a,100);
    (*DAT_10016508)(&DAT_10016298,0x50,100);
    (*DAT_10016508)(&DAT_10016280,0x55,100);
    (*DAT_10016508)(&DAT_10016288,0x5a,100);
    iVar2 = (*DAT_10016540)(&DAT_10013688);
    if (0x78 < iVar2) {
      (*DAT_10016508)(&DAT_10016348,0x5a,100);
      (*DAT_10016508)(&DAT_10016360,0x5a,100);
      (*DAT_10016508)(&DAT_100162a0,0x5a,100);
      (*DAT_10016508)(&DAT_100162a8,0x5a,100);
    }
  }
  iVar2 = (*DAT_10016540)(&DAT_100160e0);
  if (0x1e < iVar2) {
    (*DAT_10016508)(&DAT_10013910,0x5a,100);
    (*DAT_10016508)(&DAT_10013918,0x5a,100);
    (*DAT_10016508)(&DAT_10013908,0x5a,100);
    (*DAT_10016508)(&DAT_10015f78,0x1e,100);
    (*DAT_10016508)(&DAT_10015f68,0x1e,100);
    (*DAT_10016508)(&DAT_10015f70,0x1e,100);
    (*DAT_10016508)(&DAT_10016208,0x5a,100);
    iVar2 = (*DAT_10016540)(&DAT_100160e0);
    if (100 < iVar2) {
      (*DAT_10016508)(&DAT_10016210,0x5a,100);
    }
  }
  iVar2 = (*DAT_10016540)(&DAT_10013700);
  if (4 < iVar2) {
    (*DAT_10016508)(&DAT_10016260,0x5a,100);
    (*DAT_10016508)(&DAT_10015fc8,0x5a,100);
  }
  iVar2 = (*DAT_10016540)(&DAT_100163b0);
  if (0x14 < iVar2) {
    (*DAT_10016508)(&DAT_10016130,0x50,100);
    (*DAT_10016508)(&DAT_10016128,0x55,100);
    (*DAT_10016508)(&DAT_10016120,0x5a,100);
    (*DAT_10016508)(&DAT_10016018,0x50,100);
    (*DAT_10016508)(&DAT_10016010,0x55,100);
    (*DAT_10016508)(&DAT_10016008,0x5a,100);
    iVar2 = (*DAT_10016540)(&DAT_100163b0);
    if (0x32 < iVar2) {
      (*DAT_10016508)(&DAT_10016118,0x5f,100);
      (*DAT_10016508)(&DAT_10016108,0x5f,100);
      (*DAT_10016508)(&DAT_10016158,0x5f,100);
      (*DAT_10016508)(&DAT_10016000,0x5f,100);
      (*DAT_10016508)(&DAT_10015ff8,0x5f,100);
      (*DAT_10016508)(&DAT_10015ff0,0x5f,100);
    }
  }
  iVar2 = (*DAT_10016540)(&DAT_10016330);
  if (0x14 < iVar2) {
    (*DAT_10016508)(&DAT_10013748,0x5a,100);
    (*DAT_10016508)(&DAT_10013740,0x5a,100);
    (*DAT_10016508)(&DAT_10013738,0x5a,100);
    (*DAT_10016508)(&DAT_100136b8,0x5a,100);
    (*DAT_10016508)(&DAT_100136b0,0x5a,100);
    (*DAT_10016508)(&DAT_100136a8,0x5f,100);
    (*DAT_10016508)(&DAT_100136a0,0x5f,100);
    (*DAT_10016508)(&DAT_10013678,0x5f,100);
    (*DAT_10016508)(&DAT_10013670,0x5f,100);
    cVar1 = (*DAT_10016550)(&DAT_10013670);
    if (cVar1 != '\0') {
      (*DAT_10016508)(&DAT_10013720,0x5f,100);
      (*DAT_10016508)(&DAT_10013718,0x5f,100);
      (*DAT_10016508)(&DAT_10013710,0x5f,100);
    }
  }
  iVar2 = (*DAT_10016540)(&DAT_10013690);
  if (0x14 < iVar2) {
    iVar2 = (*DAT_10016540)(&DAT_10013680);
    if (iVar2 < 0x14) {
      (*DAT_10016508)(&DAT_10013900,0x50,100);
      (*DAT_10016508)(&DAT_100138f8,0x55,100);
      (*DAT_10016508)(&DAT_100138f0,0x5a,100);
      (*DAT_10016508)(&DAT_100138b8,0x5f,100);
      (*DAT_10016508)(&DAT_100138b0,0x5f,100);
      (*DAT_10016508)(&DAT_100138a8,0x5f,100);
      (*DAT_10016508)(&DAT_10016208,0x5a,100);
    }
  }
  iVar2 = (*DAT_10016540)(&DAT_10013680);
  if (0x14 < iVar2) {
    (*DAT_10016508)(&DAT_10013658,0x50,100);
    (*DAT_10016508)(&DAT_10013650,0x55,100);
    (*DAT_10016508)(&DAT_10013648,0x5a,100);
    (*DAT_10016508)(&DAT_10016318,0x5f,100);
    (*DAT_10016508)(&DAT_10016310,0x5f,100);
    (*DAT_10016508)(&DAT_10016308,0x5f,100);
    (*DAT_10016508)(&DAT_10016390,10,100);
    (*DAT_10016508)(&DAT_10016388,0xf,100);
    (*DAT_10016508)(&DAT_100163d8,0x14,100);
    (*DAT_10016508)(&DAT_100163d0,0x19,100);
    (*DAT_10016508)(&DAT_100163c8,0x19,100);
    (*DAT_10016508)(&DAT_100163c0,0x19,100);
    (*DAT_10016508)(&DAT_10016208,0x5a,100);
    (*DAT_10016508)(&DAT_10016210,0x5a,100);
  }
  iVar2 = (*DAT_10016540)(&DAT_10015f80);
  if (0x19 < iVar2) {
    (*DAT_10016508)(&DAT_100136e0,0x5a,100);
    (*DAT_10016508)(&DAT_100136e8,0x5a,100);
    (*DAT_10016508)(&DAT_100136f0,0x5a,100);
    (*DAT_10016508)(&DAT_100136f8,0x5a,100);
    (*DAT_10016508)(&DAT_100136c0,0x5a,100);
    (*DAT_10016508)(&DAT_100136d0,0x5a,100);
    (*DAT_10016508)(&DAT_10013788,0x5a,100);
    (*DAT_10016508)(&DAT_10013790,0x5a,100);
    (*DAT_10016508)(&DAT_10013798,0x5a,100);
    (*DAT_10016508)(&DAT_10013770,0x5a,100);
    (*DAT_10016508)(&DAT_10013778,0x5a,100);
    (*DAT_10016508)(&DAT_10013780,0x5a,100);
    iVar2 = (*DAT_10016540)(&DAT_10015f80);
    if (iVar2 < 0x3d) {
      (*DAT_10016508)(&DAT_10016028,0xf,100);
      uVar3 = 0xf;
    }
    else {
      (*DAT_10016508)(&DAT_10016028,0x5a);
      uVar3 = 0x5a;
    }
    (*DAT_10016508)(&DAT_10016088,uVar3,100);
    cVar1 = (*DAT_10016550)(&DAT_10016028);
    if (cVar1 != '\0') {
      cVar1 = (*DAT_10016550)(&DAT_10016088);
      if (cVar1 != '\0') {
        (*DAT_10016508)(&DAT_10016080,0x5a,100);
      }
    }
    (*DAT_10016508)(&DAT_10016208,0x5a,100);
    (*DAT_10016508)(&DAT_10016210,0x5a,100);
  }
  cVar1 = (*DAT_1001654c)(&DAT_10016308);
  if (cVar1 != '\0') {
    (*DAT_10016508)(&DAT_10016170,0x5a,100);
    cVar1 = (*DAT_10016550)(&DAT_10016170);
    if (cVar1 != '\0') {
      (*DAT_10016508)(&DAT_10016180,0x5a,100);
      cVar1 = (*DAT_10016550)(&DAT_10016180);
      if (cVar1 != '\0') {
        (*DAT_10016508)(&DAT_10016178,0x5a,100);
        cVar1 = (*DAT_10016550)(&DAT_10016178);
        if (cVar1 != '\0') {
          (*DAT_10016508)(&DAT_10016168,0x5a,100);
        }
      }
    }
  }
  return;
}



// Function: FUN_10005b10 @ 0x10005b10

void FUN_10005b10(void)

{
  char cVar1;
  int iVar2;
  
  (*DAT_10016508)(&DAT_10016378,0x32,100);
  iVar2 = (*DAT_10016540)(&DAT_10015f20);
  if (iVar2 != 0) {
    (*DAT_10016508)(&DAT_10013660,100,100);
  }
  (*DAT_10016508)(&DAT_10016078,100,100);
  iVar2 = FUN_100052f0(&DAT_10013688);
  if ((iVar2 != 0) || ((DAT_10015f58 != 0 && (DAT_10015f58 != 5)))) {
    (*DAT_10016508)(&DAT_10016270,0x5a,100);
  }
  iVar2 = (*DAT_10016540)(&DAT_10015fe8);
  if (iVar2 != 0) {
    (*DAT_10016508)(&DAT_10016040,100,100);
  }
  cVar1 = (*DAT_10016550)(&DAT_10016150);
  if (cVar1 != '\0') {
    (*DAT_10016508)(&DAT_10016030,100,100);
  }
  (*DAT_10016508)(&DAT_10016150,0x5c,100);
  (*DAT_10016508)(&DAT_10016100,0x62,100);
  iVar2 = (*DAT_10016540)(&DAT_100160d8);
  if (iVar2 != 0) {
    (*DAT_10016508)(&DAT_100161b8,0x62,100);
  }
  (*DAT_10016508)(&DAT_10016020,0x62,100);
  iVar2 = (*DAT_10016540)(&DAT_10016258);
  if (iVar2 != 0) {
    (*DAT_10016508)(&DAT_100138e0,100,100);
  }
  return;
}



// Function: FUN_10005c50 @ 0x10005c50

void FUN_10005c50(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  (*DAT_10016504)(&DAT_10016258,3,100,100);
  iVar2 = (*DAT_10016544)(&DAT_10015fe8);
  if (iVar2 != 0) {
    (*DAT_10016504)(&DAT_10015fd8,2,100,100);
    (*DAT_10016504)(&DAT_10015fd0,4,100,100);
  }
  (*DAT_10016504)(&DAT_10015fd8,1,100,100);
  (*DAT_10016504)(&DAT_10015fb8,1,100,100);
  if (*(int *)(&DAT_10015f98 + DAT_100162b4 * 4) == 0) {
    FUN_100052a0();
    iVar2 = (*DAT_10016544)(&DAT_10013878);
    if (iVar2 == 0) {
      return;
    }
  }
  (*DAT_10016504)(&DAT_100161e8,1,100,100);
  (*DAT_10016504)(&DAT_10015fb8,2,100,100);
  iVar2 = (*DAT_10016544)(&DAT_10015fb8);
  if ((iVar2 < 2) && (iVar2 = FUN_100026f0(), iVar2 != 0)) {
    return;
  }
  (*DAT_10016504)(&DAT_10016250,2,100,100);
  iVar2 = (*DAT_10016544)(&DAT_10016250);
  iVar3 = (*DAT_10016540)(&DAT_10016250);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    (*DAT_10016504)(&DAT_10015f20,1,100,100);
    iVar2 = FUN_10002800();
    if (iVar2 < 3) {
      (*DAT_10016504)(&DAT_10015fe8,1,100,100);
      iVar2 = (*DAT_10016544)(&DAT_10015fe8);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_100052a0();
    (*DAT_10016504)(&DAT_10015fb8,4,100,100);
    iVar2 = (*DAT_10016544)(&DAT_10015fb8);
    if (2 < iVar2) {
      (*DAT_10016504)(&DAT_100160d8,3,100,100);
      iVar2 = (*DAT_10016540)(&DAT_10016258);
      if (iVar2 != 0) {
        (*DAT_10016504)(&DAT_100160d8,4,100,100);
      }
      (*DAT_10016504)(&DAT_10013618,1,100,100);
      (*DAT_10016504)(&DAT_10013618,3,0x28,100);
      cVar1 = (*DAT_1001654c)(&DAT_100138e0);
      if (cVar1 != '\0') {
        (*DAT_10016504)(&DAT_100160d8,5,100,100);
      }
      (*DAT_10016504)(&DAT_100160f8,1,100,100);
    }
  }
  return;
}



// Function: FUN_10005e70 @ 0x10005e70

void __fastcall FUN_10005e70(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = (*DAT_10016540)(&DAT_10016278,param_1);
  if (iVar2 < 0x28) {
    FUN_10002750(DAT_100162b4 + 8,0);
  }
  iVar2 = (*DAT_10016540)(&DAT_10016278);
  if (iVar2 < 0x9d) {
    iVar2 = (*DAT_10016544)(&DAT_100160d8);
    if (iVar2 == 0) goto LAB_10005ed2;
  }
  FUN_10002750(DAT_100162b4 + 8,1);
LAB_10005ed2:
  iVar2 = 2;
  do {
    (*DAT_10016504)(&DAT_10016190,1000,0x14,100);
    iVar3 = (*DAT_10016540)(&DAT_10013688);
    if (iVar3 < 0x8c) {
      (*DAT_10016504)(&DAT_10013688,1000,0x14,100);
    }
    else {
      (*DAT_10016504)(&DAT_10013688,1000,0x14,0x28);
      (*DAT_10016504)(&DAT_100160e0,1000,0x14,100);
    }
    iVar3 = FUN_10002770(DAT_100162b4 + 8);
    if (iVar3 == 0) {
      iVar3 = FUN_10002800();
      if (iVar3 < 1) {
        (*DAT_10016504)(&DAT_10016278,0xa0,0x14,100);
      }
    }
    if (DAT_100164b8 == (code *)0x0) {
LAB_10005fa5:
      iVar3 = (*DAT_1001653c)(5);
      if (2000 < iVar3) {
        iVar3 = (*DAT_1001653c)(4);
        if (2000 < iVar3) {
          iVar3 = 0x1e;
          do {
            (*DAT_10016504)(&DAT_10013888,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = (*DAT_100164b8)(DAT_100162b4 & 0xff,&DAT_10013888,1);
      if (iVar3 < 0x78) goto LAB_10005fa5;
    }
    cVar1 = (*DAT_1001654c)(&DAT_10016020);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    (*DAT_10016504)(&DAT_100163b0,1000,0x14,uVar4);
    (*DAT_10016504)(&DAT_10013680,1000,0x14,100);
    (*DAT_10016504)(&DAT_10015f80,1000,0x14,100);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}



// Function: FUN_10006050 @ 0x10006050

void __fastcall FUN_10006050(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*DAT_10016544)(&DAT_10013878,param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_100026f0();
    if (iVar2 == 3) {
      iVar2 = FUN_10002770(DAT_100162b4);
      if (iVar2 == 0) {
        FUN_10002690(2,3,500000);
        FUN_10002690(0,3,80000);
        FUN_10002750(DAT_100162b4,1);
        return;
      }
    }
    else {
      iVar2 = (*DAT_10016544)(&DAT_10013878);
      if (iVar2 != 0) {
        iVar2 = FUN_10002770(DAT_100162b4);
        if (iVar2 == 0) {
          FUN_10002690(5,3,4000);
          iVar2 = FUN_100026f0();
          if (iVar2 == 2) {
            FUN_10002690(4,0,1000);
            FUN_10002690(4,2,1000);
          }
          iVar2 = FUN_100026f0();
          if (iVar2 == 1) {
            FUN_10002690(4,0,600);
            FUN_10002690(4,2,600);
          }
          FUN_10002750(DAT_100162b4,1);
        }
        cVar1 = (*DAT_10016550)(&DAT_10016270);
        if (cVar1 != '\0') {
          cVar1 = (*DAT_10016550)(&DAT_10016150);
          if (cVar1 == '\0') {
            iVar2 = (*DAT_10016544)(&DAT_10015f20);
            if (iVar2 != 0) {
              if (DAT_100164bc == (code *)0x0) {
                iVar2 = 0;
              }
              else {
                iVar2 = (*DAT_100164bc)(DAT_100162b4 & 0xff,&DAT_10016150,5);
              }
              FUN_10003010(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = (*DAT_10016550)(&DAT_10016150);
        if (cVar1 != '\0') {
          cVar1 = (*DAT_10016550)(&DAT_10016020);
          if (cVar1 == '\0') {
            if (DAT_100164bc == (code *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = (*DAT_100164bc)(DAT_100162b4 & 0xff,&DAT_10016020,3);
            }
            uVar3 = FUN_10003010(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (DAT_100164bc == (code *)0x0) {
                iVar2 = 0;
              }
              else {
                iVar2 = (*DAT_100164bc)(DAT_100162b4 & 0xff,&DAT_10016020,1);
              }
              uVar3 = FUN_10003010(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (DAT_100164bc == (code *)0x0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = (*DAT_100164bc)(DAT_100162b4 & 0xff,&DAT_10016020,4);
                }
                FUN_10003010(4,(iVar2 * 0xb) / 10,2);
              }
            }
          }
        }
        iVar2 = (*DAT_1001653c)(2);
        if (100000 < iVar2) {
          FUN_10002690(0,2,5000);
          uVar3 = (*DAT_1001653c)(2);
          FUN_10002690(2,1,uVar3);
        }
        iVar2 = (*DAT_1001653c)(0);
        if (100000 < iVar2) {
          FUN_10002690(2,0,5000);
          uVar3 = (*DAT_1001653c)(0);
          FUN_10002690(0,1,uVar3);
        }
      }
    }
  }
  return;
}



// Function: FUN_10006370 @ 0x10006370

void __fastcall FUN_10006370(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*DAT_10016514)(0,4,4,param_1);
  cVar1 = (*DAT_10016570)();
  if (cVar1 == '\0') {
    return;
  }
  (*DAT_10016514)(9,4,4);
  iVar2 = FUN_100026f0();
  if (iVar2 == 3) {
    return;
  }
  cVar1 = (*DAT_10016570)();
  if (cVar1 == '\0') {
    (*DAT_10016514)(0,6,3);
    return;
  }
  (*DAT_10016514)(9,4,4);
  cVar1 = (*DAT_10016550)(&DAT_10016100);
  if (cVar1 == '\0') {
    if (DAT_100164bc == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_100164bc)((undefined1)DAT_100162b4,&DAT_10016100,3);
    }
    iVar3 = (*DAT_1001653c)(3);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 4;
      uVar4 = 4;
    }
    else {
      uVar5 = 6;
      uVar4 = 6;
    }
    (*DAT_10016514)(9,uVar4,uVar5);
  }
  cVar1 = (*DAT_10016550)(&DAT_10016020);
  if (cVar1 == '\0') {
    if (DAT_100164bc == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_100164bc)((undefined1)DAT_100162b4,&DAT_10016020,3);
    }
    iVar3 = (*DAT_1001653c)(3);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 9;
      uVar4 = 2;
    }
    else {
      uVar5 = 6;
      uVar4 = 6;
    }
    (*DAT_10016514)(9,uVar4,uVar5);
  }
  cVar1 = (*DAT_10016550)(&DAT_10016150);
  if (cVar1 == '\0') {
    if (DAT_100164bc == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_100164bc)((undefined1)DAT_100162b4,&DAT_10016150,3);
    }
    iVar3 = (*DAT_1001653c)(3);
    if (iVar3 < (iVar2 * 0xd) / 10) {
      uVar4 = 9;
    }
    else {
      uVar4 = 6;
    }
    (*DAT_10016514)(uVar4,9,1);
  }
  cVar1 = (*DAT_10016550)(&DAT_10016340);
  if (((cVar1 == '\0') || (cVar1 = (*DAT_10016550)(&DAT_10016288), cVar1 == '\0')) &&
     (iVar2 = (*DAT_1001653c)(3), iVar2 < 9000)) {
    (*DAT_10016514)(9,4,1);
  }
  iVar2 = (*DAT_10016540)(&DAT_10015fe8);
  if ((iVar2 == 0) && (iVar2 = FUN_10002800(), iVar2 < 2)) {
    if (DAT_100164b8 == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_100164b8)((undefined1)DAT_100162b4,&DAT_10015fe8,2);
    }
    iVar3 = (*DAT_1001653c)(2);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 3;
      uVar4 = 5;
    }
    else {
      uVar5 = 1;
      uVar4 = 7;
    }
    (*DAT_10016514)(9,uVar4,uVar5);
  }
  cVar1 = (*DAT_10016550)(&DAT_10016270);
  if (cVar1 == '\0') {
    (*DAT_10016514)(9,1,1);
  }
  cVar1 = (*DAT_10016550)(&DAT_10016078);
  if ((cVar1 == '\0') || (cVar1 = (*DAT_10016550)(&DAT_10013660), cVar1 == '\0')) {
    (*DAT_10016514)(9,4,1);
  }
  iVar2 = (*DAT_10016540)(&DAT_10015f20);
  if (iVar2 == 0) {
    (*DAT_10016514)(6,4,4);
  }
  cVar1 = (*DAT_10016550)(&DAT_10016378);
  if (cVar1 != '\0') {
    return;
  }
  (*DAT_10016514)(9,1,1);
  return;
}



// Function: FUN_100066b0 @ 0x100066b0

void FUN_100066b0(void)

{
  char cVar1;
  
  FUN_100027a0(&DAT_10016598);
  cVar1 = (*DAT_10016550)(&DAT_10016340);
  if (cVar1 != '\0') {
    cVar1 = (*DAT_10016550)(&DAT_10016288);
    if (cVar1 != '\0') {
      FUN_100027a0(&DAT_1000f16c);
      return;
    }
  }
  if (((DAT_10015f58 == 2) || (DAT_10015f58 == 3)) || (DAT_10015f58 == 4)) {
    FUN_100027a0(&DAT_1000f1d8);
  }
  else {
    cVar1 = (*DAT_10016550)(&DAT_10016270);
    if (cVar1 != '\0') {
      cVar1 = (*DAT_10016550)(&DAT_10016150);
      if (cVar1 == '\0') {
        FUN_100027a0(&DAT_10016598);
        return;
      }
    }
    cVar1 = (*DAT_10016550)(&DAT_10016150);
    if (cVar1 != '\0') {
      FUN_100027a0(&DAT_1000f1d8);
      return;
    }
  }
  return;
}



// Function: FUN_10006760 @ 0x10006760

void FUN_10006760(void)

{
  int iVar1;
  
  FUN_100027e0(1);
  iVar1 = FUN_100052f0(&DAT_10013688);
  if (iVar1 != 0) {
    FUN_100027e0(0);
  }
  iVar1 = FUN_100027f0();
  if ((iVar1 < 1) && (iVar1 = (*DAT_10016544)(&DAT_100138d8), iVar1 < 1)) {
    return;
  }
  FUN_100027e0(0);
  return;
}



// Function: FUN_100067b0 @ 0x100067b0

void FUN_100067b0(void)

{
  char cVar1;
  
  cVar1 = (*DAT_1001654c)(&DAT_10016198);
  if (cVar1 != '\0') {
    (*DAT_10016504)(&DAT_10016370,0x1e,0x1e,0x3c);
  }
  cVar1 = (*DAT_1001654c)(&DAT_100160b0);
  if (cVar1 != '\0') {
    (*DAT_10016504)(&DAT_10013668,0x14,0x1e,0x3c);
  }
  (*DAT_10016504)(&DAT_100138c8,0x3c,0x50,100);
  (*DAT_10016508)(&DAT_100161d8,0x1e,100);
  (*DAT_10016508)(&DAT_100161d0,0x1e,100);
  (*DAT_10016508)(&DAT_100161a0,0x1e,100);
  (*DAT_10016508)(&DAT_10016198,0x1e,100);
  (*DAT_10016508)(&DAT_100161a8,0x1e,100);
  (*DAT_10016508)(&DAT_10016098,0x1e,100);
  (*DAT_10016508)(&DAT_100160a0,0x1e,100);
  (*DAT_10016508)(&DAT_100160a8,0x1e,100);
  (*DAT_10016508)(&DAT_100160b0,0x1e,100);
  return;
}



// Function: FUN_100068a0 @ 0x100068a0

void FUN_100068a0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = (*DAT_10016544)(&DAT_100138d8);
  iVar3 = (*DAT_10016540)(&DAT_10016250);
  iVar4 = (*DAT_10016544)(&DAT_10016250);
  iVar5 = (*DAT_10016540)(&DAT_10015f20);
  iVar6 = (*DAT_10016544)(&DAT_10015f20);
  iVar7 = (*DAT_10016540)(&DAT_100138d8);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_100161b0)) {
    (*DAT_10016504)(&DAT_100138d8,4,0x32,100);
    cVar1 = (*DAT_10016550)(&DAT_100161b8);
    if (cVar1 != '\0') {
      (*DAT_10016504)(&DAT_100138d8,6,0x32,100);
    }
    cVar1 = (*DAT_10016550)(&DAT_10016020);
    if (cVar1 != '\0') {
      (*DAT_10016504)(&DAT_100138d8,8,0x32,100);
    }
  }
  (*DAT_10016508)(&DAT_100162e8,0x32,100);
  (*DAT_10016508)(&DAT_100162d0,0x28,100);
  (*DAT_10016508)(&DAT_100162e0,0x1e,100);
  (*DAT_10016508)(&DAT_100162c0,0x14,100);
  (*DAT_10016508)(&DAT_100162c8,0xf,100);
  (*DAT_10016508)(&DAT_100162b8,10,100);
  return;
}



// Function: FUN_100069d0 @ 0x100069d0

void FUN_100069d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = (*DAT_10016544)(&DAT_10016258);
  iVar3 = (*DAT_10016540)(&DAT_10016258);
  if (iVar3 == iVar2) {
    (*DAT_10016504)(&DAT_10016258,5,100,100);
  }
  (*DAT_10016504)(&DAT_10015fb8,1,100,100);
  (*DAT_10016504)(&DAT_100161e8,1,100,100);
  (*DAT_10016504)(&DAT_10016250,2,100,100);
  iVar2 = (*DAT_10016544)(&DAT_10016250);
  iVar3 = (*DAT_10016540)(&DAT_10016250);
  if (iVar3 == iVar2) {
    (*DAT_10016504)(&DAT_10015f20,1,100,100);
    iVar2 = (*DAT_10016544)(&DAT_10015f20);
    if (iVar2 != 0) {
      (*DAT_10016504)(&DAT_10015fd0,1,100,100);
      (*DAT_10016504)(&DAT_10015fd8,1,100,100);
      (*DAT_10016504)(&DAT_10013878,1,100,100);
      iVar2 = (*DAT_10016544)(&DAT_10013878);
      if (iVar2 != 0) {
        (*DAT_10016504)(&DAT_10015fe8,1,100,100);
        (*DAT_10016504)(&DAT_100160f8,1,100,100);
        (*DAT_10016504)(&DAT_10013618,1,100,100);
        (*DAT_10016504)(&DAT_100160d8,1,100,100);
        cVar1 = (*DAT_10016550)(&DAT_10016020);
        if (cVar1 != '\0') {
          iVar2 = (*DAT_10016544)(&DAT_10015fb8);
          iVar3 = (*DAT_10016540)(&DAT_10015fb8);
          if (iVar3 == iVar2) {
            iVar2 = FUN_100027b0(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            (*DAT_10016504)(&DAT_10015fb8,uVar4,100,100);
          }
          iVar2 = (*DAT_10016544)(&DAT_100160d8);
          iVar3 = (*DAT_10016540)(&DAT_100160d8);
          if (iVar3 == iVar2) {
            (*DAT_10016504)(&DAT_100160d8,7,100,100);
          }
          iVar2 = (*DAT_10016544)(&DAT_10013618);
          iVar3 = (*DAT_10016540)(&DAT_10013618);
          if (iVar3 == iVar2) {
            (*DAT_10016504)(&DAT_10013618,3,100,100);
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_10006be0 @ 0x10006be0

void FUN_10006be0(void)

{
  int iVar1;
  
  FUN_100027e0(1);
  iVar1 = (*DAT_10016540)(&DAT_10013888);
  if (iVar1 < 4) {
    FUN_10002750(DAT_100162b4 + 8,0);
  }
  iVar1 = (*DAT_10016540)(&DAT_10013888);
  if (0x5f < iVar1) {
    FUN_10002750(DAT_100162b4 + 8,1);
  }
  iVar1 = FUN_10002770(DAT_100162b4 + 8);
  FUN_100027e0(CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0));
  FUN_100027e0(0);
  return;
}



// Function: FUN_10006c60 @ 0x10006c60

void FUN_10006c60(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(&DAT_10015f98 + DAT_100162b4 * 4) != 0) {
    FUN_10006760();
    uVar2 = extraout_ECX;
  }
  FUN_10005e70(uVar2);
  FUN_100067b0();
  iVar1 = FUN_10002800();
  if (iVar1 < 5) {
    FUN_100068a0();
  }
  FUN_10005c50();
  FUN_10005b10();
  iVar1 = FUN_10002800();
  uVar2 = extraout_ECX_00;
  if (iVar1 < 3) {
    FUN_10005330();
    uVar2 = extraout_ECX_01;
  }
  FUN_10006050(uVar2);
  FUN_10006370(extraout_ECX_02);
  FUN_100066b0();
  return;
}



// Function: FUN_10006cc0 @ 0x10006cc0

void FUN_10006cc0(void)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar3;
  
  FUN_10006be0();
  FUN_100069d0();
  iVar3 = 2;
  do {
    (*DAT_10016504)(&DAT_10016190,1000,0x14,100);
    (*DAT_10016504)(&DAT_10013688,1000,0x14,100);
    iVar2 = FUN_10002770(DAT_100162b4 + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        (*DAT_10016504)(&DAT_10013888,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      (*DAT_10016504)(&DAT_10016160,0x3c,10,100);
    }
    cVar1 = (*DAT_1001654c)(&DAT_10016020);
    if (cVar1 == '\0') {
      (*DAT_10016504)(&DAT_10013690,1000,0x14,100);
    }
    (*DAT_10016504)(&DAT_10013680,1000,0x14,100);
    (*DAT_10016504)(&DAT_10015f80,1000,0x14,100);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_100067b0();
  FUN_10006050(extraout_ECX);
  FUN_10006370(extraout_ECX_00);
  FUN_10005330();
  FUN_10005b10();
  return;
}



// Function: FUN_10006dc0 @ 0x10006dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006dc0(void)

{
  DAT_10015f58 = FUN_10002700();
  _DAT_10016368 = FUN_100026e0();
  DAT_10013898 = FUN_100026f0();
  FUN_100030c0();
  (*DAT_1001650c)(0x13,&DAT_1000f114);
  FUN_100066b0();
  FUN_10002780(&DAT_1000f244,0x1b);
  switch(DAT_10015f58) {
  case 0:
  case 5:
    if (DAT_10013898 == 3) {
      (*DAT_1001650c)(3,&DAT_1000f160);
      FUN_100027a0(&DAT_1000f16c);
      FUN_10002780(&DAT_1000f41c,5);
      FUN_10006cc0();
    }
    else {
      (*DAT_1001650c)(0x13,&DAT_1000f114);
      FUN_100027a0(&DAT_10016598);
      if (DAT_10013898 == 0) {
        _DAT_1000f248 = 4;
      }
      FUN_10002780(&DAT_1000f244,0x1b);
      FUN_10006c60();
    }
    break;
  case 1:
    ProcessMiddleSeaAI();
    break;
  case 2:
  case 3:
  case 4:
    (*DAT_10016528)(0x122);
    (*DAT_1001652c)(0x122);
    (*DAT_10016530)(0x122);
    (*DAT_1001650c)(0x13,&DAT_1000f07c);
    FUN_100033e0();
  }
  FUN_10003240();
  return;
}



// Function: FUN_10006ef0 @ 0x10006ef0

int __cdecl FUN_10006ef0(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_1000727c((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10007164(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}



// Function: FUN_10006f42 @ 0x10006f42

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006f42(void)

{
  void *extraout_ECX;
  
  FUN_10006f5a();
  _DAT_10016660 = FUN_10007ad6();
  FUN_10007a86(extraout_ECX);
  return;
}



// Function: FUN_10006f5a @ 0x10006f5a

void FUN_10006f5a(void)

{
  PTR___fptrap_100106a0 = &LAB_10007b59;
  PTR___fptrap_1001069c = __cfltcvt;
  PTR___fptrap_100106a4 = __fassign;
  PTR___fptrap_100106a8 = FUN_10007aff;
  PTR___fptrap_100106ac = &LAB_10007ba7;
  PTR___fptrap_100106b0 = __cfltcvt;
  return;
}



// Function: __ftol @ 0x10006f94

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_10006fbb @ 0x10006fbb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10006fbb(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1001667c = GetVersion();
    iVar1 = FUN_1000898c(1);
    if (iVar1 != 0) {
      _DAT_10016688 = DAT_1001667c >> 8 & 0xff;
      _DAT_10016684 = DAT_1001667c & 0xff;
      DAT_1001667c = DAT_1001667c >> 0x10;
      _DAT_10016680 = _DAT_10016684 * 0x100 + _DAT_10016688;
      iVar1 = FUN_10008043();
      if (iVar1 != 0) {
        DAT_10017d74 = GetCommandLineA();
        DAT_10016668 = FUN_100086e5();
        FUN_100081cf();
        FUN_10008498();
        FUN_100083df();
        FUN_10007f25();
        DAT_10016664 = DAT_10016664 + 1;
        goto LAB_1000708e;
      }
      FUN_100089e9();
    }
LAB_1000701b:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10016664 < 1) goto LAB_1000701b;
      DAT_10016664 = DAT_10016664 + -1;
      if (DAT_100166b4 == 0) {
        FUN_10007f63();
      }
      FUN_1000838b();
      FUN_10008097();
      FUN_100089e9();
    }
    else if (param_2 == 3) {
      FUN_1000812f((undefined *)0x0);
    }
LAB_1000708e:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10007094

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10016664;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100070dc;
    if ((DAT_10017d78 != (code *)0x0) &&
       (iVar2 = (*DAT_10017d78)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10006fbb(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100070dc:
  iVar2 = FUN_10002870(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10006fbb(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10006fbb(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10017d78 != (code *)0x0) {
      iVar2 = (*DAT_10017d78)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10007131

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10016670 == 1) || ((DAT_10016670 == 0 && (DAT_10016674 == 1)))) {
    FUN_10008a91();
  }
  FUN_10008aca(param_1);
  (*(code *)PTR___exit_10010690)(0xff);
  return;
}



// Function: FUN_10007164 @ 0x10007164

uint __cdecl FUN_10007164(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_10007270:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_10007270;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_10010790 && (piVar4 != (int *)&DAT_100107b0)) ||
        (bVar5 = FUN_10008f29(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_10008ee5(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_10008cf5(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_100106b8;
        }
        else {
          puVar6 = (undefined *)((&DAT_10017c60)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_10008c1d(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_10008cf5(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}



// Function: FUN_1000727c @ 0x1000727c

int __cdecl FUN_1000727c(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  undefined4 uVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  CHAR local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  WCHAR *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(byte *)((int)&LCMapStringW_exref + (int)(char)bVar9) & 0xf;
    }
    local_34 = (int)(char)(&DAT_1000e0e8)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_100072ea_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_100109f0[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_100079bd((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_100079bd((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_24 = FUN_10007a5b((int *)&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar9 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = FUN_10007a5b((int *)&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != 0x34)) {
          local_34 = 0;
          goto switchD_100072ea_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pWVar4 = local_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
LAB_100076fb:
              local_30 = 7;
LAB_10007702:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_1000776c;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_100074a9;
                }
                goto LAB_10007886;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_1000750a;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_10007537:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_10007a5b((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_10007a78((int *)&param_3);
              local_10 = (undefined1 *)FUN_1000913b(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_10007a5b((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_10010694;
              pWVar4 = (WCHAR *)PTR_DAT_10010694;
              goto LAB_1000767c;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar6;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar6 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto LAB_10007537;
            if (bVar9 == 100) goto LAB_10007761;
          }
        }
        else {
LAB_1000750a:
          local_8 = local_8 | 0x40;
          pWVar4 = (WCHAR *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = pWVar4;
          (*(code *)PTR___fptrap_1001069c)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_100106a8)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_100106a0)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_1000767c:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_10007761:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_10007a5b((int *)&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_1000776c;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_100076fb;
          }
          if (bVar9 == 0x73) {
LAB_100074a9:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_10007a5b((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_10010694;
                pWVar4 = (WCHAR *)PTR_DAT_10010694;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_10010698;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_10007886;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_10007886;
            local_30 = 0x27;
            goto LAB_10007702;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_1000776c:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_10007a5b((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_100077bf;
            }
            uVar2 = FUN_10007a5b((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_10007a5b((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_10007a5b((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_10007a68((int *)&param_3);
        }
LAB_100077bf:
        iVar10 = (int)(uVar13 >> 0x20);
        if ((((local_8 & 0x40) != 0) && (iVar10 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_8 = local_8 | 0x100;
          uVar13 = CONCAT44(-(iVar10 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        uVar2 = (uint)(uVar13 >> 0x20);
        uVar15 = uVar13 & 0xffffffff;
        if ((local_8 & 0x8000) == 0) {
          uVar2 = 0;
        }
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar13 == 0 && uVar2 == 0) {
          local_20 = 0;
        }
        local_c = (WCHAR *)&local_4d;
        while( true ) {
          uVar11 = (uint)uVar15;
          iVar10 = local_14 + -1;
          if ((local_14 < 1) && (uVar11 == 0 && uVar2 == 0)) break;
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (uint)local_10;
          local_14 = iVar10;
          uVar14 = __aullrem(uVar11,uVar2,(uint)local_10,local_40);
          iVar10 = (int)uVar14 + 0x30;
          uVar15 = __aulldiv(uVar11,uVar2,local_44,local_40);
          uVar2 = (uint)(uVar15 >> 0x20);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + local_30;
          }
          pWVar4 = (WCHAR *)((int)local_c + -1);
          *(char *)local_c = (char)iVar10;
          local_c = pWVar4;
        }
        iVar8 = -(int)local_c;
        local_10 = &local_4d + iVar8;
        pWVar4 = (WCHAR *)((int)local_c + 1);
        local_14 = iVar10;
        if (((local_8 & 0x200) != 0) &&
           ((*(char *)pWVar4 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar8);
          pWVar4 = local_c;
        }
      }
LAB_10007886:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_100078be;
              local_1a = ' ';
            }
            else {
              local_1a = '+';
            }
          }
          else {
            local_1a = '-';
          }
          local_20 = 1;
        }
LAB_100078be:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_100079f2(0x20,iVar10,param_1,&local_18);
        }
        FUN_10007a23(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_100079f2(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_10007a23((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_1000913b(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_10007a23(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_100079f2(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}



// Function: FUN_100079bd @ 0x100079bd

void __cdecl FUN_100079bd(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10007164(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}



// Function: FUN_100079f2 @ 0x100079f2

void __cdecl FUN_100079f2(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_100079bd(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



// Function: FUN_10007a23 @ 0x10007a23

void __cdecl FUN_10007a23(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_100079bd((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



// Function: FUN_10007a5b @ 0x10007a5b

undefined4 __cdecl FUN_10007a5b(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



// Function: FUN_10007a68 @ 0x10007a68

undefined8 __cdecl FUN_10007a68(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



// Function: FUN_10007a78 @ 0x10007a78

undefined4 __cdecl FUN_10007a78(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}



// Function: FUN_10007a86 @ 0x10007a86

void __fastcall FUN_10007a86(void *param_1)

{
  FUN_1000931a(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_10007a98 @ 0x10007a98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10007a98(void)

{
  if (_DAT_1000e160 < _DAT_1000e168 - (_DAT_1000e168 / _DAT_1000e170) * _DAT_1000e170) {
    return 1;
  }
  return 0;
}



// Function: FUN_10007ad6 @ 0x10007ad6

void FUN_10007ad6(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_10007a98();
  return;
}



// Function: FUN_10007aff @ 0x10007aff

void __cdecl FUN_10007aff(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_100094c0((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10010c00 < 2) {
        uVar3 = (byte)PTR_DAT_100109f0[*param_1 * 2] & 4;
        this = PTR_DAT_100109f0;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1000944b(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10010c04;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x10007bbf

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_1000998c(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_100099b9(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_10007bfd @ 0x10007bfd

undefined1 * __cdecl FUN_10007bfd(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10009a5d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_100099e6(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10007c5e(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_10007c5e @ 0x10007c5e

undefined1 * __cdecl
FUN_10007c5e(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10007f00(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[1];
    *puVar2 = DAT_10010c04;
  }
  puVar3 = FUN_10009b70((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar3 + 1) = (char)puVar3[1] + (char)iVar4;
  }
  return param_1;
}



// Function: FUN_10007d20 @ 0x10007d20

char * __cdecl FUN_10007d20(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10009a5d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_100099e6(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10007d75(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_10007d75 @ 0x10007d75

char * __cdecl FUN_10007d75(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
  }
  pcVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_10007f00(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10007f00(pcVar3,1);
    *pcVar3 = DAT_10010c04;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10007f00(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_10007e1c @ 0x10007e1c

void __cdecl FUN_10007e1c(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10009a5d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_100099e6(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10007c5e(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_10007d75(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x10007eaf

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_10007bfd(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10007d20(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_10007e1c(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_10007f00 @ 0x10007f00

void __cdecl FUN_10007f00(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10009cc0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_10007f25 @ 0x10007f25

void FUN_10007f25(void)

{
  if (PTR_FUN_10010684 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10010684)();
  }
  FUN_10008029((undefined4 *)&DAT_1000f008,(undefined4 *)&DAT_1000f014);
  FUN_10008029((undefined4 *)&DAT_1000f000,(undefined4 *)&DAT_1000f004);
  return;
}



// Function: __exit @ 0x10007f52

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10007f72(_Code,1,0);
  return;
}



// Function: FUN_10007f63 @ 0x10007f63

void FUN_10007f63(void)

{
  FUN_10007f72(0,0,1);
  return;
}



// Function: FUN_10007f72 @ 0x10007f72

void __cdecl FUN_10007f72(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10008017();
  if (DAT_100166b8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100166b4 = 1;
  DAT_100166b0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10017d70 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10017d6c - 4), DAT_10017d70 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10017d70 <= puVar1);
    }
    FUN_10008029((undefined4 *)&DAT_1000f018,(undefined4 *)&DAT_1000f020);
  }
  FUN_10008029((undefined4 *)&DAT_1000f024,(undefined4 *)&DAT_1000f028);
  if (param_3 == 0) {
    DAT_100166b8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10008020();
  return;
}



// Function: FUN_10008017 @ 0x10008017

void FUN_10008017(void)

{
  FUN_1000a093(0xd);
  return;
}



// Function: FUN_10008020 @ 0x10008020

void FUN_10008020(void)

{
  FUN_1000a0f4(0xd);
  return;
}



// Function: FUN_10008029 @ 0x10008029

void __cdecl FUN_10008029(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10008043 @ 0x10008043

undefined4 FUN_10008043(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10009ffe();
  DAT_100106b4 = TlsAlloc();
  if (DAT_100106b4 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000a109(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100106b4,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100080b5((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10008097 @ 0x10008097

void FUN_10008097(void)

{
  FUN_1000a027();
  if (DAT_100106b4 != 0xffffffff) {
    TlsFree(DAT_100106b4);
    DAT_100106b4 = 0xffffffff;
  }
  return;
}



// Function: FUN_100080b5 @ 0x100080b5

void __cdecl FUN_100080b5(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10010d00;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_100080c8 @ 0x100080c8

DWORD * FUN_100080c8(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_100106b4);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000a109(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100106b4,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100080b5((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10008123;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10008123:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_1000812f @ 0x1000812f

void __cdecl FUN_1000812f(undefined *param_1)

{
  if (DAT_100106b4 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_100106b4), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000a246(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000a246(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000a246(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000a246(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000a246(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000a246(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10010d00) {
        FUN_1000a246(*(undefined **)(param_1 + 0x50));
      }
      FUN_1000a246(param_1);
    }
    TlsSetValue(DAT_100106b4,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100081cf @ 0x100081cf

void FUN_100081cf(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10017d60 = 0x20;
  DAT_10017c60 = puVar2;
  for (; puVar2 < DAT_10017c60 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_10017d60 < (int)UVar8) {
      puVar2 = &DAT_10017c64;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10017d60;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10017d60 = DAT_10017d60 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_10017d60 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10017c60)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_10017c60 + iVar6 * 9;
    if (DAT_10017c60[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_10008374;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10008374:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10017d60);
      return;
    }
  } while( true );
}



// Function: FUN_1000838b @ 0x1000838b

void FUN_1000838b(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10017c60;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_1000a246((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10017d60);
  return;
}



// Function: FUN_100083df @ 0x100083df

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100083df(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10017d68 == 0) {
    FUN_1000a841();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10016668; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10016698 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10016668;
  puVar6 = DAT_10016668;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10009b70((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1000a246((undefined *)DAT_10016668);
  DAT_10016668 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10017d64 = 1;
  return;
}



// Function: FUN_10008498 @ 0x10008498

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008498(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10017d68 == 0) {
    FUN_1000a841();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100166bc,0x104);
  _DAT_100166a8 = &DAT_100166bc;
  pbVar2 = &DAT_100166bc;
  if (*DAT_10017d74 != 0) {
    pbVar2 = DAT_10017d74;
  }
  FUN_10008531(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10008531(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10016690 = puVar1;
  _DAT_1001668c = local_8 + -1;
  return;
}



// Function: FUN_10008531 @ 0x10008531

void __cdecl FUN_10008531(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_10016b20 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_10016b20 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100085dc;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100085dc:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10016b20 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10016b20 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



// Function: FUN_100086e5 @ 0x100086e5

LPSTR FUN_100086e5(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_100167c0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_100167c0 = 1;
LAB_1000873c:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_1000a246(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_100167c0 = 2;
  }
  else {
    if (DAT_100167c0 == 1) goto LAB_1000873c;
    if (DAT_100167c0 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_1000a860((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10008817 @ 0x10008817

void __cdecl FUN_10008817(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}



// Function: FUN_10008844 @ 0x10008844

int FUN_10008844(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *this;
  byte unaff_BL;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_1000af50();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x62;
    aCStackY_18[1] = -0x78;
    aCStackY_18[2] = '\0';
    aCStackY_18[3] = '\x10';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar7 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar7;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar7 = cVar1 + -0x20;
        }
        pcVar7 = pcVar7 + 1;
        local_1230[0] = *pcVar7;
      }
      aCStackY_18[0] = -0x24;
      aCStackY_18[1] = -0x78;
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -2;
        aCStackY_18[1] = -0x78;
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar7 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar7;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar7 = cVar1 + -0x20;
          }
          pcVar7 = pcVar7 + 1;
          local_1a0[0] = *pcVar7;
        }
        pcVar7 = _strstr(local_1230,local_1a0);
      }
      if ((pcVar7 != (char *)0x0) && (pcVar7 = _strchr(pcVar7,0x2c), pcVar7 != (char *)0x0)) {
        pbVar6 = (byte *)(pcVar7 + 1);
        bVar2 = *pbVar6;
        this = pbVar6;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = 'd';
        aCStackY_18[1] = -0x77;
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_1000ab95(this,pbVar6,(int *)0x0,(void *)0xa);
        if (iVar5 == 2) {
          return 2;
        }
        if (iVar5 == 3) {
          return 3;
        }
        if (iVar5 == 1) {
          return 1;
        }
      }
    }
    FUN_10008817((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_1000898c @ 0x1000898c

undefined4 __cdecl FUN_1000898c(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10017c44 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10017c44 != (HANDLE)0x0) {
    DAT_10017c48 = FUN_10008844();
    if (DAT_10017c48 == 3) {
      ppuVar1 = (undefined **)FUN_1000af7f(0x3f8);
    }
    else {
      if (DAT_10017c48 != 2) {
        return 1;
      }
      ppuVar1 = FUN_1000b7d0();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10017c44);
  }
  return 0;
}



// Function: FUN_100089e9 @ 0x100089e9

void FUN_100089e9(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10017c48 == 3) {
    iVar1 = 0;
    if (0 < DAT_100169e8) {
      puVar2 = (undefined4 *)((int)DAT_100169ec + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10017c44,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_100169e8);
    }
    HeapFree(DAT_10017c44,0,DAT_100169ec);
  }
  else if (DAT_10017c48 == 2) {
    ppuVar3 = &PTR_LOOP_10010e80;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10010e80);
  }
  HeapDestroy(DAT_10017c44);
  return;
}



// Function: FUN_10008a91 @ 0x10008a91

void FUN_10008a91(void)

{
  if ((DAT_10016670 == 1) || ((DAT_10016670 == 0 && (DAT_10016674 == 1)))) {
    FUN_10008aca(0xfc);
    if (DAT_100167c4 != (code *)0x0) {
      (*DAT_100167c4)();
    }
    FUN_10008aca(0xff);
  }
  return;
}



// Function: FUN_10008aca @ 0x10008aca

void __cdecl FUN_10008aca(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_100106e0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10010770);
  if (param_1 == (&DAT_100106e0)[iVar5 * 2]) {
    if ((DAT_10016670 == 1) || ((DAT_10016670 == 0 && (DAT_10016674 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100106e4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10009b70(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10009b70(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10009b80(local_a4,_Dest);
      FUN_10009b80(local_a4,(uint *)&DAT_1000e494);
      FUN_10009b80(local_a4,*(uint **)(iVar5 * 8 + 0x100106e4));
      auStackY_1e3._3_4_ = 0x10008bee;
      FUN_1000bdf4(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10008c1d @ 0x10008c1d

DWORD __cdecl FUN_10008c1d(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10017d60) &&
     ((*(byte *)((&DAT_10017c60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c0c4(param_1);
    DVar1 = FUN_10008c82(param_1,param_2,param_3);
    FUN_1000c123(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1000bff1();
  *pDVar2 = 9;
  pDVar2 = FUN_1000bffa();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10008c82 @ 0x10008c82

DWORD __cdecl FUN_10008c82(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1000c082(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000bff1();
    *pDVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_10017c60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1000bf7e(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_10008cf5 @ 0x10008cf5

int __cdecl FUN_10008cf5(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10017d60) &&
     ((*(byte *)((&DAT_10017c60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c0c4(param_1);
    iVar1 = FUN_10008d5a(param_1,param_2,param_3);
    FUN_1000c123(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000bff1();
  *pDVar2 = 9;
  pDVar2 = FUN_1000bffa();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10008d5a @ 0x10008d5a

int __cdecl FUN_10008d5a(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD *pDVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_10008d73:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10017c60 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10008c82(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        local_c = local_10;
        param_1 = 0;
      }
LAB_10008e42:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10008eb4;
      if (param_1 == 5) {
        pDVar7 = FUN_1000bff1();
        *pDVar7 = 9;
        pDVar7 = FUN_1000bffa();
        *pDVar7 = 5;
      }
      else {
        FUN_1000bf7e(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,
                            &local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_10008e42;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10008e42;
        } while( true );
      }
LAB_10008eb4:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10008d73;
      pDVar7 = FUN_1000bff1();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1000bffa();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_10008ee5 @ 0x10008ee5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10008ee5(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_100167c8 = _DAT_100167c8 + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}



// Function: FUN_10008f29 @ 0x10008f29

byte __cdecl FUN_10008f29(uint param_1)

{
  if (DAT_10017d60 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_10017c60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



// Function: FUN_1000900e @ 0x1000900e

void __cdecl FUN_1000900e(uint param_1)

{
  if ((0x1001076f < param_1) && (param_1 < 0x100109d1)) {
    FUN_1000a093(((int)(param_1 + 0xeffef890) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_1000903d @ 0x1000903d

void __cdecl FUN_1000903d(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a093(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10009060 @ 0x10009060

void __cdecl FUN_10009060(uint param_1)

{
  if ((0x1001076f < param_1) && (param_1 < 0x100109d1)) {
    FUN_1000a0f4(((int)(param_1 + 0xeffef890) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_1000908f @ 0x1000908f

void __cdecl FUN_1000908f(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a0f4(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: _strlen @ 0x100090c0

/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_100090e0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10009113:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100090e0:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10009113;
}



// Function: FUN_1000913b @ 0x1000913b

int __cdecl FUN_1000913b(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_100169d4);
  bVar2 = DAT_100169d0 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_100169d4);
    FUN_1000a093(0x13);
  }
  iVar1 = FUN_10009194(param_1,param_2);
  if (bVar2) {
    FUN_1000a0f4(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_100169d4);
  }
  return iVar1;
}



// Function: FUN_10009194 @ 0x10009194

int __cdecl FUN_10009194(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10016858 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_10016868,0x220,&param_2,1,lpMultiByteStr,DAT_10010c00,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1000bff1();
  *pDVar2 = 0x2a;
  return -1;
}



// Function: __aulldiv @ 0x10009200

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



// Function: __aullrem @ 0x10009270

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



// Function: FUN_100092e5 @ 0x100092e5

uint __thiscall FUN_100092e5(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10009330(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_100093c2(uVar1);
  return uVar1;
}



// Function: FUN_1000931a @ 0x1000931a

void __thiscall FUN_1000931a(void *this,uint param_1,uint param_2)

{
  FUN_100092e5(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_10009330 @ 0x10009330

uint __cdecl FUN_10009330(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



// Function: FUN_100093c2 @ 0x100093c2

uint __cdecl FUN_100093c2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



// Function: FUN_1000944b @ 0x1000944b

uint __thiscall FUN_1000944b(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_100109f0 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_100109f0[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000c2fd(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_100094c0 @ 0x100094c0

uint __cdecl FUN_100094c0(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10016858 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100169d4);
    bVar1 = DAT_100169d0 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_100169d4);
      this = (void *)0x13;
      FUN_1000a093(0x13);
    }
    param_1 = FUN_1000952f(this,param_1);
    if (bVar1) {
      FUN_1000a0f4(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_100169d4);
    }
  }
  return param_1;
}



// Function: FUN_1000952f @ 0x1000952f

uint __thiscall FUN_1000952f(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10016858 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10010c00 < 2) {
        uVar2 = (byte)PTR_DAT_100109f0[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000944b(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_100109f0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000c446(DAT_10016858,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



// Function: FUN_100095fa @ 0x100095fa

undefined4 __cdecl FUN_100095fa(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}



// Function: FUN_10009643 @ 0x10009643

void __cdecl FUN_10009643(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1000c695(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1000c695(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_10009699 @ 0x10009699

undefined4 __cdecl FUN_10009699(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_100095fa(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10009643(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}



// Function: FUN_10009725 @ 0x10009725

void __cdecl FUN_10009725(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// Function: FUN_10009740 @ 0x10009740

void __cdecl FUN_10009740(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_1000974c @ 0x1000974c

undefined4 __cdecl FUN_1000974c(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}



// Function: FUN_10009767 @ 0x10009767

void __cdecl FUN_10009767(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}



// Function: FUN_100097f4 @ 0x100097f4

undefined4 __cdecl FUN_100097f4(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_1000974c((int *)&local_10);
    if (iVar2 != 0) {
LAB_10009920:
      uVar5 = 0;
      goto LAB_10009922;
    }
    FUN_10009740(&local_10);
  }
  else {
    FUN_10009725((int)local_1c,&local_10);
    iVar2 = FUN_10009699((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10009740(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10009740(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10009767(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10009922;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10009767(&local_10,param_3[3]);
        goto LAB_10009920;
      }
      FUN_10009725((int)&local_10,local_1c);
      FUN_10009767(&local_10,iVar2 - iVar4);
      FUN_10009699((int)&local_10,param_3[2]);
      FUN_10009767(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10009922:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}



// Function: FUN_10009960 @ 0x10009960

void __cdecl FUN_10009960(ushort *param_1,uint *param_2)

{
  FUN_100097f4(param_1,param_2,(int *)&DAT_10010c10);
  return;
}



// Function: FUN_10009976 @ 0x10009976

void __cdecl FUN_10009976(ushort *param_1,uint *param_2)

{
  FUN_100097f4(param_1,param_2,(int *)&DAT_10010c28);
  return;
}



// Function: FUN_1000998c @ 0x1000998c

void __thiscall FUN_1000998c(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000c836(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10009960(local_10,param_1);
  return;
}



// Function: FUN_100099b9 @ 0x100099b9

void __thiscall FUN_100099b9(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000c836(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10009976(local_10,param_1);
  return;
}



// Function: FUN_100099e6 @ 0x100099e6

void __cdecl FUN_100099e6(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_10009cc0((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_10009a5d @ 0x10009a5d

int * __cdecl FUN_10009a5d(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar4;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_10009ab9(&local_10,&param_1);
  iVar3 = FUN_1000cd07(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10009b70(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_10009ab9 @ 0x10009ab9

void __cdecl FUN_10009ab9(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}



// Function: FUN_10009b70 @ 0x10009b70

uint * __cdecl FUN_10009b70(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10009c58;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10009c58:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



// Function: FUN_10009b80 @ 0x10009b80

uint * __cdecl FUN_10009b80(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10009b9c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10009bcf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10009beb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10009b9c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10009beb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10009beb;
    }
  }
LAB_10009bcf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10009beb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10009c58:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10009c58;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _memset @ 0x10009c60

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



// Function: FUN_10009cc0 @ 0x10009cc0

undefined4 * __cdecl FUN_10009cc0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10009e77_caseD_2;
        case 3:
          goto switchD_10009e77_caseD_3;
        }
        goto switchD_10009e77_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10009e77_caseD_0;
      case 1:
        goto switchD_10009e77_caseD_1;
      case 2:
        goto switchD_10009e77_caseD_2;
      case 3:
        goto switchD_10009e77_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10009e77_caseD_2;
            case 3:
              goto switchD_10009e77_caseD_3;
            }
            goto switchD_10009e77_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10009e77_caseD_2;
            case 3:
              goto switchD_10009e77_caseD_3;
            }
            goto switchD_10009e77_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10009e77_caseD_2;
            case 3:
              goto switchD_10009e77_caseD_3;
            }
            goto switchD_10009e77_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10009e77_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10009e77_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10009e77_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10009e77_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10009cf5_caseD_2;
      case 3:
        goto switchD_10009cf5_caseD_3;
      }
      goto switchD_10009cf5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10009cf5_caseD_0;
    case 1:
      goto switchD_10009cf5_caseD_1;
    case 2:
      goto switchD_10009cf5_caseD_2;
    case 3:
      goto switchD_10009cf5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10009cf5_caseD_2;
          case 3:
            goto switchD_10009cf5_caseD_3;
          }
          goto switchD_10009cf5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10009cf5_caseD_2;
          case 3:
            goto switchD_10009cf5_caseD_3;
          }
          goto switchD_10009cf5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10009cf5_caseD_2;
          case 3:
            goto switchD_10009cf5_caseD_3;
          }
          goto switchD_10009cf5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10009cf5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10009cf5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10009cf5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10009cf5_caseD_0:
  return param_1;
}



// Function: __fptrap @ 0x10009ff5

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



// Function: FUN_10009ffe @ 0x10009ffe

void FUN_10009ffe(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c84);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c74);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c64);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c44);
  return;
}



// Function: FUN_1000a027 @ 0x1000a027

void FUN_1000a027(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10010c40;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10010c84)) && (ppuVar1 != &PTR_DAT_10010c74)) &&
       ((ppuVar1 != &PTR_DAT_10010c64 && (ppuVar1 != &PTR_DAT_10010c44)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000a246(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10010d00);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c64);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c74);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c84);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c44);
  return;
}



// Function: FUN_1000a093 @ 0x1000a093

void __cdecl FUN_1000a093(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10010c40 + param_1;
  if ((&DAT_10010c40)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1000a093(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1000a246((undefined *)lpCriticalSection);
    }
    FUN_1000a0f4(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_1000a0f4 @ 0x1000a0f4

void __cdecl FUN_1000a0f4(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10010c40)[param_1]);
  return;
}



// Function: FUN_1000a109 @ 0x1000a109

int * __cdecl FUN_1000a109(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000e4d0;
  puStack_10 = &LAB_1000d0b0;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_10017c48 == 3) {
        if (puVar2 <= DAT_100169f0) {
          FUN_1000a093(9);
          local_8 = 0;
          local_24 = FUN_1000b31b(puVar2);
          local_8 = 0xffffffff;
          FUN_1000a1a2();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1000a1f6;
LAB_1000a1e5:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1000a1f1:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10017c48 != 2) || (DAT_10012ea4 < puVar3)) goto LAB_1000a1f1;
        FUN_1000a093(9);
        local_8 = 1;
        local_24 = FUN_1000bac8((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1000a22b();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1000a1e5;
      }
LAB_1000a1f6:
      local_24 = HeapAlloc(DAT_10017c44,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10016890 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1000cf9a(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_1000a1a2 @ 0x1000a1a2

void FUN_1000a1a2(void)

{
  FUN_1000a0f4(9);
  return;
}



// Function: FUN_1000a22b @ 0x1000a22b

void FUN_1000a22b(void)

{
  FUN_1000a0f4(9);
  return;
}



// Function: FUN_1000a246 @ 0x1000a246

void __cdecl FUN_1000a246(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000e4e8;
  puStack_10 = &LAB_1000d0b0;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10017c48 == 3) {
    ExceptionList = &local_14;
    FUN_1000a093(9);
    local_8 = 0;
    local_20 = (uint *)FUN_1000afc7((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1000aff2(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_1000a2b0();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10017c48 != 2) goto LAB_1000a312;
    ExceptionList = &local_14;
    FUN_1000a093(9);
    local_8 = 1;
    local_28 = (uint *)FUN_1000ba2c(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_1000ba83(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000a308();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_1000a312:
  HeapFree(DAT_10017c44,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000a2b0 @ 0x1000a2b0

void FUN_1000a2b0(void)

{
  FUN_1000a0f4(9);
  return;
}



// Function: FUN_1000a308 @ 0x1000a308

void FUN_1000a308(void)

{
  FUN_1000a0f4(9);
  return;
}



// Function: _malloc @ 0x1000a32f

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10016890);
  return pvVar1;
}



// Function: __nh_malloc @ 0x1000a341

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_1000a36d((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1000cf9a(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_1000a36d @ 0x1000a36d

void __cdecl FUN_1000a36d(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000e500;
  puStack_10 = &LAB_1000d0b0;
  local_14 = ExceptionList;
  if (DAT_10017c48 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_100169f0) {
      ExceptionList = &local_14;
      FUN_1000a093(9);
      local_8 = 0;
      piVar1 = FUN_1000b31b(param_1);
      local_8 = 0xffffffff;
      FUN_1000a3d4();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10017c48 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10012ea4) {
        ExceptionList = &local_14;
        FUN_1000a093(9);
        local_8 = 1;
        piVar1 = FUN_1000bac8(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1000a433();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_1000a44c;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_1000a44c:
  HeapAlloc(DAT_10017c44,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000a3d4 @ 0x1000a3d4

void FUN_1000a3d4(void)

{
  FUN_1000a0f4(9);
  return;
}



// Function: FUN_1000a433 @ 0x1000a433

void FUN_1000a433(void)

{
  FUN_1000a0f4(9);
  return;
}



// Function: FUN_1000a469 @ 0x1000a469

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000a469(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_1000a093(0x19);
  CodePage = FUN_1000a616(param_1);
  if (CodePage != DAT_100169f4) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10010d90;
LAB_1000a4a6:
      if (*pUVar5 != CodePage) goto code_r0x1000a4aa;
      local_8 = 0;
      puVar15 = &DAT_10016b20;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10010da0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10010d88)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10016b20 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_10016a0c = 1;
      DAT_100169f4 = CodePage;
      DAT_10016c24 = FUN_1000a660(CodePage);
      DAT_10016a00 = *(undefined4 *)(iVar12 + 0x10010d94);
      DAT_10016a04 = *(undefined4 *)(iVar12 + 0x10010d98);
      DAT_10016a08 = *(undefined4 *)(iVar12 + 0x10010d9c);
      goto LAB_1000a5fa;
    }
    goto LAB_1000a5f5;
  }
  goto LAB_1000a490;
code_r0x1000a4aa:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10010e7f < (int)pUVar5) goto code_r0x1000a4b5;
  goto LAB_1000a4a6;
code_r0x1000a4b5:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10016c24 = 0;
    puVar15 = &DAT_10016b20;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10016a0c = 0;
      DAT_100169f4 = CodePage;
    }
    else {
      DAT_100169f4 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10016b20 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10016b20 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10016c24 = FUN_1000a660(CodePage);
      _DAT_10016a0c = 1;
    }
    DAT_10016a00 = 0;
    DAT_10016a04 = 0;
    DAT_10016a08 = 0;
  }
  else {
    if (DAT_10016830 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1000a607;
    }
LAB_1000a5f5:
    FUN_1000a693();
  }
LAB_1000a5fa:
  FUN_1000a6bc();
LAB_1000a490:
  uVar14 = 0;
LAB_1000a607:
  FUN_1000a0f4(0x19);
  return uVar14;
}



// Function: FUN_1000a616 @ 0x1000a616

int __cdecl FUN_1000a616(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10016830 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000a630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10016830 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000a645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10016868;
  }
  DAT_10016830 = (uint)bVar2;
  return param_1;
}



// Function: FUN_1000a660 @ 0x1000a660

undefined4 __cdecl FUN_1000a660(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}



// Function: FUN_1000a693 @ 0x1000a693

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a693(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10016b20;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_100169f4 = 0;
  _DAT_10016a0c = 0;
  DAT_10016c24 = 0;
  DAT_10016a00 = 0;
  DAT_10016a04 = 0;
  DAT_10016a08 = 0;
  return;
}



// Function: FUN_1000a6bc @ 0x1000a6bc

void FUN_1000a6bc(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_100169f4,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_1000c2fd(1,local_118,0x100,local_518,DAT_100169f4,DAT_10016c24,0);
    FUN_1000c446(DAT_10016c24,0x100,local_118,0x100,local_218,0x100,DAT_100169f4,0);
    FUN_1000c446(DAT_10016c24,0x200,local_118,0x100,local_318,0x100,DAT_100169f4,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10016b20 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000a7c8;
        }
        (&DAT_10016a20)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10016b20 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000a7c8:
        (&DAT_10016a20)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_10016b20 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000a812;
        }
        (&DAT_10016a20)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10016b20 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000a812:
        (&DAT_10016a20)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_1000a841 @ 0x1000a841

void FUN_1000a841(void)

{
  if (DAT_10017d68 == 0) {
    FUN_1000a469(-3);
    DAT_10017d68 = 1;
  }
  return;
}



// Function: FUN_1000a860 @ 0x1000a860

undefined4 * __cdecl FUN_1000a860(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1000aa17_caseD_2;
        case 3:
          goto switchD_1000aa17_caseD_3;
        }
        goto switchD_1000aa17_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000aa17_caseD_0;
      case 1:
        goto switchD_1000aa17_caseD_1;
      case 2:
        goto switchD_1000aa17_caseD_2;
      case 3:
        goto switchD_1000aa17_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000aa17_caseD_2;
            case 3:
              goto switchD_1000aa17_caseD_3;
            }
            goto switchD_1000aa17_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000aa17_caseD_2;
            case 3:
              goto switchD_1000aa17_caseD_3;
            }
            goto switchD_1000aa17_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000aa17_caseD_2;
            case 3:
              goto switchD_1000aa17_caseD_3;
            }
            goto switchD_1000aa17_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_1000aa17_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1000aa17_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1000aa17_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1000aa17_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_1000a895_caseD_2;
      case 3:
        goto switchD_1000a895_caseD_3;
      }
      goto switchD_1000a895_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000a895_caseD_0;
    case 1:
      goto switchD_1000a895_caseD_1;
    case 2:
      goto switchD_1000a895_caseD_2;
    case 3:
      goto switchD_1000a895_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000a895_caseD_2;
          case 3:
            goto switchD_1000a895_caseD_3;
          }
          goto switchD_1000a895_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000a895_caseD_2;
          case 3:
            goto switchD_1000a895_caseD_3;
          }
          goto switchD_1000a895_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000a895_caseD_2;
          case 3:
            goto switchD_1000a895_caseD_3;
          }
          goto switchD_1000a895_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_1000a895_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000a895_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000a895_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000a895_caseD_0:
  return param_1;
}



// Function: FUN_1000ab95 @ 0x1000ab95

void __thiscall FUN_1000ab95(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_1000abac(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_1000abac @ 0x1000abac

void * __thiscall FUN_1000abac(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  DWORD *pDVar6;
  void *this_00;
  byte bVar7;
  undefined *puVar8;
  void *local_c;
  byte *local_8;
  
  local_c = (void *)0x0;
  bVar7 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_10010c00 < 2) {
      uVar3 = (byte)PTR_DAT_100109f0[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_100109f0;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_1000944b(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1000ac07:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_1000ac07;
  if ((((int)param_3 < 0) || (param_3 == (void *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (void *)0x0;
  }
  this_00 = (void *)0x10;
  if (param_3 == (void *)0x0) {
    if (bVar7 != 0x30) {
      param_3 = (void *)0xa;
      goto LAB_1000ac71;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_1000ac71;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1000ac71:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10010c00 < 2) {
      uVar5 = (byte)PTR_DAT_100109f0[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_1000944b(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10010c00 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_100109f0 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1000944b(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_1000ad1d:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (void *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((void *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((void *)0x7fffffff < local_c)))))))) {
          pDVar6 = FUN_1000bff1();
          *pDVar6 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (void *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (void *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (void *)-(int)local_c;
      }
      uVar3 = FUN_1000d188((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_1000ad1d;
    if ((local_c < pvVar4) ||
       ((local_c == pvVar4 && (this_00 <= (void *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = (void *)((int)local_c * (int)param_3 + (int)this_00);
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar7 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}



// Function: _strchr @ 0x1000add0

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



// Function: _strstr @ 0x1000ae90

/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  
  cVar3 = *_SubStr;
  if (cVar3 == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    while (((uint)_Str & 3) != 0) {
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      _Str = (char *)((int)_Str + 1);
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = *(uint *)_Str;
        uVar7 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar6 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar9 = (uint *)((int)_Str + 4);
        if (((uVar7 ^ 0xffffffff ^ uVar7 + 0x7efefeff) & 0x81010100) != 0) break;
        _Str = (char *)puVar9;
        if ((uVar6 & 0x81010100) != 0) {
          if ((uVar6 & 0x1010100) != 0) {
            return (char *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (char *)0x0;
          }
        }
      }
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 8);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 1);
      }
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 0x10);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 2);
      }
      if (cVar5 == '\0') break;
      cVar5 = (char)(uVar4 >> 0x18);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 3);
      }
      _Str = (char *)puVar9;
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
    }
    return (char *)0x0;
  }
  do {
    cVar5 = *_Str;
    do {
      while (_Str = _Str + 1, cVar5 != cVar3) {
        if (cVar5 == '\0') {
          return (char *)0x0;
        }
        cVar5 = *_Str;
      }
      cVar5 = *_Str;
      pcVar10 = _Str + 1;
      pcVar8 = _SubStr;
    } while (cVar5 != _SubStr[1]);
    do {
      if (pcVar8[2] == '\0') {
LAB_1000af03:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_1000af03;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x1000af10

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}



// Function: FUN_1000af50 @ 0x1000af50

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000af50(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



// Function: FUN_1000af7f @ 0x1000af7f

undefined4 __cdecl FUN_1000af7f(undefined4 param_1)

{
  DAT_100169ec = HeapAlloc(DAT_10017c44,0,0x140);
  if (DAT_100169ec == (LPVOID)0x0) {
    return 0;
  }
  DAT_100169e4 = 0;
  DAT_100169e8 = 0;
  DAT_100169e0 = DAT_100169ec;
  DAT_100169f0 = param_1;
  DAT_100169d8 = 0x10;
  return 1;
}



// Function: FUN_1000afc7 @ 0x1000afc7

uint __cdecl FUN_1000afc7(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_100169ec;
  while( true ) {
    if (DAT_100169ec + DAT_100169e8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000aff2 @ 0x1000aff2

void __cdecl FUN_1000aff2(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) =
           *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) =
           *(undefined4 *)((int)puVar12 + uVar13 + 7);
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_100169e4 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_100169dc * 0x8000 + DAT_100169e4[3]),0x8000,0x4000);
        DAT_100169e4[2] = DAT_100169e4[2] | 0x80000000U >> ((byte)DAT_100169dc & 0x1f);
        *(undefined4 *)(DAT_100169e4[4] + 0xc4 + DAT_100169dc * 4) = 0;
        *(char *)(DAT_100169e4[4] + 0x43) = *(char *)(DAT_100169e4[4] + 0x43) + -1;
        if (*(char *)(DAT_100169e4[4] + 0x43) == '\0') {
          DAT_100169e4[1] = DAT_100169e4[1] & 0xfffffffe;
        }
        if (DAT_100169e4[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_100169e4[3],0,0x8000);
          HeapFree(DAT_10017c44,0,(LPVOID)DAT_100169e4[4]);
          FUN_10009cc0(DAT_100169e4,DAT_100169e4 + 5,
                       (DAT_100169e8 * 0x14 - (int)DAT_100169e4) + -0x14 + DAT_100169ec);
          DAT_100169e8 = DAT_100169e8 + -1;
          if (DAT_100169e4 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_100169e0 = DAT_100169ec;
        }
      }
      DAT_100169e4 = param_1;
      DAT_100169dc = uVar14;
    }
  }
  return;
}



// Function: FUN_1000b31b @ 0x1000b31b

int * __cdecl FUN_1000b31b(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_100169ec + DAT_100169e8 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_100169e0;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_100169ec;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_100169e0 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_100169e0) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_100169ec;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_100169e0 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_100169e0) && (param_1 = FUN_1000b624(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_1000b6d5((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_100169e0 = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_1000b5e1;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_1000b5e1:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_100169e4)) && (local_8 == DAT_100169dc)) {
    DAT_100169e4 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_1000b624 @ 0x1000b624

undefined4 * FUN_1000b624(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_100169e8 == DAT_100169d8) {
    pvVar2 = HeapReAlloc(DAT_10017c44,0,DAT_100169ec,(DAT_100169d8 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100169d8 = DAT_100169d8 + 0x10;
    DAT_100169ec = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_100169ec + DAT_100169e8 * 0x14);
  pvVar2 = HeapAlloc(DAT_10017c44,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_100169e8 = DAT_100169e8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10017c44,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_1000b6d5 @ 0x1000b6d5

int __cdecl FUN_1000b6d5(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}



// Function: FUN_1000b7d0 @ 0x1000b7d0

undefined ** FUN_1000b7d0(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10010e90 == -1) {
    lpMem = &PTR_LOOP_10010e80;
  }
  else {
    lpMem = HeapAlloc(DAT_10017c44,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10010e80) {
        if (PTR_LOOP_10010e80 == (undefined *)0x0) {
          PTR_LOOP_10010e80 = (undefined *)&PTR_LOOP_10010e80;
        }
        if (PTR_LOOP_10010e84 == (undefined *)0x0) {
          PTR_LOOP_10010e84 = (undefined *)&PTR_LOOP_10010e80;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10010e80;
        lpMem[1] = PTR_LOOP_10010e84;
        PTR_LOOP_10010e84 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_10010e80) {
    HeapFree(DAT_10017c44,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_1000b914 @ 0x1000b914

void __cdecl FUN_1000b914(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10012ea0 == param_1) {
    PTR_LOOP_10012ea0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10010e80) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10017c44,0,param_1);
    return;
  }
  DAT_10010e90 = 0xffffffff;
  return;
}



// Function: FUN_1000b96a @ 0x1000b96a

void __cdecl FUN_1000b96a(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_10010e84;
  do {
    ppuVar5 = ppuVar4;
    if (ppuVar4[4] != (undefined *)0xffffffff) {
      local_8 = 0;
      ppuVar5 = ppuVar4 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar4[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_10016834 = DAT_10016834 + -1;
            if (((undefined **)ppuVar4[3] == (undefined **)0x0) || (ppuVar5 < ppuVar4[3])) {
              ppuVar4[3] = (undefined *)ppuVar5;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar4[1];
      if ((local_8 != 0) && (ppuVar4[6] == (undefined *)0xffffffff)) {
        ppuVar2 = ppuVar4 + 8;
        iVar3 = 1;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_1000b914(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10010e84) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_1000ba2c @ 0x1000ba2c

int __cdecl FUN_1000ba2c(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10010e80;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10010e80) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



// Function: FUN_1000ba83 @ 0x1000ba83

void __cdecl FUN_1000ba83(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10016834 = DAT_10016834 + 1, DAT_10016834 == 0x20)) {
    FUN_1000b96a(0x10);
  }
  return;
}



// Function: FUN_1000bac8 @ 0x1000bac8

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_1000bac8(uint param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar7 = (int *)PTR_LOOP_10012ea0;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_1000bcd0(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_1000bb93;
            puVar8[1] = param_1;
          }
          puVar8 = puVar8 + 2;
          piVar4 = piVar4 + 0x400;
        } while (puVar8 < piVar7 + 0x806);
      }
      puVar1 = (uint *)piVar7[2];
      piVar4 = (int *)piVar7[4];
      for (puVar8 = (uint *)(piVar7 + 6); puVar8 < puVar1; puVar8 = puVar8 + 2) {
        if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
          piVar5 = (int *)FUN_1000bcd0(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_1000bb93:
            PTR_LOOP_10012ea0 = (undefined *)piVar7;
            *puVar8 = *puVar8 - param_1;
            piVar7[2] = (int)puVar8;
            return piVar5;
          }
          puVar8[1] = param_1;
        }
        piVar4 = piVar4 + 0x400;
      }
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)PTR_LOOP_10012ea0) {
      ppuVar9 = &PTR_LOOP_10010e80;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10010e80) {
          ppuVar9 = FUN_1000b7d0();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10012ea0 = (undefined *)ppuVar9;
          *piVar7 = (int)piVar7 + param_1 + 8;
          piVar7[1] = 0xf0 - param_1;
          ppuVar9[6] = ppuVar9[6] + -(param_1 & 0xff);
          return piVar7 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar7 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar3 = *ppuVar2;
      ppuVar6 = ppuVar2;
      for (; (puVar3 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar6 = ppuVar6 + 2;
        puVar3 = *ppuVar6;
      }
      piVar4 = VirtualAlloc(piVar7,local_8 << 0xc,0x1000,4);
      if (piVar4 != piVar7) {
        return (int *)0x0;
      }
      _memset(piVar7,local_8 << 0xc,0);
      ppuVar6 = ppuVar2;
      if (0 < local_8) {
        piVar4 = piVar7 + 1;
        do {
          *(undefined1 *)(piVar4 + 0x3d) = 0xff;
          piVar4[-1] = (int)(piVar4 + 1);
          *piVar4 = 0xf0;
          *ppuVar6 = (undefined *)0xf0;
          ppuVar6[1] = (undefined *)0xf1;
          piVar4 = piVar4 + 0x400;
          ppuVar6 = ppuVar6 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar6 < ppuVar9 + 0x806 && (*ppuVar6 != (undefined *)0xffffffff));
          ppuVar6 = ppuVar6 + 2) {
      }
      PTR_LOOP_10012ea0 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar6 < ppuVar9 + 0x806) & (uint)ppuVar6);
      *(char *)(piVar7 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar7[1] = piVar7[1] - param_1;
      *piVar7 = (int)piVar7 + param_1 + 8;
      return piVar7 + 0x40;
    }
  } while( true );
}



// Function: FUN_1000bcd0 @ 0x1000bcd0

int __cdecl FUN_1000bcd0(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar3 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar6 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar6 = pbVar2 + param_1[1];
    }
    while( true ) {
      while( true ) {
        if (pbVar1 <= pbVar6 + param_3) {
          pbVar6 = (byte *)(param_1 + 2);
          while( true ) {
            while( true ) {
              if (pbVar2 <= pbVar6) {
                return 0;
              }
              if (pbVar1 <= pbVar6 + param_3) {
                return 0;
              }
              if (*pbVar6 == 0) break;
              pbVar6 = pbVar6 + *pbVar6;
            }
            uVar5 = 1;
            pbVar4 = pbVar6;
            while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
              uVar5 = uVar5 + 1;
            }
            if (param_3 <= uVar5) break;
            param_2 = param_2 - uVar5;
            pbVar6 = pbVar4;
            if (param_2 < param_3) {
              return 0;
            }
          }
          if (pbVar6 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar6 = bVar3;
          pbVar2 = pbVar6 + 8;
          goto LAB_1000bde3;
        }
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + *pbVar6;
      }
      uVar5 = 1;
      pbVar4 = pbVar6;
      while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
        uVar5 = uVar5 + 1;
      }
      if (param_3 <= uVar5) break;
      if (pbVar6 == pbVar2) {
        param_1[1] = uVar5;
        pbVar6 = pbVar4;
      }
      else {
        param_2 = param_2 - uVar5;
        pbVar6 = pbVar4;
        if (param_2 < param_3) {
          return 0;
        }
      }
    }
    if (pbVar6 + param_3 < pbVar1) {
      *param_1 = (int)(pbVar6 + param_3);
      param_1[1] = uVar5 - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    *pbVar6 = bVar3;
    pbVar2 = pbVar6 + 8;
  }
  else {
    *pbVar2 = bVar3;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
  }
LAB_1000bde3:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_1000bdf4 @ 0x1000bdf4

int __cdecl FUN_1000bdf4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10016838 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10016838 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10016838 != (FARPROC)0x0) {
        DAT_1001683c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10016840 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000be43;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000be43:
    if (DAT_1001683c != (FARPROC)0x0) {
      iVar1 = (*DAT_1001683c)();
      if ((iVar1 != 0) && (DAT_10016840 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10016840)(iVar1);
      }
    }
    iVar1 = (*DAT_10016838)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x1000be80

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1000bebe;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000befb;
        goto LAB_1000bf69;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1000bf65:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1000bf69:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000befb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1000bf65;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1000bf65;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1000bf65;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000bebe:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1000befb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_1000bf7e @ 0x1000bf7e

void __cdecl FUN_1000bf7e(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000bffa();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10012eb0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000bff1();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10012eb4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10013018);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000bff1();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000bff1();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000bff1();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_1000bff1 @ 0x1000bff1

DWORD * FUN_1000bff1(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100080c8();
  return pDVar1 + 2;
}



// Function: FUN_1000bffa @ 0x1000bffa

DWORD * FUN_1000bffa(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100080c8();
  return pDVar1 + 3;
}



// Function: FUN_1000c003 @ 0x1000c003

undefined4 __cdecl FUN_1000c003(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10017d60) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10017c60)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10016674 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000c05f;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000c05f:
      *(undefined4 *)((&DAT_10017c60)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000bff1();
  *pDVar2 = 9;
  pDVar2 = FUN_1000bffa();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_1000c082 @ 0x1000c082

undefined4 __cdecl FUN_1000c082(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10017d60) &&
     ((*(byte *)((&DAT_10017c60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10017c60)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000bff1();
  *pDVar1 = 9;
  pDVar1 = FUN_1000bffa();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_1000c0c4 @ 0x1000c0c4

void __cdecl FUN_1000c0c4(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10017c60)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000a093(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000a0f4(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10017c60)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_1000c123 @ 0x1000c123

void __cdecl FUN_1000c123(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10017c60)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_1000c1c6 @ 0x1000c1c6

int __cdecl FUN_1000c1c6(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000c1f4(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000d340(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_1000c1f4 @ 0x1000c1f4

undefined4 __cdecl FUN_1000c1f4(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10008cf5(param_1[4],(char *)param_1[2],uVar3);
      if (uVar1 == uVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}



// Function: FUN_1000c259 @ 0x1000c259

int __cdecl FUN_1000c259(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_1000a093(2);
  iVar4 = 0;
  if (0 < DAT_10017c40) {
    do {
      iVar2 = *(int *)(DAT_10016c28 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1000903d(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10016c28 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000c1c6(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1000c1c6(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_1000908f(iVar4,*(int *)(DAT_10016c28 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10017c40);
  }
  FUN_1000a0f4(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_1000c2fd @ 0x1000c2fd

BOOL __cdecl
FUN_1000c2fd(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000e560;
  puStack_10 = &LAB_1000d0b0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10016884;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10016884 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_10016884 = iVar3;
  if (DAT_10016884 != 2) {
    if (DAT_10016884 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10016868;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_1000af50();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_10016858;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_1000c446 @ 0x1000c446

int __cdecl
FUN_1000c446(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000e570;
  puStack_10 = &LAB_1000d0b0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10016888 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10016888 = 2;
    }
    else {
      DAT_10016888 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000c66a(param_3,param_4);
  }
  if (DAT_10016888 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10016888 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10016868;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_1000af50();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1000af50();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}



// Function: FUN_1000c66a @ 0x1000c66a

int __cdecl FUN_1000c66a(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



// Function: FUN_1000c695 @ 0x1000c695

undefined4 __cdecl FUN_1000c695(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



// Function: ___add_12 @ 0x1000c6b6

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000c695(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1000c695(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1000c695(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1000c695(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_1000c714 @ 0x1000c714

void __cdecl FUN_1000c714(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}



// Function: FUN_1000c742 @ 0x1000c742

void __cdecl FUN_1000c742(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_1000c76f @ 0x1000c76f

void __cdecl FUN_1000c76f(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_1000c714(puVar1);
      FUN_1000c714(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1000c714(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_1000c714(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_1000c836 @ 0x1000c836

undefined4 __thiscall
FUN_1000c836(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_1000c88d:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1000c8aa:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000cacf;
    }
    if (bVar6 == DAT_10010c04) goto LAB_1000c8b9;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000cba9;
    }
    goto LAB_1000c88d;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1000c8aa;
    iVar9 = iVar1;
    if (bVar6 != DAT_10010c04) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000c93e;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000c917;
    }
    goto LAB_1000c88d;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1000c8aa;
    if (bVar6 == DAT_10010c04) {
LAB_1000c8b9:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000cbae;
    }
    goto LAB_1000c88d;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10010c00 < 2) {
        uVar3 = (byte)PTR_DAT_100109f0[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_100109f0;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1000944b(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_10010c04) goto LAB_1000ca2b;
    goto LAB_1000c88d;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_10010c00 < 2) {
        uVar3 = (byte)PTR_DAT_100109f0[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_100109f0;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1000944b(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_1000ca2b:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000c93e:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000c917:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000cba9;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1000c88d;
  case 5:
    local_28 = iVar5;
    if (DAT_10010c00 < 2) {
      uVar3 = (byte)PTR_DAT_100109f0[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_100109f0;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1000944b(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000cacf;
    goto LAB_1000cbae;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000cb04;
      if (bVar6 == 0x2d) goto LAB_1000caf8;
      if (bVar6 != 0x30) goto LAB_1000cbae;
LAB_1000ca9d:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1000c88d;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1000ca9d;
      goto LAB_1000cbae;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000cba9;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000cb2f;
  default:
    goto switchD_1000c899_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000cb04:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1000cbae;
LAB_1000caf8:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1000c88d;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1000c899_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1000c88d;
    goto LAB_1000cbae;
  }
  iVar9 = 9;
LAB_1000cacf:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1000c88d;
LAB_1000cb2f:
  if (DAT_10010c00 < 2) {
    uVar3 = (byte)PTR_DAT_100109f0[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_100109f0;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_1000944b(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1000cb79;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1000cb71;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000cb2f;
LAB_1000cb71:
  pbVar7 = (byte *)0x1451;
LAB_1000cb79:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10010c00 < 2) {
      uVar3 = (byte)PTR_DAT_100109f0[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_100109f0;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1000944b(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000cba9:
  pbVar7 = pbVar8 + -1;
LAB_1000cbae:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000ccbc;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_1000c76f(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_1000d70a((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1000cc41;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_1000cc41:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_1000ccbc:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_1000cd07 @ 0x1000cd07

undefined4 __cdecl
FUN_1000cd07(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000cdfc;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000cdfc:
            pcVar11 = "1#QNAN";
            goto LAB_1000ce01;
          }
          pcVar11 = "1#IND";
        }
        FUN_10009b70((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1000ce01:
        FUN_10009b70((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                   0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_1000d70a((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000d4ea((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_1000c714((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1000c742((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_1000c714((uint *)&local_14);
          FUN_1000c714((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1000c714((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_1000cf59;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000cf59:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000cf5b:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000cf5b;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1000cf91;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1000cf91:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_1000cf9a @ 0x1000cf9a

undefined4 __cdecl FUN_1000cf9a(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1001688c != (code *)0x0) {
    iVar1 = (*DAT_1001688c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: __global_unwind2 @ 0x1000cfb8

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000cfd0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000cffa

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_1000cfd8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000d08e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_1000d08e @ 0x1000d08e

void FUN_1000d08e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1001312c = *(undefined4 *)(unaff_EBP + 8);
  DAT_10013128 = in_EAX;
  DAT_10013130 = unaff_EBP;
  return;
}



// Function: FUN_1000d16d @ 0x1000d16d

void FUN_1000d16d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_1000d188 @ 0x1000d188

uint __cdecl FUN_1000d188(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10016858 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100169d4);
    bVar1 = DAT_100169d0 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_100169d4);
      this = (void *)0x13;
      FUN_1000a093(0x13);
    }
    param_1 = FUN_1000d1f7(this,param_1);
    if (bVar1) {
      FUN_1000a0f4(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_100169d4);
    }
  }
  return param_1;
}



// Function: FUN_1000d1f7 @ 0x1000d1f7

uint __thiscall FUN_1000d1f7(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10016858 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10010c00 < 2) {
        uVar2 = (byte)PTR_DAT_100109f0[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1000944b(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_100109f0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000c446(DAT_10016858,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



// Function: FUN_1000d2c3 @ 0x1000d2c3

undefined4 __cdecl FUN_1000d2c3(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_1000900e((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10009060((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// Function: __fclose_lk @ 0x1000d2f4

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_1000c1f4((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_1000d786(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_1000a246(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// Function: FUN_1000d340 @ 0x1000d340

undefined4 __cdecl FUN_1000d340(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10017d60 <= param_1) {
LAB_1000d3c1:
    pDVar3 = FUN_1000bff1();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10017c60)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000d3c1;
  FUN_1000c0c4(param_1);
  if ((*(byte *)((&DAT_10017c60)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000c082(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000d3b6;
    pDVar3 = FUN_1000bffa();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000bff1();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000d3b6:
  FUN_1000c123(param_1);
  return uVar5;
}



// Function: FUN_1000d470 @ 0x1000d470

int __cdecl FUN_1000d470(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}



// Function: FUN_1000d4b0 @ 0x1000d4b0

byte * __cdecl FUN_1000d4b0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}



// Function: FUN_1000d4ea @ 0x1000d4ea

void __cdecl FUN_1000d4ea(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_1000d58d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000d58d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1000c695(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 (uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_1000d641:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1000c742((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_1000c714((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000d641;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22),
         iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_1000d6ea;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000d6ea:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_1000d70a @ 0x1000d70a

void __cdecl FUN_1000d70a(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_100131e0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10013340;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        ppuVar4 = ppuVar3 + uVar2 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar2 * 3)) {
          local_10 = SUB42(*ppuVar4,0);
          local_e._0_2_ = (undefined2)((uint)*ppuVar4 >> 0x10);
          local_e._2_2_ = SUB42(ppuVar4[1],0);
          uStack_a = (undefined2)((uint)ppuVar4[1] >> 0x10);
          puStack_8 = ppuVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          ppuVar4 = (undefined **)&local_10;
        }
        FUN_1000d4ea(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: FUN_1000d786 @ 0x1000d786

undefined4 __cdecl FUN_1000d786(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10017d60) &&
     ((*(byte *)((&DAT_10017c60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c0c4(param_1);
    uVar1 = FUN_1000d7e3(param_1);
    FUN_1000c123(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000bff1();
  *pDVar2 = 9;
  pDVar2 = FUN_1000bffa();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_1000d7e3 @ 0x1000d7e3

undefined4 __cdecl FUN_1000d7e3(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000c082(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000c082(2);
      iVar2 = FUN_1000c082(1);
      if (iVar2 == iVar1) goto LAB_1000d831;
    }
    hObject = (HANDLE)FUN_1000c082(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000d833;
    }
  }
LAB_1000d831:
  DVar4 = 0;
LAB_1000d833:
  FUN_1000c003(param_1);
  *(undefined1 *)((&DAT_10017c60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000bf7e(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: __freebuf @ 0x1000d866

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_1000a246(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Function: FUN_1000d8a0 @ 0x1000d8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000d8a0(void *this,byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = _DAT_100169d4;
  if (DAT_10016858 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000d8ee;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1000d8ee:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_100169d4 = _DAT_100169d4 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_100169d0;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_100169d4 = iVar2;
      FUN_1000a093(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000d94f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000952f(this,uVar8);
      uVar7 = FUN_1000952f(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000d94f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_100169d4 = _DAT_100169d4 + -1;
      UNLOCK();
    }
    else {
      FUN_1000a0f4(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1000d970 @ 0x1000d970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000d970(byte *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_100169d4;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10016858 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_1000d9cf;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000d9cf:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_100169d4 = _DAT_100169d4 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_100169d0;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_100169d4 = iVar2;
        FUN_1000a093(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_1000952f(param_3,uVar7);
        uVar5 = FUN_1000952f(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000da45;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000da45:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_100169d4 = _DAT_100169d4 + -1;
        UNLOCK();
      }
      else {
        FUN_1000a0f4(0x13);
      }
    }
  }
  return uVar6;
}



