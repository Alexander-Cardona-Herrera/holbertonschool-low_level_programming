#include "holberton.h"

/**
 * _memset - prints buffer in hexa
 * @s: a pointer
 * @b: an array
 * @n: an usigned integer
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
