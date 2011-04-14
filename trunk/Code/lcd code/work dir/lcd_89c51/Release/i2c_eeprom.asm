;--------------------------------------------------------
; File Created by SDCC : FreeWare ANSI-C Compiler
; Version 2.6.0 #4309 (Jul 28 2006)
; This file generated Wed Apr 13 21:15:05 2011
;--------------------------------------------------------
	.module i2c_eeprom
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
	.globl _seq_read_PARM_3
	.globl _seq_read_PARM_2
	.globl _page_write_PARM_2
	.globl _byte_write_PARM_2
	.globl _offset_addr
	.globl _page_bits
	.globl _split_addr
	.globl _start
	.globl _stop
	.globl _clock
	.globl _write
	.globl _read
	.globl _byte_write
	.globl _page_write
	.globl _byte_read
	.globl _seq_read
	.globl _clear_eeprom
	.globl _eeprom_reset
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
_page_bits::
	.ds 2
_offset_addr::
	.ds 2
_split_addr_whole_addr_1_1:
	.ds 2
_write_byte_1_1:
	.ds 1
_write_mask_1_1:
	.ds 1
_read_status_1_1:
	.ds 1
_read_byte_1_1:
	.ds 1
_byte_write_PARM_2:
	.ds 1
_byte_write_addr_1_1:
	.ds 2
_byte_write_status_1_1:
	.ds 1
_page_write_PARM_2:
	.ds 3
_page_write_addr_1_1:
	.ds 2
_page_write_status_1_1:
	.ds 1
_byte_read_addr_1_1:
	.ds 2
_byte_read_val_1_1:
	.ds 1
_seq_read_PARM_2:
	.ds 1
_seq_read_PARM_3:
	.ds 2
_seq_read_size_1_1:
	.ds 2
_seq_read_num_1_1:
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
;Allocation info for local variables in function 'split_addr'
;------------------------------------------------------------
;whole_addr                Allocated with name '_split_addr_whole_addr_1_1'
;tp                        Allocated with name '_split_addr_tp_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:22: unsigned int split_addr(unsigned int whole_addr)
;	-----------------------------------------
;	 function split_addr
;	-----------------------------------------
_split_addr:
	ar2 = 0x02
	ar3 = 0x03
	ar4 = 0x04
	ar5 = 0x05
	ar6 = 0x06
	ar7 = 0x07
	ar0 = 0x00
	ar1 = 0x01
;	genReceive
	mov	r2,dph
	mov	a,dpl
	mov	dptr,#_split_addr_whole_addr_1_1
	movx	@dptr,a
	inc	dptr
	mov	a,r2
	movx	@dptr,a
;	../i2c_eeprom.c:26: page_bits = (whole_addr/256);
;	genAssign
	mov	dptr,#_split_addr_whole_addr_1_1
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genRightShift
;	genRightShiftLiteral
;	genrshTwo
	mov	ar4,r3
	mov	r5,#0x00
;	genAssign
	mov	dptr,#_page_bits
	mov	a,r4
	movx	@dptr,a
	inc	dptr
	mov	a,r5
	movx	@dptr,a
;	../i2c_eeprom.c:28: offset_addr = (whole_addr % 256);
;	genAnd
	mov	dptr,#_offset_addr
	mov	a,r2
	movx	@dptr,a
	inc	dptr
;	Peephole 181	changed mov to clr
	clr	a
	movx	@dptr,a
;	../i2c_eeprom.c:30: if(page_bits > 7)
;	genCmpGt
;	genCmp
	clr	c
	mov	a,#0x07
	subb	a,r4
;	Peephole 181	changed mov to clr
	clr	a
	subb	a,r5
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00102$
;	Peephole 300	removed redundant label 00107$
;	../i2c_eeprom.c:32: printf("invalid Address Range: %d\n\r",whole_addr);
;	genIpush
	push	ar2
	push	ar3
;	genIpush
	mov	a,#__str_0
	push	acc
	mov	a,#(__str_0 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	mov	a,sp
	add	a,#0xfb
	mov	sp,a
;	../i2c_eeprom.c:33: return ERROR;
;	genRet
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0000
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 251.b	replaced sjmp to ret with ret
	ret
00102$:
;	../i2c_eeprom.c:38: page_bits = page_bits & 0x07;
;	genAnd
	anl	ar4,#0x07
;	../i2c_eeprom.c:39: page_bits = page_bits << 1;
;	genLeftShift
;	genLeftShiftLiteral
;	genlshTwo
;	peephole 177.g	optimized mov sequence
;	Peephole 181	changed mov to clr
	clr	a
	mov	r5,a
	xch	a,r4
	add	a,acc
	xch	a,r4
	rlc	a
	mov	r5,a
;	../i2c_eeprom.c:40: page_bits = page_bits & 0x0E;
;	genAnd
	mov	dptr,#_page_bits
	mov	a,#0x0E
	anl	a,r4
	movx	@dptr,a
	inc	dptr
;	Peephole 181	changed mov to clr
	clr	a
	movx	@dptr,a
;	../i2c_eeprom.c:45: return SUCCESS;
;	genRet
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0001
;	Peephole 300	removed redundant label 00104$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'start'
;------------------------------------------------------------
;------------------------------------------------------------
;	../i2c_eeprom.c:58: void start()
;	-----------------------------------------
;	 function start
;	-----------------------------------------
_start:
;	../i2c_eeprom.c:60: SDA = HIGH;
;	genAssign
	setb	_P1_0
;	../i2c_eeprom.c:61: SCL = HIGH;
;	genAssign
	setb	_P1_1
;	../i2c_eeprom.c:62: NOP;
;	genInline
	 nop 
