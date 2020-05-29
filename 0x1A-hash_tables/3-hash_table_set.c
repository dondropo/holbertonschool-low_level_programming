#include "hash_tables.h"
/**
 * hash_table_set -  adds an element to the hash table
 * @ht: hash table ptr
 * @key:  key of the array
 * @value: associated value with the key
 *
 * Return: 1 on succes, 0 on fail case
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *var = NULL;
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;
	hash_node_t *aux_ptr = NULL;

	if (strlen(key) == 0 || key == NULL)
		return (0);
	if (ht == NULL || value == NULL)
		return (0);
	var = strdup(value);
	if (var == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = var;
			tmp->value = strdup(value);
			free(var);
			return (1);
		}
		tmp = tmp->next;
	}
	aux_ptr = malloc(sizeof(hash_node_t));
	if (aux_ptr == NULL)
		return (0);
	aux_ptr->key = strdup(key);
	aux_ptr->value = var;
	aux_ptr->next = ht->array[idx];
	ht->array[idx] = aux_ptr;
	return (1);
}
