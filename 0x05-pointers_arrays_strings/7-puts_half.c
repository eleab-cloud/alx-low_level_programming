#include "main.h"

/**
 * puts_half- prints every other char
 * @str: the string variable
 * Return: nothing
 */
void puts_half(char *str)
{
	int r = 0;
	int i;

	while (str[r] != '\0')
	{
		r++;
	}
	if (r % 2 == 0)
	{
		for (i = (r / 2); i < r; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((r - 1) / 2); i < r; i--)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
