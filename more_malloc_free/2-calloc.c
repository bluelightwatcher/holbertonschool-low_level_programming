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

	/*setting memory to 0*/
	memset(ptr, 0, nmemb * size);

	/*returning ptr*/
	return (ptr);
}
