;--------------------------------------------------------
; File Created by SDCC : FreeWare ANSI-C Compiler
; Version 2.6.0 #4309 (Jul 28 2006)
; This file generated Wed Apr 13 21:15:06 2011
;--------------------------------------------------------
	.module lcd
	.optsdcc -mmcs51 --model-large
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _P1_1
	.globl _P1_0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _SM0
	.globl _SM1
	.globl _SM2
	.globl _REN
	.globl _TB8
	.globl _RB8
	.globl _TI
	.globl _RI
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _F1
	.globl _P
	.globl _RD
	.globl _WR
	.globl _T1
	.globl _T0
	.globl _INT1
	.globl _INT0
	.globl _TXD0
	.globl _TXD
	.globl _RXD0
	.globl _RXD
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _PS
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _EA
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _BREG_F7
	.globl _BREG_F6
	.globl _BREG_F5
	.globl _BREG_F4
	.globl _BREG_F3
	.globl _BREG_F2
	.globl _BREG_F1
	.globl _BREG_F0
	.globl _P5_7
	.globl _P5_6
	.globl _P5_5
	.globl _P5_4
	.globl _P5_3
	.globl _P5_2
	.globl _P5_1
	.globl _P5_0
	.globl _P4_7
	.globl _P4_6
	.globl _P4_5
	.globl _P4_4
	.globl _P4_3
	.globl _P4_2
	.globl _P4_1
	.globl _P4_0
	.globl _PX0L
	.globl _PT0L
	.globl _PX1L
	.globl _PT1L
	.globl _PLS
	.globl _PT2L
	.globl _PPCL
	.globl _EC
	.globl _CCF0
	.globl _CCF1
	.globl _CCF2
	.globl _CCF3
	.globl _CCF4
	.globl _CR
	.globl _CF
	.globl _TF2
	.globl _EXF2
	.globl _RCLK
	.globl _TCLK
	.globl _EXEN2
	.globl _TR2
	.globl _C_T2
	.globl _CP_RL2
	.globl _T2CON_7
	.globl _T2CON_6
	.globl _T2CON_5
	.globl _T2CON_4
	.globl _T2CON_3
	.globl _T2CON_2
	.globl _T2CON_1
	.globl _T2CON_0
	.globl _PT2
	.globl _ET2
	.globl _TMOD
	.globl _TL1
	.globl _TL0
	.globl _TH1
	.globl _TH0
	.globl _TCON
	.globl _SP
	.globl _SCON
	.globl _SBUF0
	.globl _SBUF
	.globl _PSW
	.globl _PCON
	.globl _P3
	.globl _P2
	.globl _P1
	.globl _P0
	.globl _IP
	.globl _IE
	.globl _DP0L
	.globl _DPL
	.globl _DP0H
	.globl _DPH
	.globl _B
	.globl _ACC
	.globl _EECON
	.globl _KBF
	.globl _KBE
	.globl _KBLS
	.globl _BRL
	.globl _BDRCON
	.globl _T2MOD
	.globl _SPDAT
	.globl _SPSTA
	.globl _SPCON
	.globl _SADEN
	.globl _SADDR
	.globl _WDTPRG
	.globl _WDTRST
	.globl _P5
	.globl _P4
	.globl _IPH1
	.globl _IPL1
	.globl _IPH0
	.globl _IPL0
	.globl _IEN1
	.globl _IEN0
	.globl _CMOD
	.globl _CL
	.globl _CH
	.globl _CCON
	.globl _CCAPM4
	.globl _CCAPM3
	.globl _CCAPM2
	.globl _CCAPM1
	.globl _CCAPM0
	.globl _CCAP4L
	.globl _CCAP3L
	.globl _CCAP2L
	.globl _CCAP1L
	.globl _CCAP0L
	.globl _CCAP4H
	.globl _CCAP3H
	.globl _CCAP2H
	.globl _CCAP1H
	.globl _CCAP0H
	.globl _CKCKON1
	.globl _CKCKON0
	.globl _CKRL
	.globl _AUXR1
	.globl _AUXR
	.globl _TH2
	.globl _TL2
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _T2CON
	.globl _cursor_position
	.globl _start_busy_chk
	.globl _lcdPtr
	.globl _lcdgotoxy_PARM_2
	.globl _print_line_lcd_PARM_2
	.globl _init_lcd
	.globl _lcdbusywait
	.globl _lcd_put_command
	.globl _lcdputch
	.globl _lcdputstr
	.globl _print_line_lcd
	.globl _lcdgotoaddr
	.globl _lcdgotoxy
	.globl _go_to_home
	.globl _clear_lcd
	.globl _clear_line
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (DATA)
_T2CON	=	0x00c8
_RCAP2L	=	0x00ca
_RCAP2H	=	0x00cb
_TL2	=	0x00cc
_TH2	=	0x00cd
_AUXR	=	0x008e
_AUXR1	=	0x00a2
_CKRL	=	0x0097
_CKCKON0	=	0x008f
_CKCKON1	=	0x008f
_CCAP0H	=	0x00fa
_CCAP1H	=	0x00fb
_CCAP2H	=	0x00fc
_CCAP3H	=	0x00fd
_CCAP4H	=	0x00fe
_CCAP0L	=	0x00ea
_CCAP1L	=	0x00eb
_CCAP2L	=	0x00ec
_CCAP3L	=	0x00ed
_CCAP4L	=	0x00ee
_CCAPM0	=	0x00da
_CCAPM1	=	0x00db
_CCAPM2	=	0x00dc
_CCAPM3	=	0x00dd
_CCAPM4	=	0x00de
_CCON	=	0x00d8
_CH	=	0x00f9
_CL	=	0x00e9
_CMOD	=	0x00d9
_IEN0	=	0x00a8
_IEN1	=	0x00b1
_IPL0	=	0x00b8
_IPH0	=	0x00b7
_IPL1	=	0x00b2
_IPH1	=	0x00b3
_P4	=	0x00c0
_P5	=	0x00d8
_WDTRST	=	0x00a6
_WDTPRG	=	0x00a7
_SADDR	=	0x00a9
_SADEN	=	0x00b9
_SPCON	=	0x00c3
_SPSTA	=	0x00c4
_SPDAT	=	0x00c5
_T2MOD	=	0x00c9
_BDRCON	=	0x009b
_BRL	=	0x009a
_KBLS	=	0x009c
_KBE	=	0x009d
_KBF	=	0x009e
_EECON	=	0x00d2
_ACC	=	0x00e0
_B	=	0x00f0
_DPH	=	0x0083
_DP0H	=	0x0083
_DPL	=	0x0082
_DP0L	=	0x0082
_IE	=	0x00a8
_IP	=	0x00b8
_P0	=	0x0080
_P1	=	0x0090
_P2	=	0x00a0
_P3	=	0x00b0
_PCON	=	0x0087
_PSW	=	0x00d0
_SBUF	=	0x0099
_SBUF0	=	0x0099
_SCON	=	0x0098
_SP	=	0x0081
_TCON	=	0x0088
_TH0	=	0x008c
_TH1	=	0x008d
_TL0	=	0x008a
_TL1	=	0x008b
_TMOD	=	0x0089
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (DATA)
_ET2	=	0x00ad
_PT2	=	0x00bd
_T2CON_0	=	0x00c8
_T2CON_1	=	0x00c9
_T2CON_2	=	0x00ca
_T2CON_3	=	0x00cb
_T2CON_4	=	0x00cc
_T2CON_5	=	0x00cd
_T2CON_6	=	0x00ce
_T2CON_7	=	0x00cf
_CP_RL2	=	0x00c8
_C_T2	=	0x00c9
_TR2	=	0x00ca
_EXEN2	=	0x00cb
_TCLK	=	0x00cc
_RCLK	=	0x00cd
_EXF2	=	0x00ce
_TF2	=	0x00cf
_CF	=	0x00df
_CR	=	0x00de
_CCF4	=	0x00dc
_CCF3	=	0x00db
_CCF2	=	0x00da
_CCF1	=	0x00d9
_CCF0	=	0x00d8
_EC	=	0x00ae
_PPCL	=	0x00be
_PT2L	=	0x00bd
_PLS	=	0x00bc
_PT1L	=	0x00bb
_PX1L	=	0x00ba
_PT0L	=	0x00b9
_PX0L	=	0x00b8
_P4_0	=	0x00c0
_P4_1	=	0x00c1
_P4_2	=	0x00c2
_P4_3	=	0x00c3
_P4_4	=	0x00c4
_P4_5	=	0x00c5
_P4_6	=	0x00c6
_P4_7	=	0x00c7
_P5_0	=	0x00d8
_P5_1	=	0x00d9
_P5_2	=	0x00da
_P5_3	=	0x00db
_P5_4	=	0x00dc
_P5_5	=	0x00dd
_P5_6	=	0x00de
_P5_7	=	0x00df
_BREG_F0	=	0x00f0
_BREG_F1	=	0x00f1
_BREG_F2	=	0x00f2
_BREG_F3	=	0x00f3
_BREG_F4	=	0x00f4
_BREG_F5	=	0x00f5
_BREG_F6	=	0x00f6
_BREG_F7	=	0x00f7
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_EA	=	0x00af
_PX0	=	0x00b8
_PT0	=	0x00b9
_PX1	=	0x00ba
_PT1	=	0x00bb
_PS	=	0x00bc
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_RXD	=	0x00b0
_RXD0	=	0x00b0
_TXD	=	0x00b1
_TXD0	=	0x00b1
_INT0	=	0x00b2
_INT1	=	0x00b3
_T0	=	0x00b4
_T1	=	0x00b5
_WR	=	0x00b6
_RD	=	0x00b7
_P	=	0x00d0
_F1	=	0x00d1
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
_RI	=	0x0098
_TI	=	0x0099
_RB8	=	0x009a
_TB8	=	0x009b
_REN	=	0x009c
_SM2	=	0x009d
_SM1	=	0x009e
_SM0	=	0x009f
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_P1_0	=	0x0090
_P1_1	=	0x0091
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area OSEG    (OVR,DATA)
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
_lcdbusywait_busy_byte_read_1_1:
	.ds 1
