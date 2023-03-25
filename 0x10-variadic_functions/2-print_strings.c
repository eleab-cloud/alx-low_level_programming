#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - to sum the numbers
 * @separator: the separator between numbers
 * @n: number of numbers to be printed
 * @...: the rest of the arguments
 * Return: the sum of all number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list strings;

	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
