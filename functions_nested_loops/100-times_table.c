#include "main.h"
/**
 * times_table - prints time tables from 0 to 9
 * result - calculate i mutliplying j
 * @k: is an integer
 * Description: converts int into ascii character
 * format - display the result
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
	int n = 0;

	while (j > 0 && j < n)
	{
		if (k > 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else if (k > 99)
		{
		_putchar(',');
		_putchar(' ');
		}
		else
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		}
	break;
	}
return (0);
}

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 0 && n < 15)
	{

		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				int k = i * j;

				format (k, j);
				result(k);
			}
		_putchar('\n');
		}
	}
}
