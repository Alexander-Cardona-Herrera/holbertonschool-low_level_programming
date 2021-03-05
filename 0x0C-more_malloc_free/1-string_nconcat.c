#include "holberton.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate two strings
 * @n: an integer
 * @s1: an string
 * @s2: an string
 * Return: 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *aux;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	i++;

	for (k = 0; s2[k] != '\0'; k++)
	{
	}
	k++;

	if (n >= k)
		n = k;


	aux = malloc(i + (n * sizeof(*s2) + 1) * sizeof(*aux));

	if (!aux)
	{
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; j++)
		aux[j] = s1[j];

	for (j = 0; s1[j] != '\0' && j < n; j++)
		aux[i - 1 + j] = s2[j];

	aux[i + n] = '\0';

	return (aux);
}
