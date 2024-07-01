#include"main.h"

/**
 * _strspn - looks for prefix (accept) in a string (s)
 * @accept: is a pointer to a char
 * @s:is a pointer to a char
 * Return: an unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	char *start = accept;
	unsigned int count = 0;
	unsigned int i = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				i++;
				accept = start;
				break;
			}
			accept++;
		}
		if (i == 0)
		{
			return (count);
		}
		count += i;
		i = 0;
		s++;
	}
return (count);
}
