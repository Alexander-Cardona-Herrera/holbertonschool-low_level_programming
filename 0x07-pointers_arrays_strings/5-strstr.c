#include "holberton.h"

/**
 * _strstr - locates a string on a string
 * @haystack: array type char
 * @needle: array type char
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int c, i;

	for (c = 0; haystack[c] != '\0'; c++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[c] == needle[i])
			{
				return (needle);
			}
		}
	}
	return (0);
}
