                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.0 #4309 (Jul 28 2006)
                              4 ; This file generated Wed Apr 13 23:54:05 2011
                              5 ;--------------------------------------------------------
                              6 	.module serial
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
                            221 	.globl _print_welcome_msg
                            222 	.globl _serial_init
                            223 	.globl _putchar
                            224 	.globl _getchar
                            225 	.globl _putstr
                            226 	.globl _clear_screen
                            227 ;--------------------------------------------------------
                            228 ; special function registers
                            229 ;--------------------------------------------------------
                            230 	.area RSEG    (DATA)
                    00C8    231 _T2CON	=	0x00c8
                    00CA    232 _RCAP2L	=	0x00ca
                    00CB    233 _RCAP2H	=	0x00cb
                    00CC    234 _TL2	=	0x00cc
                    00CD    235 _TH2	=	0x00cd
                    008E    236 _AUXR	=	0x008e
                    00A2    237 _AUXR1	=	0x00a2
                    0097    238 _CKRL	=	0x0097
                    008F    239 _CKCKON0	=	0x008f
                    008F    240 _CKCKON1	=	0x008f
                    00FA    241 _CCAP0H	=	0x00fa
                    00FB    242 _CCAP1H	=	0x00fb
                    00FC    243 _CCAP2H	=	0x00fc
                    00FD    244 _CCAP3H	=	0x00fd
                    00FE    245 _CCAP4H	=	0x00fe
                    00EA    246 _CCAP0L	=	0x00ea
                    00EB    247 _CCAP1L	=	0x00eb
                    00EC    248 _CCAP2L	=	0x00ec
                    00ED    249 _CCAP3L	=	0x00ed
                    00EE    250 _CCAP4L	=	0x00ee
                    00DA    251 _CCAPM0	=	0x00da
                    00DB    252 _CCAPM1	=	0x00db
                    00DC    253 _CCAPM2	=	0x00dc
                    00DD    254 _CCAPM3	=	0x00dd
                    00DE    255 _CCAPM4	=	0x00de
                    00D8    256 _CCON	=	0x00d8
                    00F9    257 _CH	=	0x00f9
                    00E9    258 _CL	=	0x00e9
                    00D9    259 _CMOD	=	0x00d9
                    00A8    260 _IEN0	=	0x00a8
                    00B1    261 _IEN1	=	0x00b1
                    00B8    262 _IPL0	=	0x00b8
                    00B7    263 _IPH0	=	0x00b7
                    00B2    264 _IPL1	=	0x00b2
                    00B3    265 _IPH1	=	0x00b3
                    00C0    266 _P4	=	0x00c0
                    00D8    267 _P5	=	0x00d8
                    00A6    268 _WDTRST	=	0x00a6
                    00A7    269 _WDTPRG	=	0x00a7
                    00A9    270 _SADDR	=	0x00a9
                    00B9    271 _SADEN	=	0x00b9
                    00C3    272 _SPCON	=	0x00c3
                    00C4    273 _SPSTA	=	0x00c4
                    00C5    274 _SPDAT	=	0x00c5
                    00C9    275 _T2MOD	=	0x00c9
                    009B    276 _BDRCON	=	0x009b
                    009A    277 _BRL	=	0x009a
                    009C    278 _KBLS	=	0x009c
                    009D    279 _KBE	=	0x009d
                    009E    280 _KBF	=	0x009e
                    00D2    281 _EECON	=	0x00d2
                    00E0    282 _ACC	=	0x00e0
                    00F0    283 _B	=	0x00f0
                    0083    284 _DPH	=	0x0083
                    0083    285 _DP0H	=	0x0083
                    0082    286 _DPL	=	0x0082
                    0082    287 _DP0L	=	0x0082
                    00A8    288 _IE	=	0x00a8
                    00B8    289 _IP	=	0x00b8
                    0080    290 _P0	=	0x0080
                    0090    291 _P1	=	0x0090
                    00A0    292 _P2	=	0x00a0
                    00B0    293 _P3	=	0x00b0
                    0087    294 _PCON	=	0x0087
                    00D0    295 _PSW	=	0x00d0
                    0099    296 _SBUF	=	0x0099
                    0099    297 _SBUF0	=	0x0099
                    0098    298 _SCON	=	0x0098
                    0081    299 _SP	=	0x0081
                    0088    300 _TCON	=	0x0088
                    008C    301 _TH0	=	0x008c
                    008D    302 _TH1	=	0x008d
                    008A    303 _TL0	=	0x008a
                    008B    304 _TL1	=	0x008b
                    0089    305 _TMOD	=	0x0089
                            306 ;--------------------------------------------------------
                            307 ; special function bits
                            308 ;--------------------------------------------------------
                            309 	.area RSEG    (DATA)
                    00AD    310 _ET2	=	0x00ad
                    00BD    311 _PT2	=	0x00bd
                    00C8    312 _T2CON_0	=	0x00c8
                    00C9    313 _T2CON_1	=	0x00c9
                    00CA    314 _T2CON_2	=	0x00ca
                    00CB    315 _T2CON_3	=	0x00cb
                    00CC    316 _T2CON_4	=	0x00cc
                    00CD    317 _T2CON_5	=	0x00cd
                    00CE    318 _T2CON_6	=	0x00ce
                    00CF    319 _T2CON_7	=	0x00cf
                    00C8    320 _CP_RL2	=	0x00c8
                    00C9    321 _C_T2	=	0x00c9
                    00CA    322 _TR2	=	0x00ca
                    00CB    323 _EXEN2	=	0x00cb
                    00CC    324 _TCLK	=	0x00cc
                    00CD    325 _RCLK	=	0x00cd
                    00CE    326 _EXF2	=	0x00ce
                    00CF    327 _TF2	=	0x00cf
                    00DF    328 _CF	=	0x00df
                    00DE    329 _CR	=	0x00de
                    00DC    330 _CCF4	=	0x00dc
                    00DB    331 _CCF3	=	0x00db
                    00DA    332 _CCF2	=	0x00da
                    00D9    333 _CCF1	=	0x00d9
                    00D8    334 _CCF0	=	0x00d8
                    00AE    335 _EC	=	0x00ae
                    00BE    336 _PPCL	=	0x00be
                    00BD    337 _PT2L	=	0x00bd
                    00BC    338 _PLS	=	0x00bc
                    00BB    339 _PT1L	=	0x00bb
                    00BA    340 _PX1L	=	0x00ba
                    00B9    341 _PT0L	=	0x00b9
                    00B8    342 _PX0L	=	0x00b8
                    00C0    343 _P4_0	=	0x00c0
                    00C1    344 _P4_1	=	0x00c1
                    00C2    345 _P4_2	=	0x00c2
                    00C3    346 _P4_3	=	0x00c3
                    00C4    347 _P4_4	=	0x00c4
                    00C5    348 _P4_5	=	0x00c5
                    00C6    349 _P4_6	=	0x00c6
                    00C7    350 _P4_7	=	0x00c7
                    00D8    351 _P5_0	=	0x00d8
                    00D9    352 _P5_1	=	0x00d9
                    00DA    353 _P5_2	=	0x00da
                    00DB    354 _P5_3	=	0x00db
                    00DC    355 _P5_4	=	0x00dc
                    00DD    356 _P5_5	=	0x00dd
                    00DE    357 _P5_6	=	0x00de
                    00DF    358 _P5_7	=	0x00df
                    00F0    359 _BREG_F0	=	0x00f0
                    00F1    360 _BREG_F1	=	0x00f1
                    00F2    361 _BREG_F2	=	0x00f2
                    00F3    362 _BREG_F3	=	0x00f3
                    00F4    363 _BREG_F4	=	0x00f4
                    00F5    364 _BREG_F5	=	0x00f5
                    00F6    365 _BREG_F6	=	0x00f6
                    00F7    366 _BREG_F7	=	0x00f7
                    00A8    367 _EX0	=	0x00a8
                    00A9    368 _ET0	=	0x00a9
                    00AA    369 _EX1	=	0x00aa
                    00AB    370 _ET1	=	0x00ab
                    00AC    371 _ES	=	0x00ac
                    00AF    372 _EA	=	0x00af
                    00B8    373 _PX0	=	0x00b8
                    00B9    374 _PT0	=	0x00b9
                    00BA    375 _PX1	=	0x00ba
                    00BB    376 _PT1	=	0x00bb
                    00BC    377 _PS	=	0x00bc
                    0080    378 _P0_0	=	0x0080
                    0081    379 _P0_1	=	0x0081
                    0082    380 _P0_2	=	0x0082
                    0083    381 _P0_3	=	0x0083
                    0084    382 _P0_4	=	0x0084
                    0085    383 _P0_5	=	0x0085
                    0086    384 _P0_6	=	0x0086
                    0087    385 _P0_7	=	0x0087
                    0090    386 _P1_0	=	0x0090
                    0091    387 _P1_1	=	0x0091
                    0092    388 _P1_2	=	0x0092
                    0093    389 _P1_3	=	0x0093
                    0094    390 _P1_4	=	0x0094
                    0095    391 _P1_5	=	0x0095
                    0096    392 _P1_6	=	0x0096
                    0097    393 _P1_7	=	0x0097
                    00A0    394 _P2_0	=	0x00a0
                    00A1    395 _P2_1	=	0x00a1
                    00A2    396 _P2_2	=	0x00a2
                    00A3    397 _P2_3	=	0x00a3
                    00A4    398 _P2_4	=	0x00a4
                    00A5    399 _P2_5	=	0x00a5
                    00A6    400 _P2_6	=	0x00a6
                    00A7    401 _P2_7	=	0x00a7
                    00B0    402 _P3_0	=	0x00b0
                    00B1    403 _P3_1	=	0x00b1
                    00B2    404 _P3_2	=	0x00b2
                    00B3    405 _P3_3	=	0x00b3
                    00B4    406 _P3_4	=	0x00b4
                    00B5    407 _P3_5	=	0x00b5
                    00B6    408 _P3_6	=	0x00b6
                    00B7    409 _P3_7	=	0x00b7
                    00B0    410 _RXD	=	0x00b0
                    00B0    411 _RXD0	=	0x00b0
                    00B1    412 _TXD	=	0x00b1
                    00B1    413 _TXD0	=	0x00b1
                    00B2    414 _INT0	=	0x00b2
                    00B3    415 _INT1	=	0x00b3
                    00B4    416 _T0	=	0x00b4
                    00B5    417 _T1	=	0x00b5
                    00B6    418 _WR	=	0x00b6
                    00B7    419 _RD	=	0x00b7
                    00D0    420 _P	=	0x00d0
                    00D1    421 _F1	=	0x00d1
                    00D2    422 _OV	=	0x00d2
                    00D3    423 _RS0	=	0x00d3
                    00D4    424 _RS1	=	0x00d4
                    00D5    425 _F0	=	0x00d5
                    00D6    426 _AC	=	0x00d6
                    00D7    427 _CY	=	0x00d7
                    0098    428 _RI	=	0x0098
                    0099    429 _TI	=	0x0099
                    009A    430 _RB8	=	0x009a
                    009B    431 _TB8	=	0x009b
                    009C    432 _REN	=	0x009c
                    009D    433 _SM2	=	0x009d
                    009E    434 _SM1	=	0x009e
                    009F    435 _SM0	=	0x009f
                    0088    436 _IT0	=	0x0088
                    0089    437 _IE0	=	0x0089
                    008A    438 _IT1	=	0x008a
                    008B    439 _IE1	=	0x008b
                    008C    440 _TR0	=	0x008c
                    008D    441 _TF0	=	0x008d
                    008E    442 _TR1	=	0x008e
                    008F    443 _TF1	=	0x008f
                            444 ;--------------------------------------------------------
                            445 ; overlayable register banks
                            446 ;--------------------------------------------------------
                            447 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     448 	.ds 8
                            449 ;--------------------------------------------------------
                            450 ; internal ram data
                            451 ;--------------------------------------------------------
                            452 	.area DSEG    (DATA)
                            453 ;--------------------------------------------------------
                            454 ; overlayable items in internal ram 
                            455 ;--------------------------------------------------------
                            456 	.area OSEG    (OVR,DATA)
                            457 ;--------------------------------------------------------
                            458 ; indirectly addressable internal ram data
                            459 ;--------------------------------------------------------
                            460 	.area ISEG    (DATA)
                            461 ;--------------------------------------------------------
                            462 ; bit data
                            463 ;--------------------------------------------------------
                            464 	.area BSEG    (BIT)
                            465 ;--------------------------------------------------------
                            466 ; paged external ram data
                            467 ;--------------------------------------------------------
                            468 	.area PSEG    (PAG,XDATA)
                            469 ;--------------------------------------------------------
                            470 ; external ram data
                            471 ;--------------------------------------------------------
                            472 	.area XSEG    (XDATA)
   0000                     473 _serial_init_my_baud_1_1:
   0000                     474 	.ds 1
   0001                     475 _putchar_c_1_1:
   0001                     476 	.ds 1
   0002                     477 _putstr_s_1_1:
   0002                     478 	.ds 3
                            479 ;--------------------------------------------------------
                            480 ; external initialized ram data
                            481 ;--------------------------------------------------------
                            482 	.area XISEG   (XDATA)
                            483 	.area HOME    (CODE)
                            484 	.area GSINIT0 (CODE)
                            485 	.area GSINIT1 (CODE)
                            486 	.area GSINIT2 (CODE)
                            487 	.area GSINIT3 (CODE)
                            488 	.area GSINIT4 (CODE)
                            489 	.area GSINIT5 (CODE)
                            490 	.area GSINIT  (CODE)
                            491 	.area GSFINAL (CODE)
                            492 	.area CSEG    (CODE)
                            493 ;--------------------------------------------------------
                            494 ; global & static initialisations
                            495 ;--------------------------------------------------------
                            496 	.area HOME    (CODE)
                            497 	.area GSINIT  (CODE)
                            498 	.area GSFINAL (CODE)
                            499 	.area GSINIT  (CODE)
                            500 ;--------------------------------------------------------
                            501 ; Home
                            502 ;--------------------------------------------------------
                            503 	.area HOME    (CODE)
                            504 	.area CSEG    (CODE)
                            505 ;--------------------------------------------------------
                            506 ; code
                            507 ;--------------------------------------------------------
                            508 	.area CSEG    (CODE)
                            509 ;------------------------------------------------------------
                            510 ;Allocation info for local variables in function 'print_welcome_msg'
                            511 ;------------------------------------------------------------
                            512 ;------------------------------------------------------------
                            513 ;	../serial.c:12: void print_welcome_msg(void)
                            514 ;	-----------------------------------------
                            515 ;	 function print_welcome_msg
                            516 ;	-----------------------------------------
   00BA                     517 _print_welcome_msg:
                    0002    518 	ar2 = 0x02
                    0003    519 	ar3 = 0x03
                    0004    520 	ar4 = 0x04
                    0005    521 	ar5 = 0x05
                    0006    522 	ar6 = 0x06
                    0007    523 	ar7 = 0x07
                    0000    524 	ar0 = 0x00
                    0001    525 	ar1 = 0x01
                            526 ;	../serial.c:14: printf_tiny("*******************************************************************************\n\r");
                            527 ;	genIpush
   00BA 74 C1               528 	mov	a,#__str_0
   00BC C0 E0               529 	push	acc
   00BE 74 0D               530 	mov	a,#(__str_0 >> 8)
   00C0 C0 E0               531 	push	acc
                            532 ;	genCall
   00C2 12 03 95            533 	lcall	_printf_tiny
   00C5 15 81               534 	dec	sp
   00C7 15 81               535 	dec	sp
                            536 ;	../serial.c:15: printf_tiny("**********     EMBEDDED SYSTEMS DESIGN : SPRING 2011 : LAB NO. 4     **********\n\r");
                            537 ;	genIpush
   00C9 74 13               538 	mov	a,#__str_1
   00CB C0 E0               539 	push	acc
   00CD 74 0E               540 	mov	a,#(__str_1 >> 8)
   00CF C0 E0               541 	push	acc
                            542 ;	genCall
   00D1 12 03 95            543 	lcall	_printf_tiny
   00D4 15 81               544 	dec	sp
   00D6 15 81               545 	dec	sp
                            546 ;	../serial.c:16: printf_tiny("**********     Created by :Maulik Kapuria                            **********\n\r");
                            547 ;	genIpush
   00D8 74 65               548 	mov	a,#__str_2
   00DA C0 E0               549 	push	acc
   00DC 74 0E               550 	mov	a,#(__str_2 >> 8)
   00DE C0 E0               551 	push	acc
                            552 ;	genCall
   00E0 12 03 95            553 	lcall	_printf_tiny
   00E3 15 81               554 	dec	sp
   00E5 15 81               555 	dec	sp
                            556 ;	../serial.c:17: printf_tiny("**********     Bit Banged I2C program                                **********\n\r");
                            557 ;	genIpush
   00E7 74 B7               558 	mov	a,#__str_3
   00E9 C0 E0               559 	push	acc
   00EB 74 0E               560 	mov	a,#(__str_3 >> 8)
   00ED C0 E0               561 	push	acc
                            562 ;	genCall
   00EF 12 03 95            563 	lcall	_printf_tiny
   00F2 15 81               564 	dec	sp
   00F4 15 81               565 	dec	sp
                            566 ;	Peephole 300	removed redundant label 00101$
   00F6 22                  567 	ret
                            568 ;------------------------------------------------------------
                            569 ;Allocation info for local variables in function 'serial_init'
                            570 ;------------------------------------------------------------
                            571 ;my_baud                   Allocated with name '_serial_init_my_baud_1_1'
                            572 ;------------------------------------------------------------
                            573 ;	../serial.c:31: void serial_init(unsigned char my_baud)
                            574 ;	-----------------------------------------
                            575 ;	 function serial_init
                            576 ;	-----------------------------------------
   00F7                     577 _serial_init:
                            578 ;	genReceive
   00F7 E5 82               579 	mov	a,dpl
   00F9 90 00 00            580 	mov	dptr,#_serial_init_my_baud_1_1
   00FC F0                  581 	movx	@dptr,a
                            582 ;	../serial.c:33: PCON |= 0x80;					/*SMOD1 = 1*/
                            583 ;	genOr
   00FD 43 87 80            584 	orl	_PCON,#0x80
                            585 ;	../serial.c:34: SCON = 0x50;					  /* uart in mode 1 (8 bit), REN=1 */
                            586 ;	genAssign
   0100 75 98 50            587 	mov	_SCON,#0x50
                            588 ;	../serial.c:35: BDRCON &=0xEC;               /* BRR=0; SRC=0; */
                            589 ;	genAnd
   0103 53 9B EC            590 	anl	_BDRCON,#0xEC
                            591 ;	../serial.c:36: BDRCON |=0x0E;               /* TBCK=1;RBCK=1; SPD=1 */
                            592 ;	genOr
   0106 43 9B 0E            593 	orl	_BDRCON,#0x0E
                            594 ;	../serial.c:37: BRL=my_baud;                    /* 115200 Bds at 11.059MHz */
                            595 ;	genAssign
   0109 90 00 00            596 	mov	dptr,#_serial_init_my_baud_1_1
   010C E0                  597 	movx	a,@dptr
   010D F5 9A               598 	mov	_BRL,a
                            599 ;	../serial.c:38: EA = 1; 						     /* Enable serial interrupt	*/
                            600 ;	genAssign
   010F D2 AF               601 	setb	_EA
                            602 ;	../serial.c:39: BDRCON |=0x10;               /* Baud rate generator run*/
                            603 ;	genOr
   0111 43 9B 10            604 	orl	_BDRCON,#0x10
                            605 ;	Peephole 300	removed redundant label 00101$
   0114 22                  606 	ret
                            607 ;------------------------------------------------------------
                            608 ;Allocation info for local variables in function 'putchar'
                            609 ;------------------------------------------------------------
                            610 ;c                         Allocated with name '_putchar_c_1_1'
                            611 ;------------------------------------------------------------
                            612 ;	../serial.c:51: void putchar (char c)
                            613 ;	-----------------------------------------
                            614 ;	 function putchar
                            615 ;	-----------------------------------------
   0115                     616 _putchar:
                            617 ;	genReceive
   0115 E5 82               618 	mov	a,dpl
   0117 90 00 01            619 	mov	dptr,#_putchar_c_1_1
   011A F0                  620 	movx	@dptr,a
                            621 ;	../serial.c:53: SBUF = c;  	                // load serial port with transmit value
                            622 ;	genAssign
   011B 90 00 01            623 	mov	dptr,#_putchar_c_1_1
   011E E0                  624 	movx	a,@dptr
   011F F5 99               625 	mov	_SBUF,a
                            626 ;	../serial.c:54: while (!TI);	            // check T1 flag
   0121                     627 00101$:
                            628 ;	genIfx
                            629 ;	genIfxJump
                            630 ;	Peephole 108.d	removed ljmp by inverse jump logic
                            631 ;	../serial.c:55: TI = 0;  	                // clear TI flag
                            632 ;	genAssign
                            633 ;	Peephole 250.a	using atomic test and clear
   0121 10 99 02            634 	jbc	_TI,00108$
   0124 80 FB               635 	sjmp	00101$
   0126                     636 00108$:
                            637 ;	Peephole 300	removed redundant label 00104$
   0126 22                  638 	ret
                            639 ;------------------------------------------------------------
                            640 ;Allocation info for local variables in function 'getchar'
                            641 ;------------------------------------------------------------
                            642 ;------------------------------------------------------------
                            643 ;	../serial.c:66: char getchar ()
                            644 ;	-----------------------------------------
                            645 ;	 function getchar
                            646 ;	-----------------------------------------
   0127                     647 _getchar:
                            648 ;	../serial.c:68: while (!RI);                // compare asm code generated for these three lines
   0127                     649 00101$:
                            650 ;	genIfx
                            651 ;	genIfxJump
                            652 ;	Peephole 108.d	removed ljmp by inverse jump logic
                            653 ;	../serial.c:69: RI = 0;			            // clear RI flag
                            654 ;	genAssign
                            655 ;	Peephole 250.a	using atomic test and clear
   0127 10 98 02            656 	jbc	_RI,00108$
   012A 80 FB               657 	sjmp	00101$
   012C                     658 00108$:
                            659 ;	../serial.c:70: return SBUF;  	            // return character from SBUF
                            660 ;	genAssign
   012C AA 99               661 	mov	r2,_SBUF
                            662 ;	genRet
   012E 8A 82               663 	mov	dpl,r2
                            664 ;	Peephole 300	removed redundant label 00104$
   0130 22                  665 	ret
                            666 ;------------------------------------------------------------
                            667 ;Allocation info for local variables in function 'putstr'
                            668 ;------------------------------------------------------------
                            669 ;s                         Allocated with name '_putstr_s_1_1'
                            670 ;i                         Allocated with name '_putstr_i_1_1'
                            671 ;------------------------------------------------------------
                            672 ;	../serial.c:81: int putstr (char *s)
                            673 ;	-----------------------------------------
                            674 ;	 function putstr
                            675 ;	-----------------------------------------
   0131                     676 _putstr:
                            677 ;	genReceive
   0131 AA F0               678 	mov	r2,b
   0133 AB 83               679 	mov	r3,dph
   0135 E5 82               680 	mov	a,dpl
   0137 90 00 02            681 	mov	dptr,#_putstr_s_1_1
   013A F0                  682 	movx	@dptr,a
   013B A3                  683 	inc	dptr
   013C EB                  684 	mov	a,r3
   013D F0                  685 	movx	@dptr,a
   013E A3                  686 	inc	dptr
   013F EA                  687 	mov	a,r2
   0140 F0                  688 	movx	@dptr,a
                            689 ;	../serial.c:84: while (*s)
                            690 ;	genAssign
   0141 90 00 02            691 	mov	dptr,#_putstr_s_1_1
   0144 E0                  692 	movx	a,@dptr
   0145 FA                  693 	mov	r2,a
   0146 A3                  694 	inc	dptr
   0147 E0                  695 	movx	a,@dptr
   0148 FB                  696 	mov	r3,a
   0149 A3                  697 	inc	dptr
   014A E0                  698 	movx	a,@dptr
   014B FC                  699 	mov	r4,a
                            700 ;	genAssign
   014C 7D 00               701 	mov	r5,#0x00
   014E 7E 00               702 	mov	r6,#0x00
   0150                     703 00101$:
                            704 ;	genPointerGet
                            705 ;	genGenPointerGet
   0150 8A 82               706 	mov	dpl,r2
   0152 8B 83               707 	mov	dph,r3
   0154 8C F0               708 	mov	b,r4
   0156 12 0D 88            709 	lcall	__gptrget
                            710 ;	genIfx
   0159 FF                  711 	mov	r7,a
                            712 ;	Peephole 105	removed redundant mov
                            713 ;	genIfxJump
                            714 ;	Peephole 108.c	removed ljmp by inverse jump logic
   015A 60 30               715 	jz	00108$
                            716 ;	Peephole 300	removed redundant label 00109$
                            717 ;	../serial.c:86: putchar(*s++);
                            718 ;	genAssign
                            719 ;	genPlus
                            720 ;     genPlusIncr
   015C 0A                  721 	inc	r2
   015D BA 00 01            722 	cjne	r2,#0x00,00110$
   0160 0B                  723 	inc	r3
   0161                     724 00110$:
                            725 ;	genAssign
   0161 90 00 02            726 	mov	dptr,#_putstr_s_1_1
   0164 EA                  727 	mov	a,r2
   0165 F0                  728 	movx	@dptr,a
   0166 A3                  729 	inc	dptr
   0167 EB                  730 	mov	a,r3
   0168 F0                  731 	movx	@dptr,a
   0169 A3                  732 	inc	dptr
   016A EC                  733 	mov	a,r4
   016B F0                  734 	movx	@dptr,a
                            735 ;	genCall
   016C 8F 82               736 	mov	dpl,r7
   016E C0 02               737 	push	ar2
   0170 C0 03               738 	push	ar3
   0172 C0 04               739 	push	ar4
   0174 C0 05               740 	push	ar5
   0176 C0 06               741 	push	ar6
   0178 12 01 15            742 	lcall	_putchar
   017B D0 06               743 	pop	ar6
   017D D0 05               744 	pop	ar5
   017F D0 04               745 	pop	ar4
   0181 D0 03               746 	pop	ar3
   0183 D0 02               747 	pop	ar2
                            748 ;	../serial.c:87: i++;
                            749 ;	genPlus
                            750 ;     genPlusIncr
                            751 ;	tail increment optimized (range 8)
   0185 0D                  752 	inc	r5
   0186 BD 00 C7            753 	cjne	r5,#0x00,00101$
   0189 0E                  754 	inc	r6
                            755 ;	Peephole 112.b	changed ljmp to sjmp
   018A 80 C4               756 	sjmp	00101$
   018C                     757 00108$:
                            758 ;	genAssign
   018C 90 00 02            759 	mov	dptr,#_putstr_s_1_1
   018F EA                  760 	mov	a,r2
   0190 F0                  761 	movx	@dptr,a
   0191 A3                  762 	inc	dptr
   0192 EB                  763 	mov	a,r3
   0193 F0                  764 	movx	@dptr,a
   0194 A3                  765 	inc	dptr
   0195 EC                  766 	mov	a,r4
   0196 F0                  767 	movx	@dptr,a
                            768 ;	../serial.c:89: return i+1;
                            769 ;	genPlus
                            770 ;     genPlusIncr
   0197 0D                  771 	inc	r5
   0198 BD 00 01            772 	cjne	r5,#0x00,00111$
   019B 0E                  773 	inc	r6
   019C                     774 00111$:
                            775 ;	genRet
   019C 8D 82               776 	mov	dpl,r5
   019E 8E 83               777 	mov	dph,r6
                            778 ;	Peephole 300	removed redundant label 00104$
   01A0 22                  779 	ret
                            780 ;------------------------------------------------------------
                            781 ;Allocation info for local variables in function 'clear_screen'
                            782 ;------------------------------------------------------------
                            783 ;------------------------------------------------------------
                            784 ;	../serial.c:100: void clear_screen(void)
                            785 ;	-----------------------------------------
                            786 ;	 function clear_screen
                            787 ;	-----------------------------------------
   01A1                     788 _clear_screen:
                            789 ;	../serial.c:102: printf("\033c");			//Reset Terminal
                            790 ;	genIpush
   01A1 74 09               791 	mov	a,#__str_4
   01A3 C0 E0               792 	push	acc
   01A5 74 0F               793 	mov	a,#(__str_4 >> 8)
   01A7 C0 E0               794 	push	acc
   01A9 74 80               795 	mov	a,#0x80
   01AB C0 E0               796 	push	acc
                            797 ;	genCall
   01AD 12 04 E9            798 	lcall	_printf
   01B0 15 81               799 	dec	sp
   01B2 15 81               800 	dec	sp
   01B4 15 81               801 	dec	sp
                            802 ;	../serial.c:103: printf("\033[2J");			//Clear Screen
                            803 ;	genIpush
   01B6 74 0C               804 	mov	a,#__str_5
   01B8 C0 E0               805 	push	acc
   01BA 74 0F               806 	mov	a,#(__str_5 >> 8)
   01BC C0 E0               807 	push	acc
   01BE 74 80               808 	mov	a,#0x80
   01C0 C0 E0               809 	push	acc
                            810 ;	genCall
   01C2 12 04 E9            811 	lcall	_printf
   01C5 15 81               812 	dec	sp
   01C7 15 81               813 	dec	sp
   01C9 15 81               814 	dec	sp
                            815 ;	Peephole 300	removed redundant label 00101$
   01CB 22                  816 	ret
                            817 	.area CSEG    (CODE)
                            818 	.area CONST   (CODE)
   0DC1                     819 __str_0:
   0DC1 2A 2A 2A 2A 2A 2A   820 	.ascii "************************************************************"
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
   0DFD 2A 2A 2A 2A 2A 2A   821 	.ascii "*******************"
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A
   0E10 0A                  822 	.db 0x0A
   0E11 0D                  823 	.db 0x0D
   0E12 00                  824 	.db 0x00
   0E13                     825 __str_1:
   0E13 2A 2A 2A 2A 2A 2A   826 	.ascii "**********     EMBEDDED SYSTEMS DESIGN : SPRING 2011 : LAB N"
        2A 2A 2A 2A 20 20
        20 20 20 45 4D 42
        45 44 44 45 44 20
        53 59 53 54 45 4D
        53 20 44 45 53 49
        47 4E 20 3A 20 53
        50 52 49 4E 47 20
        32 30 31 31 20 3A
        20 4C 41 42 20 4E
   0E4F 4F 2E 20 34 20 20   827 	.ascii "O. 4     **********"
        20 20 20 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A
   0E62 0A                  828 	.db 0x0A
   0E63 0D                  829 	.db 0x0D
   0E64 00                  830 	.db 0x00
   0E65                     831 __str_2:
   0E65 2A 2A 2A 2A 2A 2A   832 	.ascii "**********     Created by :Maulik Kapuria                   "
        2A 2A 2A 2A 20 20
        20 20 20 43 72 65
        61 74 65 64 20 62
        79 20 3A 4D 61 75
        6C 69 6B 20 4B 61
        70 75 72 69 61 20
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
   0EA1 20 20 20 20 20 20   833 	.ascii "         **********"
        20 20 20 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A
   0EB4 0A                  834 	.db 0x0A
   0EB5 0D                  835 	.db 0x0D
   0EB6 00                  836 	.db 0x00
   0EB7                     837 __str_3:
   0EB7 2A 2A 2A 2A 2A 2A   838 	.ascii "**********     Bit Banged I2C program                       "
        2A 2A 2A 2A 20 20
        20 20 20 42 69 74
        20 42 61 6E 67 65
        64 20 49 32 43 20
        70 72 6F 67 72 61
        6D 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
   0EF3 20 20 20 20 20 20   839 	.ascii "         **********"
        20 20 20 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A
   0F06 0A                  840 	.db 0x0A
   0F07 0D                  841 	.db 0x0D
   0F08 00                  842 	.db 0x00
   0F09                     843 __str_4:
   0F09 1B                  844 	.db 0x1B
   0F0A 63                  845 	.ascii "c"
   0F0B 00                  846 	.db 0x00
   0F0C                     847 __str_5:
   0F0C 1B                  848 	.db 0x1B
   0F0D 5B 32 4A            849 	.ascii "[2J"
   0F10 00                  850 	.db 0x00
                            851 	.area XINIT   (CODE)
