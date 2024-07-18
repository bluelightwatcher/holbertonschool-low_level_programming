#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - variadic function of n elements
 * @separator: is a pointer to char
 * @n: is the number of elements to access in the macro
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int index = 0;
	va_list suite;

	va_start(suite, n);

	if (n == 0)
	{
		 exit (-1);
	}

	while (index < ((int)n))
	{
		printf("%d", va_arg(suite, unsigned int));

		if (separator != NULL && index < (int)n-1)
		{
		printf("%s", separator);
		}
		index++;
	}
	va_end(suite);
	putchar('\n');
	
}

