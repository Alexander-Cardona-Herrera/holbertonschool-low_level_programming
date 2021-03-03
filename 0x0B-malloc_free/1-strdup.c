#include "holberton.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/**
 * _strdup - copy and malloc
 * @str: an array
 * Return: 0.
 */
char *_strdup(char *str)
{
	char *aux;
	int i;
	int j;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;

	aux = malloc(i * sizeof(char));

	if (!aux)
		return (NULL);

	for (j = 0; j < i; j++)
		aux[j] = str[j];

	return (aux);
}
