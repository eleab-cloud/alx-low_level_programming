#include "main.h"
/**
 *  _strcmp- concatinate two strings
 *  @s1: one string
 *  @s2: the second string
 *  Return: o if equal 15 or -15 if greater or less
 */
int _strcmp(char *s1, char *s2)
{
	int r = 0;

	while (s1[r] != '\0' && s2[r] != '\0')
	{
		if (s1[r] != s2[r])
		{
			return (s1[r] - s2[r]);
		}
		r++;
	}
	return (0);
}
