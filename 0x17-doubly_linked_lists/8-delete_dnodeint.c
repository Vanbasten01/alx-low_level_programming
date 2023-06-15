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
	dlistint_t *trav = *head, *curr = NULL, *nodefree;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		nodefree = *head;
		*head = trav->next;
		if (*head)
			(*head)->prev = NULL;
		free(nodefree);
		return (1);
	}
	while (i != index - 1)
	{
		if (trav == NULL)
			return (-1);
		trav = trav->next;
		i++;
	}
	if (trav->next == NULL)
	{
		nodefree = trav;
		trav->prev->next = NULL;
		free(nodefree);
		return (1);
	}
	curr = trav;
	nodefree = trav->next;
	if (curr->next->next != NULL)
	{
		trav->next = curr->next->next;
		trav->next->next->prev = curr;
		free(nodefree);
		return (1);
	}
	return (-1);
}