_lcd_put_command_byte_wr_cmd_1_1:
	.ds 1
_lcdputch_byte_wr_1_1:
	.ds 1
_lcdputstr_disp_str_1_1:
	.ds 3
_print_line_lcd_PARM_2:
	.ds 3
_print_line_lcd_row_1_1:
	.ds 2
_lcdgotoaddr_ddram_add_1_1:
	.ds 1
_lcdgotoxy_PARM_2:
	.ds 1
_lcdgotoxy_row_1_1:
	.ds 1
_clear_line_line_1_1:
	.ds 2
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
_lcdPtr::
	.ds 3
_start_busy_chk::
	.ds 1
_cursor_position::
	.ds 1
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'init_lcd'
;------------------------------------------------------------
;------------------------------------------------------------
;	../lcd.c:18: void init_lcd(void)                                     // Init routine as per HD44780 data sheet
;	-----------------------------------------
;	 function init_lcd
;	-----------------------------------------
_init_lcd:
	ar2 = 0x02
	ar3 = 0x03
	ar4 = 0x04
	ar5 = 0x05
	ar6 = 0x06
	ar7 = 0x07
	ar0 = 0x00
	ar1 = 0x01
;	../lcd.c:20: LCD_RS = COMMAND_RS;                                // RS = 0
;	genAssign
	clr	_P1_2
