#include "lists.h"
/**
 *listint_len - reurns the number of elements in a linked listint_list
 *
 *@h: node refferencing the struct
 *
 *Return: returns  the counters value
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
