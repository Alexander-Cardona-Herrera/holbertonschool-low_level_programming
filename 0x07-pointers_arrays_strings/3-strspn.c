#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: array type char
 * @accept: array type char
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	int i = 0;

	for (; s[c] != '\0' && s[c] != ' ';)
	{
		c++;
	}
	for (; accept[i] != '\0' && accept[i] != ' ';)
	{
		i++;
	}
	if (i > c)
	{
		return (i - 1);
	}
	else
	{
		return (c - 1);
	}
}
