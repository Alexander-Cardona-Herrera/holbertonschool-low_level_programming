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
	char *s;

	va_list aux;

	va_start(aux, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(aux, char*);

			if (s == NULL)
				printf("(nil)");

			else
				printf("%s", s);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(aux, char*);

			if (s == NULL && i < n - 1)
				printf("(nil)%s", separator);

			else if (i < n - 1)
				printf("%s%s", s, separator);

			else if (s == NULL && i == n - 1)
				printf("(nil)");

			else
				printf("%s", s);
		}
	}
	va_end(aux);
	printf("\n");
}
