#include "holberton.h"

/**
 * reverse_array - reverse array
 * @n: an integer
 * @a: an array
 * Return: new array.
 */

void reverse_array(int *a, int n)
{
	int c = 0;
	int temp;

	while (c < n)
	{
		temp = a[c];
		a[c] = a[n];
		a[n] = temp;
		c++;
		n--;
	}
}
