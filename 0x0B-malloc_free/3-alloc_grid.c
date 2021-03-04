#include "holberton.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/**
 * alloc_grid - memory for a grid
 * @width: widht of the grid
 * @height: height of the grid
 * Return: 0.
 */
int **alloc_grid(int width, int height)
{
	int **aux;
	int i, j;

	if (width <= 0)
		return (0);

	if (height <= 0)
		return (0);

	aux = (int **)malloc(height * sizeof(int *));

	if (!aux)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		aux[i] = (int *)malloc(width * sizeof(int));
			if (!aux[i])
			{
				free(aux);
				for (j = 0; j <= i; j++)
				{
					free(aux[j]);
				}
				return (0);
			}
		for (j = 0; j < width; j++)
			aux[i][j] = 0;
	}
	return (aux);
}
