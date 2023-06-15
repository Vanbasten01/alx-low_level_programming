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
	dlistint_t *trav = *head, *Target = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		Target = *head;
		*head = trav->next;
		if (*head)
			(*head)->prev = NULL;
		free(Target);
		return (1);
	}
	while (trav)
	{
		if (i == index - 1)
		{
			Target = trav->next;
			if (Target != NULL)
			{
				trav->next = Target->next;
				if (Target->next != NULL)
					Target->next->prev = trav;
				free(Target);
				return (1);
			}
		}
		trav = trav->next;
		i++;
	}
	return (-1);
}
