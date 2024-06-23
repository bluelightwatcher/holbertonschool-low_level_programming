#include<stdio.h>

/**
 * main - prints the alphabet from a to z
 * Description: skips the letter e and q
 * Return: zero
 */

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter == 'e')
		{
			continue;
		}
		else if (letter == 'q')
		{
			continue;
		}
		else
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
