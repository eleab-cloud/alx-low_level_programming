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
	int size1, size2;

	char *ns;

	size1 = size2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	ns = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ns == NULL)

		return (NULL);

	size1 = size2 = 0;

	while (s1[size1] != '\0')
	{
		ns[size1] = s1[size1];
		size1++;
	}
	while (s2[size2] != '\0')
	{
		ns[size1] = s2[size2];
		size2++, size1++;
	}
	ns[size1] = '\0';

	return (ns);
}
