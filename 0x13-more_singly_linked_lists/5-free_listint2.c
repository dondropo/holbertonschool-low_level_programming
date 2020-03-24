#include "lists.h"
/**
 *free_listint2 - frees listint_t list
 *
 *@head: pointer poinitng to head
 *
 *Return: none
 */
void free_listint2(listint_t **head)
{
	if (head)
	{
		if (*head)
		{
		free_listint2(&(*head)->next);
		}
		free(*head);
		*head = NULL;
	}
}
