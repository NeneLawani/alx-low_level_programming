#include "lists.h"

/**
 * listint_len - a function that returns number of elements in a linked list
 * @h: a pointer to the linked list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t  i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
