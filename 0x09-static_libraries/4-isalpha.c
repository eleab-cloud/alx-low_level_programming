#include <stdio.h>
/**
 * _isalpha - check if a char is alphabet or not
 * @c: is char to be checked
 * Return: 1 if char is a lettere, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
