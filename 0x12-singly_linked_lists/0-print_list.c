#include "lists.h"
/**
 *print_list - prints all elements of a list_t list
 *@h: pointer refferencing a node
 *
 *Return: returns the counter value
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			counter++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
