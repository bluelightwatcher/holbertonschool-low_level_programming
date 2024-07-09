#include "main.h"
#include <stdlib.h>


int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);

}

char *_strdup(char *str)
{
	char *dup;
	int size = _strlen(str)+1;

	dup = malloc(size);

	if (dup == NULL)
	{
		return (NULL);
	}

	int counter = 0;

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
	free (dup);
	return (dup);
}
