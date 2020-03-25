#include "lists.h"
/**
 *sum_listint - sums all of data of a listint_t linked list
 *
 *@head: pointer to the first node in the list
 *
 *Return: returns counter value
 */
int sum_listint(listint_t *head)
{
	int counter = 0;

	listint_t *node_index = head;

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
