#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end
 * @head: pointer to head of a struct node
 * @n: an element of a node
 * Return: pointer to the list head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newtail;

	listint_t *temp;

	temp = *head;

	newtail = malloc(sizeof(listint_t));
	if (newtail == NULL)
	{
		return (NULL);
	}
	newtail->n = n;
	newtail->next = NULL;
	if (*head == NULL)
	{
		*head = newtail;
		return (newtail);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newtail;
	return (newtail);
}
