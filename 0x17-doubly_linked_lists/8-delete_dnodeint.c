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
	dlistint_t *trav = *head, *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = trav->next;
		if (*head)
			(*head)->prev = NULL;
		/*trav->next->prev = NULL;*/
		/*trav->next = NULL;*/
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
		trav->prev->next = NULL;
		return (1);
	}
	curr = trav;
	trav->next = curr->next->next;
	trav->next->next->prev = curr;
	return (1);
}
