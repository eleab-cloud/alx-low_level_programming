#include "main.h"

/**
 * print_diagsums- fills n bytes of s  with b
 * @a: the array pointer
 * @size: size of the square array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		j = size - 1;
		sum1 = sum1 + a[i * size + (j - i)];
	}
	printf("%d, ", sum);
	printf("%d\n", sum1);
}
