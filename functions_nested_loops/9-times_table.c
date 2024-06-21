#include "main.h"
/**
 *times_table - prints the times table of 9
 *Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			k = i * j;
			_putchar(k);
			_putchar(',');
			_putchar(' ');
		}
		_putchar ('\n');
	}
}
