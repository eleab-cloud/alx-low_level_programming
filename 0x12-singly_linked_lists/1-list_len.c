#include "lists.h"
#include <stdio.h>
/**
 * list_len- counts list length
 * @h: pointer to a stracture list
 * Return: the nember of list elements
 */
size_t list_len(const list_t *h);
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
