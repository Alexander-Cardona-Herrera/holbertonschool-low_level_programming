#include <stdio.h>

/**
 *main - entry point
 *Return: 0 (Success)
 */
int main(void)
{
	int n, m = 0;

	for (n = 0; n < 1024; n++)
		if (n % 5 == 0 || n % 3 == 0)
			m = m + n;

	printf("%d\n", m);
	return (0);
}
