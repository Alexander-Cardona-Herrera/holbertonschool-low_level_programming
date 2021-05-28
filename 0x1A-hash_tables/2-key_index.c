#include "hash_tables.h"

/**
 * key_index - gets the index
 * @key: const unsigned char.
 * @size: unsigned long int
 * Return: unsigned long int.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
