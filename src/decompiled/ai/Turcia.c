// Decompiled from: Turcia.dll

// Function: FUN_10001000 @ 0x10001000

void FUN_10001000(void)

{
  int iVar1;
  
  if (DAT_10010b20 < 2) {
    iVar1 = (*DAT_10010fd0)(&DAT_1000e330);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      (*DAT_10010f94)(&DAT_1000e380,iVar1,0x32,0x32);
      (*DAT_10010f94)(&DAT_1000e318,iVar1,10,0x32);
    }
  }
  return;
}



// Function: FUN_10001060 @ 0x10001060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001060(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DAT_10010da4 = (*DAT_10010f90)();
  iVar1 = (*DAT_10010fd0)(&DAT_10010c98);
  iVar2 = FUN_10002be0(1);
  iVar3 = FUN_10002be0(4);
  _DAT_10010cb8 = FUN_10002be0(5);
  _DAT_10010cb8 = ((iVar1 - iVar2) - iVar3) - _DAT_10010cb8;
  iVar1 = DAT_10010da4 * 0x4b8;
  _DAT_10011094 = *(undefined4 *)(&DAT_1000e6e8 + iVar1);
  _DAT_10010cc8 = &DAT_1000e558 + iVar1;
  _DAT_10010ccc = &DAT_1000e6ec + iVar1;
  _DAT_10011098 = *(undefined4 *)(&DAT_1000e87c + iVar1);
  _DAT_10010d40 = &DAT_1000e880 + iVar1;
  _DAT_10010d80 = (*DAT_10010fcc)(3);
  _DAT_1000e300 = (*DAT_10010fcc)(0);
  _DAT_10010e58 = (*DAT_10010fcc)(2);
  _DAT_1000e388 = (*DAT_10010fcc)(4);
  _DAT_10010bf8 = (*DAT_10010fcc)(5);
  _DAT_10010e10 = (*DAT_10010fcc)(1);
  iVar1 = FUN_100021a0();
  if (iVar1 == 0) {
    _DAT_1000c1f0 = 4;
  }
  (*DAT_10010f9c)(0x13,&DAT_1000c0c8);
  FUN_10002bd0(&DAT_10011028);
  FUN_10002bb0(&DAT_1000c1ec,0x1b);
  DAT_10010c90 = 1;
  DAT_10010c92 = 1;
  DAT_10010c94 = 1;
  DAT_10010c95 = 1;
  DAT_10010deb = 1;
  DAT_10010de9 = 1;
  DAT_10010dec = 1;
  DAT_10010ded = 1;
  DAT_10010c93 = 0;
  DAT_10010c91 = 0;
  DAT_10010de8 = 0;
  DAT_10010dea = 0;
  _DAT_100110dc = 0;
  return;
}



// Function: InitAI @ 0x100011e0

void InitAI(void)

{
                    /* 0x11e0  1  InitAI */
  if (((((DAT_10010e88 != (code *)0x0) &&
        ((*DAT_10010e88)(&DAT_1000e4e8,s_Dragun_18_DIP_TU__1000cc10), DAT_10010e88 != (code *)0x0))
       && ((*DAT_10010e88)(&DAT_1000e330,s_Pikiner_turki_TU__1000cbfc), DAT_10010e88 != (code *)0x0)
       ) && ((((*DAT_10010e88)(&DAT_10010c98,s_Krestian_Turki_TU__1000cbe8),
              DAT_10010e88 != (code *)0x0 &&
              ((*DAT_10010e88)(&DAT_10010bd0,s_Pehota_turki_TU__1000cbd4),
              DAT_10010e88 != (code *)0x0)) &&
             (((*DAT_10010e88)(&DAT_10010c68,s_Grenader_DIP_TU__1000cbc0),
              DAT_10010e88 != (code *)0x0 &&
              (((*DAT_10010e88)(&DAT_10010d08,s_Ianithar_TU__1000cbb0), DAT_10010e88 != (code *)0x0
               && ((*DAT_10010e88)(&DAT_10010e68,s_TUrkey_pikiner_TU__1000cb9c),
                  DAT_10010e88 != (code *)0x0)))))))) &&
     (((*DAT_10010e88)(&DAT_10010e48,s_Pushka_TU__1000cb90), DAT_10010e88 != (code *)0x0 &&
      (((*DAT_10010e88)(&DAT_1000e328,s_Mortira_TU__1000cb84), DAT_10010e88 != (code *)0x0 &&
       ((*DAT_10010e88)(&DAT_1000e508,s_Mortira_b_TU__1000cb74), DAT_10010e88 != (code *)0x0)))))) {
    (*DAT_10010e88)(&DAT_10010d18,s_Lodka_TU__1000cb68);
  }
  FUN_10002ba0(s_Pikiner_turki_TU__1000cbfc);
  if ((((DAT_10010e88 != (code *)0x0) &&
       ((*DAT_10010e88)(&DAT_10010d68,s_Strelec_Algir_DIP_TU__1000cb50), DAT_10010e88 != (code *)0x0
       )) && ((*DAT_10010e88)(&DAT_10010df0,s_Kozak_loshad_DIP_TU__1000cb38),
             DAT_10010e88 != (code *)0x0)) &&
     ((*DAT_10010e88)(&DAT_1000e380,s_Oficer_turki_TU__1000cb24), DAT_10010e88 != (code *)0x0)) {
    (*DAT_10010e88)(&DAT_1000e318,s_Barabanshik_Turki_TU__1000cb0c);
  }
  if ((DAT_10010e8c != (code *)0x0) &&
     ((*DAT_10010e8c)(&DAT_10010d50,s_Oficer_turki_TU_ATTACK_1000caf4), DAT_10010e8c != (code *)0x0)
     ) {
    (*DAT_10010e8c)(&DAT_10010b40,s_Oficer_turki_TU_SHIELD_1000cadc);
  }
  if ((((DAT_10010e88 != (code *)0x0) &&
       ((*DAT_10010e88)(&DAT_10010b30,s_Center_Turki_TU__1000cac8), DAT_10010e88 != (code *)0x0)) &&
      (((*DAT_10010e88)(&DAT_10010b50,s_Melnica_tu_TU__1000cab8), DAT_10010e88 != (code *)0x0 &&
       ((((*DAT_10010e88)(&DAT_10010d48,s_Barack_Turki_TU__1000caa4), DAT_10010e88 != (code *)0x0 &&
         ((*DAT_10010e88)(&DAT_10010b48,s_Sclad4_TU__1000ca98), DAT_10010e88 != (code *)0x0)) &&
        ((*DAT_10010e88)(&DAT_10010b18,s_Minaret_TU__1000ca8c), DAT_10010e88 != (code *)0x0)))))) &&
     ((((*DAT_10010e88)(&DAT_10010bf0,s_Konushnia_Turki_TU__1000ca78), DAT_10010e88 != (code *)0x0
       && ((*DAT_10010e88)(&DAT_10010b58,s_Diplomatic_Turki_TU__1000ca60),
          DAT_10010e88 != (code *)0x0)) &&
      (((*DAT_10010e88)(&DAT_1000e2f0,s_Art_Depo_Turki_TU__1000ca4c), DAT_10010e88 != (code *)0x0 &&
       (((((*DAT_10010e88)(&DAT_1000e4d8,s_Rinok_Turki_TU__1000ca3c), DAT_10010e88 != (code *)0x0 &&
          ((*DAT_10010e88)(&DAT_10010d10,s_Kuznia_Turki_TU__1000ca28), DAT_10010e88 != (code *)0x0))
         && (((*DAT_10010e88)(&DAT_10010c08,s_Mechet_Turki_TU__1000ca14),
             DAT_10010e88 != (code *)0x0 &&
             ((((*DAT_10010e88)(&DAT_10010dd0,s_Port_TU__1000ca08), DAT_10010e88 != (code *)0x0 &&
               ((*DAT_10010e88)(&DAT_1000e518,s_Bashnia_3_TU__1000c9f8), DAT_10010e88 != (code *)0x0
               )) && ((*DAT_10010e88)(&DAT_10010b28,s_GALERA_TU__1000c9ec),
                     DAT_10010e88 != (code *)0x0)))))) &&
        (((*DAT_10010e88)(&DAT_1000e4f8,s_PERES_KOR_TU__1000c9dc), DAT_10010e88 != (code *)0x0 &&
         ((*DAT_10010e88)(&DAT_1000e530,s_Shebeka_TU__1000c9d0), DAT_10010e88 != (code *)0x0))))))))
     )) {
    (*DAT_10010e88)(&DAT_10010e60,s_Linkor_TU__1000c9c4);
  }
  if ((((((DAT_10010e8c != (code *)0x0) &&
         ((*DAT_10010e8c)(&DAT_10010de0,s_AKA29TU_1000c9bc), DAT_10010e8c != (code *)0x0)) &&
        (((*DAT_10010e8c)(&DAT_1000e550,s_AKA06TU_1000c9b4), DAT_10010e8c != (code *)0x0 &&
         (((((((*DAT_10010e8c)(&DAT_10010dd8,s_Bashnia_3_TU_PAUSE_1000c9a0),
              DAT_10010e8c != (code *)0x0 &&
              ((*DAT_10010e8c)(&DAT_10010dc0,s_Bashnia_3_TU_PAUSE3_1000c98c),
              DAT_10010e8c != (code *)0x0)) &&
             ((*DAT_10010e8c)(&DAT_10010dc8,s_Bashnia_3_TU_PAUSE4_1000c978),
             DAT_10010e8c != (code *)0x0)) &&
            (((*DAT_10010e8c)(&DAT_10010db0,s_Bashnia_3_TU_PAUSE5_1000c964),
             DAT_10010e8c != (code *)0x0 &&
             ((*DAT_10010e8c)(&DAT_10010db8,s_Bashnia_3_TU_PAUSE6_1000c950),
             DAT_10010e8c != (code *)0x0)))) &&
           ((*DAT_10010e8c)(&DAT_10010da8,s_Bashnia_3_TU_PAUSE7_1000c93c),
           DAT_10010e8c != (code *)0x0)) &&
          (((*DAT_10010e8c)(&DAT_10010e50,s_Melnica_tu_TU_GETRES_1000c924),
           DAT_10010e8c != (code *)0x0 &&
           ((*DAT_10010e8c)(&DAT_1000e320,s_KUZ01TU_1000c91c), DAT_10010e8c != (code *)0x0))))))))
       && (((*DAT_10010e8c)(&DAT_10010e28,s_Pikiner_turki_TU_ATTACK_1000c904),
           DAT_10010e8c != (code *)0x0 &&
           ((((*DAT_10010e8c)(&DAT_10010e30,s_Pikiner_turki_TU_ATTACK3_1000c8e8),
             DAT_10010e8c != (code *)0x0 &&
             ((*DAT_10010e8c)(&DAT_10010e18,s_Pikiner_turki_TU_ATTACK4_1000c8cc),
             DAT_10010e8c != (code *)0x0)) &&
            ((*DAT_10010e8c)(&DAT_10010e20,s_Pikiner_turki_TU_ATTACK5_1000c8b0),
            DAT_10010e8c != (code *)0x0)))))) &&
      (((*DAT_10010e8c)(&DAT_10010e38,s_Pikiner_turki_TU_ATTACK6_1000c894),
       DAT_10010e8c != (code *)0x0 &&
       ((*DAT_10010e8c)(&DAT_10010d88,s_Pikiner_turki_TU_SHIELD_1000c87c),
       DAT_10010e8c != (code *)0x0)))) &&
     (((((((((*DAT_10010e8c)(&DAT_10010d70,s_Pikiner_turki_TU_SHIELD3_1000c860),
            DAT_10010e8c != (code *)0x0 &&
            (((*DAT_10010e8c)(&DAT_10010d78,s_Pikiner_turki_TU_SHIELD4_1000c844),
             DAT_10010e8c != (code *)0x0 &&
             ((*DAT_10010e8c)(&DAT_10010d90,s_Pikiner_turki_TU_SHIELD5_1000c828),
             DAT_10010e8c != (code *)0x0)))) &&
           ((*DAT_10010e8c)(&DAT_10010d98,s_Pikiner_turki_TU_SHIELD6_1000c80c),
           DAT_10010e8c != (code *)0x0)) &&
          (((((*DAT_10010e8c)(&DAT_10010df8,s_Pehota_turki_TU_ATTACK_1000c7f4),
             DAT_10010e8c != (code *)0x0 &&
             ((*DAT_10010e8c)(&DAT_10010e00,s_Pehota_turki_TU_ATTACK3_1000c7dc),
             DAT_10010e8c != (code *)0x0)) &&
            ((*DAT_10010e8c)(&DAT_10010e08,s_Pehota_turki_TU_ATTACK4_1000c7c4),
            DAT_10010e8c != (code *)0x0)) &&
           ((((*DAT_10010e8c)(&DAT_10010cd8,s_Pehota_turki_TU_SHIELD_1000c7ac),
             DAT_10010e8c != (code *)0x0 &&
             ((*DAT_10010e8c)(&DAT_10010ce0,s_Pehota_turki_TU_SHIELD3_1000c794),
             DAT_10010e8c != (code *)0x0)) &&
            (((*DAT_10010e8c)(&DAT_10010cf0,s_Pehota_turki_TU_SHIELD4_1000c77c),
             DAT_10010e8c != (code *)0x0 &&
             (((*DAT_10010e8c)(&DAT_10010b88,s_TUrkey_pikiner_TU_ATTACK_1000c760),
              DAT_10010e8c != (code *)0x0 &&
              ((*DAT_10010e8c)(&DAT_10010b80,s_TUrkey_pikiner_TU_ATTACK3_1000c744),
              DAT_10010e8c != (code *)0x0)))))))))) &&
         ((*DAT_10010e8c)(&DAT_10010b78,s_TUrkey_pikiner_TU_ATTACK4_1000c728),
         DAT_10010e8c != (code *)0x0)) &&
        (((((((*DAT_10010e8c)(&DAT_10010b70,s_TUrkey_pikiner_TU_ATTACK5_1000c70c),
             DAT_10010e8c != (code *)0x0 &&
             ((*DAT_10010e8c)(&DAT_10010b68,s_TUrkey_pikiner_TU_ATTACK6_1000c6f0),
             DAT_10010e8c != (code *)0x0)) &&
            ((*DAT_10010e8c)(&DAT_10010b60,s_TUrkey_pikiner_TU_ATTACK7_1000c6d4),
            DAT_10010e8c != (code *)0x0)) &&
           (((*DAT_10010e8c)(&DAT_10010c38,s_TUrkey_pikiner_TU_SHIELD_1000c6b8),
            DAT_10010e8c != (code *)0x0 &&
            ((*DAT_10010e8c)(&DAT_10010c30,s_TUrkey_pikiner_TU_SHIELD3_1000c69c),
            DAT_10010e8c != (code *)0x0)))) &&
          (((*DAT_10010e8c)(&DAT_10010c28,s_TUrkey_pikiner_TU_SHIELD4_1000c680),
           DAT_10010e8c != (code *)0x0 &&
           (((*DAT_10010e8c)(&DAT_10010c20,s_TUrkey_pikiner_TU_SHIELD5_1000c664),
            DAT_10010e8c != (code *)0x0 &&
            ((*DAT_10010e8c)(&DAT_10010c10,s_TUrkey_pikiner_TU_SHIELD6_1000c648),
            DAT_10010e8c != (code *)0x0)))))) &&
         (((*DAT_10010e8c)(&DAT_10010c60,s_TUrkey_pikiner_TU_SHIELD7_1000c62c),
          DAT_10010e8c != (code *)0x0 &&
          ((((*DAT_10010e8c)(&DAT_1000e348,s_Ianithar_TU_ATTACK_1000c618),
            DAT_10010e8c != (code *)0x0 &&
            ((*DAT_10010e8c)(&DAT_1000e338,s_Ianithar_TU_ATTACK3_1000c604),
            DAT_10010e8c != (code *)0x0)) &&
           ((*DAT_10010e8c)(&DAT_1000e340,s_Ianithar_TU_ATTACK4_1000c5f0),
           DAT_10010e8c != (code *)0x0)))))))) &&
       ((((((*DAT_10010e8c)(&DAT_1000e3c0,s_Ianithar_TU_SHIELD_1000c5dc),
           DAT_10010e8c != (code *)0x0 &&
           ((*DAT_10010e8c)(&DAT_1000e3c8,s_Ianithar_TU_SHIELD3_1000c5c8),
           DAT_10010e8c != (code *)0x0)) &&
          (((*DAT_10010e8c)(&DAT_1000e3b0,s_Ianithar_TU_SHIELD4_1000c5b4),
           DAT_10010e8c != (code *)0x0 &&
           (((*DAT_10010e8c)(&DAT_1000e3b8,s_Ianithar_TU_SHIELD5_1000c5a0),
            DAT_10010e8c != (code *)0x0 &&
            ((*DAT_10010e8c)(&DAT_10010cf8,s_Pushka_TU_BUILD_1000c590), DAT_10010e8c != (code *)0x0)
            ))))) &&
         ((*DAT_10010e8c)(&DAT_10010ce8,s_Pushka_TU_BUILD3_1000c57c), DAT_10010e8c != (code *)0x0))
        && (((((((*DAT_10010e8c)(&DAT_10010ca8,s_Pushka_TU_BUILD4_1000c568),
                DAT_10010e8c != (code *)0x0 &&
                ((*DAT_10010e8c)(&DAT_10010ca0,s_Pushka_TU_BUILD5_1000c554),
                DAT_10010e8c != (code *)0x0)) &&
               ((*DAT_10010e8c)(&DAT_10010cb0,s_Pushka_TU_BUILD6_1000c540),
               DAT_10010e8c != (code *)0x0)) &&
              ((((*DAT_10010e8c)(&DAT_10010bb0,s_Mortira_TU_BUILD_1000c52c),
                DAT_10010e8c != (code *)0x0 &&
                ((*DAT_10010e8c)(&DAT_10010bb8,s_Mortira_TU_BUILD3_1000c518),
                DAT_10010e8c != (code *)0x0)) &&
               (((*DAT_10010e8c)(&DAT_10010bc0,s_Mortira_TU_BUILD4_1000c504),
                DAT_10010e8c != (code *)0x0 &&
                (((*DAT_10010e8c)(&DAT_10010bc8,s_Mortira_TU_BUILD5_1000c4f0),
                 DAT_10010e8c != (code *)0x0 &&
                 ((*DAT_10010e8c)(&DAT_10010cc0,s_KUZ03TU_1000c4e8), DAT_10010e8c != (code *)0x0))))
               )))) && ((*DAT_10010e8c)(&DAT_10010ba8,s_AKA01TU_1000c4e0),
                       DAT_10010e8c != (code *)0x0)) &&
            (((((*DAT_10010e8c)(&DAT_10010b90,s_AKA02TU_1000c4d8), DAT_10010e8c != (code *)0x0 &&
               ((*DAT_10010e8c)(&DAT_10010b98,s_AKA03TU_1000c4d0), DAT_10010e8c != (code *)0x0)) &&
              ((*DAT_10010e8c)(&DAT_10010ba0,s_AKA04TU_1000c4c8), DAT_10010e8c != (code *)0x0)) &&
             (((*DAT_10010e8c)(&DAT_10010d60,s_AKA08TU_1000c4c0), DAT_10010e8c != (code *)0x0 &&
              ((*DAT_10010e8c)(&DAT_10010c18,s_AKA23TU_1000c4b8), DAT_10010e8c != (code *)0x0)))))))
        ))) && (((((*DAT_10010e8c)(&DAT_10010c58,s_AKA24TU_1000c4b0), DAT_10010e8c != (code *)0x0 &&
                  (((*DAT_10010e8c)(&DAT_10010d30,s_AKA31TU_1000c4a8), DAT_10010e8c != (code *)0x0
                   && ((*DAT_10010e8c)(&DAT_10010d38,s_AKA33TU_1000c4a0),
                      DAT_10010e8c != (code *)0x0)))) &&
                 (((*DAT_10010e8c)(&DAT_10010c70,s_AKA12TU_1000c498), DAT_10010e8c != (code *)0x0 &&
                  ((((*DAT_10010e8c)(&DAT_10010c80,s_AKA13TU_1000c490), DAT_10010e8c != (code *)0x0
                    && ((*DAT_10010e8c)(&DAT_10010c88,s_AKA14TU_1000c488),
                       DAT_10010e8c != (code *)0x0)) &&
                   ((*DAT_10010e8c)(&DAT_10010c78,s_AKA15TU_1000c480), DAT_10010e8c != (code *)0x0))
                  )))) && (((((*DAT_10010e8c)(&DAT_1000e528,s_AKA10TU_1000c478),
                             DAT_10010e8c != (code *)0x0 &&
                             ((*DAT_10010e8c)(&DAT_1000e400,s_AKA30TU_1000c470),
                             DAT_10010e8c != (code *)0x0)) &&
                            ((((*DAT_10010e8c)(&DAT_10010c00,s_AKA07TU_1000c468),
                              DAT_10010e8c != (code *)0x0 &&
                              (((*DAT_10010e8c)(&DAT_1000e540,s_AKA20TU_1000c460),
                               DAT_10010e8c != (code *)0x0 &&
                               ((*DAT_10010e8c)(&DAT_10010d20,s_KUZ02TU_1000c458),
                               DAT_10010e8c != (code *)0x0)))) &&
                             ((*DAT_10010e8c)(&DAT_10010d28,s_AKA09TU_1000c450),
                             DAT_10010e8c != (code *)0x0)))) &&
                           (((((*DAT_10010e8c)(&DAT_1000e4d0,s_AKA05TU_1000c448),
                              DAT_10010e8c != (code *)0x0 &&
                              ((*DAT_10010e8c)(&DAT_1000e4e0,s_AKA28TU_1000c440),
                              DAT_10010e8c != (code *)0x0)) &&
                             ((*DAT_10010e8c)(&DAT_1000e308,s_KUZ05TU_1000c438),
                             DAT_10010e8c != (code *)0x0)) &&
                            ((((*DAT_10010e8c)(&DAT_1000e2f8,s_AKA16TU_1000c430),
                              DAT_10010e8c != (code *)0x0 &&
                              ((*DAT_10010e8c)(&DAT_1000e500,s_AKA17TU_1000c428),
                              DAT_10010e8c != (code *)0x0)) &&
                             ((*DAT_10010e8c)(&DAT_1000e520,s_AKA27TU_1000c420),
                             DAT_10010e8c != (code *)0x0)))))))))))) {
    (*DAT_10010e8c)(&DAT_1000e548,s_AKA11TU_1000c418);
  }
  (*DAT_10010fa4)(9,4,4);
  (*DAT_10010fb0)(6);
  (*DAT_10010fb4)(0,s_shahta_TU_INSIDE_1000c404,0x5a);
  (*DAT_10010fb4)(1,s_shahta_TU_INSIDE3_1000c3f0,0x32);
  (*DAT_10010fb4)(2,s_shahta_TU_INSIDE4_1000c3dc,0x32);
  (*DAT_10010fb4)(3,s_shahta_TU_INSIDE5_1000c3c8,0x32);
  (*DAT_10010fb4)(4,s_shahta_TU_INSIDE6_1000c3b4,0x32);
  (*DAT_10010fb4)(5,s_shahta_TU_INSIDE7_1000c3a0,0x32);
  (*DAT_10010ff0)(s_Krestian_Turki_TU__1000cbe8);
  (*DAT_10010fec)(s_shahta_TU__1000c394);
  (*DAT_10010ff4)(s_Dom_Turki_TU__1000c384);
  (*DAT_10010fb8)(0x122);
  (*DAT_10010fbc)(0x104);
  (*DAT_10010fc0)(0x82);
  (*DAT_10010fc4)(300);
  (*DAT_10010fc8)(5);
  return;
}



