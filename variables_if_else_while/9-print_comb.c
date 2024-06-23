#include<stdio.h>
/**
 *main - entry point of the do while loop
 *Return: zero
 */
int main(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
		if (num == 9)
		{
			putchar(num + 48);
		}
		else
		{
			putchar(num + 48);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
