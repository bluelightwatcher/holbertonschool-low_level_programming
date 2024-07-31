#include "lists.h"

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

