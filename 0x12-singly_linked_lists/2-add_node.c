#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of list_t
 * @head: first node
 * @str: string
 * Return: returns the address of the node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t)); /* Reserve memory*/

	if (new_node == NULL)
		return (NULL);
	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
/**
 * _strlen - function that returns the length of a string.
 * @s : character pointer
 * Return: returns value of i
 */
int _strlen(const char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
