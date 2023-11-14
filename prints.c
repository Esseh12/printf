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

	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
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
/**
  * _print_format - displays the format of the print
  * @format: The format of code to be printed
  * @args: variadic arguments list to be printed
  *
  * Return: format's length
  */
int _print_format(const char *format, va_list args)
{
	int ese = 0;
	int k = 0;

	while (format && format[k])
	{
		if (format[k] == '%')
		{
			if (format[k + 1] == '\0')
				return (-1);

			k++;

			while (format[k] == ' ')
				k++;

			if (format[k] == '%')
				ese += _write(format[k]);

			if (_validate_char(format[k]) == 0)
			{
				ese = _print_invalid_spec(format[k - 1], format[k], ese);
			}
			else
			{
				ese += _print_spec(format[k], args);
			}
		}
		else
		{
			ese += _write(format[k]);
		}

		k++;
	}

	return (ese);
}
