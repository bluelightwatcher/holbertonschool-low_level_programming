#include "function_pointers"

/**
 * int_index - function traverses an array and returns an int
 * @array: is an array of integers
 * @size: is the number of element in the array
 * @cmp: is a function performed on each element of the array
 * Return: the index returned by function pointer cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (index < size)
	{
		if (index == size)
		{
			return (-1);
		}

		cmp(array[index]);

		if (cmp != 0)
		{
			return (cmp);
		}
		index++;
	}
return (0);
}