;	../lcd.c:21: LCD_RW = WRITE_RW;                                  // RW = 0
;	genAssign
	clr	_P1_3
;	../lcd.c:23: delay_millisec(16);                                 // Wait more than 15ms
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0010
	lcall	_delay_millisec
;	../lcd.c:24: lcd_put_command(0x38);                              // Initialize for 8 bit , 2 line
;	genCall
	mov	dpl,#0x38
	lcall	_lcd_put_command
;	../lcd.c:25: delay_millisec(5);                                  // Wait more than 4.1ms
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0005
	lcall	_delay_millisec
;	../lcd.c:26: lcd_put_command(0x38);
;	genCall
	mov	dpl,#0x38
	lcall	_lcd_put_command
;	../lcd.c:27: delay_millisec(1);                                  // Wait more than 0.1ms
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0001
	lcall	_delay_millisec
;	../lcd.c:28: lcd_put_command(0x38);
;	genCall
	mov	dpl,#0x38
	lcall	_lcd_put_command
;	../lcd.c:29: delay_millisec(1);                                  // Wait more than 0.1ms
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0001
	lcall	_delay_millisec
;	../lcd.c:30: lcd_put_command(0x0D);                              // Display On; Cursor Off; Blink on
;	genCall
	mov	dpl,#0x0D
	lcall	_lcd_put_command
;	../lcd.c:31: lcd_put_command(0x01);                              // Clear the display
;	genCall
	mov	dpl,#0x01
	lcall	_lcd_put_command
;	../lcd.c:33: delay_millisec(5);                                  // Wait more than 1.64ms
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0005
	lcall	_delay_millisec
;	../lcd.c:34: start_busy_chk = TRUE;
;	genAssign
	mov	dptr,#_start_busy_chk
	mov	a,#0x01
	movx	@dptr,a
;	Peephole 300	removed redundant label 00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcdbusywait'
;------------------------------------------------------------
;busy_byte_read            Allocated with name '_lcdbusywait_busy_byte_read_1_1'
;------------------------------------------------------------
;	../lcd.c:46: void lcdbusywait(void)
;	-----------------------------------------
;	 function lcdbusywait
;	-----------------------------------------
_lcdbusywait:
;	../lcd.c:48: volatile unsigned char busy_byte_read = 0;
;	genAssign
	mov	dptr,#_lcdbusywait_busy_byte_read_1_1
;	Peephole 181	changed mov to clr
	clr	a
	movx	@dptr,a
;	../lcd.c:50: if (start_busy_chk == TRUE)
;	genAssign
	mov	dptr,#_start_busy_chk
	movx	a,@dptr
	mov	r2,a
