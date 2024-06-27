#include"main.h"

#include"2-strlen.c"
/**
 * puts_half - prints a string starting from the half
 * @str: is a string
 * Return: void
 */

void puts_half(char *str)
{
	int start;

	start = (_strlen(str) / 2);

	while (start != '\0')
	{
		_putchar(str[start]);
	}
	_putchar('\n');
}
