#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * alloc_grid - allocates memory dynamically for a 2D array
 * Description: although memory blocks are stored continously
 * C does not support dynamcally allocated memory for 2D arrays
 * in this situation we need to create a pointer to an array of pointers
 * hence the nested loops
 * @width: is the numbers of lines
 * @height: is the numbers of rows
 * Return: a pointer to a pointer
 */


int **alloc_grid(int width, int height)
{
	int **ptr2;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
    /* Allocate memory for the array of pointers (rows)*/

	ptr2 = malloc(sizeof(int *) * height);
	if (ptr2 == NULL)
	{
		return (NULL);
	}
    /* Allocate memory for each row and initialize elements to 0*/

	for (int i = 0; i < height; i++)
	{
		ptr2[i] = malloc(sizeof(int) * width);
		if (ptr2[i] == NULL)
		{
			/* Free previously allocated memory in case of failure*/
			for (int j = 0; j < i; j++)
			{
				free(ptr2[j]);
			}
			free(ptr2);
			return (NULL);
		}

	/* Initializes elements to 0*/

	for (int j = 0; j < width; j++)
	{
		ptr2[i][j] = 0;
	}
	}
	return (ptr2);
}
