#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked- that allocates memory
 * @b: size
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);
	return (str);
}
