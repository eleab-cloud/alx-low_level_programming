#include "main.h"

/**
 * print_rev- prints a string
 * @s: the string variable
 * Return: nothing
 */
void print_rev(char *s)
{
	int l = 0;
	int r;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	s--;

	for (r = l; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
