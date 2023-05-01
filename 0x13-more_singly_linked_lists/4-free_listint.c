#include "lists.h"
/**
 *free_listint - a function that frees the memory allocated
 *@head: a pointer to the head of the linked list.
 *Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *previous_node = head;



	while (current_node != NULL)
	{
		current_node = current_node->next;
		free(previous_node);
		previous_node = current_node;
	}
}
