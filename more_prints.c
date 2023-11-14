#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * prnt_character - Prints a char...
  * @args:...list of variadic args..
  *
  * Return: The len of the char...
  */
int prnt_character(va_list args)
{
	wrte(va_arg(args, int));
	return (1);
}

/**
  * prnt_str - Prints a str
  * @args: A list of variadic args
  *
  * Return: The len of the str
  */
int prnt_str(va_list args)
{
	char *arg = va_arg(args, char *);
	int i = 0;

	if (arg != NULL)
	{
		while (arg[i])
		{
			wrte(arg[i]);
			i++;
		}

		return (i);
	}

	wrte('(');
	wrte('n');
	wrte('u');
	wrte('l');
	wrte('l');
	wrte(')');
	return (6);
}

/**
  * prnt_an_int - Prints a integer
  * @args: A list of variadic args
  *
  * Return: The len of the str
  */
int prnt_an_int(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		wrte('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	recurse_int_bin(m);
	return (count);
}
