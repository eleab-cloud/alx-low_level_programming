#include "main.h"

/**
 * print_diagsums- fills n bytes of s  with b
 * @a: the array pointer
 * @size: size of the square array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i][i];
	}
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i][size - 1];
		size--;
	}
	printf("%d, ", sum);
	printf("%d", sum1);
}
