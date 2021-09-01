#include "search_algos.h"

/**
 * linear_search - compare values in a linear manner.
 * @array: array
 * @size: size of array
 * @value: value to compare
 * Return: count or -1 on error.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count = 0;

	while (count < size)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);

		count++;
	}
	return (-1);
}
