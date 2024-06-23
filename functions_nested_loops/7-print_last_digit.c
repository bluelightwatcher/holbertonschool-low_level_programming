#include "main.h"

/**
*print_last_digit - uses modulo to print the last digit
*@a: is an integer
*Return: a
*/
int print_last_digit(int a)
{
	a = a * -1;
	a = a % 10;
	_putchar(a + 48);
	return (a);
}

