#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _recursion_int_bin - .....
  * @a: .......
  *
  */
void _recursion_int_bin(int a)
{
	unsigned int x;

	x = a;
	if (x / 2)
		_recursion_int_bin(x / 2);
	_write(x % 2 + '0');
}
