#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @key: the key
 * @size:  size of the array of the hash table
 *
 * Return: the index of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash;

	hash = hash_djb2(key);
	idx = hash % size;
	return (idx);
}