;	genCmpEq
;	gencjneshort
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 198.b	optimized misc jump sequence
	cjne	r2,#0x01,00106$
;	Peephole 200.b	removed redundant sjmp
;	Peephole 300	removed redundant label 00110$
;	Peephole 300	removed redundant label 00111$
;	../lcd.c:52: P0 = 0xFF ;                                  // Set port as input
;	genAssign
	mov	_P0,#0xFF
;	../lcd.c:53: LCD_RS   = COMMAND_RS;
;	genAssign
	clr	_P1_2
;	../lcd.c:54: LCD_RW   = READ_RW;
;	genAssign
	setb	_P1_3
;	../lcd.c:55: do
00101$:
;	../lcd.c:57: busy_byte_read = LCD_DATA_PTR;
;	genAssign
	mov	dptr,#_lcdPtr
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r4,a
;	genPointerGet
;	genGenPointerGet
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	lcall	__gptrget
	mov	r2,a
	inc	dptr
	lcall	__gptrget
	mov	r3,a
;	genCast
;	../lcd.c:58: }while (busy_byte_read & 0x80);
;	genAssign
	mov	dptr,#_lcdbusywait_busy_byte_read_1_1
	mov	a,r2
	movx	@dptr,a
;	Peephole 180.a	removed redundant mov to dptr
	movx	a,@dptr
;	genAnd
	mov	r2,a
;	Peephole 105	removed redundant mov
;	genIfxJump
;	Peephole 108.e	removed ljmp by inverse jump logic
	jb	acc.7,00101$
;	Peephole 300	removed redundant label 00112$
00106$:
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_put_command'
;------------------------------------------------------------
;byte_wr_cmd               Allocated with name '_lcd_put_command_byte_wr_cmd_1_1'
;------------------------------------------------------------
;	../lcd.c:72: void lcd_put_command(char byte_wr_cmd)                             // Write a command to the LCD.
;	-----------------------------------------
;	 function lcd_put_command
;	-----------------------------------------
_lcd_put_command:
;	genReceive
	mov	a,dpl
	mov	dptr,#_lcd_put_command_byte_wr_cmd_1_1
	movx	@dptr,a
;	../lcd.c:74: lcdbusywait();                              // Is the LCD ready to take the command?
;	genCall
	lcall	_lcdbusywait
;	../lcd.c:75: LCD_RS = COMMAND_RS;                        // Register Select Low for writing command
;	genAssign
	clr	_P1_2
;	../lcd.c:76: LCD_RW = WRITE_RW;                              // R!W low for write
;	genAssign
	clr	_P1_3
;	../lcd.c:77: LCD_DATA_PTR = byte_wr_cmd;                               // Command byte to register
;	genAssign
	mov	dptr,#_lcdPtr
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r4,a
;	genAssign
	mov	dptr,#_lcd_put_command_byte_wr_cmd_1_1
	movx	a,@dptr
;	genCast
	mov	r5,a
;	Peephole 105	removed redundant mov
	rlc	a
	subb	a,acc
	mov	r6,a
;	genPointerSet
;	genGenPointerSet
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	mov	a,r5
	lcall	__gptrput
	inc	dptr
	mov	a,r6
	lcall	__gptrput
;	../lcd.c:78: LCD_RS   = COMMAND_RS;
;	genAssign
	clr	_P1_2
;	../lcd.c:79: LCD_RW   = READ_RW;
;	genAssign
	setb	_P1_3
;	Peephole 300	removed redundant label 00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcdputch'
;------------------------------------------------------------
;byte_wr                   Allocated with name '_lcdputch_byte_wr_1_1'
;------------------------------------------------------------
;	../lcd.c:94: void lcdputch(char byte_wr)                                                      // Write a character to the LCD.
;	-----------------------------------------
;	 function lcdputch
;	-----------------------------------------
_lcdputch:
;	genReceive
	mov	a,dpl
	mov	dptr,#_lcdputch_byte_wr_1_1
	movx	@dptr,a
;	../lcd.c:96: lcdbusywait();                                      // Is the LCD ready to take the command?
;	genCall
	lcall	_lcdbusywait
;	../lcd.c:97: LCD_RS = DATA_RS;                                   // Register Select High for writing data
;	genAssign
	setb	_P1_2
;	../lcd.c:98: LCD_RW = WRITE_RW;                                  // R!W low for write
;	genAssign
	clr	_P1_3
;	../lcd.c:99: LCD_DATA_PTR = byte_wr;                             // Data byte to data port
;	genAssign
	mov	dptr,#_lcdPtr
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r4,a
;	genAssign
	mov	dptr,#_lcdputch_byte_wr_1_1
	movx	a,@dptr
