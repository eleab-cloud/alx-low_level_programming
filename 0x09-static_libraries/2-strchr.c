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

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
