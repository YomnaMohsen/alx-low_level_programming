#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of hash table
 * Return: pointer to newly created table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *htable = malloc(sizeof(hash_table_t));

	if (htable == NULL)
	{
		return (NULL);
	}
	htable->size = size;
	htable->array = calloc(htable->size, sizeof(hash_node_t *));
	if (htable->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < htable->size; i++)
	{
		htable->array[i] = NULL;
	}
	return (htable);
}

