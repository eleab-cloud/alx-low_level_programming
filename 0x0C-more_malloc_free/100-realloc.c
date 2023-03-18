#include <stdio.h>
#include <stdlib.h>
char *assingv(char *oldptr, char *newptr, unsigned int size);

/**
 * _realloc- that allocates memory
 * @ptr: previous memory
 * @old_size: the size of the ptr
 * @new_size: the new sie
 * Return: a pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{

		str = malloc(new_size);

		if (str == NULL)
			return (NULL);
		if (new_size > old_size)
		{
			assingv(ptr, str, old_size);
		}
		else
		{
			assingv(ptr, str, new_size);
		}
		free(ptr);
		return (str);
	}
}

/**
 * assingv- copy ptr to str
 * @oldptr: old pointer
 * @newptr: new pointer
 * @size: size of pointer
 * Return: pointer
 */
char *assingv(char *oldptr, char *newptr, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		newptr[i] = oldptr[i];
	}
	return (newptr);
}
