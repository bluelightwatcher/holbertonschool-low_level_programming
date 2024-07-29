#include "lists.h"

int _strlen(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 * print_list - prints element in a singly linked list
 * @h: is a pointer to the list head node
 * Return: number of elements (nodes) in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;


	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", _strlen(h->str), h->str);
		}
		count++;
		h = h->next;
	}

return (count);
}
