#include "main.h"
/**
 * times_table - prints the time tables from 0 to 9
 * Return: void
 */

/**
 * result - calculate the result of i mutliplying j
 * @k: is an integer
 * Description: it converts the integer into ascii printable character
 * Return: the ascii value of an integer between 0 and 99
 */

/**
 * format - display the result of the calculation
 * Return: void
 */

char result(int k)
{
	if (k > 9)
	{
	_putchar((k / 10) + 48);
	_putchar((k % 10) + 48);
	}
	else
	{
	_putchar(k + 48);
	}
return (0);
}

char format(char k, int j)
{
	while (j > 0)
	{
		if (k > 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		else
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
	break;
	}
return (0);
}

void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			int k = i * j;

			format (k, j);
			result(k);
		}
	_putchar('\n');
	}
}


