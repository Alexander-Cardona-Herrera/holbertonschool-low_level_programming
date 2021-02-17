#include "holberton.h"

/**
 * puts_half - print a string in reverse
 * @str: pointer of the string
 * Return: return a count
 */

void puts_half(char *str)
{
	int c;

	for (c = 0 ; str[c] != '\0'; c++)
	{
	}

	if (c % 2 == 0)
	{
		for (c /= 2; str[c] != '\0'; c++)
		{
			_putchar(str[c]);
		}
		_putchar('\n');
	}
	else
	{
		c++;
		for (c /= 2 ; str[c] != '\0'; c++)
		{
			_putchar(str[c]);
		}
	_putchar('\n');
	}
}
