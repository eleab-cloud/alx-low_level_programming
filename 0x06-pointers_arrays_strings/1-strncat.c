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
	while (src[s] != '\0' && s <= n)
	{
		dest[r] = src[s];
		r++;
		s++;
	}
	return (dest);
}
