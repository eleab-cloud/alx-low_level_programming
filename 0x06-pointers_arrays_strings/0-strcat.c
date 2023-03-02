#include "main.h"
/**
 *  *_strcat- concatinate two strings
 *  @dest: one string
 *  @src: the second string
 *  Return: pointer
 */
char  *_strcat(char *dest, char *src)
{
	int i;
	int r = 0;
	int s = 0;

	while (dest[r] != '\0')
	{
		r++;
	}
	while (src[s] != '\0')
	{
		dest[r] = src[s];
		s++;
		r++;
	}
	dest[r] = '\0';
	return (dest);
}
