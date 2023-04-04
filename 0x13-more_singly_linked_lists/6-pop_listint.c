#include "lists.h"
/**
 * pop_listint- deletes the head
 * @head: pointer to the head
 * Return: the deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int x;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		x = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (x);
}