;	genCast
	mov	r5,a
;	Peephole 105	removed redundant mov
	rlc	a
	subb	a,acc
	mov	r6,a
;	genPointerSet
;	genGenPointerSet
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	mov	a,r5
	lcall	__gptrput
	inc	dptr
	mov	a,r6
	lcall	__gptrput
;	../lcd.c:101: switch (cursor_position)
;	genAssign
	mov	dptr,#_cursor_position
	movx	a,@dptr
	mov	r2,a
;	genCmpEq
;	gencjneshort
	cjne	r2,#0x8F,00113$
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00101$
00113$:
;	genCmpEq
;	gencjneshort
	cjne	r2,#0x9F,00114$
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00103$
00114$:
;	genCmpEq
;	gencjneshort
	cjne	r2,#0xCF,00115$
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00102$
00115$:
;	genCmpEq
;	gencjneshort
;	Peephole 112.b	changed ljmp to sjmp
;	../lcd.c:103: case LINE_0_END:
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 198.b	optimized misc jump sequence
	cjne	r2,#0xDF,00105$
	sjmp	00104$
;	Peephole 300	removed redundant label 00116$
00101$:
;	../lcd.c:105: lcd_put_command(LINE_1_START);
;	genCall
	mov	dpl,#0xC0
	lcall	_lcd_put_command
;	../lcd.c:106: cursor_position = LINE_1_START;
;	genAssign
	mov	dptr,#_cursor_position
	mov	a,#0xC0
	movx	@dptr,a
;	../lcd.c:107: break;
;	../lcd.c:110: case LINE_1_END:
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00106$
00102$:
;	../lcd.c:112: lcd_put_command(LINE_2_START);
;	genCall
	mov	dpl,#0x90
	lcall	_lcd_put_command
;	../lcd.c:113: cursor_position = LINE_2_START;
;	genAssign
	mov	dptr,#_cursor_position
	mov	a,#0x90
	movx	@dptr,a
;	../lcd.c:114: break;
;	../lcd.c:117: case LINE_2_END:
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00106$
00103$:
;	../lcd.c:119: lcd_put_command(LINE_3_START);
;	genCall
	mov	dpl,#0xD0
	lcall	_lcd_put_command
;	../lcd.c:120: cursor_position = LINE_3_START;
;	genAssign
	mov	dptr,#_cursor_position
	mov	a,#0xD0
	movx	@dptr,a
;	../lcd.c:121: break;
;	../lcd.c:124: case LINE_3_END:
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00106$
00104$:
;	../lcd.c:126: lcd_put_command(LINE_0_START);
;	genCall
	mov	dpl,#0x80
	lcall	_lcd_put_command
;	../lcd.c:127: cursor_position = LINE_0_START;
;	genAssign
	mov	dptr,#_cursor_position
	mov	a,#0x80
	movx	@dptr,a
;	../lcd.c:128: break;
;	../lcd.c:131: default:
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00106$
00105$:
;	../lcd.c:133: cursor_position++;
;	genPlus
	mov	dptr,#_cursor_position
;     genPlusIncr
	mov	a,#0x01
;	Peephole 236.a	used r2 instead of ar2
	add	a,r2
	movx	@dptr,a
;	../lcd.c:136: }
00106$:
;	../lcd.c:139: LCD_RS   = COMMAND_RS;
;	genAssign
	clr	_P1_2
;	../lcd.c:140: LCD_RW   = READ_RW;
;	genAssign
	setb	_P1_3
;	Peephole 300	removed redundant label 00107$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcdputstr'
;------------------------------------------------------------
;disp_str                  Allocated with name '_lcdputstr_disp_str_1_1'
;i                         Allocated with name '_lcdputstr_i_1_1'
;------------------------------------------------------------
;	../lcd.c:153: void lcdputstr (char *disp_str)                   // Write the 2 line message to LCD
;	-----------------------------------------
;	 function lcdputstr
;	-----------------------------------------
_lcdputstr:
;	genReceive
	mov	r2,b
	mov	r3,dph
	mov	a,dpl
	mov	dptr,#_lcdputstr_disp_str_1_1
	movx	@dptr,a
	inc	dptr
	mov	a,r3
	movx	@dptr,a
	inc	dptr
	mov	a,r2
	movx	@dptr,a
;	../lcd.c:156: for (i=0; disp_str[i]!='\0' ; i++)
;	genAssign
	mov	dptr,#_lcdputstr_disp_str_1_1
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r4,a
;	genAssign
	mov	r5,#0x00
	mov	r6,#0x00
00101$:
;	genPlus
;	Peephole 236.g	used r5 instead of ar5
	mov	a,r5
;	Peephole 236.a	used r2 instead of ar2
	add	a,r2
	mov	r7,a
