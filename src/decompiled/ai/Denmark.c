// Decompiled from: Denmark.dll

// Function: ProcessAI @ 0x10001000

void ProcessAI(void)

{
                    /* 0x1000  2  ProcessAI */
  DAT_1000c2cc = (*DAT_1000c518)();
  FUN_10006d40();
  return;
}



// Function: InitAI @ 0x10001010

void InitAI(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_60 [48];
  char acStack_30 [48];
  
                    /* 0x1010  1  InitAI */
  if ((((DAT_1000c414 != (code *)0x0) &&
       ((*DAT_1000c414)(&DAT_1000c0a0,s_KUZ04DA_10008ea4), DAT_1000c414 != (code *)0x0)) &&
      ((*DAT_1000c414)(&DAT_1000c040,s_AKA35DA_10008e9c), DAT_1000c414 != (code *)0x0)) &&
     ((*DAT_1000c414)(&DAT_1000c098,s_AKA36DA_10008e94), DAT_1000c414 != (code *)0x0)) {
    (*DAT_1000c414)(&DAT_1000c0a8,s_AKA32DA_10008e8c);
  }
  if (DAT_1000c410 != (code *)0x0) {
    (*DAT_1000c410)(&DAT_100096a8,s_Dragun_DA__10008e80);
  }
  if ((((((DAT_1000c414 != (code *)0x0) &&
         ((*DAT_1000c414)(&DAT_10009918,s_Dragun_DA_ATTACK_10008e6c), DAT_1000c414 != (code *)0x0))
        && (((*DAT_1000c414)(&DAT_10009910,s_Dragun_DA_ATTACK3_10008e58),
            DAT_1000c414 != (code *)0x0 &&
            (((*DAT_1000c414)(&DAT_10009908,s_Dragun_DA_ATTACK4_10008e44),
             DAT_1000c414 != (code *)0x0 &&
             ((*DAT_1000c414)(&DAT_10009950,s_Dragun_DA_ATTACK5_10008e30),
             DAT_1000c414 != (code *)0x0)))))) &&
       ((*DAT_1000c414)(&DAT_10009940,s_Dragun_DA_ATTACK6_10008e1c), DAT_1000c414 != (code *)0x0))
      && ((((((*DAT_1000c414)(&DAT_10009938,s_Dragun_DA_ATTACK7_10008e08),
             DAT_1000c414 != (code *)0x0 &&
             ((*DAT_1000c414)(&DAT_100096f0,s_Dragun_DA_SHIELD_10008df4),
             DAT_1000c414 != (code *)0x0)) &&
            ((*DAT_1000c414)(&DAT_100096e0,s_Dragun_DA_SHIELD3_10008de0),
            DAT_1000c414 != (code *)0x0)) &&
           (((*DAT_1000c414)(&DAT_100098d8,s_Dragun_DA_SHIELD4_10008dcc),
            DAT_1000c414 != (code *)0x0 &&
            ((*DAT_1000c414)(&DAT_100098d0,s_Dragun_DA_SHIELD5_10008db8),
            DAT_1000c414 != (code *)0x0)))) &&
          (((*DAT_1000c414)(&DAT_100098c8,s_Dragun_DA_SHIELD6_10008da4), DAT_1000c414 != (code *)0x0
           && (((*DAT_1000c414)(&DAT_100098c0,s_Dragun_DA_SHIELD7_10008d90),
               DAT_1000c414 != (code *)0x0 &&
               ((*DAT_1000c414)(&DAT_10009918,s_Dragun_DA_ATTACK_10008e6c),
               DAT_1000c414 != (code *)0x0)))))))) &&
     ((((*DAT_1000c414)(&DAT_10009910,s_Dragun_DA_ATTACK3_10008e58), DAT_1000c414 != (code *)0x0 &&
       ((((*DAT_1000c414)(&DAT_10009908,s_Dragun_DA_ATTACK4_10008e44), DAT_1000c414 != (code *)0x0
         && ((*DAT_1000c414)(&DAT_10009950,s_Dragun_DA_ATTACK5_10008e30),
            DAT_1000c414 != (code *)0x0)) &&
        ((*DAT_1000c414)(&DAT_10009940,s_Dragun_DA_ATTACK6_10008e1c), DAT_1000c414 != (code *)0x0)))
       ) && (((((*DAT_1000c414)(&DAT_10009938,s_Dragun_DA_ATTACK7_10008e08),
               DAT_1000c414 != (code *)0x0 &&
               ((*DAT_1000c414)(&DAT_100096f0,s_Dragun_DA_SHIELD_10008df4),
               DAT_1000c414 != (code *)0x0)) &&
              (((*DAT_1000c414)(&DAT_100096e0,s_Dragun_DA_SHIELD3_10008de0),
               DAT_1000c414 != (code *)0x0 &&
               (((*DAT_1000c414)(&DAT_100098d8,s_Dragun_DA_SHIELD4_10008dcc),
                DAT_1000c414 != (code *)0x0 &&
                ((*DAT_1000c414)(&DAT_100098d0,s_Dragun_DA_SHIELD5_10008db8),
                DAT_1000c414 != (code *)0x0)))))) &&
             ((*DAT_1000c414)(&DAT_100098c8,s_Dragun_DA_SHIELD6_10008da4),
             DAT_1000c414 != (code *)0x0)))))) {
    (*DAT_1000c414)(&DAT_100098c0,s_Dragun_DA_SHIELD7_10008d90);
  }
  if (DAT_1000c410 != (code *)0x0) {
    (*DAT_1000c410)(&DAT_10009698,s_Dragun_18_DA__10008d80);
  }
  if ((((((DAT_1000c414 != (code *)0x0) &&
         ((*DAT_1000c414)(&DAT_10009670,s_Dragun_18_DA_ATTACK_10008d6c), DAT_1000c414 != (code *)0x0
         )) && ((*DAT_1000c414)(&DAT_10009668,s_Dragun_18_DA_ATTACK3_10008d54),
               DAT_1000c414 != (code *)0x0)) &&
       (((*DAT_1000c414)(&DAT_10009660,s_Dragun_18_DA_ATTACK4_10008d3c), DAT_1000c414 != (code *)0x0
        && ((*DAT_1000c414)(&DAT_1000c330,s_Dragun_18_DA_ATTACK5_10008d24),
           DAT_1000c414 != (code *)0x0)))) &&
      (((*DAT_1000c414)(&DAT_1000c328,s_Dragun_18_DA_ATTACK6_10008d0c), DAT_1000c414 != (code *)0x0
       && (((*DAT_1000c414)(&DAT_1000c320,s_Dragun_18_DA_ATTACK7_10008cf4),
           DAT_1000c414 != (code *)0x0 &&
           ((*DAT_1000c414)(&DAT_1000c3a8,s_Dragun_18_DA_SHIELD_10008ce0),
           DAT_1000c414 != (code *)0x0)))))) &&
     ((((*DAT_1000c414)(&DAT_1000c3a0,s_Dragun_18_DA_SHIELD3_10008cc8), DAT_1000c414 != (code *)0x0
       && ((((*DAT_1000c414)(&DAT_1000c3f0,s_Dragun_18_DA_SHIELD4_10008cb0),
            DAT_1000c414 != (code *)0x0 &&
            ((*DAT_1000c414)(&DAT_1000c3e8,s_Dragun_18_DA_SHIELD5_10008c98),
            DAT_1000c414 != (code *)0x0)) &&
           ((*DAT_1000c414)(&DAT_1000c3e0,s_Dragun_18_DA_SHIELD6_10008c80),
           DAT_1000c414 != (code *)0x0)))) &&
      (((((*DAT_1000c414)(&DAT_1000c3d8,s_Dragun_18_DA_SHIELD7_10008c68),
         DAT_1000c414 != (code *)0x0 &&
         ((*DAT_1000c414)(&DAT_10009670,s_Dragun_18_DA_ATTACK_10008d6c), DAT_1000c414 != (code *)0x0
         )) && ((((*DAT_1000c414)(&DAT_10009668,s_Dragun_18_DA_ATTACK3_10008d54),
                 DAT_1000c414 != (code *)0x0 &&
                 (((*DAT_1000c414)(&DAT_10009660,s_Dragun_18_DA_ATTACK4_10008d3c),
                  DAT_1000c414 != (code *)0x0 &&
                  ((*DAT_1000c414)(&DAT_1000c330,s_Dragun_18_DA_ATTACK5_10008d24),
                  DAT_1000c414 != (code *)0x0)))) &&
                ((*DAT_1000c414)(&DAT_1000c328,s_Dragun_18_DA_ATTACK6_10008d0c),
                DAT_1000c414 != (code *)0x0)))) &&
       (((((*DAT_1000c414)(&DAT_1000c320,s_Dragun_18_DA_ATTACK7_10008cf4),
          DAT_1000c414 != (code *)0x0 &&
          ((*DAT_1000c414)(&DAT_1000c3a8,s_Dragun_18_DA_SHIELD_10008ce0),
          DAT_1000c414 != (code *)0x0)) &&
         ((*DAT_1000c414)(&DAT_1000c3a0,s_Dragun_18_DA_SHIELD3_10008cc8),
         DAT_1000c414 != (code *)0x0)) &&
        ((((*DAT_1000c414)(&DAT_1000c3f0,s_Dragun_18_DA_SHIELD4_10008cb0),
          DAT_1000c414 != (code *)0x0 &&
          ((*DAT_1000c414)(&DAT_1000c3e8,s_Dragun_18_DA_SHIELD5_10008c98),
          DAT_1000c414 != (code *)0x0)) &&
         ((*DAT_1000c414)(&DAT_1000c3e0,s_Dragun_18_DA_SHIELD6_10008c80),
         DAT_1000c414 != (code *)0x0)))))))))) {
    (*DAT_1000c414)(&DAT_1000c3d8,s_Dragun_18_DA_SHIELD7_10008c68);
  }
  if (DAT_1000c410 != (code *)0x0) {
    (*DAT_1000c410)(&DAT_1000bff8,s_Sveshenik_evro_DA__10008c54);
  }
  DAT_1000c2cc = (*DAT_1000c518)();
  uVar4 = FUN_100026c0();
  iVar2 = DAT_1000c2cc;
  *(uint *)(&DAT_1000bfb0 + DAT_1000c2cc * 4) = uVar4 & 0x80;
  *(undefined4 *)(&DAT_10009b08 + iVar2 * 0x4b8) = 0;
  *(undefined4 *)(&DAT_10009c9c + iVar2 * 0x4b8) = 0;
  if (DAT_1000c414 != (code *)0x0) {
    (*DAT_1000c414)(&DAT_1000c0e8,s_Barabanshik_ev1_DA_SHIELD_10008c38);
  }
  if (DAT_1000c410 != (code *)0x0) {
    (*DAT_1000c410)(&DAT_100098a0,s_Dragun_18_DIP_DA__10008c24);
  }
  bVar3 = FUN_100026c0();
  pcVar7 = s_Dragun_DA__10008e80;
  if ((bVar3 & 6) != 2) {
    pcVar7 = s_Konni_Ricar_DA__10008c14;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = acStack_60;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = s_Grenader_DA__10008c04;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = acStack_30;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if (((DAT_1000c410 != (code *)0x0) &&
      ((*DAT_1000c410)(&DAT_1000c290,s_Strelec_Algir_DIP_DA__10008bec), DAT_1000c410 != (code *)0x0)
      ) && ((*DAT_1000c410)(&DAT_1000c340,s_Kozak_loshad_DIP_DA__10008bd4),
           DAT_1000c410 != (code *)0x0)) {
    (*DAT_1000c410)(&DAT_10009718,s_Officer_evro_DA__10008bc0);
  }
  if ((DAT_1000c414 != (code *)0x0) &&
     ((*DAT_1000c414)(&DAT_1000c278,s_Officer_evro_DA_ATTACK_10008ba8), DAT_1000c414 != (code *)0x0)
     ) {
    (*DAT_1000c414)(&DAT_1000bfe0,s_Officer_evro_DA_SHIELD_10008b90);
  }
  if (DAT_1000c410 != (code *)0x0) {
    (*DAT_1000c410)(&DAT_10009658,s_Barabanshik_ev1_DA__10008b7c);
  }
  FUN_10002690(s_Pikiner_evro_DA__10008b68);
  if ((((DAT_1000c410 != (code *)0x0) &&
       ((*DAT_1000c410)(&DAT_100096a0,s_Pikiner_evro_DA__10008b68), DAT_1000c410 != (code *)0x0)) &&
      ((*DAT_1000c410)(&DAT_1000c1a8,s_Kreposnoi_pruss_DA__10008b54), DAT_1000c410 != (code *)0x0))
     && ((*DAT_1000c410)(&DAT_1000c178,s_Grenader_DIP_DA__10008b40), DAT_1000c410 != (code *)0x0)) {
    (*DAT_1000c410)(&DAT_1000c0f8,s_Mushketer_ev_DA__10008b2c);
    if (((((DAT_1000c410 != (code *)0x0) &&
          ((*DAT_1000c410)(&DAT_1000c3c8,acStack_60), DAT_1000c410 != (code *)0x0)) &&
         (((*DAT_1000c410)(&DAT_1000c348,s_Kirasir_DA__10008b20), DAT_1000c410 != (code *)0x0 &&
          (((*DAT_1000c410)(&DAT_1000bf98,acStack_30), DAT_1000c410 != (code *)0x0 &&
           ((*DAT_1000c410)(&DAT_1000c388,s_Pushka_DA__10008b14), DAT_1000c410 != (code *)0x0))))))
        && ((((*DAT_1000c410)(&DAT_10009680,s_Mortira_DA__10008b08), DAT_1000c410 != (code *)0x0 &&
             ((((*DAT_1000c410)(&DAT_100098e0,s_Mortira_b_DA__10008af8), DAT_1000c410 != (code *)0x0
               && ((*DAT_1000c410)(&DAT_1000c208,s_Lodka_DA__10008aec), DAT_1000c410 != (code *)0x0)
               ) && ((*DAT_1000c410)(&DAT_1000bfd0,s_Europ_DA__10008ae0),
                    DAT_1000c410 != (code *)0x0)))) &&
            ((((*DAT_1000c410)(&DAT_1000bff0,s_Melnica_DA__10008ad4), DAT_1000c410 != (code *)0x0 &&
              ((*DAT_1000c410)(&DAT_1000c268,s_Kazarma_evro_DA__10008ac0),
              DAT_1000c410 != (code *)0x0)) &&
             (((*DAT_1000c410)(&DAT_1000c270,s_Kazarma_DA__10008ab4), DAT_1000c410 != (code *)0x0 &&
              (((*DAT_1000c410)(&DAT_1000bfe8,s_Sclad1_DA__10008aa8), DAT_1000c410 != (code *)0x0 &&
               ((*DAT_1000c410)(&DAT_1000bf38,s_akademia_E_DA__10008a98),
               DAT_1000c410 != (code *)0x0)))))))))) &&
       (((*DAT_1000c410)(&DAT_1000c0f0,s_Konushnia_Swesair_DA__10008a80),
        DAT_1000c410 != (code *)0x0 &&
        ((((((*DAT_1000c410)(&DAT_1000c000,s_Dip_korpus_DA__10008a70), DAT_1000c410 != (code *)0x0
            && ((*DAT_1000c410)(&DAT_10009630,s_artileri_depo_DA__10008a5c),
               DAT_1000c410 != (code *)0x0)) &&
           ((*DAT_1000c410)(&DAT_10009890,s_Rinok_DA__10008a50), DAT_1000c410 != (code *)0x0)) &&
          ((((*DAT_1000c410)(&DAT_100098f0,s_Bashnia_DA__10008a44), DAT_1000c410 != (code *)0x0 &&
            ((*DAT_1000c410)(&DAT_1000c200,s_Kuznica_DA__10008a38), DAT_1000c410 != (code *)0x0)) &&
           (((*DAT_1000c410)(&DAT_1000c110,s_Cercov_Poland_DA__10008a24),
            DAT_1000c410 != (code *)0x0 &&
            (((*DAT_1000c410)(&DAT_1000c2f0,s_PorE_DA__10008a18), DAT_1000c410 != (code *)0x0 &&
             ((*DAT_1000c410)(&DAT_10009900,s_Fregat_DA__10008a0c), DAT_1000c410 != (code *)0x0)))))
           ))) && (((*DAT_1000c410)(&DAT_1000bfa8,s_GALERA_DA__10008a00),
                   DAT_1000c410 != (code *)0x0 &&
                   (((*DAT_1000c410)(&DAT_1000c3b0,s_Linkor_DA__100089f4),
                    DAT_1000c410 != (code *)0x0 &&
                    ((*DAT_1000c410)(&DAT_1000bfa0,s_Yahta_DA__100089e8),
                    DAT_1000c410 != (code *)0x0)))))))))) {
      (*DAT_1000c410)(&DAT_100098b8,s_PERES_KOR_DA__100089d8);
    }
  }
  if (((((((((DAT_1000c414 != (code *)0x0) &&
            ((*DAT_1000c414)(&DAT_1000c390,s_Melnica_DA_GETRES_100089c4),
            DAT_1000c414 != (code *)0x0)) &&
           ((*DAT_1000c414)(&DAT_1000c118,s_Melnica_DA_GETRES2_100089b0),
           DAT_1000c414 != (code *)0x0)) &&
          (((*DAT_1000c414)(&DAT_10009678,s_KUZ01DA_100089a8), DAT_1000c414 != (code *)0x0 &&
           ((*DAT_1000c414)(&DAT_1000c368,s_Pikiner_evro_DA_ATTACK_10008990),
           DAT_1000c414 != (code *)0x0)))) &&
         ((*DAT_1000c414)(&DAT_1000c370,s_Pikiner_evro_DA_ATTACK3_10008978),
         DAT_1000c414 != (code *)0x0)) &&
        (((*DAT_1000c414)(&DAT_1000c358,s_Pikiner_evro_DA_ATTACK4_10008960),
         DAT_1000c414 != (code *)0x0 &&
         ((*DAT_1000c414)(&DAT_1000c360,s_Pikiner_evro_DA_ATTACK5_10008948),
         DAT_1000c414 != (code *)0x0)))) &&
       (((*DAT_1000c414)(&DAT_1000c378,s_Pikiner_evro_DA_ATTACK6_10008930),
        DAT_1000c414 != (code *)0x0 &&
        ((((*DAT_1000c414)(&DAT_1000c2b0,s_Pikiner_evro_DA_SHIELD_10008918),
          DAT_1000c414 != (code *)0x0 &&
          ((*DAT_1000c414)(&DAT_1000c298,s_Pikiner_evro_DA_SHIELD3_10008900),
          DAT_1000c414 != (code *)0x0)) &&
         ((*DAT_1000c414)(&DAT_1000c2a0,s_Pikiner_evro_DA_SHIELD4_100088e8),
         DAT_1000c414 != (code *)0x0)))))) &&
      (((((*DAT_1000c414)(&DAT_1000c2b8,s_Pikiner_evro_DA_SHIELD5_100088d0),
         DAT_1000c414 != (code *)0x0 &&
         ((*DAT_1000c414)(&DAT_1000c2c0,s_Pikiner_evro_DA_SHIELD6_100088b8),
         DAT_1000c414 != (code *)0x0)) &&
        ((*DAT_1000c414)(&DAT_10009928,s_Mushketer_ev_DA_ATTACK_100088a0),
        DAT_1000c414 != (code *)0x0)) &&
       (((*DAT_1000c414)(&DAT_10009930,s_Mushketer_ev_DA_ATTACK3_10008888),
        DAT_1000c414 != (code *)0x0 &&
        ((*DAT_1000c414)(&DAT_10009920,s_Mushketer_ev_DA_ATTACK4_10008870),
        DAT_1000c414 != (code *)0x0)))))) &&
     (((*DAT_1000c414)(&DAT_1000bf90,s_Mushketer_ev_DA_SHIELD_10008858), DAT_1000c414 != (code *)0x0
      && ((*DAT_1000c414)(&DAT_1000bf80,s_Mushketer_ev_DA_SHIELD3_10008840),
         DAT_1000c414 != (code *)0x0)))) {
    (*DAT_1000c414)(&DAT_1000bf88,s_Mushketer_ev_DA_SHIELD4_10008828);
  }
  puVar5 = FUN_10002f30(acStack_60,s_ATTACK_10008820);
  FUN_100026a0(&DAT_1000c030,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_ATTACK3_10008818);
  FUN_100026a0(&DAT_1000c028,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_ATTACK4_10008810);
  FUN_100026a0(&DAT_1000c020,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_ATTACK5_10008808);
  FUN_100026a0(&DAT_1000c018,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_ATTACK6_10008800);
  FUN_100026a0(&DAT_1000c010,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_ATTACK7_100087f8);
  FUN_100026a0(&DAT_1000c008,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_SHIELD_100087f0);
  FUN_100026a0(&DAT_1000c148,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_SHIELD3_100087e8);
  FUN_100026a0(&DAT_1000c140,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_SHIELD4_100087e0);
  FUN_100026a0(&DAT_1000c138,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_SHIELD5_100087d8);
  FUN_100026a0(&DAT_1000c130,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_SHIELD6_100087d0);
  FUN_100026a0(&DAT_1000c120,puVar5);
  puVar5 = FUN_10002f30(acStack_60,s_SHIELD7_100087c8);
  FUN_100026a0(&DAT_1000c170,puVar5);
  if (((((DAT_1000c414 != (code *)0x0) &&
        ((*DAT_1000c414)(&DAT_100096d0,s_Kirasir_DA_ATTACK_100087b4), DAT_1000c414 != (code *)0x0))
       && ((*DAT_1000c414)(&DAT_100096c8,s_Kirasir_DA_ATTACK3_100087a0), DAT_1000c414 != (code *)0x0
          )) && (((*DAT_1000c414)(&DAT_100096c0,s_Kirasir_DA_ATTACK4_1000878c),
                 DAT_1000c414 != (code *)0x0 &&
                 ((*DAT_1000c414)(&DAT_100096b8,s_Kirasir_DA_ATTACK5_10008778),
                 DAT_1000c414 != (code *)0x0)))) &&
     (((((*DAT_1000c414)(&DAT_10009690,s_Kirasir_DA_ATTACK6_10008764), DAT_1000c414 != (code *)0x0
        && (((*DAT_1000c414)(&DAT_10009688,s_Kirasir_DA_ATTACK7_10008750),
            DAT_1000c414 != (code *)0x0 &&
            ((*DAT_1000c414)(&DAT_10009760,s_Kirasir_DA_SHIELD_1000873c),
            DAT_1000c414 != (code *)0x0)))) &&
       ((*DAT_1000c414)(&DAT_10009758,s_Kirasir_DA_SHIELD3_10008728), DAT_1000c414 != (code *)0x0))
      && ((((*DAT_1000c414)(&DAT_10009750,s_Kirasir_DA_SHIELD4_10008714),
           DAT_1000c414 != (code *)0x0 &&
           ((*DAT_1000c414)(&DAT_10009738,s_Kirasir_DA_SHIELD5_10008700),
           DAT_1000c414 != (code *)0x0)) &&
          ((*DAT_1000c414)(&DAT_10009730,s_Kirasir_DA_SHIELD6_100086ec), DAT_1000c414 != (code *)0x0
          )))))) {
    (*DAT_1000c414)(&DAT_10009728,s_Kirasir_DA_SHIELD7_100086d8);
  }
  puVar5 = FUN_10002f30(acStack_30,s_ATTACK_10008820);
  FUN_100026a0(&DAT_100096f8,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_ATTACK3_10008818);
  FUN_100026a0(&DAT_10009700,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_ATTACK4_10008810);
  FUN_100026a0(&DAT_10009708,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_ATTACK5_10008808);
  FUN_100026a0(&DAT_10009710,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_ATTACK6_10008800);
  FUN_100026a0(&DAT_100096d8,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_ATTACK7_100087f8);
  FUN_100026a0(&DAT_100096e8,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_SHIELD_100087f0);
  FUN_100026a0(&DAT_100097a0,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_SHIELD3_100087e8);
  FUN_100026a0(&DAT_100097a8,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_SHIELD4_100087e0);
  FUN_100026a0(&DAT_100097b0,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_SHIELD5_100087d8);
  FUN_100026a0(&DAT_10009788,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_SHIELD6_100087d0);
  FUN_100026a0(&DAT_10009790,puVar5);
  puVar5 = FUN_10002f30(acStack_30,s_SHIELD7_100087c8);
  FUN_100026a0(&DAT_10009798,puVar5);
  if (((((((DAT_1000c414 != (code *)0x0) &&
          ((*DAT_1000c414)(&DAT_1000c1f0,s_Pushka_DA_BUILD_100086c8), DAT_1000c414 != (code *)0x0))
         && (((*DAT_1000c414)(&DAT_1000c1e8,s_Pushka_DA_BUILD3_100086b4),
             DAT_1000c414 != (code *)0x0 &&
             (((*DAT_1000c414)(&DAT_1000c1b8,s_Pushka_DA_BUILD4_100086a0),
              DAT_1000c414 != (code *)0x0 &&
              ((*DAT_1000c414)(&DAT_1000c1b0,s_Pushka_DA_BUILD5_1000868c),
              DAT_1000c414 != (code *)0x0)))))) &&
        (((*DAT_1000c414)(&DAT_1000c1c0,s_Pushka_DA_BUILD6_10008678), DAT_1000c414 != (code *)0x0 &&
         ((((((*DAT_1000c414)(&DAT_1000c0b0,s_Mortira_DA_BUILD_10008664),
             DAT_1000c414 != (code *)0x0 &&
             ((*DAT_1000c414)(&DAT_1000c0b8,s_Mortira_DA_BUILD3_10008650),
             DAT_1000c414 != (code *)0x0)) &&
            ((*DAT_1000c414)(&DAT_1000c0c0,s_Mortira_DA_BUILD4_1000863c),
            DAT_1000c414 != (code *)0x0)) &&
           (((*DAT_1000c414)(&DAT_1000c0c8,s_Mortira_DA_BUILD5_10008628),
            DAT_1000c414 != (code *)0x0 &&
            ((*DAT_1000c414)(&DAT_1000c1d0,s_KUZ03DA_10008620), DAT_1000c414 != (code *)0x0)))) &&
          (((*DAT_1000c414)(&DAT_1000c038,s_MAINDA_10008618), DAT_1000c414 != (code *)0x0 &&
           (((*DAT_1000c414)(&DAT_10009970,s_AKA06DA_10008610), DAT_1000c414 != (code *)0x0 &&
            ((*DAT_1000c414)(&DAT_1000c090,s_AKA01DA_10008608), DAT_1000c414 != (code *)0x0)))))))))
        ) && ((*DAT_1000c414)(&DAT_1000c048,s_AKA02DA_10008600), DAT_1000c414 != (code *)0x0)) &&
      ((((((((((*DAT_1000c414)(&DAT_1000c050,s_AKA03DA_100085f8), DAT_1000c414 != (code *)0x0 &&
              ((*DAT_1000c414)(&DAT_1000c058,s_AKA04DA_100085f0), DAT_1000c414 != (code *)0x0)) &&
             ((*DAT_1000c414)(&DAT_1000c288,s_AKA08DA_100085e8), DAT_1000c414 != (code *)0x0)) &&
            (((*DAT_1000c414)(&DAT_1000c128,s_AKA23DA_100085e0), DAT_1000c414 != (code *)0x0 &&
             ((*DAT_1000c414)(&DAT_1000c168,s_AKA24DA_100085d8), DAT_1000c414 != (code *)0x0)))) &&
           (((*DAT_1000c414)(&DAT_1000c220,s_AKA31DA_100085d0), DAT_1000c414 != (code *)0x0 &&
            (((*DAT_1000c414)(&DAT_1000c228,s_AKA33DA_100085c8), DAT_1000c414 != (code *)0x0 &&
             ((*DAT_1000c414)(&DAT_1000c180,s_AKA12DA_100085c0), DAT_1000c414 != (code *)0x0))))))
          && ((*DAT_1000c414)(&DAT_1000c190,s_AKA13DA_100085b8), DAT_1000c414 != (code *)0x0)) &&
         ((((*DAT_1000c414)(&DAT_1000c198,s_AKA14DA_100085b0), DAT_1000c414 != (code *)0x0 &&
           ((*DAT_1000c414)(&DAT_1000c188,s_AKA15DA_100085a8), DAT_1000c414 != (code *)0x0)) &&
          ((*DAT_1000c414)(&DAT_10009968,s_AKA11DA_100085a0), DAT_1000c414 != (code *)0x0)))) &&
        ((((*DAT_1000c414)(&DAT_100098f8,s_AKA10DA_10008598), DAT_1000c414 != (code *)0x0 &&
          ((*DAT_1000c414)(&DAT_100097b8,s_AKA30DA_10008590), DAT_1000c414 != (code *)0x0)) &&
         (((*DAT_1000c414)(&DAT_1000c108,s_AKA07DA_10008588), DAT_1000c414 != (code *)0x0 &&
          (((*DAT_1000c414)(&DAT_10009958,s_AKA20DA_10008580), DAT_1000c414 != (code *)0x0 &&
           ((*DAT_1000c414)(&DAT_1000c210,s_KUZ02DA_10008578), DAT_1000c414 != (code *)0x0))))))))
       && (((*DAT_1000c414)(&DAT_1000c218,s_AKA09DA_10008570), DAT_1000c414 != (code *)0x0 &&
           (((((*DAT_1000c414)(&DAT_10009888,s_AKA05DA_10008568), DAT_1000c414 != (code *)0x0 &&
              ((*DAT_1000c414)(&DAT_10009898,s_AKA28DA_10008560), DAT_1000c414 != (code *)0x0)) &&
             ((*DAT_1000c414)(&DAT_10009780,s_AKA29DA_10008558), DAT_1000c414 != (code *)0x0)) &&
            (((*DAT_1000c414)(&DAT_10009640,s_KUZ05DA_10008550), DAT_1000c414 != (code *)0x0 &&
             ((*DAT_1000c414)(&DAT_10009720,s_KUZ06DA_10008548), DAT_1000c414 != (code *)0x0))))))))
      )) && (((((*DAT_1000c414)(&DAT_10009648,s_AKA34DA_10008540), DAT_1000c414 != (code *)0x0 &&
               (((*DAT_1000c414)(&DAT_1000c300,s_Bashnia_DA_PAUSE_1000852c),
                DAT_1000c414 != (code *)0x0 &&
                ((*DAT_1000c414)(&DAT_1000c2e8,s_Bashnia_DA_PAUSE3_10008518),
                DAT_1000c414 != (code *)0x0)))) &&
              ((*DAT_1000c414)(&DAT_1000c2f8,s_Bashnia_DA_PAUSE4_10008504),
              DAT_1000c414 != (code *)0x0)) &&
             (((*DAT_1000c414)(&DAT_1000c2d8,s_Bashnia_DA_PAUSE5_100084f0),
              DAT_1000c414 != (code *)0x0 &&
              ((*DAT_1000c414)(&DAT_1000c2e0,s_Bashnia_DA_PAUSE6_100084dc),
              DAT_1000c414 != (code *)0x0)))))) {
    (*DAT_1000c414)(&DAT_1000c2d0,s_Bashnia_DA_PAUSE7_100084c8);
  }
  (*DAT_1000c52c)(9,4,4);
  (*DAT_1000c538)(6);
  (*DAT_1000c53c)(0,s_shahta_DA_INSIDE_100084b4,0x5a);
  (*DAT_1000c53c)(1,s_shahta_DA_INSIDE3_100084a0,0x32);
  (*DAT_1000c53c)(2,s_shahta_DA_INSIDE4_1000848c,0x32);
  (*DAT_1000c53c)(3,s_shahta_DA_INSIDE5_10008478,0x32);
  (*DAT_1000c53c)(4,s_shahta_DA_INSIDE6_10008464,0x32);
  (*DAT_1000c53c)(5,s_shahta_DA_INSIDE7_10008450,0x32);
  (*DAT_1000c578)(s_Kreposnoi_pruss_DA__10008b54);
  (*DAT_1000c574)(s_shahta_DA__10008444);
  (*DAT_1000c57c)(s_Dom_Prussia_DA__10008434);
  (*DAT_1000c584)(s_WALL_EV_DA__10008428);
  (*DAT_1000c540)(0x122);
  (*DAT_1000c544)(0x5a);
  (*DAT_1000c548)(0x5a);
  (*DAT_1000c54c)(300);
  (*DAT_1000c550)(5);
  return;
}



// Function: FUN_100025f0 @ 0x100025f0

void __cdecl FUN_100025f0(undefined4 param_1,undefined4 param_2)

{
  (*DAT_1000c528)(param_1,param_2);
  return;
}



// Function: FUN_10002610 @ 0x10002610

void __cdecl FUN_10002610(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_1000c534)(param_1,param_2,param_3);
  return;
}



