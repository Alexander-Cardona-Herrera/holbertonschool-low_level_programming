#include "holberton.h"

/**
 * _strcmp - comparate strings
 * @s1: string
 * @s2: string
 * Return: comp
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
