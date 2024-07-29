#include "lists.h"

/**
 * list_len - count nodes in a singly linked list
 * @h: is a pointer to the list head node
 * Return: number of elements (nodes) in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;


	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
return (count);
}
