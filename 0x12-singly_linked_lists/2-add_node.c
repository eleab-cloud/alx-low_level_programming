#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node- adds new node at head
 * @head: pointer to the first element in the link
 * @str: the node to be added
 * Return: the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;

	unsigned int len = 0;

	while (str[len])
		len++;
	newhead = malloc(sizeof(list_t));

	if (newhead == NULL)
	{
		return (NULL);
	}
	newhead->str = strdup(str);

	newhead->len = len;

	newhead->next = (*head);

	(*head) = newhead;

	return (*head);
}
