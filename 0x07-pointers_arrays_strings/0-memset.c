#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer
 * @b: an array
 * @n: an usigned integer
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
