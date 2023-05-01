#include "lists.h"
/**
 *get_nodeint_at_index - a function that returns the nth node
 *of a listint_t linked list.
 *@head: a pointer to the head node of the linked list.
 *@index: the index of the node.
 *Return: a pointer to the matched node with the given index
 *otherwise NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;

	unsigned int i = 0;

	while (current_node)
	{
		if (i == index)
			return (current_node);
		current_node = current_node->next;
		i++;
	}
	return (NULL);
}



