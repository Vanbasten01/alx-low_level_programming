#include "lists.h"
/**
 *insert_nodeint_at_index -  a function that inserts a new node at
 *a given position.
 *@head: a pointer to pointer that pointes to the head of
 *the linked list.
 *@idx: the indew in which we have to insert the new node.
 *@n: the data value stored in the new node.
 *Return:a pointer to the new node otherwise NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; current_node != NULL && i < idx - 1; i++)
		current_node = current_node->next;
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
