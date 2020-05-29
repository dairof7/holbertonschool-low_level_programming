#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: the size
 * Return: a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hashtable = NULL;

	if (size == 0)
		return (NULL);

	hashtable = calloc(1, sizeof(hash_table_t) * 1);
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;

	hashtable->array = calloc(size, sizeof(hash_node_t **) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	return (hashtable);
}
