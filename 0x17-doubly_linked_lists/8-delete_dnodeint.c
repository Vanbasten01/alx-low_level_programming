#include "lists.h"
/**
 *delete_dnodeint_at_index - a function that deletes a node at a
 *specific index.
 *@head: the head of the linked list.
 *@index: the index of node to be deleted.
 *Return:1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trav = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		/*trav->next->prev = NULL;*/
		/*trav->next = NULL;*/
		return (1);
	}
	while (trav->next)
	{
		if (i == index)
		{
			(trav->next)->prev = trav->prev;
			trav->prev->next = trav->next;
			return (1);
		}
		trav = trav->next;
		i++;
	}
	trav->prev->next = NULL;
	return (1);
}

