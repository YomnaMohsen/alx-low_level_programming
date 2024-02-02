#include "hash_tables.h"
#include <string.h>
/**
 * 
 * 
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
 unsigned long int index;

 hash_node_t *hnode = malloc(sizeof(hash_node_t));

 if (key == NULL)
 {
  return (0);
 }
 hnode->key = malloc(strlen(key) + 1);
 hnode->value = malloc(strlen(value) + 1);
 hnode->next = NULL;
 strcpy(hnode->key, key);
 strcpy(hnode->value, value);
 index = hash_djb2(key);
 index %= ht->size;
 if (ht->array[index] != NULL)
 {
  ht->array[index] = hnode;
 }
 

}