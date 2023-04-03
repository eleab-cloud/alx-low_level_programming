#include "lists.h"
/**
 * free_listint2- frees a list
 * @head: a pointer of pointer to head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
