#include "main.h"
/**
 * flip_bits- finds the number of flips
 * @n: the furst number
 * @m: the second number
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;

	unsigned long int exor;

	exor = n ^ m;

	count = 0;
	while (exor != 0)
	{
		count = count + (exor & 1);
		exor = exor >> 1;
	}
return (count);
}
