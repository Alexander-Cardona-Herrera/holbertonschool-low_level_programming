#include "holberton.h"

/**
 * leet - encodes
 * @s: an string
 * Return: char
 */

char *leet(char *s)
{
	int a;
	int b;
	char *g = "aAeEoOtTlL";
	char *v = "4433007711";

	for (a = 0 ; s[a] != '\0'; a++)
	{
		for (b = 0; g[b] != '\0'; b++)
		{
			if (s[a] == g[b])
			{
				s[a] = v[b];
			}
		}
	}
	return (s);
}
