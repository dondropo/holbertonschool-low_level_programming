#include "lists.h"
/**
 *sum_dlistint - returns the sum of all the data (n)
 *of a dlistint_t list
 *@head: pointer to the head of the list
 *
 *Return: sum of all data in succes
 *0 if fail
 */
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;

	dlistint_t *node_index = head;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		counter = counter + head->n;
		node_index = head->next;
		head = node_index;
	}
	return (counter);
}
