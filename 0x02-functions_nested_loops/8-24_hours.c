#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print time
 *
 * Return:no return
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(48 + i);
			_putchar(':');
			_putchar(48 + j);
		}
	}
	_putchar('\n');
}
