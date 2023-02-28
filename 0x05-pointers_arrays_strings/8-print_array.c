#include "main.h"

/**
 * print_array- prints every other char
 * @a: pointer to an array
 * @n: integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		printf("%d, ", a[i]);
	printf("%d", a[i]);
	}
	_putchar('\n');
}
