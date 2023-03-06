#include "main.h"

/**
 * *_memset- fills n bytes of s  with b
 * @n: the n bytes of s
 * @s: the array
 * @b: the constant char
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
