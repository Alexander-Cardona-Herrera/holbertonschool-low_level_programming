#include "holberton.h"

/**
 * _atoi - convert strings into integer
 * @s: string
 * Return: return a count
 */

int _atoi(char *s)
{
	int a = 0;
	int sign = 1;
	int res = 0;

	if (s[0] == '-')
	{
		sign = -1;
			for (a++; s[a] != '\0' ; a++)
				res = res * 10 + s[a] - '0';

		return (sign * res);
	}

	else
	{
		for (a = 0 ; s[a] != '\0' ; a++)
			res = res * 10 + s[a] - '0';

		return (res);
	}
}
