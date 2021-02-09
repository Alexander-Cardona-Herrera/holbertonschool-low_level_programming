#include "holberton.h"

/**
 *_abs - absolut value of a number
 *@n: is an integer to evaluate
 *Return: n % 10 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	return (0);
}
