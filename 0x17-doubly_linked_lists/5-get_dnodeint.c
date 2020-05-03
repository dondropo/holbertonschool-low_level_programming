#include "lists.h"
/**
 *get_dnodeint_at_index - Adds a node at the index of a dlistint_t list
 *@head: pointer to head of the list
 *@index: index of the node to be got
 *
 *Return: node_index in succes or NULL if failed.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	dlistint_t *node_index = head;

	if (head == NULL)
	{
		return (NULL);
	}
	if (head)
	{
		while (counter < index)
		{
			node_index = head->next;
			head = node_index;
			counter++;
		}
	}
	return (node_index);
}
