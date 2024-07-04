#include"main.h"

/**
 * _puts_recursion - prints characters till the end of a string recursively
 * @s: is a pointer to a character
 * Return:  s + 1 or nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	return (_puts_recursion(s + 1));
}
