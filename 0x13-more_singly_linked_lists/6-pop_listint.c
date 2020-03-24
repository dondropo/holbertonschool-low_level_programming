#include "lists.h"
/**
 *pop_listint - deletes a head node from list_t list
 *
 *@head: pointer pointing to list head
 *
 *Return: returns delete value
 */
int pop_listint(listint_t **head)
{
	int delete;

	listint_t *aux;

	if (!(*head && head))
	{
		return (0);
	}
	delete = (*head)->n;
	aux = *head;
	*head = aux->next;
	free(aux);
	return (delete);
}
