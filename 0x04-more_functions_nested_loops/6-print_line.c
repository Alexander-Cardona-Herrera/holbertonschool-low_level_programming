#include "holberton.h"

/**
 * print_line - prints n times '_'
 * @a: counter
 * @n: the times fot 'n? to print
 * Return: always 0
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
