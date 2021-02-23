#include "holberton.h"

/**
 * _strpbrk - search a string
 * @s: array type char
 * @accept: array type char
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int c, i;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[c] == accept[i])
			{
				return (s + c);
			}
		}
	}
	return (0);
}
