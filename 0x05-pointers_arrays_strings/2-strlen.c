#include "main.h"

/**
 * _strlen- ceck the length of string
 * @s: the string variable
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
