#include "holberton.h"

/**
 * rev_string - print a string in reverse
 * @s: pointer of the string
 * Return: return a count
 */

void rev_string(char *s)
{
	char aux[1000];
	int a, b;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		aux[a] = s[a];
	}
	aux[a] = 0;
	a--;
	for (b = 0 ; a >= 0 ; a--)
	{
		s[b] = aux[a];
		b++;
	}
}