// Function: FUN_10001f10 @ 0x10001f10

void __cdecl FUN_10001f10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_10010fac)(param_1,param_2,param_3);
  return;
}



// Function: FUN_10001f30 @ 0x10001f30

void FUN_10001f30(void)

{
  (*DAT_10010f98)(&DAT_1000e348,0x3c,100);
  (*DAT_10010f98)(&DAT_1000e338,0x3c,100);
  (*DAT_10010f98)(&DAT_1000e340,0x3c,100);
  (*DAT_10010f98)(&DAT_1000e3c0,10,100);
  (*DAT_10010f98)(&DAT_1000e3c8,10,100);
  (*DAT_10010f98)(&DAT_1000e3b0,10,100);
  (*DAT_10010f98)(&DAT_1000e3b8,10,100);
  (*DAT_10010f98)(&DAT_10010e28,0x3c,100);
  (*DAT_10010f98)(&DAT_10010e30,0x3c,100);
  (*DAT_10010f98)(&DAT_10010e18,0x3c,100);
  (*DAT_10010f98)(&DAT_10010e20,0x14,100);
  (*DAT_10010f98)(&DAT_10010e38,10,100);
  (*DAT_10010f98)(&DAT_10010d88,0x3c,100);
  (*DAT_10010f98)(&DAT_10010d70,0x3c,100);
  (*DAT_10010f98)(&DAT_10010d78,0x3c,100);
  (*DAT_10010f98)(&DAT_10010d90,0x14,100);
  (*DAT_10010f98)(&DAT_10010d98,10,100);
  if (DAT_10010b20 == 1) {
    (*DAT_10010f98)(&DAT_10010df8,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010e00,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010e08,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010cd8,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010ce0,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010cf0,0x1e,0x32);
  }
  return;
}



// Function: FUN_100020a0 @ 0x100020a0

void FUN_100020a0(void)

{
  (*DAT_10010f98)(&DAT_10010df8,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010e00,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010e08,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010cd8,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010ce0,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010cf0,0x1e,0x32);
  return;
}



// Function: FUN_10002100 @ 0x10002100

void FUN_10002100(void)

{
  if (DAT_10010b20 == 1) {
    (*DAT_10010f98)(&DAT_10010cf8,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010ce8,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010ca8,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010ca0,0x1e,0x32);
  }
  (*DAT_10010f98)(&DAT_10010bb0,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010bb8,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010bc0,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010bc8,0x1e,0x32);
  return;
}



// Function: FUN_10002190 @ 0x10002190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002190(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10011004)();
  return;
}



// Function: FUN_100021a0 @ 0x100021a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x100021a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10011008)();
  return;
}



// Function: FUN_100021b0 @ 0x100021b0

