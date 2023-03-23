#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a dog type
 * @d: the struct pointer
 * @name: name pointer
 * @age: the age
 * @owner: the owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}

