#include "holberton.h"

/**
 * _isdigit - returns 1 if is uppercase, 0 otherwise.
 *@c: an ASCII character
 * Return: 1 or 0
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
