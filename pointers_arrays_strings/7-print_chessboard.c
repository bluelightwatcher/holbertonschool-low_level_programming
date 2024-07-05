#include"main.h"

/**
 * print_chessboard - uses nested while loop to print a 2 dim array
 * @a: is a 2 dim array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{

	int col = 0;

	while (col < 8)
	{
		int line = 0;

		while (line < 8)
		{
			_putchar(a[col][line]);
			line++;
		}
	_putchar('\n');
	col++;
	}
}
