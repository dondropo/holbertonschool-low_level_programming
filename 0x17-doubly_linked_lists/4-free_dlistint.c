#include "lists.h"
/**
 *free_dlistint - frees a dlistint_t list
 *@head: pointer to the list head
 *
 *Return: none
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head != NULL)
		{
			head = head->next;
			free(head);
		}
	}
}
