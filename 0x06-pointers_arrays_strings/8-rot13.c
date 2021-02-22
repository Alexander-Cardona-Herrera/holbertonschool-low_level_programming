#include "holberton.h"

/**
 * rot13 - encodes
 * @s: an string
 * Return: char
 */

char *rot13(char *s)
{
	int a;
	int b;
	char *g = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char *v = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

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