// Function: FUN_10002630 @ 0x10002630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002630(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1000c560)();
  return;
}



// Function: FUN_10002640 @ 0x10002640

void __cdecl FUN_10002640(undefined4 param_1,undefined4 param_2)

{
  (*DAT_1000c580)(param_1,param_2);
  return;
}



// Function: FUN_10002660 @ 0x10002660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002660(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1000c58c)();
  return;
}



// Function: FUN_10002670 @ 0x10002670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002670(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1000c590)();
  return;
}



// Function: FUN_10002680 @ 0x10002680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002680(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1000c598)();
  return;
}



// Function: FUN_10002690 @ 0x10002690

void __cdecl FUN_10002690(undefined4 param_1)

{
  (*DAT_1000c59c)(param_1);
  return;
}



// Function: FUN_100026a0 @ 0x100026a0

void __cdecl FUN_100026a0(undefined4 param_1,undefined4 param_2)

{
  (*DAT_1000c5a0)(param_1,param_2);
  return;
}



// Function: FUN_100026c0 @ 0x100026c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100026c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x100026c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1000c5a4)();
  return;
}



// Function: FUN_100026d0 @ 0x100026d0

void __cdecl FUN_100026d0(undefined4 param_1,undefined4 param_2)

{
  (*DAT_1000c280)(param_1,param_2);
  return;
}



