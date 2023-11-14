#include <unistd.h>
#include <stdio.h>
/**
 * _write - writes the char c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
