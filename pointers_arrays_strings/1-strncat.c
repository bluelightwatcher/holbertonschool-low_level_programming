#include"main.h"
#include<stdio.h>

/**
 * _strncat - concatenates 2 strings together
 * @dest: is an array of characters
 * @src: is an array of characters
 * @n: is an integer
 * Return: a pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (index < n && *dest != '\n')
	{
		*dest = src[index];
		index++;
		dest++;
	}
	return (start);
}
