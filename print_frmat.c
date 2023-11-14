#include "main.h"
#include <stdlib.h>

/**
  * _print_specs1 - Prints a valid specifier
  * @format: The specifier to prints
  * @args: A list of variadic arguments
  *
  * Return: The length of the specifier
  */
int _print_specs1(char format, va_list args)
{
	int k  = 0, length = 0;
	spc_dt _types[] = {
		{"c", _print_char},
		{"s", _print_a_str},
		{"d", _print_int},
		{"i", _print_int},
		{"b", _print_int_bin},
		{NULL, NULL}
	};

	while (_types[k].specifier)
	{
		if (*_types[k].specifier == format)
			length = _types[k].f(args);

		k++;
	}

	return (length);
}

/**
  * _print_invalid_spesf - .....
  * @prev_formt: .....
  * @format: specs to print
  * @ese: ........
  *
  * Return: current count
  */
int _print_invalid_spesf(char prev_formt, char format, int ese)
{
	ese += _write('%');

	if (prev_formt == ' ')
	{
		ese += _write(' ');
		ese += _write(format);
	}
	else
		ese += _write(format);

	return (ese);
}

/**
  * _ValidateChar - validates the character type
  * @_type: character to compared
  *
  * Return: 1 if char is equivalent to the listed type
  */
int _ValidateChar(char _type)
{
	char _types[] = {'c', 's', 'd', 'i', 'b', '%'};
	int l = 0;

	while (_types[l])
	{
		if (_types[l] == _type)
			return (1);
		l++;
	}
	return (0);
}
