// Decompiled from: Algeria.dll

// Function: FUN_10001000 @ 0x10001000

void FUN_10001000(void)

{
  int iVar1;
  
  if (DAT_1000bce0 < 2) {
    iVar1 = (*DAT_1000c0a8)(&DAT_1000bb38);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      (*DAT_1000c06c)(&DAT_1000bb70,iVar1,0x32,0x32);
      (*DAT_1000c06c)(&DAT_1000bb20,iVar1,10,0x32);
    }
  }
  return;
}



// Function: InitAI @ 0x10001060

void InitAI(void)

{
                    /* 0x1060  1  InitAI */
  if (((((((DAT_1000bf60 != (code *)0x0) &&
          ((*DAT_1000bf60)(&DAT_1000bb38,s_Pikiner_turki_AL__1000a77c), DAT_1000bf60 != (code *)0x0)
          ) && ((*DAT_1000bf60)(&DAT_1000bdf0,s_Krestian_Turki_AL__1000a768),
               DAT_1000bf60 != (code *)0x0)) &&
        (((*DAT_1000bf60)(&DAT_1000bd88,s_Pehota_turki_AL__1000a754), DAT_1000bf60 != (code *)0x0 &&
         ((*DAT_1000bf60)(&DAT_1000bde8,s_Grenader_DIP_AL__1000a740), DAT_1000bf60 != (code *)0x0)))
        ) && (((*DAT_1000bf60)(&DAT_1000be48,s_Strelec_Algir_AL__1000a72c),
              DAT_1000bf60 != (code *)0x0 &&
              (((*DAT_1000bf60)(&DAT_1000bf40,s_Mameluk_AL__1000a720), DAT_1000bf60 != (code *)0x0
               && ((*DAT_1000bf60)(&DAT_1000bf28,s_Pushka_AL__1000a714), DAT_1000bf60 != (code *)0x0
                  )))))) &&
      ((*DAT_1000bf60)(&DAT_1000bb30,s_Mortira_AL__1000a708), DAT_1000bf60 != (code *)0x0)) &&
     ((*DAT_1000bf60)(&DAT_1000bca8,s_Mortira_b_AL__1000a6f8), DAT_1000bf60 != (code *)0x0)) {
    (*DAT_1000bf60)(&DAT_1000be58,s_Lodka_AL__1000a6ec);
  }
  FUN_10003210(s_Pikiner_turki_AL__1000a77c);
  if ((((DAT_1000bf60 != (code *)0x0) &&
       ((*DAT_1000bf60)(&DAT_1000be90,s_Strelec_Algir_AL__1000a72c), DAT_1000bf60 != (code *)0x0))
      && ((*DAT_1000bf60)(&DAT_1000bed8,s_Kozak_loshad_DIP_AL__1000a6d4),
         DAT_1000bf60 != (code *)0x0)) &&
     ((*DAT_1000bf60)(&DAT_1000bb70,s_Oficer_turki_AL__1000a6c0), DAT_1000bf60 != (code *)0x0)) {
    (*DAT_1000bf60)(&DAT_1000bb20,s_Barabanshik_Turki_AL__1000a6a8);
  }
  if ((DAT_1000bf64 != (code *)0x0) &&
     ((*DAT_1000bf64)(&DAT_1000be78,s_Oficer_turki_AL_ATTACK_1000a690), DAT_1000bf64 != (code *)0x0)
     ) {
    (*DAT_1000bf64)(&DAT_1000bcf8,s_Oficer_turki_AL_SHIELD_1000a678);
  }
  if (((((DAT_1000bf60 != (code *)0x0) &&
        ((*DAT_1000bf60)(&DAT_1000bcf0,s_Center_Algir_AL__1000a664), DAT_1000bf60 != (code *)0x0))
       && (((*DAT_1000bf60)(&DAT_1000bd08,s_Melnica_tu_AL__1000a654), DAT_1000bf60 != (code *)0x0 &&
           ((((*DAT_1000bf60)(&DAT_1000be70,s_Barack_Turki_AL__1000a640),
             DAT_1000bf60 != (code *)0x0 &&
             ((*DAT_1000bf60)(&DAT_1000bd00,s_Sclad4_AL__1000a634), DAT_1000bf60 != (code *)0x0)) &&
            ((*DAT_1000bf60)(&DAT_1000bcd8,s_Minaret_AL__1000a628), DAT_1000bf60 != (code *)0x0)))))
       ) && (((*DAT_1000bf60)(&DAT_1000bd90,s_Konushnia_Turki_AL__1000a614),
             DAT_1000bf60 != (code *)0x0 &&
             ((*DAT_1000bf60)(&DAT_1000bd10,s_Diplomatic_Turki_AL__1000a5fc),
             DAT_1000bf60 != (code *)0x0)))) &&
     (((*DAT_1000bf60)(&DAT_1000bb00,s_Art_Depo_Turki_AL__1000a5e8), DAT_1000bf60 != (code *)0x0 &&
      ((((*DAT_1000bf60)(&DAT_1000bc80,s_Rinok_Turki_AL__1000a5d8), DAT_1000bf60 != (code *)0x0 &&
        ((*DAT_1000bf60)(&DAT_1000be50,s_Kuznia_Turki_AL__1000a5c4), DAT_1000bf60 != (code *)0x0))
       && (((*DAT_1000bf60)(&DAT_1000bda0,s_Mechet_Turki_AL__1000a5b0), DAT_1000bf60 != (code *)0x0
           && (((((*DAT_1000bf60)(&DAT_1000bec8,s_Port_AL__1000a5a4), DAT_1000bf60 != (code *)0x0 &&
                 ((*DAT_1000bf60)(&DAT_1000bce8,s_GALERA_AL__1000a598), DAT_1000bf60 != (code *)0x0)
                 ) && ((*DAT_1000bf60)(&DAT_1000bc98,s_PERES_KOR_AL__1000a588),
                      DAT_1000bf60 != (code *)0x0)) &&
               ((*DAT_1000bf60)(&DAT_1000bcc0,s_Shebeka_AL__1000a57c), DAT_1000bf60 != (code *)0x0))
              )))))))) {
    (*DAT_1000bf60)(&DAT_1000bf38,s_Linkor_AL__1000a570);
  }
  if (((((DAT_1000bf64 != (code *)0x0) &&
        ((*DAT_1000bf64)(&DAT_1000bed0,s_AKA29AL_1000a568), DAT_1000bf64 != (code *)0x0)) &&
       ((((*DAT_1000bf64)(&DAT_1000bcd0,s_AKA06AL_1000a560), DAT_1000bf64 != (code *)0x0 &&
         (((*DAT_1000bf64)(&DAT_1000bf30,s_Melnica_tu_AL_GETRES_1000a548),
          DAT_1000bf64 != (code *)0x0 &&
          ((*DAT_1000bf64)(&DAT_1000bb28,s_KUZ01AL_1000a540), DAT_1000bf64 != (code *)0x0)))) &&
        ((*DAT_1000bf64)(&DAT_1000bf08,s_Pikiner_turki_AL_ATTACK_1000a528),
        DAT_1000bf64 != (code *)0x0)))) &&
      ((((((*DAT_1000bf64)(&DAT_1000bf10,s_Pikiner_turki_AL_ATTACK3_1000a50c),
          DAT_1000bf64 != (code *)0x0 &&
          ((*DAT_1000bf64)(&DAT_1000bef8,s_Pikiner_turki_AL_ATTACK4_1000a4f0),
          DAT_1000bf64 != (code *)0x0)) &&
         ((*DAT_1000bf64)(&DAT_1000bf00,s_Pikiner_turki_AL_ATTACK5_1000a4d4),
         DAT_1000bf64 != (code *)0x0)) &&
        ((((*DAT_1000bf64)(&DAT_1000bf18,s_Pikiner_turki_AL_ATTACK6_1000a4b8),
          DAT_1000bf64 != (code *)0x0 &&
          ((*DAT_1000bf64)(&DAT_1000bea8,s_Pikiner_turki_AL_SHIELD_1000a4a0),
          DAT_1000bf64 != (code *)0x0)) &&
         (((*DAT_1000bf64)(&DAT_1000be98,s_Pikiner_turki_AL_SHIELD3_1000a484),
          DAT_1000bf64 != (code *)0x0 &&
          (((*DAT_1000bf64)(&DAT_1000bea0,s_Pikiner_turki_AL_SHIELD4_1000a468),
           DAT_1000bf64 != (code *)0x0 &&
           ((*DAT_1000bf64)(&DAT_1000beb0,s_Pikiner_turki_AL_SHIELD5_1000a44c),
           DAT_1000bf64 != (code *)0x0)))))))) &&
       (((*DAT_1000bf64)(&DAT_1000beb8,s_Pikiner_turki_AL_SHIELD6_1000a430),
        DAT_1000bf64 != (code *)0x0 &&
        ((((*DAT_1000bf64)(&DAT_1000bee0,s_Pehota_turki_AL_ATTACK_1000a418),
          DAT_1000bf64 != (code *)0x0 &&
          ((*DAT_1000bf64)(&DAT_1000bee8,s_Pehota_turki_AL_ATTACK3_1000a400),
          DAT_1000bf64 != (code *)0x0)) &&
         ((*DAT_1000bf64)(&DAT_1000bef0,s_Pehota_turki_AL_ATTACK4_1000a3e8),
         DAT_1000bf64 != (code *)0x0)))))))) &&
     (((((*DAT_1000bf64)(&DAT_1000be18,s_Pehota_turki_AL_SHIELD_1000a3d0),
        DAT_1000bf64 != (code *)0x0 &&
        ((*DAT_1000bf64)(&DAT_1000be20,s_Pehota_turki_AL_SHIELD3_1000a3b8),
        DAT_1000bf64 != (code *)0x0)) &&
       ((((*DAT_1000bf64)(&DAT_1000be30,s_Pehota_turki_AL_SHIELD4_1000a3a0),
         DAT_1000bf64 != (code *)0x0 &&
         (((*DAT_1000bf64)(&DAT_1000bd40,s_Mameluk_AL_ATTACK_1000a38c), DAT_1000bf64 != (code *)0x0
          && ((*DAT_1000bf64)(&DAT_1000bd38,s_Mameluk_AL_ATTACK3_1000a378),
             DAT_1000bf64 != (code *)0x0)))) &&
        ((*DAT_1000bf64)(&DAT_1000bd30,s_Mameluk_AL_ATTACK4_1000a364), DAT_1000bf64 != (code *)0x0))
       )) && (((((((((*DAT_1000bf64)(&DAT_1000bd28,s_Mameluk_AL_ATTACK5_1000a350),
                    DAT_1000bf64 != (code *)0x0 &&
                    ((*DAT_1000bf64)(&DAT_1000bd20,s_Mameluk_AL_ATTACK6_1000a33c),
                    DAT_1000bf64 != (code *)0x0)) &&
                   ((*DAT_1000bf64)(&DAT_1000bd18,s_Mameluk_AL_ATTACK7_1000a328),
                   DAT_1000bf64 != (code *)0x0)) &&
                  (((*DAT_1000bf64)(&DAT_1000bdd0,s_Mameluk_AL_SHIELD_1000a314),
                   DAT_1000bf64 != (code *)0x0 &&
                   ((*DAT_1000bf64)(&DAT_1000bdc8,s_Mameluk_AL_SHIELD3_1000a300),
                   DAT_1000bf64 != (code *)0x0)))) &&
                 ((*DAT_1000bf64)(&DAT_1000bdc0,s_Mameluk_AL_SHIELD4_1000a2ec),
                 DAT_1000bf64 != (code *)0x0)) &&
                ((((((((*DAT_1000bf64)(&DAT_1000bdb8,s_Mameluk_AL_SHIELD5_1000a2d8),
                      DAT_1000bf64 != (code *)0x0 &&
                      ((*DAT_1000bf64)(&DAT_1000bda8,s_Mameluk_AL_SHIELD6_1000a2c4),
                      DAT_1000bf64 != (code *)0x0)) &&
                     (((*DAT_1000bf64)(&DAT_1000bde0,s_Mameluk_AL_SHIELD7_1000a2b0),
                      DAT_1000bf64 != (code *)0x0 &&
                      ((((*DAT_1000bf64)(&DAT_1000be38,s_Pushka_AL_BUILD_1000a2a0),
                        DAT_1000bf64 != (code *)0x0 &&
                        ((*DAT_1000bf64)(&DAT_1000be28,s_Pushka_AL_BUILD3_1000a28c),
                        DAT_1000bf64 != (code *)0x0)) &&
                       ((*DAT_1000bf64)(&DAT_1000be00,s_Pushka_AL_BUILD4_1000a278),
                       DAT_1000bf64 != (code *)0x0)))))) &&
                    (((*DAT_1000bf64)(&DAT_1000bdf8,s_Pushka_AL_BUILD5_1000a264),
                     DAT_1000bf64 != (code *)0x0 &&
                     ((*DAT_1000bf64)(&DAT_1000be08,s_Pushka_AL_BUILD6_1000a250),
                     DAT_1000bf64 != (code *)0x0)))) &&
                   ((*DAT_1000bf64)(&DAT_1000bd68,s_Mortira_AL_BUILD_1000a23c),
                   DAT_1000bf64 != (code *)0x0)) &&
                  ((((*DAT_1000bf64)(&DAT_1000bd70,s_Mortira_AL_BUILD3_1000a228),
                    DAT_1000bf64 != (code *)0x0 &&
                    ((*DAT_1000bf64)(&DAT_1000bd78,s_Mortira_AL_BUILD4_1000a214),
                    DAT_1000bf64 != (code *)0x0)) &&
                   (((*DAT_1000bf64)(&DAT_1000bd80,s_Mortira_AL_BUILD5_1000a200),
                    DAT_1000bf64 != (code *)0x0 &&
                    ((((*DAT_1000bf64)(&DAT_1000be10,s_KUZ03AL_1000a1f8),
                      DAT_1000bf64 != (code *)0x0 &&
                      ((*DAT_1000bf64)(&DAT_1000bd60,s_AKA01AL_1000a1f0),
                      DAT_1000bf64 != (code *)0x0)) &&
                     ((*DAT_1000bf64)(&DAT_1000bd48,s_AKA02AL_1000a1e8), DAT_1000bf64 != (code *)0x0
                     )))))))) &&
                 (((((*DAT_1000bf64)(&DAT_1000bd50,s_AKA03AL_1000a1e0), DAT_1000bf64 != (code *)0x0
                    && ((*DAT_1000bf64)(&DAT_1000bd58,s_AKA04AL_1000a1d8),
                       DAT_1000bf64 != (code *)0x0)) &&
                   (((*DAT_1000bf64)(&DAT_1000be88,s_AKA08AL_1000a1d0), DAT_1000bf64 != (code *)0x0
                    && ((((*DAT_1000bf64)(&DAT_1000bdb0,s_AKA23AL_1000a1c8),
                         DAT_1000bf64 != (code *)0x0 &&
                         ((*DAT_1000bf64)(&DAT_1000bdd8,s_AKA24AL_1000a1c0),
                         DAT_1000bf64 != (code *)0x0)) &&
                        (((*DAT_1000bf64)(&DAT_1000bcb8,s_AKA10AL_1000a1b8),
                         DAT_1000bf64 != (code *)0x0 &&
                         (((((*DAT_1000bf64)(&DAT_1000bba8,s_AKA30AL_1000a1b0),
                            DAT_1000bf64 != (code *)0x0 &&
                            ((*DAT_1000bf64)(&DAT_1000bd98,s_AKA07AL_1000a1a8),
                            DAT_1000bf64 != (code *)0x0)) &&
                           ((*DAT_1000bf64)(&DAT_1000bcc8,s_AKA20AL_1000a1a0),
                           DAT_1000bf64 != (code *)0x0)) &&
                          (((*DAT_1000bf64)(&DAT_1000be60,s_KUZ02AL_1000a198),
                           DAT_1000bf64 != (code *)0x0 &&
                           ((*DAT_1000bf64)(&DAT_1000be68,s_AKA09AL_1000a190),
                           DAT_1000bf64 != (code *)0x0)))))))))))) &&
                  ((*DAT_1000bf64)(&DAT_1000bc78,s_AKA05AL_1000a188), DAT_1000bf64 != (code *)0x0)))
                 ))) && (((*DAT_1000bf64)(&DAT_1000bc88,s_AKA28AL_1000a180),
                         DAT_1000bf64 != (code *)0x0 &&
                         ((*DAT_1000bf64)(&DAT_1000bb10,s_KUZ05AL_1000a178),
                         DAT_1000bf64 != (code *)0x0)))) &&
              (((*DAT_1000bf64)(&DAT_1000bb08,s_AKA16AL_1000a170), DAT_1000bf64 != (code *)0x0 &&
               ((*DAT_1000bf64)(&DAT_1000bca0,s_AKA17AL_1000a168), DAT_1000bf64 != (code *)0x0))))))
     )) {
    (*DAT_1000bf64)(&DAT_1000bcb0,s_AKA27AL_1000a160);
  }
  (*DAT_1000c07c)(9,4,4);
  (*DAT_1000c088)(6);
  (*DAT_1000c08c)(0,s_shahta_AL_INSIDE_1000a14c,0x5a);
  (*DAT_1000c08c)(1,s_shahta_AL_INSIDE3_1000a138,0x32);
  (*DAT_1000c08c)(2,s_shahta_AL_INSIDE4_1000a124,0x32);
  (*DAT_1000c08c)(3,s_shahta_AL_INSIDE5_1000a110,0x32);
  (*DAT_1000c08c)(4,s_shahta_AL_INSIDE6_1000a0fc,0x32);
  (*DAT_1000c08c)(5,s_shahta_AL_INSIDE7_1000a0e8,0x32);
  (*DAT_1000c0c0)(s_Krestian_Turki_AL__1000a768);
  (*DAT_1000c0bc)(s_shahta_AL__1000a0dc);
  (*DAT_1000c0c4)(s_Dom_Algir_AL__1000a0cc);
  (*DAT_1000c090)(0x122);
  (*DAT_1000c094)(0x104);
  (*DAT_1000c098)(0x82);
  (*DAT_1000c09c)(300);
  (*DAT_1000c0a0)(5);
  return;
}



