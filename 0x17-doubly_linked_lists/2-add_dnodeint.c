#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @n: pointer to the head or start of the doubly linked list
 * @head: address pointer
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (temp_node == NULL)
	{
		return (NULL);
	}

	temp_node->n = n;
	temp_node->prev = NULL;
	temp_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = temp_node;
	}

	*head = temp_node;
	return (temp_node);
}
