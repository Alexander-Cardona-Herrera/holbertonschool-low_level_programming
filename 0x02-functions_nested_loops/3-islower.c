#include "holberton.h"

/**
 *_islower - returns 1 if c is lowercase
 *Return: Always 0 (Success)
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1);
	}

	else
	{
		_putchar(0);
	}
	return (0);
}
