#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: a pointer
 * @c: a character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0' && *s != c;)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
