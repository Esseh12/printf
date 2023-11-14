#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _recursion_int_bin - .....
  * @b: .......
  *
  */
void _recursion_int_bin(int b)
{
	unsigned int x;

	x = b;
	if (x / 2)
		_recursion_int_bin(x / 2);
	_write(x % 2 + '0');
}
