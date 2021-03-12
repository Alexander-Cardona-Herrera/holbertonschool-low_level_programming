#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all the strings n
 * @n: number on the array
 * @separator: string to be printed betwen numbers
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list aux;

	va_start(aux, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(aux, char*));
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			if (i <= n - 2)
				printf("%s%s", va_arg(aux, char*), separator);

			else
				printf("%s", va_arg(aux, char*));
		}
	}
	va_end(aux);

	printf("\n");
}
