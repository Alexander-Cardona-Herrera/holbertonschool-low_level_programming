#include "hash_tables.h"

/**
 * hash_table_set - gets the index.
 * @ht: hash table.
 * @key: const unsigned char.
 * @value: unsigned long int.
 * Return: int.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *the_girl = NULL;
	hash_node_t *head = NULL;

	if (!ht || !key)
		return (0);

	index = hash_djb2((const unsigned char *)key) % sizeof(ht);

	the_girl = malloc(sizeof(hash_node_t));
	if (the_girl == NULL)
		return (0);

	the_girl->key = strdup(key);
	the_girl->value = strdup(value);

	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			head->value = the_girl->value;
			return (1);
		}
		head = head->next;
	}

	the_girl->next = ht->array[index];
	ht->array[index] = the_girl;

	return (1);
}