void FUN_100021b0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*DAT_10010f9c)(0x13,&DAT_1000c030);
  iVar2 = (*DAT_10010fcc)(3);
  iVar3 = (*DAT_10010fcc)(0);
  iVar4 = (*DAT_10010fcc)(2);
  iVar5 = (*DAT_10010fcc)(1);
  iVar6 = (*DAT_10010fcc)(5);
  iVar7 = (*DAT_10010fcc)(4);
  (*DAT_10010f94)(&DAT_10010b50,1,100,100);
  iVar8 = (*DAT_10010fd0)(&DAT_10010b50);
  if (iVar8 != 0) {
    (*DAT_10010f94)(&DAT_10010b30,2,100,100);
    iVar8 = (*DAT_10010fd0)(&DAT_10010b30);
    if (iVar8 != 0) {
      (*DAT_10010f94)(&DAT_10010d10,1,100,100);
      (*DAT_10010f94)(&DAT_10010d48,1,100,100);
      iVar8 = (*DAT_10010fd0)(&DAT_10010b18);
      if (iVar8 != 0) {
        (*DAT_10010f94)(&DAT_10010d48,2,100,100);
        iVar8 = (*DAT_10010fd0)(&DAT_10010b30);
        if (1 < iVar8) {
          if (1000 < iVar2) {
            (*DAT_10010f94)(&DAT_10010d48,3,100,100);
          }
          (*DAT_10010f94)(&DAT_10010d48,4,0x32,100);
          (*DAT_10010f94)(&DAT_10010d48,5,0x1e,100);
        }
      }
      (*DAT_10010f94)(&DAT_10010b48,1,100,100);
      cVar1 = (*DAT_10011000)();
      if ((cVar1 != '\0') && (0x4b0 < iVar2)) {
        (*DAT_10010f94)(&DAT_10010b48,3,10,2);
        if (2000 < iVar2) {
          (*DAT_10010f94)(&DAT_10010b48,5,10,1);
          (*DAT_10010f94)(&DAT_10010b48,6,3,1);
          (*DAT_10010f94)(&DAT_10010b48,7,2,1);
          (*DAT_10010f94)(&DAT_1000e4d8,1,100,100);
        }
      }
      iVar8 = (*DAT_10010fd0)(&DAT_10010b18);
      if (iVar8 != 0) {
        iVar8 = (*DAT_10010fd0)(&DAT_10010d48);
        if (1 < iVar8) {
          (*DAT_10010f94)(&DAT_10010bf0,2,100,100);
          (*DAT_10010f94)(&DAT_10010bf0,3,0x5a,100);
          (*DAT_10010f94)(&DAT_10010bf0,4,0x5a,100);
          (*DAT_10010f94)(&DAT_10010bf0,5,0x5a,100);
          (*DAT_10010f94)(&DAT_1000e2f0,1,100,100);
        }
      }
      (*DAT_10010f94)(&DAT_10010b18,1,0x5a,100);
      iVar8 = (*DAT_10010fd0)(&DAT_10010dd0);
      iVar9 = (*DAT_10010fd4)(&DAT_10010dd0);
      if (iVar9 == iVar8) {
        iVar8 = (*DAT_10010fd0)(&DAT_10010bf0);
        if (iVar8 != 0) {
          (*DAT_10010f94)(&DAT_10010dd0,2,0x32,10);
          (*DAT_10010f94)(&DAT_10010dd0,3,0x14,10);
        }
      }
      iVar8 = (*DAT_10010fd0)(&DAT_10010d48);
      if (iVar8 != 0) {
        (*DAT_10010f94)(&DAT_10010b50,2,10,10);
      }
      (*DAT_10010f94)(&DAT_10010b58,1,0x5a,10);
    }
  }
  (*DAT_10010f98)(&DAT_10010e50,100,100);
  cVar1 = (*DAT_10010fe0)(&DAT_10010e50);
  if (cVar1 != '\0') {
    if (700 < iVar2) {
      if (DAT_10010b20 == 1) {
        iVar8 = (*DAT_10010fd0)(&DAT_10010bd0);
        if (99 < iVar8) {
          (*DAT_10010f94)(&DAT_10010d08,800,0x14,0x3c);
          uVar11 = 800;
          goto LAB_10002542;
        }
        (*DAT_10010f94)(&DAT_1000e330,400,0x14,0x28);
        uVar12 = 10;
        uVar11 = 200;
        puVar10 = &DAT_10010bd0;
      }
      else {
        (*DAT_10010f94)(&DAT_10010d08,400,0x14,0x3c);
        uVar11 = 400;
LAB_10002542:
        uVar12 = 0x14;
        puVar10 = &DAT_1000e330;
      }
      (*DAT_10010f94)(puVar10,uVar11,uVar12,100);
    }
    if (0xfa < iVar2) {
      (*DAT_10010f94)(&DAT_10010c98,1000,100,100);
    }
    if (300 < iVar2) {
      (*DAT_10010f94)(&DAT_10010e68,400,0x14,100);
      (*DAT_10010f94)(&DAT_10010e68,400,0x14,100);
      if (1000 < iVar5) {
        (*DAT_10010f94)(&DAT_10010c68,0x46,100,100);
      }
    }
    (*DAT_10010f98)(&DAT_10010ba8,99,100);
    (*DAT_10010f98)(&DAT_1000e320,99,100);
  }
  if (DAT_10010b20 == 1) {
    iVar8 = (*DAT_10010fd0)(&DAT_10010c98);
    if (0x2d < iVar8) {
      FUN_100020a0();
    }
  }
  (*DAT_10010f98)(&DAT_10010cc0,100,100);
  (*DAT_10010f98)(&DAT_10010d60,0x62,100);
  (*DAT_10010f98)(&DAT_10010c18,99,100);
  (*DAT_10010f98)(&DAT_10010ba0,99,100);
  (*DAT_10010f98)(&DAT_10010ba8,99,100);
  (*DAT_10010f98)(&DAT_10010b90,99,100);
  (*DAT_10010f98)(&DAT_10010b98,99,100);
  (*DAT_10010f98)(&DAT_1000e400,100,100);
  (*DAT_10010f98)(&DAT_1000e550,99,100);
  cVar1 = (*DAT_10010fdc)(&DAT_10010cc0);
  if (cVar1 != '\0') {
    if (DAT_10010b20 == 1) {
      (*DAT_10010f94)(&DAT_1000e508,0x28,10,0x32);
    }
    (*DAT_10010f98)(&DAT_10010c58,99,100);
    (*DAT_10010f98)(&DAT_10010c00,99,100);
    cVar1 = (*DAT_10010fdc)(&DAT_10010c00);
    if (cVar1 != '\0') {
      (*DAT_10010f94)(&DAT_10010d18,0x28,10,0x32);
      (*DAT_10010f98)(&DAT_1000e4d0,99,100);
    }
    iVar8 = (*DAT_10010fd0)(&DAT_10010d08);
    if (0x14 < iVar8) {
      (*DAT_10010f98)(&DAT_10010d30,0x5a,100);
      (*DAT_10010f98)(&DAT_10010d38,0x50,0x46);
    }
    (*DAT_10010f98)(&DAT_1000e308,0x5f,100);
    FUN_10002100();
    cVar1 = (*DAT_10010fdc)(&DAT_10010bc8);
    if (cVar1 != '\0') {
      (*DAT_10010f94)(&DAT_1000e328,10,10,0x32);
    }
    cVar1 = (*DAT_10010fdc)(&DAT_10010ca0);
    if (cVar1 != '\0') {
      (*DAT_10010f94)(&DAT_10010e48,0xc,10,0x32);
    }
    (*DAT_10010f94)(&DAT_1000e508,0x14,10,0x32);
    FUN_10001f30();
    (*DAT_10010f98)(&DAT_10010b88,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010b80,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010b78,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010b70,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010b68,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010b60,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010c38,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010c30,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010c28,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010c20,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010c10,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010c60,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010c70,0x28,0x14);
    (*DAT_10010f98)(&DAT_10010c80,0x28,0x14);
    (*DAT_10010f98)(&DAT_10010c88,0x28,0x14);
    (*DAT_10010f98)(&DAT_10010c78,0x28,0x14);
  }
  (*DAT_10010f94)(&DAT_10010d18,3,0x32,0x32);
  if (DAT_10010b20 == 1) {
    (*DAT_10010f94)(&DAT_1000e530,6,99,10);
    (*DAT_10010f94)(&DAT_1000e530,0xc,0x3c,10);
    (*DAT_10010f94)(&DAT_10010b28,6,0x5a,0x14);
  }
  else {
    (*DAT_10010f94)(&DAT_1000e4f8,3,0x5a,0x32);
    (*DAT_10010f94)(&DAT_1000e530,6,99,10);
    (*DAT_10010f94)(&DAT_1000e530,0xc,0x3c,10);
    (*DAT_10010f94)(&DAT_1000e530,0xf,0x32,10);
    (*DAT_10010f94)(&DAT_10010b28,6,0x5a,0x14);
  }
  iVar8 = (*DAT_10010fd4)(&DAT_1000e4d8);
  if (iVar8 == 0) goto LAB_10002a55;
  if (100000 < iVar4) {
    FUN_10001f10(2,1,90000);
  }
  if (1000000 < iVar3) {
    FUN_10001f10(0,1,90000);
  }
  if (iVar2 < 300) {
    if (iVar6 < 0x2ee1) {
      if (iVar5 < 0xbb9) {
        if (iVar4 < 0x5dd) {
          if (iVar3 < 0x5dd) goto LAB_10002a06;
          uVar12 = 1000;
          uVar11 = 0;
        }
        else {
          uVar12 = 0x5dc;
          uVar11 = 2;
        }
      }
      else {
        uVar12 = 1000;
        uVar11 = 1;
      }
    }
    else {
      uVar12 = 1000;
      uVar11 = 5;
    }
    FUN_10001f10(uVar11,3,uVar12);
  }
LAB_10002a06:
  cVar1 = (*DAT_10010fdc)(&DAT_10010d60);
  if ((cVar1 == '\0') && (800 < iVar5)) {
    if (9000 < iVar6) {
      FUN_10001f10(5,3,3000);
    }
    if (9000 < iVar7) {
      FUN_10001f10(4,3,3000);
    }
  }
LAB_10002a55:
  cVar1 = (*DAT_10011000)();
  if (cVar1 == '\0') {
    uVar13 = 5;
    uVar12 = 5;
    uVar11 = 0;
  }
  else {
    iVar3 = (*DAT_10010fd0)(&DAT_10010c98);
    if ((iVar3 < 0x14) && (iVar2 < 2000)) {
      uVar13 = 2;
      uVar12 = 5;
      uVar11 = 10;
    }
    else {
      cVar1 = (*DAT_10010fdc)(&DAT_10010b98);
      if ((cVar1 == '\0') || (iVar2 < 15000)) {
        uVar13 = 4;
        uVar12 = 4;
        uVar11 = 10;
      }
      else {
        uVar13 = 4;
        uVar12 = 6;
        uVar11 = 10;
      }
    }
  }
  (*DAT_10010fa4)(uVar11,uVar12,uVar13);
  cVar1 = (*DAT_10010fdc)(&DAT_1000e400);
  if (cVar1 == '\0') {
    (*DAT_10010f94)(&DAT_10010b28,3,100,0x32);
  }
  else {
    (*DAT_10010fa4)(6,7,3);
    (*DAT_10010f94)(&DAT_10010b28,7,0x46,0x32);
    (*DAT_10010f98)(&DAT_10010d20,0x5f,100);
    (*DAT_10010f98)(&DAT_10010d28,0x5f,100);
    (*DAT_10010f98)(&DAT_1000e540,0x5f,100);
    cVar1 = (*DAT_10010fdc)(&DAT_1000e540);
    if (cVar1 != '\0') {
      (*DAT_10010f98)(&DAT_1000e4e0,0x5a,100);
      (*DAT_10010f98)(&DAT_1000e520,0x5a,100);
      (*DAT_10010f98)(&DAT_1000e2f8,0x5a,100);
      (*DAT_10010f98)(&DAT_1000e500,0x5a,100);
      return;
    }
  }
  return;
}



// Function: FUN_10002b90 @ 0x10002b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002b90(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10011010)();
  return;
}



// Function: FUN_10002ba0 @ 0x10002ba0

void __cdecl FUN_10002ba0(undefined4 param_1)

{
  (*DAT_10011014)(param_1);
  return;
}



// Function: FUN_10002bb0 @ 0x10002bb0

void __cdecl FUN_10002bb0(undefined4 param_1,undefined4 param_2)

{
  (*DAT_1000e390)(param_1,param_2);
  return;
}



// Function: FUN_10002bd0 @ 0x10002bd0

void __cdecl FUN_10002bd0(undefined4 param_1)

{
  (*DAT_1000e510)(param_1);
  return;
}



// Function: FUN_10002be0 @ 0x10002be0

void __cdecl FUN_10002be0(undefined4 param_1)

{
  (*DAT_10011020)(param_1);
  return;
}



// Function: FUN_10002bf0 @ 0x10002bf0

void __cdecl FUN_10002bf0(undefined4 param_1)

{
  (*DAT_1000e538)(param_1);
  return;
}



// Function: FUN_10002c00 @ 0x10002c00

FARPROC __cdecl FUN_10002c00(LPCSTR param_1)

{
  FARPROC pFVar1;
  CHAR local_100 [256];
  
  pFVar1 = GetProcAddress(DAT_10010e70,param_1);
  if (pFVar1 == (FARPROC)0x0) {
    FUN_10004417(local_100,(byte *)s_DMCR_EXE_does_not_contain_functi_1000cc34);
    MessageBoxA((HWND)0x0,local_100,s_DLL_init_error__1000cc24,0);
  }
  return pFVar1;
}



