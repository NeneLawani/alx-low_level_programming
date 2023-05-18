#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the head or start of the doubly linked list
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int track_node;

	for (track_node = 0; h != NULL; track_node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (track_node);
}
