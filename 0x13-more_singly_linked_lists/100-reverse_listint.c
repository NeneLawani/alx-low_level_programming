#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: a double pointer to the head of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *a = NULL;

	if (head == NULL)
		return (NULL);
	while (*head)
	{
		p = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = p;
	}
	*head = a;
	return (*head);
}
