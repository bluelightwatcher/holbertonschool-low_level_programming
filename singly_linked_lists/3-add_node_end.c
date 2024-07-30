#include "lists.h"

/**
 * _strnlen - function counts number of characters printed
 * @str: is a string of characters
 * Return: size of the string as unsigned int
 */

unsigned int _strnlen(const char *str)
{
	unsigned int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}


/**
 * add_node_end - ads a node at the end of a list
 * @head: is a pointer to the head pointer of the list
 * @str: is a string of characters
 * Return: a pointer to the last node added to the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Declaring a temp pointer for list traversal */
	list_t *temp;

	/* Here we will create a new node */
	list_t *last_node = malloc(sizeof(list_t));

		if (last_node == NULL)
		{
			return (NULL);
		}
		last_node->str = strdup(str);
		if (last_node->str == NULL)
		{
			free(last_node);
			return (NULL);
		}
		last_node->len = _strnlen(str);
		last_node->next = NULL;

		/* checks if head is last list member, if so head is last_node */
		if (*head == NULL)
		{
			*head = last_node;
		}
		else
		{
		/* Initializing temp pointer with start of the list pointer */
		temp = *head;

		/* traverse the list moving the temp pointer to the last node */
			while (temp->next != NULL)
			{
				temp = temp->next;
			}

			/* Assigns last node created to temp pointer */
			if (temp->next == NULL)
			{
				temp->next = last_node;
			}
		}
	return (last_node);
}
