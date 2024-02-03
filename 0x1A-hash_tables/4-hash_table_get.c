#include "hash_tables.h"
#include <string.h>
/**
* hash_table_get - get value of certain key
*@ht: pointer to hashtable you search in
*@key: string key
*Return: string value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);
}
