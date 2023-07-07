#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to get index for
 * @size: size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
