
#ifndef TIMER_MANAGER_H
#define TIMER_MANAGER_H

/*=============================================================================
FILE:  TimerManager.h

SERVICES:  The interrupt Service Engine provides the ability for the Manager 
   Modules to request than an interrupt callback routine is invoked when
   either a timer expires or upon an external interrupt.

DESCRIPTION:  

PUBLIC CLASSES AND FUNCTIONS:


      (c) COPYRIGHT 2011 Qualcomm Incorporated.  All rights Reserved.
                Qualcomm Proprietary / GTDR

   The party receiving this software directly from QUALCOMM (the "Recipient")
   may use this software and make copies thereof as reasonably necessary solely
   for the purposes set forth in the agreement between the Recipient and
   QUALCOMM (the "Agreement").  The software may be used in source code form
   solely by the Recipient's employees.  The Recipient shall have no right to
   sublicense, assign, transfer or otherwise provide the source code to any
   third party. Subject to the terms and conditions set forth in the Agreement,
   this software, in binary form only, may be distributed by the Recipient to
   its customers. QUALCOMM retains all ownership rights in and to the software.

   This notice shall supercede any other notices contained within the software.

=============================================================================*/

//=============================================================================
//     INCLUDES AND PUBLIC DATA DECLARATIONS
//=============================================================================


//-----------------------------------------------------------------------------
//     Defines
//-----------------------------------------------------------------------------
#define MAX_TIMERS  4
#define TimerId_INVALID 0xFFFF


//-----------------------------------------------------------------------------
//     Defines
//-----------------------------------------------------------------------------



/*-------------------------------------------------------------------
   POINTERS
-------------------------------------------------------------------*/
typedef void (*VoidFuncPtrType)();


//-----------------------------------------------------------------------------
//     Include Files
//-----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
//     Type Declarations
//-----------------------------------------------------------------------------
typedef unsigned int TimerId;
typedef void (*TimerExpiredCallback)(TimerId);
typedef void (*BeaconFrame_TimerExpiredCallback)(void);

//-----------------------------------------------------------------------------
//     Global Constant Declarations
//-----------------------------------------------------------------------------


//=============================================================================
//     FUNCTION DECLARATIONS
//=============================================================================



/*============================================================================= 
  FUNCTION:     TimerInterface_Initialize
 
  DESCRIPTION:
   Fill out this section.
 
RETURN VALUE: 
   Fill out this section.
 
SIDE EFFECTS: 
   Fill out this section.
=============================================================================*/
bool TimerInterface_Initialize();




/*============================================================================= 
  FUNCTION:     SetTimerReq
 
  DESCRIPTION:
   Fill out this section.
 
RETURN VALUE: 
   Fill out this section.
 
SIDE EFFECTS: 
   Fill out this section.
=============================================================================*/
TimerId SetTimerReq
(
   TimerExpiredCallback callbackPtr,
   unsigned int Period_Sec
);


/*============================================================================= 
  FUNCTION:     CancelTimerReq
 
  DESCRIPTION:
   Fill out this section.
 
RETURN VALUE: 
   Fill out this section.
 
SIDE EFFECTS: 
   Fill out this section.
=============================================================================*/
bool CancelTimerReq
(
   TimerId timerId
);


/*============================================================================= 
  FUNCTION:     Reschedule_TimerReq
 
  DESCRIPTION:
   Fill out this section.
 
RETURN VALUE: 
   Fill out this section.
 
SIDE EFFECTS: 
   Fill out this section.
=============================================================================*/
bool Reschedule_TimerReq
(
  TimerId timerId, 
  unsigned int  Old_Period_Sec,
  unsigned int  New_Period_Sec
);





/*============================================================================= 
  FUNCTION:     One_Sec_ISR
 
  DESCRIPTION:
   Fill out this section.
 
RETURN VALUE: 
   Fill out this section.
 
SIDE EFFECTS: 
   Fill out this section.
=============================================================================*/
void One_Sec_ISR();

/*============================================================================= 
  FUNCTION:     CancelTimerReq
 
  DESCRIPTION:
   Fill out this section.
 
RETURN VALUE: 
   Fill out this section.
 
SIDE EFFECTS: 
   Fill out this section.
=============================================================================*/
unsigned int Capture_TimerReq
(
   TimerId timerId
);


#endif /* end ifndef SRRINTERRUPTSERVICEENGINE_H */