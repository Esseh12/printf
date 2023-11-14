#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _print_a_string - Print all strs...
  * @args: list of variadic args..
  *
  * Return: The len of the strs.....
  */
int _print_a_string(va_list args)
{
	char *melody = va_arg(args, char *);
	int ese = 0;

	if (melody != NULL)
	{
		while (melody[ese])
		{
			_write(melody[ese]);
			ese++;
		}

		return (ese);
	}

	_write('(');
	_write('n');
	_write('u');
	_write('l');
	_write('l');
	_write(')');
	return (6);
}

/**
  * _recursion_integer - Prints a integer
  * @a: integer to print
  *
  * Return: Nothing
  */
void _recursion_integer(int a)
{
	unsigned int p;

	p = a;
	if (p / 10)
		_recursion_integer(p / 10);
	_write(p % 10 + '0');
}
