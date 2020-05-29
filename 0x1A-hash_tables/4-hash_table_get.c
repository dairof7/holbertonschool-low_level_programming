#include "hash_tables.h"
/**
 * hash_table_get - add elemento to hash table
 * @ht: the has table
 * @key: the key
 * Return: the value or Null if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			return (ht->array[index]->value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
