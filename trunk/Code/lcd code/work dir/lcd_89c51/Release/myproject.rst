                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.0 #4309 (Jul 28 2006)
                              4 ; This file generated Wed Apr 13 23:54:05 2011
                              5 ;--------------------------------------------------------
                              6 	.module myproject
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _timer_1_isr
                             13 	.globl _main
                             14 	.globl __sdcc_external_startup
                             15 	.globl _TF1
                             16 	.globl _TR1
                             17 	.globl _TF0
                             18 	.globl _TR0
                             19 	.globl _IE1
                             20 	.globl _IT1
                             21 	.globl _IE0
                             22 	.globl _IT0
                             23 	.globl _SM0
                             24 	.globl _SM1
                             25 	.globl _SM2
                             26 	.globl _REN
                             27 	.globl _TB8
                             28 	.globl _RB8
                             29 	.globl _TI
                             30 	.globl _RI
                             31 	.globl _CY
                             32 	.globl _AC
                             33 	.globl _F0
                             34 	.globl _RS1
                             35 	.globl _RS0
                             36 	.globl _OV
                             37 	.globl _F1
                             38 	.globl _P
                             39 	.globl _RD
                             40 	.globl _WR
                             41 	.globl _T1
                             42 	.globl _T0
                             43 	.globl _INT1
                             44 	.globl _INT0
                             45 	.globl _TXD0
                             46 	.globl _TXD
                             47 	.globl _RXD0
                             48 	.globl _RXD
                             49 	.globl _P3_7
                             50 	.globl _P3_6
                             51 	.globl _P3_5
                             52 	.globl _P3_4
                             53 	.globl _P3_3
                             54 	.globl _P3_2
                             55 	.globl _P3_1
                             56 	.globl _P3_0
                             57 	.globl _P2_7
                             58 	.globl _P2_6
                             59 	.globl _P2_5
                             60 	.globl _P2_4
                             61 	.globl _P2_3
                             62 	.globl _P2_2
                             63 	.globl _P2_1
                             64 	.globl _P2_0
                             65 	.globl _P1_7
                             66 	.globl _P1_6
                             67 	.globl _P1_5
                             68 	.globl _P1_4
                             69 	.globl _P1_3
                             70 	.globl _P1_2
                             71 	.globl _P1_1
                             72 	.globl _P1_0
                             73 	.globl _P0_7
                             74 	.globl _P0_6
                             75 	.globl _P0_5
                             76 	.globl _P0_4
                             77 	.globl _P0_3
                             78 	.globl _P0_2
                             79 	.globl _P0_1
                             80 	.globl _P0_0
                             81 	.globl _PS
                             82 	.globl _PT1
                             83 	.globl _PX1
                             84 	.globl _PT0
                             85 	.globl _PX0
                             86 	.globl _EA
                             87 	.globl _ES
                             88 	.globl _ET1
                             89 	.globl _EX1
                             90 	.globl _ET0
                             91 	.globl _EX0
                             92 	.globl _BREG_F7
                             93 	.globl _BREG_F6
                             94 	.globl _BREG_F5
                             95 	.globl _BREG_F4
                             96 	.globl _BREG_F3
                             97 	.globl _BREG_F2
                             98 	.globl _BREG_F1
                             99 	.globl _BREG_F0
                            100 	.globl _P5_7
                            101 	.globl _P5_6
                            102 	.globl _P5_5
                            103 	.globl _P5_4
                            104 	.globl _P5_3
                            105 	.globl _P5_2
                            106 	.globl _P5_1
                            107 	.globl _P5_0
                            108 	.globl _P4_7
                            109 	.globl _P4_6
                            110 	.globl _P4_5
                            111 	.globl _P4_4
                            112 	.globl _P4_3
                            113 	.globl _P4_2
                            114 	.globl _P4_1
                            115 	.globl _P4_0
                            116 	.globl _PX0L
                            117 	.globl _PT0L
                            118 	.globl _PX1L
                            119 	.globl _PT1L
                            120 	.globl _PLS
                            121 	.globl _PT2L
                            122 	.globl _PPCL
                            123 	.globl _EC
                            124 	.globl _CCF0
                            125 	.globl _CCF1
                            126 	.globl _CCF2
                            127 	.globl _CCF3
                            128 	.globl _CCF4
                            129 	.globl _CR
                            130 	.globl _CF
                            131 	.globl _TF2
                            132 	.globl _EXF2
                            133 	.globl _RCLK
                            134 	.globl _TCLK
                            135 	.globl _EXEN2
                            136 	.globl _TR2
                            137 	.globl _C_T2
                            138 	.globl _CP_RL2
                            139 	.globl _T2CON_7
                            140 	.globl _T2CON_6
                            141 	.globl _T2CON_5
                            142 	.globl _T2CON_4
                            143 	.globl _T2CON_3
                            144 	.globl _T2CON_2
                            145 	.globl _T2CON_1
                            146 	.globl _T2CON_0
                            147 	.globl _PT2
                            148 	.globl _ET2
                            149 	.globl _TMOD
                            150 	.globl _TL1
                            151 	.globl _TL0
                            152 	.globl _TH1
                            153 	.globl _TH0
                            154 	.globl _TCON
                            155 	.globl _SP
                            156 	.globl _SCON
                            157 	.globl _SBUF0
                            158 	.globl _SBUF
                            159 	.globl _PSW
                            160 	.globl _PCON
                            161 	.globl _P3
                            162 	.globl _P2
                            163 	.globl _P1
                            164 	.globl _P0
                            165 	.globl _IP
                            166 	.globl _IE
                            167 	.globl _DP0L
                            168 	.globl _DPL
                            169 	.globl _DP0H
                            170 	.globl _DPH
                            171 	.globl _B
                            172 	.globl _ACC
                            173 	.globl _EECON
                            174 	.globl _KBF
                            175 	.globl _KBE
                            176 	.globl _KBLS
                            177 	.globl _BRL
                            178 	.globl _BDRCON
                            179 	.globl _T2MOD
                            180 	.globl _SPDAT
                            181 	.globl _SPSTA
                            182 	.globl _SPCON
                            183 	.globl _SADEN
                            184 	.globl _SADDR
                            185 	.globl _WDTPRG
                            186 	.globl _WDTRST
                            187 	.globl _P5
                            188 	.globl _P4
                            189 	.globl _IPH1
                            190 	.globl _IPL1
                            191 	.globl _IPH0
                            192 	.globl _IPL0
                            193 	.globl _IEN1
                            194 	.globl _IEN0
                            195 	.globl _CMOD
                            196 	.globl _CL
                            197 	.globl _CH
                            198 	.globl _CCON
                            199 	.globl _CCAPM4
                            200 	.globl _CCAPM3
                            201 	.globl _CCAPM2
                            202 	.globl _CCAPM1
                            203 	.globl _CCAPM0
                            204 	.globl _CCAP4L
                            205 	.globl _CCAP3L
                            206 	.globl _CCAP2L
                            207 	.globl _CCAP1L
                            208 	.globl _CCAP0L
                            209 	.globl _CCAP4H
                            210 	.globl _CCAP3H
                            211 	.globl _CCAP2H
                            212 	.globl _CCAP1H
                            213 	.globl _CCAP0H
                            214 	.globl _CKCKON1
                            215 	.globl _CKCKON0
                            216 	.globl _CKRL
                            217 	.globl _AUXR1
                            218 	.globl _AUXR
                            219 	.globl _TH2
                            220 	.globl _TL2
                            221 	.globl _RCAP2H
                            222 	.globl _RCAP2L
                            223 	.globl _T2CON
                            224 	.globl _block_erase
                            225 	.globl _Line
                            226 	.globl _set_baud_9600
                            227 	.globl _Demo
                            228 	.globl _ClearScreen
                            229 	.globl _send_command_to_lcd_PARM_2
                            230 	.globl _init_all
                            231 	.globl _send_command_to_lcd
                            232 	.globl _bit_bang_tx
                            233 ;--------------------------------------------------------
                            234 ; special function registers
                            235 ;--------------------------------------------------------
                            236 	.area RSEG    (DATA)
                    00C8    237 _T2CON	=	0x00c8
                    00CA    238 _RCAP2L	=	0x00ca
                    00CB    239 _RCAP2H	=	0x00cb
                    00CC    240 _TL2	=	0x00cc
                    00CD    241 _TH2	=	0x00cd
                    008E    242 _AUXR	=	0x008e
                    00A2    243 _AUXR1	=	0x00a2
                    0097    244 _CKRL	=	0x0097
                    008F    245 _CKCKON0	=	0x008f
                    008F    246 _CKCKON1	=	0x008f
                    00FA    247 _CCAP0H	=	0x00fa
                    00FB    248 _CCAP1H	=	0x00fb
                    00FC    249 _CCAP2H	=	0x00fc
                    00FD    250 _CCAP3H	=	0x00fd
                    00FE    251 _CCAP4H	=	0x00fe
                    00EA    252 _CCAP0L	=	0x00ea
                    00EB    253 _CCAP1L	=	0x00eb
                    00EC    254 _CCAP2L	=	0x00ec
                    00ED    255 _CCAP3L	=	0x00ed
                    00EE    256 _CCAP4L	=	0x00ee
                    00DA    257 _CCAPM0	=	0x00da
                    00DB    258 _CCAPM1	=	0x00db
                    00DC    259 _CCAPM2	=	0x00dc
                    00DD    260 _CCAPM3	=	0x00dd
                    00DE    261 _CCAPM4	=	0x00de
                    00D8    262 _CCON	=	0x00d8
                    00F9    263 _CH	=	0x00f9
                    00E9    264 _CL	=	0x00e9
                    00D9    265 _CMOD	=	0x00d9
                    00A8    266 _IEN0	=	0x00a8
                    00B1    267 _IEN1	=	0x00b1
                    00B8    268 _IPL0	=	0x00b8
                    00B7    269 _IPH0	=	0x00b7
                    00B2    270 _IPL1	=	0x00b2
                    00B3    271 _IPH1	=	0x00b3
                    00C0    272 _P4	=	0x00c0
                    00D8    273 _P5	=	0x00d8
                    00A6    274 _WDTRST	=	0x00a6
                    00A7    275 _WDTPRG	=	0x00a7
                    00A9    276 _SADDR	=	0x00a9
                    00B9    277 _SADEN	=	0x00b9
                    00C3    278 _SPCON	=	0x00c3
                    00C4    279 _SPSTA	=	0x00c4
                    00C5    280 _SPDAT	=	0x00c5
                    00C9    281 _T2MOD	=	0x00c9
                    009B    282 _BDRCON	=	0x009b
                    009A    283 _BRL	=	0x009a
                    009C    284 _KBLS	=	0x009c
                    009D    285 _KBE	=	0x009d
                    009E    286 _KBF	=	0x009e
                    00D2    287 _EECON	=	0x00d2
                    00E0    288 _ACC	=	0x00e0
                    00F0    289 _B	=	0x00f0
                    0083    290 _DPH	=	0x0083
                    0083    291 _DP0H	=	0x0083
                    0082    292 _DPL	=	0x0082
                    0082    293 _DP0L	=	0x0082
                    00A8    294 _IE	=	0x00a8
                    00B8    295 _IP	=	0x00b8
                    0080    296 _P0	=	0x0080
                    0090    297 _P1	=	0x0090
                    00A0    298 _P2	=	0x00a0
                    00B0    299 _P3	=	0x00b0
                    0087    300 _PCON	=	0x0087
                    00D0    301 _PSW	=	0x00d0
                    0099    302 _SBUF	=	0x0099
                    0099    303 _SBUF0	=	0x0099
                    0098    304 _SCON	=	0x0098
                    0081    305 _SP	=	0x0081
                    0088    306 _TCON	=	0x0088
                    008C    307 _TH0	=	0x008c
                    008D    308 _TH1	=	0x008d
                    008A    309 _TL0	=	0x008a
                    008B    310 _TL1	=	0x008b
                    0089    311 _TMOD	=	0x0089
                            312 ;--------------------------------------------------------
                            313 ; special function bits
                            314 ;--------------------------------------------------------
                            315 	.area RSEG    (DATA)
                    00AD    316 _ET2	=	0x00ad
                    00BD    317 _PT2	=	0x00bd
                    00C8    318 _T2CON_0	=	0x00c8
                    00C9    319 _T2CON_1	=	0x00c9
                    00CA    320 _T2CON_2	=	0x00ca
                    00CB    321 _T2CON_3	=	0x00cb
                    00CC    322 _T2CON_4	=	0x00cc
                    00CD    323 _T2CON_5	=	0x00cd
                    00CE    324 _T2CON_6	=	0x00ce
                    00CF    325 _T2CON_7	=	0x00cf
                    00C8    326 _CP_RL2	=	0x00c8
                    00C9    327 _C_T2	=	0x00c9
                    00CA    328 _TR2	=	0x00ca
                    00CB    329 _EXEN2	=	0x00cb
                    00CC    330 _TCLK	=	0x00cc
                    00CD    331 _RCLK	=	0x00cd
                    00CE    332 _EXF2	=	0x00ce
                    00CF    333 _TF2	=	0x00cf
                    00DF    334 _CF	=	0x00df
                    00DE    335 _CR	=	0x00de
                    00DC    336 _CCF4	=	0x00dc
                    00DB    337 _CCF3	=	0x00db
                    00DA    338 _CCF2	=	0x00da
                    00D9    339 _CCF1	=	0x00d9
                    00D8    340 _CCF0	=	0x00d8
                    00AE    341 _EC	=	0x00ae
                    00BE    342 _PPCL	=	0x00be
                    00BD    343 _PT2L	=	0x00bd
                    00BC    344 _PLS	=	0x00bc
                    00BB    345 _PT1L	=	0x00bb
                    00BA    346 _PX1L	=	0x00ba
                    00B9    347 _PT0L	=	0x00b9
                    00B8    348 _PX0L	=	0x00b8
                    00C0    349 _P4_0	=	0x00c0
                    00C1    350 _P4_1	=	0x00c1
                    00C2    351 _P4_2	=	0x00c2
                    00C3    352 _P4_3	=	0x00c3
                    00C4    353 _P4_4	=	0x00c4
                    00C5    354 _P4_5	=	0x00c5
                    00C6    355 _P4_6	=	0x00c6
                    00C7    356 _P4_7	=	0x00c7
                    00D8    357 _P5_0	=	0x00d8
                    00D9    358 _P5_1	=	0x00d9
                    00DA    359 _P5_2	=	0x00da
                    00DB    360 _P5_3	=	0x00db
                    00DC    361 _P5_4	=	0x00dc
                    00DD    362 _P5_5	=	0x00dd
                    00DE    363 _P5_6	=	0x00de
                    00DF    364 _P5_7	=	0x00df
                    00F0    365 _BREG_F0	=	0x00f0
                    00F1    366 _BREG_F1	=	0x00f1
                    00F2    367 _BREG_F2	=	0x00f2
                    00F3    368 _BREG_F3	=	0x00f3
                    00F4    369 _BREG_F4	=	0x00f4
                    00F5    370 _BREG_F5	=	0x00f5
                    00F6    371 _BREG_F6	=	0x00f6
                    00F7    372 _BREG_F7	=	0x00f7
                    00A8    373 _EX0	=	0x00a8
                    00A9    374 _ET0	=	0x00a9
                    00AA    375 _EX1	=	0x00aa
                    00AB    376 _ET1	=	0x00ab
                    00AC    377 _ES	=	0x00ac
                    00AF    378 _EA	=	0x00af
                    00B8    379 _PX0	=	0x00b8
                    00B9    380 _PT0	=	0x00b9
                    00BA    381 _PX1	=	0x00ba
                    00BB    382 _PT1	=	0x00bb
                    00BC    383 _PS	=	0x00bc
                    0080    384 _P0_0	=	0x0080
                    0081    385 _P0_1	=	0x0081
                    0082    386 _P0_2	=	0x0082
                    0083    387 _P0_3	=	0x0083
                    0084    388 _P0_4	=	0x0084
                    0085    389 _P0_5	=	0x0085
                    0086    390 _P0_6	=	0x0086
                    0087    391 _P0_7	=	0x0087
                    0090    392 _P1_0	=	0x0090
                    0091    393 _P1_1	=	0x0091
                    0092    394 _P1_2	=	0x0092
                    0093    395 _P1_3	=	0x0093
                    0094    396 _P1_4	=	0x0094
                    0095    397 _P1_5	=	0x0095
                    0096    398 _P1_6	=	0x0096
                    0097    399 _P1_7	=	0x0097
                    00A0    400 _P2_0	=	0x00a0
                    00A1    401 _P2_1	=	0x00a1
                    00A2    402 _P2_2	=	0x00a2
                    00A3    403 _P2_3	=	0x00a3
                    00A4    404 _P2_4	=	0x00a4
                    00A5    405 _P2_5	=	0x00a5
                    00A6    406 _P2_6	=	0x00a6
                    00A7    407 _P2_7	=	0x00a7
                    00B0    408 _P3_0	=	0x00b0
                    00B1    409 _P3_1	=	0x00b1
                    00B2    410 _P3_2	=	0x00b2
                    00B3    411 _P3_3	=	0x00b3
                    00B4    412 _P3_4	=	0x00b4
                    00B5    413 _P3_5	=	0x00b5
                    00B6    414 _P3_6	=	0x00b6
                    00B7    415 _P3_7	=	0x00b7
                    00B0    416 _RXD	=	0x00b0
                    00B0    417 _RXD0	=	0x00b0
                    00B1    418 _TXD	=	0x00b1
                    00B1    419 _TXD0	=	0x00b1
                    00B2    420 _INT0	=	0x00b2
                    00B3    421 _INT1	=	0x00b3
                    00B4    422 _T0	=	0x00b4
                    00B5    423 _T1	=	0x00b5
                    00B6    424 _WR	=	0x00b6
                    00B7    425 _RD	=	0x00b7
                    00D0    426 _P	=	0x00d0
                    00D1    427 _F1	=	0x00d1
                    00D2    428 _OV	=	0x00d2
                    00D3    429 _RS0	=	0x00d3
                    00D4    430 _RS1	=	0x00d4
                    00D5    431 _F0	=	0x00d5
                    00D6    432 _AC	=	0x00d6
                    00D7    433 _CY	=	0x00d7
                    0098    434 _RI	=	0x0098
                    0099    435 _TI	=	0x0099
                    009A    436 _RB8	=	0x009a
                    009B    437 _TB8	=	0x009b
                    009C    438 _REN	=	0x009c
                    009D    439 _SM2	=	0x009d
                    009E    440 _SM1	=	0x009e
                    009F    441 _SM0	=	0x009f
                    0088    442 _IT0	=	0x0088
                    0089    443 _IE0	=	0x0089
                    008A    444 _IT1	=	0x008a
                    008B    445 _IE1	=	0x008b
                    008C    446 _TR0	=	0x008c
                    008D    447 _TF0	=	0x008d
                    008E    448 _TR1	=	0x008e
                    008F    449 _TF1	=	0x008f
                            450 ;--------------------------------------------------------
                            451 ; overlayable register banks
                            452 ;--------------------------------------------------------
                            453 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     454 	.ds 8
                            455 ;--------------------------------------------------------
                            456 ; internal ram data
                            457 ;--------------------------------------------------------
                            458 	.area DSEG    (DATA)
                            459 ;--------------------------------------------------------
                            460 ; overlayable items in internal ram 
                            461 ;--------------------------------------------------------
                            462 	.area OSEG    (OVR,DATA)
                            463 ;--------------------------------------------------------
                            464 ; Stack segment in internal ram 
                            465 ;--------------------------------------------------------
                            466 	.area	SSEG	(DATA)
   0022                     467 __start__stack:
   0022                     468 	.ds	1
                            469 
                            470 ;--------------------------------------------------------
                            471 ; indirectly addressable internal ram data
                            472 ;--------------------------------------------------------
                            473 	.area ISEG    (DATA)
                            474 ;--------------------------------------------------------
                            475 ; bit data
                            476 ;--------------------------------------------------------
                            477 	.area BSEG    (BIT)
                            478 ;--------------------------------------------------------
                            479 ; paged external ram data
                            480 ;--------------------------------------------------------
                            481 	.area PSEG    (PAG,XDATA)
                            482 ;--------------------------------------------------------
                            483 ; external ram data
                            484 ;--------------------------------------------------------
                            485 	.area XSEG    (XDATA)
   0005                     486 _send_command_to_lcd_PARM_2:
   0005                     487 	.ds 1
   0006                     488 _send_command_to_lcd_bufptr_1_1:
   0006                     489 	.ds 3
   0009                     490 _bit_bang_tx_txchar_1_1:
   0009                     491 	.ds 1
                    6000    492 _bit_bang_tx_lcdPtr_1_1	=	0x6000
                            493 ;--------------------------------------------------------
                            494 ; external initialized ram data
                            495 ;--------------------------------------------------------
                            496 	.area XISEG   (XDATA)
   003D                     497 _ClearScreen::
   003D                     498 	.ds 2
   003F                     499 _Demo::
   003F                     500 	.ds 2
   0041                     501 _set_baud_9600::
   0041                     502 	.ds 3
   0044                     503 _Line::
   0044                     504 	.ds 6
   004A                     505 _block_erase::
   004A                     506 	.ds 6
                            507 	.area HOME    (CODE)
                            508 	.area GSINIT0 (CODE)
                            509 	.area GSINIT1 (CODE)
                            510 	.area GSINIT2 (CODE)
                            511 	.area GSINIT3 (CODE)
                            512 	.area GSINIT4 (CODE)
                            513 	.area GSINIT5 (CODE)
                            514 	.area GSINIT  (CODE)
                            515 	.area GSFINAL (CODE)
                            516 	.area CSEG    (CODE)
                            517 ;--------------------------------------------------------
                            518 ; interrupt vector 
                            519 ;--------------------------------------------------------
                            520 	.area HOME    (CODE)
   0000                     521 __interrupt_vect:
   0000 02 00 1E            522 	ljmp	__sdcc_gsinit_startup
   0003 32                  523 	reti
   0004                     524 	.ds	7
   000B 32                  525 	reti
   000C                     526 	.ds	7
   0013 32                  527 	reti
   0014                     528 	.ds	7
   001B 02 02 3F            529 	ljmp	_timer_1_isr
                            530 ;--------------------------------------------------------
                            531 ; global & static initialisations
                            532 ;--------------------------------------------------------
                            533 	.area HOME    (CODE)
                            534 	.area GSINIT  (CODE)
                            535 	.area GSFINAL (CODE)
                            536 	.area GSINIT  (CODE)
                            537 	.globl __sdcc_gsinit_startup
                            538 	.globl __sdcc_program_startup
                            539 	.globl __start__stack
                            540 	.globl __mcs51_genXINIT
                            541 	.globl __mcs51_genXRAMCLEAR
                            542 	.globl __mcs51_genRAMCLEAR
                            543 	.area GSFINAL (CODE)
   0077 02 01 CC            544 	ljmp	__sdcc_program_startup
                            545 ;--------------------------------------------------------
                            546 ; Home
                            547 ;--------------------------------------------------------
                            548 	.area HOME    (CODE)
                            549 	.area CSEG    (CODE)
   01CC                     550 __sdcc_program_startup:
   01CC 12 01 D8            551 	lcall	_main
                            552 ;	return from main will lock up
   01CF 80 FE               553 	sjmp .
                            554 ;--------------------------------------------------------
                            555 ; code
                            556 ;--------------------------------------------------------
                            557 	.area CSEG    (CODE)
                            558 ;------------------------------------------------------------
                            559 ;Allocation info for local variables in function '_sdcc_external_startup'
                            560 ;------------------------------------------------------------
                            561 ;------------------------------------------------------------
                            562 ;	../myproject.c:75: _sdcc_external_startup()
                            563 ;	-----------------------------------------
                            564 ;	 function _sdcc_external_startup
                            565 ;	-----------------------------------------
   01D1                     566 __sdcc_external_startup:
                    0002    567 	ar2 = 0x02
                    0003    568 	ar3 = 0x03
                    0004    569 	ar4 = 0x04
                    0005    570 	ar5 = 0x05
                    0006    571 	ar6 = 0x06
                    0007    572 	ar7 = 0x07
                    0000    573 	ar0 = 0x00
                    0001    574 	ar1 = 0x01
                            575 ;	../myproject.c:78: AUXR |= 0x0C;
                            576 ;	genOr
   01D1 43 8E 0C            577 	orl	_AUXR,#0x0C
                            578 ;	../myproject.c:79: return 0;
                            579 ;	genRet
                            580 ;	Peephole 182.b	used 16 bit load of dptr
   01D4 90 00 00            581 	mov	dptr,#0x0000
                            582 ;	Peephole 300	removed redundant label 00101$
   01D7 22                  583 	ret
                            584 ;------------------------------------------------------------
                            585 ;Allocation info for local variables in function 'main'
                            586 ;------------------------------------------------------------
                            587 ;------------------------------------------------------------
                            588 ;	../myproject.c:84: void main(void)
                            589 ;	-----------------------------------------
                            590 ;	 function main
                            591 ;	-----------------------------------------
   01D8                     592 _main:
                            593 ;	../myproject.c:89: init_all();
                            594 ;	genCall
   01D8 12 02 33            595 	lcall	_init_all
                            596 ;	../myproject.c:92: EA=TRUE;
                            597 ;	genAssign
   01DB D2 AF               598 	setb	_EA
                            599 ;	../myproject.c:101: printf("Got here");
                            600 ;	genIpush
   01DD 74 11               601 	mov	a,#__str_0
   01DF C0 E0               602 	push	acc
   01E1 74 0F               603 	mov	a,#(__str_0 >> 8)
   01E3 C0 E0               604 	push	acc
   01E5 74 80               605 	mov	a,#0x80
   01E7 C0 E0               606 	push	acc
                            607 ;	genCall
   01E9 12 04 E9            608 	lcall	_printf
   01EC 15 81               609 	dec	sp
   01EE 15 81               610 	dec	sp
   01F0 15 81               611 	dec	sp
                            612 ;	../myproject.c:105: delay(5);
                            613 ;	genCall
                            614 ;	Peephole 182.b	used 16 bit load of dptr
   01F2 90 00 05            615 	mov	dptr,#0x0005
   01F5 12 02 FF            616 	lcall	_delay
                            617 ;	../myproject.c:107: send_command_to_lcd(block_erase,sizeof(block_erase));
                            618 ;	genAssign
   01F8 90 00 05            619 	mov	dptr,#_send_command_to_lcd_PARM_2
   01FB 74 06               620 	mov	a,#0x06
   01FD F0                  621 	movx	@dptr,a
                            622 ;	genCall
                            623 ;	Peephole 182.a	used 16 bit load of DPTR
   01FE 90 00 4A            624 	mov	dptr,#_block_erase
   0201 75 F0 00            625 	mov	b,#0x00
   0204 12 02 7A            626 	lcall	_send_command_to_lcd
                            627 ;	../myproject.c:111: send_command_to_lcd(Line,sizeof(Line));
                            628 ;	genAssign
   0207 90 00 05            629 	mov	dptr,#_send_command_to_lcd_PARM_2
   020A 74 06               630 	mov	a,#0x06
   020C F0                  631 	movx	@dptr,a
                            632 ;	genCall
                            633 ;	Peephole 182.a	used 16 bit load of DPTR
   020D 90 00 44            634 	mov	dptr,#_Line
   0210 75 F0 00            635 	mov	b,#0x00
   0213 12 02 7A            636 	lcall	_send_command_to_lcd
                            637 ;	../myproject.c:114: while(1)
   0216                     638 00102$:
                            639 ;	../myproject.c:116: delay(2);
                            640 ;	genCall
                            641 ;	Peephole 182.b	used 16 bit load of dptr
   0216 90 00 02            642 	mov	dptr,#0x0002
   0219 12 02 FF            643 	lcall	_delay
                            644 ;	../myproject.c:117: printf("a");
                            645 ;	genIpush
   021C 74 1A               646 	mov	a,#__str_1
   021E C0 E0               647 	push	acc
   0220 74 0F               648 	mov	a,#(__str_1 >> 8)
   0222 C0 E0               649 	push	acc
   0224 74 80               650 	mov	a,#0x80
   0226 C0 E0               651 	push	acc
                            652 ;	genCall
   0228 12 04 E9            653 	lcall	_printf
   022B 15 81               654 	dec	sp
   022D 15 81               655 	dec	sp
   022F 15 81               656 	dec	sp
                            657 ;	Peephole 112.b	changed ljmp to sjmp
   0231 80 E3               658 	sjmp	00102$
                            659 ;	Peephole 259.a	removed redundant label 00104$ and ret
                            660 ;
                            661 ;------------------------------------------------------------
                            662 ;Allocation info for local variables in function 'init_all'
                            663 ;------------------------------------------------------------
                            664 ;------------------------------------------------------------
                            665 ;	../myproject.c:129: void init_all(void)
                            666 ;	-----------------------------------------
                            667 ;	 function init_all
                            668 ;	-----------------------------------------
   0233                     669 _init_all:
                            670 ;	../myproject.c:131: serial_init(BAUD_115200);
                            671 ;	genCall
   0233 75 82 FD            672 	mov	dpl,#0xFD
   0236 12 00 F7            673 	lcall	_serial_init
                            674 ;	../myproject.c:132: timer_init();
                            675 ;	genCall
   0239 12 00 7A            676 	lcall	_timer_init
                            677 ;	../myproject.c:133: clear_screen();
                            678 ;	genCall
                            679 ;	Peephole 253.b	replaced lcall/ret with ljmp
   023C 02 01 A1            680 	ljmp	_clear_screen
                            681 ;
                            682 ;------------------------------------------------------------
                            683 ;Allocation info for local variables in function 'timer_1_isr'
                            684 ;------------------------------------------------------------
                            685 ;------------------------------------------------------------
                            686 ;	../myproject.c:143: void timer_1_isr(void) __interrupt(TF1_VECTOR)
                            687 ;	-----------------------------------------
                            688 ;	 function timer_1_isr
                            689 ;	-----------------------------------------
   023F                     690 _timer_1_isr:
   023F C0 E0               691 	push	acc
   0241 C0 F0               692 	push	b
   0243 C0 82               693 	push	dpl
   0245 C0 83               694 	push	dph
   0247 C0 02               695 	push	(0+2)
   0249 C0 03               696 	push	(0+3)
   024B C0 04               697 	push	(0+4)
   024D C0 05               698 	push	(0+5)
   024F C0 06               699 	push	(0+6)
   0251 C0 07               700 	push	(0+7)
   0253 C0 00               701 	push	(0+0)
   0255 C0 01               702 	push	(0+1)
   0257 C0 D0               703 	push	psw
   0259 75 D0 00            704 	mov	psw,#0x00
                            705 ;	../myproject.c:145: HB_ISR();
                            706 ;	genCall
   025C 12 00 8F            707 	lcall	_HB_ISR
                            708 ;	Peephole 300	removed redundant label 00101$
   025F D0 D0               709 	pop	psw
   0261 D0 01               710 	pop	(0+1)
   0263 D0 00               711 	pop	(0+0)
   0265 D0 07               712 	pop	(0+7)
   0267 D0 06               713 	pop	(0+6)
   0269 D0 05               714 	pop	(0+5)
   026B D0 04               715 	pop	(0+4)
   026D D0 03               716 	pop	(0+3)
   026F D0 02               717 	pop	(0+2)
   0271 D0 83               718 	pop	dph
   0273 D0 82               719 	pop	dpl
   0275 D0 F0               720 	pop	b
   0277 D0 E0               721 	pop	acc
   0279 32                  722 	reti
                            723 ;------------------------------------------------------------
                            724 ;Allocation info for local variables in function 'send_command_to_lcd'
                            725 ;------------------------------------------------------------
                            726 ;size_bufptr               Allocated with name '_send_command_to_lcd_PARM_2'
                            727 ;bufptr                    Allocated with name '_send_command_to_lcd_bufptr_1_1'
                            728 ;i                         Allocated with name '_send_command_to_lcd_i_1_1'
                            729 ;print_this                Allocated with name '_send_command_to_lcd_print_this_1_1'
                            730 ;------------------------------------------------------------
                            731 ;	../myproject.c:149: void send_command_to_lcd(char *bufptr,unsigned char size_bufptr)
                            732 ;	-----------------------------------------
                            733 ;	 function send_command_to_lcd
                            734 ;	-----------------------------------------
   027A                     735 _send_command_to_lcd:
                            736 ;	genReceive
   027A AA F0               737 	mov	r2,b
   027C AB 83               738 	mov	r3,dph
   027E E5 82               739 	mov	a,dpl
   0280 90 00 06            740 	mov	dptr,#_send_command_to_lcd_bufptr_1_1
   0283 F0                  741 	movx	@dptr,a
   0284 A3                  742 	inc	dptr
   0285 EB                  743 	mov	a,r3
   0286 F0                  744 	movx	@dptr,a
   0287 A3                  745 	inc	dptr
   0288 EA                  746 	mov	a,r2
   0289 F0                  747 	movx	@dptr,a
                            748 ;	../myproject.c:155: for(i=0;i<size_bufptr;i++)
                            749 ;	genAssign
   028A 90 00 06            750 	mov	dptr,#_send_command_to_lcd_bufptr_1_1
   028D E0                  751 	movx	a,@dptr
   028E FA                  752 	mov	r2,a
   028F A3                  753 	inc	dptr
   0290 E0                  754 	movx	a,@dptr
   0291 FB                  755 	mov	r3,a
   0292 A3                  756 	inc	dptr
   0293 E0                  757 	movx	a,@dptr
   0294 FC                  758 	mov	r4,a
                            759 ;	genAssign
   0295 90 00 05            760 	mov	dptr,#_send_command_to_lcd_PARM_2
   0298 E0                  761 	movx	a,@dptr
   0299 FD                  762 	mov	r5,a
                            763 ;	genAssign
   029A 7E 00               764 	mov	r6,#0x00
   029C                     765 00101$:
                            766 ;	genCmpLt
                            767 ;	genCmp
   029C C3                  768 	clr	c
   029D EE                  769 	mov	a,r6
   029E 9D                  770 	subb	a,r5
                            771 ;	genIfxJump
                            772 ;	Peephole 108.a	removed ljmp by inverse jump logic
   029F 50 2E               773 	jnc	00105$
                            774 ;	Peephole 300	removed redundant label 00110$
                            775 ;	../myproject.c:157: print_this = bufptr[i];
                            776 ;	genPlus
                            777 ;	Peephole 236.g	used r6 instead of ar6
   02A1 EE                  778 	mov	a,r6
                            779 ;	Peephole 236.a	used r2 instead of ar2
   02A2 2A                  780 	add	a,r2
   02A3 FF                  781 	mov	r7,a
                            782 ;	Peephole 181	changed mov to clr
   02A4 E4                  783 	clr	a
                            784 ;	Peephole 236.b	used r3 instead of ar3
   02A5 3B                  785 	addc	a,r3
   02A6 F8                  786 	mov	r0,a
   02A7 8C 01               787 	mov	ar1,r4
                            788 ;	genPointerGet
                            789 ;	genGenPointerGet
   02A9 8F 82               790 	mov	dpl,r7
   02AB 88 83               791 	mov	dph,r0
   02AD 89 F0               792 	mov	b,r1
   02AF 12 0D 88            793 	lcall	__gptrget
                            794 ;	../myproject.c:158: bit_bang_tx(print_this);
                            795 ;	genCall
   02B2 FF                  796 	mov	r7,a
                            797 ;	Peephole 244.c	loading dpl from a instead of r7
   02B3 F5 82               798 	mov	dpl,a
   02B5 C0 02               799 	push	ar2
   02B7 C0 03               800 	push	ar3
   02B9 C0 04               801 	push	ar4
   02BB C0 05               802 	push	ar5
   02BD C0 06               803 	push	ar6
   02BF 12 02 D0            804 	lcall	_bit_bang_tx
   02C2 D0 06               805 	pop	ar6
   02C4 D0 05               806 	pop	ar5
   02C6 D0 04               807 	pop	ar4
   02C8 D0 03               808 	pop	ar3
   02CA D0 02               809 	pop	ar2
                            810 ;	../myproject.c:155: for(i=0;i<size_bufptr;i++)
                            811 ;	genPlus
                            812 ;     genPlusIncr
   02CC 0E                  813 	inc	r6
                            814 ;	Peephole 112.b	changed ljmp to sjmp
   02CD 80 CD               815 	sjmp	00101$
   02CF                     816 00105$:
   02CF 22                  817 	ret
                            818 ;------------------------------------------------------------
                            819 ;Allocation info for local variables in function 'bit_bang_tx'
                            820 ;------------------------------------------------------------
                            821 ;txchar                    Allocated with name '_bit_bang_tx_txchar_1_1'
                            822 ;lcdPtr                    Allocated with name '_bit_bang_tx_lcdPtr_1_1'
                            823 ;------------------------------------------------------------
                            824 ;	../myproject.c:166: void bit_bang_tx(char txchar)
                            825 ;	-----------------------------------------
                            826 ;	 function bit_bang_tx
                            827 ;	-----------------------------------------
   02D0                     828 _bit_bang_tx:
                            829 ;	genReceive
   02D0 E5 82               830 	mov	a,dpl
   02D2 90 00 09            831 	mov	dptr,#_bit_bang_tx_txchar_1_1
   02D5 F0                  832 	movx	@dptr,a
                            833 ;	../myproject.c:173: lcdPtr = txchar;
                            834 ;	genAssign
   02D6 90 00 09            835 	mov	dptr,#_bit_bang_tx_txchar_1_1
   02D9 E0                  836 	movx	a,@dptr
                            837 ;	genAssign
   02DA FA                  838 	mov	r2,a
   02DB 90 60 00            839 	mov	dptr,#_bit_bang_tx_lcdPtr_1_1
                            840 ;	Peephole 100	removed redundant mov
   02DE F0                  841 	movx	@dptr,a
                            842 ;	../myproject.c:194: __endasm;
                            843 ;	genInline
   02DF 75 83 60            844 	                                MOV DPH,#0x60
   02E2 75 82 00            845 	                                MOV DPL,#00
   02E5 E0                  846 	                                MOVX A,@DPTR
   02E6 C2 94               847 	                                CLR P1.4
   02E8 78 2D               848 	                                MOV R0,#45
   02EA                     849         here2:
   02EA D8 FE               850 	DJNZ R0,here2
   02EC 79 08               851 	                                MOV R1,#8
   02EE                     852         cynxt:
   02EE 13                  853 	RRC A
   02EF 92 94               854 	                                MOV P1.4,C
   02F1 78 2D               855 	                                MOV R0,#45
   02F3                     856         here1:
   02F3 D8 FE               857 	DJNZ R0,here1
   02F5 D9 F7               858 	                                DJNZ R1,cynxt
   02F7 D2 94               859 	                                SETB P1.4
   02F9 13                  860 	                                RRC A
   02FA 78 2D               861 	                                MOV R0,#45
   02FC                     862         here3:
   02FC D8 FE               863 	DJNZ R0,here3
                            864 ;	Peephole 300	removed redundant label 00101$
   02FE 22                  865 	ret
                            866 	.area CSEG    (CODE)
                            867 	.area CONST   (CODE)
   0F11                     868 __str_0:
   0F11 47 6F 74 20 68 65   869 	.ascii "Got here"
        72 65
   0F19 00                  870 	.db 0x00
   0F1A                     871 __str_1:
   0F1A 61                  872 	.ascii "a"
   0F1B 00                  873 	.db 0x00
                            874 	.area XINIT   (CODE)
   0F28                     875 __xinit__ClearScreen:
   0F28 7C                  876 	.db #0x7C
   0F29 00                  877 	.db #0x00
   0F2A                     878 __xinit__Demo:
   0F2A 7C                  879 	.db #0x7C
   0F2B 04                  880 	.db #0x04
   0F2C                     881 __xinit__set_baud_9600:
   0F2C 7C                  882 	.db #0x7C
   0F2D 07                  883 	.db #0x07
   0F2E 32                  884 	.db #0x32
   0F2F                     885 __xinit__Line:
   0F2F 7C                  886 	.db #0x7C
   0F30 0C                  887 	.db #0x0C
   0F31 10                  888 	.db #0x10
   0F32 10                  889 	.db #0x10
   0F33 20                  890 	.db #0x20
   0F34 20                  891 	.db #0x20
   0F35                     892 __xinit__block_erase:
   0F35 7C                  893 	.db #0x7C
   0F36 05                  894 	.db #0x05
   0F37 00                  895 	.db #0x00
   0F38 00                  896 	.db #0x00
   0F39 7F                  897 	.db #0x7F
   0F3A 3F                  898 	.db #0x3F
