#include "lists.h"
/**
 *list_len - funct that returns the number
 *@h: pointer refferencing a node
 *Return: returns the counters value
 */
size_t list_len(const list_t *h)

{
	size_t linked_size = 0;

	while (h != NULL)
	{
		linked_size++;
		h = h->next;

	}
	return (linked_size);
}
