#include "holberton.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/**
 * malloc_checked - memory for a unsigned int
 * @b: adress
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	int *aux;

	aux = malloc(b);

	if (aux == 0)
		exit(98);

	return (aux);
}
