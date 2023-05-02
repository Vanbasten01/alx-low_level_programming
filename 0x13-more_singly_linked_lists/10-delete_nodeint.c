#include "lists.h"
/**
 *delete_nodeint_at_index -  a function that deletes the node
 *at index index of a linked list.
 *@head: a pointer that pointes to a pointer pointing to the head
 *of the linked list.
 *@index: the index of the node to be deleted.
 *Return: 1 succes otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_delete;
	listint_t *prev_node = *head;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}
	node_to_delete = (*head)->next;
	while (node_to_delete != NULL)
	{
		if (i == index)
		{
			prev_node->next = node_to_delete->next;
			free(node_to_delete);
			return (1);
		}
		prev_node = node_to_delete;
		node_to_delete = node_to_delete->next;
		i++;
	}
	return (-1);
}
