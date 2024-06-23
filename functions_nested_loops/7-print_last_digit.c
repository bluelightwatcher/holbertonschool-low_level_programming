#include "main.h"
#include <stdio.h>

/**
*print_last_digit - uses modulo to print the last digit
*@a: is an integer
*Return: a
*/

int print_last_digit(int a)
{

	if (a <= 0)
	{
		a = a * -1;
		a = a % 10;
		putchar(a + 48);
		putchar(a + 48);
		return (a);
	}
	else
	{
		a = a % 10;
		putchar(a + 48);
		putchar(a + 48);
		return (a);
	}
}
