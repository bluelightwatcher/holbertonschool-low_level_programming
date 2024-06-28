#include"main.h"
#include"2-strlen.c"

/**
 * puts_half - prints a string starting from the half
 * @str: is a string
 * Return: void
 */

void puts_half(char *str)
{
	int compt;
	int checker = 0;

	if (_strlen(str) % 2 != 0)
	{
		checker += 1;
	}
		for (compt = (_strlen(str) + checker) / 2; compt < _strlen(str); compt++)
	{
		_putchar(str[compt]);
	}
	_putchar('\n');
}
