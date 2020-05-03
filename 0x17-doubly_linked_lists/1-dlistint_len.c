#include "lists.h"
/**
 *dlistint_len - function that returns the number of
 *elements in a dlistint_t list
 *@h: header node pointer
 *
 *Return: the counter value after going
 *through all the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	for (; h != NULL; h = h->next, counter++)
		;
	return (counter);
}
