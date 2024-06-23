#include<stdio.h>
/**
 *main - entry point
 *Return: void
 */
int main(void)
{
	char i;
	char n;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (n = 'a' ; n <= 'f' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
