#include "main.h"
#include<stdlib.h>


char *create_array(unsigned int size, char c)
{
	if (size == 0) //checks if size is null
	{
		return (NULL);
	}
	
	char *temp = (char*)malloc(sizeof(unsigned int) * size);

	if (temp == 0) //checks if malloc failled
	{
		return (NULL);
	}

	unsigned int counter = 0;

	while (counter < size) // initialize the array with c
	{
		temp[counter] = c;
		counter++;
	}
	return (temp); // Returns the temp pointer
}

