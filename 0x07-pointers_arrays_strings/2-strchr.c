#include "main.h"

/**
 * _strchr- fills n bytes of s  with b
 * @s: the string
 * @c: the char to be found
 * Return: the pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		i++;
	}
	return (0);
}
