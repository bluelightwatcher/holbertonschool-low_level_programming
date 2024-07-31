#include "lists.h"

/**
 * free_dlistint - Function free the node in a list
 * @head: is a pointer to the start of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

