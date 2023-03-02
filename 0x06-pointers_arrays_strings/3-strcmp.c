#include "main.h"
/**
 *  _strcmp- concatinate two strings
 *  @s1: one string
 *  @s2: the second string
 *  Return: o if equal 15 or -15 if greater or less
 */
int _strcmp(char *s1, char *s2);
{
	int r = 0;

	int s = 0;

	while (s1[r] != '\0')
	{
		r++;
	}
	while (s2[s] != '\0')
	{
		s++;
	}
	if (r == s)
	{
		return (0);
	}
	else if (r < s)
	{
		return (-15);
	}
	else if (r > s)
	{
		return (15);
	}
}
