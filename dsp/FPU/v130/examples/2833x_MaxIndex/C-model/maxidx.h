//#############################################################################
//  This software is licensed for use with Texas Instruments C28x
//  family DSCs.  This license was provided to you prior to installing
//  the software.  You may review this license by consulting a copy of
//  the agreement in the doc directory of this library.
// ----------------------------------------------------------------------------
//          Copyright (C) 2010 Texas Instruments, Incorporated.
//                          All Rights Reserved.
// ============================================================================
//
// FILE:   maxidx.h
//
//#############################################################################
// $TI Release: C28x Floating Point Unit Library V1.30 $
// $Release Date: January 04, 2012 $
//#############################################################################

#ifndef MAXIDX_H
#define MAXIDX_H


#ifdef __cplusplus
extern "C" {
#endif

//-----------------------------------------------------------------------------
// Float32 Definitions and Prototypes
//-----------------------------------------------------------------------------
typedef struct {
	float32 dat[2];
} complex_float;

Uint16 maxidx(float32 *, Uint16 );

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif   // - end of MAXIDX_H

//=============================================================================
// End of file.
//=============================================================================
