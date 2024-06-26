#include "main.h"

/**
 * reset_to_98 - changes value of n through a pointer
 * @n: is an integer
 * @:pReset: reset the value of n to 98
 * Return: void
 */

void reset_to_98(int *n)
{
	int *pReset = &n;
	*pReset = 98;
}
