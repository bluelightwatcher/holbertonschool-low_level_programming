#include<stdio.h>
/**
 * main - entry point
 * Return: void
 */

int main(void)
{
	int mult3 = 0;
	int mult5 = 0;
	int i;

	for (i = 0; i < 1024 ; i++)
	{
		if (i % 3 == 0)
		{
			mult3 = (mult3 + i);
		}
		else if (i % 5 == 0)
		{
			mult5 = (mult5 + i);
		}
	}
	printf("%d\n", mult3 + mult5);
return (0);
}
