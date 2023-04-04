#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: a pointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
