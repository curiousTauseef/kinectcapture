/* ---------------------------------------------------------------------------
** This software is furnished "as is", without technical support,
** and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** program.h
** Contains header declarations and definitions for progam.c.
**
** Author: Sk. Mohammadul Haque
** Copyright (c) 2014 Sk. Mohammadul Haque
** For more details and updates, visit http://mohammadulhaque.alotspace.com
** -------------------------------------------------------------------------*/

#ifndef __PROGRAM__
#define __PROGRAM__

#include "../include/strfuncs.h"
#define NUM_CODEWORDS 9

struct __pcordword
{
    int codenum;
    int codeval;
    char hasval;
    char iscomment;
};

typedef struct __pcordword pcodeword;
struct __pcode
{
    int nlines;
    int allocated;
    pcodeword *cwrds;
};

typedef struct __pcode pcode;
extern pcode codes;
int mat_read_word(FILEPOINTER fp, char *c_word);
int getcodenum(const char *str);
pcodeword parse_line_program_file(FILEPOINTER fp);
void load_program_code(const char *fname);
void unload_program_code();
#endif
