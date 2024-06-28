#include"main.h"

/**
 * _strcpy - copy one string to a destination
 * @dest: is an array of characters
 * @src: is an array of characters
 * Return: initial location of the destination string
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;
	
	while (*src != '\0')
	{ 
		*dest = *src;
		src ++;
		dest++;
	}
	*dest = '\0';


	return(start);
}
