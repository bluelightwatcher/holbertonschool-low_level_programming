#include"main.h"

/**
 * print_line - prints a diagonal line
 * Description: prints a backslash then a new line
 * then int steps prints spaces
 * then increment steps
 * repeat
 * @n: is an integer
 * Return: void
 */

void print_line(int n)
{
	int target = n;
	int steps = 1;
	int start;

	if (n > 0) /* does not print backslash but a new line if n is over zero */
	{
		while (steps <= target) /* prints backslash + new line + increments steps */
		{
			_putchar(92);
			_putchar('\n');

			if (steps != target) /* no for loop once it reaches the target */
			{
				for (start = 0; start < steps; start++) /* print space for steps number*/
				{
					_putchar(' ');
				}
			}
		steps++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
