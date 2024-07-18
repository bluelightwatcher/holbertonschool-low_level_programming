#include "variadic_functions.h"

/**
 * sum_them_all - variadic function of n elements
 * @n: is the number of elements to access in the macro
 * Return: sum of n elements
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int index = 0;
	va_list suite;

	va_start(suite, n);

	if (n == 0)
	{
		return (0);
	}

	while (index < ((int)n))
	{
		sum +=va_arg(suite, int);
		index++;
	}
	va_end(suite);
	return (sum);
}

