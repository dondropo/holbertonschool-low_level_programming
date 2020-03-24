#include "lists.h"
/**
 *add_nodeint - adds a new node at end of list_t
 *
 *@head: start of the list
 *@n:end of the list
 *
 *Return: returns new_nde value
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nde;

	new_nde = malloc(sizeof(listint_t));

	if (new_nde == NULL)
	{
		return (NULL);
	}
	new_nde->n = n;
	new_nde->next = *head;
	*head = new_nde;
	return (new_nde);
}
