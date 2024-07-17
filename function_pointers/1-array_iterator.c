# include "function_pointers.h"

/**
 * array_iterator - iterates a function on each element of an array
 * @array: is a pointer to int
 * @size: is the size of the array of int
 * @action: function pointer: takes an int as argument
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index;
	index = 0;

	while (index < (int)size)
	{
		action(array[index]);
		index++;
	}
}
