#include "holberton.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/**
 * _calloc - puts 0 on empty spaces
 * @nmemb: an integer
 * @size: an integer
 * Return: 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *aux;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	aux = malloc(nmemb * size);

	if (!aux)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		aux[i] = 0;

	return (aux);
}
