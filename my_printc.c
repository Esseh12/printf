#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - my printf function to be tested,..
 * @format: str format to be printed...
 *
 * Return: number of chars that is printed
 */
int _printf(const char *format, ...)
{
va_list args;
int len = 0;

if (format == NULL)
return (-1);

va_start(args, format);

len = prnt_frmat(format, args);
va_end(args);
return (len);
}
