#include "lists.h"
#include <stdio.h>
/**
 * print_list- prints lists
 * @h: pointer to a stracture list
 * Return: the nember of list elements
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