// Function: FUN_10002c60 @ 0x10002c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002c60(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_10010e70 = GetModuleHandleA(s_DMCR_EXE_1000d364);
    if (DAT_10010e70 == (HMODULE)0x0) {
      MessageBoxA((HWND)0x0,s_Can_not_detect_DMCR_EXE_1000d344,s_ERROR__1000d35c,0);
      return 1;
    }
    _DAT_10010e74 = FUN_10002c00(s_RegisterUnits_1000d334);
    _DAT_10010e78 = FUN_10002c00(s_RegisterString_1000d324);
    _DAT_10010e7c = FUN_10002c00(s_RegisterSound_1000d314);
    _DAT_10010e80 = FUN_10002c00(s_RegisterVar_1000d308);
    _DAT_10010e84 = FUN_10002c00(s_RegisterZone_1000d2f8);
    DAT_10010e88 = FUN_10002c00(s_RegisterUnitType_1000d2e4);
    DAT_10010e8c = FUN_10002c00(s_RegisterUpgrade_1000d2d4);
    _DAT_10010e90 = FUN_10002c00(s_InitialUpgrade_1000d2c4);
    _DAT_10010e94 = FUN_10002c00(s_RegisterFormation_1000d2b0);
    _DAT_10010e98 = FUN_10002c00(s_RegisterUnitsForm_1000d29c);
    _DAT_10010e9c = FUN_10002c00(s_GetUnitsAmount0_1000d28c);
    _DAT_10010ea0 = FUN_10002c00(s_GetUnitsAmount1_1000d27c);
    _DAT_10010ea4 = FUN_10002c00(s_GetUnitsAmount2_1000d26c);
    _DAT_10010ea8 = FUN_10002c00(s_GetTotalAmount0_1000d25c);
    _DAT_10010eac = FUN_10002c00(s_GetTotalAmount1_1000d24c);
    _DAT_10010eb0 = FUN_10002c00(s_GetReadyAmount_1000d23c);
    _DAT_10010eb4 = FUN_10002c00(s_IsUpgradeDoing_1000d22c);
    _DAT_10010eb8 = FUN_10002c00(s_IsUpgradeDone_1000d21c);
    _DAT_10010ebc = FUN_10002c00(s_IsUpgradeEnabled_1000d208);
    _DAT_10010ec0 = FUN_10002c00(s_GetDied_1000d200);
    _DAT_10010ec4 = FUN_10002c00(s_CreateObject0_1000d1f0);
    _DAT_10010ec8 = FUN_10002c00(s_ClearSelection_1000d1e0);
    _DAT_10010ecc = FUN_10002c00(s_SelectUnits_1000d1d4);
    _DAT_10010ed0 = FUN_10002c00(s_SelectUnitsType_1000d1c4);
    _DAT_10010ee8 = FUN_10002c00(s_SelDie_1000d1bc);
    _DAT_10010eec = FUN_10002c00(s_SelOpenGates_1000d1ac);
    _DAT_10010ef0 = FUN_10002c00(s_SelCloseGates_1000d19c);
    _DAT_10010ef4 = FUN_10002c00(s_SelSendTo_1000d190);
    _DAT_10010ef8 = FUN_10002c00(s_SelSendAndKill_1000d180);
    _DAT_10010f14 = FUN_10002c00(s_SelAutoKill_1000d174);
    _DAT_10010efc = FUN_10002c00(s_SelAttackGroup_1000d164);
    _DAT_10010f00 = FUN_10002c00(s_Patrol_1000d15c);
    _DAT_10010f04 = FUN_10002c00(s_ChangeFriends_1000d14c);
    _DAT_10010f08 = FUN_10002c00(s_SelChangeNation_1000d13c);
    _DAT_10010f0c = FUN_10002c00(s_SetStandGround_1000d12c);
    _DAT_10010f10 = FUN_10002c00(s_AllowAttack_1000d120);
    _DAT_10010f18 = FUN_10002c00(&DAT_1000d118);
    _DAT_10010f1c = FUN_10002c00(s_DisableMission_1000d108);
    _DAT_10010f20 = FUN_10002c00(s_EnableMission_1000d0f8);
    _DAT_10010f24 = FUN_10002c00(s_SetVictoryText_1000d0e8);
    _DAT_10010f28 = FUN_10002c00(s_SetLooseText_1000d0d8);
    _DAT_10010f2c = FUN_10002c00(s_ShowVictory_1000d0cc);
    _DAT_10010f30 = FUN_10002c00(s_LooseGame_1000d0c0);
    _DAT_10010f34 = FUN_10002c00(s_ShowCentralText_1000d0b0);
    _DAT_10010f38 = FUN_10002c00(s_ShowPage_1000d0a4);
    _DAT_10010f3c = FUN_10002c00(s_AskQuestion_1000d098);
    _DAT_10010d00 = FUN_10002c00(s_GetResource_1000d08c);
    _DAT_10010f40 = FUN_10002c00(s_AddResource_1000d080);
    _DAT_10010f44 = FUN_10002c00(s_SetResource_1000d074);
    _DAT_10010f48 = FUN_10002c00(s_GetUnitCost_1000d068);
    _DAT_10010f4c = FUN_10002c00(s_GetUpgradeCost_1000d058);
    _DAT_10010f50 = FUN_10002c00(s_RunTimer_1000d04c);
    _DAT_10010f54 = FUN_10002c00(s_TimerDone_1000d040);
    _DAT_10010f58 = FUN_10002c00(s_TimerDoneFirst_1000d030);
    _DAT_10010f5c = FUN_10002c00(s_TimerIsEmpty_1000d020);
    _DAT_10010f60 = FUN_10002c00(s_FreeTimer_1000d014);
    _DAT_10010f64 = FUN_10002c00(s_GetTime_1000d00c);
    _DAT_10010f68 = FUN_10002c00(s_GetGlobalTime_1000cffc);
    _DAT_10010f6c = FUN_10002c00(s_Trigg_1000cff4);
    _DAT_10010f70 = FUN_10002c00(s_SetTrigg_1000cfe8);
    _DAT_10010f74 = FUN_10002c00(s_RunAI_1000cfe0);
    _DAT_1000e310 = FUN_10002c00(s_RunAIWithPeasants_1000cfcc);
    _DAT_10010f80 = FUN_10002c00(s_SelCenter_1000cfc0);
    _DAT_10010f7c = FUN_10002c00(s_UnitsCenter_1000cfb4);
    _DAT_10010f84 = FUN_10002c00(s_CreateZoneNearUnit_1000cfa0);
    _DAT_10010f88 = FUN_10002c00(s_SetLightSpot_1000cf90);
    _DAT_10010f8c = FUN_10002c00(s_ClearLightSpot_1000cf80);
    _DAT_10010ed8 = FUN_10002c00(s_GetMaxInside_1000cf70);
    _DAT_10010ed4 = FUN_10002c00(s_GetNInside_1000cf64);
    _DAT_10010edc = FUN_10002c00(s_PushUnitAway_1000cf54);
    _DAT_10010ee0 = FUN_10002c00(s_CheckLeaveAbility_1000cf40);
    _DAT_10010ee4 = FUN_10002c00(s_AttackZoneByArtillery_1000cf28);
    _DAT_10010fa8 = FUN_10002c00(s_SetDefSettings_1000cf18);
    _DAT_10010fd8 = FUN_10002c00(s_GetMaxPeasantsInMines_1000cf00);
    _DAT_10010fa0 = FUN_10002c00(s_SetUpgradeLock_1000cef0);
    DAT_10010fac = FUN_10002c00(s_AI_Torg_1000cee8);
    _DAT_10010ff8 = FUN_10002c00(s_GetUnitsByUsage_1000ced8);
    DAT_10010f90 = FUN_10002c00(s_GetAINation_1000cecc);
    DAT_10010f94 = FUN_10002c00(s_TryUnit_1000cec4);
    DAT_10010f98 = FUN_10002c00(s_TryUpgrade_1000ceb8);
    DAT_10010f9c = FUN_10002c00(s_SetMineBalanse_1000cea8);
    DAT_10010fa4 = FUN_10002c00(s_SetPDistribution_1000ce94);
    DAT_10010fb0 = FUN_10002c00(s_AssignAmountOfMineUpgrades_1000ce78);
    DAT_10010fb4 = FUN_10002c00(s_AssignMineUpgrade_1000ce64);
    DAT_10010fec = FUN_10002c00(s_AssignMine_1000ce58);
    DAT_10010ff0 = FUN_10002c00(s_AssignPeasant_1000ce48);
    DAT_10010ff4 = FUN_10002c00(s_AssignHouse_1000ce3c);
    _DAT_10010ffc = FUN_10002c00(s_AssignWall_1000ce30);
    DAT_10010fb8 = FUN_10002c00(s_SET_MINE_CAPTURE_RADIUS_1000ce18);
    DAT_10010fbc = FUN_10002c00(s_SET_MINE_UPGRADE1_RADIUS_1000cdfc);
    DAT_10010fc0 = FUN_10002c00(s_SET_MINE_UPGRADE2_RADIUS_1000cde0);
    DAT_10010fc4 = FUN_10002c00(s_SET_DEFAULT_MAX_WORKERS_1000cdc8);
    DAT_10010fc8 = FUN_10002c00(s_SET_MIN_PEASANT_BRIGADE_1000cdb0);
    DAT_10010fcc = FUN_10002c00(s_GetMoney_1000cda4);
    DAT_10010fd0 = FUN_10002c00(s_GetUnits_1000cd98);
    DAT_10010fd4 = FUN_10002c00(s_GetReadyUnits_1000cd88);
    DAT_10010fdc = FUN_10002c00(s_UpgIsDone_1000cd7c);
    DAT_10010fe0 = FUN_10002c00(s_UpgIsRun_1000cd70);
    DAT_10011000 = FUN_10002c00(s_FieldExist_1000cd64);
    _DAT_10011004 = FUN_10002c00(s_GetDifficulty_1000cd54);
    _DAT_10011008 = FUN_10002c00(s_GetStartRes_1000cd48);
    _DAT_1001100c = FUN_10002c00(s_GetResOnMap_1000cd3c);
    _DAT_10011010 = FUN_10002c00(s_GetLandType_1000cd30);
    DAT_10011014 = FUN_10002c00(s_AssignFormUnit_1000cd20);
    _DAT_1001101c = FUN_10002c00(s_GetRandomIndex_1000cd10);
    _DAT_10011018 = FUN_10002c00(s_SafeRegisterUpgrade_1000ccfc);
    DAT_1000e510 = FUN_10002c00(s_SetMinesUpgradeRules_1000cce4);
    DAT_1000e390 = FUN_10002c00(s_SetMinesBuildingRules_1000cccc);
    DAT_10011020 = FUN_10002c00(s_GetExtraction_1000ccbc);
    _DAT_10010fe4 = FUN_10002c00(s_EnableUpgrade_1000ccac);
    _DAT_10010fe8 = FUN_10002c00(s_DisableUpgrade_1000cc9c);
    _DAT_10010da0 = FUN_10002c00(s_GetAIRegister_1000cc8c);
    _DAT_10010d58 = FUN_10002c00(s_SetAIRegister_1000cc7c);
    _DAT_10010b38 = FUN_10002c00(s_GetTorgResult_1000cc6c);
    DAT_1000e538 = FUN_10002c00(s_SetDefenseState_1000cc5c);
    OnInit();
  }
  return 1;
}



// Function: FUN_10003380 @ 0x10003380

void FUN_10003380(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (*DAT_10010fd0)(&DAT_10010d08);
  if (0x28 < iVar2) {
    (*DAT_10010f98)(&DAT_1000e348,0x28,100);
    (*DAT_10010f98)(&DAT_1000e338,0x5a,100);
    (*DAT_10010f98)(&DAT_1000e340,0x5a,100);
    (*DAT_10010f98)(&DAT_1000e3c0,0x5a,100);
    (*DAT_10010f98)(&DAT_1000e3c8,0x5a,100);
    (*DAT_10010f98)(&DAT_1000e3b0,0x5a,100);
    (*DAT_10010f98)(&DAT_1000e3b8,0x5a,100);
  }
  (*DAT_10010f98)(&DAT_10010e28,0x5a,100);
  (*DAT_10010f98)(&DAT_10010e30,0x5a,100);
  (*DAT_10010f98)(&DAT_10010e18,0x5a,100);
  cVar1 = (*DAT_10010fe0)(&DAT_10010d78);
  if (cVar1 != '\0') {
    (*DAT_10010f98)(&DAT_10010e20,0x5a,100);
  }
  (*DAT_10010f98)(&DAT_10010e38,0x5a,100);
  (*DAT_10010f98)(&DAT_10010d88,0x5a,100);
  (*DAT_10010f98)(&DAT_10010d70,0x5a,100);
  (*DAT_10010f98)(&DAT_10010d78,0x5a,100);
  (*DAT_10010f98)(&DAT_10010d90,0x5a,100);
  (*DAT_10010f98)(&DAT_10010d98,0x5a,100);
  (*DAT_10010f98)(&DAT_10010b40,0x50,100);
  (*DAT_10010f98)(&DAT_10010d50,0x50,100);
  return;
}



// Function: FUN_100034e0 @ 0x100034e0

void FUN_100034e0(void)

{
  (*DAT_10010f98)(&DAT_10010df8,0x46,0x32);
  (*DAT_10010f98)(&DAT_10010e00,0x46,0x32);
  (*DAT_10010f98)(&DAT_10010e08,0x46,0x32);
  (*DAT_10010f98)(&DAT_10010cd8,0x46,0x32);
  return;
}



// Function: FUN_10003520 @ 0x10003520

void FUN_10003520(void)

{
  (*DAT_10010f98)(&DAT_10010cf8,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010ce8,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010ca8,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010ca0,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010bb0,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010bb8,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010bc0,0x1e,0x32);
  (*DAT_10010f98)(&DAT_10010bc8,0x1e,0x32);
  return;
}



// Function: FUN_100035a0 @ 0x100035a0

void FUN_100035a0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*DAT_10010f9c)(0x13,&DAT_1000c030);
  iVar2 = (*DAT_10010fcc)(3);
  (*DAT_10010fcc)(0);
  (*DAT_10010fcc)(2);
  iVar3 = (*DAT_10010fcc)(1);
  (*DAT_10010fcc)(5);
  (*DAT_10010fcc)(4);
  (*DAT_10010f94)(&DAT_10010b50,1,100,100);
  iVar4 = (*DAT_10010fd0)(&DAT_10010b50);
  if (iVar4 != 0) {
    (*DAT_10010f94)(&DAT_10010b30,1,100,5);
    if (DAT_1000e4f0 == 0) {
      (*DAT_10010f94)(&DAT_10010b48,1,100,100);
      (*DAT_10010f94)(&DAT_1000e4d8,1,100,100);
      (*DAT_10010fa4)(0,3,1);
      iVar4 = (*DAT_10010fd0)(&DAT_1000e4d8);
      if (iVar4 == 0) {
        return;
      }
    }
    iVar4 = (*DAT_10010fd0)(&DAT_10010b30);
    if (iVar4 != 0) {
      iVar4 = (*DAT_10010fd4)(&DAT_1000e4d8);
      iVar5 = (*DAT_10010fd0)(&DAT_1000e4d8);
      if (iVar5 == iVar4) {
        (*DAT_10010f94)(&DAT_10010d10,1,100,100);
      }
      (*DAT_10010f94)(&DAT_10010d48,2,100,100);
      (*DAT_10010f94)(&DAT_10010b30,2,100,100);
      (*DAT_10010f94)(&DAT_10010b18,1,0x5a,100);
      iVar4 = (*DAT_10010fd0)(&DAT_10010b18);
      if ((iVar4 != 0) && (iVar4 = (*DAT_10010fd0)(&DAT_10010b30), 1 < iVar4)) {
        if (1000 < iVar2) {
          (*DAT_10010f94)(&DAT_10010d48,3,100,100);
        }
        (*DAT_10010f94)(&DAT_10010d48,4,0x3c,100);
        (*DAT_10010f94)(&DAT_10010d48,5,0x3c,100);
      }
      (*DAT_10010f94)(&DAT_10010b48,1,100,100);
      cVar1 = (*DAT_10011000)();
      if (((cVar1 != '\0') && (0x4b0 < iVar2)) &&
         ((*DAT_10010f94)(&DAT_10010b48,3,10,2), 2000 < iVar2)) {
        (*DAT_10010f94)(&DAT_10010b48,5,10,1);
        (*DAT_10010f94)(&DAT_10010b48,6,3,1);
        (*DAT_10010f94)(&DAT_10010b48,7,2,1);
      }
      iVar4 = (*DAT_10010fd0)(&DAT_10010c98);
      if (0x18 < iVar4) {
        (*DAT_10010f94)(&DAT_1000e4d8,1,100,100);
      }
      iVar4 = (*DAT_10010fd0)(&DAT_10010b18);
      if ((iVar4 != 0) && (iVar4 = (*DAT_10010fd0)(&DAT_10010d48), 1 < iVar4)) {
        (*DAT_10010f94)(&DAT_10010bf0,2,100,100);
        (*DAT_10010f94)(&DAT_10010bf0,3,0x5a,100);
        (*DAT_10010f94)(&DAT_10010bf0,4,0x5a,100);
        (*DAT_10010f94)(&DAT_10010bf0,5,0x5a,100);
        (*DAT_10010f94)(&DAT_1000e2f0,1,100,100);
        (*DAT_10010f94)(&DAT_1000e2f0,3,0x28,100);
      }
      iVar4 = (*DAT_10010fd0)(&DAT_10010dd0);
      iVar5 = (*DAT_10010fd4)(&DAT_10010dd0);
      if ((iVar5 == iVar4) && (iVar4 = (*DAT_10010fd0)(&DAT_10010bf0), iVar4 != 0)) {
        (*DAT_10010f94)(&DAT_10010dd0,2,0x32,10);
        (*DAT_10010f94)(&DAT_10010dd0,3,0x14,10);
      }
      iVar4 = (*DAT_10010fd0)(&DAT_10010d48);
      if (iVar4 != 0) {
        (*DAT_10010f94)(&DAT_10010b50,2,10,10);
      }
      (*DAT_10010f94)(&DAT_10010b58,1,0x5a,10);
    }
  }
  (*DAT_10010f98)(&DAT_10010e50,0x32,100);
  if (700 < iVar2) {
    (*DAT_10010f94)(&DAT_10010bd0,200,0x14,0x3c);
    iVar4 = (*DAT_10010fd0)(&DAT_1000e330);
    if (0xfa < iVar4) {
      (*DAT_10010f94)(&DAT_10010d08,800,0x14,0x3c);
    }
    (*DAT_10010f94)(&DAT_1000e330,800,0x14,100);
  }
  if (0xfa < iVar2) {
    (*DAT_10010f94)(&DAT_10010c98,1000,100,100);
  }
  if (300 < iVar2) {
    (*DAT_10010f94)(&DAT_10010e68,400,0x14,100);
    (*DAT_10010f94)(&DAT_10010e68,400,0x14,100);
    if (0x5dc < iVar3) {
      (*DAT_10010f94)(&DAT_10010c68,0x1e,100,100);
      if (5000 < iVar3) {
        (*DAT_10010f94)(&DAT_10010d68,0xa0,100,100);
      }
      if (3000 < iVar3) {
        (*DAT_10010f94)(&DAT_10010d68,0x78,100,100);
      }
      if (1000 < iVar3) {
        (*DAT_10010f94)(&DAT_10010d68,0x28,100,100);
      }
    }
  }
  (*DAT_10010f98)(&DAT_10010ba8,99,100);
  iVar3 = (*DAT_10010fd0)(&DAT_10010d48);
  if (iVar3 != 0) {
    (*DAT_10010f98)(&DAT_1000e320,99,100);
  }
  iVar3 = (*DAT_10010fd0)(&DAT_10010bd0);
  if (0x1e < iVar3) {
    FUN_100034e0();
  }
  iVar3 = (*DAT_10010fd0)(&DAT_1000e330);
  if (0x1e < iVar3) {
    FUN_10003380();
  }
  (*DAT_10010f98)(&DAT_10010cc0,100,100);
  (*DAT_10010f98)(&DAT_10010d60,0x62,100);
  (*DAT_10010f98)(&DAT_10010c18,99,100);
  (*DAT_10010f98)(&DAT_10010ba0,99,100);
  (*DAT_10010f98)(&DAT_10010ba8,99,100);
  (*DAT_10010f98)(&DAT_10010b90,99,100);
  (*DAT_10010f98)(&DAT_10010b98,99,100);
  (*DAT_10010f98)(&DAT_1000e400,100,100);
  cVar1 = (*DAT_10010fdc)(&DAT_10010cc0);
  if (cVar1 != '\0') {
    if (DAT_10010b20 == 1) {
      (*DAT_10010f94)(&DAT_1000e508,0x28,10,0x32);
    }
    (*DAT_10010f98)(&DAT_10010c58,99,100);
    iVar3 = (*DAT_10010fd0)(&DAT_10010d08);
    if (0x14 < iVar3) {
      (*DAT_10010f98)(&DAT_10010d30,0x5a,100);
      (*DAT_10010f98)(&DAT_10010d38,0x50,0x46);
    }
    (*DAT_10010f98)(&DAT_1000e308,0x5f,100);
    FUN_10003520();
    cVar1 = (*DAT_10010fdc)(&DAT_10010bc8);
    if (cVar1 != '\0') {
      (*DAT_10010f94)(&DAT_1000e328,10,10,0x32);
    }
    cVar1 = (*DAT_10010fdc)(&DAT_10010ca0);
    if (cVar1 != '\0') {
      (*DAT_10010f94)(&DAT_10010e48,0xc,10,0x32);
    }
    (*DAT_10010f94)(&DAT_1000e508,0x32,10,0x32);
    (*DAT_10010f98)(&DAT_10010b88,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010b80,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010b78,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010b70,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010b68,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010b60,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010c38,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010c30,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010c28,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010c20,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010c10,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010c60,0x5a,0x32);
    (*DAT_10010f98)(&DAT_10010c70,0x28,0x14);
    (*DAT_10010f98)(&DAT_10010c80,0x28,0x14);
    (*DAT_10010f98)(&DAT_10010c88,0x28,0x14);
    (*DAT_10010f98)(&DAT_10010c78,0x28,0x14);
  }
  iVar3 = (*DAT_10010fd4)(&DAT_1000e4d8);
  if (iVar3 == 0) goto LAB_10004144;
  iVar3 = (*DAT_10010fcc)(0);
  iVar4 = (*DAT_10010fcc)(2);
  iVar5 = (*DAT_10010fcc)(4);
  iVar6 = (*DAT_10010fcc)(5);
  iVar7 = (*DAT_10010fcc)(1);
  if (iVar2 < 0x96) {
    if (iVar4 < 0x1389) {
      if (iVar4 < 0x3e9) {
        if (iVar3 < 0x1389) {
          if (iVar3 < 0x3e9) {
            if (iVar6 < 0x7d1) {
              if (iVar5 < 0x7d1) {
                if (iVar7 < 0x3e9) goto LAB_10003df7;
                uVar10 = 500;
                uVar9 = 1;
              }
              else {
                uVar10 = 800;
                uVar9 = 4;
              }
            }
            else {
              uVar10 = 800;
              uVar9 = 5;
            }
          }
          else {
            uVar10 = 900;
            uVar9 = 0;
          }
        }
        else {
          uVar10 = 3000;
          uVar9 = 0;
        }
      }
      else {
        uVar10 = 900;
        uVar9 = 2;
      }
    }
    else {
      uVar10 = 3000;
      uVar9 = 2;
    }
    FUN_10001f10(uVar9,3,uVar10);
  }
