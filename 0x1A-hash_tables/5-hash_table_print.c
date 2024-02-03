#include "hash_tables.h"
#include <stdio.h>
/**
*hash_table_print - print hash table pairs
* @ht: pointer to hash table
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				if (flag)
				{
					printf(", ");
				}
				printf("'%s': '%s'", curr->key, curr->value);
				flag = 1;
				curr = curr->next;
			}
		}
	}
	printf("}\n");
}
