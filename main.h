#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 *enum -....

typedef enum
{
    CONV_NONE,
    CONV_DECIMAL,
    CONV_OCTAL,
    CONV_UNSIGNED,
    CONV_HEXADECIMAL,
    CONV_FLOAT,
    CONV_EXPONENTIAL,
    CONV_GENERIC,
    CONV_CHAR,
    CONV_STRING,
    CONV_POINTER
} ConversionType;

typedef enum
{
    LENGTH_NONE,
    LENGTH_LONG,
    LENGTH_LONG_LONG,
    LENGTH_LONG_DOUBLE,
    LENGTH_SIZE_T,
    LENGTH_PTRDIFF_T
} LengthModifier;
/**
 * struct - gudddahscg

typedef struct
{
  char flags[5];
    int width;
    int precision;
    ConversionType conversionType;
    LengthModifier lengthModifier;
} Conversion;

int is_conversion_specifier(char c) {
    if (c >= 'A' && c <= 'Z') return 1;
    if (c >= 'a' && c <= 'z') return 1;
    return 0;
}

void parse_flags(Conversion *conversion, const char *format) {
    char *flags = conversion->flags;
    memset(flags, 0, sizeof(conversion->flags));

    while (*format && !is_conversion_specifier(*format)) {
        if (*format == '-') strncat(flags, "-", 1);
        else if (*format == '+') strncat(flags, "+", 1);
        else if (*format == ' ') strncat(flags, " ", 1);
        else if (*format == '#') strncat(flags, "#", 1);
        else if (*format == '0') strncat(flags, "0", 1);
        format++;
    }
*/
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
void _putchar(char c);
/*PRINTING OUPUTS*/
int _print_format(const char *format, va_list args);
int _print_a_integer(va_list args);
int _print_a_char(va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _print_a_string(va_list args);
int _print_int_binary(va_list args);
void _recursion_int_binary(int a);
int _print_spec(char format, va_list args);

/*VALIDATING CHARACTERS*/
int _validate_char(char _type);
int _write(char c);
/*RECURSING INTEGERS*/
void _recursion_integer(int a);
int _printf(const char *format, ...);

#endif /* ESE AND OTIM */
