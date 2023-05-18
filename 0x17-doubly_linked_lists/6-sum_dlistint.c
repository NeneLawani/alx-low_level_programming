#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint -  Returns the sum of all the data (n) of a dlistint_t L/ list
 * @head: pointer to the head or start of the doubly linked list
 * and node to be freed
 * Return: Always 0. (Success)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