;	../i2c_eeprom.c:63: SDA = LOW;
;	genAssign
	clr	_P1_0
;	../i2c_eeprom.c:64: NOP;
;	genInline
	 nop 
;	../i2c_eeprom.c:65: SCL = LOW;
;	genAssign
	clr	_P1_1
;	Peephole 300	removed redundant label 00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'stop'
;------------------------------------------------------------
;------------------------------------------------------------
;	../i2c_eeprom.c:76: void stop()
;	-----------------------------------------
;	 function stop
;	-----------------------------------------
_stop:
;	../i2c_eeprom.c:78: SDA = LOW;
;	genAssign
	clr	_P1_0
;	../i2c_eeprom.c:79: SCL = HIGH;
;	genAssign
	setb	_P1_1
;	../i2c_eeprom.c:80: NOP;
;	genInline
	 nop 
;	../i2c_eeprom.c:81: SDA = HIGH;
;	genAssign
	setb	_P1_0
;	../i2c_eeprom.c:82: NOP;
;	genInline
	 nop 
;	../i2c_eeprom.c:83: SCL = LOW;
;	genAssign
	clr	_P1_1
;	Peephole 300	removed redundant label 00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'clock'
;------------------------------------------------------------
;status                    Allocated with name '_clock_status_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:95: unsigned char clock()
;	-----------------------------------------
;	 function clock
;	-----------------------------------------
_clock:
;	../i2c_eeprom.c:98: SCL = HIGH;
;	genAssign
	setb	_P1_1
;	../i2c_eeprom.c:99: NOP;
;	genInline
	 nop 
;	../i2c_eeprom.c:100: status = SDA;
;	genAssign
	clr	a
	mov	c,_P1_0
	rlc	a
	mov	r2,a
;	../i2c_eeprom.c:101: SCL = LOW;
;	genAssign
	clr	_P1_1
;	../i2c_eeprom.c:102: return (status);
;	genRet
	mov	dpl,r2
;	Peephole 300	removed redundant label 00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'write'
;------------------------------------------------------------
;byte                      Allocated with name '_write_byte_1_1'
;mask                      Allocated with name '_write_mask_1_1'
;status                    Allocated with name '_write_status_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:114: unsigned char write(unsigned char byte)
;	-----------------------------------------
;	 function write
;	-----------------------------------------
_write:
;	genReceive
	mov	a,dpl
	mov	dptr,#_write_byte_1_1
	movx	@dptr,a
;	../i2c_eeprom.c:117: unsigned char mask = 0x80;
;	genAssign
	mov	dptr,#_write_mask_1_1
	mov	a,#0x80
	movx	@dptr,a
;	../i2c_eeprom.c:125: return (clock());       /* return the status of SDA line on the 9th pulse */
;	genAssign
	mov	dptr,#_write_byte_1_1
	movx	a,@dptr
	mov	r2,a
