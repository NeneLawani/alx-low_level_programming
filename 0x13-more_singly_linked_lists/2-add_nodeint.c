#include "lists.h"

/**
 * add_nodeint - function that adds new node at the beginning of a linked list
 * @head: a double pointer to the head of the linked list
 * @n: integer value to be stored in the new node
 *
 * Return: the address of the new element (Success), NULL (Fail)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
