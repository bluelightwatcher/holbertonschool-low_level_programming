#include "lists.h"

/**
 * free_dlistint - Function free the node in a list
 * @head: is a pointer to the start of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (!head)
	{
		exit(-1);
	}

	while (head->next != NULL)
	{
		free(head);
		temp = temp->next;
		head = temp;
	}
}

