#include "lists.h"

/**
 * add_node - add a node a the start of the list
 * @head: is a pointer to the first node
 * @str: is a string of charachters
 * Return: new pointer to the head of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}


	new_node->len = sizeof(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
