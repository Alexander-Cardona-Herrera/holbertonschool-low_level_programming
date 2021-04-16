#include "lists.h"

/**
 *list_len - returns the number of elements
 *@h: list
 *Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h ; i++)
	{
		h = h->next;
	}
	return (i);
}
