#include "lists.h"
#include <stdio.h>
/**
 * listint_len- count the number of elements in a list
 * @h: the pointer to the header
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
