#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a node to a given index
 * @h: is the pointer to the starting node
 * @idx: is the nth node in the list
 * @n: is an integer stored in the node
 * Return: pointer to the inserted node or NULL if faillure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int count;

	if (*h == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (temp != NULL && count < idx)
	{
		temp = temp->next;
		count++;
	}

	if (count != idx)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new = temp;
	new->next = temp->next;
	new->prev = temp->prev;
	new->n = n;
	return (new);
}
