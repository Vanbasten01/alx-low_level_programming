#include "lists.h"
/**
 *add_nodeint - a function that adds a new node.
 *@head: the actual head of the linked list.
 *@n: the data value the new node stores.
 *Return: a pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	free(new_node);
}


