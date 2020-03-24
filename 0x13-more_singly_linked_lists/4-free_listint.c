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
		free_listint(head->next);
		free(head);
	}
}
