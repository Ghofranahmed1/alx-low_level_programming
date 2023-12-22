#include "hash_tables.h"

/**
 *hash_table_create -  function that creates a hash table.
 *@size: size of hash table.
 *Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));
	if (table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n")
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
