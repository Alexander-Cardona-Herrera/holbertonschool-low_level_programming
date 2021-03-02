#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - starting point
 * @argc: number of strings
 * @argv: strings
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%i\n", mul);
	return (0);
}