// Function: FUN_100026f0 @ 0x100026f0

void __cdecl FUN_100026f0(undefined4 param_1)

{
  (*DAT_1000c2c8)(param_1);
  return;
}



// Function: FUN_10002700 @ 0x10002700

void __cdecl FUN_10002700(undefined4 param_1,undefined4 param_2)

{
  (*DAT_10009748)(param_1,param_2);
  return;
}



// Function: FUN_10002720 @ 0x10002720

void __cdecl FUN_10002720(undefined4 param_1)

{
  (*DAT_100098e8)(param_1);
  return;
}



// Function: FUN_10002730 @ 0x10002730

void __cdecl FUN_10002730(undefined4 param_1)

{
  (*DAT_1000c5a8)(param_1);
  return;
}



// Function: FUN_10002740 @ 0x10002740

void __cdecl FUN_10002740(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_1000bfd8)(param_1,param_2,param_3);
  return;
}



// Function: FUN_10002760 @ 0x10002760

void __cdecl FUN_10002760(undefined4 param_1)

{
  (*DAT_10009948)(param_1);
  return;
}



// Function: FUN_10002770 @ 0x10002770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002770(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1000c260)();
  return;
}



// Function: FUN_10002780 @ 0x10002780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002780(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10009960)();
  return;
}



// Function: FUN_10002790 @ 0x10002790

FARPROC __cdecl FUN_10002790(LPCSTR param_1)

{
  FARPROC pFVar1;
  char local_100 [256];
  
  pFVar1 = GetProcAddress(DAT_1000c3f8,param_1);
  if (pFVar1 == (FARPROC)0x0) {
    sprintf(local_100,s_DMCR_EXE_does_not_contain_functi_10008ebc,param_1);
    MessageBoxA((HWND)0x0,local_100,s_DLL_init_error__10008eac,0);
  }
  return pFVar1;
}



// Function: FUN_100027f0 @ 0x100027f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100027f0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_1000c3f8 = GetModuleHandleA(s_DMCR_EXE_10009610);
    if (DAT_1000c3f8 == (HMODULE)0x0) {
      MessageBoxA((HWND)0x0,s_Can_not_detect_DMCR_EXE_100095f0,s_ERROR__10009608,0);
      return 1;
    }
    _DAT_1000c3fc = FUN_10002790(s_RegisterUnits_100095e0);
    _DAT_1000c400 = FUN_10002790(s_RegisterString_100095d0);
    _DAT_1000c404 = FUN_10002790(s_RegisterSound_100095c0);
    _DAT_1000c408 = FUN_10002790(s_RegisterVar_100095b4);
    _DAT_1000c40c = FUN_10002790(s_RegisterZone_100095a4);
    DAT_1000c410 = FUN_10002790(s_RegisterUnitType_10009590);
    DAT_1000c414 = FUN_10002790(s_RegisterUpgrade_10009580);
    _DAT_1000c418 = FUN_10002790(s_InitialUpgrade_10009570);
    _DAT_1000c41c = FUN_10002790(s_RegisterFormation_1000955c);
    _DAT_1000c420 = FUN_10002790(s_RegisterUnitsForm_10009548);
    _DAT_1000c424 = FUN_10002790(s_GetUnitsAmount0_10009538);
    _DAT_1000c428 = FUN_10002790(s_GetUnitsAmount1_10009528);
    _DAT_1000c42c = FUN_10002790(s_GetUnitsAmount2_10009518);
    _DAT_1000c430 = FUN_10002790(s_GetTotalAmount0_10009508);
    _DAT_1000c434 = FUN_10002790(s_GetTotalAmount1_100094f8);
    _DAT_1000c438 = FUN_10002790(s_GetReadyAmount_100094e8);
    _DAT_1000c43c = FUN_10002790(s_IsUpgradeDoing_100094d8);
    _DAT_1000c440 = FUN_10002790(s_IsUpgradeDone_100094c8);
    _DAT_1000c444 = FUN_10002790(s_IsUpgradeEnabled_100094b4);
    _DAT_1000c448 = FUN_10002790(s_GetDied_100094ac);
    _DAT_1000c44c = FUN_10002790(s_CreateObject0_1000949c);
    _DAT_1000c450 = FUN_10002790(s_ClearSelection_1000948c);
    _DAT_1000c454 = FUN_10002790(s_SelectUnits_10009480);
    _DAT_1000c458 = FUN_10002790(s_SelectUnitsType_10009470);
    _DAT_1000c470 = FUN_10002790(s_SelDie_10009468);
    _DAT_1000c474 = FUN_10002790(s_SelOpenGates_10009458);
    _DAT_1000c478 = FUN_10002790(s_SelCloseGates_10009448);
    _DAT_1000c47c = FUN_10002790(s_SelSendTo_1000943c);
    _DAT_1000c480 = FUN_10002790(s_SelSendAndKill_1000942c);
    _DAT_1000c49c = FUN_10002790(s_SelAutoKill_10009420);
    _DAT_1000c484 = FUN_10002790(s_SelAttackGroup_10009410);
    _DAT_1000c488 = FUN_10002790(s_Patrol_10009408);
    _DAT_1000c48c = FUN_10002790(s_ChangeFriends_100093f8);
    _DAT_1000c490 = FUN_10002790(s_SelChangeNation_100093e8);
    _DAT_1000c494 = FUN_10002790(s_SetStandGround_100093d8);
    _DAT_1000c498 = FUN_10002790(s_AllowAttack_100093cc);
    _DAT_1000c4a0 = FUN_10002790(&DAT_100093c4);
    _DAT_1000c4a4 = FUN_10002790(s_DisableMission_100093b4);
    _DAT_1000c4a8 = FUN_10002790(s_EnableMission_100093a4);
    _DAT_1000c4ac = FUN_10002790(s_SetVictoryText_10009394);
    _DAT_1000c4b0 = FUN_10002790(s_SetLooseText_10009384);
    _DAT_1000c4b4 = FUN_10002790(s_ShowVictory_10009378);
    _DAT_1000c4b8 = FUN_10002790(s_LooseGame_1000936c);
    _DAT_1000c4bc = FUN_10002790(s_ShowCentralText_1000935c);
    _DAT_1000c4c0 = FUN_10002790(s_ShowPage_10009350);
    _DAT_1000c4c4 = FUN_10002790(s_AskQuestion_10009344);
    _DAT_1000c1f8 = FUN_10002790(s_GetResource_10009338);
    _DAT_1000c4c8 = FUN_10002790(s_AddResource_1000932c);
    _DAT_1000c4cc = FUN_10002790(s_SetResource_10009320);
    DAT_1000c4d0 = FUN_10002790(s_GetUnitCost_10009314);
    DAT_1000c4d4 = FUN_10002790(s_GetUpgradeCost_10009304);
    _DAT_1000c4d8 = FUN_10002790(s_RunTimer_100092f8);
    _DAT_1000c4dc = FUN_10002790(s_TimerDone_100092ec);
    _DAT_1000c4e0 = FUN_10002790(s_TimerDoneFirst_100092dc);
    _DAT_1000c4e4 = FUN_10002790(s_TimerIsEmpty_100092cc);
    _DAT_1000c4e8 = FUN_10002790(s_FreeTimer_100092c0);
    _DAT_1000c4ec = FUN_10002790(s_GetTime_100092b8);
    _DAT_1000c4f0 = FUN_10002790(s_GetGlobalTime_100092a8);
    _DAT_1000c4f4 = FUN_10002790(s_Trigg_100092a0);
    _DAT_1000c4f8 = FUN_10002790(s_SetTrigg_10009294);
    _DAT_1000c4fc = FUN_10002790(s_RunAI_1000928c);
    _DAT_10009650 = FUN_10002790(s_RunAIWithPeasants_10009278);
    _DAT_1000c508 = FUN_10002790(s_SelCenter_1000926c);
    _DAT_1000c504 = FUN_10002790(s_UnitsCenter_10009260);
    _DAT_1000c50c = FUN_10002790(s_CreateZoneNearUnit_1000924c);
    _DAT_1000c510 = FUN_10002790(s_SetLightSpot_1000923c);
    _DAT_1000c514 = FUN_10002790(s_ClearLightSpot_1000922c);
    _DAT_1000c460 = FUN_10002790(s_GetMaxInside_1000921c);
    _DAT_1000c45c = FUN_10002790(s_GetNInside_10009210);
    _DAT_1000c464 = FUN_10002790(s_PushUnitAway_10009200);
    _DAT_1000c468 = FUN_10002790(s_CheckLeaveAbility_100091ec);
    _DAT_1000c46c = FUN_10002790(s_AttackZoneByArtillery_100091d4);
    DAT_1000c530 = FUN_10002790(s_SetDefSettings_100091c4);
    _DAT_1000c560 = FUN_10002790(s_GetMaxPeasantsInMines_100091ac);
    DAT_1000c528 = FUN_10002790(s_SetUpgradeLock_1000919c);
    DAT_1000c534 = FUN_10002790(s_AI_Torg_10009194);
    DAT_1000c580 = FUN_10002790(s_GetUnitsByUsage_10009184);
    DAT_1000c518 = FUN_10002790(s_GetAINation_10009178);
    DAT_1000c51c = FUN_10002790(s_TryUnit_10009170);
    DAT_1000c520 = FUN_10002790(s_TryUpgrade_10009164);
    DAT_1000c524 = FUN_10002790(s_SetMineBalanse_10009154);
    DAT_1000c52c = FUN_10002790(s_SetPDistribution_10009140);
    DAT_1000c538 = FUN_10002790(s_AssignAmountOfMineUpgrades_10009124);
    DAT_1000c53c = FUN_10002790(s_AssignMineUpgrade_10009110);
    DAT_1000c574 = FUN_10002790(s_AssignMine_10009104);
    DAT_1000c578 = FUN_10002790(s_AssignPeasant_100090f4);
    DAT_1000c57c = FUN_10002790(s_AssignHouse_100090e8);
    DAT_1000c584 = FUN_10002790(s_AssignWall_100090dc);
    DAT_1000c540 = FUN_10002790(s_SET_MINE_CAPTURE_RADIUS_100090c4);
    DAT_1000c544 = FUN_10002790(s_SET_MINE_UPGRADE1_RADIUS_100090a8);
    DAT_1000c548 = FUN_10002790(s_SET_MINE_UPGRADE2_RADIUS_1000908c);
    DAT_1000c54c = FUN_10002790(s_SET_DEFAULT_MAX_WORKERS_10009074);
    DAT_1000c550 = FUN_10002790(s_SET_MIN_PEASANT_BRIGADE_1000905c);
    DAT_1000c554 = FUN_10002790(s_GetMoney_10009050);
    DAT_1000c558 = FUN_10002790(s_GetUnits_10009044);
    DAT_1000c55c = FUN_10002790(s_GetReadyUnits_10009034);
    DAT_1000c564 = FUN_10002790(s_UpgIsDone_10009028);
    DAT_1000c568 = FUN_10002790(s_UpgIsRun_1000901c);
    DAT_1000c588 = FUN_10002790(s_FieldExist_10009010);
    _DAT_1000c58c = FUN_10002790(s_GetDifficulty_10009000);
    _DAT_1000c590 = FUN_10002790(s_GetStartRes_10008ff4);
    _DAT_1000c594 = FUN_10002790(s_GetResOnMap_10008fe8);
    _DAT_1000c598 = FUN_10002790(s_GetLandType_10008fdc);
    DAT_1000c59c = FUN_10002790(s_AssignFormUnit_10008fcc);
    _DAT_1000c5a4 = FUN_10002790(s_GetRandomIndex_10008fbc);
    DAT_1000c5a0 = FUN_10002790(s_SafeRegisterUpgrade_10008fa8);
    DAT_100098e8 = FUN_10002790(s_SetMinesUpgradeRules_10008f90);
    DAT_10009748 = FUN_10002790(s_SetMinesBuildingRules_10008f78);
    DAT_1000c5a8 = FUN_10002790(s_GetExtraction_10008f68);
    _DAT_1000c56c = FUN_10002790(s_EnableUpgrade_10008f58);
    _DAT_1000c570 = FUN_10002790(s_DisableUpgrade_10008f48);
    DAT_1000c2c8 = FUN_10002790(s_GetAIRegister_10008f38);
    DAT_1000c280 = FUN_10002790(s_SetAIRegister_10008f28);
    DAT_1000bfd8 = FUN_10002790(s_GetTorgResult_10008f18);
    DAT_10009948 = FUN_10002790(s_SetDefenseState_10008f08);
    _DAT_1000c260 = FUN_10002790(s_GetMaxPeaceTime_10008ef8);
    _DAT_10009960 = FUN_10002790(s_GetPeaceTimeLeft_10008ee4);
  }
  return 1;
}



// Function: FUN_10002f30 @ 0x10002f30

undefined * __cdecl FUN_10002f30(undefined4 param_1,undefined4 param_2)

{
  sprintf(&DAT_100097c0,&DAT_1000961c,param_1,param_2);
  return &DAT_100097c0;
}



// Function: FUN_10002f60 @ 0x10002f60

int __cdecl FUN_10002f60(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_10002740(param_1,param_2,1000);
  return (param_3 * 1000) / iVar1;
}



// Function: FUN_10002f90 @ 0x10002f90

