#include "lists.h"
/**
 *add_nodeint_end - a function that adds a node at the end of the
 *the linked list.
 *@head:a pointer that pointes to a pointer pointer to the head
 *of the linked list.
 *@n: the date value stored in a node.
 *Return: a pointer to the added node otherwise NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;

	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
	free(new_node);
}




