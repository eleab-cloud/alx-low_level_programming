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
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
		}
		 _putchar('\n');
	}
}