undefined4 __cdecl FUN_10002f90(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = (*DAT_1000c554)(param_1);
  if (param_2 <= iVar1) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  iVar1 = (*DAT_1000c554)(param_1);
  iVar2 = FUN_10002f60(param_3,param_1,param_2 - iVar1);
  uVar3 = (*DAT_1000c554)(param_3);
  if ((iVar2 < (int)uVar3) && (1000 < iVar2)) {
    iVar6 = 0;
    while( true ) {
      iVar4 = 0xf;
      if (iVar2 / 15000 < 0x10) {
        iVar4 = iVar2 / 15000;
      }
      if (iVar4 <= iVar6) break;
      FUN_10002610(param_1,param_3,100);
      iVar6 = iVar6 + 1;
    }
    iVar1 = FUN_10002f60(param_3,param_1,param_2 - iVar1);
    uVar5 = FUN_10002610(param_3,param_1,iVar1);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



// Function: FUN_10003040 @ 0x10003040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003040(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_1000c2cc = (*DAT_1000c518)();
  iVar1 = (*DAT_1000c558)(&DAT_1000c1a8);
  iVar2 = FUN_10002730(1);
  iVar3 = FUN_10002730(4);
  iVar4 = FUN_10002730(5);
  DAT_1000c1c8 = ((iVar1 - iVar2) - iVar3) - iVar4;
  iVar1 = DAT_1000c2cc * 0x4b8;
  _DAT_1000c61c = *(undefined4 *)(&DAT_10009b08 + iVar1);
  _DAT_1000c1d8 = &DAT_10009978 + iVar1;
  _DAT_1000c1dc = &DAT_10009b0c + iVar1;
  _DAT_1000c620 = *(undefined4 *)(&DAT_10009c9c + iVar1);
  _DAT_1000c264 = &DAT_10009ca0 + iVar1;
  _DAT_1000c2a8 = (*DAT_1000c554)(3);
  _DAT_10009638 = (*DAT_1000c554)(0);
  _DAT_1000c398 = (*DAT_1000c554)(2);
  _DAT_10009740 = (*DAT_1000c554)(4);
  _DAT_1000c100 = (*DAT_1000c554)(5);
  _DAT_1000c350 = (*DAT_1000c554)(1);
  iVar1 = FUN_10002670();
  if (iVar1 == 0) {
    _DAT_10008228 = 4;
  }
  (*DAT_1000c524)(0x13,&DAT_100080f4);
  FUN_10002720(&DAT_1000c5b0);
  FUN_10002700(&DAT_10008224,0x1b);
  DAT_1000c1a0 = 1;
  DAT_1000c1a2 = 1;
  DAT_1000c1a4 = 1;
  DAT_1000c1a5 = 1;
  DAT_1000c33b = 1;
  DAT_1000c339 = 1;
  DAT_1000c33c = 1;
  DAT_1000c33d = 1;
  DAT_1000c1a3 = 0;
  DAT_1000c1a1 = 0;
  DAT_1000c338 = 0;
  DAT_1000c33a = 0;
  _DAT_1000c664 = 0;
  return;
}



// Function: FUN_100031c0 @ 0x100031c0

void FUN_100031c0(void)

{
  int iVar1;
  
  if (DAT_1000bf70 < 2) {
    iVar1 = (*DAT_1000c558)(&DAT_100096a0);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      (*DAT_1000c51c)(&DAT_10009718,iVar1,0x32,0x32);
      (*DAT_1000c51c)(&DAT_10009658,iVar1,0x14,0x32);
    }
  }
  return;
}



// Function: ProcessLandAI @ 0x10003220

void ProcessLandAI(void)

{
                    /* 0x3220  3  ProcessLandAI */
  return;
}



// Function: FUN_10003230 @ 0x10003230

void FUN_10003230(void)

{
  (*DAT_1000c520)(&DAT_1000c368,0x3c,100);
  (*DAT_1000c520)(&DAT_1000c370,0x3c,100);
  (*DAT_1000c520)(&DAT_1000c358,0x3c,100);
  (*DAT_1000c520)(&DAT_1000c360,0x14,100);
  (*DAT_1000c520)(&DAT_1000c378,10,100);
  (*DAT_1000c520)(&DAT_1000c2b0,0x3c,100);
  (*DAT_1000c520)(&DAT_1000c298,0x3c,100);
  (*DAT_1000c520)(&DAT_1000c2a0,0x3c,100);
  (*DAT_1000c520)(&DAT_1000c2b8,0x14,100);
  (*DAT_1000c520)(&DAT_1000c2c0,10,100);
  return;
}



// Function: FUN_100032d0 @ 0x100032d0

void FUN_100032d0(void)

{
  (*DAT_1000c520)(&DAT_10009928,0x5a,100);
  (*DAT_1000c520)(&DAT_10009930,0x5a,100);
  (*DAT_1000c520)(&DAT_10009920,0x5a,100);
  (*DAT_1000c520)(&DAT_1000bf90,0x5a,100);
  (*DAT_1000c520)(&DAT_1000bf80,0x5a,100);
  return;
}



// Function: FUN_10003320 @ 0x10003320

void FUN_10003320(void)

{
  (*DAT_1000c520)(&DAT_1000c0b0,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c0b8,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c0c0,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c0c8,0x1e,0x32);
  return;
}



// Function: FUN_10003360 @ 0x10003360

void FUN_10003360(void)

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
  
  (*DAT_1000c530)(300,400);
  FUN_10002760(0);
  iVar3 = FUN_10002640(0,0x1b);
  iVar4 = FUN_10002640(0,0x19);
  iVar5 = FUN_10002640(0,0x1c);
  iVar6 = FUN_10002640(0,0xe);
  cVar1 = (*DAT_1000c564)(&DAT_1000c038);
  iVar4 = (iVar5 >> 2) + iVar4 + iVar6 * 4;
  iVar5 = (*DAT_1000c55c)(&DAT_1000c2f0);
  iVar6 = (*DAT_1000c558)(&DAT_1000bfd0);
  iVar7 = (*DAT_1000c55c)(&DAT_1000bfd0);
  iVar8 = (*DAT_1000c558)(&DAT_1000c000);
  iVar9 = (*DAT_1000c55c)(&DAT_1000c000);
  iVar10 = (*DAT_1000c558)(&DAT_1000c0f0);
  iVar11 = (*DAT_1000c55c)(&DAT_1000c0f0);
  iVar12 = (*DAT_1000c558)(&DAT_1000c2f0);
  iVar6 = ((((iVar10 - iVar11) - iVar9) - iVar7) - iVar5) + iVar8 + iVar12 + iVar6;
  (*DAT_1000c520)(&DAT_1000c038,0x5f,100);
  bVar13 = true;
  iVar5 = (*DAT_1000c554)(3);
  if ((((55000 < iVar5) && (iVar5 = (*DAT_1000c554)(1), 10000 < iVar5)) &&
      (iVar5 = (*DAT_1000c554)(4), 7000 < iVar5)) && (cVar1 == '\0')) {
    bVar13 = false;
  }
  iVar5 = (*DAT_1000c558)(&DAT_1000c1a8);
  iVar7 = (*DAT_1000c554)(3);
  cVar1 = (*DAT_1000c568)(&DAT_1000c1d0);
  (*DAT_1000c558)(&DAT_100096a0);
  iVar8 = (*DAT_1000c558)(&DAT_1000c0f8);
  iVar11 = (*DAT_1000c558)(&DAT_1000c3c8);
  iVar9 = (*DAT_1000c558)(&DAT_1000c348);
  iVar10 = (*DAT_1000c558)(&DAT_100096a0);
  iVar11 = iVar10 + iVar9 + iVar11;
  (*DAT_1000c520)(&DAT_1000c128,99,0x50);
  (*DAT_1000c520)(&DAT_1000c168,0x62,0x50);
  iVar9 = (*DAT_1000c55c)(&DAT_100098f0);
  iVar10 = (*DAT_1000c558)(&DAT_100098f0);
  if (iVar5 != 0) {
    (*DAT_1000c51c)(&DAT_1000bff0,1,100,100);
    iVar12 = (*DAT_1000c558)(&DAT_1000bff0);
    if (iVar12 == 0) {
      return;
    }
    (*DAT_1000c520)(&DAT_1000c390,100,100);
    cVar2 = (*DAT_1000c588)();
    if (cVar2 == '\0') {
      if (700 < iVar7) {
        (*DAT_1000c51c)(&DAT_1000c1a8,100,100,100);
        (*DAT_1000c51c)(&DAT_100096a0,100,100,100);
      }
      (*DAT_1000c52c)(0,1,1);
    }
    else {
      cVar2 = (*DAT_1000c564)(&DAT_100097b8);
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
      (*DAT_1000c52c)(uVar15,uVar17,uVar16);
      uVar15 = 0x15e;
      if (cVar1 != '\0') {
        uVar15 = 300;
      }
      if ((iVar5 < 0x19) && (300 < iVar7)) {
        (*DAT_1000c51c)(&DAT_1000c1a8,100,100,100);
      }
      if (200 < iVar7) {
        if (bVar13) {
          (*DAT_1000c51c)(&DAT_1000c1a8,1000,0xe8,100);
        }
        if (300 < iVar7) {
          (*DAT_1000c51c)(&DAT_100096a0,uVar15,100,0x1e);
        }
      }
      cVar2 = (*DAT_1000c564)(&DAT_1000c288);
      if (((cVar2 != '\0') && (1000 < iVar7)) && (iVar7 = (*DAT_1000c558)(&DAT_1000c2f0), 0 < iVar7)
         ) {
        FUN_10003230();
      }
    }
    if (iVar3 < 5) {
      iVar3 = 5;
    }
    else {
      iVar3 = iVar3 + 2;
    }
    (*DAT_1000c51c)(&DAT_1000bfa8,iVar3,0x46,0x32);
    if (iVar4 < 5) {
      (*DAT_1000c51c)(&DAT_10009900,0xc,0x46);
    }
    else {
      (*DAT_1000c51c)(&DAT_10009900,iVar4 + 6,0x1e,0x32);
      (*DAT_1000c51c)(&DAT_10009900,iVar4 + 9,0xf,0x32);
      (*DAT_1000c51c)(&DAT_10009900,iVar4 + 10,10,0x32);
    }
    iVar4 = FUN_10002640(0,0x1f);
    if (iVar4 != 0) {
      (*DAT_1000c520)(&DAT_1000c300,0x32,0x32);
      (*DAT_1000c520)(&DAT_1000c2e8,0x32,0x32);
      (*DAT_1000c520)(&DAT_1000c2f8,0x32,0x32);
      (*DAT_1000c520)(&DAT_1000c2d8,0x32,0x32);
      (*DAT_1000c520)(&DAT_1000c2e0,0x32,0x32);
      (*DAT_1000c520)(&DAT_1000c2d0,0x32,0x32);
    }
    (*DAT_1000c51c)(&DAT_100098b8,3,0x5a,10);
    (*DAT_1000c51c)(&DAT_1000bfd0,1,100,100);
    (*DAT_1000c51c)(&DAT_1000bfd0,2,0x5f,5);
    if (iVar6 == 0) {
      (*DAT_1000c51c)(&DAT_1000bfd0,3,0x5f,5);
    }
    (*DAT_1000c51c)(&DAT_1000c200,1,100,100);
    (*DAT_1000c51c)(&DAT_1000c268,1,100,100);
    (*DAT_1000c51c)(&DAT_1000bfe8,1,0x32,0x32);
    (*DAT_1000c51c)(&DAT_1000c200,2,10,5);
    (*DAT_1000c51c)(&DAT_1000c0f0,1,99,0x5a);
    (*DAT_1000c520)(&DAT_10009678,0x50,100);
    iVar4 = (*DAT_1000c558)(&DAT_1000bf38);
    if (0 < iVar4) {
      (*DAT_1000c51c)(&DAT_10009890,1,0x5a,0x19);
      (*DAT_1000c51c)(&DAT_1000c110,1,5,3);
    }
    (*DAT_1000c51c)(&DAT_1000bf38,1,0x5a,0x5a);
    if (iVar6 == 0) {
      (*DAT_1000c51c)(&DAT_1000c000,1,99,10);
    }
    (*DAT_1000c51c)(&DAT_10009630,1,0x5a,0x5a);
    if (0x19 < iVar5) {
      (*DAT_1000c51c)(&DAT_1000bff0,2,0x1e,0x1e);
    }
    (*DAT_1000c51c)(&DAT_1000c270,1,0x5a,0x14);
    (*DAT_1000c51c)(&DAT_1000c270,2,0x32,5);
    (*DAT_1000c520)(&DAT_1000c090,0x5a,99);
    (*DAT_1000c520)(&DAT_1000c048,0x5a,99);
    (*DAT_1000c520)(&DAT_1000c050,0x5a,99);
    (*DAT_1000c520)(&DAT_1000c058,0x5a,99);
    (*DAT_1000c520)(&DAT_1000c288,0x5f,100);
    (*DAT_1000c520)(&DAT_1000c1d0,99,100);
    (*DAT_1000c51c)(&DAT_1000c2f0,1,0x50,0x14);
    (*DAT_1000c51c)(&DAT_1000c2f0,2,0x32,5);
    (*DAT_1000c51c)(&DAT_1000c2f0,3,0x1e,5);
    (*DAT_1000c51c)(&DAT_1000c2f0,5,0x14,5);
    (*DAT_1000c520)(&DAT_10009970,0x5f,100);
    iVar4 = FUN_10002630();
    cVar2 = (*DAT_1000c568)(&DAT_1000c288);
    if (cVar2 != '\0') {
      (*DAT_1000c520)(&DAT_10009970,0x5a,0x5a);
      (*DAT_1000c520)(&DAT_10009888,99,100);
    }
    cVar2 = (*DAT_1000c568)(&DAT_10009970);
    if (cVar2 != '\0') {
      (*DAT_1000c520)(&DAT_10009958,0x5a,0x5a);
      (*DAT_1000c520)(&DAT_10009898,0x46,10);
      FUN_10003320();
    }
    cVar2 = (*DAT_1000c564)(&DAT_1000c0c8);
    if (cVar2 != '\0') {
      (*DAT_1000c51c)(&DAT_10009680,10,10,0x5a);
      (*DAT_1000c51c)(&DAT_10009680,0xf,3,10);
    }
    FUN_100025f0(1,0);
    iVar7 = (*DAT_1000c554)(0);
    if ((((14000 < iVar7) && (cVar2 = (*DAT_1000c568)(&DAT_100097b8), cVar2 != '\0')) &&
        (iVar7 = (*DAT_1000c554)(1), iVar7 < 0x1d4c)) &&
       (cVar2 = (*DAT_1000c568)(&DAT_10009970), cVar2 == '\0')) {
      FUN_100025f0(1,1);
    }
    cVar2 = (*DAT_1000c568)(&DAT_10009970);
    if (((cVar2 == '\0') || (cVar2 = (*DAT_1000c568)(&DAT_1000c108), cVar2 == '\0')) ||
       (cVar2 = (*DAT_1000c564)(&DAT_1000c1d0), cVar2 == '\0')) {
LAB_10003c9c:
      if (iVar4 == 0x5f) {
        (*DAT_1000c520)(&DAT_10009780,0x46,10);
        (*DAT_1000c51c)(&DAT_1000c3b0,1,0x32,0x1e);
        (*DAT_1000c51c)(&DAT_1000c3b0,2,0x1e,0x1e);
        (*DAT_1000c51c)(&DAT_1000c3b0,3,0x14,0x1e);
        (*DAT_1000c51c)(&DAT_1000c3b0,5,10,0x1e);
      }
    }
    else {
      if (((iVar4 == 10) || (iVar4 == 0x12)) &&
         ((iVar7 = (*DAT_1000c554)(3), 50000 < iVar7 && (iVar7 = (*DAT_1000c554)(1), iVar7 < 0x2008)
          ))) {
        FUN_100025f0(1,1);
      }
      cVar2 = (*DAT_1000c568)(&DAT_1000c038);
      if (((cVar2 == '\0') && (iVar7 = (*DAT_1000c554)(3), 60000 < iVar7)) &&
         (iVar7 = (*DAT_1000c554)(1), iVar7 < 11000)) {
        FUN_100025f0(1,1);
      }
      cVar2 = (*DAT_1000c564)(&DAT_1000c038);
      if (cVar2 == '\0') goto LAB_10003c9c;
      if (iVar4 == 0x1c) {
        iVar4 = (*DAT_1000c554)(3);
        if ((50000 < iVar4) && (iVar4 = (*DAT_1000c554)(4), 0x1c84 < iVar4)) {
          iVar4 = (*DAT_1000c554)(1);
          bVar14 = SBORROW4(iVar4,20000);
          bVar13 = iVar4 + -20000 < 0;
LAB_10003c8c:
          if (bVar14 != bVar13) {
            FUN_100025f0(1,1);
          }
        }
      }
      else if (iVar4 == 0x28) {
        iVar4 = (*DAT_1000c554)(3);
        if ((50000 < iVar4) && (iVar4 = (*DAT_1000c554)(4), 0x2648 < iVar4)) {
          iVar4 = (*DAT_1000c554)(1);
          bVar14 = SBORROW4(iVar4,24000);
          bVar13 = iVar4 + -24000 < 0;
          goto LAB_10003c8c;
        }
      }
      else {
        if (iVar4 != 0x37) goto LAB_10003c9c;
        iVar4 = (*DAT_1000c554)(3);
        if (80000 < iVar4) {
          iVar4 = (*DAT_1000c554)(1);
          bVar14 = SBORROW4(iVar4,26000);
          bVar13 = iVar4 + -26000 < 0;
          goto LAB_10003c8c;
        }
      }
    }
    if (((0x50 < iVar5) && (iVar10 == iVar9)) &&
       ((*DAT_1000c51c)(&DAT_100098f0,1,0x50,10), 0x5f < iVar5)) {
      (*DAT_1000c51c)(&DAT_100098f0,2,0x50,10);
      (*DAT_1000c51c)(&DAT_100098f0,3,0x32,10);
      (*DAT_1000c51c)(&DAT_100098f0,4,0x1e,10);
    }
    if ((cVar1 != '\0') && (cVar2 = (*DAT_1000c564)(&DAT_1000c288), cVar2 != '\0')) {
      (*DAT_1000c51c)(&DAT_1000c178,0x4b,1,0x1e);
      (*DAT_1000c564)(&DAT_1000c1b0);
      (*DAT_1000c564)(&DAT_1000c0c8);
    }
    (*DAT_1000c558)(&DAT_10009630);
    (*DAT_1000c51c)(&DAT_1000c208,3,0x5a,0x5a);
    cVar2 = (*DAT_1000c564)(&DAT_1000c108);
    if (cVar2 != '\0') {
      (*DAT_1000c51c)(&DAT_1000c208,0x14,10,0x5a);
    }
    if ((cVar1 != '\0') && (cVar2 = (*DAT_1000c564)(&DAT_1000c288), cVar2 != '\0')) {
      if (iVar6 == 0) {
        (*DAT_1000c51c)(&DAT_1000c0f0,2,0x5a,0x14);
        (*DAT_1000c51c)(&DAT_1000c0f0,3,0x5a,0x14);
        (*DAT_1000c51c)(&DAT_1000c0f0,4,0x5a,0x14);
      }
      iVar4 = (*DAT_1000c558)(&DAT_1000c0f8);
      if (0x14 < iVar4) {
        (*DAT_1000c520)(&DAT_1000c220,0x5a,100);
        (*DAT_1000c520)(&DAT_1000c228,0x50,0x46);
      }
      (*DAT_1000c520)(&DAT_1000c108,0x3c,0x5a);
      cVar2 = (*DAT_1000c568)(&DAT_10009920);
      if (cVar2 != '\0') {
        (*DAT_1000c520)(&DAT_1000c180,0x5a,0x5a);
        (*DAT_1000c520)(&DAT_1000c190,0x5a,0x5a);
        (*DAT_1000c520)(&DAT_1000c198,0x46,0x5a);
        (*DAT_1000c520)(&DAT_1000c188,0x46,0x5a);
      }
    }
    (*DAT_1000c520)(&DAT_100097b8,99,100);
    (*DAT_1000c520)(&DAT_100098f8,0x3c,0x5a);
    iVar4 = (*DAT_1000c558)(&DAT_1000c268);
    if ((1 < iVar4) && (300 < iVar11)) {
      if (iVar8 * 5 < iVar11 + -0x32) {
        (*DAT_1000c51c)(&DAT_1000c0f8,500,10,10);
      }
      FUN_100032d0();
    }
  }
  if (cVar1 != '\0') {
    (*DAT_1000c520)(&DAT_10009648,0x5f,0x5a);
    (*DAT_1000c520)(&DAT_10009720,0x5f,0x5a);
    (*DAT_1000c520)(&DAT_10009640,0x5f,0x5a);
    (*DAT_1000c51c)(&DAT_1000c268,2,0x5f,0x5a);
  }
  cVar1 = (*DAT_1000c568)(&DAT_100097b8);
  if (cVar1 != '\0') {
    (*DAT_1000c520)(&DAT_1000c210,0x5f,0x5a);
    (*DAT_1000c520)(&DAT_1000c218,0x5f,0x5a);
  }
  iVar4 = (*DAT_1000c55c)(&DAT_10009890);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = (*DAT_1000c558)(&DAT_1000bf38);
  if ((((iVar4 != 0) && (cVar1 = (*DAT_1000c568)(&DAT_1000c288), cVar1 == '\0')) &&
      (iVar4 = (*DAT_1000c554)(1), 800 < iVar4)) &&
     ((iVar4 = (*DAT_1000c554)(3), iVar4 < 6000 && (iVar4 = (*DAT_1000c554)(4), 3000 < iVar4)))) {
    FUN_10002610(4,3,3000);
  }
  iVar4 = (*DAT_1000c554)(3);
  if ((iVar4 < 1000) && (iVar4 = (*DAT_1000c554)(2), 5000 < iVar4)) {
    FUN_10002610(2,3,4000);
  }
  cVar1 = (*DAT_1000c564)(&DAT_1000c210);
  if ((cVar1 == '\0') || (cVar1 = (*DAT_1000c564)(&DAT_1000c218), cVar1 == '\0')) {
    iVar4 = (*DAT_1000c554)(2);
    if (iVar4 < 0x1adb1) goto LAB_100041ba;
    uVar17 = 90000;
    uVar15 = 1;
  }
  else {
    iVar4 = (*DAT_1000c554)(2);
    if (110000 < iVar4) {
      FUN_10002610(2,1,100000);
    }
    iVar4 = (*DAT_1000c554)(0);
    if (iVar4 == 0) goto LAB_100041ba;
    iVar4 = (*DAT_1000c554)(1);
    if ((iVar4 != 0) && (iVar4 = (*DAT_1000c554)(4), iVar4 < 5000)) {
      iVar4 = (*DAT_1000c554)(4);
      iVar5 = (*DAT_1000c554)(5);
      if (iVar5 < iVar4) {
        FUN_10002610(2,5,25000);
        FUN_10002610(2,4,25000);
      }
      else {
        FUN_10002610(2,4,25000);
        FUN_10002610(2,5,25000);
      }
      goto LAB_100041ba;
    }
    iVar4 = (*DAT_1000c554)(5);
    if ((iVar4 < 5000) && (iVar4 = (*DAT_1000c554)(0), iVar4 != 0)) {
      FUN_10002610(2,5,50000);
    }
    iVar4 = (*DAT_1000c554)(5);
    if ((4999 < iVar4) || (iVar4 = (*DAT_1000c554)(0), iVar4 == 0)) goto LAB_100041ba;
    uVar17 = 50000;
    uVar15 = 5;
  }
  FUN_10002610(2,uVar15,uVar17);
