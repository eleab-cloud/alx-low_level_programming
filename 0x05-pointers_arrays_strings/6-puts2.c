#include "main.h"

/**
 * puts2- prints every other char
 * @str: the string variable
 * Return: nothing
 */
void puts2(char *str)
{
	int r = 0;
	int i;

	while (str[r] != '\0')
	{
		r++;
	}
	for (i = 0; i < r; i++)
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
