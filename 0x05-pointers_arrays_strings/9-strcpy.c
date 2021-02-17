#include "holberton.h"

/**
 * _strcpy - print a string in reverse
 * @dest: arrays
 * @src: arrays
 * Return: return a count
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0 ; src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = 0;

	return (dest);
}
