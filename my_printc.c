#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _print_int - Print ints....
  * @args: list of variadic args...
  *
  * Return: The len of the strs...
  */
int _print_int(va_list args)
{
	int ese = 1, otim = 0;
	unsigned int k = 0;

	k = va_arg(args, int);
	otim = k;
	if (otim < 0)
	{
		_write('-');
		otim = otim * -1;
		k = otim;
		ese += 1;
	}
	while (k > 9)
	{
		k = k / 10;
		ese++;
	}

	_recurse_int(otim);
	return (ese);
}
/**
 * _printf - printf function...
 * @format: str format to be printed...
 *
 * Return: num of characters that should be printed.....
 */
int _printf(const char *format, ...)
{
	va_list args;
	int ese = 0;

	if (format == NULL)
		return (-1);
		else
	va_start(args, format);

	ese = _print_frmt(format, args);
	va_end(args);
	return (ese);
}
