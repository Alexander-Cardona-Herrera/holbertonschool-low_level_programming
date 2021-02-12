#include "holberton.h"

/**
 * more_numbers - prints more numbers
 * Return: always 0
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if ((a / 10) > 0)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
