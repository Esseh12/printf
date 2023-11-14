#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _write - writes the character c to standard output
 * @c: The chars to be printed
 *
 * Return: 1 if successful
 * On error, -1 is returned.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
