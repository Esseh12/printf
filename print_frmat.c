#include "main.h"
#include <stdlib.h>

/**
  * prnt_frmat - Prints a formt.........
  * @format: ...The formt to prints.......
  * @args: ...A list of variadic args......
  *
  * Return: The len of the format
  */
int prnt_frmat(const char *format, va_list args)
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
				count += wrte(format[i]);

			if (validate_car(format[i]) == 0)
			{
				count = prnt_invalid_specss(format[i - 1], format[i], count);
			}
			else
			{
				count += prnt_specifers(format[i], args);
			}
		}
		else
		{
			count += wrte(format[i]);
		}

		i++;
	}

	return (count);
}

/**
  * prnt_specifers - Prints a valid specs
  * @format: The specifier to prnt
  * @args: A list of variadic args
  *
  * Return: The len of the specifier
  */
int prnt_specifers(char format, va_list args)
{
	int i  = 0, len = 0;
	spc_dt t_ypes[] = {
		{"c", prnt_character},
		{"s", prnt_str},
		{"d", prnt_an_int},
		{"i", prnt_an_int},
		{"b", prnt_int2_bin},
		{NULL, NULL}
	};

	while (t_ypes[i].specifier)
	{
		if (*t_ypes[i].specifier == format)
			len = t_ypes[i].f(args);

		i++;
	}

	return (len);
}

/**
  * prnt_invalid_specss - Prints a invalid specs....
  * @prv_formt: The prev specs of actual specs
  * @format: The specs to prints....
  * @count: The current count...
  * ...before prints invalid specs
  *
  * Return: The current count...
  * ....after prnts invalid specifiers
  */
int prnt_invalid_specss(char prv_formt, char format, int count)
{
	count += wrte('%');

	if (prv_formt == ' ')
	{
		count += wrte(' ');
		count += wrte(format);
	}
	else
	{
		count += wrte(format);
	}

	return (count);
}

/**
  * validate_car - validate the e type
  * @t_ype: char to be compared
  *
  * Return: 1 if char is equivalent to a type
  */
int validate_car(char t_ype)
{
	char t_ypes[] = {'c', 's', 'd', 'i', 'b', '%'};
	int i = 0;

	while (t_ypes[i])
	{
		if (t_ypes[i] == t_ype)
			return (1);
		i++;
	}
	return (0);
}