;	Peephole 236.g	used r6 instead of ar6
	mov	a,r6
;	Peephole 236.b	used r3 instead of ar3
	addc	a,r3
	mov	r0,a
	mov	ar1,r4
;	genPointerGet
;	genGenPointerGet
	mov	dpl,r7
	mov	dph,r0
	mov	b,r1
	lcall	__gptrget
;	genCmpEq
;	gencjneshort
;	Peephole 112.b	changed ljmp to sjmp
	mov	r7,a
;	Peephole 115.b	jump optimization
	jz	00105$
;	Peephole 300	removed redundant label 00110$
;	../lcd.c:157: lcdputch(disp_str[i]);
;	genCall
	mov	dpl,r7
	push	ar2
	push	ar3
	push	ar4
	push	ar5
	push	ar6
	lcall	_lcdputch
	pop	ar6
	pop	ar5
	pop	ar4
	pop	ar3
	pop	ar2
;	../lcd.c:156: for (i=0; disp_str[i]!='\0' ; i++)
;	genPlus
;     genPlusIncr
;	tail increment optimized (range 7)
	inc	r5
	cjne	r5,#0x00,00101$
	inc	r6
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00101$
00105$:
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'print_line_lcd'
;------------------------------------------------------------
;disp_str                  Allocated with name '_print_line_lcd_PARM_2'
;row                       Allocated with name '_print_line_lcd_row_1_1'
;------------------------------------------------------------
;	../lcd.c:171: void print_line_lcd(unsigned int row, char *disp_str)
;	-----------------------------------------
;	 function print_line_lcd
;	-----------------------------------------
_print_line_lcd:
;	genReceive
	mov	r2,dph
	mov	a,dpl
	mov	dptr,#_print_line_lcd_row_1_1
	movx	@dptr,a
	inc	dptr
	mov	a,r2
	movx	@dptr,a
;	../lcd.c:173: if (row <= 3)
;	genAssign
	mov	dptr,#_print_line_lcd_row_1_1
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCmpGt
;	genCmp
	clr	c
	mov	a,#0x03
	subb	a,r2
;	Peephole 181	changed mov to clr
	clr	a
	subb	a,r3
;	genIfxJump
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 160.a	removed sjmp by inverse jump logic
	jc	00105$
;	Peephole 300	removed redundant label 00109$
;	../lcd.c:175: lcdgotoxy(row,0);
;	genCast
;	genAssign
	mov	dptr,#_lcdgotoxy_PARM_2
;	Peephole 181	changed mov to clr
	clr	a
	movx	@dptr,a
;	genCall
	mov	dpl,r2
	lcall	_lcdgotoxy
;	../lcd.c:177: if ( (strlen(disp_str)-1) > LCD_CHAR_WIDTH )
;	genAssign
	mov	dptr,#_print_line_lcd_PARM_2
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r4,a
;	genCall
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	lcall	_strlen
	mov	a,dpl
	mov	b,dph
;	genMinus
;	genMinusDec
	add	a,#0xff
	mov	r2,a
	mov	a,b
	addc	a,#0xff
	mov	r3,a
;	genCmpGt
;	genCmp
	clr	c
	mov	a,#0x10
	subb	a,r2
;	Peephole 159	avoided xrl during execution
	mov	a,#(0x00 ^ 0x80)
	mov	b,r3
	xrl	b,#0x80
	subb	a,b
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00102$
;	Peephole 300	removed redundant label 00110$
;	../lcd.c:178: disp_str[LCD_CHAR_WIDTH] = 0;
;	genAssign
	mov	dptr,#_print_line_lcd_PARM_2
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r4,a
;	genPlus
;     genPlusIncr
	mov	a,#0x10
;	Peephole 236.a	used r2 instead of ar2
	add	a,r2
	mov	r2,a
;	Peephole 181	changed mov to clr
	clr	a
;	Peephole 236.b	used r3 instead of ar3
	addc	a,r3
	mov	r3,a
;	genPointerSet
;	genGenPointerSet
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
;	Peephole 181	changed mov to clr
	clr	a
	lcall	__gptrput
00102$:
;	../lcd.c:181: lcdputstr(disp_str);
;	genAssign
	mov	dptr,#_print_line_lcd_PARM_2
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r4,a
;	genCall
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
;	Peephole 253.c	replaced lcall with ljmp
	ljmp	_lcdputstr
00105$:
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcdgotoaddr'
;------------------------------------------------------------
;ddram_add                 Allocated with name '_lcdgotoaddr_ddram_add_1_1'
;------------------------------------------------------------
;	../lcd.c:199: void lcdgotoaddr (unsigned char ddram_add)
;	-----------------------------------------
;	 function lcdgotoaddr
;	-----------------------------------------
_lcdgotoaddr:
;	genReceive
	mov	a,dpl
	mov	dptr,#_lcdgotoaddr_ddram_add_1_1
	movx	@dptr,a
