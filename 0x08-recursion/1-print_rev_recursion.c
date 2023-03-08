#include "main.h"
/**
 * _print_rev_recursion- prints a string whithout using loop
 * @s: is the string to be printed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
