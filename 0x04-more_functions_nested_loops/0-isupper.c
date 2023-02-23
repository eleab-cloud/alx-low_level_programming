#include "main.h"
#include <stdio.h>

/**
 * _isupper - tells whether a character is upper case or lower case
 * @c: the input argument to be checked
 * Return: 1 if uper and 0 if lower
 */

int _isupper(int c)
{
	char ch;

	ch = 'c';

	if (ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		return (0);
	}
}
