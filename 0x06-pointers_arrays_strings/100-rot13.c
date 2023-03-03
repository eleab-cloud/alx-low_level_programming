#include "main.h"
/**
 *  *rot13- apply rot 13 on the string
 *  @s: the tring
 *  Return: pointer
 */
char *rot13(char *s)
{
	int i, j;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char nu[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = nu[j];
				break;
			}
		}
	}
	return (s);
}