;	../lcd.c:201: if(ddram_add < 0x80)
;	genAssign
	mov	dptr,#_lcdgotoaddr_ddram_add_1_1
	movx	a,@dptr
	mov	r2,a
;	genCmpLt
;	genCmp
	cjne	r2,#0x80,00106$
00106$:
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00103$
;	Peephole 300	removed redundant label 00107$
;	../lcd.c:203: lcdbusywait();
;	genCall
	push	ar2
	lcall	_lcdbusywait
	pop	ar2
;	../lcd.c:204: lcd_put_command(LCDHOME + ddram_add);
;	genPlus
;     genPlusIncr
	mov	a,#0x80
;	Peephole 236.a	used r2 instead of ar2
	add	a,r2
;	genCall
	mov	r2,a
;	Peephole 244.c	loading dpl from a instead of r2
	mov	dpl,a
	push	ar2
	lcall	_lcd_put_command
	pop	ar2
;	../lcd.c:205: cursor_position = LCDHOME + ddram_add;
;	genAssign
	mov	dptr,#_cursor_position
	mov	a,r2
	movx	@dptr,a
00103$:
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcdgotoxy'
;------------------------------------------------------------
;col                       Allocated with name '_lcdgotoxy_PARM_2'
;row                       Allocated with name '_lcdgotoxy_row_1_1'
;------------------------------------------------------------
;	../lcd.c:219: void lcdgotoxy (unsigned char row, unsigned char col)
;	-----------------------------------------
;	 function lcdgotoxy
;	-----------------------------------------
_lcdgotoxy:
;	genReceive
	mov	a,dpl
	mov	dptr,#_lcdgotoxy_row_1_1
	movx	@dptr,a
;	../lcd.c:221: if((row < 4) && (col < 0x10))
;	genAssign
	mov	dptr,#_lcdgotoxy_row_1_1
	movx	a,@dptr
	mov	r2,a
;	genCmpLt
;	genCmp
	cjne	r2,#0x04,00115$
00115$:
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00110$
;	Peephole 300	removed redundant label 00116$
;	genAssign
	mov	dptr,#_lcdgotoxy_PARM_2
	movx	a,@dptr
	mov	r3,a
;	genCmpLt
;	genCmp
	cjne	r3,#0x10,00117$
00117$:
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00110$
;	Peephole 300	removed redundant label 00118$
;	../lcd.c:223: switch (row)
;	genAssign
;	genCmpGt
;	genCmp
;	genIfxJump
;	Peephole 132.b	optimized genCmpGt by inverse logic (acc differs)
;	peephole 177.h	optimized mov sequence
	mov	a,r2
;	Peephole 236.i	used r4 instead of ar4
	mov	r4,a
	add	a,#0xff - 0x03
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 160.a	removed sjmp by inverse jump logic
	jc	00105$
;	Peephole 300	removed redundant label 00119$
;	genJumpTab
	mov	a,r4
;	Peephole 254	optimized left shift
	add	a,r4
	add	a,r4
	mov	dptr,#00120$
	jmp	@a+dptr
00120$:
	ljmp	00101$
	ljmp	00102$
	ljmp	00103$
	ljmp	00104$
;	../lcd.c:225: case 0: lcdgotoaddr(LCD_0_OFFSET + col); break;
00101$:
;	genCall
	mov	dpl,r3
;	../lcd.c:226: case 1: lcdgotoaddr(LCD_1_OFFSET + col); break;
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 251.b	replaced sjmp to ret with ret
;	Peephole 253.a	replaced lcall/ret with ljmp
	ljmp	_lcdgotoaddr
00102$:
;	genPlus
;     genPlusIncr
	mov	a,#0x40
;	Peephole 236.a	used r3 instead of ar3
	add	a,r3
;	genCall
	mov	r2,a
;	Peephole 244.c	loading dpl from a instead of r2
	mov	dpl,a
;	../lcd.c:227: case 2: lcdgotoaddr(LCD_2_OFFSET + col); break;
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 251.b	replaced sjmp to ret with ret
;	Peephole 253.a	replaced lcall/ret with ljmp
	ljmp	_lcdgotoaddr
00103$:
;	genPlus
;     genPlusIncr
	mov	a,#0x10
;	Peephole 236.a	used r3 instead of ar3
	add	a,r3
;	genCall
	mov	r2,a
;	Peephole 244.c	loading dpl from a instead of r2
	mov	dpl,a
;	../lcd.c:228: case 3: lcdgotoaddr(LCD_3_OFFSET + col); break;
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 251.b	replaced sjmp to ret with ret
;	Peephole 253.a	replaced lcall/ret with ljmp
	ljmp	_lcdgotoaddr
