#include"main.h"


/**
 *_memcpy - copy non null bytes from src to dest
 *@dest: is a pointer
 *@src: is a pointer
 *@n: is an unsigned integer
 *Return: pointer start
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
return (start);
}
