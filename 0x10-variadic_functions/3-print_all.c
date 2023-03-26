#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - to sum the numbers
 * @format: a constant pointer to constant char
 * @...: the rest of the arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;

	char *separ = "";

	va_list args;

	char *str;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separ, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", separ, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separ, str);
					break;
				default:
					i++;
					continue;
			}
			separ = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
