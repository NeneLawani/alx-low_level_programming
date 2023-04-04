#include "lists.h"

/**
 * _realloc - a function that reallocates memory for an array of pointers to
 * the nodes in a linked list
 * @list: the old list to append
 * @size: the size of the new list
 * @new: the new node to be added to the list
 *
 * Return: a pointer to the new list
 */
listint_t **_realloc(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - a function that frees a linked list
 * @head: a double pointer to the head of the linked list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _realloc(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
