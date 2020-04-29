#include "lists.h"

/**
 * check_cycle - function in that checks if a singly linked list has a cycle
 * @list: pointer to listint_t linked list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = head;

	while (head && tmp)
	{
		tmp = tmp->next;
		if (tmp == head)
			return (1);
		if (tmp == NULL)
			return (0);
		tmp = tmp->next;
		head = head->next;
	}
	return (0);

}