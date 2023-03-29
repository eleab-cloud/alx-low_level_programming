#include <stdlib.h>
#include "dog.h"
/**
 * free_dog- frees memory for dog struct
 * @d: struct dog to be free
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
