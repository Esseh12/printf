#include "main.h"
#include <stdlib.h>

/**
  * _print_spec - Prints a valid specifier
  * @format: The specifier to prints
  * @args: A list of variadic arguments
  *
  * Return: The length of the specifier
  */
int _print_spec(char format, va_list args)
{
	int k  = 0, length = 0;
	spc_dt _types[] = {
		{"c", _print_a_char},
		{"s", _print_a_string},
		{"d", _print_a_integer},
		{"i", _print_a_integer},
		{"b", _print_int_binary},
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
  * _print_invalid_spec - .....
  * @prev_format: .....
  * @format: specs to print
  * @count: ........
  *
  * Return: current count
  */
int _print_invalid_spec(char prev_format, char format, int count)
{
	count += _write('%');

	if (prev_format == ' ')
	{
		count += _write(' ');
		count += _write(format);
	}
	else
		count += _write(format);

	return (count);
}

/**
  * _validate_char - validates the character type
  * @_type: character to compared
  *
  * Return: 1 if char is equivalent to the listed type
  */
int _validate_char(char _type)
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
