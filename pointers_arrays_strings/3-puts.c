#include"main.h"

/**
 * _puts - runs a for loop to print a string
 * @str: is a string
 * Return: void
 */

void _puts(char *str)
{
	int index;

	for (index = 0; index != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
