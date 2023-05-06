#include "main.h"
#include <stddef.h>
/**
 * clear_bit- set the bit at index
 * @n: teh number pointer
 * @index: teh index
 * Return: the bit at index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
