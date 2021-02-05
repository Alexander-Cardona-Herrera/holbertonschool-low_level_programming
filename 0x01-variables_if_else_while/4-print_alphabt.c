#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if ((lower == 'q') && (lower == 'e'))
		{
		lower++;
		}
		putchar(lower);
	}

	putchar('\n');
	return (0);
}
