#include "main.h"

/**
 * _memcpy- copy n bytes of s  with b
 * @dest: the destination
 * @src: the source
 * @n: the n bytes
 * Return: the pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
