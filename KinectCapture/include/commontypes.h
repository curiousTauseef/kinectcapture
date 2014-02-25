/* ---------------------------------------------------------------------------
** This software is furnished "as is", without technical support,
** and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** commontypes.c
** Contains header declarations and definitions for common types.
**
** Author: Sk. Mohammadul Haque
** Copyright (c) 2014 Sk. Mohammadul Haque
** For more details and updates, visit http://mohammadulhaque.alotspace.com
** -------------------------------------------------------------------------*/

#ifndef __COMMONTYPES__
#define __COMMONTYPES__

#ifdef _MSC_VER

#if _MSC_VER > 1000
#pragma once
#endif

#if _MSC_VER >= 1600
#include <stdint.h>
#else

#if (_MSC_VER < 1300)
   typedef signed char       int8_t;
   typedef signed short      int16_t;
   typedef signed int        int32_t;
   typedef unsigned char     uint8_t;
   typedef unsigned short    uint16_t;
   typedef unsigned int      uint32_t;
#else
   typedef signed __int8     int8_t;
   typedef signed __int16    int16_t;
   typedef signed __int32    int32_t;
   typedef unsigned __int8   uint8_t;
   typedef unsigned __int16  uint16_t;
   typedef unsigned __int32  uint32_t;
#endif
#endif
#else
#include <stdint.h>
#endif

#endif