// Function: FUN_10001b30 @ 0x10001b30

void FUN_10001b30(void)

{
  (*DAT_1000c070)(&DAT_1000bf08,0x3c,100);
  (*DAT_1000c070)(&DAT_1000bf10,0x3c,100);
  (*DAT_1000c070)(&DAT_1000bef8,0x3c,100);
  (*DAT_1000c070)(&DAT_1000bf00,0x14,100);
  (*DAT_1000c070)(&DAT_1000bf18,10,100);
  (*DAT_1000c070)(&DAT_1000bea8,0x3c,100);
  (*DAT_1000c070)(&DAT_1000be98,0x3c,100);
  (*DAT_1000c070)(&DAT_1000bea0,0x3c,100);
  (*DAT_1000c070)(&DAT_1000beb0,0x14,100);
  (*DAT_1000c070)(&DAT_1000beb8,10,100);
  if (DAT_1000bce0 == 1) {
    (*DAT_1000c070)(&DAT_1000bee0,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bee8,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bef0,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000be18,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000be20,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000be30,0x1e,0x32);
  }
  return;
}



// Function: FUN_10001c40 @ 0x10001c40

void FUN_10001c40(void)

{
  (*DAT_1000c070)(&DAT_1000bee0,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bee8,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bef0,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000be18,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000be20,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000be30,0x1e,0x32);
  return;
}



// Function: FUN_10001ca0 @ 0x10001ca0

void FUN_10001ca0(void)

{
  if (DAT_1000bce0 == 1) {
    (*DAT_1000c070)(&DAT_1000be38,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000be28,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000be00,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bdf8,0x1e,0x32);
  }
  (*DAT_1000c070)(&DAT_1000bd68,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bd70,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bd78,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bd80,0x1e,0x32);
  return;
}



// Function: FUN_10001d30 @ 0x10001d30

