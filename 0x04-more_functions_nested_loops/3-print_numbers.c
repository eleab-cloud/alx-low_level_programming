#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints number form 0 t 9
 * Return: none
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
