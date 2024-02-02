#include "hash_tables.h"
/**
 * key_index -  gives index of the key
 * @key: string key
 * @size: size of array of hash table
 * Return: int index of key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;

index = hash_djb2(key);
index = index % size;
return (index);
}
