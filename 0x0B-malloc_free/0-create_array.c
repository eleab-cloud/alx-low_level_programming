#include <stdio.h>
/**
 * create_array- creates an array
 * @size: size of arry
 * @c: the char
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str;

	str = malloc(sizeof(char) * size);

	if (str == NULL || size == 0)

		return (NULL);

	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);
}
