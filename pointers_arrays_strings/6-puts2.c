#include"main.h"

/**
 * puts2 - prints pairs startig from 0
 * @str: is a pointer to a character
 */

void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		else
		{
			continue;
		}

	}
	_putchar('\n');
}
