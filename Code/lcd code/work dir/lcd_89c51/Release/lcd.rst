                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.0 #4309 (Jul 28 2006)
                              4 ; This file generated Wed Apr 13 21:15:06 2011
                              5 ;--------------------------------------------------------
                              6 	.module lcd
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
                            224 	.globl _lcdgotoxy_PARM_2
                            225 	.globl _print_line_lcd_PARM_2
                            226 	.globl _init_lcd
                            227 	.globl _lcdbusywait
                            228 	.globl _lcd_put_command
                            229 	.globl _lcdputch
                            230 	.globl _lcdputstr
                            231 	.globl _print_line_lcd
                            232 	.globl _lcdgotoaddr
                            233 	.globl _lcdgotoxy
                            234 	.globl _go_to_home
                            235 	.globl _clear_lcd
                            236 	.globl _clear_line
                            237 ;--------------------------------------------------------
                            238 ; special function registers
                            239 ;--------------------------------------------------------
                            240 	.area RSEG    (DATA)
                    00C8    241 _T2CON	=	0x00c8
                    00CA    242 _RCAP2L	=	0x00ca
                    00CB    243 _RCAP2H	=	0x00cb
                    00CC    244 _TL2	=	0x00cc
                    00CD    245 _TH2	=	0x00cd
                    008E    246 _AUXR	=	0x008e
                    00A2    247 _AUXR1	=	0x00a2
                    0097    248 _CKRL	=	0x0097
                    008F    249 _CKCKON0	=	0x008f
                    008F    250 _CKCKON1	=	0x008f
                    00FA    251 _CCAP0H	=	0x00fa
                    00FB    252 _CCAP1H	=	0x00fb
                    00FC    253 _CCAP2H	=	0x00fc
                    00FD    254 _CCAP3H	=	0x00fd
                    00FE    255 _CCAP4H	=	0x00fe
                    00EA    256 _CCAP0L	=	0x00ea
                    00EB    257 _CCAP1L	=	0x00eb
                    00EC    258 _CCAP2L	=	0x00ec
                    00ED    259 _CCAP3L	=	0x00ed
                    00EE    260 _CCAP4L	=	0x00ee
                    00DA    261 _CCAPM0	=	0x00da
                    00DB    262 _CCAPM1	=	0x00db
                    00DC    263 _CCAPM2	=	0x00dc
                    00DD    264 _CCAPM3	=	0x00dd
                    00DE    265 _CCAPM4	=	0x00de
                    00D8    266 _CCON	=	0x00d8
                    00F9    267 _CH	=	0x00f9
                    00E9    268 _CL	=	0x00e9
                    00D9    269 _CMOD	=	0x00d9
                    00A8    270 _IEN0	=	0x00a8
                    00B1    271 _IEN1	=	0x00b1
                    00B8    272 _IPL0	=	0x00b8
                    00B7    273 _IPH0	=	0x00b7
                    00B2    274 _IPL1	=	0x00b2
                    00B3    275 _IPH1	=	0x00b3
                    00C0    276 _P4	=	0x00c0
                    00D8    277 _P5	=	0x00d8
                    00A6    278 _WDTRST	=	0x00a6
                    00A7    279 _WDTPRG	=	0x00a7
                    00A9    280 _SADDR	=	0x00a9
                    00B9    281 _SADEN	=	0x00b9
                    00C3    282 _SPCON	=	0x00c3
                    00C4    283 _SPSTA	=	0x00c4
                    00C5    284 _SPDAT	=	0x00c5
                    00C9    285 _T2MOD	=	0x00c9
                    009B    286 _BDRCON	=	0x009b
                    009A    287 _BRL	=	0x009a
                    009C    288 _KBLS	=	0x009c
                    009D    289 _KBE	=	0x009d
                    009E    290 _KBF	=	0x009e
                    00D2    291 _EECON	=	0x00d2
                    00E0    292 _ACC	=	0x00e0
                    00F0    293 _B	=	0x00f0
                    0083    294 _DPH	=	0x0083
                    0083    295 _DP0H	=	0x0083
                    0082    296 _DPL	=	0x0082
                    0082    297 _DP0L	=	0x0082
                    00A8    298 _IE	=	0x00a8
                    00B8    299 _IP	=	0x00b8
                    0080    300 _P0	=	0x0080
                    0090    301 _P1	=	0x0090
                    00A0    302 _P2	=	0x00a0
                    00B0    303 _P3	=	0x00b0
                    0087    304 _PCON	=	0x0087
                    00D0    305 _PSW	=	0x00d0
                    0099    306 _SBUF	=	0x0099
                    0099    307 _SBUF0	=	0x0099
                    0098    308 _SCON	=	0x0098
                    0081    309 _SP	=	0x0081
                    0088    310 _TCON	=	0x0088
                    008C    311 _TH0	=	0x008c
                    008D    312 _TH1	=	0x008d
                    008A    313 _TL0	=	0x008a
                    008B    314 _TL1	=	0x008b
                    0089    315 _TMOD	=	0x0089
                            316 ;--------------------------------------------------------
                            317 ; special function bits
                            318 ;--------------------------------------------------------
                            319 	.area RSEG    (DATA)
                    00AD    320 _ET2	=	0x00ad
                    00BD    321 _PT2	=	0x00bd
                    00C8    322 _T2CON_0	=	0x00c8
                    00C9    323 _T2CON_1	=	0x00c9
                    00CA    324 _T2CON_2	=	0x00ca
                    00CB    325 _T2CON_3	=	0x00cb
                    00CC    326 _T2CON_4	=	0x00cc
                    00CD    327 _T2CON_5	=	0x00cd
                    00CE    328 _T2CON_6	=	0x00ce
                    00CF    329 _T2CON_7	=	0x00cf
                    00C8    330 _CP_RL2	=	0x00c8
                    00C9    331 _C_T2	=	0x00c9
                    00CA    332 _TR2	=	0x00ca
                    00CB    333 _EXEN2	=	0x00cb
                    00CC    334 _TCLK	=	0x00cc
                    00CD    335 _RCLK	=	0x00cd
                    00CE    336 _EXF2	=	0x00ce
                    00CF    337 _TF2	=	0x00cf
                    00DF    338 _CF	=	0x00df
                    00DE    339 _CR	=	0x00de
                    00DC    340 _CCF4	=	0x00dc
                    00DB    341 _CCF3	=	0x00db
                    00DA    342 _CCF2	=	0x00da
                    00D9    343 _CCF1	=	0x00d9
                    00D8    344 _CCF0	=	0x00d8
                    00AE    345 _EC	=	0x00ae
                    00BE    346 _PPCL	=	0x00be
                    00BD    347 _PT2L	=	0x00bd
                    00BC    348 _PLS	=	0x00bc
                    00BB    349 _PT1L	=	0x00bb
                    00BA    350 _PX1L	=	0x00ba
                    00B9    351 _PT0L	=	0x00b9
                    00B8    352 _PX0L	=	0x00b8
                    00C0    353 _P4_0	=	0x00c0
                    00C1    354 _P4_1	=	0x00c1
                    00C2    355 _P4_2	=	0x00c2
                    00C3    356 _P4_3	=	0x00c3
                    00C4    357 _P4_4	=	0x00c4
                    00C5    358 _P4_5	=	0x00c5
                    00C6    359 _P4_6	=	0x00c6
                    00C7    360 _P4_7	=	0x00c7
                    00D8    361 _P5_0	=	0x00d8
                    00D9    362 _P5_1	=	0x00d9
                    00DA    363 _P5_2	=	0x00da
                    00DB    364 _P5_3	=	0x00db
                    00DC    365 _P5_4	=	0x00dc
                    00DD    366 _P5_5	=	0x00dd
                    00DE    367 _P5_6	=	0x00de
                    00DF    368 _P5_7	=	0x00df
                    00F0    369 _BREG_F0	=	0x00f0
                    00F1    370 _BREG_F1	=	0x00f1
                    00F2    371 _BREG_F2	=	0x00f2
                    00F3    372 _BREG_F3	=	0x00f3
                    00F4    373 _BREG_F4	=	0x00f4
                    00F5    374 _BREG_F5	=	0x00f5
                    00F6    375 _BREG_F6	=	0x00f6
                    00F7    376 _BREG_F7	=	0x00f7
                    00A8    377 _EX0	=	0x00a8
                    00A9    378 _ET0	=	0x00a9
                    00AA    379 _EX1	=	0x00aa
                    00AB    380 _ET1	=	0x00ab
                    00AC    381 _ES	=	0x00ac
                    00AF    382 _EA	=	0x00af
                    00B8    383 _PX0	=	0x00b8
                    00B9    384 _PT0	=	0x00b9
                    00BA    385 _PX1	=	0x00ba
                    00BB    386 _PT1	=	0x00bb
                    00BC    387 _PS	=	0x00bc
                    0080    388 _P0_0	=	0x0080
                    0081    389 _P0_1	=	0x0081
                    0082    390 _P0_2	=	0x0082
                    0083    391 _P0_3	=	0x0083
                    0084    392 _P0_4	=	0x0084
                    0085    393 _P0_5	=	0x0085
                    0086    394 _P0_6	=	0x0086
                    0087    395 _P0_7	=	0x0087
                    0092    396 _P1_2	=	0x0092
                    0093    397 _P1_3	=	0x0093
                    0094    398 _P1_4	=	0x0094
                    0095    399 _P1_5	=	0x0095
                    0096    400 _P1_6	=	0x0096
                    0097    401 _P1_7	=	0x0097
                    00A0    402 _P2_0	=	0x00a0
                    00A1    403 _P2_1	=	0x00a1
                    00A2    404 _P2_2	=	0x00a2
                    00A3    405 _P2_3	=	0x00a3
                    00A4    406 _P2_4	=	0x00a4
                    00A5    407 _P2_5	=	0x00a5
                    00A6    408 _P2_6	=	0x00a6
                    00A7    409 _P2_7	=	0x00a7
                    00B0    410 _P3_0	=	0x00b0
                    00B1    411 _P3_1	=	0x00b1
                    00B2    412 _P3_2	=	0x00b2
                    00B3    413 _P3_3	=	0x00b3
                    00B4    414 _P3_4	=	0x00b4
                    00B5    415 _P3_5	=	0x00b5
                    00B6    416 _P3_6	=	0x00b6
                    00B7    417 _P3_7	=	0x00b7
                    00B0    418 _RXD	=	0x00b0
                    00B0    419 _RXD0	=	0x00b0
                    00B1    420 _TXD	=	0x00b1
                    00B1    421 _TXD0	=	0x00b1
                    00B2    422 _INT0	=	0x00b2
                    00B3    423 _INT1	=	0x00b3
                    00B4    424 _T0	=	0x00b4
                    00B5    425 _T1	=	0x00b5
                    00B6    426 _WR	=	0x00b6
                    00B7    427 _RD	=	0x00b7
                    00D0    428 _P	=	0x00d0
                    00D1    429 _F1	=	0x00d1
                    00D2    430 _OV	=	0x00d2
                    00D3    431 _RS0	=	0x00d3
                    00D4    432 _RS1	=	0x00d4
                    00D5    433 _F0	=	0x00d5
                    00D6    434 _AC	=	0x00d6
                    00D7    435 _CY	=	0x00d7
                    0098    436 _RI	=	0x0098
                    0099    437 _TI	=	0x0099
                    009A    438 _RB8	=	0x009a
                    009B    439 _TB8	=	0x009b
                    009C    440 _REN	=	0x009c
                    009D    441 _SM2	=	0x009d
                    009E    442 _SM1	=	0x009e
                    009F    443 _SM0	=	0x009f
                    0088    444 _IT0	=	0x0088
                    0089    445 _IE0	=	0x0089
                    008A    446 _IT1	=	0x008a
                    008B    447 _IE1	=	0x008b
                    008C    448 _TR0	=	0x008c
                    008D    449 _TF0	=	0x008d
                    008E    450 _TR1	=	0x008e
                    008F    451 _TF1	=	0x008f
                    0090    452 _P1_0	=	0x0090
                    0091    453 _P1_1	=	0x0091
                            454 ;--------------------------------------------------------
                            455 ; overlayable register banks
                            456 ;--------------------------------------------------------
                            457 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     458 	.ds 8
                            459 ;--------------------------------------------------------
                            460 ; internal ram data
                            461 ;--------------------------------------------------------
                            462 	.area DSEG    (DATA)
                            463 ;--------------------------------------------------------
                            464 ; overlayable items in internal ram 
                            465 ;--------------------------------------------------------
                            466 	.area OSEG    (OVR,DATA)
                            467 ;--------------------------------------------------------
                            468 ; indirectly addressable internal ram data
                            469 ;--------------------------------------------------------
                            470 	.area ISEG    (DATA)
                            471 ;--------------------------------------------------------
                            472 ; bit data
                            473 ;--------------------------------------------------------
                            474 	.area BSEG    (BIT)
                            475 ;--------------------------------------------------------
                            476 ; paged external ram data
                            477 ;--------------------------------------------------------
                            478 	.area PSEG    (PAG,XDATA)
                            479 ;--------------------------------------------------------
                            480 ; external ram data
                            481 ;--------------------------------------------------------
                            482 	.area XSEG    (XDATA)
   002E                     483 _lcdbusywait_busy_byte_read_1_1:
   002E                     484 	.ds 1
   002F                     485 _lcd_put_command_byte_wr_cmd_1_1:
   002F                     486 	.ds 1
   0030                     487 _lcdputch_byte_wr_1_1:
   0030                     488 	.ds 1
   0031                     489 _lcdputstr_disp_str_1_1:
   0031                     490 	.ds 3
   0034                     491 _print_line_lcd_PARM_2:
   0034                     492 	.ds 3
   0037                     493 _print_line_lcd_row_1_1:
   0037                     494 	.ds 2
   0039                     495 _lcdgotoaddr_ddram_add_1_1:
   0039                     496 	.ds 1
   003A                     497 _lcdgotoxy_PARM_2:
   003A                     498 	.ds 1
   003B                     499 _lcdgotoxy_row_1_1:
   003B                     500 	.ds 1
   003C                     501 _clear_line_line_1_1:
   003C                     502 	.ds 2
                            503 ;--------------------------------------------------------
                            504 ; external initialized ram data
                            505 ;--------------------------------------------------------
                            506 	.area XISEG   (XDATA)
   00CC                     507 _lcdPtr::
   00CC                     508 	.ds 3
   00CF                     509 _start_busy_chk::
   00CF                     510 	.ds 1
   00D0                     511 _cursor_position::
   00D0                     512 	.ds 1
                            513 	.area HOME    (CODE)
                            514 	.area GSINIT0 (CODE)
                            515 	.area GSINIT1 (CODE)
                            516 	.area GSINIT2 (CODE)
                            517 	.area GSINIT3 (CODE)
                            518 	.area GSINIT4 (CODE)
                            519 	.area GSINIT5 (CODE)
                            520 	.area GSINIT  (CODE)
                            521 	.area GSFINAL (CODE)
                            522 	.area CSEG    (CODE)
                            523 ;--------------------------------------------------------
                            524 ; global & static initialisations
                            525 ;--------------------------------------------------------
                            526 	.area HOME    (CODE)
                            527 	.area GSINIT  (CODE)
                            528 	.area GSFINAL (CODE)
                            529 	.area GSINIT  (CODE)
                            530 ;--------------------------------------------------------
                            531 ; Home
                            532 ;--------------------------------------------------------
                            533 	.area HOME    (CODE)
                            534 	.area CSEG    (CODE)
                            535 ;--------------------------------------------------------
                            536 ; code
                            537 ;--------------------------------------------------------
                            538 	.area CSEG    (CODE)
                            539 ;------------------------------------------------------------
                            540 ;Allocation info for local variables in function 'init_lcd'
                            541 ;------------------------------------------------------------
                            542 ;------------------------------------------------------------
                            543 ;	../lcd.c:18: void init_lcd(void)                                     // Init routine as per HD44780 data sheet
                            544 ;	-----------------------------------------
                            545 ;	 function init_lcd
                            546 ;	-----------------------------------------
   14AD                     547 _init_lcd:
                    0002    548 	ar2 = 0x02
                    0003    549 	ar3 = 0x03
                    0004    550 	ar4 = 0x04
                    0005    551 	ar5 = 0x05
                    0006    552 	ar6 = 0x06
                    0007    553 	ar7 = 0x07
                    0000    554 	ar0 = 0x00
                    0001    555 	ar1 = 0x01
                            556 ;	../lcd.c:20: LCD_RS = COMMAND_RS;                                // RS = 0
                            557 ;	genAssign
   14AD C2 92               558 	clr	_P1_2
                            559 ;	../lcd.c:21: LCD_RW = WRITE_RW;                                  // RW = 0
                            560 ;	genAssign
   14AF C2 93               561 	clr	_P1_3
                            562 ;	../lcd.c:23: delay_millisec(16);                                 // Wait more than 15ms
                            563 ;	genCall
                            564 ;	Peephole 182.b	used 16 bit load of dptr
   14B1 90 00 10            565 	mov	dptr,#0x0010
   14B4 12 1E 77            566 	lcall	_delay_millisec
                            567 ;	../lcd.c:24: lcd_put_command(0x38);                              // Initialize for 8 bit , 2 line
                            568 ;	genCall
   14B7 75 82 38            569 	mov	dpl,#0x38
   14BA 12 15 2D            570 	lcall	_lcd_put_command
                            571 ;	../lcd.c:25: delay_millisec(5);                                  // Wait more than 4.1ms
                            572 ;	genCall
                            573 ;	Peephole 182.b	used 16 bit load of dptr
   14BD 90 00 05            574 	mov	dptr,#0x0005
   14C0 12 1E 77            575 	lcall	_delay_millisec
                            576 ;	../lcd.c:26: lcd_put_command(0x38);
                            577 ;	genCall
   14C3 75 82 38            578 	mov	dpl,#0x38
   14C6 12 15 2D            579 	lcall	_lcd_put_command
                            580 ;	../lcd.c:27: delay_millisec(1);                                  // Wait more than 0.1ms
                            581 ;	genCall
                            582 ;	Peephole 182.b	used 16 bit load of dptr
   14C9 90 00 01            583 	mov	dptr,#0x0001
   14CC 12 1E 77            584 	lcall	_delay_millisec
                            585 ;	../lcd.c:28: lcd_put_command(0x38);
                            586 ;	genCall
   14CF 75 82 38            587 	mov	dpl,#0x38
   14D2 12 15 2D            588 	lcall	_lcd_put_command
                            589 ;	../lcd.c:29: delay_millisec(1);                                  // Wait more than 0.1ms
                            590 ;	genCall
                            591 ;	Peephole 182.b	used 16 bit load of dptr
   14D5 90 00 01            592 	mov	dptr,#0x0001
   14D8 12 1E 77            593 	lcall	_delay_millisec
                            594 ;	../lcd.c:30: lcd_put_command(0x0D);                              // Display On; Cursor Off; Blink on
                            595 ;	genCall
   14DB 75 82 0D            596 	mov	dpl,#0x0D
   14DE 12 15 2D            597 	lcall	_lcd_put_command
                            598 ;	../lcd.c:31: lcd_put_command(0x01);                              // Clear the display
                            599 ;	genCall
   14E1 75 82 01            600 	mov	dpl,#0x01
   14E4 12 15 2D            601 	lcall	_lcd_put_command
                            602 ;	../lcd.c:33: delay_millisec(5);                                  // Wait more than 1.64ms
                            603 ;	genCall
                            604 ;	Peephole 182.b	used 16 bit load of dptr
   14E7 90 00 05            605 	mov	dptr,#0x0005
   14EA 12 1E 77            606 	lcall	_delay_millisec
                            607 ;	../lcd.c:34: start_busy_chk = TRUE;
                            608 ;	genAssign
   14ED 90 00 CF            609 	mov	dptr,#_start_busy_chk
   14F0 74 01               610 	mov	a,#0x01
   14F2 F0                  611 	movx	@dptr,a
                            612 ;	Peephole 300	removed redundant label 00101$
   14F3 22                  613 	ret
                            614 ;------------------------------------------------------------
                            615 ;Allocation info for local variables in function 'lcdbusywait'
                            616 ;------------------------------------------------------------
                            617 ;busy_byte_read            Allocated with name '_lcdbusywait_busy_byte_read_1_1'
                            618 ;------------------------------------------------------------
                            619 ;	../lcd.c:46: void lcdbusywait(void)
                            620 ;	-----------------------------------------
                            621 ;	 function lcdbusywait
                            622 ;	-----------------------------------------
   14F4                     623 _lcdbusywait:
                            624 ;	../lcd.c:48: volatile unsigned char busy_byte_read = 0;
                            625 ;	genAssign
   14F4 90 00 2E            626 	mov	dptr,#_lcdbusywait_busy_byte_read_1_1
                            627 ;	Peephole 181	changed mov to clr
   14F7 E4                  628 	clr	a
   14F8 F0                  629 	movx	@dptr,a
                            630 ;	../lcd.c:50: if (start_busy_chk == TRUE)
                            631 ;	genAssign
   14F9 90 00 CF            632 	mov	dptr,#_start_busy_chk
   14FC E0                  633 	movx	a,@dptr
   14FD FA                  634 	mov	r2,a
                            635 ;	genCmpEq
                            636 ;	gencjneshort
                            637 ;	Peephole 112.b	changed ljmp to sjmp
                            638 ;	Peephole 198.b	optimized misc jump sequence
   14FE BA 01 2B            639 	cjne	r2,#0x01,00106$
                            640 ;	Peephole 200.b	removed redundant sjmp
                            641 ;	Peephole 300	removed redundant label 00110$
                            642 ;	Peephole 300	removed redundant label 00111$
                            643 ;	../lcd.c:52: P0 = 0xFF ;                                  // Set port as input
                            644 ;	genAssign
   1501 75 80 FF            645 	mov	_P0,#0xFF
                            646 ;	../lcd.c:53: LCD_RS   = COMMAND_RS;
                            647 ;	genAssign
   1504 C2 92               648 	clr	_P1_2
                            649 ;	../lcd.c:54: LCD_RW   = READ_RW;
                            650 ;	genAssign
   1506 D2 93               651 	setb	_P1_3
                            652 ;	../lcd.c:55: do
   1508                     653 00101$:
                            654 ;	../lcd.c:57: busy_byte_read = LCD_DATA_PTR;
                            655 ;	genAssign
   1508 90 00 CC            656 	mov	dptr,#_lcdPtr
   150B E0                  657 	movx	a,@dptr
   150C FA                  658 	mov	r2,a
   150D A3                  659 	inc	dptr
   150E E0                  660 	movx	a,@dptr
   150F FB                  661 	mov	r3,a
   1510 A3                  662 	inc	dptr
   1511 E0                  663 	movx	a,@dptr
   1512 FC                  664 	mov	r4,a
                            665 ;	genPointerGet
                            666 ;	genGenPointerGet
   1513 8A 82               667 	mov	dpl,r2
   1515 8B 83               668 	mov	dph,r3
   1517 8C F0               669 	mov	b,r4
   1519 12 2D 7A            670 	lcall	__gptrget
   151C FA                  671 	mov	r2,a
   151D A3                  672 	inc	dptr
   151E 12 2D 7A            673 	lcall	__gptrget
   1521 FB                  674 	mov	r3,a
                            675 ;	genCast
                            676 ;	../lcd.c:58: }while (busy_byte_read & 0x80);
                            677 ;	genAssign
   1522 90 00 2E            678 	mov	dptr,#_lcdbusywait_busy_byte_read_1_1
   1525 EA                  679 	mov	a,r2
   1526 F0                  680 	movx	@dptr,a
                            681 ;	Peephole 180.a	removed redundant mov to dptr
   1527 E0                  682 	movx	a,@dptr
                            683 ;	genAnd
   1528 FA                  684 	mov	r2,a
                            685 ;	Peephole 105	removed redundant mov
                            686 ;	genIfxJump
                            687 ;	Peephole 108.e	removed ljmp by inverse jump logic
   1529 20 E7 DC            688 	jb	acc.7,00101$
                            689 ;	Peephole 300	removed redundant label 00112$
   152C                     690 00106$:
   152C 22                  691 	ret
                            692 ;------------------------------------------------------------
                            693 ;Allocation info for local variables in function 'lcd_put_command'
                            694 ;------------------------------------------------------------
                            695 ;byte_wr_cmd               Allocated with name '_lcd_put_command_byte_wr_cmd_1_1'
                            696 ;------------------------------------------------------------
                            697 ;	../lcd.c:72: void lcd_put_command(char byte_wr_cmd)                             // Write a command to the LCD.
                            698 ;	-----------------------------------------
                            699 ;	 function lcd_put_command
                            700 ;	-----------------------------------------
   152D                     701 _lcd_put_command:
                            702 ;	genReceive
   152D E5 82               703 	mov	a,dpl
   152F 90 00 2F            704 	mov	dptr,#_lcd_put_command_byte_wr_cmd_1_1
   1532 F0                  705 	movx	@dptr,a
                            706 ;	../lcd.c:74: lcdbusywait();                              // Is the LCD ready to take the command?
                            707 ;	genCall
   1533 12 14 F4            708 	lcall	_lcdbusywait
                            709 ;	../lcd.c:75: LCD_RS = COMMAND_RS;                        // Register Select Low for writing command
                            710 ;	genAssign
   1536 C2 92               711 	clr	_P1_2
                            712 ;	../lcd.c:76: LCD_RW = WRITE_RW;                              // R!W low for write
                            713 ;	genAssign
   1538 C2 93               714 	clr	_P1_3
                            715 ;	../lcd.c:77: LCD_DATA_PTR = byte_wr_cmd;                               // Command byte to register
                            716 ;	genAssign
   153A 90 00 CC            717 	mov	dptr,#_lcdPtr
   153D E0                  718 	movx	a,@dptr
   153E FA                  719 	mov	r2,a
   153F A3                  720 	inc	dptr
   1540 E0                  721 	movx	a,@dptr
   1541 FB                  722 	mov	r3,a
   1542 A3                  723 	inc	dptr
   1543 E0                  724 	movx	a,@dptr
   1544 FC                  725 	mov	r4,a
                            726 ;	genAssign
   1545 90 00 2F            727 	mov	dptr,#_lcd_put_command_byte_wr_cmd_1_1
   1548 E0                  728 	movx	a,@dptr
                            729 ;	genCast
   1549 FD                  730 	mov	r5,a
                            731 ;	Peephole 105	removed redundant mov
   154A 33                  732 	rlc	a
   154B 95 E0               733 	subb	a,acc
   154D FE                  734 	mov	r6,a
                            735 ;	genPointerSet
                            736 ;	genGenPointerSet
   154E 8A 82               737 	mov	dpl,r2
   1550 8B 83               738 	mov	dph,r3
   1552 8C F0               739 	mov	b,r4
   1554 ED                  740 	mov	a,r5
   1555 12 20 28            741 	lcall	__gptrput
   1558 A3                  742 	inc	dptr
   1559 EE                  743 	mov	a,r6
   155A 12 20 28            744 	lcall	__gptrput
                            745 ;	../lcd.c:78: LCD_RS   = COMMAND_RS;
                            746 ;	genAssign
   155D C2 92               747 	clr	_P1_2
                            748 ;	../lcd.c:79: LCD_RW   = READ_RW;
                            749 ;	genAssign
   155F D2 93               750 	setb	_P1_3
                            751 ;	Peephole 300	removed redundant label 00101$
   1561 22                  752 	ret
                            753 ;------------------------------------------------------------
                            754 ;Allocation info for local variables in function 'lcdputch'
                            755 ;------------------------------------------------------------
                            756 ;byte_wr                   Allocated with name '_lcdputch_byte_wr_1_1'
                            757 ;------------------------------------------------------------
                            758 ;	../lcd.c:94: void lcdputch(char byte_wr)                                                      // Write a character to the LCD.
                            759 ;	-----------------------------------------
                            760 ;	 function lcdputch
                            761 ;	-----------------------------------------
   1562                     762 _lcdputch:
                            763 ;	genReceive
   1562 E5 82               764 	mov	a,dpl
   1564 90 00 30            765 	mov	dptr,#_lcdputch_byte_wr_1_1
   1567 F0                  766 	movx	@dptr,a
                            767 ;	../lcd.c:96: lcdbusywait();                                      // Is the LCD ready to take the command?
                            768 ;	genCall
   1568 12 14 F4            769 	lcall	_lcdbusywait
                            770 ;	../lcd.c:97: LCD_RS = DATA_RS;                                   // Register Select High for writing data
                            771 ;	genAssign
   156B D2 92               772 	setb	_P1_2
                            773 ;	../lcd.c:98: LCD_RW = WRITE_RW;                                  // R!W low for write
                            774 ;	genAssign
   156D C2 93               775 	clr	_P1_3
                            776 ;	../lcd.c:99: LCD_DATA_PTR = byte_wr;                             // Data byte to data port
                            777 ;	genAssign
   156F 90 00 CC            778 	mov	dptr,#_lcdPtr
   1572 E0                  779 	movx	a,@dptr
   1573 FA                  780 	mov	r2,a
   1574 A3                  781 	inc	dptr
   1575 E0                  782 	movx	a,@dptr
   1576 FB                  783 	mov	r3,a
   1577 A3                  784 	inc	dptr
   1578 E0                  785 	movx	a,@dptr
   1579 FC                  786 	mov	r4,a
                            787 ;	genAssign
   157A 90 00 30            788 	mov	dptr,#_lcdputch_byte_wr_1_1
   157D E0                  789 	movx	a,@dptr
                            790 ;	genCast
   157E FD                  791 	mov	r5,a
                            792 ;	Peephole 105	removed redundant mov
   157F 33                  793 	rlc	a
   1580 95 E0               794 	subb	a,acc
   1582 FE                  795 	mov	r6,a
                            796 ;	genPointerSet
                            797 ;	genGenPointerSet
   1583 8A 82               798 	mov	dpl,r2
   1585 8B 83               799 	mov	dph,r3
   1587 8C F0               800 	mov	b,r4
   1589 ED                  801 	mov	a,r5
   158A 12 20 28            802 	lcall	__gptrput
   158D A3                  803 	inc	dptr
   158E EE                  804 	mov	a,r6
   158F 12 20 28            805 	lcall	__gptrput
                            806 ;	../lcd.c:101: switch (cursor_position)
                            807 ;	genAssign
   1592 90 00 D0            808 	mov	dptr,#_cursor_position
   1595 E0                  809 	movx	a,@dptr
   1596 FA                  810 	mov	r2,a
                            811 ;	genCmpEq
                            812 ;	gencjneshort
   1597 BA 8F 02            813 	cjne	r2,#0x8F,00113$
                            814 ;	Peephole 112.b	changed ljmp to sjmp
   159A 80 0F               815 	sjmp	00101$
   159C                     816 00113$:
                            817 ;	genCmpEq
                            818 ;	gencjneshort
   159C BA 9F 02            819 	cjne	r2,#0x9F,00114$
                            820 ;	Peephole 112.b	changed ljmp to sjmp
   159F 80 26               821 	sjmp	00103$
   15A1                     822 00114$:
                            823 ;	genCmpEq
                            824 ;	gencjneshort
   15A1 BA CF 02            825 	cjne	r2,#0xCF,00115$
                            826 ;	Peephole 112.b	changed ljmp to sjmp
   15A4 80 13               827 	sjmp	00102$
   15A6                     828 00115$:
                            829 ;	genCmpEq
                            830 ;	gencjneshort
                            831 ;	Peephole 112.b	changed ljmp to sjmp
                            832 ;	../lcd.c:103: case LINE_0_END:
                            833 ;	Peephole 112.b	changed ljmp to sjmp
                            834 ;	Peephole 198.b	optimized misc jump sequence
   15A6 BA DF 3A            835 	cjne	r2,#0xDF,00105$
   15A9 80 2A               836 	sjmp	00104$
                            837 ;	Peephole 300	removed redundant label 00116$
   15AB                     838 00101$:
                            839 ;	../lcd.c:105: lcd_put_command(LINE_1_START);
                            840 ;	genCall
   15AB 75 82 C0            841 	mov	dpl,#0xC0
   15AE 12 15 2D            842 	lcall	_lcd_put_command
                            843 ;	../lcd.c:106: cursor_position = LINE_1_START;
                            844 ;	genAssign
   15B1 90 00 D0            845 	mov	dptr,#_cursor_position
   15B4 74 C0               846 	mov	a,#0xC0
   15B6 F0                  847 	movx	@dptr,a
                            848 ;	../lcd.c:107: break;
                            849 ;	../lcd.c:110: case LINE_1_END:
                            850 ;	Peephole 112.b	changed ljmp to sjmp
   15B7 80 31               851 	sjmp	00106$
   15B9                     852 00102$:
                            853 ;	../lcd.c:112: lcd_put_command(LINE_2_START);
                            854 ;	genCall
   15B9 75 82 90            855 	mov	dpl,#0x90
   15BC 12 15 2D            856 	lcall	_lcd_put_command
                            857 ;	../lcd.c:113: cursor_position = LINE_2_START;
                            858 ;	genAssign
   15BF 90 00 D0            859 	mov	dptr,#_cursor_position
   15C2 74 90               860 	mov	a,#0x90
   15C4 F0                  861 	movx	@dptr,a
                            862 ;	../lcd.c:114: break;
                            863 ;	../lcd.c:117: case LINE_2_END:
                            864 ;	Peephole 112.b	changed ljmp to sjmp
   15C5 80 23               865 	sjmp	00106$
   15C7                     866 00103$:
                            867 ;	../lcd.c:119: lcd_put_command(LINE_3_START);
                            868 ;	genCall
   15C7 75 82 D0            869 	mov	dpl,#0xD0
   15CA 12 15 2D            870 	lcall	_lcd_put_command
                            871 ;	../lcd.c:120: cursor_position = LINE_3_START;
                            872 ;	genAssign
   15CD 90 00 D0            873 	mov	dptr,#_cursor_position
   15D0 74 D0               874 	mov	a,#0xD0
   15D2 F0                  875 	movx	@dptr,a
                            876 ;	../lcd.c:121: break;
                            877 ;	../lcd.c:124: case LINE_3_END:
                            878 ;	Peephole 112.b	changed ljmp to sjmp
   15D3 80 15               879 	sjmp	00106$
   15D5                     880 00104$:
                            881 ;	../lcd.c:126: lcd_put_command(LINE_0_START);
                            882 ;	genCall
   15D5 75 82 80            883 	mov	dpl,#0x80
   15D8 12 15 2D            884 	lcall	_lcd_put_command
                            885 ;	../lcd.c:127: cursor_position = LINE_0_START;
                            886 ;	genAssign
   15DB 90 00 D0            887 	mov	dptr,#_cursor_position
   15DE 74 80               888 	mov	a,#0x80
   15E0 F0                  889 	movx	@dptr,a
                            890 ;	../lcd.c:128: break;
                            891 ;	../lcd.c:131: default:
                            892 ;	Peephole 112.b	changed ljmp to sjmp
   15E1 80 07               893 	sjmp	00106$
   15E3                     894 00105$:
                            895 ;	../lcd.c:133: cursor_position++;
                            896 ;	genPlus
   15E3 90 00 D0            897 	mov	dptr,#_cursor_position
                            898 ;     genPlusIncr
   15E6 74 01               899 	mov	a,#0x01
                            900 ;	Peephole 236.a	used r2 instead of ar2
   15E8 2A                  901 	add	a,r2
   15E9 F0                  902 	movx	@dptr,a
                            903 ;	../lcd.c:136: }
   15EA                     904 00106$:
                            905 ;	../lcd.c:139: LCD_RS   = COMMAND_RS;
                            906 ;	genAssign
   15EA C2 92               907 	clr	_P1_2
                            908 ;	../lcd.c:140: LCD_RW   = READ_RW;
                            909 ;	genAssign
   15EC D2 93               910 	setb	_P1_3
                            911 ;	Peephole 300	removed redundant label 00107$
   15EE 22                  912 	ret
                            913 ;------------------------------------------------------------
                            914 ;Allocation info for local variables in function 'lcdputstr'
                            915 ;------------------------------------------------------------
                            916 ;disp_str                  Allocated with name '_lcdputstr_disp_str_1_1'
                            917 ;i                         Allocated with name '_lcdputstr_i_1_1'
                            918 ;------------------------------------------------------------
                            919 ;	../lcd.c:153: void lcdputstr (char *disp_str)                   // Write the 2 line message to LCD
                            920 ;	-----------------------------------------
                            921 ;	 function lcdputstr
                            922 ;	-----------------------------------------
   15EF                     923 _lcdputstr:
                            924 ;	genReceive
   15EF AA F0               925 	mov	r2,b
   15F1 AB 83               926 	mov	r3,dph
   15F3 E5 82               927 	mov	a,dpl
   15F5 90 00 31            928 	mov	dptr,#_lcdputstr_disp_str_1_1
   15F8 F0                  929 	movx	@dptr,a
   15F9 A3                  930 	inc	dptr
   15FA EB                  931 	mov	a,r3
   15FB F0                  932 	movx	@dptr,a
   15FC A3                  933 	inc	dptr
   15FD EA                  934 	mov	a,r2
   15FE F0                  935 	movx	@dptr,a
                            936 ;	../lcd.c:156: for (i=0; disp_str[i]!='\0' ; i++)
                            937 ;	genAssign
   15FF 90 00 31            938 	mov	dptr,#_lcdputstr_disp_str_1_1
   1602 E0                  939 	movx	a,@dptr
   1603 FA                  940 	mov	r2,a
   1604 A3                  941 	inc	dptr
   1605 E0                  942 	movx	a,@dptr
   1606 FB                  943 	mov	r3,a
   1607 A3                  944 	inc	dptr
   1608 E0                  945 	movx	a,@dptr
   1609 FC                  946 	mov	r4,a
                            947 ;	genAssign
   160A 7D 00               948 	mov	r5,#0x00
   160C 7E 00               949 	mov	r6,#0x00
   160E                     950 00101$:
                            951 ;	genPlus
                            952 ;	Peephole 236.g	used r5 instead of ar5
   160E ED                  953 	mov	a,r5
                            954 ;	Peephole 236.a	used r2 instead of ar2
   160F 2A                  955 	add	a,r2
   1610 FF                  956 	mov	r7,a
                            957 ;	Peephole 236.g	used r6 instead of ar6
   1611 EE                  958 	mov	a,r6
                            959 ;	Peephole 236.b	used r3 instead of ar3
   1612 3B                  960 	addc	a,r3
   1613 F8                  961 	mov	r0,a
   1614 8C 01               962 	mov	ar1,r4
                            963 ;	genPointerGet
                            964 ;	genGenPointerGet
   1616 8F 82               965 	mov	dpl,r7
   1618 88 83               966 	mov	dph,r0
   161A 89 F0               967 	mov	b,r1
   161C 12 2D 7A            968 	lcall	__gptrget
                            969 ;	genCmpEq
                            970 ;	gencjneshort
                            971 ;	Peephole 112.b	changed ljmp to sjmp
   161F FF                  972 	mov	r7,a
                            973 ;	Peephole 115.b	jump optimization
   1620 60 20               974 	jz	00105$
                            975 ;	Peephole 300	removed redundant label 00110$
                            976 ;	../lcd.c:157: lcdputch(disp_str[i]);
                            977 ;	genCall
   1622 8F 82               978 	mov	dpl,r7
   1624 C0 02               979 	push	ar2
   1626 C0 03               980 	push	ar3
   1628 C0 04               981 	push	ar4
   162A C0 05               982 	push	ar5
   162C C0 06               983 	push	ar6
   162E 12 15 62            984 	lcall	_lcdputch
   1631 D0 06               985 	pop	ar6
   1633 D0 05               986 	pop	ar5
   1635 D0 04               987 	pop	ar4
   1637 D0 03               988 	pop	ar3
   1639 D0 02               989 	pop	ar2
                            990 ;	../lcd.c:156: for (i=0; disp_str[i]!='\0' ; i++)
                            991 ;	genPlus
                            992 ;     genPlusIncr
                            993 ;	tail increment optimized (range 7)
   163B 0D                  994 	inc	r5
   163C BD 00 CF            995 	cjne	r5,#0x00,00101$
   163F 0E                  996 	inc	r6
                            997 ;	Peephole 112.b	changed ljmp to sjmp
   1640 80 CC               998 	sjmp	00101$
   1642                     999 00105$:
   1642 22                 1000 	ret
                           1001 ;------------------------------------------------------------
                           1002 ;Allocation info for local variables in function 'print_line_lcd'
                           1003 ;------------------------------------------------------------
                           1004 ;disp_str                  Allocated with name '_print_line_lcd_PARM_2'
                           1005 ;row                       Allocated with name '_print_line_lcd_row_1_1'
                           1006 ;------------------------------------------------------------
                           1007 ;	../lcd.c:171: void print_line_lcd(unsigned int row, char *disp_str)
                           1008 ;	-----------------------------------------
                           1009 ;	 function print_line_lcd
                           1010 ;	-----------------------------------------
   1643                    1011 _print_line_lcd:
                           1012 ;	genReceive
   1643 AA 83              1013 	mov	r2,dph
   1645 E5 82              1014 	mov	a,dpl
   1647 90 00 37           1015 	mov	dptr,#_print_line_lcd_row_1_1
   164A F0                 1016 	movx	@dptr,a
   164B A3                 1017 	inc	dptr
   164C EA                 1018 	mov	a,r2
   164D F0                 1019 	movx	@dptr,a
                           1020 ;	../lcd.c:173: if (row <= 3)
                           1021 ;	genAssign
   164E 90 00 37           1022 	mov	dptr,#_print_line_lcd_row_1_1
   1651 E0                 1023 	movx	a,@dptr
   1652 FA                 1024 	mov	r2,a
   1653 A3                 1025 	inc	dptr
   1654 E0                 1026 	movx	a,@dptr
   1655 FB                 1027 	mov	r3,a
                           1028 ;	genCmpGt
                           1029 ;	genCmp
   1656 C3                 1030 	clr	c
   1657 74 03              1031 	mov	a,#0x03
   1659 9A                 1032 	subb	a,r2
                           1033 ;	Peephole 181	changed mov to clr
   165A E4                 1034 	clr	a
   165B 9B                 1035 	subb	a,r3
                           1036 ;	genIfxJump
                           1037 ;	Peephole 112.b	changed ljmp to sjmp
                           1038 ;	Peephole 160.a	removed sjmp by inverse jump logic
   165C 40 6A              1039 	jc	00105$
                           1040 ;	Peephole 300	removed redundant label 00109$
                           1041 ;	../lcd.c:175: lcdgotoxy(row,0);
                           1042 ;	genCast
                           1043 ;	genAssign
   165E 90 00 3A           1044 	mov	dptr,#_lcdgotoxy_PARM_2
                           1045 ;	Peephole 181	changed mov to clr
   1661 E4                 1046 	clr	a
   1662 F0                 1047 	movx	@dptr,a
                           1048 ;	genCall
   1663 8A 82              1049 	mov	dpl,r2
   1665 12 16 F3           1050 	lcall	_lcdgotoxy
                           1051 ;	../lcd.c:177: if ( (strlen(disp_str)-1) > LCD_CHAR_WIDTH )
                           1052 ;	genAssign
   1668 90 00 34           1053 	mov	dptr,#_print_line_lcd_PARM_2
   166B E0                 1054 	movx	a,@dptr
   166C FA                 1055 	mov	r2,a
   166D A3                 1056 	inc	dptr
   166E E0                 1057 	movx	a,@dptr
   166F FB                 1058 	mov	r3,a
   1670 A3                 1059 	inc	dptr
   1671 E0                 1060 	movx	a,@dptr
   1672 FC                 1061 	mov	r4,a
                           1062 ;	genCall
   1673 8A 82              1063 	mov	dpl,r2
   1675 8B 83              1064 	mov	dph,r3
   1677 8C F0              1065 	mov	b,r4
   1679 12 2D 27           1066 	lcall	_strlen
   167C E5 82              1067 	mov	a,dpl
   167E 85 83 F0           1068 	mov	b,dph
                           1069 ;	genMinus
                           1070 ;	genMinusDec
   1681 24 FF              1071 	add	a,#0xff
   1683 FA                 1072 	mov	r2,a
   1684 E5 F0              1073 	mov	a,b
   1686 34 FF              1074 	addc	a,#0xff
   1688 FB                 1075 	mov	r3,a
                           1076 ;	genCmpGt
                           1077 ;	genCmp
   1689 C3                 1078 	clr	c
   168A 74 10              1079 	mov	a,#0x10
   168C 9A                 1080 	subb	a,r2
                           1081 ;	Peephole 159	avoided xrl during execution
   168D 74 80              1082 	mov	a,#(0x00 ^ 0x80)
   168F 8B F0              1083 	mov	b,r3
   1691 63 F0 80           1084 	xrl	b,#0x80
   1694 95 F0              1085 	subb	a,b
                           1086 ;	genIfxJump
                           1087 ;	Peephole 108.a	removed ljmp by inverse jump logic
   1696 50 1C              1088 	jnc	00102$
                           1089 ;	Peephole 300	removed redundant label 00110$
                           1090 ;	../lcd.c:178: disp_str[LCD_CHAR_WIDTH] = 0;
                           1091 ;	genAssign
   1698 90 00 34           1092 	mov	dptr,#_print_line_lcd_PARM_2
   169B E0                 1093 	movx	a,@dptr
   169C FA                 1094 	mov	r2,a
   169D A3                 1095 	inc	dptr
   169E E0                 1096 	movx	a,@dptr
   169F FB                 1097 	mov	r3,a
   16A0 A3                 1098 	inc	dptr
   16A1 E0                 1099 	movx	a,@dptr
   16A2 FC                 1100 	mov	r4,a
                           1101 ;	genPlus
                           1102 ;     genPlusIncr
   16A3 74 10              1103 	mov	a,#0x10
                           1104 ;	Peephole 236.a	used r2 instead of ar2
   16A5 2A                 1105 	add	a,r2
   16A6 FA                 1106 	mov	r2,a
                           1107 ;	Peephole 181	changed mov to clr
   16A7 E4                 1108 	clr	a
                           1109 ;	Peephole 236.b	used r3 instead of ar3
   16A8 3B                 1110 	addc	a,r3
   16A9 FB                 1111 	mov	r3,a
                           1112 ;	genPointerSet
                           1113 ;	genGenPointerSet
   16AA 8A 82              1114 	mov	dpl,r2
   16AC 8B 83              1115 	mov	dph,r3
   16AE 8C F0              1116 	mov	b,r4
                           1117 ;	Peephole 181	changed mov to clr
   16B0 E4                 1118 	clr	a
   16B1 12 20 28           1119 	lcall	__gptrput
   16B4                    1120 00102$:
                           1121 ;	../lcd.c:181: lcdputstr(disp_str);
                           1122 ;	genAssign
   16B4 90 00 34           1123 	mov	dptr,#_print_line_lcd_PARM_2
   16B7 E0                 1124 	movx	a,@dptr
   16B8 FA                 1125 	mov	r2,a
   16B9 A3                 1126 	inc	dptr
   16BA E0                 1127 	movx	a,@dptr
   16BB FB                 1128 	mov	r3,a
   16BC A3                 1129 	inc	dptr
   16BD E0                 1130 	movx	a,@dptr
   16BE FC                 1131 	mov	r4,a
                           1132 ;	genCall
   16BF 8A 82              1133 	mov	dpl,r2
   16C1 8B 83              1134 	mov	dph,r3
   16C3 8C F0              1135 	mov	b,r4
                           1136 ;	Peephole 253.c	replaced lcall with ljmp
   16C5 02 15 EF           1137 	ljmp	_lcdputstr
   16C8                    1138 00105$:
   16C8 22                 1139 	ret
                           1140 ;------------------------------------------------------------
                           1141 ;Allocation info for local variables in function 'lcdgotoaddr'
                           1142 ;------------------------------------------------------------
                           1143 ;ddram_add                 Allocated with name '_lcdgotoaddr_ddram_add_1_1'
                           1144 ;------------------------------------------------------------
                           1145 ;	../lcd.c:199: void lcdgotoaddr (unsigned char ddram_add)
                           1146 ;	-----------------------------------------
                           1147 ;	 function lcdgotoaddr
                           1148 ;	-----------------------------------------
   16C9                    1149 _lcdgotoaddr:
                           1150 ;	genReceive
   16C9 E5 82              1151 	mov	a,dpl
   16CB 90 00 39           1152 	mov	dptr,#_lcdgotoaddr_ddram_add_1_1
   16CE F0                 1153 	movx	@dptr,a
                           1154 ;	../lcd.c:201: if(ddram_add < 0x80)
                           1155 ;	genAssign
   16CF 90 00 39           1156 	mov	dptr,#_lcdgotoaddr_ddram_add_1_1
   16D2 E0                 1157 	movx	a,@dptr
   16D3 FA                 1158 	mov	r2,a
                           1159 ;	genCmpLt
                           1160 ;	genCmp
   16D4 BA 80 00           1161 	cjne	r2,#0x80,00106$
   16D7                    1162 00106$:
                           1163 ;	genIfxJump
                           1164 ;	Peephole 108.a	removed ljmp by inverse jump logic
   16D7 50 19              1165 	jnc	00103$
                           1166 ;	Peephole 300	removed redundant label 00107$
                           1167 ;	../lcd.c:203: lcdbusywait();
                           1168 ;	genCall
   16D9 C0 02              1169 	push	ar2
   16DB 12 14 F4           1170 	lcall	_lcdbusywait
   16DE D0 02              1171 	pop	ar2
                           1172 ;	../lcd.c:204: lcd_put_command(LCDHOME + ddram_add);
                           1173 ;	genPlus
                           1174 ;     genPlusIncr
   16E0 74 80              1175 	mov	a,#0x80
                           1176 ;	Peephole 236.a	used r2 instead of ar2
   16E2 2A                 1177 	add	a,r2
                           1178 ;	genCall
   16E3 FA                 1179 	mov	r2,a
                           1180 ;	Peephole 244.c	loading dpl from a instead of r2
   16E4 F5 82              1181 	mov	dpl,a
   16E6 C0 02              1182 	push	ar2
   16E8 12 15 2D           1183 	lcall	_lcd_put_command
   16EB D0 02              1184 	pop	ar2
                           1185 ;	../lcd.c:205: cursor_position = LCDHOME + ddram_add;
                           1186 ;	genAssign
   16ED 90 00 D0           1187 	mov	dptr,#_cursor_position
   16F0 EA                 1188 	mov	a,r2
   16F1 F0                 1189 	movx	@dptr,a
   16F2                    1190 00103$:
   16F2 22                 1191 	ret
                           1192 ;------------------------------------------------------------
                           1193 ;Allocation info for local variables in function 'lcdgotoxy'
                           1194 ;------------------------------------------------------------
                           1195 ;col                       Allocated with name '_lcdgotoxy_PARM_2'
                           1196 ;row                       Allocated with name '_lcdgotoxy_row_1_1'
                           1197 ;------------------------------------------------------------
                           1198 ;	../lcd.c:219: void lcdgotoxy (unsigned char row, unsigned char col)
                           1199 ;	-----------------------------------------
                           1200 ;	 function lcdgotoxy
                           1201 ;	-----------------------------------------
   16F3                    1202 _lcdgotoxy:
                           1203 ;	genReceive
   16F3 E5 82              1204 	mov	a,dpl
   16F5 90 00 3B           1205 	mov	dptr,#_lcdgotoxy_row_1_1
   16F8 F0                 1206 	movx	@dptr,a
                           1207 ;	../lcd.c:221: if((row < 4) && (col < 0x10))
                           1208 ;	genAssign
   16F9 90 00 3B           1209 	mov	dptr,#_lcdgotoxy_row_1_1
   16FC E0                 1210 	movx	a,@dptr
   16FD FA                 1211 	mov	r2,a
                           1212 ;	genCmpLt
                           1213 ;	genCmp
   16FE BA 04 00           1214 	cjne	r2,#0x04,00115$
   1701                    1215 00115$:
                           1216 ;	genIfxJump
                           1217 ;	Peephole 108.a	removed ljmp by inverse jump logic
   1701 50 49              1218 	jnc	00110$
                           1219 ;	Peephole 300	removed redundant label 00116$
                           1220 ;	genAssign
   1703 90 00 3A           1221 	mov	dptr,#_lcdgotoxy_PARM_2
   1706 E0                 1222 	movx	a,@dptr
   1707 FB                 1223 	mov	r3,a
                           1224 ;	genCmpLt
                           1225 ;	genCmp
   1708 BB 10 00           1226 	cjne	r3,#0x10,00117$
   170B                    1227 00117$:
                           1228 ;	genIfxJump
                           1229 ;	Peephole 108.a	removed ljmp by inverse jump logic
   170B 50 3F              1230 	jnc	00110$
                           1231 ;	Peephole 300	removed redundant label 00118$
                           1232 ;	../lcd.c:223: switch (row)
                           1233 ;	genAssign
                           1234 ;	genCmpGt
                           1235 ;	genCmp
                           1236 ;	genIfxJump
                           1237 ;	Peephole 132.b	optimized genCmpGt by inverse logic (acc differs)
                           1238 ;	peephole 177.h	optimized mov sequence
   170D EA                 1239 	mov	a,r2
                           1240 ;	Peephole 236.i	used r4 instead of ar4
   170E FC                 1241 	mov	r4,a
   170F 24 FC              1242 	add	a,#0xff - 0x03
                           1243 ;	Peephole 112.b	changed ljmp to sjmp
                           1244 ;	Peephole 160.a	removed sjmp by inverse jump logic
   1711 40 33              1245 	jc	00105$
                           1246 ;	Peephole 300	removed redundant label 00119$
                           1247 ;	genJumpTab
   1713 EC                 1248 	mov	a,r4
                           1249 ;	Peephole 254	optimized left shift
   1714 2C                 1250 	add	a,r4
   1715 2C                 1251 	add	a,r4
   1716 90 17 1A           1252 	mov	dptr,#00120$
   1719 73                 1253 	jmp	@a+dptr
   171A                    1254 00120$:
   171A 02 17 26           1255 	ljmp	00101$
   171D 02 17 2B           1256 	ljmp	00102$
   1720 02 17 34           1257 	ljmp	00103$
   1723 02 17 3D           1258 	ljmp	00104$
                           1259 ;	../lcd.c:225: case 0: lcdgotoaddr(LCD_0_OFFSET + col); break;
   1726                    1260 00101$:
                           1261 ;	genCall
   1726 8B 82              1262 	mov	dpl,r3
                           1263 ;	../lcd.c:226: case 1: lcdgotoaddr(LCD_1_OFFSET + col); break;
                           1264 ;	Peephole 112.b	changed ljmp to sjmp
                           1265 ;	Peephole 251.b	replaced sjmp to ret with ret
                           1266 ;	Peephole 253.a	replaced lcall/ret with ljmp
   1728 02 16 C9           1267 	ljmp	_lcdgotoaddr
   172B                    1268 00102$:
                           1269 ;	genPlus
                           1270 ;     genPlusIncr
   172B 74 40              1271 	mov	a,#0x40
                           1272 ;	Peephole 236.a	used r3 instead of ar3
   172D 2B                 1273 	add	a,r3
                           1274 ;	genCall
   172E FA                 1275 	mov	r2,a
                           1276 ;	Peephole 244.c	loading dpl from a instead of r2
   172F F5 82              1277 	mov	dpl,a
                           1278 ;	../lcd.c:227: case 2: lcdgotoaddr(LCD_2_OFFSET + col); break;
                           1279 ;	Peephole 112.b	changed ljmp to sjmp
                           1280 ;	Peephole 251.b	replaced sjmp to ret with ret
                           1281 ;	Peephole 253.a	replaced lcall/ret with ljmp
   1731 02 16 C9           1282 	ljmp	_lcdgotoaddr
   1734                    1283 00103$:
                           1284 ;	genPlus
                           1285 ;     genPlusIncr
   1734 74 10              1286 	mov	a,#0x10
                           1287 ;	Peephole 236.a	used r3 instead of ar3
   1736 2B                 1288 	add	a,r3
                           1289 ;	genCall
   1737 FA                 1290 	mov	r2,a
                           1291 ;	Peephole 244.c	loading dpl from a instead of r2
   1738 F5 82              1292 	mov	dpl,a
                           1293 ;	../lcd.c:228: case 3: lcdgotoaddr(LCD_3_OFFSET + col); break;
                           1294 ;	Peephole 112.b	changed ljmp to sjmp
                           1295 ;	Peephole 251.b	replaced sjmp to ret with ret
                           1296 ;	Peephole 253.a	replaced lcall/ret with ljmp
   173A 02 16 C9           1297 	ljmp	_lcdgotoaddr
   173D                    1298 00104$:
                           1299 ;	genPlus
                           1300 ;     genPlusIncr
   173D 74 50              1301 	mov	a,#0x50
                           1302 ;	Peephole 236.a	used r3 instead of ar3
   173F 2B                 1303 	add	a,r3
                           1304 ;	genCall
   1740 FB                 1305 	mov	r3,a
                           1306 ;	Peephole 244.c	loading dpl from a instead of r3
   1741 F5 82              1307 	mov	dpl,a
                           1308 ;	../lcd.c:229: default: lcdgotoaddr(LCDHOME);
                           1309 ;	Peephole 112.b	changed ljmp to sjmp
                           1310 ;	Peephole 251.b	replaced sjmp to ret with ret
                           1311 ;	Peephole 253.a	replaced lcall/ret with ljmp
   1743 02 16 C9           1312 	ljmp	_lcdgotoaddr
   1746                    1313 00105$:
                           1314 ;	genCall
   1746 75 82 80           1315 	mov	dpl,#0x80
                           1316 ;	../lcd.c:230: }
                           1317 ;	Peephole 253.c	replaced lcall with ljmp
   1749 02 16 C9           1318 	ljmp	_lcdgotoaddr
   174C                    1319 00110$:
   174C 22                 1320 	ret
                           1321 ;------------------------------------------------------------
                           1322 ;Allocation info for local variables in function 'go_to_home'
                           1323 ;------------------------------------------------------------
                           1324 ;------------------------------------------------------------
                           1325 ;	../lcd.c:243: void go_to_home ()
                           1326 ;	-----------------------------------------
                           1327 ;	 function go_to_home
                           1328 ;	-----------------------------------------
   174D                    1329 _go_to_home:
                           1330 ;	../lcd.c:245: lcd_put_command(LCDHOME);                                                                        //-- cursor go to 0x00
                           1331 ;	genCall
   174D 75 82 80           1332 	mov	dpl,#0x80
   1750 12 15 2D           1333 	lcall	_lcd_put_command
                           1334 ;	../lcd.c:246: cursor_position = LCDHOME;
                           1335 ;	genAssign
   1753 90 00 D0           1336 	mov	dptr,#_cursor_position
   1756 74 80              1337 	mov	a,#0x80
   1758 F0                 1338 	movx	@dptr,a
                           1339 ;	Peephole 300	removed redundant label 00101$
   1759 22                 1340 	ret
                           1341 ;------------------------------------------------------------
                           1342 ;Allocation info for local variables in function 'clear_lcd'
                           1343 ;------------------------------------------------------------
                           1344 ;------------------------------------------------------------
                           1345 ;	../lcd.c:261: void clear_lcd ()
                           1346 ;	-----------------------------------------
                           1347 ;	 function clear_lcd
                           1348 ;	-----------------------------------------
   175A                    1349 _clear_lcd:
                           1350 ;	../lcd.c:263: lcd_put_command(LCD_CLR);                                                                       //-- clear LCD display
                           1351 ;	genCall
   175A 75 82 01           1352 	mov	dpl,#0x01
   175D 12 15 2D           1353 	lcall	_lcd_put_command
                           1354 ;	../lcd.c:264: lcd_put_command(LCDHOME);                                                                        //-- cursor go to 0x00
                           1355 ;	genCall
   1760 75 82 80           1356 	mov	dpl,#0x80
   1763 12 15 2D           1357 	lcall	_lcd_put_command
                           1358 ;	../lcd.c:265: cursor_position = LINE_0_START;
                           1359 ;	genAssign
   1766 90 00 D0           1360 	mov	dptr,#_cursor_position
   1769 74 80              1361 	mov	a,#0x80
   176B F0                 1362 	movx	@dptr,a
                           1363 ;	../lcd.c:266: delay_millisec(5);
                           1364 ;	genCall
                           1365 ;	Peephole 182.b	used 16 bit load of dptr
   176C 90 00 05           1366 	mov	dptr,#0x0005
                           1367 ;	Peephole 253.b	replaced lcall/ret with ljmp
   176F 02 1E 77           1368 	ljmp	_delay_millisec
                           1369 ;
                           1370 ;------------------------------------------------------------
                           1371 ;Allocation info for local variables in function 'clear_line'
                           1372 ;------------------------------------------------------------
                           1373 ;line                      Allocated with name '_clear_line_line_1_1'
                           1374 ;------------------------------------------------------------
                           1375 ;	../lcd.c:278: void clear_line(unsigned int line)
                           1376 ;	-----------------------------------------
                           1377 ;	 function clear_line
                           1378 ;	-----------------------------------------
   1772                    1379 _clear_line:
                           1380 ;	genReceive
   1772 AA 83              1381 	mov	r2,dph
   1774 E5 82              1382 	mov	a,dpl
   1776 90 00 3C           1383 	mov	dptr,#_clear_line_line_1_1
   1779 F0                 1384 	movx	@dptr,a
   177A A3                 1385 	inc	dptr
   177B EA                 1386 	mov	a,r2
   177C F0                 1387 	movx	@dptr,a
                           1388 ;	../lcd.c:280: if (line <= 3)
                           1389 ;	genAssign
   177D 90 00 3C           1390 	mov	dptr,#_clear_line_line_1_1
   1780 E0                 1391 	movx	a,@dptr
   1781 FA                 1392 	mov	r2,a
   1782 A3                 1393 	inc	dptr
   1783 E0                 1394 	movx	a,@dptr
   1784 FB                 1395 	mov	r3,a
                           1396 ;	genCmpGt
                           1397 ;	genCmp
   1785 C3                 1398 	clr	c
   1786 74 03              1399 	mov	a,#0x03
   1788 9A                 1400 	subb	a,r2
                           1401 ;	Peephole 181	changed mov to clr
   1789 E4                 1402 	clr	a
   178A 9B                 1403 	subb	a,r3
                           1404 ;	genIfxJump
                           1405 ;	Peephole 112.b	changed ljmp to sjmp
                           1406 ;	Peephole 160.a	removed sjmp by inverse jump logic
   178B 40 27              1407 	jc	00103$
                           1408 ;	Peephole 300	removed redundant label 00106$
                           1409 ;	../lcd.c:282: print_line_lcd(line,"                ");
                           1410 ;	genCast
   178D 90 00 34           1411 	mov	dptr,#_print_line_lcd_PARM_2
   1790 74 79              1412 	mov	a,#__str_0
   1792 F0                 1413 	movx	@dptr,a
   1793 A3                 1414 	inc	dptr
   1794 74 35              1415 	mov	a,#(__str_0 >> 8)
   1796 F0                 1416 	movx	@dptr,a
   1797 A3                 1417 	inc	dptr
   1798 74 80              1418 	mov	a,#0x80
   179A F0                 1419 	movx	@dptr,a
                           1420 ;	genCall
   179B 8A 82              1421 	mov	dpl,r2
   179D 8B 83              1422 	mov	dph,r3
   179F C0 02              1423 	push	ar2
   17A1 C0 03              1424 	push	ar3
   17A3 12 16 43           1425 	lcall	_print_line_lcd
   17A6 D0 03              1426 	pop	ar3
   17A8 D0 02              1427 	pop	ar2
                           1428 ;	../lcd.c:283: lcdgotoxy(line,0);
                           1429 ;	genCast
                           1430 ;	genAssign
   17AA 90 00 3A           1431 	mov	dptr,#_lcdgotoxy_PARM_2
                           1432 ;	Peephole 181	changed mov to clr
   17AD E4                 1433 	clr	a
   17AE F0                 1434 	movx	@dptr,a
                           1435 ;	genCall
   17AF 8A 82              1436 	mov	dpl,r2
                           1437 ;	Peephole 253.c	replaced lcall with ljmp
   17B1 02 16 F3           1438 	ljmp	_lcdgotoxy
   17B4                    1439 00103$:
   17B4 22                 1440 	ret
                           1441 	.area CSEG    (CODE)
                           1442 	.area CONST   (CODE)
   3579                    1443 __str_0:
   3579 20 20 20 20 20 20  1444 	.ascii "                "
        20 20 20 20 20 20
        20 20 20 20
   3589 00                 1445 	.db 0x00
                           1446 	.area XINIT   (CODE)
   37FA                    1447 __xinit__lcdPtr:
                           1448 ; generic printIvalPtr
   37FA 00 F0 00           1449 	.byte #0x00,#0xF0,#0x00
   37FD                    1450 __xinit__start_busy_chk:
   37FD 00                 1451 	.db #0x00
   37FE                    1452 __xinit__cursor_position:
   37FE 80                 1453 	.db #0x80
