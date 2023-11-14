#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _recursion_int_binary - .....
  * @a: .......
  *
  */
void _recursion_int_binary(int a)
{
	unsigned int x;

	x = a;
	if (x / 2)
		_recursion_int_binary(x / 2);
	_write(x % 2 + '0');
}
