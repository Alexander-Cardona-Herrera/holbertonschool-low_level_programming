#include "holberton.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/**
 * array_range - range
 * @min: an integer
 * @max: an integer
 * Return: 0.
 */
int *array_range(int min, int max)
{
	int *aux;
	int i, j;

	if (min > max)
		return (NULL);

	i = (max - min + 1);

	aux = malloc(i * sizeof(*aux));

	if (!aux)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		aux[j] = min++;
	}
	return (aux);
}
