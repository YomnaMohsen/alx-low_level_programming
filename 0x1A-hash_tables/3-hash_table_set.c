#include "hash_tables.h"
#include <string.h>

int find_key(hash_node_t *curr, const char *key,  char *value);
/**
 * hash_table_set - add or update key value
 * @ht: hash table that you add or update pair to
 * @key: key, cannot be empty string
 * @value: is the value associated with the key
 * Return: 1 on success 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *curr, *hnode;
	char *val;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	val = strdup(value);
	if (!val)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	curr = ht->array[index];/* pointer to null if empty or nodes*/
	/*no key exists (whether there other nodes at same index)*/
	/*or empty slot create node with key*/
	if (find_key(curr, key, val) == 0)
	{
		hnode = malloc(sizeof(hash_node_t));
		if (hnode == NULL)
		{
			free(val);
			return (0);
		}
		hnode->key = strdup(key);
		if (hnode->key == NULL)
		{
			free(val);
			free(hnode);
			return (0);
		}
		hnode->value = val;
		/*collision ,add key at beginning or empty slot add new node*/
		hnode->next = ht->array[index];
		ht->array[index] = hnode;
	}
	return (1);
}
/**
 *find_key - checks whether key exist or not and update value if found
 *@curr: pointer to curr bucket
 * @key: string key
 * @value: string value
 * Return: 1 if found 0 if not found or fail to update
*/
int find_key(hash_node_t *curr, const char *key,  char *value)
{
	while (curr)
	{
		if (strcmp(curr->key, key) == 0) /*update value of same key (key exists)*/
		{
			free(curr->value);
			curr->value = value;
			return (1);
		}
		curr = curr->next;
	}
	return (0);
}
