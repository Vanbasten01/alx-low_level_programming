#include "lists.h"
/**
 *sum_listint -  a function that returns the sum of all the data (n) of
 *a listint_t linked list.
 *@head: a pointer to the head node of the linked list.
 *Return: the sum of all date (n) otherwise 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	if (head == NULL)
		return (0);
	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}


