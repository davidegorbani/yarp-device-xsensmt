/*	WARNING: COPYRIGHT (C) 2017 XSENS TECHNOLOGIES OR SUBSIDIARIES WORLDWIDE. ALL RIGHTS RESERVED.
	THIS FILE AND THE SOURCE CODE IT CONTAINS (AND/OR THE BINARY CODE FILES FOUND IN THE SAME
	FOLDER THAT CONTAINS THIS FILE) AND ALL RELATED SOFTWARE (COLLECTIVELY, "CODE") ARE SUBJECT
	TO A RESTRICTED LICENSE AGREEMENT ("AGREEMENT") BETWEEN XSENS AS LICENSOR AND THE AUTHORIZED
	LICENSEE UNDER THE AGREEMENT. THE CODE MUST BE USED SOLELY WITH XSENS PRODUCTS INCORPORATED
	INTO LICENSEE PRODUCTS IN ACCORDANCE WITH THE AGREEMENT. ANY USE, MODIFICATION, COPYING OR
	DISTRIBUTION OF THE CODE IS STRICTLY PROHIBITED UNLESS EXPRESSLY AUTHORIZED BY THE AGREEMENT.
	IF YOU ARE NOT AN AUTHORIZED USER OF THE CODE IN ACCORDANCE WITH THE AGREEMENT, YOU MUST STOP
	USING OR VIEWING THE CODE NOW, REMOVE ANY COPIES OF THE CODE FROM YOUR COMPUTER AND NOTIFY
	XSENS IMMEDIATELY BY EMAIL TO INFO@XSENS.COM. ANY COPIES OR DERIVATIVES OF THE CODE (IN WHOLE
	OR IN PART) IN SOURCE CODE FORM THAT ARE PERMITTED BY THE AGREEMENT MUST RETAIN THE ABOVE
	COPYRIGHT NOTICE AND THIS PARAGRAPH IN ITS ENTIRETY, AS REQUIRED BY THE AGREEMENT.
*/

#ifndef XSDEBUGCOUNTERS_H
#define XSDEBUGCOUNTERS_H

#include "xsatomicint.h"

// These counters are only available in the non-public version of the XsTypes library
// For the public version, they will all always have a 0 value.

#ifdef __cplusplus
extern "C" {
#endif

extern XsAtomicInt XSTYPES_DLL_API XsVector_allocCount;
extern XsAtomicInt XSTYPES_DLL_API XsVector_freeCount;

extern XsAtomicInt XSTYPES_DLL_API XsMatrix_allocCount;
extern XsAtomicInt XSTYPES_DLL_API XsMatrix_freeCount;

extern XsAtomicInt XSTYPES_DLL_API XsArray_allocCount;
extern XsAtomicInt XSTYPES_DLL_API XsArray_freeCount;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
