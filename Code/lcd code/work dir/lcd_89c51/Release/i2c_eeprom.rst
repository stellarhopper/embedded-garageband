                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.0 #4309 (Jul 28 2006)
                              4 ; This file generated Wed Apr 13 21:15:05 2011
                              5 ;--------------------------------------------------------
                              6 	.module i2c_eeprom
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _P1_1
                             13 	.globl _P1_0
                             14 	.globl _TF1
                             15 	.globl _TR1
                             16 	.globl _TF0
                             17 	.globl _TR0
                             18 	.globl _IE1
                             19 	.globl _IT1
                             20 	.globl _IE0
                             21 	.globl _IT0
                             22 	.globl _SM0
                             23 	.globl _SM1
                             24 	.globl _SM2
                             25 	.globl _REN
                             26 	.globl _TB8
                             27 	.globl _RB8
                             28 	.globl _TI
                             29 	.globl _RI
                             30 	.globl _CY
                             31 	.globl _AC
                             32 	.globl _F0
                             33 	.globl _RS1
                             34 	.globl _RS0
                             35 	.globl _OV
                             36 	.globl _F1
                             37 	.globl _P
                             38 	.globl _RD
                             39 	.globl _WR
                             40 	.globl _T1
                             41 	.globl _T0
                             42 	.globl _INT1
                             43 	.globl _INT0
                             44 	.globl _TXD0
                             45 	.globl _TXD
                             46 	.globl _RXD0
                             47 	.globl _RXD
                             48 	.globl _P3_7
                             49 	.globl _P3_6
                             50 	.globl _P3_5
                             51 	.globl _P3_4
                             52 	.globl _P3_3
                             53 	.globl _P3_2
                             54 	.globl _P3_1
                             55 	.globl _P3_0
                             56 	.globl _P2_7
                             57 	.globl _P2_6
                             58 	.globl _P2_5
                             59 	.globl _P2_4
                             60 	.globl _P2_3
                             61 	.globl _P2_2
                             62 	.globl _P2_1
                             63 	.globl _P2_0
                             64 	.globl _P1_7
                             65 	.globl _P1_6
                             66 	.globl _P1_5
                             67 	.globl _P1_4
                             68 	.globl _P1_3
                             69 	.globl _P1_2
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
                            221 	.globl _cursor_position
                            222 	.globl _start_busy_chk
                            223 	.globl _lcdPtr
                            224 	.globl _seq_read_PARM_3
                            225 	.globl _seq_read_PARM_2
                            226 	.globl _page_write_PARM_2
                            227 	.globl _byte_write_PARM_2
                            228 	.globl _offset_addr
                            229 	.globl _page_bits
                            230 	.globl _split_addr
                            231 	.globl _start
                            232 	.globl _stop
                            233 	.globl _clock
                            234 	.globl _write
                            235 	.globl _read
                            236 	.globl _byte_write
                            237 	.globl _page_write
                            238 	.globl _byte_read
                            239 	.globl _seq_read
                            240 	.globl _clear_eeprom
                            241 	.globl _eeprom_reset
                            242 ;--------------------------------------------------------
                            243 ; special function registers
                            244 ;--------------------------------------------------------
                            245 	.area RSEG    (DATA)
                    00C8    246 _T2CON	=	0x00c8
                    00CA    247 _RCAP2L	=	0x00ca
                    00CB    248 _RCAP2H	=	0x00cb
                    00CC    249 _TL2	=	0x00cc
                    00CD    250 _TH2	=	0x00cd
                    008E    251 _AUXR	=	0x008e
                    00A2    252 _AUXR1	=	0x00a2
                    0097    253 _CKRL	=	0x0097
                    008F    254 _CKCKON0	=	0x008f
                    008F    255 _CKCKON1	=	0x008f
                    00FA    256 _CCAP0H	=	0x00fa
                    00FB    257 _CCAP1H	=	0x00fb
                    00FC    258 _CCAP2H	=	0x00fc
                    00FD    259 _CCAP3H	=	0x00fd
                    00FE    260 _CCAP4H	=	0x00fe
                    00EA    261 _CCAP0L	=	0x00ea
                    00EB    262 _CCAP1L	=	0x00eb
                    00EC    263 _CCAP2L	=	0x00ec
                    00ED    264 _CCAP3L	=	0x00ed
                    00EE    265 _CCAP4L	=	0x00ee
                    00DA    266 _CCAPM0	=	0x00da
                    00DB    267 _CCAPM1	=	0x00db
                    00DC    268 _CCAPM2	=	0x00dc
                    00DD    269 _CCAPM3	=	0x00dd
                    00DE    270 _CCAPM4	=	0x00de
                    00D8    271 _CCON	=	0x00d8
                    00F9    272 _CH	=	0x00f9
                    00E9    273 _CL	=	0x00e9
                    00D9    274 _CMOD	=	0x00d9
                    00A8    275 _IEN0	=	0x00a8
                    00B1    276 _IEN1	=	0x00b1
                    00B8    277 _IPL0	=	0x00b8
                    00B7    278 _IPH0	=	0x00b7
                    00B2    279 _IPL1	=	0x00b2
                    00B3    280 _IPH1	=	0x00b3
                    00C0    281 _P4	=	0x00c0
                    00D8    282 _P5	=	0x00d8
                    00A6    283 _WDTRST	=	0x00a6
                    00A7    284 _WDTPRG	=	0x00a7
                    00A9    285 _SADDR	=	0x00a9
                    00B9    286 _SADEN	=	0x00b9
                    00C3    287 _SPCON	=	0x00c3
                    00C4    288 _SPSTA	=	0x00c4
                    00C5    289 _SPDAT	=	0x00c5
                    00C9    290 _T2MOD	=	0x00c9
                    009B    291 _BDRCON	=	0x009b
                    009A    292 _BRL	=	0x009a
                    009C    293 _KBLS	=	0x009c
                    009D    294 _KBE	=	0x009d
                    009E    295 _KBF	=	0x009e
                    00D2    296 _EECON	=	0x00d2
                    00E0    297 _ACC	=	0x00e0
                    00F0    298 _B	=	0x00f0
                    0083    299 _DPH	=	0x0083
                    0083    300 _DP0H	=	0x0083
                    0082    301 _DPL	=	0x0082
                    0082    302 _DP0L	=	0x0082
                    00A8    303 _IE	=	0x00a8
                    00B8    304 _IP	=	0x00b8
                    0080    305 _P0	=	0x0080
                    0090    306 _P1	=	0x0090
                    00A0    307 _P2	=	0x00a0
                    00B0    308 _P3	=	0x00b0
                    0087    309 _PCON	=	0x0087
                    00D0    310 _PSW	=	0x00d0
                    0099    311 _SBUF	=	0x0099
                    0099    312 _SBUF0	=	0x0099
                    0098    313 _SCON	=	0x0098
                    0081    314 _SP	=	0x0081
                    0088    315 _TCON	=	0x0088
                    008C    316 _TH0	=	0x008c
                    008D    317 _TH1	=	0x008d
                    008A    318 _TL0	=	0x008a
                    008B    319 _TL1	=	0x008b
                    0089    320 _TMOD	=	0x0089
                            321 ;--------------------------------------------------------
                            322 ; special function bits
                            323 ;--------------------------------------------------------
                            324 	.area RSEG    (DATA)
                    00AD    325 _ET2	=	0x00ad
                    00BD    326 _PT2	=	0x00bd
                    00C8    327 _T2CON_0	=	0x00c8
                    00C9    328 _T2CON_1	=	0x00c9
                    00CA    329 _T2CON_2	=	0x00ca
                    00CB    330 _T2CON_3	=	0x00cb
                    00CC    331 _T2CON_4	=	0x00cc
                    00CD    332 _T2CON_5	=	0x00cd
                    00CE    333 _T2CON_6	=	0x00ce
                    00CF    334 _T2CON_7	=	0x00cf
                    00C8    335 _CP_RL2	=	0x00c8
                    00C9    336 _C_T2	=	0x00c9
                    00CA    337 _TR2	=	0x00ca
                    00CB    338 _EXEN2	=	0x00cb
                    00CC    339 _TCLK	=	0x00cc
                    00CD    340 _RCLK	=	0x00cd
                    00CE    341 _EXF2	=	0x00ce
                    00CF    342 _TF2	=	0x00cf
                    00DF    343 _CF	=	0x00df
                    00DE    344 _CR	=	0x00de
                    00DC    345 _CCF4	=	0x00dc
                    00DB    346 _CCF3	=	0x00db
                    00DA    347 _CCF2	=	0x00da
                    00D9    348 _CCF1	=	0x00d9
                    00D8    349 _CCF0	=	0x00d8
                    00AE    350 _EC	=	0x00ae
                    00BE    351 _PPCL	=	0x00be
                    00BD    352 _PT2L	=	0x00bd
                    00BC    353 _PLS	=	0x00bc
                    00BB    354 _PT1L	=	0x00bb
                    00BA    355 _PX1L	=	0x00ba
                    00B9    356 _PT0L	=	0x00b9
                    00B8    357 _PX0L	=	0x00b8
                    00C0    358 _P4_0	=	0x00c0
                    00C1    359 _P4_1	=	0x00c1
                    00C2    360 _P4_2	=	0x00c2
                    00C3    361 _P4_3	=	0x00c3
                    00C4    362 _P4_4	=	0x00c4
                    00C5    363 _P4_5	=	0x00c5
                    00C6    364 _P4_6	=	0x00c6
                    00C7    365 _P4_7	=	0x00c7
                    00D8    366 _P5_0	=	0x00d8
                    00D9    367 _P5_1	=	0x00d9
                    00DA    368 _P5_2	=	0x00da
                    00DB    369 _P5_3	=	0x00db
                    00DC    370 _P5_4	=	0x00dc
                    00DD    371 _P5_5	=	0x00dd
                    00DE    372 _P5_6	=	0x00de
                    00DF    373 _P5_7	=	0x00df
                    00F0    374 _BREG_F0	=	0x00f0
                    00F1    375 _BREG_F1	=	0x00f1
                    00F2    376 _BREG_F2	=	0x00f2
                    00F3    377 _BREG_F3	=	0x00f3
                    00F4    378 _BREG_F4	=	0x00f4
                    00F5    379 _BREG_F5	=	0x00f5
                    00F6    380 _BREG_F6	=	0x00f6
                    00F7    381 _BREG_F7	=	0x00f7
                    00A8    382 _EX0	=	0x00a8
                    00A9    383 _ET0	=	0x00a9
                    00AA    384 _EX1	=	0x00aa
                    00AB    385 _ET1	=	0x00ab
                    00AC    386 _ES	=	0x00ac
                    00AF    387 _EA	=	0x00af
                    00B8    388 _PX0	=	0x00b8
                    00B9    389 _PT0	=	0x00b9
                    00BA    390 _PX1	=	0x00ba
                    00BB    391 _PT1	=	0x00bb
                    00BC    392 _PS	=	0x00bc
                    0080    393 _P0_0	=	0x0080
                    0081    394 _P0_1	=	0x0081
                    0082    395 _P0_2	=	0x0082
                    0083    396 _P0_3	=	0x0083
                    0084    397 _P0_4	=	0x0084
                    0085    398 _P0_5	=	0x0085
                    0086    399 _P0_6	=	0x0086
                    0087    400 _P0_7	=	0x0087
                    0092    401 _P1_2	=	0x0092
                    0093    402 _P1_3	=	0x0093
                    0094    403 _P1_4	=	0x0094
                    0095    404 _P1_5	=	0x0095
                    0096    405 _P1_6	=	0x0096
                    0097    406 _P1_7	=	0x0097
                    00A0    407 _P2_0	=	0x00a0
                    00A1    408 _P2_1	=	0x00a1
                    00A2    409 _P2_2	=	0x00a2
                    00A3    410 _P2_3	=	0x00a3
                    00A4    411 _P2_4	=	0x00a4
                    00A5    412 _P2_5	=	0x00a5
                    00A6    413 _P2_6	=	0x00a6
                    00A7    414 _P2_7	=	0x00a7
                    00B0    415 _P3_0	=	0x00b0
                    00B1    416 _P3_1	=	0x00b1
                    00B2    417 _P3_2	=	0x00b2
                    00B3    418 _P3_3	=	0x00b3
                    00B4    419 _P3_4	=	0x00b4
                    00B5    420 _P3_5	=	0x00b5
                    00B6    421 _P3_6	=	0x00b6
                    00B7    422 _P3_7	=	0x00b7
                    00B0    423 _RXD	=	0x00b0
                    00B0    424 _RXD0	=	0x00b0
                    00B1    425 _TXD	=	0x00b1
                    00B1    426 _TXD0	=	0x00b1
                    00B2    427 _INT0	=	0x00b2
                    00B3    428 _INT1	=	0x00b3
                    00B4    429 _T0	=	0x00b4
                    00B5    430 _T1	=	0x00b5
                    00B6    431 _WR	=	0x00b6
                    00B7    432 _RD	=	0x00b7
                    00D0    433 _P	=	0x00d0
                    00D1    434 _F1	=	0x00d1
                    00D2    435 _OV	=	0x00d2
                    00D3    436 _RS0	=	0x00d3
                    00D4    437 _RS1	=	0x00d4
                    00D5    438 _F0	=	0x00d5
                    00D6    439 _AC	=	0x00d6
                    00D7    440 _CY	=	0x00d7
                    0098    441 _RI	=	0x0098
                    0099    442 _TI	=	0x0099
                    009A    443 _RB8	=	0x009a
                    009B    444 _TB8	=	0x009b
                    009C    445 _REN	=	0x009c
                    009D    446 _SM2	=	0x009d
                    009E    447 _SM1	=	0x009e
                    009F    448 _SM0	=	0x009f
                    0088    449 _IT0	=	0x0088
                    0089    450 _IE0	=	0x0089
                    008A    451 _IT1	=	0x008a
                    008B    452 _IE1	=	0x008b
                    008C    453 _TR0	=	0x008c
                    008D    454 _TF0	=	0x008d
                    008E    455 _TR1	=	0x008e
                    008F    456 _TF1	=	0x008f
                    0090    457 _P1_0	=	0x0090
                    0091    458 _P1_1	=	0x0091
                            459 ;--------------------------------------------------------
                            460 ; overlayable register banks
                            461 ;--------------------------------------------------------
                            462 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     463 	.ds 8
                            464 ;--------------------------------------------------------
                            465 ; internal ram data
                            466 ;--------------------------------------------------------
                            467 	.area DSEG    (DATA)
                            468 ;--------------------------------------------------------
                            469 ; overlayable items in internal ram 
                            470 ;--------------------------------------------------------
                            471 	.area OSEG    (OVR,DATA)
                            472 ;--------------------------------------------------------
                            473 ; indirectly addressable internal ram data
                            474 ;--------------------------------------------------------
                            475 	.area ISEG    (DATA)
                            476 ;--------------------------------------------------------
                            477 ; bit data
                            478 ;--------------------------------------------------------
                            479 	.area BSEG    (BIT)
                            480 ;--------------------------------------------------------
                            481 ; paged external ram data
                            482 ;--------------------------------------------------------
                            483 	.area PSEG    (PAG,XDATA)
                            484 ;--------------------------------------------------------
                            485 ; external ram data
                            486 ;--------------------------------------------------------
                            487 	.area XSEG    (XDATA)
   003E                     488 _page_bits::
   003E                     489 	.ds 2
   0040                     490 _offset_addr::
   0040                     491 	.ds 2
   0042                     492 _split_addr_whole_addr_1_1:
   0042                     493 	.ds 2
   0044                     494 _write_byte_1_1:
   0044                     495 	.ds 1
   0045                     496 _write_mask_1_1:
   0045                     497 	.ds 1
   0046                     498 _read_status_1_1:
   0046                     499 	.ds 1
   0047                     500 _read_byte_1_1:
   0047                     501 	.ds 1
   0048                     502 _byte_write_PARM_2:
   0048                     503 	.ds 1
   0049                     504 _byte_write_addr_1_1:
   0049                     505 	.ds 2
   004B                     506 _byte_write_status_1_1:
   004B                     507 	.ds 1
   004C                     508 _page_write_PARM_2:
   004C                     509 	.ds 3
   004F                     510 _page_write_addr_1_1:
   004F                     511 	.ds 2
   0051                     512 _page_write_status_1_1:
   0051                     513 	.ds 1
   0052                     514 _byte_read_addr_1_1:
   0052                     515 	.ds 2
   0054                     516 _byte_read_val_1_1:
   0054                     517 	.ds 1
   0055                     518 _seq_read_PARM_2:
   0055                     519 	.ds 1
   0056                     520 _seq_read_PARM_3:
   0056                     521 	.ds 2
   0058                     522 _seq_read_size_1_1:
   0058                     523 	.ds 2
   005A                     524 _seq_read_num_1_1:
   005A                     525 	.ds 2
                            526 ;--------------------------------------------------------
                            527 ; external initialized ram data
                            528 ;--------------------------------------------------------
                            529 	.area XISEG   (XDATA)
   00D1                     530 _lcdPtr::
   00D1                     531 	.ds 3
   00D4                     532 _start_busy_chk::
   00D4                     533 	.ds 1
   00D5                     534 _cursor_position::
   00D5                     535 	.ds 1
                            536 	.area HOME    (CODE)
                            537 	.area GSINIT0 (CODE)
                            538 	.area GSINIT1 (CODE)
                            539 	.area GSINIT2 (CODE)
                            540 	.area GSINIT3 (CODE)
                            541 	.area GSINIT4 (CODE)
                            542 	.area GSINIT5 (CODE)
                            543 	.area GSINIT  (CODE)
                            544 	.area GSFINAL (CODE)
                            545 	.area CSEG    (CODE)
                            546 ;--------------------------------------------------------
                            547 ; global & static initialisations
                            548 ;--------------------------------------------------------
                            549 	.area HOME    (CODE)
                            550 	.area GSINIT  (CODE)
                            551 	.area GSFINAL (CODE)
                            552 	.area GSINIT  (CODE)
                            553 ;--------------------------------------------------------
                            554 ; Home
                            555 ;--------------------------------------------------------
                            556 	.area HOME    (CODE)
                            557 	.area CSEG    (CODE)
                            558 ;--------------------------------------------------------
                            559 ; code
                            560 ;--------------------------------------------------------
                            561 	.area CSEG    (CODE)
                            562 ;------------------------------------------------------------
                            563 ;Allocation info for local variables in function 'split_addr'
                            564 ;------------------------------------------------------------
                            565 ;whole_addr                Allocated with name '_split_addr_whole_addr_1_1'
                            566 ;tp                        Allocated with name '_split_addr_tp_1_1'
                            567 ;------------------------------------------------------------
                            568 ;	../i2c_eeprom.c:22: unsigned int split_addr(unsigned int whole_addr)
                            569 ;	-----------------------------------------
                            570 ;	 function split_addr
                            571 ;	-----------------------------------------
   17B5                     572 _split_addr:
                    0002    573 	ar2 = 0x02
                    0003    574 	ar3 = 0x03
                    0004    575 	ar4 = 0x04
                    0005    576 	ar5 = 0x05
                    0006    577 	ar6 = 0x06
                    0007    578 	ar7 = 0x07
                    0000    579 	ar0 = 0x00
                    0001    580 	ar1 = 0x01
                            581 ;	genReceive
   17B5 AA 83               582 	mov	r2,dph
   17B7 E5 82               583 	mov	a,dpl
   17B9 90 00 42            584 	mov	dptr,#_split_addr_whole_addr_1_1
   17BC F0                  585 	movx	@dptr,a
   17BD A3                  586 	inc	dptr
   17BE EA                  587 	mov	a,r2
   17BF F0                  588 	movx	@dptr,a
                            589 ;	../i2c_eeprom.c:26: page_bits = (whole_addr/256);
                            590 ;	genAssign
   17C0 90 00 42            591 	mov	dptr,#_split_addr_whole_addr_1_1
   17C3 E0                  592 	movx	a,@dptr
   17C4 FA                  593 	mov	r2,a
   17C5 A3                  594 	inc	dptr
   17C6 E0                  595 	movx	a,@dptr
   17C7 FB                  596 	mov	r3,a
                            597 ;	genRightShift
                            598 ;	genRightShiftLiteral
                            599 ;	genrshTwo
   17C8 8B 04               600 	mov	ar4,r3
   17CA 7D 00               601 	mov	r5,#0x00
                            602 ;	genAssign
   17CC 90 00 3E            603 	mov	dptr,#_page_bits
   17CF EC                  604 	mov	a,r4
   17D0 F0                  605 	movx	@dptr,a
   17D1 A3                  606 	inc	dptr
   17D2 ED                  607 	mov	a,r5
   17D3 F0                  608 	movx	@dptr,a
                            609 ;	../i2c_eeprom.c:28: offset_addr = (whole_addr % 256);
                            610 ;	genAnd
   17D4 90 00 40            611 	mov	dptr,#_offset_addr
   17D7 EA                  612 	mov	a,r2
   17D8 F0                  613 	movx	@dptr,a
   17D9 A3                  614 	inc	dptr
                            615 ;	Peephole 181	changed mov to clr
   17DA E4                  616 	clr	a
   17DB F0                  617 	movx	@dptr,a
                            618 ;	../i2c_eeprom.c:30: if(page_bits > 7)
                            619 ;	genCmpGt
                            620 ;	genCmp
   17DC C3                  621 	clr	c
   17DD 74 07               622 	mov	a,#0x07
   17DF 9C                  623 	subb	a,r4
                            624 ;	Peephole 181	changed mov to clr
   17E0 E4                  625 	clr	a
   17E1 9D                  626 	subb	a,r5
                            627 ;	genIfxJump
                            628 ;	Peephole 108.a	removed ljmp by inverse jump logic
   17E2 50 1D               629 	jnc	00102$
                            630 ;	Peephole 300	removed redundant label 00107$
                            631 ;	../i2c_eeprom.c:32: printf("invalid Address Range: %d\n\r",whole_addr);
                            632 ;	genIpush
   17E4 C0 02               633 	push	ar2
   17E6 C0 03               634 	push	ar3
                            635 ;	genIpush
   17E8 74 8A               636 	mov	a,#__str_0
   17EA C0 E0               637 	push	acc
   17EC 74 35               638 	mov	a,#(__str_0 >> 8)
   17EE C0 E0               639 	push	acc
   17F0 74 80               640 	mov	a,#0x80
   17F2 C0 E0               641 	push	acc
                            642 ;	genCall
   17F4 12 24 DB            643 	lcall	_printf
   17F7 E5 81               644 	mov	a,sp
   17F9 24 FB               645 	add	a,#0xfb
   17FB F5 81               646 	mov	sp,a
                            647 ;	../i2c_eeprom.c:33: return ERROR;
                            648 ;	genRet
                            649 ;	Peephole 182.b	used 16 bit load of dptr
   17FD 90 00 00            650 	mov	dptr,#0x0000
                            651 ;	Peephole 112.b	changed ljmp to sjmp
                            652 ;	Peephole 251.b	replaced sjmp to ret with ret
   1800 22                  653 	ret
   1801                     654 00102$:
                            655 ;	../i2c_eeprom.c:38: page_bits = page_bits & 0x07;
                            656 ;	genAnd
   1801 53 04 07            657 	anl	ar4,#0x07
                            658 ;	../i2c_eeprom.c:39: page_bits = page_bits << 1;
                            659 ;	genLeftShift
                            660 ;	genLeftShiftLiteral
                            661 ;	genlshTwo
                            662 ;	peephole 177.g	optimized mov sequence
                            663 ;	Peephole 181	changed mov to clr
   1804 E4                  664 	clr	a
   1805 FD                  665 	mov	r5,a
   1806 CC                  666 	xch	a,r4
   1807 25 E0               667 	add	a,acc
   1809 CC                  668 	xch	a,r4
   180A 33                  669 	rlc	a
   180B FD                  670 	mov	r5,a
                            671 ;	../i2c_eeprom.c:40: page_bits = page_bits & 0x0E;
                            672 ;	genAnd
   180C 90 00 3E            673 	mov	dptr,#_page_bits
   180F 74 0E               674 	mov	a,#0x0E
   1811 5C                  675 	anl	a,r4
   1812 F0                  676 	movx	@dptr,a
   1813 A3                  677 	inc	dptr
                            678 ;	Peephole 181	changed mov to clr
   1814 E4                  679 	clr	a
   1815 F0                  680 	movx	@dptr,a
                            681 ;	../i2c_eeprom.c:45: return SUCCESS;
                            682 ;	genRet
                            683 ;	Peephole 182.b	used 16 bit load of dptr
   1816 90 00 01            684 	mov	dptr,#0x0001
                            685 ;	Peephole 300	removed redundant label 00104$
   1819 22                  686 	ret
                            687 ;------------------------------------------------------------
                            688 ;Allocation info for local variables in function 'start'
                            689 ;------------------------------------------------------------
                            690 ;------------------------------------------------------------
                            691 ;	../i2c_eeprom.c:58: void start()
                            692 ;	-----------------------------------------
                            693 ;	 function start
                            694 ;	-----------------------------------------
   181A                     695 _start:
                            696 ;	../i2c_eeprom.c:60: SDA = HIGH;
                            697 ;	genAssign
   181A D2 90               698 	setb	_P1_0
                            699 ;	../i2c_eeprom.c:61: SCL = HIGH;
                            700 ;	genAssign
   181C D2 91               701 	setb	_P1_1
                            702 ;	../i2c_eeprom.c:62: NOP;
                            703 ;	genInline
   181E 00                  704 	 nop 
                            705 ;	../i2c_eeprom.c:63: SDA = LOW;
                            706 ;	genAssign
   181F C2 90               707 	clr	_P1_0
                            708 ;	../i2c_eeprom.c:64: NOP;
                            709 ;	genInline
   1821 00                  710 	 nop 
                            711 ;	../i2c_eeprom.c:65: SCL = LOW;
                            712 ;	genAssign
   1822 C2 91               713 	clr	_P1_1
                            714 ;	Peephole 300	removed redundant label 00101$
   1824 22                  715 	ret
                            716 ;------------------------------------------------------------
                            717 ;Allocation info for local variables in function 'stop'
                            718 ;------------------------------------------------------------
                            719 ;------------------------------------------------------------
                            720 ;	../i2c_eeprom.c:76: void stop()
                            721 ;	-----------------------------------------
                            722 ;	 function stop
                            723 ;	-----------------------------------------
   1825                     724 _stop:
                            725 ;	../i2c_eeprom.c:78: SDA = LOW;
                            726 ;	genAssign
   1825 C2 90               727 	clr	_P1_0
                            728 ;	../i2c_eeprom.c:79: SCL = HIGH;
                            729 ;	genAssign
   1827 D2 91               730 	setb	_P1_1
                            731 ;	../i2c_eeprom.c:80: NOP;
                            732 ;	genInline
   1829 00                  733 	 nop 
                            734 ;	../i2c_eeprom.c:81: SDA = HIGH;
                            735 ;	genAssign
   182A D2 90               736 	setb	_P1_0
                            737 ;	../i2c_eeprom.c:82: NOP;
                            738 ;	genInline
   182C 00                  739 	 nop 
                            740 ;	../i2c_eeprom.c:83: SCL = LOW;
                            741 ;	genAssign
   182D C2 91               742 	clr	_P1_1
                            743 ;	Peephole 300	removed redundant label 00101$
   182F 22                  744 	ret
                            745 ;------------------------------------------------------------
                            746 ;Allocation info for local variables in function 'clock'
                            747 ;------------------------------------------------------------
                            748 ;status                    Allocated with name '_clock_status_1_1'
                            749 ;------------------------------------------------------------
                            750 ;	../i2c_eeprom.c:95: unsigned char clock()
                            751 ;	-----------------------------------------
                            752 ;	 function clock
                            753 ;	-----------------------------------------
   1830                     754 _clock:
                            755 ;	../i2c_eeprom.c:98: SCL = HIGH;
                            756 ;	genAssign
   1830 D2 91               757 	setb	_P1_1
                            758 ;	../i2c_eeprom.c:99: NOP;
                            759 ;	genInline
   1832 00                  760 	 nop 
                            761 ;	../i2c_eeprom.c:100: status = SDA;
                            762 ;	genAssign
   1833 E4                  763 	clr	a
   1834 A2 90               764 	mov	c,_P1_0
   1836 33                  765 	rlc	a
   1837 FA                  766 	mov	r2,a
                            767 ;	../i2c_eeprom.c:101: SCL = LOW;
                            768 ;	genAssign
   1838 C2 91               769 	clr	_P1_1
                            770 ;	../i2c_eeprom.c:102: return (status);
                            771 ;	genRet
   183A 8A 82               772 	mov	dpl,r2
                            773 ;	Peephole 300	removed redundant label 00101$
   183C 22                  774 	ret
                            775 ;------------------------------------------------------------
                            776 ;Allocation info for local variables in function 'write'
                            777 ;------------------------------------------------------------
                            778 ;byte                      Allocated with name '_write_byte_1_1'
                            779 ;mask                      Allocated with name '_write_mask_1_1'
                            780 ;status                    Allocated with name '_write_status_1_1'
                            781 ;------------------------------------------------------------
                            782 ;	../i2c_eeprom.c:114: unsigned char write(unsigned char byte)
                            783 ;	-----------------------------------------
                            784 ;	 function write
                            785 ;	-----------------------------------------
   183D                     786 _write:
                            787 ;	genReceive
   183D E5 82               788 	mov	a,dpl
   183F 90 00 44            789 	mov	dptr,#_write_byte_1_1
   1842 F0                  790 	movx	@dptr,a
                            791 ;	../i2c_eeprom.c:117: unsigned char mask = 0x80;
                            792 ;	genAssign
   1843 90 00 45            793 	mov	dptr,#_write_mask_1_1
   1846 74 80               794 	mov	a,#0x80
   1848 F0                  795 	movx	@dptr,a
                            796 ;	../i2c_eeprom.c:125: return (clock());       /* return the status of SDA line on the 9th pulse */
                            797 ;	genAssign
   1849 90 00 44            798 	mov	dptr,#_write_byte_1_1
   184C E0                  799 	movx	a,@dptr
   184D FA                  800 	mov	r2,a
   184E                     801 00101$:
                            802 ;	../i2c_eeprom.c:120: for ( ; mask > 0 ;  ) {
                            803 ;	genAssign
   184E 90 00 45            804 	mov	dptr,#_write_mask_1_1
   1851 E0                  805 	movx	a,@dptr
                            806 ;	genIfx
   1852 FB                  807 	mov	r3,a
                            808 ;	Peephole 105	removed redundant mov
                            809 ;	genIfxJump
                            810 ;	Peephole 108.c	removed ljmp by inverse jump logic
   1853 60 04               811 	jz	00106$
                            812 ;	Peephole 300	removed redundant label 00114$
                            813 ;	genAssign
   1855 7B 01               814 	mov	r3,#0x01
                            815 ;	Peephole 112.b	changed ljmp to sjmp
   1857 80 02               816 	sjmp	00107$
   1859                     817 00106$:
                            818 ;	genAssign
   1859 7B 00               819 	mov	r3,#0x00
   185B                     820 00107$:
                            821 ;	genIfx
   185B EB                  822 	mov	a,r3
                            823 ;	genIfxJump
                            824 ;	Peephole 108.c	removed ljmp by inverse jump logic
   185C 60 28               825 	jz	00103$
                            826 ;	Peephole 300	removed redundant label 00115$
                            827 ;	../i2c_eeprom.c:121: SDA = (byte & mask) ? ( SET ):( CLEAR ) ;
                            828 ;	genAssign
   185E 90 00 45            829 	mov	dptr,#_write_mask_1_1
   1861 E0                  830 	movx	a,@dptr
                            831 ;	genAnd
   1862 FB                  832 	mov	r3,a
                            833 ;	Peephole 105	removed redundant mov
   1863 5A                  834 	anl	a,r2
                            835 ;	genIfx
                            836 ;	genIfxJump
                            837 ;	Peephole 108.c	removed ljmp by inverse jump logic
   1864 60 04               838 	jz	00108$
                            839 ;	Peephole 300	removed redundant label 00116$
                            840 ;	genAssign
   1866 7B 01               841 	mov	r3,#0x01
                            842 ;	Peephole 112.b	changed ljmp to sjmp
   1868 80 02               843 	sjmp	00109$
   186A                     844 00108$:
                            845 ;	genAssign
   186A 7B 00               846 	mov	r3,#0x00
   186C                     847 00109$:
                            848 ;	genAssign
   186C EB                  849 	mov	a,r3
   186D 24 FF               850 	add	a,#0xff
   186F 92 90               851 	mov	_P1_0,c
                            852 ;	../i2c_eeprom.c:122: mask >>= 1;
                            853 ;	genAssign
   1871 90 00 45            854 	mov	dptr,#_write_mask_1_1
   1874 E0                  855 	movx	a,@dptr
                            856 ;	genRightShift
                            857 ;	genRightShiftLiteral
                            858 ;	genrshOne
   1875 FB                  859 	mov	r3,a
                            860 ;	Peephole 105	removed redundant mov
   1876 C3                  861 	clr	c
   1877 13                  862 	rrc	a
                            863 ;	genAssign
   1878 FB                  864 	mov	r3,a
   1879 90 00 45            865 	mov	dptr,#_write_mask_1_1
                            866 ;	Peephole 100	removed redundant mov
   187C F0                  867 	movx	@dptr,a
                            868 ;	../i2c_eeprom.c:123: clock();
                            869 ;	genCall
   187D C0 02               870 	push	ar2
   187F 12 18 30            871 	lcall	_clock
   1882 D0 02               872 	pop	ar2
                            873 ;	Peephole 112.b	changed ljmp to sjmp
   1884 80 C8               874 	sjmp	00101$
   1886                     875 00103$:
                            876 ;	../i2c_eeprom.c:125: return (clock());       /* return the status of SDA line on the 9th pulse */
                            877 ;	genCall
                            878 ;	genRet
                            879 ;	Peephole 150.a	removed misc moves via dpl before return
                            880 ;	Peephole 253.b	replaced lcall/ret with ljmp
   1886 02 18 30            881 	ljmp	_clock
                            882 ;
                            883 ;------------------------------------------------------------
                            884 ;Allocation info for local variables in function 'read'
                            885 ;------------------------------------------------------------
                            886 ;status                    Allocated with name '_read_status_1_1'
                            887 ;byte                      Allocated with name '_read_byte_1_1'
                            888 ;count                     Allocated with name '_read_count_1_1'
                            889 ;level                     Allocated with name '_read_level_1_1'
                            890 ;------------------------------------------------------------
                            891 ;	../i2c_eeprom.c:139: unsigned char read(unsigned char status)
                            892 ;	-----------------------------------------
                            893 ;	 function read
                            894 ;	-----------------------------------------
   1889                     895 _read:
                            896 ;	genReceive
   1889 E5 82               897 	mov	a,dpl
   188B 90 00 46            898 	mov	dptr,#_read_status_1_1
   188E F0                  899 	movx	@dptr,a
                            900 ;	../i2c_eeprom.c:143: unsigned char byte = 0;
                            901 ;	genAssign
   188F 90 00 47            902 	mov	dptr,#_read_byte_1_1
                            903 ;	Peephole 181	changed mov to clr
   1892 E4                  904 	clr	a
   1893 F0                  905 	movx	@dptr,a
                            906 ;	../i2c_eeprom.c:145: SDA = HIGH;             /* configure SDA as input */
                            907 ;	genAssign
   1894 D2 90               908 	setb	_P1_0
                            909 ;	../i2c_eeprom.c:146: for ( count = 0; count < 8; count++ ) {
                            910 ;	genAssign
   1896 7A 08               911 	mov	r2,#0x08
   1898                     912 00103$:
                            913 ;	../i2c_eeprom.c:147: byte <<= 1;
                            914 ;	genAssign
   1898 90 00 47            915 	mov	dptr,#_read_byte_1_1
   189B E0                  916 	movx	a,@dptr
                            917 ;	genLeftShift
                            918 ;	genLeftShiftLiteral
                            919 ;	genlshOne
                            920 ;	Peephole 105	removed redundant mov
                            921 ;	genAssign
                            922 ;	Peephole 204	removed redundant mov
   189C 25 E0               923 	add	a,acc
   189E FB                  924 	mov	r3,a
   189F 90 00 47            925 	mov	dptr,#_read_byte_1_1
                            926 ;	Peephole 100	removed redundant mov
   18A2 F0                  927 	movx	@dptr,a
                            928 ;	../i2c_eeprom.c:148: level = clock();
                            929 ;	genCall
   18A3 C0 02               930 	push	ar2
   18A5 12 18 30            931 	lcall	_clock
   18A8 AB 82               932 	mov	r3,dpl
   18AA D0 02               933 	pop	ar2
                            934 ;	../i2c_eeprom.c:149: byte |= level;
                            935 ;	genAssign
                            936 ;	genOr
   18AC 90 00 47            937 	mov	dptr,#_read_byte_1_1
   18AF E0                  938 	movx	a,@dptr
   18B0 FC                  939 	mov	r4,a
                            940 ;	Peephole 248.a	optimized or to xdata
   18B1 4B                  941 	orl	a,r3
   18B2 F0                  942 	movx	@dptr,a
                            943 ;	genDjnz
                            944 ;	Peephole 112.b	changed ljmp to sjmp
                            945 ;	Peephole 205	optimized misc jump sequence
   18B3 DA E3               946 	djnz	r2,00103$
                            947 ;	Peephole 300	removed redundant label 00109$
                            948 ;	Peephole 300	removed redundant label 00110$
                            949 ;	../i2c_eeprom.c:146: for ( count = 0; count < 8; count++ ) {
                            950 ;	../i2c_eeprom.c:151: SDA = status;           /* status = 1 :- NACK
                            951 ;	genAssign
   18B5 90 00 46            952 	mov	dptr,#_read_status_1_1
   18B8 E0                  953 	movx	a,@dptr
   18B9 24 FF               954 	add	a,#0xff
   18BB 92 90               955 	mov	_P1_0,c
                            956 ;	../i2c_eeprom.c:153: clock();
                            957 ;	genCall
   18BD 12 18 30            958 	lcall	_clock
                            959 ;	../i2c_eeprom.c:154: return byte;
                            960 ;	genAssign
   18C0 90 00 47            961 	mov	dptr,#_read_byte_1_1
   18C3 E0                  962 	movx	a,@dptr
                            963 ;	genRet
                            964 ;	Peephole 234.a	loading dpl directly from a(ccumulator), r2 not set
   18C4 F5 82               965 	mov	dpl,a
                            966 ;	Peephole 300	removed redundant label 00104$
   18C6 22                  967 	ret
                            968 ;------------------------------------------------------------
                            969 ;Allocation info for local variables in function 'byte_write'
                            970 ;------------------------------------------------------------
                            971 ;val                       Allocated with name '_byte_write_PARM_2'
                            972 ;addr                      Allocated with name '_byte_write_addr_1_1'
                            973 ;status                    Allocated with name '_byte_write_status_1_1'
                            974 ;------------------------------------------------------------
                            975 ;	../i2c_eeprom.c:168: unsigned char byte_write( unsigned int addr, unsigned char val )
                            976 ;	-----------------------------------------
                            977 ;	 function byte_write
                            978 ;	-----------------------------------------
   18C7                     979 _byte_write:
                            980 ;	genReceive
   18C7 AA 83               981 	mov	r2,dph
   18C9 E5 82               982 	mov	a,dpl
   18CB 90 00 49            983 	mov	dptr,#_byte_write_addr_1_1
   18CE F0                  984 	movx	@dptr,a
   18CF A3                  985 	inc	dptr
   18D0 EA                  986 	mov	a,r2
   18D1 F0                  987 	movx	@dptr,a
                            988 ;	../i2c_eeprom.c:170: unsigned char status = ERROR;
                            989 ;	genAssign
   18D2 90 00 4B            990 	mov	dptr,#_byte_write_status_1_1
                            991 ;	Peephole 181	changed mov to clr
   18D5 E4                  992 	clr	a
   18D6 F0                  993 	movx	@dptr,a
                            994 ;	../i2c_eeprom.c:172: split_addr(addr);
                            995 ;	genAssign
   18D7 90 00 49            996 	mov	dptr,#_byte_write_addr_1_1
   18DA E0                  997 	movx	a,@dptr
   18DB FA                  998 	mov	r2,a
   18DC A3                  999 	inc	dptr
   18DD E0                 1000 	movx	a,@dptr
   18DE FB                 1001 	mov	r3,a
                           1002 ;	genCall
   18DF 8A 82              1003 	mov	dpl,r2
   18E1 8B 83              1004 	mov	dph,r3
   18E3 12 17 B5           1005 	lcall	_split_addr
                           1006 ;	../i2c_eeprom.c:173: start();
                           1007 ;	genCall
   18E6 12 18 1A           1008 	lcall	_start
                           1009 ;	../i2c_eeprom.c:174: if ( write(EEPROM_WRITE_ADDR | page_bits) == ACK )
                           1010 ;	genAssign
   18E9 90 00 3E           1011 	mov	dptr,#_page_bits
   18EC E0                 1012 	movx	a,@dptr
   18ED FA                 1013 	mov	r2,a
   18EE A3                 1014 	inc	dptr
   18EF E0                 1015 	movx	a,@dptr
   18F0 FB                 1016 	mov	r3,a
                           1017 ;	genOr
   18F1 43 02 A0           1018 	orl	ar2,#0xA0
                           1019 ;	genCast
                           1020 ;	genCall
   18F4 8A 82              1021 	mov	dpl,r2
   18F6 12 18 3D           1022 	lcall	_write
   18F9 E5 82              1023 	mov	a,dpl
                           1024 ;	genIfx
                           1025 ;	genIfxJump
                           1026 ;	Peephole 108.b	removed ljmp by inverse jump logic
   18FB 70 66              1027 	jnz	00108$
                           1028 ;	Peephole 300	removed redundant label 00115$
                           1029 ;	../i2c_eeprom.c:176: if (write(offset_addr) == ACK )
                           1030 ;	genAssign
   18FD 90 00 40           1031 	mov	dptr,#_offset_addr
   1900 E0                 1032 	movx	a,@dptr
   1901 FA                 1033 	mov	r2,a
   1902 A3                 1034 	inc	dptr
   1903 E0                 1035 	movx	a,@dptr
   1904 FB                 1036 	mov	r3,a
                           1037 ;	genCast
                           1038 ;	genCall
   1905 8A 82              1039 	mov	dpl,r2
   1907 12 18 3D           1040 	lcall	_write
   190A E5 82              1041 	mov	a,dpl
                           1042 ;	genIfx
                           1043 ;	genIfxJump
                           1044 ;	Peephole 108.b	removed ljmp by inverse jump logic
   190C 70 2D              1045 	jnz	00105$
                           1046 ;	Peephole 300	removed redundant label 00116$
                           1047 ;	../i2c_eeprom.c:178: if ( write(val) == ACK )
                           1048 ;	genAssign
   190E 90 00 48           1049 	mov	dptr,#_byte_write_PARM_2
   1911 E0                 1050 	movx	a,@dptr
                           1051 ;	genCall
   1912 FA                 1052 	mov	r2,a
                           1053 ;	Peephole 244.c	loading dpl from a instead of r2
   1913 F5 82              1054 	mov	dpl,a
   1915 12 18 3D           1055 	lcall	_write
   1918 E5 82              1056 	mov	a,dpl
                           1057 ;	genIfx
                           1058 ;	genIfxJump
                           1059 ;	Peephole 108.b	removed ljmp by inverse jump logic
   191A 70 08              1060 	jnz	00102$
                           1061 ;	Peephole 300	removed redundant label 00117$
                           1062 ;	../i2c_eeprom.c:180: status = SUCCESS;
                           1063 ;	genAssign
   191C 90 00 4B           1064 	mov	dptr,#_byte_write_status_1_1
   191F 74 01              1065 	mov	a,#0x01
   1921 F0                 1066 	movx	@dptr,a
                           1067 ;	Peephole 112.b	changed ljmp to sjmp
   1922 80 54              1068 	sjmp	00109$
   1924                    1069 00102$:
                           1070 ;	../i2c_eeprom.c:185: printf("write val failed!!\n\r");
                           1071 ;	genIpush
   1924 74 A6              1072 	mov	a,#__str_1
   1926 C0 E0              1073 	push	acc
   1928 74 35              1074 	mov	a,#(__str_1 >> 8)
   192A C0 E0              1075 	push	acc
   192C 74 80              1076 	mov	a,#0x80
   192E C0 E0              1077 	push	acc
                           1078 ;	genCall
   1930 12 24 DB           1079 	lcall	_printf
   1933 15 81              1080 	dec	sp
   1935 15 81              1081 	dec	sp
   1937 15 81              1082 	dec	sp
                           1083 ;	Peephole 112.b	changed ljmp to sjmp
   1939 80 3D              1084 	sjmp	00109$
   193B                    1085 00105$:
                           1086 ;	../i2c_eeprom.c:190: printf("write low byte failed %x || %x!!\n\r",EEPROM_WRITE_ADDR,page_bits);
                           1087 ;	genIpush
   193B 90 00 3E           1088 	mov	dptr,#_page_bits
   193E E0                 1089 	movx	a,@dptr
   193F C0 E0              1090 	push	acc
   1941 A3                 1091 	inc	dptr
   1942 E0                 1092 	movx	a,@dptr
   1943 C0 E0              1093 	push	acc
                           1094 ;	genIpush
   1945 74 A0              1095 	mov	a,#0xA0
   1947 C0 E0              1096 	push	acc
                           1097 ;	Peephole 181	changed mov to clr
   1949 E4                 1098 	clr	a
   194A C0 E0              1099 	push	acc
                           1100 ;	genIpush
   194C 74 BB              1101 	mov	a,#__str_2
   194E C0 E0              1102 	push	acc
   1950 74 35              1103 	mov	a,#(__str_2 >> 8)
   1952 C0 E0              1104 	push	acc
   1954 74 80              1105 	mov	a,#0x80
   1956 C0 E0              1106 	push	acc
                           1107 ;	genCall
   1958 12 24 DB           1108 	lcall	_printf
   195B E5 81              1109 	mov	a,sp
   195D 24 F9              1110 	add	a,#0xf9
   195F F5 81              1111 	mov	sp,a
                           1112 ;	Peephole 112.b	changed ljmp to sjmp
   1961 80 15              1113 	sjmp	00109$
   1963                    1114 00108$:
                           1115 ;	../i2c_eeprom.c:195: printf("write device id failed!!\n\r");
                           1116 ;	genIpush
   1963 74 DE              1117 	mov	a,#__str_3
   1965 C0 E0              1118 	push	acc
   1967 74 35              1119 	mov	a,#(__str_3 >> 8)
   1969 C0 E0              1120 	push	acc
   196B 74 80              1121 	mov	a,#0x80
   196D C0 E0              1122 	push	acc
                           1123 ;	genCall
   196F 12 24 DB           1124 	lcall	_printf
   1972 15 81              1125 	dec	sp
   1974 15 81              1126 	dec	sp
   1976 15 81              1127 	dec	sp
   1978                    1128 00109$:
                           1129 ;	../i2c_eeprom.c:198: stop();
                           1130 ;	genCall
   1978 12 18 25           1131 	lcall	_stop
                           1132 ;	../i2c_eeprom.c:199: return status;
                           1133 ;	genAssign
   197B 90 00 4B           1134 	mov	dptr,#_byte_write_status_1_1
   197E E0                 1135 	movx	a,@dptr
                           1136 ;	genRet
                           1137 ;	Peephole 234.a	loading dpl directly from a(ccumulator), r2 not set
   197F F5 82              1138 	mov	dpl,a
                           1139 ;	Peephole 300	removed redundant label 00110$
   1981 22                 1140 	ret
                           1141 ;------------------------------------------------------------
                           1142 ;Allocation info for local variables in function 'page_write'
                           1143 ;------------------------------------------------------------
                           1144 ;str                       Allocated with name '_page_write_PARM_2'
                           1145 ;addr                      Allocated with name '_page_write_addr_1_1'
                           1146 ;status                    Allocated with name '_page_write_status_1_1'
                           1147 ;bytes                     Allocated with name '_page_write_bytes_1_1'
                           1148 ;------------------------------------------------------------
                           1149 ;	../i2c_eeprom.c:212: unsigned char page_write(unsigned int addr, const unsigned char *str )
                           1150 ;	-----------------------------------------
                           1151 ;	 function page_write
                           1152 ;	-----------------------------------------
   1982                    1153 _page_write:
                           1154 ;	genReceive
   1982 AA 83              1155 	mov	r2,dph
   1984 E5 82              1156 	mov	a,dpl
   1986 90 00 4F           1157 	mov	dptr,#_page_write_addr_1_1
   1989 F0                 1158 	movx	@dptr,a
   198A A3                 1159 	inc	dptr
   198B EA                 1160 	mov	a,r2
   198C F0                 1161 	movx	@dptr,a
                           1162 ;	../i2c_eeprom.c:214: unsigned char status = ERROR;
                           1163 ;	genAssign
   198D 90 00 51           1164 	mov	dptr,#_page_write_status_1_1
                           1165 ;	Peephole 181	changed mov to clr
   1990 E4                 1166 	clr	a
   1991 F0                 1167 	movx	@dptr,a
                           1168 ;	../i2c_eeprom.c:217: split_addr(addr);
                           1169 ;	genAssign
   1992 90 00 4F           1170 	mov	dptr,#_page_write_addr_1_1
   1995 E0                 1171 	movx	a,@dptr
   1996 FA                 1172 	mov	r2,a
   1997 A3                 1173 	inc	dptr
   1998 E0                 1174 	movx	a,@dptr
   1999 FB                 1175 	mov	r3,a
                           1176 ;	genCall
   199A 8A 82              1177 	mov	dpl,r2
   199C 8B 83              1178 	mov	dph,r3
   199E 12 17 B5           1179 	lcall	_split_addr
                           1180 ;	../i2c_eeprom.c:218: start();
                           1181 ;	genCall
   19A1 12 18 1A           1182 	lcall	_start
                           1183 ;	../i2c_eeprom.c:220: if ( write(EEPROM_WRITE_ADDR | page_bits) == ACK )
                           1184 ;	genAssign
   19A4 90 00 3E           1185 	mov	dptr,#_page_bits
   19A7 E0                 1186 	movx	a,@dptr
   19A8 FA                 1187 	mov	r2,a
   19A9 A3                 1188 	inc	dptr
   19AA E0                 1189 	movx	a,@dptr
   19AB FB                 1190 	mov	r3,a
                           1191 ;	genOr
   19AC 43 02 A0           1192 	orl	ar2,#0xA0
                           1193 ;	genCast
                           1194 ;	genCall
   19AF 8A 82              1195 	mov	dpl,r2
   19B1 12 18 3D           1196 	lcall	_write
   19B4 E5 82              1197 	mov	a,dpl
                           1198 ;	genIfx
                           1199 ;	genIfxJump
   19B6 60 03              1200 	jz	00124$
   19B8 02 1A 88           1201 	ljmp	00110$
   19BB                    1202 00124$:
                           1203 ;	../i2c_eeprom.c:222: if ( write(offset_addr) == ACK )
                           1204 ;	genAssign
   19BB 90 00 40           1205 	mov	dptr,#_offset_addr
   19BE E0                 1206 	movx	a,@dptr
   19BF FA                 1207 	mov	r2,a
   19C0 A3                 1208 	inc	dptr
   19C1 E0                 1209 	movx	a,@dptr
   19C2 FB                 1210 	mov	r3,a
                           1211 ;	genCast
                           1212 ;	genCall
   19C3 8A 82              1213 	mov	dpl,r2
   19C5 12 18 3D           1214 	lcall	_write
   19C8 E5 82              1215 	mov	a,dpl
                           1216 ;	genIfx
                           1217 ;	genIfxJump
   19CA 60 03              1218 	jz	00125$
   19CC 02 1A 71           1219 	ljmp	00107$
   19CF                    1220 00125$:
                           1221 ;	../i2c_eeprom.c:224: for ( bytes = 0; str[bytes]; bytes++ )
                           1222 ;	genAssign
   19CF 90 00 4C           1223 	mov	dptr,#_page_write_PARM_2
   19D2 E0                 1224 	movx	a,@dptr
   19D3 FA                 1225 	mov	r2,a
   19D4 A3                 1226 	inc	dptr
   19D5 E0                 1227 	movx	a,@dptr
   19D6 FB                 1228 	mov	r3,a
   19D7 A3                 1229 	inc	dptr
   19D8 E0                 1230 	movx	a,@dptr
   19D9 FC                 1231 	mov	r4,a
                           1232 ;	genAssign
   19DA 7D 00              1233 	mov	r5,#0x00
   19DC                    1234 00112$:
                           1235 ;	genPlus
                           1236 ;	Peephole 236.g	used r5 instead of ar5
   19DC ED                 1237 	mov	a,r5
                           1238 ;	Peephole 236.a	used r2 instead of ar2
   19DD 2A                 1239 	add	a,r2
   19DE FE                 1240 	mov	r6,a
                           1241 ;	Peephole 181	changed mov to clr
   19DF E4                 1242 	clr	a
                           1243 ;	Peephole 236.b	used r3 instead of ar3
   19E0 3B                 1244 	addc	a,r3
   19E1 FF                 1245 	mov	r7,a
   19E2 8C 00              1246 	mov	ar0,r4
                           1247 ;	genPointerGet
                           1248 ;	genGenPointerGet
   19E4 8E 82              1249 	mov	dpl,r6
   19E6 8F 83              1250 	mov	dph,r7
   19E8 88 F0              1251 	mov	b,r0
   19EA 12 2D 7A           1252 	lcall	__gptrget
                           1253 ;	genIfx
   19ED FE                 1254 	mov	r6,a
                           1255 ;	Peephole 105	removed redundant mov
                           1256 ;	genIfxJump
   19EE 70 03              1257 	jnz	00126$
   19F0 02 1A 69           1258 	ljmp	00115$
   19F3                    1259 00126$:
                           1260 ;	../i2c_eeprom.c:226: if (bytes <= (15- offset_addr))
                           1261 ;	genIpush
   19F3 C0 02              1262 	push	ar2
   19F5 C0 03              1263 	push	ar3
   19F7 C0 04              1264 	push	ar4
                           1265 ;	genAssign
   19F9 90 00 40           1266 	mov	dptr,#_offset_addr
   19FC E0                 1267 	movx	a,@dptr
   19FD FF                 1268 	mov	r7,a
   19FE A3                 1269 	inc	dptr
   19FF E0                 1270 	movx	a,@dptr
   1A00 F8                 1271 	mov	r0,a
                           1272 ;	genMinus
   1A01 74 0F              1273 	mov	a,#0x0F
   1A03 C3                 1274 	clr	c
                           1275 ;	Peephole 236.l	used r7 instead of ar7
   1A04 9F                 1276 	subb	a,r7
   1A05 FF                 1277 	mov	r7,a
                           1278 ;	Peephole 181	changed mov to clr
   1A06 E4                 1279 	clr	a
                           1280 ;	Peephole 236.l	used r0 instead of ar0
   1A07 98                 1281 	subb	a,r0
   1A08 F8                 1282 	mov	r0,a
                           1283 ;	genCast
   1A09 8D 01              1284 	mov	ar1,r5
   1A0B 7A 00              1285 	mov	r2,#0x00
                           1286 ;	genCmpGt
                           1287 ;	genCmp
   1A0D C3                 1288 	clr	c
   1A0E EF                 1289 	mov	a,r7
   1A0F 99                 1290 	subb	a,r1
   1A10 E8                 1291 	mov	a,r0
   1A11 9A                 1292 	subb	a,r2
                           1293 ;	genIpop
                           1294 ;	genIfx
                           1295 ;	genIfxJump
                           1296 ;	Peephole 108.b	removed ljmp by inverse jump logic
                           1297 ;	Peephole 129.d	optimized condition
   1A12 D0 04              1298 	pop	ar4
   1A14 D0 03              1299 	pop	ar3
   1A16 D0 02              1300 	pop	ar2
   1A18 40 3E              1301 	jc	00104$
                           1302 ;	Peephole 300	removed redundant label 00127$
                           1303 ;	../i2c_eeprom.c:228: if (write(str[bytes]) != ACK)
                           1304 ;	genCall
   1A1A 8E 82              1305 	mov	dpl,r6
   1A1C C0 02              1306 	push	ar2
   1A1E C0 03              1307 	push	ar3
   1A20 C0 04              1308 	push	ar4
   1A22 C0 05              1309 	push	ar5
   1A24 12 18 3D           1310 	lcall	_write
   1A27 AE 82              1311 	mov	r6,dpl
   1A29 D0 05              1312 	pop	ar5
   1A2B D0 04              1313 	pop	ar4
   1A2D D0 03              1314 	pop	ar3
   1A2F D0 02              1315 	pop	ar2
                           1316 ;	genCmpEq
                           1317 ;	gencjneshort
   1A31 BE 00 02           1318 	cjne	r6,#0x00,00128$
                           1319 ;	Peephole 112.b	changed ljmp to sjmp
   1A34 80 2F              1320 	sjmp	00114$
   1A36                    1321 00128$:
                           1322 ;	../i2c_eeprom.c:230: printf("page write to EEPROM failed!!\n\r");
                           1323 ;	genIpush
   1A36 74 F9              1324 	mov	a,#__str_4
   1A38 C0 E0              1325 	push	acc
   1A3A 74 35              1326 	mov	a,#(__str_4 >> 8)
   1A3C C0 E0              1327 	push	acc
   1A3E 74 80              1328 	mov	a,#0x80
   1A40 C0 E0              1329 	push	acc
                           1330 ;	genCall
   1A42 12 24 DB           1331 	lcall	_printf
   1A45 15 81              1332 	dec	sp
   1A47 15 81              1333 	dec	sp
   1A49 15 81              1334 	dec	sp
                           1335 ;	../i2c_eeprom.c:232: stop();
                           1336 ;	genCall
   1A4B 12 18 25           1337 	lcall	_stop
                           1338 ;	../i2c_eeprom.c:233: delay_millisec(10);
                           1339 ;	genCall
                           1340 ;	Peephole 182.b	used 16 bit load of dptr
   1A4E 90 00 0A           1341 	mov	dptr,#0x000A
   1A51 12 1E 77           1342 	lcall	_delay_millisec
                           1343 ;	../i2c_eeprom.c:234: return status;
                           1344 ;	genRet
   1A54 75 82 00           1345 	mov	dpl,#0x00
                           1346 ;	Peephole 112.b	changed ljmp to sjmp
                           1347 ;	Peephole 251.b	replaced sjmp to ret with ret
   1A57 22                 1348 	ret
   1A58                    1349 00104$:
                           1350 ;	../i2c_eeprom.c:242: stop();
                           1351 ;	genCall
   1A58 12 18 25           1352 	lcall	_stop
                           1353 ;	../i2c_eeprom.c:243: delay_millisec(10);
                           1354 ;	genCall
                           1355 ;	Peephole 182.b	used 16 bit load of dptr
   1A5B 90 00 0A           1356 	mov	dptr,#0x000A
   1A5E 12 1E 77           1357 	lcall	_delay_millisec
                           1358 ;	../i2c_eeprom.c:245: return status;
                           1359 ;	genRet
   1A61 75 82 01           1360 	mov	dpl,#0x01
                           1361 ;	Peephole 112.b	changed ljmp to sjmp
                           1362 ;	Peephole 251.b	replaced sjmp to ret with ret
   1A64 22                 1363 	ret
   1A65                    1364 00114$:
                           1365 ;	../i2c_eeprom.c:224: for ( bytes = 0; str[bytes]; bytes++ )
                           1366 ;	genPlus
                           1367 ;     genPlusIncr
   1A65 0D                 1368 	inc	r5
   1A66 02 19 DC           1369 	ljmp	00112$
   1A69                    1370 00115$:
                           1371 ;	../i2c_eeprom.c:248: status = SUCCESS;
                           1372 ;	genAssign
   1A69 90 00 51           1373 	mov	dptr,#_page_write_status_1_1
   1A6C 74 01              1374 	mov	a,#0x01
   1A6E F0                 1375 	movx	@dptr,a
                           1376 ;	Peephole 112.b	changed ljmp to sjmp
   1A6F 80 2C              1377 	sjmp	00111$
   1A71                    1378 00107$:
                           1379 ;	../i2c_eeprom.c:251: printf("write low byte failed!!\n\r");
                           1380 ;	genIpush
   1A71 74 19              1381 	mov	a,#__str_5
   1A73 C0 E0              1382 	push	acc
   1A75 74 36              1383 	mov	a,#(__str_5 >> 8)
   1A77 C0 E0              1384 	push	acc
   1A79 74 80              1385 	mov	a,#0x80
   1A7B C0 E0              1386 	push	acc
                           1387 ;	genCall
   1A7D 12 24 DB           1388 	lcall	_printf
   1A80 15 81              1389 	dec	sp
   1A82 15 81              1390 	dec	sp
   1A84 15 81              1391 	dec	sp
                           1392 ;	Peephole 112.b	changed ljmp to sjmp
   1A86 80 15              1393 	sjmp	00111$
   1A88                    1394 00110$:
                           1395 ;	../i2c_eeprom.c:254: printf("write device id failed!!\n\r");
                           1396 ;	genIpush
   1A88 74 DE              1397 	mov	a,#__str_3
   1A8A C0 E0              1398 	push	acc
   1A8C 74 35              1399 	mov	a,#(__str_3 >> 8)
   1A8E C0 E0              1400 	push	acc
   1A90 74 80              1401 	mov	a,#0x80
   1A92 C0 E0              1402 	push	acc
                           1403 ;	genCall
   1A94 12 24 DB           1404 	lcall	_printf
   1A97 15 81              1405 	dec	sp
   1A99 15 81              1406 	dec	sp
   1A9B 15 81              1407 	dec	sp
   1A9D                    1408 00111$:
                           1409 ;	../i2c_eeprom.c:256: stop();
                           1410 ;	genCall
   1A9D 12 18 25           1411 	lcall	_stop
                           1412 ;	../i2c_eeprom.c:257: delay_millisec(10);
                           1413 ;	genCall
                           1414 ;	Peephole 182.b	used 16 bit load of dptr
   1AA0 90 00 0A           1415 	mov	dptr,#0x000A
   1AA3 12 1E 77           1416 	lcall	_delay_millisec
                           1417 ;	../i2c_eeprom.c:258: return status;
                           1418 ;	genAssign
   1AA6 90 00 51           1419 	mov	dptr,#_page_write_status_1_1
   1AA9 E0                 1420 	movx	a,@dptr
                           1421 ;	genRet
                           1422 ;	Peephole 234.a	loading dpl directly from a(ccumulator), r2 not set
   1AAA F5 82              1423 	mov	dpl,a
                           1424 ;	Peephole 300	removed redundant label 00116$
   1AAC 22                 1425 	ret
                           1426 ;------------------------------------------------------------
                           1427 ;Allocation info for local variables in function 'byte_read'
                           1428 ;------------------------------------------------------------
                           1429 ;addr                      Allocated with name '_byte_read_addr_1_1'
                           1430 ;val                       Allocated with name '_byte_read_val_1_1'
                           1431 ;------------------------------------------------------------
                           1432 ;	../i2c_eeprom.c:270: unsigned char byte_read( unsigned int addr )
                           1433 ;	-----------------------------------------
                           1434 ;	 function byte_read
                           1435 ;	-----------------------------------------
   1AAD                    1436 _byte_read:
                           1437 ;	genReceive
   1AAD AA 83              1438 	mov	r2,dph
   1AAF E5 82              1439 	mov	a,dpl
   1AB1 90 00 52           1440 	mov	dptr,#_byte_read_addr_1_1
   1AB4 F0                 1441 	movx	@dptr,a
   1AB5 A3                 1442 	inc	dptr
   1AB6 EA                 1443 	mov	a,r2
   1AB7 F0                 1444 	movx	@dptr,a
                           1445 ;	../i2c_eeprom.c:272: unsigned char val = ERROR;
                           1446 ;	genAssign
   1AB8 90 00 54           1447 	mov	dptr,#_byte_read_val_1_1
                           1448 ;	Peephole 181	changed mov to clr
                           1449 ;	../i2c_eeprom.c:273: offset_addr=0;
                           1450 ;	genAssign
                           1451 ;	Peephole 219.a	removed redundant clear
   1ABB E4                 1452 	clr	a
   1ABC F0                 1453 	movx	@dptr,a
   1ABD 90 00 40           1454 	mov	dptr,#_offset_addr
   1AC0 F0                 1455 	movx	@dptr,a
   1AC1 A3                 1456 	inc	dptr
   1AC2 F0                 1457 	movx	@dptr,a
                           1458 ;	../i2c_eeprom.c:274: page_bits=0;
                           1459 ;	genAssign
   1AC3 90 00 3E           1460 	mov	dptr,#_page_bits
   1AC6 E4                 1461 	clr	a
   1AC7 F0                 1462 	movx	@dptr,a
   1AC8 A3                 1463 	inc	dptr
   1AC9 F0                 1464 	movx	@dptr,a
                           1465 ;	../i2c_eeprom.c:275: split_addr(addr);
                           1466 ;	genAssign
   1ACA 90 00 52           1467 	mov	dptr,#_byte_read_addr_1_1
   1ACD E0                 1468 	movx	a,@dptr
   1ACE FA                 1469 	mov	r2,a
   1ACF A3                 1470 	inc	dptr
   1AD0 E0                 1471 	movx	a,@dptr
   1AD1 FB                 1472 	mov	r3,a
                           1473 ;	genCall
   1AD2 8A 82              1474 	mov	dpl,r2
   1AD4 8B 83              1475 	mov	dph,r3
   1AD6 12 17 B5           1476 	lcall	_split_addr
                           1477 ;	../i2c_eeprom.c:277: start();
                           1478 ;	genCall
   1AD9 12 18 1A           1479 	lcall	_start
                           1480 ;	../i2c_eeprom.c:279: if ( write(EEPROM_WRITE_ADDR | page_bits) == ACK )
                           1481 ;	genAssign
   1ADC 90 00 3E           1482 	mov	dptr,#_page_bits
   1ADF E0                 1483 	movx	a,@dptr
   1AE0 FA                 1484 	mov	r2,a
   1AE1 A3                 1485 	inc	dptr
   1AE2 E0                 1486 	movx	a,@dptr
   1AE3 FB                 1487 	mov	r3,a
                           1488 ;	genOr
   1AE4 43 02 A0           1489 	orl	ar2,#0xA0
                           1490 ;	genCast
                           1491 ;	genCall
   1AE7 8A 82              1492 	mov	dpl,r2
   1AE9 12 18 3D           1493 	lcall	_write
   1AEC E5 82              1494 	mov	a,dpl
                           1495 ;	genIfx
                           1496 ;	genIfxJump
   1AEE 60 03              1497 	jz	00115$
   1AF0 02 1B 79           1498 	ljmp	00108$
   1AF3                    1499 00115$:
                           1500 ;	../i2c_eeprom.c:281: if ( write(offset_addr) == ACK )
                           1501 ;	genAssign
   1AF3 90 00 40           1502 	mov	dptr,#_offset_addr
   1AF6 E0                 1503 	movx	a,@dptr
   1AF7 FA                 1504 	mov	r2,a
   1AF8 A3                 1505 	inc	dptr
   1AF9 E0                 1506 	movx	a,@dptr
   1AFA FB                 1507 	mov	r3,a
                           1508 ;	genCast
                           1509 ;	genCall
   1AFB 8A 82              1510 	mov	dpl,r2
   1AFD 12 18 3D           1511 	lcall	_write
   1B00 E5 82              1512 	mov	a,dpl
                           1513 ;	genIfx
                           1514 ;	genIfxJump
                           1515 ;	Peephole 108.b	removed ljmp by inverse jump logic
   1B02 70 4D              1516 	jnz	00105$
                           1517 ;	Peephole 300	removed redundant label 00116$
                           1518 ;	../i2c_eeprom.c:284: start();
                           1519 ;	genCall
   1B04 12 18 1A           1520 	lcall	_start
                           1521 ;	../i2c_eeprom.c:285: if ( write(EEPROM_READ_ADDR | page_bits) == ACK)
                           1522 ;	genAssign
   1B07 90 00 3E           1523 	mov	dptr,#_page_bits
   1B0A E0                 1524 	movx	a,@dptr
   1B0B FA                 1525 	mov	r2,a
   1B0C A3                 1526 	inc	dptr
   1B0D E0                 1527 	movx	a,@dptr
   1B0E FB                 1528 	mov	r3,a
                           1529 ;	genOr
   1B0F 43 02 A1           1530 	orl	ar2,#0xA1
                           1531 ;	genCast
                           1532 ;	genCall
   1B12 8A 82              1533 	mov	dpl,r2
   1B14 12 18 3D           1534 	lcall	_write
   1B17 E5 82              1535 	mov	a,dpl
                           1536 ;	genIfx
                           1537 ;	genIfxJump
                           1538 ;	Peephole 108.b	removed ljmp by inverse jump logic
   1B19 70 0E              1539 	jnz	00102$
                           1540 ;	Peephole 300	removed redundant label 00117$
                           1541 ;	../i2c_eeprom.c:287: val = read(NACK);
                           1542 ;	genCall
   1B1B 75 82 01           1543 	mov	dpl,#0x01
   1B1E 12 18 89           1544 	lcall	_read
   1B21 E5 82              1545 	mov	a,dpl
                           1546 ;	genAssign
   1B23 90 00 54           1547 	mov	dptr,#_byte_read_val_1_1
   1B26 F0                 1548 	movx	@dptr,a
                           1549 ;	Peephole 112.b	changed ljmp to sjmp
   1B27 80 65              1550 	sjmp	00109$
   1B29                    1551 00102$:
                           1552 ;	../i2c_eeprom.c:291: printf("read_byte: Read id failed %x %x!!!\n\r",EEPROM_READ_ADDR, page_bits);
                           1553 ;	genIpush
   1B29 90 00 3E           1554 	mov	dptr,#_page_bits
   1B2C E0                 1555 	movx	a,@dptr
   1B2D C0 E0              1556 	push	acc
   1B2F A3                 1557 	inc	dptr
   1B30 E0                 1558 	movx	a,@dptr
   1B31 C0 E0              1559 	push	acc
                           1560 ;	genIpush
   1B33 74 A1              1561 	mov	a,#0xA1
   1B35 C0 E0              1562 	push	acc
                           1563 ;	Peephole 181	changed mov to clr
   1B37 E4                 1564 	clr	a
   1B38 C0 E0              1565 	push	acc
                           1566 ;	genIpush
   1B3A 74 33              1567 	mov	a,#__str_6
   1B3C C0 E0              1568 	push	acc
   1B3E 74 36              1569 	mov	a,#(__str_6 >> 8)
   1B40 C0 E0              1570 	push	acc
   1B42 74 80              1571 	mov	a,#0x80
   1B44 C0 E0              1572 	push	acc
                           1573 ;	genCall
   1B46 12 24 DB           1574 	lcall	_printf
   1B49 E5 81              1575 	mov	a,sp
   1B4B 24 F9              1576 	add	a,#0xf9
   1B4D F5 81              1577 	mov	sp,a
                           1578 ;	Peephole 112.b	changed ljmp to sjmp
   1B4F 80 3D              1579 	sjmp	00109$
   1B51                    1580 00105$:
                           1581 ;	../i2c_eeprom.c:294: printf("Read_byte: low byte failed %x %x!!!\n\r",EEPROM_READ_ADDR, page_bits);
                           1582 ;	genIpush
   1B51 90 00 3E           1583 	mov	dptr,#_page_bits
   1B54 E0                 1584 	movx	a,@dptr
   1B55 C0 E0              1585 	push	acc
   1B57 A3                 1586 	inc	dptr
   1B58 E0                 1587 	movx	a,@dptr
   1B59 C0 E0              1588 	push	acc
                           1589 ;	genIpush
   1B5B 74 A1              1590 	mov	a,#0xA1
   1B5D C0 E0              1591 	push	acc
                           1592 ;	Peephole 181	changed mov to clr
   1B5F E4                 1593 	clr	a
   1B60 C0 E0              1594 	push	acc
                           1595 ;	genIpush
   1B62 74 58              1596 	mov	a,#__str_7
   1B64 C0 E0              1597 	push	acc
   1B66 74 36              1598 	mov	a,#(__str_7 >> 8)
   1B68 C0 E0              1599 	push	acc
   1B6A 74 80              1600 	mov	a,#0x80
   1B6C C0 E0              1601 	push	acc
                           1602 ;	genCall
   1B6E 12 24 DB           1603 	lcall	_printf
   1B71 E5 81              1604 	mov	a,sp
   1B73 24 F9              1605 	add	a,#0xf9
   1B75 F5 81              1606 	mov	sp,a
                           1607 ;	Peephole 112.b	changed ljmp to sjmp
   1B77 80 15              1608 	sjmp	00109$
   1B79                    1609 00108$:
                           1610 ;	../i2c_eeprom.c:298: printf("read_byte: device_write id failed!!!\n\r");
                           1611 ;	genIpush
   1B79 74 7E              1612 	mov	a,#__str_8
   1B7B C0 E0              1613 	push	acc
   1B7D 74 36              1614 	mov	a,#(__str_8 >> 8)
   1B7F C0 E0              1615 	push	acc
   1B81 74 80              1616 	mov	a,#0x80
   1B83 C0 E0              1617 	push	acc
                           1618 ;	genCall
   1B85 12 24 DB           1619 	lcall	_printf
   1B88 15 81              1620 	dec	sp
   1B8A 15 81              1621 	dec	sp
   1B8C 15 81              1622 	dec	sp
   1B8E                    1623 00109$:
                           1624 ;	../i2c_eeprom.c:299: stop();
                           1625 ;	genCall
   1B8E 12 18 25           1626 	lcall	_stop
                           1627 ;	../i2c_eeprom.c:300: return val;
                           1628 ;	genAssign
   1B91 90 00 54           1629 	mov	dptr,#_byte_read_val_1_1
   1B94 E0                 1630 	movx	a,@dptr
                           1631 ;	genRet
                           1632 ;	Peephole 234.a	loading dpl directly from a(ccumulator), r2 not set
   1B95 F5 82              1633 	mov	dpl,a
                           1634 ;	Peephole 300	removed redundant label 00110$
   1B97 22                 1635 	ret
                           1636 ;------------------------------------------------------------
                           1637 ;Allocation info for local variables in function 'seq_read'
                           1638 ;------------------------------------------------------------
                           1639 ;buf                       Allocated with name '_seq_read_PARM_2'
                           1640 ;addr                      Allocated with name '_seq_read_PARM_3'
                           1641 ;size                      Allocated with name '_seq_read_size_1_1'
                           1642 ;num                       Allocated with name '_seq_read_num_1_1'
                           1643 ;byte                      Allocated with name '_seq_read_byte_1_1'
                           1644 ;------------------------------------------------------------
                           1645 ;	../i2c_eeprom.c:313: unsigned int seq_read( unsigned int size, __idata unsigned char *buf, unsigned int addr)
                           1646 ;	-----------------------------------------
                           1647 ;	 function seq_read
                           1648 ;	-----------------------------------------
   1B98                    1649 _seq_read:
                           1650 ;	genReceive
   1B98 AA 83              1651 	mov	r2,dph
   1B9A E5 82              1652 	mov	a,dpl
   1B9C 90 00 58           1653 	mov	dptr,#_seq_read_size_1_1
   1B9F F0                 1654 	movx	@dptr,a
   1BA0 A3                 1655 	inc	dptr
   1BA1 EA                 1656 	mov	a,r2
   1BA2 F0                 1657 	movx	@dptr,a
                           1658 ;	../i2c_eeprom.c:317: unsigned int num = 0;   /* count the number of bytes read */
                           1659 ;	genAssign
   1BA3 90 00 5A           1660 	mov	dptr,#_seq_read_num_1_1
   1BA6 E4                 1661 	clr	a
   1BA7 F0                 1662 	movx	@dptr,a
   1BA8 A3                 1663 	inc	dptr
   1BA9 F0                 1664 	movx	@dptr,a
                           1665 ;	../i2c_eeprom.c:320: split_addr(addr);
                           1666 ;	genAssign
   1BAA 90 00 56           1667 	mov	dptr,#_seq_read_PARM_3
   1BAD E0                 1668 	movx	a,@dptr
   1BAE FA                 1669 	mov	r2,a
   1BAF A3                 1670 	inc	dptr
   1BB0 E0                 1671 	movx	a,@dptr
   1BB1 FB                 1672 	mov	r3,a
                           1673 ;	genCall
   1BB2 8A 82              1674 	mov	dpl,r2
   1BB4 8B 83              1675 	mov	dph,r3
   1BB6 12 17 B5           1676 	lcall	_split_addr
                           1677 ;	../i2c_eeprom.c:321: start();
                           1678 ;	genCall
   1BB9 12 18 1A           1679 	lcall	_start
                           1680 ;	../i2c_eeprom.c:322: if ( write(EEPROM_WRITE_ADDR | page_bits) == ACK )
                           1681 ;	genAssign
   1BBC 90 00 3E           1682 	mov	dptr,#_page_bits
   1BBF E0                 1683 	movx	a,@dptr
   1BC0 FA                 1684 	mov	r2,a
   1BC1 A3                 1685 	inc	dptr
   1BC2 E0                 1686 	movx	a,@dptr
   1BC3 FB                 1687 	mov	r3,a
                           1688 ;	genOr
   1BC4 43 02 A0           1689 	orl	ar2,#0xA0
                           1690 ;	genCast
                           1691 ;	genCall
   1BC7 8A 82              1692 	mov	dpl,r2
   1BC9 12 18 3D           1693 	lcall	_write
   1BCC E5 82              1694 	mov	a,dpl
                           1695 ;	genIfx
                           1696 ;	genIfxJump
   1BCE 60 03              1697 	jz	00121$
   1BD0 02 1C AE           1698 	ljmp	00108$
   1BD3                    1699 00121$:
                           1700 ;	../i2c_eeprom.c:324: if ( write(offset_addr) == ACK )
                           1701 ;	genAssign
   1BD3 90 00 40           1702 	mov	dptr,#_offset_addr
   1BD6 E0                 1703 	movx	a,@dptr
   1BD7 FA                 1704 	mov	r2,a
   1BD8 A3                 1705 	inc	dptr
   1BD9 E0                 1706 	movx	a,@dptr
   1BDA FB                 1707 	mov	r3,a
                           1708 ;	genCast
                           1709 ;	genCall
   1BDB 8A 82              1710 	mov	dpl,r2
   1BDD 12 18 3D           1711 	lcall	_write
   1BE0 E5 82              1712 	mov	a,dpl
                           1713 ;	genIfx
                           1714 ;	genIfxJump
   1BE2 60 03              1715 	jz	00122$
   1BE4 02 1C 97           1716 	ljmp	00105$
   1BE7                    1717 00122$:
                           1718 ;	../i2c_eeprom.c:327: start();
                           1719 ;	genCall
   1BE7 12 18 1A           1720 	lcall	_start
                           1721 ;	../i2c_eeprom.c:328: if ( write(EEPROM_READ_ADDR | page_bits) == ACK )
                           1722 ;	genAssign
   1BEA 90 00 3E           1723 	mov	dptr,#_page_bits
   1BED E0                 1724 	movx	a,@dptr
   1BEE FA                 1725 	mov	r2,a
   1BEF A3                 1726 	inc	dptr
   1BF0 E0                 1727 	movx	a,@dptr
   1BF1 FB                 1728 	mov	r3,a
                           1729 ;	genOr
   1BF2 43 02 A1           1730 	orl	ar2,#0xA1
                           1731 ;	genCast
                           1732 ;	genCall
   1BF5 8A 82              1733 	mov	dpl,r2
   1BF7 12 18 3D           1734 	lcall	_write
   1BFA E5 82              1735 	mov	a,dpl
                           1736 ;	genIfx
                           1737 ;	genIfxJump
   1BFC 60 03              1738 	jz	00123$
   1BFE 02 1C 80           1739 	ljmp	00102$
   1C01                    1740 00123$:
                           1741 ;	../i2c_eeprom.c:336: buf[num] = read(NACK); /* for last byte to be read */
                           1742 ;	genAssign
   1C01 90 00 55           1743 	mov	dptr,#_seq_read_PARM_2
   1C04 E0                 1744 	movx	a,@dptr
   1C05 FA                 1745 	mov	r2,a
                           1746 ;	genAssign
   1C06 7B 00              1747 	mov	r3,#0x00
   1C08 7C 00              1748 	mov	r4,#0x00
                           1749 ;	genAssign
   1C0A 90 00 58           1750 	mov	dptr,#_seq_read_size_1_1
   1C0D E0                 1751 	movx	a,@dptr
   1C0E FD                 1752 	mov	r5,a
   1C0F A3                 1753 	inc	dptr
   1C10 E0                 1754 	movx	a,@dptr
   1C11 FE                 1755 	mov	r6,a
   1C12                    1756 00110$:
                           1757 ;	../i2c_eeprom.c:330: for (  ; size >= 1 ; size-- )
                           1758 ;	genCmpLt
                           1759 ;	genCmp
   1C12 C3                 1760 	clr	c
   1C13 ED                 1761 	mov	a,r5
   1C14 94 01              1762 	subb	a,#0x01
   1C16 EE                 1763 	mov	a,r6
   1C17 94 00              1764 	subb	a,#0x00
                           1765 ;	genIfxJump
                           1766 ;	Peephole 112.b	changed ljmp to sjmp
                           1767 ;	Peephole 160.a	removed sjmp by inverse jump logic
   1C19 40 38              1768 	jc	00120$
                           1769 ;	Peephole 300	removed redundant label 00124$
                           1770 ;	../i2c_eeprom.c:332: buf[num] = read(ACK);
                           1771 ;	genPlus
                           1772 ;	Peephole 236.g	used r3 instead of ar3
   1C1B EB                 1773 	mov	a,r3
                           1774 ;	Peephole 236.a	used r2 instead of ar2
   1C1C 2A                 1775 	add	a,r2
   1C1D F8                 1776 	mov	r0,a
                           1777 ;	genCall
   1C1E 75 82 00           1778 	mov	dpl,#0x00
   1C21 C0 02              1779 	push	ar2
   1C23 C0 03              1780 	push	ar3
   1C25 C0 04              1781 	push	ar4
   1C27 C0 05              1782 	push	ar5
   1C29 C0 06              1783 	push	ar6
   1C2B C0 00              1784 	push	ar0
   1C2D 12 18 89           1785 	lcall	_read
   1C30 E5 82              1786 	mov	a,dpl
   1C32 D0 00              1787 	pop	ar0
   1C34 D0 06              1788 	pop	ar6
   1C36 D0 05              1789 	pop	ar5
   1C38 D0 04              1790 	pop	ar4
   1C3A D0 03              1791 	pop	ar3
   1C3C D0 02              1792 	pop	ar2
                           1793 ;	genPointerSet
                           1794 ;	genNearPointerSet
   1C3E F6                 1795 	mov	@r0,a
                           1796 ;	../i2c_eeprom.c:334: num++;
                           1797 ;	genPlus
                           1798 ;     genPlusIncr
   1C3F 0B                 1799 	inc	r3
   1C40 BB 00 01           1800 	cjne	r3,#0x00,00125$
   1C43 0C                 1801 	inc	r4
   1C44                    1802 00125$:
                           1803 ;	../i2c_eeprom.c:330: for (  ; size >= 1 ; size-- )
                           1804 ;	genMinus
                           1805 ;	genMinusDec
   1C44 1D                 1806 	dec	r5
   1C45 BD FF 01           1807 	cjne	r5,#0xff,00126$
   1C48 1E                 1808 	dec	r6
   1C49                    1809 00126$:
                           1810 ;	genAssign
   1C49 90 00 58           1811 	mov	dptr,#_seq_read_size_1_1
   1C4C ED                 1812 	mov	a,r5
   1C4D F0                 1813 	movx	@dptr,a
   1C4E A3                 1814 	inc	dptr
   1C4F EE                 1815 	mov	a,r6
   1C50 F0                 1816 	movx	@dptr,a
                           1817 ;	Peephole 112.b	changed ljmp to sjmp
   1C51 80 BF              1818 	sjmp	00110$
   1C53                    1819 00120$:
                           1820 ;	genAssign
   1C53 90 00 58           1821 	mov	dptr,#_seq_read_size_1_1
   1C56 ED                 1822 	mov	a,r5
   1C57 F0                 1823 	movx	@dptr,a
   1C58 A3                 1824 	inc	dptr
   1C59 EE                 1825 	mov	a,r6
   1C5A F0                 1826 	movx	@dptr,a
                           1827 ;	../i2c_eeprom.c:336: buf[num] = read(NACK); /* for last byte to be read */
                           1828 ;	genPlus
                           1829 ;	Peephole 236.g	used r3 instead of ar3
   1C5B EB                 1830 	mov	a,r3
                           1831 ;	Peephole 236.a	used r2 instead of ar2
   1C5C 2A                 1832 	add	a,r2
   1C5D F8                 1833 	mov	r0,a
                           1834 ;	genCall
   1C5E 75 82 01           1835 	mov	dpl,#0x01
   1C61 C0 03              1836 	push	ar3
   1C63 C0 04              1837 	push	ar4
   1C65 C0 00              1838 	push	ar0
   1C67 12 18 89           1839 	lcall	_read
   1C6A E5 82              1840 	mov	a,dpl
   1C6C D0 00              1841 	pop	ar0
   1C6E D0 04              1842 	pop	ar4
   1C70 D0 03              1843 	pop	ar3
                           1844 ;	genPointerSet
                           1845 ;	genNearPointerSet
   1C72 F6                 1846 	mov	@r0,a
                           1847 ;	../i2c_eeprom.c:338: num++;
                           1848 ;	genPlus
   1C73 90 00 5A           1849 	mov	dptr,#_seq_read_num_1_1
                           1850 ;     genPlusIncr
   1C76 74 01              1851 	mov	a,#0x01
                           1852 ;	Peephole 236.a	used r3 instead of ar3
   1C78 2B                 1853 	add	a,r3
   1C79 F0                 1854 	movx	@dptr,a
                           1855 ;	Peephole 181	changed mov to clr
   1C7A E4                 1856 	clr	a
                           1857 ;	Peephole 236.b	used r4 instead of ar4
   1C7B 3C                 1858 	addc	a,r4
   1C7C A3                 1859 	inc	dptr
   1C7D F0                 1860 	movx	@dptr,a
                           1861 ;	Peephole 112.b	changed ljmp to sjmp
   1C7E 80 43              1862 	sjmp	00109$
   1C80                    1863 00102$:
                           1864 ;	../i2c_eeprom.c:342: printf("Device not selected!\n\r");
                           1865 ;	genIpush
   1C80 74 A5              1866 	mov	a,#__str_9
   1C82 C0 E0              1867 	push	acc
   1C84 74 36              1868 	mov	a,#(__str_9 >> 8)
   1C86 C0 E0              1869 	push	acc
   1C88 74 80              1870 	mov	a,#0x80
   1C8A C0 E0              1871 	push	acc
                           1872 ;	genCall
   1C8C 12 24 DB           1873 	lcall	_printf
   1C8F 15 81              1874 	dec	sp
   1C91 15 81              1875 	dec	sp
   1C93 15 81              1876 	dec	sp
                           1877 ;	Peephole 112.b	changed ljmp to sjmp
   1C95 80 2C              1878 	sjmp	00109$
   1C97                    1879 00105$:
                           1880 ;	../i2c_eeprom.c:347: printf("write addr low byte failed!!!\n\r");
                           1881 ;	genIpush
   1C97 74 BC              1882 	mov	a,#__str_10
   1C99 C0 E0              1883 	push	acc
   1C9B 74 36              1884 	mov	a,#(__str_10 >> 8)
   1C9D C0 E0              1885 	push	acc
   1C9F 74 80              1886 	mov	a,#0x80
   1CA1 C0 E0              1887 	push	acc
                           1888 ;	genCall
   1CA3 12 24 DB           1889 	lcall	_printf
   1CA6 15 81              1890 	dec	sp
   1CA8 15 81              1891 	dec	sp
   1CAA 15 81              1892 	dec	sp
                           1893 ;	Peephole 112.b	changed ljmp to sjmp
   1CAC 80 15              1894 	sjmp	00109$
   1CAE                    1895 00108$:
                           1896 ;	../i2c_eeprom.c:352: printf("write addr high byte failed!!!\n\r");
                           1897 ;	genIpush
   1CAE 74 DC              1898 	mov	a,#__str_11
   1CB0 C0 E0              1899 	push	acc
   1CB2 74 36              1900 	mov	a,#(__str_11 >> 8)
   1CB4 C0 E0              1901 	push	acc
   1CB6 74 80              1902 	mov	a,#0x80
   1CB8 C0 E0              1903 	push	acc
                           1904 ;	genCall
   1CBA 12 24 DB           1905 	lcall	_printf
   1CBD 15 81              1906 	dec	sp
   1CBF 15 81              1907 	dec	sp
   1CC1 15 81              1908 	dec	sp
   1CC3                    1909 00109$:
                           1910 ;	../i2c_eeprom.c:354: stop();
                           1911 ;	genCall
   1CC3 12 18 25           1912 	lcall	_stop
                           1913 ;	../i2c_eeprom.c:355: return (num);
                           1914 ;	genAssign
   1CC6 90 00 5A           1915 	mov	dptr,#_seq_read_num_1_1
   1CC9 E0                 1916 	movx	a,@dptr
   1CCA FA                 1917 	mov	r2,a
   1CCB A3                 1918 	inc	dptr
   1CCC E0                 1919 	movx	a,@dptr
                           1920 ;	genRet
                           1921 ;	Peephole 234.b	loading dph directly from a(ccumulator), r3 not set
   1CCD 8A 82              1922 	mov	dpl,r2
   1CCF F5 83              1923 	mov	dph,a
                           1924 ;	Peephole 300	removed redundant label 00114$
   1CD1 22                 1925 	ret
                           1926 ;------------------------------------------------------------
                           1927 ;Allocation info for local variables in function 'clear_eeprom'
                           1928 ;------------------------------------------------------------
                           1929 ;i                         Allocated with name '_clear_eeprom_i_1_1'
                           1930 ;------------------------------------------------------------
                           1931 ;	../i2c_eeprom.c:366: void clear_eeprom()
                           1932 ;	-----------------------------------------
                           1933 ;	 function clear_eeprom
                           1934 ;	-----------------------------------------
   1CD2                    1935 _clear_eeprom:
                           1936 ;	../i2c_eeprom.c:369: printf("Erasing EEprom...(process takes few minutes)\n\r");
                           1937 ;	genIpush
   1CD2 74 FD              1938 	mov	a,#__str_12
   1CD4 C0 E0              1939 	push	acc
   1CD6 74 36              1940 	mov	a,#(__str_12 >> 8)
   1CD8 C0 E0              1941 	push	acc
   1CDA 74 80              1942 	mov	a,#0x80
   1CDC C0 E0              1943 	push	acc
                           1944 ;	genCall
   1CDE 12 24 DB           1945 	lcall	_printf
   1CE1 15 81              1946 	dec	sp
   1CE3 15 81              1947 	dec	sp
   1CE5 15 81              1948 	dec	sp
                           1949 ;	../i2c_eeprom.c:370: printf("Progress Bar: \n\r");
                           1950 ;	genIpush
   1CE7 74 2C              1951 	mov	a,#__str_13
   1CE9 C0 E0              1952 	push	acc
   1CEB 74 37              1953 	mov	a,#(__str_13 >> 8)
   1CED C0 E0              1954 	push	acc
   1CEF 74 80              1955 	mov	a,#0x80
   1CF1 C0 E0              1956 	push	acc
                           1957 ;	genCall
   1CF3 12 24 DB           1958 	lcall	_printf
   1CF6 15 81              1959 	dec	sp
   1CF8 15 81              1960 	dec	sp
   1CFA 15 81              1961 	dec	sp
                           1962 ;	../i2c_eeprom.c:371: printf("0                                                               100\n\r");
                           1963 ;	genIpush
   1CFC 74 3D              1964 	mov	a,#__str_14
   1CFE C0 E0              1965 	push	acc
   1D00 74 37              1966 	mov	a,#(__str_14 >> 8)
   1D02 C0 E0              1967 	push	acc
   1D04 74 80              1968 	mov	a,#0x80
   1D06 C0 E0              1969 	push	acc
                           1970 ;	genCall
   1D08 12 24 DB           1971 	lcall	_printf
   1D0B 15 81              1972 	dec	sp
   1D0D 15 81              1973 	dec	sp
   1D0F 15 81              1974 	dec	sp
                           1975 ;	../i2c_eeprom.c:373: clear_lcd();
                           1976 ;	genCall
   1D11 12 17 5A           1977 	lcall	_clear_lcd
                           1978 ;	../i2c_eeprom.c:374: print_line_lcd(0,"----------------");
                           1979 ;	genCast
   1D14 90 00 34           1980 	mov	dptr,#_print_line_lcd_PARM_2
   1D17 74 83              1981 	mov	a,#__str_15
   1D19 F0                 1982 	movx	@dptr,a
   1D1A A3                 1983 	inc	dptr
   1D1B 74 37              1984 	mov	a,#(__str_15 >> 8)
   1D1D F0                 1985 	movx	@dptr,a
   1D1E A3                 1986 	inc	dptr
   1D1F 74 80              1987 	mov	a,#0x80
   1D21 F0                 1988 	movx	@dptr,a
                           1989 ;	genCall
                           1990 ;	Peephole 182.b	used 16 bit load of dptr
   1D22 90 00 00           1991 	mov	dptr,#0x0000
   1D25 12 16 43           1992 	lcall	_print_line_lcd
                           1993 ;	../i2c_eeprom.c:375: print_line_lcd(1,"----------------");
                           1994 ;	genCast
   1D28 90 00 34           1995 	mov	dptr,#_print_line_lcd_PARM_2
   1D2B 74 83              1996 	mov	a,#__str_15
   1D2D F0                 1997 	movx	@dptr,a
   1D2E A3                 1998 	inc	dptr
   1D2F 74 37              1999 	mov	a,#(__str_15 >> 8)
   1D31 F0                 2000 	movx	@dptr,a
   1D32 A3                 2001 	inc	dptr
   1D33 74 80              2002 	mov	a,#0x80
   1D35 F0                 2003 	movx	@dptr,a
                           2004 ;	genCall
                           2005 ;	Peephole 182.b	used 16 bit load of dptr
   1D36 90 00 01           2006 	mov	dptr,#0x0001
   1D39 12 16 43           2007 	lcall	_print_line_lcd
                           2008 ;	../i2c_eeprom.c:376: print_line_lcd(2,"----------------");
                           2009 ;	genCast
   1D3C 90 00 34           2010 	mov	dptr,#_print_line_lcd_PARM_2
   1D3F 74 83              2011 	mov	a,#__str_15
   1D41 F0                 2012 	movx	@dptr,a
   1D42 A3                 2013 	inc	dptr
   1D43 74 37              2014 	mov	a,#(__str_15 >> 8)
   1D45 F0                 2015 	movx	@dptr,a
   1D46 A3                 2016 	inc	dptr
   1D47 74 80              2017 	mov	a,#0x80
   1D49 F0                 2018 	movx	@dptr,a
                           2019 ;	genCall
                           2020 ;	Peephole 182.b	used 16 bit load of dptr
   1D4A 90 00 02           2021 	mov	dptr,#0x0002
   1D4D 12 16 43           2022 	lcall	_print_line_lcd
                           2023 ;	../i2c_eeprom.c:377: print_line_lcd(3,"----------------");
                           2024 ;	genCast
   1D50 90 00 34           2025 	mov	dptr,#_print_line_lcd_PARM_2
   1D53 74 83              2026 	mov	a,#__str_15
   1D55 F0                 2027 	movx	@dptr,a
   1D56 A3                 2028 	inc	dptr
   1D57 74 37              2029 	mov	a,#(__str_15 >> 8)
   1D59 F0                 2030 	movx	@dptr,a
   1D5A A3                 2031 	inc	dptr
   1D5B 74 80              2032 	mov	a,#0x80
   1D5D F0                 2033 	movx	@dptr,a
                           2034 ;	genCall
                           2035 ;	Peephole 182.b	used 16 bit load of dptr
   1D5E 90 00 03           2036 	mov	dptr,#0x0003
   1D61 12 16 43           2037 	lcall	_print_line_lcd
                           2038 ;	../i2c_eeprom.c:379: go_to_home();
                           2039 ;	genCall
   1D64 12 17 4D           2040 	lcall	_go_to_home
                           2041 ;	../i2c_eeprom.c:381: for (i = 0; i < 2048 ; i++)
                           2042 ;	genAssign
   1D67 7A 00              2043 	mov	r2,#0x00
   1D69 7B 00              2044 	mov	r3,#0x00
   1D6B                    2045 00103$:
                           2046 ;	genCmpLt
                           2047 ;	genCmp
   1D6B C3                 2048 	clr	c
   1D6C EB                 2049 	mov	a,r3
   1D6D 64 80              2050 	xrl	a,#0x80
   1D6F 94 88              2051 	subb	a,#0x88
                           2052 ;	genIfxJump
                           2053 ;	Peephole 108.a	removed ljmp by inverse jump logic
   1D71 50 6F              2054 	jnc	00106$
                           2055 ;	Peephole 300	removed redundant label 00113$
                           2056 ;	../i2c_eeprom.c:383: byte_write(i,'\0');
                           2057 ;	genAssign
   1D73 90 00 48           2058 	mov	dptr,#_byte_write_PARM_2
                           2059 ;	Peephole 181	changed mov to clr
   1D76 E4                 2060 	clr	a
   1D77 F0                 2061 	movx	@dptr,a
                           2062 ;	genCall
   1D78 8A 82              2063 	mov	dpl,r2
   1D7A 8B 83              2064 	mov	dph,r3
   1D7C C0 02              2065 	push	ar2
   1D7E C0 03              2066 	push	ar3
   1D80 12 18 C7           2067 	lcall	_byte_write
   1D83 D0 03              2068 	pop	ar3
   1D85 D0 02              2069 	pop	ar2
                           2070 ;	../i2c_eeprom.c:384: delay_millisec(2);
                           2071 ;	genCall
                           2072 ;	Peephole 182.b	used 16 bit load of dptr
   1D87 90 00 02           2073 	mov	dptr,#0x0002
   1D8A C0 02              2074 	push	ar2
   1D8C C0 03              2075 	push	ar3
   1D8E 12 1E 77           2076 	lcall	_delay_millisec
   1D91 D0 03              2077 	pop	ar3
   1D93 D0 02              2078 	pop	ar2
                           2079 ;	../i2c_eeprom.c:385: if(i%32 == 0)
                           2080 ;	genAssign
   1D95 90 00 6F           2081 	mov	dptr,#__modsint_PARM_2
   1D98 74 20              2082 	mov	a,#0x20
   1D9A F0                 2083 	movx	@dptr,a
   1D9B E4                 2084 	clr	a
   1D9C A3                 2085 	inc	dptr
   1D9D F0                 2086 	movx	@dptr,a
                           2087 ;	genCall
   1D9E 8A 82              2088 	mov	dpl,r2
   1DA0 8B 83              2089 	mov	dph,r3
   1DA2 C0 02              2090 	push	ar2
   1DA4 C0 03              2091 	push	ar3
   1DA6 12 21 49           2092 	lcall	__modsint
   1DA9 E5 82              2093 	mov	a,dpl
   1DAB 85 83 F0           2094 	mov	b,dph
   1DAE D0 03              2095 	pop	ar3
   1DB0 D0 02              2096 	pop	ar2
                           2097 ;	genIfx
   1DB2 45 F0              2098 	orl	a,b
                           2099 ;	genIfxJump
                           2100 ;	Peephole 108.b	removed ljmp by inverse jump logic
   1DB4 70 25              2101 	jnz	00105$
                           2102 ;	Peephole 300	removed redundant label 00114$
                           2103 ;	../i2c_eeprom.c:387: printf_tiny("#");
                           2104 ;	genIpush
   1DB6 C0 02              2105 	push	ar2
   1DB8 C0 03              2106 	push	ar3
   1DBA 74 94              2107 	mov	a,#__str_16
   1DBC C0 E0              2108 	push	acc
   1DBE 74 37              2109 	mov	a,#(__str_16 >> 8)
   1DC0 C0 E0              2110 	push	acc
                           2111 ;	genCall
   1DC2 12 20 41           2112 	lcall	_printf_tiny
   1DC5 15 81              2113 	dec	sp
   1DC7 15 81              2114 	dec	sp
   1DC9 D0 03              2115 	pop	ar3
   1DCB D0 02              2116 	pop	ar2
                           2117 ;	../i2c_eeprom.c:388: lcdputch('#');
                           2118 ;	genCall
   1DCD 75 82 23           2119 	mov	dpl,#0x23
   1DD0 C0 02              2120 	push	ar2
   1DD2 C0 03              2121 	push	ar3
   1DD4 12 15 62           2122 	lcall	_lcdputch
   1DD7 D0 03              2123 	pop	ar3
   1DD9 D0 02              2124 	pop	ar2
   1DDB                    2125 00105$:
                           2126 ;	../i2c_eeprom.c:381: for (i = 0; i < 2048 ; i++)
                           2127 ;	genPlus
                           2128 ;     genPlusIncr
   1DDB 0A                 2129 	inc	r2
                           2130 ;	Peephole 112.b	changed ljmp to sjmp
                           2131 ;	Peephole 243	avoided branch to sjmp
   1DDC BA 00 8C           2132 	cjne	r2,#0x00,00103$
   1DDF 0B                 2133 	inc	r3
                           2134 ;	Peephole 300	removed redundant label 00115$
   1DE0 80 89              2135 	sjmp	00103$
   1DE2                    2136 00106$:
                           2137 ;	../i2c_eeprom.c:391: clear_lcd();
                           2138 ;	genCall
   1DE2 12 17 5A           2139 	lcall	_clear_lcd
                           2140 ;	../i2c_eeprom.c:392: print_line_lcd(0,"EEPROM Erased ");
                           2141 ;	genCast
   1DE5 90 00 34           2142 	mov	dptr,#_print_line_lcd_PARM_2
   1DE8 74 96              2143 	mov	a,#__str_17
   1DEA F0                 2144 	movx	@dptr,a
   1DEB A3                 2145 	inc	dptr
   1DEC 74 37              2146 	mov	a,#(__str_17 >> 8)
   1DEE F0                 2147 	movx	@dptr,a
   1DEF A3                 2148 	inc	dptr
   1DF0 74 80              2149 	mov	a,#0x80
   1DF2 F0                 2150 	movx	@dptr,a
                           2151 ;	genCall
                           2152 ;	Peephole 182.b	used 16 bit load of dptr
   1DF3 90 00 00           2153 	mov	dptr,#0x0000
   1DF6 12 16 43           2154 	lcall	_print_line_lcd
                           2155 ;	../i2c_eeprom.c:393: print_line_lcd(1,"Successfully");
                           2156 ;	genCast
   1DF9 90 00 34           2157 	mov	dptr,#_print_line_lcd_PARM_2
   1DFC 74 A5              2158 	mov	a,#__str_18
   1DFE F0                 2159 	movx	@dptr,a
   1DFF A3                 2160 	inc	dptr
   1E00 74 37              2161 	mov	a,#(__str_18 >> 8)
   1E02 F0                 2162 	movx	@dptr,a
   1E03 A3                 2163 	inc	dptr
   1E04 74 80              2164 	mov	a,#0x80
   1E06 F0                 2165 	movx	@dptr,a
                           2166 ;	genCall
                           2167 ;	Peephole 182.b	used 16 bit load of dptr
   1E07 90 00 01           2168 	mov	dptr,#0x0001
   1E0A 12 16 43           2169 	lcall	_print_line_lcd
                           2170 ;	../i2c_eeprom.c:395: printf_tiny("\n\rEEPROM Erase Completed Successfully\n\r");
                           2171 ;	genIpush
   1E0D 74 B2              2172 	mov	a,#__str_19
   1E0F C0 E0              2173 	push	acc
   1E11 74 37              2174 	mov	a,#(__str_19 >> 8)
   1E13 C0 E0              2175 	push	acc
                           2176 ;	genCall
   1E15 12 20 41           2177 	lcall	_printf_tiny
   1E18 15 81              2178 	dec	sp
   1E1A 15 81              2179 	dec	sp
                           2180 ;	Peephole 300	removed redundant label 00107$
   1E1C 22                 2181 	ret
                           2182 ;------------------------------------------------------------
                           2183 ;Allocation info for local variables in function 'eeprom_reset'
                           2184 ;------------------------------------------------------------
                           2185 ;icnt                      Allocated with name '_eeprom_reset_icnt_1_1'
                           2186 ;------------------------------------------------------------
                           2187 ;	../i2c_eeprom.c:406: void eeprom_reset()
                           2188 ;	-----------------------------------------
                           2189 ;	 function eeprom_reset
                           2190 ;	-----------------------------------------
   1E1D                    2191 _eeprom_reset:
                           2192 ;	../i2c_eeprom.c:409: start();
                           2193 ;	genCall
   1E1D 12 18 1A           2194 	lcall	_start
                           2195 ;	../i2c_eeprom.c:411: for ( icnt=0 ; icnt < 9 ; icnt++  )
                           2196 ;	genAssign
   1E20 7A 00              2197 	mov	r2,#0x00
   1E22                    2198 00101$:
                           2199 ;	genCmpLt
                           2200 ;	genCmp
   1E22 BA 09 00           2201 	cjne	r2,#0x09,00110$
   1E25                    2202 00110$:
                           2203 ;	genIfxJump
                           2204 ;	Peephole 108.a	removed ljmp by inverse jump logic
   1E25 50 0C              2205 	jnc	00104$
                           2206 ;	Peephole 300	removed redundant label 00111$
                           2207 ;	../i2c_eeprom.c:413: SDA = 1 ;
                           2208 ;	genAssign
   1E27 D2 90              2209 	setb	_P1_0
                           2210 ;	../i2c_eeprom.c:414: clock();
                           2211 ;	genCall
   1E29 C0 02              2212 	push	ar2
   1E2B 12 18 30           2213 	lcall	_clock
   1E2E D0 02              2214 	pop	ar2
                           2215 ;	../i2c_eeprom.c:411: for ( icnt=0 ; icnt < 9 ; icnt++  )
                           2216 ;	genPlus
                           2217 ;     genPlusIncr
   1E30 0A                 2218 	inc	r2
                           2219 ;	Peephole 112.b	changed ljmp to sjmp
   1E31 80 EF              2220 	sjmp	00101$
   1E33                    2221 00104$:
                           2222 ;	../i2c_eeprom.c:416: start();
                           2223 ;	genCall
   1E33 12 18 1A           2224 	lcall	_start
                           2225 ;	../i2c_eeprom.c:417: stop();
                           2226 ;	genCall
                           2227 ;	Peephole 253.b	replaced lcall/ret with ljmp
   1E36 02 18 25           2228 	ljmp	_stop
                           2229 ;
                           2230 	.area CSEG    (CODE)
                           2231 	.area CONST   (CODE)
   358A                    2232 __str_0:
   358A 69 6E 76 61 6C 69  2233 	.ascii "invalid Address Range: %d"
        64 20 41 64 64 72
        65 73 73 20 52 61
        6E 67 65 3A 20 25
        64
   35A3 0A                 2234 	.db 0x0A
   35A4 0D                 2235 	.db 0x0D
   35A5 00                 2236 	.db 0x00
   35A6                    2237 __str_1:
   35A6 77 72 69 74 65 20  2238 	.ascii "write val failed!!"
        76 61 6C 20 66 61
        69 6C 65 64 21 21
   35B8 0A                 2239 	.db 0x0A
   35B9 0D                 2240 	.db 0x0D
   35BA 00                 2241 	.db 0x00
   35BB                    2242 __str_2:
   35BB 77 72 69 74 65 20  2243 	.ascii "write low byte failed %x || %x!!"
        6C 6F 77 20 62 79
        74 65 20 66 61 69
        6C 65 64 20 25 78
        20 7C 7C 20 25 78
        21 21
   35DB 0A                 2244 	.db 0x0A
   35DC 0D                 2245 	.db 0x0D
   35DD 00                 2246 	.db 0x00
   35DE                    2247 __str_3:
   35DE 77 72 69 74 65 20  2248 	.ascii "write device id failed!!"
        64 65 76 69 63 65
        20 69 64 20 66 61
        69 6C 65 64 21 21
   35F6 0A                 2249 	.db 0x0A
   35F7 0D                 2250 	.db 0x0D
   35F8 00                 2251 	.db 0x00
   35F9                    2252 __str_4:
   35F9 70 61 67 65 20 77  2253 	.ascii "page write to EEPROM failed!!"
        72 69 74 65 20 74
        6F 20 45 45 50 52
        4F 4D 20 66 61 69
        6C 65 64 21 21
   3616 0A                 2254 	.db 0x0A
   3617 0D                 2255 	.db 0x0D
   3618 00                 2256 	.db 0x00
   3619                    2257 __str_5:
   3619 77 72 69 74 65 20  2258 	.ascii "write low byte failed!!"
        6C 6F 77 20 62 79
        74 65 20 66 61 69
        6C 65 64 21 21
   3630 0A                 2259 	.db 0x0A
   3631 0D                 2260 	.db 0x0D
   3632 00                 2261 	.db 0x00
   3633                    2262 __str_6:
   3633 72 65 61 64 5F 62  2263 	.ascii "read_byte: Read id failed %x %x!!!"
        79 74 65 3A 20 52
        65 61 64 20 69 64
        20 66 61 69 6C 65
        64 20 25 78 20 25
        78 21 21 21
   3655 0A                 2264 	.db 0x0A
   3656 0D                 2265 	.db 0x0D
   3657 00                 2266 	.db 0x00
   3658                    2267 __str_7:
   3658 52 65 61 64 5F 62  2268 	.ascii "Read_byte: low byte failed %x %x!!!"
        79 74 65 3A 20 6C
        6F 77 20 62 79 74
        65 20 66 61 69 6C
        65 64 20 25 78 20
        25 78 21 21 21
   367B 0A                 2269 	.db 0x0A
   367C 0D                 2270 	.db 0x0D
   367D 00                 2271 	.db 0x00
   367E                    2272 __str_8:
   367E 72 65 61 64 5F 62  2273 	.ascii "read_byte: device_write id failed!!!"
        79 74 65 3A 20 64
        65 76 69 63 65 5F
        77 72 69 74 65 20
        69 64 20 66 61 69
        6C 65 64 21 21 21
   36A2 0A                 2274 	.db 0x0A
   36A3 0D                 2275 	.db 0x0D
   36A4 00                 2276 	.db 0x00
   36A5                    2277 __str_9:
   36A5 44 65 76 69 63 65  2278 	.ascii "Device not selected!"
        20 6E 6F 74 20 73
        65 6C 65 63 74 65
        64 21
   36B9 0A                 2279 	.db 0x0A
   36BA 0D                 2280 	.db 0x0D
   36BB 00                 2281 	.db 0x00
   36BC                    2282 __str_10:
   36BC 77 72 69 74 65 20  2283 	.ascii "write addr low byte failed!!!"
        61 64 64 72 20 6C
        6F 77 20 62 79 74
        65 20 66 61 69 6C
        65 64 21 21 21
   36D9 0A                 2284 	.db 0x0A
   36DA 0D                 2285 	.db 0x0D
   36DB 00                 2286 	.db 0x00
   36DC                    2287 __str_11:
   36DC 77 72 69 74 65 20  2288 	.ascii "write addr high byte failed!!!"
        61 64 64 72 20 68
        69 67 68 20 62 79
        74 65 20 66 61 69
        6C 65 64 21 21 21
   36FA 0A                 2289 	.db 0x0A
   36FB 0D                 2290 	.db 0x0D
   36FC 00                 2291 	.db 0x00
   36FD                    2292 __str_12:
   36FD 45 72 61 73 69 6E  2293 	.ascii "Erasing EEprom...(process takes few minutes)"
        67 20 45 45 70 72
        6F 6D 2E 2E 2E 28
        70 72 6F 63 65 73
        73 20 74 61 6B 65
        73 20 66 65 77 20
        6D 69 6E 75 74 65
        73 29
   3729 0A                 2294 	.db 0x0A
   372A 0D                 2295 	.db 0x0D
   372B 00                 2296 	.db 0x00
   372C                    2297 __str_13:
   372C 50 72 6F 67 72 65  2298 	.ascii "Progress Bar: "
        73 73 20 42 61 72
        3A 20
   373A 0A                 2299 	.db 0x0A
   373B 0D                 2300 	.db 0x0D
   373C 00                 2301 	.db 0x00
   373D                    2302 __str_14:
   373D 30 20 20 20 20 20  2303 	.ascii "0                                                           "
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 20 20
   3779 20 20 20 20 31 30  2304 	.ascii "    100"
        30
   3780 0A                 2305 	.db 0x0A
   3781 0D                 2306 	.db 0x0D
   3782 00                 2307 	.db 0x00
   3783                    2308 __str_15:
   3783 2D 2D 2D 2D 2D 2D  2309 	.ascii "----------------"
        2D 2D 2D 2D 2D 2D
        2D 2D 2D 2D
   3793 00                 2310 	.db 0x00
   3794                    2311 __str_16:
   3794 23                 2312 	.ascii "#"
   3795 00                 2313 	.db 0x00
   3796                    2314 __str_17:
   3796 45 45 50 52 4F 4D  2315 	.ascii "EEPROM Erased "
        20 45 72 61 73 65
        64 20
   37A4 00                 2316 	.db 0x00
   37A5                    2317 __str_18:
   37A5 53 75 63 63 65 73  2318 	.ascii "Successfully"
        73 66 75 6C 6C 79
   37B1 00                 2319 	.db 0x00
   37B2                    2320 __str_19:
   37B2 0A                 2321 	.db 0x0A
   37B3 0D                 2322 	.db 0x0D
   37B4 45 45 50 52 4F 4D  2323 	.ascii "EEPROM Erase Completed Successfully"
        20 45 72 61 73 65
        20 43 6F 6D 70 6C
        65 74 65 64 20 53
        75 63 63 65 73 73
        66 75 6C 6C 79
   37D7 0A                 2324 	.db 0x0A
   37D8 0D                 2325 	.db 0x0D
   37D9 00                 2326 	.db 0x00
                           2327 	.area XINIT   (CODE)
   37FF                    2328 __xinit__lcdPtr:
                           2329 ; generic printIvalPtr
   37FF 00 F0 00           2330 	.byte #0x00,#0xF0,#0x00
   3802                    2331 __xinit__start_busy_chk:
   3802 00                 2332 	.db #0x00
   3803                    2333 __xinit__cursor_position:
   3803 80                 2334 	.db #0x80
