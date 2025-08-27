#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size - the size of the array
 *
 * Return: NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{  
	unsigned long int i = 0;
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);

		if (table->array == NULL)
		{
			free(table);
		return (NULL);
		}

		while (i < size)
		{
			table->array[i] = NULL;
			i++;
		}
		 table->size = size;
		return (table);
}


