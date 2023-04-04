#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a linked list
 * @head: a double pointer to the head of the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head, *n = NULL;
	unsigned int i = 0, h = 0;

	if (head == NULL)
		return (-1);
	while (t && index)
	{
		if (i == (index - 1))
		{
			h = 1;
			break;
		}
		t = t->next;
		i++;
	}
	if (index == 0 && t)
	{
		*head = t->next;
		free(t);
		return (1);
	}
	else if (h == 1 && t)
	{
		n = t->next;
		t->next = n->next;
		free(n);
		return (1);
	}
	return (-1);
}
