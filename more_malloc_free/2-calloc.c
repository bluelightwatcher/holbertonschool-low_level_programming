#include"main.h"
#include<stdlib.h>
/**
 * _calloc - allocates size of an array and initializes it to zero
 * @nmemb: is the number of elements in the array
 * @size: is the size of elements in the array
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int counter;


	/*returns NULL if variable are 0*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/*returns NULL if malloc failled*/
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	/*initializes arrays member to 0 */
	for (counter = 0; counter < nmemb; counter++)
	{
		*((int *)ptr + counter) = 0;
	}
	ptr -= (nmemb * size);
	return (ptr);
}