LAB_100041ba:
  iVar4 = (*DAT_1000c554)(0);
  if (150000 < iVar4) {
    FUN_10002610(0,1,100000);
  }
  iVar4 = (*DAT_1000c554)(4);
  if (80000 < iVar4) {
    FUN_10002610(4,1,40000);
  }
  iVar4 = (*DAT_1000c554)(5);
  if (80000 < iVar4) {
    FUN_10002610(5,1,40000);
  }
  return;
}



// Function: FUN_10004230 @ 0x10004230

void FUN_10004230(void)

{
  int iVar1;
  
  iVar1 = (*DAT_1000c554)(3);
  if (0x672 < iVar1) {
    (*DAT_1000c520)(&DAT_1000c368,0x28,100);
    (*DAT_1000c520)(&DAT_1000c370,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c358,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c360,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c378,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c2b0,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c298,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c2a0,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c2b8,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c2c0,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c278,0x32,100);
    (*DAT_1000c520)(&DAT_1000bfe0,0x32,100);
  }
  return;
}



// Function: FUN_10004310 @ 0x10004310

void FUN_10004310(void)

{
  (*DAT_1000c520)(&DAT_10009928,0x5a,100);
  (*DAT_1000c520)(&DAT_10009930,0x5a,100);
  (*DAT_1000c520)(&DAT_10009920,0x5a,100);
  (*DAT_1000c520)(&DAT_1000bf90,10,100);
  (*DAT_1000c520)(&DAT_1000bf80,10,100);
  return;
}



// Function: FUN_10004360 @ 0x10004360

void FUN_10004360(void)

{
  (*DAT_1000c520)(&DAT_1000c1f0,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c1e8,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c1b8,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c1b0,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c0b0,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c0b8,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c0c0,0x1e,0x32);
  (*DAT_1000c520)(&DAT_1000c0c8,0x1e,0x32);
  return;
}



