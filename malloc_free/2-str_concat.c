#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0, len2 = 0;
	
	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}
	
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return NULL;
	}

	if (s1 != NULL)
	{
		strcpy(result, s1);
	}
	else
	{
		result[0] = '\0';
	}
	if (s2 != NULL)
	{
		strcpy(result + len1, s2);
	}
	return result;
}
