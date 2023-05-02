#include "lists.h"
/**
 *reverse_listint - a function that reverses a linked list.
 *@head: a pointer to the head of the linked list.
 *Return: a pointer to the new head node's.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *prev_node = NULL;


	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;

	return (*head);
}


