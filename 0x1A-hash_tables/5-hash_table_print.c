#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to the hash table
 *
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i = 0, flag;

	if (ht == NULL)
		return;

	printf("{");
	flag = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag)
				printf(", ");
			printf("\'%s\': \'%s\'", tmp->key, tmp->value);
			tmp = tmp->next;
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
