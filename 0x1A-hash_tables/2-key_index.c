#include "hash_tables.h"
/**
 *key_index -  function that gives you the index of a key.
 *@key: the key
 *@size: the size of the array of the hash table
 *Return: index  which the key/value pair stored in the array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, sub_index;

	sub_index = hash_djb2(key);
	index = sub_index % size;
	return (index);
}
