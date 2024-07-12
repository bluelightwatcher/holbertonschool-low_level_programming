#include "main.h"
#include <stdlib.h>


/**
 * _strlen - loops over the string as an array
 * @s: is a character
 * Return: final value of i *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);

}

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
		src++;
		dest++;
	}
	*dest = '\0';


	return (start);
}

/**
 * str_concat - the fonction concatenates 2 strings together
 * @s1: is a pointer to char
 * @s2: is a pointer to char
 * Return: a pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0, len2 = 0;
	
	if (s1 != NULL)
	{
		len1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = _strlen(s2);
	}
	
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return NULL;
	}

	if (s1 != NULL)
	{
		_strcpy(result, s1);
	}
	else
	{
		result[0] = '\0';
	}
	if (s2 != NULL)
	{
		_strcpy(result + len1, s2);
	}
	return result;
}
