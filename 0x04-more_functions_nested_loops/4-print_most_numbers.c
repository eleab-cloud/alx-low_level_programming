#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints most number form 0 t 9
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
