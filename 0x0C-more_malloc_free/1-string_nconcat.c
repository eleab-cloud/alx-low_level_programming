#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat- that allocates memory
 * @s1: first char
 * @s2: second char
 * @n: bytes to be cocatinated
 * Return: a pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int l1 = 1; 
	int l2 = 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
		l1++;
	while (*s2 != '\0')
		l2++;
	str = malloc(l1 + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	int i, j;

	for (i = 0; i < l1; i++)
	{
		str[i] = s1[i];
	}

	while (*s2 != '\0')
	{
		for (j = 0; j < n; j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}