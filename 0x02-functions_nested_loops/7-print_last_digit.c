#include "holberton.h"

/**
 *print_last_digit - prints yhe last digit of a number
 *@a: is an integer to evaluate
 *Return: n % 10 (Success)
 */

int print_last_digit(int a)
{
	int n;

	n = a % 10;

	if (n < 0)
	{
		n = -n;
	}

	_putchar(n + '0');
	return (n % 10);
}
