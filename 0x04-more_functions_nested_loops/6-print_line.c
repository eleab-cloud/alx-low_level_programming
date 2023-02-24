#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line
 * @n: input para
 * Return: none
 */
void print_line(int n)
{

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
		putchar('\n');
	}
	 _putchar('\n');
}
