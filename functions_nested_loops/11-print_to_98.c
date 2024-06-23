#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - runs the print to 98 program
 * @n: is an integer
 * Return: zero
 */

void print_to_98(int n)
{
	int target = 98;

	if (n < target)
	{
		while (n <= target)
		{
			printf("%d, ", n);
			if (n == target)
			{
				printf("%d\n", n);
				break;
			}
			n++;
		}
	}
	else if (n > target)
	{
		while (n >= target)
		{
			if (n == target )
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