// Function: ProcessMiddleSeaAI @ 0x100043e0

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
  
                    /* 0x43e0  4  ProcessMiddleSeaAI */
  FUN_10002760(0);
  (*DAT_1000c524)(0x13,&DAT_10008010);
  iVar3 = (*DAT_1000c558)(&DAT_1000c1a8);
  iVar4 = (*DAT_1000c554)(3);
  cVar1 = (*DAT_1000c568)(&DAT_1000c1d0);
  (*DAT_1000c558)(&DAT_100096a0);
  (*DAT_1000c564)(&DAT_1000c038);
  (*DAT_1000c558)(&DAT_1000c0f8);
  iVar5 = (*DAT_1000c558)(&DAT_1000c3c8);
  iVar6 = (*DAT_1000c558)(&DAT_1000c348);
  iVar7 = (*DAT_1000c558)(&DAT_100096a0);
  iVar5 = iVar7 + iVar6 + iVar5;
  iVar6 = FUN_10002660();
  if (0 < iVar6) {
    (*DAT_1000c51c)(&DAT_1000c340,0xf,0x14,0x28);
  }
  iVar6 = (*DAT_1000c55c)(&DAT_100098f0);
  iVar7 = (*DAT_1000c558)(&DAT_100098f0);
  if (iVar3 == 0) {
    return;
  }
  (*DAT_1000c51c)(&DAT_1000bff0,1,100,100);
  iVar8 = (*DAT_1000c558)(&DAT_1000bff0);
  if (iVar8 == 0) {
    return;
  }
  (*DAT_1000c520)(&DAT_1000c390,100,100);
  cVar2 = (*DAT_1000c588)();
  if (cVar2 == '\0') {
    if (700 < iVar4) {
      (*DAT_1000c51c)(&DAT_1000c1a8,100,100,100);
      (*DAT_1000c51c)(&DAT_100096a0,100,100,100);
    }
    if ((1000 < iVar4) && (0x1e < iVar5)) {
      FUN_10004230();
    }
    (*DAT_1000c52c)(0,1,1);
  }
  else {
    if (DAT_1000c5ac == 0) {
      if (12000 < iVar4) {
        (*DAT_1000c52c)(9,6,6);
      }
      uVar13 = 5;
      uVar12 = 5;
LAB_10004599:
      (*DAT_1000c52c)(9,uVar12,uVar13);
    }
    else {
      if (DAT_1000c5ac == 1) {
        uVar13 = 4;
        uVar12 = 9;
        goto LAB_10004599;
      }
      if (DAT_1000c5ac == 2) {
        uVar13 = 9;
        uVar12 = 4;
        goto LAB_10004599;
      }
    }
    uVar12 = 0x1c2;
    if (cVar1 != '\0') {
      uVar12 = 0x17c;
    }
    if (iVar3 < 0x19) {
      if (300 < iVar4) {
        (*DAT_1000c51c)(&DAT_1000c1a8,100,100,100);
        goto LAB_100045d7;
      }
    }
    else {
LAB_100045d7:
      if ((300 < iVar4) && ((*DAT_1000c51c)(&DAT_1000c1a8,uVar12,0xe8,100), 400 < iVar4)) {
        (*DAT_1000c51c)(&DAT_100096a0,uVar12,0xf4,100);
      }
    }
    if (0x1e < iVar5) {
      FUN_10004230();
    }
  }
  (*DAT_1000c51c)(&DAT_1000bfd0,1,100,100);
  (*DAT_1000c51c)(&DAT_1000bfd0,2,0x5a,5);
  (*DAT_1000c51c)(&DAT_1000bfd0,3,0x5a,5);
  iVar8 = (*DAT_1000c558)(&DAT_1000c268);
  if (1 < iVar8) {
    (*DAT_1000c51c)(&DAT_1000bfd0,2,0x50,5);
    iVar8 = (*DAT_1000c558)(&DAT_1000bfd0);
    if (1 < iVar8) {
      (*DAT_1000c51c)(&DAT_1000c0f0,1,99,0x5a);
    }
    iVar8 = (*DAT_1000c55c)(&DAT_1000bfd0);
    if (1 < iVar8) {
      (*DAT_1000c51c)(&DAT_10009890,1,100,100);
    }
    (*DAT_1000c520)(&DAT_1000c128,99,100);
  }
  iVar8 = (*DAT_1000c558)(&DAT_1000c1a8);
  if (0x23 < iVar8) {
    (*DAT_1000c51c)(&DAT_10009890,1,100,100);
  }
  (*DAT_1000c51c)(&DAT_1000c200,1,100,100);
  (*DAT_1000c51c)(&DAT_1000c268,1,100,100);
  (*DAT_1000c51c)(&DAT_1000c268,2,100,100);
  (*DAT_1000c51c)(&DAT_1000bfe8,1,0x32,0x32);
  (*DAT_1000c51c)(&DAT_1000c200,2,10,5);
  (*DAT_1000c520)(&DAT_10009678,0x50,100);
  iVar8 = (*DAT_1000c558)(&DAT_1000bf38);
  if (0 < iVar8) {
    (*DAT_1000c51c)(&DAT_1000c110,1,5,3);
  }
  cVar2 = (*DAT_1000c588)();
  if (cVar2 != '\0') {
    (*DAT_1000c51c)(&DAT_1000bf38,1,0x5a,0x5a);
  }
  (*DAT_1000c51c)(&DAT_1000c000,1,99,10);
  (*DAT_1000c51c)(&DAT_10009630,1,0x5a,0x5a);
  if (0x19 < iVar3) {
    (*DAT_1000c51c)(&DAT_1000bff0,2,0x1e,0x1e);
  }
  (*DAT_1000c51c)(&DAT_1000c270,1,0x5a,0x14);
  (*DAT_1000c51c)(&DAT_1000c270,2,0x50,5);
  (*DAT_1000c520)(&DAT_1000c090,0x5a,99);
  (*DAT_1000c520)(&DAT_1000c288,0x5f,100);
  (*DAT_1000c520)(&DAT_1000c1d0,100,100);
  (*DAT_1000c520)(&DAT_1000c058,0x5a,0x5a);
  (*DAT_1000c520)(&DAT_1000c048,0x5f,100);
  (*DAT_1000c520)(&DAT_1000c050,0x5f,100);
  iVar8 = (*DAT_1000c55c)(&DAT_1000c0f0);
  if (((iVar8 == 0) || (cVar2 = (*DAT_1000c568)(&DAT_1000c1d0), cVar2 != '\0')) ||
     ((iVar8 = (*DAT_1000c554)(1), 0xe74 < iVar8 &&
      ((iVar8 = (*DAT_1000c554)(4), 0x157c < iVar8 && (iVar8 = (*DAT_1000c554)(5), 0x20d0 < iVar8)))
      ))) {
    FUN_100025f0(1,0);
    FUN_100025f0(4,0);
    FUN_100025f0(3,0);
    FUN_100025f0(1,0);
  }
  else {
    iVar8 = (*DAT_1000c554)(0);
    if ((iVar8 != 0) && (iVar8 = (*DAT_1000c554)(5), 0x20d0 < iVar8)) {
      iVar8 = (*DAT_1000c554)(5);
      if (14000 < iVar8) {
        FUN_10002610(5,1,5000);
      }
      iVar8 = (*DAT_1000c554)(4);
      if (13000 < iVar8) {
        FUN_10002610(4,1,5000);
      }
    }
  }
  (*DAT_1000c520)(&DAT_100097b8,100,100);
  (*DAT_1000c51c)(&DAT_1000c2f0,1,0x32,0x5a);
  (*DAT_1000c51c)(&DAT_1000c2f0,2,0x14,0x32);
  (*DAT_1000c51c)(&DAT_1000c2f0,3,10,0x32);
  cVar2 = (*DAT_1000c564)(&DAT_10009970);
  if (cVar2 == '\0') {
    iVar9 = FUN_10002640(0,0x1c);
    iVar10 = FUN_10002640(0,0x1b);
    iVar8 = FUN_10002640(0,0x19);
    iVar8 = (iVar9 >> 2) + iVar10 + iVar8;
    if (6 < iVar8) {
      iVar8 = 6;
      puVar11 = &DAT_1000bfa8;
      goto LAB_10004a03;
    }
    if (iVar8 != 0) {
      puVar11 = &DAT_1000bfa8;
      goto LAB_10004a03;
    }
  }
  else {
    iVar8 = 10;
    puVar11 = &DAT_10009900;
LAB_10004a03:
    (*DAT_1000c51c)(puVar11,iVar8,0x32,0x32);
  }
  (*DAT_1000c520)(&DAT_10009970,99,100);
  cVar2 = (*DAT_1000c568)(&DAT_1000c288);
  if (cVar2 != '\0') {
    (*DAT_1000c520)(&DAT_10009970,0x5a,0x5a);
    (*DAT_1000c520)(&DAT_10009888,99,100);
  }
  cVar2 = (*DAT_1000c568)(&DAT_10009970);
  if (cVar2 != '\0') {
    (*DAT_1000c520)(&DAT_10009958,0x5a,0x5a);
    (*DAT_1000c520)(&DAT_10009898,0x46,10);
    FUN_10003320();
  }
  FUN_100025f0(1,0);
  iVar8 = (*DAT_1000c554)(0);
  if ((((14000 < iVar8) && (cVar2 = (*DAT_1000c568)(&DAT_100097b8), cVar2 != '\0')) &&
      (iVar8 = (*DAT_1000c554)(1), iVar8 < 0x1d4c)) &&
     (cVar2 = (*DAT_1000c568)(&DAT_10009970), cVar2 == '\0')) {
    FUN_100025f0(1,1);
  }
  (*DAT_1000c51c)(&DAT_1000c208,3,0x5a,0x5a);
  cVar2 = (*DAT_1000c564)(&DAT_1000c108);
  if (cVar2 != '\0') {
    (*DAT_1000c51c)(&DAT_1000c208,0x14,10,0x5a);
  }
  (*DAT_1000c520)(&DAT_1000c108,99,0x5a);
  (*DAT_1000c520)(&DAT_1000c118,99,100);
  (*DAT_1000c520)(&DAT_1000c300,0x32,0x32);
  (*DAT_1000c520)(&DAT_1000c2e8,0x32,0x32);
  (*DAT_1000c520)(&DAT_1000c2f8,0x32,0x32);
  (*DAT_1000c520)(&DAT_1000c2d8,0x32,0x32);
  (*DAT_1000c520)(&DAT_1000c2e0,0x32,0x32);
  (*DAT_1000c520)(&DAT_1000c2d0,0x32,0x32);
  if (((0x23 < iVar3) && (iVar7 == iVar6)) &&
     ((*DAT_1000c51c)(&DAT_100098f0,1,0x50,10), 0x3c < iVar3)) {
    (*DAT_1000c51c)(&DAT_100098f0,2,0x50,10);
    (*DAT_1000c51c)(&DAT_100098f0,3,0x32,10);
    (*DAT_1000c51c)(&DAT_100098f0,4,0x1e,10);
  }
  if (cVar1 == '\0') {
    (*DAT_1000c51c)(&DAT_1000c178,0x32,1,0x1e);
    (*DAT_1000c51c)(&DAT_1000c290,0x14,1,0x1e);
  }
  else {
    (*DAT_1000c51c)(&DAT_100098e0,0x32,10,100);
    (*DAT_1000c51c)(&DAT_1000c178,0x4b,1,0x1e);
    (*DAT_1000c51c)(&DAT_1000c290,0x1e,1,0x1e);
    (*DAT_1000c520)(&DAT_10009648,0x5f,0x5a);
    (*DAT_1000c520)(&DAT_10009720,0x5f,0x5a);
    (*DAT_1000c520)(&DAT_10009640,0x5f,0x5a);
    cVar2 = (*DAT_1000c564)(&DAT_1000c1b0);
    if (cVar2 != '\0') {
      (*DAT_1000c51c)(&DAT_1000c388,5,0x1e,10);
    }
    cVar2 = (*DAT_1000c564)(&DAT_1000c0c8);
    if (cVar2 != '\0') {
      (*DAT_1000c51c)(&DAT_10009680,10,0x1e,10);
    }
    FUN_10004360();
  }
  cVar2 = (*DAT_1000c564)(&DAT_1000c038);
  if (cVar2 != '\0') {
    cVar2 = (*DAT_1000c564)(&DAT_1000c118);
    if (cVar2 == '\0') {
      uVar13 = 2;
      uVar12 = 2;
    }
    else {
      uVar13 = 4;
      uVar12 = 4;
    }
    (*DAT_1000c52c)(8,uVar12,uVar13);
  }
  iVar3 = (*DAT_1000c558)(&DAT_1000c0f0);
  if (iVar3 != 0) {
    (*DAT_1000c51c)(&DAT_1000c208,6,0x5a,0x5a);
  }
  cVar2 = (*DAT_1000c564)(&DAT_1000c108);
  if (cVar2 != '\0') {
    (*DAT_1000c51c)(&DAT_1000c208,0x14,10,0x5a);
  }
  if (cVar1 != '\0') {
    (*DAT_1000c51c)(&DAT_1000c0f0,2,0x5f,0x14);
    (*DAT_1000c51c)(&DAT_1000c0f0,3,0x5f,0x14);
    (*DAT_1000c51c)(&DAT_1000c0f0,4,0x5f,0x14);
    (*DAT_1000c51c)(&DAT_1000c0f0,5,0x28,0x14);
    (*DAT_1000c51c)(&DAT_1000c0f0,6,0x28,0x14);
    (*DAT_1000c520)(&DAT_1000c038,99,100);
    iVar3 = (*DAT_1000c558)(&DAT_1000c0f8);
    if (0x14 < iVar3) {
      (*DAT_1000c520)(&DAT_1000c220,0x5a,100);
      (*DAT_1000c520)(&DAT_1000c228,0x50,0x46);
    }
    (*DAT_1000c520)(&DAT_1000c108,0x3c,0x5a);
    cVar1 = (*DAT_1000c568)(&DAT_10009920);
    if (cVar1 != '\0') {
      (*DAT_1000c520)(&DAT_1000c180,0x5a,0x5a);
      (*DAT_1000c520)(&DAT_1000c190,0x5a,0x5a);
      (*DAT_1000c520)(&DAT_1000c198,0x46,0x5a);
      (*DAT_1000c520)(&DAT_1000c188,0x46,0x5a);
    }
  }
  (*DAT_1000c520)(&DAT_100097b8,99,100);
  (*DAT_1000c520)(&DAT_100098f8,0x3c,0x5a);
  (*DAT_1000c520)(&DAT_1000c168,100,100);
  if (0x15e < iVar5) {
    (*DAT_1000c51c)(&DAT_1000c0f8,500,10,100);
    FUN_10004310();
  }
  iVar3 = (*DAT_1000c55c)(&DAT_10009890);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = (*DAT_1000c554)(0);
  iVar6 = (*DAT_1000c554)(2);
  iVar7 = (*DAT_1000c554)(4);
  iVar5 = (*DAT_1000c554)(5);
  iVar8 = (*DAT_1000c554)(1);
  if (iVar4 < 0x96) {
    if (iVar6 < 0x1389) {
      if (iVar6 < 0x3e9) {
        if (iVar3 < 0x1389) {
          if (iVar3 < 0x3e9) {
            if (iVar5 < 0x7d1) {
              if (iVar7 < 0x7d1) {
                if (iVar8 < 0x3e9) goto LAB_10004fa3;
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
    FUN_10002610(uVar12,3,uVar13);
  }
LAB_10004fa3:
  iVar3 = (*DAT_1000c55c)(&DAT_1000bf38);
  if (((iVar3 != 0) && (1000 < iVar8)) && (cVar1 = (*DAT_1000c568)(&DAT_1000c288), cVar1 == '\0')) {
    if (3000 < iVar7) {
      FUN_10002610(4,3,2000);
    }
    if (4000 < iVar5) {
      FUN_10002610(5,3,3000);
    }
  }
  iVar3 = (*DAT_1000c554)(2);
  if (120000 < iVar3) {
    FUN_10002610(2,1,100000);
  }
  iVar3 = (*DAT_1000c554)(0);
  if (100000 < iVar3) {
    FUN_10002610(0,1,90000);
  }
  iVar3 = (*DAT_1000c558)(&DAT_1000c200);
  if ((iVar3 != 0) && (cVar1 = (*DAT_1000c568)(&DAT_1000c1d0), cVar1 == '\0')) {
    iVar3 = (*DAT_1000c554)(5);
    if ((9000 < iVar3) &&
       ((iVar3 = (*DAT_1000c554)(0), iVar3 != 0 && (iVar3 = (*DAT_1000c554)(1), iVar3 < 4000)))) {
      iVar3 = (*DAT_1000c554)(5);
      if (12000 < iVar3) {
        FUN_10002610(5,1,3000);
      }
      iVar3 = (*DAT_1000c554)(4);
      if (8000 < iVar3) {
        FUN_10002610(4,1,2000);
      }
      iVar3 = (*DAT_1000c554)(2);
      if (20000 < iVar3) {
        FUN_10002610(2,1,12000);
      }
      iVar3 = (*DAT_1000c554)(3);
      if (30000 < iVar3) {
        FUN_10002610(3,1,15000);
      }
    }
    iVar3 = (*DAT_1000c554)(5);
    if (((9000 < iVar3) && (iVar3 = (*DAT_1000c554)(1), iVar3 != 0)) &&
       (iVar3 = (*DAT_1000c554)(1), 4000 < iVar3)) {
      iVar3 = (*DAT_1000c554)(5);
      if (12000 < iVar3) {
        FUN_10002610(5,4,3000);
      }
      iVar3 = (*DAT_1000c554)(2);
      if (20000 < iVar3) {
        FUN_10002610(2,4,12000);
      }
      iVar3 = (*DAT_1000c554)(3);
      if (30000 < iVar3) {
        FUN_10002610(3,4,15000);
      }
    }
  }
  iVar3 = (*DAT_1000c518)();
  if (*(int *)(&DAT_1000c624 + iVar3 * 4) == 0) {
    FUN_10002610(5,3,4000);
    iVar3 = (*DAT_1000c518)();
    *(undefined4 *)(&DAT_1000c624 + iVar3 * 4) = 1;
  }
  return;
}



// Function: FUN_10005220 @ 0x10005220

void FUN_10005220(void)

{
  (*DAT_1000c51c)(&DAT_1000bff0,1,100,100);
  (*DAT_1000c51c)(&DAT_1000bfd0,1,100,100);
  (*DAT_1000c51c)(&DAT_1000bfe8,1,100,100);
  (*DAT_1000c51c)(&DAT_10009890,1,100,100);
  return;
}



// Function: FUN_10005270 @ 0x10005270

undefined4 __cdecl FUN_10005270(undefined *param_1)

{
  char cVar1;
  
  if (param_1 == &DAT_100096a0) {
    cVar1 = (*DAT_1000c564)(&DAT_1000c358);
    if (cVar1 != '\0') {
      cVar1 = (*DAT_1000c564)(&DAT_1000c2a0);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100052b0 @ 0x100052b0

void FUN_100052b0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*DAT_1000c558)(&DAT_1000c290);
  if (iVar2 == 0) {
    iVar2 = (*DAT_1000c558)(&DAT_100098e0);
    if (iVar2 != 0) goto LAB_100052d4;
  }
  else {
LAB_100052d4:
    (*DAT_1000c520)(&DAT_10009968,100,100);
    (*DAT_1000c520)(&DAT_1000c210,100,100);
    (*DAT_1000c520)(&DAT_1000c218,100,100);
  }
  iVar2 = (*DAT_1000c558)(&DAT_1000c3c8);
  if (iVar2 < 0x15) {
    iVar2 = (*DAT_1000c558)(&DAT_1000c348);
    if (iVar2 < 0x15) {
      iVar2 = (*DAT_1000c558)(&DAT_100096a0);
      if (iVar2 < 0x8d) goto LAB_1000539d;
    }
  }
  (*DAT_1000c520)(&DAT_10009640,0x5f,100);
  (*DAT_1000c520)(&DAT_10009648,0x5f,100);
  iVar2 = (*DAT_1000c558)(&DAT_1000c3c8);
  if (iVar2 < 0x8d) {
    iVar2 = (*DAT_1000c558)(&DAT_1000c348);
    if (0x3c < iVar2) goto LAB_1000538b;
    uVar3 = 0xf;
  }
  else {
LAB_1000538b:
    uVar3 = 0x5f;
  }
  (*DAT_1000c520)(&DAT_10009720,uVar3,100);
LAB_1000539d:
  iVar2 = (*DAT_1000c558)(&DAT_100096a0);
  if (0x19 < iVar2) {
    (*DAT_1000c520)(&DAT_1000c368,0x50,100);
    (*DAT_1000c520)(&DAT_1000c370,0x55,100);
    (*DAT_1000c520)(&DAT_1000c358,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c2b0,0x50,100);
    (*DAT_1000c520)(&DAT_1000c298,0x55,100);
    (*DAT_1000c520)(&DAT_1000c2a0,0x5a,100);
    iVar2 = (*DAT_1000c558)(&DAT_100096a0);
    if (0x78 < iVar2) {
      (*DAT_1000c520)(&DAT_1000c360,0x5a,100);
      (*DAT_1000c520)(&DAT_1000c378,0x5a,100);
      (*DAT_1000c520)(&DAT_1000c2b8,0x5a,100);
      (*DAT_1000c520)(&DAT_1000c2c0,0x5a,100);
    }
  }
  iVar2 = (*DAT_1000c558)(&DAT_1000c0f8);
  if (0x1e < iVar2) {
    (*DAT_1000c520)(&DAT_10009928,0x5a,100);
    (*DAT_1000c520)(&DAT_10009930,0x5a,100);
    (*DAT_1000c520)(&DAT_10009920,0x5a,100);
    (*DAT_1000c520)(&DAT_1000bf90,0x1e,100);
    (*DAT_1000c520)(&DAT_1000bf80,0x1e,100);
    (*DAT_1000c520)(&DAT_1000bf88,0x1e,100);
    (*DAT_1000c520)(&DAT_1000c220,0x5a,100);
    iVar2 = (*DAT_1000c558)(&DAT_1000c0f8);
    if (100 < iVar2) {
      (*DAT_1000c520)(&DAT_1000c228,0x5a,100);
    }
  }
  iVar2 = (*DAT_1000c558)(&DAT_10009718);
  if (4 < iVar2) {
    (*DAT_1000c520)(&DAT_1000c278,0x5a,100);
    (*DAT_1000c520)(&DAT_1000bfe0,0x5a,100);
  }
  iVar2 = (*DAT_1000c558)(&DAT_1000c3c8);
  if (0x14 < iVar2) {
    (*DAT_1000c520)(&DAT_1000c148,0x50,100);
    (*DAT_1000c520)(&DAT_1000c140,0x55,100);
    (*DAT_1000c520)(&DAT_1000c138,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c030,0x50,100);
    (*DAT_1000c520)(&DAT_1000c028,0x55,100);
    (*DAT_1000c520)(&DAT_1000c020,0x5a,100);
    iVar2 = (*DAT_1000c558)(&DAT_1000c3c8);
    if (0x32 < iVar2) {
      (*DAT_1000c520)(&DAT_1000c130,0x5f,100);
      (*DAT_1000c520)(&DAT_1000c120,0x5f,100);
      (*DAT_1000c520)(&DAT_1000c170,0x5f,100);
      (*DAT_1000c520)(&DAT_1000c018,0x5f,100);
      (*DAT_1000c520)(&DAT_1000c010,0x5f,100);
      (*DAT_1000c520)(&DAT_1000c008,0x5f,100);
    }
  }
  iVar2 = (*DAT_1000c558)(&DAT_1000c348);
  if (0x14 < iVar2) {
    (*DAT_1000c520)(&DAT_10009760,0x5a,100);
    (*DAT_1000c520)(&DAT_10009758,0x5a,100);
    (*DAT_1000c520)(&DAT_10009750,0x5a,100);
    (*DAT_1000c520)(&DAT_100096d0,0x5a,100);
    (*DAT_1000c520)(&DAT_100096c8,0x5a,100);
    (*DAT_1000c520)(&DAT_100096c0,0x5f,100);
    (*DAT_1000c520)(&DAT_100096b8,0x5f,100);
    (*DAT_1000c520)(&DAT_10009690,0x5f,100);
    (*DAT_1000c520)(&DAT_10009688,0x5f,100);
    cVar1 = (*DAT_1000c568)(&DAT_10009688);
    if (cVar1 != '\0') {
      (*DAT_1000c520)(&DAT_10009738,0x5f,100);
      (*DAT_1000c520)(&DAT_10009730,0x5f,100);
      (*DAT_1000c520)(&DAT_10009728,0x5f,100);
    }
  }
  iVar2 = (*DAT_1000c558)(&DAT_100096a8);
  if (0x14 < iVar2) {
    iVar2 = (*DAT_1000c558)(&DAT_10009698);
    if (iVar2 < 0x14) {
      (*DAT_1000c520)(&DAT_10009918,0x50,100);
      (*DAT_1000c520)(&DAT_10009910,0x55,100);
      (*DAT_1000c520)(&DAT_10009908,0x5a,100);
      (*DAT_1000c520)(&DAT_100098d0,0x5f,100);
      (*DAT_1000c520)(&DAT_100098c8,0x5f,100);
      (*DAT_1000c520)(&DAT_100098c0,0x5f,100);
      (*DAT_1000c520)(&DAT_1000c220,0x5a,100);
    }
  }
  iVar2 = (*DAT_1000c558)(&DAT_10009698);
  if (0x14 < iVar2) {
    (*DAT_1000c520)(&DAT_10009670,0x50,100);
    (*DAT_1000c520)(&DAT_10009668,0x55,100);
    (*DAT_1000c520)(&DAT_10009660,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c330,0x5f,100);
    (*DAT_1000c520)(&DAT_1000c328,0x5f,100);
    (*DAT_1000c520)(&DAT_1000c320,0x5f,100);
    (*DAT_1000c520)(&DAT_1000c3a8,10,100);
    (*DAT_1000c520)(&DAT_1000c3a0,0xf,100);
    (*DAT_1000c520)(&DAT_1000c3f0,0x14,100);
    (*DAT_1000c520)(&DAT_1000c3e8,0x19,100);
    (*DAT_1000c520)(&DAT_1000c3e0,0x19,100);
    (*DAT_1000c520)(&DAT_1000c3d8,0x19,100);
    (*DAT_1000c520)(&DAT_1000c220,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c228,0x5a,100);
  }
  iVar2 = (*DAT_1000c558)(&DAT_1000bf98);
  if (0x19 < iVar2) {
    (*DAT_1000c520)(&DAT_100096f8,0x5a,100);
    (*DAT_1000c520)(&DAT_10009700,0x5a,100);
    (*DAT_1000c520)(&DAT_10009708,0x5a,100);
    (*DAT_1000c520)(&DAT_10009710,0x5a,100);
    (*DAT_1000c520)(&DAT_100096d8,0x5a,100);
    (*DAT_1000c520)(&DAT_100096e8,0x5a,100);
    (*DAT_1000c520)(&DAT_100097a0,0x5a,100);
    (*DAT_1000c520)(&DAT_100097a8,0x5a,100);
    (*DAT_1000c520)(&DAT_100097b0,0x5a,100);
    (*DAT_1000c520)(&DAT_10009788,0x5a,100);
    (*DAT_1000c520)(&DAT_10009790,0x5a,100);
    (*DAT_1000c520)(&DAT_10009798,0x5a,100);
    iVar2 = (*DAT_1000c558)(&DAT_1000bf98);
    if (iVar2 < 0x3d) {
      (*DAT_1000c520)(&DAT_1000c040,0xf,100);
      uVar3 = 0xf;
    }
    else {
      (*DAT_1000c520)(&DAT_1000c040,0x5a);
      uVar3 = 0x5a;
    }
    (*DAT_1000c520)(&DAT_1000c0a0,uVar3,100);
    cVar1 = (*DAT_1000c568)(&DAT_1000c040);
    if (cVar1 != '\0') {
      cVar1 = (*DAT_1000c568)(&DAT_1000c0a0);
      if (cVar1 != '\0') {
        (*DAT_1000c520)(&DAT_1000c098,0x5a,100);
      }
    }
    (*DAT_1000c520)(&DAT_1000c220,0x5a,100);
    (*DAT_1000c520)(&DAT_1000c228,0x5a,100);
  }
  cVar1 = (*DAT_1000c564)(&DAT_1000c320);
  if (cVar1 != '\0') {
    (*DAT_1000c520)(&DAT_1000c188,0x5a,100);
    cVar1 = (*DAT_1000c568)(&DAT_1000c188);
    if (cVar1 != '\0') {
      (*DAT_1000c520)(&DAT_1000c198,0x5a,100);
      cVar1 = (*DAT_1000c568)(&DAT_1000c198);
      if (cVar1 != '\0') {
        (*DAT_1000c520)(&DAT_1000c190,0x5a,100);
        cVar1 = (*DAT_1000c568)(&DAT_1000c190);
        if (cVar1 != '\0') {
          (*DAT_1000c520)(&DAT_1000c180,0x5a,100);
        }
      }
    }
  }
  return;
}



// Function: FUN_10005a90 @ 0x10005a90

void FUN_10005a90(void)

{
  char cVar1;
  int iVar2;
  
  (*DAT_1000c520)(&DAT_1000c390,0x32,100);
  iVar2 = (*DAT_1000c558)(&DAT_1000bf38);
  if (iVar2 != 0) {
    (*DAT_1000c520)(&DAT_10009678,100,100);
  }
  (*DAT_1000c520)(&DAT_1000c090,100,100);
  iVar2 = FUN_10005270(&DAT_100096a0);
  if ((iVar2 != 0) || ((DAT_1000bf70 != 0 && (DAT_1000bf70 != 5)))) {
    (*DAT_1000c520)(&DAT_1000c288,0x5a,100);
  }
  iVar2 = (*DAT_1000c558)(&DAT_1000c000);
  if (iVar2 != 0) {
    (*DAT_1000c520)(&DAT_1000c058,100,100);
  }
  cVar1 = (*DAT_1000c568)(&DAT_1000c168);
  if (cVar1 != '\0') {
    (*DAT_1000c520)(&DAT_1000c048,100,100);
  }
  (*DAT_1000c520)(&DAT_1000c168,0x5c,100);
  (*DAT_1000c520)(&DAT_1000c118,0x62,100);
  iVar2 = (*DAT_1000c558)(&DAT_1000c0f0);
  if (iVar2 != 0) {
    (*DAT_1000c520)(&DAT_1000c1d0,0x62,100);
  }
  (*DAT_1000c520)(&DAT_1000c038,0x62,100);
  iVar2 = (*DAT_1000c558)(&DAT_1000c270);
  if (iVar2 != 0) {
    (*DAT_1000c520)(&DAT_100098f8,100,100);
  }
  return;
}



// Function: FUN_10005bd0 @ 0x10005bd0

void FUN_10005bd0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  (*DAT_1000c51c)(&DAT_1000c270,3,100,100);
  iVar2 = (*DAT_1000c55c)(&DAT_1000c000);
  if (iVar2 != 0) {
    (*DAT_1000c51c)(&DAT_1000bff0,2,100,100);
    (*DAT_1000c51c)(&DAT_1000bfe8,4,100,100);
  }
  (*DAT_1000c51c)(&DAT_1000bff0,1,100,100);
  (*DAT_1000c51c)(&DAT_1000bfd0,1,100,100);
  if (*(int *)(&DAT_1000bfb0 + DAT_1000c2cc * 4) == 0) {
    FUN_10005220();
    iVar2 = (*DAT_1000c55c)(&DAT_10009890);
    if (iVar2 == 0) {
      return;
    }
  }
  (*DAT_1000c51c)(&DAT_1000c200,1,100,100);
  (*DAT_1000c51c)(&DAT_1000bfd0,2,100,100);
  iVar2 = (*DAT_1000c55c)(&DAT_1000bfd0);
  if ((iVar2 < 2) && (iVar2 = FUN_10002670(), iVar2 != 0)) {
    return;
  }
  (*DAT_1000c51c)(&DAT_1000c268,2,100,100);
  iVar2 = (*DAT_1000c55c)(&DAT_1000c268);
  iVar3 = (*DAT_1000c558)(&DAT_1000c268);
  if (iVar3 == iVar2 || iVar3 - iVar2 < 0) {
    (*DAT_1000c51c)(&DAT_1000bf38,1,100,100);
    iVar2 = FUN_10002780();
    if (iVar2 < 3) {
      (*DAT_1000c51c)(&DAT_1000c000,1,100,100);
      iVar2 = (*DAT_1000c55c)(&DAT_1000c000);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_10005220();
    (*DAT_1000c51c)(&DAT_1000bfd0,4,100,100);
    iVar2 = (*DAT_1000c55c)(&DAT_1000bfd0);
    if (2 < iVar2) {
      (*DAT_1000c51c)(&DAT_1000c0f0,3,100,100);
      iVar2 = (*DAT_1000c558)(&DAT_1000c270);
      if (iVar2 != 0) {
        (*DAT_1000c51c)(&DAT_1000c0f0,4,100,100);
      }
      (*DAT_1000c51c)(&DAT_10009630,1,100,100);
      (*DAT_1000c51c)(&DAT_10009630,3,0x28,100);
      cVar1 = (*DAT_1000c564)(&DAT_100098f8);
      if (cVar1 != '\0') {
        (*DAT_1000c51c)(&DAT_1000c0f0,5,100,100);
      }
      (*DAT_1000c51c)(&DAT_1000c110,1,100,100);
    }
  }
  return;
}



// Function: FUN_10005df0 @ 0x10005df0

void __fastcall FUN_10005df0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = (*DAT_1000c558)(&DAT_1000c290,param_1);
  if (iVar2 < 0x28) {
    FUN_100026d0(DAT_1000c2cc + 8,0);
  }
  iVar2 = (*DAT_1000c558)(&DAT_1000c290);
  if (iVar2 < 0x9d) {
    iVar2 = (*DAT_1000c55c)(&DAT_1000c0f0);
    if (iVar2 == 0) goto LAB_10005e52;
  }
  FUN_100026d0(DAT_1000c2cc + 8,1);
LAB_10005e52:
  iVar2 = 2;
  do {
    (*DAT_1000c51c)(&DAT_1000c1a8,1000,0x14,100);
    iVar3 = (*DAT_1000c558)(&DAT_100096a0);
    if (iVar3 < 0x8c) {
      (*DAT_1000c51c)(&DAT_100096a0,1000,0x14,100);
    }
    else {
      (*DAT_1000c51c)(&DAT_100096a0,1000,0x14,0x28);
      (*DAT_1000c51c)(&DAT_1000c0f8,1000,0x14,100);
    }
    iVar3 = FUN_100026f0(DAT_1000c2cc + 8);
    if (iVar3 == 0) {
      iVar3 = FUN_10002780();
      if (iVar3 < 1) {
        (*DAT_1000c51c)(&DAT_1000c290,0xa0,0x14,100);
      }
    }
    if (DAT_1000c4d0 == (code *)0x0) {
LAB_10005f25:
      iVar3 = (*DAT_1000c554)(5);
      if (2000 < iVar3) {
        iVar3 = (*DAT_1000c554)(4);
        if (2000 < iVar3) {
          iVar3 = 0x1e;
          do {
            (*DAT_1000c51c)(&DAT_100098a0,0x1e,10,100);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      iVar3 = (*DAT_1000c4d0)(DAT_1000c2cc & 0xff,&DAT_100098a0,1);
      if (iVar3 < 0x78) goto LAB_10005f25;
    }
    cVar1 = (*DAT_1000c564)(&DAT_1000c038);
    if (cVar1 == '\0') {
      uVar4 = 100;
    }
    else {
      uVar4 = 0x1e;
    }
    (*DAT_1000c51c)(&DAT_1000c3c8,1000,0x14,uVar4);
    (*DAT_1000c51c)(&DAT_10009698,1000,0x14,100);
    (*DAT_1000c51c)(&DAT_1000bf98,1000,0x14,100);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}



// Function: FUN_10005fd0 @ 0x10005fd0

void __fastcall FUN_10005fd0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*DAT_1000c55c)(&DAT_10009890,param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_10002670();
    if (iVar2 == 3) {
      iVar2 = FUN_100026f0(DAT_1000c2cc);
      if (iVar2 == 0) {
        FUN_10002610(2,3,500000);
        FUN_10002610(0,3,80000);
        FUN_100026d0(DAT_1000c2cc,1);
        return;
      }
    }
    else {
      iVar2 = (*DAT_1000c55c)(&DAT_10009890);
      if (iVar2 != 0) {
        iVar2 = FUN_100026f0(DAT_1000c2cc);
        if (iVar2 == 0) {
          FUN_10002610(5,3,4000);
          iVar2 = FUN_10002670();
          if (iVar2 == 2) {
            FUN_10002610(4,0,1000);
            FUN_10002610(4,2,1000);
          }
          iVar2 = FUN_10002670();
          if (iVar2 == 1) {
            FUN_10002610(4,0,600);
            FUN_10002610(4,2,600);
          }
          FUN_100026d0(DAT_1000c2cc,1);
        }
        cVar1 = (*DAT_1000c568)(&DAT_1000c288);
        if (cVar1 != '\0') {
          cVar1 = (*DAT_1000c568)(&DAT_1000c168);
          if (cVar1 == '\0') {
            iVar2 = (*DAT_1000c55c)(&DAT_1000bf38);
            if (iVar2 != 0) {
              if (DAT_1000c4d4 == (code *)0x0) {
                iVar2 = 0;
              }
              else {
                iVar2 = (*DAT_1000c4d4)(DAT_1000c2cc & 0xff,&DAT_1000c168,5);
              }
              FUN_10002f90(5,(iVar2 * 0xb) / 10,0);
            }
          }
        }
        cVar1 = (*DAT_1000c568)(&DAT_1000c168);
        if (cVar1 != '\0') {
          cVar1 = (*DAT_1000c568)(&DAT_1000c038);
          if (cVar1 == '\0') {
            if (DAT_1000c4d4 == (code *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = (*DAT_1000c4d4)(DAT_1000c2cc & 0xff,&DAT_1000c038,3);
            }
            uVar3 = FUN_10002f90(3,(iVar2 * 0xb) / 10,2);
            if ((char)uVar3 != '\0') {
              if (DAT_1000c4d4 == (code *)0x0) {
                iVar2 = 0;
              }
              else {
                iVar2 = (*DAT_1000c4d4)(DAT_1000c2cc & 0xff,&DAT_1000c038,1);
              }
              uVar3 = FUN_10002f90(1,(iVar2 * 0x69) / 100,2);
              if ((char)uVar3 != '\0') {
                if (DAT_1000c4d4 == (code *)0x0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = (*DAT_1000c4d4)(DAT_1000c2cc & 0xff,&DAT_1000c038,4);
                }
                FUN_10002f90(4,(iVar2 * 0xb) / 10,2);
              }
            }
          }
        }
        iVar2 = (*DAT_1000c554)(2);
        if (100000 < iVar2) {
          FUN_10002610(0,2,5000);
          uVar3 = (*DAT_1000c554)(2);
          FUN_10002610(2,1,uVar3);
        }
        iVar2 = (*DAT_1000c554)(0);
        if (100000 < iVar2) {
          FUN_10002610(2,0,5000);
          uVar3 = (*DAT_1000c554)(0);
          FUN_10002610(0,1,uVar3);
        }
      }
    }
  }
  return;
}



// Function: FUN_100062f0 @ 0x100062f0

void __fastcall FUN_100062f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*DAT_1000c52c)(0,4,4,param_1);
  cVar1 = (*DAT_1000c588)();
  if (cVar1 == '\0') {
    return;
  }
  (*DAT_1000c52c)(9,4,4);
  iVar2 = FUN_10002670();
  if (iVar2 == 3) {
    return;
  }
  cVar1 = (*DAT_1000c588)();
  if (cVar1 == '\0') {
    (*DAT_1000c52c)(0,6,3);
    return;
  }
  (*DAT_1000c52c)(9,4,4);
  cVar1 = (*DAT_1000c568)(&DAT_1000c118);
  if (cVar1 == '\0') {
    if (DAT_1000c4d4 == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_1000c4d4)((undefined1)DAT_1000c2cc,&DAT_1000c118,3);
    }
    iVar3 = (*DAT_1000c554)(3);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 4;
      uVar4 = 4;
    }
    else {
      uVar5 = 6;
      uVar4 = 6;
    }
    (*DAT_1000c52c)(9,uVar4,uVar5);
  }
  cVar1 = (*DAT_1000c568)(&DAT_1000c038);
  if (cVar1 == '\0') {
    if (DAT_1000c4d4 == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_1000c4d4)((undefined1)DAT_1000c2cc,&DAT_1000c038,3);
    }
    iVar3 = (*DAT_1000c554)(3);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 9;
      uVar4 = 2;
    }
    else {
      uVar5 = 6;
      uVar4 = 6;
    }
    (*DAT_1000c52c)(9,uVar4,uVar5);
  }
  cVar1 = (*DAT_1000c568)(&DAT_1000c168);
  if (cVar1 == '\0') {
    if (DAT_1000c4d4 == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_1000c4d4)((undefined1)DAT_1000c2cc,&DAT_1000c168,3);
    }
    iVar3 = (*DAT_1000c554)(3);
    if (iVar3 < (iVar2 * 0xd) / 10) {
      uVar4 = 9;
    }
    else {
      uVar4 = 6;
    }
    (*DAT_1000c52c)(uVar4,9,1);
  }
  cVar1 = (*DAT_1000c568)(&DAT_1000c358);
  if (((cVar1 == '\0') || (cVar1 = (*DAT_1000c568)(&DAT_1000c2a0), cVar1 == '\0')) &&
     (iVar2 = (*DAT_1000c554)(3), iVar2 < 9000)) {
    (*DAT_1000c52c)(9,4,1);
  }
  iVar2 = (*DAT_1000c558)(&DAT_1000c000);
  if ((iVar2 == 0) && (iVar2 = FUN_10002780(), iVar2 < 2)) {
    if (DAT_1000c4d0 == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_1000c4d0)((undefined1)DAT_1000c2cc,&DAT_1000c000,2);
    }
    iVar3 = (*DAT_1000c554)(2);
    if (iVar3 < (iVar2 * 0xb) / 10) {
      uVar5 = 3;
      uVar4 = 5;
    }
    else {
      uVar5 = 1;
      uVar4 = 7;
    }
    (*DAT_1000c52c)(9,uVar4,uVar5);
  }
  cVar1 = (*DAT_1000c568)(&DAT_1000c288);
  if (cVar1 == '\0') {
    (*DAT_1000c52c)(9,1,1);
  }
  cVar1 = (*DAT_1000c568)(&DAT_1000c090);
  if ((cVar1 == '\0') || (cVar1 = (*DAT_1000c568)(&DAT_10009678), cVar1 == '\0')) {
    (*DAT_1000c52c)(9,4,1);
  }
  iVar2 = (*DAT_1000c558)(&DAT_1000bf38);
  if (iVar2 == 0) {
    (*DAT_1000c52c)(6,4,4);
  }
  cVar1 = (*DAT_1000c568)(&DAT_1000c390);
  if (cVar1 != '\0') {
    return;
  }
  (*DAT_1000c52c)(9,1,1);
  return;
}



