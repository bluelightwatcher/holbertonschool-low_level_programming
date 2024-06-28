#include"main.h"
#include<stdio.h>
/**
 * print_array - prints n numbers of array a
 * @a: is an array of integer
 * @n: is an integer
 * Return : void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == n - 1)
		{
			printf("%d", a[index]);
			break;
		}
		else
		{
			printf("%d, ", a[index]);
		}
	}
	putchar('\n');
}
