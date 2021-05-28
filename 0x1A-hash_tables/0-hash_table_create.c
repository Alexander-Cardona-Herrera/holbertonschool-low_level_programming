#include "hash_tables.h"

/**
 * hash_table_create - check the code for Holberton School students.
 * @size: unsgined
 * Return: hash_table_t.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *more_clap = NULL;
	unsigned long int i = 0;

	more_clap = malloc(sizeof(hash_table_t));
	if (!more_clap)
		return (NULL);

	more_clap->size = size;

	more_clap->array = malloc(size * sizeof(hash_node_t *));
	if (!more_clap->array)
		return (NULL);

	while (i < size)
	{
		more_clap->array[i] = NULL;
		i++;
	}

	return (more_clap);
}