// Function: FUN_10006630 @ 0x10006630

void FUN_10006630(void)

{
  char cVar1;
  
  FUN_10002720(&DAT_1000c5b0);
  cVar1 = (*DAT_1000c568)(&DAT_1000c358);
  if (cVar1 != '\0') {
    cVar1 = (*DAT_1000c568)(&DAT_1000c2a0);
    if (cVar1 != '\0') {
      FUN_10002720(&DAT_1000814c);
      return;
    }
  }
  if (((DAT_1000bf70 == 2) || (DAT_1000bf70 == 3)) || (DAT_1000bf70 == 4)) {
    FUN_10002720(&DAT_100081b8);
  }
  else {
    cVar1 = (*DAT_1000c568)(&DAT_1000c288);
    if (cVar1 != '\0') {
      cVar1 = (*DAT_1000c568)(&DAT_1000c168);
      if (cVar1 == '\0') {
        FUN_10002720(&DAT_1000c5b0);
        return;
      }
    }
    cVar1 = (*DAT_1000c568)(&DAT_1000c168);
    if (cVar1 != '\0') {
      FUN_10002720(&DAT_100081b8);
      return;
    }
  }
  return;
}



// Function: FUN_100066e0 @ 0x100066e0

void FUN_100066e0(void)

{
  int iVar1;
  
  FUN_10002760(1);
  iVar1 = FUN_10005270(&DAT_100096a0);
  if (iVar1 != 0) {
    FUN_10002760(0);
  }
  iVar1 = FUN_10002770();
  if ((iVar1 < 1) && (iVar1 = (*DAT_1000c55c)(&DAT_100098f0), iVar1 < 1)) {
    return;
  }
  FUN_10002760(0);
  return;
}



