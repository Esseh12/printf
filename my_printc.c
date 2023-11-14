#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - function my printf
 * @format: string whit format to print
 *
 * Return: number of chars that print
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

for (int i = 0; format[i] != '\0'; i++)
{
	if (format[i] != '%')
	{
		write(1, &format[i], 1);
		count++;
			}
			else
			{
				i++;
				switch (format[i])
				{
					case 'c':
					write(1, va_arg(args, int), 1);
					count++;
					break;
					case 's':
					for (int j = 0; va_arg(args, char *)[j] != '\0'; j++)
					{
						write(1, &va_arg(args, char *)[j], 1);
						count++;
						}
						break;
						case '%':
						write(1, &format[i], 1);
						count++;
						break;
						}
						}
						}
						va_end(args);

return (count);
}
