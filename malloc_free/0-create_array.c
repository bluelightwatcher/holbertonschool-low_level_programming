#include "main.h"
#include<stdlib.h>

/**
 * create_array - function creates an array by dynamically allocating memory
 * @size: is an unsigned int (defines number of bytes)
 * @c: is a character to print into each byte
 * Return: pointer to char
 */


char *create_array(unsigned int size, char c)
{
	char *temp;

	if (size == 0) /* checks if size is null */
	{
		return (NULL);
	}

	temp = malloc(sizeof(c) * size);

	if (temp == NULL) /* checks if malloc failled */
	{
		return (NULL);
	}

	unsigned int counter = 0;

	while (counter < size) /*initialize the array with c */
	{
		temp[counter] = c;
		counter++;
	}
	return (temp); /* Returns the temp pointer */
}

