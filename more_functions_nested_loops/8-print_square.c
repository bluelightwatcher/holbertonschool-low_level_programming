#include"main.h"

/**
 *print_square - prints a square of n size
 *@size: is an integer
 *return: void
 */

void print_square(int size)
{
	int ver;
	int hor;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ver = 0; ver < size; ver++)
		{
			for (hor = 0; hor < size; hor++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
