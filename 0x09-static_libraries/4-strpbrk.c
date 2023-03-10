#include "main.h"

/**
 * _strpbrk- fills n bytes of s  with b
 * @s: the string
 * @accept: the string whose char to be found
 * Return: the pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
