#include "lists.h"
/**
 *pop_listint -  a function that deletes the head node
 *of a linked list.
 *@head: a pointer to a pointer that pointes to the head
 *the of linked list.
 *Return:  the head node’s data.
 *
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_node = *head;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	free(new_node);
	return (n);
}
