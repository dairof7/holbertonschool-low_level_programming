#include "hash_tables.h"
/**
 * hash_table_delete - add elemento to hash table
 * @ht: the has table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t  *temp = NULL, *temp2 = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				temp2 = temp;
				free(temp->key);
				if (temp->value != NULL)
					free(temp->value);
				temp = temp->next;
				free(temp2);
			}
		}
	}
	free(ht->array);
	free(ht);
}
