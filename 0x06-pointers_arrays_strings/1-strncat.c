#include "main.h"
/**
 *  *_strcat- concatinate two strings
 *  @dest: one string
 *  @src: the second string
 *  Return: pointer
 */
char  *_strcat(char *dest, char *src)
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
