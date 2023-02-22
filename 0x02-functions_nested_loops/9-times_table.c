#include "main.h"
#include <stdio.h>
/**
 * times_table - print time tabile
 *
 * Return:no return
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;

			if (x < 10 && j < 9)
			{
				_putchar(' ');
				_putchar(x + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (x >= 10 && j < 9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (x < 10 && j > 8)
			{
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (x >= 10 && j > 8)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
