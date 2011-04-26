//----------------------------------------------------------------------------
//  This file contains functions that allow the MSP430 device to access the
//  SPI interface.  There are multiple instances of each function; 
//  the one to be compiled is selected by the system variable
//  SPI_SER_INTF, defined in "hal_hardware_board.h".
//----------------------------------------------------------------------------


//----------------------------------------------------------------------------
//  void halSPISetup(void)
//
//  DESCRIPTION:
//  Configures the assigned interface to function as a SPI port and
//  initializes it.
//----------------------------------------------------------------------------
//  void halSPIWriteReg(char addr, char value)
//
//  DESCRIPTION:
//  Writes "value" to a single configuration register at address "addr".
//----------------------------------------------------------------------------
//  void halSPIWriteBurstReg(char addr, char *buffer, char count)
//
//  DESCRIPTION:
//  Writes values to multiple configuration registers, the first register being
//  at address "addr".  First data byte is at "buffer", and both addr and
//  buffer are incremented sequentially (within the CCxxxx and MSP430,
//  respectively) until "count" writes have been performed.
//----------------------------------------------------------------------------
//  char halSPIReadReg(char addr)
//
//  DESCRIPTION:
//  Reads a single configuration register at address "addr" and returns the
//  value read.
//----------------------------------------------------------------------------
//  void halSPIReadBurstReg(char addr, char *buffer, char count)
//
//  DESCRIPTION:
//  Reads multiple configuration registers, the first register being at address
//  "addr".  Values read are deposited sequentially starting at address
//  "buffer", until "count" registers have been read.
//----------------------------------------------------------------------------
//  char halSPIReadStatus(char addr)
//
//  DESCRIPTION:
//  Special read function for reading status registers.  Reads status register
//  at register "addr" and returns the value read.
//----------------------------------------------------------------------------
//  void halSPIStrobe(char strobe)
//
//  DESCRIPTION:
//  Special write function for writing to command strobe registers.  Writes
//  to the strobe at address "addr".
//----------------------------------------------------------------------------

/* ***********************************************************
* THIS PROGRAM IS PROVIDED "AS IS". TI MAKES NO WARRANTIES OR
* REPRESENTATIONS, EITHER EXPRESS, IMPLIED OR STATUTORY, 
* INCLUDING ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS 
* FOR A PARTICULAR PURPOSE, LACK OF VIRUSES, ACCURACY OR 
* COMPLETENESS OF RESPONSES, RESULTS AND LACK OF NEGLIGENCE. 
* TI DISCLAIMS ANY WARRANTY OF TITLE, QUIET ENJOYMENT, QUIET 
* POSSESSION, AND NON-INFRINGEMENT OF ANY THIRD PARTY 
* INTELLECTUAL PROPERTY RIGHTS WITH REGARD TO THE PROGRAM OR 
* YOUR USE OF THE PROGRAM.
*
* IN NO EVENT SHALL TI BE LIABLE FOR ANY SPECIAL, INCIDENTAL, 
* CONSEQUENTIAL OR INDIRECT DAMAGES, HOWEVER CAUSED, ON ANY 
* THEORY OF LIABILITY AND WHETHER OR NOT TI HAS BEEN ADVISED 
* OF THE POSSIBILITY OF SUCH DAMAGES, ARISING IN ANY WAY OUT 
* OF THIS AGREEMENT, THE PROGRAM, OR YOUR USE OF THE PROGRAM. 
* EXCLUDED DAMAGES INCLUDE, BUT ARE NOT LIMITED TO, COST OF 
* REMOVAL OR REINSTALLATION, COMPUTER TIME, LABOR COSTS, LOSS 
* OF GOODWILL, LOSS OF PROFITS, LOSS OF SAVINGS, OR LOSS OF 
* USE OR INTERRUPTION OF BUSINESS. IN NO EVENT WILL TI'S 
* AGGREGATE LIABILITY UNDER THIS AGREEMENT OR ARISING OUT OF 
* YOUR USE OF THE PROGRAM EXCEED FIVE HUNDRED DOLLARS 
* (U.S.$500).
*
* Unless otherwise stated, the Program written and copyrighted 
* by Texas Instruments is distributed as "freeware".  You may, 
* only under TI's copyright in the Program, use and modify the 
* Program without any charge or restriction.  You may 
* distribute to third parties, provided that you transfer a 
* copy of this license to the third party and the third party 
* agrees to these terms by its first use of the Program. You 
* must reproduce the copyright notice and any other legend of 
* ownership on each copy or partial copy, of the Program.
*
* You acknowledge and agree that the Program contains 
* copyrighted material, trade secrets and other TI proprietary 
* information and is protected by copyright laws, 
* international copyright treaties, and trade secret laws, as 
* well as other intellectual property laws.  To protect TI's 
* rights in the Program, you agree not to decompile, reverse 
* engineer, disassemble or otherwise translate any object code 
* versions of the Program to a human-readable form.  You agree 
* that in no event will you alter, remove or destroy any 
* copyright notice included in the Program.  TI reserves all 
* rights not specifically granted under this license. Except 
* as specifically provided herein, nothing in this agreement 
* shall be construed as conferring by implication, estoppel, 
* or otherwise, upon you, any license or other right under any 
* TI patents, copyrights or trade secrets.
*
* You may not use the Program in non-TI devices.
* ********************************************************* */


#ifndef _SPILIB_C
#define _SPILIB_C
//
//---------------------------------------------------------------
#include "hal_SPI.h"
#include "hal_board.h"
#include "hal_cc8051.h"
#include "hal_mcu.h"

//#define withDMA

#ifndef DUMMY_CHAR
#define DUMMY_CHAR 0xFF
#endif

// SPI port functions
#if SPI_SER_INTF == SER_INTF_USART0

