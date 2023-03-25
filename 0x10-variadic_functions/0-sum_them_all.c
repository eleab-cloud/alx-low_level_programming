#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - to sum the numbers
 * @n: the number of arguments
 * @...: the rest of the arguments
 * Return: the sum of all number
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	va_end(args);

	return (sum);
}


