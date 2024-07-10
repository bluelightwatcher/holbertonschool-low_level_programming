#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - returns a valid malloc function
 * @b: size of the pointer
 * Return: valid pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b <= 0)
	{
		exit(98);
	}

	ptr = malloc(b);
	return (ptr);
}
