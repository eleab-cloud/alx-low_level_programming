#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - changes binary to unsigned int
 * @b: a pointer to a bit string
 * Return: return the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	int i;

	result = 0;

	i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result <<= 1;
			if (b[i] == '1')
			{
				result = result | 1;
			}
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
