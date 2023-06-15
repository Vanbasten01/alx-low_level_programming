#include "lists.h"
/**
 *sum_dlistint - a function that returns the sum of all
 *the data (n) of a dlistint_t linked list.
 *@head: the head of the linked list.
 *Return: the sum of the data (n) otherwise 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *traverse = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (traverse)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}
	return (sum);
}



