#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_cha - Prints a charactres
  * @args: list of variadic args
  *
  * Return: The len of the character
  */
int print_cha(va_list args)
{
	w_rite(va_arg(args, int));
	return (1);
}

/**
  * print_strs - Prints a strs
  * @args: A list of variadic args
  *
  * Return: The len of the string
  */
int print_strs(va_list args)
{
	char *arg = va_arg(args, char *);
	int i = 0;

	if (arg != NULL)
	{
		while (arg[i])
		{
			w_rite(arg[i]);
			i++;
		}

		return (i);
	}

	w_rite('(');
	w_rite('n');
	w_rite('u');
	w_rite('l');
	w_rite('l');
	w_rite(')');
	return (6);
}

/**
  * _print_a_integer - Prints a integer
  * @args: A list of variadic arguments
  *
  * Return: The len of the string
  */
int _print_a_integer(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		w_rite('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	_recursion_integer(m);
	return (count);
}

/**
  * _recursion_integer - Prints a integer
  * @a: integer to print
  *
  * Return: Nothing
  */
void _recursion_integer(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		_recursion_integer(t / 10);
	w_rite(t % 10 + '0');
}