void FUN_10001d30(void)

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
  
  (*DAT_1000c074)(0x13,&DAT_1000a030);
  iVar2 = (*DAT_1000c0a4)(3);
  iVar3 = (*DAT_1000c0a4)(0);
  iVar4 = (*DAT_1000c0a4)(2);
  iVar5 = (*DAT_1000c0a4)(1);
  iVar6 = (*DAT_1000c0a4)(5);
  iVar7 = (*DAT_1000c0a4)(4);
  (*DAT_1000c06c)(&DAT_1000bd08,1,100,100);
  iVar8 = (*DAT_1000c0a8)(&DAT_1000bd08);
  if (iVar8 != 0) {
    (*DAT_1000c06c)(&DAT_1000bcf0,2,100,100);
    iVar8 = (*DAT_1000c0a8)(&DAT_1000bcf0);
    if (iVar8 != 0) {
      (*DAT_1000c06c)(&DAT_1000be50,1,100,100);
      (*DAT_1000c06c)(&DAT_1000be70,1,100,100);
      iVar8 = (*DAT_1000c0a8)(&DAT_1000bcd8);
      if (iVar8 != 0) {
        (*DAT_1000c06c)(&DAT_1000be70,2,100,100);
        iVar8 = (*DAT_1000c0a8)(&DAT_1000bcf0);
        if (1 < iVar8) {
          if (1000 < iVar2) {
            (*DAT_1000c06c)(&DAT_1000be70,3,100,100);
          }
          (*DAT_1000c06c)(&DAT_1000be70,4,0x32,100);
          (*DAT_1000c06c)(&DAT_1000be70,5,0x1e,100);
        }
      }
      (*DAT_1000c06c)(&DAT_1000bd00,1,100,100);
      cVar1 = (*DAT_1000c0d0)();
      if ((cVar1 != '\0') && (0x4b0 < iVar2)) {
        (*DAT_1000c06c)(&DAT_1000bd00,3,10,2);
        if (2000 < iVar2) {
          (*DAT_1000c06c)(&DAT_1000bd00,5,10,1);
          (*DAT_1000c06c)(&DAT_1000bd00,6,3,1);
          (*DAT_1000c06c)(&DAT_1000bd00,7,2,1);
          (*DAT_1000c06c)(&DAT_1000bc80,1,100,100);
        }
      }
      iVar8 = (*DAT_1000c0a8)(&DAT_1000bcd8);
      if (iVar8 != 0) {
        iVar8 = (*DAT_1000c0a8)(&DAT_1000be70);
        if (1 < iVar8) {
          (*DAT_1000c06c)(&DAT_1000bd90,2,100,100);
          (*DAT_1000c06c)(&DAT_1000bd90,3,0x5a,100);
          (*DAT_1000c06c)(&DAT_1000bd90,4,0x5a,100);
          (*DAT_1000c06c)(&DAT_1000bd90,5,0x5a,100);
          (*DAT_1000c06c)(&DAT_1000bb00,1,100,100);
        }
      }
      (*DAT_1000c06c)(&DAT_1000bcd8,1,0x5a,100);
      iVar8 = (*DAT_1000c0a8)(&DAT_1000bec8);
      iVar9 = (*DAT_1000c0ac)(&DAT_1000bec8);
      if (iVar9 == iVar8) {
        iVar8 = (*DAT_1000c0a8)(&DAT_1000bd90);
        if (iVar8 != 0) {
          (*DAT_1000c06c)(&DAT_1000bec8,2,0x32,10);
          (*DAT_1000c06c)(&DAT_1000bec8,3,0x14,10);
        }
      }
      iVar8 = (*DAT_1000c0a8)(&DAT_1000be70);
      if (iVar8 != 0) {
        (*DAT_1000c06c)(&DAT_1000bd08,2,10,10);
      }
      (*DAT_1000c06c)(&DAT_1000bd10,1,0x5a,10);
    }
  }
  (*DAT_1000c070)(&DAT_1000bf30,100,100);
  cVar1 = (*DAT_1000c0b8)(&DAT_1000bf30);
  if (cVar1 != '\0') {
    if (700 < iVar2) {
      if (DAT_1000bce0 == 1) {
        iVar8 = (*DAT_1000c0a8)(&DAT_1000bd88);
        if (99 < iVar8) {
          (*DAT_1000c06c)(&DAT_1000be48,800,0x14,0x3c);
          uVar11 = 800;
          goto LAB_100020c2;
        }
        (*DAT_1000c06c)(&DAT_1000bb38,400,0x14,0x28);
        uVar12 = 10;
        uVar11 = 200;
        puVar10 = &DAT_1000bd88;
      }
      else {
        (*DAT_1000c06c)(&DAT_1000be48,400,0x14,0x3c);
        uVar11 = 400;
LAB_100020c2:
        uVar12 = 0x14;
        puVar10 = &DAT_1000bb38;
      }
      (*DAT_1000c06c)(puVar10,uVar11,uVar12,100);
    }
    if (0xfa < iVar2) {
      (*DAT_1000c06c)(&DAT_1000bdf0,1000,100,100);
    }
    if (300 < iVar2) {
      (*DAT_1000c06c)(&DAT_1000bf40,400,0x14,100);
      (*DAT_1000c06c)(&DAT_1000bf40,400,0x14,100);
      if (1000 < iVar5) {
        (*DAT_1000c06c)(&DAT_1000bde8,0x46,100,100);
      }
    }
    (*DAT_1000c070)(&DAT_1000bd60,99,100);
    (*DAT_1000c070)(&DAT_1000bb28,99,100);
  }
  if (DAT_1000bce0 == 1) {
    iVar8 = (*DAT_1000c0a8)(&DAT_1000bdf0);
    if (0x2d < iVar8) {
      FUN_10001c40();
    }
  }
  (*DAT_1000c070)(&DAT_1000be10,100,100);
  (*DAT_1000c070)(&DAT_1000be88,0x62,100);
  (*DAT_1000c070)(&DAT_1000bdb0,99,100);
  (*DAT_1000c070)(&DAT_1000bd58,99,100);
  (*DAT_1000c070)(&DAT_1000bd60,99,100);
  (*DAT_1000c070)(&DAT_1000bd48,99,100);
  (*DAT_1000c070)(&DAT_1000bd50,99,100);
  (*DAT_1000c070)(&DAT_1000bba8,100,100);
  (*DAT_1000c070)(&DAT_1000bcd0,99,100);
  cVar1 = (*DAT_1000c0b4)(&DAT_1000be10);
  if (cVar1 != '\0') {
    if (DAT_1000bce0 == 1) {
      (*DAT_1000c06c)(&DAT_1000bca8,0x28,10,0x32);
    }
    (*DAT_1000c070)(&DAT_1000bdd8,99,100);
    (*DAT_1000c070)(&DAT_1000bd98,99,100);
    cVar1 = (*DAT_1000c0b4)(&DAT_1000bd98);
    if (cVar1 != '\0') {
      (*DAT_1000c06c)(&DAT_1000be58,0x28,10,0x32);
      (*DAT_1000c070)(&DAT_1000bc78,99,100);
    }
    (*DAT_1000c070)(&DAT_1000bb10,0x5f,100);
    FUN_10001ca0();
    cVar1 = (*DAT_1000c0b4)(&DAT_1000bd80);
    if (cVar1 != '\0') {
      (*DAT_1000c06c)(&DAT_1000bb30,10,10,0x32);
    }
    cVar1 = (*DAT_1000c0b4)(&DAT_1000bdf8);
    if (cVar1 != '\0') {
      (*DAT_1000c06c)(&DAT_1000bf28,0xc,10,0x32);
    }
    (*DAT_1000c06c)(&DAT_1000bca8,0x14,10,0x32);
    FUN_10001b30();
    (*DAT_1000c070)(&DAT_1000bd40,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd38,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd30,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd28,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd20,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd18,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bdd0,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bdc8,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bdc0,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bdb8,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bda8,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bde0,0x1e,0x32);
  }
  (*DAT_1000c06c)(&DAT_1000be58,3,0x32,0x32);
  if (DAT_1000bce0 == 1) {
    (*DAT_1000c06c)(&DAT_1000bcc0,6,99,10);
    (*DAT_1000c06c)(&DAT_1000bcc0,0xc,0x3c,10);
    (*DAT_1000c06c)(&DAT_1000bce8,6,0x5a,0x14);
  }
  else {
    (*DAT_1000c06c)(&DAT_1000bc98,3,0x5a,0x32);
    (*DAT_1000c06c)(&DAT_1000bcc0,6,99,10);
    (*DAT_1000c06c)(&DAT_1000bcc0,0xc,0x3c,10);
    (*DAT_1000c06c)(&DAT_1000bcc0,0xf,0x32,10);
    (*DAT_1000c06c)(&DAT_1000bce8,6,0x5a,0x14);
  }
  iVar8 = (*DAT_1000c0ac)(&DAT_1000bc80);
  if (iVar8 == 0) goto LAB_10002565;
  if (100000 < iVar4) {
    FUN_100031c0(2,1,90000);
  }
  if (1000000 < iVar3) {
    FUN_100031c0(0,1,90000);
  }
  if (iVar2 < 300) {
    if (iVar6 < 0x2ee1) {
      if (iVar5 < 0xbb9) {
        if (iVar4 < 0x5dd) {
          if (iVar3 < 0x5dd) goto LAB_10002516;
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
    FUN_100031c0(uVar11,3,uVar12);
  }
LAB_10002516:
  cVar1 = (*DAT_1000c0b4)(&DAT_1000be88);
  if ((cVar1 == '\0') && (800 < iVar5)) {
    if (9000 < iVar6) {
      FUN_100031c0(5,3,3000);
    }
    if (9000 < iVar7) {
      FUN_100031c0(4,3,3000);
    }
  }
LAB_10002565:
  cVar1 = (*DAT_1000c0d0)();
  if (cVar1 == '\0') {
    uVar13 = 5;
    uVar12 = 5;
    uVar11 = 0;
  }
  else {
    iVar3 = (*DAT_1000c0a8)(&DAT_1000bdf0);
    if ((iVar3 < 0x14) && (iVar2 < 2000)) {
      uVar13 = 2;
      uVar12 = 5;
      uVar11 = 10;
    }
    else {
      cVar1 = (*DAT_1000c0b4)(&DAT_1000bd50);
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
  (*DAT_1000c07c)(uVar11,uVar12,uVar13);
  cVar1 = (*DAT_1000c0b4)(&DAT_1000bba8);
  if (cVar1 == '\0') {
    (*DAT_1000c06c)(&DAT_1000bce8,3,100,0x32);
  }
  else {
    (*DAT_1000c07c)(6,7,3);
    (*DAT_1000c06c)(&DAT_1000bce8,7,0x46,0x32);
    (*DAT_1000c070)(&DAT_1000be60,0x5f,100);
    (*DAT_1000c070)(&DAT_1000be68,0x5f,100);
    (*DAT_1000c070)(&DAT_1000bcc8,0x5f,100);
    cVar1 = (*DAT_1000c0b4)(&DAT_1000bcc8);
    if (cVar1 != '\0') {
      (*DAT_1000c070)(&DAT_1000bc88,0x5a,100);
      (*DAT_1000c070)(&DAT_1000bcb0,0x5a,100);
      (*DAT_1000c070)(&DAT_1000bb08,0x5a,100);
      (*DAT_1000c070)(&DAT_1000bca0,0x5a,100);
      return;
    }
  }
  return;
}



// Function: FUN_100026a0 @ 0x100026a0

void FUN_100026a0(void)

{
  (*DAT_1000c070)(&DAT_1000bf08,0x5a,100);
  (*DAT_1000c070)(&DAT_1000bf10,0x5a,100);
  (*DAT_1000c070)(&DAT_1000bef8,0x5a,100);
  (*DAT_1000c070)(&DAT_1000bf00,0x5a,100);
  (*DAT_1000c070)(&DAT_1000bf18,0x5a,100);
  (*DAT_1000c070)(&DAT_1000bea8,0x5a,100);
  (*DAT_1000c070)(&DAT_1000be98,0x5a,100);
  (*DAT_1000c070)(&DAT_1000bea0,0x5a,100);
  (*DAT_1000c070)(&DAT_1000beb0,0x5a,100);
  (*DAT_1000c070)(&DAT_1000beb8,0x5a,100);
  if (DAT_1000bce0 == 1) {
    (*DAT_1000c070)(&DAT_1000bcf8,0x50,100);
    (*DAT_1000c070)(&DAT_1000be78,0x50,100);
  }
  return;
}



// Function: FUN_10002770 @ 0x10002770

void FUN_10002770(void)

{
  return;
}



// Function: FUN_10002780 @ 0x10002780

void FUN_10002780(void)

{
  (*DAT_1000c070)(&DAT_1000be38,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000be28,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000be00,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bdf8,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bd68,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bd70,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bd78,0x1e,0x32);
  (*DAT_1000c070)(&DAT_1000bd80,0x1e,0x32);
  return;
}



// Function: FUN_10002800 @ 0x10002800

void FUN_10002800(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*DAT_1000c074)(0x13,&DAT_1000a030);
  iVar2 = (*DAT_1000c0a4)(3);
  (*DAT_1000c0a4)(0);
  (*DAT_1000c0a4)(2);
  iVar3 = (*DAT_1000c0a4)(1);
  (*DAT_1000c0a4)(5);
  (*DAT_1000c0a4)(4);
  (*DAT_1000c06c)(&DAT_1000bd08,1,100,100);
  iVar4 = (*DAT_1000c0a8)(&DAT_1000bd08);
  if (iVar4 != 0) {
    (*DAT_1000c06c)(&DAT_1000bcf0,2,100,100);
    iVar4 = (*DAT_1000c0a8)(&DAT_1000bcf0);
    if (iVar4 != 0) {
      (*DAT_1000c06c)(&DAT_1000be50,1,100,100);
      (*DAT_1000c06c)(&DAT_1000be70,1,100,100);
      iVar4 = (*DAT_1000c0a8)(&DAT_1000bcd8);
      if (iVar4 != 0) {
        (*DAT_1000c06c)(&DAT_1000be70,2,100,100);
        iVar4 = (*DAT_1000c0a8)(&DAT_1000bcf0);
        if (1 < iVar4) {
          if (1000 < iVar2) {
            (*DAT_1000c06c)(&DAT_1000be70,3,100,100);
          }
          (*DAT_1000c06c)(&DAT_1000be70,4,0x3c,100);
          (*DAT_1000c06c)(&DAT_1000be70,5,0x3c,100);
        }
      }
      (*DAT_1000c06c)(&DAT_1000bd00,1,100,100);
      cVar1 = (*DAT_1000c0d0)();
      if ((cVar1 != '\0') && (0x4b0 < iVar2)) {
        (*DAT_1000c06c)(&DAT_1000bd00,3,10,2);
        if (2000 < iVar2) {
          (*DAT_1000c06c)(&DAT_1000bd00,5,10,1);
          (*DAT_1000c06c)(&DAT_1000bd00,6,3,1);
          (*DAT_1000c06c)(&DAT_1000bd00,7,2,1);
        }
        iVar4 = (*DAT_1000c0a8)(&DAT_1000bdf0);
        if (0x18 < iVar4) {
          (*DAT_1000c06c)(&DAT_1000bc80,1,100,100);
        }
      }
      iVar4 = (*DAT_1000c0a8)(&DAT_1000bcd8);
      if ((iVar4 != 0) && (iVar4 = (*DAT_1000c0a8)(&DAT_1000be70), 1 < iVar4)) {
        (*DAT_1000c06c)(&DAT_1000bd90,2,100,100);
        (*DAT_1000c06c)(&DAT_1000bd90,3,0x5a,100);
        (*DAT_1000c06c)(&DAT_1000bd90,4,0x5a,100);
        (*DAT_1000c06c)(&DAT_1000bd90,5,0x5a,100);
        (*DAT_1000c06c)(&DAT_1000bb00,1,100,100);
      }
      (*DAT_1000c06c)(&DAT_1000bcd8,1,0x5a,100);
      iVar4 = (*DAT_1000c0a8)(&DAT_1000bec8);
      iVar5 = (*DAT_1000c0ac)(&DAT_1000bec8);
      if ((iVar5 == iVar4) && (iVar4 = (*DAT_1000c0a8)(&DAT_1000bd90), iVar4 != 0)) {
        (*DAT_1000c06c)(&DAT_1000bec8,2,0x32,10);
        (*DAT_1000c06c)(&DAT_1000bec8,3,0x14,10);
      }
      iVar4 = (*DAT_1000c0a8)(&DAT_1000be70);
      if (iVar4 != 0) {
        (*DAT_1000c06c)(&DAT_1000bd08,2,10,10);
      }
      (*DAT_1000c06c)(&DAT_1000bd10,1,0x5a,10);
    }
  }
  (*DAT_1000c070)(&DAT_1000bf30,100,100);
  cVar1 = (*DAT_1000c0b8)(&DAT_1000bf30);
  if (cVar1 != '\0') {
    if (700 < iVar2) {
      iVar4 = (*DAT_1000c0a8)(&DAT_1000be90);
      if (iVar4 < 0x1a4) {
        (*DAT_1000c06c)(&DAT_1000bb38,400,0x14,0x28);
        (*DAT_1000c06c)(&DAT_1000be90,600,5,100);
      }
      else {
        (*DAT_1000c06c)(&DAT_1000be90,600,5,100);
        iVar4 = (*DAT_1000c0a8)(&DAT_1000bb38);
        if (0xfa < iVar4) {
          (*DAT_1000c06c)(&DAT_1000be48,800,0x14,0x3c);
        }
        (*DAT_1000c06c)(&DAT_1000bb38,800,0x14,100);
      }
    }
    if (0xfa < iVar2) {
      (*DAT_1000c06c)(&DAT_1000bdf0,1000,100,100);
    }
    if (300 < iVar2) {
      (*DAT_1000c06c)(&DAT_1000bf40,400,0x14,100);
      (*DAT_1000c06c)(&DAT_1000bf40,400,0x14,100);
      if (0x5dc < iVar3) {
        (*DAT_1000c06c)(&DAT_1000bde8,0x46,100,100);
      }
    }
    (*DAT_1000c070)(&DAT_1000bd60,99,100);
    (*DAT_1000c070)(&DAT_1000bb28,99,100);
  }
  iVar3 = (*DAT_1000c0a8)(&DAT_1000bdf0);
  if (0x2d < iVar3) {
    FUN_10002770();
  }
  (*DAT_1000c070)(&DAT_1000be10,100,100);
  (*DAT_1000c070)(&DAT_1000be88,0x62,100);
  (*DAT_1000c070)(&DAT_1000bdb0,99,100);
  (*DAT_1000c070)(&DAT_1000bd58,99,100);
  (*DAT_1000c070)(&DAT_1000bd60,99,100);
  (*DAT_1000c070)(&DAT_1000bd48,99,100);
  (*DAT_1000c070)(&DAT_1000bd50,99,100);
  (*DAT_1000c070)(&DAT_1000bba8,100,100);
  cVar1 = (*DAT_1000c0b4)(&DAT_1000be10);
  if (cVar1 != '\0') {
    if (DAT_1000bce0 == 1) {
      (*DAT_1000c06c)(&DAT_1000bca8,0x28,10,0x32);
    }
    (*DAT_1000c070)(&DAT_1000bb10,0x5f,100);
    FUN_10002780();
    cVar1 = (*DAT_1000c0b4)(&DAT_1000bd80);
    if (cVar1 != '\0') {
      (*DAT_1000c06c)(&DAT_1000bb30,10,10,0x32);
    }
    cVar1 = (*DAT_1000c0b4)(&DAT_1000bdf8);
    if (cVar1 != '\0') {
      (*DAT_1000c06c)(&DAT_1000bf28,0xc,10,0x32);
    }
    (*DAT_1000c06c)(&DAT_1000bca8,0x32,10,0x32);
    (*DAT_1000c070)(&DAT_1000bd40,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd38,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd30,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd28,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd20,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bd18,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bdd0,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bdc8,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bdc0,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bdb8,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bda8,0x1e,0x32);
    (*DAT_1000c070)(&DAT_1000bde0,0x1e,0x32);
  }
  iVar3 = (*DAT_1000c0a8)(&DAT_1000bdf0);
  if (0x23 < iVar3) {
    FUN_100026a0();
  }
  iVar3 = (*DAT_1000c0ac)(&DAT_1000bc80);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = (*DAT_1000c0a4)(0);
  iVar4 = (*DAT_1000c0a4)(2);
  iVar5 = (*DAT_1000c0a4)(4);
  iVar6 = (*DAT_1000c0a4)(5);
  iVar7 = (*DAT_1000c0a4)(1);
  if (iVar2 < 0x96) {
    if (iVar4 < 0x1389) {
      if (iVar4 < 0x3e9) {
        if (iVar3 < 0x1389) {
          if (iVar3 < 0x3e9) {
            if (iVar6 < 0x7d1) {
              if (iVar5 < 0x7d1) {
                if (iVar7 < 0x3e9) goto LAB_10002f45;
                uVar9 = 500;
                uVar8 = 1;
              }
              else {
                uVar9 = 800;
                uVar8 = 4;
              }
            }
            else {
              uVar9 = 800;
              uVar8 = 5;
            }
          }
          else {
            uVar9 = 900;
            uVar8 = 0;
          }
        }
        else {
          uVar9 = 3000;
          uVar8 = 0;
        }
      }
      else {
        uVar9 = 900;
        uVar8 = 2;
      }
    }
    else {
      uVar9 = 3000;
      uVar8 = 2;
    }
    FUN_100031c0(uVar8,3,uVar9);
  }
LAB_10002f45:
  iVar2 = (*DAT_1000c0ac)(&DAT_1000bcd8);
  if (((iVar2 != 0) && (1000 < iVar7)) && (cVar1 = (*DAT_1000c0b8)(&DAT_1000be88), cVar1 == '\0')) {
    if (3000 < iVar5) {
      FUN_100031c0(4,3,2000);
    }
    if (4000 < iVar6) {
      FUN_100031c0(5,3,3000);
    }
  }
  iVar2 = (*DAT_1000c0a4)(2);
  if (120000 < iVar2) {
    FUN_100031c0(2,1,100000);
  }
  iVar2 = (*DAT_1000c0a4)(0);
  if (100000 < iVar2) {
    FUN_100031c0(0,1,90000);
  }
  iVar2 = (*DAT_1000c0a8)(&DAT_1000be50);
  if ((iVar2 != 0) && (cVar1 = (*DAT_1000c0b8)(&DAT_1000be10), cVar1 == '\0')) {
    iVar2 = (*DAT_1000c0a4)(5);
    if ((9000 < iVar2) &&
       ((iVar2 = (*DAT_1000c0a4)(0), iVar2 != 0 && (iVar2 = (*DAT_1000c0a4)(1), iVar2 < 4000)))) {
      iVar2 = (*DAT_1000c0a4)(5);
      if (12000 < iVar2) {
        FUN_100031c0(5,1,3000);
      }
      iVar2 = (*DAT_1000c0a4)(4);
      if (8000 < iVar2) {
        FUN_100031c0(4,1,2000);
      }
      iVar2 = (*DAT_1000c0a4)(2);
      if (20000 < iVar2) {
        FUN_100031c0(2,1,12000);
      }
      iVar2 = (*DAT_1000c0a4)(3);
      if (30000 < iVar2) {
        FUN_100031c0(3,1,15000);
      }
    }
    iVar2 = (*DAT_1000c0a4)(5);
    if (((9000 < iVar2) && (iVar2 = (*DAT_1000c0a4)(1), iVar2 != 0)) &&
       (iVar2 = (*DAT_1000c0a4)(1), 4000 < iVar2)) {
      iVar2 = (*DAT_1000c0a4)(5);
      if (12000 < iVar2) {
        FUN_100031c0(5,4,3000);
      }
      iVar2 = (*DAT_1000c0a4)(2);
      if (20000 < iVar2) {
        FUN_100031c0(2,4,12000);
      }
      iVar2 = (*DAT_1000c0a4)(3);
      if (30000 < iVar2) {
        FUN_100031c0(3,4,15000);
      }
    }
  }
  iVar2 = FUN_10003240(1);
  if (iVar2 == 0) {
    FUN_100031c0(5,3,4000);
    FUN_10003220(1,1);
  }
  return;
}



// Function: FUN_100031c0 @ 0x100031c0

void __cdecl FUN_100031c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_1000c084)(param_1,param_2,param_3);
  return;
}



// Function: FUN_100031e0 @ 0x100031e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100031e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1000c0d4)();
  return;
}



