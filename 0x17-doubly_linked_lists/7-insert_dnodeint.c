#include "lists.h"
/**
 *insert_dnodeint_at_index - a function that
 *inserts a new node at a given position.
 *@h: the head of the linked list.
 *@idx: the index.
 *@n: the value of date (n) to be inserted.
 *Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *trav = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (i != idx - 1)
	{
		if (trav == NULL)
			return (NULL);
		trav = trav->next;
		i++;
	}
	if (trav->next == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new->n = n;
	new->prev = trav;
	new->next = trav->next;
	trav->next->prev = new;
	trav->next = new;
	return (new);
}
