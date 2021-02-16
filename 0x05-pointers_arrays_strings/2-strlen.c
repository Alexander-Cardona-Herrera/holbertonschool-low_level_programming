#include "holberton.h"

/**
 * _strlen - returns the lenght of a string
 * @s: size of string
 * Return: return a count
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; c++)
	{
		s++;
	}
	return (c);
}
