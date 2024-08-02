#include "main.h"

/**
 * print_binary - recursive function prints value of int in binary
 * @n: is an unsigned int
 * Return: void
 */

void print_binary(int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
