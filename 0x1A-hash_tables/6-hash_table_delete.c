#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delete entire hashtable
 * @ht: pointr to hash table
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *tmp;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				tmp = curr->next;
				free(curr->key);
				free(curr->value);
				free(curr);
				curr = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
