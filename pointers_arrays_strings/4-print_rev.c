#include"main.h"

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
	}
	while (index >= 0)
	{
		index--;
		_putchar(s[index]);
	}
	_putchar('\n');
}
