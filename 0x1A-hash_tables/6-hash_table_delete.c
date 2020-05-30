#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to the hash table
 *
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp, *next;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			next = tmp;
			free(next->value);
			free(next->key);
			tmp = tmp->next;
			free(next);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
