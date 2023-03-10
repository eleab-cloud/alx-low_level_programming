#include "main.h"
/**
 *  *_strncpy- copy
 *  @dest: one string
 *  @src: the second string
 *  @n: the char
 *  Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
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
