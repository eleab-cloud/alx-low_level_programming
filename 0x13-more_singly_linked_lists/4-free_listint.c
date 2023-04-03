#include "lists.h"
/**
 * free_listint- frees a memory
 * @head: pointer to header
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