00101$:
;	../i2c_eeprom.c:120: for ( ; mask > 0 ;  ) {
;	genAssign
	mov	dptr,#_write_mask_1_1
	movx	a,@dptr
;	genIfx
	mov	r3,a
;	Peephole 105	removed redundant mov
;	genIfxJump
;	Peephole 108.c	removed ljmp by inverse jump logic
	jz	00106$
;	Peephole 300	removed redundant label 00114$
;	genAssign
	mov	r3,#0x01
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00107$
00106$:
;	genAssign
	mov	r3,#0x00
00107$:
;	genIfx
	mov	a,r3
;	genIfxJump
;	Peephole 108.c	removed ljmp by inverse jump logic
	jz	00103$
;	Peephole 300	removed redundant label 00115$
;	../i2c_eeprom.c:121: SDA = (byte & mask) ? ( SET ):( CLEAR ) ;
;	genAssign
	mov	dptr,#_write_mask_1_1
	movx	a,@dptr
;	genAnd
	mov	r3,a
;	Peephole 105	removed redundant mov
	anl	a,r2
;	genIfx
;	genIfxJump
;	Peephole 108.c	removed ljmp by inverse jump logic
	jz	00108$
;	Peephole 300	removed redundant label 00116$
;	genAssign
	mov	r3,#0x01
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00108$:
;	genAssign
	mov	r3,#0x00
00109$:
;	genAssign
	mov	a,r3
	add	a,#0xff
	mov	_P1_0,c
;	../i2c_eeprom.c:122: mask >>= 1;
;	genAssign
	mov	dptr,#_write_mask_1_1
	movx	a,@dptr
;	genRightShift
;	genRightShiftLiteral
;	genrshOne
	mov	r3,a
;	Peephole 105	removed redundant mov
	clr	c
	rrc	a
;	genAssign
	mov	r3,a
	mov	dptr,#_write_mask_1_1
;	Peephole 100	removed redundant mov
	movx	@dptr,a
;	../i2c_eeprom.c:123: clock();
;	genCall
	push	ar2
	lcall	_clock
	pop	ar2
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00101$
00103$:
;	../i2c_eeprom.c:125: return (clock());       /* return the status of SDA line on the 9th pulse */
;	genCall
;	genRet
;	Peephole 150.a	removed misc moves via dpl before return
;	Peephole 253.b	replaced lcall/ret with ljmp
	ljmp	_clock
;
;------------------------------------------------------------
;Allocation info for local variables in function 'read'
;------------------------------------------------------------
;status                    Allocated with name '_read_status_1_1'
;byte                      Allocated with name '_read_byte_1_1'
;count                     Allocated with name '_read_count_1_1'
;level                     Allocated with name '_read_level_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:139: unsigned char read(unsigned char status)
;	-----------------------------------------
;	 function read
;	-----------------------------------------
_read:
;	genReceive
	mov	a,dpl
	mov	dptr,#_read_status_1_1
	movx	@dptr,a
;	../i2c_eeprom.c:143: unsigned char byte = 0;
;	genAssign
	mov	dptr,#_read_byte_1_1
;	Peephole 181	changed mov to clr
	clr	a
	movx	@dptr,a
;	../i2c_eeprom.c:145: SDA = HIGH;             /* configure SDA as input */
;	genAssign
	setb	_P1_0
;	../i2c_eeprom.c:146: for ( count = 0; count < 8; count++ ) {
;	genAssign
	mov	r2,#0x08
00103$:
;	../i2c_eeprom.c:147: byte <<= 1;
;	genAssign
	mov	dptr,#_read_byte_1_1
	movx	a,@dptr
;	genLeftShift
;	genLeftShiftLiteral
;	genlshOne
;	Peephole 105	removed redundant mov
;	genAssign
;	Peephole 204	removed redundant mov
	add	a,acc
	mov	r3,a
	mov	dptr,#_read_byte_1_1
;	Peephole 100	removed redundant mov
	movx	@dptr,a
;	../i2c_eeprom.c:148: level = clock();
;	genCall
	push	ar2
	lcall	_clock
	mov	r3,dpl
	pop	ar2
;	../i2c_eeprom.c:149: byte |= level;
;	genAssign
;	genOr
	mov	dptr,#_read_byte_1_1
	movx	a,@dptr
	mov	r4,a
;	Peephole 248.a	optimized or to xdata
	orl	a,r3
	movx	@dptr,a
;	genDjnz
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 205	optimized misc jump sequence
	djnz	r2,00103$
;	Peephole 300	removed redundant label 00109$
;	Peephole 300	removed redundant label 00110$
;	../i2c_eeprom.c:146: for ( count = 0; count < 8; count++ ) {
;	../i2c_eeprom.c:151: SDA = status;           /* status = 1 :- NACK
;	genAssign
	mov	dptr,#_read_status_1_1
	movx	a,@dptr
	add	a,#0xff
	mov	_P1_0,c
;	../i2c_eeprom.c:153: clock();
;	genCall
	lcall	_clock
;	../i2c_eeprom.c:154: return byte;
;	genAssign
	mov	dptr,#_read_byte_1_1
	movx	a,@dptr
;	genRet
;	Peephole 234.a	loading dpl directly from a(ccumulator), r2 not set
	mov	dpl,a
;	Peephole 300	removed redundant label 00104$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'byte_write'
;------------------------------------------------------------
;val                       Allocated with name '_byte_write_PARM_2'
;addr                      Allocated with name '_byte_write_addr_1_1'
;status                    Allocated with name '_byte_write_status_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:168: unsigned char byte_write( unsigned int addr, unsigned char val )
;	-----------------------------------------
;	 function byte_write
;	-----------------------------------------
_byte_write:
;	genReceive
	mov	r2,dph
	mov	a,dpl
	mov	dptr,#_byte_write_addr_1_1
	movx	@dptr,a
	inc	dptr
	mov	a,r2
	movx	@dptr,a
;	../i2c_eeprom.c:170: unsigned char status = ERROR;
;	genAssign
	mov	dptr,#_byte_write_status_1_1
;	Peephole 181	changed mov to clr
	clr	a
	movx	@dptr,a
;	../i2c_eeprom.c:172: split_addr(addr);
;	genAssign
	mov	dptr,#_byte_write_addr_1_1
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCall
	mov	dpl,r2
	mov	dph,r3
	lcall	_split_addr
;	../i2c_eeprom.c:173: start();
;	genCall
	lcall	_start
;	../i2c_eeprom.c:174: if ( write(EEPROM_WRITE_ADDR | page_bits) == ACK )
;	genAssign
	mov	dptr,#_page_bits
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genOr
	orl	ar2,#0xA0
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
;	Peephole 108.b	removed ljmp by inverse jump logic
	jnz	00108$
;	Peephole 300	removed redundant label 00115$
;	../i2c_eeprom.c:176: if (write(offset_addr) == ACK )
;	genAssign
	mov	dptr,#_offset_addr
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
;	Peephole 108.b	removed ljmp by inverse jump logic
	jnz	00105$
;	Peephole 300	removed redundant label 00116$
;	../i2c_eeprom.c:178: if ( write(val) == ACK )
;	genAssign
	mov	dptr,#_byte_write_PARM_2
	movx	a,@dptr
;	genCall
	mov	r2,a
;	Peephole 244.c	loading dpl from a instead of r2
	mov	dpl,a
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
;	Peephole 108.b	removed ljmp by inverse jump logic
	jnz	00102$
;	Peephole 300	removed redundant label 00117$
;	../i2c_eeprom.c:180: status = SUCCESS;
;	genAssign
	mov	dptr,#_byte_write_status_1_1
	mov	a,#0x01
	movx	@dptr,a
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00102$:
;	../i2c_eeprom.c:185: printf("write val failed!!\n\r");
;	genIpush
	mov	a,#__str_1
	push	acc
	mov	a,#(__str_1 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00105$:
;	../i2c_eeprom.c:190: printf("write low byte failed %x || %x!!\n\r",EEPROM_WRITE_ADDR,page_bits);
;	genIpush
	mov	dptr,#_page_bits
	movx	a,@dptr
	push	acc
	inc	dptr
	movx	a,@dptr
	push	acc
;	genIpush
	mov	a,#0xA0
	push	acc
;	Peephole 181	changed mov to clr
	clr	a
	push	acc
;	genIpush
	mov	a,#__str_2
	push	acc
	mov	a,#(__str_2 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	mov	a,sp
	add	a,#0xf9
	mov	sp,a
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00108$:
;	../i2c_eeprom.c:195: printf("write device id failed!!\n\r");
;	genIpush
	mov	a,#__str_3
	push	acc
	mov	a,#(__str_3 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
00109$:
;	../i2c_eeprom.c:198: stop();
;	genCall
	lcall	_stop
;	../i2c_eeprom.c:199: return status;
;	genAssign
	mov	dptr,#_byte_write_status_1_1
	movx	a,@dptr
;	genRet
;	Peephole 234.a	loading dpl directly from a(ccumulator), r2 not set
	mov	dpl,a
;	Peephole 300	removed redundant label 00110$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'page_write'
;------------------------------------------------------------
;str                       Allocated with name '_page_write_PARM_2'
;addr                      Allocated with name '_page_write_addr_1_1'
;status                    Allocated with name '_page_write_status_1_1'
;bytes                     Allocated with name '_page_write_bytes_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:212: unsigned char page_write(unsigned int addr, const unsigned char *str )
;	-----------------------------------------
;	 function page_write
;	-----------------------------------------
_page_write:
;	genReceive
	mov	r2,dph
	mov	a,dpl
	mov	dptr,#_page_write_addr_1_1
	movx	@dptr,a
	inc	dptr
	mov	a,r2
	movx	@dptr,a
;	../i2c_eeprom.c:214: unsigned char status = ERROR;
;	genAssign
	mov	dptr,#_page_write_status_1_1
;	Peephole 181	changed mov to clr
	clr	a
	movx	@dptr,a
;	../i2c_eeprom.c:217: split_addr(addr);
;	genAssign
	mov	dptr,#_page_write_addr_1_1
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCall
	mov	dpl,r2
	mov	dph,r3
	lcall	_split_addr
;	../i2c_eeprom.c:218: start();
;	genCall
	lcall	_start
;	../i2c_eeprom.c:220: if ( write(EEPROM_WRITE_ADDR | page_bits) == ACK )
;	genAssign
	mov	dptr,#_page_bits
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genOr
	orl	ar2,#0xA0
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
	jz	00124$
	ljmp	00110$
00124$:
;	../i2c_eeprom.c:222: if ( write(offset_addr) == ACK )
;	genAssign
	mov	dptr,#_offset_addr
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
	jz	00125$
	ljmp	00107$
00125$:
;	../i2c_eeprom.c:224: for ( bytes = 0; str[bytes]; bytes++ )
;	genAssign
	mov	dptr,#_page_write_PARM_2
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
00112$:
;	genPlus
;	Peephole 236.g	used r5 instead of ar5
	mov	a,r5
;	Peephole 236.a	used r2 instead of ar2
	add	a,r2
	mov	r6,a
;	Peephole 181	changed mov to clr
	clr	a
;	Peephole 236.b	used r3 instead of ar3
	addc	a,r3
	mov	r7,a
	mov	ar0,r4
;	genPointerGet
;	genGenPointerGet
	mov	dpl,r6
	mov	dph,r7
	mov	b,r0
	lcall	__gptrget
;	genIfx
	mov	r6,a
;	Peephole 105	removed redundant mov
;	genIfxJump
	jnz	00126$
	ljmp	00115$
00126$:
;	../i2c_eeprom.c:226: if (bytes <= (15- offset_addr))
;	genIpush
	push	ar2
	push	ar3
	push	ar4
;	genAssign
	mov	dptr,#_offset_addr
	movx	a,@dptr
	mov	r7,a
	inc	dptr
	movx	a,@dptr
	mov	r0,a
;	genMinus
	mov	a,#0x0F
	clr	c
;	Peephole 236.l	used r7 instead of ar7
	subb	a,r7
	mov	r7,a
;	Peephole 181	changed mov to clr
	clr	a
;	Peephole 236.l	used r0 instead of ar0
	subb	a,r0
	mov	r0,a
;	genCast
	mov	ar1,r5
	mov	r2,#0x00
;	genCmpGt
;	genCmp
	clr	c
	mov	a,r7
	subb	a,r1
	mov	a,r0
	subb	a,r2
;	genIpop
;	genIfx
;	genIfxJump
;	Peephole 108.b	removed ljmp by inverse jump logic
;	Peephole 129.d	optimized condition
	pop	ar4
	pop	ar3
	pop	ar2
	jc	00104$
;	Peephole 300	removed redundant label 00127$
;	../i2c_eeprom.c:228: if (write(str[bytes]) != ACK)
;	genCall
	mov	dpl,r6
	push	ar2
	push	ar3
	push	ar4
	push	ar5
	lcall	_write
	mov	r6,dpl
	pop	ar5
	pop	ar4
	pop	ar3
	pop	ar2
;	genCmpEq
;	gencjneshort
	cjne	r6,#0x00,00128$
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00114$
00128$:
;	../i2c_eeprom.c:230: printf("page write to EEPROM failed!!\n\r");
;	genIpush
	mov	a,#__str_4
	push	acc
	mov	a,#(__str_4 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
;	../i2c_eeprom.c:232: stop();
;	genCall
	lcall	_stop
;	../i2c_eeprom.c:233: delay_millisec(10);
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x000A
	lcall	_delay_millisec
;	../i2c_eeprom.c:234: return status;
;	genRet
	mov	dpl,#0x00
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 251.b	replaced sjmp to ret with ret
	ret
00104$:
;	../i2c_eeprom.c:242: stop();
;	genCall
	lcall	_stop
;	../i2c_eeprom.c:243: delay_millisec(10);
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x000A
	lcall	_delay_millisec
;	../i2c_eeprom.c:245: return status;
;	genRet
	mov	dpl,#0x01
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 251.b	replaced sjmp to ret with ret
	ret
00114$:
;	../i2c_eeprom.c:224: for ( bytes = 0; str[bytes]; bytes++ )
;	genPlus
;     genPlusIncr
	inc	r5
	ljmp	00112$
00115$:
;	../i2c_eeprom.c:248: status = SUCCESS;
;	genAssign
	mov	dptr,#_page_write_status_1_1
	mov	a,#0x01
	movx	@dptr,a
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00111$
00107$:
;	../i2c_eeprom.c:251: printf("write low byte failed!!\n\r");
;	genIpush
	mov	a,#__str_5
	push	acc
	mov	a,#(__str_5 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00111$
00110$:
;	../i2c_eeprom.c:254: printf("write device id failed!!\n\r");
;	genIpush
	mov	a,#__str_3
	push	acc
	mov	a,#(__str_3 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
00111$:
;	../i2c_eeprom.c:256: stop();
;	genCall
	lcall	_stop
;	../i2c_eeprom.c:257: delay_millisec(10);
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x000A
	lcall	_delay_millisec
;	../i2c_eeprom.c:258: return status;
;	genAssign
	mov	dptr,#_page_write_status_1_1
	movx	a,@dptr
;	genRet
;	Peephole 234.a	loading dpl directly from a(ccumulator), r2 not set
	mov	dpl,a
;	Peephole 300	removed redundant label 00116$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'byte_read'
;------------------------------------------------------------
;addr                      Allocated with name '_byte_read_addr_1_1'
;val                       Allocated with name '_byte_read_val_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:270: unsigned char byte_read( unsigned int addr )
;	-----------------------------------------
;	 function byte_read
;	-----------------------------------------
_byte_read:
;	genReceive
	mov	r2,dph
	mov	a,dpl
	mov	dptr,#_byte_read_addr_1_1
	movx	@dptr,a
	inc	dptr
	mov	a,r2
	movx	@dptr,a
;	../i2c_eeprom.c:272: unsigned char val = ERROR;
;	genAssign
	mov	dptr,#_byte_read_val_1_1
;	Peephole 181	changed mov to clr
;	../i2c_eeprom.c:273: offset_addr=0;
;	genAssign
;	Peephole 219.a	removed redundant clear
	clr	a
	movx	@dptr,a
	mov	dptr,#_offset_addr
	movx	@dptr,a
	inc	dptr
	movx	@dptr,a
;	../i2c_eeprom.c:274: page_bits=0;
;	genAssign
	mov	dptr,#_page_bits
	clr	a
	movx	@dptr,a
	inc	dptr
	movx	@dptr,a
;	../i2c_eeprom.c:275: split_addr(addr);
;	genAssign
	mov	dptr,#_byte_read_addr_1_1
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCall
	mov	dpl,r2
	mov	dph,r3
	lcall	_split_addr
;	../i2c_eeprom.c:277: start();
;	genCall
	lcall	_start
;	../i2c_eeprom.c:279: if ( write(EEPROM_WRITE_ADDR | page_bits) == ACK )
;	genAssign
	mov	dptr,#_page_bits
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genOr
	orl	ar2,#0xA0
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
	jz	00115$
	ljmp	00108$
00115$:
;	../i2c_eeprom.c:281: if ( write(offset_addr) == ACK )
;	genAssign
	mov	dptr,#_offset_addr
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
;	Peephole 108.b	removed ljmp by inverse jump logic
	jnz	00105$
;	Peephole 300	removed redundant label 00116$
;	../i2c_eeprom.c:284: start();
;	genCall
	lcall	_start
;	../i2c_eeprom.c:285: if ( write(EEPROM_READ_ADDR | page_bits) == ACK)
;	genAssign
	mov	dptr,#_page_bits
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genOr
	orl	ar2,#0xA1
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
;	Peephole 108.b	removed ljmp by inverse jump logic
	jnz	00102$
;	Peephole 300	removed redundant label 00117$
;	../i2c_eeprom.c:287: val = read(NACK);
;	genCall
	mov	dpl,#0x01
	lcall	_read
	mov	a,dpl
;	genAssign
	mov	dptr,#_byte_read_val_1_1
	movx	@dptr,a
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00102$:
;	../i2c_eeprom.c:291: printf("read_byte: Read id failed %x %x!!!\n\r",EEPROM_READ_ADDR, page_bits);
;	genIpush
	mov	dptr,#_page_bits
	movx	a,@dptr
	push	acc
	inc	dptr
	movx	a,@dptr
	push	acc
;	genIpush
	mov	a,#0xA1
	push	acc
;	Peephole 181	changed mov to clr
	clr	a
	push	acc
;	genIpush
	mov	a,#__str_6
	push	acc
	mov	a,#(__str_6 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	mov	a,sp
	add	a,#0xf9
	mov	sp,a
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00105$:
;	../i2c_eeprom.c:294: printf("Read_byte: low byte failed %x %x!!!\n\r",EEPROM_READ_ADDR, page_bits);
;	genIpush
	mov	dptr,#_page_bits
	movx	a,@dptr
	push	acc
	inc	dptr
	movx	a,@dptr
	push	acc
;	genIpush
	mov	a,#0xA1
	push	acc
;	Peephole 181	changed mov to clr
	clr	a
	push	acc
;	genIpush
	mov	a,#__str_7
	push	acc
	mov	a,#(__str_7 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	mov	a,sp
	add	a,#0xf9
	mov	sp,a
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00108$:
;	../i2c_eeprom.c:298: printf("read_byte: device_write id failed!!!\n\r");
;	genIpush
	mov	a,#__str_8
	push	acc
	mov	a,#(__str_8 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
00109$:
;	../i2c_eeprom.c:299: stop();
;	genCall
	lcall	_stop
;	../i2c_eeprom.c:300: return val;
;	genAssign
	mov	dptr,#_byte_read_val_1_1
	movx	a,@dptr
;	genRet
;	Peephole 234.a	loading dpl directly from a(ccumulator), r2 not set
	mov	dpl,a
;	Peephole 300	removed redundant label 00110$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'seq_read'
;------------------------------------------------------------
;buf                       Allocated with name '_seq_read_PARM_2'
;addr                      Allocated with name '_seq_read_PARM_3'
;size                      Allocated with name '_seq_read_size_1_1'
;num                       Allocated with name '_seq_read_num_1_1'
;byte                      Allocated with name '_seq_read_byte_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:313: unsigned int seq_read( unsigned int size, __idata unsigned char *buf, unsigned int addr)
;	-----------------------------------------
;	 function seq_read
;	-----------------------------------------
_seq_read:
;	genReceive
	mov	r2,dph
	mov	a,dpl
	mov	dptr,#_seq_read_size_1_1
	movx	@dptr,a
	inc	dptr
	mov	a,r2
	movx	@dptr,a
;	../i2c_eeprom.c:317: unsigned int num = 0;   /* count the number of bytes read */
;	genAssign
	mov	dptr,#_seq_read_num_1_1
	clr	a
	movx	@dptr,a
	inc	dptr
	movx	@dptr,a
;	../i2c_eeprom.c:320: split_addr(addr);
;	genAssign
	mov	dptr,#_seq_read_PARM_3
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCall
	mov	dpl,r2
	mov	dph,r3
	lcall	_split_addr
;	../i2c_eeprom.c:321: start();
;	genCall
	lcall	_start
;	../i2c_eeprom.c:322: if ( write(EEPROM_WRITE_ADDR | page_bits) == ACK )
;	genAssign
	mov	dptr,#_page_bits
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genOr
	orl	ar2,#0xA0
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
	jz	00121$
	ljmp	00108$
00121$:
;	../i2c_eeprom.c:324: if ( write(offset_addr) == ACK )
;	genAssign
	mov	dptr,#_offset_addr
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
	jz	00122$
	ljmp	00105$
00122$:
;	../i2c_eeprom.c:327: start();
;	genCall
	lcall	_start
;	../i2c_eeprom.c:328: if ( write(EEPROM_READ_ADDR | page_bits) == ACK )
;	genAssign
	mov	dptr,#_page_bits
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
;	genOr
	orl	ar2,#0xA1
;	genCast
;	genCall
	mov	dpl,r2
	lcall	_write
	mov	a,dpl
;	genIfx
;	genIfxJump
	jz	00123$
	ljmp	00102$
00123$:
;	../i2c_eeprom.c:336: buf[num] = read(NACK); /* for last byte to be read */
;	genAssign
	mov	dptr,#_seq_read_PARM_2
	movx	a,@dptr
	mov	r2,a
;	genAssign
	mov	r3,#0x00
	mov	r4,#0x00
;	genAssign
	mov	dptr,#_seq_read_size_1_1
	movx	a,@dptr
	mov	r5,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
00110$:
;	../i2c_eeprom.c:330: for (  ; size >= 1 ; size-- )
;	genCmpLt
;	genCmp
	clr	c
	mov	a,r5
	subb	a,#0x01
	mov	a,r6
	subb	a,#0x00
;	genIfxJump
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 160.a	removed sjmp by inverse jump logic
	jc	00120$
;	Peephole 300	removed redundant label 00124$
;	../i2c_eeprom.c:332: buf[num] = read(ACK);
;	genPlus
;	Peephole 236.g	used r3 instead of ar3
	mov	a,r3
;	Peephole 236.a	used r2 instead of ar2
	add	a,r2
	mov	r0,a
;	genCall
	mov	dpl,#0x00
	push	ar2
	push	ar3
	push	ar4
	push	ar5
	push	ar6
	push	ar0
	lcall	_read
	mov	a,dpl
	pop	ar0
	pop	ar6
	pop	ar5
	pop	ar4
	pop	ar3
	pop	ar2
;	genPointerSet
;	genNearPointerSet
	mov	@r0,a
;	../i2c_eeprom.c:334: num++;
;	genPlus
;     genPlusIncr
	inc	r3
	cjne	r3,#0x00,00125$
	inc	r4
00125$:
;	../i2c_eeprom.c:330: for (  ; size >= 1 ; size-- )
;	genMinus
;	genMinusDec
	dec	r5
	cjne	r5,#0xff,00126$
	dec	r6
00126$:
;	genAssign
	mov	dptr,#_seq_read_size_1_1
	mov	a,r5
	movx	@dptr,a
	inc	dptr
	mov	a,r6
	movx	@dptr,a
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00110$
00120$:
;	genAssign
	mov	dptr,#_seq_read_size_1_1
	mov	a,r5
	movx	@dptr,a
	inc	dptr
	mov	a,r6
	movx	@dptr,a
;	../i2c_eeprom.c:336: buf[num] = read(NACK); /* for last byte to be read */
;	genPlus
;	Peephole 236.g	used r3 instead of ar3
	mov	a,r3
;	Peephole 236.a	used r2 instead of ar2
	add	a,r2
	mov	r0,a
;	genCall
	mov	dpl,#0x01
	push	ar3
	push	ar4
	push	ar0
	lcall	_read
	mov	a,dpl
	pop	ar0
	pop	ar4
	pop	ar3
;	genPointerSet
;	genNearPointerSet
	mov	@r0,a
;	../i2c_eeprom.c:338: num++;
;	genPlus
	mov	dptr,#_seq_read_num_1_1
;     genPlusIncr
	mov	a,#0x01
;	Peephole 236.a	used r3 instead of ar3
	add	a,r3
	movx	@dptr,a
;	Peephole 181	changed mov to clr
	clr	a
;	Peephole 236.b	used r4 instead of ar4
	addc	a,r4
	inc	dptr
	movx	@dptr,a
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00102$:
;	../i2c_eeprom.c:342: printf("Device not selected!\n\r");
;	genIpush
	mov	a,#__str_9
	push	acc
	mov	a,#(__str_9 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00105$:
;	../i2c_eeprom.c:347: printf("write addr low byte failed!!!\n\r");
;	genIpush
	mov	a,#__str_10
	push	acc
	mov	a,#(__str_10 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00109$
00108$:
;	../i2c_eeprom.c:352: printf("write addr high byte failed!!!\n\r");
;	genIpush
	mov	a,#__str_11
	push	acc
	mov	a,#(__str_11 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
00109$:
;	../i2c_eeprom.c:354: stop();
;	genCall
	lcall	_stop
;	../i2c_eeprom.c:355: return (num);
;	genAssign
	mov	dptr,#_seq_read_num_1_1
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
;	genRet
;	Peephole 234.b	loading dph directly from a(ccumulator), r3 not set
	mov	dpl,r2
	mov	dph,a
;	Peephole 300	removed redundant label 00114$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'clear_eeprom'
;------------------------------------------------------------
;i                         Allocated with name '_clear_eeprom_i_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:366: void clear_eeprom()
;	-----------------------------------------
;	 function clear_eeprom
;	-----------------------------------------
_clear_eeprom:
;	../i2c_eeprom.c:369: printf("Erasing EEprom...(process takes few minutes)\n\r");
;	genIpush
	mov	a,#__str_12
	push	acc
	mov	a,#(__str_12 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
;	../i2c_eeprom.c:370: printf("Progress Bar: \n\r");
;	genIpush
	mov	a,#__str_13
	push	acc
	mov	a,#(__str_13 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
;	../i2c_eeprom.c:371: printf("0                                                               100\n\r");
;	genIpush
	mov	a,#__str_14
	push	acc
	mov	a,#(__str_14 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
;	genCall
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
;	../i2c_eeprom.c:373: clear_lcd();
;	genCall
	lcall	_clear_lcd
;	../i2c_eeprom.c:374: print_line_lcd(0,"----------------");
;	genCast
	mov	dptr,#_print_line_lcd_PARM_2
	mov	a,#__str_15
	movx	@dptr,a
	inc	dptr
	mov	a,#(__str_15 >> 8)
	movx	@dptr,a
	inc	dptr
	mov	a,#0x80
	movx	@dptr,a
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0000
	lcall	_print_line_lcd
;	../i2c_eeprom.c:375: print_line_lcd(1,"----------------");
;	genCast
	mov	dptr,#_print_line_lcd_PARM_2
	mov	a,#__str_15
	movx	@dptr,a
	inc	dptr
	mov	a,#(__str_15 >> 8)
	movx	@dptr,a
	inc	dptr
	mov	a,#0x80
	movx	@dptr,a
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0001
	lcall	_print_line_lcd
;	../i2c_eeprom.c:376: print_line_lcd(2,"----------------");
;	genCast
	mov	dptr,#_print_line_lcd_PARM_2
	mov	a,#__str_15
	movx	@dptr,a
	inc	dptr
	mov	a,#(__str_15 >> 8)
	movx	@dptr,a
	inc	dptr
	mov	a,#0x80
	movx	@dptr,a
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0002
	lcall	_print_line_lcd
;	../i2c_eeprom.c:377: print_line_lcd(3,"----------------");
;	genCast
	mov	dptr,#_print_line_lcd_PARM_2
	mov	a,#__str_15
	movx	@dptr,a
	inc	dptr
	mov	a,#(__str_15 >> 8)
	movx	@dptr,a
	inc	dptr
	mov	a,#0x80
	movx	@dptr,a
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0003
	lcall	_print_line_lcd
;	../i2c_eeprom.c:379: go_to_home();
;	genCall
	lcall	_go_to_home
;	../i2c_eeprom.c:381: for (i = 0; i < 2048 ; i++)
;	genAssign
	mov	r2,#0x00
	mov	r3,#0x00
00103$:
;	genCmpLt
;	genCmp
	clr	c
	mov	a,r3
	xrl	a,#0x80
	subb	a,#0x88
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00106$
;	Peephole 300	removed redundant label 00113$
;	../i2c_eeprom.c:383: byte_write(i,'\0');
;	genAssign
	mov	dptr,#_byte_write_PARM_2
;	Peephole 181	changed mov to clr
	clr	a
	movx	@dptr,a
;	genCall
	mov	dpl,r2
	mov	dph,r3
	push	ar2
	push	ar3
	lcall	_byte_write
	pop	ar3
	pop	ar2
;	../i2c_eeprom.c:384: delay_millisec(2);
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0002
	push	ar2
	push	ar3
	lcall	_delay_millisec
	pop	ar3
	pop	ar2
;	../i2c_eeprom.c:385: if(i%32 == 0)
;	genAssign
	mov	dptr,#__modsint_PARM_2
	mov	a,#0x20
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
;	genCall
	mov	dpl,r2
	mov	dph,r3
	push	ar2
	push	ar3
	lcall	__modsint
	mov	a,dpl
	mov	b,dph
	pop	ar3
	pop	ar2
;	genIfx
	orl	a,b
;	genIfxJump
;	Peephole 108.b	removed ljmp by inverse jump logic
	jnz	00105$
;	Peephole 300	removed redundant label 00114$
;	../i2c_eeprom.c:387: printf_tiny("#");
;	genIpush
	push	ar2
	push	ar3
	mov	a,#__str_16
	push	acc
	mov	a,#(__str_16 >> 8)
	push	acc
;	genCall
	lcall	_printf_tiny
	dec	sp
	dec	sp
	pop	ar3
	pop	ar2
;	../i2c_eeprom.c:388: lcdputch('#');
;	genCall
	mov	dpl,#0x23
	push	ar2
	push	ar3
	lcall	_lcdputch
	pop	ar3
	pop	ar2
00105$:
;	../i2c_eeprom.c:381: for (i = 0; i < 2048 ; i++)
;	genPlus
;     genPlusIncr
	inc	r2
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 243	avoided branch to sjmp
	cjne	r2,#0x00,00103$
	inc	r3
;	Peephole 300	removed redundant label 00115$
	sjmp	00103$
00106$:
;	../i2c_eeprom.c:391: clear_lcd();
;	genCall
	lcall	_clear_lcd
;	../i2c_eeprom.c:392: print_line_lcd(0,"EEPROM Erased ");
;	genCast
	mov	dptr,#_print_line_lcd_PARM_2
	mov	a,#__str_17
	movx	@dptr,a
	inc	dptr
	mov	a,#(__str_17 >> 8)
	movx	@dptr,a
	inc	dptr
	mov	a,#0x80
	movx	@dptr,a
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0000
	lcall	_print_line_lcd
;	../i2c_eeprom.c:393: print_line_lcd(1,"Successfully");
;	genCast
	mov	dptr,#_print_line_lcd_PARM_2
	mov	a,#__str_18
	movx	@dptr,a
	inc	dptr
	mov	a,#(__str_18 >> 8)
	movx	@dptr,a
	inc	dptr
	mov	a,#0x80
	movx	@dptr,a
;	genCall
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0001
	lcall	_print_line_lcd
;	../i2c_eeprom.c:395: printf_tiny("\n\rEEPROM Erase Completed Successfully\n\r");
;	genIpush
	mov	a,#__str_19
	push	acc
	mov	a,#(__str_19 >> 8)
	push	acc
;	genCall
	lcall	_printf_tiny
	dec	sp
	dec	sp
;	Peephole 300	removed redundant label 00107$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'eeprom_reset'
;------------------------------------------------------------
;icnt                      Allocated with name '_eeprom_reset_icnt_1_1'
;------------------------------------------------------------
;	../i2c_eeprom.c:406: void eeprom_reset()
;	-----------------------------------------
;	 function eeprom_reset
;	-----------------------------------------
_eeprom_reset:
;	../i2c_eeprom.c:409: start();
;	genCall
	lcall	_start
;	../i2c_eeprom.c:411: for ( icnt=0 ; icnt < 9 ; icnt++  )
;	genAssign
	mov	r2,#0x00
00101$:
;	genCmpLt
;	genCmp
	cjne	r2,#0x09,00110$
00110$:
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00104$
;	Peephole 300	removed redundant label 00111$
;	../i2c_eeprom.c:413: SDA = 1 ;
;	genAssign
	setb	_P1_0
;	../i2c_eeprom.c:414: clock();
;	genCall
	push	ar2
	lcall	_clock
	pop	ar2
;	../i2c_eeprom.c:411: for ( icnt=0 ; icnt < 9 ; icnt++  )
;	genPlus
;     genPlusIncr
	inc	r2
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00101$
00104$:
;	../i2c_eeprom.c:416: start();
;	genCall
	lcall	_start
;	../i2c_eeprom.c:417: stop();
;	genCall
;	Peephole 253.b	replaced lcall/ret with ljmp
	ljmp	_stop
;
	.area CSEG    (CODE)
	.area CONST   (CODE)
__str_0:
	.ascii "invalid Address Range: %d"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_1:
	.ascii "write val failed!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_2:
	.ascii "write low byte failed %x || %x!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_3:
	.ascii "write device id failed!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_4:
	.ascii "page write to EEPROM failed!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_5:
	.ascii "write low byte failed!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_6:
	.ascii "read_byte: Read id failed %x %x!!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_7:
	.ascii "Read_byte: low byte failed %x %x!!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_8:
	.ascii "read_byte: device_write id failed!!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_9:
	.ascii "Device not selected!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_10:
	.ascii "write addr low byte failed!!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_11:
	.ascii "write addr high byte failed!!!"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_12:
	.ascii "Erasing EEprom...(process takes few minutes)"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_13:
	.ascii "Progress Bar: "
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_14:
	.ascii "0                                                           "
	.ascii "    100"
	.db 0x0A
	.db 0x0D
	.db 0x00
__str_15:
	.ascii "----------------"
	.db 0x00
__str_16:
	.ascii "#"
	.db 0x00
__str_17:
	.ascii "EEPROM Erased "
	.db 0x00
__str_18:
	.ascii "Successfully"
	.db 0x00
__str_19:
	.db 0x0A
	.db 0x0D
	.ascii "EEPROM Erase Completed Successfully"
	.db 0x0A
	.db 0x0D
	.db 0x00
	.area XINIT   (CODE)
__xinit__lcdPtr:
; generic printIvalPtr
	.byte #0x00,#0xF0,#0x00
__xinit__start_busy_chk:
	.db #0x00
__xinit__cursor_position:
	.db #0x80
