#include "lists.h"
/**
 *add_node_end - adds a new node at the end
 *@head: first node
 *@str: used strings
 *
 *Return: returns lst value || returns c
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lst;
	list_t *lst2;

	lst = malloc(sizeof(list_t));

	if (lst == NULL)
	{
		return (NULL);
	}
	lst->len = _strlen(str);
	lst->str = strdup(str);
	lst->next = NULL;
	if (*head == NULL)
	{
		*head = lst;
	}
	else
	{
		lst2 = *head;
		while (lst2->next != NULL)
		{
			lst2 = lst2->next;
		}
		lst2->next = lst;
	}
	return (lst);
}
/**
 * _strlen - function that returns the length of a string.
 * @s : character pointer
 * Return: returns value of i
 */
int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
