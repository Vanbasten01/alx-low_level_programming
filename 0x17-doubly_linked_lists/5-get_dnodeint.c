#include "lists.h"
/**
 *get_dnodeint_at_index -  a function that returns the nth node of
 *a dlistint_t linked list.
 *@head: the head of linked list.
 *@index: the index of the node.
 *Return: the node at the specific index otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *traverse = head;
	unsigned int  count = 0;


	while (traverse)
	{
		if (index == count)
			return (traverse);
		traverse = traverse->next;
		count++;
	}
	return (NULL);
}
