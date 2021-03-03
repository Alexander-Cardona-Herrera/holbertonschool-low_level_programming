#include "holberton.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/**
 * str_concat - concatenate two strings
 * @s1: an string
 * @s2: an string
 * Return: 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *aux;
	int i, j, k;

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

	aux = malloc((i + k + 1) * sizeof(char));

	if (!aux)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		aux[j] = s1[j];

	for (j = 0; s2[j] != '\0'; j++)
		aux[i - 1 + j] = s2[j];

	return (aux);
}
