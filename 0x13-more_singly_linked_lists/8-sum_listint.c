#include "lists.h"

/**
 * sum_listint - a function that returns sum of all data(n) of a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: the sum of all data (Success), 0 (Fail)
 */
int sum_listint(listint_t *head)
{
	listint_t *h = head;
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
