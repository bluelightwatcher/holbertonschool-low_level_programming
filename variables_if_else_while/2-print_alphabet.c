#include <stdio.h>
/**
 * main - runs a while loop to print the alphabet on one line
 * Return: 0
 */
int main(void)
{
char n;
n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	return (0);
	putchar('\n');
}
