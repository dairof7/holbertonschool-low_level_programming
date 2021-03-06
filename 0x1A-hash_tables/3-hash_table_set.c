#include "hash_tables.h"
/**
 * hash_table_set - add elemento to hash table
 * @ht: the has table
 * @key: the key
 * @value: value to add in the node
 * Return: 1 in succefull 0 in fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = NULL, *new = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		if (key != NULL && strlen(key) > 0)
			index = key_index((const unsigned char *)key, ht->size);
		else
			return (0);

		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				if (temp->value == NULL)
					return (0);
				return (1);
			}
			temp = temp->next;
		}
		new = malloc(sizeof(hash_node_t) * 1);
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		if (new->key == NULL  || new->value == NULL)
			return (0);
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}
	return (0);
}
