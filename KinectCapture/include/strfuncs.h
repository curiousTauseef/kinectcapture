/* ---------------------------------------------------------------------------
** This software is furnished "as is", without technical support,
** and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** strfuncs.h
** Contains header declarations and definitions for strfuncs.c.
**
** Author: Sk. Mohammadul Haque
** Copyright (c) 2014 Sk. Mohammadul Haque
** For more details and updates, visit http://mohammadulhaque.alotspace.com
** -------------------------------------------------------------------------*/

#ifndef __STRFUNCS__
#define __STRFUNCS__

#if (!(defined _WINDOWS || defined WINDOWS ) && !(defined _BSD_SOURCE || defined _POSIX_C_SOURCE))
#define _BSD_SOURCE
#define _POSIX_C_SOURCE	199309L
#endif

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "commontypes.h"


#define _CRT_SECURE_NO_DEPRECATE
#if defined (GCC) || defined (__GNUC__)
typedef FILE *FILEPOINTER;
#else
typedef struct _iobuf *FILEPOINTER;
#endif

char *mat_go_next_word(char *fp);
int mat_count_words_in_line(const char *fp, int *count);
#endif
