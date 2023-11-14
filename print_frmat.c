#include "main.h"
#include <stdlib.h>

/**
  * print_frmt - Prints a format
  * @format: The format to prints
  * @args: A list of variadic arguments
  *
  * Return: The len of the format
  */
int print_frmt(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				count += w_rite(format[i]);

			if (_validate_char(format[i]) == 0)
			{
				count = _print_invalid_spec(format[i - 1], format[i], count);
			}
			else
			{
				count += print_specs(format[i], args);
			}
		}
		else
		{
			count += w_rite(format[i]);
		}

		i++;
	}

	return (count);
}

/**
  * print_specs - Prints a valid specifier
  * @format: The specifier to prints
  * @args: A list of variadic arguments
  *
  * Return: The len of the specifier
  */
int print_specs(char format, va_list args)
{
	int i  = 0, len = 0;
	spc_dt _types[] = {
		{"c", print_cha},
		{"s", print_strs},
		{"d", _print_a_integer},
		{"i", _print_a_integer},
		{"b", _print_int_binary},
		{NULL, NULL}
	};

	while (_types[i].specifier)
	{
		if (*_types[i].specifier == format)
			len = _types[i].f(args);

		i++;
	}

	return (len);
}

/**
  * _print_invalid_spec - Prints a invalid specifier
  * @prev_format: The previous specifier of actual specifier
  * @format: The specifier to prints
  * @count: The current count before prints invalid specifiers
  *
  * Return: The current count after prints invalid specifiers
  */
int _print_invalid_spec(char prev_format, char format, int count)
{
	count += w_rite('%');

	if (prev_format == ' ')
	{
		count += w_rite(' ');
		count += w_rite(format);
	}
	else
	{
		count += w_rite(format);
	}

	return (count);
}

/**
  * _validate_char - validate the type
  * @_type: character to be comparate
  *
  * Return: 1 if char is equal to a type
  */
int _validate_char(char _type)
{
	char _types[] = {'c', 's', 'd', 'i', 'b', '%'};
	int i = 0;

	while (_types[i])
	{
		if (_types[i] == _type)
			return (1);
		i++;
	}
	return (0);
}
