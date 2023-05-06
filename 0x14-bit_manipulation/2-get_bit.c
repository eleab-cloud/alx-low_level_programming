#include "main.h"
/**
 * get_bit- get the bit at index
 * @n: teh number
 * @index: teh index
 * Return: the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
