#include "holberton.h"

/**
 * _strncat - concatenate strings
 * @dest: destiny array
 * @src: to concatenate array
 * @n: variable
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, c;

	for (c = 0 ; dest[c] != '\0' ; c++)
	{
	}
	for (a = 0; a < n && src[a] != '\0'; a++)
	{	
		dest[c + a] = src[a];
	}
	dest[c + a] = '\0';
	return (dest);
}
