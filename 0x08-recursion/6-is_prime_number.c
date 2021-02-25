#include "holberton.h"

/**
 * is_prime_number - evaluate if a number is prime
 * @n: an integer
 * Return: int
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	return (prime_compare(n, i));
}
/**
 * prime_compare - evaluate the modular
 * @n: an integer
 * @i: an integer
 * Return: int
 */
	int prime_compare(int n, int i)
{
	if (n % i == 0 && n == i)
		return (1);

	if (n % i == 0 && n != i)
		return (0);

	return (prime_compare(n, i + 1));
}

