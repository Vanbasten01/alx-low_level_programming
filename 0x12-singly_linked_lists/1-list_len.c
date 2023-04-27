#include "lists.h"
/**
 *list_len -  a function that returns the number of elements
 *in a linked list.
 *@h: a pointer to traverse the elements of the linked list.
 *Return: number of nodes in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
