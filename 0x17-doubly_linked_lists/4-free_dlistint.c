#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: pointer to the head or start of the doubly linked list
 * and node to be freed
 * Return: NULL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
