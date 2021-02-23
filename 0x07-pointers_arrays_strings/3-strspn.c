#include "holberton.h"

/**
 * _strspn - count char of a string in a substring
 * @s: array type char
 * @accept: array type char
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int c, i, k;

	k = 0;
	for (c = 0; s[c] != '\0' && s[c] != 32; c++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[c] == accept[i])
			{
				k++;
			}
		}
	}
	return (k);
}
