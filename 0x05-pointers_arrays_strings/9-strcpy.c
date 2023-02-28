#include "main.h"

/**
 * *_strcpy- prints every other char
 * @src: string to be copies
 * @dest: where copied
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, r;

	r = 0;

	while (src[i] != '\0')
	{
		r++;
	}
	for (i = 0; i < r; r++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}
