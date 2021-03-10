#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize the struct
 * @d: pinter to structure
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free (d->name);
		free (d->age);
		free (d->owner);
	}

}
