#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key or value should be stored in the array of
 * the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	return (hash % size);

}
