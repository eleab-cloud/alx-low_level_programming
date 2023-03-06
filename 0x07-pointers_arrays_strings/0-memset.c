#include "main.h"

/**
 * _memset- fills n bytes of s  with b
 * @n: the n bytes of s
 * @s: the array
 * @b: the constant char
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