void halSPISetup(void)
{
    U0CSR |= 0X40;				
    //SPI_SETUP(0,2400,SPI_MASTER);
    U0UCR = 0x80;
    U0CSR = 0x00; 
    P0SEL |= (SPI_SIMO + SPI_SOMI + SPI_UCLK);
    
    PERCFG |= 0x00;
    
    //IO_DIR_PORT_PIN(0,3,IO_OUT); // txd / MOSI
    //IO_DIR_PORT_PIN(0,2,IO_IN); // Rxd / MISO
    //IO_DIR_PORT_PIN(0,4,IO_OUT); // CTS / SS_N
    //IO_DIR_PORT_PIN(0,5,IO_OUT); // txd / SCK
    
    U0GCR = BAUD_E(115200, CLKSPD);
    U0BAUD = BAUD_M(115200);
    
    //U0GCR |= (SPI_MASTER & 0xE0)+ 0x20;
     //Configure SPI Polarity, Clock Phase, and Bit Order
    U0CSR =   U0CSR & ~0x80;    // Set U0CSR bit 7 to 0 for SPI Mode
    U0CSR =   U0CSR & ~0x20;    // Set U0CSR bit 5 to 0 for Master
    U0GCR =  (U0GCR | 0x80);   // Set U0GCR bit 7   to 1 for CPOL = 1
    U0GCR =  (U0GCR | 0x20);    // Set U0GCR bit 5 to 1 for MSB first
    U0GCR =  (U0GCR & ~0x40);    // Set U0GCR bit 6 to 0 for CPHA = 0
    
    U0CSR |= 0x40;	
    
    URX0IF = 0;

    halSPI_SEND(DUMMY_CHAR);
}

#elif SPI_SER_INTF == SER_INTF_BITBANG

void spi_bitbang_out(unsigned char);
unsigned char spi_bitbang_in();
unsigned char spi_bitbang_in_data;

void halSPISetup(void)
{
}

// Output eight-bit value using selected bit-bang pins
void spi_bitbang_out(unsigned char value)
{
  char x;

  for(x=8;x>0;x--)
  {

    if(value & 0x80)                        // If bit is high...
      MMC_PxOUT |= MMC_SIMO;// Set SIMO high...
    else
      MMC_PxOUT &= ~MMC_SIMO;//Set SIMO low...
    value = value << 1;                     // Rotate bits

    MMC_PxOUT &= ~MMC_UCLK; // Set clock low
    MMC_PxOUT |= MMC_UCLK;  // Set clock high
  }
}

// Input eight-bit value using selected bit-bang pins
unsigned char spi_bitbang_in()
{
  char x=0;
  int y;

  for(y=8;y>0;y--)
  {
    MMC_PxOUT &= ~MMC_UCLK; // Set clock low
    MMC_PxOUT |= MMC_UCLK;  // Set clock high

    x = x << 1;                             // Rotate bits
    if(MMC_PxIN & MMC_SOMI)                 // If bit is high...
      x |= 0x01;                            // input bit high
  }
  spi_bitbang_in_data = x;
  return(x);
}
// Input eight-bit value using selected bit-bang pins
unsigned char spi_bitbang_inout(unsigned char value)
{
  char x=0;
  int y;

  for(y=8;y>0;y--)
  {
    if(value & 0x80)                        // If bit is high...
      MMC_PxOUT |= MMC_SIMO;// Set SIMO high...
    else
      MMC_PxOUT &= ~MMC_SIMO;//Set SIMO low...
    value = value << 1;                     // Rotate bits

    MMC_PxOUT &= ~MMC_UCLK; // Set clock low
    MMC_PxOUT |= MMC_UCLK;  // Set clock high

    x = x << 1;                             // Rotate bits
    if(MMC_PxIN & MMC_SOMI)                 // If bit is high...
      x |= 0x01;                            // input bit high
  }
  spi_bitbang_in_data = x;
  return(x);
}
#endif


//Send one byte via SPI
unsigned char spiSendByte(const unsigned char data)
{
  while (halSPITXREADY);    // wait while not ready for TX
  halSPI_SEND(data);            // write
  while(!(U0CSR & U0CSR_TX_BYTE));            // wait
  U0CSR &= ~U0CSR_TX_BYTE;                       // clear flag
  while (halSPIRXREADY ==0);    // wait for RX buffer (full)
  return (halSPIRXBUF);
}


//Read a frame of bytes via SPI
unsigned char spiReadFrame(unsigned char* pBuffer, unsigned int size)
{
  unsigned long i = 0;
  // clock the actual data transfer and receive the bytes; spi_read automatically finds the Data Block
  for (i = 0; i < size; i++){
    while (halSPITXREADY);   // wait while not ready for TX
    halSPI_SEND(DUMMY_CHAR);     // dummy write
    while(!(U0CSR & U0CSR_TX_BYTE));            // wait
    U0CSR &= ~U0CSR_TX_BYTE;                       // clear fl
    pBuffer[i] = halSPIRXBUF;
  }
  return(0);
}


//Send a frame of bytes via SPI
unsigned char spiSendFrame(unsigned char* pBuffer, unsigned int size)
{
  unsigned long i = 0;
  // clock the actual data transfer and receive the bytes; spi_read automatically finds the Data Block
  for (i = 0; i < size; i++){
    while (halSPITXREADY);   // wait while not ready for TX
    halSPI_SEND(pBuffer[i]);     // write
    while(!(U0CSR & U0CSR_TX_BYTE));            // wait
    U0CSR &= ~U0CSR_TX_BYTE;                       // clear fl
    pBuffer[i] = halSPIRXBUF;
  }
  return(0);
}

//---------------------------------------------------------------------
#endif /* _SPILIB_C */
