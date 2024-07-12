#include "main.h"
#include <stdlib.h>

/**
 * free_grid - functions frees a 2D array
 * @grid: is a pointer to a pointer to int (row)
 * @height: is an integer (column)
 * Return: void
 */


void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
