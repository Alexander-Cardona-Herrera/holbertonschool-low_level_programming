#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: head
 *@str: string
 *Return: adrees new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nod = NULL;
	int len;

	new_nod = malloc(sizeof(list_t));

	if (new_nod == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	new_nod->str = strdup(str);
	new_nod->len = len;
	new_nod->next = *head;
	*head = new_nod;
	return (*head);
}
