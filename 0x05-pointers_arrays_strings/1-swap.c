#include "holberton.h"

/**
 * swap_int - change the values of two integers
 * @a: an integer
 * @b: an integer
 * return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
