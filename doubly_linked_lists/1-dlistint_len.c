#include "lists.h"

/**
 * dlistint_len - Function counts the number of element in a list
 * @h: is a pointer to the start of the list
 * Return: number of nodes in the list. *
 */

size_t dlistint_len(const dlistint_t *h)
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
			/*printf("%d\n", h->n);*/
			size++;
			h = h->next;
		}
	}
return (size);
}
