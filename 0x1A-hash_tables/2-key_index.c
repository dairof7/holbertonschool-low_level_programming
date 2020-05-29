#include "hash_tables.h"
/**
 * key_index - create a table
 * @key: the key
 * @size: size of the table
 * Return: hash key normalized
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0 || key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