LAB_10003df7:
  iVar8 = (*DAT_10010fd4)(&DAT_10010b18);
  if (((iVar8 != 0) && (1000 < iVar7)) && (cVar1 = (*DAT_10010fe0)(&DAT_10010d60), cVar1 == '\0')) {
    if (3000 < iVar5) {
      FUN_10001f10(4,3,2000);
    }
    if (4000 < iVar6) {
      FUN_10001f10(5,3,3000);
    }
  }
  iVar8 = (*DAT_10010fcc)(2);
  if (120000 < iVar8) {
    FUN_10001f10(2,1,100000);
  }
  iVar8 = (*DAT_10010fcc)(0);
  if (100000 < iVar8) {
    FUN_10001f10(0,1,90000);
  }
  iVar8 = (*DAT_10010fd0)(&DAT_10010d10);
  if ((iVar8 != 0) && (cVar1 = (*DAT_10010fe0)(&DAT_10010cc0), cVar1 == '\0')) {
    iVar8 = (*DAT_10010fcc)(5);
    if ((9000 < iVar8) &&
       ((iVar8 = (*DAT_10010fcc)(0), iVar8 != 0 && (iVar8 = (*DAT_10010fcc)(1), iVar8 < 4000)))) {
      iVar8 = (*DAT_10010fcc)(5);
      if (12000 < iVar8) {
        FUN_10001f10(5,1,3000);
      }
      iVar8 = (*DAT_10010fcc)(4);
      if (8000 < iVar8) {
        FUN_10001f10(4,1,2000);
      }
      iVar8 = (*DAT_10010fcc)(2);
      if (20000 < iVar8) {
        FUN_10001f10(2,1,12000);
      }
      iVar8 = (*DAT_10010fcc)(3);
      if (30000 < iVar8) {
        FUN_10001f10(3,1,15000);
      }
    }
    iVar8 = (*DAT_10010fcc)(5);
    if (((9000 < iVar8) && (iVar8 = (*DAT_10010fcc)(1), iVar8 != 0)) &&
       (iVar8 = (*DAT_10010fcc)(1), 4000 < iVar8)) {
      iVar8 = (*DAT_10010fcc)(5);
      if (12000 < iVar8) {
        FUN_10001f10(5,4,3000);
      }
      iVar8 = (*DAT_10010fcc)(2);
      if (20000 < iVar8) {
        FUN_10001f10(2,4,12000);
      }
      iVar8 = (*DAT_10010fcc)(3);
      if (30000 < iVar8) {
        FUN_10001f10(3,4,15000);
      }
    }
  }
  if (100000 < iVar4) {
    FUN_10001f10(2,1,90000);
  }
  if (1000000 < iVar3) {
    FUN_10001f10(0,1,90000);
  }
  if (iVar2 < 300) {
    if (iVar6 < 0x2ee1) {
      if (iVar7 < 0xbb9) {
        if (iVar4 < 0x5dd) {
          if (iVar3 < 0x5dd) goto LAB_100040c2;
          uVar10 = 1000;
          uVar9 = 0;
        }
        else {
          uVar10 = 0x5dc;
          uVar9 = 2;
        }
      }
      else {
        uVar10 = 1000;
        uVar9 = 1;
      }
    }
    else {
      uVar10 = 1000;
      uVar9 = 5;
    }
    FUN_10001f10(uVar9,3,uVar10);
  }
LAB_100040c2:
  cVar1 = (*DAT_10010fdc)(&DAT_10010d60);
  if ((cVar1 == '\0') && (800 < iVar7)) {
    if (9000 < iVar6) {
      FUN_10001f10(5,3,3000);
    }
    if (9000 < iVar5) {
      FUN_10001f10(4,3,3000);
    }
  }
  iVar3 = (*DAT_10010f90)();
  if (*(int *)(&DAT_1001109c + iVar3 * 4) == 0) {
    FUN_10001f10(5,3,5000);
    iVar3 = (*DAT_10010f90)();
    *(undefined4 *)(&DAT_1001109c + iVar3 * 4) = 1;
  }
LAB_10004144:
  cVar1 = (*DAT_10011000)();
  if (cVar1 == '\0') {
    uVar11 = 5;
    uVar10 = 5;
    uVar9 = 0;
  }
  else {
    iVar3 = (*DAT_10010fd0)(&DAT_10010c98);
    if ((iVar3 < 0x14) && (iVar2 < 2000)) {
      uVar11 = 2;
      uVar10 = 5;
      uVar9 = 0xc;
    }
    else {
      cVar1 = (*DAT_10010fdc)(&DAT_10010b98);
      if ((cVar1 == '\0') || (iVar2 < 25000)) {
        uVar11 = 3;
        uVar10 = 5;
        uVar9 = 0xc;
      }
      else {
        uVar11 = 4;
        uVar10 = 6;
        uVar9 = 0xc;
      }
    }
  }
  (*DAT_10010fa4)(uVar9,uVar10,uVar11);
  iVar2 = (*DAT_10010fd0)(&DAT_10010c98);
  iVar3 = FUN_10002be0(1);
  iVar4 = FUN_10002be0(4);
  iVar5 = FUN_10002be0(5);
  iVar5 = ((iVar2 - iVar3) - iVar4) - iVar5;
  FUN_10002bf0(1);
  if (0x28 < iVar5) {
    FUN_10002bf0(0);
  }
  (*DAT_10010f98)(&DAT_10010d20,100,10);
  (*DAT_10010f98)(&DAT_10010d28,100,10);
  (*DAT_10010f98)(&DAT_1000e548,100,10);
  iVar2 = (*DAT_10010fd4)(&DAT_1000e518);
  iVar3 = (*DAT_10010fd0)(&DAT_1000e518);
  if ((iVar3 == iVar2) && (0x28 < iVar5)) {
    (*DAT_10010f94)(&DAT_1000e518,4,0x32,100);
    cVar1 = (*DAT_10010fe0)(&DAT_10010cc0);
    if (cVar1 != '\0') {
      (*DAT_10010f94)(&DAT_1000e518,6,0x32,100);
    }
  }
  cVar1 = (*DAT_10010fdc)(&DAT_10010cc0);
  if (cVar1 != '\0') {
    (*DAT_10010f98)(&DAT_10010dd8,0x32,0x32);
    (*DAT_10010f98)(&DAT_10010dc0,0x28,0x32);
    (*DAT_10010f98)(&DAT_10010dc8,0x1e,0x32);
    (*DAT_10010f98)(&DAT_10010db0,0x14,0x32);
    (*DAT_10010f98)(&DAT_10010db8,0xf,0x32);
    (*DAT_10010f98)(&DAT_10010da8,10,0x32);
  }
  return;
}



// Function: ProcessAI @ 0x100042f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessAI(void)

{
                    /* 0x42f0  3  ProcessAI */
  FUN_10001060();
  FUN_10002bd0(&DAT_1000c180);
  DAT_10010b20 = FUN_10002b90();
  _DAT_10010e40 = FUN_10002190();
  if (DAT_100110e4 == 0) {
    DAT_100110e4 = 10;
    _DAT_1000c380 = 0x1e;
  }
  else if (DAT_100110e4 == 1) {
    DAT_100110e4 = 0x1e;
    _DAT_1000c380 = 0x32;
  }
  else {
    DAT_100110e4 = 100;
    _DAT_1000c380 = 100;
  }
  DAT_1000e4f0 = FUN_100021a0();
  if (DAT_10010b20 == 0) {
    FUN_100035a0();
  }
  else if ((0 < DAT_10010b20) && (DAT_10010b20 < 5)) {
    FUN_100021b0();
  }
  FUN_10001000();
  return;
}



// Function: FUN_100043a0 @ 0x100043a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100043a0(void)

{
  void *extraout_ECX;
  
  FUN_100043b8();
  _DAT_100110ec = FUN_10004662();
  FUN_10004612(extraout_ECX);
  return;
}



// Function: FUN_100043b8 @ 0x100043b8

void FUN_100043b8(void)

{
  PTR___fptrap_1000d38c = &LAB_100046e5;
  PTR___fptrap_1000d388 = __cfltcvt;
  PTR___fptrap_1000d390 = __fassign;
  PTR___fptrap_1000d394 = FUN_1000468b;
  PTR___fptrap_1000d398 = &LAB_10004733;
  PTR___fptrap_1000d39c = __cfltcvt;
  return;
}



// Function: __ftol @ 0x100043f0

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_10004417 @ 0x10004417

