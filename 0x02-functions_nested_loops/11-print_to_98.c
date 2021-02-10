#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - print natural number to 98
 *@n: natural number
 *Return: 0 (Success)
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
