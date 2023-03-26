#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator- iteratively executes a fucntions
 * @array: to be executed
 * @size: size of the array
 * @action: the function to be called
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i])
	}
}
