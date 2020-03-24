#include "lists.h"

/**
 *print_listint - prints all the elements of a list_t list
 *
 *@h: node refferencing the struct
 *
 *Return: returns the counters value
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
