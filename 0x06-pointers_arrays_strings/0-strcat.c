#include "holberton.h"

/**
 * _strcat - concatenate strings
 * @dest: destiny array
 * @src: to concatenate array
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int c, n;
	char *start = dest;

	for (c = 0 ; start[c] != '\0' ; c++)
	{
	}
	for (n = 0 ; src[n] != '\0' ; n++)
		start[c + n] = src[n];

	start[c + n] = '\0';

	return (start);
}
