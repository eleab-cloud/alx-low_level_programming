#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end- adds new node at head
 * @head: pointer to the first element in the link
 * @str: the node to be added
 * Return: the new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	list_t *temp = *head;

	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	new->len = len;

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
