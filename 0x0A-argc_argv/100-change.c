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
	int value;
	int sum;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("0\n");
	}

	sum = change(value);

	printf("%i\n", sum);

	return (0);
}

/**
 * change - change the value
 * @A: int
 * Return: On success 1.
 */
int change(int A)
{
	int c;

	for (c = 0; A > 0; c++)
	{
		if (A - 25 >= 0)
			A = A - 25;

		else if (A - 10 >= 0)
			A = A - 10;

		else if (A - 5 >= 0)
			A = A - 5;

		else if (A - 2 >= 0)
			A = A - 2;

		else if (A - 1 >= 0)
			A = A - 1;
	}

	return (c);
}
