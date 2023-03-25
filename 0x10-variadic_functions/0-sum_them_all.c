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
	unsigned int i;

	unsigned int sum = 0;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, unsigned int);
	va_end(args);

	return (sum);
}
