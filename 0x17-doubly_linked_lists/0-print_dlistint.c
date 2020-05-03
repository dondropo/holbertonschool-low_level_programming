#include "lists.h"
/**
 *print_dlistint - print all elements inside dlistnt_t list
 *@h: header node pointer
 *
 *Return: returns the counter value if it meet
 *h != NULL condition
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	for (; h != NULL; h = h->next, counter++)
	{
		printf("%d\n", h->n);
	}
	return (counter);
}
