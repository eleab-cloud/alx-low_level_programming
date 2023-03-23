#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints print dog type
 * @d: a pointer to struct dog type
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name:%s\nAge: %S\nOwner: %s\n", d->name, d->age, d->owner);
}

