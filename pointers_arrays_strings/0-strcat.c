#include"main.h"
#include<stdio.h>

/**
 * _strcat - concatenates 2 strings together
 * @dest: is an array of characters
 * @src: is an array of characters
 * Return: a pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (start);
}
