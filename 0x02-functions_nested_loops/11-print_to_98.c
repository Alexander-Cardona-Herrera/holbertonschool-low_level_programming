#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - print natural number to 98
 *@n: natural number
 *Return: 0 (Success)
 */

void print_to_98(int n)
{
	for (n = 0; n < 98; n++)
	{
		if (n <= 98)
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
	}
}
