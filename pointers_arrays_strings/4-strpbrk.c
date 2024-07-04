#include"main.h"
/**
 * _strpbrk - look for matching value of accept in s
 * @s: is an array of charachters
 * @accept: is an array of charachters
 * Return: pointer to matching value or NULL pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	do {
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
	accept = start;
	s++;
	} while (*s != '\0');

	start = NULL;
	return (start);
}
