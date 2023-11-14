#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _print_a_char - Prints chars in the args
  * @args: A list of variadic args
  *
  * Return: The len of the chars
  */
int _print_a_char(va_list args)
{
	_write(va_arg(args, int));
	return (1);
}

/**
  * _print_a_string - Print all strs
  * @args: list of variadic args..
  *
  * Return: The len of the strs
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
  * _print_a_integer - Print ints
  * @args: list of variadic args
  *
  * Return: The len of the strs
  */
int _print_a_integer(va_list args)
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

	_recursion_integer(otim);
	return (ese);
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
