#include <stdio.h>
#include <stdlib.h>
int *setoo(int *pter, int b, int size);
/**
 * array_range- that allocates memory
 * @min: no of elements of array
 * @max: size of teh element
 * Return: a pointer to allocated memory
 */
int *array_range(int min, int max)
{
	if (min >= max)
	{
		return (NULL);
	}
	else
	{
		int *ptr;

		ptr = malloc(sizeof(int) * (max - min + 1));

		if (ptr == NULL)
			return (NULL);
	setoo(ptr, min, max - min + 1);
	return (ptr);
	}
}
/**
 * setoo- to set to zero
 * @pter: pointer of array
 * @b: the minimum
 * @size: size of the array
 * Return: a pointer to allocated memory
 */
int *setoo(int *pter, int b,  int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		pter[i] = b;
		b++;
	}
	return (pter);
}
