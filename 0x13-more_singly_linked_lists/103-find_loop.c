#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: address of the node where the loop starts (Success), NULL (Fail)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *p;

	t = p = head;
	while (t && p && p->next)
	{
		t = t->next;
		p = p->next->next;
		if (t == p)
		{
			t = head;
			break;
		}
	}
	if (!t || !p || !p->next)
		return (NULL);

	while (t != p)
	{
		t = t->next;
		p = p->next;
	}
	return (p);
}