// Function: FUN_10006730 @ 0x10006730

void FUN_10006730(void)

{
  char cVar1;
  
  cVar1 = (*DAT_1000c564)(&DAT_1000c1b0);
  if (cVar1 != '\0') {
    (*DAT_1000c51c)(&DAT_1000c388,0x1e,0x1e,0x3c);
  }
  cVar1 = (*DAT_1000c564)(&DAT_1000c0c8);
  if (cVar1 != '\0') {
    (*DAT_1000c51c)(&DAT_10009680,0x14,0x1e,0x3c);
  }
  (*DAT_1000c51c)(&DAT_100098e0,0x3c,0x50,100);
  (*DAT_1000c520)(&DAT_1000c1f0,0x1e,100);
  (*DAT_1000c520)(&DAT_1000c1e8,0x1e,100);
  (*DAT_1000c520)(&DAT_1000c1b8,0x1e,100);
  (*DAT_1000c520)(&DAT_1000c1b0,0x1e,100);
  (*DAT_1000c520)(&DAT_1000c1c0,0x1e,100);
  (*DAT_1000c520)(&DAT_1000c0b0,0x1e,100);
  (*DAT_1000c520)(&DAT_1000c0b8,0x1e,100);
  (*DAT_1000c520)(&DAT_1000c0c0,0x1e,100);
  (*DAT_1000c520)(&DAT_1000c0c8,0x1e,100);
  return;
}



// Function: FUN_10006820 @ 0x10006820

void FUN_10006820(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = (*DAT_1000c55c)(&DAT_100098f0);
  iVar3 = (*DAT_1000c558)(&DAT_1000c268);
  iVar4 = (*DAT_1000c55c)(&DAT_1000c268);
  iVar5 = (*DAT_1000c558)(&DAT_1000bf38);
  iVar6 = (*DAT_1000c55c)(&DAT_1000bf38);
  iVar7 = (*DAT_1000c558)(&DAT_100098f0);
  if (((((iVar5 - iVar6) - iVar4) - iVar2) + iVar3 + iVar7 == 0) && (0x28 < DAT_1000c1c8)) {
    (*DAT_1000c51c)(&DAT_100098f0,4,0x32,100);
    cVar1 = (*DAT_1000c568)(&DAT_1000c1d0);
    if (cVar1 != '\0') {
      (*DAT_1000c51c)(&DAT_100098f0,6,0x32,100);
    }
    cVar1 = (*DAT_1000c568)(&DAT_1000c038);
    if (cVar1 != '\0') {
      (*DAT_1000c51c)(&DAT_100098f0,8,0x32,100);
    }
  }
  (*DAT_1000c520)(&DAT_1000c300,0x32,100);
  (*DAT_1000c520)(&DAT_1000c2e8,0x28,100);
  (*DAT_1000c520)(&DAT_1000c2f8,0x1e,100);
  (*DAT_1000c520)(&DAT_1000c2d8,0x14,100);
  (*DAT_1000c520)(&DAT_1000c2e0,0xf,100);
  (*DAT_1000c520)(&DAT_1000c2d0,10,100);
  return;
}



// Function: FUN_10006950 @ 0x10006950

void FUN_10006950(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = (*DAT_1000c55c)(&DAT_1000c270);
  iVar3 = (*DAT_1000c558)(&DAT_1000c270);
  if (iVar3 == iVar2) {
    (*DAT_1000c51c)(&DAT_1000c270,5,100,100);
  }
  (*DAT_1000c51c)(&DAT_1000bfd0,1,100,100);
  (*DAT_1000c51c)(&DAT_1000c200,1,100,100);
  (*DAT_1000c51c)(&DAT_1000c268,2,100,100);
  iVar2 = (*DAT_1000c55c)(&DAT_1000c268);
  iVar3 = (*DAT_1000c558)(&DAT_1000c268);
  if (iVar3 == iVar2) {
    (*DAT_1000c51c)(&DAT_1000bf38,1,100,100);
    iVar2 = (*DAT_1000c55c)(&DAT_1000bf38);
    if (iVar2 != 0) {
      (*DAT_1000c51c)(&DAT_1000bfe8,1,100,100);
      (*DAT_1000c51c)(&DAT_1000bff0,1,100,100);
      (*DAT_1000c51c)(&DAT_10009890,1,100,100);
      iVar2 = (*DAT_1000c55c)(&DAT_10009890);
      if (iVar2 != 0) {
        (*DAT_1000c51c)(&DAT_1000c000,1,100,100);
        (*DAT_1000c51c)(&DAT_1000c110,1,100,100);
        (*DAT_1000c51c)(&DAT_10009630,1,100,100);
        (*DAT_1000c51c)(&DAT_1000c0f0,1,100,100);
        cVar1 = (*DAT_1000c568)(&DAT_1000c038);
        if (cVar1 != '\0') {
          iVar2 = (*DAT_1000c55c)(&DAT_1000bfd0);
          iVar3 = (*DAT_1000c558)(&DAT_1000bfd0);
          if (iVar3 == iVar2) {
            iVar2 = FUN_10002730(1);
            if (iVar2 < 100) {
              uVar4 = 6;
            }
            else {
              uVar4 = 4;
            }
            (*DAT_1000c51c)(&DAT_1000bfd0,uVar4,100,100);
          }
          iVar2 = (*DAT_1000c55c)(&DAT_1000c0f0);
          iVar3 = (*DAT_1000c558)(&DAT_1000c0f0);
          if (iVar3 == iVar2) {
            (*DAT_1000c51c)(&DAT_1000c0f0,7,100,100);
          }
          iVar2 = (*DAT_1000c55c)(&DAT_10009630);
          iVar3 = (*DAT_1000c558)(&DAT_10009630);
          if (iVar3 == iVar2) {
            (*DAT_1000c51c)(&DAT_10009630,3,100,100);
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_10006b60 @ 0x10006b60

void FUN_10006b60(void)

{
  int iVar1;
  
  FUN_10002760(1);
  iVar1 = (*DAT_1000c558)(&DAT_100098a0);
  if (iVar1 < 4) {
    FUN_100026d0(DAT_1000c2cc + 8,0);
  }
  iVar1 = (*DAT_1000c558)(&DAT_100098a0);
  if (0x5f < iVar1) {
    FUN_100026d0(DAT_1000c2cc + 8,1);
  }
  iVar1 = FUN_100026f0(DAT_1000c2cc + 8);
  FUN_10002760(CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0));
  FUN_10002760(0);
  return;
}



// Function: FUN_10006be0 @ 0x10006be0

void FUN_10006be0(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(&DAT_1000bfb0 + DAT_1000c2cc * 4) != 0) {
    FUN_100066e0();
    uVar2 = extraout_ECX;
  }
  FUN_10005df0(uVar2);
  FUN_10006730();
  iVar1 = FUN_10002780();
  if (iVar1 < 5) {
    FUN_10006820();
  }
  FUN_10005bd0();
  FUN_10005a90();
  iVar1 = FUN_10002780();
  uVar2 = extraout_ECX_00;
  if (iVar1 < 3) {
    FUN_100052b0();
    uVar2 = extraout_ECX_01;
  }
  FUN_10005fd0(uVar2);
  FUN_100062f0(extraout_ECX_02);
  FUN_10006630();
  return;
}



// Function: FUN_10006c40 @ 0x10006c40

void FUN_10006c40(void)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar3;
  
  FUN_10006b60();
  FUN_10006950();
  iVar3 = 2;
  do {
    (*DAT_1000c51c)(&DAT_1000c1a8,1000,0x14,100);
    (*DAT_1000c51c)(&DAT_100096a0,1000,0x14,100);
    iVar2 = FUN_100026f0(DAT_1000c2cc + 8);
    if (iVar2 == 0) {
      iVar2 = 100;
      do {
        (*DAT_1000c51c)(&DAT_100098a0,0x6e,0x14,100);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      (*DAT_1000c51c)(&DAT_1000c178,0x3c,10,100);
    }
    cVar1 = (*DAT_1000c564)(&DAT_1000c038);
    if (cVar1 == '\0') {
      (*DAT_1000c51c)(&DAT_100096a8,1000,0x14,100);
    }
    (*DAT_1000c51c)(&DAT_10009698,1000,0x14,100);
    (*DAT_1000c51c)(&DAT_1000bf98,1000,0x14,100);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10006730();
  FUN_10005fd0(extraout_ECX);
  FUN_100062f0(extraout_ECX_00);
  FUN_100052b0();
  FUN_10005a90();
  return;
}



// Function: FUN_10006d40 @ 0x10006d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006d40(void)

{
  DAT_1000bf70 = FUN_10002680();
  _DAT_1000c380 = FUN_10002660();
  DAT_100098b0 = FUN_10002670();
  FUN_10003040();
  (*DAT_1000c524)(0x13,&DAT_100080f4);
  FUN_10006630();
  FUN_10002700(&DAT_10008224,0x1b);
  switch(DAT_1000bf70) {
  case 0:
  case 5:
    if (DAT_100098b0 == 3) {
      (*DAT_1000c524)(3,&DAT_10008140);
      FUN_10002720(&DAT_1000814c);
      FUN_10002700(&DAT_100083fc,5);
      FUN_10006c40();
    }
    else {
      (*DAT_1000c524)(0x13,&DAT_100080f4);
      FUN_10002720(&DAT_1000c5b0);
      if (DAT_100098b0 == 0) {
        _DAT_10008228 = 4;
      }
      FUN_10002700(&DAT_10008224,0x1b);
      FUN_10006be0();
    }
    break;
  case 1:
    ProcessMiddleSeaAI();
    break;
  case 2:
  case 3:
  case 4:
    (*DAT_1000c540)(0x122);
    (*DAT_1000c544)(0x122);
    (*DAT_1000c548)(0x122);
    (*DAT_1000c524)(0x13,&DAT_1000805c);
    FUN_10003360();
  }
  FUN_100031c0();
  return;
}



// Function: FUN_10006e70 @ 0x10006e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10006e70(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1000c674) {
      DAT_1000c674 = DAT_1000c674 + -1;
      goto LAB_10006e86;
    }
LAB_10006eae:
    uVar1 = 0;
  }
  else {
LAB_10006e86:
    _DAT_1000c678 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_1000c680 = malloc(0x80);
      if (DAT_1000c680 == (undefined4 *)0x0) goto LAB_10006eae;
      *DAT_1000c680 = 0;
      DAT_1000c67c = DAT_1000c680;
      initterm(&DAT_10008000,&DAT_10008004);
      DAT_1000c674 = DAT_1000c674 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_1000c680, puVar2 = DAT_1000c67c, DAT_1000c680 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_1000c680;
        }
      }
      free(_Memory);
      DAT_1000c680 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// Function: entry @ 0x10006f1b

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000c674;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10006f63;
    if ((DAT_1000c684 != (code *)0x0) &&
       (iVar2 = (*DAT_1000c684)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10006e70(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10006f63:
  iVar2 = FUN_100027f0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10006e70(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10006e70(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000c684 != (code *)0x0) {
      iVar2 = (*DAT_1000c684)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



