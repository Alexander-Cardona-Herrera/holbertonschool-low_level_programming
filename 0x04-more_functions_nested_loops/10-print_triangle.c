#include "holberton.h"

/**
 * print_triangle - prints triangles of n size
 * @size: the size of the triangle
 * Return: always 0
 */
void print_triangle(int size)
{
	int fil, col, a, b, c;

	fil = size;
	col = size - 1;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (a = 1; a <= fil; a++)
		{
			for (b = 1; b <= col; b++)
				_putchar(' ');
			col--;
			for (c = 1; c <= a ; c++)
				_putchar('#');
		_putchar('\n');
		}
	}
}
