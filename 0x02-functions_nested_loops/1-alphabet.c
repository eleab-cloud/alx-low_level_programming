#include "main.h"
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'prints alphabet a to z'
* Return: Always 0 (Success)
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
