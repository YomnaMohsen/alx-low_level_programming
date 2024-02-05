#include "hash_tables.h"
#include <stdlib.h>
/**
 * 
 * 
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
                free(curr->key);
                free(curr->value);
                tmp = curr->next;
                free(curr);
                curr = tmp;
            }
        }
    }
    free(ht->array);
    free(ht);
}