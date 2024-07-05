#include"main.h"


/**
 *_strchr - looks for a character in a string
 *@s: is a string
 *@c: is a character
 *Return: ptr if C is found NULL if not found
 */

char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}

return ('\0');
}
