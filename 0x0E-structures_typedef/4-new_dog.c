#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initialize the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *pongo;

	for (a = 0; name[a] != '\0'; a++)
		a++;

	for (b = 0; owner[b] != '\0'; b++)
		b++;

	pongo = malloc(sizeof(dog_t));
	if (pongo == NULL)
		return (NULL);

	pongo->name = malloc(a++ * sizeof(pongo->name));
	if (pongo == NULL)
		return (NULL);

	for (c = 0; c < a;  c++)
	{
		pongo->name[c] = name[c];
	}

	pongo->age = age;


	pongo->owner = malloc(b++ * sizeof(pongo->owner));
	if (pongo == NULL)
		return (NULL);

	for (c = 0; c < b;  c++)
	{
		pongo->owner[c] = owner[c];
	}

	return (pongo);
}
