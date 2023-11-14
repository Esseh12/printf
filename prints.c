#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * prnt_int2_bin - prints the converted int
 * @args: args to be printed
 * Return: an interger
*/
int prnt_int2_bin(va_list args)
{
unsigned int y = 0;
int m = 0, current = 0;

current = va_arg(args, int);
y = current;
if (current < 0)
{
wrte('1');
current = current * -1;
y = current;
m += 1;
}
while (y > 0)
{
y = y / 2;
m++;
}
recurse_int_bin(current);
return (m);
}

/**
  * recurse_int_bin - Prints a bin.....
  * @a: int to prnt.....
  *.....
  */
void recurse_int_bin(int a)
{
unsigned int k;

k = a;
if (k / 2)
recurse_int_bin(k / 2);
wrte(k % 2 + '0');
}

