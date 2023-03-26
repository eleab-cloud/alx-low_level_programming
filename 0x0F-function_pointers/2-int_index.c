#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index- returns a non integer
 * @array: to be executed
 * @size: size of the array
 * @cmp: the function to be called
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
		else
			return (-1);
	}
}
