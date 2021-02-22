#include "holberton.h"

/**
 * _memcpy - copy the memory area
 * @dest: destination array
 * @src: source array
 * @n: an usigned integer
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;
	char *psrc = src;
	char *pdest = dest;

	for (c = 0; c < n ; c++)
	{
		pdest[c] = psrc[c];
	}
	return (pdest);
}
