#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: a pointer to the linked list
 *
 * Return: the number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t  i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
