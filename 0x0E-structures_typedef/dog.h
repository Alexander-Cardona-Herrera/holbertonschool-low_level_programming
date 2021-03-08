#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - first structure
 * return - 0
 */

int _putchar(char c);

struct dog
{
	char *name;
	float age;
	char *owner;
	/* 3 members */
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