// Function: FUN_100031f0 @ 0x100031f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100031f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1000c0d8)();
  return;
}



// Function: FUN_10003200 @ 0x10003200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003200(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1000c0e0)();
  return;
}



// Function: FUN_10003210 @ 0x10003210

void __cdecl FUN_10003210(undefined4 param_1)

{
  (*DAT_1000c0e4)(param_1);
  return;
}



// Function: FUN_10003220 @ 0x10003220

void __cdecl FUN_10003220(undefined4 param_1,undefined4 param_2)

{
  (*DAT_1000be80)(param_1,param_2);
  return;
}



// Function: FUN_10003240 @ 0x10003240

void __cdecl FUN_10003240(undefined4 param_1)

{
  (*DAT_1000bec0)(param_1);
  return;
}



// Function: FUN_10003250 @ 0x10003250

FARPROC __cdecl FUN_10003250(LPCSTR param_1)

{
  FARPROC pFVar1;
  CHAR local_100 [256];
  
  pFVar1 = GetProcAddress(DAT_1000bf48,param_1);
  if (pFVar1 == (FARPROC)0x0) {
    FUN_10003a00(local_100,(byte *)s_DMCR_EXE_does_not_contain_functi_1000a7a0);
    MessageBoxA((HWND)0x0,local_100,s_DLL_init_error__1000a790,0);
  }
  return pFVar1;
}



