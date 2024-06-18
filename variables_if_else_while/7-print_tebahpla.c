#include <stdio.h>
/**
 * main - runs a while loop to print the alphabet on one line
 * Return: 0
 */
int main(void)
{
char n;
n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
