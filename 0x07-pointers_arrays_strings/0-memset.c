#include "main.h"
/**
 * _memset- fills n bytes of s  with b
 * @n: the n bytes of s
 * @s: the array
 * @b: the constant char
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
