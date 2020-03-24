#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of listint_t
 *
 *@head: double pointer
 *@n: const int
 *
 *Return: returns end_nde value
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_nde, *ptr;

	end_nde = malloc(sizeof(listint_t));

	if (end_nde == NULL)
	{
		return (NULL);
	}
	end_nde->n = n;
	end_nde->next = NULL;
	if (*head == NULL)
	{
		*head = end_nde;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = end_nde;
	}
	return (end_nde);
}
