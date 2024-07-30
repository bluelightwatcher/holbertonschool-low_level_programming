#include "lists.h"

/**
 * free_list - function frees nodes of a list
 * @head: is a pointer to the first node of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
