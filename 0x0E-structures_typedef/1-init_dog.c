#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize the struct
 * @d: pinter to structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
