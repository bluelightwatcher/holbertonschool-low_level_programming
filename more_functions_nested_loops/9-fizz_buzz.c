#include<stdio.h>

/**
 *main - entry point Fizz buzz programm
 *Return: zero
 */

int main(void)
{
	int i;

	do {
		for (i = 1; i < 100; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", i);
			}
		}
	} while (i < 100);

	if (i == 100)
	{
		printf("Buzz");
	}
putchar('\n');
return (0);
}
