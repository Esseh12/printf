#include "main.h"
#include <unistd.h>

/**
 * wrte - writes the char c to standard output
 * @c: The char to be printed down
 *
 * Return: 1 if successful.
 * On error, -1 is always a choice
 */
int wrte(char c)
{
	return (write(1, &c, 1));
}
