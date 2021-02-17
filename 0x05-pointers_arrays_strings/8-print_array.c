#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print a array
 * @a: pointer of the array
 * @n: size of array
 * Return: return a count
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0 ; c < n ; c++)
	{
		if (c < n - 1)
			printf("%d, ", a[c]);
		else
			printf("%d\n", a[c]);
	}
}
