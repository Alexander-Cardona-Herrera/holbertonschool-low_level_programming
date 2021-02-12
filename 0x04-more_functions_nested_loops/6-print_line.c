#include "holberton.h"

/**
 * print_line - prints n times '_'
 * @n: the times fot 'n? to print
 * Return: always 0
 */
void print_line(int n)
{
	int a;

	for (a = n; a > 0; a--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
