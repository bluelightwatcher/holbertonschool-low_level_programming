#include "main.h"

/**
*times_table - prints the times table of 9
*Return: void
*/
void times_table(void)
{
	int i = 0;
	int j = 0;
	

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			
			int k = i * j;
			if (k == 9)
			{
	       		_putchar(k + 48);
			}
			else if (k >9)
			{
			k = k / 10;
			k = k + 48;
			_putchar (k);
			k = i * j;
			k = k % 10;
			k = k + 48;
			_putchar(k);
			_putchar(',');
			_putchar(' ');
			}
			else 
			{
	       		k = k + 48;
			_putchar(k);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}	
		
		}
		_putchar ('\n');
	}
}
