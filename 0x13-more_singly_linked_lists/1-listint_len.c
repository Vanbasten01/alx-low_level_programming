#include "lists.h"
/**
 *listint_len - a function that counts the number
 *of elements of a linked list.
 *@h: a pointer to the head of the linked list.
 *Return: the count.
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
