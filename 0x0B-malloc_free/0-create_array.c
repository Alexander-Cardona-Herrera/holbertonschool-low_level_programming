#include "holberton.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/**
 * create_array - create an array
 * @size: size of the array
 * @c: characters
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
	char *aux;
	unsigned int i;

	if (size == 0)
		return (NULL);

	aux = malloc(size * sizeof(char));

	if (!aux)
		return (NULL);

	for (i = 0; i < size; i++)
		aux[i] = c;

	return (aux);

}
