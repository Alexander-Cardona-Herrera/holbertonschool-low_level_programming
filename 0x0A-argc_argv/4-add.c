#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - starting point
 * @argc: number of strings
 * @argv: strings
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int b;
	int add = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		b = (aux(argv[i]));

		if (b == 1)
		{
			printf("Error\n");
			return (1);
		}

		else
			add += atoi(argv[i]);
	}
	printf("%i\n", add);
	return (0);
}


/**
 * aux - check if is digit
 * @s: strings
 * Return: On success 1.
 */
int aux(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (isdigit(s[c]) == 0)
			return (1);
	}
	return (0);
}
