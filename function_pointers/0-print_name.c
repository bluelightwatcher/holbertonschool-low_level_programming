# include "function_pointers.h"

/**
 * write - writes the variable name
 * @name: is a pointer to char
 * Return: void
 */

void write(char *name)
{
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}

/**
 * print_name - prints a name by calling  back write function
 * @name: is a pointer to char
 * @f: function pointer: takes a pointer to char as argument
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{

	f(name);
}
