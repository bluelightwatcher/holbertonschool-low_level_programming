#include "lists.h"

/**
 * sum_dlistint - function returns the sum of numbers in a list
 * @head: is the start of list
 * Return: unsigned int typedcast as an int
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		sum = 0;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return ((int)sum);
}
