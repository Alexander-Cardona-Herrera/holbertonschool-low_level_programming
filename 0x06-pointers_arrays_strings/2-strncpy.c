#include "holberton.h"

/**
 * _strncpy - concatenate strings
 * @dest: destiny array
 * @src: to concatenate array
 * @n: variable
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0 ; c < n && src[c] != '\0' ; c++)
		dest[c] = src[c];

	for (; c < n; c++)
		dest[c] = '\0';

	return (dest);

}
