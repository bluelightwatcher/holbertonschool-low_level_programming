#include "main.h"
/**
 *print_sign - prints the sign of number n
 *@n: is an integer
 *Return: either 1, -1, 0
 */

int print_sign(int n);

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n < 0)
		{
		_putchar('-');
		return (-1);
		}
		else
		{
		_putchar('0');
		return (0);
		}
}

