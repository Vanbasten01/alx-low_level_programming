#include "lists.h"
/**
 *free_dlistint - a function that frees a linked list.
 *@head: the head of the lnked list.
 *Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_head;

	while (head)
	{
		new_head = head->next;
		free(head);
		head = new_head;
	}
}


