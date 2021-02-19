#include "holberton.h"

/**
 * cap_string - Cammel Cap
 * @s: an string
 * Return: char
 */

char *cap_string(char *s)
{
	int a;
	int b;
	char g[] = {',', ';', '.', '!', '?', '"', '(',
		')', '{', '}', ' ', '\t', '\n'};

	for (a = 0 ; s[a] != '\0'; a++)
	{
		for (b = 0; g[b] != '\0'; b++)
		{
			if (s[a] == g[b] && s[a + 1] >= 'a' && s[a + 1] <= 'z')
				s[a + 1] = s[a + 1] - 32;
		}
	}
	return (s);
}
