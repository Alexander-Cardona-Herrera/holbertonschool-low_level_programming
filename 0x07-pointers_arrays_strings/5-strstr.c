#include "holberton.h"

/**
 * _strstr - locates a string on a string
 * @haystack: array type char
 * @needle: array type char
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	const char *a = haystack, *b = needle;

	for (;;)
	{
		if (!*b)
			return ((char *) haystack);
		if (!*a)
			return (0);
		if (*a++ != *b++)
		{
			a = ++haystack;
			b = needle;
		}
	}
}
