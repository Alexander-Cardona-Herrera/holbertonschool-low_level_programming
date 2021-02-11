#include "holberton.h"

/**
 * _isupper - returns 1 if is uppercase, 0 otherwise.
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
