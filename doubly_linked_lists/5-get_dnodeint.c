#include "lists.h"

/**
 * get_dnodeint_at_index - function returns node to a given index
 * @head: is the pointer to the starting node
 * @index: is the nth node in the list
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (count != index)
	{
		return (NULL);
	}
	return (temp);
}

