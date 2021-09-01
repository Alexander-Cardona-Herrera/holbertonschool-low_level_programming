#include "search_algos.h"

/**
 * binary_search - compare values in a binary manner.
 * @array: array
 * @size: size of array
 * @value: value to compare
 * Return: count or -1 on error.
 */

int binary_search(int *array, size_t size, int value)
{
	int mid;
	int count;
	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		count = low;

		printf("Searching in array: ");
		while (count <= high)
		{
			if (count < high)
				printf("%d, ", count);
			else
				printf("%d\n", count);
			count++;
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
