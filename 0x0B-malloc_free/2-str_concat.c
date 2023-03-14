#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat- concatinate two strings
 * @s1: a pointer
 * @s2: another ponter
 * Return: a pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;

	char *ns;

	size1, size2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	ns = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ns == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size1; i++)
	{
		ns[i] = s1[i];
	}
	for (i = size1 + 1; s2[size2]; i++)
	{
		ns[i] = s2[size2];
		size2++;
	}
	ns[i] = '\0';

	return (ns);
}
