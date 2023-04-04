#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: double pointer to the head of the linked list
 * @n: data to be stored in the new element
 *
 * Return: the address of new element (Success), NULL (Fail)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *temp;

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;

		temp->next = new;
		new->next = NULL;
	}

	return (new);
}
