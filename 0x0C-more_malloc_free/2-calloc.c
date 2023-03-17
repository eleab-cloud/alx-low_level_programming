#include <stdio.h>
#include <stdlib.h>
void *setoo(char *pter,char  b, int size);
/**
 * _calloc- that allocates memory
 * @nmemb:no of elements of array
 * @size: size of teh element
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		char *ptr;

		ptr = malloc(nmemb * size);

		if (ptr == NULL)
			return (NULL);
	setoo(ptr, 0, nmemb * size);
	return (ptr);
	}
}
/**
 * setoo- to set to zero
 * @pter: pointer of array
 * @b: value to be seted to
 * @size: size of the array
 * Return: a pointer to allocated memory
 */
void *setoo(char *pter, char b, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		pter[i] = b;
	}
	return (pter);
}
