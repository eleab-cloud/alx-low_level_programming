#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print time tabile
 * @n: number to be considered
 *
 * Return:no return
 */
void print_times_table(int n)
{
	int i;
	int j;
	int x;
	int q = n + 1;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				x = i * j;

				if (j == 0)
					{
						_putchar(x + '0');
					}
				else if (x < 10 && j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(x + '0');
					}
				else if (x >= 10 && j < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(x / 10 + '0');
						_putchar(x % 10 + '0');
					}
				else if (x >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((x / 100) + '0');
						_putchar(((x / 10) % 10) + '0');
						_putchar((x % 10) + '0');
					}
			}
		_putchar('\n');
		}
	}
}
