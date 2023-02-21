#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit of n
 * @n: is char to be checked
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
