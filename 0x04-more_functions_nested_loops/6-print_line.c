#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line
 * @n: input para
 * Return: none
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
