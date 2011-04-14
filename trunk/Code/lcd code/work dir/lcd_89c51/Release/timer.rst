                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.0 #4309 (Jul 28 2006)
                              4 ; This file generated Wed Apr 13 23:54:04 2011
                              5 ;--------------------------------------------------------
                              6 	.module timer
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _TF1
                             13 	.globl _TR1
                             14 	.globl _TF0
                             15 	.globl _TR0
                             16 	.globl _IE1
                             17 	.globl _IT1
                             18 	.globl _IE0
                             19 	.globl _IT0
                             20 	.globl _SM0
                             21 	.globl _SM1
                             22 	.globl _SM2
                             23 	.globl _REN
                             24 	.globl _TB8
                             25 	.globl _RB8
                             26 	.globl _TI
                             27 	.globl _RI
                             28 	.globl _CY
                             29 	.globl _AC
                             30 	.globl _F0
                             31 	.globl _RS1
                             32 	.globl _RS0
                             33 	.globl _OV
                             34 	.globl _F1
                             35 	.globl _P
                             36 	.globl _RD
                             37 	.globl _WR
                             38 	.globl _T1
                             39 	.globl _T0
                             40 	.globl _INT1
                             41 	.globl _INT0
                             42 	.globl _TXD0
                             43 	.globl _TXD
                             44 	.globl _RXD0
                             45 	.globl _RXD
                             46 	.globl _P3_7
                             47 	.globl _P3_6
                             48 	.globl _P3_5
                             49 	.globl _P3_4
                             50 	.globl _P3_3
                             51 	.globl _P3_2
                             52 	.globl _P3_1
                             53 	.globl _P3_0
                             54 	.globl _P2_7
                             55 	.globl _P2_6
                             56 	.globl _P2_5
                             57 	.globl _P2_4
                             58 	.globl _P2_3
                             59 	.globl _P2_2
                             60 	.globl _P2_1
                             61 	.globl _P2_0
                             62 	.globl _P1_7
                             63 	.globl _P1_6
                             64 	.globl _P1_5
                             65 	.globl _P1_4
                             66 	.globl _P1_3
                             67 	.globl _P1_2
                             68 	.globl _P1_1
                             69 	.globl _P1_0
                             70 	.globl _P0_7
                             71 	.globl _P0_6
                             72 	.globl _P0_5
                             73 	.globl _P0_4
                             74 	.globl _P0_3
                             75 	.globl _P0_2
                             76 	.globl _P0_1
                             77 	.globl _P0_0
                             78 	.globl _PS
                             79 	.globl _PT1
                             80 	.globl _PX1
                             81 	.globl _PT0
                             82 	.globl _PX0
                             83 	.globl _EA
                             84 	.globl _ES
                             85 	.globl _ET1
                             86 	.globl _EX1
                             87 	.globl _ET0
                             88 	.globl _EX0
                             89 	.globl _BREG_F7
                             90 	.globl _BREG_F6
                             91 	.globl _BREG_F5
                             92 	.globl _BREG_F4
                             93 	.globl _BREG_F3
                             94 	.globl _BREG_F2
                             95 	.globl _BREG_F1
                             96 	.globl _BREG_F0
                             97 	.globl _P5_7
                             98 	.globl _P5_6
                             99 	.globl _P5_5
                            100 	.globl _P5_4
                            101 	.globl _P5_3
                            102 	.globl _P5_2
                            103 	.globl _P5_1
                            104 	.globl _P5_0
                            105 	.globl _P4_7
                            106 	.globl _P4_6
                            107 	.globl _P4_5
                            108 	.globl _P4_4
                            109 	.globl _P4_3
                            110 	.globl _P4_2
                            111 	.globl _P4_1
                            112 	.globl _P4_0
                            113 	.globl _PX0L
                            114 	.globl _PT0L
                            115 	.globl _PX1L
                            116 	.globl _PT1L
                            117 	.globl _PLS
                            118 	.globl _PT2L
                            119 	.globl _PPCL
                            120 	.globl _EC
                            121 	.globl _CCF0
                            122 	.globl _CCF1
                            123 	.globl _CCF2
                            124 	.globl _CCF3
                            125 	.globl _CCF4
                            126 	.globl _CR
                            127 	.globl _CF
                            128 	.globl _TF2
                            129 	.globl _EXF2
                            130 	.globl _RCLK
                            131 	.globl _TCLK
                            132 	.globl _EXEN2
                            133 	.globl _TR2
                            134 	.globl _C_T2
                            135 	.globl _CP_RL2
                            136 	.globl _T2CON_7
                            137 	.globl _T2CON_6
                            138 	.globl _T2CON_5
                            139 	.globl _T2CON_4
                            140 	.globl _T2CON_3
                            141 	.globl _T2CON_2
                            142 	.globl _T2CON_1
                            143 	.globl _T2CON_0
                            144 	.globl _PT2
                            145 	.globl _ET2
                            146 	.globl _TMOD
                            147 	.globl _TL1
                            148 	.globl _TL0
                            149 	.globl _TH1
                            150 	.globl _TH0
                            151 	.globl _TCON
                            152 	.globl _SP
                            153 	.globl _SCON
                            154 	.globl _SBUF0
                            155 	.globl _SBUF
                            156 	.globl _PSW
                            157 	.globl _PCON
                            158 	.globl _P3
                            159 	.globl _P2
                            160 	.globl _P1
                            161 	.globl _P0
                            162 	.globl _IP
                            163 	.globl _IE
                            164 	.globl _DP0L
                            165 	.globl _DPL
                            166 	.globl _DP0H
                            167 	.globl _DPH
                            168 	.globl _B
                            169 	.globl _ACC
                            170 	.globl _EECON
                            171 	.globl _KBF
                            172 	.globl _KBE
                            173 	.globl _KBLS
                            174 	.globl _BRL
                            175 	.globl _BDRCON
                            176 	.globl _T2MOD
                            177 	.globl _SPDAT
                            178 	.globl _SPSTA
                            179 	.globl _SPCON
                            180 	.globl _SADEN
                            181 	.globl _SADDR
                            182 	.globl _WDTPRG
                            183 	.globl _WDTRST
                            184 	.globl _P5
                            185 	.globl _P4
                            186 	.globl _IPH1
                            187 	.globl _IPL1
                            188 	.globl _IPH0
                            189 	.globl _IPL0
                            190 	.globl _IEN1
                            191 	.globl _IEN0
                            192 	.globl _CMOD
                            193 	.globl _CL
                            194 	.globl _CH
                            195 	.globl _CCON
                            196 	.globl _CCAPM4
                            197 	.globl _CCAPM3
                            198 	.globl _CCAPM2
                            199 	.globl _CCAPM1
                            200 	.globl _CCAPM0
                            201 	.globl _CCAP4L
                            202 	.globl _CCAP3L
                            203 	.globl _CCAP2L
                            204 	.globl _CCAP1L
                            205 	.globl _CCAP0L
                            206 	.globl _CCAP4H
                            207 	.globl _CCAP3H
                            208 	.globl _CCAP2H
                            209 	.globl _CCAP1H
                            210 	.globl _CCAP0H
                            211 	.globl _CKCKON1
                            212 	.globl _CKCKON0
                            213 	.globl _CKRL
                            214 	.globl _AUXR1
                            215 	.globl _AUXR
                            216 	.globl _TH2
                            217 	.globl _TL2
                            218 	.globl _RCAP2H
                            219 	.globl _RCAP2L
                            220 	.globl _T2CON
                            221 	.globl _hb_count
                            222 	.globl _timer_init
                            223 	.globl _HB_ISR
                            224 ;--------------------------------------------------------
                            225 ; special function registers
                            226 ;--------------------------------------------------------
                            227 	.area RSEG    (DATA)
                    00C8    228 _T2CON	=	0x00c8
                    00CA    229 _RCAP2L	=	0x00ca
                    00CB    230 _RCAP2H	=	0x00cb
                    00CC    231 _TL2	=	0x00cc
                    00CD    232 _TH2	=	0x00cd
                    008E    233 _AUXR	=	0x008e
                    00A2    234 _AUXR1	=	0x00a2
                    0097    235 _CKRL	=	0x0097
                    008F    236 _CKCKON0	=	0x008f
                    008F    237 _CKCKON1	=	0x008f
                    00FA    238 _CCAP0H	=	0x00fa
                    00FB    239 _CCAP1H	=	0x00fb
                    00FC    240 _CCAP2H	=	0x00fc
                    00FD    241 _CCAP3H	=	0x00fd
                    00FE    242 _CCAP4H	=	0x00fe
                    00EA    243 _CCAP0L	=	0x00ea
                    00EB    244 _CCAP1L	=	0x00eb
                    00EC    245 _CCAP2L	=	0x00ec
                    00ED    246 _CCAP3L	=	0x00ed
                    00EE    247 _CCAP4L	=	0x00ee
                    00DA    248 _CCAPM0	=	0x00da
                    00DB    249 _CCAPM1	=	0x00db
                    00DC    250 _CCAPM2	=	0x00dc
                    00DD    251 _CCAPM3	=	0x00dd
                    00DE    252 _CCAPM4	=	0x00de
                    00D8    253 _CCON	=	0x00d8
                    00F9    254 _CH	=	0x00f9
                    00E9    255 _CL	=	0x00e9
                    00D9    256 _CMOD	=	0x00d9
                    00A8    257 _IEN0	=	0x00a8
                    00B1    258 _IEN1	=	0x00b1
                    00B8    259 _IPL0	=	0x00b8
                    00B7    260 _IPH0	=	0x00b7
                    00B2    261 _IPL1	=	0x00b2
                    00B3    262 _IPH1	=	0x00b3
                    00C0    263 _P4	=	0x00c0
                    00D8    264 _P5	=	0x00d8
                    00A6    265 _WDTRST	=	0x00a6
                    00A7    266 _WDTPRG	=	0x00a7
                    00A9    267 _SADDR	=	0x00a9
                    00B9    268 _SADEN	=	0x00b9
                    00C3    269 _SPCON	=	0x00c3
                    00C4    270 _SPSTA	=	0x00c4
                    00C5    271 _SPDAT	=	0x00c5
                    00C9    272 _T2MOD	=	0x00c9
                    009B    273 _BDRCON	=	0x009b
                    009A    274 _BRL	=	0x009a
                    009C    275 _KBLS	=	0x009c
                    009D    276 _KBE	=	0x009d
                    009E    277 _KBF	=	0x009e
                    00D2    278 _EECON	=	0x00d2
                    00E0    279 _ACC	=	0x00e0
                    00F0    280 _B	=	0x00f0
                    0083    281 _DPH	=	0x0083
                    0083    282 _DP0H	=	0x0083
                    0082    283 _DPL	=	0x0082
                    0082    284 _DP0L	=	0x0082
                    00A8    285 _IE	=	0x00a8
                    00B8    286 _IP	=	0x00b8
                    0080    287 _P0	=	0x0080
                    0090    288 _P1	=	0x0090
                    00A0    289 _P2	=	0x00a0
                    00B0    290 _P3	=	0x00b0
                    0087    291 _PCON	=	0x0087
                    00D0    292 _PSW	=	0x00d0
                    0099    293 _SBUF	=	0x0099
                    0099    294 _SBUF0	=	0x0099
                    0098    295 _SCON	=	0x0098
                    0081    296 _SP	=	0x0081
                    0088    297 _TCON	=	0x0088
                    008C    298 _TH0	=	0x008c
                    008D    299 _TH1	=	0x008d
                    008A    300 _TL0	=	0x008a
                    008B    301 _TL1	=	0x008b
                    0089    302 _TMOD	=	0x0089
                            303 ;--------------------------------------------------------
                            304 ; special function bits
                            305 ;--------------------------------------------------------
                            306 	.area RSEG    (DATA)
                    00AD    307 _ET2	=	0x00ad
                    00BD    308 _PT2	=	0x00bd
                    00C8    309 _T2CON_0	=	0x00c8
                    00C9    310 _T2CON_1	=	0x00c9
                    00CA    311 _T2CON_2	=	0x00ca
                    00CB    312 _T2CON_3	=	0x00cb
                    00CC    313 _T2CON_4	=	0x00cc
                    00CD    314 _T2CON_5	=	0x00cd
                    00CE    315 _T2CON_6	=	0x00ce
                    00CF    316 _T2CON_7	=	0x00cf
                    00C8    317 _CP_RL2	=	0x00c8
                    00C9    318 _C_T2	=	0x00c9
                    00CA    319 _TR2	=	0x00ca
                    00CB    320 _EXEN2	=	0x00cb
                    00CC    321 _TCLK	=	0x00cc
                    00CD    322 _RCLK	=	0x00cd
                    00CE    323 _EXF2	=	0x00ce
                    00CF    324 _TF2	=	0x00cf
                    00DF    325 _CF	=	0x00df
                    00DE    326 _CR	=	0x00de
                    00DC    327 _CCF4	=	0x00dc
                    00DB    328 _CCF3	=	0x00db
                    00DA    329 _CCF2	=	0x00da
                    00D9    330 _CCF1	=	0x00d9
                    00D8    331 _CCF0	=	0x00d8
                    00AE    332 _EC	=	0x00ae
                    00BE    333 _PPCL	=	0x00be
                    00BD    334 _PT2L	=	0x00bd
                    00BC    335 _PLS	=	0x00bc
                    00BB    336 _PT1L	=	0x00bb
                    00BA    337 _PX1L	=	0x00ba
                    00B9    338 _PT0L	=	0x00b9
                    00B8    339 _PX0L	=	0x00b8
                    00C0    340 _P4_0	=	0x00c0
                    00C1    341 _P4_1	=	0x00c1
                    00C2    342 _P4_2	=	0x00c2
                    00C3    343 _P4_3	=	0x00c3
                    00C4    344 _P4_4	=	0x00c4
                    00C5    345 _P4_5	=	0x00c5
                    00C6    346 _P4_6	=	0x00c6
                    00C7    347 _P4_7	=	0x00c7
                    00D8    348 _P5_0	=	0x00d8
                    00D9    349 _P5_1	=	0x00d9
                    00DA    350 _P5_2	=	0x00da
                    00DB    351 _P5_3	=	0x00db
                    00DC    352 _P5_4	=	0x00dc
                    00DD    353 _P5_5	=	0x00dd
                    00DE    354 _P5_6	=	0x00de
                    00DF    355 _P5_7	=	0x00df
                    00F0    356 _BREG_F0	=	0x00f0
                    00F1    357 _BREG_F1	=	0x00f1
                    00F2    358 _BREG_F2	=	0x00f2
                    00F3    359 _BREG_F3	=	0x00f3
                    00F4    360 _BREG_F4	=	0x00f4
                    00F5    361 _BREG_F5	=	0x00f5
                    00F6    362 _BREG_F6	=	0x00f6
                    00F7    363 _BREG_F7	=	0x00f7
                    00A8    364 _EX0	=	0x00a8
                    00A9    365 _ET0	=	0x00a9
                    00AA    366 _EX1	=	0x00aa
                    00AB    367 _ET1	=	0x00ab
                    00AC    368 _ES	=	0x00ac
                    00AF    369 _EA	=	0x00af
                    00B8    370 _PX0	=	0x00b8
                    00B9    371 _PT0	=	0x00b9
                    00BA    372 _PX1	=	0x00ba
                    00BB    373 _PT1	=	0x00bb
                    00BC    374 _PS	=	0x00bc
                    0080    375 _P0_0	=	0x0080
                    0081    376 _P0_1	=	0x0081
                    0082    377 _P0_2	=	0x0082
                    0083    378 _P0_3	=	0x0083
                    0084    379 _P0_4	=	0x0084
                    0085    380 _P0_5	=	0x0085
                    0086    381 _P0_6	=	0x0086
                    0087    382 _P0_7	=	0x0087
                    0090    383 _P1_0	=	0x0090
                    0091    384 _P1_1	=	0x0091
                    0092    385 _P1_2	=	0x0092
                    0093    386 _P1_3	=	0x0093
                    0094    387 _P1_4	=	0x0094
                    0095    388 _P1_5	=	0x0095
                    0096    389 _P1_6	=	0x0096
                    0097    390 _P1_7	=	0x0097
                    00A0    391 _P2_0	=	0x00a0
                    00A1    392 _P2_1	=	0x00a1
                    00A2    393 _P2_2	=	0x00a2
                    00A3    394 _P2_3	=	0x00a3
                    00A4    395 _P2_4	=	0x00a4
                    00A5    396 _P2_5	=	0x00a5
                    00A6    397 _P2_6	=	0x00a6
                    00A7    398 _P2_7	=	0x00a7
                    00B0    399 _P3_0	=	0x00b0
                    00B1    400 _P3_1	=	0x00b1
                    00B2    401 _P3_2	=	0x00b2
                    00B3    402 _P3_3	=	0x00b3
                    00B4    403 _P3_4	=	0x00b4
                    00B5    404 _P3_5	=	0x00b5
                    00B6    405 _P3_6	=	0x00b6
                    00B7    406 _P3_7	=	0x00b7
                    00B0    407 _RXD	=	0x00b0
                    00B0    408 _RXD0	=	0x00b0
                    00B1    409 _TXD	=	0x00b1
                    00B1    410 _TXD0	=	0x00b1
                    00B2    411 _INT0	=	0x00b2
                    00B3    412 _INT1	=	0x00b3
                    00B4    413 _T0	=	0x00b4
                    00B5    414 _T1	=	0x00b5
                    00B6    415 _WR	=	0x00b6
                    00B7    416 _RD	=	0x00b7
                    00D0    417 _P	=	0x00d0
                    00D1    418 _F1	=	0x00d1
                    00D2    419 _OV	=	0x00d2
                    00D3    420 _RS0	=	0x00d3
                    00D4    421 _RS1	=	0x00d4
                    00D5    422 _F0	=	0x00d5
                    00D6    423 _AC	=	0x00d6
                    00D7    424 _CY	=	0x00d7
                    0098    425 _RI	=	0x0098
                    0099    426 _TI	=	0x0099
                    009A    427 _RB8	=	0x009a
                    009B    428 _TB8	=	0x009b
                    009C    429 _REN	=	0x009c
                    009D    430 _SM2	=	0x009d
                    009E    431 _SM1	=	0x009e
                    009F    432 _SM0	=	0x009f
                    0088    433 _IT0	=	0x0088
                    0089    434 _IE0	=	0x0089
                    008A    435 _IT1	=	0x008a
                    008B    436 _IE1	=	0x008b
                    008C    437 _TR0	=	0x008c
                    008D    438 _TF0	=	0x008d
                    008E    439 _TR1	=	0x008e
                    008F    440 _TF1	=	0x008f
                            441 ;--------------------------------------------------------
                            442 ; overlayable register banks
                            443 ;--------------------------------------------------------
                            444 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     445 	.ds 8
                            446 ;--------------------------------------------------------
                            447 ; internal ram data
                            448 ;--------------------------------------------------------
                            449 	.area DSEG    (DATA)
                            450 ;--------------------------------------------------------
                            451 ; overlayable items in internal ram 
                            452 ;--------------------------------------------------------
                            453 	.area OSEG    (OVR,DATA)
                            454 ;--------------------------------------------------------
                            455 ; indirectly addressable internal ram data
                            456 ;--------------------------------------------------------
                            457 	.area ISEG    (DATA)
                            458 ;--------------------------------------------------------
                            459 ; bit data
                            460 ;--------------------------------------------------------
                            461 	.area BSEG    (BIT)
                            462 ;--------------------------------------------------------
                            463 ; paged external ram data
                            464 ;--------------------------------------------------------
                            465 	.area PSEG    (PAG,XDATA)
                            466 ;--------------------------------------------------------
                            467 ; external ram data
                            468 ;--------------------------------------------------------
                            469 	.area XSEG    (XDATA)
                            470 ;--------------------------------------------------------
                            471 ; external initialized ram data
                            472 ;--------------------------------------------------------
                            473 	.area XISEG   (XDATA)
   003C                     474 _hb_count::
   003C                     475 	.ds 1
                            476 	.area HOME    (CODE)
                            477 	.area GSINIT0 (CODE)
                            478 	.area GSINIT1 (CODE)
                            479 	.area GSINIT2 (CODE)
                            480 	.area GSINIT3 (CODE)
                            481 	.area GSINIT4 (CODE)
                            482 	.area GSINIT5 (CODE)
                            483 	.area GSINIT  (CODE)
                            484 	.area GSFINAL (CODE)
                            485 	.area CSEG    (CODE)
                            486 ;--------------------------------------------------------
                            487 ; global & static initialisations
                            488 ;--------------------------------------------------------
                            489 	.area HOME    (CODE)
                            490 	.area GSINIT  (CODE)
                            491 	.area GSFINAL (CODE)
                            492 	.area GSINIT  (CODE)
                            493 ;--------------------------------------------------------
                            494 ; Home
                            495 ;--------------------------------------------------------
                            496 	.area HOME    (CODE)
                            497 	.area CSEG    (CODE)
                            498 ;--------------------------------------------------------
                            499 ; code
                            500 ;--------------------------------------------------------
                            501 	.area CSEG    (CODE)
                            502 ;------------------------------------------------------------
                            503 ;Allocation info for local variables in function 'timer_init'
                            504 ;------------------------------------------------------------
                            505 ;------------------------------------------------------------
                            506 ;	../timer.c:18: void timer_init(void)
                            507 ;	-----------------------------------------
                            508 ;	 function timer_init
                            509 ;	-----------------------------------------
   007A                     510 _timer_init:
                    0002    511 	ar2 = 0x02
                    0003    512 	ar3 = 0x03
                    0004    513 	ar4 = 0x04
                    0005    514 	ar5 = 0x05
                    0006    515 	ar6 = 0x06
                    0007    516 	ar7 = 0x07
                    0000    517 	ar0 = 0x00
                    0001    518 	ar1 = 0x01
                            519 ;	../timer.c:21: IE=0x00;									//Disable Interrupts 
                            520 ;	genAssign
   007A 75 A8 00            521 	mov	_IE,#0x00
                            522 ;	../timer.c:22: ET1 = TRUE;
                            523 ;	genAssign
   007D D2 AB               524 	setb	_ET1
                            525 ;	../timer.c:24: TMOD = TMOD | 0x10;
                            526 ;	genOr
   007F 43 89 10            527 	orl	_TMOD,#0x10
                            528 ;	../timer.c:25: TF1=FALSE;
                            529 ;	genAssign
   0082 C2 8F               530 	clr	_TF1
                            531 ;	../timer.c:27: TH1 = 0xE0;									//10ms delay
                            532 ;	genAssign
   0084 75 8D E0            533 	mov	_TH1,#0xE0
                            534 ;	../timer.c:28: TL1 = 0x50;
                            535 ;	genAssign
   0087 75 8B 50            536 	mov	_TL1,#0x50
                            537 ;	../timer.c:29: TR1=TRUE;
                            538 ;	genAssign
   008A D2 8E               539 	setb	_TR1
                            540 ;	../timer.c:30: HEART_BEAT = FALSE;
                            541 ;	genAssign
   008C C2 97               542 	clr	_P1_7
                            543 ;	Peephole 300	removed redundant label 00101$
   008E 22                  544 	ret
                            545 ;------------------------------------------------------------
                            546 ;Allocation info for local variables in function 'HB_ISR'
                            547 ;------------------------------------------------------------
                            548 ;------------------------------------------------------------
                            549 ;	../timer.c:40: void HB_ISR(void)
                            550 ;	-----------------------------------------
                            551 ;	 function HB_ISR
                            552 ;	-----------------------------------------
   008F                     553 _HB_ISR:
                            554 ;	../timer.c:43: hb_count++;
                            555 ;	genAssign
   008F 90 00 3C            556 	mov	dptr,#_hb_count
   0092 E0                  557 	movx	a,@dptr
   0093 FA                  558 	mov	r2,a
                            559 ;	genPlus
   0094 90 00 3C            560 	mov	dptr,#_hb_count
                            561 ;     genPlusIncr
   0097 74 01               562 	mov	a,#0x01
                            563 ;	Peephole 236.a	used r2 instead of ar2
   0099 2A                  564 	add	a,r2
   009A F0                  565 	movx	@dptr,a
                            566 ;	../timer.c:45: if(hb_count ==0x17)				//blink HB on every 500mSec
                            567 ;	genAssign
   009B 90 00 3C            568 	mov	dptr,#_hb_count
   009E E0                  569 	movx	a,@dptr
   009F FA                  570 	mov	r2,a
                            571 ;	genCmpEq
                            572 ;	gencjneshort
                            573 ;	Peephole 112.b	changed ljmp to sjmp
                            574 ;	Peephole 198.b	optimized misc jump sequence
   00A0 BA 17 04            575 	cjne	r2,#0x17,00104$
                            576 ;	Peephole 200.b	removed redundant sjmp
                            577 ;	Peephole 300	removed redundant label 00110$
                            578 ;	Peephole 300	removed redundant label 00111$
                            579 ;	../timer.c:46: P1_7 = FALSE;	
                            580 ;	genAssign
   00A3 C2 97               581 	clr	_P1_7
                            582 ;	Peephole 112.b	changed ljmp to sjmp
   00A5 80 0A               583 	sjmp	00105$
   00A7                     584 00104$:
                            585 ;	../timer.c:47: else if(hb_count ==0x2E)
                            586 ;	genCmpEq
                            587 ;	gencjneshort
                            588 ;	Peephole 112.b	changed ljmp to sjmp
                            589 ;	Peephole 198.b	optimized misc jump sequence
   00A7 BA 2E 07            590 	cjne	r2,#0x2E,00105$
                            591 ;	Peephole 200.b	removed redundant sjmp
                            592 ;	Peephole 300	removed redundant label 00112$
                            593 ;	Peephole 300	removed redundant label 00113$
                            594 ;	../timer.c:49: P1_7 = TRUE;	
                            595 ;	genAssign
   00AA D2 97               596 	setb	_P1_7
                            597 ;	../timer.c:50: hb_count = 0;
                            598 ;	genAssign
   00AC 90 00 3C            599 	mov	dptr,#_hb_count
                            600 ;	Peephole 181	changed mov to clr
   00AF E4                  601 	clr	a
   00B0 F0                  602 	movx	@dptr,a
   00B1                     603 00105$:
                            604 ;	../timer.c:53: TH1 = 0xE0;						//Reload Timer
                            605 ;	genAssign
   00B1 75 8D E0            606 	mov	_TH1,#0xE0
                            607 ;	../timer.c:54: TL1 = 0x50;
                            608 ;	genAssign
   00B4 75 8B 50            609 	mov	_TL1,#0x50
                            610 ;	../timer.c:56: TR1=1;                          //Start timer
                            611 ;	genAssign
   00B7 D2 8E               612 	setb	_TR1
                            613 ;	Peephole 300	removed redundant label 00106$
   00B9 22                  614 	ret
                            615 	.area CSEG    (CODE)
                            616 	.area CONST   (CODE)
                            617 	.area XINIT   (CODE)
   0F27                     618 __xinit__hb_count:
   0F27 00                  619 	.db #0x00
