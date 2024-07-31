#include "lists.h"

/**
 * print_dlistint - Function prints the data in the dlistint_t structure
 * @h: is a pointer to the start of the list
 * Return: number of nodes in the list. *
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int size;

	if (!h)
	{
		return (0);
	}
	else
	{
		size = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			size++;
			h = h->next;
		}
	}
return (size);
}
