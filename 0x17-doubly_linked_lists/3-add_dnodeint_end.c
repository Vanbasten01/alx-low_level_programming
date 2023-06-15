#include "lists.h"
/**
 *add_dnodeint_end - a function that adds a new node at
 *the end of a dlistint_t list.
 *@head: the head of linked list.
 *@n: integer.
 *Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *last, *new;


	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next)
		last = last->next;

	last->next = new;
	new->prev = last;
	return (new);
}

