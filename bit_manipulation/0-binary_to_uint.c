#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * binary_to_uint - function prints unsigned int into binary
 * @b: is a const string of characters
 * Return: binary value
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int total;
	int multiplier;
	int size;

	if (!b)
	{
		return (0);
	}

	size = 0;
	while (*b != '\0')
	{
		if (isalpha(*b))
		{
			return (0);
		}
		b++;
		size++;
	}

	total = 0;
	multiplier = 1;
	b--;
	while (size != 0)
	{
		if (*b == '1')
		{
			total += multiplier;
		}
		multiplier *= 2;
		b--;
		size--;
	}
	return (total);
}
