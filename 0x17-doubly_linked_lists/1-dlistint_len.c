#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of...
 * ....elements in a linked dlistint_t list.
 * @h: pointer to the head or start of the doubly linked list
 *
 * Return: the number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t track_nodes = 0;

	while (h != NULL)
	{
		track_nodes++;
		h = h->next;
	}
	return (track_nodes);
}
