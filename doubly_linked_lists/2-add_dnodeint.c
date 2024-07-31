#include "lists.h"

/**
 * add_dnodeint - functions ads a node at the start of the list
 * @head: is a pointer to the start of the list
 * @n: is an integer
 * Return: pointer to start of the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
return (new);
}
