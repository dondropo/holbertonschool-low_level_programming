#include "lists.h"
#include <string.h>
/**
 *add_dnodeint_end - Adds a node at the end of a dlistint_t list.
 *@head: Pointer to the header node.
 *@n: constant int value into a dlistint_t list.
 *
 *Return: new node in succes, NULL if fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
