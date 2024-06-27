#include"main.h"

/**
 * puts_half - prints a string starting from the half
 * @str: is a string
 * Return: void
 */

void puts_half(char *str)
{
	int start;

	start = _strlen(str);

	while (start != '\0')
	{
		_putchar(str[start];
	}
	_putchar('\n');
}
