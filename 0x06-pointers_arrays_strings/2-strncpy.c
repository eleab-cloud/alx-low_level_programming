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
	int s = 0;

	while (src[s] != '\0' && s < n)
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}
	return (dest);
}
