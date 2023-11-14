#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _print_int_binary - Prints a int converted to binary
  * @args: A list of variadic arguments
  *
  * Return: The number of printed digits
  */
int _print_int_binary(va_list args)
{
	unsigned int m = 0;
	int p = 0, current = 0;

	current = va_arg(args, int);
	m = current;
	if (current < 0)
	{
		_write('1');
		current = current * -1;
		m = current;
		p += 1;
	}
	while (m > 0)
	{
		m = m / 2;
		p++;
	}
	_recursion_int_binary(current);
	return (p);
}

/**
  * _recursion_int_binary - Prints a binary
  * @a: integer to print
  *
  */
void _recursion_int_binary(int a)
{
	unsigned int x;

	x = a;
	if (x / 2)
		_recursion_int_binary(x / 2);
	_write(x % 2 + '0');
}
