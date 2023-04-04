#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts new node at given position
 * @head: a double pointer to the head of the linked list
 * @idx: the index of the list where  the new node should be added
 * @n: the data to be added in the new node
 *
 * Return: address of the new node (Success), NULL (Fail)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *h = *head;
	unsigned int i = 0, hit = 0;

	while (h && idx)
	{
		if (i == (idx - 1))
		{
			hit = 1;
			break;
		}
		h = h->next;
		i++;
	}
	if (idx == 0)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = h;
		*head = new;
	}
	else if (hit == 1)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = h->next;
		h->next = new;
	}
	return (new);
}
