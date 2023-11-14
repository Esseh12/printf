#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
  * struct specifiers - Struct... specifiers
  * @specifier: The conversion.....specifiers
  * @f: The function pointer
  */

typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spc_dt;

int wrte(char c);
int _printf(const char *format, ...);
int prnt_character(va_list args);
int prnt_str(va_list args);
int prnt_frmat(const char *format, va_list args);
int prnt_specifers(char format, va_list args);
int prnt_invalid_specss(char prv_formt, char format, int count);
int prnt_an_int(va_list args);
void egerrecurse_int_bin(int a);
int prnt_int2_bin(va_list args);
void recurse_int_bin(int a);
int validate_car(char t_ype);

#endif/* ESE & REAGAN */
