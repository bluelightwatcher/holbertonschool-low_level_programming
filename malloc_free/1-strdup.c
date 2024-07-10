#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate length of a string
 * @s: is a pointer to character
 * Return: an integer
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
 * _strdup - duplicates a string (dynamically)
 * @str: is a pointer to an array  of characters
 * Return: a pointer to an array of charaters
 */

char *_strdup(char *str)
{
	char *dup;
	int size = _strlen(str) + 1;
	int counter = 0;
	dup = malloc(size);

	if (dup == NULL)
	{
		return (NULL);
	}

	while (counter < size)
	{
		dup[counter] = str[counter];
		counter++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		return (dup);
	}
	free(dup);
	return (dup);
}
