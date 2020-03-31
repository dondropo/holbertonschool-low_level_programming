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
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
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
