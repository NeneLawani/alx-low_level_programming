#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: pointer to the head or start of the doubly linked list
 * and node to be freed
 * @index: represents the index of the node we want to retrieve from...
 * the doubly linked list.
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int node_count = 0;

	while (current != NULL)
	{
		if (node_count == index)
		{
			return (current);
		}
		current = current->next;
		node_count++;
	}
	return (NULL);
}
