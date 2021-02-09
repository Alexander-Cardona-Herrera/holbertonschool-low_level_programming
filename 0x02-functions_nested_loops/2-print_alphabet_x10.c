#include "holberton.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{
	char alpha;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
