#include "lists.h"
#include <stdio.h>
/**
 * print_listint- prints the elements of list
 * @h: a pointer to the header node of the list
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
