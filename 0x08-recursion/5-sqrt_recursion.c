#include "holberton.h"

/**
 * _sqrt_recursion - returns a natural square root
 * @n: an integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	
	if (n == 0)
		return (0);

	return (sqrt_compare (n , i));
}
int sqrt_compare(int n, int i)
{
	if( i * i == n)
		return (i);
	
	if (i * i > n)
		return (-1);
	
	return (sqrt_compare(n, i + 1));
}
