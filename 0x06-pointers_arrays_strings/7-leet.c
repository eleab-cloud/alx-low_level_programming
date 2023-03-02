#include "main.h"
/**
 *  *leet- change letters to numbers
 *  @n: the tring
 *  Return: pointer
 */
char *leet(char *n)
{
	int i, j;
	char c = "aAeEoOtTlL";
	cha nu = "4400337711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (n[i] == c[j])
			{
				n[i] = nu[j]
			}
		}
	}
	return (n);
}
