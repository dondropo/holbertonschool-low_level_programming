#include "lists.h"
/**
 *free_listint - frees listint_t list
 *
 *@head: pointer
 *
 *Return: none
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		if (head->next)
		{
			free(head->next);
		}
		free(head);
	}
}
