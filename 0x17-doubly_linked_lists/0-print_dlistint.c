#include "lists.h"
/**
 *print_dlistint - a function that prints all the elements of a
 *doubly linked list.
 *@h: head the doubly linked list.
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
