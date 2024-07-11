#include"main.h"
#include<stdlib.h>
/**
 * array_range - allocates memory for an array
 * Description: the array is populated with all values from min to max
 * @min: is an integer
 * @max: is an integer
 * Return: null if argument condition or malloc faills otherwise return pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int sizearr;
	int counter;

	if (min > max)
	{
		return (NULL);
	}

	sizearr = (sizeof(int) * (max - min));
	ptr = malloc(sizearr);

	if (ptr == NULL)
	{
		return (NULL);
	}

	counter = 0;

	while (min < max)
	{
		*ptr = min;
		min++;
		counter++;
		ptr++;
	}
	ptr -= counter;
	return (ptr);
}
