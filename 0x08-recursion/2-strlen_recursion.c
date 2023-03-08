#include "main.h"
/**
 * _strlen_recursion- prints a string whithout using loop
 * @s: is the string to be printed
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