// Function: FUN_100032b0 @ 0x100032b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100032b0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_1000bf48 = GetModuleHandleA(s_DMCR_EXE_1000ae50);
    if (DAT_1000bf48 == (HMODULE)0x0) {
      MessageBoxA((HWND)0x0,s_Can_not_detect_DMCR_EXE_1000ae30,s_ERROR__1000ae48,0);
      return 1;
    }
    _DAT_1000bf4c = FUN_10003250(s_RegisterUnits_1000ae20);
    _DAT_1000bf50 = FUN_10003250(s_RegisterString_1000ae10);
    _DAT_1000bf54 = FUN_10003250(s_RegisterSound_1000ae00);
    _DAT_1000bf58 = FUN_10003250(s_RegisterVar_1000adf4);
    _DAT_1000bf5c = FUN_10003250(s_RegisterZone_1000ade4);
    DAT_1000bf60 = FUN_10003250(s_RegisterUnitType_1000add0);
    DAT_1000bf64 = FUN_10003250(s_RegisterUpgrade_1000adc0);
    _DAT_1000bf68 = FUN_10003250(s_InitialUpgrade_1000adb0);
    _DAT_1000bf6c = FUN_10003250(s_RegisterFormation_1000ad9c);
    _DAT_1000bf70 = FUN_10003250(s_RegisterUnitsForm_1000ad88);
    _DAT_1000bf74 = FUN_10003250(s_GetUnitsAmount0_1000ad78);
    _DAT_1000bf78 = FUN_10003250(s_GetUnitsAmount1_1000ad68);
    _DAT_1000bf7c = FUN_10003250(s_GetUnitsAmount2_1000ad58);
    _DAT_1000bf80 = FUN_10003250(s_GetTotalAmount0_1000ad48);
    _DAT_1000bf84 = FUN_10003250(s_GetTotalAmount1_1000ad38);
    _DAT_1000bf88 = FUN_10003250(s_GetReadyAmount_1000ad28);
    _DAT_1000bf8c = FUN_10003250(s_IsUpgradeDoing_1000ad18);
    _DAT_1000bf90 = FUN_10003250(s_IsUpgradeDone_1000ad08);
    _DAT_1000bf94 = FUN_10003250(s_IsUpgradeEnabled_1000acf4);
    _DAT_1000bf98 = FUN_10003250(s_GetDied_1000acec);
    _DAT_1000bf9c = FUN_10003250(s_CreateObject0_1000acdc);
    _DAT_1000bfa0 = FUN_10003250(s_ClearSelection_1000accc);
    _DAT_1000bfa4 = FUN_10003250(s_SelectUnits_1000acc0);
    _DAT_1000bfa8 = FUN_10003250(s_SelectUnitsType_1000acb0);
    _DAT_1000bfc0 = FUN_10003250(s_SelDie_1000aca8);
    _DAT_1000bfc4 = FUN_10003250(s_SelOpenGates_1000ac98);
    _DAT_1000bfc8 = FUN_10003250(s_SelCloseGates_1000ac88);
    _DAT_1000bfcc = FUN_10003250(s_SelSendTo_1000ac7c);
    _DAT_1000bfd0 = FUN_10003250(s_SelSendAndKill_1000ac6c);
    _DAT_1000bfec = FUN_10003250(s_SelAutoKill_1000ac60);
    _DAT_1000bfd4 = FUN_10003250(s_SelAttackGroup_1000ac50);
    _DAT_1000bfd8 = FUN_10003250(s_Patrol_1000ac48);
    _DAT_1000bfdc = FUN_10003250(s_ChangeFriends_1000ac38);
    _DAT_1000bfe0 = FUN_10003250(s_SelChangeNation_1000ac28);
    _DAT_1000bfe4 = FUN_10003250(s_SetStandGround_1000ac18);
    _DAT_1000bfe8 = FUN_10003250(s_AllowAttack_1000ac0c);
    _DAT_1000bff0 = FUN_10003250(&DAT_1000ac04);
    _DAT_1000bff4 = FUN_10003250(s_DisableMission_1000abf4);
    _DAT_1000bff8 = FUN_10003250(s_EnableMission_1000abe4);
    _DAT_1000bffc = FUN_10003250(s_SetVictoryText_1000abd4);
    _DAT_1000c000 = FUN_10003250(s_SetLooseText_1000abc4);
    _DAT_1000c004 = FUN_10003250(s_ShowVictory_1000abb8);
    _DAT_1000c008 = FUN_10003250(s_LooseGame_1000abac);
    _DAT_1000c00c = FUN_10003250(s_ShowCentralText_1000ab9c);
    _DAT_1000c010 = FUN_10003250(s_ShowPage_1000ab90);
    _DAT_1000c014 = FUN_10003250(s_AskQuestion_1000ab84);
    _DAT_1000be40 = FUN_10003250(s_GetResource_1000ab78);
    _DAT_1000c018 = FUN_10003250(s_AddResource_1000ab6c);
    _DAT_1000c01c = FUN_10003250(s_SetResource_1000ab60);
    _DAT_1000c020 = FUN_10003250(s_GetUnitCost_1000ab54);
    _DAT_1000c024 = FUN_10003250(s_GetUpgradeCost_1000ab44);
    _DAT_1000c028 = FUN_10003250(s_RunTimer_1000ab38);
    _DAT_1000c02c = FUN_10003250(s_TimerDone_1000ab2c);
    _DAT_1000c030 = FUN_10003250(s_TimerDoneFirst_1000ab1c);
    _DAT_1000c034 = FUN_10003250(s_TimerIsEmpty_1000ab0c);
    _DAT_1000c038 = FUN_10003250(s_FreeTimer_1000ab00);
    _DAT_1000c03c = FUN_10003250(s_GetTime_1000aaf8);
    _DAT_1000c040 = FUN_10003250(s_GetGlobalTime_1000aae8);
    _DAT_1000c044 = FUN_10003250(s_Trigg_1000aae0);
    _DAT_1000c048 = FUN_10003250(s_SetTrigg_1000aad4);
    _DAT_1000c04c = FUN_10003250(s_RunAI_1000aacc);
    _DAT_1000bb18 = FUN_10003250(s_RunAIWithPeasants_1000aab8);
    _DAT_1000c058 = FUN_10003250(s_SelCenter_1000aaac);
    _DAT_1000c054 = FUN_10003250(s_UnitsCenter_1000aaa0);
    _DAT_1000c05c = FUN_10003250(s_CreateZoneNearUnit_1000aa8c);
    _DAT_1000c060 = FUN_10003250(s_SetLightSpot_1000aa7c);
    _DAT_1000c064 = FUN_10003250(s_ClearLightSpot_1000aa6c);
    _DAT_1000bfb0 = FUN_10003250(s_GetMaxInside_1000aa5c);
    _DAT_1000bfac = FUN_10003250(s_GetNInside_1000aa50);
    _DAT_1000bfb4 = FUN_10003250(s_PushUnitAway_1000aa40);
    _DAT_1000bfb8 = FUN_10003250(s_CheckLeaveAbility_1000aa2c);
    _DAT_1000bfbc = FUN_10003250(s_AttackZoneByArtillery_1000aa14);
    _DAT_1000c080 = FUN_10003250(s_SetDefSettings_1000aa04);
    _DAT_1000c0b0 = FUN_10003250(s_GetMaxPeasantsInMines_1000a9ec);
    _DAT_1000c078 = FUN_10003250(s_SetUpgradeLock_1000a9dc);
    DAT_1000c084 = FUN_10003250(s_AI_Torg_1000a9d4);
    _DAT_1000c0c8 = FUN_10003250(s_GetUnitsByUsage_1000a9c4);
    _DAT_1000c068 = FUN_10003250(s_GetAINation_1000a9b8);
    DAT_1000c06c = FUN_10003250(s_TryUnit_1000a9b0);
    DAT_1000c070 = FUN_10003250(s_TryUpgrade_1000a9a4);
    DAT_1000c074 = FUN_10003250(s_SetMineBalanse_1000a994);
    DAT_1000c07c = FUN_10003250(s_SetPDistribution_1000a980);
    DAT_1000c088 = FUN_10003250(s_AssignAmountOfMineUpgrades_1000a964);
    DAT_1000c08c = FUN_10003250(s_AssignMineUpgrade_1000a950);
    DAT_1000c0bc = FUN_10003250(s_AssignMine_1000a944);
    DAT_1000c0c0 = FUN_10003250(s_AssignPeasant_1000a934);
    DAT_1000c0c4 = FUN_10003250(s_AssignHouse_1000a928);
    _DAT_1000c0cc = FUN_10003250(s_AssignWall_1000a91c);
    DAT_1000c090 = FUN_10003250(s_SET_MINE_CAPTURE_RADIUS_1000a904);
    DAT_1000c094 = FUN_10003250(s_SET_MINE_UPGRADE1_RADIUS_1000a8e8);
    DAT_1000c098 = FUN_10003250(s_SET_MINE_UPGRADE2_RADIUS_1000a8cc);
    DAT_1000c09c = FUN_10003250(s_SET_DEFAULT_MAX_WORKERS_1000a8b4);
    DAT_1000c0a0 = FUN_10003250(s_SET_MIN_PEASANT_BRIGADE_1000a89c);
    DAT_1000c0a4 = FUN_10003250(s_GetMoney_1000a890);
    DAT_1000c0a8 = FUN_10003250(s_GetUnits_1000a884);
    DAT_1000c0ac = FUN_10003250(s_GetReadyUnits_1000a874);
    DAT_1000c0b4 = FUN_10003250(s_UpgIsDone_1000a868);
    DAT_1000c0b8 = FUN_10003250(s_UpgIsRun_1000a85c);
    DAT_1000c0d0 = FUN_10003250(s_FieldExist_1000a850);
    _DAT_1000c0d4 = FUN_10003250(s_GetDifficulty_1000a840);
    _DAT_1000c0d8 = FUN_10003250(s_GetStartRes_1000a834);
    _DAT_1000c0dc = FUN_10003250(s_GetResOnMap_1000a828);
    _DAT_1000c0e0 = FUN_10003250(s_GetLandType_1000a81c);
    DAT_1000c0e4 = FUN_10003250(s_AssignFormUnit_1000a80c);
    _DAT_1000c0ec = FUN_10003250(s_GetRandomIndex_1000a7fc);
    _DAT_1000c0e8 = FUN_10003250(s_SafeRegisterUpgrade_1000a7e8);
    DAT_1000bec0 = FUN_10003250(s_GetAIRegister_1000a7d8);
    DAT_1000be80 = FUN_10003250(s_SetAIRegister_1000a7c8);
    OnInit();
  }
  return 1;
}



// Function: ProcessAI @ 0x10003960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessAI(void)

{
                    /* 0x3960  3  ProcessAI */
  DAT_1000bce0 = FUN_10003200();
  _DAT_1000bf20 = FUN_100031e0();
  if (DAT_1000c0f4 == 0) {
    DAT_1000c0f4 = 10;
    _DAT_1000a0c8 = 0x1e;
  }
  else if (DAT_1000c0f4 == 1) {
    DAT_1000c0f4 = 0x1e;
    _DAT_1000a0c8 = 0x32;
  }
  else {
    DAT_1000c0f4 = 100;
    _DAT_1000a0c8 = 100;
  }
  _DAT_1000bc90 = FUN_100031f0();
  if (DAT_1000bce0 == 0) {
    FUN_10002800();
  }
  else if ((0 < DAT_1000bce0) && (DAT_1000bce0 < 5)) {
    FUN_10001d30();
  }
  FUN_10001000();
  return;
}



// Function: FUN_10003a00 @ 0x10003a00

