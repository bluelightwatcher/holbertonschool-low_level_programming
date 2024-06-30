#include"main.h"

/**
 *_strncpy - copy characters from src to dest
 *@dest: is a pointer
 *@src: is a pointer
 *@n: is an integer
 *Return: pointer start
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
return (start);
}
