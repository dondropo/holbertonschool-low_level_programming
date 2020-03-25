#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 *@head: pointer to the first node in the list
 *@index: index of the node to be got
 *
 *Return: returns node_index value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	listint_t *node_index = head;

	if (head)
	{
		while (counter < index)
		{
			if (head == NULL)
			{
				return (NULL);
			}
			node_index = head->next;
			head = node_index;
			counter++;
		}
	}
	return (node_index);
}
