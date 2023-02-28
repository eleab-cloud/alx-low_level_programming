#include "main.h"

/**
 * print_array- prints every other char
 * @a: pointer to an array
 * @n: integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
