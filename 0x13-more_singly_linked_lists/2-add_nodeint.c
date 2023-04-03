#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint- add a node at head of list
 * @head: pointer to first node
 * @n: value of the node
 * Return: the pointer to new hed node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));

	if (newhead == NULL)
		return (NULL);
	newhead->n = n;
	newhead->next = (*head);
	(*head) = newhead;
	return (*head);
}
