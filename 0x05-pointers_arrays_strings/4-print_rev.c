#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: pointer of the string
 * Return: return a count
 */

void print_rev(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
	}
	a--;
	for (a-- ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
