#include "main.h"

/**
 * swap_int - swaps value of member a and b
 * @a: is a pointer to an integer
 * @b: is a pointer to an integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