int __cdecl FUN_10003a00(undefined1 *param_1,byte *param_2)

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
  iVar1 = FUN_10003d13((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10003bfb(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}



// Function: FUN_10003a52 @ 0x10003a52

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003a52(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000c118 = GetVersion();
    iVar1 = FUN_10004e0f(1);
    if (iVar1 != 0) {
      _DAT_1000c124 = DAT_1000c118 >> 8 & 0xff;
      _DAT_1000c120 = DAT_1000c118 & 0xff;
      DAT_1000c118 = DAT_1000c118 >> 0x10;
      _DAT_1000c11c = _DAT_1000c120 * 0x100 + _DAT_1000c124;
      iVar1 = FUN_1000463b();
      if (iVar1 != 0) {
        DAT_1000d7f8 = GetCommandLineA();
        DAT_1000c104 = FUN_10004cdd();
        FUN_100047c7();
        FUN_10004a90();
        FUN_100049d7();
        FUN_1000451d();
        DAT_1000c100 = DAT_1000c100 + 1;
        goto LAB_10003b25;
      }
      FUN_10004e4b();
    }
LAB_10003ab2:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000c100 < 1) goto LAB_10003ab2;
      DAT_1000c100 = DAT_1000c100 + -1;
      if (DAT_1000c150 == 0) {
        FUN_1000455b();
      }
      FUN_10004983();
      FUN_1000468f();
      FUN_10004e4b();
    }
    else if (param_2 == 3) {
      FUN_10004727((LPVOID)0x0);
    }
LAB_10003b25:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10003b2b

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000c100;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10003b73;
    if ((DAT_1000d7fc != (code *)0x0) &&
       (iVar2 = (*DAT_1000d7fc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10003a52(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10003b73:
  iVar2 = FUN_100032b0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10003a52(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10003a52(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000d7fc != (code *)0x0) {
      iVar2 = (*DAT_1000d7fc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10003bc8

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000c10c == 1) || ((DAT_1000c10c == 0 && (DAT_1000c110 == 1)))) {
    FUN_10004ec0();
  }
  FUN_10004ef9(param_1);
  (*(code *)PTR___exit_1000ae5c)(0xff);
  return;
}



// Function: FUN_10003bfb @ 0x10003bfb

uint __cdecl FUN_10003bfb(uint param_1,int *param_2)

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
LAB_10003d07:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_10003d07;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_1000af48 && (piVar4 != (int *)&DAT_1000af68)) ||
        (bVar5 = FUN_10005358(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_10005314(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_10005124(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_1000ae70;
        }
        else {
          puVar6 = (undefined *)((&DAT_1000d6e0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_1000504c(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_10005124(uVar2,pcVar3,(uint)piVar7);
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



// Function: FUN_10003d13 @ 0x10003d13

int __cdecl FUN_10003d13(int *param_1,byte *param_2,undefined4 *param_3)

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
      uVar2 = *(byte *)((int)&GetStringTypeW_exref + (int)(char)bVar9) & 0xf;
    }
    local_34 = (int)(char)(&DAT_100090e0)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_10003d81_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_1000b1c8[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_10004454((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_10004454((int)(char)bVar9,param_1,&local_18);
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
        local_24 = FUN_100044f2((int *)&param_3);
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
        local_14 = FUN_100044f2((int *)&param_3);
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
          goto switchD_10003d81_caseD_0;
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
LAB_10004192:
              local_30 = 7;
LAB_10004199:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_10004203;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_10003f40;
                }
                goto LAB_1000431d;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_10003fa1;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_10003fce:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_100044f2((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_1000450f((int *)&param_3);
              local_10 = (undefined1 *)FUN_1000556b(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_100044f2((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_1000ae60;
              pWVar4 = (WCHAR *)PTR_DAT_1000ae60;
              goto LAB_10004113;
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
            if (bVar9 == 99) goto LAB_10003fce;
            if (bVar9 == 100) goto LAB_100041f8;
          }
        }
        else {
LAB_10003fa1:
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
          (*(code *)PTR___fptrap_1000b1b0)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_1000b1bc)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_1000b1b4)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_10004113:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_100041f8:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_100044f2((int *)&param_3);
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
            goto LAB_10004203;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_10004192;
          }
          if (bVar9 == 0x73) {
LAB_10003f40:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_100044f2((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_1000ae60;
                pWVar4 = (WCHAR *)PTR_DAT_1000ae60;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_1000ae64;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_1000431d;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_1000431d;
            local_30 = 0x27;
            goto LAB_10004199;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_10004203:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_100044f2((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_10004256;
            }
            uVar2 = FUN_100044f2((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_100044f2((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_100044f2((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_100044ff((int *)&param_3);
        }
LAB_10004256:
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
LAB_1000431d:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_10004355;
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
LAB_10004355:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_10004489(0x20,iVar10,param_1,&local_18);
        }
        FUN_100044ba(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_10004489(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_100044ba((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_1000556b(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_100044ba(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_10004489(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}



// Function: FUN_10004454 @ 0x10004454

void __cdecl FUN_10004454(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10003bfb(param_1,param_2);
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



// Function: FUN_10004489 @ 0x10004489

void __cdecl FUN_10004489(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_10004454(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



// Function: FUN_100044ba @ 0x100044ba

void __cdecl FUN_100044ba(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10004454((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



// Function: FUN_100044f2 @ 0x100044f2

undefined4 __cdecl FUN_100044f2(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



// Function: FUN_100044ff @ 0x100044ff

undefined8 __cdecl FUN_100044ff(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



// Function: FUN_1000450f @ 0x1000450f

undefined4 __cdecl FUN_1000450f(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}



// Function: FUN_1000451d @ 0x1000451d

void FUN_1000451d(void)

{
  if (DAT_1000d7f4 != (code *)0x0) {
    (*DAT_1000d7f4)();
  }
  FUN_10004621((undefined4 *)&DAT_1000a008,(undefined4 *)&DAT_1000a014);
  FUN_10004621((undefined4 *)&DAT_1000a000,(undefined4 *)&DAT_1000a004);
  return;
}



// Function: __exit @ 0x1000454a

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000456a(_Code,1,0);
  return;
}



// Function: FUN_1000455b @ 0x1000455b

void FUN_1000455b(void)

{
  FUN_1000456a(0,0,1);
  return;
}



// Function: FUN_1000456a @ 0x1000456a

void __cdecl FUN_1000456a(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1000460f();
  if (DAT_1000c154 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000c150 = 1;
  DAT_1000c14c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000d7f0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000d7ec - 4), DAT_1000d7f0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000d7f0 <= puVar1);
    }
    FUN_10004621((undefined4 *)&DAT_1000a018,(undefined4 *)&DAT_1000a020);
  }
  FUN_10004621((undefined4 *)&DAT_1000a024,(undefined4 *)&DAT_1000a028);
  if (param_3 == 0) {
    DAT_1000c154 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10004618();
  return;
}



// Function: FUN_1000460f @ 0x1000460f

void FUN_1000460f(void)

{
  FUN_100057aa(0xd);
  return;
}



// Function: FUN_10004618 @ 0x10004618

void FUN_10004618(void)

{
  FUN_1000580b(0xd);
  return;
}



// Function: FUN_10004621 @ 0x10004621

void __cdecl FUN_10004621(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_1000463b @ 0x1000463b

undefined4 FUN_1000463b(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10005715();
  DAT_1000ae68 = TlsAlloc();
  if (DAT_1000ae68 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10005820(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000ae68,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100046ad((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_1000468f @ 0x1000468f

void FUN_1000468f(void)

{
  FUN_1000573e();
  if (DAT_1000ae68 != 0xffffffff) {
    TlsFree(DAT_1000ae68);
    DAT_1000ae68 = 0xffffffff;
  }
  return;
}



// Function: FUN_100046ad @ 0x100046ad

void __cdecl FUN_100046ad(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000b4a0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_100046c0 @ 0x100046c0

DWORD * FUN_100046c0(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000ae68);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10005820(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000ae68,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100046ad((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1000471b;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1000471b:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_10004727 @ 0x10004727

void __cdecl FUN_10004727(LPVOID param_1)

{
  if (DAT_1000ae68 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_1000ae68), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_100058ad(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_100058ad(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_100058ad(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_100058ad(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_100058ad(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_100058ad(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_1000b4a0) {
        FUN_100058ad(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_100058ad(param_1);
    }
    TlsSetValue(DAT_1000ae68,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100047c7 @ 0x100047c7

void FUN_100047c7(void)

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
  DAT_1000d7e0 = 0x20;
  DAT_1000d6e0 = puVar2;
  for (; puVar2 < DAT_1000d6e0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000d7e0 < (int)UVar8) {
      puVar2 = &DAT_1000d6e4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000d7e0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000d7e0 = DAT_1000d7e0 + 0x20;
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
      } while ((int)DAT_1000d7e0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000d6e0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000d6e0 + iVar6 * 9;
    if (DAT_1000d6e0[iVar6 * 9] == -1) {
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
          goto LAB_1000496c;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1000496c:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000d7e0);
      return;
    }
  } while( true );
}



// Function: FUN_10004983 @ 0x10004983

void FUN_10004983(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000d6e0;
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
      FUN_100058ad((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000d7e0);
  return;
}



// Function: FUN_100049d7 @ 0x100049d7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100049d7(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000d7e8 == 0) {
    FUN_10005e58();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000c104; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000c134 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000c104;
  puVar6 = DAT_1000c104;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10005990((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100058ad(DAT_1000c104);
  DAT_1000c104 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000d7e4 = 1;
  return;
}



// Function: FUN_10004a90 @ 0x10004a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004a90(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000d7e8 == 0) {
    FUN_10005e58();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000c158,0x104);
  _DAT_1000c144 = &DAT_1000c158;
  pbVar2 = &DAT_1000c158;
  if (*DAT_1000d7f8 != 0) {
    pbVar2 = DAT_1000d7f8;
  }
  FUN_10004b29(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10004b29(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000c12c = puVar1;
  _DAT_1000c128 = local_8 + -1;
  return;
}



// Function: FUN_10004b29 @ 0x10004b29

void __cdecl FUN_10004b29(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000c5a0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000c5a0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10004bd4;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10004bd4:
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
          if ((*(byte *)((int)&DAT_1000c5a0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000c5a0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10004cdd @ 0x10004cdd

LPSTR FUN_10004cdd(void)

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
  if (DAT_1000c25c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000c25c = 1;
LAB_10004d34:
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
        FUN_100058ad(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000c25c = 2;
  }
  else {
    if (DAT_1000c25c == 1) goto LAB_10004d34;
    if (DAT_1000c25c != 2) {
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
    FUN_10005e80((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10004e0f @ 0x10004e0f

undefined4 __cdecl FUN_10004e0f(int param_1)

{
  int iVar1;
  
  DAT_1000d6c4 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000d6c4 != (HANDLE)0x0) {
    iVar1 = FUN_100061b5();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_1000d6c4);
  }
  return 0;
}



// Function: FUN_10004e4b @ 0x10004e4b

void FUN_10004e4b(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_1000c468) {
    puVar2 = (undefined4 *)((int)DAT_1000c46c + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_1000d6c4,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_1000c468);
  }
  HeapFree(DAT_1000d6c4,0,DAT_1000c46c);
  HeapDestroy(DAT_1000d6c4);
  return;
}



// Function: FUN_10004ec0 @ 0x10004ec0

void FUN_10004ec0(void)

{
  if ((DAT_1000c10c == 1) || ((DAT_1000c10c == 0 && (DAT_1000c110 == 1)))) {
    FUN_10004ef9(0xfc);
    if (DAT_1000c260 != (code *)0x0) {
      (*DAT_1000c260)();
    }
    FUN_10004ef9(0xff);
  }
  return;
}



// Function: FUN_10004ef9 @ 0x10004ef9

void __cdecl FUN_10004ef9(DWORD param_1)

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
  pDVar2 = &DAT_1000ae98;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000af28);
  if (param_1 == (&DAT_1000ae98)[iVar5 * 2]) {
    if ((DAT_1000c10c == 1) || ((DAT_1000c10c == 0 && (DAT_1000c110 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000ae9c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10005990(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10005990(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100059a0(local_a4,_Dest);
      FUN_100059a0(local_a4,(uint *)&DAT_10009408);
      FUN_100059a0(local_a4,*(uint **)(iVar5 * 8 + 0x1000ae9c));
      auStackY_1e3._3_4_ = 0x1000501d;
      FUN_100069fe(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_1000504c @ 0x1000504c

DWORD __cdecl FUN_1000504c(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000d7e0) &&
     ((*(byte *)((&DAT_1000d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10006cd4(param_1);
    DVar1 = FUN_100050b1(param_1,param_2,param_3);
    FUN_10006d33(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10006c01();
  *pDVar2 = 9;
  pDVar2 = FUN_10006c0a();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_100050b1 @ 0x100050b1

DWORD __cdecl FUN_100050b1(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_10006c92(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10006c01();
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
      pbVar1 = (byte *)((&DAT_1000d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10006b8e(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_10005124 @ 0x10005124

int __cdecl FUN_10005124(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000d7e0) &&
     ((*(byte *)((&DAT_1000d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10006cd4(param_1);
    iVar1 = FUN_10005189(param_1,param_2,param_3);
    FUN_10006d33(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10006c01();
  *pDVar2 = 9;
  pDVar2 = FUN_10006c0a();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10005189 @ 0x10005189

int __cdecl FUN_10005189(DWORD param_1,char *param_2,uint param_3)

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
LAB_100051a2:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_1000d6e0 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_100050b1(param_1,0,2);
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
LAB_10005271:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_100052e3;
      if (param_1 == 5) {
        pDVar7 = FUN_10006c01();
        *pDVar7 = 9;
        pDVar7 = FUN_10006c0a();
        *pDVar7 = 5;
      }
      else {
        FUN_10006b8e(param_1);
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
            goto LAB_10005271;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10005271;
        } while( true );
      }
LAB_100052e3:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_100051a2;
      pDVar7 = FUN_10006c01();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10006c0a();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_10005314 @ 0x10005314

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10005314(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_1000c264 = _DAT_1000c264 + 1;
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



// Function: FUN_10005358 @ 0x10005358

byte __cdecl FUN_10005358(uint param_1)

{
  if (DAT_1000d7e0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_1000d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



// Function: FUN_1000543d @ 0x1000543d

void __cdecl FUN_1000543d(uint param_1)

{
  if ((0x1000af27 < param_1) && (param_1 < 0x1000b189)) {
    FUN_100057aa(((int)(param_1 + 0xefff50d8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_1000546c @ 0x1000546c

void __cdecl FUN_1000546c(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100057aa(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_1000548f @ 0x1000548f

void __cdecl FUN_1000548f(uint param_1)

{
  if ((0x1000af27 < param_1) && (param_1 < 0x1000b189)) {
    FUN_1000580b(((int)(param_1 + 0xefff50d8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_100054be @ 0x100054be

void __cdecl FUN_100054be(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000580b(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: _strlen @ 0x100054f0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10005510;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10005543:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10005510:
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
  goto LAB_10005543;
}



// Function: FUN_1000556b @ 0x1000556b

int __cdecl FUN_1000556b(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1000c454);
  bVar2 = DAT_1000c450 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1000c454);
    FUN_100057aa(0x13);
  }
  iVar1 = FUN_100055c4(param_1,param_2);
  if (bVar2) {
    FUN_1000580b(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1000c454);
  }
  return iVar1;
}



// Function: FUN_100055c4 @ 0x100055c4

int __cdecl FUN_100055c4(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_1000c2ec == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_1000c2fc,0x220,&param_2,1,lpMultiByteStr,DAT_1000b8b4,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_10006c01();
  *pDVar2 = 0x2a;
  return -1;
}



// Function: __aulldiv @ 0x10005630

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



// Function: __aullrem @ 0x100056a0

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



// Function: FUN_10005715 @ 0x10005715

void FUN_10005715(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000b424);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000b414);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000b404);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000b3e4);
  return;
}



// Function: FUN_1000573e @ 0x1000573e

void FUN_1000573e(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000b3e0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000b424)) && (ppuVar1 != &PTR_DAT_1000b414)) &&
       ((ppuVar1 != &PTR_DAT_1000b404 && (ppuVar1 != &PTR_DAT_1000b3e4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100058ad(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000b4a0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000b404);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000b414);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000b424);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000b3e4);
  return;
}



// Function: FUN_100057aa @ 0x100057aa

void __cdecl FUN_100057aa(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000b3e0 + param_1;
  if ((&DAT_1000b3e0)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100057aa(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100058ad(lpCriticalSection);
    }
    FUN_1000580b(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_1000580b @ 0x1000580b

void __cdecl FUN_1000580b(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000b3e0)[param_1]);
  return;
}



// Function: FUN_10005820 @ 0x10005820

int * __cdecl FUN_10005820(int param_1,int param_2)

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
      if (_Size < DAT_1000b630 || (int)_Size - (int)DAT_1000b630 == 0) {
        FUN_100057aa(9);
        piVar1 = FUN_10006549(_Size);
        FUN_1000580b(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_1000d6c4,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_1000c308 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10006f78(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_100058ad @ 0x100058ad

void __cdecl FUN_100058ad(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100057aa(9);
    puVar1 = (uint *)FUN_100061f3((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_1000621e(puVar1,(uint)param_1);
      FUN_1000580b(9);
      return;
    }
    FUN_1000580b(9);
    HeapFree(DAT_1000d6c4,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x100058f5

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000c308);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10005907

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_10005933((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10006f78(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10005933 @ 0x10005933

int * __cdecl FUN_10005933(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_1000b630) {
    FUN_100057aa(9);
    piVar1 = FUN_10006549(param_1);
    FUN_1000580b(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_1000d6c4,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_10005990 @ 0x10005990

uint * __cdecl FUN_10005990(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10005a78;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10005a78:
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



// Function: FUN_100059a0 @ 0x100059a0

uint * __cdecl FUN_100059a0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100059bc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100059ef;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10005a0b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100059bc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10005a0b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10005a0b;
    }
  }
LAB_100059ef:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10005a0b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10005a78:
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
    if (bVar1 == 0) goto LAB_10005a78;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: FUN_10005a80 @ 0x10005a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10005a80(int param_1)

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
  
  FUN_100057aa(0x19);
  CodePage = FUN_10005c2d(param_1);
  if (CodePage != DAT_1000c470) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000b538;
LAB_10005abd:
      if (*pUVar5 != CodePage) goto code_r0x10005ac1;
      local_8 = 0;
      puVar15 = &DAT_1000c5a0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000b548);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000b530)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000c5a0 + uVar8 + 1);
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
      _DAT_1000c48c = 1;
      DAT_1000c470 = CodePage;
      DAT_1000c6a4 = FUN_10005c77(CodePage);
      DAT_1000c480 = *(undefined4 *)(iVar12 + 0x1000b53c);
      DAT_1000c484 = *(undefined4 *)(iVar12 + 0x1000b540);
      DAT_1000c488 = *(undefined4 *)(iVar12 + 0x1000b544);
      goto LAB_10005c11;
    }
    goto LAB_10005c0c;
  }
  goto LAB_10005aa7;
code_r0x10005ac1:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000b627 < (int)pUVar5) goto code_r0x10005acc;
  goto LAB_10005abd;
code_r0x10005acc:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000c6a4 = 0;
    puVar15 = &DAT_1000c5a0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000c48c = 0;
      DAT_1000c470 = CodePage;
    }
    else {
      DAT_1000c470 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000c5a0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000c5a0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000c6a4 = FUN_10005c77(CodePage);
      _DAT_1000c48c = 1;
    }
    DAT_1000c480 = 0;
    DAT_1000c484 = 0;
    DAT_1000c488 = 0;
  }
  else {
    if (DAT_1000c2c8 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10005c1e;
    }
LAB_10005c0c:
    FUN_10005caa();
  }
LAB_10005c11:
  FUN_10005cd3();
LAB_10005aa7:
  uVar14 = 0;
LAB_10005c1e:
  FUN_1000580b(0x19);
  return uVar14;
}



// Function: FUN_10005c2d @ 0x10005c2d

int __cdecl FUN_10005c2d(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000c2c8 = 1;
                    /* WARNING: Could not recover jumptable at 0x10005c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000c2c8 = 1;
                    /* WARNING: Could not recover jumptable at 0x10005c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000c2fc;
  }
  DAT_1000c2c8 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10005c77 @ 0x10005c77

undefined4 __cdecl FUN_10005c77(int param_1)

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



// Function: FUN_10005caa @ 0x10005caa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005caa(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000c5a0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000c470 = 0;
  _DAT_1000c48c = 0;
  DAT_1000c6a4 = 0;
  DAT_1000c480 = 0;
  DAT_1000c484 = 0;
  DAT_1000c488 = 0;
  return;
}



// Function: FUN_10005cd3 @ 0x10005cd3

void FUN_10005cd3(void)

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
  
  BVar2 = GetCPInfo(DAT_1000c470,&local_18);
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
    FUN_100071e2(1,local_118,0x100,local_518,DAT_1000c470,DAT_1000c6a4,0);
    FUN_10006f93(DAT_1000c6a4,0x100,local_118,0x100,local_218,0x100,DAT_1000c470,0);
    FUN_10006f93(DAT_1000c6a4,0x200,local_118,0x100,local_318,0x100,DAT_1000c470,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000c5a0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10005ddf;
        }
        (&DAT_1000c4a0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000c5a0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10005ddf:
        (&DAT_1000c4a0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000c5a0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10005e29;
        }
        (&DAT_1000c4a0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000c5a0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10005e29:
        (&DAT_1000c4a0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10005e58 @ 0x10005e58

void FUN_10005e58(void)

{
  if (DAT_1000d7e8 == 0) {
    FUN_10005a80(-3);
    DAT_1000d7e8 = 1;
  }
  return;
}



// Function: FUN_10005e80 @ 0x10005e80

undefined4 * __cdecl FUN_10005e80(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10006037_caseD_2;
        case 3:
          goto switchD_10006037_caseD_3;
        }
        goto switchD_10006037_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006037_caseD_0;
      case 1:
        goto switchD_10006037_caseD_1;
      case 2:
        goto switchD_10006037_caseD_2;
      case 3:
        goto switchD_10006037_caseD_3;
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
              goto switchD_10006037_caseD_2;
            case 3:
              goto switchD_10006037_caseD_3;
            }
            goto switchD_10006037_caseD_1;
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
              goto switchD_10006037_caseD_2;
            case 3:
              goto switchD_10006037_caseD_3;
            }
            goto switchD_10006037_caseD_1;
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
              goto switchD_10006037_caseD_2;
            case 3:
              goto switchD_10006037_caseD_3;
            }
            goto switchD_10006037_caseD_1;
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
switchD_10006037_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006037_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006037_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006037_caseD_0:
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
        goto switchD_10005eb5_caseD_2;
      case 3:
        goto switchD_10005eb5_caseD_3;
      }
      goto switchD_10005eb5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005eb5_caseD_0;
    case 1:
      goto switchD_10005eb5_caseD_1;
    case 2:
      goto switchD_10005eb5_caseD_2;
    case 3:
      goto switchD_10005eb5_caseD_3;
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
            goto switchD_10005eb5_caseD_2;
          case 3:
            goto switchD_10005eb5_caseD_3;
          }
          goto switchD_10005eb5_caseD_1;
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
            goto switchD_10005eb5_caseD_2;
          case 3:
            goto switchD_10005eb5_caseD_3;
          }
          goto switchD_10005eb5_caseD_1;
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
            goto switchD_10005eb5_caseD_2;
          case 3:
            goto switchD_10005eb5_caseD_3;
          }
          goto switchD_10005eb5_caseD_1;
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
switchD_10005eb5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005eb5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005eb5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005eb5_caseD_0:
  return param_1;
}



// Function: FUN_100061b5 @ 0x100061b5

undefined4 FUN_100061b5(void)

{
  DAT_1000c46c = HeapAlloc(DAT_1000d6c4,0,0x140);
  if (DAT_1000c46c == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000c464 = 0;
  DAT_1000c468 = 0;
  DAT_1000c460 = DAT_1000c46c;
  DAT_1000c458 = 0x10;
  return 1;
}



// Function: FUN_100061f3 @ 0x100061f3

uint __cdecl FUN_100061f3(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000c46c;
  while( true ) {
    if (DAT_1000c46c + DAT_1000c468 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000621e @ 0x1000621e

void __cdecl FUN_1000621e(uint *param_1,uint param_2)

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
  uVar5 = DAT_1000c45c;
  puVar2 = DAT_1000c464;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_1000c464 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_1000c45c * 0x8000 + DAT_1000c464[3]),0x8000,0x4000);
    DAT_1000c464[2] = DAT_1000c464[2] | 0x80000000U >> ((byte)DAT_1000c45c & 0x1f);
    *(undefined4 *)(DAT_1000c464[4] + 0xc4 + DAT_1000c45c * 4) = 0;
    *(char *)(DAT_1000c464[4] + 0x43) = *(char *)(DAT_1000c464[4] + 0x43) + -1;
    if (*(char *)(DAT_1000c464[4] + 0x43) == '\0') {
      DAT_1000c464[1] = DAT_1000c464[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_1000c464[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_1000c464[3],0,0x8000);
      HeapFree(DAT_1000d6c4,0,(LPVOID)DAT_1000c464[4]);
      FUN_10007330(DAT_1000c464,DAT_1000c464 + 5,
                   (DAT_1000c468 * 0x14 - (int)DAT_1000c464) + -0x14 + DAT_1000c46c);
      DAT_1000c468 = DAT_1000c468 + -1;
      if (DAT_1000c464 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_1000c460 = DAT_1000c46c;
      puVar2 = param_1;
    }
  }
  DAT_1000c464 = puVar2;
  DAT_1000c45c = uVar5;
  return;
}



// Function: FUN_10006549 @ 0x10006549

int * __cdecl FUN_10006549(uint *param_1)

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
  
  puVar8 = DAT_1000c46c + DAT_1000c468 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000c460;
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
  puVar11 = DAT_1000c46c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000c460 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000c460) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000c46c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000c460 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000c460) && (param_1 = FUN_10006852(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10006903((int)param_1);
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
  DAT_1000c460 = param_1;
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
    if (iVar9 == 0) goto LAB_1000680f;
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
LAB_1000680f:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000c464)) && (local_8 == DAT_1000c45c)) {
    DAT_1000c464 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10006852 @ 0x10006852

undefined4 * FUN_10006852(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000c468 == DAT_1000c458) {
    pvVar2 = HeapReAlloc(DAT_1000d6c4,0,DAT_1000c46c,(DAT_1000c458 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000c458 = DAT_1000c458 + 0x10;
    DAT_1000c46c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000c46c + DAT_1000c468 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000d6c4,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000c468 = DAT_1000c468 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000d6c4,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10006903 @ 0x10006903

int __cdecl FUN_10006903(int param_1)

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



// Function: FUN_100069fe @ 0x100069fe

int __cdecl FUN_100069fe(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000c2cc == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000c2cc = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000c2cc != (FARPROC)0x0) {
        DAT_1000c2d0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000c2d4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10006a4d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10006a4d:
    if (DAT_1000c2d0 != (FARPROC)0x0) {
      iVar1 = (*DAT_1000c2d0)();
      if ((iVar1 != 0) && (DAT_1000c2d4 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000c2d4)(iVar1);
      }
    }
    iVar1 = (*DAT_1000c2cc)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10006a90

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
        goto joined_r0x10006ace;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10006b0b;
        goto LAB_10006b79;
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
joined_r0x10006b75:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10006b79:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10006b0b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10006b75;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10006b75;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10006b75;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10006ace:
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
LAB_10006b0b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10006b8e @ 0x10006b8e

void __cdecl FUN_10006b8e(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10006c0a();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1000b640;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10006c01();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1000b644);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x1000b7a8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10006c01();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10006c01();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10006c01();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_10006c01 @ 0x10006c01

DWORD * FUN_10006c01(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100046c0();
  return pDVar1 + 2;
}



// Function: FUN_10006c0a @ 0x10006c0a

DWORD * FUN_10006c0a(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100046c0();
  return pDVar1 + 3;
}



// Function: FUN_10006c13 @ 0x10006c13

undefined4 __cdecl FUN_10006c13(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1000d7e0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1000d6e0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1000c110 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10006c6f;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10006c6f:
      *(undefined4 *)((&DAT_1000d6e0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10006c01();
  *pDVar2 = 9;
  pDVar2 = FUN_10006c0a();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10006c92 @ 0x10006c92

undefined4 __cdecl FUN_10006c92(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1000d7e0) &&
     ((*(byte *)((&DAT_1000d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1000d6e0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10006c01();
  *pDVar1 = 9;
  pDVar1 = FUN_10006c0a();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_10006cd4 @ 0x10006cd4

void __cdecl FUN_10006cd4(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1000d6e0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_100057aa(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000580b(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1000d6e0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_10006d33 @ 0x10006d33

void __cdecl FUN_10006d33(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1000d6e0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_10006dd6 @ 0x10006dd6

int __cdecl FUN_10006dd6(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10006e04(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_100076e2(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_10006e04 @ 0x10006e04

undefined4 __cdecl FUN_10006e04(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10005124(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_10006e69 @ 0x10006e69

int __cdecl FUN_10006e69(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_100057aa(2);
  iVar4 = 0;
  if (0 < DAT_1000d6c0) {
    do {
      iVar2 = *(int *)(DAT_1000c6a8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1000546c(iVar4,iVar2);
        piVar1 = *(int **)(DAT_1000c6a8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10006dd6(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10006dd6(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_100054be(iVar4,*(int *)(DAT_1000c6a8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_1000d6c0);
  }
  FUN_1000580b(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: __fptrap @ 0x10006f0d

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



// Function: _memset @ 0x10006f20

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



// Function: FUN_10006f78 @ 0x10006f78

undefined4 __cdecl FUN_10006f78(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000c304 != (code *)0x0) {
    iVar1 = (*DAT_1000c304)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10006f93 @ 0x10006f93

int __cdecl
FUN_10006f93(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009488;
  puStack_10 = &LAB_100079c4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000c30c == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000c30c = 2;
    }
    else {
      DAT_1000c30c = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100071b7(param_3,param_4);
  }
  if (DAT_1000c30c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000c30c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000c2fc;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10007aa0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10007aa0();
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



// Function: FUN_100071b7 @ 0x100071b7

int __cdecl FUN_100071b7(char *param_1,int param_2)

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



// Function: FUN_100071e2 @ 0x100071e2

BOOL __cdecl
FUN_100071e2(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100094a0;
  puStack_10 = &LAB_100079c4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000c310;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000c310 == 0) {
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
  DAT_1000c310 = iVar3;
  if (DAT_1000c310 != 2) {
    if (DAT_1000c310 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000c2fc;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10007aa0();
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
    param_6 = DAT_1000c2ec;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10007330 @ 0x10007330

undefined4 * __cdecl FUN_10007330(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100074e7_caseD_2;
        case 3:
          goto switchD_100074e7_caseD_3;
        }
        goto switchD_100074e7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100074e7_caseD_0;
      case 1:
        goto switchD_100074e7_caseD_1;
      case 2:
        goto switchD_100074e7_caseD_2;
      case 3:
        goto switchD_100074e7_caseD_3;
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
              goto switchD_100074e7_caseD_2;
            case 3:
              goto switchD_100074e7_caseD_3;
            }
            goto switchD_100074e7_caseD_1;
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
              goto switchD_100074e7_caseD_2;
            case 3:
              goto switchD_100074e7_caseD_3;
            }
            goto switchD_100074e7_caseD_1;
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
              goto switchD_100074e7_caseD_2;
            case 3:
              goto switchD_100074e7_caseD_3;
            }
            goto switchD_100074e7_caseD_1;
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
switchD_100074e7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100074e7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100074e7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100074e7_caseD_0:
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
        goto switchD_10007365_caseD_2;
      case 3:
        goto switchD_10007365_caseD_3;
      }
      goto switchD_10007365_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007365_caseD_0;
    case 1:
      goto switchD_10007365_caseD_1;
    case 2:
      goto switchD_10007365_caseD_2;
    case 3:
      goto switchD_10007365_caseD_3;
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
            goto switchD_10007365_caseD_2;
          case 3:
            goto switchD_10007365_caseD_3;
          }
          goto switchD_10007365_caseD_1;
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
            goto switchD_10007365_caseD_2;
          case 3:
            goto switchD_10007365_caseD_3;
          }
          goto switchD_10007365_caseD_1;
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
            goto switchD_10007365_caseD_2;
          case 3:
            goto switchD_10007365_caseD_3;
          }
          goto switchD_10007365_caseD_1;
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
switchD_10007365_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007365_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007365_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007365_caseD_0:
  return param_1;
}



// Function: FUN_10007665 @ 0x10007665

undefined4 __cdecl FUN_10007665(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_1000543d((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_1000548f((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// Function: __fclose_lk @ 0x10007696

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10006e04((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_10007acf(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_100058ad(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// Function: FUN_100076e2 @ 0x100076e2

undefined4 __cdecl FUN_100076e2(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1000d7e0 <= param_1) {
LAB_10007763:
    pDVar3 = FUN_10006c01();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1000d6e0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10007763;
  FUN_10006cd4(param_1);
  if ((*(byte *)((&DAT_1000d6e0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10006c92(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10007758;
    pDVar3 = FUN_10006c0a();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10006c01();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10007758:
  FUN_10006d33(param_1);
  return uVar5;
}



// Function: FUN_10007810 @ 0x10007810

int __cdecl FUN_10007810(byte *param_1,byte *param_2)

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



// Function: _strncmp @ 0x10007850

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



// Function: FUN_10007890 @ 0x10007890

byte * __cdecl FUN_10007890(byte *param_1,byte *param_2)

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



// Function: __global_unwind2 @ 0x100078cc

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100078e4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000790e

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
  puStack_18 = &LAB_100078ec;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100079a2();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_100079a2 @ 0x100079a2

void FUN_100079a2(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000b8c8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000b8c4 = in_EAX;
  DAT_1000b8cc = unaff_EBP;
  return;
}



// Function: FUN_10007a81 @ 0x10007a81

void FUN_10007a81(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10007aa0 @ 0x10007aa0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10007aa0(void)

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



// Function: FUN_10007acf @ 0x10007acf

undefined4 __cdecl FUN_10007acf(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000d7e0) &&
     ((*(byte *)((&DAT_1000d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10006cd4(param_1);
    uVar1 = FUN_10007b2c(param_1);
    FUN_10006d33(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10006c01();
  *pDVar2 = 9;
  pDVar2 = FUN_10006c0a();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10007b2c @ 0x10007b2c

undefined4 __cdecl FUN_10007b2c(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10006c92(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10006c92(2);
      iVar2 = FUN_10006c92(1);
      if (iVar2 == iVar1) goto LAB_10007b7a;
    }
    hObject = (HANDLE)FUN_10006c92(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10007b7c;
    }
  }
LAB_10007b7a:
  DVar4 = 0;
LAB_10007b7c:
  FUN_10006c13(param_1);
  *(undefined1 *)((&DAT_1000d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10006b8e(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: __freebuf @ 0x10007baf

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_100058ad(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Function: FUN_10007be0 @ 0x10007be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10007be0(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1000c454;
  if (DAT_1000c2ec == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_10007c2e;
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
LAB_10007c2e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000c454 = _DAT_1000c454 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000c450;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000c454 = iVar2;
      FUN_100057aa(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_10007c8f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10007e26(this,uVar8);
      uVar7 = FUN_10007e26(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_10007c8f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000c454 = _DAT_1000c454 + -1;
      UNLOCK();
    }
    else {
      FUN_1000580b(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10007cb0 @ 0x10007cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10007cb0(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1000c454;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000c2ec == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_10007d0f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10007d0f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000c454 = _DAT_1000c454 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000c450;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000c454 = iVar2;
        FUN_100057aa(0x13);
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
        uVar7 = FUN_10007e26(param_3,uVar7);
        uVar5 = FUN_10007e26(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10007d85;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10007d85:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000c454 = _DAT_1000c454 + -1;
        UNLOCK();
      }
      else {
        FUN_1000580b(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_10007db1 @ 0x10007db1

uint __thiscall FUN_10007db1(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000b1c8 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000b1c8[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_100071e2(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10007e26 @ 0x10007e26

uint __thiscall FUN_10007e26(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000c2ec == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000b8b4 < 2) {
        uVar2 = (byte)PTR_DAT_1000b1c8[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10007db1(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000b1c8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10006f93(DAT_1000c2ec,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



