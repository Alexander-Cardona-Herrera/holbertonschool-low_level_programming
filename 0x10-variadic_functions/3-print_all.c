#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all the strings n
 * @format: type of caracter matching
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *p = "";
	char *q = ", ";

	formatos imp[] = {
		{"c", caracter},
		{"i", entero},
		{"f", flotante},
		{"s", linea},
		{NULL, NULL},
	};

	va_list aux;

	va_start(aux, format);

	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (imp[j].s != NULL)
		{
			if (format[i] == imp[j].s[0])
			{
				printf("%s", p);
				imp[j].f(aux);
				p = q;
			}
			j++;
		}
		i++;
	}
	va_end(aux);
	printf("\n");
}
/**
 * caracter - print all the characters
 * @aux: va_list parameter
 * Return: nothing.
 */
void caracter(va_list aux)
{
	int z;

	z = va_arg(aux, int);
	printf("%c", z);
}
/**
 * entero - print all the integers
 * @aux: va_list parameter
 * Return: nothing.
 */
void entero(va_list aux)
{
	int z;

	z = va_arg(aux, int);
	printf("%d", z);
}
/**
 * flotante - print all the floats
 * @aux: va_list parameter
 * Return: nothing.
 */
void flotante(va_list aux)
{
	double z;

	z = va_arg(aux, double);
	printf("%f", z);
}
/**
 * linea - print all the strings
 * @aux: va_list parameter
 * Return: nothing.
 */
void linea(va_list aux)
{
	char *z;

	z = va_arg(aux, char*);

	if (z == NULL)
		z = "(nil)";

	printf("%s", z);
}
