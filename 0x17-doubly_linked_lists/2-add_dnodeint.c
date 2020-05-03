#include "lists.h"
#include <string.h>
/**
 *add_dnodeint - inserts a dlistint_t sized new node at the
 *begining of a dlistint_t list
 *@head: pointer to the header node
 *@n: int value
 *
 *Return: new node in success or NULL in failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
