#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - initialize the struct
 * @d: pinter to structure
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}

}
