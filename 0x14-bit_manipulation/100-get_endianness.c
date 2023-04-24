#include "main.h"
/**
 * get_endianness- check if a machine is little or big
 * Return: 0 for big and 1 for little
 */
int get_endianness(void)
{
	unsigned int i;

	char *c;

	i = 1;

	c = (char *)&i;

	return (*c);
}


