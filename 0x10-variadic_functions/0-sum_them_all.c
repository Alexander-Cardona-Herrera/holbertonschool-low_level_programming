#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the numbers n
 * @n: number on the array
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;

	if (n != 0)
	{
		va_list aux;
		va_start(aux, n);

		for (i = 0; i < n; i++)
		{
			total += va_arg(aux, int);
		}
		va_end(aux);

		return (total);
	}

	return (0);
}
