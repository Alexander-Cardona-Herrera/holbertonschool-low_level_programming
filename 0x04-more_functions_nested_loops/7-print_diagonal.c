#include "holberton.h"

/**
 * print_diagonal - prints n times diagonal
 * @n: the times fot '\' to print
 * Return: always 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
