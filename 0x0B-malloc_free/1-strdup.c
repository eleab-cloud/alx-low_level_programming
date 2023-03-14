#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup- creates an array
 * @str: a pointer
 * Return: a pointer to the array
 */
char *_strdup(char *str)
{
	unsigned int i, size;

	char *ns;

	size = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		size++;
	}

	ns = malloc(sizeof(char) * (size + 1));

	if (ns == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)

			ns[i] = str[i];

	return (ns);
	}
}
