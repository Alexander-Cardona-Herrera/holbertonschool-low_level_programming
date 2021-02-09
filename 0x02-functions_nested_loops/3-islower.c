#include "holberton.h"

/**
 *_islower - returns 1 if c is lowercase
 *@c: is a lowercase letter
 *Return: Always 0 (Success)
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}
