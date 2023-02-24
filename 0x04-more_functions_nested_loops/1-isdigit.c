#include "main.h"
#include <stdio.h>
/**
 * _isdigit - tells whether a character is upper case or lower case
 * @c: the input argument to be checked
 * Return: 1 if uper and 0 if lower
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
