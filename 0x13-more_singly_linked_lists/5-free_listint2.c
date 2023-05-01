#include "lists.h"
/**
 *free_listint2 - a function that frees the memory allocated.
 *@head: a pointer to a pointer that pointes to the head of
 *the linked list.
 *Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *previous_node;

	if (head == NULL || *head == NULL)
		return;

	current_node = *head;
	previous_node = *head;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		free(previous_node);
		previous_node = current_node;
	}
	*head = NULL;
}
