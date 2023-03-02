#include "main.h"
/**
 *  *_strncat- concatinate two strings
 *  @dest: one string
 *  @src: the second string
 *  @n: teh atmost byte
 *  Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int r = 0;

	int s = 0;

	while (dest[r] != '\0')
	{
		r++;
	}
	for (s = r; s < (r + n); s++)
	{
		dest[r] = src[s];
		r++;
	}
	return (dest);
}
