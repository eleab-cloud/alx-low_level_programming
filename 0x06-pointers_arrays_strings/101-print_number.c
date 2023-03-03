#include "main.h"

/**
 *  print_number- print integer
 *  @n: the integer
 *  Return: nothing
 */
void print_number(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	if (n < 100 && n >=10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n >=100 && n <
}
