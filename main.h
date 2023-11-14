#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
  * struct specifiers - Struct specifiers
  * @specifier: The conversion specifier
  * @f: The function pointer
  */
typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spc_dt;
/*THE PROTOTYPES USED IN THE PROJECT*/
/*PRINTING OUPUTS*/
int _print_frmt(const char *format, va_list args);
int _print_int(va_list args);
int _print_char(va_list args);
int _print_invalid_spesf(char prev_formt, char format, int ese);
int _print_a_str(va_list args);
int _print_int_bin(va_list args);
void _recursion_int_bin(int a);
int _print_specs1(char format, va_list args);

/*VALIDATING CHARACTERS*/
int _ValidateChar(char _type);
int _write(char c);
/*RECURSING INTEGERS*/
void _recurse_int(int a);
int _printf(const char *format, ...);

#endif /* ESE AND OTIM */