00104$:
;	genPlus
;     genPlusIncr
	mov	a,#0x50
;	Peephole 236.a	used r3 instead of ar3
	add	a,r3
;	genCall
	mov	r3,a
;	Peephole 244.c	loading dpl from a instead of r3
	mov	dpl,a
;	../lcd.c:229: default: lcdgotoaddr(LCDHOME);
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 251.b	replaced sjmp to ret with ret
;	Peephole 253.a	replaced lcall/ret with ljmp
	ljmp	_lcdgotoaddr
00105$:
;	genCall
	mov	dpl,#0x80
;	../lcd.c:230: }
;	Peephole 253.c	replaced lcall with ljmp
	ljmp	_lcdgotoaddr
00110$:
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'go_to_home'
;------------------------------------------------------------
;------------------------------------------------------------
;	../lcd.c:243: void go_to_home ()
;	-----------------------------------------
;	 function go_to_home
;	-----------------------------------------
_go_to_home:
;	../lcd.c:245: lcd_put_command(LCDHOME);                                                                        //-- cursor go to 0x00
;	genCall
	mov	dpl,#0x80
	lcall	_lcd_put_command
;	../lcd.c:246: cursor_position = LCDHOME;
;	genAssign
	mov	dptr,#_cursor_position
	mov	a,#0x80
	movx	@dptr,a
;	Peephole 300	removed redundant label 00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'clear_lcd'
;------------------------------------------------------------
;------------------------------------------------------------
;	../lcd.c:261: void clear_lcd ()
;	-----------------------------------------
;	 function clear_lcd
;	-----------------------------------------
_clear_lcd:
;	../lcd.c:263: lcd_put_command(LCD_CLR);                                                                       //-- clear LCD display
;	genCall
	mov	dpl,#0x01
	lcall	_lcd_put_command
;	../lcd.c:264: lcd_put_command(LCDHOME);                                                                        //-- cursor go to 0x00
;	genCall
	mov	dpl,#0x80
	lcall	_lcd_put_command
;	../lcd.c:265: cursor_position = LINE_0_START;
;	genAssign
	mov	dptr,#_cursor_position
	mov	a,#0x80
	movx	@dptr,a
;	../lcd.c:266: delay_millisec(5);
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0005
;	Peephole 253.b	replaced lcall/ret with ljmp
	ljmp	_delay_millisec
;
;------------------------------------------------------------
;Allocation info for local variables in function 'clear_line'
;------------------------------------------------------------
;line                      Allocated with name '_clear_line_line_1_1'
;------------------------------------------------------------
;	../lcd.c:278: void clear_line(unsigned int line)
;	-----------------------------------------
;	 function clear_line
;	-----------------------------------------
_clear_line:
;	genReceive
	mov	r2,dph
	mov	a,dpl
	mov	dptr,#_clear_line_line_1_1
	movx	@dptr,a
	inc	dptr
	mov	a,r2
	movx	@dptr,a
;	../lcd.c:280: if (line <= 3)
;	genAssign
	mov	dptr,#_clear_line_line_1_1
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCmpGt
;	genCmp
	clr	c
	mov	a,#0x03
	subb	a,r2
;	Peephole 181	changed mov to clr
	clr	a
	subb	a,r3
;	genIfxJump
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 160.a	removed sjmp by inverse jump logic
	jc	00103$
;	Peephole 300	removed redundant label 00106$
;	../lcd.c:282: print_line_lcd(line,"                ");
;	genCast
	mov	dptr,#_print_line_lcd_PARM_2
	mov	a,#__str_0
	movx	@dptr,a
	inc	dptr
	mov	a,#(__str_0 >> 8)
	movx	@dptr,a
	inc	dptr
	mov	a,#0x80
	movx	@dptr,a
;	genCall
	mov	dpl,r2
	mov	dph,r3
	push	ar2
	push	ar3
	lcall	_print_line_lcd
	pop	ar3
	pop	ar2
;	../lcd.c:283: lcdgotoxy(line,0);
;	genCast
;	genAssign
	mov	dptr,#_lcdgotoxy_PARM_2
;	Peephole 181	changed mov to clr
	clr	a
	movx	@dptr,a
;	genCall
	mov	dpl,r2
;	Peephole 253.c	replaced lcall with ljmp
	ljmp	_lcdgotoxy
00103$:
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
__str_0:
	.ascii "                "
	.db 0x00
	.area XINIT   (CODE)
__xinit__lcdPtr:
; generic printIvalPtr
	.byte #0x00,#0xF0,#0x00
__xinit__start_busy_chk:
	.db #0x00
__xinit__cursor_position:
	.db #0x80
