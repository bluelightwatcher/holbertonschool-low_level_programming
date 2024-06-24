#include "main.h"

/**
 * print_most_numbers - prints numbers 1356789
 * Return: void
 */


void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num == '2' || num == '4')
		{
			num++;
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
