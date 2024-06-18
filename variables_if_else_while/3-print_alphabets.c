#include <stdio.h>
/**
 * main - runs multiple while loops to print the alphabets on one line
 * Return: 0
 */
int main(void)
{
char n;
n = 'A';
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
