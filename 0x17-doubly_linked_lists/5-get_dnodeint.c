#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t list
 *@head: pointer to head of the list
 *@index: new node of the list
 *
 *Return: NULL if the node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	dlistint_t *node_index = head;

	if (head)
	{
		if (node_index == NULL)
		{
			return (NULL);
		}
		else
		{
			while (node_index != NULL && counter < index)
			{
				node_index = head->next;
				head = node_index;
				counter++;
			}
		}
	}
	return (node_index);
}
