#include "main.h"
#include <string.h>
#include <ctype.h>

unsigned int binary_to_uint(const char *b)
{

	unsigned int total;
	int multiplier;
	int size;

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
