#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: a double pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *t = *head;

	if (head == NULL)
		return;

	while (t)
	{
		h = t;
		t = t->next;
		free(h);
	}

	*head = NULL;
}
