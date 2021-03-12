#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all the numbers n
 * @n: number on the array
 * @separator: string to be printed betwen numbers
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list aux;

	va_start(aux, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(aux, int));
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			if (i <= n - 2)
				printf("%i%s", va_arg(aux, int), separator);

			else
				printf("%i", va_arg(aux, int));
		}
	}
	va_end(aux);

	printf("\n");
}
