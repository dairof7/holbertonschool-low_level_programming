#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t) * 1);
	if (hashtable == NULL)
		return NULL;


	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
	{
		free (hashtable);
		return NULL;
	}

	return hashtable;
}