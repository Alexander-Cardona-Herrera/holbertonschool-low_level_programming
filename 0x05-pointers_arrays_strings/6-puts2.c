#include "holberton.h"

/**
 * puts2 - print a string in reverse
 * @str: pointer of the string
 * Return: return a count
 */

void puts2(char *str)
{
	int c;

	for (c = 0 ; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}

	_putchar('\n');
}
