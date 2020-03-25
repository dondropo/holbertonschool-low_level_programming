#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a node in a given position
 *
 *@head: pointer to first node
 *@idx: index of the list
 *@n: value to be assigned to the new node
 *
 *Return: returns the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 1;

	listint_t *node_index = *head;
	listint_t *insert;
	listint_t *h = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (counter < idx)
	{
		node_index = (*head)->next;
		*head = node_index;
		++counter;
	}
	insert = malloc(sizeof(listint_t));

	if (insert == NULL)
	{
		return (NULL);
	}
	insert->n = n;
	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
	}
	else
	{
		insert->next = (*head)->next;
		(*head)->next = insert;
		*head = h;
	}
	return (insert);
}
