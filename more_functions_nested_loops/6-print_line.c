#include "main.h"

/**
 * print_line - prints _ n times
 * @n: is an integer
 * Return: void
 */

void print_line(int n)
{
	int target = n;
	int steps;

	if (n > 0)
	{
		for (steps = 0 ; steps < target ; steps++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
