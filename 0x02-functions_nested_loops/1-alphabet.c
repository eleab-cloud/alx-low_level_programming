#include "main.h"
#include <time.h>
#include <stdio.h>
/**
* print_alphabet - 'prints alphabet a to z'
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
