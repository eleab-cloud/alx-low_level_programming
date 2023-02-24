#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints number form 0 t 9
 * Return: none
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
				_putchar(j % 10 + '0');
		}
		 _putchar('\n');
	}
}
