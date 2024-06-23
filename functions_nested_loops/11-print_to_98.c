#include <stdio.h>
#include "main.h"

/**
 * main - runs the print to 98 program
 * Return: zero
 */

void print_to_98(int n)
{
	int target = 98;

	if (n < target)
	{
		while (n < (target + 1))
		{
			printf("%d, ", n);
			if (n == 98)
			{
				printf("%d\n", n);
			}
			n++;
		}
	}
	else if (n > target)
	{
		while (n > (target - 1))
		{
			printf("%d, ", n);
			if (n == 98)
			{
				printf("%d\n", n);
			}
			n--;
		}
	}
	else
	{
		printf("%d\n", target);
	}
}

int main(void)
{
	int n = n;

	print_to_98(n);
	return (0);
}
