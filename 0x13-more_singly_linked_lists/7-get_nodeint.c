#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: a pointer to the head node of the linked list
 * @index: the index of the node, starting at 0
 *
 * Return: pointer to nth node (Success), NULL (Fail)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i = 0;

	p = head;

	while (p)
	{
		if (i == index)
			break;

		p = p->next;
		i++;
	}

	return (p);
}