int __cdecl FUN_10004417(undefined1 *param_1,byte *param_2)

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
  iVar1 = FUN_10004bc9((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10004ab1(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}



// Function: FUN_10004469 @ 0x10004469

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004469(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10011108 = GetVersion();
    iVar1 = FUN_10005cc5(1);
    if (iVar1 != 0) {
      _DAT_10011114 = DAT_10011108 >> 8 & 0xff;
      _DAT_10011110 = DAT_10011108 & 0xff;
      DAT_10011108 = DAT_10011108 >> 0x10;
      _DAT_1001110c = _DAT_10011110 * 0x100 + _DAT_10011114;
      iVar1 = FUN_100054f1();
      if (iVar1 != 0) {
        DAT_100127f4 = GetCommandLineA();
        DAT_100110f4 = FUN_10005b93();
        FUN_1000567d();
        FUN_10005946();
        FUN_1000588d();
        FUN_100053d3();
        DAT_100110f0 = DAT_100110f0 + 1;
        goto LAB_1000453c;
      }
      FUN_10005d01();
    }
LAB_100044c9:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100110f0 < 1) goto LAB_100044c9;
      DAT_100110f0 = DAT_100110f0 + -1;
      if (DAT_10011140 == 0) {
        FUN_10005411();
      }
      FUN_10005839();
      FUN_10005545();
      FUN_10005d01();
    }
    else if (param_2 == 3) {
      FUN_100055dd((LPVOID)0x0);
    }
LAB_1000453c:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10004542

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100110f0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1000458a;
    if ((DAT_100127f8 != (code *)0x0) &&
       (iVar2 = (*DAT_100127f8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10004469(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1000458a:
  iVar2 = FUN_10002c60(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10004469(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10004469(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_100127f8 != (code *)0x0) {
      iVar2 = (*DAT_100127f8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x100045df

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100110fc == 1) || ((DAT_100110fc == 0 && (DAT_10011100 == 1)))) {
    FUN_10005d76();
  }
  FUN_10005daf(param_1);
  (*(code *)PTR___exit_1000d384)(0xff);
  return;
}



// Function: FUN_10004612 @ 0x10004612

void __fastcall FUN_10004612(void *param_1)

{
  FUN_10005f37(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_10004624 @ 0x10004624

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004624(void)

{
  if (_DAT_1000b0e0 < _DAT_1000b0e8 - (_DAT_1000b0e8 / _DAT_1000b0f0) * _DAT_1000b0f0) {
    return 1;
  }
  return 0;
}



// Function: FUN_10004662 @ 0x10004662

void FUN_10004662(void)

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
  FUN_10004624();
  return;
}



// Function: FUN_1000468b @ 0x1000468b

void __cdecl FUN_1000468b(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_100060dd((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1000d468 < 2) {
        uVar3 = (byte)PTR_DAT_1000d474[*param_1 * 2] & 4;
        this = PTR_DAT_1000d474;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_10006068(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1000d46c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x1000474b

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
    FUN_100065a9(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_100065d6(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_10004789 @ 0x10004789

undefined1 * __cdecl FUN_10004789(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_1000667a((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10006603(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_100047ea(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_100047ea @ 0x100047ea

undefined1 * __cdecl
FUN_100047ea(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10004a8c(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_1000d46c;
  }
  puVar3 = FUN_10006790((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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



// Function: FUN_100048ac @ 0x100048ac

char * __cdecl FUN_100048ac(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000667a((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10006603(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10004901(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_10004901 @ 0x10004901

char * __cdecl FUN_10004901(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_10004a8c(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10004a8c(pcVar3,1);
    *pcVar3 = DAT_1000d46c;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10004a8c(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_100049a8 @ 0x100049a8

void __cdecl FUN_100049a8(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000667a((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10006603(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_100047ea(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_10004901(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x10004a3b

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_10004789(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_100048ac(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_100049a8(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_10004a8c @ 0x10004a8c

void __cdecl FUN_10004a8c(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_100068e0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_10004ab1 @ 0x10004ab1

uint __cdecl FUN_10004ab1(uint param_1,int *param_2)

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
LAB_10004bbd:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_10004bbd;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_1000d6d0 && (piVar4 != (int *)&DAT_1000d6f0)) ||
        (bVar5 = FUN_10006fb0(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_10006f6c(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_10006d7c(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_1000d3b0;
        }
        else {
          puVar6 = (undefined *)((&DAT_100126e0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_10006ca4(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_10006d7c(uVar2,pcVar3,(uint)piVar7);
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



// Function: FUN_10004bc9 @ 0x10004bc9

int __cdecl FUN_10004bc9(int *param_1,byte *param_2,undefined4 *param_3)

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
      uVar2 = (byte)"GAIsProcessorFeaturePresent"[(char)bVar9 + 0x1a] & 0xf;
    }
    local_34 = (int)(char)(&DAT_1000b130)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_10004c37_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_1000d474[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_1000530a((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_1000530a((int)(char)bVar9,param_1,&local_18);
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
        local_24 = FUN_100053a8((int *)&param_3);
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
        local_14 = FUN_100053a8((int *)&param_3);
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
          goto switchD_10004c37_caseD_0;
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
LAB_10005048:
              local_30 = 7;
LAB_1000504f:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_100050b9;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_10004df6;
                }
                goto LAB_100051d3;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_10004e57;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_10004e84:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_100053a8((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_100053c5((int *)&param_3);
              local_10 = (undefined1 *)FUN_10007139(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_100053a8((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_1000d3a0;
              pWVar4 = (WCHAR *)PTR_DAT_1000d3a0;
              goto LAB_10004fc9;
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
            if (bVar9 == 99) goto LAB_10004e84;
            if (bVar9 == 100) goto LAB_100050ae;
          }
        }
        else {
LAB_10004e57:
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
          (*(code *)PTR___fptrap_1000d388)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_1000d394)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_1000d38c)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_10004fc9:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_100050ae:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_100053a8((int *)&param_3);
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
            goto LAB_100050b9;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_10005048;
          }
          if (bVar9 == 0x73) {
LAB_10004df6:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_100053a8((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_1000d3a0;
                pWVar4 = (WCHAR *)PTR_DAT_1000d3a0;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_1000d3a4;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_100051d3;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_100051d3;
            local_30 = 0x27;
            goto LAB_1000504f;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_100050b9:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_100053a8((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_1000510c;
            }
            uVar2 = FUN_100053a8((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_100053a8((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_100053a8((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_100053b5((int *)&param_3);
        }
LAB_1000510c:
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
LAB_100051d3:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_1000520b;
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
LAB_1000520b:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_1000533f(0x20,iVar10,param_1,&local_18);
        }
        FUN_10005370(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_1000533f(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_10005370((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_10007139(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_10005370(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_1000533f(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}



// Function: FUN_1000530a @ 0x1000530a

void __cdecl FUN_1000530a(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10004ab1(param_1,param_2);
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



// Function: FUN_1000533f @ 0x1000533f

void __cdecl FUN_1000533f(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1000530a(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



// Function: FUN_10005370 @ 0x10005370

void __cdecl FUN_10005370(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1000530a((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



// Function: FUN_100053a8 @ 0x100053a8

undefined4 __cdecl FUN_100053a8(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



// Function: FUN_100053b5 @ 0x100053b5

undefined8 __cdecl FUN_100053b5(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



// Function: FUN_100053c5 @ 0x100053c5

undefined4 __cdecl FUN_100053c5(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}



// Function: FUN_100053d3 @ 0x100053d3

void FUN_100053d3(void)

{
  if (PTR_FUN_1000d378 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1000d378)();
  }
  FUN_100054d7((undefined4 *)&DAT_1000c008,(undefined4 *)&DAT_1000c014);
  FUN_100054d7((undefined4 *)&DAT_1000c000,(undefined4 *)&DAT_1000c004);
  return;
}



// Function: __exit @ 0x10005400

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10005420(_Code,1,0);
  return;
}



// Function: FUN_10005411 @ 0x10005411

void FUN_10005411(void)

{
  FUN_10005420(0,0,1);
  return;
}



// Function: FUN_10005420 @ 0x10005420

void __cdecl FUN_10005420(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100054c5();
  if (DAT_10011144 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10011140 = 1;
  DAT_1001113c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_100127f0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_100127ec - 4), DAT_100127f0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_100127f0 <= puVar1);
    }
    FUN_100054d7((undefined4 *)&DAT_1000c018,(undefined4 *)&DAT_1000c020);
  }
  FUN_100054d7((undefined4 *)&DAT_1000c024,(undefined4 *)&DAT_1000c028);
  if (param_3 == 0) {
    DAT_10011144 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100054ce();
  return;
}



// Function: FUN_100054c5 @ 0x100054c5

void FUN_100054c5(void)

{
  FUN_1000737a(0xd);
  return;
}



// Function: FUN_100054ce @ 0x100054ce

void FUN_100054ce(void)

{
  FUN_100073db(0xd);
  return;
}



// Function: FUN_100054d7 @ 0x100054d7

void __cdecl FUN_100054d7(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_100054f1 @ 0x100054f1

undefined4 FUN_100054f1(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100072e5();
  DAT_1000d3a8 = TlsAlloc();
  if (DAT_1000d3a8 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100073f0(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000d3a8,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10005563((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10005545 @ 0x10005545

void FUN_10005545(void)

{
  FUN_1000730e();
  if (DAT_1000d3a8 != 0xffffffff) {
    TlsFree(DAT_1000d3a8);
    DAT_1000d3a8 = 0xffffffff;
  }
  return;
}



// Function: FUN_10005563 @ 0x10005563

void __cdecl FUN_10005563(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000d9f0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10005576 @ 0x10005576

DWORD * FUN_10005576(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000d3a8);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_100073f0(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000d3a8,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10005563((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_100055d1;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100055d1:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_100055dd @ 0x100055dd

void __cdecl FUN_100055dd(LPVOID param_1)

{
  if (DAT_1000d3a8 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_1000d3a8), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_1000747d(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_1000747d(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_1000747d(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_1000747d(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_1000747d(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_1000747d(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_1000d9f0) {
        FUN_1000747d(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_1000747d(param_1);
    }
    TlsSetValue(DAT_1000d3a8,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_1000567d @ 0x1000567d

void FUN_1000567d(void)

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
  DAT_100127e0 = 0x20;
  DAT_100126e0 = puVar2;
  for (; puVar2 < DAT_100126e0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_100127e0 < (int)UVar8) {
      puVar2 = &DAT_100126e4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_100127e0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_100127e0 = DAT_100127e0 + 0x20;
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
      } while ((int)DAT_100127e0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_100126e0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_100126e0 + iVar6 * 9;
    if (DAT_100126e0[iVar6 * 9] == -1) {
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
          goto LAB_10005822;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10005822:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_100127e0);
      return;
    }
  } while( true );
}



// Function: FUN_10005839 @ 0x10005839

void FUN_10005839(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_100126e0;
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
      FUN_1000747d((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x100127e0);
  return;
}



// Function: FUN_1000588d @ 0x1000588d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000588d(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_100127e8 == 0) {
    FUN_10007929();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100110f4; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10011124 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100110f4;
  puVar6 = DAT_100110f4;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10006790((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1000747d(DAT_100110f4);
  DAT_100110f4 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_100127e4 = 1;
  return;
}



// Function: FUN_10005946 @ 0x10005946

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005946(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_100127e8 == 0) {
    FUN_10007929();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10011148,0x104);
  _DAT_10011134 = &DAT_10011148;
  pbVar2 = &DAT_10011148;
  if (*DAT_100127f4 != 0) {
    pbVar2 = DAT_100127f4;
  }
  FUN_100059df(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100059df(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1001111c = puVar1;
  _DAT_10011118 = local_8 + -1;
  return;
}



// Function: FUN_100059df @ 0x100059df

void __cdecl FUN_100059df(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_100115a0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_100115a0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10005a8a;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10005a8a:
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
          if ((*(byte *)((int)&DAT_100115a0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_100115a0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10005b93 @ 0x10005b93

LPSTR FUN_10005b93(void)

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
  if (DAT_1001124c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1001124c = 1;
LAB_10005bea:
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
        FUN_1000747d(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1001124c = 2;
  }
  else {
    if (DAT_1001124c == 1) goto LAB_10005bea;
    if (DAT_1001124c != 2) {
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
    FUN_10007950((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10005cc5 @ 0x10005cc5

undefined4 __cdecl FUN_10005cc5(int param_1)

{
  int iVar1;
  
  DAT_100126c4 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100126c4 != (HANDLE)0x0) {
    iVar1 = FUN_10007c85();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_100126c4);
  }
  return 0;
}



// Function: FUN_10005d01 @ 0x10005d01

void FUN_10005d01(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_10011470) {
    puVar2 = (undefined4 *)((int)DAT_10011474 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_100126c4,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10011470);
  }
  HeapFree(DAT_100126c4,0,DAT_10011474);
  HeapDestroy(DAT_100126c4);
  return;
}



// Function: FUN_10005d76 @ 0x10005d76

void FUN_10005d76(void)

{
  if ((DAT_100110fc == 1) || ((DAT_100110fc == 0 && (DAT_10011100 == 1)))) {
    FUN_10005daf(0xfc);
    if (DAT_10011250 != (code *)0x0) {
      (*DAT_10011250)();
    }
    FUN_10005daf(0xff);
  }
  return;
}



// Function: FUN_10005daf @ 0x10005daf

void __cdecl FUN_10005daf(DWORD param_1)

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
  pDVar2 = &DAT_1000d3d8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000d468);
  if (param_1 == (&DAT_1000d3d8)[iVar5 * 2]) {
    if ((DAT_100110fc == 1) || ((DAT_100110fc == 0 && (DAT_10011100 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000d3dc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10006790(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10006790(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100067a0(local_a4,_Dest);
      FUN_100067a0(local_a4,(uint *)&DAT_1000b458);
      FUN_100067a0(local_a4,*(uint **)(iVar5 * 8 + 0x1000d3dc));
      auStackY_1e3._3_4_ = 0x10005ed3;
      FUN_100084ce(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10005f02 @ 0x10005f02

uint __thiscall FUN_10005f02(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10005f4d(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10005fdf(uVar1);
  return uVar1;
}



// Function: FUN_10005f37 @ 0x10005f37

void __thiscall FUN_10005f37(void *this,uint param_1,uint param_2)

{
  FUN_10005f02(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_10005f4d @ 0x10005f4d

uint __cdecl FUN_10005f4d(uint param_1)

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



// Function: FUN_10005fdf @ 0x10005fdf

uint __cdecl FUN_10005fdf(uint param_1)

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



// Function: FUN_10006068 @ 0x10006068

uint __thiscall FUN_10006068(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000d474 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000d474[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000865e(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_100060dd @ 0x100060dd

uint __cdecl FUN_100060dd(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100112f4 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1001145c);
    bVar1 = DAT_10011458 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1001145c);
      this = (void *)0x13;
      FUN_1000737a(0x13);
    }
    param_1 = FUN_1000614c(this,param_1);
    if (bVar1) {
      FUN_100073db(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1001145c);
    }
  }
  return param_1;
}



// Function: FUN_1000614c @ 0x1000614c

uint __thiscall FUN_1000614c(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100112f4 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000d468 < 2) {
        uVar2 = (byte)PTR_DAT_1000d474[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10006068(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000d474[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100087a7(DAT_100112f4,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_10006217 @ 0x10006217

undefined4 __cdecl FUN_10006217(int param_1,int param_2)

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



// Function: FUN_10006260 @ 0x10006260

void __cdecl FUN_10006260(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_100089f6(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_100089f6(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_100062b6 @ 0x100062b6

undefined4 __cdecl FUN_100062b6(int param_1,int param_2)

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
     (iVar2 = FUN_10006217(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10006260(param_1,param_2 + -1);
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



// Function: FUN_10006342 @ 0x10006342

void __cdecl FUN_10006342(int param_1,undefined4 *param_2)

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



// Function: FUN_1000635d @ 0x1000635d

void __cdecl FUN_1000635d(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_10006369 @ 0x10006369

undefined4 __cdecl FUN_10006369(int *param_1)

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



// Function: FUN_10006384 @ 0x10006384

void __cdecl FUN_10006384(uint *param_1,uint param_2)

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



// Function: FUN_10006411 @ 0x10006411

undefined4 __cdecl FUN_10006411(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_10006369((int *)&local_10);
    if (iVar2 != 0) {
LAB_1000653d:
      uVar5 = 0;
      goto LAB_1000653f;
    }
    FUN_1000635d(&local_10);
  }
  else {
    FUN_10006342((int)local_1c,&local_10);
    iVar2 = FUN_100062b6((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_1000635d(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_1000635d(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10006384(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_1000653f;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10006384(&local_10,param_3[3]);
        goto LAB_1000653d;
      }
      FUN_10006342((int)&local_10,local_1c);
      FUN_10006384(&local_10,iVar2 - iVar4);
      FUN_100062b6((int)&local_10,param_3[2]);
      FUN_10006384(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_1000653f:
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



// Function: FUN_1000657d @ 0x1000657d

void __cdecl FUN_1000657d(ushort *param_1,uint *param_2)

{
  FUN_10006411(param_1,param_2,(int *)&DAT_1000d680);
  return;
}



// Function: FUN_10006593 @ 0x10006593

void __cdecl FUN_10006593(ushort *param_1,uint *param_2)

{
  FUN_10006411(param_1,param_2,(int *)&DAT_1000d698);
  return;
}



// Function: FUN_100065a9 @ 0x100065a9

void __thiscall FUN_100065a9(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10008b97(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1000657d(local_10,param_1);
  return;
}



// Function: FUN_100065d6 @ 0x100065d6

void __thiscall FUN_100065d6(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10008b97(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10006593(local_10,param_1);
  return;
}



// Function: FUN_10006603 @ 0x10006603

void __cdecl FUN_10006603(char *param_1,int param_2,int param_3)

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
    FUN_100068e0((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_1000667a @ 0x1000667a

int * __cdecl FUN_1000667a(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_100066d6(&local_10,&param_1);
  iVar3 = FUN_10009068(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10006790(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_100066d6 @ 0x100066d6

void __cdecl FUN_100066d6(uint *param_1,uint *param_2)

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



// Function: FUN_10006790 @ 0x10006790

uint * __cdecl FUN_10006790(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10006878;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10006878:
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



// Function: FUN_100067a0 @ 0x100067a0

uint * __cdecl FUN_100067a0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100067bc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100067ef;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000680b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100067bc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000680b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000680b;
    }
  }
LAB_100067ef:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000680b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10006878:
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
    if (bVar1 == 0) goto LAB_10006878;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _memset @ 0x10006880

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



// Function: FUN_100068e0 @ 0x100068e0

undefined4 * __cdecl FUN_100068e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10006a97_caseD_2;
        case 3:
          goto switchD_10006a97_caseD_3;
        }
        goto switchD_10006a97_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006a97_caseD_0;
      case 1:
        goto switchD_10006a97_caseD_1;
      case 2:
        goto switchD_10006a97_caseD_2;
      case 3:
        goto switchD_10006a97_caseD_3;
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
              goto switchD_10006a97_caseD_2;
            case 3:
              goto switchD_10006a97_caseD_3;
            }
            goto switchD_10006a97_caseD_1;
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
              goto switchD_10006a97_caseD_2;
            case 3:
              goto switchD_10006a97_caseD_3;
            }
            goto switchD_10006a97_caseD_1;
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
              goto switchD_10006a97_caseD_2;
            case 3:
              goto switchD_10006a97_caseD_3;
            }
            goto switchD_10006a97_caseD_1;
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
switchD_10006a97_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006a97_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006a97_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006a97_caseD_0:
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
        goto switchD_10006915_caseD_2;
      case 3:
        goto switchD_10006915_caseD_3;
      }
      goto switchD_10006915_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006915_caseD_0;
    case 1:
      goto switchD_10006915_caseD_1;
    case 2:
      goto switchD_10006915_caseD_2;
    case 3:
      goto switchD_10006915_caseD_3;
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
            goto switchD_10006915_caseD_2;
          case 3:
            goto switchD_10006915_caseD_3;
          }
          goto switchD_10006915_caseD_1;
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
            goto switchD_10006915_caseD_2;
          case 3:
            goto switchD_10006915_caseD_3;
          }
          goto switchD_10006915_caseD_1;
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
            goto switchD_10006915_caseD_2;
          case 3:
            goto switchD_10006915_caseD_3;
          }
          goto switchD_10006915_caseD_1;
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
switchD_10006915_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006915_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006915_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006915_caseD_0:
  return param_1;
}



// Function: _strlen @ 0x10006c20

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10006c40;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10006c73:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10006c40:
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
  goto LAB_10006c73;
}



// Function: __fptrap @ 0x10006c9b

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



// Function: FUN_10006ca4 @ 0x10006ca4

DWORD __cdecl FUN_10006ca4(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100127e0) &&
     ((*(byte *)((&DAT_100126e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009441(param_1);
    DVar1 = FUN_10006d09(param_1,param_2,param_3);
    FUN_100094a0(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1000936e();
  *pDVar2 = 9;
  pDVar2 = FUN_10009377();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10006d09 @ 0x10006d09

DWORD __cdecl FUN_10006d09(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_100093ff(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000936e();
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
      pbVar1 = (byte *)((&DAT_100126e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_100092fb(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_10006d7c @ 0x10006d7c

int __cdecl FUN_10006d7c(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100127e0) &&
     ((*(byte *)((&DAT_100126e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009441(param_1);
    iVar1 = FUN_10006de1(param_1,param_2,param_3);
    FUN_100094a0(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000936e();
  *pDVar2 = 9;
  pDVar2 = FUN_10009377();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10006de1 @ 0x10006de1

int __cdecl FUN_10006de1(DWORD param_1,char *param_2,uint param_3)

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
LAB_10006dfa:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_100126e0 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10006d09(param_1,0,2);
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
LAB_10006ec9:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10006f3b;
      if (param_1 == 5) {
        pDVar7 = FUN_1000936e();
        *pDVar7 = 9;
        pDVar7 = FUN_10009377();
        *pDVar7 = 5;
      }
      else {
        FUN_100092fb(param_1);
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
            goto LAB_10006ec9;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10006ec9;
        } while( true );
      }
LAB_10006f3b:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10006dfa;
      pDVar7 = FUN_1000936e();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10009377();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_10006f6c @ 0x10006f6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10006f6c(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_10011254 = _DAT_10011254 + 1;
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



// Function: FUN_10006fb0 @ 0x10006fb0

byte __cdecl FUN_10006fb0(uint param_1)

{
  if (DAT_100127e0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_100126e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



// Function: FUN_10007095 @ 0x10007095

void __cdecl FUN_10007095(uint param_1)

{
  if ((0x1000d6af < param_1) && (param_1 < 0x1000d911)) {
    FUN_1000737a(((int)(param_1 + 0xefff2950) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_100070c4 @ 0x100070c4

void __cdecl FUN_100070c4(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000737a(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_100070e7 @ 0x100070e7

void __cdecl FUN_100070e7(uint param_1)

{
  if ((0x1000d6af < param_1) && (param_1 < 0x1000d911)) {
    FUN_100073db(((int)(param_1 + 0xefff2950) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10007116 @ 0x10007116

void __cdecl FUN_10007116(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100073db(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10007139 @ 0x10007139

int __cdecl FUN_10007139(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1001145c);
  bVar2 = DAT_10011458 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1001145c);
    FUN_1000737a(0x13);
  }
  iVar1 = FUN_10007192(param_1,param_2);
  if (bVar2) {
    FUN_100073db(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1001145c);
  }
  return iVar1;
}



// Function: FUN_10007192 @ 0x10007192

int __cdecl FUN_10007192(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_100112f4 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_10011304,0x220,&param_2,1,lpMultiByteStr,DAT_1000d468,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1000936e();
  *pDVar2 = 0x2a;
  return -1;
}



// Function: __aulldiv @ 0x10007200

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



// Function: __aullrem @ 0x10007270

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



// Function: FUN_100072e5 @ 0x100072e5

void FUN_100072e5(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d974);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d964);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d954);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d934);
  return;
}



// Function: FUN_1000730e @ 0x1000730e

void FUN_1000730e(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000d930;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000d974)) && (ppuVar1 != &PTR_DAT_1000d964)) &&
       ((ppuVar1 != &PTR_DAT_1000d954 && (ppuVar1 != &PTR_DAT_1000d934)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000747d(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000d9f0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d954);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d964);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d974);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d934);
  return;
}



// Function: FUN_1000737a @ 0x1000737a

void __cdecl FUN_1000737a(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000d930 + param_1;
  if ((&DAT_1000d930)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1000737a(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1000747d(lpCriticalSection);
    }
    FUN_100073db(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_100073db @ 0x100073db

void __cdecl FUN_100073db(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000d930)[param_1]);
  return;
}



// Function: FUN_100073f0 @ 0x100073f0

int * __cdecl FUN_100073f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if (_Size < DAT_1000db70 || (int)_Size - (int)DAT_1000db70 == 0) {
        FUN_1000737a(9);
        piVar1 = FUN_10008019(_Size);
        FUN_100073db(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_100126c4,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10011314 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_1000967a(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_1000747d @ 0x1000747d

void __cdecl FUN_1000747d(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_1000737a(9);
    puVar1 = (uint *)FUN_10007cc3((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_10007cee(puVar1,(uint)param_1);
      FUN_100073db(9);
      return;
    }
    FUN_100073db(9);
    HeapFree(DAT_100126c4,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x100074c5

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10011314);
  return pvVar1;
}



// Function: __nh_malloc @ 0x100074d7

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_10007503((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1000967a(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10007503 @ 0x10007503

int * __cdecl FUN_10007503(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_1000db70) {
    FUN_1000737a(9);
    piVar1 = FUN_10008019(param_1);
    FUN_100073db(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_100126c4,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_10007551 @ 0x10007551

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10007551(int param_1)

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
  
  FUN_1000737a(0x19);
  CodePage = FUN_100076fe(param_1);
  if (CodePage != DAT_10011478) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000da80;
LAB_1000758e:
      if (*pUVar5 != CodePage) goto code_r0x10007592;
      local_8 = 0;
      puVar15 = &DAT_100115a0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000da90);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000da78)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_100115a0 + uVar8 + 1);
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
      _DAT_1001148c = 1;
      DAT_10011478 = CodePage;
      DAT_100116a4 = FUN_10007748(CodePage);
      DAT_10011480 = *(undefined4 *)(iVar12 + 0x1000da84);
      DAT_10011484 = *(undefined4 *)(iVar12 + 0x1000da88);
      DAT_10011488 = *(undefined4 *)(iVar12 + 0x1000da8c);
      goto LAB_100076e2;
    }
    goto LAB_100076dd;
  }
  goto LAB_10007578;
code_r0x10007592:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000db6f < (int)pUVar5) goto code_r0x1000759d;
  goto LAB_1000758e;
code_r0x1000759d:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_100116a4 = 0;
    puVar15 = &DAT_100115a0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1001148c = 0;
      DAT_10011478 = CodePage;
    }
    else {
      DAT_10011478 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_100115a0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_100115a0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_100116a4 = FUN_10007748(CodePage);
      _DAT_1001148c = 1;
    }
    DAT_10011480 = 0;
    DAT_10011484 = 0;
    DAT_10011488 = 0;
  }
  else {
    if (DAT_100112b8 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100076ef;
    }
LAB_100076dd:
    FUN_1000777b();
  }
LAB_100076e2:
  FUN_100077a4();
LAB_10007578:
  uVar14 = 0;
LAB_100076ef:
  FUN_100073db(0x19);
  return uVar14;
}



// Function: FUN_100076fe @ 0x100076fe

int __cdecl FUN_100076fe(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_100112b8 = 1;
                    /* WARNING: Could not recover jumptable at 0x10007718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_100112b8 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000772d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10011304;
  }
  DAT_100112b8 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10007748 @ 0x10007748

undefined4 __cdecl FUN_10007748(int param_1)

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



// Function: FUN_1000777b @ 0x1000777b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000777b(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100115a0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10011478 = 0;
  _DAT_1001148c = 0;
  DAT_100116a4 = 0;
  DAT_10011480 = 0;
  DAT_10011484 = 0;
  DAT_10011488 = 0;
  return;
}



// Function: FUN_100077a4 @ 0x100077a4

void FUN_100077a4(void)

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
  
  BVar2 = GetCPInfo(DAT_10011478,&local_18);
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
    FUN_1000865e(1,local_118,0x100,local_518,DAT_10011478,DAT_100116a4,0);
    FUN_100087a7(DAT_100116a4,0x100,local_118,0x100,local_218,0x100,DAT_10011478,0);
    FUN_100087a7(DAT_100116a4,0x200,local_118,0x100,local_318,0x100,DAT_10011478,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_100115a0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_100078b0;
        }
        (&DAT_100114a0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100115a0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_100078b0:
        (&DAT_100114a0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_100115a0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_100078fa;
        }
        (&DAT_100114a0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100115a0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_100078fa:
        (&DAT_100114a0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10007929 @ 0x10007929

void FUN_10007929(void)

{
  if (DAT_100127e8 == 0) {
    FUN_10007551(-3);
    DAT_100127e8 = 1;
  }
  return;
}



// Function: FUN_10007950 @ 0x10007950

undefined4 * __cdecl FUN_10007950(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10007b07_caseD_2;
        case 3:
          goto switchD_10007b07_caseD_3;
        }
        goto switchD_10007b07_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007b07_caseD_0;
      case 1:
        goto switchD_10007b07_caseD_1;
      case 2:
        goto switchD_10007b07_caseD_2;
      case 3:
        goto switchD_10007b07_caseD_3;
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
              goto switchD_10007b07_caseD_2;
            case 3:
              goto switchD_10007b07_caseD_3;
            }
            goto switchD_10007b07_caseD_1;
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
              goto switchD_10007b07_caseD_2;
            case 3:
              goto switchD_10007b07_caseD_3;
            }
            goto switchD_10007b07_caseD_1;
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
              goto switchD_10007b07_caseD_2;
            case 3:
              goto switchD_10007b07_caseD_3;
            }
            goto switchD_10007b07_caseD_1;
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
switchD_10007b07_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007b07_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007b07_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007b07_caseD_0:
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
        goto switchD_10007985_caseD_2;
      case 3:
        goto switchD_10007985_caseD_3;
      }
      goto switchD_10007985_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007985_caseD_0;
    case 1:
      goto switchD_10007985_caseD_1;
    case 2:
      goto switchD_10007985_caseD_2;
    case 3:
      goto switchD_10007985_caseD_3;
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
            goto switchD_10007985_caseD_2;
          case 3:
            goto switchD_10007985_caseD_3;
          }
          goto switchD_10007985_caseD_1;
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
            goto switchD_10007985_caseD_2;
          case 3:
            goto switchD_10007985_caseD_3;
          }
          goto switchD_10007985_caseD_1;
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
            goto switchD_10007985_caseD_2;
          case 3:
            goto switchD_10007985_caseD_3;
          }
          goto switchD_10007985_caseD_1;
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
switchD_10007985_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007985_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007985_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007985_caseD_0:
  return param_1;
}



// Function: FUN_10007c85 @ 0x10007c85

undefined4 FUN_10007c85(void)

{
  DAT_10011474 = HeapAlloc(DAT_100126c4,0,0x140);
  if (DAT_10011474 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1001146c = 0;
  DAT_10011470 = 0;
  DAT_10011468 = DAT_10011474;
  DAT_10011460 = 0x10;
  return 1;
}



// Function: FUN_10007cc3 @ 0x10007cc3

uint __cdecl FUN_10007cc3(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10011474;
  while( true ) {
    if (DAT_10011474 + DAT_10011470 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10007cee @ 0x10007cee

void __cdecl FUN_10007cee(uint *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar5 = param_1[4];
  iVar6 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar7 = *(uint *)(param_2 - 8);
  local_10 = iVar6 + -1;
  piVar3 = (int *)(uVar10 * 0x204 + 0x144 + uVar5);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar6 + 3 + (int)piVar9) == *(int *)(iVar6 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar6 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar6 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar6 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar7 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar7);
    param_2 = ((int)uVar7 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar7;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar7 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar3[uVar12 * 2 + 1];
    piVar9[2] = (int)(piVar3 + uVar12 * 2);
    (piVar3 + uVar12 * 2)[1] = (int)piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar4 = *(char *)(uVar12 + 4 + uVar5);
      *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar3 = *piVar3 + -1;
  uVar5 = DAT_10011464;
  puVar2 = DAT_1001146c;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_1001146c != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_10011464 * 0x8000 + DAT_1001146c[3]),0x8000,0x4000);
    DAT_1001146c[2] = DAT_1001146c[2] | 0x80000000U >> ((byte)DAT_10011464 & 0x1f);
    *(undefined4 *)(DAT_1001146c[4] + 0xc4 + DAT_10011464 * 4) = 0;
    *(char *)(DAT_1001146c[4] + 0x43) = *(char *)(DAT_1001146c[4] + 0x43) + -1;
    if (*(char *)(DAT_1001146c[4] + 0x43) == '\0') {
      DAT_1001146c[1] = DAT_1001146c[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_1001146c[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_1001146c[3],0,0x8000);
      HeapFree(DAT_100126c4,0,(LPVOID)DAT_1001146c[4]);
      FUN_100068e0(DAT_1001146c,DAT_1001146c + 5,
                   (DAT_10011470 * 0x14 - (int)DAT_1001146c) + -0x14 + DAT_10011474);
      DAT_10011470 = DAT_10011470 + -1;
      if (DAT_1001146c < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_10011468 = DAT_10011474;
      puVar2 = param_1;
    }
  }
  DAT_1001146c = puVar2;
  DAT_10011464 = uVar5;
  return;
}



// Function: FUN_10008019 @ 0x10008019

int * __cdecl FUN_10008019(uint *param_1)

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
  
  puVar8 = DAT_10011474 + DAT_10011470 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10011468;
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
  puVar11 = DAT_10011474;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10011468 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10011468) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10011474;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10011468 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10011468) && (param_1 = FUN_10008322(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100083d3((int)param_1);
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
  DAT_10011468 = param_1;
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
    if (iVar9 == 0) goto LAB_100082df;
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
LAB_100082df:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1001146c)) && (local_8 == DAT_10011464)) {
    DAT_1001146c = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10008322 @ 0x10008322

undefined4 * FUN_10008322(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10011470 == DAT_10011460) {
    pvVar2 = HeapReAlloc(DAT_100126c4,0,DAT_10011474,(DAT_10011460 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10011460 = DAT_10011460 + 0x10;
    DAT_10011474 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10011474 + DAT_10011470 * 0x14);
  pvVar2 = HeapAlloc(DAT_100126c4,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10011470 = DAT_10011470 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_100126c4,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100083d3 @ 0x100083d3

int __cdecl FUN_100083d3(int param_1)

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



// Function: FUN_100084ce @ 0x100084ce

int __cdecl FUN_100084ce(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100112bc == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100112bc = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100112bc != (FARPROC)0x0) {
        DAT_100112c0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100112c4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000851d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000851d:
    if (DAT_100112c0 != (FARPROC)0x0) {
      iVar1 = (*DAT_100112c0)();
      if ((iVar1 != 0) && (DAT_100112c4 != (FARPROC)0x0)) {
        iVar1 = (*DAT_100112c4)(iVar1);
      }
    }
    iVar1 = (*DAT_100112bc)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10008560

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
        goto joined_r0x1000859e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100085db;
        goto LAB_10008649;
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
joined_r0x10008645:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10008649:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100085db;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10008645;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10008645;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10008645;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000859e:
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
LAB_100085db:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_1000865e @ 0x1000865e

BOOL __cdecl
FUN_1000865e(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000b4d8;
  puStack_10 = &LAB_10009790;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_100112dc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_100112dc == 0) {
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
  DAT_100112dc = iVar3;
  if (DAT_100112dc != 2) {
    if (DAT_100112dc == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10011304;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10009870();
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
    param_6 = DAT_100112f4;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_100087a7 @ 0x100087a7

int __cdecl
FUN_100087a7(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b4e8;
  puStack_10 = &LAB_10009790;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1001130c == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1001130c = 2;
    }
    else {
      DAT_1001130c = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100089cb(param_3,param_4);
  }
  if (DAT_1001130c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1001130c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10011304;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10009870();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10009870();
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



// Function: FUN_100089cb @ 0x100089cb

int __cdecl FUN_100089cb(char *param_1,int param_2)

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



// Function: FUN_100089f6 @ 0x100089f6

undefined4 __cdecl FUN_100089f6(uint param_1,uint param_2,uint *param_3)

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



// Function: ___add_12 @ 0x10008a17

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100089f6(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_100089f6(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_100089f6(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_100089f6(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_10008a75 @ 0x10008a75

void __cdecl FUN_10008a75(uint *param_1)

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



// Function: FUN_10008aa3 @ 0x10008aa3

void __cdecl FUN_10008aa3(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_10008ad0 @ 0x10008ad0

void __cdecl FUN_10008ad0(char *param_1,int param_2,uint *param_3)

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
      FUN_10008a75(puVar1);
      FUN_10008a75(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_10008a75(puVar1);
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
    FUN_10008a75(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_10008b97 @ 0x10008b97

undefined4 __thiscall
FUN_10008b97(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_10008bee:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_10008c0b:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_10008e30;
    }
    if (bVar6 == DAT_1000d46c) goto LAB_10008c1a;
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
      if (bVar6 != 0x30) goto LAB_10008f0a;
    }
    goto LAB_10008bee;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_10008c0b;
    iVar9 = iVar1;
    if (bVar6 != DAT_1000d46c) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_10008c9f;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_10008c78;
    }
    goto LAB_10008bee;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_10008c0b;
    if (bVar6 == DAT_1000d46c) {
LAB_10008c1a:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10008f0f;
    }
    goto LAB_10008bee;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_1000d468 < 2) {
        uVar3 = (byte)PTR_DAT_1000d474[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000d474;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006068(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_1000d46c) goto LAB_10008d8c;
    goto LAB_10008bee;
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
      if (DAT_1000d468 < 2) {
        uVar3 = (byte)PTR_DAT_1000d474[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000d474;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006068(this,(uint)bVar6,4);
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
LAB_10008d8c:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_10008c9f:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_10008c78:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_10008f0a;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_10008bee;
  case 5:
    local_28 = iVar5;
    if (DAT_1000d468 < 2) {
      uVar3 = (byte)PTR_DAT_1000d474[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000d474;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006068(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_10008e30;
    goto LAB_10008f0f;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_10008e65;
      if (bVar6 == 0x2d) goto LAB_10008e59;
      if (bVar6 != 0x30) goto LAB_10008f0f;
LAB_10008dfe:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_10008bee;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_10008dfe;
      goto LAB_10008f0f;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_10008f0a;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_10008e90;
  default:
    goto switchD_10008bfa_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_10008e65:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_10008f0f;
LAB_10008e59:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_10008bee;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_10008bfa_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_10008bee;
    goto LAB_10008f0f;
  }
  iVar9 = 9;
LAB_10008e30:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_10008bee;
LAB_10008e90:
  if (DAT_1000d468 < 2) {
    uVar3 = (byte)PTR_DAT_1000d474[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_1000d474;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_10006068(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_10008eda;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_10008ed2;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_10008e90;
LAB_10008ed2:
  pbVar7 = (byte *)0x1451;
LAB_10008eda:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_1000d468 < 2) {
      uVar3 = (byte)PTR_DAT_1000d474[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000d474;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006068(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_10008f0a:
  pbVar7 = pbVar8 + -1;
LAB_10008f0f:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000901d;
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
    FUN_10008ad0(local_60,local_8,(uint *)&local_44);
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
        FUN_10009c0a((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_10008fa2;
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
LAB_10008fa2:
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
LAB_1000901d:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_10009068 @ 0x10009068

undefined4 __cdecl
FUN_10009068(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000915d;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000915d:
            pcVar11 = "1#QNAN";
            goto LAB_10009162;
          }
          pcVar11 = "1#IND";
        }
        FUN_10006790((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_10009162:
        FUN_10006790((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_10009c0a((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_100099ea((int *)&local_14,(int *)&local_20);
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
        FUN_10008a75((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10008aa3((uint *)&local_14);
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
          FUN_10008a75((uint *)&local_14);
          FUN_10008a75((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_10008a75((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_100092ba;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_100092ba:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_100092bc:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_100092bc;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_100092f2;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_100092f2:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_100092fb @ 0x100092fb

void __cdecl FUN_100092fb(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10009377();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1000dc90;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000936e();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1000dc94);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x1000ddf8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000936e();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000936e();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000936e();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_1000936e @ 0x1000936e

DWORD * FUN_1000936e(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10005576();
  return pDVar1 + 2;
}



// Function: FUN_10009377 @ 0x10009377

DWORD * FUN_10009377(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10005576();
  return pDVar1 + 3;
}



// Function: FUN_10009380 @ 0x10009380

undefined4 __cdecl FUN_10009380(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_100127e0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_100126e0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10011100 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100093dc;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100093dc:
      *(undefined4 *)((&DAT_100126e0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000936e();
  *pDVar2 = 9;
  pDVar2 = FUN_10009377();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_100093ff @ 0x100093ff

undefined4 __cdecl FUN_100093ff(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_100127e0) &&
     ((*(byte *)((&DAT_100126e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_100126e0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000936e();
  *pDVar1 = 9;
  pDVar1 = FUN_10009377();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_10009441 @ 0x10009441

void __cdecl FUN_10009441(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_100126e0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000737a(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100073db(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_100126e0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_100094a0 @ 0x100094a0

void __cdecl FUN_100094a0(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_100126e0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_10009543 @ 0x10009543

int __cdecl FUN_10009543(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009571(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_10009d03(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_10009571 @ 0x10009571

undefined4 __cdecl FUN_10009571(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10006d7c(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_100095d6 @ 0x100095d6

int __cdecl FUN_100095d6(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_1000737a(2);
  iVar4 = 0;
  if (0 < DAT_100126c0) {
    do {
      iVar2 = *(int *)(DAT_100116a8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_100070c4(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100116a8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10009543(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10009543(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10007116(iVar4,*(int *)(DAT_100116a8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100126c0);
  }
  FUN_100073db(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_1000967a @ 0x1000967a

undefined4 __cdecl FUN_1000967a(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10011310 != (code *)0x0) {
    iVar1 = (*DAT_10011310)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: __global_unwind2 @ 0x10009698

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100096b0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x100096da

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
  puStack_18 = &LAB_100096b8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000976e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_1000976e @ 0x1000976e

void FUN_1000976e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000de00 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000ddfc = in_EAX;
  DAT_1000de04 = unaff_EBP;
  return;
}



// Function: FUN_1000984d @ 0x1000984d

void FUN_1000984d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10009870 @ 0x10009870

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10009870(void)

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



// Function: FUN_10009930 @ 0x10009930

int __cdecl FUN_10009930(byte *param_1,byte *param_2)

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



// Function: _strncmp @ 0x10009970

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



// Function: FUN_100099b0 @ 0x100099b0

byte * __cdecl FUN_100099b0(byte *param_1,byte *param_2)

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



// Function: FUN_100099ea @ 0x100099ea

void __cdecl FUN_100099ea(int *param_1,int *param_2)

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
LAB_10009a8d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_10009a8d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_100089f6(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_10009b41:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_10008aa3((uint *)&local_28);
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
          FUN_10008a75((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_10009b41;
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
      if (0x7ffe < (ushort)param_1) goto LAB_10009bea;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_10009bea:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_10009c0a @ 0x10009c0a

void __cdecl FUN_10009c0a(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_1000deb0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x1000e010;
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
        FUN_100099ea(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: FUN_10009c86 @ 0x10009c86

undefined4 __cdecl FUN_10009c86(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_10007095((uint)param_1);
    uVar1 = FUN_10009cb7(param_1);
    FUN_100070e7((uint)param_1);
  }
  else {
    param_1[3] = 0;
  }
  return uVar1;
}



// Function: FUN_10009cb7 @ 0x10009cb7

undefined4 __cdecl FUN_10009cb7(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_10009571(param_1);
    FUN_1000a051(param_1);
    iVar1 = FUN_10009f71(param_1[4]);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if ((LPVOID)param_1[7] != (LPVOID)0x0) {
      FUN_1000747d((LPVOID)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



// Function: FUN_10009d03 @ 0x10009d03

undefined4 __cdecl FUN_10009d03(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_100127e0 <= param_1) {
LAB_10009d84:
    pDVar3 = FUN_1000936e();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_100126e0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10009d84;
  FUN_10009441(param_1);
  if ((*(byte *)((&DAT_100126e0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_100093ff(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10009d79;
    pDVar3 = FUN_10009377();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000936e();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10009d79:
  FUN_100094a0(param_1);
  return uVar5;
}



// Function: FUN_10009da0 @ 0x10009da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10009da0(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1001145c;
  if (DAT_100112f4 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_10009dee;
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
LAB_10009dee:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1001145c = _DAT_1001145c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10011458;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1001145c = iVar2;
      FUN_1000737a(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_10009e4f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000614c(this,uVar8);
      uVar7 = FUN_1000614c(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_10009e4f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1001145c = _DAT_1001145c + -1;
      UNLOCK();
    }
    else {
      FUN_100073db(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10009e70 @ 0x10009e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10009e70(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1001145c;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_100112f4 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_10009ecf;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10009ecf:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1001145c = _DAT_1001145c + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10011458;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1001145c = iVar2;
        FUN_1000737a(0x13);
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
        uVar7 = FUN_1000614c(param_3,uVar7);
        uVar5 = FUN_1000614c(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10009f45;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10009f45:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1001145c = _DAT_1001145c + -1;
        UNLOCK();
      }
      else {
        FUN_100073db(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_10009f71 @ 0x10009f71

undefined4 __cdecl FUN_10009f71(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100127e0) &&
     ((*(byte *)((&DAT_100126e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009441(param_1);
    uVar1 = FUN_10009fce(param_1);
    FUN_100094a0(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000936e();
  *pDVar2 = 9;
  pDVar2 = FUN_10009377();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10009fce @ 0x10009fce

undefined4 __cdecl FUN_10009fce(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100093ff(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100093ff(2);
      iVar2 = FUN_100093ff(1);
      if (iVar2 == iVar1) goto LAB_1000a01c;
    }
    hObject = (HANDLE)FUN_100093ff(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000a01e;
    }
  }
LAB_1000a01c:
  DVar4 = 0;
LAB_1000a01e:
  FUN_10009380(param_1);
  *(undefined1 *)((&DAT_100126e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100092fb(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: FUN_1000a051 @ 0x1000a051

void __cdecl FUN_1000a051(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_1000747d((LPVOID)param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



