#include<stdio.h>
/**
 *main - entry point of the do while loop
 *Return: zero
 */
int main(void)
{
	int num = 0;

	do {
		putchar(num + 48);
		putchar(',');
		putchar(' ');
		num++;
	} while (num < 9);

putchar(num + 48);

return (0);
}
