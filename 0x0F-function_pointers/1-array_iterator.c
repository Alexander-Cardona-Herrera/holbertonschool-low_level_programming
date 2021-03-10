#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - prints array
 * @array: name of the person
 * @size: size of the array
 * @action: funtion
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)

	for (i = 0; i <= size - 1; i++)
		action(array[i]);

}
