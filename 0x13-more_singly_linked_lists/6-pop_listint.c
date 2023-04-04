#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: a double pointer to the head of the linked list
 *
 * Return: the head node's data (Success), 0 (Empty)
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int i = 0;

	if (head != NULL && *head != NULL)
	{
		h = *head;
		i = h->n;
		*head = h->next;
		free(h);
	}

	return (i);
}
