#include "main.h"
/**
 *  *string_toupper- change every lower to upper case
 *  @n: the tring
 *  Return: pointer
 */
char *cap_string(char *)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] <= 'z' && n[i] >= 'a')
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
