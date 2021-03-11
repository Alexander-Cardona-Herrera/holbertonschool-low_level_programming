#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - prints array
 * @array: name of the person
 * @size: size of the array
 * @cmp: funtion
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i <= size - 1; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	if (size <= 0)
		return (-1);

	return (-1);

}
