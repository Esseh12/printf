#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  * _print_int_bin -......
  * @args: lists variadic args
  *
  * Return: digit's number printed
  */
int _print_int_bin(va_list args)
{
	unsigned int remainder = 0;
	int p = 0, current = 0;

	current = va_arg(args, int);
	remainder = current;
	if (current < 0)
	{
		_write('1');
		current = current * -1;
		remainder = current;
		p += 1;
	}
	while (remainder > 0)
	{
		remainder = remainder / 2;
		p++;
	}
	_recursion_int_bin(current);
	return (p);
}
/**
 * _write - writes the character c to standard output
 * @c: The chars to be printed
 *
 * Return: 1 if successful
 * On error, -1 is returned.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
/**
  * _print_char - Prints chars in the args
  * @args: A list of variadic args
  *
  * Return: The len of the chars
  */
int _print_char(va_list args)
{
	_write(va_arg(args, int));
	return (1);
}
