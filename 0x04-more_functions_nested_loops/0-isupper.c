#include "main.h"
#include <stdio.h>

/**
 * _isupper: tells whether a character is upper case or lower
 * @c: the inpput argument
 * Return: 1 if uper and 0 if lower
 */

int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
